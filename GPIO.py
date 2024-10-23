import Jetson.GPIO as GPIO
import time
# 定义引脚编号
# laser: 7   beep: 18
GPIO.setmode(GPIO.BOARD)
output_pin = [7, 18]

# 配置引脚为输出模式
GPIO.setup(output_pin, GPIO.OUT)

# 示例：控制激光器和蜂鸣器
try:
    while True:
        # 打开激光器和蜂鸣器
        GPIO.output(7, GPIO.HIGH)
        GPIO.output(18, GPIO.HIGH)
        time.sleep(1)  # 持续1秒

        # 关闭激光器和蜂鸣器
        GPIO.output(7, GPIO.LOW)
        GPIO.output(18, GPIO.LOW)
        time.sleep(1)  # 持续1秒
except KeyboardInterrupt:
    # 清理GPIO资源
    GPIO.cleanup()