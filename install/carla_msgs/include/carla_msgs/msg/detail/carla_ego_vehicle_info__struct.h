// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carla_msgs:msg/CarlaEgoVehicleInfo.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_EGO_VEHICLE_INFO__STRUCT_H_
#define CARLA_MSGS__MSG__DETAIL__CARLA_EGO_VEHICLE_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'type'
// Member 'rolename'
#include "rosidl_runtime_c/string.h"
// Member 'wheels'
#include "carla_msgs/msg/detail/carla_ego_vehicle_info_wheel__struct.h"
// Member 'center_of_mass'
#include "geometry_msgs/msg/detail/vector3__struct.h"

// Struct defined in msg/CarlaEgoVehicleInfo in the package carla_msgs.
typedef struct carla_msgs__msg__CarlaEgoVehicleInfo
{
  uint32_t id;
  rosidl_runtime_c__String type;
  rosidl_runtime_c__String rolename;
  carla_msgs__msg__CarlaEgoVehicleInfoWheel__Sequence wheels;
  float max_rpm;
  float moi;
  float damping_rate_full_throttle;
  float damping_rate_zero_throttle_clutch_engaged;
  float damping_rate_zero_throttle_clutch_disengaged;
  bool use_gear_autobox;
  float gear_switch_time;
  float clutch_strength;
  float mass;
  float drag_coefficient;
  geometry_msgs__msg__Vector3 center_of_mass;
} carla_msgs__msg__CarlaEgoVehicleInfo;

// Struct for a sequence of carla_msgs__msg__CarlaEgoVehicleInfo.
typedef struct carla_msgs__msg__CarlaEgoVehicleInfo__Sequence
{
  carla_msgs__msg__CarlaEgoVehicleInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carla_msgs__msg__CarlaEgoVehicleInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_EGO_VEHICLE_INFO__STRUCT_H_
