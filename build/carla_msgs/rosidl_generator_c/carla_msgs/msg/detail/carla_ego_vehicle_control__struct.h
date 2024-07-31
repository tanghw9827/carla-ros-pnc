// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carla_msgs:msg/CarlaEgoVehicleControl.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_EGO_VEHICLE_CONTROL__STRUCT_H_
#define CARLA_MSGS__MSG__DETAIL__CARLA_EGO_VEHICLE_CONTROL__STRUCT_H_

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

// Struct defined in msg/CarlaEgoVehicleControl in the package carla_msgs.
typedef struct carla_msgs__msg__CarlaEgoVehicleControl
{
  std_msgs__msg__Header header;
  float throttle;
  float steer;
  float brake;
  bool hand_brake;
  bool reverse;
  int32_t gear;
  bool manual_gear_shift;
} carla_msgs__msg__CarlaEgoVehicleControl;

// Struct for a sequence of carla_msgs__msg__CarlaEgoVehicleControl.
typedef struct carla_msgs__msg__CarlaEgoVehicleControl__Sequence
{
  carla_msgs__msg__CarlaEgoVehicleControl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carla_msgs__msg__CarlaEgoVehicleControl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_EGO_VEHICLE_CONTROL__STRUCT_H_
