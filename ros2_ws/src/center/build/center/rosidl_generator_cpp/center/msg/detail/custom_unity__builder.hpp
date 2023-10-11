// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from center:msg/CustomUnity.idl
// generated code does not contain a copyright notice

#ifndef CENTER__MSG__DETAIL__CUSTOM_UNITY__BUILDER_HPP_
#define CENTER__MSG__DETAIL__CUSTOM_UNITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "center/msg/detail/custom_unity__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace center
{

namespace msg
{

namespace builder
{

class Init_CustomUnity_f3
{
public:
  explicit Init_CustomUnity_f3(::center::msg::CustomUnity & msg)
  : msg_(msg)
  {}
  ::center::msg::CustomUnity f3(::center::msg::CustomUnity::_f3_type arg)
  {
    msg_.f3 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::center::msg::CustomUnity msg_;
};

class Init_CustomUnity_f2
{
public:
  explicit Init_CustomUnity_f2(::center::msg::CustomUnity & msg)
  : msg_(msg)
  {}
  Init_CustomUnity_f3 f2(::center::msg::CustomUnity::_f2_type arg)
  {
    msg_.f2 = std::move(arg);
    return Init_CustomUnity_f3(msg_);
  }

private:
  ::center::msg::CustomUnity msg_;
};

class Init_CustomUnity_f1
{
public:
  Init_CustomUnity_f1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CustomUnity_f2 f1(::center::msg::CustomUnity::_f1_type arg)
  {
    msg_.f1 = std::move(arg);
    return Init_CustomUnity_f2(msg_);
  }

private:
  ::center::msg::CustomUnity msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::center::msg::CustomUnity>()
{
  return center::msg::builder::Init_CustomUnity_f1();
}

}  // namespace center

#endif  // CENTER__MSG__DETAIL__CUSTOM_UNITY__BUILDER_HPP_
