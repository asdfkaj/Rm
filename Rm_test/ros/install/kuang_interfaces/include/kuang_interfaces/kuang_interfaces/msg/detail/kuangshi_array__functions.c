// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from kuang_interfaces:msg/KuangshiArray.idl
// generated code does not contain a copyright notice
#include "kuang_interfaces/msg/detail/kuangshi_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `data_array`
#include "kuang_interfaces/msg/detail/kuangshi__functions.h"

bool
kuang_interfaces__msg__KuangshiArray__init(kuang_interfaces__msg__KuangshiArray * msg)
{
  if (!msg) {
    return false;
  }
  // data_array
  if (!kuang_interfaces__msg__Kuangshi__Sequence__init(&msg->data_array, 0)) {
    kuang_interfaces__msg__KuangshiArray__fini(msg);
    return false;
  }
  return true;
}

void
kuang_interfaces__msg__KuangshiArray__fini(kuang_interfaces__msg__KuangshiArray * msg)
{
  if (!msg) {
    return;
  }
  // data_array
  kuang_interfaces__msg__Kuangshi__Sequence__fini(&msg->data_array);
}

bool
kuang_interfaces__msg__KuangshiArray__are_equal(const kuang_interfaces__msg__KuangshiArray * lhs, const kuang_interfaces__msg__KuangshiArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // data_array
  if (!kuang_interfaces__msg__Kuangshi__Sequence__are_equal(
      &(lhs->data_array), &(rhs->data_array)))
  {
    return false;
  }
  return true;
}

bool
kuang_interfaces__msg__KuangshiArray__copy(
  const kuang_interfaces__msg__KuangshiArray * input,
  kuang_interfaces__msg__KuangshiArray * output)
{
  if (!input || !output) {
    return false;
  }
  // data_array
  if (!kuang_interfaces__msg__Kuangshi__Sequence__copy(
      &(input->data_array), &(output->data_array)))
  {
    return false;
  }
  return true;
}

kuang_interfaces__msg__KuangshiArray *
kuang_interfaces__msg__KuangshiArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kuang_interfaces__msg__KuangshiArray * msg = (kuang_interfaces__msg__KuangshiArray *)allocator.allocate(sizeof(kuang_interfaces__msg__KuangshiArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kuang_interfaces__msg__KuangshiArray));
  bool success = kuang_interfaces__msg__KuangshiArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kuang_interfaces__msg__KuangshiArray__destroy(kuang_interfaces__msg__KuangshiArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kuang_interfaces__msg__KuangshiArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kuang_interfaces__msg__KuangshiArray__Sequence__init(kuang_interfaces__msg__KuangshiArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kuang_interfaces__msg__KuangshiArray * data = NULL;

  if (size) {
    data = (kuang_interfaces__msg__KuangshiArray *)allocator.zero_allocate(size, sizeof(kuang_interfaces__msg__KuangshiArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kuang_interfaces__msg__KuangshiArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kuang_interfaces__msg__KuangshiArray__fini(&data[i - 1]);
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
kuang_interfaces__msg__KuangshiArray__Sequence__fini(kuang_interfaces__msg__KuangshiArray__Sequence * array)
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
      kuang_interfaces__msg__KuangshiArray__fini(&array->data[i]);
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

kuang_interfaces__msg__KuangshiArray__Sequence *
kuang_interfaces__msg__KuangshiArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kuang_interfaces__msg__KuangshiArray__Sequence * array = (kuang_interfaces__msg__KuangshiArray__Sequence *)allocator.allocate(sizeof(kuang_interfaces__msg__KuangshiArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kuang_interfaces__msg__KuangshiArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kuang_interfaces__msg__KuangshiArray__Sequence__destroy(kuang_interfaces__msg__KuangshiArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kuang_interfaces__msg__KuangshiArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kuang_interfaces__msg__KuangshiArray__Sequence__are_equal(const kuang_interfaces__msg__KuangshiArray__Sequence * lhs, const kuang_interfaces__msg__KuangshiArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kuang_interfaces__msg__KuangshiArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kuang_interfaces__msg__KuangshiArray__Sequence__copy(
  const kuang_interfaces__msg__KuangshiArray__Sequence * input,
  kuang_interfaces__msg__KuangshiArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kuang_interfaces__msg__KuangshiArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kuang_interfaces__msg__KuangshiArray * data =
      (kuang_interfaces__msg__KuangshiArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kuang_interfaces__msg__KuangshiArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kuang_interfaces__msg__KuangshiArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kuang_interfaces__msg__KuangshiArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
