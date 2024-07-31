// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carla_msgs:msg/CarlaTrafficLightStatus.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_TRAFFIC_LIGHT_STATUS__STRUCT_H_
#define CARLA_MSGS__MSG__DETAIL__CARLA_TRAFFIC_LIGHT_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'RED'.
enum
{
  carla_msgs__msg__CarlaTrafficLightStatus__RED = 0
};

/// Constant 'YELLOW'.
enum
{
  carla_msgs__msg__CarlaTrafficLightStatus__YELLOW = 1
};

/// Constant 'GREEN'.
enum
{
  carla_msgs__msg__CarlaTrafficLightStatus__GREEN = 2
};

/// Constant 'OFF'.
enum
{
  carla_msgs__msg__CarlaTrafficLightStatus__OFF = 3
};

/// Constant 'UNKNOWN'.
enum
{
  carla_msgs__msg__CarlaTrafficLightStatus__UNKNOWN = 4
};

// Struct defined in msg/CarlaTrafficLightStatus in the package carla_msgs.
typedef struct carla_msgs__msg__CarlaTrafficLightStatus
{
  uint32_t id;
  uint8_t state;
} carla_msgs__msg__CarlaTrafficLightStatus;

// Struct for a sequence of carla_msgs__msg__CarlaTrafficLightStatus.
typedef struct carla_msgs__msg__CarlaTrafficLightStatus__Sequence
{
  carla_msgs__msg__CarlaTrafficLightStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carla_msgs__msg__CarlaTrafficLightStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_TRAFFIC_LIGHT_STATUS__STRUCT_H_
