// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from carla_msgs:msg/CarlaWeatherParameters.idl
// generated code does not contain a copyright notice
#include "carla_msgs/msg/detail/carla_weather_parameters__rosidl_typesupport_fastrtps_cpp.hpp"
#include "carla_msgs/msg/detail/carla_weather_parameters__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace carla_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carla_msgs
cdr_serialize(
  const carla_msgs::msg::CarlaWeatherParameters & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: cloudiness
  cdr << ros_message.cloudiness;
  // Member: precipitation
  cdr << ros_message.precipitation;
  // Member: precipitation_deposits
  cdr << ros_message.precipitation_deposits;
  // Member: wind_intensity
  cdr << ros_message.wind_intensity;
  // Member: fog_density
  cdr << ros_message.fog_density;
  // Member: fog_distance
  cdr << ros_message.fog_distance;
  // Member: wetness
  cdr << ros_message.wetness;
  // Member: sun_azimuth_angle
  cdr << ros_message.sun_azimuth_angle;
  // Member: sun_altitude_angle
  cdr << ros_message.sun_altitude_angle;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carla_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  carla_msgs::msg::CarlaWeatherParameters & ros_message)
{
  // Member: cloudiness
  cdr >> ros_message.cloudiness;

  // Member: precipitation
  cdr >> ros_message.precipitation;

  // Member: precipitation_deposits
  cdr >> ros_message.precipitation_deposits;

  // Member: wind_intensity
  cdr >> ros_message.wind_intensity;

  // Member: fog_density
  cdr >> ros_message.fog_density;

  // Member: fog_distance
  cdr >> ros_message.fog_distance;

  // Member: wetness
  cdr >> ros_message.wetness;

  // Member: sun_azimuth_angle
  cdr >> ros_message.sun_azimuth_angle;

  // Member: sun_altitude_angle
  cdr >> ros_message.sun_altitude_angle;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carla_msgs
get_serialized_size(
  const carla_msgs::msg::CarlaWeatherParameters & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: cloudiness
  {
    size_t item_size = sizeof(ros_message.cloudiness);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: precipitation
  {
    size_t item_size = sizeof(ros_message.precipitation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: precipitation_deposits
  {
    size_t item_size = sizeof(ros_message.precipitation_deposits);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wind_intensity
  {
    size_t item_size = sizeof(ros_message.wind_intensity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fog_density
  {
    size_t item_size = sizeof(ros_message.fog_density);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fog_distance
  {
    size_t item_size = sizeof(ros_message.fog_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wetness
  {
    size_t item_size = sizeof(ros_message.wetness);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sun_azimuth_angle
  {
    size_t item_size = sizeof(ros_message.sun_azimuth_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sun_altitude_angle
  {
    size_t item_size = sizeof(ros_message.sun_altitude_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carla_msgs
max_serialized_size_CarlaWeatherParameters(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: cloudiness
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: precipitation
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: precipitation_deposits
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: wind_intensity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: fog_density
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: fog_distance
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: wetness
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: sun_azimuth_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: sun_altitude_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _CarlaWeatherParameters__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const carla_msgs::msg::CarlaWeatherParameters *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CarlaWeatherParameters__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<carla_msgs::msg::CarlaWeatherParameters *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CarlaWeatherParameters__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const carla_msgs::msg::CarlaWeatherParameters *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CarlaWeatherParameters__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_CarlaWeatherParameters(full_bounded, 0);
}

static message_type_support_callbacks_t _CarlaWeatherParameters__callbacks = {
  "carla_msgs::msg",
  "CarlaWeatherParameters",
  _CarlaWeatherParameters__cdr_serialize,
  _CarlaWeatherParameters__cdr_deserialize,
  _CarlaWeatherParameters__get_serialized_size,
  _CarlaWeatherParameters__max_serialized_size
};

static rosidl_message_type_support_t _CarlaWeatherParameters__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CarlaWeatherParameters__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace carla_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_carla_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<carla_msgs::msg::CarlaWeatherParameters>()
{
  return &carla_msgs::msg::typesupport_fastrtps_cpp::_CarlaWeatherParameters__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carla_msgs, msg, CarlaWeatherParameters)() {
  return &carla_msgs::msg::typesupport_fastrtps_cpp::_CarlaWeatherParameters__handle;
}

#ifdef __cplusplus
}
#endif
