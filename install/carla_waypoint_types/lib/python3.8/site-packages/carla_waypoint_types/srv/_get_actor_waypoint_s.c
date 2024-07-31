// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from carla_waypoint_types:srv/GetActorWaypoint.idl
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
#include "carla_waypoint_types/srv/detail/get_actor_waypoint__struct.h"
#include "carla_waypoint_types/srv/detail/get_actor_waypoint__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool carla_waypoint_types__srv__get_actor_waypoint__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[70];
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
    assert(strncmp("carla_waypoint_types.srv._get_actor_waypoint.GetActorWaypoint_Request", full_classname_dest, 69) == 0);
  }
  carla_waypoint_types__srv__GetActorWaypoint_Request * ros_message = _ros_message;
  {  // id
    PyObject * field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * carla_waypoint_types__srv__get_actor_waypoint__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GetActorWaypoint_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("carla_waypoint_types.srv._get_actor_waypoint");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetActorWaypoint_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  carla_waypoint_types__srv__GetActorWaypoint_Request * ros_message = (carla_waypoint_types__srv__GetActorWaypoint_Request *)raw_ros_message;
  {  // id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "carla_waypoint_types/srv/detail/get_actor_waypoint__struct.h"
// already included above
// #include "carla_waypoint_types/srv/detail/get_actor_waypoint__functions.h"

bool carla_waypoint_types__msg__carla_waypoint__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carla_waypoint_types__msg__carla_waypoint__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool carla_waypoint_types__srv__get_actor_waypoint__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[71];
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
    assert(strncmp("carla_waypoint_types.srv._get_actor_waypoint.GetActorWaypoint_Response", full_classname_dest, 70) == 0);
  }
  carla_waypoint_types__srv__GetActorWaypoint_Response * ros_message = _ros_message;
  {  // waypoint
    PyObject * field = PyObject_GetAttrString(_pymsg, "waypoint");
    if (!field) {
      return false;
    }
    if (!carla_waypoint_types__msg__carla_waypoint__convert_from_py(field, &ros_message->waypoint)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * carla_waypoint_types__srv__get_actor_waypoint__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GetActorWaypoint_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("carla_waypoint_types.srv._get_actor_waypoint");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetActorWaypoint_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  carla_waypoint_types__srv__GetActorWaypoint_Response * ros_message = (carla_waypoint_types__srv__GetActorWaypoint_Response *)raw_ros_message;
  {  // waypoint
    PyObject * field = NULL;
    field = carla_waypoint_types__msg__carla_waypoint__convert_to_py(&ros_message->waypoint);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "waypoint", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
