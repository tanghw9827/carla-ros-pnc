// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from carla_ros_scenario_runner_types:msg/CarlaScenarioRunnerStatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "carla_ros_scenario_runner_types/msg/detail/carla_scenario_runner_status__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace carla_ros_scenario_runner_types
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void CarlaScenarioRunnerStatus_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) carla_ros_scenario_runner_types::msg::CarlaScenarioRunnerStatus(_init);
}

void CarlaScenarioRunnerStatus_fini_function(void * message_memory)
{
  auto typed_message = static_cast<carla_ros_scenario_runner_types::msg::CarlaScenarioRunnerStatus *>(message_memory);
  typed_message->~CarlaScenarioRunnerStatus();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CarlaScenarioRunnerStatus_message_member_array[1] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_ros_scenario_runner_types::msg::CarlaScenarioRunnerStatus, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CarlaScenarioRunnerStatus_message_members = {
  "carla_ros_scenario_runner_types::msg",  // message namespace
  "CarlaScenarioRunnerStatus",  // message name
  1,  // number of fields
  sizeof(carla_ros_scenario_runner_types::msg::CarlaScenarioRunnerStatus),
  CarlaScenarioRunnerStatus_message_member_array,  // message members
  CarlaScenarioRunnerStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  CarlaScenarioRunnerStatus_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CarlaScenarioRunnerStatus_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CarlaScenarioRunnerStatus_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace carla_ros_scenario_runner_types


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<carla_ros_scenario_runner_types::msg::CarlaScenarioRunnerStatus>()
{
  return &::carla_ros_scenario_runner_types::msg::rosidl_typesupport_introspection_cpp::CarlaScenarioRunnerStatus_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, carla_ros_scenario_runner_types, msg, CarlaScenarioRunnerStatus)() {
  return &::carla_ros_scenario_runner_types::msg::rosidl_typesupport_introspection_cpp::CarlaScenarioRunnerStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
