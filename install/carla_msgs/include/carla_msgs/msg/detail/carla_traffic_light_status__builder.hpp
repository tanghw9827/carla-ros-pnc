// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carla_msgs:msg/CarlaTrafficLightStatus.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_TRAFFIC_LIGHT_STATUS__BUILDER_HPP_
#define CARLA_MSGS__MSG__DETAIL__CARLA_TRAFFIC_LIGHT_STATUS__BUILDER_HPP_

#include "carla_msgs/msg/detail/carla_traffic_light_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carla_msgs
{

namespace msg
{

namespace builder
{

class Init_CarlaTrafficLightStatus_state
{
public:
  explicit Init_CarlaTrafficLightStatus_state(::carla_msgs::msg::CarlaTrafficLightStatus & msg)
  : msg_(msg)
  {}
  ::carla_msgs::msg::CarlaTrafficLightStatus state(::carla_msgs::msg::CarlaTrafficLightStatus::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carla_msgs::msg::CarlaTrafficLightStatus msg_;
};

class Init_CarlaTrafficLightStatus_id
{
public:
  Init_CarlaTrafficLightStatus_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CarlaTrafficLightStatus_state id(::carla_msgs::msg::CarlaTrafficLightStatus::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_CarlaTrafficLightStatus_state(msg_);
  }

private:
  ::carla_msgs::msg::CarlaTrafficLightStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carla_msgs::msg::CarlaTrafficLightStatus>()
{
  return carla_msgs::msg::builder::Init_CarlaTrafficLightStatus_id();
}

}  // namespace carla_msgs

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_TRAFFIC_LIGHT_STATUS__BUILDER_HPP_
