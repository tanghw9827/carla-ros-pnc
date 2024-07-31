// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carla_msgs:msg/CarlaEgoVehicleInfo.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_EGO_VEHICLE_INFO__BUILDER_HPP_
#define CARLA_MSGS__MSG__DETAIL__CARLA_EGO_VEHICLE_INFO__BUILDER_HPP_

#include "carla_msgs/msg/detail/carla_ego_vehicle_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carla_msgs
{

namespace msg
{

namespace builder
{

class Init_CarlaEgoVehicleInfo_center_of_mass
{
public:
  explicit Init_CarlaEgoVehicleInfo_center_of_mass(::carla_msgs::msg::CarlaEgoVehicleInfo & msg)
  : msg_(msg)
  {}
  ::carla_msgs::msg::CarlaEgoVehicleInfo center_of_mass(::carla_msgs::msg::CarlaEgoVehicleInfo::_center_of_mass_type arg)
  {
    msg_.center_of_mass = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carla_msgs::msg::CarlaEgoVehicleInfo msg_;
};

class Init_CarlaEgoVehicleInfo_drag_coefficient
{
public:
  explicit Init_CarlaEgoVehicleInfo_drag_coefficient(::carla_msgs::msg::CarlaEgoVehicleInfo & msg)
  : msg_(msg)
  {}
  Init_CarlaEgoVehicleInfo_center_of_mass drag_coefficient(::carla_msgs::msg::CarlaEgoVehicleInfo::_drag_coefficient_type arg)
  {
    msg_.drag_coefficient = std::move(arg);
    return Init_CarlaEgoVehicleInfo_center_of_mass(msg_);
  }

private:
  ::carla_msgs::msg::CarlaEgoVehicleInfo msg_;
};

class Init_CarlaEgoVehicleInfo_mass
{
public:
  explicit Init_CarlaEgoVehicleInfo_mass(::carla_msgs::msg::CarlaEgoVehicleInfo & msg)
  : msg_(msg)
  {}
  Init_CarlaEgoVehicleInfo_drag_coefficient mass(::carla_msgs::msg::CarlaEgoVehicleInfo::_mass_type arg)
  {
    msg_.mass = std::move(arg);
    return Init_CarlaEgoVehicleInfo_drag_coefficient(msg_);
  }

private:
  ::carla_msgs::msg::CarlaEgoVehicleInfo msg_;
};

class Init_CarlaEgoVehicleInfo_clutch_strength
{
public:
  explicit Init_CarlaEgoVehicleInfo_clutch_strength(::carla_msgs::msg::CarlaEgoVehicleInfo & msg)
  : msg_(msg)
  {}
  Init_CarlaEgoVehicleInfo_mass clutch_strength(::carla_msgs::msg::CarlaEgoVehicleInfo::_clutch_strength_type arg)
  {
    msg_.clutch_strength = std::move(arg);
    return Init_CarlaEgoVehicleInfo_mass(msg_);
  }

private:
  ::carla_msgs::msg::CarlaEgoVehicleInfo msg_;
};

class Init_CarlaEgoVehicleInfo_gear_switch_time
{
public:
  explicit Init_CarlaEgoVehicleInfo_gear_switch_time(::carla_msgs::msg::CarlaEgoVehicleInfo & msg)
  : msg_(msg)
  {}
  Init_CarlaEgoVehicleInfo_clutch_strength gear_switch_time(::carla_msgs::msg::CarlaEgoVehicleInfo::_gear_switch_time_type arg)
  {
    msg_.gear_switch_time = std::move(arg);
    return Init_CarlaEgoVehicleInfo_clutch_strength(msg_);
  }

private:
  ::carla_msgs::msg::CarlaEgoVehicleInfo msg_;
};

class Init_CarlaEgoVehicleInfo_use_gear_autobox
{
public:
  explicit Init_CarlaEgoVehicleInfo_use_gear_autobox(::carla_msgs::msg::CarlaEgoVehicleInfo & msg)
  : msg_(msg)
  {}
  Init_CarlaEgoVehicleInfo_gear_switch_time use_gear_autobox(::carla_msgs::msg::CarlaEgoVehicleInfo::_use_gear_autobox_type arg)
  {
    msg_.use_gear_autobox = std::move(arg);
    return Init_CarlaEgoVehicleInfo_gear_switch_time(msg_);
  }

private:
  ::carla_msgs::msg::CarlaEgoVehicleInfo msg_;
};

class Init_CarlaEgoVehicleInfo_damping_rate_zero_throttle_clutch_disengaged
{
public:
  explicit Init_CarlaEgoVehicleInfo_damping_rate_zero_throttle_clutch_disengaged(::carla_msgs::msg::CarlaEgoVehicleInfo & msg)
  : msg_(msg)
  {}
  Init_CarlaEgoVehicleInfo_use_gear_autobox damping_rate_zero_throttle_clutch_disengaged(::carla_msgs::msg::CarlaEgoVehicleInfo::_damping_rate_zero_throttle_clutch_disengaged_type arg)
  {
    msg_.damping_rate_zero_throttle_clutch_disengaged = std::move(arg);
    return Init_CarlaEgoVehicleInfo_use_gear_autobox(msg_);
  }

private:
  ::carla_msgs::msg::CarlaEgoVehicleInfo msg_;
};

class Init_CarlaEgoVehicleInfo_damping_rate_zero_throttle_clutch_engaged
{
public:
  explicit Init_CarlaEgoVehicleInfo_damping_rate_zero_throttle_clutch_engaged(::carla_msgs::msg::CarlaEgoVehicleInfo & msg)
  : msg_(msg)
  {}
  Init_CarlaEgoVehicleInfo_damping_rate_zero_throttle_clutch_disengaged damping_rate_zero_throttle_clutch_engaged(::carla_msgs::msg::CarlaEgoVehicleInfo::_damping_rate_zero_throttle_clutch_engaged_type arg)
  {
    msg_.damping_rate_zero_throttle_clutch_engaged = std::move(arg);
    return Init_CarlaEgoVehicleInfo_damping_rate_zero_throttle_clutch_disengaged(msg_);
  }

private:
  ::carla_msgs::msg::CarlaEgoVehicleInfo msg_;
};

class Init_CarlaEgoVehicleInfo_damping_rate_full_throttle
{
public:
  explicit Init_CarlaEgoVehicleInfo_damping_rate_full_throttle(::carla_msgs::msg::CarlaEgoVehicleInfo & msg)
  : msg_(msg)
  {}
  Init_CarlaEgoVehicleInfo_damping_rate_zero_throttle_clutch_engaged damping_rate_full_throttle(::carla_msgs::msg::CarlaEgoVehicleInfo::_damping_rate_full_throttle_type arg)
  {
    msg_.damping_rate_full_throttle = std::move(arg);
    return Init_CarlaEgoVehicleInfo_damping_rate_zero_throttle_clutch_engaged(msg_);
  }

private:
  ::carla_msgs::msg::CarlaEgoVehicleInfo msg_;
};

class Init_CarlaEgoVehicleInfo_moi
{
public:
  explicit Init_CarlaEgoVehicleInfo_moi(::carla_msgs::msg::CarlaEgoVehicleInfo & msg)
  : msg_(msg)
  {}
  Init_CarlaEgoVehicleInfo_damping_rate_full_throttle moi(::carla_msgs::msg::CarlaEgoVehicleInfo::_moi_type arg)
  {
    msg_.moi = std::move(arg);
    return Init_CarlaEgoVehicleInfo_damping_rate_full_throttle(msg_);
  }

private:
  ::carla_msgs::msg::CarlaEgoVehicleInfo msg_;
};

class Init_CarlaEgoVehicleInfo_max_rpm
{
public:
  explicit Init_CarlaEgoVehicleInfo_max_rpm(::carla_msgs::msg::CarlaEgoVehicleInfo & msg)
  : msg_(msg)
  {}
  Init_CarlaEgoVehicleInfo_moi max_rpm(::carla_msgs::msg::CarlaEgoVehicleInfo::_max_rpm_type arg)
  {
    msg_.max_rpm = std::move(arg);
    return Init_CarlaEgoVehicleInfo_moi(msg_);
  }

private:
  ::carla_msgs::msg::CarlaEgoVehicleInfo msg_;
};

class Init_CarlaEgoVehicleInfo_wheels
{
public:
  explicit Init_CarlaEgoVehicleInfo_wheels(::carla_msgs::msg::CarlaEgoVehicleInfo & msg)
  : msg_(msg)
  {}
  Init_CarlaEgoVehicleInfo_max_rpm wheels(::carla_msgs::msg::CarlaEgoVehicleInfo::_wheels_type arg)
  {
    msg_.wheels = std::move(arg);
    return Init_CarlaEgoVehicleInfo_max_rpm(msg_);
  }

private:
  ::carla_msgs::msg::CarlaEgoVehicleInfo msg_;
};

class Init_CarlaEgoVehicleInfo_rolename
{
public:
  explicit Init_CarlaEgoVehicleInfo_rolename(::carla_msgs::msg::CarlaEgoVehicleInfo & msg)
  : msg_(msg)
  {}
  Init_CarlaEgoVehicleInfo_wheels rolename(::carla_msgs::msg::CarlaEgoVehicleInfo::_rolename_type arg)
  {
    msg_.rolename = std::move(arg);
    return Init_CarlaEgoVehicleInfo_wheels(msg_);
  }

private:
  ::carla_msgs::msg::CarlaEgoVehicleInfo msg_;
};

class Init_CarlaEgoVehicleInfo_type
{
public:
  explicit Init_CarlaEgoVehicleInfo_type(::carla_msgs::msg::CarlaEgoVehicleInfo & msg)
  : msg_(msg)
  {}
  Init_CarlaEgoVehicleInfo_rolename type(::carla_msgs::msg::CarlaEgoVehicleInfo::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_CarlaEgoVehicleInfo_rolename(msg_);
  }

private:
  ::carla_msgs::msg::CarlaEgoVehicleInfo msg_;
};

class Init_CarlaEgoVehicleInfo_id
{
public:
  Init_CarlaEgoVehicleInfo_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CarlaEgoVehicleInfo_type id(::carla_msgs::msg::CarlaEgoVehicleInfo::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_CarlaEgoVehicleInfo_type(msg_);
  }

private:
  ::carla_msgs::msg::CarlaEgoVehicleInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carla_msgs::msg::CarlaEgoVehicleInfo>()
{
  return carla_msgs::msg::builder::Init_CarlaEgoVehicleInfo_id();
}

}  // namespace carla_msgs

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_EGO_VEHICLE_INFO__BUILDER_HPP_
