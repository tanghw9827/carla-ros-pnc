// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from carla_ackermann_msgs:msg/EgoVehicleControlCurrent.idl
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
#include "carla_ackermann_msgs/msg/detail/ego_vehicle_control_current__struct.h"
#include "carla_ackermann_msgs/msg/detail/ego_vehicle_control_current__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool carla_ackermann_msgs__msg__ego_vehicle_control_current__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[79];
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
    assert(strncmp("carla_ackermann_msgs.msg._ego_vehicle_control_current.EgoVehicleControlCurrent", full_classname_dest, 78) == 0);
  }
  carla_ackermann_msgs__msg__EgoVehicleControlCurrent * ros_message = _ros_message;
  {  // time_sec
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_sec");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->time_sec = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed_abs
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_abs");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed_abs = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // accel
    PyObject * field = PyObject_GetAttrString(_pymsg, "accel");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->accel = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * carla_ackermann_msgs__msg__ego_vehicle_control_current__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EgoVehicleControlCurrent */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("carla_ackermann_msgs.msg._ego_vehicle_control_current");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EgoVehicleControlCurrent");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  carla_ackermann_msgs__msg__EgoVehicleControlCurrent * ros_message = (carla_ackermann_msgs__msg__EgoVehicleControlCurrent *)raw_ros_message;
  {  // time_sec
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->time_sec);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_sec", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_abs
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed_abs);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_abs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accel
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->accel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
