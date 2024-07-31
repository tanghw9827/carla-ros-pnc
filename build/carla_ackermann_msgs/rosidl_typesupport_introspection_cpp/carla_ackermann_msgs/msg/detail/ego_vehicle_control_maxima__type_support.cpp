// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from carla_ackermann_msgs:msg/EgoVehicleControlMaxima.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "carla_ackermann_msgs/msg/detail/ego_vehicle_control_maxima__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace carla_ackermann_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void EgoVehicleControlMaxima_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) carla_ackermann_msgs::msg::EgoVehicleControlMaxima(_init);
}

void EgoVehicleControlMaxima_fini_function(void * message_memory)
{
  auto typed_message = static_cast<carla_ackermann_msgs::msg::EgoVehicleControlMaxima *>(message_memory);
  typed_message->~EgoVehicleControlMaxima();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember EgoVehicleControlMaxima_message_member_array[6] = {
  {
    "max_steering_angle",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_ackermann_msgs::msg::EgoVehicleControlMaxima, max_steering_angle),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "max_speed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_ackermann_msgs::msg::EgoVehicleControlMaxima, max_speed),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "max_accel",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_ackermann_msgs::msg::EgoVehicleControlMaxima, max_accel),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "max_decel",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_ackermann_msgs::msg::EgoVehicleControlMaxima, max_decel),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "min_accel",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_ackermann_msgs::msg::EgoVehicleControlMaxima, min_accel),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "max_pedal",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_ackermann_msgs::msg::EgoVehicleControlMaxima, max_pedal),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers EgoVehicleControlMaxima_message_members = {
  "carla_ackermann_msgs::msg",  // message namespace
  "EgoVehicleControlMaxima",  // message name
  6,  // number of fields
  sizeof(carla_ackermann_msgs::msg::EgoVehicleControlMaxima),
  EgoVehicleControlMaxima_message_member_array,  // message members
  EgoVehicleControlMaxima_init_function,  // function to initialize message memory (memory has to be allocated)
  EgoVehicleControlMaxima_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t EgoVehicleControlMaxima_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &EgoVehicleControlMaxima_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace carla_ackermann_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<carla_ackermann_msgs::msg::EgoVehicleControlMaxima>()
{
  return &::carla_ackermann_msgs::msg::rosidl_typesupport_introspection_cpp::EgoVehicleControlMaxima_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, carla_ackermann_msgs, msg, EgoVehicleControlMaxima)() {
  return &::carla_ackermann_msgs::msg::rosidl_typesupport_introspection_cpp::EgoVehicleControlMaxima_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
