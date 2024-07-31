// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from carla_waypoint_types:srv/GetActorWaypoint.idl
// generated code does not contain a copyright notice

#ifndef CARLA_WAYPOINT_TYPES__SRV__DETAIL__GET_ACTOR_WAYPOINT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define CARLA_WAYPOINT_TYPES__SRV__DETAIL__GET_ACTOR_WAYPOINT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "carla_waypoint_types/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "carla_waypoint_types/srv/detail/get_actor_waypoint__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace carla_waypoint_types
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carla_waypoint_types
cdr_serialize(
  const carla_waypoint_types::srv::GetActorWaypoint_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carla_waypoint_types
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  carla_waypoint_types::srv::GetActorWaypoint_Request & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carla_waypoint_types
get_serialized_size(
  const carla_waypoint_types::srv::GetActorWaypoint_Request & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carla_waypoint_types
max_serialized_size_GetActorWaypoint_Request(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace carla_waypoint_types

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carla_waypoint_types
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carla_waypoint_types, srv, GetActorWaypoint_Request)();

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "carla_waypoint_types/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
// already included above
// #include "carla_waypoint_types/srv/detail/get_actor_waypoint__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// already included above
// #include "fastcdr/Cdr.h"

namespace carla_waypoint_types
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carla_waypoint_types
cdr_serialize(
  const carla_waypoint_types::srv::GetActorWaypoint_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carla_waypoint_types
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  carla_waypoint_types::srv::GetActorWaypoint_Response & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carla_waypoint_types
get_serialized_size(
  const carla_waypoint_types::srv::GetActorWaypoint_Response & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carla_waypoint_types
max_serialized_size_GetActorWaypoint_Response(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace carla_waypoint_types

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carla_waypoint_types
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carla_waypoint_types, srv, GetActorWaypoint_Response)();

#ifdef __cplusplus
}
#endif

#include "rmw/types.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "carla_waypoint_types/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carla_waypoint_types
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carla_waypoint_types, srv, GetActorWaypoint)();

#ifdef __cplusplus
}
#endif

#endif  // CARLA_WAYPOINT_TYPES__SRV__DETAIL__GET_ACTOR_WAYPOINT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
