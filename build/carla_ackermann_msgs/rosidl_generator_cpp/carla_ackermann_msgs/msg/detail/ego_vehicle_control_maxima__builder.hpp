// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carla_ackermann_msgs:msg/EgoVehicleControlMaxima.idl
// generated code does not contain a copyright notice

#ifndef CARLA_ACKERMANN_MSGS__MSG__DETAIL__EGO_VEHICLE_CONTROL_MAXIMA__BUILDER_HPP_
#define CARLA_ACKERMANN_MSGS__MSG__DETAIL__EGO_VEHICLE_CONTROL_MAXIMA__BUILDER_HPP_

#include "carla_ackermann_msgs/msg/detail/ego_vehicle_control_maxima__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carla_ackermann_msgs
{

namespace msg
{

namespace builder
{

class Init_EgoVehicleControlMaxima_max_pedal
{
public:
  explicit Init_EgoVehicleControlMaxima_max_pedal(::carla_ackermann_msgs::msg::EgoVehicleControlMaxima & msg)
  : msg_(msg)
  {}
  ::carla_ackermann_msgs::msg::EgoVehicleControlMaxima max_pedal(::carla_ackermann_msgs::msg::EgoVehicleControlMaxima::_max_pedal_type arg)
  {
    msg_.max_pedal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carla_ackermann_msgs::msg::EgoVehicleControlMaxima msg_;
};

class Init_EgoVehicleControlMaxima_min_accel
{
public:
  explicit Init_EgoVehicleControlMaxima_min_accel(::carla_ackermann_msgs::msg::EgoVehicleControlMaxima & msg)
  : msg_(msg)
  {}
  Init_EgoVehicleControlMaxima_max_pedal min_accel(::carla_ackermann_msgs::msg::EgoVehicleControlMaxima::_min_accel_type arg)
  {
    msg_.min_accel = std::move(arg);
    return Init_EgoVehicleControlMaxima_max_pedal(msg_);
  }

private:
  ::carla_ackermann_msgs::msg::EgoVehicleControlMaxima msg_;
};

class Init_EgoVehicleControlMaxima_max_decel
{
public:
  explicit Init_EgoVehicleControlMaxima_max_decel(::carla_ackermann_msgs::msg::EgoVehicleControlMaxima & msg)
  : msg_(msg)
  {}
  Init_EgoVehicleControlMaxima_min_accel max_decel(::carla_ackermann_msgs::msg::EgoVehicleControlMaxima::_max_decel_type arg)
  {
    msg_.max_decel = std::move(arg);
    return Init_EgoVehicleControlMaxima_min_accel(msg_);
  }

private:
  ::carla_ackermann_msgs::msg::EgoVehicleControlMaxima msg_;
};

class Init_EgoVehicleControlMaxima_max_accel
{
public:
  explicit Init_EgoVehicleControlMaxima_max_accel(::carla_ackermann_msgs::msg::EgoVehicleControlMaxima & msg)
  : msg_(msg)
  {}
  Init_EgoVehicleControlMaxima_max_decel max_accel(::carla_ackermann_msgs::msg::EgoVehicleControlMaxima::_max_accel_type arg)
  {
    msg_.max_accel = std::move(arg);
    return Init_EgoVehicleControlMaxima_max_decel(msg_);
  }

private:
  ::carla_ackermann_msgs::msg::EgoVehicleControlMaxima msg_;
};

class Init_EgoVehicleControlMaxima_max_speed
{
public:
  explicit Init_EgoVehicleControlMaxima_max_speed(::carla_ackermann_msgs::msg::EgoVehicleControlMaxima & msg)
  : msg_(msg)
  {}
  Init_EgoVehicleControlMaxima_max_accel max_speed(::carla_ackermann_msgs::msg::EgoVehicleControlMaxima::_max_speed_type arg)
  {
    msg_.max_speed = std::move(arg);
    return Init_EgoVehicleControlMaxima_max_accel(msg_);
  }

private:
  ::carla_ackermann_msgs::msg::EgoVehicleControlMaxima msg_;
};

class Init_EgoVehicleControlMaxima_max_steering_angle
{
public:
  Init_EgoVehicleControlMaxima_max_steering_angle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EgoVehicleControlMaxima_max_speed max_steering_angle(::carla_ackermann_msgs::msg::EgoVehicleControlMaxima::_max_steering_angle_type arg)
  {
    msg_.max_steering_angle = std::move(arg);
    return Init_EgoVehicleControlMaxima_max_speed(msg_);
  }

private:
  ::carla_ackermann_msgs::msg::EgoVehicleControlMaxima msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carla_ackermann_msgs::msg::EgoVehicleControlMaxima>()
{
  return carla_ackermann_msgs::msg::builder::Init_EgoVehicleControlMaxima_max_steering_angle();
}

}  // namespace carla_ackermann_msgs

#endif  // CARLA_ACKERMANN_MSGS__MSG__DETAIL__EGO_VEHICLE_CONTROL_MAXIMA__BUILDER_HPP_
