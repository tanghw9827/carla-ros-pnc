# 项目简介
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
# 目录结构
my_planning_and_control  
├── carla_ad_demo  
│   ├── launch  
│   │   └── carla_ad_demo.launch.py  
│   ├── config  
│   │   └── carla_ad_demo.yaml  
│   ├── scripts  
│   │   ├── carla_control.py  
│   │   ├── carla_planning.py  
│   │   ├── carla_utils.py  
│   │   └── carla_waypoint_publisher.py  
│   ├── worlds  
│   │   └── carla_ad_demo.world  
│   ├── README.md  
│   └── package.xml  
├── README.md  
└── requirements.txt  
# 使用方法  
源代码：my_planning_and_control文件夹 
运行案例：carla_ad_demo(这是carla-ros-bridge里自带的案例)
运行指令为:colcon build  
. install/setup.bash  
ros2 launch carla_ad_demo carla_ad_demo.launch.py  
# 效果展示
# 版本更新说明
v1.0.0:
 实现纵向串级PID，横向LQR，横纵向MPC，参考线OSQP平滑，路径DP+QP，速度DP+QP