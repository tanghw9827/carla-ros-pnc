# aplollo_ros_pnc
在carla_ros_bridge上部署apollo规控算法
# 简介
使用Carla和ros2部署apollo规划控制算法，并在carla_ad_demo场景中运行。
# 环境配置
Ubuntu20.04（用的WSL2）   
ros2-foxy   
Carla-0.9.13  
osqp0.6.3  
osqp-eigen0.8.0   
matplot++最新版本   
# 算法实现
控制算法：纵向串级PID，横向LQR，横纵向MPC
规划算法：参考线OSQP平滑，路径DP+QP，速度DP+QP
# 使用方法  
源代码：my_planning_and_control文件夹 
运行案例：carla_ad_demo(这是carla-ros-bridge里自带的案例)
运行指令为    
colcon build  
. install/setup.bash  
ros2 launch carla_ad_demo carla_ad_demo.launch.py  
# 效果展示
