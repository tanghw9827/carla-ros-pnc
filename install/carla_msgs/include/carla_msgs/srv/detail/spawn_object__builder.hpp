// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carla_msgs:srv/SpawnObject.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__SRV__DETAIL__SPAWN_OBJECT__BUILDER_HPP_
#define CARLA_MSGS__SRV__DETAIL__SPAWN_OBJECT__BUILDER_HPP_

#include "carla_msgs/srv/detail/spawn_object__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carla_msgs
{

namespace srv
{

namespace builder
{

class Init_SpawnObject_Request_random_pose
{
public:
  explicit Init_SpawnObject_Request_random_pose(::carla_msgs::srv::SpawnObject_Request & msg)
  : msg_(msg)
  {}
  ::carla_msgs::srv::SpawnObject_Request random_pose(::carla_msgs::srv::SpawnObject_Request::_random_pose_type arg)
  {
    msg_.random_pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carla_msgs::srv::SpawnObject_Request msg_;
};

class Init_SpawnObject_Request_attach_to
{
public:
  explicit Init_SpawnObject_Request_attach_to(::carla_msgs::srv::SpawnObject_Request & msg)
  : msg_(msg)
  {}
  Init_SpawnObject_Request_random_pose attach_to(::carla_msgs::srv::SpawnObject_Request::_attach_to_type arg)
  {
    msg_.attach_to = std::move(arg);
    return Init_SpawnObject_Request_random_pose(msg_);
  }

private:
  ::carla_msgs::srv::SpawnObject_Request msg_;
};

class Init_SpawnObject_Request_transform
{
public:
  explicit Init_SpawnObject_Request_transform(::carla_msgs::srv::SpawnObject_Request & msg)
  : msg_(msg)
  {}
  Init_SpawnObject_Request_attach_to transform(::carla_msgs::srv::SpawnObject_Request::_transform_type arg)
  {
    msg_.transform = std::move(arg);
    return Init_SpawnObject_Request_attach_to(msg_);
  }

private:
  ::carla_msgs::srv::SpawnObject_Request msg_;
};

class Init_SpawnObject_Request_attributes
{
public:
  explicit Init_SpawnObject_Request_attributes(::carla_msgs::srv::SpawnObject_Request & msg)
  : msg_(msg)
  {}
  Init_SpawnObject_Request_transform attributes(::carla_msgs::srv::SpawnObject_Request::_attributes_type arg)
  {
    msg_.attributes = std::move(arg);
    return Init_SpawnObject_Request_transform(msg_);
  }

private:
  ::carla_msgs::srv::SpawnObject_Request msg_;
};

class Init_SpawnObject_Request_id
{
public:
  explicit Init_SpawnObject_Request_id(::carla_msgs::srv::SpawnObject_Request & msg)
  : msg_(msg)
  {}
  Init_SpawnObject_Request_attributes id(::carla_msgs::srv::SpawnObject_Request::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_SpawnObject_Request_attributes(msg_);
  }

private:
  ::carla_msgs::srv::SpawnObject_Request msg_;
};

class Init_SpawnObject_Request_type
{
public:
  Init_SpawnObject_Request_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpawnObject_Request_id type(::carla_msgs::srv::SpawnObject_Request::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_SpawnObject_Request_id(msg_);
  }

private:
  ::carla_msgs::srv::SpawnObject_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::carla_msgs::srv::SpawnObject_Request>()
{
  return carla_msgs::srv::builder::Init_SpawnObject_Request_type();
}

}  // namespace carla_msgs


namespace carla_msgs
{

namespace srv
{

namespace builder
{

class Init_SpawnObject_Response_error_string
{
public:
  explicit Init_SpawnObject_Response_error_string(::carla_msgs::srv::SpawnObject_Response & msg)
  : msg_(msg)
  {}
  ::carla_msgs::srv::SpawnObject_Response error_string(::carla_msgs::srv::SpawnObject_Response::_error_string_type arg)
  {
    msg_.error_string = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carla_msgs::srv::SpawnObject_Response msg_;
};

class Init_SpawnObject_Response_id
{
public:
  Init_SpawnObject_Response_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpawnObject_Response_error_string id(::carla_msgs::srv::SpawnObject_Response::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_SpawnObject_Response_error_string(msg_);
  }

private:
  ::carla_msgs::srv::SpawnObject_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::carla_msgs::srv::SpawnObject_Response>()
{
  return carla_msgs::srv::builder::Init_SpawnObject_Response_id();
}

}  // namespace carla_msgs

#endif  // CARLA_MSGS__SRV__DETAIL__SPAWN_OBJECT__BUILDER_HPP_
