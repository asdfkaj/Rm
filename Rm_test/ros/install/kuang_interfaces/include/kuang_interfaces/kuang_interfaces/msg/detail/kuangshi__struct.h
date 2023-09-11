// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kuang_interfaces:msg/Kuangshi.idl
// generated code does not contain a copyright notice

#ifndef KUANG_INTERFACES__MSG__DETAIL__KUANGSHI__STRUCT_H_
#define KUANG_INTERFACES__MSG__DETAIL__KUANGSHI__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'number'
#include "std_msgs/msg/detail/int64__struct.h"
// Member 'kind'
#include "std_msgs/msg/detail/string__struct.h"
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'value'
#include "std_msgs/msg/detail/float64__struct.h"

/// Struct defined in msg/Kuangshi in the package kuang_interfaces.
/**
  * 也不知道为什么整个文件路径是std_msgs/msg/Int64但是这里不加msg，我猜测可能是因为格式就是包名+文件名
  * 矿石编号,记住这里调用的是std_msgs/Int64标准包生成的是一个名为number的类，如果在函数中要初始化还应在number后加上.data调用类里的数据data
 */
typedef struct kuang_interfaces__msg__Kuangshi
{
  std_msgs__msg__Int64 number;
  /// 矿石类型
  std_msgs__msg__String kind;
  /// 矿石所在位置
  geometry_msgs__msg__Point position;
  /// 矿石价值
  std_msgs__msg__Float64 value;
} kuang_interfaces__msg__Kuangshi;

// Struct for a sequence of kuang_interfaces__msg__Kuangshi.
typedef struct kuang_interfaces__msg__Kuangshi__Sequence
{
  kuang_interfaces__msg__Kuangshi * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kuang_interfaces__msg__Kuangshi__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KUANG_INTERFACES__MSG__DETAIL__KUANGSHI__STRUCT_H_
