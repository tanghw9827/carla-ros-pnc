// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carla_waypoint_types:srv/GetActorWaypoint.idl
// generated code does not contain a copyright notice

#ifndef CARLA_WAYPOINT_TYPES__SRV__DETAIL__GET_ACTOR_WAYPOINT__STRUCT_H_
#define CARLA_WAYPOINT_TYPES__SRV__DETAIL__GET_ACTOR_WAYPOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/GetActorWaypoint in the package carla_waypoint_types.
typedef struct carla_waypoint_types__srv__GetActorWaypoint_Request
{
  uint32_t id;
} carla_waypoint_types__srv__GetActorWaypoint_Request;

// Struct for a sequence of carla_waypoint_types__srv__GetActorWaypoint_Request.
typedef struct carla_waypoint_types__srv__GetActorWaypoint_Request__Sequence
{
  carla_waypoint_types__srv__GetActorWaypoint_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carla_waypoint_types__srv__GetActorWaypoint_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'waypoint'
#include "carla_waypoint_types/msg/detail/carla_waypoint__struct.h"

// Struct defined in srv/GetActorWaypoint in the package carla_waypoint_types.
typedef struct carla_waypoint_types__srv__GetActorWaypoint_Response
{
  carla_waypoint_types__msg__CarlaWaypoint waypoint;
} carla_waypoint_types__srv__GetActorWaypoint_Response;

// Struct for a sequence of carla_waypoint_types__srv__GetActorWaypoint_Response.
typedef struct carla_waypoint_types__srv__GetActorWaypoint_Response__Sequence
{
  carla_waypoint_types__srv__GetActorWaypoint_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carla_waypoint_types__srv__GetActorWaypoint_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARLA_WAYPOINT_TYPES__SRV__DETAIL__GET_ACTOR_WAYPOINT__STRUCT_H_
