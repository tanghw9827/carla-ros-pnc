// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pnc_msgs:msg/TrajectoryPoint.idl
// generated code does not contain a copyright notice

#ifndef PNC_MSGS__MSG__DETAIL__TRAJECTORY_POINT__BUILDER_HPP_
#define PNC_MSGS__MSG__DETAIL__TRAJECTORY_POINT__BUILDER_HPP_

#include "pnc_msgs/msg/detail/trajectory_point__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace pnc_msgs
{

namespace msg
{

namespace builder
{

class Init_TrajectoryPoint_time_stamped
{
public:
  explicit Init_TrajectoryPoint_time_stamped(::pnc_msgs::msg::TrajectoryPoint & msg)
  : msg_(msg)
  {}
  ::pnc_msgs::msg::TrajectoryPoint time_stamped(::pnc_msgs::msg::TrajectoryPoint::_time_stamped_type arg)
  {
    msg_.time_stamped = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pnc_msgs::msg::TrajectoryPoint msg_;
};

class Init_TrajectoryPoint_a_tau
{
public:
  explicit Init_TrajectoryPoint_a_tau(::pnc_msgs::msg::TrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPoint_time_stamped a_tau(::pnc_msgs::msg::TrajectoryPoint::_a_tau_type arg)
  {
    msg_.a_tau = std::move(arg);
    return Init_TrajectoryPoint_time_stamped(msg_);
  }

private:
  ::pnc_msgs::msg::TrajectoryPoint msg_;
};

class Init_TrajectoryPoint_ay
{
public:
  explicit Init_TrajectoryPoint_ay(::pnc_msgs::msg::TrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPoint_a_tau ay(::pnc_msgs::msg::TrajectoryPoint::_ay_type arg)
  {
    msg_.ay = std::move(arg);
    return Init_TrajectoryPoint_a_tau(msg_);
  }

private:
  ::pnc_msgs::msg::TrajectoryPoint msg_;
};

class Init_TrajectoryPoint_ax
{
public:
  explicit Init_TrajectoryPoint_ax(::pnc_msgs::msg::TrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPoint_ay ax(::pnc_msgs::msg::TrajectoryPoint::_ax_type arg)
  {
    msg_.ax = std::move(arg);
    return Init_TrajectoryPoint_ay(msg_);
  }

private:
  ::pnc_msgs::msg::TrajectoryPoint msg_;
};

class Init_TrajectoryPoint_v
{
public:
  explicit Init_TrajectoryPoint_v(::pnc_msgs::msg::TrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPoint_ax v(::pnc_msgs::msg::TrajectoryPoint::_v_type arg)
  {
    msg_.v = std::move(arg);
    return Init_TrajectoryPoint_ax(msg_);
  }

private:
  ::pnc_msgs::msg::TrajectoryPoint msg_;
};

class Init_TrajectoryPoint_kappa
{
public:
  explicit Init_TrajectoryPoint_kappa(::pnc_msgs::msg::TrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPoint_v kappa(::pnc_msgs::msg::TrajectoryPoint::_kappa_type arg)
  {
    msg_.kappa = std::move(arg);
    return Init_TrajectoryPoint_v(msg_);
  }

private:
  ::pnc_msgs::msg::TrajectoryPoint msg_;
};

class Init_TrajectoryPoint_heading
{
public:
  explicit Init_TrajectoryPoint_heading(::pnc_msgs::msg::TrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPoint_kappa heading(::pnc_msgs::msg::TrajectoryPoint::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_TrajectoryPoint_kappa(msg_);
  }

private:
  ::pnc_msgs::msg::TrajectoryPoint msg_;
};

class Init_TrajectoryPoint_y
{
public:
  explicit Init_TrajectoryPoint_y(::pnc_msgs::msg::TrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPoint_heading y(::pnc_msgs::msg::TrajectoryPoint::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_TrajectoryPoint_heading(msg_);
  }

private:
  ::pnc_msgs::msg::TrajectoryPoint msg_;
};

class Init_TrajectoryPoint_x
{
public:
  Init_TrajectoryPoint_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrajectoryPoint_y x(::pnc_msgs::msg::TrajectoryPoint::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_TrajectoryPoint_y(msg_);
  }

private:
  ::pnc_msgs::msg::TrajectoryPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pnc_msgs::msg::TrajectoryPoint>()
{
  return pnc_msgs::msg::builder::Init_TrajectoryPoint_x();
}

}  // namespace pnc_msgs

#endif  // PNC_MSGS__MSG__DETAIL__TRAJECTORY_POINT__BUILDER_HPP_
