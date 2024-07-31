// generated from rosidl_generator_cpp/resource/rosidl_generator_cpp__visibility_control.hpp.in
// generated code does not contain a copyright notice

#ifndef CARLA_ROS_SCENARIO_RUNNER_TYPES__MSG__ROSIDL_GENERATOR_CPP__VISIBILITY_CONTROL_HPP_
#define CARLA_ROS_SCENARIO_RUNNER_TYPES__MSG__ROSIDL_GENERATOR_CPP__VISIBILITY_CONTROL_HPP_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_GENERATOR_CPP_EXPORT_carla_ros_scenario_runner_types __attribute__ ((dllexport))
    #define ROSIDL_GENERATOR_CPP_IMPORT_carla_ros_scenario_runner_types __attribute__ ((dllimport))
  #else
    #define ROSIDL_GENERATOR_CPP_EXPORT_carla_ros_scenario_runner_types __declspec(dllexport)
    #define ROSIDL_GENERATOR_CPP_IMPORT_carla_ros_scenario_runner_types __declspec(dllimport)
  #endif
  #ifdef ROSIDL_GENERATOR_CPP_BUILDING_DLL_carla_ros_scenario_runner_types
    #define ROSIDL_GENERATOR_CPP_PUBLIC_carla_ros_scenario_runner_types ROSIDL_GENERATOR_CPP_EXPORT_carla_ros_scenario_runner_types
  #else
    #define ROSIDL_GENERATOR_CPP_PUBLIC_carla_ros_scenario_runner_types ROSIDL_GENERATOR_CPP_IMPORT_carla_ros_scenario_runner_types
  #endif
#else
  #define ROSIDL_GENERATOR_CPP_EXPORT_carla_ros_scenario_runner_types __attribute__ ((visibility("default")))
  #define ROSIDL_GENERATOR_CPP_IMPORT_carla_ros_scenario_runner_types
  #if __GNUC__ >= 4
    #define ROSIDL_GENERATOR_CPP_PUBLIC_carla_ros_scenario_runner_types __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_GENERATOR_CPP_PUBLIC_carla_ros_scenario_runner_types
  #endif
#endif

#ifdef __cplusplus
}
#endif

#endif  // CARLA_ROS_SCENARIO_RUNNER_TYPES__MSG__ROSIDL_GENERATOR_CPP__VISIBILITY_CONTROL_HPP_
