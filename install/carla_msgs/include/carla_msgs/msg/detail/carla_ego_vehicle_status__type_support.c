// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carla_msgs:msg/CarlaEgoVehicleStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carla_msgs/msg/detail/carla_ego_vehicle_status__rosidl_typesupport_introspection_c.h"
#include "carla_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carla_msgs/msg/detail/carla_ego_vehicle_status__functions.h"
#include "carla_msgs/msg/detail/carla_ego_vehicle_status__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `acceleration`
#include "geometry_msgs/msg/accel.h"
// Member `acceleration`
#include "geometry_msgs/msg/detail/accel__rosidl_typesupport_introspection_c.h"
// Member `orientation`
#include "geometry_msgs/msg/quaternion.h"
// Member `orientation`
#include "geometry_msgs/msg/detail/quaternion__rosidl_typesupport_introspection_c.h"
// Member `control`
#include "carla_msgs/msg/carla_ego_vehicle_control.h"
// Member `control`
#include "carla_msgs/msg/detail/carla_ego_vehicle_control__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CarlaEgoVehicleStatus__rosidl_typesupport_introspection_c__CarlaEgoVehicleStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carla_msgs__msg__CarlaEgoVehicleStatus__init(message_memory);
}

void CarlaEgoVehicleStatus__rosidl_typesupport_introspection_c__CarlaEgoVehicleStatus_fini_function(void * message_memory)
{
  carla_msgs__msg__CarlaEgoVehicleStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CarlaEgoVehicleStatus__rosidl_typesupport_introspection_c__CarlaEgoVehicleStatus_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_msgs__msg__CarlaEgoVehicleStatus, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_msgs__msg__CarlaEgoVehicleStatus, velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acceleration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_msgs__msg__CarlaEgoVehicleStatus, acceleration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "orientation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_msgs__msg__CarlaEgoVehicleStatus, orientation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "control",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_msgs__msg__CarlaEgoVehicleStatus, control),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CarlaEgoVehicleStatus__rosidl_typesupport_introspection_c__CarlaEgoVehicleStatus_message_members = {
  "carla_msgs__msg",  // message namespace
  "CarlaEgoVehicleStatus",  // message name
  5,  // number of fields
  sizeof(carla_msgs__msg__CarlaEgoVehicleStatus),
  CarlaEgoVehicleStatus__rosidl_typesupport_introspection_c__CarlaEgoVehicleStatus_message_member_array,  // message members
  CarlaEgoVehicleStatus__rosidl_typesupport_introspection_c__CarlaEgoVehicleStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  CarlaEgoVehicleStatus__rosidl_typesupport_introspection_c__CarlaEgoVehicleStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CarlaEgoVehicleStatus__rosidl_typesupport_introspection_c__CarlaEgoVehicleStatus_message_type_support_handle = {
  0,
  &CarlaEgoVehicleStatus__rosidl_typesupport_introspection_c__CarlaEgoVehicleStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carla_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carla_msgs, msg, CarlaEgoVehicleStatus)() {
  CarlaEgoVehicleStatus__rosidl_typesupport_introspection_c__CarlaEgoVehicleStatus_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  CarlaEgoVehicleStatus__rosidl_typesupport_introspection_c__CarlaEgoVehicleStatus_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Accel)();
  CarlaEgoVehicleStatus__rosidl_typesupport_introspection_c__CarlaEgoVehicleStatus_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Quaternion)();
  CarlaEgoVehicleStatus__rosidl_typesupport_introspection_c__CarlaEgoVehicleStatus_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carla_msgs, msg, CarlaEgoVehicleControl)();
  if (!CarlaEgoVehicleStatus__rosidl_typesupport_introspection_c__CarlaEgoVehicleStatus_message_type_support_handle.typesupport_identifier) {
    CarlaEgoVehicleStatus__rosidl_typesupport_introspection_c__CarlaEgoVehicleStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CarlaEgoVehicleStatus__rosidl_typesupport_introspection_c__CarlaEgoVehicleStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
