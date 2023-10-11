// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from center:msg/CustomUnity.idl
// generated code does not contain a copyright notice

#ifndef CENTER__MSG__DETAIL__CUSTOM_UNITY__STRUCT_H_
#define CENTER__MSG__DETAIL__CUSTOM_UNITY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/CustomUnity in the package center.
typedef struct center__msg__CustomUnity
{
  double f1;
  double f2;
  double f3;
} center__msg__CustomUnity;

// Struct for a sequence of center__msg__CustomUnity.
typedef struct center__msg__CustomUnity__Sequence
{
  center__msg__CustomUnity * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} center__msg__CustomUnity__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CENTER__MSG__DETAIL__CUSTOM_UNITY__STRUCT_H_
