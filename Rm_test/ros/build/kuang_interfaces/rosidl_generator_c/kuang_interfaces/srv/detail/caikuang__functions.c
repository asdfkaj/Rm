// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from kuang_interfaces:srv/Caikuang.idl
// generated code does not contain a copyright notice
#include "kuang_interfaces/srv/detail/caikuang__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
kuang_interfaces__srv__Caikuang_Request__init(kuang_interfaces__srv__Caikuang_Request * msg)
{
  if (!msg) {
    return false;
  }
  // id
  return true;
}

void
kuang_interfaces__srv__Caikuang_Request__fini(kuang_interfaces__srv__Caikuang_Request * msg)
{
  if (!msg) {
    return;
  }
  // id
}

bool
kuang_interfaces__srv__Caikuang_Request__are_equal(const kuang_interfaces__srv__Caikuang_Request * lhs, const kuang_interfaces__srv__Caikuang_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  return true;
}

bool
kuang_interfaces__srv__Caikuang_Request__copy(
  const kuang_interfaces__srv__Caikuang_Request * input,
  kuang_interfaces__srv__Caikuang_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  return true;
}

kuang_interfaces__srv__Caikuang_Request *
kuang_interfaces__srv__Caikuang_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kuang_interfaces__srv__Caikuang_Request * msg = (kuang_interfaces__srv__Caikuang_Request *)allocator.allocate(sizeof(kuang_interfaces__srv__Caikuang_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kuang_interfaces__srv__Caikuang_Request));
  bool success = kuang_interfaces__srv__Caikuang_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kuang_interfaces__srv__Caikuang_Request__destroy(kuang_interfaces__srv__Caikuang_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kuang_interfaces__srv__Caikuang_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kuang_interfaces__srv__Caikuang_Request__Sequence__init(kuang_interfaces__srv__Caikuang_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kuang_interfaces__srv__Caikuang_Request * data = NULL;

  if (size) {
    data = (kuang_interfaces__srv__Caikuang_Request *)allocator.zero_allocate(size, sizeof(kuang_interfaces__srv__Caikuang_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kuang_interfaces__srv__Caikuang_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kuang_interfaces__srv__Caikuang_Request__fini(&data[i - 1]);
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
kuang_interfaces__srv__Caikuang_Request__Sequence__fini(kuang_interfaces__srv__Caikuang_Request__Sequence * array)
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
      kuang_interfaces__srv__Caikuang_Request__fini(&array->data[i]);
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

kuang_interfaces__srv__Caikuang_Request__Sequence *
kuang_interfaces__srv__Caikuang_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kuang_interfaces__srv__Caikuang_Request__Sequence * array = (kuang_interfaces__srv__Caikuang_Request__Sequence *)allocator.allocate(sizeof(kuang_interfaces__srv__Caikuang_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kuang_interfaces__srv__Caikuang_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kuang_interfaces__srv__Caikuang_Request__Sequence__destroy(kuang_interfaces__srv__Caikuang_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kuang_interfaces__srv__Caikuang_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kuang_interfaces__srv__Caikuang_Request__Sequence__are_equal(const kuang_interfaces__srv__Caikuang_Request__Sequence * lhs, const kuang_interfaces__srv__Caikuang_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kuang_interfaces__srv__Caikuang_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kuang_interfaces__srv__Caikuang_Request__Sequence__copy(
  const kuang_interfaces__srv__Caikuang_Request__Sequence * input,
  kuang_interfaces__srv__Caikuang_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kuang_interfaces__srv__Caikuang_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kuang_interfaces__srv__Caikuang_Request * data =
      (kuang_interfaces__srv__Caikuang_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kuang_interfaces__srv__Caikuang_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kuang_interfaces__srv__Caikuang_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kuang_interfaces__srv__Caikuang_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `position`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
kuang_interfaces__srv__Caikuang_Response__init(kuang_interfaces__srv__Caikuang_Response * msg)
{
  if (!msg) {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__init(&msg->position)) {
    kuang_interfaces__srv__Caikuang_Response__fini(msg);
    return false;
  }
  // values
  return true;
}

void
kuang_interfaces__srv__Caikuang_Response__fini(kuang_interfaces__srv__Caikuang_Response * msg)
{
  if (!msg) {
    return;
  }
  // position
  geometry_msgs__msg__Point__fini(&msg->position);
  // values
}

bool
kuang_interfaces__srv__Caikuang_Response__are_equal(const kuang_interfaces__srv__Caikuang_Response * lhs, const kuang_interfaces__srv__Caikuang_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // values
  if (lhs->values != rhs->values) {
    return false;
  }
  return true;
}

bool
kuang_interfaces__srv__Caikuang_Response__copy(
  const kuang_interfaces__srv__Caikuang_Response * input,
  kuang_interfaces__srv__Caikuang_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // values
  output->values = input->values;
  return true;
}

kuang_interfaces__srv__Caikuang_Response *
kuang_interfaces__srv__Caikuang_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kuang_interfaces__srv__Caikuang_Response * msg = (kuang_interfaces__srv__Caikuang_Response *)allocator.allocate(sizeof(kuang_interfaces__srv__Caikuang_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kuang_interfaces__srv__Caikuang_Response));
  bool success = kuang_interfaces__srv__Caikuang_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kuang_interfaces__srv__Caikuang_Response__destroy(kuang_interfaces__srv__Caikuang_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kuang_interfaces__srv__Caikuang_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kuang_interfaces__srv__Caikuang_Response__Sequence__init(kuang_interfaces__srv__Caikuang_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kuang_interfaces__srv__Caikuang_Response * data = NULL;

  if (size) {
    data = (kuang_interfaces__srv__Caikuang_Response *)allocator.zero_allocate(size, sizeof(kuang_interfaces__srv__Caikuang_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kuang_interfaces__srv__Caikuang_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kuang_interfaces__srv__Caikuang_Response__fini(&data[i - 1]);
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
kuang_interfaces__srv__Caikuang_Response__Sequence__fini(kuang_interfaces__srv__Caikuang_Response__Sequence * array)
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
      kuang_interfaces__srv__Caikuang_Response__fini(&array->data[i]);
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

kuang_interfaces__srv__Caikuang_Response__Sequence *
kuang_interfaces__srv__Caikuang_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kuang_interfaces__srv__Caikuang_Response__Sequence * array = (kuang_interfaces__srv__Caikuang_Response__Sequence *)allocator.allocate(sizeof(kuang_interfaces__srv__Caikuang_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kuang_interfaces__srv__Caikuang_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kuang_interfaces__srv__Caikuang_Response__Sequence__destroy(kuang_interfaces__srv__Caikuang_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kuang_interfaces__srv__Caikuang_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kuang_interfaces__srv__Caikuang_Response__Sequence__are_equal(const kuang_interfaces__srv__Caikuang_Response__Sequence * lhs, const kuang_interfaces__srv__Caikuang_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kuang_interfaces__srv__Caikuang_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kuang_interfaces__srv__Caikuang_Response__Sequence__copy(
  const kuang_interfaces__srv__Caikuang_Response__Sequence * input,
  kuang_interfaces__srv__Caikuang_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kuang_interfaces__srv__Caikuang_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kuang_interfaces__srv__Caikuang_Response * data =
      (kuang_interfaces__srv__Caikuang_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kuang_interfaces__srv__Caikuang_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kuang_interfaces__srv__Caikuang_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kuang_interfaces__srv__Caikuang_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
