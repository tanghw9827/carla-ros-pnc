// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carla_ros_scenario_runner_types:srv/ExecuteScenario.idl
// generated code does not contain a copyright notice

#ifndef CARLA_ROS_SCENARIO_RUNNER_TYPES__SRV__DETAIL__EXECUTE_SCENARIO__STRUCT_H_
#define CARLA_ROS_SCENARIO_RUNNER_TYPES__SRV__DETAIL__EXECUTE_SCENARIO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'scenario'
#include "carla_ros_scenario_runner_types/msg/detail/carla_scenario__struct.h"

// Struct defined in srv/ExecuteScenario in the package carla_ros_scenario_runner_types.
typedef struct carla_ros_scenario_runner_types__srv__ExecuteScenario_Request
{
  carla_ros_scenario_runner_types__msg__CarlaScenario scenario;
} carla_ros_scenario_runner_types__srv__ExecuteScenario_Request;

// Struct for a sequence of carla_ros_scenario_runner_types__srv__ExecuteScenario_Request.
typedef struct carla_ros_scenario_runner_types__srv__ExecuteScenario_Request__Sequence
{
  carla_ros_scenario_runner_types__srv__ExecuteScenario_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carla_ros_scenario_runner_types__srv__ExecuteScenario_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/ExecuteScenario in the package carla_ros_scenario_runner_types.
typedef struct carla_ros_scenario_runner_types__srv__ExecuteScenario_Response
{
  bool result;
} carla_ros_scenario_runner_types__srv__ExecuteScenario_Response;

// Struct for a sequence of carla_ros_scenario_runner_types__srv__ExecuteScenario_Response.
typedef struct carla_ros_scenario_runner_types__srv__ExecuteScenario_Response__Sequence
{
  carla_ros_scenario_runner_types__srv__ExecuteScenario_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carla_ros_scenario_runner_types__srv__ExecuteScenario_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARLA_ROS_SCENARIO_RUNNER_TYPES__SRV__DETAIL__EXECUTE_SCENARIO__STRUCT_H_
