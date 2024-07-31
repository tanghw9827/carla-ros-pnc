// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carla_msgs:msg/CarlaActorList.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_ACTOR_LIST__BUILDER_HPP_
#define CARLA_MSGS__MSG__DETAIL__CARLA_ACTOR_LIST__BUILDER_HPP_

#include "carla_msgs/msg/detail/carla_actor_list__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carla_msgs
{

namespace msg
{

namespace builder
{

class Init_CarlaActorList_actors
{
public:
  Init_CarlaActorList_actors()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::carla_msgs::msg::CarlaActorList actors(::carla_msgs::msg::CarlaActorList::_actors_type arg)
  {
    msg_.actors = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carla_msgs::msg::CarlaActorList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carla_msgs::msg::CarlaActorList>()
{
  return carla_msgs::msg::builder::Init_CarlaActorList_actors();
}

}  // namespace carla_msgs

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_ACTOR_LIST__BUILDER_HPP_
