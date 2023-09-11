// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kuang_interfaces:srv/Caikuang.idl
// generated code does not contain a copyright notice

#ifndef KUANG_INTERFACES__SRV__DETAIL__CAIKUANG__STRUCT_H_
#define KUANG_INTERFACES__SRV__DETAIL__CAIKUANG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Caikuang in the package kuang_interfaces.
typedef struct kuang_interfaces__srv__Caikuang_Request
{
  int64_t id;
} kuang_interfaces__srv__Caikuang_Request;

// Struct for a sequence of kuang_interfaces__srv__Caikuang_Request.
typedef struct kuang_interfaces__srv__Caikuang_Request__Sequence
{
  kuang_interfaces__srv__Caikuang_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kuang_interfaces__srv__Caikuang_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in srv/Caikuang in the package kuang_interfaces.
typedef struct kuang_interfaces__srv__Caikuang_Response
{
  geometry_msgs__msg__Point position;
  double values;
} kuang_interfaces__srv__Caikuang_Response;

// Struct for a sequence of kuang_interfaces__srv__Caikuang_Response.
typedef struct kuang_interfaces__srv__Caikuang_Response__Sequence
{
  kuang_interfaces__srv__Caikuang_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kuang_interfaces__srv__Caikuang_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KUANG_INTERFACES__SRV__DETAIL__CAIKUANG__STRUCT_H_
