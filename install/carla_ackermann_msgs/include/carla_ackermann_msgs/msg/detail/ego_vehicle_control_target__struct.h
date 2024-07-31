// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carla_ackermann_msgs:msg/EgoVehicleControlTarget.idl
// generated code does not contain a copyright notice

#ifndef CARLA_ACKERMANN_MSGS__MSG__DETAIL__EGO_VEHICLE_CONTROL_TARGET__STRUCT_H_
#define CARLA_ACKERMANN_MSGS__MSG__DETAIL__EGO_VEHICLE_CONTROL_TARGET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/EgoVehicleControlTarget in the package carla_ackermann_msgs.
typedef struct carla_ackermann_msgs__msg__EgoVehicleControlTarget
{
  float steering_angle;
  float speed;
  float speed_abs;
  float accel;
  float jerk;
} carla_ackermann_msgs__msg__EgoVehicleControlTarget;

// Struct for a sequence of carla_ackermann_msgs__msg__EgoVehicleControlTarget.
typedef struct carla_ackermann_msgs__msg__EgoVehicleControlTarget__Sequence
{
  carla_ackermann_msgs__msg__EgoVehicleControlTarget * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carla_ackermann_msgs__msg__EgoVehicleControlTarget__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARLA_ACKERMANN_MSGS__MSG__DETAIL__EGO_VEHICLE_CONTROL_TARGET__STRUCT_H_
