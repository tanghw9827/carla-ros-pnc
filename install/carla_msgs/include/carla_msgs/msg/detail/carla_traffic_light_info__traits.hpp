// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carla_msgs:msg/CarlaTrafficLightInfo.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_TRAFFIC_LIGHT_INFO__TRAITS_HPP_
#define CARLA_MSGS__MSG__DETAIL__CARLA_TRAFFIC_LIGHT_INFO__TRAITS_HPP_

#include "carla_msgs/msg/detail/carla_traffic_light_info__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'transform'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'trigger_volume'
#include "carla_msgs/msg/detail/carla_bounding_box__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carla_msgs::msg::CarlaTrafficLightInfo>()
{
  return "carla_msgs::msg::CarlaTrafficLightInfo";
}

template<>
inline const char * name<carla_msgs::msg::CarlaTrafficLightInfo>()
{
  return "carla_msgs/msg/CarlaTrafficLightInfo";
}

template<>
struct has_fixed_size<carla_msgs::msg::CarlaTrafficLightInfo>
  : std::integral_constant<bool, has_fixed_size<carla_msgs::msg::CarlaBoundingBox>::value && has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<carla_msgs::msg::CarlaTrafficLightInfo>
  : std::integral_constant<bool, has_bounded_size<carla_msgs::msg::CarlaBoundingBox>::value && has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<carla_msgs::msg::CarlaTrafficLightInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_TRAFFIC_LIGHT_INFO__TRAITS_HPP_
