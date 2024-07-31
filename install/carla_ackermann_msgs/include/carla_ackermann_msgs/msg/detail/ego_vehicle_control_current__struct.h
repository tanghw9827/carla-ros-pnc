// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carla_ackermann_msgs:msg/EgoVehicleControlCurrent.idl
// generated code does not contain a copyright notice

#ifndef CARLA_ACKERMANN_MSGS__MSG__DETAIL__EGO_VEHICLE_CONTROL_CURRENT__STRUCT_H_
#define CARLA_ACKERMANN_MSGS__MSG__DETAIL__EGO_VEHICLE_CONTROL_CURRENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/EgoVehicleControlCurrent in the package carla_ackermann_msgs.
typedef struct carla_ackermann_msgs__msg__EgoVehicleControlCurrent
{
  float time_sec;
  float speed;
  float speed_abs;
  float accel;
} carla_ackermann_msgs__msg__EgoVehicleControlCurrent;

// Struct for a sequence of carla_ackermann_msgs__msg__EgoVehicleControlCurrent.
typedef struct carla_ackermann_msgs__msg__EgoVehicleControlCurrent__Sequence
{
  carla_ackermann_msgs__msg__EgoVehicleControlCurrent * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carla_ackermann_msgs__msg__EgoVehicleControlCurrent__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARLA_ACKERMANN_MSGS__MSG__DETAIL__EGO_VEHICLE_CONTROL_CURRENT__STRUCT_H_
