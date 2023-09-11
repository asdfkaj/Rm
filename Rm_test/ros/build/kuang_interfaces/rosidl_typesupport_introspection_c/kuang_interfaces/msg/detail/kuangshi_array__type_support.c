// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from kuang_interfaces:msg/KuangshiArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "kuang_interfaces/msg/detail/kuangshi_array__rosidl_typesupport_introspection_c.h"
#include "kuang_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "kuang_interfaces/msg/detail/kuangshi_array__functions.h"
#include "kuang_interfaces/msg/detail/kuangshi_array__struct.h"


// Include directives for member types
// Member `data_array`
#include "kuang_interfaces/msg/kuangshi.h"
// Member `data_array`
#include "kuang_interfaces/msg/detail/kuangshi__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void kuang_interfaces__msg__KuangshiArray__rosidl_typesupport_introspection_c__KuangshiArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  kuang_interfaces__msg__KuangshiArray__init(message_memory);
}

void kuang_interfaces__msg__KuangshiArray__rosidl_typesupport_introspection_c__KuangshiArray_fini_function(void * message_memory)
{
  kuang_interfaces__msg__KuangshiArray__fini(message_memory);
}

size_t kuang_interfaces__msg__KuangshiArray__rosidl_typesupport_introspection_c__size_function__KuangshiArray__data_array(
  const void * untyped_member)
{
  const kuang_interfaces__msg__Kuangshi__Sequence * member =
    (const kuang_interfaces__msg__Kuangshi__Sequence *)(untyped_member);
  return member->size;
}

const void * kuang_interfaces__msg__KuangshiArray__rosidl_typesupport_introspection_c__get_const_function__KuangshiArray__data_array(
  const void * untyped_member, size_t index)
{
  const kuang_interfaces__msg__Kuangshi__Sequence * member =
    (const kuang_interfaces__msg__Kuangshi__Sequence *)(untyped_member);
  return &member->data[index];
}

void * kuang_interfaces__msg__KuangshiArray__rosidl_typesupport_introspection_c__get_function__KuangshiArray__data_array(
  void * untyped_member, size_t index)
{
  kuang_interfaces__msg__Kuangshi__Sequence * member =
    (kuang_interfaces__msg__Kuangshi__Sequence *)(untyped_member);
  return &member->data[index];
}

void kuang_interfaces__msg__KuangshiArray__rosidl_typesupport_introspection_c__fetch_function__KuangshiArray__data_array(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const kuang_interfaces__msg__Kuangshi * item =
    ((const kuang_interfaces__msg__Kuangshi *)
    kuang_interfaces__msg__KuangshiArray__rosidl_typesupport_introspection_c__get_const_function__KuangshiArray__data_array(untyped_member, index));
  kuang_interfaces__msg__Kuangshi * value =
    (kuang_interfaces__msg__Kuangshi *)(untyped_value);
  *value = *item;
}

void kuang_interfaces__msg__KuangshiArray__rosidl_typesupport_introspection_c__assign_function__KuangshiArray__data_array(
  void * untyped_member, size_t index, const void * untyped_value)
{
  kuang_interfaces__msg__Kuangshi * item =
    ((kuang_interfaces__msg__Kuangshi *)
    kuang_interfaces__msg__KuangshiArray__rosidl_typesupport_introspection_c__get_function__KuangshiArray__data_array(untyped_member, index));
  const kuang_interfaces__msg__Kuangshi * value =
    (const kuang_interfaces__msg__Kuangshi *)(untyped_value);
  *item = *value;
}

bool kuang_interfaces__msg__KuangshiArray__rosidl_typesupport_introspection_c__resize_function__KuangshiArray__data_array(
  void * untyped_member, size_t size)
{
  kuang_interfaces__msg__Kuangshi__Sequence * member =
    (kuang_interfaces__msg__Kuangshi__Sequence *)(untyped_member);
  kuang_interfaces__msg__Kuangshi__Sequence__fini(member);
  return kuang_interfaces__msg__Kuangshi__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember kuang_interfaces__msg__KuangshiArray__rosidl_typesupport_introspection_c__KuangshiArray_message_member_array[1] = {
  {
    "data_array",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kuang_interfaces__msg__KuangshiArray, data_array),  // bytes offset in struct
    NULL,  // default value
    kuang_interfaces__msg__KuangshiArray__rosidl_typesupport_introspection_c__size_function__KuangshiArray__data_array,  // size() function pointer
    kuang_interfaces__msg__KuangshiArray__rosidl_typesupport_introspection_c__get_const_function__KuangshiArray__data_array,  // get_const(index) function pointer
    kuang_interfaces__msg__KuangshiArray__rosidl_typesupport_introspection_c__get_function__KuangshiArray__data_array,  // get(index) function pointer
    kuang_interfaces__msg__KuangshiArray__rosidl_typesupport_introspection_c__fetch_function__KuangshiArray__data_array,  // fetch(index, &value) function pointer
    kuang_interfaces__msg__KuangshiArray__rosidl_typesupport_introspection_c__assign_function__KuangshiArray__data_array,  // assign(index, value) function pointer
    kuang_interfaces__msg__KuangshiArray__rosidl_typesupport_introspection_c__resize_function__KuangshiArray__data_array  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers kuang_interfaces__msg__KuangshiArray__rosidl_typesupport_introspection_c__KuangshiArray_message_members = {
  "kuang_interfaces__msg",  // message namespace
  "KuangshiArray",  // message name
  1,  // number of fields
  sizeof(kuang_interfaces__msg__KuangshiArray),
  kuang_interfaces__msg__KuangshiArray__rosidl_typesupport_introspection_c__KuangshiArray_message_member_array,  // message members
  kuang_interfaces__msg__KuangshiArray__rosidl_typesupport_introspection_c__KuangshiArray_init_function,  // function to initialize message memory (memory has to be allocated)
  kuang_interfaces__msg__KuangshiArray__rosidl_typesupport_introspection_c__KuangshiArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t kuang_interfaces__msg__KuangshiArray__rosidl_typesupport_introspection_c__KuangshiArray_message_type_support_handle = {
  0,
  &kuang_interfaces__msg__KuangshiArray__rosidl_typesupport_introspection_c__KuangshiArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_kuang_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kuang_interfaces, msg, KuangshiArray)() {
  kuang_interfaces__msg__KuangshiArray__rosidl_typesupport_introspection_c__KuangshiArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kuang_interfaces, msg, Kuangshi)();
  if (!kuang_interfaces__msg__KuangshiArray__rosidl_typesupport_introspection_c__KuangshiArray_message_type_support_handle.typesupport_identifier) {
    kuang_interfaces__msg__KuangshiArray__rosidl_typesupport_introspection_c__KuangshiArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &kuang_interfaces__msg__KuangshiArray__rosidl_typesupport_introspection_c__KuangshiArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
