// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from carla_msgs:msg/CarlaWeatherParameters.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_WEATHER_PARAMETERS__FUNCTIONS_H_
#define CARLA_MSGS__MSG__DETAIL__CARLA_WEATHER_PARAMETERS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "carla_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "carla_msgs/msg/detail/carla_weather_parameters__struct.h"

/// Initialize msg/CarlaWeatherParameters message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * carla_msgs__msg__CarlaWeatherParameters
 * )) before or use
 * carla_msgs__msg__CarlaWeatherParameters__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_carla_msgs
bool
carla_msgs__msg__CarlaWeatherParameters__init(carla_msgs__msg__CarlaWeatherParameters * msg);

/// Finalize msg/CarlaWeatherParameters message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carla_msgs
void
carla_msgs__msg__CarlaWeatherParameters__fini(carla_msgs__msg__CarlaWeatherParameters * msg);

/// Create msg/CarlaWeatherParameters message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * carla_msgs__msg__CarlaWeatherParameters__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_carla_msgs
carla_msgs__msg__CarlaWeatherParameters *
carla_msgs__msg__CarlaWeatherParameters__create();

/// Destroy msg/CarlaWeatherParameters message.
/**
 * It calls
 * carla_msgs__msg__CarlaWeatherParameters__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carla_msgs
void
carla_msgs__msg__CarlaWeatherParameters__destroy(carla_msgs__msg__CarlaWeatherParameters * msg);

/// Check for msg/CarlaWeatherParameters message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_carla_msgs
bool
carla_msgs__msg__CarlaWeatherParameters__are_equal(const carla_msgs__msg__CarlaWeatherParameters * lhs, const carla_msgs__msg__CarlaWeatherParameters * rhs);

/// Copy a msg/CarlaWeatherParameters message.
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
ROSIDL_GENERATOR_C_PUBLIC_carla_msgs
bool
carla_msgs__msg__CarlaWeatherParameters__copy(
  const carla_msgs__msg__CarlaWeatherParameters * input,
  carla_msgs__msg__CarlaWeatherParameters * output);

/// Initialize array of msg/CarlaWeatherParameters messages.
/**
 * It allocates the memory for the number of elements and calls
 * carla_msgs__msg__CarlaWeatherParameters__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_carla_msgs
bool
carla_msgs__msg__CarlaWeatherParameters__Sequence__init(carla_msgs__msg__CarlaWeatherParameters__Sequence * array, size_t size);

/// Finalize array of msg/CarlaWeatherParameters messages.
/**
 * It calls
 * carla_msgs__msg__CarlaWeatherParameters__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carla_msgs
void
carla_msgs__msg__CarlaWeatherParameters__Sequence__fini(carla_msgs__msg__CarlaWeatherParameters__Sequence * array);

/// Create array of msg/CarlaWeatherParameters messages.
/**
 * It allocates the memory for the array and calls
 * carla_msgs__msg__CarlaWeatherParameters__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_carla_msgs
carla_msgs__msg__CarlaWeatherParameters__Sequence *
carla_msgs__msg__CarlaWeatherParameters__Sequence__create(size_t size);

/// Destroy array of msg/CarlaWeatherParameters messages.
/**
 * It calls
 * carla_msgs__msg__CarlaWeatherParameters__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carla_msgs
void
carla_msgs__msg__CarlaWeatherParameters__Sequence__destroy(carla_msgs__msg__CarlaWeatherParameters__Sequence * array);

/// Check for msg/CarlaWeatherParameters message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_carla_msgs
bool
carla_msgs__msg__CarlaWeatherParameters__Sequence__are_equal(const carla_msgs__msg__CarlaWeatherParameters__Sequence * lhs, const carla_msgs__msg__CarlaWeatherParameters__Sequence * rhs);

/// Copy an array of msg/CarlaWeatherParameters messages.
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
ROSIDL_GENERATOR_C_PUBLIC_carla_msgs
bool
carla_msgs__msg__CarlaWeatherParameters__Sequence__copy(
  const carla_msgs__msg__CarlaWeatherParameters__Sequence * input,
  carla_msgs__msg__CarlaWeatherParameters__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_WEATHER_PARAMETERS__FUNCTIONS_H_
