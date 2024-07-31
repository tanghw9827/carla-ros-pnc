// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carla_msgs:msg/CarlaEgoVehicleInfoWheel.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_EGO_VEHICLE_INFO_WHEEL__TRAITS_HPP_
#define CARLA_MSGS__MSG__DETAIL__CARLA_EGO_VEHICLE_INFO_WHEEL__TRAITS_HPP_

#include "carla_msgs/msg/detail/carla_ego_vehicle_info_wheel__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carla_msgs::msg::CarlaEgoVehicleInfoWheel>()
{
  return "carla_msgs::msg::CarlaEgoVehicleInfoWheel";
}

template<>
inline const char * name<carla_msgs::msg::CarlaEgoVehicleInfoWheel>()
{
  return "carla_msgs/msg/CarlaEgoVehicleInfoWheel";
}

template<>
struct has_fixed_size<carla_msgs::msg::CarlaEgoVehicleInfoWheel>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct has_bounded_size<carla_msgs::msg::CarlaEgoVehicleInfoWheel>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct is_message<carla_msgs::msg::CarlaEgoVehicleInfoWheel>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_EGO_VEHICLE_INFO_WHEEL__TRAITS_HPP_
