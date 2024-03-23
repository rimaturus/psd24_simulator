// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from control_msgs:msg/MecanumDriveControllerState.idl
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
#include "control_msgs/msg/detail/mecanum_drive_controller_state__struct.h"
#include "control_msgs/msg/detail/mecanum_drive_controller_state__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__twist__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__twist__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool control_msgs__msg__mecanum_drive_controller_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("control_msgs.msg._mecanum_drive_controller_state.MecanumDriveControllerState", full_classname_dest, 76) == 0);
  }
  control_msgs__msg__MecanumDriveControllerState * ros_message = _ros_message;
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
  {  // front_left_wheel_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "front_left_wheel_velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->front_left_wheel_velocity = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // back_left_wheel_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "back_left_wheel_velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->back_left_wheel_velocity = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // back_right_wheel_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "back_right_wheel_velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->back_right_wheel_velocity = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // front_right_wheel_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "front_right_wheel_velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->front_right_wheel_velocity = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // reference_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "reference_velocity");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__twist__convert_from_py(field, &ros_message->reference_velocity)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * control_msgs__msg__mecanum_drive_controller_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MecanumDriveControllerState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("control_msgs.msg._mecanum_drive_controller_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MecanumDriveControllerState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  control_msgs__msg__MecanumDriveControllerState * ros_message = (control_msgs__msg__MecanumDriveControllerState *)raw_ros_message;
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
  {  // front_left_wheel_velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->front_left_wheel_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "front_left_wheel_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // back_left_wheel_velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->back_left_wheel_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "back_left_wheel_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // back_right_wheel_velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->back_right_wheel_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "back_right_wheel_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // front_right_wheel_velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->front_right_wheel_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "front_right_wheel_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reference_velocity
    PyObject * field = NULL;
    field = geometry_msgs__msg__twist__convert_to_py(&ros_message->reference_velocity);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "reference_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
