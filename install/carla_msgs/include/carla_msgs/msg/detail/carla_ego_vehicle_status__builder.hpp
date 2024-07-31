// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carla_msgs:msg/CarlaEgoVehicleStatus.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_EGO_VEHICLE_STATUS__BUILDER_HPP_
#define CARLA_MSGS__MSG__DETAIL__CARLA_EGO_VEHICLE_STATUS__BUILDER_HPP_

#include "carla_msgs/msg/detail/carla_ego_vehicle_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carla_msgs
{

namespace msg
{

namespace builder
{

class Init_CarlaEgoVehicleStatus_control
{
public:
  explicit Init_CarlaEgoVehicleStatus_control(::carla_msgs::msg::CarlaEgoVehicleStatus & msg)
  : msg_(msg)
  {}
  ::carla_msgs::msg::CarlaEgoVehicleStatus control(::carla_msgs::msg::CarlaEgoVehicleStatus::_control_type arg)
  {
    msg_.control = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carla_msgs::msg::CarlaEgoVehicleStatus msg_;
};

class Init_CarlaEgoVehicleStatus_orientation
{
public:
  explicit Init_CarlaEgoVehicleStatus_orientation(::carla_msgs::msg::CarlaEgoVehicleStatus & msg)
  : msg_(msg)
  {}
  Init_CarlaEgoVehicleStatus_control orientation(::carla_msgs::msg::CarlaEgoVehicleStatus::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_CarlaEgoVehicleStatus_control(msg_);
  }

private:
  ::carla_msgs::msg::CarlaEgoVehicleStatus msg_;
};

class Init_CarlaEgoVehicleStatus_acceleration
{
public:
  explicit Init_CarlaEgoVehicleStatus_acceleration(::carla_msgs::msg::CarlaEgoVehicleStatus & msg)
  : msg_(msg)
  {}
  Init_CarlaEgoVehicleStatus_orientation acceleration(::carla_msgs::msg::CarlaEgoVehicleStatus::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_CarlaEgoVehicleStatus_orientation(msg_);
  }

private:
  ::carla_msgs::msg::CarlaEgoVehicleStatus msg_;
};

class Init_CarlaEgoVehicleStatus_velocity
{
public:
  explicit Init_CarlaEgoVehicleStatus_velocity(::carla_msgs::msg::CarlaEgoVehicleStatus & msg)
  : msg_(msg)
  {}
  Init_CarlaEgoVehicleStatus_acceleration velocity(::carla_msgs::msg::CarlaEgoVehicleStatus::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_CarlaEgoVehicleStatus_acceleration(msg_);
  }

private:
  ::carla_msgs::msg::CarlaEgoVehicleStatus msg_;
};

class Init_CarlaEgoVehicleStatus_header
{
public:
  Init_CarlaEgoVehicleStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CarlaEgoVehicleStatus_velocity header(::carla_msgs::msg::CarlaEgoVehicleStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CarlaEgoVehicleStatus_velocity(msg_);
  }

private:
  ::carla_msgs::msg::CarlaEgoVehicleStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carla_msgs::msg::CarlaEgoVehicleStatus>()
{
  return carla_msgs::msg::builder::Init_CarlaEgoVehicleStatus_header();
}

}  // namespace carla_msgs

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_EGO_VEHICLE_STATUS__BUILDER_HPP_
