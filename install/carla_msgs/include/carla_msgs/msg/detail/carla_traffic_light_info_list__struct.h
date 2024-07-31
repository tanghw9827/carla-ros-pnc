// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carla_msgs:msg/CarlaTrafficLightInfoList.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_TRAFFIC_LIGHT_INFO_LIST__STRUCT_H_
#define CARLA_MSGS__MSG__DETAIL__CARLA_TRAFFIC_LIGHT_INFO_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'traffic_lights'
#include "carla_msgs/msg/detail/carla_traffic_light_info__struct.h"

// Struct defined in msg/CarlaTrafficLightInfoList in the package carla_msgs.
typedef struct carla_msgs__msg__CarlaTrafficLightInfoList
{
  carla_msgs__msg__CarlaTrafficLightInfo__Sequence traffic_lights;
} carla_msgs__msg__CarlaTrafficLightInfoList;

// Struct for a sequence of carla_msgs__msg__CarlaTrafficLightInfoList.
typedef struct carla_msgs__msg__CarlaTrafficLightInfoList__Sequence
{
  carla_msgs__msg__CarlaTrafficLightInfoList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carla_msgs__msg__CarlaTrafficLightInfoList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_TRAFFIC_LIGHT_INFO_LIST__STRUCT_H_
