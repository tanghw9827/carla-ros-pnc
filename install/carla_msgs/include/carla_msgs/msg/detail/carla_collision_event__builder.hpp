// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carla_msgs:msg/CarlaCollisionEvent.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_COLLISION_EVENT__BUILDER_HPP_
#define CARLA_MSGS__MSG__DETAIL__CARLA_COLLISION_EVENT__BUILDER_HPP_

#include "carla_msgs/msg/detail/carla_collision_event__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carla_msgs
{

namespace msg
{

namespace builder
{

class Init_CarlaCollisionEvent_normal_impulse
{
public:
  explicit Init_CarlaCollisionEvent_normal_impulse(::carla_msgs::msg::CarlaCollisionEvent & msg)
  : msg_(msg)
  {}
  ::carla_msgs::msg::CarlaCollisionEvent normal_impulse(::carla_msgs::msg::CarlaCollisionEvent::_normal_impulse_type arg)
  {
    msg_.normal_impulse = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carla_msgs::msg::CarlaCollisionEvent msg_;
};

class Init_CarlaCollisionEvent_other_actor_id
{
public:
  explicit Init_CarlaCollisionEvent_other_actor_id(::carla_msgs::msg::CarlaCollisionEvent & msg)
  : msg_(msg)
  {}
  Init_CarlaCollisionEvent_normal_impulse other_actor_id(::carla_msgs::msg::CarlaCollisionEvent::_other_actor_id_type arg)
  {
    msg_.other_actor_id = std::move(arg);
    return Init_CarlaCollisionEvent_normal_impulse(msg_);
  }

private:
  ::carla_msgs::msg::CarlaCollisionEvent msg_;
};

class Init_CarlaCollisionEvent_header
{
public:
  Init_CarlaCollisionEvent_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CarlaCollisionEvent_other_actor_id header(::carla_msgs::msg::CarlaCollisionEvent::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CarlaCollisionEvent_other_actor_id(msg_);
  }

private:
  ::carla_msgs::msg::CarlaCollisionEvent msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carla_msgs::msg::CarlaCollisionEvent>()
{
  return carla_msgs::msg::builder::Init_CarlaCollisionEvent_header();
}

}  // namespace carla_msgs

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_COLLISION_EVENT__BUILDER_HPP_
