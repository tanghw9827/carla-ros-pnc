// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carla_msgs:msg/CarlaEgoVehicleStatus.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_EGO_VEHICLE_STATUS__TRAITS_HPP_
#define CARLA_MSGS__MSG__DETAIL__CARLA_EGO_VEHICLE_STATUS__TRAITS_HPP_

#include "carla_msgs/msg/detail/carla_ego_vehicle_status__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'acceleration'
#include "geometry_msgs/msg/detail/accel__traits.hpp"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__traits.hpp"
// Member 'control'
#include "carla_msgs/msg/detail/carla_ego_vehicle_control__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carla_msgs::msg::CarlaEgoVehicleStatus>()
{
  return "carla_msgs::msg::CarlaEgoVehicleStatus";
}

template<>
inline const char * name<carla_msgs::msg::CarlaEgoVehicleStatus>()
{
  return "carla_msgs/msg/CarlaEgoVehicleStatus";
}

template<>
struct has_fixed_size<carla_msgs::msg::CarlaEgoVehicleStatus>
  : std::integral_constant<bool, has_fixed_size<carla_msgs::msg::CarlaEgoVehicleControl>::value && has_fixed_size<geometry_msgs::msg::Accel>::value && has_fixed_size<geometry_msgs::msg::Quaternion>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<carla_msgs::msg::CarlaEgoVehicleStatus>
  : std::integral_constant<bool, has_bounded_size<carla_msgs::msg::CarlaEgoVehicleControl>::value && has_bounded_size<geometry_msgs::msg::Accel>::value && has_bounded_size<geometry_msgs::msg::Quaternion>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<carla_msgs::msg::CarlaEgoVehicleStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_EGO_VEHICLE_STATUS__TRAITS_HPP_
