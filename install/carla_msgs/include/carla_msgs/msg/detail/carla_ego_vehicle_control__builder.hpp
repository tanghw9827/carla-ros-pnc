// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carla_msgs:msg/CarlaEgoVehicleControl.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_EGO_VEHICLE_CONTROL__BUILDER_HPP_
#define CARLA_MSGS__MSG__DETAIL__CARLA_EGO_VEHICLE_CONTROL__BUILDER_HPP_

#include "carla_msgs/msg/detail/carla_ego_vehicle_control__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carla_msgs
{

namespace msg
{

namespace builder
{

class Init_CarlaEgoVehicleControl_manual_gear_shift
{
public:
  explicit Init_CarlaEgoVehicleControl_manual_gear_shift(::carla_msgs::msg::CarlaEgoVehicleControl & msg)
  : msg_(msg)
  {}
  ::carla_msgs::msg::CarlaEgoVehicleControl manual_gear_shift(::carla_msgs::msg::CarlaEgoVehicleControl::_manual_gear_shift_type arg)
  {
    msg_.manual_gear_shift = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carla_msgs::msg::CarlaEgoVehicleControl msg_;
};

class Init_CarlaEgoVehicleControl_gear
{
public:
  explicit Init_CarlaEgoVehicleControl_gear(::carla_msgs::msg::CarlaEgoVehicleControl & msg)
  : msg_(msg)
  {}
  Init_CarlaEgoVehicleControl_manual_gear_shift gear(::carla_msgs::msg::CarlaEgoVehicleControl::_gear_type arg)
  {
    msg_.gear = std::move(arg);
    return Init_CarlaEgoVehicleControl_manual_gear_shift(msg_);
  }

private:
  ::carla_msgs::msg::CarlaEgoVehicleControl msg_;
};

class Init_CarlaEgoVehicleControl_reverse
{
public:
  explicit Init_CarlaEgoVehicleControl_reverse(::carla_msgs::msg::CarlaEgoVehicleControl & msg)
  : msg_(msg)
  {}
  Init_CarlaEgoVehicleControl_gear reverse(::carla_msgs::msg::CarlaEgoVehicleControl::_reverse_type arg)
  {
    msg_.reverse = std::move(arg);
    return Init_CarlaEgoVehicleControl_gear(msg_);
  }

private:
  ::carla_msgs::msg::CarlaEgoVehicleControl msg_;
};

class Init_CarlaEgoVehicleControl_hand_brake
{
public:
  explicit Init_CarlaEgoVehicleControl_hand_brake(::carla_msgs::msg::CarlaEgoVehicleControl & msg)
  : msg_(msg)
  {}
  Init_CarlaEgoVehicleControl_reverse hand_brake(::carla_msgs::msg::CarlaEgoVehicleControl::_hand_brake_type arg)
  {
    msg_.hand_brake = std::move(arg);
    return Init_CarlaEgoVehicleControl_reverse(msg_);
  }

private:
  ::carla_msgs::msg::CarlaEgoVehicleControl msg_;
};

class Init_CarlaEgoVehicleControl_brake
{
public:
  explicit Init_CarlaEgoVehicleControl_brake(::carla_msgs::msg::CarlaEgoVehicleControl & msg)
  : msg_(msg)
  {}
  Init_CarlaEgoVehicleControl_hand_brake brake(::carla_msgs::msg::CarlaEgoVehicleControl::_brake_type arg)
  {
    msg_.brake = std::move(arg);
    return Init_CarlaEgoVehicleControl_hand_brake(msg_);
  }

private:
  ::carla_msgs::msg::CarlaEgoVehicleControl msg_;
};

class Init_CarlaEgoVehicleControl_steer
{
public:
  explicit Init_CarlaEgoVehicleControl_steer(::carla_msgs::msg::CarlaEgoVehicleControl & msg)
  : msg_(msg)
  {}
  Init_CarlaEgoVehicleControl_brake steer(::carla_msgs::msg::CarlaEgoVehicleControl::_steer_type arg)
  {
    msg_.steer = std::move(arg);
    return Init_CarlaEgoVehicleControl_brake(msg_);
  }

private:
  ::carla_msgs::msg::CarlaEgoVehicleControl msg_;
};

class Init_CarlaEgoVehicleControl_throttle
{
public:
  explicit Init_CarlaEgoVehicleControl_throttle(::carla_msgs::msg::CarlaEgoVehicleControl & msg)
  : msg_(msg)
  {}
  Init_CarlaEgoVehicleControl_steer throttle(::carla_msgs::msg::CarlaEgoVehicleControl::_throttle_type arg)
  {
    msg_.throttle = std::move(arg);
    return Init_CarlaEgoVehicleControl_steer(msg_);
  }

private:
  ::carla_msgs::msg::CarlaEgoVehicleControl msg_;
};

class Init_CarlaEgoVehicleControl_header
{
public:
  Init_CarlaEgoVehicleControl_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CarlaEgoVehicleControl_throttle header(::carla_msgs::msg::CarlaEgoVehicleControl::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CarlaEgoVehicleControl_throttle(msg_);
  }

private:
  ::carla_msgs::msg::CarlaEgoVehicleControl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carla_msgs::msg::CarlaEgoVehicleControl>()
{
  return carla_msgs::msg::builder::Init_CarlaEgoVehicleControl_header();
}

}  // namespace carla_msgs

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_EGO_VEHICLE_CONTROL__BUILDER_HPP_
