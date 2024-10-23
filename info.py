import Jetson.GPIO as GPIO
import time

# 定义引脚编号
# beep: 18
beep_pin = 18

# 设置GPIO模式为BOARD
GPIO.setmode(GPIO.BOARD)

# 配置引脚为输
GPIO.setup(beep_pin, GPIO.OUT)

# 打开蜂鸣器LOW
GPIO.output(beep_pin, GPIO.LOW)
print("Beep started for 1 second.")

# 持续1秒
time.sleep(1)

# 关闭蜂鸣器
GPIO.output(beep_pin, GPIO.HIGH)
print("Beep stopped.")

# 清理GPIO资源
GPIO.cleanup()
print("GPIO cleaned up. Exiting program.")