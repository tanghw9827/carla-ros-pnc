// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carla_msgs:msg/CarlaActorInfo.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_ACTOR_INFO__BUILDER_HPP_
#define CARLA_MSGS__MSG__DETAIL__CARLA_ACTOR_INFO__BUILDER_HPP_

#include "carla_msgs/msg/detail/carla_actor_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carla_msgs
{

namespace msg
{

namespace builder
{

class Init_CarlaActorInfo_rolename
{
public:
  explicit Init_CarlaActorInfo_rolename(::carla_msgs::msg::CarlaActorInfo & msg)
  : msg_(msg)
  {}
  ::carla_msgs::msg::CarlaActorInfo rolename(::carla_msgs::msg::CarlaActorInfo::_rolename_type arg)
  {
    msg_.rolename = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carla_msgs::msg::CarlaActorInfo msg_;
};

class Init_CarlaActorInfo_type
{
public:
  explicit Init_CarlaActorInfo_type(::carla_msgs::msg::CarlaActorInfo & msg)
  : msg_(msg)
  {}
  Init_CarlaActorInfo_rolename type(::carla_msgs::msg::CarlaActorInfo::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_CarlaActorInfo_rolename(msg_);
  }

private:
  ::carla_msgs::msg::CarlaActorInfo msg_;
};

class Init_CarlaActorInfo_parent_id
{
public:
  explicit Init_CarlaActorInfo_parent_id(::carla_msgs::msg::CarlaActorInfo & msg)
  : msg_(msg)
  {}
  Init_CarlaActorInfo_type parent_id(::carla_msgs::msg::CarlaActorInfo::_parent_id_type arg)
  {
    msg_.parent_id = std::move(arg);
    return Init_CarlaActorInfo_type(msg_);
  }

private:
  ::carla_msgs::msg::CarlaActorInfo msg_;
};

class Init_CarlaActorInfo_id
{
public:
  Init_CarlaActorInfo_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CarlaActorInfo_parent_id id(::carla_msgs::msg::CarlaActorInfo::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_CarlaActorInfo_parent_id(msg_);
  }

private:
  ::carla_msgs::msg::CarlaActorInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carla_msgs::msg::CarlaActorInfo>()
{
  return carla_msgs::msg::builder::Init_CarlaActorInfo_id();
}

}  // namespace carla_msgs

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_ACTOR_INFO__BUILDER_HPP_
