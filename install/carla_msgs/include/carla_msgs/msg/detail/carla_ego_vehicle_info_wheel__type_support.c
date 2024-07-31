// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carla_msgs:msg/CarlaEgoVehicleInfoWheel.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carla_msgs/msg/detail/carla_ego_vehicle_info_wheel__rosidl_typesupport_introspection_c.h"
#include "carla_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carla_msgs/msg/detail/carla_ego_vehicle_info_wheel__functions.h"
#include "carla_msgs/msg/detail/carla_ego_vehicle_info_wheel__struct.h"


// Include directives for member types
// Member `position`
#include "geometry_msgs/msg/vector3.h"
// Member `position`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CarlaEgoVehicleInfoWheel__rosidl_typesupport_introspection_c__CarlaEgoVehicleInfoWheel_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carla_msgs__msg__CarlaEgoVehicleInfoWheel__init(message_memory);
}

void CarlaEgoVehicleInfoWheel__rosidl_typesupport_introspection_c__CarlaEgoVehicleInfoWheel_fini_function(void * message_memory)
{
  carla_msgs__msg__CarlaEgoVehicleInfoWheel__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CarlaEgoVehicleInfoWheel__rosidl_typesupport_introspection_c__CarlaEgoVehicleInfoWheel_message_member_array[7] = {
  {
    "tire_friction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_msgs__msg__CarlaEgoVehicleInfoWheel, tire_friction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "damping_rate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_msgs__msg__CarlaEgoVehicleInfoWheel, damping_rate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_steer_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_msgs__msg__CarlaEgoVehicleInfoWheel, max_steer_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "radius",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_msgs__msg__CarlaEgoVehicleInfoWheel, radius),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_brake_torque",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_msgs__msg__CarlaEgoVehicleInfoWheel, max_brake_torque),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_handbrake_torque",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_msgs__msg__CarlaEgoVehicleInfoWheel, max_handbrake_torque),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_msgs__msg__CarlaEgoVehicleInfoWheel, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CarlaEgoVehicleInfoWheel__rosidl_typesupport_introspection_c__CarlaEgoVehicleInfoWheel_message_members = {
  "carla_msgs__msg",  // message namespace
  "CarlaEgoVehicleInfoWheel",  // message name
  7,  // number of fields
  sizeof(carla_msgs__msg__CarlaEgoVehicleInfoWheel),
  CarlaEgoVehicleInfoWheel__rosidl_typesupport_introspection_c__CarlaEgoVehicleInfoWheel_message_member_array,  // message members
  CarlaEgoVehicleInfoWheel__rosidl_typesupport_introspection_c__CarlaEgoVehicleInfoWheel_init_function,  // function to initialize message memory (memory has to be allocated)
  CarlaEgoVehicleInfoWheel__rosidl_typesupport_introspection_c__CarlaEgoVehicleInfoWheel_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CarlaEgoVehicleInfoWheel__rosidl_typesupport_introspection_c__CarlaEgoVehicleInfoWheel_message_type_support_handle = {
  0,
  &CarlaEgoVehicleInfoWheel__rosidl_typesupport_introspection_c__CarlaEgoVehicleInfoWheel_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carla_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carla_msgs, msg, CarlaEgoVehicleInfoWheel)() {
  CarlaEgoVehicleInfoWheel__rosidl_typesupport_introspection_c__CarlaEgoVehicleInfoWheel_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!CarlaEgoVehicleInfoWheel__rosidl_typesupport_introspection_c__CarlaEgoVehicleInfoWheel_message_type_support_handle.typesupport_identifier) {
    CarlaEgoVehicleInfoWheel__rosidl_typesupport_introspection_c__CarlaEgoVehicleInfoWheel_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CarlaEgoVehicleInfoWheel__rosidl_typesupport_introspection_c__CarlaEgoVehicleInfoWheel_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
