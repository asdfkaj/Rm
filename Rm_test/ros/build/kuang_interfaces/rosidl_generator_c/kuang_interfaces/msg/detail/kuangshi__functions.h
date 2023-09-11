// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from kuang_interfaces:msg/Kuangshi.idl
// generated code does not contain a copyright notice

#ifndef KUANG_INTERFACES__MSG__DETAIL__KUANGSHI__FUNCTIONS_H_
#define KUANG_INTERFACES__MSG__DETAIL__KUANGSHI__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "kuang_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "kuang_interfaces/msg/detail/kuangshi__struct.h"

/// Initialize msg/Kuangshi message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * kuang_interfaces__msg__Kuangshi
 * )) before or use
 * kuang_interfaces__msg__Kuangshi__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_kuang_interfaces
bool
kuang_interfaces__msg__Kuangshi__init(kuang_interfaces__msg__Kuangshi * msg);

/// Finalize msg/Kuangshi message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kuang_interfaces
void
kuang_interfaces__msg__Kuangshi__fini(kuang_interfaces__msg__Kuangshi * msg);

/// Create msg/Kuangshi message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * kuang_interfaces__msg__Kuangshi__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kuang_interfaces
kuang_interfaces__msg__Kuangshi *
kuang_interfaces__msg__Kuangshi__create();

/// Destroy msg/Kuangshi message.
/**
 * It calls
 * kuang_interfaces__msg__Kuangshi__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kuang_interfaces
void
kuang_interfaces__msg__Kuangshi__destroy(kuang_interfaces__msg__Kuangshi * msg);

/// Check for msg/Kuangshi message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kuang_interfaces
bool
kuang_interfaces__msg__Kuangshi__are_equal(const kuang_interfaces__msg__Kuangshi * lhs, const kuang_interfaces__msg__Kuangshi * rhs);

/// Copy a msg/Kuangshi message.
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
ROSIDL_GENERATOR_C_PUBLIC_kuang_interfaces
bool
kuang_interfaces__msg__Kuangshi__copy(
  const kuang_interfaces__msg__Kuangshi * input,
  kuang_interfaces__msg__Kuangshi * output);

/// Initialize array of msg/Kuangshi messages.
/**
 * It allocates the memory for the number of elements and calls
 * kuang_interfaces__msg__Kuangshi__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_kuang_interfaces
bool
kuang_interfaces__msg__Kuangshi__Sequence__init(kuang_interfaces__msg__Kuangshi__Sequence * array, size_t size);

/// Finalize array of msg/Kuangshi messages.
/**
 * It calls
 * kuang_interfaces__msg__Kuangshi__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kuang_interfaces
void
kuang_interfaces__msg__Kuangshi__Sequence__fini(kuang_interfaces__msg__Kuangshi__Sequence * array);

/// Create array of msg/Kuangshi messages.
/**
 * It allocates the memory for the array and calls
 * kuang_interfaces__msg__Kuangshi__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kuang_interfaces
kuang_interfaces__msg__Kuangshi__Sequence *
kuang_interfaces__msg__Kuangshi__Sequence__create(size_t size);

/// Destroy array of msg/Kuangshi messages.
/**
 * It calls
 * kuang_interfaces__msg__Kuangshi__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kuang_interfaces
void
kuang_interfaces__msg__Kuangshi__Sequence__destroy(kuang_interfaces__msg__Kuangshi__Sequence * array);

/// Check for msg/Kuangshi message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kuang_interfaces
bool
kuang_interfaces__msg__Kuangshi__Sequence__are_equal(const kuang_interfaces__msg__Kuangshi__Sequence * lhs, const kuang_interfaces__msg__Kuangshi__Sequence * rhs);

/// Copy an array of msg/Kuangshi messages.
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
ROSIDL_GENERATOR_C_PUBLIC_kuang_interfaces
bool
kuang_interfaces__msg__Kuangshi__Sequence__copy(
  const kuang_interfaces__msg__Kuangshi__Sequence * input,
  kuang_interfaces__msg__Kuangshi__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // KUANG_INTERFACES__MSG__DETAIL__KUANGSHI__FUNCTIONS_H_
