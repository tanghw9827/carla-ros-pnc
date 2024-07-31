// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carla_ros_scenario_runner_types:msg/CarlaScenarioList.idl
// generated code does not contain a copyright notice

#ifndef CARLA_ROS_SCENARIO_RUNNER_TYPES__MSG__DETAIL__CARLA_SCENARIO_LIST__STRUCT_H_
#define CARLA_ROS_SCENARIO_RUNNER_TYPES__MSG__DETAIL__CARLA_SCENARIO_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'scenarios'
#include "carla_ros_scenario_runner_types/msg/detail/carla_scenario__struct.h"

// Struct defined in msg/CarlaScenarioList in the package carla_ros_scenario_runner_types.
typedef struct carla_ros_scenario_runner_types__msg__CarlaScenarioList
{
  carla_ros_scenario_runner_types__msg__CarlaScenario__Sequence scenarios;
} carla_ros_scenario_runner_types__msg__CarlaScenarioList;

// Struct for a sequence of carla_ros_scenario_runner_types__msg__CarlaScenarioList.
typedef struct carla_ros_scenario_runner_types__msg__CarlaScenarioList__Sequence
{
  carla_ros_scenario_runner_types__msg__CarlaScenarioList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carla_ros_scenario_runner_types__msg__CarlaScenarioList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARLA_ROS_SCENARIO_RUNNER_TYPES__MSG__DETAIL__CARLA_SCENARIO_LIST__STRUCT_H_
