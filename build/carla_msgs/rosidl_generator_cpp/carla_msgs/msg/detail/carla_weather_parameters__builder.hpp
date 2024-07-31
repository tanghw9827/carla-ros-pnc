// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carla_msgs:msg/CarlaWeatherParameters.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_WEATHER_PARAMETERS__BUILDER_HPP_
#define CARLA_MSGS__MSG__DETAIL__CARLA_WEATHER_PARAMETERS__BUILDER_HPP_

#include "carla_msgs/msg/detail/carla_weather_parameters__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carla_msgs
{

namespace msg
{

namespace builder
{

class Init_CarlaWeatherParameters_sun_altitude_angle
{
public:
  explicit Init_CarlaWeatherParameters_sun_altitude_angle(::carla_msgs::msg::CarlaWeatherParameters & msg)
  : msg_(msg)
  {}
  ::carla_msgs::msg::CarlaWeatherParameters sun_altitude_angle(::carla_msgs::msg::CarlaWeatherParameters::_sun_altitude_angle_type arg)
  {
    msg_.sun_altitude_angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carla_msgs::msg::CarlaWeatherParameters msg_;
};

class Init_CarlaWeatherParameters_sun_azimuth_angle
{
public:
  explicit Init_CarlaWeatherParameters_sun_azimuth_angle(::carla_msgs::msg::CarlaWeatherParameters & msg)
  : msg_(msg)
  {}
  Init_CarlaWeatherParameters_sun_altitude_angle sun_azimuth_angle(::carla_msgs::msg::CarlaWeatherParameters::_sun_azimuth_angle_type arg)
  {
    msg_.sun_azimuth_angle = std::move(arg);
    return Init_CarlaWeatherParameters_sun_altitude_angle(msg_);
  }

private:
  ::carla_msgs::msg::CarlaWeatherParameters msg_;
};

class Init_CarlaWeatherParameters_wetness
{
public:
  explicit Init_CarlaWeatherParameters_wetness(::carla_msgs::msg::CarlaWeatherParameters & msg)
  : msg_(msg)
  {}
  Init_CarlaWeatherParameters_sun_azimuth_angle wetness(::carla_msgs::msg::CarlaWeatherParameters::_wetness_type arg)
  {
    msg_.wetness = std::move(arg);
    return Init_CarlaWeatherParameters_sun_azimuth_angle(msg_);
  }

private:
  ::carla_msgs::msg::CarlaWeatherParameters msg_;
};

class Init_CarlaWeatherParameters_fog_distance
{
public:
  explicit Init_CarlaWeatherParameters_fog_distance(::carla_msgs::msg::CarlaWeatherParameters & msg)
  : msg_(msg)
  {}
  Init_CarlaWeatherParameters_wetness fog_distance(::carla_msgs::msg::CarlaWeatherParameters::_fog_distance_type arg)
  {
    msg_.fog_distance = std::move(arg);
    return Init_CarlaWeatherParameters_wetness(msg_);
  }

private:
  ::carla_msgs::msg::CarlaWeatherParameters msg_;
};

class Init_CarlaWeatherParameters_fog_density
{
public:
  explicit Init_CarlaWeatherParameters_fog_density(::carla_msgs::msg::CarlaWeatherParameters & msg)
  : msg_(msg)
  {}
  Init_CarlaWeatherParameters_fog_distance fog_density(::carla_msgs::msg::CarlaWeatherParameters::_fog_density_type arg)
  {
    msg_.fog_density = std::move(arg);
    return Init_CarlaWeatherParameters_fog_distance(msg_);
  }

private:
  ::carla_msgs::msg::CarlaWeatherParameters msg_;
};

class Init_CarlaWeatherParameters_wind_intensity
{
public:
  explicit Init_CarlaWeatherParameters_wind_intensity(::carla_msgs::msg::CarlaWeatherParameters & msg)
  : msg_(msg)
  {}
  Init_CarlaWeatherParameters_fog_density wind_intensity(::carla_msgs::msg::CarlaWeatherParameters::_wind_intensity_type arg)
  {
    msg_.wind_intensity = std::move(arg);
    return Init_CarlaWeatherParameters_fog_density(msg_);
  }

private:
  ::carla_msgs::msg::CarlaWeatherParameters msg_;
};

class Init_CarlaWeatherParameters_precipitation_deposits
{
public:
  explicit Init_CarlaWeatherParameters_precipitation_deposits(::carla_msgs::msg::CarlaWeatherParameters & msg)
  : msg_(msg)
  {}
  Init_CarlaWeatherParameters_wind_intensity precipitation_deposits(::carla_msgs::msg::CarlaWeatherParameters::_precipitation_deposits_type arg)
  {
    msg_.precipitation_deposits = std::move(arg);
    return Init_CarlaWeatherParameters_wind_intensity(msg_);
  }

private:
  ::carla_msgs::msg::CarlaWeatherParameters msg_;
};

class Init_CarlaWeatherParameters_precipitation
{
public:
  explicit Init_CarlaWeatherParameters_precipitation(::carla_msgs::msg::CarlaWeatherParameters & msg)
  : msg_(msg)
  {}
  Init_CarlaWeatherParameters_precipitation_deposits precipitation(::carla_msgs::msg::CarlaWeatherParameters::_precipitation_type arg)
  {
    msg_.precipitation = std::move(arg);
    return Init_CarlaWeatherParameters_precipitation_deposits(msg_);
  }

private:
  ::carla_msgs::msg::CarlaWeatherParameters msg_;
};

class Init_CarlaWeatherParameters_cloudiness
{
public:
  Init_CarlaWeatherParameters_cloudiness()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CarlaWeatherParameters_precipitation cloudiness(::carla_msgs::msg::CarlaWeatherParameters::_cloudiness_type arg)
  {
    msg_.cloudiness = std::move(arg);
    return Init_CarlaWeatherParameters_precipitation(msg_);
  }

private:
  ::carla_msgs::msg::CarlaWeatherParameters msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carla_msgs::msg::CarlaWeatherParameters>()
{
  return carla_msgs::msg::builder::Init_CarlaWeatherParameters_cloudiness();
}

}  // namespace carla_msgs

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_WEATHER_PARAMETERS__BUILDER_HPP_
