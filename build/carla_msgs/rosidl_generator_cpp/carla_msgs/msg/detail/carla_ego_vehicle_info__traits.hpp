// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carla_msgs:msg/CarlaEgoVehicleInfo.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_EGO_VEHICLE_INFO__TRAITS_HPP_
#define CARLA_MSGS__MSG__DETAIL__CARLA_EGO_VEHICLE_INFO__TRAITS_HPP_

#include "carla_msgs/msg/detail/carla_ego_vehicle_info__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'center_of_mass'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carla_msgs::msg::CarlaEgoVehicleInfo>()
{
  return "carla_msgs::msg::CarlaEgoVehicleInfo";
}

template<>
inline const char * name<carla_msgs::msg::CarlaEgoVehicleInfo>()
{
  return "carla_msgs/msg/CarlaEgoVehicleInfo";
}

template<>
struct has_fixed_size<carla_msgs::msg::CarlaEgoVehicleInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<carla_msgs::msg::CarlaEgoVehicleInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<carla_msgs::msg::CarlaEgoVehicleInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_EGO_VEHICLE_INFO__TRAITS_HPP_
