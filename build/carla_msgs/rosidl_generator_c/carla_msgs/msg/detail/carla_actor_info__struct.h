// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carla_msgs:msg/CarlaActorInfo.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_ACTOR_INFO__STRUCT_H_
#define CARLA_MSGS__MSG__DETAIL__CARLA_ACTOR_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'type'
// Member 'rolename'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/CarlaActorInfo in the package carla_msgs.
typedef struct carla_msgs__msg__CarlaActorInfo
{
  uint32_t id;
  uint32_t parent_id;
  rosidl_runtime_c__String type;
  rosidl_runtime_c__String rolename;
} carla_msgs__msg__CarlaActorInfo;

// Struct for a sequence of carla_msgs__msg__CarlaActorInfo.
typedef struct carla_msgs__msg__CarlaActorInfo__Sequence
{
  carla_msgs__msg__CarlaActorInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carla_msgs__msg__CarlaActorInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_ACTOR_INFO__STRUCT_H_
