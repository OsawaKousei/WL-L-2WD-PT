// generated from rosidl_generator_cs/resource/idl.c.em
// with input from cpp_topic_pubsub:msg/PracticeMsg.idl
// generated code does not contain a copyright notice



#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <stdint.h>
#include <string.h>

#include <cpp_topic_pubsub/msg/practice_msg.h>
#include <rosidl_runtime_c/visibility_control.h>
#include <rosidl_runtime_c/string.h>
#include <rosidl_runtime_c/string_functions.h>

ROSIDL_GENERATOR_C_EXPORT
const char * cpp_topic_pubsub__msg__PracticeMsg_native_read_field_name(void *message_handle)
{
  cpp_topic_pubsub__msg__PracticeMsg *ros_message = (cpp_topic_pubsub__msg__PracticeMsg *)message_handle;
  return ros_message->name.data;
}
ROSIDL_GENERATOR_C_EXPORT
uint8_t cpp_topic_pubsub__msg__PracticeMsg_native_read_field_product_type(void *message_handle)
{
  cpp_topic_pubsub__msg__PracticeMsg *ros_message = (cpp_topic_pubsub__msg__PracticeMsg *)message_handle;
  return ros_message->product_type;
}
ROSIDL_GENERATOR_C_EXPORT
uint32_t cpp_topic_pubsub__msg__PracticeMsg_native_read_field_price(void *message_handle)
{
  cpp_topic_pubsub__msg__PracticeMsg *ros_message = (cpp_topic_pubsub__msg__PracticeMsg *)message_handle;
  return ros_message->price;
}

ROSIDL_GENERATOR_C_EXPORT
void cpp_topic_pubsub__msg__PracticeMsg_native_write_field_name(void *message_handle, const char * value)
{
  cpp_topic_pubsub__msg__PracticeMsg *ros_message = (cpp_topic_pubsub__msg__PracticeMsg *)message_handle;
  if (&ros_message->name.data)
  { // reinitializing string if message is being reused
    rosidl_runtime_c__String__fini(&ros_message->name);
    rosidl_runtime_c__String__init(&ros_message->name);
  }
  rosidl_runtime_c__String__assign(
    &ros_message->name, value);
}
ROSIDL_GENERATOR_C_EXPORT
void cpp_topic_pubsub__msg__PracticeMsg_native_write_field_product_type(void *message_handle, uint8_t value)
{
  cpp_topic_pubsub__msg__PracticeMsg *ros_message = (cpp_topic_pubsub__msg__PracticeMsg *)message_handle;
  ros_message->product_type = value;
}
ROSIDL_GENERATOR_C_EXPORT
void cpp_topic_pubsub__msg__PracticeMsg_native_write_field_price(void *message_handle, uint32_t value)
{
  cpp_topic_pubsub__msg__PracticeMsg *ros_message = (cpp_topic_pubsub__msg__PracticeMsg *)message_handle;
  ros_message->price = value;
}












