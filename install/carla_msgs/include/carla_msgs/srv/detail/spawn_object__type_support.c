// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carla_msgs:srv/SpawnObject.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carla_msgs/srv/detail/spawn_object__rosidl_typesupport_introspection_c.h"
#include "carla_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carla_msgs/srv/detail/spawn_object__functions.h"
#include "carla_msgs/srv/detail/spawn_object__struct.h"


// Include directives for member types
// Member `type`
// Member `id`
#include "rosidl_runtime_c/string_functions.h"
// Member `attributes`
#include "diagnostic_msgs/msg/key_value.h"
// Member `attributes`
#include "diagnostic_msgs/msg/detail/key_value__rosidl_typesupport_introspection_c.h"
// Member `transform`
#include "geometry_msgs/msg/pose.h"
// Member `transform`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SpawnObject_Request__rosidl_typesupport_introspection_c__SpawnObject_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carla_msgs__srv__SpawnObject_Request__init(message_memory);
}

void SpawnObject_Request__rosidl_typesupport_introspection_c__SpawnObject_Request_fini_function(void * message_memory)
{
  carla_msgs__srv__SpawnObject_Request__fini(message_memory);
}

size_t SpawnObject_Request__rosidl_typesupport_introspection_c__size_function__KeyValue__attributes(
  const void * untyped_member)
{
  const diagnostic_msgs__msg__KeyValue__Sequence * member =
    (const diagnostic_msgs__msg__KeyValue__Sequence *)(untyped_member);
  return member->size;
}

const void * SpawnObject_Request__rosidl_typesupport_introspection_c__get_const_function__KeyValue__attributes(
  const void * untyped_member, size_t index)
{
  const diagnostic_msgs__msg__KeyValue__Sequence * member =
    (const diagnostic_msgs__msg__KeyValue__Sequence *)(untyped_member);
  return &member->data[index];
}

void * SpawnObject_Request__rosidl_typesupport_introspection_c__get_function__KeyValue__attributes(
  void * untyped_member, size_t index)
{
  diagnostic_msgs__msg__KeyValue__Sequence * member =
    (diagnostic_msgs__msg__KeyValue__Sequence *)(untyped_member);
  return &member->data[index];
}

bool SpawnObject_Request__rosidl_typesupport_introspection_c__resize_function__KeyValue__attributes(
  void * untyped_member, size_t size)
{
  diagnostic_msgs__msg__KeyValue__Sequence * member =
    (diagnostic_msgs__msg__KeyValue__Sequence *)(untyped_member);
  diagnostic_msgs__msg__KeyValue__Sequence__fini(member);
  return diagnostic_msgs__msg__KeyValue__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember SpawnObject_Request__rosidl_typesupport_introspection_c__SpawnObject_Request_message_member_array[6] = {
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_msgs__srv__SpawnObject_Request, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_msgs__srv__SpawnObject_Request, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "attributes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_msgs__srv__SpawnObject_Request, attributes),  // bytes offset in struct
    NULL,  // default value
    SpawnObject_Request__rosidl_typesupport_introspection_c__size_function__KeyValue__attributes,  // size() function pointer
    SpawnObject_Request__rosidl_typesupport_introspection_c__get_const_function__KeyValue__attributes,  // get_const(index) function pointer
    SpawnObject_Request__rosidl_typesupport_introspection_c__get_function__KeyValue__attributes,  // get(index) function pointer
    SpawnObject_Request__rosidl_typesupport_introspection_c__resize_function__KeyValue__attributes  // resize(index) function pointer
  },
  {
    "transform",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_msgs__srv__SpawnObject_Request, transform),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "attach_to",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_msgs__srv__SpawnObject_Request, attach_to),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "random_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_msgs__srv__SpawnObject_Request, random_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SpawnObject_Request__rosidl_typesupport_introspection_c__SpawnObject_Request_message_members = {
  "carla_msgs__srv",  // message namespace
  "SpawnObject_Request",  // message name
  6,  // number of fields
  sizeof(carla_msgs__srv__SpawnObject_Request),
  SpawnObject_Request__rosidl_typesupport_introspection_c__SpawnObject_Request_message_member_array,  // message members
  SpawnObject_Request__rosidl_typesupport_introspection_c__SpawnObject_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SpawnObject_Request__rosidl_typesupport_introspection_c__SpawnObject_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SpawnObject_Request__rosidl_typesupport_introspection_c__SpawnObject_Request_message_type_support_handle = {
  0,
  &SpawnObject_Request__rosidl_typesupport_introspection_c__SpawnObject_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carla_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carla_msgs, srv, SpawnObject_Request)() {
  SpawnObject_Request__rosidl_typesupport_introspection_c__SpawnObject_Request_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, diagnostic_msgs, msg, KeyValue)();
  SpawnObject_Request__rosidl_typesupport_introspection_c__SpawnObject_Request_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!SpawnObject_Request__rosidl_typesupport_introspection_c__SpawnObject_Request_message_type_support_handle.typesupport_identifier) {
    SpawnObject_Request__rosidl_typesupport_introspection_c__SpawnObject_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SpawnObject_Request__rosidl_typesupport_introspection_c__SpawnObject_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "carla_msgs/srv/detail/spawn_object__rosidl_typesupport_introspection_c.h"
// already included above
// #include "carla_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "carla_msgs/srv/detail/spawn_object__functions.h"
// already included above
// #include "carla_msgs/srv/detail/spawn_object__struct.h"


// Include directives for member types
// Member `error_string`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SpawnObject_Response__rosidl_typesupport_introspection_c__SpawnObject_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carla_msgs__srv__SpawnObject_Response__init(message_memory);
}

void SpawnObject_Response__rosidl_typesupport_introspection_c__SpawnObject_Response_fini_function(void * message_memory)
{
  carla_msgs__srv__SpawnObject_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SpawnObject_Response__rosidl_typesupport_introspection_c__SpawnObject_Response_message_member_array[2] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_msgs__srv__SpawnObject_Response, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_string",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_msgs__srv__SpawnObject_Response, error_string),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SpawnObject_Response__rosidl_typesupport_introspection_c__SpawnObject_Response_message_members = {
  "carla_msgs__srv",  // message namespace
  "SpawnObject_Response",  // message name
  2,  // number of fields
  sizeof(carla_msgs__srv__SpawnObject_Response),
  SpawnObject_Response__rosidl_typesupport_introspection_c__SpawnObject_Response_message_member_array,  // message members
  SpawnObject_Response__rosidl_typesupport_introspection_c__SpawnObject_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SpawnObject_Response__rosidl_typesupport_introspection_c__SpawnObject_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SpawnObject_Response__rosidl_typesupport_introspection_c__SpawnObject_Response_message_type_support_handle = {
  0,
  &SpawnObject_Response__rosidl_typesupport_introspection_c__SpawnObject_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carla_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carla_msgs, srv, SpawnObject_Response)() {
  if (!SpawnObject_Response__rosidl_typesupport_introspection_c__SpawnObject_Response_message_type_support_handle.typesupport_identifier) {
    SpawnObject_Response__rosidl_typesupport_introspection_c__SpawnObject_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SpawnObject_Response__rosidl_typesupport_introspection_c__SpawnObject_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "carla_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "carla_msgs/srv/detail/spawn_object__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers carla_msgs__srv__detail__spawn_object__rosidl_typesupport_introspection_c__SpawnObject_service_members = {
  "carla_msgs__srv",  // service namespace
  "SpawnObject",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // carla_msgs__srv__detail__spawn_object__rosidl_typesupport_introspection_c__SpawnObject_Request_message_type_support_handle,
  NULL  // response message
  // carla_msgs__srv__detail__spawn_object__rosidl_typesupport_introspection_c__SpawnObject_Response_message_type_support_handle
};

static rosidl_service_type_support_t carla_msgs__srv__detail__spawn_object__rosidl_typesupport_introspection_c__SpawnObject_service_type_support_handle = {
  0,
  &carla_msgs__srv__detail__spawn_object__rosidl_typesupport_introspection_c__SpawnObject_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carla_msgs, srv, SpawnObject_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carla_msgs, srv, SpawnObject_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carla_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carla_msgs, srv, SpawnObject)() {
  if (!carla_msgs__srv__detail__spawn_object__rosidl_typesupport_introspection_c__SpawnObject_service_type_support_handle.typesupport_identifier) {
    carla_msgs__srv__detail__spawn_object__rosidl_typesupport_introspection_c__SpawnObject_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)carla_msgs__srv__detail__spawn_object__rosidl_typesupport_introspection_c__SpawnObject_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carla_msgs, srv, SpawnObject_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carla_msgs, srv, SpawnObject_Response)()->data;
  }

  return &carla_msgs__srv__detail__spawn_object__rosidl_typesupport_introspection_c__SpawnObject_service_type_support_handle;
}
