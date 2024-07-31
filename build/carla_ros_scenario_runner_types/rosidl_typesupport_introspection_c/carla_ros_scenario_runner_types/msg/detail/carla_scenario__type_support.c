// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carla_ros_scenario_runner_types:msg/CarlaScenario.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carla_ros_scenario_runner_types/msg/detail/carla_scenario__rosidl_typesupport_introspection_c.h"
#include "carla_ros_scenario_runner_types/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carla_ros_scenario_runner_types/msg/detail/carla_scenario__functions.h"
#include "carla_ros_scenario_runner_types/msg/detail/carla_scenario__struct.h"


// Include directives for member types
// Member `name`
// Member `scenario_file`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CarlaScenario__rosidl_typesupport_introspection_c__CarlaScenario_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carla_ros_scenario_runner_types__msg__CarlaScenario__init(message_memory);
}

void CarlaScenario__rosidl_typesupport_introspection_c__CarlaScenario_fini_function(void * message_memory)
{
  carla_ros_scenario_runner_types__msg__CarlaScenario__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CarlaScenario__rosidl_typesupport_introspection_c__CarlaScenario_message_member_array[2] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_ros_scenario_runner_types__msg__CarlaScenario, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "scenario_file",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_ros_scenario_runner_types__msg__CarlaScenario, scenario_file),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CarlaScenario__rosidl_typesupport_introspection_c__CarlaScenario_message_members = {
  "carla_ros_scenario_runner_types__msg",  // message namespace
  "CarlaScenario",  // message name
  2,  // number of fields
  sizeof(carla_ros_scenario_runner_types__msg__CarlaScenario),
  CarlaScenario__rosidl_typesupport_introspection_c__CarlaScenario_message_member_array,  // message members
  CarlaScenario__rosidl_typesupport_introspection_c__CarlaScenario_init_function,  // function to initialize message memory (memory has to be allocated)
  CarlaScenario__rosidl_typesupport_introspection_c__CarlaScenario_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CarlaScenario__rosidl_typesupport_introspection_c__CarlaScenario_message_type_support_handle = {
  0,
  &CarlaScenario__rosidl_typesupport_introspection_c__CarlaScenario_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carla_ros_scenario_runner_types
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carla_ros_scenario_runner_types, msg, CarlaScenario)() {
  if (!CarlaScenario__rosidl_typesupport_introspection_c__CarlaScenario_message_type_support_handle.typesupport_identifier) {
    CarlaScenario__rosidl_typesupport_introspection_c__CarlaScenario_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CarlaScenario__rosidl_typesupport_introspection_c__CarlaScenario_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
