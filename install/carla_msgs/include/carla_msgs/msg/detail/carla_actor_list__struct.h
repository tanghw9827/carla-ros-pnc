// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carla_msgs:msg/CarlaActorList.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_ACTOR_LIST__STRUCT_H_
#define CARLA_MSGS__MSG__DETAIL__CARLA_ACTOR_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'actors'
#include "carla_msgs/msg/detail/carla_actor_info__struct.h"

// Struct defined in msg/CarlaActorList in the package carla_msgs.
typedef struct carla_msgs__msg__CarlaActorList
{
  carla_msgs__msg__CarlaActorInfo__Sequence actors;
} carla_msgs__msg__CarlaActorList;

// Struct for a sequence of carla_msgs__msg__CarlaActorList.
typedef struct carla_msgs__msg__CarlaActorList__Sequence
{
  carla_msgs__msg__CarlaActorList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carla_msgs__msg__CarlaActorList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_ACTOR_LIST__STRUCT_H_
