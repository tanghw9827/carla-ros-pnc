// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carla_ackermann_msgs:msg/EgoVehicleControlInfo.idl
// generated code does not contain a copyright notice

#ifndef CARLA_ACKERMANN_MSGS__MSG__DETAIL__EGO_VEHICLE_CONTROL_INFO__BUILDER_HPP_
#define CARLA_ACKERMANN_MSGS__MSG__DETAIL__EGO_VEHICLE_CONTROL_INFO__BUILDER_HPP_

#include "carla_ackermann_msgs/msg/detail/ego_vehicle_control_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carla_ackermann_msgs
{

namespace msg
{

namespace builder
{

class Init_EgoVehicleControlInfo_output
{
public:
  explicit Init_EgoVehicleControlInfo_output(::carla_ackermann_msgs::msg::EgoVehicleControlInfo & msg)
  : msg_(msg)
  {}
  ::carla_ackermann_msgs::msg::EgoVehicleControlInfo output(::carla_ackermann_msgs::msg::EgoVehicleControlInfo::_output_type arg)
  {
    msg_.output = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carla_ackermann_msgs::msg::EgoVehicleControlInfo msg_;
};

class Init_EgoVehicleControlInfo_status
{
public:
  explicit Init_EgoVehicleControlInfo_status(::carla_ackermann_msgs::msg::EgoVehicleControlInfo & msg)
  : msg_(msg)
  {}
  Init_EgoVehicleControlInfo_output status(::carla_ackermann_msgs::msg::EgoVehicleControlInfo::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_EgoVehicleControlInfo_output(msg_);
  }

private:
  ::carla_ackermann_msgs::msg::EgoVehicleControlInfo msg_;
};

class Init_EgoVehicleControlInfo_current
{
public:
  explicit Init_EgoVehicleControlInfo_current(::carla_ackermann_msgs::msg::EgoVehicleControlInfo & msg)
  : msg_(msg)
  {}
  Init_EgoVehicleControlInfo_status current(::carla_ackermann_msgs::msg::EgoVehicleControlInfo::_current_type arg)
  {
    msg_.current = std::move(arg);
    return Init_EgoVehicleControlInfo_status(msg_);
  }

private:
  ::carla_ackermann_msgs::msg::EgoVehicleControlInfo msg_;
};

class Init_EgoVehicleControlInfo_target
{
public:
  explicit Init_EgoVehicleControlInfo_target(::carla_ackermann_msgs::msg::EgoVehicleControlInfo & msg)
  : msg_(msg)
  {}
  Init_EgoVehicleControlInfo_current target(::carla_ackermann_msgs::msg::EgoVehicleControlInfo::_target_type arg)
  {
    msg_.target = std::move(arg);
    return Init_EgoVehicleControlInfo_current(msg_);
  }

private:
  ::carla_ackermann_msgs::msg::EgoVehicleControlInfo msg_;
};

class Init_EgoVehicleControlInfo_restrictions
{
public:
  explicit Init_EgoVehicleControlInfo_restrictions(::carla_ackermann_msgs::msg::EgoVehicleControlInfo & msg)
  : msg_(msg)
  {}
  Init_EgoVehicleControlInfo_target restrictions(::carla_ackermann_msgs::msg::EgoVehicleControlInfo::_restrictions_type arg)
  {
    msg_.restrictions = std::move(arg);
    return Init_EgoVehicleControlInfo_target(msg_);
  }

private:
  ::carla_ackermann_msgs::msg::EgoVehicleControlInfo msg_;
};

class Init_EgoVehicleControlInfo_header
{
public:
  Init_EgoVehicleControlInfo_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EgoVehicleControlInfo_restrictions header(::carla_ackermann_msgs::msg::EgoVehicleControlInfo::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_EgoVehicleControlInfo_restrictions(msg_);
  }

private:
  ::carla_ackermann_msgs::msg::EgoVehicleControlInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carla_ackermann_msgs::msg::EgoVehicleControlInfo>()
{
  return carla_ackermann_msgs::msg::builder::Init_EgoVehicleControlInfo_header();
}

}  // namespace carla_ackermann_msgs

#endif  // CARLA_ACKERMANN_MSGS__MSG__DETAIL__EGO_VEHICLE_CONTROL_INFO__BUILDER_HPP_
