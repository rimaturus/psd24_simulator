// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from controller_manager_msgs:srv/ListHardwareComponents.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_MANAGER_MSGS__SRV__DETAIL__LIST_HARDWARE_COMPONENTS__FUNCTIONS_H_
#define CONTROLLER_MANAGER_MSGS__SRV__DETAIL__LIST_HARDWARE_COMPONENTS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "controller_manager_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "controller_manager_msgs/srv/detail/list_hardware_components__struct.h"

/// Initialize srv/ListHardwareComponents message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * controller_manager_msgs__srv__ListHardwareComponents_Request
 * )) before or use
 * controller_manager_msgs__srv__ListHardwareComponents_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
bool
controller_manager_msgs__srv__ListHardwareComponents_Request__init(controller_manager_msgs__srv__ListHardwareComponents_Request * msg);

/// Finalize srv/ListHardwareComponents message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
void
controller_manager_msgs__srv__ListHardwareComponents_Request__fini(controller_manager_msgs__srv__ListHardwareComponents_Request * msg);

/// Create srv/ListHardwareComponents message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * controller_manager_msgs__srv__ListHardwareComponents_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
controller_manager_msgs__srv__ListHardwareComponents_Request *
controller_manager_msgs__srv__ListHardwareComponents_Request__create();

/// Destroy srv/ListHardwareComponents message.
/**
 * It calls
 * controller_manager_msgs__srv__ListHardwareComponents_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
void
controller_manager_msgs__srv__ListHardwareComponents_Request__destroy(controller_manager_msgs__srv__ListHardwareComponents_Request * msg);

/// Check for srv/ListHardwareComponents message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
bool
controller_manager_msgs__srv__ListHardwareComponents_Request__are_equal(const controller_manager_msgs__srv__ListHardwareComponents_Request * lhs, const controller_manager_msgs__srv__ListHardwareComponents_Request * rhs);

/// Copy a srv/ListHardwareComponents message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
bool
controller_manager_msgs__srv__ListHardwareComponents_Request__copy(
  const controller_manager_msgs__srv__ListHardwareComponents_Request * input,
  controller_manager_msgs__srv__ListHardwareComponents_Request * output);

/// Initialize array of srv/ListHardwareComponents messages.
/**
 * It allocates the memory for the number of elements and calls
 * controller_manager_msgs__srv__ListHardwareComponents_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
bool
controller_manager_msgs__srv__ListHardwareComponents_Request__Sequence__init(controller_manager_msgs__srv__ListHardwareComponents_Request__Sequence * array, size_t size);

/// Finalize array of srv/ListHardwareComponents messages.
/**
 * It calls
 * controller_manager_msgs__srv__ListHardwareComponents_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
void
controller_manager_msgs__srv__ListHardwareComponents_Request__Sequence__fini(controller_manager_msgs__srv__ListHardwareComponents_Request__Sequence * array);

/// Create array of srv/ListHardwareComponents messages.
/**
 * It allocates the memory for the array and calls
 * controller_manager_msgs__srv__ListHardwareComponents_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
controller_manager_msgs__srv__ListHardwareComponents_Request__Sequence *
controller_manager_msgs__srv__ListHardwareComponents_Request__Sequence__create(size_t size);

/// Destroy array of srv/ListHardwareComponents messages.
/**
 * It calls
 * controller_manager_msgs__srv__ListHardwareComponents_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
void
controller_manager_msgs__srv__ListHardwareComponents_Request__Sequence__destroy(controller_manager_msgs__srv__ListHardwareComponents_Request__Sequence * array);

/// Check for srv/ListHardwareComponents message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
bool
controller_manager_msgs__srv__ListHardwareComponents_Request__Sequence__are_equal(const controller_manager_msgs__srv__ListHardwareComponents_Request__Sequence * lhs, const controller_manager_msgs__srv__ListHardwareComponents_Request__Sequence * rhs);

/// Copy an array of srv/ListHardwareComponents messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
bool
controller_manager_msgs__srv__ListHardwareComponents_Request__Sequence__copy(
  const controller_manager_msgs__srv__ListHardwareComponents_Request__Sequence * input,
  controller_manager_msgs__srv__ListHardwareComponents_Request__Sequence * output);

/// Initialize srv/ListHardwareComponents message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * controller_manager_msgs__srv__ListHardwareComponents_Response
 * )) before or use
 * controller_manager_msgs__srv__ListHardwareComponents_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
bool
controller_manager_msgs__srv__ListHardwareComponents_Response__init(controller_manager_msgs__srv__ListHardwareComponents_Response * msg);

/// Finalize srv/ListHardwareComponents message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
void
controller_manager_msgs__srv__ListHardwareComponents_Response__fini(controller_manager_msgs__srv__ListHardwareComponents_Response * msg);

/// Create srv/ListHardwareComponents message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * controller_manager_msgs__srv__ListHardwareComponents_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
controller_manager_msgs__srv__ListHardwareComponents_Response *
controller_manager_msgs__srv__ListHardwareComponents_Response__create();

/// Destroy srv/ListHardwareComponents message.
/**
 * It calls
 * controller_manager_msgs__srv__ListHardwareComponents_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
void
controller_manager_msgs__srv__ListHardwareComponents_Response__destroy(controller_manager_msgs__srv__ListHardwareComponents_Response * msg);

/// Check for srv/ListHardwareComponents message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
bool
controller_manager_msgs__srv__ListHardwareComponents_Response__are_equal(const controller_manager_msgs__srv__ListHardwareComponents_Response * lhs, const controller_manager_msgs__srv__ListHardwareComponents_Response * rhs);

/// Copy a srv/ListHardwareComponents message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
bool
controller_manager_msgs__srv__ListHardwareComponents_Response__copy(
  const controller_manager_msgs__srv__ListHardwareComponents_Response * input,
  controller_manager_msgs__srv__ListHardwareComponents_Response * output);

/// Initialize array of srv/ListHardwareComponents messages.
/**
 * It allocates the memory for the number of elements and calls
 * controller_manager_msgs__srv__ListHardwareComponents_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
bool
controller_manager_msgs__srv__ListHardwareComponents_Response__Sequence__init(controller_manager_msgs__srv__ListHardwareComponents_Response__Sequence * array, size_t size);

/// Finalize array of srv/ListHardwareComponents messages.
/**
 * It calls
 * controller_manager_msgs__srv__ListHardwareComponents_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
void
controller_manager_msgs__srv__ListHardwareComponents_Response__Sequence__fini(controller_manager_msgs__srv__ListHardwareComponents_Response__Sequence * array);

/// Create array of srv/ListHardwareComponents messages.
/**
 * It allocates the memory for the array and calls
 * controller_manager_msgs__srv__ListHardwareComponents_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
controller_manager_msgs__srv__ListHardwareComponents_Response__Sequence *
controller_manager_msgs__srv__ListHardwareComponents_Response__Sequence__create(size_t size);

/// Destroy array of srv/ListHardwareComponents messages.
/**
 * It calls
 * controller_manager_msgs__srv__ListHardwareComponents_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
void
controller_manager_msgs__srv__ListHardwareComponents_Response__Sequence__destroy(controller_manager_msgs__srv__ListHardwareComponents_Response__Sequence * array);

/// Check for srv/ListHardwareComponents message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
bool
controller_manager_msgs__srv__ListHardwareComponents_Response__Sequence__are_equal(const controller_manager_msgs__srv__ListHardwareComponents_Response__Sequence * lhs, const controller_manager_msgs__srv__ListHardwareComponents_Response__Sequence * rhs);

/// Copy an array of srv/ListHardwareComponents messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
bool
controller_manager_msgs__srv__ListHardwareComponents_Response__Sequence__copy(
  const controller_manager_msgs__srv__ListHardwareComponents_Response__Sequence * input,
  controller_manager_msgs__srv__ListHardwareComponents_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CONTROLLER_MANAGER_MSGS__SRV__DETAIL__LIST_HARDWARE_COMPONENTS__FUNCTIONS_H_
