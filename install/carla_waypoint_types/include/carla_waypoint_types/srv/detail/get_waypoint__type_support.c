// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carla_waypoint_types:srv/GetWaypoint.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carla_waypoint_types/srv/detail/get_waypoint__rosidl_typesupport_introspection_c.h"
#include "carla_waypoint_types/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carla_waypoint_types/srv/detail/get_waypoint__functions.h"
#include "carla_waypoint_types/srv/detail/get_waypoint__struct.h"


// Include directives for member types
// Member `location`
#include "geometry_msgs/msg/point.h"
// Member `location`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GetWaypoint_Request__rosidl_typesupport_introspection_c__GetWaypoint_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carla_waypoint_types__srv__GetWaypoint_Request__init(message_memory);
}

void GetWaypoint_Request__rosidl_typesupport_introspection_c__GetWaypoint_Request_fini_function(void * message_memory)
{
  carla_waypoint_types__srv__GetWaypoint_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetWaypoint_Request__rosidl_typesupport_introspection_c__GetWaypoint_Request_message_member_array[1] = {
  {
    "location",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_waypoint_types__srv__GetWaypoint_Request, location),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetWaypoint_Request__rosidl_typesupport_introspection_c__GetWaypoint_Request_message_members = {
  "carla_waypoint_types__srv",  // message namespace
  "GetWaypoint_Request",  // message name
  1,  // number of fields
  sizeof(carla_waypoint_types__srv__GetWaypoint_Request),
  GetWaypoint_Request__rosidl_typesupport_introspection_c__GetWaypoint_Request_message_member_array,  // message members
  GetWaypoint_Request__rosidl_typesupport_introspection_c__GetWaypoint_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetWaypoint_Request__rosidl_typesupport_introspection_c__GetWaypoint_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetWaypoint_Request__rosidl_typesupport_introspection_c__GetWaypoint_Request_message_type_support_handle = {
  0,
  &GetWaypoint_Request__rosidl_typesupport_introspection_c__GetWaypoint_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carla_waypoint_types
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carla_waypoint_types, srv, GetWaypoint_Request)() {
  GetWaypoint_Request__rosidl_typesupport_introspection_c__GetWaypoint_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!GetWaypoint_Request__rosidl_typesupport_introspection_c__GetWaypoint_Request_message_type_support_handle.typesupport_identifier) {
    GetWaypoint_Request__rosidl_typesupport_introspection_c__GetWaypoint_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetWaypoint_Request__rosidl_typesupport_introspection_c__GetWaypoint_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "carla_waypoint_types/srv/detail/get_waypoint__rosidl_typesupport_introspection_c.h"
// already included above
// #include "carla_waypoint_types/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "carla_waypoint_types/srv/detail/get_waypoint__functions.h"
// already included above
// #include "carla_waypoint_types/srv/detail/get_waypoint__struct.h"


// Include directives for member types
// Member `waypoint`
#include "carla_waypoint_types/msg/carla_waypoint.h"
// Member `waypoint`
#include "carla_waypoint_types/msg/detail/carla_waypoint__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GetWaypoint_Response__rosidl_typesupport_introspection_c__GetWaypoint_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carla_waypoint_types__srv__GetWaypoint_Response__init(message_memory);
}

void GetWaypoint_Response__rosidl_typesupport_introspection_c__GetWaypoint_Response_fini_function(void * message_memory)
{
  carla_waypoint_types__srv__GetWaypoint_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetWaypoint_Response__rosidl_typesupport_introspection_c__GetWaypoint_Response_message_member_array[1] = {
  {
    "waypoint",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_waypoint_types__srv__GetWaypoint_Response, waypoint),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetWaypoint_Response__rosidl_typesupport_introspection_c__GetWaypoint_Response_message_members = {
  "carla_waypoint_types__srv",  // message namespace
  "GetWaypoint_Response",  // message name
  1,  // number of fields
  sizeof(carla_waypoint_types__srv__GetWaypoint_Response),
  GetWaypoint_Response__rosidl_typesupport_introspection_c__GetWaypoint_Response_message_member_array,  // message members
  GetWaypoint_Response__rosidl_typesupport_introspection_c__GetWaypoint_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetWaypoint_Response__rosidl_typesupport_introspection_c__GetWaypoint_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetWaypoint_Response__rosidl_typesupport_introspection_c__GetWaypoint_Response_message_type_support_handle = {
  0,
  &GetWaypoint_Response__rosidl_typesupport_introspection_c__GetWaypoint_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carla_waypoint_types
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carla_waypoint_types, srv, GetWaypoint_Response)() {
  GetWaypoint_Response__rosidl_typesupport_introspection_c__GetWaypoint_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carla_waypoint_types, msg, CarlaWaypoint)();
  if (!GetWaypoint_Response__rosidl_typesupport_introspection_c__GetWaypoint_Response_message_type_support_handle.typesupport_identifier) {
    GetWaypoint_Response__rosidl_typesupport_introspection_c__GetWaypoint_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetWaypoint_Response__rosidl_typesupport_introspection_c__GetWaypoint_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "carla_waypoint_types/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "carla_waypoint_types/srv/detail/get_waypoint__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers carla_waypoint_types__srv__detail__get_waypoint__rosidl_typesupport_introspection_c__GetWaypoint_service_members = {
  "carla_waypoint_types__srv",  // service namespace
  "GetWaypoint",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // carla_waypoint_types__srv__detail__get_waypoint__rosidl_typesupport_introspection_c__GetWaypoint_Request_message_type_support_handle,
  NULL  // response message
  // carla_waypoint_types__srv__detail__get_waypoint__rosidl_typesupport_introspection_c__GetWaypoint_Response_message_type_support_handle
};

static rosidl_service_type_support_t carla_waypoint_types__srv__detail__get_waypoint__rosidl_typesupport_introspection_c__GetWaypoint_service_type_support_handle = {
  0,
  &carla_waypoint_types__srv__detail__get_waypoint__rosidl_typesupport_introspection_c__GetWaypoint_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carla_waypoint_types, srv, GetWaypoint_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carla_waypoint_types, srv, GetWaypoint_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carla_waypoint_types
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carla_waypoint_types, srv, GetWaypoint)() {
  if (!carla_waypoint_types__srv__detail__get_waypoint__rosidl_typesupport_introspection_c__GetWaypoint_service_type_support_handle.typesupport_identifier) {
    carla_waypoint_types__srv__detail__get_waypoint__rosidl_typesupport_introspection_c__GetWaypoint_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)carla_waypoint_types__srv__detail__get_waypoint__rosidl_typesupport_introspection_c__GetWaypoint_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carla_waypoint_types, srv, GetWaypoint_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carla_waypoint_types, srv, GetWaypoint_Response)()->data;
  }

  return &carla_waypoint_types__srv__detail__get_waypoint__rosidl_typesupport_introspection_c__GetWaypoint_service_type_support_handle;
}
