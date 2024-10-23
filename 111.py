import cv2
import numpy as np

def detect_and_draw_green_contours(frame):
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
    # 绘制轮廓
    max_area = 0
    index = -1
    # for contour in contours:
    #     approx = cv2.approxPolyDP(contour, 0.02 * cv2.arcLength(contour, True), True)
    #     if len(approx) == 4:  # 判断是否是四边形
    #         pass
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
            cv2.rectangle(frame, (x, y), (x + w, y + h), (0, 0, 255), 2)
            # 计算并打印最大矩形的中心点坐标
            center_x = int(x + w / 2)
            center_y = int(y + h / 2)
            cv2.circle(frame, (center_x, center_y), 2, (0, 0, 255), 3)
            # 打印图像中心的坐标
            height, width = frame.shape[:2]
            image_center_x = int(width / 2)
            image_center_y = int(height / 2)

            # 计算并打印中心点之间的差值
            dx = center_x - image_center_x
            dy = center_y - image_center_y
            print(f"中心点差值: (dx={dx}, dy={dy})")
            print(w, h)

    cv2.imshow('mask', mask)

    return frame

# 捕获视频流
cap = cv2.VideoCapture(0)

while True:
    ret, frame = cap.read()
    if not ret:
        break

    # 检测并绘制绿色轮廓
    frame_with_contours = detect_and_draw_green_contours(frame)
    a = 250
    cv2.rectangle(frame_with_contours, (640-a, 360-a), (640+a, 360+a), (0, 255, 0), 2)

    # 显示结果
    cv2.imshow('Frame', frame_with_contours)

    # 按'q'退出循环
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

# 释放摄像头资源并关闭所有窗口
cap.release()
cv2.destroyAllWindows()