// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carla_msgs:msg/CarlaWeatherParameters.idl
// generated code does not contain a copyright notice
#include "carla_msgs/msg/detail/carla_weather_parameters__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carla_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carla_msgs/msg/detail/carla_weather_parameters__struct.h"
#include "carla_msgs/msg/detail/carla_weather_parameters__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _CarlaWeatherParameters__ros_msg_type = carla_msgs__msg__CarlaWeatherParameters;

static bool _CarlaWeatherParameters__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CarlaWeatherParameters__ros_msg_type * ros_message = static_cast<const _CarlaWeatherParameters__ros_msg_type *>(untyped_ros_message);
  // Field name: cloudiness
  {
    cdr << ros_message->cloudiness;
  }

  // Field name: precipitation
  {
    cdr << ros_message->precipitation;
  }

  // Field name: precipitation_deposits
  {
    cdr << ros_message->precipitation_deposits;
  }

  // Field name: wind_intensity
  {
    cdr << ros_message->wind_intensity;
  }

  // Field name: fog_density
  {
    cdr << ros_message->fog_density;
  }

  // Field name: fog_distance
  {
    cdr << ros_message->fog_distance;
  }

  // Field name: wetness
  {
    cdr << ros_message->wetness;
  }

  // Field name: sun_azimuth_angle
  {
    cdr << ros_message->sun_azimuth_angle;
  }

  // Field name: sun_altitude_angle
  {
    cdr << ros_message->sun_altitude_angle;
  }

  return true;
}

static bool _CarlaWeatherParameters__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CarlaWeatherParameters__ros_msg_type * ros_message = static_cast<_CarlaWeatherParameters__ros_msg_type *>(untyped_ros_message);
  // Field name: cloudiness
  {
    cdr >> ros_message->cloudiness;
  }

  // Field name: precipitation
  {
    cdr >> ros_message->precipitation;
  }

  // Field name: precipitation_deposits
  {
    cdr >> ros_message->precipitation_deposits;
  }

  // Field name: wind_intensity
  {
    cdr >> ros_message->wind_intensity;
  }

  // Field name: fog_density
  {
    cdr >> ros_message->fog_density;
  }

  // Field name: fog_distance
  {
    cdr >> ros_message->fog_distance;
  }

  // Field name: wetness
  {
    cdr >> ros_message->wetness;
  }

  // Field name: sun_azimuth_angle
  {
    cdr >> ros_message->sun_azimuth_angle;
  }

  // Field name: sun_altitude_angle
  {
    cdr >> ros_message->sun_altitude_angle;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carla_msgs
size_t get_serialized_size_carla_msgs__msg__CarlaWeatherParameters(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CarlaWeatherParameters__ros_msg_type * ros_message = static_cast<const _CarlaWeatherParameters__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name cloudiness
  {
    size_t item_size = sizeof(ros_message->cloudiness);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name precipitation
  {
    size_t item_size = sizeof(ros_message->precipitation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name precipitation_deposits
  {
    size_t item_size = sizeof(ros_message->precipitation_deposits);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wind_intensity
  {
    size_t item_size = sizeof(ros_message->wind_intensity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fog_density
  {
    size_t item_size = sizeof(ros_message->fog_density);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fog_distance
  {
    size_t item_size = sizeof(ros_message->fog_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wetness
  {
    size_t item_size = sizeof(ros_message->wetness);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sun_azimuth_angle
  {
    size_t item_size = sizeof(ros_message->sun_azimuth_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sun_altitude_angle
  {
    size_t item_size = sizeof(ros_message->sun_altitude_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CarlaWeatherParameters__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carla_msgs__msg__CarlaWeatherParameters(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carla_msgs
size_t max_serialized_size_carla_msgs__msg__CarlaWeatherParameters(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: cloudiness
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: precipitation
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: precipitation_deposits
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: wind_intensity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: fog_density
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: fog_distance
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: wetness
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: sun_azimuth_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: sun_altitude_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _CarlaWeatherParameters__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carla_msgs__msg__CarlaWeatherParameters(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CarlaWeatherParameters = {
  "carla_msgs::msg",
  "CarlaWeatherParameters",
  _CarlaWeatherParameters__cdr_serialize,
  _CarlaWeatherParameters__cdr_deserialize,
  _CarlaWeatherParameters__get_serialized_size,
  _CarlaWeatherParameters__max_serialized_size
};

static rosidl_message_type_support_t _CarlaWeatherParameters__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CarlaWeatherParameters,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carla_msgs, msg, CarlaWeatherParameters)() {
  return &_CarlaWeatherParameters__type_support;
}

#if defined(__cplusplus)
}
#endif
