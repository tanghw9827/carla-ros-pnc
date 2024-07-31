// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carla_msgs:msg/CarlaTrafficLightInfo.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_TRAFFIC_LIGHT_INFO__STRUCT_H_
#define CARLA_MSGS__MSG__DETAIL__CARLA_TRAFFIC_LIGHT_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'transform'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'trigger_volume'
#include "carla_msgs/msg/detail/carla_bounding_box__struct.h"

// Struct defined in msg/CarlaTrafficLightInfo in the package carla_msgs.
typedef struct carla_msgs__msg__CarlaTrafficLightInfo
{
  uint32_t id;
  geometry_msgs__msg__Pose transform;
  carla_msgs__msg__CarlaBoundingBox trigger_volume;
} carla_msgs__msg__CarlaTrafficLightInfo;

// Struct for a sequence of carla_msgs__msg__CarlaTrafficLightInfo.
typedef struct carla_msgs__msg__CarlaTrafficLightInfo__Sequence
{
  carla_msgs__msg__CarlaTrafficLightInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carla_msgs__msg__CarlaTrafficLightInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_TRAFFIC_LIGHT_INFO__STRUCT_H_
