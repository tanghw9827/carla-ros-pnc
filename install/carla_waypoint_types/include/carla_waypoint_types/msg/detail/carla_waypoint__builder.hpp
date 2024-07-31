// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carla_waypoint_types:msg/CarlaWaypoint.idl
// generated code does not contain a copyright notice

#ifndef CARLA_WAYPOINT_TYPES__MSG__DETAIL__CARLA_WAYPOINT__BUILDER_HPP_
#define CARLA_WAYPOINT_TYPES__MSG__DETAIL__CARLA_WAYPOINT__BUILDER_HPP_

#include "carla_waypoint_types/msg/detail/carla_waypoint__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carla_waypoint_types
{

namespace msg
{

namespace builder
{

class Init_CarlaWaypoint_pose
{
public:
  explicit Init_CarlaWaypoint_pose(::carla_waypoint_types::msg::CarlaWaypoint & msg)
  : msg_(msg)
  {}
  ::carla_waypoint_types::msg::CarlaWaypoint pose(::carla_waypoint_types::msg::CarlaWaypoint::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carla_waypoint_types::msg::CarlaWaypoint msg_;
};

class Init_CarlaWaypoint_is_junction
{
public:
  explicit Init_CarlaWaypoint_is_junction(::carla_waypoint_types::msg::CarlaWaypoint & msg)
  : msg_(msg)
  {}
  Init_CarlaWaypoint_pose is_junction(::carla_waypoint_types::msg::CarlaWaypoint::_is_junction_type arg)
  {
    msg_.is_junction = std::move(arg);
    return Init_CarlaWaypoint_pose(msg_);
  }

private:
  ::carla_waypoint_types::msg::CarlaWaypoint msg_;
};

class Init_CarlaWaypoint_lane_width
{
public:
  explicit Init_CarlaWaypoint_lane_width(::carla_waypoint_types::msg::CarlaWaypoint & msg)
  : msg_(msg)
  {}
  Init_CarlaWaypoint_is_junction lane_width(::carla_waypoint_types::msg::CarlaWaypoint::_lane_width_type arg)
  {
    msg_.lane_width = std::move(arg);
    return Init_CarlaWaypoint_is_junction(msg_);
  }

private:
  ::carla_waypoint_types::msg::CarlaWaypoint msg_;
};

class Init_CarlaWaypoint_lane_id
{
public:
  explicit Init_CarlaWaypoint_lane_id(::carla_waypoint_types::msg::CarlaWaypoint & msg)
  : msg_(msg)
  {}
  Init_CarlaWaypoint_lane_width lane_id(::carla_waypoint_types::msg::CarlaWaypoint::_lane_id_type arg)
  {
    msg_.lane_id = std::move(arg);
    return Init_CarlaWaypoint_lane_width(msg_);
  }

private:
  ::carla_waypoint_types::msg::CarlaWaypoint msg_;
};

class Init_CarlaWaypoint_section_id
{
public:
  explicit Init_CarlaWaypoint_section_id(::carla_waypoint_types::msg::CarlaWaypoint & msg)
  : msg_(msg)
  {}
  Init_CarlaWaypoint_lane_id section_id(::carla_waypoint_types::msg::CarlaWaypoint::_section_id_type arg)
  {
    msg_.section_id = std::move(arg);
    return Init_CarlaWaypoint_lane_id(msg_);
  }

private:
  ::carla_waypoint_types::msg::CarlaWaypoint msg_;
};

class Init_CarlaWaypoint_road_id
{
public:
  Init_CarlaWaypoint_road_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CarlaWaypoint_section_id road_id(::carla_waypoint_types::msg::CarlaWaypoint::_road_id_type arg)
  {
    msg_.road_id = std::move(arg);
    return Init_CarlaWaypoint_section_id(msg_);
  }

private:
  ::carla_waypoint_types::msg::CarlaWaypoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carla_waypoint_types::msg::CarlaWaypoint>()
{
  return carla_waypoint_types::msg::builder::Init_CarlaWaypoint_road_id();
}

}  // namespace carla_waypoint_types

#endif  // CARLA_WAYPOINT_TYPES__MSG__DETAIL__CARLA_WAYPOINT__BUILDER_HPP_
