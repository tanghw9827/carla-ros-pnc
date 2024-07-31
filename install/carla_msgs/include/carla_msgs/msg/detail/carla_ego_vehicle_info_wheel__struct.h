// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carla_msgs:msg/CarlaEgoVehicleInfoWheel.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_EGO_VEHICLE_INFO_WHEEL__STRUCT_H_
#define CARLA_MSGS__MSG__DETAIL__CARLA_EGO_VEHICLE_INFO_WHEEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/vector3__struct.h"

// Struct defined in msg/CarlaEgoVehicleInfoWheel in the package carla_msgs.
typedef struct carla_msgs__msg__CarlaEgoVehicleInfoWheel
{
  float tire_friction;
  float damping_rate;
  float max_steer_angle;
  float radius;
  float max_brake_torque;
  float max_handbrake_torque;
  geometry_msgs__msg__Vector3 position;
} carla_msgs__msg__CarlaEgoVehicleInfoWheel;

// Struct for a sequence of carla_msgs__msg__CarlaEgoVehicleInfoWheel.
typedef struct carla_msgs__msg__CarlaEgoVehicleInfoWheel__Sequence
{
  carla_msgs__msg__CarlaEgoVehicleInfoWheel * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carla_msgs__msg__CarlaEgoVehicleInfoWheel__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_EGO_VEHICLE_INFO_WHEEL__STRUCT_H_
