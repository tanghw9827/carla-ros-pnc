// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carla_msgs:msg/CarlaLaneInvasionEvent.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_LANE_INVASION_EVENT__BUILDER_HPP_
#define CARLA_MSGS__MSG__DETAIL__CARLA_LANE_INVASION_EVENT__BUILDER_HPP_

#include "carla_msgs/msg/detail/carla_lane_invasion_event__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carla_msgs
{

namespace msg
{

namespace builder
{

class Init_CarlaLaneInvasionEvent_crossed_lane_markings
{
public:
  explicit Init_CarlaLaneInvasionEvent_crossed_lane_markings(::carla_msgs::msg::CarlaLaneInvasionEvent & msg)
  : msg_(msg)
  {}
  ::carla_msgs::msg::CarlaLaneInvasionEvent crossed_lane_markings(::carla_msgs::msg::CarlaLaneInvasionEvent::_crossed_lane_markings_type arg)
  {
    msg_.crossed_lane_markings = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carla_msgs::msg::CarlaLaneInvasionEvent msg_;
};

class Init_CarlaLaneInvasionEvent_header
{
public:
  Init_CarlaLaneInvasionEvent_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CarlaLaneInvasionEvent_crossed_lane_markings header(::carla_msgs::msg::CarlaLaneInvasionEvent::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CarlaLaneInvasionEvent_crossed_lane_markings(msg_);
  }

private:
  ::carla_msgs::msg::CarlaLaneInvasionEvent msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carla_msgs::msg::CarlaLaneInvasionEvent>()
{
  return carla_msgs::msg::builder::Init_CarlaLaneInvasionEvent_header();
}

}  // namespace carla_msgs

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_LANE_INVASION_EVENT__BUILDER_HPP_
