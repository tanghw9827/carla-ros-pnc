// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carla_ackermann_msgs:msg/EgoVehicleControlInfo.idl
// generated code does not contain a copyright notice

#ifndef CARLA_ACKERMANN_MSGS__MSG__DETAIL__EGO_VEHICLE_CONTROL_INFO__STRUCT_H_
#define CARLA_ACKERMANN_MSGS__MSG__DETAIL__EGO_VEHICLE_CONTROL_INFO__STRUCT_H_

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
// Member 'restrictions'
#include "carla_ackermann_msgs/msg/detail/ego_vehicle_control_maxima__struct.h"
// Member 'target'
#include "carla_ackermann_msgs/msg/detail/ego_vehicle_control_target__struct.h"
// Member 'current'
#include "carla_ackermann_msgs/msg/detail/ego_vehicle_control_current__struct.h"
// Member 'status'
#include "carla_ackermann_msgs/msg/detail/ego_vehicle_control_status__struct.h"
// Member 'output'
#include "carla_msgs/msg/detail/carla_ego_vehicle_control__struct.h"

// Struct defined in msg/EgoVehicleControlInfo in the package carla_ackermann_msgs.
typedef struct carla_ackermann_msgs__msg__EgoVehicleControlInfo
{
  std_msgs__msg__Header header;
  carla_ackermann_msgs__msg__EgoVehicleControlMaxima restrictions;
  carla_ackermann_msgs__msg__EgoVehicleControlTarget target;
  carla_ackermann_msgs__msg__EgoVehicleControlCurrent current;
  carla_ackermann_msgs__msg__EgoVehicleControlStatus status;
  carla_msgs__msg__CarlaEgoVehicleControl output;
} carla_ackermann_msgs__msg__EgoVehicleControlInfo;

// Struct for a sequence of carla_ackermann_msgs__msg__EgoVehicleControlInfo.
typedef struct carla_ackermann_msgs__msg__EgoVehicleControlInfo__Sequence
{
  carla_ackermann_msgs__msg__EgoVehicleControlInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carla_ackermann_msgs__msg__EgoVehicleControlInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARLA_ACKERMANN_MSGS__MSG__DETAIL__EGO_VEHICLE_CONTROL_INFO__STRUCT_H_
