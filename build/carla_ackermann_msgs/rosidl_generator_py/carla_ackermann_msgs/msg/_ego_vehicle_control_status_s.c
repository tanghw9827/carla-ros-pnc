// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from carla_ackermann_msgs:msg/EgoVehicleControlStatus.idl
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
#include "carla_ackermann_msgs/msg/detail/ego_vehicle_control_status__struct.h"
#include "carla_ackermann_msgs/msg/detail/ego_vehicle_control_status__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool carla_ackermann_msgs__msg__ego_vehicle_control_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[77];
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
    assert(strncmp("carla_ackermann_msgs.msg._ego_vehicle_control_status.EgoVehicleControlStatus", full_classname_dest, 76) == 0);
  }
  carla_ackermann_msgs__msg__EgoVehicleControlStatus * ros_message = _ros_message;
  {  // status
    PyObject * field = PyObject_GetAttrString(_pymsg, "status");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->status, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // speed_control_activation_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_control_activation_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->speed_control_activation_count = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // speed_control_accel_delta
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_control_accel_delta");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed_control_accel_delta = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed_control_accel_target
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_control_accel_target");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed_control_accel_target = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // accel_control_pedal_delta
    PyObject * field = PyObject_GetAttrString(_pymsg, "accel_control_pedal_delta");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->accel_control_pedal_delta = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // accel_control_pedal_target
    PyObject * field = PyObject_GetAttrString(_pymsg, "accel_control_pedal_target");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->accel_control_pedal_target = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // brake_upper_border
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake_upper_border");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->brake_upper_border = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // throttle_lower_border
    PyObject * field = PyObject_GetAttrString(_pymsg, "throttle_lower_border");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->throttle_lower_border = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * carla_ackermann_msgs__msg__ego_vehicle_control_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EgoVehicleControlStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("carla_ackermann_msgs.msg._ego_vehicle_control_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EgoVehicleControlStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  carla_ackermann_msgs__msg__EgoVehicleControlStatus * ros_message = (carla_ackermann_msgs__msg__EgoVehicleControlStatus *)raw_ros_message;
  {  // status
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->status.data,
      strlen(ros_message->status.data),
      "replace");
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
  {  // speed_control_activation_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->speed_control_activation_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_control_activation_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_control_accel_delta
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed_control_accel_delta);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_control_accel_delta", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_control_accel_target
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed_control_accel_target);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_control_accel_target", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accel_control_pedal_delta
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->accel_control_pedal_delta);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accel_control_pedal_delta", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accel_control_pedal_target
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->accel_control_pedal_target);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accel_control_pedal_target", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brake_upper_border
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->brake_upper_border);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake_upper_border", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // throttle_lower_border
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->throttle_lower_border);
    {
      int rc = PyObject_SetAttrString(_pymessage, "throttle_lower_border", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
