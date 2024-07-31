// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carla_msgs:msg/CarlaBoundingBox.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_BOUNDING_BOX__TRAITS_HPP_
#define CARLA_MSGS__MSG__DETAIL__CARLA_BOUNDING_BOX__TRAITS_HPP_

#include "carla_msgs/msg/detail/carla_bounding_box__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'center'
// Member 'size'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carla_msgs::msg::CarlaBoundingBox>()
{
  return "carla_msgs::msg::CarlaBoundingBox";
}

template<>
inline const char * name<carla_msgs::msg::CarlaBoundingBox>()
{
  return "carla_msgs/msg/CarlaBoundingBox";
}

template<>
struct has_fixed_size<carla_msgs::msg::CarlaBoundingBox>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct has_bounded_size<carla_msgs::msg::CarlaBoundingBox>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct is_message<carla_msgs::msg::CarlaBoundingBox>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_BOUNDING_BOX__TRAITS_HPP_
