// generated from rosidl_generator_cs/resource/idl_typesupport.c.em
// with input from cpp_server_client:srv/PracticeSrv.idl
// generated code does not contain a copyright notice







#include <stdbool.h>
#include <stdint.h>
#include <rosidl_runtime_c/visibility_control.h>

#include <cpp_server_client/srv/practice_srv.h>

ROSIDL_GENERATOR_C_EXPORT
void * cpp_server_client__srv__PracticeSrv_Request_native_get_type_support()
{
    return (void *)ROSIDL_GET_SRV_TYPE_SUPPORT(cpp_server_client, srv, PracticeSrv);
}

ROSIDL_GENERATOR_C_EXPORT
void *cpp_server_client__srv__PracticeSrv_Request_native_create_native_message()
{
   cpp_server_client__srv__PracticeSrv_Request *ros_message = cpp_server_client__srv__PracticeSrv_Request__create();
   return ros_message;
}

ROSIDL_GENERATOR_C_EXPORT
void cpp_server_client__srv__PracticeSrv_Request_native_destroy_native_message(void *raw_ros_message) {
  cpp_server_client__srv__PracticeSrv_Request *ros_message = (cpp_server_client__srv__PracticeSrv_Request *)raw_ros_message;
  cpp_server_client__srv__PracticeSrv_Request__destroy(ros_message);
}







ROSIDL_GENERATOR_C_EXPORT
void * cpp_server_client__srv__PracticeSrv_Response_native_get_type_support()
{
    return (void *)ROSIDL_GET_SRV_TYPE_SUPPORT(cpp_server_client, srv, PracticeSrv);
}

ROSIDL_GENERATOR_C_EXPORT
void *cpp_server_client__srv__PracticeSrv_Response_native_create_native_message()
{
   cpp_server_client__srv__PracticeSrv_Response *ros_message = cpp_server_client__srv__PracticeSrv_Response__create();
   return ros_message;
}

ROSIDL_GENERATOR_C_EXPORT
void cpp_server_client__srv__PracticeSrv_Response_native_destroy_native_message(void *raw_ros_message) {
  cpp_server_client__srv__PracticeSrv_Response *ros_message = (cpp_server_client__srv__PracticeSrv_Response *)raw_ros_message;
  cpp_server_client__srv__PracticeSrv_Response__destroy(ros_message);
}

