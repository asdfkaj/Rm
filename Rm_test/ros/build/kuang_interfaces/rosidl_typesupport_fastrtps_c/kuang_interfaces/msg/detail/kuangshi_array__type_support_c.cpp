// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from kuang_interfaces:msg/KuangshiArray.idl
// generated code does not contain a copyright notice
#include "kuang_interfaces/msg/detail/kuangshi_array__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "kuang_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "kuang_interfaces/msg/detail/kuangshi_array__struct.h"
#include "kuang_interfaces/msg/detail/kuangshi_array__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "kuang_interfaces/msg/detail/kuangshi__functions.h"  // data_array

// forward declare type support functions
size_t get_serialized_size_kuang_interfaces__msg__Kuangshi(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_kuang_interfaces__msg__Kuangshi(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, kuang_interfaces, msg, Kuangshi)();


using _KuangshiArray__ros_msg_type = kuang_interfaces__msg__KuangshiArray;

static bool _KuangshiArray__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _KuangshiArray__ros_msg_type * ros_message = static_cast<const _KuangshiArray__ros_msg_type *>(untyped_ros_message);
  // Field name: data_array
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, kuang_interfaces, msg, Kuangshi
      )()->data);
    size_t size = ros_message->data_array.size;
    auto array_ptr = ros_message->data_array.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _KuangshiArray__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _KuangshiArray__ros_msg_type * ros_message = static_cast<_KuangshiArray__ros_msg_type *>(untyped_ros_message);
  // Field name: data_array
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, kuang_interfaces, msg, Kuangshi
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->data_array.data) {
      kuang_interfaces__msg__Kuangshi__Sequence__fini(&ros_message->data_array);
    }
    if (!kuang_interfaces__msg__Kuangshi__Sequence__init(&ros_message->data_array, size)) {
      fprintf(stderr, "failed to create array for field 'data_array'");
      return false;
    }
    auto array_ptr = ros_message->data_array.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kuang_interfaces
size_t get_serialized_size_kuang_interfaces__msg__KuangshiArray(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _KuangshiArray__ros_msg_type * ros_message = static_cast<const _KuangshiArray__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name data_array
  {
    size_t array_size = ros_message->data_array.size;
    auto array_ptr = ros_message->data_array.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_kuang_interfaces__msg__Kuangshi(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _KuangshiArray__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_kuang_interfaces__msg__KuangshiArray(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kuang_interfaces
size_t max_serialized_size_kuang_interfaces__msg__KuangshiArray(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: data_array
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_kuang_interfaces__msg__Kuangshi(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _KuangshiArray__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_kuang_interfaces__msg__KuangshiArray(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_KuangshiArray = {
  "kuang_interfaces::msg",
  "KuangshiArray",
  _KuangshiArray__cdr_serialize,
  _KuangshiArray__cdr_deserialize,
  _KuangshiArray__get_serialized_size,
  _KuangshiArray__max_serialized_size
};

static rosidl_message_type_support_t _KuangshiArray__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_KuangshiArray,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, kuang_interfaces, msg, KuangshiArray)() {
  return &_KuangshiArray__type_support;
}

#if defined(__cplusplus)
}
#endif
