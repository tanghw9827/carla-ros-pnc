// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carla_msgs:msg/CarlaActorList.idl
// generated code does not contain a copyright notice
#include "carla_msgs/msg/detail/carla_actor_list__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carla_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carla_msgs/msg/detail/carla_actor_list__struct.h"
#include "carla_msgs/msg/detail/carla_actor_list__functions.h"
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

#include "carla_msgs/msg/detail/carla_actor_info__functions.h"  // actors

// forward declare type support functions
size_t get_serialized_size_carla_msgs__msg__CarlaActorInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carla_msgs__msg__CarlaActorInfo(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carla_msgs, msg, CarlaActorInfo)();


using _CarlaActorList__ros_msg_type = carla_msgs__msg__CarlaActorList;

static bool _CarlaActorList__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CarlaActorList__ros_msg_type * ros_message = static_cast<const _CarlaActorList__ros_msg_type *>(untyped_ros_message);
  // Field name: actors
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carla_msgs, msg, CarlaActorInfo
      )()->data);
    size_t size = ros_message->actors.size;
    auto array_ptr = ros_message->actors.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _CarlaActorList__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CarlaActorList__ros_msg_type * ros_message = static_cast<_CarlaActorList__ros_msg_type *>(untyped_ros_message);
  // Field name: actors
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carla_msgs, msg, CarlaActorInfo
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->actors.data) {
      carla_msgs__msg__CarlaActorInfo__Sequence__fini(&ros_message->actors);
    }
    if (!carla_msgs__msg__CarlaActorInfo__Sequence__init(&ros_message->actors, size)) {
      return "failed to create array for field 'actors'";
    }
    auto array_ptr = ros_message->actors.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carla_msgs
size_t get_serialized_size_carla_msgs__msg__CarlaActorList(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CarlaActorList__ros_msg_type * ros_message = static_cast<const _CarlaActorList__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name actors
  {
    size_t array_size = ros_message->actors.size;
    auto array_ptr = ros_message->actors.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_carla_msgs__msg__CarlaActorInfo(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CarlaActorList__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carla_msgs__msg__CarlaActorList(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carla_msgs
size_t max_serialized_size_carla_msgs__msg__CarlaActorList(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: actors
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carla_msgs__msg__CarlaActorInfo(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _CarlaActorList__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carla_msgs__msg__CarlaActorList(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CarlaActorList = {
  "carla_msgs::msg",
  "CarlaActorList",
  _CarlaActorList__cdr_serialize,
  _CarlaActorList__cdr_deserialize,
  _CarlaActorList__get_serialized_size,
  _CarlaActorList__max_serialized_size
};

static rosidl_message_type_support_t _CarlaActorList__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CarlaActorList,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carla_msgs, msg, CarlaActorList)() {
  return &_CarlaActorList__type_support;
}

#if defined(__cplusplus)
}
#endif
