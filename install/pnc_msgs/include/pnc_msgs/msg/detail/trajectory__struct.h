// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pnc_msgs:msg/Trajectory.idl
// generated code does not contain a copyright notice

#ifndef PNC_MSGS__MSG__DETAIL__TRAJECTORY__STRUCT_H_
#define PNC_MSGS__MSG__DETAIL__TRAJECTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'points'
#include "pnc_msgs/msg/detail/trajectory_point__struct.h"

// Struct defined in msg/Trajectory in the package pnc_msgs.
typedef struct pnc_msgs__msg__Trajectory
{
  pnc_msgs__msg__TrajectoryPoint__Sequence points;
} pnc_msgs__msg__Trajectory;

// Struct for a sequence of pnc_msgs__msg__Trajectory.
typedef struct pnc_msgs__msg__Trajectory__Sequence
{
  pnc_msgs__msg__Trajectory * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pnc_msgs__msg__Trajectory__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PNC_MSGS__MSG__DETAIL__TRAJECTORY__STRUCT_H_
