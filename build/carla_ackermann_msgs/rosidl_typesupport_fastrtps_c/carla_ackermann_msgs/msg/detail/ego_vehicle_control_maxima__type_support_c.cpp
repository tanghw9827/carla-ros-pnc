// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carla_ackermann_msgs:msg/EgoVehicleControlMaxima.idl
// generated code does not contain a copyright notice
#include "carla_ackermann_msgs/msg/detail/ego_vehicle_control_maxima__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carla_ackermann_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carla_ackermann_msgs/msg/detail/ego_vehicle_control_maxima__struct.h"
#include "carla_ackermann_msgs/msg/detail/ego_vehicle_control_maxima__functions.h"
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


using _EgoVehicleControlMaxima__ros_msg_type = carla_ackermann_msgs__msg__EgoVehicleControlMaxima;

static bool _EgoVehicleControlMaxima__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EgoVehicleControlMaxima__ros_msg_type * ros_message = static_cast<const _EgoVehicleControlMaxima__ros_msg_type *>(untyped_ros_message);
  // Field name: max_steering_angle
  {
    cdr << ros_message->max_steering_angle;
  }

  // Field name: max_speed
  {
    cdr << ros_message->max_speed;
  }

  // Field name: max_accel
  {
    cdr << ros_message->max_accel;
  }

  // Field name: max_decel
  {
    cdr << ros_message->max_decel;
  }

  // Field name: min_accel
  {
    cdr << ros_message->min_accel;
  }

  // Field name: max_pedal
  {
    cdr << ros_message->max_pedal;
  }

  return true;
}

static bool _EgoVehicleControlMaxima__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EgoVehicleControlMaxima__ros_msg_type * ros_message = static_cast<_EgoVehicleControlMaxima__ros_msg_type *>(untyped_ros_message);
  // Field name: max_steering_angle
  {
    cdr >> ros_message->max_steering_angle;
  }

  // Field name: max_speed
  {
    cdr >> ros_message->max_speed;
  }

  // Field name: max_accel
  {
    cdr >> ros_message->max_accel;
  }

  // Field name: max_decel
  {
    cdr >> ros_message->max_decel;
  }

  // Field name: min_accel
  {
    cdr >> ros_message->min_accel;
  }

  // Field name: max_pedal
  {
    cdr >> ros_message->max_pedal;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carla_ackermann_msgs
size_t get_serialized_size_carla_ackermann_msgs__msg__EgoVehicleControlMaxima(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EgoVehicleControlMaxima__ros_msg_type * ros_message = static_cast<const _EgoVehicleControlMaxima__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name max_steering_angle
  {
    size_t item_size = sizeof(ros_message->max_steering_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_speed
  {
    size_t item_size = sizeof(ros_message->max_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_accel
  {
    size_t item_size = sizeof(ros_message->max_accel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_decel
  {
    size_t item_size = sizeof(ros_message->max_decel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name min_accel
  {
    size_t item_size = sizeof(ros_message->min_accel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_pedal
  {
    size_t item_size = sizeof(ros_message->max_pedal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EgoVehicleControlMaxima__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carla_ackermann_msgs__msg__EgoVehicleControlMaxima(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carla_ackermann_msgs
size_t max_serialized_size_carla_ackermann_msgs__msg__EgoVehicleControlMaxima(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: max_steering_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: max_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: max_accel
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: max_decel
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: min_accel
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: max_pedal
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _EgoVehicleControlMaxima__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carla_ackermann_msgs__msg__EgoVehicleControlMaxima(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_EgoVehicleControlMaxima = {
  "carla_ackermann_msgs::msg",
  "EgoVehicleControlMaxima",
  _EgoVehicleControlMaxima__cdr_serialize,
  _EgoVehicleControlMaxima__cdr_deserialize,
  _EgoVehicleControlMaxima__get_serialized_size,
  _EgoVehicleControlMaxima__max_serialized_size
};

static rosidl_message_type_support_t _EgoVehicleControlMaxima__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EgoVehicleControlMaxima,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carla_ackermann_msgs, msg, EgoVehicleControlMaxima)() {
  return &_EgoVehicleControlMaxima__type_support;
}

#if defined(__cplusplus)
}
#endif
