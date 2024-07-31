// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pnc_msgs:msg/TrajectoryPoint.idl
// generated code does not contain a copyright notice

#ifndef PNC_MSGS__MSG__DETAIL__TRAJECTORY_POINT__STRUCT_H_
#define PNC_MSGS__MSG__DETAIL__TRAJECTORY_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/TrajectoryPoint in the package pnc_msgs.
typedef struct pnc_msgs__msg__TrajectoryPoint
{
  double x;
  double y;
  double heading;
  double kappa;
  double v;
  double ax;
  double ay;
  double a_tau;
  double time_stamped;
} pnc_msgs__msg__TrajectoryPoint;

// Struct for a sequence of pnc_msgs__msg__TrajectoryPoint.
typedef struct pnc_msgs__msg__TrajectoryPoint__Sequence
{
  pnc_msgs__msg__TrajectoryPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pnc_msgs__msg__TrajectoryPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PNC_MSGS__MSG__DETAIL__TRAJECTORY_POINT__STRUCT_H_
