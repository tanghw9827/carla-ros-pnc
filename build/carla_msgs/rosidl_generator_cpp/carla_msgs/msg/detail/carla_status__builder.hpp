// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carla_msgs:msg/CarlaStatus.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_STATUS__BUILDER_HPP_
#define CARLA_MSGS__MSG__DETAIL__CARLA_STATUS__BUILDER_HPP_

#include "carla_msgs/msg/detail/carla_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carla_msgs
{

namespace msg
{

namespace builder
{

class Init_CarlaStatus_synchronous_mode_running
{
public:
  explicit Init_CarlaStatus_synchronous_mode_running(::carla_msgs::msg::CarlaStatus & msg)
  : msg_(msg)
  {}
  ::carla_msgs::msg::CarlaStatus synchronous_mode_running(::carla_msgs::msg::CarlaStatus::_synchronous_mode_running_type arg)
  {
    msg_.synchronous_mode_running = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carla_msgs::msg::CarlaStatus msg_;
};

class Init_CarlaStatus_synchronous_mode
{
public:
  explicit Init_CarlaStatus_synchronous_mode(::carla_msgs::msg::CarlaStatus & msg)
  : msg_(msg)
  {}
  Init_CarlaStatus_synchronous_mode_running synchronous_mode(::carla_msgs::msg::CarlaStatus::_synchronous_mode_type arg)
  {
    msg_.synchronous_mode = std::move(arg);
    return Init_CarlaStatus_synchronous_mode_running(msg_);
  }

private:
  ::carla_msgs::msg::CarlaStatus msg_;
};

class Init_CarlaStatus_fixed_delta_seconds
{
public:
  explicit Init_CarlaStatus_fixed_delta_seconds(::carla_msgs::msg::CarlaStatus & msg)
  : msg_(msg)
  {}
  Init_CarlaStatus_synchronous_mode fixed_delta_seconds(::carla_msgs::msg::CarlaStatus::_fixed_delta_seconds_type arg)
  {
    msg_.fixed_delta_seconds = std::move(arg);
    return Init_CarlaStatus_synchronous_mode(msg_);
  }

private:
  ::carla_msgs::msg::CarlaStatus msg_;
};

class Init_CarlaStatus_frame
{
public:
  Init_CarlaStatus_frame()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CarlaStatus_fixed_delta_seconds frame(::carla_msgs::msg::CarlaStatus::_frame_type arg)
  {
    msg_.frame = std::move(arg);
    return Init_CarlaStatus_fixed_delta_seconds(msg_);
  }

private:
  ::carla_msgs::msg::CarlaStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carla_msgs::msg::CarlaStatus>()
{
  return carla_msgs::msg::builder::Init_CarlaStatus_frame();
}

}  // namespace carla_msgs

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_STATUS__BUILDER_HPP_
