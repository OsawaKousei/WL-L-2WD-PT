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
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
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
// rosgraph_msgs.msg.Clock
struct Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2;
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
// builtin_interfaces.msg.Time
struct Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// rosgraph_msgs.msg.Clock/NativeCreateNativeMessageType
struct NativeCreateNativeMessageType_t392BF2E7FDEA3A65F46BD9238C642DAFBE6842CC;
// rosgraph_msgs.msg.Clock/NativeDestroyNativeMessageType
struct NativeDestroyNativeMessageType_t0FEFE939B219074FB3A8D25677CAE470CBF3718F;
// rosgraph_msgs.msg.Clock/NativeGetNestedHandleClock_Type
struct NativeGetNestedHandleClock_Type_t51F6A57C85332ECCAA54574C685AB8DC896719AB;
// rosgraph_msgs.msg.Clock/NativeGetTypeSupportType
struct NativeGetTypeSupportType_tC7B899608CD1CA3015E9307E8CE7CC2EBBDD8EA8;
// builtin_interfaces.msg.Time/NativeCreateNativeMessageType
struct NativeCreateNativeMessageType_t762632B2C8CF227E63BA1D20B346B64492793054;
// builtin_interfaces.msg.Time/NativeDestroyNativeMessageType
struct NativeDestroyNativeMessageType_t7459C33DB752D86695AA046FE5339029AD797B04;
// builtin_interfaces.msg.Time/NativeGetTypeSupportType
struct NativeGetTypeSupportType_t63782EF21498CB0633F23315B3ED307098D8C106;
// builtin_interfaces.msg.Time/NativeReadFieldNanosecType
struct NativeReadFieldNanosecType_t97EDBC81AAA04CCAC1B23D0B2B78C393C0DA91DB;
// builtin_interfaces.msg.Time/NativeReadFieldSecType
struct NativeReadFieldSecType_t3470747120F9BFC5B6289A0B9E6F28EFA7ED099F;
// builtin_interfaces.msg.Time/NativeWriteFieldNanosecType
struct NativeWriteFieldNanosecType_t5E0AE928ADDF2C29C3B07EDD132D94E839372856;
// builtin_interfaces.msg.Time/NativeWriteFieldSecType
struct NativeWriteFieldSecType_t93D0F4573A3D133A711AEBD65821FD8462365348;

IL2CPP_EXTERN_C RuntimeClass* Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeCreateNativeMessageType_t392BF2E7FDEA3A65F46BD9238C642DAFBE6842CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeDestroyNativeMessageType_t0FEFE939B219074FB3A8D25677CAE470CBF3718F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeGetNestedHandleClock_Type_t51F6A57C85332ECCAA54574C685AB8DC896719AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeGetTypeSupportType_tC7B899608CD1CA3015E9307E8CE7CC2EBBDD8EA8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeInformation_tB2DFA85FB9251AE3A3112904C9DF06C30D1D3EAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral200CC1A53038788B81DB33A4D149D576E581067E;
IL2CPP_EXTERN_C String_t* _stringLiteral331C2AE40A11FD125142F1CB87DC691E1E798746;
IL2CPP_EXTERN_C String_t* _stringLiteral39B253F9002BAE0C48DFCFF402DA3D353D687FD0;
IL2CPP_EXTERN_C String_t* _stringLiteral3B18A3E5160ED541A2344733BA0632FE0BF744F9;
IL2CPP_EXTERN_C String_t* _stringLiteral45E0D55EC3EB78DB5CDC3060033C52CDA57E866C;
IL2CPP_EXTERN_C String_t* _stringLiteral48AA9159062FCC55AABFE84E3BA428A64AC7E123;
IL2CPP_EXTERN_C String_t* _stringLiteral4F0906DDE318C6A308C0586DE3F28817C8E3024D;
IL2CPP_EXTERN_C String_t* _stringLiteral71FDD9F029C03DA165549AD49CB4D97B9A548502;
IL2CPP_EXTERN_C String_t* _stringLiteral98C097CF8F3A9CE7F58F21A2833E2CD04852D680;
IL2CPP_EXTERN_C String_t* _stringLiteral9D281A92A54C963F9CFA38B0397F12FEC1BCDFC0;
IL2CPP_EXTERN_C String_t* _stringLiteralC7699638AE91904FD67E956D3E2268AD2B77CF66;
IL2CPP_EXTERN_C String_t* _stringLiteralD7D8430585AC923061167106F208BD29BDBCB85B;
IL2CPP_EXTERN_C String_t* _stringLiteralD8F34F5DC2A8EF9D1EB37A3D71170C8BB9195652;
IL2CPP_EXTERN_C String_t* _stringLiteralD9AF3F97404756432D9BF39C08DE870918B57A7A;
IL2CPP_EXTERN_C String_t* _stringLiteralE49AACF10B662A9EC65B8E3BE7253D9AEEE7A0FD;
IL2CPP_EXTERN_C String_t* _stringLiteralFF764304A5D2ED487C2C6CD59D163F8483232808;
IL2CPP_EXTERN_C const RuntimeMethod* Clock_ReadNativeMessage_mE6907AE98786E0E364BF99F07F69E01F3AEC3ACB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Clock_WriteNativeMessage_m76D025AAE6639C5610D60906B50FD081DA45CCF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* NativeCreateNativeMessageType_t392BF2E7FDEA3A65F46BD9238C642DAFBE6842CC_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NativeDestroyNativeMessageType_t0FEFE939B219074FB3A8D25677CAE470CBF3718F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NativeGetNestedHandleClock_Type_t51F6A57C85332ECCAA54574C685AB8DC896719AB_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NativeGetTypeSupportType_tC7B899608CD1CA3015E9307E8CE7CC2EBBDD8EA8_0_0_0_var;
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
struct U3CModuleU3E_t6F393FF9436500D064F1316CE932700E837885E0 
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

// rosgraph_msgs.msg.Clock
struct Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2  : public RuntimeObject
{
	// System.IntPtr rosgraph_msgs.msg.Clock::_handle
	intptr_t ____handle_0;
	// System.Boolean rosgraph_msgs.msg.Clock::disposed
	bool ___disposed_2;
	// builtin_interfaces.msg.Time rosgraph_msgs.msg.Clock::<Clock_>k__BackingField
	Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E* ___U3CClock_U3Ek__BackingField_3;
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

// builtin_interfaces.msg.Time
struct Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E  : public RuntimeObject
{
	// System.IntPtr builtin_interfaces.msg.Time::_handle
	intptr_t ____handle_0;
	// System.Boolean builtin_interfaces.msg.Time::disposed
	bool ___disposed_2;
	// System.Int32 builtin_interfaces.msg.Time::<Sec>k__BackingField
	int32_t ___U3CSecU3Ek__BackingField_3;
	// System.UInt32 builtin_interfaces.msg.Time::<Nanosec>k__BackingField
	uint32_t ___U3CNanosecU3Ek__BackingField_4;
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

// rosgraph_msgs.msg.Clock/NativeCreateNativeMessageType
struct NativeCreateNativeMessageType_t392BF2E7FDEA3A65F46BD9238C642DAFBE6842CC  : public MulticastDelegate_t
{
};

// rosgraph_msgs.msg.Clock/NativeDestroyNativeMessageType
struct NativeDestroyNativeMessageType_t0FEFE939B219074FB3A8D25677CAE470CBF3718F  : public MulticastDelegate_t
{
};

// rosgraph_msgs.msg.Clock/NativeGetNestedHandleClock_Type
struct NativeGetNestedHandleClock_Type_t51F6A57C85332ECCAA54574C685AB8DC896719AB  : public MulticastDelegate_t
{
};

// rosgraph_msgs.msg.Clock/NativeGetTypeSupportType
struct NativeGetTypeSupportType_tC7B899608CD1CA3015E9307E8CE7CC2EBBDD8EA8  : public MulticastDelegate_t
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

// rosgraph_msgs.msg.Clock
struct Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2_StaticFields
{
	// ROS2.DllLoadUtils rosgraph_msgs.msg.Clock::dllLoadUtils
	RuntimeObject* ___dllLoadUtils_1;
	// rosgraph_msgs.msg.Clock/NativeGetTypeSupportType rosgraph_msgs.msg.Clock::native_get_typesupport
	NativeGetTypeSupportType_tC7B899608CD1CA3015E9307E8CE7CC2EBBDD8EA8* ___native_get_typesupport_4;
	// rosgraph_msgs.msg.Clock/NativeCreateNativeMessageType rosgraph_msgs.msg.Clock::native_create_native_message
	NativeCreateNativeMessageType_t392BF2E7FDEA3A65F46BD9238C642DAFBE6842CC* ___native_create_native_message_5;
	// rosgraph_msgs.msg.Clock/NativeDestroyNativeMessageType rosgraph_msgs.msg.Clock::native_destroy_native_message
	NativeDestroyNativeMessageType_t0FEFE939B219074FB3A8D25677CAE470CBF3718F* ___native_destroy_native_message_6;
	// rosgraph_msgs.msg.Clock/NativeGetNestedHandleClock_Type rosgraph_msgs.msg.Clock::native_get_nested_message_handle_clock
	NativeGetNestedHandleClock_Type_t51F6A57C85332ECCAA54574C685AB8DC896719AB* ___native_get_nested_message_handle_clock_7;
};

// rosgraph_msgs.msg.Clock

// System.Delegate

// System.Delegate

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// builtin_interfaces.msg.Time
struct Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_StaticFields
{
	// ROS2.DllLoadUtils builtin_interfaces.msg.Time::dllLoadUtils
	RuntimeObject* ___dllLoadUtils_1;
	// builtin_interfaces.msg.Time/NativeGetTypeSupportType builtin_interfaces.msg.Time::native_get_typesupport
	NativeGetTypeSupportType_t63782EF21498CB0633F23315B3ED307098D8C106* ___native_get_typesupport_5;
	// builtin_interfaces.msg.Time/NativeCreateNativeMessageType builtin_interfaces.msg.Time::native_create_native_message
	NativeCreateNativeMessageType_t762632B2C8CF227E63BA1D20B346B64492793054* ___native_create_native_message_6;
	// builtin_interfaces.msg.Time/NativeDestroyNativeMessageType builtin_interfaces.msg.Time::native_destroy_native_message
	NativeDestroyNativeMessageType_t7459C33DB752D86695AA046FE5339029AD797B04* ___native_destroy_native_message_7;
	// builtin_interfaces.msg.Time/NativeReadFieldSecType builtin_interfaces.msg.Time::native_read_field_sec
	NativeReadFieldSecType_t3470747120F9BFC5B6289A0B9E6F28EFA7ED099F* ___native_read_field_sec_8;
	// builtin_interfaces.msg.Time/NativeWriteFieldSecType builtin_interfaces.msg.Time::native_write_field_sec
	NativeWriteFieldSecType_t93D0F4573A3D133A711AEBD65821FD8462365348* ___native_write_field_sec_9;
	// builtin_interfaces.msg.Time/NativeReadFieldNanosecType builtin_interfaces.msg.Time::native_read_field_nanosec
	NativeReadFieldNanosecType_t97EDBC81AAA04CCAC1B23D0B2B78C393C0DA91DB* ___native_read_field_nanosec_10;
	// builtin_interfaces.msg.Time/NativeWriteFieldNanosecType builtin_interfaces.msg.Time::native_write_field_nanosec
	NativeWriteFieldNanosecType_t5E0AE928ADDF2C29C3B07EDD132D94E839372856* ___native_write_field_nanosec_11;
};

// builtin_interfaces.msg.Time

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

// rosgraph_msgs.msg.Clock/NativeCreateNativeMessageType

// rosgraph_msgs.msg.Clock/NativeCreateNativeMessageType

// rosgraph_msgs.msg.Clock/NativeDestroyNativeMessageType

// rosgraph_msgs.msg.Clock/NativeDestroyNativeMessageType

// rosgraph_msgs.msg.Clock/NativeGetNestedHandleClock_Type

// rosgraph_msgs.msg.Clock/NativeGetNestedHandleClock_Type

// rosgraph_msgs.msg.Clock/NativeGetTypeSupportType

// rosgraph_msgs.msg.Clock/NativeGetTypeSupportType
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
// System.Void rosgraph_msgs.msg.Clock::MessageTypeSupportPreload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Clock_MessageTypeSupportPreload_m57F71F78DB533CDD620DDFF2B81604B6828982F4 (const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Delegate System.Runtime.InteropServices.Marshal::GetDelegateForFunctionPointer(System.IntPtr,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304 (intptr_t ___0_ptr, Type_t* ___1_t, const RuntimeMethod* method) ;
// System.IntPtr rosgraph_msgs.msg.Clock/NativeGetTypeSupportType::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t NativeGetTypeSupportType_Invoke_mB8A70671442F95698A43513D500BBAF2AD5DA7EB_inline (NativeGetTypeSupportType_tC7B899608CD1CA3015E9307E8CE7CC2EBBDD8EA8* __this, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271 (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.IntPtr rosgraph_msgs.msg.Clock/NativeCreateNativeMessageType::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t NativeCreateNativeMessageType_Invoke_m46F76673912B70FCFF26D46FCF0EA88FBFEAC350_inline (NativeCreateNativeMessageType_t392BF2E7FDEA3A65F46BD9238C642DAFBE6842CC* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void builtin_interfaces.msg.Time::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time__ctor_mEA5E7E5A128C871F3C464EF2DFAC2A9C96ABD293 (Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E* __this, const RuntimeMethod* method) ;
// System.Void rosgraph_msgs.msg.Clock::set_Clock_(builtin_interfaces.msg.Time)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Clock_set_Clock__m2733513541695411E9B96B23D24EA74348066B93_inline (Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2* __this, Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E* ___0_value, const RuntimeMethod* method) ;
// System.IntPtr rosgraph_msgs.msg.Clock::get_Handle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Clock_get_Handle_m20C3D896104BA7B1A3498BA05175DB7799E7138B (Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2* __this, const RuntimeMethod* method) ;
// System.Void rosgraph_msgs.msg.Clock::ReadNativeMessage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Clock_ReadNativeMessage_mE6907AE98786E0E364BF99F07F69E01F3AEC3ACB (Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2* __this, intptr_t ___0_handle, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// builtin_interfaces.msg.Time rosgraph_msgs.msg.Clock::get_Clock_()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E* Clock_get_Clock__m7A12D966191A7128783D00FCF08B3B47BC11B171_inline (Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2* __this, const RuntimeMethod* method) ;
// System.IntPtr rosgraph_msgs.msg.Clock/NativeGetNestedHandleClock_Type::Invoke(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t NativeGetNestedHandleClock_Type_Invoke_mF7E1FF9770039DAF437F93431E8200521C5E74E3_inline (NativeGetNestedHandleClock_Type_t51F6A57C85332ECCAA54574C685AB8DC896719AB* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method) ;
// System.Void builtin_interfaces.msg.Time::ReadNativeMessage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_ReadNativeMessage_m39165E35484A65FF9C453952AC4D1532D80FBA88 (Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E* __this, intptr_t ___0_handle, const RuntimeMethod* method) ;
// System.Void rosgraph_msgs.msg.Clock::WriteNativeMessage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Clock_WriteNativeMessage_m76D025AAE6639C5610D60906B50FD081DA45CCF0 (Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2* __this, intptr_t ___0_handle, const RuntimeMethod* method) ;
// System.Void builtin_interfaces.msg.Time::WriteNativeMessage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_WriteNativeMessage_m65AE23FBA6AE3D2DC1A5F34AF1B3ABFCE2807BBB (Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E* __this, intptr_t ___0_handle, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.Void rosgraph_msgs.msg.Clock/NativeDestroyNativeMessageType::Invoke(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeDestroyNativeMessageType_Invoke_mCEF89708A29C4E77C2A25ADC27F6635BC7B28E71_inline (NativeDestroyNativeMessageType_t0FEFE939B219074FB3A8D25677CAE470CBF3718F* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void rosgraph_msgs.msg.Clock::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Clock_Dispose_m78D076751F1BFEF58995CD9A388337B085F808E5 (Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2* __this, const RuntimeMethod* method) ;
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
// System.Boolean rosgraph_msgs.msg.Clock::get_IsDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Clock_get_IsDisposed_m884D20099F4CD90071B04DB2557F1BC01D3902EA (Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___disposed_2;
		return L_0;
	}
}
// builtin_interfaces.msg.Time rosgraph_msgs.msg.Clock::get_Clock_()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E* Clock_get_Clock__m7A12D966191A7128783D00FCF08B3B47BC11B171 (Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2* __this, const RuntimeMethod* method) 
{
	{
		Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E* L_0 = __this->___U3CClock_U3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void rosgraph_msgs.msg.Clock::set_Clock_(builtin_interfaces.msg.Time)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Clock_set_Clock__m2733513541695411E9B96B23D24EA74348066B93 (Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2* __this, Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E* ___0_value, const RuntimeMethod* method) 
{
	{
		Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E* L_0 = ___0_value;
		__this->___U3CClock_U3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CClock_U3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Void rosgraph_msgs.msg.Clock::MessageTypeSupportPreload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Clock_MessageTypeSupportPreload_m57F71F78DB533CDD620DDFF2B81604B6828982F4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeInformation_tB2DFA85FB9251AE3A3112904C9DF06C30D1D3EAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral331C2AE40A11FD125142F1CB87DC691E1E798746);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B18A3E5160ED541A2344733BA0632FE0BF744F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45E0D55EC3EB78DB5CDC3060033C52CDA57E866C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D281A92A54C963F9CFA38B0397F12FEC1BCDFC0);
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
		L_10 = InterfaceFuncInvoker1< intptr_t, String_t* >::Invoke(1 /* System.IntPtr ROS2.DllLoadUtils::LoadLibraryNoSuffix(System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_9, _stringLiteral45E0D55EC3EB78DB5CDC3060033C52CDA57E866C);
		NullCheck(L_9);
		intptr_t L_11;
		L_11 = InterfaceFuncInvoker1< intptr_t, String_t* >::Invoke(1 /* System.IntPtr ROS2.DllLoadUtils::LoadLibraryNoSuffix(System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_9, _stringLiteral9D281A92A54C963F9CFA38B0397F12FEC1BCDFC0);
	}

IL_0060:
	{
		return;
	}
}
// System.Void rosgraph_msgs.msg.Clock::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Clock__cctor_mC1653E35F1999317C72B15D2974A93D1B90B376D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeCreateNativeMessageType_t392BF2E7FDEA3A65F46BD9238C642DAFBE6842CC_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeCreateNativeMessageType_t392BF2E7FDEA3A65F46BD9238C642DAFBE6842CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeDestroyNativeMessageType_t0FEFE939B219074FB3A8D25677CAE470CBF3718F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeDestroyNativeMessageType_t0FEFE939B219074FB3A8D25677CAE470CBF3718F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGetNestedHandleClock_Type_t51F6A57C85332ECCAA54574C685AB8DC896719AB_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGetNestedHandleClock_Type_t51F6A57C85332ECCAA54574C685AB8DC896719AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGetTypeSupportType_tC7B899608CD1CA3015E9307E8CE7CC2EBBDD8EA8_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGetTypeSupportType_tC7B899608CD1CA3015E9307E8CE7CC2EBBDD8EA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral200CC1A53038788B81DB33A4D149D576E581067E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39B253F9002BAE0C48DFCFF402DA3D353D687FD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48AA9159062FCC55AABFE84E3BA428A64AC7E123);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71FDD9F029C03DA165549AD49CB4D97B9A548502);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98C097CF8F3A9CE7F58F21A2833E2CD04852D680);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8F34F5DC2A8EF9D1EB37A3D71170C8BB9195652);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE49AACF10B662A9EC65B8E3BE7253D9AEEE7A0FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF764304A5D2ED487C2C6CD59D163F8483232808);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0;
		L_0 = DllLoadUtilsFactory_GetDllLoadUtils_m8EB2D6E40DBF00ED8E25114CAABFFFCF16286775(NULL);
		((Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2_StaticFields*)il2cpp_codegen_static_fields_for(Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2_il2cpp_TypeInfo_var))->___dllLoadUtils_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2_StaticFields*)il2cpp_codegen_static_fields_for(Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2_il2cpp_TypeInfo_var))->___dllLoadUtils_1), (void*)L_0);
		RuntimeObject* L_1 = ((Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2_StaticFields*)il2cpp_codegen_static_fields_for(Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2_il2cpp_TypeInfo_var))->___dllLoadUtils_1;
		NullCheck(L_1);
		intptr_t L_2;
		L_2 = InterfaceFuncInvoker1< intptr_t, String_t* >::Invoke(1 /* System.IntPtr ROS2.DllLoadUtils::LoadLibraryNoSuffix(System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_1, _stringLiteral98C097CF8F3A9CE7F58F21A2833E2CD04852D680);
		RuntimeObject* L_3 = ((Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2_StaticFields*)il2cpp_codegen_static_fields_for(Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2_il2cpp_TypeInfo_var))->___dllLoadUtils_1;
		NullCheck(L_3);
		intptr_t L_4;
		L_4 = InterfaceFuncInvoker1< intptr_t, String_t* >::Invoke(1 /* System.IntPtr ROS2.DllLoadUtils::LoadLibraryNoSuffix(System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_3, _stringLiteral71FDD9F029C03DA165549AD49CB4D97B9A548502);
		RuntimeObject* L_5 = ((Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2_StaticFields*)il2cpp_codegen_static_fields_for(Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2_il2cpp_TypeInfo_var))->___dllLoadUtils_1;
		NullCheck(L_5);
		intptr_t L_6;
		L_6 = InterfaceFuncInvoker1< intptr_t, String_t* >::Invoke(1 /* System.IntPtr ROS2.DllLoadUtils::LoadLibraryNoSuffix(System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_5, _stringLiteralE49AACF10B662A9EC65B8E3BE7253D9AEEE7A0FD);
		Clock_MessageTypeSupportPreload_m57F71F78DB533CDD620DDFF2B81604B6828982F4(NULL);
		RuntimeObject* L_7 = ((Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2_StaticFields*)il2cpp_codegen_static_fields_for(Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2_il2cpp_TypeInfo_var))->___dllLoadUtils_1;
		NullCheck(L_7);
		intptr_t L_8;
		L_8 = InterfaceFuncInvoker1< intptr_t, String_t* >::Invoke(0 /* System.IntPtr ROS2.DllLoadUtils::LoadLibrary(System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_7, _stringLiteral48AA9159062FCC55AABFE84E3BA428A64AC7E123);
		V_0 = L_8;
		RuntimeObject* L_9 = ((Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2_StaticFields*)il2cpp_codegen_static_fields_for(Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2_il2cpp_TypeInfo_var))->___dllLoadUtils_1;
		intptr_t L_10 = V_0;
		NullCheck(L_9);
		intptr_t L_11;
		L_11 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_9, L_10, _stringLiteral200CC1A53038788B81DB33A4D149D576E581067E);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (NativeGetTypeSupportType_tC7B899608CD1CA3015E9307E8CE7CC2EBBDD8EA8_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Delegate_t* L_14;
		L_14 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_11, L_13, NULL);
		((Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2_StaticFields*)il2cpp_codegen_static_fields_for(Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2_il2cpp_TypeInfo_var))->___native_get_typesupport_4 = ((NativeGetTypeSupportType_tC7B899608CD1CA3015E9307E8CE7CC2EBBDD8EA8*)CastclassSealed((RuntimeObject*)L_14, NativeGetTypeSupportType_tC7B899608CD1CA3015E9307E8CE7CC2EBBDD8EA8_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2_StaticFields*)il2cpp_codegen_static_fields_for(Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2_il2cpp_TypeInfo_var))->___native_get_typesupport_4), (void*)((NativeGetTypeSupportType_tC7B899608CD1CA3015E9307E8CE7CC2EBBDD8EA8*)CastclassSealed((RuntimeObject*)L_14, NativeGetTypeSupportType_tC7B899608CD1CA3015E9307E8CE7CC2EBBDD8EA8_il2cpp_TypeInfo_var)));
		RuntimeObject* L_15 = ((Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2_StaticFields*)il2cpp_codegen_static_fields_for(Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2_il2cpp_TypeInfo_var))->___dllLoadUtils_1;
		intptr_t L_16 = V_0;
		NullCheck(L_15);
		intptr_t L_17;
		L_17 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_15, L_16, _stringLiteralD8F34F5DC2A8EF9D1EB37A3D71170C8BB9195652);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (NativeCreateNativeMessageType_t392BF2E7FDEA3A65F46BD9238C642DAFBE6842CC_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		Delegate_t* L_20;
		L_20 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_17, L_19, NULL);
		((Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2_StaticFields*)il2cpp_codegen_static_fields_for(Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2_il2cpp_TypeInfo_var))->___native_create_native_message_5 = ((NativeCreateNativeMessageType_t392BF2E7FDEA3A65F46BD9238C642DAFBE6842CC*)CastclassSealed((RuntimeObject*)L_20, NativeCreateNativeMessageType_t392BF2E7FDEA3A65F46BD9238C642DAFBE6842CC_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2_StaticFields*)il2cpp_codegen_static_fields_for(Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2_il2cpp_TypeInfo_var))->___native_create_native_message_5), (void*)((NativeCreateNativeMessageType_t392BF2E7FDEA3A65F46BD9238C642DAFBE6842CC*)CastclassSealed((RuntimeObject*)L_20, NativeCreateNativeMessageType_t392BF2E7FDEA3A65F46BD9238C642DAFBE6842CC_il2cpp_TypeInfo_var)));
		RuntimeObject* L_21 = ((Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2_StaticFields*)il2cpp_codegen_static_fields_for(Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2_il2cpp_TypeInfo_var))->___dllLoadUtils_1;
		intptr_t L_22 = V_0;
		NullCheck(L_21);
		intptr_t L_23;
		L_23 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_21, L_22, _stringLiteralFF764304A5D2ED487C2C6CD59D163F8483232808);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (NativeDestroyNativeMessageType_t0FEFE939B219074FB3A8D25677CAE470CBF3718F_0_0_0_var) };
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		Delegate_t* L_26;
		L_26 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_23, L_25, NULL);
		((Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2_StaticFields*)il2cpp_codegen_static_fields_for(Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2_il2cpp_TypeInfo_var))->___native_destroy_native_message_6 = ((NativeDestroyNativeMessageType_t0FEFE939B219074FB3A8D25677CAE470CBF3718F*)CastclassSealed((RuntimeObject*)L_26, NativeDestroyNativeMessageType_t0FEFE939B219074FB3A8D25677CAE470CBF3718F_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2_StaticFields*)il2cpp_codegen_static_fields_for(Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2_il2cpp_TypeInfo_var))->___native_destroy_native_message_6), (void*)((NativeDestroyNativeMessageType_t0FEFE939B219074FB3A8D25677CAE470CBF3718F*)CastclassSealed((RuntimeObject*)L_26, NativeDestroyNativeMessageType_t0FEFE939B219074FB3A8D25677CAE470CBF3718F_il2cpp_TypeInfo_var)));
		RuntimeObject* L_27 = ((Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2_StaticFields*)il2cpp_codegen_static_fields_for(Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2_il2cpp_TypeInfo_var))->___dllLoadUtils_1;
		intptr_t L_28 = V_0;
		NullCheck(L_27);
		intptr_t L_29;
		L_29 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_27, L_28, _stringLiteral39B253F9002BAE0C48DFCFF402DA3D353D687FD0);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (NativeGetNestedHandleClock_Type_t51F6A57C85332ECCAA54574C685AB8DC896719AB_0_0_0_var) };
		Type_t* L_31;
		L_31 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_30, NULL);
		Delegate_t* L_32;
		L_32 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_29, L_31, NULL);
		((Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2_StaticFields*)il2cpp_codegen_static_fields_for(Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2_il2cpp_TypeInfo_var))->___native_get_nested_message_handle_clock_7 = ((NativeGetNestedHandleClock_Type_t51F6A57C85332ECCAA54574C685AB8DC896719AB*)CastclassSealed((RuntimeObject*)L_32, NativeGetNestedHandleClock_Type_t51F6A57C85332ECCAA54574C685AB8DC896719AB_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2_StaticFields*)il2cpp_codegen_static_fields_for(Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2_il2cpp_TypeInfo_var))->___native_get_nested_message_handle_clock_7), (void*)((NativeGetNestedHandleClock_Type_t51F6A57C85332ECCAA54574C685AB8DC896719AB*)CastclassSealed((RuntimeObject*)L_32, NativeGetNestedHandleClock_Type_t51F6A57C85332ECCAA54574C685AB8DC896719AB_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.IntPtr rosgraph_msgs.msg.Clock::get_TypeSupportHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Clock_get_TypeSupportHandle_m13EA2373EBFE6A8D9362E08FED7791D1CDD2E671 (Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2_il2cpp_TypeInfo_var);
		NativeGetTypeSupportType_tC7B899608CD1CA3015E9307E8CE7CC2EBBDD8EA8* L_0 = ((Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2_StaticFields*)il2cpp_codegen_static_fields_for(Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2_il2cpp_TypeInfo_var))->___native_get_typesupport_4;
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = NativeGetTypeSupportType_Invoke_mB8A70671442F95698A43513D500BBAF2AD5DA7EB_inline(L_0, NULL);
		return L_1;
	}
}
// System.IntPtr rosgraph_msgs.msg.Clock::get_Handle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Clock_get_Handle_m20C3D896104BA7B1A3498BA05175DB7799E7138B (Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2_il2cpp_TypeInfo_var);
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
		il2cpp_codegen_runtime_class_init_inline(Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2_il2cpp_TypeInfo_var);
		NativeCreateNativeMessageType_t392BF2E7FDEA3A65F46BD9238C642DAFBE6842CC* L_3 = ((Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2_StaticFields*)il2cpp_codegen_static_fields_for(Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2_il2cpp_TypeInfo_var))->___native_create_native_message_5;
		NullCheck(L_3);
		intptr_t L_4;
		L_4 = NativeCreateNativeMessageType_Invoke_m46F76673912B70FCFF26D46FCF0EA88FBFEAC350_inline(L_3, NULL);
		__this->____handle_0 = L_4;
	}

IL_0022:
	{
		intptr_t L_5 = __this->____handle_0;
		return L_5;
	}
}
// System.Void rosgraph_msgs.msg.Clock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Clock__ctor_m41ED0FD09FD25512CBEC656F78BC65A8F0F2F68F (Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E* L_0 = (Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E*)il2cpp_codegen_object_new(Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Time__ctor_mEA5E7E5A128C871F3C464EF2DFAC2A9C96ABD293(L_0, NULL);
		Clock_set_Clock__m2733513541695411E9B96B23D24EA74348066B93_inline(__this, L_0, NULL);
		return;
	}
}
// System.Void rosgraph_msgs.msg.Clock::ReadNativeMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Clock_ReadNativeMessage_mC266BEAEC640B66589348A5C3627D34308D73BAB (Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0;
		L_0 = Clock_get_Handle_m20C3D896104BA7B1A3498BA05175DB7799E7138B(__this, NULL);
		Clock_ReadNativeMessage_mE6907AE98786E0E364BF99F07F69E01F3AEC3ACB(__this, L_0, NULL);
		return;
	}
}
// System.Void rosgraph_msgs.msg.Clock::ReadNativeMessage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Clock_ReadNativeMessage_mE6907AE98786E0E364BF99F07F69E01F3AEC3ACB (Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2* __this, intptr_t ___0_handle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2_il2cpp_TypeInfo_var);
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Clock_ReadNativeMessage_mE6907AE98786E0E364BF99F07F69E01F3AEC3ACB_RuntimeMethod_var)));
	}

IL_0018:
	{
		Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E* L_4;
		L_4 = Clock_get_Clock__m7A12D966191A7128783D00FCF08B3B47BC11B171_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2_il2cpp_TypeInfo_var);
		NativeGetNestedHandleClock_Type_t51F6A57C85332ECCAA54574C685AB8DC896719AB* L_5 = ((Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2_StaticFields*)il2cpp_codegen_static_fields_for(Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2_il2cpp_TypeInfo_var))->___native_get_nested_message_handle_clock_7;
		intptr_t L_6 = ___0_handle;
		NullCheck(L_5);
		intptr_t L_7;
		L_7 = NativeGetNestedHandleClock_Type_Invoke_mF7E1FF9770039DAF437F93431E8200521C5E74E3_inline(L_5, L_6, NULL);
		NullCheck(L_4);
		Time_ReadNativeMessage_m39165E35484A65FF9C453952AC4D1532D80FBA88(L_4, L_7, NULL);
		return;
	}
}
// System.Void rosgraph_msgs.msg.Clock::WriteNativeMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Clock_WriteNativeMessage_m885DDCB3D91508501F5377AC3CC8E30D3CB63D98 (Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2_il2cpp_TypeInfo_var);
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
		il2cpp_codegen_runtime_class_init_inline(Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2_il2cpp_TypeInfo_var);
		NativeCreateNativeMessageType_t392BF2E7FDEA3A65F46BD9238C642DAFBE6842CC* L_3 = ((Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2_StaticFields*)il2cpp_codegen_static_fields_for(Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2_il2cpp_TypeInfo_var))->___native_create_native_message_5;
		NullCheck(L_3);
		intptr_t L_4;
		L_4 = NativeCreateNativeMessageType_Invoke_m46F76673912B70FCFF26D46FCF0EA88FBFEAC350_inline(L_3, NULL);
		__this->____handle_0 = L_4;
	}

IL_0022:
	{
		intptr_t L_5;
		L_5 = Clock_get_Handle_m20C3D896104BA7B1A3498BA05175DB7799E7138B(__this, NULL);
		Clock_WriteNativeMessage_m76D025AAE6639C5610D60906B50FD081DA45CCF0(__this, L_5, NULL);
		return;
	}
}
// System.Void rosgraph_msgs.msg.Clock::WriteNativeMessage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Clock_WriteNativeMessage_m76D025AAE6639C5610D60906B50FD081DA45CCF0 (Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2* __this, intptr_t ___0_handle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2_il2cpp_TypeInfo_var);
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Clock_WriteNativeMessage_m76D025AAE6639C5610D60906B50FD081DA45CCF0_RuntimeMethod_var)));
	}

IL_0018:
	{
		Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E* L_4;
		L_4 = Clock_get_Clock__m7A12D966191A7128783D00FCF08B3B47BC11B171_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2_il2cpp_TypeInfo_var);
		NativeGetNestedHandleClock_Type_t51F6A57C85332ECCAA54574C685AB8DC896719AB* L_5 = ((Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2_StaticFields*)il2cpp_codegen_static_fields_for(Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2_il2cpp_TypeInfo_var))->___native_get_nested_message_handle_clock_7;
		intptr_t L_6 = ___0_handle;
		NullCheck(L_5);
		intptr_t L_7;
		L_7 = NativeGetNestedHandleClock_Type_Invoke_mF7E1FF9770039DAF437F93431E8200521C5E74E3_inline(L_5, L_6, NULL);
		NullCheck(L_4);
		Time_WriteNativeMessage_m65AE23FBA6AE3D2DC1A5F34AF1B3ABFCE2807BBB(L_4, L_7, NULL);
		return;
	}
}
// System.Void rosgraph_msgs.msg.Clock::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Clock_Dispose_m78D076751F1BFEF58995CD9A388337B085F808E5 (Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2_il2cpp_TypeInfo_var);
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
		il2cpp_codegen_runtime_class_init_inline(Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2_il2cpp_TypeInfo_var);
		NativeDestroyNativeMessageType_t0FEFE939B219074FB3A8D25677CAE470CBF3718F* L_4 = ((Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2_StaticFields*)il2cpp_codegen_static_fields_for(Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2_il2cpp_TypeInfo_var))->___native_destroy_native_message_6;
		intptr_t L_5 = __this->____handle_0;
		NullCheck(L_4);
		NativeDestroyNativeMessageType_Invoke_mCEF89708A29C4E77C2A25ADC27F6635BC7B28E71_inline(L_4, L_5, NULL);
		intptr_t L_6 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->____handle_0 = L_6;
		__this->___disposed_2 = (bool)1;
	}

IL_003c:
	{
		return;
	}
}
// System.Void rosgraph_msgs.msg.Clock::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Clock_Finalize_mD55A57A34BEB878355CB035EE0D4AA2E2224976A (Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2* __this, const RuntimeMethod* method) 
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
			Clock_Dispose_m78D076751F1BFEF58995CD9A388337B085F808E5(__this, NULL);
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
intptr_t NativeGetTypeSupportType_Invoke_mB8A70671442F95698A43513D500BBAF2AD5DA7EB_Multicast(NativeGetTypeSupportType_tC7B899608CD1CA3015E9307E8CE7CC2EBBDD8EA8* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	intptr_t retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		NativeGetTypeSupportType_tC7B899608CD1CA3015E9307E8CE7CC2EBBDD8EA8* currentDelegate = reinterpret_cast<NativeGetTypeSupportType_tC7B899608CD1CA3015E9307E8CE7CC2EBBDD8EA8*>(delegatesToInvoke[i]);
		typedef intptr_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
intptr_t NativeGetTypeSupportType_Invoke_mB8A70671442F95698A43513D500BBAF2AD5DA7EB_OpenInst(NativeGetTypeSupportType_tC7B899608CD1CA3015E9307E8CE7CC2EBBDD8EA8* __this, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
intptr_t NativeGetTypeSupportType_Invoke_mB8A70671442F95698A43513D500BBAF2AD5DA7EB_OpenStatic(NativeGetTypeSupportType_tC7B899608CD1CA3015E9307E8CE7CC2EBBDD8EA8* __this, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
intptr_t NativeGetTypeSupportType_Invoke_mB8A70671442F95698A43513D500BBAF2AD5DA7EB_OpenStaticInvoker(NativeGetTypeSupportType_tC7B899608CD1CA3015E9307E8CE7CC2EBBDD8EA8* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker0< intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL);
}
intptr_t NativeGetTypeSupportType_Invoke_mB8A70671442F95698A43513D500BBAF2AD5DA7EB_ClosedStaticInvoker(NativeGetTypeSupportType_tC7B899608CD1CA3015E9307E8CE7CC2EBBDD8EA8* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< intptr_t, RuntimeObject* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_NativeGetTypeSupportType_tC7B899608CD1CA3015E9307E8CE7CC2EBBDD8EA8 (NativeGetTypeSupportType_tC7B899608CD1CA3015E9307E8CE7CC2EBBDD8EA8* __this, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc();

	return returnValue;
}
// System.Void rosgraph_msgs.msg.Clock/NativeGetTypeSupportType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGetTypeSupportType__ctor_m9516206F8E47FE9A6979F20C139860D4CE058B5E (NativeGetTypeSupportType_tC7B899608CD1CA3015E9307E8CE7CC2EBBDD8EA8* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&NativeGetTypeSupportType_Invoke_mB8A70671442F95698A43513D500BBAF2AD5DA7EB_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&NativeGetTypeSupportType_Invoke_mB8A70671442F95698A43513D500BBAF2AD5DA7EB_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NativeGetTypeSupportType_Invoke_mB8A70671442F95698A43513D500BBAF2AD5DA7EB_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&NativeGetTypeSupportType_Invoke_mB8A70671442F95698A43513D500BBAF2AD5DA7EB_Multicast;
}
// System.IntPtr rosgraph_msgs.msg.Clock/NativeGetTypeSupportType::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeGetTypeSupportType_Invoke_mB8A70671442F95698A43513D500BBAF2AD5DA7EB (NativeGetTypeSupportType_tC7B899608CD1CA3015E9307E8CE7CC2EBBDD8EA8* __this, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult rosgraph_msgs.msg.Clock/NativeGetTypeSupportType::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeGetTypeSupportType_BeginInvoke_m04EE163DB2DCCE4B10A58CE21C210CD0981BB6E4 (NativeGetTypeSupportType_tC7B899608CD1CA3015E9307E8CE7CC2EBBDD8EA8* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// System.IntPtr rosgraph_msgs.msg.Clock/NativeGetTypeSupportType::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeGetTypeSupportType_EndInvoke_m41B645460D050272B5658C1CA70E6A87DBDD4D73 (NativeGetTypeSupportType_tC7B899608CD1CA3015E9307E8CE7CC2EBBDD8EA8* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
intptr_t NativeCreateNativeMessageType_Invoke_m46F76673912B70FCFF26D46FCF0EA88FBFEAC350_Multicast(NativeCreateNativeMessageType_t392BF2E7FDEA3A65F46BD9238C642DAFBE6842CC* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	intptr_t retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		NativeCreateNativeMessageType_t392BF2E7FDEA3A65F46BD9238C642DAFBE6842CC* currentDelegate = reinterpret_cast<NativeCreateNativeMessageType_t392BF2E7FDEA3A65F46BD9238C642DAFBE6842CC*>(delegatesToInvoke[i]);
		typedef intptr_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
intptr_t NativeCreateNativeMessageType_Invoke_m46F76673912B70FCFF26D46FCF0EA88FBFEAC350_OpenInst(NativeCreateNativeMessageType_t392BF2E7FDEA3A65F46BD9238C642DAFBE6842CC* __this, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
intptr_t NativeCreateNativeMessageType_Invoke_m46F76673912B70FCFF26D46FCF0EA88FBFEAC350_OpenStatic(NativeCreateNativeMessageType_t392BF2E7FDEA3A65F46BD9238C642DAFBE6842CC* __this, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
intptr_t NativeCreateNativeMessageType_Invoke_m46F76673912B70FCFF26D46FCF0EA88FBFEAC350_OpenStaticInvoker(NativeCreateNativeMessageType_t392BF2E7FDEA3A65F46BD9238C642DAFBE6842CC* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker0< intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL);
}
intptr_t NativeCreateNativeMessageType_Invoke_m46F76673912B70FCFF26D46FCF0EA88FBFEAC350_ClosedStaticInvoker(NativeCreateNativeMessageType_t392BF2E7FDEA3A65F46BD9238C642DAFBE6842CC* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< intptr_t, RuntimeObject* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_NativeCreateNativeMessageType_t392BF2E7FDEA3A65F46BD9238C642DAFBE6842CC (NativeCreateNativeMessageType_t392BF2E7FDEA3A65F46BD9238C642DAFBE6842CC* __this, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc();

	return returnValue;
}
// System.Void rosgraph_msgs.msg.Clock/NativeCreateNativeMessageType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCreateNativeMessageType__ctor_m56C021DCF2A57D106DBEF5EF94AE54DC018BA576 (NativeCreateNativeMessageType_t392BF2E7FDEA3A65F46BD9238C642DAFBE6842CC* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&NativeCreateNativeMessageType_Invoke_m46F76673912B70FCFF26D46FCF0EA88FBFEAC350_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&NativeCreateNativeMessageType_Invoke_m46F76673912B70FCFF26D46FCF0EA88FBFEAC350_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NativeCreateNativeMessageType_Invoke_m46F76673912B70FCFF26D46FCF0EA88FBFEAC350_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&NativeCreateNativeMessageType_Invoke_m46F76673912B70FCFF26D46FCF0EA88FBFEAC350_Multicast;
}
// System.IntPtr rosgraph_msgs.msg.Clock/NativeCreateNativeMessageType::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeCreateNativeMessageType_Invoke_m46F76673912B70FCFF26D46FCF0EA88FBFEAC350 (NativeCreateNativeMessageType_t392BF2E7FDEA3A65F46BD9238C642DAFBE6842CC* __this, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult rosgraph_msgs.msg.Clock/NativeCreateNativeMessageType::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeCreateNativeMessageType_BeginInvoke_m57B1142D26D5695ECC3204733702FCD78A7D8128 (NativeCreateNativeMessageType_t392BF2E7FDEA3A65F46BD9238C642DAFBE6842CC* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// System.IntPtr rosgraph_msgs.msg.Clock/NativeCreateNativeMessageType::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeCreateNativeMessageType_EndInvoke_m25B923180969C518C9624DBECCB6AA798387B20E (NativeCreateNativeMessageType_t392BF2E7FDEA3A65F46BD9238C642DAFBE6842CC* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
void NativeDestroyNativeMessageType_Invoke_mCEF89708A29C4E77C2A25ADC27F6635BC7B28E71_Multicast(NativeDestroyNativeMessageType_t0FEFE939B219074FB3A8D25677CAE470CBF3718F* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		NativeDestroyNativeMessageType_t0FEFE939B219074FB3A8D25677CAE470CBF3718F* currentDelegate = reinterpret_cast<NativeDestroyNativeMessageType_t0FEFE939B219074FB3A8D25677CAE470CBF3718F*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_messageHandle, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void NativeDestroyNativeMessageType_Invoke_mCEF89708A29C4E77C2A25ADC27F6635BC7B28E71_OpenInst(NativeDestroyNativeMessageType_t0FEFE939B219074FB3A8D25677CAE470CBF3718F* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_messageHandle, method);
}
void NativeDestroyNativeMessageType_Invoke_mCEF89708A29C4E77C2A25ADC27F6635BC7B28E71_OpenStatic(NativeDestroyNativeMessageType_t0FEFE939B219074FB3A8D25677CAE470CBF3718F* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_messageHandle, method);
}
void NativeDestroyNativeMessageType_Invoke_mCEF89708A29C4E77C2A25ADC27F6635BC7B28E71_OpenStaticInvoker(NativeDestroyNativeMessageType_t0FEFE939B219074FB3A8D25677CAE470CBF3718F* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	InvokerActionInvoker1< intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_messageHandle);
}
void NativeDestroyNativeMessageType_Invoke_mCEF89708A29C4E77C2A25ADC27F6635BC7B28E71_ClosedStaticInvoker(NativeDestroyNativeMessageType_t0FEFE939B219074FB3A8D25677CAE470CBF3718F* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_messageHandle);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_NativeDestroyNativeMessageType_t0FEFE939B219074FB3A8D25677CAE470CBF3718F (NativeDestroyNativeMessageType_t0FEFE939B219074FB3A8D25677CAE470CBF3718F* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_messageHandle);

}
// System.Void rosgraph_msgs.msg.Clock/NativeDestroyNativeMessageType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeDestroyNativeMessageType__ctor_m60FA4E3254B23BA2D350A50581F2BA0AD0A30FBF (NativeDestroyNativeMessageType_t0FEFE939B219074FB3A8D25677CAE470CBF3718F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&NativeDestroyNativeMessageType_Invoke_mCEF89708A29C4E77C2A25ADC27F6635BC7B28E71_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&NativeDestroyNativeMessageType_Invoke_mCEF89708A29C4E77C2A25ADC27F6635BC7B28E71_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NativeDestroyNativeMessageType_Invoke_mCEF89708A29C4E77C2A25ADC27F6635BC7B28E71_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&NativeDestroyNativeMessageType_Invoke_mCEF89708A29C4E77C2A25ADC27F6635BC7B28E71_Multicast;
}
// System.Void rosgraph_msgs.msg.Clock/NativeDestroyNativeMessageType::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeDestroyNativeMessageType_Invoke_mCEF89708A29C4E77C2A25ADC27F6635BC7B28E71 (NativeDestroyNativeMessageType_t0FEFE939B219074FB3A8D25677CAE470CBF3718F* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_messageHandle, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult rosgraph_msgs.msg.Clock/NativeDestroyNativeMessageType::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeDestroyNativeMessageType_BeginInvoke_m4EADF3E96E2FCF19B0E5D6CB422776FA447618B7 (NativeDestroyNativeMessageType_t0FEFE939B219074FB3A8D25677CAE470CBF3718F* __this, intptr_t ___0_messageHandle, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
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
// System.Void rosgraph_msgs.msg.Clock/NativeDestroyNativeMessageType::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeDestroyNativeMessageType_EndInvoke_mFADE66EF8A3A23A3AA6F3758CA0C9AC90D58405F (NativeDestroyNativeMessageType_t0FEFE939B219074FB3A8D25677CAE470CBF3718F* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
intptr_t NativeGetNestedHandleClock_Type_Invoke_mF7E1FF9770039DAF437F93431E8200521C5E74E3_Multicast(NativeGetNestedHandleClock_Type_t51F6A57C85332ECCAA54574C685AB8DC896719AB* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	intptr_t retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		NativeGetNestedHandleClock_Type_t51F6A57C85332ECCAA54574C685AB8DC896719AB* currentDelegate = reinterpret_cast<NativeGetNestedHandleClock_Type_t51F6A57C85332ECCAA54574C685AB8DC896719AB*>(delegatesToInvoke[i]);
		typedef intptr_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_messageHandle, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
intptr_t NativeGetNestedHandleClock_Type_Invoke_mF7E1FF9770039DAF437F93431E8200521C5E74E3_OpenInst(NativeGetNestedHandleClock_Type_t51F6A57C85332ECCAA54574C685AB8DC896719AB* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_messageHandle, method);
}
intptr_t NativeGetNestedHandleClock_Type_Invoke_mF7E1FF9770039DAF437F93431E8200521C5E74E3_OpenStatic(NativeGetNestedHandleClock_Type_t51F6A57C85332ECCAA54574C685AB8DC896719AB* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_messageHandle, method);
}
intptr_t NativeGetNestedHandleClock_Type_Invoke_mF7E1FF9770039DAF437F93431E8200521C5E74E3_OpenStaticInvoker(NativeGetNestedHandleClock_Type_t51F6A57C85332ECCAA54574C685AB8DC896719AB* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< intptr_t, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_messageHandle);
}
intptr_t NativeGetNestedHandleClock_Type_Invoke_mF7E1FF9770039DAF437F93431E8200521C5E74E3_ClosedStaticInvoker(NativeGetNestedHandleClock_Type_t51F6A57C85332ECCAA54574C685AB8DC896719AB* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< intptr_t, RuntimeObject*, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_messageHandle);
}
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_NativeGetNestedHandleClock_Type_t51F6A57C85332ECCAA54574C685AB8DC896719AB (NativeGetNestedHandleClock_Type_t51F6A57C85332ECCAA54574C685AB8DC896719AB* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___0_messageHandle);

	return returnValue;
}
// System.Void rosgraph_msgs.msg.Clock/NativeGetNestedHandleClock_Type::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGetNestedHandleClock_Type__ctor_m801548D4FEB7339CCC26022D8B7F2E6AAA41C376 (NativeGetNestedHandleClock_Type_t51F6A57C85332ECCAA54574C685AB8DC896719AB* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&NativeGetNestedHandleClock_Type_Invoke_mF7E1FF9770039DAF437F93431E8200521C5E74E3_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&NativeGetNestedHandleClock_Type_Invoke_mF7E1FF9770039DAF437F93431E8200521C5E74E3_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NativeGetNestedHandleClock_Type_Invoke_mF7E1FF9770039DAF437F93431E8200521C5E74E3_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&NativeGetNestedHandleClock_Type_Invoke_mF7E1FF9770039DAF437F93431E8200521C5E74E3_Multicast;
}
// System.IntPtr rosgraph_msgs.msg.Clock/NativeGetNestedHandleClock_Type::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeGetNestedHandleClock_Type_Invoke_mF7E1FF9770039DAF437F93431E8200521C5E74E3 (NativeGetNestedHandleClock_Type_t51F6A57C85332ECCAA54574C685AB8DC896719AB* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_messageHandle, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult rosgraph_msgs.msg.Clock/NativeGetNestedHandleClock_Type::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeGetNestedHandleClock_Type_BeginInvoke_m8E68F166A5B8C911DBA5D3F93F8E07EEB1E9E6C0 (NativeGetNestedHandleClock_Type_t51F6A57C85332ECCAA54574C685AB8DC896719AB* __this, intptr_t ___0_messageHandle, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
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
// System.IntPtr rosgraph_msgs.msg.Clock/NativeGetNestedHandleClock_Type::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeGetNestedHandleClock_Type_EndInvoke_m60C1F0CE361156A60972742FEAC3901EE537C257 (NativeGetNestedHandleClock_Type_t51F6A57C85332ECCAA54574C685AB8DC896719AB* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(intptr_t*)UnBox ((RuntimeObject*)__result);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t NativeGetTypeSupportType_Invoke_mB8A70671442F95698A43513D500BBAF2AD5DA7EB_inline (NativeGetTypeSupportType_tC7B899608CD1CA3015E9307E8CE7CC2EBBDD8EA8* __this, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t NativeCreateNativeMessageType_Invoke_m46F76673912B70FCFF26D46FCF0EA88FBFEAC350_inline (NativeCreateNativeMessageType_t392BF2E7FDEA3A65F46BD9238C642DAFBE6842CC* __this, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Clock_set_Clock__m2733513541695411E9B96B23D24EA74348066B93_inline (Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2* __this, Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E* ___0_value, const RuntimeMethod* method) 
{
	{
		Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E* L_0 = ___0_value;
		__this->___U3CClock_U3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CClock_U3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E* Clock_get_Clock__m7A12D966191A7128783D00FCF08B3B47BC11B171_inline (Clock_t1145C7FFD6CA3DA442BFDF31C60101A24EF62AD2* __this, const RuntimeMethod* method) 
{
	{
		Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E* L_0 = __this->___U3CClock_U3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t NativeGetNestedHandleClock_Type_Invoke_mF7E1FF9770039DAF437F93431E8200521C5E74E3_inline (NativeGetNestedHandleClock_Type_t51F6A57C85332ECCAA54574C685AB8DC896719AB* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_messageHandle, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeDestroyNativeMessageType_Invoke_mCEF89708A29C4E77C2A25ADC27F6635BC7B28E71_inline (NativeDestroyNativeMessageType_t0FEFE939B219074FB3A8D25677CAE470CBF3718F* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_messageHandle, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
