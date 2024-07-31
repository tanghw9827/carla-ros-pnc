// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carla_msgs:msg/CarlaWeatherParameters.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_WEATHER_PARAMETERS__STRUCT_HPP_
#define CARLA_MSGS__MSG__DETAIL__CARLA_WEATHER_PARAMETERS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__carla_msgs__msg__CarlaWeatherParameters __attribute__((deprecated))
#else
# define DEPRECATED__carla_msgs__msg__CarlaWeatherParameters __declspec(deprecated)
#endif

namespace carla_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CarlaWeatherParameters_
{
  using Type = CarlaWeatherParameters_<ContainerAllocator>;

  explicit CarlaWeatherParameters_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cloudiness = 0.0f;
      this->precipitation = 0.0f;
      this->precipitation_deposits = 0.0f;
      this->wind_intensity = 0.0f;
      this->fog_density = 0.0f;
      this->fog_distance = 0.0f;
      this->wetness = 0.0f;
      this->sun_azimuth_angle = 0.0f;
      this->sun_altitude_angle = 0.0f;
    }
  }

  explicit CarlaWeatherParameters_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cloudiness = 0.0f;
      this->precipitation = 0.0f;
      this->precipitation_deposits = 0.0f;
      this->wind_intensity = 0.0f;
      this->fog_density = 0.0f;
      this->fog_distance = 0.0f;
      this->wetness = 0.0f;
      this->sun_azimuth_angle = 0.0f;
      this->sun_altitude_angle = 0.0f;
    }
  }

  // field types and members
  using _cloudiness_type =
    float;
  _cloudiness_type cloudiness;
  using _precipitation_type =
    float;
  _precipitation_type precipitation;
  using _precipitation_deposits_type =
    float;
  _precipitation_deposits_type precipitation_deposits;
  using _wind_intensity_type =
    float;
  _wind_intensity_type wind_intensity;
  using _fog_density_type =
    float;
  _fog_density_type fog_density;
  using _fog_distance_type =
    float;
  _fog_distance_type fog_distance;
  using _wetness_type =
    float;
  _wetness_type wetness;
  using _sun_azimuth_angle_type =
    float;
  _sun_azimuth_angle_type sun_azimuth_angle;
  using _sun_altitude_angle_type =
    float;
  _sun_altitude_angle_type sun_altitude_angle;

  // setters for named parameter idiom
  Type & set__cloudiness(
    const float & _arg)
  {
    this->cloudiness = _arg;
    return *this;
  }
  Type & set__precipitation(
    const float & _arg)
  {
    this->precipitation = _arg;
    return *this;
  }
  Type & set__precipitation_deposits(
    const float & _arg)
  {
    this->precipitation_deposits = _arg;
    return *this;
  }
  Type & set__wind_intensity(
    const float & _arg)
  {
    this->wind_intensity = _arg;
    return *this;
  }
  Type & set__fog_density(
    const float & _arg)
  {
    this->fog_density = _arg;
    return *this;
  }
  Type & set__fog_distance(
    const float & _arg)
  {
    this->fog_distance = _arg;
    return *this;
  }
  Type & set__wetness(
    const float & _arg)
  {
    this->wetness = _arg;
    return *this;
  }
  Type & set__sun_azimuth_angle(
    const float & _arg)
  {
    this->sun_azimuth_angle = _arg;
    return *this;
  }
  Type & set__sun_altitude_angle(
    const float & _arg)
  {
    this->sun_altitude_angle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carla_msgs::msg::CarlaWeatherParameters_<ContainerAllocator> *;
  using ConstRawPtr =
    const carla_msgs::msg::CarlaWeatherParameters_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carla_msgs::msg::CarlaWeatherParameters_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carla_msgs::msg::CarlaWeatherParameters_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carla_msgs::msg::CarlaWeatherParameters_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carla_msgs::msg::CarlaWeatherParameters_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carla_msgs::msg::CarlaWeatherParameters_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carla_msgs::msg::CarlaWeatherParameters_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carla_msgs::msg::CarlaWeatherParameters_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carla_msgs::msg::CarlaWeatherParameters_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carla_msgs__msg__CarlaWeatherParameters
    std::shared_ptr<carla_msgs::msg::CarlaWeatherParameters_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carla_msgs__msg__CarlaWeatherParameters
    std::shared_ptr<carla_msgs::msg::CarlaWeatherParameters_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CarlaWeatherParameters_ & other) const
  {
    if (this->cloudiness != other.cloudiness) {
      return false;
    }
    if (this->precipitation != other.precipitation) {
      return false;
    }
    if (this->precipitation_deposits != other.precipitation_deposits) {
      return false;
    }
    if (this->wind_intensity != other.wind_intensity) {
      return false;
    }
    if (this->fog_density != other.fog_density) {
      return false;
    }
    if (this->fog_distance != other.fog_distance) {
      return false;
    }
    if (this->wetness != other.wetness) {
      return false;
    }
    if (this->sun_azimuth_angle != other.sun_azimuth_angle) {
      return false;
    }
    if (this->sun_altitude_angle != other.sun_altitude_angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const CarlaWeatherParameters_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CarlaWeatherParameters_

// alias to use template instance with default allocator
using CarlaWeatherParameters =
  carla_msgs::msg::CarlaWeatherParameters_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carla_msgs

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_WEATHER_PARAMETERS__STRUCT_HPP_
