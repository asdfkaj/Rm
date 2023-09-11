// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from kuang_interfaces:srv/Caikuang.idl
// generated code does not contain a copyright notice

#ifndef KUANG_INTERFACES__SRV__DETAIL__CAIKUANG__STRUCT_HPP_
#define KUANG_INTERFACES__SRV__DETAIL__CAIKUANG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__kuang_interfaces__srv__Caikuang_Request __attribute__((deprecated))
#else
# define DEPRECATED__kuang_interfaces__srv__Caikuang_Request __declspec(deprecated)
#endif

namespace kuang_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Caikuang_Request_
{
  using Type = Caikuang_Request_<ContainerAllocator>;

  explicit Caikuang_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ll;
    }
  }

  explicit Caikuang_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ll;
    }
  }

  // field types and members
  using _id_type =
    int64_t;
  _id_type id;

  // setters for named parameter idiom
  Type & set__id(
    const int64_t & _arg)
  {
    this->id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    kuang_interfaces::srv::Caikuang_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const kuang_interfaces::srv::Caikuang_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kuang_interfaces::srv::Caikuang_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kuang_interfaces::srv::Caikuang_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kuang_interfaces::srv::Caikuang_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kuang_interfaces::srv::Caikuang_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kuang_interfaces::srv::Caikuang_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kuang_interfaces::srv::Caikuang_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kuang_interfaces::srv::Caikuang_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kuang_interfaces::srv::Caikuang_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kuang_interfaces__srv__Caikuang_Request
    std::shared_ptr<kuang_interfaces::srv::Caikuang_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kuang_interfaces__srv__Caikuang_Request
    std::shared_ptr<kuang_interfaces::srv::Caikuang_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Caikuang_Request_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Caikuang_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Caikuang_Request_

// alias to use template instance with default allocator
using Caikuang_Request =
  kuang_interfaces::srv::Caikuang_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace kuang_interfaces


// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__kuang_interfaces__srv__Caikuang_Response __attribute__((deprecated))
#else
# define DEPRECATED__kuang_interfaces__srv__Caikuang_Response __declspec(deprecated)
#endif

namespace kuang_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Caikuang_Response_
{
  using Type = Caikuang_Response_<ContainerAllocator>;

  explicit Caikuang_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->values = 0.0;
    }
  }

  explicit Caikuang_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->values = 0.0;
    }
  }

  // field types and members
  using _position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _position_type position;
  using _values_type =
    double;
  _values_type values;

  // setters for named parameter idiom
  Type & set__position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__values(
    const double & _arg)
  {
    this->values = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    kuang_interfaces::srv::Caikuang_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const kuang_interfaces::srv::Caikuang_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kuang_interfaces::srv::Caikuang_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kuang_interfaces::srv::Caikuang_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kuang_interfaces::srv::Caikuang_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kuang_interfaces::srv::Caikuang_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kuang_interfaces::srv::Caikuang_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kuang_interfaces::srv::Caikuang_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kuang_interfaces::srv::Caikuang_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kuang_interfaces::srv::Caikuang_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kuang_interfaces__srv__Caikuang_Response
    std::shared_ptr<kuang_interfaces::srv::Caikuang_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kuang_interfaces__srv__Caikuang_Response
    std::shared_ptr<kuang_interfaces::srv::Caikuang_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Caikuang_Response_ & other) const
  {
    if (this->position != other.position) {
      return false;
    }
    if (this->values != other.values) {
      return false;
    }
    return true;
  }
  bool operator!=(const Caikuang_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Caikuang_Response_

// alias to use template instance with default allocator
using Caikuang_Response =
  kuang_interfaces::srv::Caikuang_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace kuang_interfaces

namespace kuang_interfaces
{

namespace srv
{

struct Caikuang
{
  using Request = kuang_interfaces::srv::Caikuang_Request;
  using Response = kuang_interfaces::srv::Caikuang_Response;
};

}  // namespace srv

}  // namespace kuang_interfaces

#endif  // KUANG_INTERFACES__SRV__DETAIL__CAIKUANG__STRUCT_HPP_
