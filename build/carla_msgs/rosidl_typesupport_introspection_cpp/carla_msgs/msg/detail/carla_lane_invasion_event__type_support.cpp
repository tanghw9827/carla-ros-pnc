// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from carla_msgs:msg/CarlaLaneInvasionEvent.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "carla_msgs/msg/detail/carla_lane_invasion_event__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace carla_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void CarlaLaneInvasionEvent_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) carla_msgs::msg::CarlaLaneInvasionEvent(_init);
}

void CarlaLaneInvasionEvent_fini_function(void * message_memory)
{
  auto typed_message = static_cast<carla_msgs::msg::CarlaLaneInvasionEvent *>(message_memory);
  typed_message->~CarlaLaneInvasionEvent();
}

size_t size_function__CarlaLaneInvasionEvent__crossed_lane_markings(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CarlaLaneInvasionEvent__crossed_lane_markings(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__CarlaLaneInvasionEvent__crossed_lane_markings(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void resize_function__CarlaLaneInvasionEvent__crossed_lane_markings(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CarlaLaneInvasionEvent_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_msgs::msg::CarlaLaneInvasionEvent, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "crossed_lane_markings",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carla_msgs::msg::CarlaLaneInvasionEvent, crossed_lane_markings),  // bytes offset in struct
    nullptr,  // default value
    size_function__CarlaLaneInvasionEvent__crossed_lane_markings,  // size() function pointer
    get_const_function__CarlaLaneInvasionEvent__crossed_lane_markings,  // get_const(index) function pointer
    get_function__CarlaLaneInvasionEvent__crossed_lane_markings,  // get(index) function pointer
    resize_function__CarlaLaneInvasionEvent__crossed_lane_markings  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CarlaLaneInvasionEvent_message_members = {
  "carla_msgs::msg",  // message namespace
  "CarlaLaneInvasionEvent",  // message name
  2,  // number of fields
  sizeof(carla_msgs::msg::CarlaLaneInvasionEvent),
  CarlaLaneInvasionEvent_message_member_array,  // message members
  CarlaLaneInvasionEvent_init_function,  // function to initialize message memory (memory has to be allocated)
  CarlaLaneInvasionEvent_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CarlaLaneInvasionEvent_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CarlaLaneInvasionEvent_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace carla_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<carla_msgs::msg::CarlaLaneInvasionEvent>()
{
  return &::carla_msgs::msg::rosidl_typesupport_introspection_cpp::CarlaLaneInvasionEvent_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, carla_msgs, msg, CarlaLaneInvasionEvent)() {
  return &::carla_msgs::msg::rosidl_typesupport_introspection_cpp::CarlaLaneInvasionEvent_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
