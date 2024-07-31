// generated from
// rosidl_typesupport_fastrtps_c/resource/rosidl_typesupport_fastrtps_c__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef CARLA_ROS_SCENARIO_RUNNER_TYPES__MSG__ROSIDL_TYPESUPPORT_FASTRTPS_C__VISIBILITY_CONTROL_H_
#define CARLA_ROS_SCENARIO_RUNNER_TYPES__MSG__ROSIDL_TYPESUPPORT_FASTRTPS_C__VISIBILITY_CONTROL_H_

#if __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_EXPORT_carla_ros_scenario_runner_types __attribute__ ((dllexport))
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carla_ros_scenario_runner_types __attribute__ ((dllimport))
  #else
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_EXPORT_carla_ros_scenario_runner_types __declspec(dllexport)
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carla_ros_scenario_runner_types __declspec(dllimport)
  #endif
  #ifdef ROSIDL_TYPESUPPORT_FASTRTPS_C_BUILDING_DLL_carla_ros_scenario_runner_types
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carla_ros_scenario_runner_types ROSIDL_TYPESUPPORT_FASTRTPS_C_EXPORT_carla_ros_scenario_runner_types
  #else
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carla_ros_scenario_runner_types ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carla_ros_scenario_runner_types
  #endif
#else
  #define ROSIDL_TYPESUPPORT_FASTRTPS_C_EXPORT_carla_ros_scenario_runner_types __attribute__ ((visibility("default")))
  #define ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carla_ros_scenario_runner_types
  #if __GNUC__ >= 4
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carla_ros_scenario_runner_types __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carla_ros_scenario_runner_types
  #endif
#endif

#if __cplusplus
}
#endif

#endif  // CARLA_ROS_SCENARIO_RUNNER_TYPES__MSG__ROSIDL_TYPESUPPORT_FASTRTPS_C__VISIBILITY_CONTROL_H_
