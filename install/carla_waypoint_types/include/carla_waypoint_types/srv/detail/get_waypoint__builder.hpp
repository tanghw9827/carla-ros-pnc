// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carla_waypoint_types:srv/GetWaypoint.idl
// generated code does not contain a copyright notice

#ifndef CARLA_WAYPOINT_TYPES__SRV__DETAIL__GET_WAYPOINT__BUILDER_HPP_
#define CARLA_WAYPOINT_TYPES__SRV__DETAIL__GET_WAYPOINT__BUILDER_HPP_

#include "carla_waypoint_types/srv/detail/get_waypoint__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carla_waypoint_types
{

namespace srv
{

namespace builder
{

class Init_GetWaypoint_Request_location
{
public:
  Init_GetWaypoint_Request_location()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::carla_waypoint_types::srv::GetWaypoint_Request location(::carla_waypoint_types::srv::GetWaypoint_Request::_location_type arg)
  {
    msg_.location = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carla_waypoint_types::srv::GetWaypoint_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::carla_waypoint_types::srv::GetWaypoint_Request>()
{
  return carla_waypoint_types::srv::builder::Init_GetWaypoint_Request_location();
}

}  // namespace carla_waypoint_types


namespace carla_waypoint_types
{

namespace srv
{

namespace builder
{

class Init_GetWaypoint_Response_waypoint
{
public:
  Init_GetWaypoint_Response_waypoint()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::carla_waypoint_types::srv::GetWaypoint_Response waypoint(::carla_waypoint_types::srv::GetWaypoint_Response::_waypoint_type arg)
  {
    msg_.waypoint = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carla_waypoint_types::srv::GetWaypoint_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::carla_waypoint_types::srv::GetWaypoint_Response>()
{
  return carla_waypoint_types::srv::builder::Init_GetWaypoint_Response_waypoint();
}

}  // namespace carla_waypoint_types

#endif  // CARLA_WAYPOINT_TYPES__SRV__DETAIL__GET_WAYPOINT__BUILDER_HPP_
