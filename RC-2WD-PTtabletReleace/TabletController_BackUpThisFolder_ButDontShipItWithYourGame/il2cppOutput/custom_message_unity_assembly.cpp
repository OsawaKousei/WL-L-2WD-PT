#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2)
	{
		void* params[2] = { &p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename R>
struct InvokerFuncInvoker0
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		R ret;
		method->invoker_method(methodPtr, method, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		R ret;
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		R ret;
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// custom_message_unity.msg.CustomUnity
struct CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// ROS2.DllLoadUtils
struct DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// custom_message_unity.msg.CustomUnity/NativeCreateNativeMessageType
struct NativeCreateNativeMessageType_t8746F32C37FFA713AF60E8F0438C4B62AA091316;
// custom_message_unity.msg.CustomUnity/NativeDestroyNativeMessageType
struct NativeDestroyNativeMessageType_t0E488A68A07F8B9459C152E6C005677D54A02F23;
// custom_message_unity.msg.CustomUnity/NativeGetTypeSupportType
struct NativeGetTypeSupportType_t9FE3EC7D24516D5686C70FEC01FA0A32EAC74C4A;
// custom_message_unity.msg.CustomUnity/NativeReadFieldF1Type
struct NativeReadFieldF1Type_tA108FB538C1788AAB6DBB08DAD512DDBF31EDE08;
// custom_message_unity.msg.CustomUnity/NativeReadFieldF2Type
struct NativeReadFieldF2Type_tA4CFF0013BD9D85AFEF7CB245210BE2924F8B553;
// custom_message_unity.msg.CustomUnity/NativeReadFieldF3Type
struct NativeReadFieldF3Type_tF9997A39F5CC701B4DEF166576D9CD2151390785;
// custom_message_unity.msg.CustomUnity/NativeWriteFieldF1Type
struct NativeWriteFieldF1Type_tCDA335A980EBE1251BD5EFBD1CC2E8DA0831DA54;
// custom_message_unity.msg.CustomUnity/NativeWriteFieldF2Type
struct NativeWriteFieldF2Type_t783B3B25BA67F4B7EA6FD91473554C1FAB058A50;
// custom_message_unity.msg.CustomUnity/NativeWriteFieldF3Type
struct NativeWriteFieldF3Type_tEE1D2408E9094608F95B0E6A13FBA8488A30A9E3;

IL2CPP_EXTERN_C RuntimeClass* CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeCreateNativeMessageType_t8746F32C37FFA713AF60E8F0438C4B62AA091316_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeDestroyNativeMessageType_t0E488A68A07F8B9459C152E6C005677D54A02F23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeGetTypeSupportType_t9FE3EC7D24516D5686C70FEC01FA0A32EAC74C4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeReadFieldF1Type_tA108FB538C1788AAB6DBB08DAD512DDBF31EDE08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeReadFieldF2Type_tA4CFF0013BD9D85AFEF7CB245210BE2924F8B553_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeReadFieldF3Type_tF9997A39F5CC701B4DEF166576D9CD2151390785_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeWriteFieldF1Type_tCDA335A980EBE1251BD5EFBD1CC2E8DA0831DA54_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeWriteFieldF2Type_t783B3B25BA67F4B7EA6FD91473554C1FAB058A50_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeWriteFieldF3Type_tEE1D2408E9094608F95B0E6A13FBA8488A30A9E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeInformation_tB2DFA85FB9251AE3A3112904C9DF06C30D1D3EAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral13447C96026CC997262C274AA18ACFA3B1468990;
IL2CPP_EXTERN_C String_t* _stringLiteral1D0D78D9B2C16E5917D872F342438583D2502048;
IL2CPP_EXTERN_C String_t* _stringLiteral270D787641839BB92A773FC55A54116F949F4E33;
IL2CPP_EXTERN_C String_t* _stringLiteral2BDD38893AE8FCF876611A7E29FC9FA54F1BDB9B;
IL2CPP_EXTERN_C String_t* _stringLiteral2E7A16C088F558E5491EDAF25E42DF8BF874F921;
IL2CPP_EXTERN_C String_t* _stringLiteral331C2AE40A11FD125142F1CB87DC691E1E798746;
IL2CPP_EXTERN_C String_t* _stringLiteral3484A397BC596DA60154D2A3DC4D09E3EE5380AC;
IL2CPP_EXTERN_C String_t* _stringLiteral3B18A3E5160ED541A2344733BA0632FE0BF744F9;
IL2CPP_EXTERN_C String_t* _stringLiteral4EE8F45436D2EE7DA10D6946CD61E2B59EB41526;
IL2CPP_EXTERN_C String_t* _stringLiteral4F0906DDE318C6A308C0586DE3F28817C8E3024D;
IL2CPP_EXTERN_C String_t* _stringLiteral678C3B47C7084740C92B7421333854EE663B743B;
IL2CPP_EXTERN_C String_t* _stringLiteral7307454868F46B14DC00B1E0426346A69E110A58;
IL2CPP_EXTERN_C String_t* _stringLiteral851E77C5E3D617450C22769CAB20D3229611D279;
IL2CPP_EXTERN_C String_t* _stringLiteral866448809BE36038B26302ADE1C91A5BA35E3310;
IL2CPP_EXTERN_C String_t* _stringLiteral8F5F0849639BDC5435ABAB9F4426874D054FDEC1;
IL2CPP_EXTERN_C String_t* _stringLiteral90624247C3ED3739D12DC1EC2993D654C73C1B19;
IL2CPP_EXTERN_C String_t* _stringLiteral9EADEAA452077B7DE7A365C36AE4032641E3EBE3;
IL2CPP_EXTERN_C String_t* _stringLiteralBA3C6C1E8B2B879CCB2C62E3DE6A752F7998703B;
IL2CPP_EXTERN_C String_t* _stringLiteralC7699638AE91904FD67E956D3E2268AD2B77CF66;
IL2CPP_EXTERN_C String_t* _stringLiteralD7D8430585AC923061167106F208BD29BDBCB85B;
IL2CPP_EXTERN_C String_t* _stringLiteralD9AF3F97404756432D9BF39C08DE870918B57A7A;
IL2CPP_EXTERN_C const RuntimeMethod* CustomUnity_ReadNativeMessage_m5063B6AF0CBD666C7ACAB897F104F4FDD08DB8F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CustomUnity_WriteNativeMessage_m4F6943496AD788BE0118D0501785789357839D0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* NativeCreateNativeMessageType_t8746F32C37FFA713AF60E8F0438C4B62AA091316_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NativeDestroyNativeMessageType_t0E488A68A07F8B9459C152E6C005677D54A02F23_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NativeGetTypeSupportType_t9FE3EC7D24516D5686C70FEC01FA0A32EAC74C4A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NativeReadFieldF1Type_tA108FB538C1788AAB6DBB08DAD512DDBF31EDE08_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NativeReadFieldF2Type_tA4CFF0013BD9D85AFEF7CB245210BE2924F8B553_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NativeReadFieldF3Type_tF9997A39F5CC701B4DEF166576D9CD2151390785_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NativeWriteFieldF1Type_tCDA335A980EBE1251BD5EFBD1CC2E8DA0831DA54_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NativeWriteFieldF2Type_t783B3B25BA67F4B7EA6FD91473554C1FAB058A50_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NativeWriteFieldF3Type_tEE1D2408E9094608F95B0E6A13FBA8488A30A9E3_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFEE6E2BF3F4CE028CA4F83449BB497DB7E0CF045 
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.Runtime.InteropServices.OSPlatform
struct OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9 
{
	// System.String System.Runtime.InteropServices.OSPlatform::_osPlatform
	String_t* ____osPlatform_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.InteropServices.OSPlatform
struct OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9_marshaled_pinvoke
{
	char* ____osPlatform_0;
};
// Native definition for COM marshalling of System.Runtime.InteropServices.OSPlatform
struct OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9_marshaled_com
{
	Il2CppChar* ____osPlatform_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// custom_message_unity.msg.CustomUnity
struct CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F  : public RuntimeObject
{
	// System.IntPtr custom_message_unity.msg.CustomUnity::_handle
	intptr_t ____handle_0;
	// System.Boolean custom_message_unity.msg.CustomUnity::disposed
	bool ___disposed_2;
	// System.Double custom_message_unity.msg.CustomUnity::<F1>k__BackingField
	double ___U3CF1U3Ek__BackingField_3;
	// System.Double custom_message_unity.msg.CustomUnity::<F2>k__BackingField
	double ___U3CF2U3Ek__BackingField_4;
	// System.Double custom_message_unity.msg.CustomUnity::<F3>k__BackingField
	double ___U3CF3U3Ek__BackingField_5;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	intptr_t ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// custom_message_unity.msg.CustomUnity/NativeCreateNativeMessageType
struct NativeCreateNativeMessageType_t8746F32C37FFA713AF60E8F0438C4B62AA091316  : public MulticastDelegate_t
{
};

// custom_message_unity.msg.CustomUnity/NativeDestroyNativeMessageType
struct NativeDestroyNativeMessageType_t0E488A68A07F8B9459C152E6C005677D54A02F23  : public MulticastDelegate_t
{
};

// custom_message_unity.msg.CustomUnity/NativeGetTypeSupportType
struct NativeGetTypeSupportType_t9FE3EC7D24516D5686C70FEC01FA0A32EAC74C4A  : public MulticastDelegate_t
{
};

// custom_message_unity.msg.CustomUnity/NativeReadFieldF1Type
struct NativeReadFieldF1Type_tA108FB538C1788AAB6DBB08DAD512DDBF31EDE08  : public MulticastDelegate_t
{
};

// custom_message_unity.msg.CustomUnity/NativeReadFieldF2Type
struct NativeReadFieldF2Type_tA4CFF0013BD9D85AFEF7CB245210BE2924F8B553  : public MulticastDelegate_t
{
};

// custom_message_unity.msg.CustomUnity/NativeReadFieldF3Type
struct NativeReadFieldF3Type_tF9997A39F5CC701B4DEF166576D9CD2151390785  : public MulticastDelegate_t
{
};

// custom_message_unity.msg.CustomUnity/NativeWriteFieldF1Type
struct NativeWriteFieldF1Type_tCDA335A980EBE1251BD5EFBD1CC2E8DA0831DA54  : public MulticastDelegate_t
{
};

// custom_message_unity.msg.CustomUnity/NativeWriteFieldF2Type
struct NativeWriteFieldF2Type_t783B3B25BA67F4B7EA6FD91473554C1FAB058A50  : public MulticastDelegate_t
{
};

// custom_message_unity.msg.CustomUnity/NativeWriteFieldF3Type
struct NativeWriteFieldF3Type_tEE1D2408E9094608F95B0E6A13FBA8488A30A9E3  : public MulticastDelegate_t
{
};

// <Module>

// <Module>

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Double

// System.Double

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Runtime.InteropServices.OSPlatform
struct OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9_StaticFields
{
	// System.Runtime.InteropServices.OSPlatform System.Runtime.InteropServices.OSPlatform::<Linux>k__BackingField
	OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9 ___U3CLinuxU3Ek__BackingField_1;
	// System.Runtime.InteropServices.OSPlatform System.Runtime.InteropServices.OSPlatform::<OSX>k__BackingField
	OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9 ___U3COSXU3Ek__BackingField_2;
	// System.Runtime.InteropServices.OSPlatform System.Runtime.InteropServices.OSPlatform::<Windows>k__BackingField
	OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9 ___U3CWindowsU3Ek__BackingField_3;
};

// System.Runtime.InteropServices.OSPlatform

// System.Void

// System.Void

// custom_message_unity.msg.CustomUnity
struct CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_StaticFields
{
	// ROS2.DllLoadUtils custom_message_unity.msg.CustomUnity::dllLoadUtils
	RuntimeObject* ___dllLoadUtils_1;
	// custom_message_unity.msg.CustomUnity/NativeGetTypeSupportType custom_message_unity.msg.CustomUnity::native_get_typesupport
	NativeGetTypeSupportType_t9FE3EC7D24516D5686C70FEC01FA0A32EAC74C4A* ___native_get_typesupport_6;
	// custom_message_unity.msg.CustomUnity/NativeCreateNativeMessageType custom_message_unity.msg.CustomUnity::native_create_native_message
	NativeCreateNativeMessageType_t8746F32C37FFA713AF60E8F0438C4B62AA091316* ___native_create_native_message_7;
	// custom_message_unity.msg.CustomUnity/NativeDestroyNativeMessageType custom_message_unity.msg.CustomUnity::native_destroy_native_message
	NativeDestroyNativeMessageType_t0E488A68A07F8B9459C152E6C005677D54A02F23* ___native_destroy_native_message_8;
	// custom_message_unity.msg.CustomUnity/NativeReadFieldF1Type custom_message_unity.msg.CustomUnity::native_read_field_f1
	NativeReadFieldF1Type_tA108FB538C1788AAB6DBB08DAD512DDBF31EDE08* ___native_read_field_f1_9;
	// custom_message_unity.msg.CustomUnity/NativeWriteFieldF1Type custom_message_unity.msg.CustomUnity::native_write_field_f1
	NativeWriteFieldF1Type_tCDA335A980EBE1251BD5EFBD1CC2E8DA0831DA54* ___native_write_field_f1_10;
	// custom_message_unity.msg.CustomUnity/NativeReadFieldF2Type custom_message_unity.msg.CustomUnity::native_read_field_f2
	NativeReadFieldF2Type_tA4CFF0013BD9D85AFEF7CB245210BE2924F8B553* ___native_read_field_f2_11;
	// custom_message_unity.msg.CustomUnity/NativeWriteFieldF2Type custom_message_unity.msg.CustomUnity::native_write_field_f2
	NativeWriteFieldF2Type_t783B3B25BA67F4B7EA6FD91473554C1FAB058A50* ___native_write_field_f2_12;
	// custom_message_unity.msg.CustomUnity/NativeReadFieldF3Type custom_message_unity.msg.CustomUnity::native_read_field_f3
	NativeReadFieldF3Type_tF9997A39F5CC701B4DEF166576D9CD2151390785* ___native_read_field_f3_13;
	// custom_message_unity.msg.CustomUnity/NativeWriteFieldF3Type custom_message_unity.msg.CustomUnity::native_write_field_f3
	NativeWriteFieldF3Type_tEE1D2408E9094608F95B0E6A13FBA8488A30A9E3* ___native_write_field_f3_14;
};

// custom_message_unity.msg.CustomUnity

// System.Delegate

// System.Delegate

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// System.AsyncCallback

// System.AsyncCallback

// System.InvalidOperationException

// System.InvalidOperationException

// custom_message_unity.msg.CustomUnity/NativeCreateNativeMessageType

// custom_message_unity.msg.CustomUnity/NativeCreateNativeMessageType

// custom_message_unity.msg.CustomUnity/NativeDestroyNativeMessageType

// custom_message_unity.msg.CustomUnity/NativeDestroyNativeMessageType

// custom_message_unity.msg.CustomUnity/NativeGetTypeSupportType

// custom_message_unity.msg.CustomUnity/NativeGetTypeSupportType

// custom_message_unity.msg.CustomUnity/NativeReadFieldF1Type

// custom_message_unity.msg.CustomUnity/NativeReadFieldF1Type

// custom_message_unity.msg.CustomUnity/NativeReadFieldF2Type

// custom_message_unity.msg.CustomUnity/NativeReadFieldF2Type

// custom_message_unity.msg.CustomUnity/NativeReadFieldF3Type

// custom_message_unity.msg.CustomUnity/NativeReadFieldF3Type

// custom_message_unity.msg.CustomUnity/NativeWriteFieldF1Type

// custom_message_unity.msg.CustomUnity/NativeWriteFieldF1Type

// custom_message_unity.msg.CustomUnity/NativeWriteFieldF2Type

// custom_message_unity.msg.CustomUnity/NativeWriteFieldF2Type

// custom_message_unity.msg.CustomUnity/NativeWriteFieldF3Type

// custom_message_unity.msg.CustomUnity/NativeWriteFieldF3Type
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};



// System.Runtime.InteropServices.OSPlatform System.Runtime.InteropServices.OSPlatform::get_Linux()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9 OSPlatform_get_Linux_m8A7C3AB166C3C5441333F957D76FFB56FE0E7185_inline (const RuntimeMethod* method) ;
// System.Boolean System.Runtime.InteropServices.RuntimeInformation::IsOSPlatform(System.Runtime.InteropServices.OSPlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeInformation_IsOSPlatform_m848A0E9A227256C42AE4053143A57B6E1F4CD6E0 (OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9 ___0_osPlatform, const RuntimeMethod* method) ;
// System.String System.Environment::GetEnvironmentVariable(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_GetEnvironmentVariable_mAF8CC6EC1CB916789ABB16A02C032F89E508C21A (String_t* ___0_variable, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// ROS2.DllLoadUtils ROS2.DllLoadUtilsFactory::GetDllLoadUtils()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DllLoadUtilsFactory_GetDllLoadUtils_m8EB2D6E40DBF00ED8E25114CAABFFFCF16286775 (const RuntimeMethod* method) ;
// System.Void custom_message_unity.msg.CustomUnity::MessageTypeSupportPreload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomUnity_MessageTypeSupportPreload_m7B43AF328AA2C467E60E3040819DF61030538930 (const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Delegate System.Runtime.InteropServices.Marshal::GetDelegateForFunctionPointer(System.IntPtr,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304 (intptr_t ___0_ptr, Type_t* ___1_t, const RuntimeMethod* method) ;
// System.IntPtr custom_message_unity.msg.CustomUnity/NativeGetTypeSupportType::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t NativeGetTypeSupportType_Invoke_mFFA010E806AD75E3EC8936F5239E6921ECCBE422_inline (NativeGetTypeSupportType_t9FE3EC7D24516D5686C70FEC01FA0A32EAC74C4A* __this, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271 (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.IntPtr custom_message_unity.msg.CustomUnity/NativeCreateNativeMessageType::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t NativeCreateNativeMessageType_Invoke_m06A486EFBB4B19A9FD0E7FBA7776F14D489F3B3D_inline (NativeCreateNativeMessageType_t8746F32C37FFA713AF60E8F0438C4B62AA091316* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.IntPtr custom_message_unity.msg.CustomUnity::get_Handle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CustomUnity_get_Handle_m1921A6D7C1099F6CB38250103A0B083D0FB79B52 (CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F* __this, const RuntimeMethod* method) ;
// System.Void custom_message_unity.msg.CustomUnity::ReadNativeMessage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomUnity_ReadNativeMessage_m5063B6AF0CBD666C7ACAB897F104F4FDD08DB8F6 (CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F* __this, intptr_t ___0_handle, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Double custom_message_unity.msg.CustomUnity/NativeReadFieldF1Type::Invoke(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double NativeReadFieldF1Type_Invoke_m1CC34BC69EFCAB5EDB993705D2DA6375667216C4_inline (NativeReadFieldF1Type_tA108FB538C1788AAB6DBB08DAD512DDBF31EDE08* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method) ;
// System.Void custom_message_unity.msg.CustomUnity::set_F1(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CustomUnity_set_F1_mD471BC123EAC662B5F95BB01637C2016D7D6B37A_inline (CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F* __this, double ___0_value, const RuntimeMethod* method) ;
// System.Double custom_message_unity.msg.CustomUnity/NativeReadFieldF2Type::Invoke(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double NativeReadFieldF2Type_Invoke_m0443256B8712CB5D497202F16A3C5049175F20BB_inline (NativeReadFieldF2Type_tA4CFF0013BD9D85AFEF7CB245210BE2924F8B553* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method) ;
// System.Void custom_message_unity.msg.CustomUnity::set_F2(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CustomUnity_set_F2_mE74F737C7067D851F1DF30E80B03B4240D15D9AD_inline (CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F* __this, double ___0_value, const RuntimeMethod* method) ;
// System.Double custom_message_unity.msg.CustomUnity/NativeReadFieldF3Type::Invoke(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double NativeReadFieldF3Type_Invoke_m79466ADD03A61C4FE1A557D5836647C582281351_inline (NativeReadFieldF3Type_tF9997A39F5CC701B4DEF166576D9CD2151390785* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method) ;
// System.Void custom_message_unity.msg.CustomUnity::set_F3(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CustomUnity_set_F3_m6A4CD01CB4F0AAE295D8085DC73754DD07ED5D30_inline (CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F* __this, double ___0_value, const RuntimeMethod* method) ;
// System.Void custom_message_unity.msg.CustomUnity::WriteNativeMessage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomUnity_WriteNativeMessage_m4F6943496AD788BE0118D0501785789357839D0C (CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F* __this, intptr_t ___0_handle, const RuntimeMethod* method) ;
// System.Double custom_message_unity.msg.CustomUnity::get_F1()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double CustomUnity_get_F1_m74FE6BEA142B3E14E948866CADB76BC3E28939FE_inline (CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F* __this, const RuntimeMethod* method) ;
// System.Void custom_message_unity.msg.CustomUnity/NativeWriteFieldF1Type::Invoke(System.IntPtr,System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeWriteFieldF1Type_Invoke_m0453577595DFF2E6376BE0E5192F299A2A5375BC_inline (NativeWriteFieldF1Type_tCDA335A980EBE1251BD5EFBD1CC2E8DA0831DA54* __this, intptr_t ___0_messageHandle, double ___1_value, const RuntimeMethod* method) ;
// System.Double custom_message_unity.msg.CustomUnity::get_F2()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double CustomUnity_get_F2_m93E6D4F254AED588EB10DAEFA31001FA9F3A9DA7_inline (CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F* __this, const RuntimeMethod* method) ;
// System.Void custom_message_unity.msg.CustomUnity/NativeWriteFieldF2Type::Invoke(System.IntPtr,System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeWriteFieldF2Type_Invoke_m13404B5A3D3B3020C149B7B65CDE3FC80ECF3536_inline (NativeWriteFieldF2Type_t783B3B25BA67F4B7EA6FD91473554C1FAB058A50* __this, intptr_t ___0_messageHandle, double ___1_value, const RuntimeMethod* method) ;
// System.Double custom_message_unity.msg.CustomUnity::get_F3()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double CustomUnity_get_F3_m2702E5D7D8EFA880894CDB054379DED39714BD4F_inline (CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F* __this, const RuntimeMethod* method) ;
// System.Void custom_message_unity.msg.CustomUnity/NativeWriteFieldF3Type::Invoke(System.IntPtr,System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeWriteFieldF3Type_Invoke_m389432F2E0E9BE07B9351D721725B42EB8DBB28C_inline (NativeWriteFieldF3Type_tEE1D2408E9094608F95B0E6A13FBA8488A30A9E3* __this, intptr_t ___0_messageHandle, double ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.Void custom_message_unity.msg.CustomUnity/NativeDestroyNativeMessageType::Invoke(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeDestroyNativeMessageType_Invoke_m4ED592E92F4DF18ECE0CA5062AC5A15E58B5CB8A_inline (NativeDestroyNativeMessageType_t0E488A68A07F8B9459C152E6C005677D54A02F23* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void custom_message_unity.msg.CustomUnity::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomUnity_Dispose_m953D2227D16706FDA44F9F2CD0CF65BA1EABA4ED (CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean custom_message_unity.msg.CustomUnity::get_IsDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CustomUnity_get_IsDisposed_m19446C68B0C929CCBC5ECB318B43022F730568F7 (CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___disposed_2;
		return L_0;
	}
}
// System.Double custom_message_unity.msg.CustomUnity::get_F1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double CustomUnity_get_F1_m74FE6BEA142B3E14E948866CADB76BC3E28939FE (CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3CF1U3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void custom_message_unity.msg.CustomUnity::set_F1(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomUnity_set_F1_mD471BC123EAC662B5F95BB01637C2016D7D6B37A (CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		double L_0 = ___0_value;
		__this->___U3CF1U3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Double custom_message_unity.msg.CustomUnity::get_F2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double CustomUnity_get_F2_m93E6D4F254AED588EB10DAEFA31001FA9F3A9DA7 (CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3CF2U3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void custom_message_unity.msg.CustomUnity::set_F2(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomUnity_set_F2_mE74F737C7067D851F1DF30E80B03B4240D15D9AD (CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		double L_0 = ___0_value;
		__this->___U3CF2U3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Double custom_message_unity.msg.CustomUnity::get_F3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double CustomUnity_get_F3_m2702E5D7D8EFA880894CDB054379DED39714BD4F (CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3CF3U3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void custom_message_unity.msg.CustomUnity::set_F3(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomUnity_set_F3_m6A4CD01CB4F0AAE295D8085DC73754DD07ED5D30 (CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		double L_0 = ___0_value;
		__this->___U3CF3U3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Void custom_message_unity.msg.CustomUnity::MessageTypeSupportPreload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomUnity_MessageTypeSupportPreload_m7B43AF328AA2C467E60E3040819DF61030538930 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeInformation_tB2DFA85FB9251AE3A3112904C9DF06C30D1D3EAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral270D787641839BB92A773FC55A54116F949F4E33);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral331C2AE40A11FD125142F1CB87DC691E1E798746);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B18A3E5160ED541A2344733BA0632FE0BF744F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EADEAA452077B7DE7A365C36AE4032641E3EBE3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7699638AE91904FD67E956D3E2268AD2B77CF66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7D8430585AC923061167106F208BD29BDBCB85B);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9_il2cpp_TypeInfo_var);
		OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9 L_0;
		L_0 = OSPlatform_get_Linux_m8A7C3AB166C3C5441333F957D76FFB56FE0E7185_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(RuntimeInformation_tB2DFA85FB9251AE3A3112904C9DF06C30D1D3EAF_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = RuntimeInformation_IsOSPlatform_m848A0E9A227256C42AE4053143A57B6E1F4CD6E0(L_0, NULL);
		if (!L_1)
		{
			goto IL_0060;
		}
	}
	{
		String_t* L_2;
		L_2 = Environment_GetEnvironmentVariable_mAF8CC6EC1CB916789ABB16A02C032F89E508C21A(_stringLiteral3B18A3E5160ED541A2344733BA0632FE0BF744F9, NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		if (L_3)
		{
			goto IL_0037;
		}
	}
	{
		String_t* L_4;
		L_4 = Environment_GetEnvironmentVariable_mAF8CC6EC1CB916789ABB16A02C032F89E508C21A(_stringLiteral331C2AE40A11FD125142F1CB87DC691E1E798746, NULL);
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, _stringLiteralD7D8430585AC923061167106F208BD29BDBCB85B, NULL);
		if (!L_5)
		{
			goto IL_0031;
		}
	}
	{
		return;
	}

IL_0031:
	{
		V_0 = _stringLiteralC7699638AE91904FD67E956D3E2268AD2B77CF66;
	}

IL_0037:
	{
		String_t* L_6 = V_0;
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, _stringLiteralC7699638AE91904FD67E956D3E2268AD2B77CF66, NULL);
		if (!L_7)
		{
			goto IL_0060;
		}
	}
	{
		RuntimeObject* L_8;
		L_8 = DllLoadUtilsFactory_GetDllLoadUtils_m8EB2D6E40DBF00ED8E25114CAABFFFCF16286775(NULL);
		RuntimeObject* L_9 = L_8;
		NullCheck(L_9);
		intptr_t L_10;
		L_10 = InterfaceFuncInvoker1< intptr_t, String_t* >::Invoke(1 /* System.IntPtr ROS2.DllLoadUtils::LoadLibraryNoSuffix(System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_9, _stringLiteral270D787641839BB92A773FC55A54116F949F4E33);
		NullCheck(L_9);
		intptr_t L_11;
		L_11 = InterfaceFuncInvoker1< intptr_t, String_t* >::Invoke(1 /* System.IntPtr ROS2.DllLoadUtils::LoadLibraryNoSuffix(System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_9, _stringLiteral9EADEAA452077B7DE7A365C36AE4032641E3EBE3);
	}

IL_0060:
	{
		return;
	}
}
// System.Void custom_message_unity.msg.CustomUnity::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomUnity__cctor_m6D71A33CC4508422842D5F32F526A9A73DC03CF0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeCreateNativeMessageType_t8746F32C37FFA713AF60E8F0438C4B62AA091316_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeCreateNativeMessageType_t8746F32C37FFA713AF60E8F0438C4B62AA091316_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeDestroyNativeMessageType_t0E488A68A07F8B9459C152E6C005677D54A02F23_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeDestroyNativeMessageType_t0E488A68A07F8B9459C152E6C005677D54A02F23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGetTypeSupportType_t9FE3EC7D24516D5686C70FEC01FA0A32EAC74C4A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGetTypeSupportType_t9FE3EC7D24516D5686C70FEC01FA0A32EAC74C4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeReadFieldF1Type_tA108FB538C1788AAB6DBB08DAD512DDBF31EDE08_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeReadFieldF1Type_tA108FB538C1788AAB6DBB08DAD512DDBF31EDE08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeReadFieldF2Type_tA4CFF0013BD9D85AFEF7CB245210BE2924F8B553_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeReadFieldF2Type_tA4CFF0013BD9D85AFEF7CB245210BE2924F8B553_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeReadFieldF3Type_tF9997A39F5CC701B4DEF166576D9CD2151390785_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeReadFieldF3Type_tF9997A39F5CC701B4DEF166576D9CD2151390785_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeWriteFieldF1Type_tCDA335A980EBE1251BD5EFBD1CC2E8DA0831DA54_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeWriteFieldF1Type_tCDA335A980EBE1251BD5EFBD1CC2E8DA0831DA54_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeWriteFieldF2Type_t783B3B25BA67F4B7EA6FD91473554C1FAB058A50_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeWriteFieldF2Type_t783B3B25BA67F4B7EA6FD91473554C1FAB058A50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeWriteFieldF3Type_tEE1D2408E9094608F95B0E6A13FBA8488A30A9E3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeWriteFieldF3Type_tEE1D2408E9094608F95B0E6A13FBA8488A30A9E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13447C96026CC997262C274AA18ACFA3B1468990);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D0D78D9B2C16E5917D872F342438583D2502048);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BDD38893AE8FCF876611A7E29FC9FA54F1BDB9B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E7A16C088F558E5491EDAF25E42DF8BF874F921);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3484A397BC596DA60154D2A3DC4D09E3EE5380AC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4EE8F45436D2EE7DA10D6946CD61E2B59EB41526);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral678C3B47C7084740C92B7421333854EE663B743B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7307454868F46B14DC00B1E0426346A69E110A58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral851E77C5E3D617450C22769CAB20D3229611D279);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral866448809BE36038B26302ADE1C91A5BA35E3310);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F5F0849639BDC5435ABAB9F4426874D054FDEC1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90624247C3ED3739D12DC1EC2993D654C73C1B19);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA3C6C1E8B2B879CCB2C62E3DE6A752F7998703B);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0;
		L_0 = DllLoadUtilsFactory_GetDllLoadUtils_m8EB2D6E40DBF00ED8E25114CAABFFFCF16286775(NULL);
		((CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_StaticFields*)il2cpp_codegen_static_fields_for(CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_il2cpp_TypeInfo_var))->___dllLoadUtils_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_StaticFields*)il2cpp_codegen_static_fields_for(CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_il2cpp_TypeInfo_var))->___dllLoadUtils_1), (void*)L_0);
		RuntimeObject* L_1 = ((CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_StaticFields*)il2cpp_codegen_static_fields_for(CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_il2cpp_TypeInfo_var))->___dllLoadUtils_1;
		NullCheck(L_1);
		intptr_t L_2;
		L_2 = InterfaceFuncInvoker1< intptr_t, String_t* >::Invoke(1 /* System.IntPtr ROS2.DllLoadUtils::LoadLibraryNoSuffix(System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_1, _stringLiteral1D0D78D9B2C16E5917D872F342438583D2502048);
		RuntimeObject* L_3 = ((CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_StaticFields*)il2cpp_codegen_static_fields_for(CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_il2cpp_TypeInfo_var))->___dllLoadUtils_1;
		NullCheck(L_3);
		intptr_t L_4;
		L_4 = InterfaceFuncInvoker1< intptr_t, String_t* >::Invoke(1 /* System.IntPtr ROS2.DllLoadUtils::LoadLibraryNoSuffix(System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_3, _stringLiteral3484A397BC596DA60154D2A3DC4D09E3EE5380AC);
		RuntimeObject* L_5 = ((CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_StaticFields*)il2cpp_codegen_static_fields_for(CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_il2cpp_TypeInfo_var))->___dllLoadUtils_1;
		NullCheck(L_5);
		intptr_t L_6;
		L_6 = InterfaceFuncInvoker1< intptr_t, String_t* >::Invoke(1 /* System.IntPtr ROS2.DllLoadUtils::LoadLibraryNoSuffix(System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_5, _stringLiteralBA3C6C1E8B2B879CCB2C62E3DE6A752F7998703B);
		CustomUnity_MessageTypeSupportPreload_m7B43AF328AA2C467E60E3040819DF61030538930(NULL);
		RuntimeObject* L_7 = ((CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_StaticFields*)il2cpp_codegen_static_fields_for(CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_il2cpp_TypeInfo_var))->___dllLoadUtils_1;
		NullCheck(L_7);
		intptr_t L_8;
		L_8 = InterfaceFuncInvoker1< intptr_t, String_t* >::Invoke(0 /* System.IntPtr ROS2.DllLoadUtils::LoadLibrary(System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_7, _stringLiteral8F5F0849639BDC5435ABAB9F4426874D054FDEC1);
		V_0 = L_8;
		RuntimeObject* L_9 = ((CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_StaticFields*)il2cpp_codegen_static_fields_for(CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_il2cpp_TypeInfo_var))->___dllLoadUtils_1;
		intptr_t L_10 = V_0;
		NullCheck(L_9);
		intptr_t L_11;
		L_11 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_9, L_10, _stringLiteral678C3B47C7084740C92B7421333854EE663B743B);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (NativeGetTypeSupportType_t9FE3EC7D24516D5686C70FEC01FA0A32EAC74C4A_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Delegate_t* L_14;
		L_14 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_11, L_13, NULL);
		((CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_StaticFields*)il2cpp_codegen_static_fields_for(CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_il2cpp_TypeInfo_var))->___native_get_typesupport_6 = ((NativeGetTypeSupportType_t9FE3EC7D24516D5686C70FEC01FA0A32EAC74C4A*)CastclassSealed((RuntimeObject*)L_14, NativeGetTypeSupportType_t9FE3EC7D24516D5686C70FEC01FA0A32EAC74C4A_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_StaticFields*)il2cpp_codegen_static_fields_for(CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_il2cpp_TypeInfo_var))->___native_get_typesupport_6), (void*)((NativeGetTypeSupportType_t9FE3EC7D24516D5686C70FEC01FA0A32EAC74C4A*)CastclassSealed((RuntimeObject*)L_14, NativeGetTypeSupportType_t9FE3EC7D24516D5686C70FEC01FA0A32EAC74C4A_il2cpp_TypeInfo_var)));
		RuntimeObject* L_15 = ((CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_StaticFields*)il2cpp_codegen_static_fields_for(CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_il2cpp_TypeInfo_var))->___dllLoadUtils_1;
		intptr_t L_16 = V_0;
		NullCheck(L_15);
		intptr_t L_17;
		L_17 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_15, L_16, _stringLiteral866448809BE36038B26302ADE1C91A5BA35E3310);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (NativeCreateNativeMessageType_t8746F32C37FFA713AF60E8F0438C4B62AA091316_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		Delegate_t* L_20;
		L_20 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_17, L_19, NULL);
		((CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_StaticFields*)il2cpp_codegen_static_fields_for(CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_il2cpp_TypeInfo_var))->___native_create_native_message_7 = ((NativeCreateNativeMessageType_t8746F32C37FFA713AF60E8F0438C4B62AA091316*)CastclassSealed((RuntimeObject*)L_20, NativeCreateNativeMessageType_t8746F32C37FFA713AF60E8F0438C4B62AA091316_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_StaticFields*)il2cpp_codegen_static_fields_for(CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_il2cpp_TypeInfo_var))->___native_create_native_message_7), (void*)((NativeCreateNativeMessageType_t8746F32C37FFA713AF60E8F0438C4B62AA091316*)CastclassSealed((RuntimeObject*)L_20, NativeCreateNativeMessageType_t8746F32C37FFA713AF60E8F0438C4B62AA091316_il2cpp_TypeInfo_var)));
		RuntimeObject* L_21 = ((CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_StaticFields*)il2cpp_codegen_static_fields_for(CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_il2cpp_TypeInfo_var))->___dllLoadUtils_1;
		intptr_t L_22 = V_0;
		NullCheck(L_21);
		intptr_t L_23;
		L_23 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_21, L_22, _stringLiteral4EE8F45436D2EE7DA10D6946CD61E2B59EB41526);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (NativeDestroyNativeMessageType_t0E488A68A07F8B9459C152E6C005677D54A02F23_0_0_0_var) };
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		Delegate_t* L_26;
		L_26 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_23, L_25, NULL);
		((CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_StaticFields*)il2cpp_codegen_static_fields_for(CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_il2cpp_TypeInfo_var))->___native_destroy_native_message_8 = ((NativeDestroyNativeMessageType_t0E488A68A07F8B9459C152E6C005677D54A02F23*)CastclassSealed((RuntimeObject*)L_26, NativeDestroyNativeMessageType_t0E488A68A07F8B9459C152E6C005677D54A02F23_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_StaticFields*)il2cpp_codegen_static_fields_for(CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_il2cpp_TypeInfo_var))->___native_destroy_native_message_8), (void*)((NativeDestroyNativeMessageType_t0E488A68A07F8B9459C152E6C005677D54A02F23*)CastclassSealed((RuntimeObject*)L_26, NativeDestroyNativeMessageType_t0E488A68A07F8B9459C152E6C005677D54A02F23_il2cpp_TypeInfo_var)));
		RuntimeObject* L_27 = ((CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_StaticFields*)il2cpp_codegen_static_fields_for(CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_il2cpp_TypeInfo_var))->___dllLoadUtils_1;
		intptr_t L_28 = V_0;
		NullCheck(L_27);
		intptr_t L_29;
		L_29 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_27, L_28, _stringLiteral13447C96026CC997262C274AA18ACFA3B1468990);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (NativeReadFieldF1Type_tA108FB538C1788AAB6DBB08DAD512DDBF31EDE08_0_0_0_var) };
		Type_t* L_31;
		L_31 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_30, NULL);
		Delegate_t* L_32;
		L_32 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_29, L_31, NULL);
		((CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_StaticFields*)il2cpp_codegen_static_fields_for(CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_il2cpp_TypeInfo_var))->___native_read_field_f1_9 = ((NativeReadFieldF1Type_tA108FB538C1788AAB6DBB08DAD512DDBF31EDE08*)CastclassSealed((RuntimeObject*)L_32, NativeReadFieldF1Type_tA108FB538C1788AAB6DBB08DAD512DDBF31EDE08_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_StaticFields*)il2cpp_codegen_static_fields_for(CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_il2cpp_TypeInfo_var))->___native_read_field_f1_9), (void*)((NativeReadFieldF1Type_tA108FB538C1788AAB6DBB08DAD512DDBF31EDE08*)CastclassSealed((RuntimeObject*)L_32, NativeReadFieldF1Type_tA108FB538C1788AAB6DBB08DAD512DDBF31EDE08_il2cpp_TypeInfo_var)));
		RuntimeObject* L_33 = ((CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_StaticFields*)il2cpp_codegen_static_fields_for(CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_il2cpp_TypeInfo_var))->___dllLoadUtils_1;
		intptr_t L_34 = V_0;
		NullCheck(L_33);
		intptr_t L_35;
		L_35 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_33, L_34, _stringLiteral2E7A16C088F558E5491EDAF25E42DF8BF874F921);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_36 = { reinterpret_cast<intptr_t> (NativeWriteFieldF1Type_tCDA335A980EBE1251BD5EFBD1CC2E8DA0831DA54_0_0_0_var) };
		Type_t* L_37;
		L_37 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_36, NULL);
		Delegate_t* L_38;
		L_38 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_35, L_37, NULL);
		((CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_StaticFields*)il2cpp_codegen_static_fields_for(CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_il2cpp_TypeInfo_var))->___native_write_field_f1_10 = ((NativeWriteFieldF1Type_tCDA335A980EBE1251BD5EFBD1CC2E8DA0831DA54*)CastclassSealed((RuntimeObject*)L_38, NativeWriteFieldF1Type_tCDA335A980EBE1251BD5EFBD1CC2E8DA0831DA54_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_StaticFields*)il2cpp_codegen_static_fields_for(CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_il2cpp_TypeInfo_var))->___native_write_field_f1_10), (void*)((NativeWriteFieldF1Type_tCDA335A980EBE1251BD5EFBD1CC2E8DA0831DA54*)CastclassSealed((RuntimeObject*)L_38, NativeWriteFieldF1Type_tCDA335A980EBE1251BD5EFBD1CC2E8DA0831DA54_il2cpp_TypeInfo_var)));
		RuntimeObject* L_39 = ((CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_StaticFields*)il2cpp_codegen_static_fields_for(CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_il2cpp_TypeInfo_var))->___dllLoadUtils_1;
		intptr_t L_40 = V_0;
		NullCheck(L_39);
		intptr_t L_41;
		L_41 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_39, L_40, _stringLiteral851E77C5E3D617450C22769CAB20D3229611D279);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (NativeReadFieldF2Type_tA4CFF0013BD9D85AFEF7CB245210BE2924F8B553_0_0_0_var) };
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
		Delegate_t* L_44;
		L_44 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_41, L_43, NULL);
		((CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_StaticFields*)il2cpp_codegen_static_fields_for(CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_il2cpp_TypeInfo_var))->___native_read_field_f2_11 = ((NativeReadFieldF2Type_tA4CFF0013BD9D85AFEF7CB245210BE2924F8B553*)CastclassSealed((RuntimeObject*)L_44, NativeReadFieldF2Type_tA4CFF0013BD9D85AFEF7CB245210BE2924F8B553_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_StaticFields*)il2cpp_codegen_static_fields_for(CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_il2cpp_TypeInfo_var))->___native_read_field_f2_11), (void*)((NativeReadFieldF2Type_tA4CFF0013BD9D85AFEF7CB245210BE2924F8B553*)CastclassSealed((RuntimeObject*)L_44, NativeReadFieldF2Type_tA4CFF0013BD9D85AFEF7CB245210BE2924F8B553_il2cpp_TypeInfo_var)));
		RuntimeObject* L_45 = ((CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_StaticFields*)il2cpp_codegen_static_fields_for(CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_il2cpp_TypeInfo_var))->___dllLoadUtils_1;
		intptr_t L_46 = V_0;
		NullCheck(L_45);
		intptr_t L_47;
		L_47 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_45, L_46, _stringLiteral2BDD38893AE8FCF876611A7E29FC9FA54F1BDB9B);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_48 = { reinterpret_cast<intptr_t> (NativeWriteFieldF2Type_t783B3B25BA67F4B7EA6FD91473554C1FAB058A50_0_0_0_var) };
		Type_t* L_49;
		L_49 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_48, NULL);
		Delegate_t* L_50;
		L_50 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_47, L_49, NULL);
		((CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_StaticFields*)il2cpp_codegen_static_fields_for(CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_il2cpp_TypeInfo_var))->___native_write_field_f2_12 = ((NativeWriteFieldF2Type_t783B3B25BA67F4B7EA6FD91473554C1FAB058A50*)CastclassSealed((RuntimeObject*)L_50, NativeWriteFieldF2Type_t783B3B25BA67F4B7EA6FD91473554C1FAB058A50_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_StaticFields*)il2cpp_codegen_static_fields_for(CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_il2cpp_TypeInfo_var))->___native_write_field_f2_12), (void*)((NativeWriteFieldF2Type_t783B3B25BA67F4B7EA6FD91473554C1FAB058A50*)CastclassSealed((RuntimeObject*)L_50, NativeWriteFieldF2Type_t783B3B25BA67F4B7EA6FD91473554C1FAB058A50_il2cpp_TypeInfo_var)));
		RuntimeObject* L_51 = ((CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_StaticFields*)il2cpp_codegen_static_fields_for(CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_il2cpp_TypeInfo_var))->___dllLoadUtils_1;
		intptr_t L_52 = V_0;
		NullCheck(L_51);
		intptr_t L_53;
		L_53 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_51, L_52, _stringLiteral90624247C3ED3739D12DC1EC2993D654C73C1B19);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_54 = { reinterpret_cast<intptr_t> (NativeReadFieldF3Type_tF9997A39F5CC701B4DEF166576D9CD2151390785_0_0_0_var) };
		Type_t* L_55;
		L_55 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_54, NULL);
		Delegate_t* L_56;
		L_56 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_53, L_55, NULL);
		((CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_StaticFields*)il2cpp_codegen_static_fields_for(CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_il2cpp_TypeInfo_var))->___native_read_field_f3_13 = ((NativeReadFieldF3Type_tF9997A39F5CC701B4DEF166576D9CD2151390785*)CastclassSealed((RuntimeObject*)L_56, NativeReadFieldF3Type_tF9997A39F5CC701B4DEF166576D9CD2151390785_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_StaticFields*)il2cpp_codegen_static_fields_for(CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_il2cpp_TypeInfo_var))->___native_read_field_f3_13), (void*)((NativeReadFieldF3Type_tF9997A39F5CC701B4DEF166576D9CD2151390785*)CastclassSealed((RuntimeObject*)L_56, NativeReadFieldF3Type_tF9997A39F5CC701B4DEF166576D9CD2151390785_il2cpp_TypeInfo_var)));
		RuntimeObject* L_57 = ((CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_StaticFields*)il2cpp_codegen_static_fields_for(CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_il2cpp_TypeInfo_var))->___dllLoadUtils_1;
		intptr_t L_58 = V_0;
		NullCheck(L_57);
		intptr_t L_59;
		L_59 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_57, L_58, _stringLiteral7307454868F46B14DC00B1E0426346A69E110A58);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (NativeWriteFieldF3Type_tEE1D2408E9094608F95B0E6A13FBA8488A30A9E3_0_0_0_var) };
		Type_t* L_61;
		L_61 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_60, NULL);
		Delegate_t* L_62;
		L_62 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_59, L_61, NULL);
		((CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_StaticFields*)il2cpp_codegen_static_fields_for(CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_il2cpp_TypeInfo_var))->___native_write_field_f3_14 = ((NativeWriteFieldF3Type_tEE1D2408E9094608F95B0E6A13FBA8488A30A9E3*)CastclassSealed((RuntimeObject*)L_62, NativeWriteFieldF3Type_tEE1D2408E9094608F95B0E6A13FBA8488A30A9E3_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_StaticFields*)il2cpp_codegen_static_fields_for(CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_il2cpp_TypeInfo_var))->___native_write_field_f3_14), (void*)((NativeWriteFieldF3Type_tEE1D2408E9094608F95B0E6A13FBA8488A30A9E3*)CastclassSealed((RuntimeObject*)L_62, NativeWriteFieldF3Type_tEE1D2408E9094608F95B0E6A13FBA8488A30A9E3_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.IntPtr custom_message_unity.msg.CustomUnity::get_TypeSupportHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CustomUnity_get_TypeSupportHandle_m2D17028E3E1B7D8C2886454F2AA61385819E191A (CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_il2cpp_TypeInfo_var);
		NativeGetTypeSupportType_t9FE3EC7D24516D5686C70FEC01FA0A32EAC74C4A* L_0 = ((CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_StaticFields*)il2cpp_codegen_static_fields_for(CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_il2cpp_TypeInfo_var))->___native_get_typesupport_6;
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = NativeGetTypeSupportType_Invoke_mFFA010E806AD75E3EC8936F5239E6921ECCBE422_inline(L_0, NULL);
		return L_1;
	}
}
// System.IntPtr custom_message_unity.msg.CustomUnity::get_Handle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CustomUnity_get_Handle_m1921A6D7C1099F6CB38250103A0B083D0FB79B52 (CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->____handle_0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_il2cpp_TypeInfo_var);
		NativeCreateNativeMessageType_t8746F32C37FFA713AF60E8F0438C4B62AA091316* L_3 = ((CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_StaticFields*)il2cpp_codegen_static_fields_for(CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_il2cpp_TypeInfo_var))->___native_create_native_message_7;
		NullCheck(L_3);
		intptr_t L_4;
		L_4 = NativeCreateNativeMessageType_Invoke_m06A486EFBB4B19A9FD0E7FBA7776F14D489F3B3D_inline(L_3, NULL);
		__this->____handle_0 = L_4;
	}

IL_0022:
	{
		intptr_t L_5 = __this->____handle_0;
		return L_5;
	}
}
// System.Void custom_message_unity.msg.CustomUnity::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomUnity__ctor_mD9197FF09B58327C57CDF29AE338EAF0E43704E1 (CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void custom_message_unity.msg.CustomUnity::ReadNativeMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomUnity_ReadNativeMessage_mB8BEB4B9965935F17612C813C34621F8AF6ACB2E (CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0;
		L_0 = CustomUnity_get_Handle_m1921A6D7C1099F6CB38250103A0B083D0FB79B52(__this, NULL);
		CustomUnity_ReadNativeMessage_m5063B6AF0CBD666C7ACAB897F104F4FDD08DB8F6(__this, L_0, NULL);
		return;
	}
}
// System.Void custom_message_unity.msg.CustomUnity::ReadNativeMessage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomUnity_ReadNativeMessage_m5063B6AF0CBD666C7ACAB897F104F4FDD08DB8F6 (CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F* __this, intptr_t ___0_handle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___0_handle;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD9AF3F97404756432D9BF39C08DE870918B57A7A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CustomUnity_ReadNativeMessage_m5063B6AF0CBD666C7ACAB897F104F4FDD08DB8F6_RuntimeMethod_var)));
	}

IL_0018:
	{
		il2cpp_codegen_runtime_class_init_inline(CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_il2cpp_TypeInfo_var);
		NativeReadFieldF1Type_tA108FB538C1788AAB6DBB08DAD512DDBF31EDE08* L_4 = ((CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_StaticFields*)il2cpp_codegen_static_fields_for(CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_il2cpp_TypeInfo_var))->___native_read_field_f1_9;
		intptr_t L_5 = ___0_handle;
		NullCheck(L_4);
		double L_6;
		L_6 = NativeReadFieldF1Type_Invoke_m1CC34BC69EFCAB5EDB993705D2DA6375667216C4_inline(L_4, L_5, NULL);
		CustomUnity_set_F1_mD471BC123EAC662B5F95BB01637C2016D7D6B37A_inline(__this, L_6, NULL);
		NativeReadFieldF2Type_tA4CFF0013BD9D85AFEF7CB245210BE2924F8B553* L_7 = ((CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_StaticFields*)il2cpp_codegen_static_fields_for(CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_il2cpp_TypeInfo_var))->___native_read_field_f2_11;
		intptr_t L_8 = ___0_handle;
		NullCheck(L_7);
		double L_9;
		L_9 = NativeReadFieldF2Type_Invoke_m0443256B8712CB5D497202F16A3C5049175F20BB_inline(L_7, L_8, NULL);
		CustomUnity_set_F2_mE74F737C7067D851F1DF30E80B03B4240D15D9AD_inline(__this, L_9, NULL);
		NativeReadFieldF3Type_tF9997A39F5CC701B4DEF166576D9CD2151390785* L_10 = ((CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_StaticFields*)il2cpp_codegen_static_fields_for(CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_il2cpp_TypeInfo_var))->___native_read_field_f3_13;
		intptr_t L_11 = ___0_handle;
		NullCheck(L_10);
		double L_12;
		L_12 = NativeReadFieldF3Type_Invoke_m79466ADD03A61C4FE1A557D5836647C582281351_inline(L_10, L_11, NULL);
		CustomUnity_set_F3_m6A4CD01CB4F0AAE295D8085DC73754DD07ED5D30_inline(__this, L_12, NULL);
		return;
	}
}
// System.Void custom_message_unity.msg.CustomUnity::WriteNativeMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomUnity_WriteNativeMessage_mB5C5CBA701C6D2CE65364167C16E4057FD29CAF9 (CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->____handle_0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_il2cpp_TypeInfo_var);
		NativeCreateNativeMessageType_t8746F32C37FFA713AF60E8F0438C4B62AA091316* L_3 = ((CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_StaticFields*)il2cpp_codegen_static_fields_for(CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_il2cpp_TypeInfo_var))->___native_create_native_message_7;
		NullCheck(L_3);
		intptr_t L_4;
		L_4 = NativeCreateNativeMessageType_Invoke_m06A486EFBB4B19A9FD0E7FBA7776F14D489F3B3D_inline(L_3, NULL);
		__this->____handle_0 = L_4;
	}

IL_0022:
	{
		intptr_t L_5;
		L_5 = CustomUnity_get_Handle_m1921A6D7C1099F6CB38250103A0B083D0FB79B52(__this, NULL);
		CustomUnity_WriteNativeMessage_m4F6943496AD788BE0118D0501785789357839D0C(__this, L_5, NULL);
		return;
	}
}
// System.Void custom_message_unity.msg.CustomUnity::WriteNativeMessage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomUnity_WriteNativeMessage_m4F6943496AD788BE0118D0501785789357839D0C (CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F* __this, intptr_t ___0_handle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___0_handle;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4F0906DDE318C6A308C0586DE3F28817C8E3024D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CustomUnity_WriteNativeMessage_m4F6943496AD788BE0118D0501785789357839D0C_RuntimeMethod_var)));
	}

IL_0018:
	{
		il2cpp_codegen_runtime_class_init_inline(CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_il2cpp_TypeInfo_var);
		NativeWriteFieldF1Type_tCDA335A980EBE1251BD5EFBD1CC2E8DA0831DA54* L_4 = ((CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_StaticFields*)il2cpp_codegen_static_fields_for(CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_il2cpp_TypeInfo_var))->___native_write_field_f1_10;
		intptr_t L_5 = ___0_handle;
		double L_6;
		L_6 = CustomUnity_get_F1_m74FE6BEA142B3E14E948866CADB76BC3E28939FE_inline(__this, NULL);
		NullCheck(L_4);
		NativeWriteFieldF1Type_Invoke_m0453577595DFF2E6376BE0E5192F299A2A5375BC_inline(L_4, L_5, L_6, NULL);
		NativeWriteFieldF2Type_t783B3B25BA67F4B7EA6FD91473554C1FAB058A50* L_7 = ((CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_StaticFields*)il2cpp_codegen_static_fields_for(CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_il2cpp_TypeInfo_var))->___native_write_field_f2_12;
		intptr_t L_8 = ___0_handle;
		double L_9;
		L_9 = CustomUnity_get_F2_m93E6D4F254AED588EB10DAEFA31001FA9F3A9DA7_inline(__this, NULL);
		NullCheck(L_7);
		NativeWriteFieldF2Type_Invoke_m13404B5A3D3B3020C149B7B65CDE3FC80ECF3536_inline(L_7, L_8, L_9, NULL);
		NativeWriteFieldF3Type_tEE1D2408E9094608F95B0E6A13FBA8488A30A9E3* L_10 = ((CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_StaticFields*)il2cpp_codegen_static_fields_for(CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_il2cpp_TypeInfo_var))->___native_write_field_f3_14;
		intptr_t L_11 = ___0_handle;
		double L_12;
		L_12 = CustomUnity_get_F3_m2702E5D7D8EFA880894CDB054379DED39714BD4F_inline(__this, NULL);
		NullCheck(L_10);
		NativeWriteFieldF3Type_Invoke_m389432F2E0E9BE07B9351D721725B42EB8DBB28C_inline(L_10, L_11, L_12, NULL);
		return;
	}
}
// System.Void custom_message_unity.msg.CustomUnity::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomUnity_Dispose_m953D2227D16706FDA44F9F2CD0CF65BA1EABA4ED (CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->___disposed_2;
		if (L_0)
		{
			goto IL_003c;
		}
	}
	{
		intptr_t L_1 = __this->____handle_0;
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_3;
		L_3 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_il2cpp_TypeInfo_var);
		NativeDestroyNativeMessageType_t0E488A68A07F8B9459C152E6C005677D54A02F23* L_4 = ((CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_StaticFields*)il2cpp_codegen_static_fields_for(CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F_il2cpp_TypeInfo_var))->___native_destroy_native_message_8;
		intptr_t L_5 = __this->____handle_0;
		NullCheck(L_4);
		NativeDestroyNativeMessageType_Invoke_m4ED592E92F4DF18ECE0CA5062AC5A15E58B5CB8A_inline(L_4, L_5, NULL);
		intptr_t L_6 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->____handle_0 = L_6;
		__this->___disposed_2 = (bool)1;
	}

IL_003c:
	{
		return;
	}
}
// System.Void custom_message_unity.msg.CustomUnity::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomUnity_Finalize_m5D78E5B461C84F81F3D901B5AB0FC782314EDF85 (CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0008:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			CustomUnity_Dispose_m953D2227D16706FDA44F9F2CD0CF65BA1EABA4ED(__this, NULL);
			goto IL_000f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_000f:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
intptr_t NativeGetTypeSupportType_Invoke_mFFA010E806AD75E3EC8936F5239E6921ECCBE422_Multicast(NativeGetTypeSupportType_t9FE3EC7D24516D5686C70FEC01FA0A32EAC74C4A* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	intptr_t retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		NativeGetTypeSupportType_t9FE3EC7D24516D5686C70FEC01FA0A32EAC74C4A* currentDelegate = reinterpret_cast<NativeGetTypeSupportType_t9FE3EC7D24516D5686C70FEC01FA0A32EAC74C4A*>(delegatesToInvoke[i]);
		typedef intptr_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
intptr_t NativeGetTypeSupportType_Invoke_mFFA010E806AD75E3EC8936F5239E6921ECCBE422_OpenInst(NativeGetTypeSupportType_t9FE3EC7D24516D5686C70FEC01FA0A32EAC74C4A* __this, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
intptr_t NativeGetTypeSupportType_Invoke_mFFA010E806AD75E3EC8936F5239E6921ECCBE422_OpenStatic(NativeGetTypeSupportType_t9FE3EC7D24516D5686C70FEC01FA0A32EAC74C4A* __this, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
intptr_t NativeGetTypeSupportType_Invoke_mFFA010E806AD75E3EC8936F5239E6921ECCBE422_OpenStaticInvoker(NativeGetTypeSupportType_t9FE3EC7D24516D5686C70FEC01FA0A32EAC74C4A* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker0< intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL);
}
intptr_t NativeGetTypeSupportType_Invoke_mFFA010E806AD75E3EC8936F5239E6921ECCBE422_ClosedStaticInvoker(NativeGetTypeSupportType_t9FE3EC7D24516D5686C70FEC01FA0A32EAC74C4A* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< intptr_t, RuntimeObject* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_NativeGetTypeSupportType_t9FE3EC7D24516D5686C70FEC01FA0A32EAC74C4A (NativeGetTypeSupportType_t9FE3EC7D24516D5686C70FEC01FA0A32EAC74C4A* __this, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc();

	return returnValue;
}
// System.Void custom_message_unity.msg.CustomUnity/NativeGetTypeSupportType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGetTypeSupportType__ctor_m534EFCCF8F88E4067D4189ACE3C534D45C76AD71 (NativeGetTypeSupportType_t9FE3EC7D24516D5686C70FEC01FA0A32EAC74C4A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NativeGetTypeSupportType_Invoke_mFFA010E806AD75E3EC8936F5239E6921ECCBE422_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&NativeGetTypeSupportType_Invoke_mFFA010E806AD75E3EC8936F5239E6921ECCBE422_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NativeGetTypeSupportType_Invoke_mFFA010E806AD75E3EC8936F5239E6921ECCBE422_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&NativeGetTypeSupportType_Invoke_mFFA010E806AD75E3EC8936F5239E6921ECCBE422_Multicast;
}
// System.IntPtr custom_message_unity.msg.CustomUnity/NativeGetTypeSupportType::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeGetTypeSupportType_Invoke_mFFA010E806AD75E3EC8936F5239E6921ECCBE422 (NativeGetTypeSupportType_t9FE3EC7D24516D5686C70FEC01FA0A32EAC74C4A* __this, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult custom_message_unity.msg.CustomUnity/NativeGetTypeSupportType::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeGetTypeSupportType_BeginInvoke_mEF1268DD30135F6B4D5993F8B614562561C73F25 (NativeGetTypeSupportType_t9FE3EC7D24516D5686C70FEC01FA0A32EAC74C4A* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// System.IntPtr custom_message_unity.msg.CustomUnity/NativeGetTypeSupportType::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeGetTypeSupportType_EndInvoke_m47DE149FB0B587D6B54AABC7D6ADCAB65CE87211 (NativeGetTypeSupportType_t9FE3EC7D24516D5686C70FEC01FA0A32EAC74C4A* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(intptr_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
intptr_t NativeCreateNativeMessageType_Invoke_m06A486EFBB4B19A9FD0E7FBA7776F14D489F3B3D_Multicast(NativeCreateNativeMessageType_t8746F32C37FFA713AF60E8F0438C4B62AA091316* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	intptr_t retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		NativeCreateNativeMessageType_t8746F32C37FFA713AF60E8F0438C4B62AA091316* currentDelegate = reinterpret_cast<NativeCreateNativeMessageType_t8746F32C37FFA713AF60E8F0438C4B62AA091316*>(delegatesToInvoke[i]);
		typedef intptr_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
intptr_t NativeCreateNativeMessageType_Invoke_m06A486EFBB4B19A9FD0E7FBA7776F14D489F3B3D_OpenInst(NativeCreateNativeMessageType_t8746F32C37FFA713AF60E8F0438C4B62AA091316* __this, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
intptr_t NativeCreateNativeMessageType_Invoke_m06A486EFBB4B19A9FD0E7FBA7776F14D489F3B3D_OpenStatic(NativeCreateNativeMessageType_t8746F32C37FFA713AF60E8F0438C4B62AA091316* __this, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
intptr_t NativeCreateNativeMessageType_Invoke_m06A486EFBB4B19A9FD0E7FBA7776F14D489F3B3D_OpenStaticInvoker(NativeCreateNativeMessageType_t8746F32C37FFA713AF60E8F0438C4B62AA091316* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker0< intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL);
}
intptr_t NativeCreateNativeMessageType_Invoke_m06A486EFBB4B19A9FD0E7FBA7776F14D489F3B3D_ClosedStaticInvoker(NativeCreateNativeMessageType_t8746F32C37FFA713AF60E8F0438C4B62AA091316* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< intptr_t, RuntimeObject* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_NativeCreateNativeMessageType_t8746F32C37FFA713AF60E8F0438C4B62AA091316 (NativeCreateNativeMessageType_t8746F32C37FFA713AF60E8F0438C4B62AA091316* __this, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc();

	return returnValue;
}
// System.Void custom_message_unity.msg.CustomUnity/NativeCreateNativeMessageType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCreateNativeMessageType__ctor_m7165D003F147AA13C70698C0625237C352C405E5 (NativeCreateNativeMessageType_t8746F32C37FFA713AF60E8F0438C4B62AA091316* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NativeCreateNativeMessageType_Invoke_m06A486EFBB4B19A9FD0E7FBA7776F14D489F3B3D_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&NativeCreateNativeMessageType_Invoke_m06A486EFBB4B19A9FD0E7FBA7776F14D489F3B3D_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NativeCreateNativeMessageType_Invoke_m06A486EFBB4B19A9FD0E7FBA7776F14D489F3B3D_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&NativeCreateNativeMessageType_Invoke_m06A486EFBB4B19A9FD0E7FBA7776F14D489F3B3D_Multicast;
}
// System.IntPtr custom_message_unity.msg.CustomUnity/NativeCreateNativeMessageType::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeCreateNativeMessageType_Invoke_m06A486EFBB4B19A9FD0E7FBA7776F14D489F3B3D (NativeCreateNativeMessageType_t8746F32C37FFA713AF60E8F0438C4B62AA091316* __this, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult custom_message_unity.msg.CustomUnity/NativeCreateNativeMessageType::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeCreateNativeMessageType_BeginInvoke_m384537763649EE964D3CD7651E4ED0309E86FE27 (NativeCreateNativeMessageType_t8746F32C37FFA713AF60E8F0438C4B62AA091316* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// System.IntPtr custom_message_unity.msg.CustomUnity/NativeCreateNativeMessageType::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeCreateNativeMessageType_EndInvoke_m13F96470F8F1AEAC4E08A33061E156B6C0BB6435 (NativeCreateNativeMessageType_t8746F32C37FFA713AF60E8F0438C4B62AA091316* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(intptr_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void NativeDestroyNativeMessageType_Invoke_m4ED592E92F4DF18ECE0CA5062AC5A15E58B5CB8A_Multicast(NativeDestroyNativeMessageType_t0E488A68A07F8B9459C152E6C005677D54A02F23* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		NativeDestroyNativeMessageType_t0E488A68A07F8B9459C152E6C005677D54A02F23* currentDelegate = reinterpret_cast<NativeDestroyNativeMessageType_t0E488A68A07F8B9459C152E6C005677D54A02F23*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_messageHandle, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void NativeDestroyNativeMessageType_Invoke_m4ED592E92F4DF18ECE0CA5062AC5A15E58B5CB8A_OpenInst(NativeDestroyNativeMessageType_t0E488A68A07F8B9459C152E6C005677D54A02F23* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_messageHandle, method);
}
void NativeDestroyNativeMessageType_Invoke_m4ED592E92F4DF18ECE0CA5062AC5A15E58B5CB8A_OpenStatic(NativeDestroyNativeMessageType_t0E488A68A07F8B9459C152E6C005677D54A02F23* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_messageHandle, method);
}
void NativeDestroyNativeMessageType_Invoke_m4ED592E92F4DF18ECE0CA5062AC5A15E58B5CB8A_OpenStaticInvoker(NativeDestroyNativeMessageType_t0E488A68A07F8B9459C152E6C005677D54A02F23* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	InvokerActionInvoker1< intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_messageHandle);
}
void NativeDestroyNativeMessageType_Invoke_m4ED592E92F4DF18ECE0CA5062AC5A15E58B5CB8A_ClosedStaticInvoker(NativeDestroyNativeMessageType_t0E488A68A07F8B9459C152E6C005677D54A02F23* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_messageHandle);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_NativeDestroyNativeMessageType_t0E488A68A07F8B9459C152E6C005677D54A02F23 (NativeDestroyNativeMessageType_t0E488A68A07F8B9459C152E6C005677D54A02F23* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_messageHandle);

}
// System.Void custom_message_unity.msg.CustomUnity/NativeDestroyNativeMessageType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeDestroyNativeMessageType__ctor_m5577F978A0CE26419CC7B4C299A6AD98DDF6C88A (NativeDestroyNativeMessageType_t0E488A68A07F8B9459C152E6C005677D54A02F23* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NativeDestroyNativeMessageType_Invoke_m4ED592E92F4DF18ECE0CA5062AC5A15E58B5CB8A_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&NativeDestroyNativeMessageType_Invoke_m4ED592E92F4DF18ECE0CA5062AC5A15E58B5CB8A_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NativeDestroyNativeMessageType_Invoke_m4ED592E92F4DF18ECE0CA5062AC5A15E58B5CB8A_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&NativeDestroyNativeMessageType_Invoke_m4ED592E92F4DF18ECE0CA5062AC5A15E58B5CB8A_Multicast;
}
// System.Void custom_message_unity.msg.CustomUnity/NativeDestroyNativeMessageType::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeDestroyNativeMessageType_Invoke_m4ED592E92F4DF18ECE0CA5062AC5A15E58B5CB8A (NativeDestroyNativeMessageType_t0E488A68A07F8B9459C152E6C005677D54A02F23* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_messageHandle, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult custom_message_unity.msg.CustomUnity/NativeDestroyNativeMessageType::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeDestroyNativeMessageType_BeginInvoke_m9CB996BD79F09FBBBDD8812945AFAF63D926D2E5 (NativeDestroyNativeMessageType_t0E488A68A07F8B9459C152E6C005677D54A02F23* __this, intptr_t ___0_messageHandle, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_messageHandle);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void custom_message_unity.msg.CustomUnity/NativeDestroyNativeMessageType::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeDestroyNativeMessageType_EndInvoke_m91277FB5DD2D1ABF347E61E250061AB646482D1C (NativeDestroyNativeMessageType_t0E488A68A07F8B9459C152E6C005677D54A02F23* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
double NativeReadFieldF1Type_Invoke_m1CC34BC69EFCAB5EDB993705D2DA6375667216C4_Multicast(NativeReadFieldF1Type_tA108FB538C1788AAB6DBB08DAD512DDBF31EDE08* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	double retVal = 0.0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		NativeReadFieldF1Type_tA108FB538C1788AAB6DBB08DAD512DDBF31EDE08* currentDelegate = reinterpret_cast<NativeReadFieldF1Type_tA108FB538C1788AAB6DBB08DAD512DDBF31EDE08*>(delegatesToInvoke[i]);
		typedef double (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_messageHandle, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
double NativeReadFieldF1Type_Invoke_m1CC34BC69EFCAB5EDB993705D2DA6375667216C4_OpenInst(NativeReadFieldF1Type_tA108FB538C1788AAB6DBB08DAD512DDBF31EDE08* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	typedef double (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_messageHandle, method);
}
double NativeReadFieldF1Type_Invoke_m1CC34BC69EFCAB5EDB993705D2DA6375667216C4_OpenStatic(NativeReadFieldF1Type_tA108FB538C1788AAB6DBB08DAD512DDBF31EDE08* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	typedef double (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_messageHandle, method);
}
double NativeReadFieldF1Type_Invoke_m1CC34BC69EFCAB5EDB993705D2DA6375667216C4_OpenStaticInvoker(NativeReadFieldF1Type_tA108FB538C1788AAB6DBB08DAD512DDBF31EDE08* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< double, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_messageHandle);
}
double NativeReadFieldF1Type_Invoke_m1CC34BC69EFCAB5EDB993705D2DA6375667216C4_ClosedStaticInvoker(NativeReadFieldF1Type_tA108FB538C1788AAB6DBB08DAD512DDBF31EDE08* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< double, RuntimeObject*, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_messageHandle);
}
IL2CPP_EXTERN_C  double DelegatePInvokeWrapper_NativeReadFieldF1Type_tA108FB538C1788AAB6DBB08DAD512DDBF31EDE08 (NativeReadFieldF1Type_tA108FB538C1788AAB6DBB08DAD512DDBF31EDE08* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	typedef double (CDECL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	double returnValue = il2cppPInvokeFunc(___0_messageHandle);

	return returnValue;
}
// System.Void custom_message_unity.msg.CustomUnity/NativeReadFieldF1Type::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeReadFieldF1Type__ctor_m2A22B824D09F7E42FD069B16EC25BE3678696194 (NativeReadFieldF1Type_tA108FB538C1788AAB6DBB08DAD512DDBF31EDE08* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NativeReadFieldF1Type_Invoke_m1CC34BC69EFCAB5EDB993705D2DA6375667216C4_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&NativeReadFieldF1Type_Invoke_m1CC34BC69EFCAB5EDB993705D2DA6375667216C4_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NativeReadFieldF1Type_Invoke_m1CC34BC69EFCAB5EDB993705D2DA6375667216C4_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&NativeReadFieldF1Type_Invoke_m1CC34BC69EFCAB5EDB993705D2DA6375667216C4_Multicast;
}
// System.Double custom_message_unity.msg.CustomUnity/NativeReadFieldF1Type::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NativeReadFieldF1Type_Invoke_m1CC34BC69EFCAB5EDB993705D2DA6375667216C4 (NativeReadFieldF1Type_tA108FB538C1788AAB6DBB08DAD512DDBF31EDE08* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method) 
{
	typedef double (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_messageHandle, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult custom_message_unity.msg.CustomUnity/NativeReadFieldF1Type::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeReadFieldF1Type_BeginInvoke_m10B87603DC8604102B5B292193A800B72139B12A (NativeReadFieldF1Type_tA108FB538C1788AAB6DBB08DAD512DDBF31EDE08* __this, intptr_t ___0_messageHandle, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_messageHandle);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Double custom_message_unity.msg.CustomUnity/NativeReadFieldF1Type::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NativeReadFieldF1Type_EndInvoke_m19E0999880C022F688C4FE9F3D547AE9D513EA2F (NativeReadFieldF1Type_tA108FB538C1788AAB6DBB08DAD512DDBF31EDE08* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(double*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void NativeWriteFieldF1Type_Invoke_m0453577595DFF2E6376BE0E5192F299A2A5375BC_Multicast(NativeWriteFieldF1Type_tCDA335A980EBE1251BD5EFBD1CC2E8DA0831DA54* __this, intptr_t ___0_messageHandle, double ___1_value, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		NativeWriteFieldF1Type_tCDA335A980EBE1251BD5EFBD1CC2E8DA0831DA54* currentDelegate = reinterpret_cast<NativeWriteFieldF1Type_tCDA335A980EBE1251BD5EFBD1CC2E8DA0831DA54*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, double, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_messageHandle, ___1_value, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void NativeWriteFieldF1Type_Invoke_m0453577595DFF2E6376BE0E5192F299A2A5375BC_OpenInst(NativeWriteFieldF1Type_tCDA335A980EBE1251BD5EFBD1CC2E8DA0831DA54* __this, intptr_t ___0_messageHandle, double ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, double, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_messageHandle, ___1_value, method);
}
void NativeWriteFieldF1Type_Invoke_m0453577595DFF2E6376BE0E5192F299A2A5375BC_OpenStatic(NativeWriteFieldF1Type_tCDA335A980EBE1251BD5EFBD1CC2E8DA0831DA54* __this, intptr_t ___0_messageHandle, double ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, double, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_messageHandle, ___1_value, method);
}
void NativeWriteFieldF1Type_Invoke_m0453577595DFF2E6376BE0E5192F299A2A5375BC_OpenStaticInvoker(NativeWriteFieldF1Type_tCDA335A980EBE1251BD5EFBD1CC2E8DA0831DA54* __this, intptr_t ___0_messageHandle, double ___1_value, const RuntimeMethod* method)
{
	InvokerActionInvoker2< intptr_t, double >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_messageHandle, ___1_value);
}
void NativeWriteFieldF1Type_Invoke_m0453577595DFF2E6376BE0E5192F299A2A5375BC_ClosedStaticInvoker(NativeWriteFieldF1Type_tCDA335A980EBE1251BD5EFBD1CC2E8DA0831DA54* __this, intptr_t ___0_messageHandle, double ___1_value, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, intptr_t, double >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_messageHandle, ___1_value);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_NativeWriteFieldF1Type_tCDA335A980EBE1251BD5EFBD1CC2E8DA0831DA54 (NativeWriteFieldF1Type_tCDA335A980EBE1251BD5EFBD1CC2E8DA0831DA54* __this, intptr_t ___0_messageHandle, double ___1_value, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, double);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_messageHandle, ___1_value);

}
// System.Void custom_message_unity.msg.CustomUnity/NativeWriteFieldF1Type::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWriteFieldF1Type__ctor_mD11E51C95C23B9DE4B32CAB1C1DB2596F26D3A60 (NativeWriteFieldF1Type_tCDA335A980EBE1251BD5EFBD1CC2E8DA0831DA54* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NativeWriteFieldF1Type_Invoke_m0453577595DFF2E6376BE0E5192F299A2A5375BC_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&NativeWriteFieldF1Type_Invoke_m0453577595DFF2E6376BE0E5192F299A2A5375BC_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NativeWriteFieldF1Type_Invoke_m0453577595DFF2E6376BE0E5192F299A2A5375BC_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&NativeWriteFieldF1Type_Invoke_m0453577595DFF2E6376BE0E5192F299A2A5375BC_Multicast;
}
// System.Void custom_message_unity.msg.CustomUnity/NativeWriteFieldF1Type::Invoke(System.IntPtr,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWriteFieldF1Type_Invoke_m0453577595DFF2E6376BE0E5192F299A2A5375BC (NativeWriteFieldF1Type_tCDA335A980EBE1251BD5EFBD1CC2E8DA0831DA54* __this, intptr_t ___0_messageHandle, double ___1_value, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, double, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_messageHandle, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult custom_message_unity.msg.CustomUnity/NativeWriteFieldF1Type::BeginInvoke(System.IntPtr,System.Double,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeWriteFieldF1Type_BeginInvoke_m79BBCD7F66E3F56A4936C6043420E77660BD9E16 (NativeWriteFieldF1Type_tCDA335A980EBE1251BD5EFBD1CC2E8DA0831DA54* __this, intptr_t ___0_messageHandle, double ___1_value, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_messageHandle);
	__d_args[1] = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &___1_value);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void custom_message_unity.msg.CustomUnity/NativeWriteFieldF1Type::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWriteFieldF1Type_EndInvoke_mEC75E0384CB2E1129277F4511217FF9085707B60 (NativeWriteFieldF1Type_tCDA335A980EBE1251BD5EFBD1CC2E8DA0831DA54* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
double NativeReadFieldF2Type_Invoke_m0443256B8712CB5D497202F16A3C5049175F20BB_Multicast(NativeReadFieldF2Type_tA4CFF0013BD9D85AFEF7CB245210BE2924F8B553* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	double retVal = 0.0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		NativeReadFieldF2Type_tA4CFF0013BD9D85AFEF7CB245210BE2924F8B553* currentDelegate = reinterpret_cast<NativeReadFieldF2Type_tA4CFF0013BD9D85AFEF7CB245210BE2924F8B553*>(delegatesToInvoke[i]);
		typedef double (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_messageHandle, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
double NativeReadFieldF2Type_Invoke_m0443256B8712CB5D497202F16A3C5049175F20BB_OpenInst(NativeReadFieldF2Type_tA4CFF0013BD9D85AFEF7CB245210BE2924F8B553* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	typedef double (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_messageHandle, method);
}
double NativeReadFieldF2Type_Invoke_m0443256B8712CB5D497202F16A3C5049175F20BB_OpenStatic(NativeReadFieldF2Type_tA4CFF0013BD9D85AFEF7CB245210BE2924F8B553* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	typedef double (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_messageHandle, method);
}
double NativeReadFieldF2Type_Invoke_m0443256B8712CB5D497202F16A3C5049175F20BB_OpenStaticInvoker(NativeReadFieldF2Type_tA4CFF0013BD9D85AFEF7CB245210BE2924F8B553* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< double, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_messageHandle);
}
double NativeReadFieldF2Type_Invoke_m0443256B8712CB5D497202F16A3C5049175F20BB_ClosedStaticInvoker(NativeReadFieldF2Type_tA4CFF0013BD9D85AFEF7CB245210BE2924F8B553* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< double, RuntimeObject*, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_messageHandle);
}
IL2CPP_EXTERN_C  double DelegatePInvokeWrapper_NativeReadFieldF2Type_tA4CFF0013BD9D85AFEF7CB245210BE2924F8B553 (NativeReadFieldF2Type_tA4CFF0013BD9D85AFEF7CB245210BE2924F8B553* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	typedef double (CDECL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	double returnValue = il2cppPInvokeFunc(___0_messageHandle);

	return returnValue;
}
// System.Void custom_message_unity.msg.CustomUnity/NativeReadFieldF2Type::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeReadFieldF2Type__ctor_m79B0F02B744DBDAEB398B1024D613BD42D4D60BA (NativeReadFieldF2Type_tA4CFF0013BD9D85AFEF7CB245210BE2924F8B553* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NativeReadFieldF2Type_Invoke_m0443256B8712CB5D497202F16A3C5049175F20BB_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&NativeReadFieldF2Type_Invoke_m0443256B8712CB5D497202F16A3C5049175F20BB_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NativeReadFieldF2Type_Invoke_m0443256B8712CB5D497202F16A3C5049175F20BB_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&NativeReadFieldF2Type_Invoke_m0443256B8712CB5D497202F16A3C5049175F20BB_Multicast;
}
// System.Double custom_message_unity.msg.CustomUnity/NativeReadFieldF2Type::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NativeReadFieldF2Type_Invoke_m0443256B8712CB5D497202F16A3C5049175F20BB (NativeReadFieldF2Type_tA4CFF0013BD9D85AFEF7CB245210BE2924F8B553* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method) 
{
	typedef double (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_messageHandle, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult custom_message_unity.msg.CustomUnity/NativeReadFieldF2Type::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeReadFieldF2Type_BeginInvoke_m917D161EBD5BACABECB75B9390669ABB00DADBBC (NativeReadFieldF2Type_tA4CFF0013BD9D85AFEF7CB245210BE2924F8B553* __this, intptr_t ___0_messageHandle, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_messageHandle);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Double custom_message_unity.msg.CustomUnity/NativeReadFieldF2Type::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NativeReadFieldF2Type_EndInvoke_mFD2A9A1CB2BBB4911D72D49E13A74734D01E6DE0 (NativeReadFieldF2Type_tA4CFF0013BD9D85AFEF7CB245210BE2924F8B553* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(double*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void NativeWriteFieldF2Type_Invoke_m13404B5A3D3B3020C149B7B65CDE3FC80ECF3536_Multicast(NativeWriteFieldF2Type_t783B3B25BA67F4B7EA6FD91473554C1FAB058A50* __this, intptr_t ___0_messageHandle, double ___1_value, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		NativeWriteFieldF2Type_t783B3B25BA67F4B7EA6FD91473554C1FAB058A50* currentDelegate = reinterpret_cast<NativeWriteFieldF2Type_t783B3B25BA67F4B7EA6FD91473554C1FAB058A50*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, double, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_messageHandle, ___1_value, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void NativeWriteFieldF2Type_Invoke_m13404B5A3D3B3020C149B7B65CDE3FC80ECF3536_OpenInst(NativeWriteFieldF2Type_t783B3B25BA67F4B7EA6FD91473554C1FAB058A50* __this, intptr_t ___0_messageHandle, double ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, double, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_messageHandle, ___1_value, method);
}
void NativeWriteFieldF2Type_Invoke_m13404B5A3D3B3020C149B7B65CDE3FC80ECF3536_OpenStatic(NativeWriteFieldF2Type_t783B3B25BA67F4B7EA6FD91473554C1FAB058A50* __this, intptr_t ___0_messageHandle, double ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, double, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_messageHandle, ___1_value, method);
}
void NativeWriteFieldF2Type_Invoke_m13404B5A3D3B3020C149B7B65CDE3FC80ECF3536_OpenStaticInvoker(NativeWriteFieldF2Type_t783B3B25BA67F4B7EA6FD91473554C1FAB058A50* __this, intptr_t ___0_messageHandle, double ___1_value, const RuntimeMethod* method)
{
	InvokerActionInvoker2< intptr_t, double >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_messageHandle, ___1_value);
}
void NativeWriteFieldF2Type_Invoke_m13404B5A3D3B3020C149B7B65CDE3FC80ECF3536_ClosedStaticInvoker(NativeWriteFieldF2Type_t783B3B25BA67F4B7EA6FD91473554C1FAB058A50* __this, intptr_t ___0_messageHandle, double ___1_value, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, intptr_t, double >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_messageHandle, ___1_value);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_NativeWriteFieldF2Type_t783B3B25BA67F4B7EA6FD91473554C1FAB058A50 (NativeWriteFieldF2Type_t783B3B25BA67F4B7EA6FD91473554C1FAB058A50* __this, intptr_t ___0_messageHandle, double ___1_value, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, double);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_messageHandle, ___1_value);

}
// System.Void custom_message_unity.msg.CustomUnity/NativeWriteFieldF2Type::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWriteFieldF2Type__ctor_mF5F00351E8D9480A643AD09D58D75519D180606F (NativeWriteFieldF2Type_t783B3B25BA67F4B7EA6FD91473554C1FAB058A50* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NativeWriteFieldF2Type_Invoke_m13404B5A3D3B3020C149B7B65CDE3FC80ECF3536_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&NativeWriteFieldF2Type_Invoke_m13404B5A3D3B3020C149B7B65CDE3FC80ECF3536_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NativeWriteFieldF2Type_Invoke_m13404B5A3D3B3020C149B7B65CDE3FC80ECF3536_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&NativeWriteFieldF2Type_Invoke_m13404B5A3D3B3020C149B7B65CDE3FC80ECF3536_Multicast;
}
// System.Void custom_message_unity.msg.CustomUnity/NativeWriteFieldF2Type::Invoke(System.IntPtr,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWriteFieldF2Type_Invoke_m13404B5A3D3B3020C149B7B65CDE3FC80ECF3536 (NativeWriteFieldF2Type_t783B3B25BA67F4B7EA6FD91473554C1FAB058A50* __this, intptr_t ___0_messageHandle, double ___1_value, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, double, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_messageHandle, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult custom_message_unity.msg.CustomUnity/NativeWriteFieldF2Type::BeginInvoke(System.IntPtr,System.Double,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeWriteFieldF2Type_BeginInvoke_m62560085D33BAA3CA41B4BEE1C2A06017504C48B (NativeWriteFieldF2Type_t783B3B25BA67F4B7EA6FD91473554C1FAB058A50* __this, intptr_t ___0_messageHandle, double ___1_value, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_messageHandle);
	__d_args[1] = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &___1_value);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void custom_message_unity.msg.CustomUnity/NativeWriteFieldF2Type::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWriteFieldF2Type_EndInvoke_mBD7B33FB77B617EDC9555DE5D267FA5CE1967DA9 (NativeWriteFieldF2Type_t783B3B25BA67F4B7EA6FD91473554C1FAB058A50* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
double NativeReadFieldF3Type_Invoke_m79466ADD03A61C4FE1A557D5836647C582281351_Multicast(NativeReadFieldF3Type_tF9997A39F5CC701B4DEF166576D9CD2151390785* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	double retVal = 0.0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		NativeReadFieldF3Type_tF9997A39F5CC701B4DEF166576D9CD2151390785* currentDelegate = reinterpret_cast<NativeReadFieldF3Type_tF9997A39F5CC701B4DEF166576D9CD2151390785*>(delegatesToInvoke[i]);
		typedef double (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_messageHandle, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
double NativeReadFieldF3Type_Invoke_m79466ADD03A61C4FE1A557D5836647C582281351_OpenInst(NativeReadFieldF3Type_tF9997A39F5CC701B4DEF166576D9CD2151390785* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	typedef double (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_messageHandle, method);
}
double NativeReadFieldF3Type_Invoke_m79466ADD03A61C4FE1A557D5836647C582281351_OpenStatic(NativeReadFieldF3Type_tF9997A39F5CC701B4DEF166576D9CD2151390785* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	typedef double (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_messageHandle, method);
}
double NativeReadFieldF3Type_Invoke_m79466ADD03A61C4FE1A557D5836647C582281351_OpenStaticInvoker(NativeReadFieldF3Type_tF9997A39F5CC701B4DEF166576D9CD2151390785* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< double, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_messageHandle);
}
double NativeReadFieldF3Type_Invoke_m79466ADD03A61C4FE1A557D5836647C582281351_ClosedStaticInvoker(NativeReadFieldF3Type_tF9997A39F5CC701B4DEF166576D9CD2151390785* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< double, RuntimeObject*, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_messageHandle);
}
IL2CPP_EXTERN_C  double DelegatePInvokeWrapper_NativeReadFieldF3Type_tF9997A39F5CC701B4DEF166576D9CD2151390785 (NativeReadFieldF3Type_tF9997A39F5CC701B4DEF166576D9CD2151390785* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	typedef double (CDECL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	double returnValue = il2cppPInvokeFunc(___0_messageHandle);

	return returnValue;
}
// System.Void custom_message_unity.msg.CustomUnity/NativeReadFieldF3Type::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeReadFieldF3Type__ctor_m83049491AFB4320A9007F64FB646B132233BAC78 (NativeReadFieldF3Type_tF9997A39F5CC701B4DEF166576D9CD2151390785* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NativeReadFieldF3Type_Invoke_m79466ADD03A61C4FE1A557D5836647C582281351_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&NativeReadFieldF3Type_Invoke_m79466ADD03A61C4FE1A557D5836647C582281351_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NativeReadFieldF3Type_Invoke_m79466ADD03A61C4FE1A557D5836647C582281351_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&NativeReadFieldF3Type_Invoke_m79466ADD03A61C4FE1A557D5836647C582281351_Multicast;
}
// System.Double custom_message_unity.msg.CustomUnity/NativeReadFieldF3Type::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NativeReadFieldF3Type_Invoke_m79466ADD03A61C4FE1A557D5836647C582281351 (NativeReadFieldF3Type_tF9997A39F5CC701B4DEF166576D9CD2151390785* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method) 
{
	typedef double (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_messageHandle, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult custom_message_unity.msg.CustomUnity/NativeReadFieldF3Type::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeReadFieldF3Type_BeginInvoke_mFF402D848B619BFE2F96B4BC33BCE68D4C9D9ECF (NativeReadFieldF3Type_tF9997A39F5CC701B4DEF166576D9CD2151390785* __this, intptr_t ___0_messageHandle, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_messageHandle);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Double custom_message_unity.msg.CustomUnity/NativeReadFieldF3Type::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NativeReadFieldF3Type_EndInvoke_m43A5573BEE78CF211B2CF03D3E2B6C70E7AB3D09 (NativeReadFieldF3Type_tF9997A39F5CC701B4DEF166576D9CD2151390785* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(double*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void NativeWriteFieldF3Type_Invoke_m389432F2E0E9BE07B9351D721725B42EB8DBB28C_Multicast(NativeWriteFieldF3Type_tEE1D2408E9094608F95B0E6A13FBA8488A30A9E3* __this, intptr_t ___0_messageHandle, double ___1_value, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		NativeWriteFieldF3Type_tEE1D2408E9094608F95B0E6A13FBA8488A30A9E3* currentDelegate = reinterpret_cast<NativeWriteFieldF3Type_tEE1D2408E9094608F95B0E6A13FBA8488A30A9E3*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, double, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_messageHandle, ___1_value, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void NativeWriteFieldF3Type_Invoke_m389432F2E0E9BE07B9351D721725B42EB8DBB28C_OpenInst(NativeWriteFieldF3Type_tEE1D2408E9094608F95B0E6A13FBA8488A30A9E3* __this, intptr_t ___0_messageHandle, double ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, double, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_messageHandle, ___1_value, method);
}
void NativeWriteFieldF3Type_Invoke_m389432F2E0E9BE07B9351D721725B42EB8DBB28C_OpenStatic(NativeWriteFieldF3Type_tEE1D2408E9094608F95B0E6A13FBA8488A30A9E3* __this, intptr_t ___0_messageHandle, double ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, double, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_messageHandle, ___1_value, method);
}
void NativeWriteFieldF3Type_Invoke_m389432F2E0E9BE07B9351D721725B42EB8DBB28C_OpenStaticInvoker(NativeWriteFieldF3Type_tEE1D2408E9094608F95B0E6A13FBA8488A30A9E3* __this, intptr_t ___0_messageHandle, double ___1_value, const RuntimeMethod* method)
{
	InvokerActionInvoker2< intptr_t, double >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_messageHandle, ___1_value);
}
void NativeWriteFieldF3Type_Invoke_m389432F2E0E9BE07B9351D721725B42EB8DBB28C_ClosedStaticInvoker(NativeWriteFieldF3Type_tEE1D2408E9094608F95B0E6A13FBA8488A30A9E3* __this, intptr_t ___0_messageHandle, double ___1_value, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, intptr_t, double >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_messageHandle, ___1_value);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_NativeWriteFieldF3Type_tEE1D2408E9094608F95B0E6A13FBA8488A30A9E3 (NativeWriteFieldF3Type_tEE1D2408E9094608F95B0E6A13FBA8488A30A9E3* __this, intptr_t ___0_messageHandle, double ___1_value, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, double);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_messageHandle, ___1_value);

}
// System.Void custom_message_unity.msg.CustomUnity/NativeWriteFieldF3Type::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWriteFieldF3Type__ctor_mF4FBFA4E9FD9C0DFEE99A82AEAAB0EBCAD51ABFE (NativeWriteFieldF3Type_tEE1D2408E9094608F95B0E6A13FBA8488A30A9E3* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NativeWriteFieldF3Type_Invoke_m389432F2E0E9BE07B9351D721725B42EB8DBB28C_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&NativeWriteFieldF3Type_Invoke_m389432F2E0E9BE07B9351D721725B42EB8DBB28C_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NativeWriteFieldF3Type_Invoke_m389432F2E0E9BE07B9351D721725B42EB8DBB28C_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&NativeWriteFieldF3Type_Invoke_m389432F2E0E9BE07B9351D721725B42EB8DBB28C_Multicast;
}
// System.Void custom_message_unity.msg.CustomUnity/NativeWriteFieldF3Type::Invoke(System.IntPtr,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWriteFieldF3Type_Invoke_m389432F2E0E9BE07B9351D721725B42EB8DBB28C (NativeWriteFieldF3Type_tEE1D2408E9094608F95B0E6A13FBA8488A30A9E3* __this, intptr_t ___0_messageHandle, double ___1_value, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, double, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_messageHandle, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult custom_message_unity.msg.CustomUnity/NativeWriteFieldF3Type::BeginInvoke(System.IntPtr,System.Double,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeWriteFieldF3Type_BeginInvoke_m9366CE39889CBBBDCBEE3FAD103E571BF381FE1F (NativeWriteFieldF3Type_tEE1D2408E9094608F95B0E6A13FBA8488A30A9E3* __this, intptr_t ___0_messageHandle, double ___1_value, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_messageHandle);
	__d_args[1] = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &___1_value);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void custom_message_unity.msg.CustomUnity/NativeWriteFieldF3Type::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWriteFieldF3Type_EndInvoke_mE67401348463AC0842A5EE8B61ED2CFA906CFA77 (NativeWriteFieldF3Type_tEE1D2408E9094608F95B0E6A13FBA8488A30A9E3* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9 OSPlatform_get_Linux_m8A7C3AB166C3C5441333F957D76FFB56FE0E7185_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9_il2cpp_TypeInfo_var);
		OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9 L_0 = ((OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9_StaticFields*)il2cpp_codegen_static_fields_for(OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9_il2cpp_TypeInfo_var))->___U3CLinuxU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t NativeGetTypeSupportType_Invoke_mFFA010E806AD75E3EC8936F5239E6921ECCBE422_inline (NativeGetTypeSupportType_t9FE3EC7D24516D5686C70FEC01FA0A32EAC74C4A* __this, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t NativeCreateNativeMessageType_Invoke_m06A486EFBB4B19A9FD0E7FBA7776F14D489F3B3D_inline (NativeCreateNativeMessageType_t8746F32C37FFA713AF60E8F0438C4B62AA091316* __this, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double NativeReadFieldF1Type_Invoke_m1CC34BC69EFCAB5EDB993705D2DA6375667216C4_inline (NativeReadFieldF1Type_tA108FB538C1788AAB6DBB08DAD512DDBF31EDE08* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method) 
{
	typedef double (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_messageHandle, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CustomUnity_set_F1_mD471BC123EAC662B5F95BB01637C2016D7D6B37A_inline (CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		double L_0 = ___0_value;
		__this->___U3CF1U3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double NativeReadFieldF2Type_Invoke_m0443256B8712CB5D497202F16A3C5049175F20BB_inline (NativeReadFieldF2Type_tA4CFF0013BD9D85AFEF7CB245210BE2924F8B553* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method) 
{
	typedef double (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_messageHandle, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CustomUnity_set_F2_mE74F737C7067D851F1DF30E80B03B4240D15D9AD_inline (CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		double L_0 = ___0_value;
		__this->___U3CF2U3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double NativeReadFieldF3Type_Invoke_m79466ADD03A61C4FE1A557D5836647C582281351_inline (NativeReadFieldF3Type_tF9997A39F5CC701B4DEF166576D9CD2151390785* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method) 
{
	typedef double (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_messageHandle, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CustomUnity_set_F3_m6A4CD01CB4F0AAE295D8085DC73754DD07ED5D30_inline (CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		double L_0 = ___0_value;
		__this->___U3CF3U3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double CustomUnity_get_F1_m74FE6BEA142B3E14E948866CADB76BC3E28939FE_inline (CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3CF1U3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeWriteFieldF1Type_Invoke_m0453577595DFF2E6376BE0E5192F299A2A5375BC_inline (NativeWriteFieldF1Type_tCDA335A980EBE1251BD5EFBD1CC2E8DA0831DA54* __this, intptr_t ___0_messageHandle, double ___1_value, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, double, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_messageHandle, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double CustomUnity_get_F2_m93E6D4F254AED588EB10DAEFA31001FA9F3A9DA7_inline (CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3CF2U3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeWriteFieldF2Type_Invoke_m13404B5A3D3B3020C149B7B65CDE3FC80ECF3536_inline (NativeWriteFieldF2Type_t783B3B25BA67F4B7EA6FD91473554C1FAB058A50* __this, intptr_t ___0_messageHandle, double ___1_value, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, double, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_messageHandle, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double CustomUnity_get_F3_m2702E5D7D8EFA880894CDB054379DED39714BD4F_inline (CustomUnity_tF316FEE9354BD13005FF10C9FCBBC283063D831F* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3CF3U3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeWriteFieldF3Type_Invoke_m389432F2E0E9BE07B9351D721725B42EB8DBB28C_inline (NativeWriteFieldF3Type_tEE1D2408E9094608F95B0E6A13FBA8488A30A9E3* __this, intptr_t ___0_messageHandle, double ___1_value, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, double, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_messageHandle, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeDestroyNativeMessageType_Invoke_m4ED592E92F4DF18ECE0CA5062AC5A15E58B5CB8A_inline (NativeDestroyNativeMessageType_t0E488A68A07F8B9459C152E6C005677D54A02F23* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_messageHandle, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
