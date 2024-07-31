// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carla_ackermann_msgs:msg/EgoVehicleControlCurrent.idl
// generated code does not contain a copyright notice

#ifndef CARLA_ACKERMANN_MSGS__MSG__DETAIL__EGO_VEHICLE_CONTROL_CURRENT__BUILDER_HPP_
#define CARLA_ACKERMANN_MSGS__MSG__DETAIL__EGO_VEHICLE_CONTROL_CURRENT__BUILDER_HPP_

#include "carla_ackermann_msgs/msg/detail/ego_vehicle_control_current__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carla_ackermann_msgs
{

namespace msg
{

namespace builder
{

class Init_EgoVehicleControlCurrent_accel
{
public:
  explicit Init_EgoVehicleControlCurrent_accel(::carla_ackermann_msgs::msg::EgoVehicleControlCurrent & msg)
  : msg_(msg)
  {}
  ::carla_ackermann_msgs::msg::EgoVehicleControlCurrent accel(::carla_ackermann_msgs::msg::EgoVehicleControlCurrent::_accel_type arg)
  {
    msg_.accel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carla_ackermann_msgs::msg::EgoVehicleControlCurrent msg_;
};

class Init_EgoVehicleControlCurrent_speed_abs
{
public:
  explicit Init_EgoVehicleControlCurrent_speed_abs(::carla_ackermann_msgs::msg::EgoVehicleControlCurrent & msg)
  : msg_(msg)
  {}
  Init_EgoVehicleControlCurrent_accel speed_abs(::carla_ackermann_msgs::msg::EgoVehicleControlCurrent::_speed_abs_type arg)
  {
    msg_.speed_abs = std::move(arg);
    return Init_EgoVehicleControlCurrent_accel(msg_);
  }

private:
  ::carla_ackermann_msgs::msg::EgoVehicleControlCurrent msg_;
};

class Init_EgoVehicleControlCurrent_speed
{
public:
  explicit Init_EgoVehicleControlCurrent_speed(::carla_ackermann_msgs::msg::EgoVehicleControlCurrent & msg)
  : msg_(msg)
  {}
  Init_EgoVehicleControlCurrent_speed_abs speed(::carla_ackermann_msgs::msg::EgoVehicleControlCurrent::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_EgoVehicleControlCurrent_speed_abs(msg_);
  }

private:
  ::carla_ackermann_msgs::msg::EgoVehicleControlCurrent msg_;
};

class Init_EgoVehicleControlCurrent_time_sec
{
public:
  Init_EgoVehicleControlCurrent_time_sec()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EgoVehicleControlCurrent_speed time_sec(::carla_ackermann_msgs::msg::EgoVehicleControlCurrent::_time_sec_type arg)
  {
    msg_.time_sec = std::move(arg);
    return Init_EgoVehicleControlCurrent_speed(msg_);
  }

private:
  ::carla_ackermann_msgs::msg::EgoVehicleControlCurrent msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carla_ackermann_msgs::msg::EgoVehicleControlCurrent>()
{
  return carla_ackermann_msgs::msg::builder::Init_EgoVehicleControlCurrent_time_sec();
}

}  // namespace carla_ackermann_msgs

#endif  // CARLA_ACKERMANN_MSGS__MSG__DETAIL__EGO_VEHICLE_CONTROL_CURRENT__BUILDER_HPP_
