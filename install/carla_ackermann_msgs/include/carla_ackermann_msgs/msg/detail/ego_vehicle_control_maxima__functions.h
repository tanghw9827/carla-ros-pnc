// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from carla_ackermann_msgs:msg/EgoVehicleControlMaxima.idl
// generated code does not contain a copyright notice

#ifndef CARLA_ACKERMANN_MSGS__MSG__DETAIL__EGO_VEHICLE_CONTROL_MAXIMA__FUNCTIONS_H_
#define CARLA_ACKERMANN_MSGS__MSG__DETAIL__EGO_VEHICLE_CONTROL_MAXIMA__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "carla_ackermann_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "carla_ackermann_msgs/msg/detail/ego_vehicle_control_maxima__struct.h"

/// Initialize msg/EgoVehicleControlMaxima message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * carla_ackermann_msgs__msg__EgoVehicleControlMaxima
 * )) before or use
 * carla_ackermann_msgs__msg__EgoVehicleControlMaxima__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_carla_ackermann_msgs
bool
carla_ackermann_msgs__msg__EgoVehicleControlMaxima__init(carla_ackermann_msgs__msg__EgoVehicleControlMaxima * msg);

/// Finalize msg/EgoVehicleControlMaxima message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carla_ackermann_msgs
void
carla_ackermann_msgs__msg__EgoVehicleControlMaxima__fini(carla_ackermann_msgs__msg__EgoVehicleControlMaxima * msg);

/// Create msg/EgoVehicleControlMaxima message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * carla_ackermann_msgs__msg__EgoVehicleControlMaxima__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_carla_ackermann_msgs
carla_ackermann_msgs__msg__EgoVehicleControlMaxima *
carla_ackermann_msgs__msg__EgoVehicleControlMaxima__create();

/// Destroy msg/EgoVehicleControlMaxima message.
/**
 * It calls
 * carla_ackermann_msgs__msg__EgoVehicleControlMaxima__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carla_ackermann_msgs
void
carla_ackermann_msgs__msg__EgoVehicleControlMaxima__destroy(carla_ackermann_msgs__msg__EgoVehicleControlMaxima * msg);

/// Check for msg/EgoVehicleControlMaxima message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_carla_ackermann_msgs
bool
carla_ackermann_msgs__msg__EgoVehicleControlMaxima__are_equal(const carla_ackermann_msgs__msg__EgoVehicleControlMaxima * lhs, const carla_ackermann_msgs__msg__EgoVehicleControlMaxima * rhs);

/// Copy a msg/EgoVehicleControlMaxima message.
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
ROSIDL_GENERATOR_C_PUBLIC_carla_ackermann_msgs
bool
carla_ackermann_msgs__msg__EgoVehicleControlMaxima__copy(
  const carla_ackermann_msgs__msg__EgoVehicleControlMaxima * input,
  carla_ackermann_msgs__msg__EgoVehicleControlMaxima * output);

/// Initialize array of msg/EgoVehicleControlMaxima messages.
/**
 * It allocates the memory for the number of elements and calls
 * carla_ackermann_msgs__msg__EgoVehicleControlMaxima__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_carla_ackermann_msgs
bool
carla_ackermann_msgs__msg__EgoVehicleControlMaxima__Sequence__init(carla_ackermann_msgs__msg__EgoVehicleControlMaxima__Sequence * array, size_t size);

/// Finalize array of msg/EgoVehicleControlMaxima messages.
/**
 * It calls
 * carla_ackermann_msgs__msg__EgoVehicleControlMaxima__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carla_ackermann_msgs
void
carla_ackermann_msgs__msg__EgoVehicleControlMaxima__Sequence__fini(carla_ackermann_msgs__msg__EgoVehicleControlMaxima__Sequence * array);

/// Create array of msg/EgoVehicleControlMaxima messages.
/**
 * It allocates the memory for the array and calls
 * carla_ackermann_msgs__msg__EgoVehicleControlMaxima__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_carla_ackermann_msgs
carla_ackermann_msgs__msg__EgoVehicleControlMaxima__Sequence *
carla_ackermann_msgs__msg__EgoVehicleControlMaxima__Sequence__create(size_t size);

/// Destroy array of msg/EgoVehicleControlMaxima messages.
/**
 * It calls
 * carla_ackermann_msgs__msg__EgoVehicleControlMaxima__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carla_ackermann_msgs
void
carla_ackermann_msgs__msg__EgoVehicleControlMaxima__Sequence__destroy(carla_ackermann_msgs__msg__EgoVehicleControlMaxima__Sequence * array);

/// Check for msg/EgoVehicleControlMaxima message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_carla_ackermann_msgs
bool
carla_ackermann_msgs__msg__EgoVehicleControlMaxima__Sequence__are_equal(const carla_ackermann_msgs__msg__EgoVehicleControlMaxima__Sequence * lhs, const carla_ackermann_msgs__msg__EgoVehicleControlMaxima__Sequence * rhs);

/// Copy an array of msg/EgoVehicleControlMaxima messages.
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
ROSIDL_GENERATOR_C_PUBLIC_carla_ackermann_msgs
bool
carla_ackermann_msgs__msg__EgoVehicleControlMaxima__Sequence__copy(
  const carla_ackermann_msgs__msg__EgoVehicleControlMaxima__Sequence * input,
  carla_ackermann_msgs__msg__EgoVehicleControlMaxima__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CARLA_ACKERMANN_MSGS__MSG__DETAIL__EGO_VEHICLE_CONTROL_MAXIMA__FUNCTIONS_H_
