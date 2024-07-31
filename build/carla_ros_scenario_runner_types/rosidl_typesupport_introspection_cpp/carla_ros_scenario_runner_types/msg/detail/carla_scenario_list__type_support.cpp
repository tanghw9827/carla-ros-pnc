// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from carla_ros_scenario_runner_types:msg/CarlaScenarioList.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "carla_ros_scenario_runner_types/msg/detail/carla_scenario_list__struct.hpp"
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

void CarlaScenarioList_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) carla_ros_scenario_runner_types::msg::CarlaScenarioList(_init);
}

void CarlaScenarioList_fini_function(void * message_memory)
{
  auto typed_message = static_cast<carla_ros_scenario_runner_types::msg::CarlaScenarioList *>(message_memory);
  typed_message->~CarlaScenarioList();
}

size_t size_function__CarlaScenarioList__scenarios(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<carla_ros_scenario_runner_types::msg::CarlaScenario> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CarlaScenarioList__scenarios(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<carla_ros_scenario_runner_types::msg::CarlaScenario> *>(untyped_member);
  return &member[index];
}

void * get_function__CarlaScenarioList__scenarios(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<carla_ros_scenario_runner_types::msg::CarlaScenario> *>(untyped_member);
  return &member[index];
}

void resize_function__CarlaScenarioList__scenarios(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<carla_ros_scenario_runner_types::msg::CarlaScenario> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CarlaScenarioList_message_member_array[1] = {
  {
    "scenarios",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<carla_ros_scenario_runner_types::msg::CarlaScenario>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_ros_scenario_runner_types::msg::CarlaScenarioList, scenarios),  // bytes offset in struct
    nullptr,  // default value
    size_function__CarlaScenarioList__scenarios,  // size() function pointer
    get_const_function__CarlaScenarioList__scenarios,  // get_const(index) function pointer
    get_function__CarlaScenarioList__scenarios,  // get(index) function pointer
    resize_function__CarlaScenarioList__scenarios  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CarlaScenarioList_message_members = {
  "carla_ros_scenario_runner_types::msg",  // message namespace
  "CarlaScenarioList",  // message name
  1,  // number of fields
  sizeof(carla_ros_scenario_runner_types::msg::CarlaScenarioList),
  CarlaScenarioList_message_member_array,  // message members
  CarlaScenarioList_init_function,  // function to initialize message memory (memory has to be allocated)
  CarlaScenarioList_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CarlaScenarioList_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CarlaScenarioList_message_members,
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
get_message_type_support_handle<carla_ros_scenario_runner_types::msg::CarlaScenarioList>()
{
  return &::carla_ros_scenario_runner_types::msg::rosidl_typesupport_introspection_cpp::CarlaScenarioList_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, carla_ros_scenario_runner_types, msg, CarlaScenarioList)() {
  return &::carla_ros_scenario_runner_types::msg::rosidl_typesupport_introspection_cpp::CarlaScenarioList_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
