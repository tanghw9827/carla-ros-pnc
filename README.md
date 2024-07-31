# 项目简介
使用 Carla 和 ROS2 部署 Apollo 规划控制算法，并在 carla_ad_demo 场景中运行

# 环境配置
- Ubuntu 20.04  
- ROS2 Foxy   
- Carla 0.9.13  
- osqp 0.6.3  
- osqp-eigen 0.8.0   
- matplot++ 最新版本   

# 算法实现
- 控制算法：纵向串级 PID，横向 LQR，横纵向 MPC 
- 规划算法：参考线 OSQP 平滑，路径 DP+QP，速度 DP+QP

# 目录结构
```plaintext
my_planning_and_control  
├── controller_modules
│   ├── CMakeLists.txt
│   ├── include
│   │   ├── lateral_lqr_controller.h
│   │   ├── lon_cascade_pid_controller.h
│   │   ├── mpc_controller.h
│   │   └── pid_controller.h
│   ├── package.xml
│   └── src
│       ├── lateral_lqr_controller.cpp
│       ├── lon_cascade_pid_controller.cpp
│       ├── mpc_controller.cpp
│       └── pid_controller.cpp
├── general_modules
│   ├── CMakeLists.txt
│   ├── include
│   │   ├── common.h
│   │   ├── polynomial_curve.h
│   │   └── tool.hpp
│   ├── package.xml
│   └── src
│       ├── common.cpp
│       ├── polynomial_curve.cpp
│       └── tool.cpp
├── main_function
│   ├── CMakeLists.txt
│   ├── include
│   │   ├── control_agent.h
│   │   └── planning_agent.h
│   ├── launch
│   │   └── my_pnc_launch.py
│   ├── package.xml
│   └── src
│       ├── control_agent.cpp
│       └── planning_agent.cpp
└── planner_modules
    ├── CMakeLists.txt
    ├── include
    │   ├── emplanner.h
    │   └── reference_line.h
    ├── package.xml
    └── src
        ├── emplanner.cpp
        ├── emplanner_node.cpp
        ├── emplanner_path_planning.cpp
        ├── emplanner_speed_planning.cpp
        └── reference_line.cpp
```
# 使用方法  
运行案例：carla_ad_demo\
运行命令:
```plaintext
colcon build
. install/setup.bash
ros2 launch carla_ad_demo carla_ad_demo.launch.py  
```
# 效果展示
# 版本更新说明
- v1.0.0: 实现纵向串级PID，横向LQR，横纵向MPC，参考线OSQP平滑，路径DP+QP，速度DP+QP