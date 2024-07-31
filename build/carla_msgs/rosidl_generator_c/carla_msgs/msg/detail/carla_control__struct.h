// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carla_msgs:msg/CarlaControl.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_CONTROL__STRUCT_H_
#define CARLA_MSGS__MSG__DETAIL__CARLA_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'PLAY'.
enum
{
  carla_msgs__msg__CarlaControl__PLAY = 0
};

/// Constant 'PAUSE'.
enum
{
  carla_msgs__msg__CarlaControl__PAUSE = 1
};

/// Constant 'STEP_ONCE'.
enum
{
  carla_msgs__msg__CarlaControl__STEP_ONCE = 2
};

// Struct defined in msg/CarlaControl in the package carla_msgs.
typedef struct carla_msgs__msg__CarlaControl
{
  int8_t command;
} carla_msgs__msg__CarlaControl;

// Struct for a sequence of carla_msgs__msg__CarlaControl.
typedef struct carla_msgs__msg__CarlaControl__Sequence
{
  carla_msgs__msg__CarlaControl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carla_msgs__msg__CarlaControl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_CONTROL__STRUCT_H_
