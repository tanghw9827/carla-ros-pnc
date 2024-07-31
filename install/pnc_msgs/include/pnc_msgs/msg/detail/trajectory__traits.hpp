// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pnc_msgs:msg/Trajectory.idl
// generated code does not contain a copyright notice

#ifndef PNC_MSGS__MSG__DETAIL__TRAJECTORY__TRAITS_HPP_
#define PNC_MSGS__MSG__DETAIL__TRAJECTORY__TRAITS_HPP_

#include "pnc_msgs/msg/detail/trajectory__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pnc_msgs::msg::Trajectory>()
{
  return "pnc_msgs::msg::Trajectory";
}

template<>
inline const char * name<pnc_msgs::msg::Trajectory>()
{
  return "pnc_msgs/msg/Trajectory";
}

template<>
struct has_fixed_size<pnc_msgs::msg::Trajectory>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pnc_msgs::msg::Trajectory>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pnc_msgs::msg::Trajectory>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PNC_MSGS__MSG__DETAIL__TRAJECTORY__TRAITS_HPP_