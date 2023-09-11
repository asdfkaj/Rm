// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from kuang_interfaces:msg/Kuangshi.idl
// generated code does not contain a copyright notice

#ifndef KUANG_INTERFACES__MSG__DETAIL__KUANGSHI__STRUCT_HPP_
#define KUANG_INTERFACES__MSG__DETAIL__KUANGSHI__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'number'
#include "std_msgs/msg/detail/int64__struct.hpp"
// Member 'kind'
#include "std_msgs/msg/detail/string__struct.hpp"
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'value'
#include "std_msgs/msg/detail/float64__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__kuang_interfaces__msg__Kuangshi __attribute__((deprecated))
#else
# define DEPRECATED__kuang_interfaces__msg__Kuangshi __declspec(deprecated)
#endif

namespace kuang_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Kuangshi_
{
  using Type = Kuangshi_<ContainerAllocator>;

  explicit Kuangshi_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : number(_init),
    kind(_init),
    position(_init),
    value(_init)
  {
    (void)_init;
  }

  explicit Kuangshi_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : number(_alloc, _init),
    kind(_alloc, _init),
    position(_alloc, _init),
    value(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _number_type =
    std_msgs::msg::Int64_<ContainerAllocator>;
  _number_type number;
  using _kind_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _kind_type kind;
  using _position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _position_type position;
  using _value_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _value_type value;

  // setters for named parameter idiom
  Type & set__number(
    const std_msgs::msg::Int64_<ContainerAllocator> & _arg)
  {
    this->number = _arg;
    return *this;
  }
  Type & set__kind(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->kind = _arg;
    return *this;
  }
  Type & set__position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__value(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    kuang_interfaces::msg::Kuangshi_<ContainerAllocator> *;
  using ConstRawPtr =
    const kuang_interfaces::msg::Kuangshi_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kuang_interfaces::msg::Kuangshi_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kuang_interfaces::msg::Kuangshi_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kuang_interfaces::msg::Kuangshi_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kuang_interfaces::msg::Kuangshi_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kuang_interfaces::msg::Kuangshi_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kuang_interfaces::msg::Kuangshi_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kuang_interfaces::msg::Kuangshi_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kuang_interfaces::msg::Kuangshi_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kuang_interfaces__msg__Kuangshi
    std::shared_ptr<kuang_interfaces::msg::Kuangshi_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kuang_interfaces__msg__Kuangshi
    std::shared_ptr<kuang_interfaces::msg::Kuangshi_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Kuangshi_ & other) const
  {
    if (this->number != other.number) {
      return false;
    }
    if (this->kind != other.kind) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const Kuangshi_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Kuangshi_

// alias to use template instance with default allocator
using Kuangshi =
  kuang_interfaces::msg::Kuangshi_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace kuang_interfaces

#endif  // KUANG_INTERFACES__MSG__DETAIL__KUANGSHI__STRUCT_HPP_
