// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carla_waypoint_types:srv/GetActorWaypoint.idl
// generated code does not contain a copyright notice

#ifndef CARLA_WAYPOINT_TYPES__SRV__DETAIL__GET_ACTOR_WAYPOINT__BUILDER_HPP_
#define CARLA_WAYPOINT_TYPES__SRV__DETAIL__GET_ACTOR_WAYPOINT__BUILDER_HPP_

#include "carla_waypoint_types/srv/detail/get_actor_waypoint__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carla_waypoint_types
{

namespace srv
{

namespace builder
{

class Init_GetActorWaypoint_Request_id
{
public:
  Init_GetActorWaypoint_Request_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::carla_waypoint_types::srv::GetActorWaypoint_Request id(::carla_waypoint_types::srv::GetActorWaypoint_Request::_id_type arg)
  {
    msg_.id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carla_waypoint_types::srv::GetActorWaypoint_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::carla_waypoint_types::srv::GetActorWaypoint_Request>()
{
  return carla_waypoint_types::srv::builder::Init_GetActorWaypoint_Request_id();
}

}  // namespace carla_waypoint_types


namespace carla_waypoint_types
{

namespace srv
{

namespace builder
{

class Init_GetActorWaypoint_Response_waypoint
{
public:
  Init_GetActorWaypoint_Response_waypoint()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::carla_waypoint_types::srv::GetActorWaypoint_Response waypoint(::carla_waypoint_types::srv::GetActorWaypoint_Response::_waypoint_type arg)
  {
    msg_.waypoint = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carla_waypoint_types::srv::GetActorWaypoint_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::carla_waypoint_types::srv::GetActorWaypoint_Response>()
{
  return carla_waypoint_types::srv::builder::Init_GetActorWaypoint_Response_waypoint();
}

}  // namespace carla_waypoint_types

#endif  // CARLA_WAYPOINT_TYPES__SRV__DETAIL__GET_ACTOR_WAYPOINT__BUILDER_HPP_
