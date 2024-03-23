// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from control_msgs:msg/AdmittanceControllerState.idl
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
#include "control_msgs/msg/detail/admittance_controller_state__struct.h"
#include "control_msgs/msg/detail/admittance_controller_state__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__float64_multi_array__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__float64_multi_array__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__float64_multi_array__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__float64_multi_array__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__float64_multi_array__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__float64_multi_array__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__quaternion__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__quaternion__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__transform_stamped__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__transform_stamped__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__int8_multi_array__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__int8_multi_array__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__string__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__string__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__transform_stamped__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__transform_stamped__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__twist_stamped__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__twist_stamped__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__twist_stamped__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__twist_stamped__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__wrench_stamped__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__wrench_stamped__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool sensor_msgs__msg__joint_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * sensor_msgs__msg__joint_state__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool control_msgs__msg__admittance_controller_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[72];
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
    assert(strncmp("control_msgs.msg._admittance_controller_state.AdmittanceControllerState", full_classname_dest, 71) == 0);
  }
  control_msgs__msg__AdmittanceControllerState * ros_message = _ros_message;
  {  // mass
    PyObject * field = PyObject_GetAttrString(_pymsg, "mass");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float64_multi_array__convert_from_py(field, &ros_message->mass)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // damping
    PyObject * field = PyObject_GetAttrString(_pymsg, "damping");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float64_multi_array__convert_from_py(field, &ros_message->damping)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // stiffness
    PyObject * field = PyObject_GetAttrString(_pymsg, "stiffness");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float64_multi_array__convert_from_py(field, &ros_message->stiffness)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // rot_base_control
    PyObject * field = PyObject_GetAttrString(_pymsg, "rot_base_control");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__quaternion__convert_from_py(field, &ros_message->rot_base_control)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // ref_trans_base_ft
    PyObject * field = PyObject_GetAttrString(_pymsg, "ref_trans_base_ft");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__transform_stamped__convert_from_py(field, &ros_message->ref_trans_base_ft)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // selected_axes
    PyObject * field = PyObject_GetAttrString(_pymsg, "selected_axes");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__int8_multi_array__convert_from_py(field, &ros_message->selected_axes)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // ft_sensor_frame
    PyObject * field = PyObject_GetAttrString(_pymsg, "ft_sensor_frame");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__string__convert_from_py(field, &ros_message->ft_sensor_frame)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // admittance_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "admittance_position");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__transform_stamped__convert_from_py(field, &ros_message->admittance_position)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // admittance_acceleration
    PyObject * field = PyObject_GetAttrString(_pymsg, "admittance_acceleration");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__twist_stamped__convert_from_py(field, &ros_message->admittance_acceleration)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // admittance_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "admittance_velocity");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__twist_stamped__convert_from_py(field, &ros_message->admittance_velocity)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // wrench_base
    PyObject * field = PyObject_GetAttrString(_pymsg, "wrench_base");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__wrench_stamped__convert_from_py(field, &ros_message->wrench_base)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // joint_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "joint_state");
    if (!field) {
      return false;
    }
    if (!sensor_msgs__msg__joint_state__convert_from_py(field, &ros_message->joint_state)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * control_msgs__msg__admittance_controller_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AdmittanceControllerState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("control_msgs.msg._admittance_controller_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AdmittanceControllerState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  control_msgs__msg__AdmittanceControllerState * ros_message = (control_msgs__msg__AdmittanceControllerState *)raw_ros_message;
  {  // mass
    PyObject * field = NULL;
    field = std_msgs__msg__float64_multi_array__convert_to_py(&ros_message->mass);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "mass", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // damping
    PyObject * field = NULL;
    field = std_msgs__msg__float64_multi_array__convert_to_py(&ros_message->damping);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "damping", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stiffness
    PyObject * field = NULL;
    field = std_msgs__msg__float64_multi_array__convert_to_py(&ros_message->stiffness);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "stiffness", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rot_base_control
    PyObject * field = NULL;
    field = geometry_msgs__msg__quaternion__convert_to_py(&ros_message->rot_base_control);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "rot_base_control", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ref_trans_base_ft
    PyObject * field = NULL;
    field = geometry_msgs__msg__transform_stamped__convert_to_py(&ros_message->ref_trans_base_ft);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "ref_trans_base_ft", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // selected_axes
    PyObject * field = NULL;
    field = std_msgs__msg__int8_multi_array__convert_to_py(&ros_message->selected_axes);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "selected_axes", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ft_sensor_frame
    PyObject * field = NULL;
    field = std_msgs__msg__string__convert_to_py(&ros_message->ft_sensor_frame);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "ft_sensor_frame", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // admittance_position
    PyObject * field = NULL;
    field = geometry_msgs__msg__transform_stamped__convert_to_py(&ros_message->admittance_position);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "admittance_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // admittance_acceleration
    PyObject * field = NULL;
    field = geometry_msgs__msg__twist_stamped__convert_to_py(&ros_message->admittance_acceleration);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "admittance_acceleration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // admittance_velocity
    PyObject * field = NULL;
    field = geometry_msgs__msg__twist_stamped__convert_to_py(&ros_message->admittance_velocity);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "admittance_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wrench_base
    PyObject * field = NULL;
    field = geometry_msgs__msg__wrench_stamped__convert_to_py(&ros_message->wrench_base);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "wrench_base", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // joint_state
    PyObject * field = NULL;
    field = sensor_msgs__msg__joint_state__convert_to_py(&ros_message->joint_state);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "joint_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
