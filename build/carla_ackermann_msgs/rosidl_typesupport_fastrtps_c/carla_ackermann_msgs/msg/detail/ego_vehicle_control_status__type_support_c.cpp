// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carla_ackermann_msgs:msg/EgoVehicleControlStatus.idl
// generated code does not contain a copyright notice
#include "carla_ackermann_msgs/msg/detail/ego_vehicle_control_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carla_ackermann_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carla_ackermann_msgs/msg/detail/ego_vehicle_control_status__struct.h"
#include "carla_ackermann_msgs/msg/detail/ego_vehicle_control_status__functions.h"
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

#include "rosidl_runtime_c/string.h"  // status
#include "rosidl_runtime_c/string_functions.h"  // status

// forward declare type support functions


using _EgoVehicleControlStatus__ros_msg_type = carla_ackermann_msgs__msg__EgoVehicleControlStatus;

static bool _EgoVehicleControlStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EgoVehicleControlStatus__ros_msg_type * ros_message = static_cast<const _EgoVehicleControlStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    const rosidl_runtime_c__String * str = &ros_message->status;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: speed_control_activation_count
  {
    cdr << ros_message->speed_control_activation_count;
  }

  // Field name: speed_control_accel_delta
  {
    cdr << ros_message->speed_control_accel_delta;
  }

  // Field name: speed_control_accel_target
  {
    cdr << ros_message->speed_control_accel_target;
  }

  // Field name: accel_control_pedal_delta
  {
    cdr << ros_message->accel_control_pedal_delta;
  }

  // Field name: accel_control_pedal_target
  {
    cdr << ros_message->accel_control_pedal_target;
  }

  // Field name: brake_upper_border
  {
    cdr << ros_message->brake_upper_border;
  }

  // Field name: throttle_lower_border
  {
    cdr << ros_message->throttle_lower_border;
  }

  return true;
}

static bool _EgoVehicleControlStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EgoVehicleControlStatus__ros_msg_type * ros_message = static_cast<_EgoVehicleControlStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->status.data) {
      rosidl_runtime_c__String__init(&ros_message->status);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->status,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'status'\n");
      return false;
    }
  }

  // Field name: speed_control_activation_count
  {
    cdr >> ros_message->speed_control_activation_count;
  }

  // Field name: speed_control_accel_delta
  {
    cdr >> ros_message->speed_control_accel_delta;
  }

  // Field name: speed_control_accel_target
  {
    cdr >> ros_message->speed_control_accel_target;
  }

  // Field name: accel_control_pedal_delta
  {
    cdr >> ros_message->accel_control_pedal_delta;
  }

  // Field name: accel_control_pedal_target
  {
    cdr >> ros_message->accel_control_pedal_target;
  }

  // Field name: brake_upper_border
  {
    cdr >> ros_message->brake_upper_border;
  }

  // Field name: throttle_lower_border
  {
    cdr >> ros_message->throttle_lower_border;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carla_ackermann_msgs
size_t get_serialized_size_carla_ackermann_msgs__msg__EgoVehicleControlStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EgoVehicleControlStatus__ros_msg_type * ros_message = static_cast<const _EgoVehicleControlStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name status
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->status.size + 1);
  // field.name speed_control_activation_count
  {
    size_t item_size = sizeof(ros_message->speed_control_activation_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed_control_accel_delta
  {
    size_t item_size = sizeof(ros_message->speed_control_accel_delta);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed_control_accel_target
  {
    size_t item_size = sizeof(ros_message->speed_control_accel_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name accel_control_pedal_delta
  {
    size_t item_size = sizeof(ros_message->accel_control_pedal_delta);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name accel_control_pedal_target
  {
    size_t item_size = sizeof(ros_message->accel_control_pedal_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brake_upper_border
  {
    size_t item_size = sizeof(ros_message->brake_upper_border);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name throttle_lower_border
  {
    size_t item_size = sizeof(ros_message->throttle_lower_border);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EgoVehicleControlStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carla_ackermann_msgs__msg__EgoVehicleControlStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carla_ackermann_msgs
size_t max_serialized_size_carla_ackermann_msgs__msg__EgoVehicleControlStatus(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: status
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: speed_control_activation_count
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: speed_control_accel_delta
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: speed_control_accel_target
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: accel_control_pedal_delta
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: accel_control_pedal_target
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: brake_upper_border
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: throttle_lower_border
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _EgoVehicleControlStatus__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carla_ackermann_msgs__msg__EgoVehicleControlStatus(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_EgoVehicleControlStatus = {
  "carla_ackermann_msgs::msg",
  "EgoVehicleControlStatus",
  _EgoVehicleControlStatus__cdr_serialize,
  _EgoVehicleControlStatus__cdr_deserialize,
  _EgoVehicleControlStatus__get_serialized_size,
  _EgoVehicleControlStatus__max_serialized_size
};

static rosidl_message_type_support_t _EgoVehicleControlStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EgoVehicleControlStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carla_ackermann_msgs, msg, EgoVehicleControlStatus)() {
  return &_EgoVehicleControlStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
