// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pnc_msgs:msg/Trajectory.idl
// generated code does not contain a copyright notice

#ifndef PNC_MSGS__MSG__DETAIL__TRAJECTORY__BUILDER_HPP_
#define PNC_MSGS__MSG__DETAIL__TRAJECTORY__BUILDER_HPP_

#include "pnc_msgs/msg/detail/trajectory__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace pnc_msgs
{

namespace msg
{

namespace builder
{

class Init_Trajectory_points
{
public:
  Init_Trajectory_points()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pnc_msgs::msg::Trajectory points(::pnc_msgs::msg::Trajectory::_points_type arg)
  {
    msg_.points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pnc_msgs::msg::Trajectory msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pnc_msgs::msg::Trajectory>()
{
  return pnc_msgs::msg::builder::Init_Trajectory_points();
}

}  // namespace pnc_msgs

#endif  // PNC_MSGS__MSG__DETAIL__TRAJECTORY__BUILDER_HPP_
