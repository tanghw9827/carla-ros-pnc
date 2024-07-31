// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from carla_ackermann_msgs:msg/EgoVehicleControlInfo.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "carla_ackermann_msgs/msg/detail/ego_vehicle_control_info__struct.h"
#include "carla_ackermann_msgs/msg/detail/ego_vehicle_control_info__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool carla_ackermann_msgs__msg__ego_vehicle_control_maxima__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carla_ackermann_msgs__msg__ego_vehicle_control_maxima__convert_to_py(void * raw_ros_message);
bool carla_ackermann_msgs__msg__ego_vehicle_control_target__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carla_ackermann_msgs__msg__ego_vehicle_control_target__convert_to_py(void * raw_ros_message);
bool carla_ackermann_msgs__msg__ego_vehicle_control_current__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carla_ackermann_msgs__msg__ego_vehicle_control_current__convert_to_py(void * raw_ros_message);
bool carla_ackermann_msgs__msg__ego_vehicle_control_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carla_ackermann_msgs__msg__ego_vehicle_control_status__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool carla_msgs__msg__carla_ego_vehicle_control__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * carla_msgs__msg__carla_ego_vehicle_control__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool carla_ackermann_msgs__msg__ego_vehicle_control_info__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[73];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("carla_ackermann_msgs.msg._ego_vehicle_control_info.EgoVehicleControlInfo", full_classname_dest, 72) == 0);
  }
  carla_ackermann_msgs__msg__EgoVehicleControlInfo * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // restrictions
    PyObject * field = PyObject_GetAttrString(_pymsg, "restrictions");
    if (!field) {
      return false;
    }
    if (!carla_ackermann_msgs__msg__ego_vehicle_control_maxima__convert_from_py(field, &ros_message->restrictions)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // target
    PyObject * field = PyObject_GetAttrString(_pymsg, "target");
    if (!field) {
      return false;
    }
    if (!carla_ackermann_msgs__msg__ego_vehicle_control_target__convert_from_py(field, &ros_message->target)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // current
    PyObject * field = PyObject_GetAttrString(_pymsg, "current");
    if (!field) {
      return false;
    }
    if (!carla_ackermann_msgs__msg__ego_vehicle_control_current__convert_from_py(field, &ros_message->current)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // status
    PyObject * field = PyObject_GetAttrString(_pymsg, "status");
    if (!field) {
      return false;
    }
    if (!carla_ackermann_msgs__msg__ego_vehicle_control_status__convert_from_py(field, &ros_message->status)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // output
    PyObject * field = PyObject_GetAttrString(_pymsg, "output");
    if (!field) {
      return false;
    }
    if (!carla_msgs__msg__carla_ego_vehicle_control__convert_from_py(field, &ros_message->output)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * carla_ackermann_msgs__msg__ego_vehicle_control_info__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EgoVehicleControlInfo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("carla_ackermann_msgs.msg._ego_vehicle_control_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EgoVehicleControlInfo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  carla_ackermann_msgs__msg__EgoVehicleControlInfo * ros_message = (carla_ackermann_msgs__msg__EgoVehicleControlInfo *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // restrictions
    PyObject * field = NULL;
    field = carla_ackermann_msgs__msg__ego_vehicle_control_maxima__convert_to_py(&ros_message->restrictions);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "restrictions", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target
    PyObject * field = NULL;
    field = carla_ackermann_msgs__msg__ego_vehicle_control_target__convert_to_py(&ros_message->target);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "target", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current
    PyObject * field = NULL;
    field = carla_ackermann_msgs__msg__ego_vehicle_control_current__convert_to_py(&ros_message->current);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status
    PyObject * field = NULL;
    field = carla_ackermann_msgs__msg__ego_vehicle_control_status__convert_to_py(&ros_message->status);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // output
    PyObject * field = NULL;
    field = carla_msgs__msg__carla_ego_vehicle_control__convert_to_py(&ros_message->output);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "output", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
