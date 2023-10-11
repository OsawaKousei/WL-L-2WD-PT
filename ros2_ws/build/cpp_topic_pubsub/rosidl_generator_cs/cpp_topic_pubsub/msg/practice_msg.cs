// generated from rosidl_generator_cs/resource/idl.cs.em
// with input from cpp_topic_pubsub:msg/PracticeMsg.idl
// generated code does not contain a copyright notice

//TODO (adamdbrw): include depending on what is needed
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using ROS2;
using ROS2.Internal;




namespace cpp_topic_pubsub
{
namespace msg
{
// message class
public class PracticeMsg : MessageInternals, Message
{
  private IntPtr _handle;
  private static readonly DllLoadUtils dllLoadUtils;

  public bool IsDisposed { get { return disposed; } }
  private bool disposed;

  // constant declarations
  public const byte PRODUCT_TYPE_GIN = 0;
  public const byte PRODUCT_TYPE_WHISKEY = 1;
  public const byte PRODUCT_TYPE_VODKA = 2;

  // members
  public System.String Name { get; set; }
  public byte Product_type { get; set; }
  public uint Price { get; set; }

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
  private delegate IntPtr NativeReadFieldNameType(IntPtr messageHandle);

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate void NativeWriteFieldNameType(
    IntPtr messageHandle, [MarshalAs (UnmanagedType.LPStr)] string value);


  private static NativeReadFieldNameType native_read_field_name = null;
  private static NativeWriteFieldNameType native_write_field_name = null;
  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate byte NativeReadFieldProduct_typeType(
    IntPtr messageHandle);

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate void NativeWriteFieldProduct_typeType(
    IntPtr messageHandle, byte value);


  private static NativeReadFieldProduct_typeType native_read_field_product_type = null;
  private static NativeWriteFieldProduct_typeType native_write_field_product_type = null;
  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate uint NativeReadFieldPriceType(
    IntPtr messageHandle);

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate void NativeWriteFieldPriceType(
    IntPtr messageHandle, uint value);


  private static NativeReadFieldPriceType native_read_field_price = null;
  private static NativeWriteFieldPriceType native_write_field_price = null;

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
          IntPtr messageLibraryTypesupportFastRTPS_CPP = loadUtils.LoadLibraryNoSuffix("cpp_topic_pubsub__rosidl_typesupport_fastrtps_cpp");
          IntPtr messageLibraryTypesupportFastRTPS_C = loadUtils.LoadLibraryNoSuffix("cpp_topic_pubsub__rosidl_typesupport_fastrtps_c");
      }
    }
  }

  static PracticeMsg()
  {
    dllLoadUtils = DllLoadUtilsFactory.GetDllLoadUtils();
    IntPtr messageLibraryTypesupport = dllLoadUtils.LoadLibraryNoSuffix("cpp_topic_pubsub__rosidl_typesupport_c");
    IntPtr messageLibraryGenerator = dllLoadUtils.LoadLibraryNoSuffix("cpp_topic_pubsub__rosidl_generator_c");
    IntPtr messageLibraryIntro = dllLoadUtils.LoadLibraryNoSuffix("cpp_topic_pubsub__rosidl_typesupport_introspection_c");
    MessageTypeSupportPreload();

    IntPtr nativelibrary = dllLoadUtils.LoadLibrary("cpp_topic_pubsub_practice_msg__rosidl_typesupport_c");
    IntPtr native_get_typesupport_ptr = dllLoadUtils.GetProcAddress(nativelibrary, "cpp_topic_pubsub__msg__PracticeMsg_native_get_type_support");
    PracticeMsg.native_get_typesupport = (NativeGetTypeSupportType)Marshal.GetDelegateForFunctionPointer(
      native_get_typesupport_ptr, typeof(NativeGetTypeSupportType));

    IntPtr native_create_native_message_ptr = dllLoadUtils.GetProcAddress(nativelibrary, "cpp_topic_pubsub__msg__PracticeMsg_native_create_native_message");
    PracticeMsg.native_create_native_message = (NativeCreateNativeMessageType)Marshal.GetDelegateForFunctionPointer(
      native_create_native_message_ptr, typeof(NativeCreateNativeMessageType));

    IntPtr native_destroy_native_message_ptr = dllLoadUtils.GetProcAddress(nativelibrary, "cpp_topic_pubsub__msg__PracticeMsg_native_destroy_native_message");
    PracticeMsg.native_destroy_native_message = (NativeDestroyNativeMessageType)Marshal.GetDelegateForFunctionPointer(
      native_destroy_native_message_ptr, typeof(NativeDestroyNativeMessageType));

    IntPtr native_read_field_name_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "cpp_topic_pubsub__msg__PracticeMsg_native_read_field_name");
    PracticeMsg.native_read_field_name =
      (NativeReadFieldNameType)Marshal.GetDelegateForFunctionPointer(
      native_read_field_name_ptr, typeof(NativeReadFieldNameType));

    IntPtr native_write_field_name_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "cpp_topic_pubsub__msg__PracticeMsg_native_write_field_name");
    PracticeMsg.native_write_field_name =
      (NativeWriteFieldNameType)Marshal.GetDelegateForFunctionPointer(
      native_write_field_name_ptr, typeof(NativeWriteFieldNameType));
    IntPtr native_read_field_product_type_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "cpp_topic_pubsub__msg__PracticeMsg_native_read_field_product_type");
    PracticeMsg.native_read_field_product_type =
      (NativeReadFieldProduct_typeType)Marshal.GetDelegateForFunctionPointer(
      native_read_field_product_type_ptr, typeof(NativeReadFieldProduct_typeType));

    IntPtr native_write_field_product_type_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "cpp_topic_pubsub__msg__PracticeMsg_native_write_field_product_type");
    PracticeMsg.native_write_field_product_type =
      (NativeWriteFieldProduct_typeType)Marshal.GetDelegateForFunctionPointer(
      native_write_field_product_type_ptr, typeof(NativeWriteFieldProduct_typeType));
    IntPtr native_read_field_price_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "cpp_topic_pubsub__msg__PracticeMsg_native_read_field_price");
    PracticeMsg.native_read_field_price =
      (NativeReadFieldPriceType)Marshal.GetDelegateForFunctionPointer(
      native_read_field_price_ptr, typeof(NativeReadFieldPriceType));

    IntPtr native_write_field_price_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "cpp_topic_pubsub__msg__PracticeMsg_native_write_field_price");
    PracticeMsg.native_write_field_price =
      (NativeWriteFieldPriceType)Marshal.GetDelegateForFunctionPointer(
      native_write_field_price_ptr, typeof(NativeWriteFieldPriceType));
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

  public PracticeMsg()
  {
    Name = "";
  }

  public void ReadNativeMessage()
  {
    ReadNativeMessage(Handle);
  }

  public void ReadNativeMessage(IntPtr handle)
  {
    if (handle == IntPtr.Zero)
      throw new System.InvalidOperationException("Invalid handle for reading");
    {
      IntPtr pStr = native_read_field_name(handle);
      Name = Marshal.PtrToStringAnsi(pStr);
    }
    Product_type = native_read_field_product_type(handle);
    Price = native_read_field_price(handle);
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
    native_write_field_name(handle, Name);
    native_write_field_product_type(handle, Product_type);
    native_write_field_price(handle, Price);
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

  ~PracticeMsg()
  {
    Dispose();
  }

};  // class PracticeMsg
}  // namespace msg
}  // namespace cpp_topic_pubsub



