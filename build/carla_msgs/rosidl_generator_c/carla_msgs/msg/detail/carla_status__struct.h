// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carla_msgs:msg/CarlaStatus.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_STATUS__STRUCT_H_
#define CARLA_MSGS__MSG__DETAIL__CARLA_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/CarlaStatus in the package carla_msgs.
typedef struct carla_msgs__msg__CarlaStatus
{
  uint64_t frame;
  float fixed_delta_seconds;
  bool synchronous_mode;
  bool synchronous_mode_running;
} carla_msgs__msg__CarlaStatus;

// Struct for a sequence of carla_msgs__msg__CarlaStatus.
typedef struct carla_msgs__msg__CarlaStatus__Sequence
{
  carla_msgs__msg__CarlaStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carla_msgs__msg__CarlaStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_STATUS__STRUCT_H_
