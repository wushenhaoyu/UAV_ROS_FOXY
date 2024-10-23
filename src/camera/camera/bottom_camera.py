import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
import cv2
from cv_bridge import CvBridge
import numpy as np
from geometry_msgs.msg import Point  # 使用 Point 消息类型来发布偏差值
import Jetson.GPIO as GPIO
import time

class BottomCamera(Node):
    def __init__(self):
        super().__init__('bottom_camera')
        self.bridge = CvBridge()
        self.cap = cv2.VideoCapture(0)  # 直接使用 OpenCV 打开摄像头
        self.timer = self.create_timer(0.1, self.timer_callback)  # 每秒10帧
        self.deviation_pub = self.create_publisher(Point, 'deviations', 10)
        self.x_dev = None
        self.y_dev = None

        # 设置 GPIO
        self.setup_gpio()

    def setup_gpio(self):
        # 定义引脚编号
        # laser: 7   beep: 18
        GPIO.setmode(GPIO.BOARD)
        self.output_pin = [7, 18]
        GPIO.setup(self.output_pin, GPIO.OUT)

    def timer_callback(self):
        ret, cv_image = self.cap.read()
        if not ret:
            self.get_logger().error('Failed to grab frame')
            return

        frame_with_contours = self.detect_and_draw_green_contours(cv_image)
        dx, dy = self.calculate_deviations(frame_with_contours)

        # 发布偏差值
        deviation_msg = Point()
        deviation_msg.x = float(dx)
        deviation_msg.y = float(dy)
        self.deviation_pub.publish(deviation_msg)
        self.get_logger().info(f'Deviation: (dx={dx}, dy={dy})')
        # 判断图像中心是否在矩形内
        self.check_center_in_rectangle(dx, dy)

    def detect_and_draw_green_contours(self, frame):
        # 转换到HSV颜色空间
        hsv = cv2.cvtColor(frame, cv2.COLOR_BGR2HSV)
        # 定义绿色的HSV范围
        lower_black = np.array([0, 0, 0])
        upper_black = np.array([200, 120, 80])

        # 根据HSV范围创建掩码
        mask = cv2.inRange(hsv, lower_black, upper_black)

        # 膨胀和侵蚀操作，去除噪声
        mask = cv2.morphologyEx(mask, cv2.MORPH_OPEN, np.ones((3,3), np.uint8))
        # 寻找轮廓
        contours, _ = cv2.findContours(mask, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
        
        max_area = 0
        index = -1
        for c in range(len(contours)):
            approx = cv2.approxPolyDP(contours[c], 0.02 * cv2.arcLength(contours[c], True), True)
            if len(approx) == 4:  # 判断是否是四边形
                area = cv2.contourArea(contours[c])
                if area > max_area:
                    max_area = area
                    index = c
        if index >= 0:
            # 获取最大轮廓的边界矩形框
            x, y, w, h = cv2.boundingRect(contours[index])
            # 检查矩形尺寸是否大于40个像素
            if w > 100 and h > 100:
                # 用红色矩形框标记轮廓
                #cv2.rectangle(frame, (x, y), (x + w, y + h), (0, 0, 255), 2)
                # 存储矩形的中心坐标
                self.x_dev = x + w // 2
                self.y_dev = y + h // 2
            else:
                self.x_dev = 5000
                self.y_dev = 5000
        return frame

    def calculate_deviations(self, frame):
        if self.x_dev is None or self.y_dev is None:
            return 0, 0
        self.height, self.width = frame.shape[:2]
        image_center_x = self.width // 2
        image_center_y = self.height // 2
        
        dx = self.x_dev - image_center_x
        dy = self.y_dev - image_center_y

        return dx, dy

    def check_center_in_rectangle(self, dx, dy):
        # 判断图像中心是否在矩形内
        if self.x_dev is not None and self.y_dev is not None:
            if (abs(dx) <= 250) and (abs(dy) <= 250):
                # 使能激光器和蜂鸣器
                GPIO.output(self.output_pin[0], GPIO.HIGH)
                GPIO.output(self.output_pin[1], GPIO.LOW)
            else:
                # 禁用激光器和蜂鸣器
                GPIO.output(self.output_pin[0], GPIO.LOW)
                GPIO.output(self.output_pin[1], GPIO.HIGH)

def main(args=None):
    rclpy.init(args=args)
    image_processor = BottomCamera()
    try:
        rclpy.spin(image_processor)
    except KeyboardInterrupt:
        GPIO.cleanup()  # 清理GPIO资源
    finally:
        image_processor.destroy_node()
        cv2.VideoCapture(0).release()  # 释放摄像头资源
        rclpy.shutdown()

if __name__ == '__main__':
    main()