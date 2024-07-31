// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carla_ros_scenario_runner_types:msg/CarlaScenarioRunnerStatus.idl
// generated code does not contain a copyright notice

#ifndef CARLA_ROS_SCENARIO_RUNNER_TYPES__MSG__DETAIL__CARLA_SCENARIO_RUNNER_STATUS__STRUCT_H_
#define CARLA_ROS_SCENARIO_RUNNER_TYPES__MSG__DETAIL__CARLA_SCENARIO_RUNNER_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STOPPED'.
enum
{
  carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__STOPPED = 0
};

/// Constant 'STARTING'.
enum
{
  carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__STARTING = 1
};

/// Constant 'RUNNING'.
enum
{
  carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__RUNNING = 2
};

/// Constant 'SHUTTINGDOWN'.
enum
{
  carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__SHUTTINGDOWN = 3
};

/// Constant 'ERROR'.
enum
{
  carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__ERROR = 4
};

// Struct defined in msg/CarlaScenarioRunnerStatus in the package carla_ros_scenario_runner_types.
typedef struct carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus
{
  uint8_t status;
} carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus;

// Struct for a sequence of carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus.
typedef struct carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__Sequence
{
  carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARLA_ROS_SCENARIO_RUNNER_TYPES__MSG__DETAIL__CARLA_SCENARIO_RUNNER_STATUS__STRUCT_H_
