import rclpy
from rclpy.node import Node
import tf2_ros
from geometry_msgs.msg import TransformStamped

class TFPublisher(Node):
    def __init__(self):
        super().__init__('tf_publisher')
        self.tf_broadcaster = tf2_ros.TransformBroadcaster(self)
        self.timer = self.create_timer(0.1, self.publish_tf)

    def publish_tf(self):
        t = TransformStamped()
        t.header.stamp = self.get_clock().now().to_msg()
        t.header.frame_id = 'map'         # 地图框架
        t.child_frame_id = 'base_link'    # 机器人框架

        # 设置变换的平移和旋转，依据实际情况进行调整
        t.transform.translation.x = 0.0    # x 轴位置
        t.transform.translation.y = 0.0    # y 轴位置
        t.transform.translation.z = 0.0    # z 轴位置
        t.transform.rotation.x = 0.0       # x 轴旋转
        t.transform.rotation.y = 0.0       # y 轴旋转
        t.transform.rotation.z = 0.0       # z 轴旋转
        t.transform.rotation.w = 1.0       # w 轴旋转
        
        self.tf_broadcaster.sendTransform(t)

def main(args=None):
    rclpy.init(args=args)
    tf_publisher = TFPublisher()
    rclpy.spin(tf_publisher)
    tf_publisher.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
