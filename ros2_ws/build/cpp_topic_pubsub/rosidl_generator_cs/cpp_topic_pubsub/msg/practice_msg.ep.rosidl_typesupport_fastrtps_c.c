// generated from rosidl_generator_cs/resource/idl_typesupport.c.em
// with input from cpp_topic_pubsub:msg/PracticeMsg.idl
// generated code does not contain a copyright notice




#include <stdbool.h>
#include <stdint.h>
#include <rosidl_runtime_c/visibility_control.h>

#include <cpp_topic_pubsub/msg/practice_msg.h>

ROSIDL_GENERATOR_C_EXPORT
void * cpp_topic_pubsub__msg__PracticeMsg_native_get_type_support()
{
    return (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(cpp_topic_pubsub, msg, PracticeMsg);
}

ROSIDL_GENERATOR_C_EXPORT
void *cpp_topic_pubsub__msg__PracticeMsg_native_create_native_message()
{
   cpp_topic_pubsub__msg__PracticeMsg *ros_message = cpp_topic_pubsub__msg__PracticeMsg__create();
   return ros_message;
}

ROSIDL_GENERATOR_C_EXPORT
void cpp_topic_pubsub__msg__PracticeMsg_native_destroy_native_message(void *raw_ros_message) {
  cpp_topic_pubsub__msg__PracticeMsg *ros_message = (cpp_topic_pubsub__msg__PracticeMsg *)raw_ros_message;
  cpp_topic_pubsub__msg__PracticeMsg__destroy(ros_message);
}


