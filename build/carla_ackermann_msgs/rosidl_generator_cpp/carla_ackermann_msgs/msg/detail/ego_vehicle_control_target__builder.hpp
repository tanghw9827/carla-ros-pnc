// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carla_ackermann_msgs:msg/EgoVehicleControlTarget.idl
// generated code does not contain a copyright notice

#ifndef CARLA_ACKERMANN_MSGS__MSG__DETAIL__EGO_VEHICLE_CONTROL_TARGET__BUILDER_HPP_
#define CARLA_ACKERMANN_MSGS__MSG__DETAIL__EGO_VEHICLE_CONTROL_TARGET__BUILDER_HPP_

#include "carla_ackermann_msgs/msg/detail/ego_vehicle_control_target__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carla_ackermann_msgs
{

namespace msg
{

namespace builder
{

class Init_EgoVehicleControlTarget_jerk
{
public:
  explicit Init_EgoVehicleControlTarget_jerk(::carla_ackermann_msgs::msg::EgoVehicleControlTarget & msg)
  : msg_(msg)
  {}
  ::carla_ackermann_msgs::msg::EgoVehicleControlTarget jerk(::carla_ackermann_msgs::msg::EgoVehicleControlTarget::_jerk_type arg)
  {
    msg_.jerk = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carla_ackermann_msgs::msg::EgoVehicleControlTarget msg_;
};

class Init_EgoVehicleControlTarget_accel
{
public:
  explicit Init_EgoVehicleControlTarget_accel(::carla_ackermann_msgs::msg::EgoVehicleControlTarget & msg)
  : msg_(msg)
  {}
  Init_EgoVehicleControlTarget_jerk accel(::carla_ackermann_msgs::msg::EgoVehicleControlTarget::_accel_type arg)
  {
    msg_.accel = std::move(arg);
    return Init_EgoVehicleControlTarget_jerk(msg_);
  }

private:
  ::carla_ackermann_msgs::msg::EgoVehicleControlTarget msg_;
};

class Init_EgoVehicleControlTarget_speed_abs
{
public:
  explicit Init_EgoVehicleControlTarget_speed_abs(::carla_ackermann_msgs::msg::EgoVehicleControlTarget & msg)
  : msg_(msg)
  {}
  Init_EgoVehicleControlTarget_accel speed_abs(::carla_ackermann_msgs::msg::EgoVehicleControlTarget::_speed_abs_type arg)
  {
    msg_.speed_abs = std::move(arg);
    return Init_EgoVehicleControlTarget_accel(msg_);
  }

private:
  ::carla_ackermann_msgs::msg::EgoVehicleControlTarget msg_;
};

class Init_EgoVehicleControlTarget_speed
{
public:
  explicit Init_EgoVehicleControlTarget_speed(::carla_ackermann_msgs::msg::EgoVehicleControlTarget & msg)
  : msg_(msg)
  {}
  Init_EgoVehicleControlTarget_speed_abs speed(::carla_ackermann_msgs::msg::EgoVehicleControlTarget::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_EgoVehicleControlTarget_speed_abs(msg_);
  }

private:
  ::carla_ackermann_msgs::msg::EgoVehicleControlTarget msg_;
};

class Init_EgoVehicleControlTarget_steering_angle
{
public:
  Init_EgoVehicleControlTarget_steering_angle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EgoVehicleControlTarget_speed steering_angle(::carla_ackermann_msgs::msg::EgoVehicleControlTarget::_steering_angle_type arg)
  {
    msg_.steering_angle = std::move(arg);
    return Init_EgoVehicleControlTarget_speed(msg_);
  }

private:
  ::carla_ackermann_msgs::msg::EgoVehicleControlTarget msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carla_ackermann_msgs::msg::EgoVehicleControlTarget>()
{
  return carla_ackermann_msgs::msg::builder::Init_EgoVehicleControlTarget_steering_angle();
}

}  // namespace carla_ackermann_msgs

#endif  // CARLA_ACKERMANN_MSGS__MSG__DETAIL__EGO_VEHICLE_CONTROL_TARGET__BUILDER_HPP_
