// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carla_msgs:srv/GetBlueprints.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__SRV__DETAIL__GET_BLUEPRINTS__BUILDER_HPP_
#define CARLA_MSGS__SRV__DETAIL__GET_BLUEPRINTS__BUILDER_HPP_

#include "carla_msgs/srv/detail/get_blueprints__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carla_msgs
{

namespace srv
{

namespace builder
{

class Init_GetBlueprints_Request_filter
{
public:
  Init_GetBlueprints_Request_filter()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::carla_msgs::srv::GetBlueprints_Request filter(::carla_msgs::srv::GetBlueprints_Request::_filter_type arg)
  {
    msg_.filter = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carla_msgs::srv::GetBlueprints_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::carla_msgs::srv::GetBlueprints_Request>()
{
  return carla_msgs::srv::builder::Init_GetBlueprints_Request_filter();
}

}  // namespace carla_msgs


namespace carla_msgs
{

namespace srv
{

namespace builder
{

class Init_GetBlueprints_Response_blueprints
{
public:
  Init_GetBlueprints_Response_blueprints()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::carla_msgs::srv::GetBlueprints_Response blueprints(::carla_msgs::srv::GetBlueprints_Response::_blueprints_type arg)
  {
    msg_.blueprints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carla_msgs::srv::GetBlueprints_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::carla_msgs::srv::GetBlueprints_Response>()
{
  return carla_msgs::srv::builder::Init_GetBlueprints_Response_blueprints();
}

}  // namespace carla_msgs

#endif  // CARLA_MSGS__SRV__DETAIL__GET_BLUEPRINTS__BUILDER_HPP_
