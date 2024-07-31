// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from carla_waypoint_types:msg/CarlaWaypoint.idl
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
#include "carla_waypoint_types/msg/detail/carla_waypoint__struct.h"
#include "carla_waypoint_types/msg/detail/carla_waypoint__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool carla_waypoint_types__msg__carla_waypoint__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[55];
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
    assert(strncmp("carla_waypoint_types.msg._carla_waypoint.CarlaWaypoint", full_classname_dest, 54) == 0);
  }
  carla_waypoint_types__msg__CarlaWaypoint * ros_message = _ros_message;
  {  // road_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "road_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->road_id = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // section_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "section_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->section_id = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // lane_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lane_id = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // lane_width
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_width");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lane_width = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // is_junction
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_junction");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_junction = (Py_True == field);
    Py_DECREF(field);
  }
  {  // pose
    PyObject * field = PyObject_GetAttrString(_pymsg, "pose");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__pose__convert_from_py(field, &ros_message->pose)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * carla_waypoint_types__msg__carla_waypoint__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CarlaWaypoint */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("carla_waypoint_types.msg._carla_waypoint");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CarlaWaypoint");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  carla_waypoint_types__msg__CarlaWaypoint * ros_message = (carla_waypoint_types__msg__CarlaWaypoint *)raw_ros_message;
  {  // road_id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->road_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "road_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // section_id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->section_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "section_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->lane_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_width
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lane_width);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_width", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_junction
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_junction ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_junction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pose
    PyObject * field = NULL;
    field = geometry_msgs__msg__pose__convert_to_py(&ros_message->pose);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "pose", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
