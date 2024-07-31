// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carla_ros_scenario_runner_types:msg/CarlaScenario.idl
// generated code does not contain a copyright notice

#ifndef CARLA_ROS_SCENARIO_RUNNER_TYPES__MSG__DETAIL__CARLA_SCENARIO__STRUCT_H_
#define CARLA_ROS_SCENARIO_RUNNER_TYPES__MSG__DETAIL__CARLA_SCENARIO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'scenario_file'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/CarlaScenario in the package carla_ros_scenario_runner_types.
typedef struct carla_ros_scenario_runner_types__msg__CarlaScenario
{
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String scenario_file;
} carla_ros_scenario_runner_types__msg__CarlaScenario;

// Struct for a sequence of carla_ros_scenario_runner_types__msg__CarlaScenario.
typedef struct carla_ros_scenario_runner_types__msg__CarlaScenario__Sequence
{
  carla_ros_scenario_runner_types__msg__CarlaScenario * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carla_ros_scenario_runner_types__msg__CarlaScenario__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARLA_ROS_SCENARIO_RUNNER_TYPES__MSG__DETAIL__CARLA_SCENARIO__STRUCT_H_
