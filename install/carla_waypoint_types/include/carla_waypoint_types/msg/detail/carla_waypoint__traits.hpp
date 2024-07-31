// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carla_waypoint_types:msg/CarlaWaypoint.idl
// generated code does not contain a copyright notice

#ifndef CARLA_WAYPOINT_TYPES__MSG__DETAIL__CARLA_WAYPOINT__TRAITS_HPP_
#define CARLA_WAYPOINT_TYPES__MSG__DETAIL__CARLA_WAYPOINT__TRAITS_HPP_

#include "carla_waypoint_types/msg/detail/carla_waypoint__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carla_waypoint_types::msg::CarlaWaypoint>()
{
  return "carla_waypoint_types::msg::CarlaWaypoint";
}

template<>
inline const char * name<carla_waypoint_types::msg::CarlaWaypoint>()
{
  return "carla_waypoint_types/msg/CarlaWaypoint";
}

template<>
struct has_fixed_size<carla_waypoint_types::msg::CarlaWaypoint>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<carla_waypoint_types::msg::CarlaWaypoint>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<carla_waypoint_types::msg::CarlaWaypoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARLA_WAYPOINT_TYPES__MSG__DETAIL__CARLA_WAYPOINT__TRAITS_HPP_
