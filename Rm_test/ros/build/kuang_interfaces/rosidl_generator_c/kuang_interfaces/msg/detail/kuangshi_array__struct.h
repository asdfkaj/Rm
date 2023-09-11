// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kuang_interfaces:msg/KuangshiArray.idl
// generated code does not contain a copyright notice

#ifndef KUANG_INTERFACES__MSG__DETAIL__KUANGSHI_ARRAY__STRUCT_H_
#define KUANG_INTERFACES__MSG__DETAIL__KUANGSHI_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data_array'
#include "kuang_interfaces/msg/detail/kuangshi__struct.h"

/// Struct defined in msg/KuangshiArray in the package kuang_interfaces.
typedef struct kuang_interfaces__msg__KuangshiArray
{
  kuang_interfaces__msg__Kuangshi__Sequence data_array;
} kuang_interfaces__msg__KuangshiArray;

// Struct for a sequence of kuang_interfaces__msg__KuangshiArray.
typedef struct kuang_interfaces__msg__KuangshiArray__Sequence
{
  kuang_interfaces__msg__KuangshiArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kuang_interfaces__msg__KuangshiArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KUANG_INTERFACES__MSG__DETAIL__KUANGSHI_ARRAY__STRUCT_H_
