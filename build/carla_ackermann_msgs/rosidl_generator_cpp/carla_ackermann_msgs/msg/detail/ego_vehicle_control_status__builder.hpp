// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carla_ackermann_msgs:msg/EgoVehicleControlStatus.idl
// generated code does not contain a copyright notice

#ifndef CARLA_ACKERMANN_MSGS__MSG__DETAIL__EGO_VEHICLE_CONTROL_STATUS__BUILDER_HPP_
#define CARLA_ACKERMANN_MSGS__MSG__DETAIL__EGO_VEHICLE_CONTROL_STATUS__BUILDER_HPP_

#include "carla_ackermann_msgs/msg/detail/ego_vehicle_control_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carla_ackermann_msgs
{

namespace msg
{

namespace builder
{

class Init_EgoVehicleControlStatus_throttle_lower_border
{
public:
  explicit Init_EgoVehicleControlStatus_throttle_lower_border(::carla_ackermann_msgs::msg::EgoVehicleControlStatus & msg)
  : msg_(msg)
  {}
  ::carla_ackermann_msgs::msg::EgoVehicleControlStatus throttle_lower_border(::carla_ackermann_msgs::msg::EgoVehicleControlStatus::_throttle_lower_border_type arg)
  {
    msg_.throttle_lower_border = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carla_ackermann_msgs::msg::EgoVehicleControlStatus msg_;
};

class Init_EgoVehicleControlStatus_brake_upper_border
{
public:
  explicit Init_EgoVehicleControlStatus_brake_upper_border(::carla_ackermann_msgs::msg::EgoVehicleControlStatus & msg)
  : msg_(msg)
  {}
  Init_EgoVehicleControlStatus_throttle_lower_border brake_upper_border(::carla_ackermann_msgs::msg::EgoVehicleControlStatus::_brake_upper_border_type arg)
  {
    msg_.brake_upper_border = std::move(arg);
    return Init_EgoVehicleControlStatus_throttle_lower_border(msg_);
  }

private:
  ::carla_ackermann_msgs::msg::EgoVehicleControlStatus msg_;
};

class Init_EgoVehicleControlStatus_accel_control_pedal_target
{
public:
  explicit Init_EgoVehicleControlStatus_accel_control_pedal_target(::carla_ackermann_msgs::msg::EgoVehicleControlStatus & msg)
  : msg_(msg)
  {}
  Init_EgoVehicleControlStatus_brake_upper_border accel_control_pedal_target(::carla_ackermann_msgs::msg::EgoVehicleControlStatus::_accel_control_pedal_target_type arg)
  {
    msg_.accel_control_pedal_target = std::move(arg);
    return Init_EgoVehicleControlStatus_brake_upper_border(msg_);
  }

private:
  ::carla_ackermann_msgs::msg::EgoVehicleControlStatus msg_;
};

class Init_EgoVehicleControlStatus_accel_control_pedal_delta
{
public:
  explicit Init_EgoVehicleControlStatus_accel_control_pedal_delta(::carla_ackermann_msgs::msg::EgoVehicleControlStatus & msg)
  : msg_(msg)
  {}
  Init_EgoVehicleControlStatus_accel_control_pedal_target accel_control_pedal_delta(::carla_ackermann_msgs::msg::EgoVehicleControlStatus::_accel_control_pedal_delta_type arg)
  {
    msg_.accel_control_pedal_delta = std::move(arg);
    return Init_EgoVehicleControlStatus_accel_control_pedal_target(msg_);
  }

private:
  ::carla_ackermann_msgs::msg::EgoVehicleControlStatus msg_;
};

class Init_EgoVehicleControlStatus_speed_control_accel_target
{
public:
  explicit Init_EgoVehicleControlStatus_speed_control_accel_target(::carla_ackermann_msgs::msg::EgoVehicleControlStatus & msg)
  : msg_(msg)
  {}
  Init_EgoVehicleControlStatus_accel_control_pedal_delta speed_control_accel_target(::carla_ackermann_msgs::msg::EgoVehicleControlStatus::_speed_control_accel_target_type arg)
  {
    msg_.speed_control_accel_target = std::move(arg);
    return Init_EgoVehicleControlStatus_accel_control_pedal_delta(msg_);
  }

private:
  ::carla_ackermann_msgs::msg::EgoVehicleControlStatus msg_;
};

class Init_EgoVehicleControlStatus_speed_control_accel_delta
{
public:
  explicit Init_EgoVehicleControlStatus_speed_control_accel_delta(::carla_ackermann_msgs::msg::EgoVehicleControlStatus & msg)
  : msg_(msg)
  {}
  Init_EgoVehicleControlStatus_speed_control_accel_target speed_control_accel_delta(::carla_ackermann_msgs::msg::EgoVehicleControlStatus::_speed_control_accel_delta_type arg)
  {
    msg_.speed_control_accel_delta = std::move(arg);
    return Init_EgoVehicleControlStatus_speed_control_accel_target(msg_);
  }

private:
  ::carla_ackermann_msgs::msg::EgoVehicleControlStatus msg_;
};

class Init_EgoVehicleControlStatus_speed_control_activation_count
{
public:
  explicit Init_EgoVehicleControlStatus_speed_control_activation_count(::carla_ackermann_msgs::msg::EgoVehicleControlStatus & msg)
  : msg_(msg)
  {}
  Init_EgoVehicleControlStatus_speed_control_accel_delta speed_control_activation_count(::carla_ackermann_msgs::msg::EgoVehicleControlStatus::_speed_control_activation_count_type arg)
  {
    msg_.speed_control_activation_count = std::move(arg);
    return Init_EgoVehicleControlStatus_speed_control_accel_delta(msg_);
  }

private:
  ::carla_ackermann_msgs::msg::EgoVehicleControlStatus msg_;
};

class Init_EgoVehicleControlStatus_status
{
public:
  Init_EgoVehicleControlStatus_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EgoVehicleControlStatus_speed_control_activation_count status(::carla_ackermann_msgs::msg::EgoVehicleControlStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_EgoVehicleControlStatus_speed_control_activation_count(msg_);
  }

private:
  ::carla_ackermann_msgs::msg::EgoVehicleControlStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carla_ackermann_msgs::msg::EgoVehicleControlStatus>()
{
  return carla_ackermann_msgs::msg::builder::Init_EgoVehicleControlStatus_status();
}

}  // namespace carla_ackermann_msgs

#endif  // CARLA_ACKERMANN_MSGS__MSG__DETAIL__EGO_VEHICLE_CONTROL_STATUS__BUILDER_HPP_
