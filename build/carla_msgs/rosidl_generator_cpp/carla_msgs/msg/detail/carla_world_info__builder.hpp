// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carla_msgs:msg/CarlaWorldInfo.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_WORLD_INFO__BUILDER_HPP_
#define CARLA_MSGS__MSG__DETAIL__CARLA_WORLD_INFO__BUILDER_HPP_

#include "carla_msgs/msg/detail/carla_world_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carla_msgs
{

namespace msg
{

namespace builder
{

class Init_CarlaWorldInfo_opendrive
{
public:
  explicit Init_CarlaWorldInfo_opendrive(::carla_msgs::msg::CarlaWorldInfo & msg)
  : msg_(msg)
  {}
  ::carla_msgs::msg::CarlaWorldInfo opendrive(::carla_msgs::msg::CarlaWorldInfo::_opendrive_type arg)
  {
    msg_.opendrive = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carla_msgs::msg::CarlaWorldInfo msg_;
};

class Init_CarlaWorldInfo_map_name
{
public:
  Init_CarlaWorldInfo_map_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CarlaWorldInfo_opendrive map_name(::carla_msgs::msg::CarlaWorldInfo::_map_name_type arg)
  {
    msg_.map_name = std::move(arg);
    return Init_CarlaWorldInfo_opendrive(msg_);
  }

private:
  ::carla_msgs::msg::CarlaWorldInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carla_msgs::msg::CarlaWorldInfo>()
{
  return carla_msgs::msg::builder::Init_CarlaWorldInfo_map_name();
}

}  // namespace carla_msgs

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_WORLD_INFO__BUILDER_HPP_
