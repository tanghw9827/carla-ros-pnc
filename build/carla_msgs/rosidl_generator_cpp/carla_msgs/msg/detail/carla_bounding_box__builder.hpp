// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carla_msgs:msg/CarlaBoundingBox.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_BOUNDING_BOX__BUILDER_HPP_
#define CARLA_MSGS__MSG__DETAIL__CARLA_BOUNDING_BOX__BUILDER_HPP_

#include "carla_msgs/msg/detail/carla_bounding_box__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carla_msgs
{

namespace msg
{

namespace builder
{

class Init_CarlaBoundingBox_size
{
public:
  explicit Init_CarlaBoundingBox_size(::carla_msgs::msg::CarlaBoundingBox & msg)
  : msg_(msg)
  {}
  ::carla_msgs::msg::CarlaBoundingBox size(::carla_msgs::msg::CarlaBoundingBox::_size_type arg)
  {
    msg_.size = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carla_msgs::msg::CarlaBoundingBox msg_;
};

class Init_CarlaBoundingBox_center
{
public:
  Init_CarlaBoundingBox_center()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CarlaBoundingBox_size center(::carla_msgs::msg::CarlaBoundingBox::_center_type arg)
  {
    msg_.center = std::move(arg);
    return Init_CarlaBoundingBox_size(msg_);
  }

private:
  ::carla_msgs::msg::CarlaBoundingBox msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carla_msgs::msg::CarlaBoundingBox>()
{
  return carla_msgs::msg::builder::Init_CarlaBoundingBox_center();
}

}  // namespace carla_msgs

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_BOUNDING_BOX__BUILDER_HPP_
