// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from carla_msgs:msg/CarlaEgoVehicleInfoWheel.idl
// generated code does not contain a copyright notice
#include "carla_msgs/msg/detail/carla_ego_vehicle_info_wheel__rosidl_typesupport_fastrtps_cpp.hpp"
#include "carla_msgs/msg/detail/carla_ego_vehicle_info_wheel__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Vector3 &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Vector3 &);
size_t get_serialized_size(
  const geometry_msgs::msg::Vector3 &,
  size_t current_alignment);
size_t
max_serialized_size_Vector3(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs


namespace carla_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carla_msgs
cdr_serialize(
  const carla_msgs::msg::CarlaEgoVehicleInfoWheel & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: tire_friction
  cdr << ros_message.tire_friction;
  // Member: damping_rate
  cdr << ros_message.damping_rate;
  // Member: max_steer_angle
  cdr << ros_message.max_steer_angle;
  // Member: radius
  cdr << ros_message.radius;
  // Member: max_brake_torque
  cdr << ros_message.max_brake_torque;
  // Member: max_handbrake_torque
  cdr << ros_message.max_handbrake_torque;
  // Member: position
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.position,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carla_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  carla_msgs::msg::CarlaEgoVehicleInfoWheel & ros_message)
{
  // Member: tire_friction
  cdr >> ros_message.tire_friction;

  // Member: damping_rate
  cdr >> ros_message.damping_rate;

  // Member: max_steer_angle
  cdr >> ros_message.max_steer_angle;

  // Member: radius
  cdr >> ros_message.radius;

  // Member: max_brake_torque
  cdr >> ros_message.max_brake_torque;

  // Member: max_handbrake_torque
  cdr >> ros_message.max_handbrake_torque;

  // Member: position
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.position);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carla_msgs
get_serialized_size(
  const carla_msgs::msg::CarlaEgoVehicleInfoWheel & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: tire_friction
  {
    size_t item_size = sizeof(ros_message.tire_friction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: damping_rate
  {
    size_t item_size = sizeof(ros_message.damping_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_steer_angle
  {
    size_t item_size = sizeof(ros_message.max_steer_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: radius
  {
    size_t item_size = sizeof(ros_message.radius);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_brake_torque
  {
    size_t item_size = sizeof(ros_message.max_brake_torque);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_handbrake_torque
  {
    size_t item_size = sizeof(ros_message.max_handbrake_torque);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: position

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.position, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carla_msgs
max_serialized_size_CarlaEgoVehicleInfoWheel(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: tire_friction
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: damping_rate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: max_steer_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: radius
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: max_brake_torque
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: max_handbrake_torque
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: position
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Vector3(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _CarlaEgoVehicleInfoWheel__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const carla_msgs::msg::CarlaEgoVehicleInfoWheel *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CarlaEgoVehicleInfoWheel__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<carla_msgs::msg::CarlaEgoVehicleInfoWheel *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CarlaEgoVehicleInfoWheel__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const carla_msgs::msg::CarlaEgoVehicleInfoWheel *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CarlaEgoVehicleInfoWheel__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_CarlaEgoVehicleInfoWheel(full_bounded, 0);
}

static message_type_support_callbacks_t _CarlaEgoVehicleInfoWheel__callbacks = {
  "carla_msgs::msg",
  "CarlaEgoVehicleInfoWheel",
  _CarlaEgoVehicleInfoWheel__cdr_serialize,
  _CarlaEgoVehicleInfoWheel__cdr_deserialize,
  _CarlaEgoVehicleInfoWheel__get_serialized_size,
  _CarlaEgoVehicleInfoWheel__max_serialized_size
};

static rosidl_message_type_support_t _CarlaEgoVehicleInfoWheel__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CarlaEgoVehicleInfoWheel__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace carla_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_carla_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<carla_msgs::msg::CarlaEgoVehicleInfoWheel>()
{
  return &carla_msgs::msg::typesupport_fastrtps_cpp::_CarlaEgoVehicleInfoWheel__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carla_msgs, msg, CarlaEgoVehicleInfoWheel)() {
  return &carla_msgs::msg::typesupport_fastrtps_cpp::_CarlaEgoVehicleInfoWheel__handle;
}

#ifdef __cplusplus
}
#endif
