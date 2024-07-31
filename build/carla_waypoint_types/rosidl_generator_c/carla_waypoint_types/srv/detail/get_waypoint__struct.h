// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carla_waypoint_types:srv/GetWaypoint.idl
// generated code does not contain a copyright notice

#ifndef CARLA_WAYPOINT_TYPES__SRV__DETAIL__GET_WAYPOINT__STRUCT_H_
#define CARLA_WAYPOINT_TYPES__SRV__DETAIL__GET_WAYPOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'location'
#include "geometry_msgs/msg/detail/point__struct.h"

// Struct defined in srv/GetWaypoint in the package carla_waypoint_types.
typedef struct carla_waypoint_types__srv__GetWaypoint_Request
{
  geometry_msgs__msg__Point location;
} carla_waypoint_types__srv__GetWaypoint_Request;

// Struct for a sequence of carla_waypoint_types__srv__GetWaypoint_Request.
typedef struct carla_waypoint_types__srv__GetWaypoint_Request__Sequence
{
  carla_waypoint_types__srv__GetWaypoint_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carla_waypoint_types__srv__GetWaypoint_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'waypoint'
#include "carla_waypoint_types/msg/detail/carla_waypoint__struct.h"

// Struct defined in srv/GetWaypoint in the package carla_waypoint_types.
typedef struct carla_waypoint_types__srv__GetWaypoint_Response
{
  carla_waypoint_types__msg__CarlaWaypoint waypoint;
} carla_waypoint_types__srv__GetWaypoint_Response;

// Struct for a sequence of carla_waypoint_types__srv__GetWaypoint_Response.
typedef struct carla_waypoint_types__srv__GetWaypoint_Response__Sequence
{
  carla_waypoint_types__srv__GetWaypoint_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carla_waypoint_types__srv__GetWaypoint_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARLA_WAYPOINT_TYPES__SRV__DETAIL__GET_WAYPOINT__STRUCT_H_
