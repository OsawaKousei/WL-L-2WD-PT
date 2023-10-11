// generated from rosidl_generator_cs/resource/idl.cs.em
// with input from cpp_server_client:srv/PracticeSrv.idl
// generated code does not contain a copyright notice

//TODO (adamdbrw): include depending on what is needed
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using ROS2;
using ROS2.Internal;





namespace cpp_server_client
{
namespace srv
{
// message class
public class PracticeSrv_Request : MessageInternals, Message
{
  private IntPtr _handle;
  private static readonly DllLoadUtils dllLoadUtils;

  public bool IsDisposed { get { return disposed; } }
  private bool disposed;

  // constant declarations

  // members
  public long[] Num_vector { get; set; }
  public long A { get; set; }
  public long B { get; set; }

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate IntPtr NativeGetTypeSupportType();
  private static NativeGetTypeSupportType native_get_typesupport = null;

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate IntPtr NativeCreateNativeMessageType();
  private static NativeCreateNativeMessageType native_create_native_message = null;

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate void NativeDestroyNativeMessageType(IntPtr messageHandle);
  private static NativeDestroyNativeMessageType native_destroy_native_message = null;

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  internal delegate IntPtr NativeReadFieldNum_vectorType(
    out int array_size,
    IntPtr messageHandle);

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  internal delegate bool NativeWriteFieldNum_vectorType(
      [MarshalAs(UnmanagedType.LPArray, ArraySubType = UnmanagedType.I8, SizeParamIndex = 1)]
      long[] values,
      int array_size,
      IntPtr messageHandle);

  private static NativeReadFieldNum_vectorType native_read_field_num_vector = null;
  private static NativeWriteFieldNum_vectorType native_write_field_num_vector = null;
  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate long NativeReadFieldAType(
    IntPtr messageHandle);

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate void NativeWriteFieldAType(
    IntPtr messageHandle, long value);


  private static NativeReadFieldAType native_read_field_a = null;
  private static NativeWriteFieldAType native_write_field_a = null;
  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate long NativeReadFieldBType(
    IntPtr messageHandle);

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate void NativeWriteFieldBType(
    IntPtr messageHandle, long value);


  private static NativeReadFieldBType native_read_field_b = null;
  private static NativeWriteFieldBType native_write_field_b = null;

  // This is done to preload before ros2 rmw_implementation attempts to find custom message library (and fails without absolute path)
  static private void MessageTypeSupportPreload()
  {
    if (RuntimeInformation.IsOSPlatform(OSPlatform.Linux))
    { //only affects Linux since on Windows PATH can be set effectively, dynamically
        const string rmw_fastrtps = "rmw_fastrtps_cpp";
        var rmw_implementation = Environment.GetEnvironmentVariable("RMW_IMPLEMENTATION");
        if (rmw_implementation == null)
        {
          var ros_distro = Environment.GetEnvironmentVariable("ROS_DISTRO");
          if (ros_distro == "galactic")
          { // no preloads for CycloneDDS, default for galactic
            return;
          }
          rmw_implementation = rmw_fastrtps; // default for all other distros
        }

        // TODO - generalize to Connext and other implementations
        if (rmw_implementation == rmw_fastrtps)
        { // TODO - get rcl level constants, e.g. rosidl_typesupport_fastrtps_c__identifier
          // Load typesupport for fastrtps (_c depends on _cpp)
          var loadUtils = DllLoadUtilsFactory.GetDllLoadUtils();
          IntPtr messageLibraryTypesupportFastRTPS_CPP = loadUtils.LoadLibraryNoSuffix("cpp_server_client__rosidl_typesupport_fastrtps_cpp");
          IntPtr messageLibraryTypesupportFastRTPS_C = loadUtils.LoadLibraryNoSuffix("cpp_server_client__rosidl_typesupport_fastrtps_c");
      }
    }
  }

  static PracticeSrv_Request()
  {
    Ros2csLogger logger = Ros2csLogger.GetInstance();

    dllLoadUtils = DllLoadUtilsFactory.GetDllLoadUtils();
    IntPtr messageLibraryTypesupport = dllLoadUtils.LoadLibraryNoSuffix("cpp_server_client__rosidl_typesupport_c");
    IntPtr messageLibraryGenerator = dllLoadUtils.LoadLibraryNoSuffix("cpp_server_client__rosidl_generator_c");
    IntPtr messageLibraryIntro = dllLoadUtils.LoadLibraryNoSuffix("cpp_server_client__rosidl_typesupport_introspection_c");
    MessageTypeSupportPreload();

    IntPtr nativelibrary = dllLoadUtils.LoadLibrary("cpp_server_client_srv_practice_srv__rosidl_typesupport_c");
    IntPtr native_get_typesupport_ptr = dllLoadUtils.GetProcAddress(nativelibrary, "cpp_server_client__srv__PracticeSrv_Request_native_get_type_support");
    PracticeSrv_Request.native_get_typesupport = (NativeGetTypeSupportType)Marshal.GetDelegateForFunctionPointer(
      native_get_typesupport_ptr, typeof(NativeGetTypeSupportType));

    IntPtr native_create_native_message_ptr = dllLoadUtils.GetProcAddress(nativelibrary, "cpp_server_client__srv__PracticeSrv_Request_native_create_native_message");
    PracticeSrv_Request.native_create_native_message = (NativeCreateNativeMessageType)Marshal.GetDelegateForFunctionPointer(
      native_create_native_message_ptr, typeof(NativeCreateNativeMessageType));

    IntPtr native_destroy_native_message_ptr = dllLoadUtils.GetProcAddress(nativelibrary, "cpp_server_client__srv__PracticeSrv_Request_native_destroy_native_message");
    PracticeSrv_Request.native_destroy_native_message = (NativeDestroyNativeMessageType)Marshal.GetDelegateForFunctionPointer(
      native_destroy_native_message_ptr, typeof(NativeDestroyNativeMessageType));

    IntPtr native_read_field_num_vector_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "cpp_server_client__srv__PracticeSrv_Request_native_read_field_num_vector");
    PracticeSrv_Request.native_read_field_num_vector =
      (NativeReadFieldNum_vectorType)Marshal.GetDelegateForFunctionPointer(
      native_read_field_num_vector_ptr, typeof(NativeReadFieldNum_vectorType));

    IntPtr native_write_field_num_vector_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "cpp_server_client__srv__PracticeSrv_Request_native_write_field_num_vector");
    PracticeSrv_Request.native_write_field_num_vector =
      (NativeWriteFieldNum_vectorType)Marshal.GetDelegateForFunctionPointer(
      native_write_field_num_vector_ptr, typeof(NativeWriteFieldNum_vectorType));
    IntPtr native_read_field_a_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "cpp_server_client__srv__PracticeSrv_Request_native_read_field_a");
    PracticeSrv_Request.native_read_field_a =
      (NativeReadFieldAType)Marshal.GetDelegateForFunctionPointer(
      native_read_field_a_ptr, typeof(NativeReadFieldAType));

    IntPtr native_write_field_a_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "cpp_server_client__srv__PracticeSrv_Request_native_write_field_a");
    PracticeSrv_Request.native_write_field_a =
      (NativeWriteFieldAType)Marshal.GetDelegateForFunctionPointer(
      native_write_field_a_ptr, typeof(NativeWriteFieldAType));
    IntPtr native_read_field_b_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "cpp_server_client__srv__PracticeSrv_Request_native_read_field_b");
    PracticeSrv_Request.native_read_field_b =
      (NativeReadFieldBType)Marshal.GetDelegateForFunctionPointer(
      native_read_field_b_ptr, typeof(NativeReadFieldBType));

    IntPtr native_write_field_b_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "cpp_server_client__srv__PracticeSrv_Request_native_write_field_b");
    PracticeSrv_Request.native_write_field_b =
      (NativeWriteFieldBType)Marshal.GetDelegateForFunctionPointer(
      native_write_field_b_ptr, typeof(NativeWriteFieldBType));
  }

  public IntPtr TypeSupportHandle
  {
    get
    {
      return native_get_typesupport();
    }
  }

  // Handle. Create on first use. Can be set for nested classes. TODO -- access...
  public IntPtr Handle
  {
    get
    {
      if (_handle == IntPtr.Zero)
        _handle = native_create_native_message();
      return _handle;
    }
  }

  public PracticeSrv_Request()
  {
    Num_vector = new long[0];
  }

  public void ReadNativeMessage()
  {
    ReadNativeMessage(Handle);
  }

  public void ReadNativeMessage(IntPtr handle)
  {
    if (handle == IntPtr.Zero)
      throw new System.InvalidOperationException("Invalid handle for reading");
    { //TODO - (adam) this is a bit clunky. Is there a better way to marshal unsigned and bool types?
      int arraySize = 0;
      IntPtr pArr = native_read_field_num_vector(out arraySize, handle);
      Num_vector = new long[arraySize];
      long[] __Num_vector = new long[arraySize];
      int start = 0;

      Marshal.Copy(pArr, __Num_vector, start, arraySize);
      for (int i = 0; i < arraySize; ++i)
      {
        Num_vector[i] = (long)(__Num_vector[i]);
      }
    }
    A = native_read_field_a(handle);
    B = native_read_field_b(handle);
  }

  public void WriteNativeMessage()
  {
    if (_handle == IntPtr.Zero)
    { // message object reused for subsequent publishing.
      // This could be problematic if sequences sizes changed, but me handle that by checking for it in the c implementation
      _handle = native_create_native_message();
    }

    WriteNativeMessage(Handle);
  }

  // Write from CS to native handle
  public void WriteNativeMessage(IntPtr handle)
  {
    if (handle == IntPtr.Zero)
      throw new System.InvalidOperationException("Invalid handle for writing");
    {
            bool success = native_write_field_num_vector(Num_vector, Num_vector.Length, handle);
      
      if (!success)
        throw new System.InvalidOperationException("Error writing field for num_vector");
    }
    native_write_field_a(handle, A);
    native_write_field_b(handle, B);
  }

  public void Dispose()
  {
    if (!disposed)
    {
      if (_handle != IntPtr.Zero)
      {
        native_destroy_native_message(_handle);
        _handle = IntPtr.Zero;
        disposed = true;
      }
    }
  }

  ~PracticeSrv_Request()
  {
    Dispose();
  }

};  // class PracticeSrv_Request
}  // namespace srv
}  // namespace cpp_server_client




namespace cpp_server_client
{
namespace srv
{
// message class
public class PracticeSrv_Response : MessageInternals, Message
{
  private IntPtr _handle;
  private static readonly DllLoadUtils dllLoadUtils;

  public bool IsDisposed { get { return disposed; } }
  private bool disposed;

  // constant declarations

  // members
  public long Cumulative_sum { get; set; }

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate IntPtr NativeGetTypeSupportType();
  private static NativeGetTypeSupportType native_get_typesupport = null;

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate IntPtr NativeCreateNativeMessageType();
  private static NativeCreateNativeMessageType native_create_native_message = null;

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate void NativeDestroyNativeMessageType(IntPtr messageHandle);
  private static NativeDestroyNativeMessageType native_destroy_native_message = null;

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate long NativeReadFieldCumulative_sumType(
    IntPtr messageHandle);

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate void NativeWriteFieldCumulative_sumType(
    IntPtr messageHandle, long value);


  private static NativeReadFieldCumulative_sumType native_read_field_cumulative_sum = null;
  private static NativeWriteFieldCumulative_sumType native_write_field_cumulative_sum = null;

  // This is done to preload before ros2 rmw_implementation attempts to find custom message library (and fails without absolute path)
  static private void MessageTypeSupportPreload()
  {
    if (RuntimeInformation.IsOSPlatform(OSPlatform.Linux))
    { //only affects Linux since on Windows PATH can be set effectively, dynamically
        const string rmw_fastrtps = "rmw_fastrtps_cpp";
        var rmw_implementation = Environment.GetEnvironmentVariable("RMW_IMPLEMENTATION");
        if (rmw_implementation == null)
        {
          var ros_distro = Environment.GetEnvironmentVariable("ROS_DISTRO");
          if (ros_distro == "galactic")
          { // no preloads for CycloneDDS, default for galactic
            return;
          }
          rmw_implementation = rmw_fastrtps; // default for all other distros
        }

        // TODO - generalize to Connext and other implementations
        if (rmw_implementation == rmw_fastrtps)
        { // TODO - get rcl level constants, e.g. rosidl_typesupport_fastrtps_c__identifier
          // Load typesupport for fastrtps (_c depends on _cpp)
          var loadUtils = DllLoadUtilsFactory.GetDllLoadUtils();
          IntPtr messageLibraryTypesupportFastRTPS_CPP = loadUtils.LoadLibraryNoSuffix("cpp_server_client__rosidl_typesupport_fastrtps_cpp");
          IntPtr messageLibraryTypesupportFastRTPS_C = loadUtils.LoadLibraryNoSuffix("cpp_server_client__rosidl_typesupport_fastrtps_c");
      }
    }
  }

  static PracticeSrv_Response()
  {
    Ros2csLogger logger = Ros2csLogger.GetInstance();

    dllLoadUtils = DllLoadUtilsFactory.GetDllLoadUtils();
    IntPtr messageLibraryTypesupport = dllLoadUtils.LoadLibraryNoSuffix("cpp_server_client__rosidl_typesupport_c");
    IntPtr messageLibraryGenerator = dllLoadUtils.LoadLibraryNoSuffix("cpp_server_client__rosidl_generator_c");
    IntPtr messageLibraryIntro = dllLoadUtils.LoadLibraryNoSuffix("cpp_server_client__rosidl_typesupport_introspection_c");
    MessageTypeSupportPreload();

    IntPtr nativelibrary = dllLoadUtils.LoadLibrary("cpp_server_client_srv_practice_srv__rosidl_typesupport_c");
    IntPtr native_get_typesupport_ptr = dllLoadUtils.GetProcAddress(nativelibrary, "cpp_server_client__srv__PracticeSrv_Response_native_get_type_support");
    PracticeSrv_Response.native_get_typesupport = (NativeGetTypeSupportType)Marshal.GetDelegateForFunctionPointer(
      native_get_typesupport_ptr, typeof(NativeGetTypeSupportType));

    IntPtr native_create_native_message_ptr = dllLoadUtils.GetProcAddress(nativelibrary, "cpp_server_client__srv__PracticeSrv_Response_native_create_native_message");
    PracticeSrv_Response.native_create_native_message = (NativeCreateNativeMessageType)Marshal.GetDelegateForFunctionPointer(
      native_create_native_message_ptr, typeof(NativeCreateNativeMessageType));

    IntPtr native_destroy_native_message_ptr = dllLoadUtils.GetProcAddress(nativelibrary, "cpp_server_client__srv__PracticeSrv_Response_native_destroy_native_message");
    PracticeSrv_Response.native_destroy_native_message = (NativeDestroyNativeMessageType)Marshal.GetDelegateForFunctionPointer(
      native_destroy_native_message_ptr, typeof(NativeDestroyNativeMessageType));

    IntPtr native_read_field_cumulative_sum_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "cpp_server_client__srv__PracticeSrv_Response_native_read_field_cumulative_sum");
    PracticeSrv_Response.native_read_field_cumulative_sum =
      (NativeReadFieldCumulative_sumType)Marshal.GetDelegateForFunctionPointer(
      native_read_field_cumulative_sum_ptr, typeof(NativeReadFieldCumulative_sumType));

    IntPtr native_write_field_cumulative_sum_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "cpp_server_client__srv__PracticeSrv_Response_native_write_field_cumulative_sum");
    PracticeSrv_Response.native_write_field_cumulative_sum =
      (NativeWriteFieldCumulative_sumType)Marshal.GetDelegateForFunctionPointer(
      native_write_field_cumulative_sum_ptr, typeof(NativeWriteFieldCumulative_sumType));
  }

  public IntPtr TypeSupportHandle
  {
    get
    {
      return native_get_typesupport();
    }
  }

  // Handle. Create on first use. Can be set for nested classes. TODO -- access...
  public IntPtr Handle
  {
    get
    {
      if (_handle == IntPtr.Zero)
        _handle = native_create_native_message();
      return _handle;
    }
  }

  public PracticeSrv_Response()
  {
  }

  public void ReadNativeMessage()
  {
    ReadNativeMessage(Handle);
  }

  public void ReadNativeMessage(IntPtr handle)
  {
    if (handle == IntPtr.Zero)
      throw new System.InvalidOperationException("Invalid handle for reading");
    Cumulative_sum = native_read_field_cumulative_sum(handle);
  }

  public void WriteNativeMessage()
  {
    if (_handle == IntPtr.Zero)
    { // message object reused for subsequent publishing.
      // This could be problematic if sequences sizes changed, but me handle that by checking for it in the c implementation
      _handle = native_create_native_message();
    }

    WriteNativeMessage(Handle);
  }

  // Write from CS to native handle
  public void WriteNativeMessage(IntPtr handle)
  {
    if (handle == IntPtr.Zero)
      throw new System.InvalidOperationException("Invalid handle for writing");
    native_write_field_cumulative_sum(handle, Cumulative_sum);
  }

  public void Dispose()
  {
    if (!disposed)
    {
      if (_handle != IntPtr.Zero)
      {
        native_destroy_native_message(_handle);
        _handle = IntPtr.Zero;
        disposed = true;
      }
    }
  }

  ~PracticeSrv_Response()
  {
    Dispose();
  }

};  // class PracticeSrv_Response
}  // namespace srv
}  // namespace cpp_server_client

