// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from carla_ros_scenario_runner_types:msg/CarlaScenarioRunnerStatus.idl
// generated code does not contain a copyright notice

#ifndef CARLA_ROS_SCENARIO_RUNNER_TYPES__MSG__DETAIL__CARLA_SCENARIO_RUNNER_STATUS__FUNCTIONS_H_
#define CARLA_ROS_SCENARIO_RUNNER_TYPES__MSG__DETAIL__CARLA_SCENARIO_RUNNER_STATUS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "carla_ros_scenario_runner_types/msg/rosidl_generator_c__visibility_control.h"

#include "carla_ros_scenario_runner_types/msg/detail/carla_scenario_runner_status__struct.h"

/// Initialize msg/CarlaScenarioRunnerStatus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus
 * )) before or use
 * carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_carla_ros_scenario_runner_types
bool
carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__init(carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus * msg);

/// Finalize msg/CarlaScenarioRunnerStatus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carla_ros_scenario_runner_types
void
carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__fini(carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus * msg);

/// Create msg/CarlaScenarioRunnerStatus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_carla_ros_scenario_runner_types
carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus *
carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__create();

/// Destroy msg/CarlaScenarioRunnerStatus message.
/**
 * It calls
 * carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carla_ros_scenario_runner_types
void
carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__destroy(carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus * msg);

/// Check for msg/CarlaScenarioRunnerStatus message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_carla_ros_scenario_runner_types
bool
carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__are_equal(const carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus * lhs, const carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus * rhs);

/// Copy a msg/CarlaScenarioRunnerStatus message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_carla_ros_scenario_runner_types
bool
carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__copy(
  const carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus * input,
  carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus * output);

/// Initialize array of msg/CarlaScenarioRunnerStatus messages.
/**
 * It allocates the memory for the number of elements and calls
 * carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_carla_ros_scenario_runner_types
bool
carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__Sequence__init(carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__Sequence * array, size_t size);

/// Finalize array of msg/CarlaScenarioRunnerStatus messages.
/**
 * It calls
 * carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carla_ros_scenario_runner_types
void
carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__Sequence__fini(carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__Sequence * array);

/// Create array of msg/CarlaScenarioRunnerStatus messages.
/**
 * It allocates the memory for the array and calls
 * carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_carla_ros_scenario_runner_types
carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__Sequence *
carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__Sequence__create(size_t size);

/// Destroy array of msg/CarlaScenarioRunnerStatus messages.
/**
 * It calls
 * carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carla_ros_scenario_runner_types
void
carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__Sequence__destroy(carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__Sequence * array);

/// Check for msg/CarlaScenarioRunnerStatus message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_carla_ros_scenario_runner_types
bool
carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__Sequence__are_equal(const carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__Sequence * lhs, const carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__Sequence * rhs);

/// Copy an array of msg/CarlaScenarioRunnerStatus messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_carla_ros_scenario_runner_types
bool
carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__Sequence__copy(
  const carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__Sequence * input,
  carla_ros_scenario_runner_types__msg__CarlaScenarioRunnerStatus__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CARLA_ROS_SCENARIO_RUNNER_TYPES__MSG__DETAIL__CARLA_SCENARIO_RUNNER_STATUS__FUNCTIONS_H_
