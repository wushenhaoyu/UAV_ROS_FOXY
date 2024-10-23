import rclpy
from rclpy.node import Node
from rclpy.executors import ExternalShutdownException
import tf2_ros
from geometry_msgs.msg import TransformStamped
from sensor_msgs.msg import Imu

class TFPublisher(Node):
    def __init__(self):
        super().__init__('tf_publisher')
        self.tf_broadcaster = tf2_ros.TransformBroadcaster(self)
        self.imu_sub = self.create_subscription(
            Imu,
            'imu/data',
            self.imu_callback,
            10)
        self.timer = self.create_timer(0.1, self.publish_tf)

    def imu_callback(self, msg):
        self.orientation = msg.orientation

    def publish_tf(self):
        t = TransformStamped()
        t.header.stamp = self.get_clock().now().to_msg()
        t.header.frame_id = 'map'  # 地图框架
        t.child_frame_id = 'camera_pose_frame'  # 机器人框架

        # 设置变换的平移部分
        t.transform.translation.x = 0.0  # x 轴位置
        t.transform.translation.y = 0.0  # y 轴位置
        t.transform.translation.z = 0.0  # z 轴位置

        # 从IMU数据中获取旋转部分
        if hasattr(self, 'orientation'):
            t.transform.rotation = self.orientation

        self.tf_broadcaster.sendTransform(t)

def main(args=None):
    try:
        rclpy.init(args=args)
        tf_publisher = TFPublisher()
        rclpy.spin(tf_publisher)
    except ExternalShutdownException:
        pass
    finally:
        tf_publisher.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()