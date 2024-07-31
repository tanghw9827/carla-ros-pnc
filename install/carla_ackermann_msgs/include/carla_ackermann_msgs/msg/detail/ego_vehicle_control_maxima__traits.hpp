// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carla_ackermann_msgs:msg/EgoVehicleControlMaxima.idl
// generated code does not contain a copyright notice

#ifndef CARLA_ACKERMANN_MSGS__MSG__DETAIL__EGO_VEHICLE_CONTROL_MAXIMA__TRAITS_HPP_
#define CARLA_ACKERMANN_MSGS__MSG__DETAIL__EGO_VEHICLE_CONTROL_MAXIMA__TRAITS_HPP_

#include "carla_ackermann_msgs/msg/detail/ego_vehicle_control_maxima__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carla_ackermann_msgs::msg::EgoVehicleControlMaxima>()
{
  return "carla_ackermann_msgs::msg::EgoVehicleControlMaxima";
}

template<>
inline const char * name<carla_ackermann_msgs::msg::EgoVehicleControlMaxima>()
{
  return "carla_ackermann_msgs/msg/EgoVehicleControlMaxima";
}

template<>
struct has_fixed_size<carla_ackermann_msgs::msg::EgoVehicleControlMaxima>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<carla_ackermann_msgs::msg::EgoVehicleControlMaxima>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<carla_ackermann_msgs::msg::EgoVehicleControlMaxima>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARLA_ACKERMANN_MSGS__MSG__DETAIL__EGO_VEHICLE_CONTROL_MAXIMA__TRAITS_HPP_
