// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carla_msgs:srv/SpawnObject.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__SRV__DETAIL__SPAWN_OBJECT__TRAITS_HPP_
#define CARLA_MSGS__SRV__DETAIL__SPAWN_OBJECT__TRAITS_HPP_

#include "carla_msgs/srv/detail/spawn_object__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'transform'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carla_msgs::srv::SpawnObject_Request>()
{
  return "carla_msgs::srv::SpawnObject_Request";
}

template<>
inline const char * name<carla_msgs::srv::SpawnObject_Request>()
{
  return "carla_msgs/srv/SpawnObject_Request";
}

template<>
struct has_fixed_size<carla_msgs::srv::SpawnObject_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<carla_msgs::srv::SpawnObject_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<carla_msgs::srv::SpawnObject_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carla_msgs::srv::SpawnObject_Response>()
{
  return "carla_msgs::srv::SpawnObject_Response";
}

template<>
inline const char * name<carla_msgs::srv::SpawnObject_Response>()
{
  return "carla_msgs/srv/SpawnObject_Response";
}

template<>
struct has_fixed_size<carla_msgs::srv::SpawnObject_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<carla_msgs::srv::SpawnObject_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<carla_msgs::srv::SpawnObject_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carla_msgs::srv::SpawnObject>()
{
  return "carla_msgs::srv::SpawnObject";
}

template<>
inline const char * name<carla_msgs::srv::SpawnObject>()
{
  return "carla_msgs/srv/SpawnObject";
}

template<>
struct has_fixed_size<carla_msgs::srv::SpawnObject>
  : std::integral_constant<
    bool,
    has_fixed_size<carla_msgs::srv::SpawnObject_Request>::value &&
    has_fixed_size<carla_msgs::srv::SpawnObject_Response>::value
  >
{
};

template<>
struct has_bounded_size<carla_msgs::srv::SpawnObject>
  : std::integral_constant<
    bool,
    has_bounded_size<carla_msgs::srv::SpawnObject_Request>::value &&
    has_bounded_size<carla_msgs::srv::SpawnObject_Response>::value
  >
{
};

template<>
struct is_service<carla_msgs::srv::SpawnObject>
  : std::true_type
{
};

template<>
struct is_service_request<carla_msgs::srv::SpawnObject_Request>
  : std::true_type
{
};

template<>
struct is_service_response<carla_msgs::srv::SpawnObject_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CARLA_MSGS__SRV__DETAIL__SPAWN_OBJECT__TRAITS_HPP_
