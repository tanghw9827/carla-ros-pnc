// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carla_msgs:srv/DestroyObject.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__SRV__DETAIL__DESTROY_OBJECT__TRAITS_HPP_
#define CARLA_MSGS__SRV__DETAIL__DESTROY_OBJECT__TRAITS_HPP_

#include "carla_msgs/srv/detail/destroy_object__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carla_msgs::srv::DestroyObject_Request>()
{
  return "carla_msgs::srv::DestroyObject_Request";
}

template<>
inline const char * name<carla_msgs::srv::DestroyObject_Request>()
{
  return "carla_msgs/srv/DestroyObject_Request";
}

template<>
struct has_fixed_size<carla_msgs::srv::DestroyObject_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<carla_msgs::srv::DestroyObject_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<carla_msgs::srv::DestroyObject_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carla_msgs::srv::DestroyObject_Response>()
{
  return "carla_msgs::srv::DestroyObject_Response";
}

template<>
inline const char * name<carla_msgs::srv::DestroyObject_Response>()
{
  return "carla_msgs/srv/DestroyObject_Response";
}

template<>
struct has_fixed_size<carla_msgs::srv::DestroyObject_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<carla_msgs::srv::DestroyObject_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<carla_msgs::srv::DestroyObject_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carla_msgs::srv::DestroyObject>()
{
  return "carla_msgs::srv::DestroyObject";
}

template<>
inline const char * name<carla_msgs::srv::DestroyObject>()
{
  return "carla_msgs/srv/DestroyObject";
}

template<>
struct has_fixed_size<carla_msgs::srv::DestroyObject>
  : std::integral_constant<
    bool,
    has_fixed_size<carla_msgs::srv::DestroyObject_Request>::value &&
    has_fixed_size<carla_msgs::srv::DestroyObject_Response>::value
  >
{
};

template<>
struct has_bounded_size<carla_msgs::srv::DestroyObject>
  : std::integral_constant<
    bool,
    has_bounded_size<carla_msgs::srv::DestroyObject_Request>::value &&
    has_bounded_size<carla_msgs::srv::DestroyObject_Response>::value
  >
{
};

template<>
struct is_service<carla_msgs::srv::DestroyObject>
  : std::true_type
{
};

template<>
struct is_service_request<carla_msgs::srv::DestroyObject_Request>
  : std::true_type
{
};

template<>
struct is_service_response<carla_msgs::srv::DestroyObject_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CARLA_MSGS__SRV__DETAIL__DESTROY_OBJECT__TRAITS_HPP_
