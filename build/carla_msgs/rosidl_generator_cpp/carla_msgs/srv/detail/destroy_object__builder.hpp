// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carla_msgs:srv/DestroyObject.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__SRV__DETAIL__DESTROY_OBJECT__BUILDER_HPP_
#define CARLA_MSGS__SRV__DETAIL__DESTROY_OBJECT__BUILDER_HPP_

#include "carla_msgs/srv/detail/destroy_object__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carla_msgs
{

namespace srv
{

namespace builder
{

class Init_DestroyObject_Request_id
{
public:
  Init_DestroyObject_Request_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::carla_msgs::srv::DestroyObject_Request id(::carla_msgs::srv::DestroyObject_Request::_id_type arg)
  {
    msg_.id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carla_msgs::srv::DestroyObject_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::carla_msgs::srv::DestroyObject_Request>()
{
  return carla_msgs::srv::builder::Init_DestroyObject_Request_id();
}

}  // namespace carla_msgs


namespace carla_msgs
{

namespace srv
{

namespace builder
{

class Init_DestroyObject_Response_success
{
public:
  Init_DestroyObject_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::carla_msgs::srv::DestroyObject_Response success(::carla_msgs::srv::DestroyObject_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carla_msgs::srv::DestroyObject_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::carla_msgs::srv::DestroyObject_Response>()
{
  return carla_msgs::srv::builder::Init_DestroyObject_Response_success();
}

}  // namespace carla_msgs

#endif  // CARLA_MSGS__SRV__DETAIL__DESTROY_OBJECT__BUILDER_HPP_
