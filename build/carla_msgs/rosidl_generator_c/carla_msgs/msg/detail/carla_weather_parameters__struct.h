// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carla_msgs:msg/CarlaWeatherParameters.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_WEATHER_PARAMETERS__STRUCT_H_
#define CARLA_MSGS__MSG__DETAIL__CARLA_WEATHER_PARAMETERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/CarlaWeatherParameters in the package carla_msgs.
typedef struct carla_msgs__msg__CarlaWeatherParameters
{
  float cloudiness;
  float precipitation;
  float precipitation_deposits;
  float wind_intensity;
  float fog_density;
  float fog_distance;
  float wetness;
  float sun_azimuth_angle;
  float sun_altitude_angle;
} carla_msgs__msg__CarlaWeatherParameters;

// Struct for a sequence of carla_msgs__msg__CarlaWeatherParameters.
typedef struct carla_msgs__msg__CarlaWeatherParameters__Sequence
{
  carla_msgs__msg__CarlaWeatherParameters * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carla_msgs__msg__CarlaWeatherParameters__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_WEATHER_PARAMETERS__STRUCT_H_
