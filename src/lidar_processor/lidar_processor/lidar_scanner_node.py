import rclpy
from rclpy.node import Node
from sensor_msgs.msg import LaserScan

class LidarScannerNode(Node):
    def __init__(self):
        super().__init__('lidar_scanner_node')
        self.subscription = self.create_subscription(
            LaserScan,
            '/scan',
            self.scan_callback,
            10)
        self.publisher = self.create_publisher(LaserScan, '/my_scan', 1)

    def scan_callback(self, msg):
        new_msg = LaserScan()
        new_msg = msg  # Copy the message
        new_msg.header.stamp = self.get_clock().now().to_msg()  # Set the current time as the timestamp
        self.publisher.publish(new_msg)

def main(args=None):
    rclpy.init(args=args)
    node = LidarScannerNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()