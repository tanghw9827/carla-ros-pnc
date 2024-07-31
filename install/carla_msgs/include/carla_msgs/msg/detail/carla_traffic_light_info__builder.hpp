// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carla_msgs:msg/CarlaTrafficLightInfo.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_TRAFFIC_LIGHT_INFO__BUILDER_HPP_
#define CARLA_MSGS__MSG__DETAIL__CARLA_TRAFFIC_LIGHT_INFO__BUILDER_HPP_

#include "carla_msgs/msg/detail/carla_traffic_light_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carla_msgs
{

namespace msg
{

namespace builder
{

class Init_CarlaTrafficLightInfo_trigger_volume
{
public:
  explicit Init_CarlaTrafficLightInfo_trigger_volume(::carla_msgs::msg::CarlaTrafficLightInfo & msg)
  : msg_(msg)
  {}
  ::carla_msgs::msg::CarlaTrafficLightInfo trigger_volume(::carla_msgs::msg::CarlaTrafficLightInfo::_trigger_volume_type arg)
  {
    msg_.trigger_volume = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carla_msgs::msg::CarlaTrafficLightInfo msg_;
};

class Init_CarlaTrafficLightInfo_transform
{
public:
  explicit Init_CarlaTrafficLightInfo_transform(::carla_msgs::msg::CarlaTrafficLightInfo & msg)
  : msg_(msg)
  {}
  Init_CarlaTrafficLightInfo_trigger_volume transform(::carla_msgs::msg::CarlaTrafficLightInfo::_transform_type arg)
  {
    msg_.transform = std::move(arg);
    return Init_CarlaTrafficLightInfo_trigger_volume(msg_);
  }

private:
  ::carla_msgs::msg::CarlaTrafficLightInfo msg_;
};

class Init_CarlaTrafficLightInfo_id
{
public:
  Init_CarlaTrafficLightInfo_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CarlaTrafficLightInfo_transform id(::carla_msgs::msg::CarlaTrafficLightInfo::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_CarlaTrafficLightInfo_transform(msg_);
  }

private:
  ::carla_msgs::msg::CarlaTrafficLightInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carla_msgs::msg::CarlaTrafficLightInfo>()
{
  return carla_msgs::msg::builder::Init_CarlaTrafficLightInfo_id();
}

}  // namespace carla_msgs

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_TRAFFIC_LIGHT_INFO__BUILDER_HPP_
