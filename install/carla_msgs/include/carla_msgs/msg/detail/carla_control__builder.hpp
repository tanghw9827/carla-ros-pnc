// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carla_msgs:msg/CarlaControl.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_CONTROL__BUILDER_HPP_
#define CARLA_MSGS__MSG__DETAIL__CARLA_CONTROL__BUILDER_HPP_

#include "carla_msgs/msg/detail/carla_control__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carla_msgs
{

namespace msg
{

namespace builder
{

class Init_CarlaControl_command
{
public:
  Init_CarlaControl_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::carla_msgs::msg::CarlaControl command(::carla_msgs::msg::CarlaControl::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carla_msgs::msg::CarlaControl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carla_msgs::msg::CarlaControl>()
{
  return carla_msgs::msg::builder::Init_CarlaControl_command();
}

}  // namespace carla_msgs

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_CONTROL__BUILDER_HPP_
