// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from kuang_interfaces:msg/Kuangshi.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "kuang_interfaces/msg/detail/kuangshi__rosidl_typesupport_introspection_c.h"
#include "kuang_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "kuang_interfaces/msg/detail/kuangshi__functions.h"
#include "kuang_interfaces/msg/detail/kuangshi__struct.h"


// Include directives for member types
// Member `number`
#include "std_msgs/msg/int64.h"
// Member `number`
#include "std_msgs/msg/detail/int64__rosidl_typesupport_introspection_c.h"
// Member `kind`
#include "std_msgs/msg/string.h"
// Member `kind`
#include "std_msgs/msg/detail/string__rosidl_typesupport_introspection_c.h"
// Member `position`
#include "geometry_msgs/msg/point.h"
// Member `position`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `value`
#include "std_msgs/msg/float64.h"
// Member `value`
#include "std_msgs/msg/detail/float64__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void kuang_interfaces__msg__Kuangshi__rosidl_typesupport_introspection_c__Kuangshi_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  kuang_interfaces__msg__Kuangshi__init(message_memory);
}

void kuang_interfaces__msg__Kuangshi__rosidl_typesupport_introspection_c__Kuangshi_fini_function(void * message_memory)
{
  kuang_interfaces__msg__Kuangshi__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember kuang_interfaces__msg__Kuangshi__rosidl_typesupport_introspection_c__Kuangshi_message_member_array[4] = {
  {
    "number",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kuang_interfaces__msg__Kuangshi, number),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "kind",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kuang_interfaces__msg__Kuangshi, kind),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kuang_interfaces__msg__Kuangshi, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kuang_interfaces__msg__Kuangshi, value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers kuang_interfaces__msg__Kuangshi__rosidl_typesupport_introspection_c__Kuangshi_message_members = {
  "kuang_interfaces__msg",  // message namespace
  "Kuangshi",  // message name
  4,  // number of fields
  sizeof(kuang_interfaces__msg__Kuangshi),
  kuang_interfaces__msg__Kuangshi__rosidl_typesupport_introspection_c__Kuangshi_message_member_array,  // message members
  kuang_interfaces__msg__Kuangshi__rosidl_typesupport_introspection_c__Kuangshi_init_function,  // function to initialize message memory (memory has to be allocated)
  kuang_interfaces__msg__Kuangshi__rosidl_typesupport_introspection_c__Kuangshi_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t kuang_interfaces__msg__Kuangshi__rosidl_typesupport_introspection_c__Kuangshi_message_type_support_handle = {
  0,
  &kuang_interfaces__msg__Kuangshi__rosidl_typesupport_introspection_c__Kuangshi_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_kuang_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kuang_interfaces, msg, Kuangshi)() {
  kuang_interfaces__msg__Kuangshi__rosidl_typesupport_introspection_c__Kuangshi_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Int64)();
  kuang_interfaces__msg__Kuangshi__rosidl_typesupport_introspection_c__Kuangshi_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, String)();
  kuang_interfaces__msg__Kuangshi__rosidl_typesupport_introspection_c__Kuangshi_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  kuang_interfaces__msg__Kuangshi__rosidl_typesupport_introspection_c__Kuangshi_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float64)();
  if (!kuang_interfaces__msg__Kuangshi__rosidl_typesupport_introspection_c__Kuangshi_message_type_support_handle.typesupport_identifier) {
    kuang_interfaces__msg__Kuangshi__rosidl_typesupport_introspection_c__Kuangshi_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &kuang_interfaces__msg__Kuangshi__rosidl_typesupport_introspection_c__Kuangshi_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
