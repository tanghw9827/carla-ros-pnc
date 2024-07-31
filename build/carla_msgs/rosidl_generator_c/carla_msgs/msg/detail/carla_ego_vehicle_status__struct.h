// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carla_msgs:msg/CarlaEgoVehicleStatus.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_EGO_VEHICLE_STATUS__STRUCT_H_
#define CARLA_MSGS__MSG__DETAIL__CARLA_EGO_VEHICLE_STATUS__STRUCT_H_

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
// Member 'acceleration'
#include "geometry_msgs/msg/detail/accel__struct.h"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__struct.h"
// Member 'control'
#include "carla_msgs/msg/detail/carla_ego_vehicle_control__struct.h"

// Struct defined in msg/CarlaEgoVehicleStatus in the package carla_msgs.
typedef struct carla_msgs__msg__CarlaEgoVehicleStatus
{
  std_msgs__msg__Header header;
  float velocity;
  geometry_msgs__msg__Accel acceleration;
  geometry_msgs__msg__Quaternion orientation;
  carla_msgs__msg__CarlaEgoVehicleControl control;
} carla_msgs__msg__CarlaEgoVehicleStatus;

// Struct for a sequence of carla_msgs__msg__CarlaEgoVehicleStatus.
typedef struct carla_msgs__msg__CarlaEgoVehicleStatus__Sequence
{
  carla_msgs__msg__CarlaEgoVehicleStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carla_msgs__msg__CarlaEgoVehicleStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_EGO_VEHICLE_STATUS__STRUCT_H_
