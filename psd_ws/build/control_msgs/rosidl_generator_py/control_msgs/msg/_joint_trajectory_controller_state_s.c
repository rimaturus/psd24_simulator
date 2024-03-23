// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from control_msgs:msg/JointTrajectoryControllerState.idl
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
#include "control_msgs/msg/detail/joint_trajectory_controller_state__struct.h"
#include "control_msgs/msg/detail/joint_trajectory_controller_state__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"
#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool trajectory_msgs__msg__joint_trajectory_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * trajectory_msgs__msg__joint_trajectory_point__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool trajectory_msgs__msg__joint_trajectory_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * trajectory_msgs__msg__joint_trajectory_point__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool trajectory_msgs__msg__joint_trajectory_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * trajectory_msgs__msg__joint_trajectory_point__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool trajectory_msgs__msg__joint_trajectory_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * trajectory_msgs__msg__joint_trajectory_point__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool trajectory_msgs__msg__joint_trajectory_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * trajectory_msgs__msg__joint_trajectory_point__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool trajectory_msgs__msg__joint_trajectory_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * trajectory_msgs__msg__joint_trajectory_point__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool trajectory_msgs__msg__multi_dof_joint_trajectory_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * trajectory_msgs__msg__multi_dof_joint_trajectory_point__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool trajectory_msgs__msg__multi_dof_joint_trajectory_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * trajectory_msgs__msg__multi_dof_joint_trajectory_point__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool trajectory_msgs__msg__multi_dof_joint_trajectory_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * trajectory_msgs__msg__multi_dof_joint_trajectory_point__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool trajectory_msgs__msg__multi_dof_joint_trajectory_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * trajectory_msgs__msg__multi_dof_joint_trajectory_point__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool trajectory_msgs__msg__multi_dof_joint_trajectory_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * trajectory_msgs__msg__multi_dof_joint_trajectory_point__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool trajectory_msgs__msg__multi_dof_joint_trajectory_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * trajectory_msgs__msg__multi_dof_joint_trajectory_point__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool control_msgs__msg__joint_trajectory_controller_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[83];
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
    assert(strncmp("control_msgs.msg._joint_trajectory_controller_state.JointTrajectoryControllerState", full_classname_dest, 82) == 0);
  }
  control_msgs__msg__JointTrajectoryControllerState * ros_message = _ros_message;
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
  {  // joint_names
    PyObject * field = PyObject_GetAttrString(_pymsg, "joint_names");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'joint_names'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = PySequence_Size(field);
      if (-1 == size) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      if (!rosidl_runtime_c__String__Sequence__init(&(ros_message->joint_names), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create String__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_runtime_c__String * dest = ros_message->joint_names.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyUnicode_Check(item));
        PyObject * encoded_item = PyUnicode_AsUTF8String(item);
        if (!encoded_item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        rosidl_runtime_c__String__assign(&dest[i], PyBytes_AS_STRING(encoded_item));
        Py_DECREF(encoded_item);
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // reference
    PyObject * field = PyObject_GetAttrString(_pymsg, "reference");
    if (!field) {
      return false;
    }
    if (!trajectory_msgs__msg__joint_trajectory_point__convert_from_py(field, &ros_message->reference)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // feedback
    PyObject * field = PyObject_GetAttrString(_pymsg, "feedback");
    if (!field) {
      return false;
    }
    if (!trajectory_msgs__msg__joint_trajectory_point__convert_from_py(field, &ros_message->feedback)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // error
    PyObject * field = PyObject_GetAttrString(_pymsg, "error");
    if (!field) {
      return false;
    }
    if (!trajectory_msgs__msg__joint_trajectory_point__convert_from_py(field, &ros_message->error)) {
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
    if (!trajectory_msgs__msg__joint_trajectory_point__convert_from_py(field, &ros_message->output)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // desired
    PyObject * field = PyObject_GetAttrString(_pymsg, "desired");
    if (!field) {
      return false;
    }
    if (!trajectory_msgs__msg__joint_trajectory_point__convert_from_py(field, &ros_message->desired)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // actual
    PyObject * field = PyObject_GetAttrString(_pymsg, "actual");
    if (!field) {
      return false;
    }
    if (!trajectory_msgs__msg__joint_trajectory_point__convert_from_py(field, &ros_message->actual)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // multi_dof_joint_names
    PyObject * field = PyObject_GetAttrString(_pymsg, "multi_dof_joint_names");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'multi_dof_joint_names'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = PySequence_Size(field);
      if (-1 == size) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      if (!rosidl_runtime_c__String__Sequence__init(&(ros_message->multi_dof_joint_names), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create String__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_runtime_c__String * dest = ros_message->multi_dof_joint_names.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyUnicode_Check(item));
        PyObject * encoded_item = PyUnicode_AsUTF8String(item);
        if (!encoded_item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        rosidl_runtime_c__String__assign(&dest[i], PyBytes_AS_STRING(encoded_item));
        Py_DECREF(encoded_item);
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // multi_dof_reference
    PyObject * field = PyObject_GetAttrString(_pymsg, "multi_dof_reference");
    if (!field) {
      return false;
    }
    if (!trajectory_msgs__msg__multi_dof_joint_trajectory_point__convert_from_py(field, &ros_message->multi_dof_reference)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // multi_dof_feedback
    PyObject * field = PyObject_GetAttrString(_pymsg, "multi_dof_feedback");
    if (!field) {
      return false;
    }
    if (!trajectory_msgs__msg__multi_dof_joint_trajectory_point__convert_from_py(field, &ros_message->multi_dof_feedback)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // multi_dof_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "multi_dof_error");
    if (!field) {
      return false;
    }
    if (!trajectory_msgs__msg__multi_dof_joint_trajectory_point__convert_from_py(field, &ros_message->multi_dof_error)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // multi_dof_output
    PyObject * field = PyObject_GetAttrString(_pymsg, "multi_dof_output");
    if (!field) {
      return false;
    }
    if (!trajectory_msgs__msg__multi_dof_joint_trajectory_point__convert_from_py(field, &ros_message->multi_dof_output)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // multi_dof_desired
    PyObject * field = PyObject_GetAttrString(_pymsg, "multi_dof_desired");
    if (!field) {
      return false;
    }
    if (!trajectory_msgs__msg__multi_dof_joint_trajectory_point__convert_from_py(field, &ros_message->multi_dof_desired)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // multi_dof_actual
    PyObject * field = PyObject_GetAttrString(_pymsg, "multi_dof_actual");
    if (!field) {
      return false;
    }
    if (!trajectory_msgs__msg__multi_dof_joint_trajectory_point__convert_from_py(field, &ros_message->multi_dof_actual)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * control_msgs__msg__joint_trajectory_controller_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of JointTrajectoryControllerState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("control_msgs.msg._joint_trajectory_controller_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "JointTrajectoryControllerState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  control_msgs__msg__JointTrajectoryControllerState * ros_message = (control_msgs__msg__JointTrajectoryControllerState *)raw_ros_message;
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
  {  // joint_names
    PyObject * field = NULL;
    size_t size = ros_message->joint_names.size;
    rosidl_runtime_c__String * src = ros_message->joint_names.data;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      PyObject * decoded_item = PyUnicode_DecodeUTF8(src[i].data, strlen(src[i].data), "replace");
      if (!decoded_item) {
        return NULL;
      }
      int rc = PyList_SetItem(field, i, decoded_item);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "joint_names", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reference
    PyObject * field = NULL;
    field = trajectory_msgs__msg__joint_trajectory_point__convert_to_py(&ros_message->reference);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "reference", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // feedback
    PyObject * field = NULL;
    field = trajectory_msgs__msg__joint_trajectory_point__convert_to_py(&ros_message->feedback);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "feedback", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // error
    PyObject * field = NULL;
    field = trajectory_msgs__msg__joint_trajectory_point__convert_to_py(&ros_message->error);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // output
    PyObject * field = NULL;
    field = trajectory_msgs__msg__joint_trajectory_point__convert_to_py(&ros_message->output);
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
  {  // desired
    PyObject * field = NULL;
    field = trajectory_msgs__msg__joint_trajectory_point__convert_to_py(&ros_message->desired);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "desired", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // actual
    PyObject * field = NULL;
    field = trajectory_msgs__msg__joint_trajectory_point__convert_to_py(&ros_message->actual);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "actual", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // multi_dof_joint_names
    PyObject * field = NULL;
    size_t size = ros_message->multi_dof_joint_names.size;
    rosidl_runtime_c__String * src = ros_message->multi_dof_joint_names.data;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      PyObject * decoded_item = PyUnicode_DecodeUTF8(src[i].data, strlen(src[i].data), "replace");
      if (!decoded_item) {
        return NULL;
      }
      int rc = PyList_SetItem(field, i, decoded_item);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "multi_dof_joint_names", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // multi_dof_reference
    PyObject * field = NULL;
    field = trajectory_msgs__msg__multi_dof_joint_trajectory_point__convert_to_py(&ros_message->multi_dof_reference);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "multi_dof_reference", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // multi_dof_feedback
    PyObject * field = NULL;
    field = trajectory_msgs__msg__multi_dof_joint_trajectory_point__convert_to_py(&ros_message->multi_dof_feedback);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "multi_dof_feedback", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // multi_dof_error
    PyObject * field = NULL;
    field = trajectory_msgs__msg__multi_dof_joint_trajectory_point__convert_to_py(&ros_message->multi_dof_error);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "multi_dof_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // multi_dof_output
    PyObject * field = NULL;
    field = trajectory_msgs__msg__multi_dof_joint_trajectory_point__convert_to_py(&ros_message->multi_dof_output);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "multi_dof_output", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // multi_dof_desired
    PyObject * field = NULL;
    field = trajectory_msgs__msg__multi_dof_joint_trajectory_point__convert_to_py(&ros_message->multi_dof_desired);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "multi_dof_desired", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // multi_dof_actual
    PyObject * field = NULL;
    field = trajectory_msgs__msg__multi_dof_joint_trajectory_point__convert_to_py(&ros_message->multi_dof_actual);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "multi_dof_actual", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
