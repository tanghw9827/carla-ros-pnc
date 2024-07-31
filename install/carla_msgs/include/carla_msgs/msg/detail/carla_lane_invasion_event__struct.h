// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carla_msgs:msg/CarlaLaneInvasionEvent.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_LANE_INVASION_EVENT__STRUCT_H_
#define CARLA_MSGS__MSG__DETAIL__CARLA_LANE_INVASION_EVENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'LANE_MARKING_OTHER'.
enum
{
  carla_msgs__msg__CarlaLaneInvasionEvent__LANE_MARKING_OTHER = 0l
};

/// Constant 'LANE_MARKING_BROKEN'.
enum
{
  carla_msgs__msg__CarlaLaneInvasionEvent__LANE_MARKING_BROKEN = 1l
};

/// Constant 'LANE_MARKING_SOLID'.
enum
{
  carla_msgs__msg__CarlaLaneInvasionEvent__LANE_MARKING_SOLID = 2l
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'crossed_lane_markings'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/CarlaLaneInvasionEvent in the package carla_msgs.
typedef struct carla_msgs__msg__CarlaLaneInvasionEvent
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__int32__Sequence crossed_lane_markings;
} carla_msgs__msg__CarlaLaneInvasionEvent;

// Struct for a sequence of carla_msgs__msg__CarlaLaneInvasionEvent.
typedef struct carla_msgs__msg__CarlaLaneInvasionEvent__Sequence
{
  carla_msgs__msg__CarlaLaneInvasionEvent * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carla_msgs__msg__CarlaLaneInvasionEvent__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_LANE_INVASION_EVENT__STRUCT_H_
