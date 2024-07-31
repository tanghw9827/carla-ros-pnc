// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carla_msgs:srv/GetBlueprints.idl
// generated code does not contain a copyright notice
#include "carla_msgs/srv/detail/get_blueprints__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carla_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carla_msgs/srv/detail/get_blueprints__struct.h"
#include "carla_msgs/srv/detail/get_blueprints__functions.h"
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

#include "rosidl_runtime_c/string.h"  // filter
#include "rosidl_runtime_c/string_functions.h"  // filter

// forward declare type support functions


using _GetBlueprints_Request__ros_msg_type = carla_msgs__srv__GetBlueprints_Request;

static bool _GetBlueprints_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetBlueprints_Request__ros_msg_type * ros_message = static_cast<const _GetBlueprints_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: filter
  {
    const rosidl_runtime_c__String * str = &ros_message->filter;
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

  return true;
}

static bool _GetBlueprints_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetBlueprints_Request__ros_msg_type * ros_message = static_cast<_GetBlueprints_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: filter
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->filter.data) {
      rosidl_runtime_c__String__init(&ros_message->filter);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->filter,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'filter'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carla_msgs
size_t get_serialized_size_carla_msgs__srv__GetBlueprints_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetBlueprints_Request__ros_msg_type * ros_message = static_cast<const _GetBlueprints_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name filter
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->filter.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _GetBlueprints_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carla_msgs__srv__GetBlueprints_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carla_msgs
size_t max_serialized_size_carla_msgs__srv__GetBlueprints_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: filter
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _GetBlueprints_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carla_msgs__srv__GetBlueprints_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetBlueprints_Request = {
  "carla_msgs::srv",
  "GetBlueprints_Request",
  _GetBlueprints_Request__cdr_serialize,
  _GetBlueprints_Request__cdr_deserialize,
  _GetBlueprints_Request__get_serialized_size,
  _GetBlueprints_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetBlueprints_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetBlueprints_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carla_msgs, srv, GetBlueprints_Request)() {
  return &_GetBlueprints_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "carla_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "carla_msgs/srv/detail/get_blueprints__struct.h"
// already included above
// #include "carla_msgs/srv/detail/get_blueprints__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

// already included above
// #include "rosidl_runtime_c/string.h"  // blueprints
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // blueprints

// forward declare type support functions


using _GetBlueprints_Response__ros_msg_type = carla_msgs__srv__GetBlueprints_Response;

static bool _GetBlueprints_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetBlueprints_Response__ros_msg_type * ros_message = static_cast<const _GetBlueprints_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: blueprints
  {
    size_t size = ros_message->blueprints.size;
    auto array_ptr = ros_message->blueprints.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  return true;
}

static bool _GetBlueprints_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetBlueprints_Response__ros_msg_type * ros_message = static_cast<_GetBlueprints_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: blueprints
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->blueprints.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->blueprints);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->blueprints, size)) {
      return "failed to create array for field 'blueprints'";
    }
    auto array_ptr = ros_message->blueprints.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'blueprints'\n");
        return false;
      }
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carla_msgs
size_t get_serialized_size_carla_msgs__srv__GetBlueprints_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetBlueprints_Response__ros_msg_type * ros_message = static_cast<const _GetBlueprints_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name blueprints
  {
    size_t array_size = ros_message->blueprints.size;
    auto array_ptr = ros_message->blueprints.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetBlueprints_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carla_msgs__srv__GetBlueprints_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carla_msgs
size_t max_serialized_size_carla_msgs__srv__GetBlueprints_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: blueprints
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _GetBlueprints_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carla_msgs__srv__GetBlueprints_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetBlueprints_Response = {
  "carla_msgs::srv",
  "GetBlueprints_Response",
  _GetBlueprints_Response__cdr_serialize,
  _GetBlueprints_Response__cdr_deserialize,
  _GetBlueprints_Response__get_serialized_size,
  _GetBlueprints_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetBlueprints_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetBlueprints_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carla_msgs, srv, GetBlueprints_Response)() {
  return &_GetBlueprints_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "carla_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carla_msgs/srv/get_blueprints.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetBlueprints__callbacks = {
  "carla_msgs::srv",
  "GetBlueprints",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carla_msgs, srv, GetBlueprints_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carla_msgs, srv, GetBlueprints_Response)(),
};

static rosidl_service_type_support_t GetBlueprints__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetBlueprints__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carla_msgs, srv, GetBlueprints)() {
  return &GetBlueprints__handle;
}

#if defined(__cplusplus)
}
#endif
