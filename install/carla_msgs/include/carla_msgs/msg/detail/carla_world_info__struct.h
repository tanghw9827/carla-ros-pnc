// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carla_msgs:msg/CarlaWorldInfo.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_WORLD_INFO__STRUCT_H_
#define CARLA_MSGS__MSG__DETAIL__CARLA_WORLD_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'map_name'
// Member 'opendrive'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/CarlaWorldInfo in the package carla_msgs.
typedef struct carla_msgs__msg__CarlaWorldInfo
{
  rosidl_runtime_c__String map_name;
  rosidl_runtime_c__String opendrive;
} carla_msgs__msg__CarlaWorldInfo;

// Struct for a sequence of carla_msgs__msg__CarlaWorldInfo.
typedef struct carla_msgs__msg__CarlaWorldInfo__Sequence
{
  carla_msgs__msg__CarlaWorldInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carla_msgs__msg__CarlaWorldInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_WORLD_INFO__STRUCT_H_
