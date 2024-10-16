#!/usr/bin/env python3
import serial
import struct
from scipy.spatial.transform import Rotation as R
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Imu
from tf2_ros import StaticTransformBroadcaster, TransformStamped


class SerialDataReceiver(Node):
    def __init__(self):
        super().__init__('serial_data_receiver')
        self.get_logger().info('Starting IMU data receiver')
        self.imu_publisher = self.create_publisher(Imu, 'imu/data', 10)
        self.serial_port = serial.Serial('/dev/imu', 115200, timeout=1)
        self.buffer = bytearray()
        self.receiving = False
        self.timer = self.create_timer(0.001, self.read_and_publish_imu_data)
        self.length = 0
        self.func = 0
        self.current = 0

    def read_and_publish_imu_data(self):
        while self.serial_port.in_waiting > 0:
            byte = self.serial_port.read(1)
            if not self.receiving and byte == b'\xAA':
                self.receiving = True
                self.buffer.clear()
                self.func = 0
                self.current = 0
                self.length = 0

                #self.buffer.extend(byte)
            elif self.receiving:
                if self.current == 0:
                    self.func = int.from_bytes(byte, byteorder='big')
                    self.current = self.current + 1
                elif self.current == 1:
                    self.length = int.from_bytes(byte, byteorder='big')
                    self.current = self.current + 1
                elif self.current - 2 < self.length:
                    self.buffer.extend(byte)
                    self.current = self.current + 1
                elif self.current - 2 == self.length:
                    if byte == b'\xAF':
                        self.receiving = False
                        self.deal_with_data(self.func,self.length,self.buffer)
                    else:
                        self.receiving = False


    def deal_with_data(self,func,length,data):
        if func == 1:
            if length == 40:
                self.process_imu_data(data)
            else:
                self.get_logger().warn('Received data packet is not the expected length.')


    def process_imu_data(self, data):
        try:
            unpacked_data = struct.unpack('<10f', data)
            imu_msg = Imu()
            imu_msg.header.frame_id = 'laser'
            imu_msg.header.stamp = self.get_clock().now().to_msg()
            
            # 加速度数据
            imu_msg.linear_acceleration.x = unpacked_data[0] * 0.01
            imu_msg.linear_acceleration.y = unpacked_data[1] * 0.01
            imu_msg.linear_acceleration.z = unpacked_data[2] * 0.01
            
            # 角速度数据
            imu_msg.angular_velocity.x = unpacked_data[3] * 0.01
            imu_msg.angular_velocity.y = unpacked_data[4] * 0.01
            imu_msg.angular_velocity.z = unpacked_data[5] * 0.01

            
            # 欧拉角转换为四元数
            imu_msg.orientation.x = unpacked_data[6]
            imu_msg.orientation.y = unpacked_data[7]
            imu_msg.orientation.z = unpacked_data[8]
            imu_msg.orientation.w = unpacked_data[9]
            self.imu_publisher.publish(imu_msg)
        except struct.error:
            self.get_logger().error('Failed to unpack data, unexpected format or length.')


def main(args=None):
    rclpy.init(args=args)
    node = SerialDataReceiver()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()