#! /bin/bash
source /home/jetson/Desktop/cartographer_ws/install/setup.bash
cd /home/jetson/Desktop/cartographer_ws/
ros2 launch lslidar_driver lsn10_launch.py
