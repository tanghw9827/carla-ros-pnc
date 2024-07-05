#pragma once
#include "Eigen/Dense"
#include "OsqpEigen/OsqpEigen.h"
#include "common.h"
#include "rclcpp/rclcpp.hpp"
#include "rclcpp/logger.hpp"
#include "tool.hpp"
#include "pid_controller.h"


class MPCController
{
public:
    MPCController();

    // 计算控制指令
    bool compute_control_cmd(
        const std::vector<TrajectoryPoint>& trajectory,
        const std::shared_ptr<VehicleState>& ego_state,
        const double cur_t, const double dt,
        ControlCMD & cmd
    );

    // 设置Q矩阵
    void set_matrix_Q(const std::vector<double>& vector_Q);

    // 设置R矩阵
    void set_matrix_R(const std::vector<double>& vectro_R);



private:
    // 计算目标点
    void compute_target_point(const std::vector<TrajectoryPoint>& trajectory,
                              const double predicted_time,
                              TrajectoryPoint& target_point, double& target_point_s);

    // 更新状态向量
    void update_state(const std::vector<TrajectoryPoint>& trajectory,
                      const std::shared_ptr<VehicleState>& ego_state,
                      const double predicted_time);

    // 更新矩阵
    void update_matrix(const double ego_v, const double dt);

    // 求解MPC的二次规划问题
    bool solve_mpc();

    // 求解前馈
    double compute_feedforward(const double ego_v);

private:
    // ------------------车身相关--------------------
    // 前轮(两个轮之和)侧偏刚度系数
    double _cf = -155494.663; 
    // 后轮侧偏刚度系数
    double _cr = -155494.663; 
    // 质量
    double _m = 1845.0;  
    // 质心到车前轴的距离
    double _lf = 2.852/2.0; 
    // 质心到车后轴的距离
    double _lr = 2.852/2.0; 
    // 车身转动惯量
    double _Iz;
    // 加速度上下限
    double _amin = -6.0;
    double _amax = 4.0;
    // 方向盘转角上下限
    double _steer_min = -1.0;
    double _steer_max = 1.0;

    // 这些都是在不同模块之间传递数据用的,如果感觉麻烦,可以单独封装一个类,用来存储这些消息
    // 参考加速度与曲率
    double _ref_acc; // 计算控制指令时使用
    double _ref_kappa;// 计算前馈时使用
    // 当前车辆纵向加速度
    double _real_acc;

    // ------------------状态空间方程相关--------------------
    // 状态向量维数
    const int _state_dim = 6;
    // 输入向量维数
    const int _control_dim = 2;
    // 状态矩阵
    Eigen::MatrixXd _matrix_A;
    // 离散状态矩阵
    Eigen::MatrixXd _matrix_Ad;
    // 输入矩阵
    Eigen::MatrixXd _matrix_B;
    // 离散输入矩阵
    Eigen::MatrixXd _matrix_Bd;
    // 状态向量
    Eigen::MatrixXd _matrix_state;
    // 输入向量
    Eigen::MatrixXd _matrix_control;
    // Q矩阵
    Eigen::MatrixXd _matrix_Q;
    // R矩阵
    Eigen::MatrixXd _matrix_R;

    // ------------------MPC求解器相关--------------------
    // 预测步长
    const int _horizon = 20;
    // 日志类
    rclcpp::Logger _log;
    // 前视距离
    double _preview_window = 5;
    // 求解器
    std::unique_ptr<OsqpEigen::Solver> _mpc_solver;
    // 加速度PID控制器

};

