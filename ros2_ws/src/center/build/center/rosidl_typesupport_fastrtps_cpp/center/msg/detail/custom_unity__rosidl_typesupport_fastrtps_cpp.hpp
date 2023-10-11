// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from center:msg/CustomUnity.idl
// generated code does not contain a copyright notice

#ifndef CENTER__MSG__DETAIL__CUSTOM_UNITY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define CENTER__MSG__DETAIL__CUSTOM_UNITY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "center/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "center/msg/detail/custom_unity__struct.hpp"

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

#include "fastcdr/Cdr.h"

namespace center
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_center
cdr_serialize(
  const center::msg::CustomUnity & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_center
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  center::msg::CustomUnity & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_center
get_serialized_size(
  const center::msg::CustomUnity & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_center
max_serialized_size_CustomUnity(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace center

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_center
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, center, msg, CustomUnity)();

#ifdef __cplusplus
}
#endif

#endif  // CENTER__MSG__DETAIL__CUSTOM_UNITY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
