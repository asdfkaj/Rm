// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from kuang_interfaces:msg/Kuangshi.idl
// generated code does not contain a copyright notice
#include "kuang_interfaces/msg/detail/kuangshi__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `number`
#include "std_msgs/msg/detail/int64__functions.h"
// Member `kind`
#include "std_msgs/msg/detail/string__functions.h"
// Member `position`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `value`
#include "std_msgs/msg/detail/float64__functions.h"

bool
kuang_interfaces__msg__Kuangshi__init(kuang_interfaces__msg__Kuangshi * msg)
{
  if (!msg) {
    return false;
  }
  // number
  if (!std_msgs__msg__Int64__init(&msg->number)) {
    kuang_interfaces__msg__Kuangshi__fini(msg);
    return false;
  }
  // kind
  if (!std_msgs__msg__String__init(&msg->kind)) {
    kuang_interfaces__msg__Kuangshi__fini(msg);
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__init(&msg->position)) {
    kuang_interfaces__msg__Kuangshi__fini(msg);
    return false;
  }
  // value
  if (!std_msgs__msg__Float64__init(&msg->value)) {
    kuang_interfaces__msg__Kuangshi__fini(msg);
    return false;
  }
  return true;
}

void
kuang_interfaces__msg__Kuangshi__fini(kuang_interfaces__msg__Kuangshi * msg)
{
  if (!msg) {
    return;
  }
  // number
  std_msgs__msg__Int64__fini(&msg->number);
  // kind
  std_msgs__msg__String__fini(&msg->kind);
  // position
  geometry_msgs__msg__Point__fini(&msg->position);
  // value
  std_msgs__msg__Float64__fini(&msg->value);
}

bool
kuang_interfaces__msg__Kuangshi__are_equal(const kuang_interfaces__msg__Kuangshi * lhs, const kuang_interfaces__msg__Kuangshi * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // number
  if (!std_msgs__msg__Int64__are_equal(
      &(lhs->number), &(rhs->number)))
  {
    return false;
  }
  // kind
  if (!std_msgs__msg__String__are_equal(
      &(lhs->kind), &(rhs->kind)))
  {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // value
  if (!std_msgs__msg__Float64__are_equal(
      &(lhs->value), &(rhs->value)))
  {
    return false;
  }
  return true;
}

bool
kuang_interfaces__msg__Kuangshi__copy(
  const kuang_interfaces__msg__Kuangshi * input,
  kuang_interfaces__msg__Kuangshi * output)
{
  if (!input || !output) {
    return false;
  }
  // number
  if (!std_msgs__msg__Int64__copy(
      &(input->number), &(output->number)))
  {
    return false;
  }
  // kind
  if (!std_msgs__msg__String__copy(
      &(input->kind), &(output->kind)))
  {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // value
  if (!std_msgs__msg__Float64__copy(
      &(input->value), &(output->value)))
  {
    return false;
  }
  return true;
}

kuang_interfaces__msg__Kuangshi *
kuang_interfaces__msg__Kuangshi__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kuang_interfaces__msg__Kuangshi * msg = (kuang_interfaces__msg__Kuangshi *)allocator.allocate(sizeof(kuang_interfaces__msg__Kuangshi), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kuang_interfaces__msg__Kuangshi));
  bool success = kuang_interfaces__msg__Kuangshi__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kuang_interfaces__msg__Kuangshi__destroy(kuang_interfaces__msg__Kuangshi * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kuang_interfaces__msg__Kuangshi__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kuang_interfaces__msg__Kuangshi__Sequence__init(kuang_interfaces__msg__Kuangshi__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kuang_interfaces__msg__Kuangshi * data = NULL;

  if (size) {
    data = (kuang_interfaces__msg__Kuangshi *)allocator.zero_allocate(size, sizeof(kuang_interfaces__msg__Kuangshi), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kuang_interfaces__msg__Kuangshi__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kuang_interfaces__msg__Kuangshi__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
kuang_interfaces__msg__Kuangshi__Sequence__fini(kuang_interfaces__msg__Kuangshi__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      kuang_interfaces__msg__Kuangshi__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

kuang_interfaces__msg__Kuangshi__Sequence *
kuang_interfaces__msg__Kuangshi__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kuang_interfaces__msg__Kuangshi__Sequence * array = (kuang_interfaces__msg__Kuangshi__Sequence *)allocator.allocate(sizeof(kuang_interfaces__msg__Kuangshi__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kuang_interfaces__msg__Kuangshi__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kuang_interfaces__msg__Kuangshi__Sequence__destroy(kuang_interfaces__msg__Kuangshi__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kuang_interfaces__msg__Kuangshi__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kuang_interfaces__msg__Kuangshi__Sequence__are_equal(const kuang_interfaces__msg__Kuangshi__Sequence * lhs, const kuang_interfaces__msg__Kuangshi__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kuang_interfaces__msg__Kuangshi__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kuang_interfaces__msg__Kuangshi__Sequence__copy(
  const kuang_interfaces__msg__Kuangshi__Sequence * input,
  kuang_interfaces__msg__Kuangshi__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kuang_interfaces__msg__Kuangshi);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kuang_interfaces__msg__Kuangshi * data =
      (kuang_interfaces__msg__Kuangshi *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kuang_interfaces__msg__Kuangshi__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kuang_interfaces__msg__Kuangshi__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kuang_interfaces__msg__Kuangshi__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
