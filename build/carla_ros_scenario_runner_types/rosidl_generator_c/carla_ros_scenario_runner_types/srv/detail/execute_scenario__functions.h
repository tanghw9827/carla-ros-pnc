// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from carla_ros_scenario_runner_types:srv/ExecuteScenario.idl
// generated code does not contain a copyright notice

#ifndef CARLA_ROS_SCENARIO_RUNNER_TYPES__SRV__DETAIL__EXECUTE_SCENARIO__FUNCTIONS_H_
#define CARLA_ROS_SCENARIO_RUNNER_TYPES__SRV__DETAIL__EXECUTE_SCENARIO__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "carla_ros_scenario_runner_types/msg/rosidl_generator_c__visibility_control.h"

#include "carla_ros_scenario_runner_types/srv/detail/execute_scenario__struct.h"

/// Initialize srv/ExecuteScenario message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * carla_ros_scenario_runner_types__srv__ExecuteScenario_Request
 * )) before or use
 * carla_ros_scenario_runner_types__srv__ExecuteScenario_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_carla_ros_scenario_runner_types
bool
carla_ros_scenario_runner_types__srv__ExecuteScenario_Request__init(carla_ros_scenario_runner_types__srv__ExecuteScenario_Request * msg);

/// Finalize srv/ExecuteScenario message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carla_ros_scenario_runner_types
void
carla_ros_scenario_runner_types__srv__ExecuteScenario_Request__fini(carla_ros_scenario_runner_types__srv__ExecuteScenario_Request * msg);

/// Create srv/ExecuteScenario message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * carla_ros_scenario_runner_types__srv__ExecuteScenario_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_carla_ros_scenario_runner_types
carla_ros_scenario_runner_types__srv__ExecuteScenario_Request *
carla_ros_scenario_runner_types__srv__ExecuteScenario_Request__create();

/// Destroy srv/ExecuteScenario message.
/**
 * It calls
 * carla_ros_scenario_runner_types__srv__ExecuteScenario_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carla_ros_scenario_runner_types
void
carla_ros_scenario_runner_types__srv__ExecuteScenario_Request__destroy(carla_ros_scenario_runner_types__srv__ExecuteScenario_Request * msg);

/// Check for srv/ExecuteScenario message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_carla_ros_scenario_runner_types
bool
carla_ros_scenario_runner_types__srv__ExecuteScenario_Request__are_equal(const carla_ros_scenario_runner_types__srv__ExecuteScenario_Request * lhs, const carla_ros_scenario_runner_types__srv__ExecuteScenario_Request * rhs);

/// Copy a srv/ExecuteScenario message.
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
carla_ros_scenario_runner_types__srv__ExecuteScenario_Request__copy(
  const carla_ros_scenario_runner_types__srv__ExecuteScenario_Request * input,
  carla_ros_scenario_runner_types__srv__ExecuteScenario_Request * output);

/// Initialize array of srv/ExecuteScenario messages.
/**
 * It allocates the memory for the number of elements and calls
 * carla_ros_scenario_runner_types__srv__ExecuteScenario_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_carla_ros_scenario_runner_types
bool
carla_ros_scenario_runner_types__srv__ExecuteScenario_Request__Sequence__init(carla_ros_scenario_runner_types__srv__ExecuteScenario_Request__Sequence * array, size_t size);

/// Finalize array of srv/ExecuteScenario messages.
/**
 * It calls
 * carla_ros_scenario_runner_types__srv__ExecuteScenario_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carla_ros_scenario_runner_types
void
carla_ros_scenario_runner_types__srv__ExecuteScenario_Request__Sequence__fini(carla_ros_scenario_runner_types__srv__ExecuteScenario_Request__Sequence * array);

/// Create array of srv/ExecuteScenario messages.
/**
 * It allocates the memory for the array and calls
 * carla_ros_scenario_runner_types__srv__ExecuteScenario_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_carla_ros_scenario_runner_types
carla_ros_scenario_runner_types__srv__ExecuteScenario_Request__Sequence *
carla_ros_scenario_runner_types__srv__ExecuteScenario_Request__Sequence__create(size_t size);

/// Destroy array of srv/ExecuteScenario messages.
/**
 * It calls
 * carla_ros_scenario_runner_types__srv__ExecuteScenario_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carla_ros_scenario_runner_types
void
carla_ros_scenario_runner_types__srv__ExecuteScenario_Request__Sequence__destroy(carla_ros_scenario_runner_types__srv__ExecuteScenario_Request__Sequence * array);

/// Check for srv/ExecuteScenario message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_carla_ros_scenario_runner_types
bool
carla_ros_scenario_runner_types__srv__ExecuteScenario_Request__Sequence__are_equal(const carla_ros_scenario_runner_types__srv__ExecuteScenario_Request__Sequence * lhs, const carla_ros_scenario_runner_types__srv__ExecuteScenario_Request__Sequence * rhs);

/// Copy an array of srv/ExecuteScenario messages.
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
carla_ros_scenario_runner_types__srv__ExecuteScenario_Request__Sequence__copy(
  const carla_ros_scenario_runner_types__srv__ExecuteScenario_Request__Sequence * input,
  carla_ros_scenario_runner_types__srv__ExecuteScenario_Request__Sequence * output);

/// Initialize srv/ExecuteScenario message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * carla_ros_scenario_runner_types__srv__ExecuteScenario_Response
 * )) before or use
 * carla_ros_scenario_runner_types__srv__ExecuteScenario_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_carla_ros_scenario_runner_types
bool
carla_ros_scenario_runner_types__srv__ExecuteScenario_Response__init(carla_ros_scenario_runner_types__srv__ExecuteScenario_Response * msg);

/// Finalize srv/ExecuteScenario message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carla_ros_scenario_runner_types
void
carla_ros_scenario_runner_types__srv__ExecuteScenario_Response__fini(carla_ros_scenario_runner_types__srv__ExecuteScenario_Response * msg);

/// Create srv/ExecuteScenario message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * carla_ros_scenario_runner_types__srv__ExecuteScenario_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_carla_ros_scenario_runner_types
carla_ros_scenario_runner_types__srv__ExecuteScenario_Response *
carla_ros_scenario_runner_types__srv__ExecuteScenario_Response__create();

/// Destroy srv/ExecuteScenario message.
/**
 * It calls
 * carla_ros_scenario_runner_types__srv__ExecuteScenario_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carla_ros_scenario_runner_types
void
carla_ros_scenario_runner_types__srv__ExecuteScenario_Response__destroy(carla_ros_scenario_runner_types__srv__ExecuteScenario_Response * msg);

/// Check for srv/ExecuteScenario message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_carla_ros_scenario_runner_types
bool
carla_ros_scenario_runner_types__srv__ExecuteScenario_Response__are_equal(const carla_ros_scenario_runner_types__srv__ExecuteScenario_Response * lhs, const carla_ros_scenario_runner_types__srv__ExecuteScenario_Response * rhs);

/// Copy a srv/ExecuteScenario message.
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
carla_ros_scenario_runner_types__srv__ExecuteScenario_Response__copy(
  const carla_ros_scenario_runner_types__srv__ExecuteScenario_Response * input,
  carla_ros_scenario_runner_types__srv__ExecuteScenario_Response * output);

/// Initialize array of srv/ExecuteScenario messages.
/**
 * It allocates the memory for the number of elements and calls
 * carla_ros_scenario_runner_types__srv__ExecuteScenario_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_carla_ros_scenario_runner_types
bool
carla_ros_scenario_runner_types__srv__ExecuteScenario_Response__Sequence__init(carla_ros_scenario_runner_types__srv__ExecuteScenario_Response__Sequence * array, size_t size);

/// Finalize array of srv/ExecuteScenario messages.
/**
 * It calls
 * carla_ros_scenario_runner_types__srv__ExecuteScenario_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carla_ros_scenario_runner_types
void
carla_ros_scenario_runner_types__srv__ExecuteScenario_Response__Sequence__fini(carla_ros_scenario_runner_types__srv__ExecuteScenario_Response__Sequence * array);

/// Create array of srv/ExecuteScenario messages.
/**
 * It allocates the memory for the array and calls
 * carla_ros_scenario_runner_types__srv__ExecuteScenario_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_carla_ros_scenario_runner_types
carla_ros_scenario_runner_types__srv__ExecuteScenario_Response__Sequence *
carla_ros_scenario_runner_types__srv__ExecuteScenario_Response__Sequence__create(size_t size);

/// Destroy array of srv/ExecuteScenario messages.
/**
 * It calls
 * carla_ros_scenario_runner_types__srv__ExecuteScenario_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carla_ros_scenario_runner_types
void
carla_ros_scenario_runner_types__srv__ExecuteScenario_Response__Sequence__destroy(carla_ros_scenario_runner_types__srv__ExecuteScenario_Response__Sequence * array);

/// Check for srv/ExecuteScenario message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_carla_ros_scenario_runner_types
bool
carla_ros_scenario_runner_types__srv__ExecuteScenario_Response__Sequence__are_equal(const carla_ros_scenario_runner_types__srv__ExecuteScenario_Response__Sequence * lhs, const carla_ros_scenario_runner_types__srv__ExecuteScenario_Response__Sequence * rhs);

/// Copy an array of srv/ExecuteScenario messages.
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
carla_ros_scenario_runner_types__srv__ExecuteScenario_Response__Sequence__copy(
  const carla_ros_scenario_runner_types__srv__ExecuteScenario_Response__Sequence * input,
  carla_ros_scenario_runner_types__srv__ExecuteScenario_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CARLA_ROS_SCENARIO_RUNNER_TYPES__SRV__DETAIL__EXECUTE_SCENARIO__FUNCTIONS_H_
