// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from carla_msgs:msg/CarlaEgoVehicleInfo.idl
// generated code does not contain a copyright notice
#include "carla_msgs/msg/detail/carla_ego_vehicle_info__rosidl_typesupport_fastrtps_cpp.hpp"
#include "carla_msgs/msg/detail/carla_ego_vehicle_info__struct.hpp"

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
namespace carla_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const carla_msgs::msg::CarlaEgoVehicleInfoWheel &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  carla_msgs::msg::CarlaEgoVehicleInfoWheel &);
size_t get_serialized_size(
  const carla_msgs::msg::CarlaEgoVehicleInfoWheel &,
  size_t current_alignment);
size_t
max_serialized_size_CarlaEgoVehicleInfoWheel(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace carla_msgs

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
  const carla_msgs::msg::CarlaEgoVehicleInfo & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: id
  cdr << ros_message.id;
  // Member: type
  cdr << ros_message.type;
  // Member: rolename
  cdr << ros_message.rolename;
  // Member: wheels
  {
    size_t size = ros_message.wheels.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      carla_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.wheels[i],
        cdr);
    }
  }
  // Member: max_rpm
  cdr << ros_message.max_rpm;
  // Member: moi
  cdr << ros_message.moi;
  // Member: damping_rate_full_throttle
  cdr << ros_message.damping_rate_full_throttle;
  // Member: damping_rate_zero_throttle_clutch_engaged
  cdr << ros_message.damping_rate_zero_throttle_clutch_engaged;
  // Member: damping_rate_zero_throttle_clutch_disengaged
  cdr << ros_message.damping_rate_zero_throttle_clutch_disengaged;
  // Member: use_gear_autobox
  cdr << (ros_message.use_gear_autobox ? true : false);
  // Member: gear_switch_time
  cdr << ros_message.gear_switch_time;
  // Member: clutch_strength
  cdr << ros_message.clutch_strength;
  // Member: mass
  cdr << ros_message.mass;
  // Member: drag_coefficient
  cdr << ros_message.drag_coefficient;
  // Member: center_of_mass
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.center_of_mass,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carla_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  carla_msgs::msg::CarlaEgoVehicleInfo & ros_message)
{
  // Member: id
  cdr >> ros_message.id;

  // Member: type
  cdr >> ros_message.type;

  // Member: rolename
  cdr >> ros_message.rolename;

  // Member: wheels
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.wheels.resize(size);
    for (size_t i = 0; i < size; i++) {
      carla_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.wheels[i]);
    }
  }

  // Member: max_rpm
  cdr >> ros_message.max_rpm;

  // Member: moi
  cdr >> ros_message.moi;

  // Member: damping_rate_full_throttle
  cdr >> ros_message.damping_rate_full_throttle;

  // Member: damping_rate_zero_throttle_clutch_engaged
  cdr >> ros_message.damping_rate_zero_throttle_clutch_engaged;

  // Member: damping_rate_zero_throttle_clutch_disengaged
  cdr >> ros_message.damping_rate_zero_throttle_clutch_disengaged;

  // Member: use_gear_autobox
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.use_gear_autobox = tmp ? true : false;
  }

  // Member: gear_switch_time
  cdr >> ros_message.gear_switch_time;

  // Member: clutch_strength
  cdr >> ros_message.clutch_strength;

  // Member: mass
  cdr >> ros_message.mass;

  // Member: drag_coefficient
  cdr >> ros_message.drag_coefficient;

  // Member: center_of_mass
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.center_of_mass);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carla_msgs
get_serialized_size(
  const carla_msgs::msg::CarlaEgoVehicleInfo & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: id
  {
    size_t item_size = sizeof(ros_message.id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.type.size() + 1);
  // Member: rolename
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.rolename.size() + 1);
  // Member: wheels
  {
    size_t array_size = ros_message.wheels.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        carla_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.wheels[index], current_alignment);
    }
  }
  // Member: max_rpm
  {
    size_t item_size = sizeof(ros_message.max_rpm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: moi
  {
    size_t item_size = sizeof(ros_message.moi);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: damping_rate_full_throttle
  {
    size_t item_size = sizeof(ros_message.damping_rate_full_throttle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: damping_rate_zero_throttle_clutch_engaged
  {
    size_t item_size = sizeof(ros_message.damping_rate_zero_throttle_clutch_engaged);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: damping_rate_zero_throttle_clutch_disengaged
  {
    size_t item_size = sizeof(ros_message.damping_rate_zero_throttle_clutch_disengaged);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: use_gear_autobox
  {
    size_t item_size = sizeof(ros_message.use_gear_autobox);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gear_switch_time
  {
    size_t item_size = sizeof(ros_message.gear_switch_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: clutch_strength
  {
    size_t item_size = sizeof(ros_message.clutch_strength);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mass
  {
    size_t item_size = sizeof(ros_message.mass);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: drag_coefficient
  {
    size_t item_size = sizeof(ros_message.drag_coefficient);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: center_of_mass

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.center_of_mass, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carla_msgs
max_serialized_size_CarlaEgoVehicleInfo(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: type
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: rolename
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: wheels
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        carla_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_CarlaEgoVehicleInfoWheel(
        full_bounded, current_alignment);
    }
  }

  // Member: max_rpm
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: moi
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: damping_rate_full_throttle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: damping_rate_zero_throttle_clutch_engaged
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: damping_rate_zero_throttle_clutch_disengaged
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: use_gear_autobox
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gear_switch_time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: clutch_strength
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mass
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: drag_coefficient
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: center_of_mass
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

static bool _CarlaEgoVehicleInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const carla_msgs::msg::CarlaEgoVehicleInfo *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CarlaEgoVehicleInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<carla_msgs::msg::CarlaEgoVehicleInfo *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CarlaEgoVehicleInfo__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const carla_msgs::msg::CarlaEgoVehicleInfo *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CarlaEgoVehicleInfo__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_CarlaEgoVehicleInfo(full_bounded, 0);
}

static message_type_support_callbacks_t _CarlaEgoVehicleInfo__callbacks = {
  "carla_msgs::msg",
  "CarlaEgoVehicleInfo",
  _CarlaEgoVehicleInfo__cdr_serialize,
  _CarlaEgoVehicleInfo__cdr_deserialize,
  _CarlaEgoVehicleInfo__get_serialized_size,
  _CarlaEgoVehicleInfo__max_serialized_size
};

static rosidl_message_type_support_t _CarlaEgoVehicleInfo__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CarlaEgoVehicleInfo__callbacks,
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
get_message_type_support_handle<carla_msgs::msg::CarlaEgoVehicleInfo>()
{
  return &carla_msgs::msg::typesupport_fastrtps_cpp::_CarlaEgoVehicleInfo__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carla_msgs, msg, CarlaEgoVehicleInfo)() {
  return &carla_msgs::msg::typesupport_fastrtps_cpp::_CarlaEgoVehicleInfo__handle;
}

#ifdef __cplusplus
}
#endif
