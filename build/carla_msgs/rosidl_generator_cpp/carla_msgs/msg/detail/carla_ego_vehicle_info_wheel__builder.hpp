// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carla_msgs:msg/CarlaEgoVehicleInfoWheel.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_EGO_VEHICLE_INFO_WHEEL__BUILDER_HPP_
#define CARLA_MSGS__MSG__DETAIL__CARLA_EGO_VEHICLE_INFO_WHEEL__BUILDER_HPP_

#include "carla_msgs/msg/detail/carla_ego_vehicle_info_wheel__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carla_msgs
{

namespace msg
{

namespace builder
{

class Init_CarlaEgoVehicleInfoWheel_position
{
public:
  explicit Init_CarlaEgoVehicleInfoWheel_position(::carla_msgs::msg::CarlaEgoVehicleInfoWheel & msg)
  : msg_(msg)
  {}
  ::carla_msgs::msg::CarlaEgoVehicleInfoWheel position(::carla_msgs::msg::CarlaEgoVehicleInfoWheel::_position_type arg)
  {
    msg_.position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carla_msgs::msg::CarlaEgoVehicleInfoWheel msg_;
};

class Init_CarlaEgoVehicleInfoWheel_max_handbrake_torque
{
public:
  explicit Init_CarlaEgoVehicleInfoWheel_max_handbrake_torque(::carla_msgs::msg::CarlaEgoVehicleInfoWheel & msg)
  : msg_(msg)
  {}
  Init_CarlaEgoVehicleInfoWheel_position max_handbrake_torque(::carla_msgs::msg::CarlaEgoVehicleInfoWheel::_max_handbrake_torque_type arg)
  {
    msg_.max_handbrake_torque = std::move(arg);
    return Init_CarlaEgoVehicleInfoWheel_position(msg_);
  }

private:
  ::carla_msgs::msg::CarlaEgoVehicleInfoWheel msg_;
};

class Init_CarlaEgoVehicleInfoWheel_max_brake_torque
{
public:
  explicit Init_CarlaEgoVehicleInfoWheel_max_brake_torque(::carla_msgs::msg::CarlaEgoVehicleInfoWheel & msg)
  : msg_(msg)
  {}
  Init_CarlaEgoVehicleInfoWheel_max_handbrake_torque max_brake_torque(::carla_msgs::msg::CarlaEgoVehicleInfoWheel::_max_brake_torque_type arg)
  {
    msg_.max_brake_torque = std::move(arg);
    return Init_CarlaEgoVehicleInfoWheel_max_handbrake_torque(msg_);
  }

private:
  ::carla_msgs::msg::CarlaEgoVehicleInfoWheel msg_;
};

class Init_CarlaEgoVehicleInfoWheel_radius
{
public:
  explicit Init_CarlaEgoVehicleInfoWheel_radius(::carla_msgs::msg::CarlaEgoVehicleInfoWheel & msg)
  : msg_(msg)
  {}
  Init_CarlaEgoVehicleInfoWheel_max_brake_torque radius(::carla_msgs::msg::CarlaEgoVehicleInfoWheel::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return Init_CarlaEgoVehicleInfoWheel_max_brake_torque(msg_);
  }

private:
  ::carla_msgs::msg::CarlaEgoVehicleInfoWheel msg_;
};

class Init_CarlaEgoVehicleInfoWheel_max_steer_angle
{
public:
  explicit Init_CarlaEgoVehicleInfoWheel_max_steer_angle(::carla_msgs::msg::CarlaEgoVehicleInfoWheel & msg)
  : msg_(msg)
  {}
  Init_CarlaEgoVehicleInfoWheel_radius max_steer_angle(::carla_msgs::msg::CarlaEgoVehicleInfoWheel::_max_steer_angle_type arg)
  {
    msg_.max_steer_angle = std::move(arg);
    return Init_CarlaEgoVehicleInfoWheel_radius(msg_);
  }

private:
  ::carla_msgs::msg::CarlaEgoVehicleInfoWheel msg_;
};

class Init_CarlaEgoVehicleInfoWheel_damping_rate
{
public:
  explicit Init_CarlaEgoVehicleInfoWheel_damping_rate(::carla_msgs::msg::CarlaEgoVehicleInfoWheel & msg)
  : msg_(msg)
  {}
  Init_CarlaEgoVehicleInfoWheel_max_steer_angle damping_rate(::carla_msgs::msg::CarlaEgoVehicleInfoWheel::_damping_rate_type arg)
  {
    msg_.damping_rate = std::move(arg);
    return Init_CarlaEgoVehicleInfoWheel_max_steer_angle(msg_);
  }

private:
  ::carla_msgs::msg::CarlaEgoVehicleInfoWheel msg_;
};

class Init_CarlaEgoVehicleInfoWheel_tire_friction
{
public:
  Init_CarlaEgoVehicleInfoWheel_tire_friction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CarlaEgoVehicleInfoWheel_damping_rate tire_friction(::carla_msgs::msg::CarlaEgoVehicleInfoWheel::_tire_friction_type arg)
  {
    msg_.tire_friction = std::move(arg);
    return Init_CarlaEgoVehicleInfoWheel_damping_rate(msg_);
  }

private:
  ::carla_msgs::msg::CarlaEgoVehicleInfoWheel msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carla_msgs::msg::CarlaEgoVehicleInfoWheel>()
{
  return carla_msgs::msg::builder::Init_CarlaEgoVehicleInfoWheel_tire_friction();
}

}  // namespace carla_msgs

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_EGO_VEHICLE_INFO_WHEEL__BUILDER_HPP_
