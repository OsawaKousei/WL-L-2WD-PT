// generated from rosidl_generator_cs/resource/idl.c.em
// with input from cpp_server_client:srv/PracticeSrv.idl
// generated code does not contain a copyright notice




#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <stdint.h>
#include <string.h>

#include <cpp_server_client/srv/practice_srv.h>
#include <rosidl_runtime_c/visibility_control.h>

#include <rosidl_runtime_c/primitives_sequence.h>
#include <rosidl_runtime_c/primitives_sequence_functions.h>

ROSIDL_GENERATOR_C_EXPORT
int64_t cpp_server_client__srv__PracticeSrv_Request_native_read_field_a(void *message_handle)
{
  cpp_server_client__srv__PracticeSrv_Request *ros_message = (cpp_server_client__srv__PracticeSrv_Request *)message_handle;
  return ros_message->a;
}
ROSIDL_GENERATOR_C_EXPORT
int64_t cpp_server_client__srv__PracticeSrv_Request_native_read_field_b(void *message_handle)
{
  cpp_server_client__srv__PracticeSrv_Request *ros_message = (cpp_server_client__srv__PracticeSrv_Request *)message_handle;
  return ros_message->b;
}


ROSIDL_GENERATOR_C_EXPORT
void cpp_server_client__srv__PracticeSrv_Request_native_write_field_a(void *message_handle, int64_t value)
{
  cpp_server_client__srv__PracticeSrv_Request *ros_message = (cpp_server_client__srv__PracticeSrv_Request *)message_handle;
  ros_message->a = value;
}
ROSIDL_GENERATOR_C_EXPORT
void cpp_server_client__srv__PracticeSrv_Request_native_write_field_b(void *message_handle, int64_t value)
{
  cpp_server_client__srv__PracticeSrv_Request *ros_message = (cpp_server_client__srv__PracticeSrv_Request *)message_handle;
  ros_message->b = value;
}

ROSIDL_GENERATOR_C_EXPORT
bool cpp_server_client__srv__PracticeSrv_Request_native_write_field_num_vector(int64_t *value, int size, void *message_handle)
{
  cpp_server_client__srv__PracticeSrv_Request *ros_message = (cpp_server_client__srv__PracticeSrv_Request *)message_handle;
  size_t previous_sequence_size = ros_message->num_vector.size;
  bool size_changed = previous_sequence_size != (size_t)size;
  if (size_changed && previous_sequence_size != 0)
  {
    rosidl_runtime_c__int64__Sequence__fini(&ros_message->num_vector);
  }
  if (size_changed)
  {
    if (!rosidl_runtime_c__int64__Sequence__init(&ros_message->num_vector, size))
      return false;
  }
  int64_t *dest = ros_message->num_vector.data;
  memcpy(dest, value, sizeof(int64_t)*size);
  return true;
}

ROSIDL_GENERATOR_C_EXPORT
int64_t *cpp_server_client__srv__PracticeSrv_Request_native_read_field_num_vector(int *size, void *message_handle)
{
  cpp_server_client__srv__PracticeSrv_Request *ros_message = (cpp_server_client__srv__PracticeSrv_Request *)message_handle;
  *size = ros_message->num_vector.size;
  return ros_message->num_vector.data;
}










ROSIDL_GENERATOR_C_EXPORT
int64_t cpp_server_client__srv__PracticeSrv_Response_native_read_field_cumulative_sum(void *message_handle)
{
  cpp_server_client__srv__PracticeSrv_Response *ros_message = (cpp_server_client__srv__PracticeSrv_Response *)message_handle;
  return ros_message->cumulative_sum;
}


ROSIDL_GENERATOR_C_EXPORT
void cpp_server_client__srv__PracticeSrv_Response_native_write_field_cumulative_sum(void *message_handle, int64_t value)
{
  cpp_server_client__srv__PracticeSrv_Response *ros_message = (cpp_server_client__srv__PracticeSrv_Response *)message_handle;
  ros_message->cumulative_sum = value;
}








