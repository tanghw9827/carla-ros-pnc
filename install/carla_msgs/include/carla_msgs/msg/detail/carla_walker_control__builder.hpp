// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carla_msgs:msg/CarlaWalkerControl.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_WALKER_CONTROL__BUILDER_HPP_
#define CARLA_MSGS__MSG__DETAIL__CARLA_WALKER_CONTROL__BUILDER_HPP_

#include "carla_msgs/msg/detail/carla_walker_control__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carla_msgs
{

namespace msg
{

namespace builder
{

class Init_CarlaWalkerControl_jump
{
public:
  explicit Init_CarlaWalkerControl_jump(::carla_msgs::msg::CarlaWalkerControl & msg)
  : msg_(msg)
  {}
  ::carla_msgs::msg::CarlaWalkerControl jump(::carla_msgs::msg::CarlaWalkerControl::_jump_type arg)
  {
    msg_.jump = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carla_msgs::msg::CarlaWalkerControl msg_;
};

class Init_CarlaWalkerControl_speed
{
public:
  explicit Init_CarlaWalkerControl_speed(::carla_msgs::msg::CarlaWalkerControl & msg)
  : msg_(msg)
  {}
  Init_CarlaWalkerControl_jump speed(::carla_msgs::msg::CarlaWalkerControl::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_CarlaWalkerControl_jump(msg_);
  }

private:
  ::carla_msgs::msg::CarlaWalkerControl msg_;
};

class Init_CarlaWalkerControl_direction
{
public:
  Init_CarlaWalkerControl_direction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CarlaWalkerControl_speed direction(::carla_msgs::msg::CarlaWalkerControl::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return Init_CarlaWalkerControl_speed(msg_);
  }

private:
  ::carla_msgs::msg::CarlaWalkerControl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carla_msgs::msg::CarlaWalkerControl>()
{
  return carla_msgs::msg::builder::Init_CarlaWalkerControl_direction();
}

}  // namespace carla_msgs

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_WALKER_CONTROL__BUILDER_HPP_
