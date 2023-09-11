// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from kuang_interfaces:msg/KuangshiArray.idl
// generated code does not contain a copyright notice

#ifndef KUANG_INTERFACES__MSG__DETAIL__KUANGSHI_ARRAY__STRUCT_HPP_
#define KUANG_INTERFACES__MSG__DETAIL__KUANGSHI_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'data_array'
#include "kuang_interfaces/msg/detail/kuangshi__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__kuang_interfaces__msg__KuangshiArray __attribute__((deprecated))
#else
# define DEPRECATED__kuang_interfaces__msg__KuangshiArray __declspec(deprecated)
#endif

namespace kuang_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct KuangshiArray_
{
  using Type = KuangshiArray_<ContainerAllocator>;

  explicit KuangshiArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit KuangshiArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _data_array_type =
    std::vector<kuang_interfaces::msg::Kuangshi_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<kuang_interfaces::msg::Kuangshi_<ContainerAllocator>>>;
  _data_array_type data_array;

  // setters for named parameter idiom
  Type & set__data_array(
    const std::vector<kuang_interfaces::msg::Kuangshi_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<kuang_interfaces::msg::Kuangshi_<ContainerAllocator>>> & _arg)
  {
    this->data_array = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    kuang_interfaces::msg::KuangshiArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const kuang_interfaces::msg::KuangshiArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kuang_interfaces::msg::KuangshiArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kuang_interfaces::msg::KuangshiArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kuang_interfaces::msg::KuangshiArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kuang_interfaces::msg::KuangshiArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kuang_interfaces::msg::KuangshiArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kuang_interfaces::msg::KuangshiArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kuang_interfaces::msg::KuangshiArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kuang_interfaces::msg::KuangshiArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kuang_interfaces__msg__KuangshiArray
    std::shared_ptr<kuang_interfaces::msg::KuangshiArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kuang_interfaces__msg__KuangshiArray
    std::shared_ptr<kuang_interfaces::msg::KuangshiArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const KuangshiArray_ & other) const
  {
    if (this->data_array != other.data_array) {
      return false;
    }
    return true;
  }
  bool operator!=(const KuangshiArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct KuangshiArray_

// alias to use template instance with default allocator
using KuangshiArray =
  kuang_interfaces::msg::KuangshiArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace kuang_interfaces

#endif  // KUANG_INTERFACES__MSG__DETAIL__KUANGSHI_ARRAY__STRUCT_HPP_
