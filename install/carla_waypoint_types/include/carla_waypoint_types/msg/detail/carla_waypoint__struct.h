// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carla_waypoint_types:msg/CarlaWaypoint.idl
// generated code does not contain a copyright notice

#ifndef CARLA_WAYPOINT_TYPES__MSG__DETAIL__CARLA_WAYPOINT__STRUCT_H_
#define CARLA_WAYPOINT_TYPES__MSG__DETAIL__CARLA_WAYPOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

// Struct defined in msg/CarlaWaypoint in the package carla_waypoint_types.
typedef struct carla_waypoint_types__msg__CarlaWaypoint
{
  int32_t road_id;
  int32_t section_id;
  int32_t lane_id;
  double lane_width;
  bool is_junction;
  geometry_msgs__msg__Pose pose;
} carla_waypoint_types__msg__CarlaWaypoint;

// Struct for a sequence of carla_waypoint_types__msg__CarlaWaypoint.
typedef struct carla_waypoint_types__msg__CarlaWaypoint__Sequence
{
  carla_waypoint_types__msg__CarlaWaypoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carla_waypoint_types__msg__CarlaWaypoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARLA_WAYPOINT_TYPES__MSG__DETAIL__CARLA_WAYPOINT__STRUCT_H_
