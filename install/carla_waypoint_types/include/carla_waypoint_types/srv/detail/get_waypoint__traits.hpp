// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carla_waypoint_types:srv/GetWaypoint.idl
// generated code does not contain a copyright notice

#ifndef CARLA_WAYPOINT_TYPES__SRV__DETAIL__GET_WAYPOINT__TRAITS_HPP_
#define CARLA_WAYPOINT_TYPES__SRV__DETAIL__GET_WAYPOINT__TRAITS_HPP_

#include "carla_waypoint_types/srv/detail/get_waypoint__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'location'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carla_waypoint_types::srv::GetWaypoint_Request>()
{
  return "carla_waypoint_types::srv::GetWaypoint_Request";
}

template<>
inline const char * name<carla_waypoint_types::srv::GetWaypoint_Request>()
{
  return "carla_waypoint_types/srv/GetWaypoint_Request";
}

template<>
struct has_fixed_size<carla_waypoint_types::srv::GetWaypoint_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<carla_waypoint_types::srv::GetWaypoint_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<carla_waypoint_types::srv::GetWaypoint_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'waypoint'
#include "carla_waypoint_types/msg/detail/carla_waypoint__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carla_waypoint_types::srv::GetWaypoint_Response>()
{
  return "carla_waypoint_types::srv::GetWaypoint_Response";
}

template<>
inline const char * name<carla_waypoint_types::srv::GetWaypoint_Response>()
{
  return "carla_waypoint_types/srv/GetWaypoint_Response";
}

template<>
struct has_fixed_size<carla_waypoint_types::srv::GetWaypoint_Response>
  : std::integral_constant<bool, has_fixed_size<carla_waypoint_types::msg::CarlaWaypoint>::value> {};

template<>
struct has_bounded_size<carla_waypoint_types::srv::GetWaypoint_Response>
  : std::integral_constant<bool, has_bounded_size<carla_waypoint_types::msg::CarlaWaypoint>::value> {};

template<>
struct is_message<carla_waypoint_types::srv::GetWaypoint_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carla_waypoint_types::srv::GetWaypoint>()
{
  return "carla_waypoint_types::srv::GetWaypoint";
}

template<>
inline const char * name<carla_waypoint_types::srv::GetWaypoint>()
{
  return "carla_waypoint_types/srv/GetWaypoint";
}

template<>
struct has_fixed_size<carla_waypoint_types::srv::GetWaypoint>
  : std::integral_constant<
    bool,
    has_fixed_size<carla_waypoint_types::srv::GetWaypoint_Request>::value &&
    has_fixed_size<carla_waypoint_types::srv::GetWaypoint_Response>::value
  >
{
};

template<>
struct has_bounded_size<carla_waypoint_types::srv::GetWaypoint>
  : std::integral_constant<
    bool,
    has_bounded_size<carla_waypoint_types::srv::GetWaypoint_Request>::value &&
    has_bounded_size<carla_waypoint_types::srv::GetWaypoint_Response>::value
  >
{
};

template<>
struct is_service<carla_waypoint_types::srv::GetWaypoint>
  : std::true_type
{
};

template<>
struct is_service_request<carla_waypoint_types::srv::GetWaypoint_Request>
  : std::true_type
{
};

template<>
struct is_service_response<carla_waypoint_types::srv::GetWaypoint_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CARLA_WAYPOINT_TYPES__SRV__DETAIL__GET_WAYPOINT__TRAITS_HPP_
