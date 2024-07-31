// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from carla_waypoint_types:srv/GetWaypoint.idl
// generated code does not contain a copyright notice
#include "carla_waypoint_types/srv/detail/get_waypoint__rosidl_typesupport_fastrtps_cpp.hpp"
#include "carla_waypoint_types/srv/detail/get_waypoint__struct.hpp"

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
namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Point &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Point &);
size_t get_serialized_size(
  const geometry_msgs::msg::Point &,
  size_t current_alignment);
size_t
max_serialized_size_Point(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs


namespace carla_waypoint_types
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carla_waypoint_types
cdr_serialize(
  const carla_waypoint_types::srv::GetWaypoint_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: location
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.location,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carla_waypoint_types
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  carla_waypoint_types::srv::GetWaypoint_Request & ros_message)
{
  // Member: location
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.location);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carla_waypoint_types
get_serialized_size(
  const carla_waypoint_types::srv::GetWaypoint_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: location

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.location, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carla_waypoint_types
max_serialized_size_GetWaypoint_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: location
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Point(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _GetWaypoint_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const carla_waypoint_types::srv::GetWaypoint_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetWaypoint_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<carla_waypoint_types::srv::GetWaypoint_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetWaypoint_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const carla_waypoint_types::srv::GetWaypoint_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetWaypoint_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_GetWaypoint_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _GetWaypoint_Request__callbacks = {
  "carla_waypoint_types::srv",
  "GetWaypoint_Request",
  _GetWaypoint_Request__cdr_serialize,
  _GetWaypoint_Request__cdr_deserialize,
  _GetWaypoint_Request__get_serialized_size,
  _GetWaypoint_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetWaypoint_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetWaypoint_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace carla_waypoint_types

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_carla_waypoint_types
const rosidl_message_type_support_t *
get_message_type_support_handle<carla_waypoint_types::srv::GetWaypoint_Request>()
{
  return &carla_waypoint_types::srv::typesupport_fastrtps_cpp::_GetWaypoint_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carla_waypoint_types, srv, GetWaypoint_Request)() {
  return &carla_waypoint_types::srv::typesupport_fastrtps_cpp::_GetWaypoint_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace carla_waypoint_types
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const carla_waypoint_types::msg::CarlaWaypoint &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  carla_waypoint_types::msg::CarlaWaypoint &);
size_t get_serialized_size(
  const carla_waypoint_types::msg::CarlaWaypoint &,
  size_t current_alignment);
size_t
max_serialized_size_CarlaWaypoint(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace carla_waypoint_types


namespace carla_waypoint_types
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carla_waypoint_types
cdr_serialize(
  const carla_waypoint_types::srv::GetWaypoint_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: waypoint
  carla_waypoint_types::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.waypoint,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carla_waypoint_types
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  carla_waypoint_types::srv::GetWaypoint_Response & ros_message)
{
  // Member: waypoint
  carla_waypoint_types::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.waypoint);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carla_waypoint_types
get_serialized_size(
  const carla_waypoint_types::srv::GetWaypoint_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: waypoint

  current_alignment +=
    carla_waypoint_types::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.waypoint, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carla_waypoint_types
max_serialized_size_GetWaypoint_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: waypoint
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        carla_waypoint_types::msg::typesupport_fastrtps_cpp::max_serialized_size_CarlaWaypoint(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _GetWaypoint_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const carla_waypoint_types::srv::GetWaypoint_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetWaypoint_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<carla_waypoint_types::srv::GetWaypoint_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetWaypoint_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const carla_waypoint_types::srv::GetWaypoint_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetWaypoint_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_GetWaypoint_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _GetWaypoint_Response__callbacks = {
  "carla_waypoint_types::srv",
  "GetWaypoint_Response",
  _GetWaypoint_Response__cdr_serialize,
  _GetWaypoint_Response__cdr_deserialize,
  _GetWaypoint_Response__get_serialized_size,
  _GetWaypoint_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetWaypoint_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetWaypoint_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace carla_waypoint_types

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_carla_waypoint_types
const rosidl_message_type_support_t *
get_message_type_support_handle<carla_waypoint_types::srv::GetWaypoint_Response>()
{
  return &carla_waypoint_types::srv::typesupport_fastrtps_cpp::_GetWaypoint_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carla_waypoint_types, srv, GetWaypoint_Response)() {
  return &carla_waypoint_types::srv::typesupport_fastrtps_cpp::_GetWaypoint_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace carla_waypoint_types
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _GetWaypoint__callbacks = {
  "carla_waypoint_types::srv",
  "GetWaypoint",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carla_waypoint_types, srv, GetWaypoint_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carla_waypoint_types, srv, GetWaypoint_Response)(),
};

static rosidl_service_type_support_t _GetWaypoint__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetWaypoint__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace carla_waypoint_types

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_carla_waypoint_types
const rosidl_service_type_support_t *
get_service_type_support_handle<carla_waypoint_types::srv::GetWaypoint>()
{
  return &carla_waypoint_types::srv::typesupport_fastrtps_cpp::_GetWaypoint__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carla_waypoint_types, srv, GetWaypoint)() {
  return &carla_waypoint_types::srv::typesupport_fastrtps_cpp::_GetWaypoint__handle;
}

#ifdef __cplusplus
}
#endif
