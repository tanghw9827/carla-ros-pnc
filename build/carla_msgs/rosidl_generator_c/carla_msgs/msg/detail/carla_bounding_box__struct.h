// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carla_msgs:msg/CarlaBoundingBox.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_BOUNDING_BOX__STRUCT_H_
#define CARLA_MSGS__MSG__DETAIL__CARLA_BOUNDING_BOX__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'center'
// Member 'size'
#include "geometry_msgs/msg/detail/vector3__struct.h"

// Struct defined in msg/CarlaBoundingBox in the package carla_msgs.
typedef struct carla_msgs__msg__CarlaBoundingBox
{
  geometry_msgs__msg__Vector3 center;
  geometry_msgs__msg__Vector3 size;
} carla_msgs__msg__CarlaBoundingBox;

// Struct for a sequence of carla_msgs__msg__CarlaBoundingBox.
typedef struct carla_msgs__msg__CarlaBoundingBox__Sequence
{
  carla_msgs__msg__CarlaBoundingBox * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carla_msgs__msg__CarlaBoundingBox__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_BOUNDING_BOX__STRUCT_H_
