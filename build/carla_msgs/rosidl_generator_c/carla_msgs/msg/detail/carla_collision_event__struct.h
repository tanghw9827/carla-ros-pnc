// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carla_msgs:msg/CarlaCollisionEvent.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_COLLISION_EVENT__STRUCT_H_
#define CARLA_MSGS__MSG__DETAIL__CARLA_COLLISION_EVENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'normal_impulse'
#include "geometry_msgs/msg/detail/vector3__struct.h"

// Struct defined in msg/CarlaCollisionEvent in the package carla_msgs.
typedef struct carla_msgs__msg__CarlaCollisionEvent
{
  std_msgs__msg__Header header;
  uint32_t other_actor_id;
  geometry_msgs__msg__Vector3 normal_impulse;
} carla_msgs__msg__CarlaCollisionEvent;

// Struct for a sequence of carla_msgs__msg__CarlaCollisionEvent.
typedef struct carla_msgs__msg__CarlaCollisionEvent__Sequence
{
  carla_msgs__msg__CarlaCollisionEvent * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carla_msgs__msg__CarlaCollisionEvent__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_COLLISION_EVENT__STRUCT_H_
