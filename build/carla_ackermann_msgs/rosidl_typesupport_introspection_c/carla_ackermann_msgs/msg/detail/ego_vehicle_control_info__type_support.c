// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carla_ackermann_msgs:msg/EgoVehicleControlInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carla_ackermann_msgs/msg/detail/ego_vehicle_control_info__rosidl_typesupport_introspection_c.h"
#include "carla_ackermann_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carla_ackermann_msgs/msg/detail/ego_vehicle_control_info__functions.h"
#include "carla_ackermann_msgs/msg/detail/ego_vehicle_control_info__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `restrictions`
#include "carla_ackermann_msgs/msg/ego_vehicle_control_maxima.h"
// Member `restrictions`
#include "carla_ackermann_msgs/msg/detail/ego_vehicle_control_maxima__rosidl_typesupport_introspection_c.h"
// Member `target`
#include "carla_ackermann_msgs/msg/ego_vehicle_control_target.h"
// Member `target`
#include "carla_ackermann_msgs/msg/detail/ego_vehicle_control_target__rosidl_typesupport_introspection_c.h"
// Member `current`
#include "carla_ackermann_msgs/msg/ego_vehicle_control_current.h"
// Member `current`
#include "carla_ackermann_msgs/msg/detail/ego_vehicle_control_current__rosidl_typesupport_introspection_c.h"
// Member `status`
#include "carla_ackermann_msgs/msg/ego_vehicle_control_status.h"
// Member `status`
#include "carla_ackermann_msgs/msg/detail/ego_vehicle_control_status__rosidl_typesupport_introspection_c.h"
// Member `output`
#include "carla_msgs/msg/carla_ego_vehicle_control.h"
// Member `output`
#include "carla_msgs/msg/detail/carla_ego_vehicle_control__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void EgoVehicleControlInfo__rosidl_typesupport_introspection_c__EgoVehicleControlInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carla_ackermann_msgs__msg__EgoVehicleControlInfo__init(message_memory);
}

void EgoVehicleControlInfo__rosidl_typesupport_introspection_c__EgoVehicleControlInfo_fini_function(void * message_memory)
{
  carla_ackermann_msgs__msg__EgoVehicleControlInfo__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember EgoVehicleControlInfo__rosidl_typesupport_introspection_c__EgoVehicleControlInfo_message_member_array[6] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_ackermann_msgs__msg__EgoVehicleControlInfo, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "restrictions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_ackermann_msgs__msg__EgoVehicleControlInfo, restrictions),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_ackermann_msgs__msg__EgoVehicleControlInfo, target),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_ackermann_msgs__msg__EgoVehicleControlInfo, current),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_ackermann_msgs__msg__EgoVehicleControlInfo, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "output",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_ackermann_msgs__msg__EgoVehicleControlInfo, output),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers EgoVehicleControlInfo__rosidl_typesupport_introspection_c__EgoVehicleControlInfo_message_members = {
  "carla_ackermann_msgs__msg",  // message namespace
  "EgoVehicleControlInfo",  // message name
  6,  // number of fields
  sizeof(carla_ackermann_msgs__msg__EgoVehicleControlInfo),
  EgoVehicleControlInfo__rosidl_typesupport_introspection_c__EgoVehicleControlInfo_message_member_array,  // message members
  EgoVehicleControlInfo__rosidl_typesupport_introspection_c__EgoVehicleControlInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  EgoVehicleControlInfo__rosidl_typesupport_introspection_c__EgoVehicleControlInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t EgoVehicleControlInfo__rosidl_typesupport_introspection_c__EgoVehicleControlInfo_message_type_support_handle = {
  0,
  &EgoVehicleControlInfo__rosidl_typesupport_introspection_c__EgoVehicleControlInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carla_ackermann_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carla_ackermann_msgs, msg, EgoVehicleControlInfo)() {
  EgoVehicleControlInfo__rosidl_typesupport_introspection_c__EgoVehicleControlInfo_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  EgoVehicleControlInfo__rosidl_typesupport_introspection_c__EgoVehicleControlInfo_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carla_ackermann_msgs, msg, EgoVehicleControlMaxima)();
  EgoVehicleControlInfo__rosidl_typesupport_introspection_c__EgoVehicleControlInfo_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carla_ackermann_msgs, msg, EgoVehicleControlTarget)();
  EgoVehicleControlInfo__rosidl_typesupport_introspection_c__EgoVehicleControlInfo_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carla_ackermann_msgs, msg, EgoVehicleControlCurrent)();
  EgoVehicleControlInfo__rosidl_typesupport_introspection_c__EgoVehicleControlInfo_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carla_ackermann_msgs, msg, EgoVehicleControlStatus)();
  EgoVehicleControlInfo__rosidl_typesupport_introspection_c__EgoVehicleControlInfo_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carla_msgs, msg, CarlaEgoVehicleControl)();
  if (!EgoVehicleControlInfo__rosidl_typesupport_introspection_c__EgoVehicleControlInfo_message_type_support_handle.typesupport_identifier) {
    EgoVehicleControlInfo__rosidl_typesupport_introspection_c__EgoVehicleControlInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &EgoVehicleControlInfo__rosidl_typesupport_introspection_c__EgoVehicleControlInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
