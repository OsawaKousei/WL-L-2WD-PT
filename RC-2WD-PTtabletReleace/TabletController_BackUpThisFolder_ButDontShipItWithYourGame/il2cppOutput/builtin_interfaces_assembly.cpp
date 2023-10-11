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
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// ROS2.DllLoadUtils
struct DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7;
// builtin_interfaces.msg.Duration
struct Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7;
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
// builtin_interfaces.msg.Duration/NativeCreateNativeMessageType
struct NativeCreateNativeMessageType_t58C9326D140137105184BC85233A5AF360A9046F;
// builtin_interfaces.msg.Duration/NativeDestroyNativeMessageType
struct NativeDestroyNativeMessageType_tD51BFA46C6FE30B2CB5B2A9071178DB5EB94D311;
// builtin_interfaces.msg.Duration/NativeGetTypeSupportType
struct NativeGetTypeSupportType_t3BFF2DDCB88133594DA42CCA63ADA5BBFD2045CE;
// builtin_interfaces.msg.Duration/NativeReadFieldNanosecType
struct NativeReadFieldNanosecType_t182F0C4CE8EA9C48B3A5DF251CB1F83A38FA8279;
// builtin_interfaces.msg.Duration/NativeReadFieldSecType
struct NativeReadFieldSecType_t928C1B88798604C4354B129B08975FA58D257C54;
// builtin_interfaces.msg.Duration/NativeWriteFieldNanosecType
struct NativeWriteFieldNanosecType_t1ECC507ECF4AA3765E4EA629CA6B6E1C5E50FD10;
// builtin_interfaces.msg.Duration/NativeWriteFieldSecType
struct NativeWriteFieldSecType_t8676F1C0647013744EEA9830D29BD38C2FC79C4F;
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

IL2CPP_EXTERN_C RuntimeClass* DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeCreateNativeMessageType_t58C9326D140137105184BC85233A5AF360A9046F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeCreateNativeMessageType_t762632B2C8CF227E63BA1D20B346B64492793054_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeDestroyNativeMessageType_t7459C33DB752D86695AA046FE5339029AD797B04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeDestroyNativeMessageType_tD51BFA46C6FE30B2CB5B2A9071178DB5EB94D311_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeGetTypeSupportType_t3BFF2DDCB88133594DA42CCA63ADA5BBFD2045CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeGetTypeSupportType_t63782EF21498CB0633F23315B3ED307098D8C106_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeReadFieldNanosecType_t182F0C4CE8EA9C48B3A5DF251CB1F83A38FA8279_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeReadFieldNanosecType_t97EDBC81AAA04CCAC1B23D0B2B78C393C0DA91DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeReadFieldSecType_t3470747120F9BFC5B6289A0B9E6F28EFA7ED099F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeReadFieldSecType_t928C1B88798604C4354B129B08975FA58D257C54_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeWriteFieldNanosecType_t1ECC507ECF4AA3765E4EA629CA6B6E1C5E50FD10_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeWriteFieldNanosecType_t5E0AE928ADDF2C29C3B07EDD132D94E839372856_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeWriteFieldSecType_t8676F1C0647013744EEA9830D29BD38C2FC79C4F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeWriteFieldSecType_t93D0F4573A3D133A711AEBD65821FD8462365348_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeInformation_tB2DFA85FB9251AE3A3112904C9DF06C30D1D3EAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0606E40A5E88A6D632C65FA9B5C12A0CCDA9CD7F;
IL2CPP_EXTERN_C String_t* _stringLiteral0F940A651BB0AD125BDEAA5BBE24CD3A754FEC99;
IL2CPP_EXTERN_C String_t* _stringLiteral21D064EF99BEA8279E490E4D421EC29208ED0E45;
IL2CPP_EXTERN_C String_t* _stringLiteral2678E1127A06C414D59753C6104A9428F7D4403D;
IL2CPP_EXTERN_C String_t* _stringLiteral286CE5F62798417658F1B4FDA78876A84C42B7F6;
IL2CPP_EXTERN_C String_t* _stringLiteral30EF70E3AFA0F657F60D951A01085AD1DBF26C37;
IL2CPP_EXTERN_C String_t* _stringLiteral331C2AE40A11FD125142F1CB87DC691E1E798746;
IL2CPP_EXTERN_C String_t* _stringLiteral3B18A3E5160ED541A2344733BA0632FE0BF744F9;
IL2CPP_EXTERN_C String_t* _stringLiteral3D61042C03AB221F42A7745B1E323920F8A91B27;
IL2CPP_EXTERN_C String_t* _stringLiteral4F016BEAC7477B8D365EB0883F65C8D6A24F8C8A;
IL2CPP_EXTERN_C String_t* _stringLiteral4F0906DDE318C6A308C0586DE3F28817C8E3024D;
IL2CPP_EXTERN_C String_t* _stringLiteral510CA5A07E2D39C7F2CEED2C05FF61686F9302C5;
IL2CPP_EXTERN_C String_t* _stringLiteral53ED904F9DD607AE3FD3ECE9C80D5A4DCD356427;
IL2CPP_EXTERN_C String_t* _stringLiteral77FEF257C3A120EF3F45BA6C72A3FB048FD4545B;
IL2CPP_EXTERN_C String_t* _stringLiteral8F2C97130AD270F56695D9D2BEE98A7C1ADDAA60;
IL2CPP_EXTERN_C String_t* _stringLiteral96E0BAC397EF21AA492E6A1FD721AE4FCBEF808D;
IL2CPP_EXTERN_C String_t* _stringLiteralC2BC3DCBFB8DD7C38E5AF232F720A4B5870E88EB;
IL2CPP_EXTERN_C String_t* _stringLiteralC2CF6655705E22CB42071C9E6CBCFD1DB53E9A52;
IL2CPP_EXTERN_C String_t* _stringLiteralC7699638AE91904FD67E956D3E2268AD2B77CF66;
IL2CPP_EXTERN_C String_t* _stringLiteralCC3E6BF3C3D89BDCE2867E343783F7E8A45AE117;
IL2CPP_EXTERN_C String_t* _stringLiteralD755A24ABB6916DD5812AEECCAB7631B91B942CF;
IL2CPP_EXTERN_C String_t* _stringLiteralD7D8430585AC923061167106F208BD29BDBCB85B;
IL2CPP_EXTERN_C String_t* _stringLiteralD9AF3F97404756432D9BF39C08DE870918B57A7A;
IL2CPP_EXTERN_C String_t* _stringLiteralDEB5542FFA07015567183DAEC12805E08BA1F64D;
IL2CPP_EXTERN_C String_t* _stringLiteralE2831A833B5B4042DE652043DDA530AA88C98AA2;
IL2CPP_EXTERN_C String_t* _stringLiteralE73A2C0EA0A35379A85717FAB458F9C91CFEB38D;
IL2CPP_EXTERN_C String_t* _stringLiteralED550C215FA994C460982A30980E86D81505D5A6;
IL2CPP_EXTERN_C const RuntimeMethod* Duration_ReadNativeMessage_mF1FE77A03DB538557350834A6F055F52F66E2ADA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Duration_WriteNativeMessage_mE7BBDECE72F1714EA453F632C3903D194B250D3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Time_ReadNativeMessage_m39165E35484A65FF9C453952AC4D1532D80FBA88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Time_WriteNativeMessage_m65AE23FBA6AE3D2DC1A5F34AF1B3ABFCE2807BBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* NativeCreateNativeMessageType_t58C9326D140137105184BC85233A5AF360A9046F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NativeCreateNativeMessageType_t762632B2C8CF227E63BA1D20B346B64492793054_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NativeDestroyNativeMessageType_t7459C33DB752D86695AA046FE5339029AD797B04_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NativeDestroyNativeMessageType_tD51BFA46C6FE30B2CB5B2A9071178DB5EB94D311_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NativeGetTypeSupportType_t3BFF2DDCB88133594DA42CCA63ADA5BBFD2045CE_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NativeGetTypeSupportType_t63782EF21498CB0633F23315B3ED307098D8C106_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NativeReadFieldNanosecType_t182F0C4CE8EA9C48B3A5DF251CB1F83A38FA8279_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NativeReadFieldNanosecType_t97EDBC81AAA04CCAC1B23D0B2B78C393C0DA91DB_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NativeReadFieldSecType_t3470747120F9BFC5B6289A0B9E6F28EFA7ED099F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NativeReadFieldSecType_t928C1B88798604C4354B129B08975FA58D257C54_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NativeWriteFieldNanosecType_t1ECC507ECF4AA3765E4EA629CA6B6E1C5E50FD10_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NativeWriteFieldNanosecType_t5E0AE928ADDF2C29C3B07EDD132D94E839372856_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NativeWriteFieldSecType_t8676F1C0647013744EEA9830D29BD38C2FC79C4F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NativeWriteFieldSecType_t93D0F4573A3D133A711AEBD65821FD8462365348_0_0_0_var;
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
struct U3CModuleU3E_t473CF41E5106C88B36EB2AF1CC22CD893A24C5E4 
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

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
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

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// builtin_interfaces.msg.Duration
struct Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7  : public RuntimeObject
{
	// System.IntPtr builtin_interfaces.msg.Duration::_handle
	intptr_t ____handle_0;
	// System.Boolean builtin_interfaces.msg.Duration::disposed
	bool ___disposed_2;
	// System.Int32 builtin_interfaces.msg.Duration::<Sec>k__BackingField
	int32_t ___U3CSecU3Ek__BackingField_3;
	// System.UInt32 builtin_interfaces.msg.Duration::<Nanosec>k__BackingField
	uint32_t ___U3CNanosecU3Ek__BackingField_4;
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

// builtin_interfaces.msg.Duration/NativeCreateNativeMessageType
struct NativeCreateNativeMessageType_t58C9326D140137105184BC85233A5AF360A9046F  : public MulticastDelegate_t
{
};

// builtin_interfaces.msg.Duration/NativeDestroyNativeMessageType
struct NativeDestroyNativeMessageType_tD51BFA46C6FE30B2CB5B2A9071178DB5EB94D311  : public MulticastDelegate_t
{
};

// builtin_interfaces.msg.Duration/NativeGetTypeSupportType
struct NativeGetTypeSupportType_t3BFF2DDCB88133594DA42CCA63ADA5BBFD2045CE  : public MulticastDelegate_t
{
};

// builtin_interfaces.msg.Duration/NativeReadFieldNanosecType
struct NativeReadFieldNanosecType_t182F0C4CE8EA9C48B3A5DF251CB1F83A38FA8279  : public MulticastDelegate_t
{
};

// builtin_interfaces.msg.Duration/NativeReadFieldSecType
struct NativeReadFieldSecType_t928C1B88798604C4354B129B08975FA58D257C54  : public MulticastDelegate_t
{
};

// builtin_interfaces.msg.Duration/NativeWriteFieldNanosecType
struct NativeWriteFieldNanosecType_t1ECC507ECF4AA3765E4EA629CA6B6E1C5E50FD10  : public MulticastDelegate_t
{
};

// builtin_interfaces.msg.Duration/NativeWriteFieldSecType
struct NativeWriteFieldSecType_t8676F1C0647013744EEA9830D29BD38C2FC79C4F  : public MulticastDelegate_t
{
};

// builtin_interfaces.msg.Time/NativeCreateNativeMessageType
struct NativeCreateNativeMessageType_t762632B2C8CF227E63BA1D20B346B64492793054  : public MulticastDelegate_t
{
};

// builtin_interfaces.msg.Time/NativeDestroyNativeMessageType
struct NativeDestroyNativeMessageType_t7459C33DB752D86695AA046FE5339029AD797B04  : public MulticastDelegate_t
{
};

// builtin_interfaces.msg.Time/NativeGetTypeSupportType
struct NativeGetTypeSupportType_t63782EF21498CB0633F23315B3ED307098D8C106  : public MulticastDelegate_t
{
};

// builtin_interfaces.msg.Time/NativeReadFieldNanosecType
struct NativeReadFieldNanosecType_t97EDBC81AAA04CCAC1B23D0B2B78C393C0DA91DB  : public MulticastDelegate_t
{
};

// builtin_interfaces.msg.Time/NativeReadFieldSecType
struct NativeReadFieldSecType_t3470747120F9BFC5B6289A0B9E6F28EFA7ED099F  : public MulticastDelegate_t
{
};

// builtin_interfaces.msg.Time/NativeWriteFieldNanosecType
struct NativeWriteFieldNanosecType_t5E0AE928ADDF2C29C3B07EDD132D94E839372856  : public MulticastDelegate_t
{
};

// builtin_interfaces.msg.Time/NativeWriteFieldSecType
struct NativeWriteFieldSecType_t93D0F4573A3D133A711AEBD65821FD8462365348  : public MulticastDelegate_t
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

// System.Int32

// System.Int32

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

// System.UInt32

// System.UInt32

// System.Void

// System.Void

// System.Delegate

// System.Delegate

// builtin_interfaces.msg.Duration
struct Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_StaticFields
{
	// ROS2.DllLoadUtils builtin_interfaces.msg.Duration::dllLoadUtils
	RuntimeObject* ___dllLoadUtils_1;
	// builtin_interfaces.msg.Duration/NativeGetTypeSupportType builtin_interfaces.msg.Duration::native_get_typesupport
	NativeGetTypeSupportType_t3BFF2DDCB88133594DA42CCA63ADA5BBFD2045CE* ___native_get_typesupport_5;
	// builtin_interfaces.msg.Duration/NativeCreateNativeMessageType builtin_interfaces.msg.Duration::native_create_native_message
	NativeCreateNativeMessageType_t58C9326D140137105184BC85233A5AF360A9046F* ___native_create_native_message_6;
	// builtin_interfaces.msg.Duration/NativeDestroyNativeMessageType builtin_interfaces.msg.Duration::native_destroy_native_message
	NativeDestroyNativeMessageType_tD51BFA46C6FE30B2CB5B2A9071178DB5EB94D311* ___native_destroy_native_message_7;
	// builtin_interfaces.msg.Duration/NativeReadFieldSecType builtin_interfaces.msg.Duration::native_read_field_sec
	NativeReadFieldSecType_t928C1B88798604C4354B129B08975FA58D257C54* ___native_read_field_sec_8;
	// builtin_interfaces.msg.Duration/NativeWriteFieldSecType builtin_interfaces.msg.Duration::native_write_field_sec
	NativeWriteFieldSecType_t8676F1C0647013744EEA9830D29BD38C2FC79C4F* ___native_write_field_sec_9;
	// builtin_interfaces.msg.Duration/NativeReadFieldNanosecType builtin_interfaces.msg.Duration::native_read_field_nanosec
	NativeReadFieldNanosecType_t182F0C4CE8EA9C48B3A5DF251CB1F83A38FA8279* ___native_read_field_nanosec_10;
	// builtin_interfaces.msg.Duration/NativeWriteFieldNanosecType builtin_interfaces.msg.Duration::native_write_field_nanosec
	NativeWriteFieldNanosecType_t1ECC507ECF4AA3765E4EA629CA6B6E1C5E50FD10* ___native_write_field_nanosec_11;
};

// builtin_interfaces.msg.Duration

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

// builtin_interfaces.msg.Duration/NativeCreateNativeMessageType

// builtin_interfaces.msg.Duration/NativeCreateNativeMessageType

// builtin_interfaces.msg.Duration/NativeDestroyNativeMessageType

// builtin_interfaces.msg.Duration/NativeDestroyNativeMessageType

// builtin_interfaces.msg.Duration/NativeGetTypeSupportType

// builtin_interfaces.msg.Duration/NativeGetTypeSupportType

// builtin_interfaces.msg.Duration/NativeReadFieldNanosecType

// builtin_interfaces.msg.Duration/NativeReadFieldNanosecType

// builtin_interfaces.msg.Duration/NativeReadFieldSecType

// builtin_interfaces.msg.Duration/NativeReadFieldSecType

// builtin_interfaces.msg.Duration/NativeWriteFieldNanosecType

// builtin_interfaces.msg.Duration/NativeWriteFieldNanosecType

// builtin_interfaces.msg.Duration/NativeWriteFieldSecType

// builtin_interfaces.msg.Duration/NativeWriteFieldSecType

// builtin_interfaces.msg.Time/NativeCreateNativeMessageType

// builtin_interfaces.msg.Time/NativeCreateNativeMessageType

// builtin_interfaces.msg.Time/NativeDestroyNativeMessageType

// builtin_interfaces.msg.Time/NativeDestroyNativeMessageType

// builtin_interfaces.msg.Time/NativeGetTypeSupportType

// builtin_interfaces.msg.Time/NativeGetTypeSupportType

// builtin_interfaces.msg.Time/NativeReadFieldNanosecType

// builtin_interfaces.msg.Time/NativeReadFieldNanosecType

// builtin_interfaces.msg.Time/NativeReadFieldSecType

// builtin_interfaces.msg.Time/NativeReadFieldSecType

// builtin_interfaces.msg.Time/NativeWriteFieldNanosecType

// builtin_interfaces.msg.Time/NativeWriteFieldNanosecType

// builtin_interfaces.msg.Time/NativeWriteFieldSecType

// builtin_interfaces.msg.Time/NativeWriteFieldSecType
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
// System.Void builtin_interfaces.msg.Duration::MessageTypeSupportPreload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Duration_MessageTypeSupportPreload_m6292103FCA841D124EA975A1DD6C3FF637F98DAC (const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Delegate System.Runtime.InteropServices.Marshal::GetDelegateForFunctionPointer(System.IntPtr,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304 (intptr_t ___0_ptr, Type_t* ___1_t, const RuntimeMethod* method) ;
// System.IntPtr builtin_interfaces.msg.Duration/NativeGetTypeSupportType::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t NativeGetTypeSupportType_Invoke_mF58A689A05763090B9FA3B740614497B1CC0CFB9_inline (NativeGetTypeSupportType_t3BFF2DDCB88133594DA42CCA63ADA5BBFD2045CE* __this, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271 (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.IntPtr builtin_interfaces.msg.Duration/NativeCreateNativeMessageType::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t NativeCreateNativeMessageType_Invoke_m1277E13179A4A68CC60D011B1722FF89442CABA3_inline (NativeCreateNativeMessageType_t58C9326D140137105184BC85233A5AF360A9046F* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.IntPtr builtin_interfaces.msg.Duration::get_Handle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Duration_get_Handle_m48906CC197E619E94F4DEC8E67D14408BD8BFE2F (Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7* __this, const RuntimeMethod* method) ;
// System.Void builtin_interfaces.msg.Duration::ReadNativeMessage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Duration_ReadNativeMessage_mF1FE77A03DB538557350834A6F055F52F66E2ADA (Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7* __this, intptr_t ___0_handle, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Int32 builtin_interfaces.msg.Duration/NativeReadFieldSecType::Invoke(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeReadFieldSecType_Invoke_m544A20D9D273DB4C004864A1B8D46598CB001E06_inline (NativeReadFieldSecType_t928C1B88798604C4354B129B08975FA58D257C54* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method) ;
// System.Void builtin_interfaces.msg.Duration::set_Sec(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Duration_set_Sec_m2D265096F5F5193CFAEA510440984151A87F6779_inline (Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.UInt32 builtin_interfaces.msg.Duration/NativeReadFieldNanosecType::Invoke(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t NativeReadFieldNanosecType_Invoke_mC6BC1457D686CF5BF26DC40BC388B4BDCB1ADDA1_inline (NativeReadFieldNanosecType_t182F0C4CE8EA9C48B3A5DF251CB1F83A38FA8279* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method) ;
// System.Void builtin_interfaces.msg.Duration::set_Nanosec(System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Duration_set_Nanosec_m53AA1C0C8B8C77C2F33BA485754B1D981365B211_inline (Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7* __this, uint32_t ___0_value, const RuntimeMethod* method) ;
// System.Void builtin_interfaces.msg.Duration::WriteNativeMessage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Duration_WriteNativeMessage_mE7BBDECE72F1714EA453F632C3903D194B250D3D (Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7* __this, intptr_t ___0_handle, const RuntimeMethod* method) ;
// System.Int32 builtin_interfaces.msg.Duration::get_Sec()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Duration_get_Sec_m57D2846019408B75354E0C2980EC50DFA2826AB3_inline (Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7* __this, const RuntimeMethod* method) ;
// System.Void builtin_interfaces.msg.Duration/NativeWriteFieldSecType::Invoke(System.IntPtr,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeWriteFieldSecType_Invoke_m220E34460FF2F3476F68854A650A850E8D690BE9_inline (NativeWriteFieldSecType_t8676F1C0647013744EEA9830D29BD38C2FC79C4F* __this, intptr_t ___0_messageHandle, int32_t ___1_value, const RuntimeMethod* method) ;
// System.UInt32 builtin_interfaces.msg.Duration::get_Nanosec()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t Duration_get_Nanosec_m488D87C4F629CDBB9FC818C5C61C759722DCC729_inline (Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7* __this, const RuntimeMethod* method) ;
// System.Void builtin_interfaces.msg.Duration/NativeWriteFieldNanosecType::Invoke(System.IntPtr,System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeWriteFieldNanosecType_Invoke_m18A7E5DA519011739DF74FB8E1CB02A3A1ED97BC_inline (NativeWriteFieldNanosecType_t1ECC507ECF4AA3765E4EA629CA6B6E1C5E50FD10* __this, intptr_t ___0_messageHandle, uint32_t ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.Void builtin_interfaces.msg.Duration/NativeDestroyNativeMessageType::Invoke(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeDestroyNativeMessageType_Invoke_m45C879AAC5DA1CE5BA56AD3C3F19B737E5BF255F_inline (NativeDestroyNativeMessageType_tD51BFA46C6FE30B2CB5B2A9071178DB5EB94D311* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void builtin_interfaces.msg.Duration::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Duration_Dispose_m3C3070C1907727768CD5D562DE40DEE392449B89 (Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7* __this, const RuntimeMethod* method) ;
// System.Void builtin_interfaces.msg.Time::MessageTypeSupportPreload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_MessageTypeSupportPreload_m754F547517CA082D79F2B1D7BCC723292710C92C (const RuntimeMethod* method) ;
// System.IntPtr builtin_interfaces.msg.Time/NativeGetTypeSupportType::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t NativeGetTypeSupportType_Invoke_m9486539D16053846CEAEFBEB419E2CBF14582D7A_inline (NativeGetTypeSupportType_t63782EF21498CB0633F23315B3ED307098D8C106* __this, const RuntimeMethod* method) ;
// System.IntPtr builtin_interfaces.msg.Time/NativeCreateNativeMessageType::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t NativeCreateNativeMessageType_Invoke_m6CE484FBDED8321AE5632755203480FC425F7F34_inline (NativeCreateNativeMessageType_t762632B2C8CF227E63BA1D20B346B64492793054* __this, const RuntimeMethod* method) ;
// System.IntPtr builtin_interfaces.msg.Time::get_Handle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Time_get_Handle_mBDDB286AACC422625CA248DDF3BB50B5EAC3F9BE (Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E* __this, const RuntimeMethod* method) ;
// System.Void builtin_interfaces.msg.Time::ReadNativeMessage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_ReadNativeMessage_m39165E35484A65FF9C453952AC4D1532D80FBA88 (Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E* __this, intptr_t ___0_handle, const RuntimeMethod* method) ;
// System.Int32 builtin_interfaces.msg.Time/NativeReadFieldSecType::Invoke(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeReadFieldSecType_Invoke_mB84ADEE779C82EFC760FFF7A907BAA918A6979EB_inline (NativeReadFieldSecType_t3470747120F9BFC5B6289A0B9E6F28EFA7ED099F* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method) ;
// System.Void builtin_interfaces.msg.Time::set_Sec(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Time_set_Sec_mAFABF5D4EE0936BB1164B867D0688B3CF5E59F25_inline (Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.UInt32 builtin_interfaces.msg.Time/NativeReadFieldNanosecType::Invoke(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t NativeReadFieldNanosecType_Invoke_m3275600DF4B4ED9888042142F4E8E6BE3D638940_inline (NativeReadFieldNanosecType_t97EDBC81AAA04CCAC1B23D0B2B78C393C0DA91DB* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method) ;
// System.Void builtin_interfaces.msg.Time::set_Nanosec(System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Time_set_Nanosec_m728F7849CAC073D12896D38AFCAB388E78DCEED9_inline (Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E* __this, uint32_t ___0_value, const RuntimeMethod* method) ;
// System.Void builtin_interfaces.msg.Time::WriteNativeMessage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_WriteNativeMessage_m65AE23FBA6AE3D2DC1A5F34AF1B3ABFCE2807BBB (Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E* __this, intptr_t ___0_handle, const RuntimeMethod* method) ;
// System.Int32 builtin_interfaces.msg.Time::get_Sec()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Time_get_Sec_mE050B429DBD14D7C80C01AC82639378AD7046021_inline (Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E* __this, const RuntimeMethod* method) ;
// System.Void builtin_interfaces.msg.Time/NativeWriteFieldSecType::Invoke(System.IntPtr,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeWriteFieldSecType_Invoke_m58788F8F472218CBFA7E6ADD8812E3218C675A22_inline (NativeWriteFieldSecType_t93D0F4573A3D133A711AEBD65821FD8462365348* __this, intptr_t ___0_messageHandle, int32_t ___1_value, const RuntimeMethod* method) ;
// System.UInt32 builtin_interfaces.msg.Time::get_Nanosec()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t Time_get_Nanosec_mAA9EC2FA1685D3639555E2A9F8ABE9BD1D4ED808_inline (Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E* __this, const RuntimeMethod* method) ;
// System.Void builtin_interfaces.msg.Time/NativeWriteFieldNanosecType::Invoke(System.IntPtr,System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeWriteFieldNanosecType_Invoke_m03B7312FAAA6FF81D8793F88BDB695040F1D74F9_inline (NativeWriteFieldNanosecType_t5E0AE928ADDF2C29C3B07EDD132D94E839372856* __this, intptr_t ___0_messageHandle, uint32_t ___1_value, const RuntimeMethod* method) ;
// System.Void builtin_interfaces.msg.Time/NativeDestroyNativeMessageType::Invoke(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeDestroyNativeMessageType_Invoke_mA68BC387EBBF45C8E26F206DB54F88C2990974A8_inline (NativeDestroyNativeMessageType_t7459C33DB752D86695AA046FE5339029AD797B04* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method) ;
// System.Void builtin_interfaces.msg.Time::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_Dispose_m0C7176209D128A4C51A7F3192F3D99CB604E7C13 (Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E* __this, const RuntimeMethod* method) ;
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
// System.Boolean builtin_interfaces.msg.Duration::get_IsDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Duration_get_IsDisposed_mFC4D887F71CE108ECB788CD768AE597FF1FF0419 (Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___disposed_2;
		return L_0;
	}
}
// System.Int32 builtin_interfaces.msg.Duration::get_Sec()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Duration_get_Sec_m57D2846019408B75354E0C2980EC50DFA2826AB3 (Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CSecU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void builtin_interfaces.msg.Duration::set_Sec(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Duration_set_Sec_m2D265096F5F5193CFAEA510440984151A87F6779 (Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CSecU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.UInt32 builtin_interfaces.msg.Duration::get_Nanosec()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Duration_get_Nanosec_m488D87C4F629CDBB9FC818C5C61C759722DCC729 (Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___U3CNanosecU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void builtin_interfaces.msg.Duration::set_Nanosec(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Duration_set_Nanosec_m53AA1C0C8B8C77C2F33BA485754B1D981365B211 (Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_value;
		__this->___U3CNanosecU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void builtin_interfaces.msg.Duration::MessageTypeSupportPreload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Duration_MessageTypeSupportPreload_m6292103FCA841D124EA975A1DD6C3FF637F98DAC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeInformation_tB2DFA85FB9251AE3A3112904C9DF06C30D1D3EAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F940A651BB0AD125BDEAA5BBE24CD3A754FEC99);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2678E1127A06C414D59753C6104A9428F7D4403D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral331C2AE40A11FD125142F1CB87DC691E1E798746);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B18A3E5160ED541A2344733BA0632FE0BF744F9);
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
		L_10 = InterfaceFuncInvoker1< intptr_t, String_t* >::Invoke(1 /* System.IntPtr ROS2.DllLoadUtils::LoadLibraryNoSuffix(System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_9, _stringLiteral0F940A651BB0AD125BDEAA5BBE24CD3A754FEC99);
		NullCheck(L_9);
		intptr_t L_11;
		L_11 = InterfaceFuncInvoker1< intptr_t, String_t* >::Invoke(1 /* System.IntPtr ROS2.DllLoadUtils::LoadLibraryNoSuffix(System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_9, _stringLiteral2678E1127A06C414D59753C6104A9428F7D4403D);
	}

IL_0060:
	{
		return;
	}
}
// System.Void builtin_interfaces.msg.Duration::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Duration__cctor_m1FEDE7F65071FADC7AE3823E56DD3C55F06B3C8E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeCreateNativeMessageType_t58C9326D140137105184BC85233A5AF360A9046F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeCreateNativeMessageType_t58C9326D140137105184BC85233A5AF360A9046F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeDestroyNativeMessageType_tD51BFA46C6FE30B2CB5B2A9071178DB5EB94D311_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeDestroyNativeMessageType_tD51BFA46C6FE30B2CB5B2A9071178DB5EB94D311_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGetTypeSupportType_t3BFF2DDCB88133594DA42CCA63ADA5BBFD2045CE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGetTypeSupportType_t3BFF2DDCB88133594DA42CCA63ADA5BBFD2045CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeReadFieldNanosecType_t182F0C4CE8EA9C48B3A5DF251CB1F83A38FA8279_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeReadFieldNanosecType_t182F0C4CE8EA9C48B3A5DF251CB1F83A38FA8279_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeReadFieldSecType_t928C1B88798604C4354B129B08975FA58D257C54_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeReadFieldSecType_t928C1B88798604C4354B129B08975FA58D257C54_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeWriteFieldNanosecType_t1ECC507ECF4AA3765E4EA629CA6B6E1C5E50FD10_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeWriteFieldNanosecType_t1ECC507ECF4AA3765E4EA629CA6B6E1C5E50FD10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeWriteFieldSecType_t8676F1C0647013744EEA9830D29BD38C2FC79C4F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeWriteFieldSecType_t8676F1C0647013744EEA9830D29BD38C2FC79C4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0606E40A5E88A6D632C65FA9B5C12A0CCDA9CD7F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21D064EF99BEA8279E490E4D421EC29208ED0E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral30EF70E3AFA0F657F60D951A01085AD1DBF26C37);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D61042C03AB221F42A7745B1E323920F8A91B27);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F016BEAC7477B8D365EB0883F65C8D6A24F8C8A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral510CA5A07E2D39C7F2CEED2C05FF61686F9302C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F2C97130AD270F56695D9D2BEE98A7C1ADDAA60);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC3E6BF3C3D89BDCE2867E343783F7E8A45AE117);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD755A24ABB6916DD5812AEECCAB7631B91B942CF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEB5542FFA07015567183DAEC12805E08BA1F64D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2831A833B5B4042DE652043DDA530AA88C98AA2);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0;
		L_0 = DllLoadUtilsFactory_GetDllLoadUtils_m8EB2D6E40DBF00ED8E25114CAABFFFCF16286775(NULL);
		((Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_StaticFields*)il2cpp_codegen_static_fields_for(Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_il2cpp_TypeInfo_var))->___dllLoadUtils_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_StaticFields*)il2cpp_codegen_static_fields_for(Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_il2cpp_TypeInfo_var))->___dllLoadUtils_1), (void*)L_0);
		RuntimeObject* L_1 = ((Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_StaticFields*)il2cpp_codegen_static_fields_for(Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_il2cpp_TypeInfo_var))->___dllLoadUtils_1;
		NullCheck(L_1);
		intptr_t L_2;
		L_2 = InterfaceFuncInvoker1< intptr_t, String_t* >::Invoke(1 /* System.IntPtr ROS2.DllLoadUtils::LoadLibraryNoSuffix(System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_1, _stringLiteralD755A24ABB6916DD5812AEECCAB7631B91B942CF);
		RuntimeObject* L_3 = ((Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_StaticFields*)il2cpp_codegen_static_fields_for(Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_il2cpp_TypeInfo_var))->___dllLoadUtils_1;
		NullCheck(L_3);
		intptr_t L_4;
		L_4 = InterfaceFuncInvoker1< intptr_t, String_t* >::Invoke(1 /* System.IntPtr ROS2.DllLoadUtils::LoadLibraryNoSuffix(System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_3, _stringLiteralDEB5542FFA07015567183DAEC12805E08BA1F64D);
		RuntimeObject* L_5 = ((Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_StaticFields*)il2cpp_codegen_static_fields_for(Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_il2cpp_TypeInfo_var))->___dllLoadUtils_1;
		NullCheck(L_5);
		intptr_t L_6;
		L_6 = InterfaceFuncInvoker1< intptr_t, String_t* >::Invoke(1 /* System.IntPtr ROS2.DllLoadUtils::LoadLibraryNoSuffix(System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_5, _stringLiteral30EF70E3AFA0F657F60D951A01085AD1DBF26C37);
		Duration_MessageTypeSupportPreload_m6292103FCA841D124EA975A1DD6C3FF637F98DAC(NULL);
		RuntimeObject* L_7 = ((Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_StaticFields*)il2cpp_codegen_static_fields_for(Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_il2cpp_TypeInfo_var))->___dllLoadUtils_1;
		NullCheck(L_7);
		intptr_t L_8;
		L_8 = InterfaceFuncInvoker1< intptr_t, String_t* >::Invoke(0 /* System.IntPtr ROS2.DllLoadUtils::LoadLibrary(System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_7, _stringLiteral8F2C97130AD270F56695D9D2BEE98A7C1ADDAA60);
		V_0 = L_8;
		RuntimeObject* L_9 = ((Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_StaticFields*)il2cpp_codegen_static_fields_for(Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_il2cpp_TypeInfo_var))->___dllLoadUtils_1;
		intptr_t L_10 = V_0;
		NullCheck(L_9);
		intptr_t L_11;
		L_11 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_9, L_10, _stringLiteralE2831A833B5B4042DE652043DDA530AA88C98AA2);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (NativeGetTypeSupportType_t3BFF2DDCB88133594DA42CCA63ADA5BBFD2045CE_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Delegate_t* L_14;
		L_14 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_11, L_13, NULL);
		((Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_StaticFields*)il2cpp_codegen_static_fields_for(Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_il2cpp_TypeInfo_var))->___native_get_typesupport_5 = ((NativeGetTypeSupportType_t3BFF2DDCB88133594DA42CCA63ADA5BBFD2045CE*)CastclassSealed((RuntimeObject*)L_14, NativeGetTypeSupportType_t3BFF2DDCB88133594DA42CCA63ADA5BBFD2045CE_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_StaticFields*)il2cpp_codegen_static_fields_for(Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_il2cpp_TypeInfo_var))->___native_get_typesupport_5), (void*)((NativeGetTypeSupportType_t3BFF2DDCB88133594DA42CCA63ADA5BBFD2045CE*)CastclassSealed((RuntimeObject*)L_14, NativeGetTypeSupportType_t3BFF2DDCB88133594DA42CCA63ADA5BBFD2045CE_il2cpp_TypeInfo_var)));
		RuntimeObject* L_15 = ((Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_StaticFields*)il2cpp_codegen_static_fields_for(Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_il2cpp_TypeInfo_var))->___dllLoadUtils_1;
		intptr_t L_16 = V_0;
		NullCheck(L_15);
		intptr_t L_17;
		L_17 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_15, L_16, _stringLiteral4F016BEAC7477B8D365EB0883F65C8D6A24F8C8A);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (NativeCreateNativeMessageType_t58C9326D140137105184BC85233A5AF360A9046F_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		Delegate_t* L_20;
		L_20 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_17, L_19, NULL);
		((Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_StaticFields*)il2cpp_codegen_static_fields_for(Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_il2cpp_TypeInfo_var))->___native_create_native_message_6 = ((NativeCreateNativeMessageType_t58C9326D140137105184BC85233A5AF360A9046F*)CastclassSealed((RuntimeObject*)L_20, NativeCreateNativeMessageType_t58C9326D140137105184BC85233A5AF360A9046F_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_StaticFields*)il2cpp_codegen_static_fields_for(Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_il2cpp_TypeInfo_var))->___native_create_native_message_6), (void*)((NativeCreateNativeMessageType_t58C9326D140137105184BC85233A5AF360A9046F*)CastclassSealed((RuntimeObject*)L_20, NativeCreateNativeMessageType_t58C9326D140137105184BC85233A5AF360A9046F_il2cpp_TypeInfo_var)));
		RuntimeObject* L_21 = ((Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_StaticFields*)il2cpp_codegen_static_fields_for(Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_il2cpp_TypeInfo_var))->___dllLoadUtils_1;
		intptr_t L_22 = V_0;
		NullCheck(L_21);
		intptr_t L_23;
		L_23 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_21, L_22, _stringLiteralCC3E6BF3C3D89BDCE2867E343783F7E8A45AE117);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (NativeDestroyNativeMessageType_tD51BFA46C6FE30B2CB5B2A9071178DB5EB94D311_0_0_0_var) };
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		Delegate_t* L_26;
		L_26 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_23, L_25, NULL);
		((Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_StaticFields*)il2cpp_codegen_static_fields_for(Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_il2cpp_TypeInfo_var))->___native_destroy_native_message_7 = ((NativeDestroyNativeMessageType_tD51BFA46C6FE30B2CB5B2A9071178DB5EB94D311*)CastclassSealed((RuntimeObject*)L_26, NativeDestroyNativeMessageType_tD51BFA46C6FE30B2CB5B2A9071178DB5EB94D311_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_StaticFields*)il2cpp_codegen_static_fields_for(Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_il2cpp_TypeInfo_var))->___native_destroy_native_message_7), (void*)((NativeDestroyNativeMessageType_tD51BFA46C6FE30B2CB5B2A9071178DB5EB94D311*)CastclassSealed((RuntimeObject*)L_26, NativeDestroyNativeMessageType_tD51BFA46C6FE30B2CB5B2A9071178DB5EB94D311_il2cpp_TypeInfo_var)));
		RuntimeObject* L_27 = ((Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_StaticFields*)il2cpp_codegen_static_fields_for(Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_il2cpp_TypeInfo_var))->___dllLoadUtils_1;
		intptr_t L_28 = V_0;
		NullCheck(L_27);
		intptr_t L_29;
		L_29 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_27, L_28, _stringLiteral510CA5A07E2D39C7F2CEED2C05FF61686F9302C5);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (NativeReadFieldSecType_t928C1B88798604C4354B129B08975FA58D257C54_0_0_0_var) };
		Type_t* L_31;
		L_31 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_30, NULL);
		Delegate_t* L_32;
		L_32 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_29, L_31, NULL);
		((Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_StaticFields*)il2cpp_codegen_static_fields_for(Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_il2cpp_TypeInfo_var))->___native_read_field_sec_8 = ((NativeReadFieldSecType_t928C1B88798604C4354B129B08975FA58D257C54*)CastclassSealed((RuntimeObject*)L_32, NativeReadFieldSecType_t928C1B88798604C4354B129B08975FA58D257C54_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_StaticFields*)il2cpp_codegen_static_fields_for(Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_il2cpp_TypeInfo_var))->___native_read_field_sec_8), (void*)((NativeReadFieldSecType_t928C1B88798604C4354B129B08975FA58D257C54*)CastclassSealed((RuntimeObject*)L_32, NativeReadFieldSecType_t928C1B88798604C4354B129B08975FA58D257C54_il2cpp_TypeInfo_var)));
		RuntimeObject* L_33 = ((Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_StaticFields*)il2cpp_codegen_static_fields_for(Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_il2cpp_TypeInfo_var))->___dllLoadUtils_1;
		intptr_t L_34 = V_0;
		NullCheck(L_33);
		intptr_t L_35;
		L_35 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_33, L_34, _stringLiteral3D61042C03AB221F42A7745B1E323920F8A91B27);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_36 = { reinterpret_cast<intptr_t> (NativeWriteFieldSecType_t8676F1C0647013744EEA9830D29BD38C2FC79C4F_0_0_0_var) };
		Type_t* L_37;
		L_37 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_36, NULL);
		Delegate_t* L_38;
		L_38 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_35, L_37, NULL);
		((Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_StaticFields*)il2cpp_codegen_static_fields_for(Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_il2cpp_TypeInfo_var))->___native_write_field_sec_9 = ((NativeWriteFieldSecType_t8676F1C0647013744EEA9830D29BD38C2FC79C4F*)CastclassSealed((RuntimeObject*)L_38, NativeWriteFieldSecType_t8676F1C0647013744EEA9830D29BD38C2FC79C4F_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_StaticFields*)il2cpp_codegen_static_fields_for(Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_il2cpp_TypeInfo_var))->___native_write_field_sec_9), (void*)((NativeWriteFieldSecType_t8676F1C0647013744EEA9830D29BD38C2FC79C4F*)CastclassSealed((RuntimeObject*)L_38, NativeWriteFieldSecType_t8676F1C0647013744EEA9830D29BD38C2FC79C4F_il2cpp_TypeInfo_var)));
		RuntimeObject* L_39 = ((Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_StaticFields*)il2cpp_codegen_static_fields_for(Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_il2cpp_TypeInfo_var))->___dllLoadUtils_1;
		intptr_t L_40 = V_0;
		NullCheck(L_39);
		intptr_t L_41;
		L_41 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_39, L_40, _stringLiteral21D064EF99BEA8279E490E4D421EC29208ED0E45);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (NativeReadFieldNanosecType_t182F0C4CE8EA9C48B3A5DF251CB1F83A38FA8279_0_0_0_var) };
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
		Delegate_t* L_44;
		L_44 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_41, L_43, NULL);
		((Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_StaticFields*)il2cpp_codegen_static_fields_for(Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_il2cpp_TypeInfo_var))->___native_read_field_nanosec_10 = ((NativeReadFieldNanosecType_t182F0C4CE8EA9C48B3A5DF251CB1F83A38FA8279*)CastclassSealed((RuntimeObject*)L_44, NativeReadFieldNanosecType_t182F0C4CE8EA9C48B3A5DF251CB1F83A38FA8279_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_StaticFields*)il2cpp_codegen_static_fields_for(Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_il2cpp_TypeInfo_var))->___native_read_field_nanosec_10), (void*)((NativeReadFieldNanosecType_t182F0C4CE8EA9C48B3A5DF251CB1F83A38FA8279*)CastclassSealed((RuntimeObject*)L_44, NativeReadFieldNanosecType_t182F0C4CE8EA9C48B3A5DF251CB1F83A38FA8279_il2cpp_TypeInfo_var)));
		RuntimeObject* L_45 = ((Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_StaticFields*)il2cpp_codegen_static_fields_for(Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_il2cpp_TypeInfo_var))->___dllLoadUtils_1;
		intptr_t L_46 = V_0;
		NullCheck(L_45);
		intptr_t L_47;
		L_47 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_45, L_46, _stringLiteral0606E40A5E88A6D632C65FA9B5C12A0CCDA9CD7F);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_48 = { reinterpret_cast<intptr_t> (NativeWriteFieldNanosecType_t1ECC507ECF4AA3765E4EA629CA6B6E1C5E50FD10_0_0_0_var) };
		Type_t* L_49;
		L_49 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_48, NULL);
		Delegate_t* L_50;
		L_50 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_47, L_49, NULL);
		((Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_StaticFields*)il2cpp_codegen_static_fields_for(Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_il2cpp_TypeInfo_var))->___native_write_field_nanosec_11 = ((NativeWriteFieldNanosecType_t1ECC507ECF4AA3765E4EA629CA6B6E1C5E50FD10*)CastclassSealed((RuntimeObject*)L_50, NativeWriteFieldNanosecType_t1ECC507ECF4AA3765E4EA629CA6B6E1C5E50FD10_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_StaticFields*)il2cpp_codegen_static_fields_for(Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_il2cpp_TypeInfo_var))->___native_write_field_nanosec_11), (void*)((NativeWriteFieldNanosecType_t1ECC507ECF4AA3765E4EA629CA6B6E1C5E50FD10*)CastclassSealed((RuntimeObject*)L_50, NativeWriteFieldNanosecType_t1ECC507ECF4AA3765E4EA629CA6B6E1C5E50FD10_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.IntPtr builtin_interfaces.msg.Duration::get_TypeSupportHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Duration_get_TypeSupportHandle_mD6E41BECDA92592FD59629C9EFAB7378E5887DD1 (Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_il2cpp_TypeInfo_var);
		NativeGetTypeSupportType_t3BFF2DDCB88133594DA42CCA63ADA5BBFD2045CE* L_0 = ((Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_StaticFields*)il2cpp_codegen_static_fields_for(Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_il2cpp_TypeInfo_var))->___native_get_typesupport_5;
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = NativeGetTypeSupportType_Invoke_mF58A689A05763090B9FA3B740614497B1CC0CFB9_inline(L_0, NULL);
		return L_1;
	}
}
// System.IntPtr builtin_interfaces.msg.Duration::get_Handle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Duration_get_Handle_m48906CC197E619E94F4DEC8E67D14408BD8BFE2F (Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_il2cpp_TypeInfo_var);
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
		il2cpp_codegen_runtime_class_init_inline(Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_il2cpp_TypeInfo_var);
		NativeCreateNativeMessageType_t58C9326D140137105184BC85233A5AF360A9046F* L_3 = ((Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_StaticFields*)il2cpp_codegen_static_fields_for(Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_il2cpp_TypeInfo_var))->___native_create_native_message_6;
		NullCheck(L_3);
		intptr_t L_4;
		L_4 = NativeCreateNativeMessageType_Invoke_m1277E13179A4A68CC60D011B1722FF89442CABA3_inline(L_3, NULL);
		__this->____handle_0 = L_4;
	}

IL_0022:
	{
		intptr_t L_5 = __this->____handle_0;
		return L_5;
	}
}
// System.Void builtin_interfaces.msg.Duration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Duration__ctor_m3F0D9583453B4E8AFCC1E561AD370D2FA9D56C6F (Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void builtin_interfaces.msg.Duration::ReadNativeMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Duration_ReadNativeMessage_m90867D3C41333C815A14C2782250CF69E053B203 (Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0;
		L_0 = Duration_get_Handle_m48906CC197E619E94F4DEC8E67D14408BD8BFE2F(__this, NULL);
		Duration_ReadNativeMessage_mF1FE77A03DB538557350834A6F055F52F66E2ADA(__this, L_0, NULL);
		return;
	}
}
// System.Void builtin_interfaces.msg.Duration::ReadNativeMessage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Duration_ReadNativeMessage_mF1FE77A03DB538557350834A6F055F52F66E2ADA (Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7* __this, intptr_t ___0_handle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_il2cpp_TypeInfo_var);
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Duration_ReadNativeMessage_mF1FE77A03DB538557350834A6F055F52F66E2ADA_RuntimeMethod_var)));
	}

IL_0018:
	{
		il2cpp_codegen_runtime_class_init_inline(Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_il2cpp_TypeInfo_var);
		NativeReadFieldSecType_t928C1B88798604C4354B129B08975FA58D257C54* L_4 = ((Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_StaticFields*)il2cpp_codegen_static_fields_for(Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_il2cpp_TypeInfo_var))->___native_read_field_sec_8;
		intptr_t L_5 = ___0_handle;
		NullCheck(L_4);
		int32_t L_6;
		L_6 = NativeReadFieldSecType_Invoke_m544A20D9D273DB4C004864A1B8D46598CB001E06_inline(L_4, L_5, NULL);
		Duration_set_Sec_m2D265096F5F5193CFAEA510440984151A87F6779_inline(__this, L_6, NULL);
		NativeReadFieldNanosecType_t182F0C4CE8EA9C48B3A5DF251CB1F83A38FA8279* L_7 = ((Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_StaticFields*)il2cpp_codegen_static_fields_for(Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_il2cpp_TypeInfo_var))->___native_read_field_nanosec_10;
		intptr_t L_8 = ___0_handle;
		NullCheck(L_7);
		uint32_t L_9;
		L_9 = NativeReadFieldNanosecType_Invoke_mC6BC1457D686CF5BF26DC40BC388B4BDCB1ADDA1_inline(L_7, L_8, NULL);
		Duration_set_Nanosec_m53AA1C0C8B8C77C2F33BA485754B1D981365B211_inline(__this, L_9, NULL);
		return;
	}
}
// System.Void builtin_interfaces.msg.Duration::WriteNativeMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Duration_WriteNativeMessage_m935DE136D909B5F7EC241FC244D327E3132738E3 (Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_il2cpp_TypeInfo_var);
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
		il2cpp_codegen_runtime_class_init_inline(Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_il2cpp_TypeInfo_var);
		NativeCreateNativeMessageType_t58C9326D140137105184BC85233A5AF360A9046F* L_3 = ((Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_StaticFields*)il2cpp_codegen_static_fields_for(Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_il2cpp_TypeInfo_var))->___native_create_native_message_6;
		NullCheck(L_3);
		intptr_t L_4;
		L_4 = NativeCreateNativeMessageType_Invoke_m1277E13179A4A68CC60D011B1722FF89442CABA3_inline(L_3, NULL);
		__this->____handle_0 = L_4;
	}

IL_0022:
	{
		intptr_t L_5;
		L_5 = Duration_get_Handle_m48906CC197E619E94F4DEC8E67D14408BD8BFE2F(__this, NULL);
		Duration_WriteNativeMessage_mE7BBDECE72F1714EA453F632C3903D194B250D3D(__this, L_5, NULL);
		return;
	}
}
// System.Void builtin_interfaces.msg.Duration::WriteNativeMessage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Duration_WriteNativeMessage_mE7BBDECE72F1714EA453F632C3903D194B250D3D (Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7* __this, intptr_t ___0_handle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_il2cpp_TypeInfo_var);
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Duration_WriteNativeMessage_mE7BBDECE72F1714EA453F632C3903D194B250D3D_RuntimeMethod_var)));
	}

IL_0018:
	{
		il2cpp_codegen_runtime_class_init_inline(Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_il2cpp_TypeInfo_var);
		NativeWriteFieldSecType_t8676F1C0647013744EEA9830D29BD38C2FC79C4F* L_4 = ((Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_StaticFields*)il2cpp_codegen_static_fields_for(Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_il2cpp_TypeInfo_var))->___native_write_field_sec_9;
		intptr_t L_5 = ___0_handle;
		int32_t L_6;
		L_6 = Duration_get_Sec_m57D2846019408B75354E0C2980EC50DFA2826AB3_inline(__this, NULL);
		NullCheck(L_4);
		NativeWriteFieldSecType_Invoke_m220E34460FF2F3476F68854A650A850E8D690BE9_inline(L_4, L_5, L_6, NULL);
		NativeWriteFieldNanosecType_t1ECC507ECF4AA3765E4EA629CA6B6E1C5E50FD10* L_7 = ((Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_StaticFields*)il2cpp_codegen_static_fields_for(Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_il2cpp_TypeInfo_var))->___native_write_field_nanosec_11;
		intptr_t L_8 = ___0_handle;
		uint32_t L_9;
		L_9 = Duration_get_Nanosec_m488D87C4F629CDBB9FC818C5C61C759722DCC729_inline(__this, NULL);
		NullCheck(L_7);
		NativeWriteFieldNanosecType_Invoke_m18A7E5DA519011739DF74FB8E1CB02A3A1ED97BC_inline(L_7, L_8, L_9, NULL);
		return;
	}
}
// System.Void builtin_interfaces.msg.Duration::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Duration_Dispose_m3C3070C1907727768CD5D562DE40DEE392449B89 (Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_il2cpp_TypeInfo_var);
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
		il2cpp_codegen_runtime_class_init_inline(Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_il2cpp_TypeInfo_var);
		NativeDestroyNativeMessageType_tD51BFA46C6FE30B2CB5B2A9071178DB5EB94D311* L_4 = ((Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_StaticFields*)il2cpp_codegen_static_fields_for(Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7_il2cpp_TypeInfo_var))->___native_destroy_native_message_7;
		intptr_t L_5 = __this->____handle_0;
		NullCheck(L_4);
		NativeDestroyNativeMessageType_Invoke_m45C879AAC5DA1CE5BA56AD3C3F19B737E5BF255F_inline(L_4, L_5, NULL);
		intptr_t L_6 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->____handle_0 = L_6;
		__this->___disposed_2 = (bool)1;
	}

IL_003c:
	{
		return;
	}
}
// System.Void builtin_interfaces.msg.Duration::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Duration_Finalize_m76B8E1CF1027C4BA50657B39A50481FCD686E3D6 (Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7* __this, const RuntimeMethod* method) 
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
			Duration_Dispose_m3C3070C1907727768CD5D562DE40DEE392449B89(__this, NULL);
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
intptr_t NativeGetTypeSupportType_Invoke_mF58A689A05763090B9FA3B740614497B1CC0CFB9_Multicast(NativeGetTypeSupportType_t3BFF2DDCB88133594DA42CCA63ADA5BBFD2045CE* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	intptr_t retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		NativeGetTypeSupportType_t3BFF2DDCB88133594DA42CCA63ADA5BBFD2045CE* currentDelegate = reinterpret_cast<NativeGetTypeSupportType_t3BFF2DDCB88133594DA42CCA63ADA5BBFD2045CE*>(delegatesToInvoke[i]);
		typedef intptr_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
intptr_t NativeGetTypeSupportType_Invoke_mF58A689A05763090B9FA3B740614497B1CC0CFB9_OpenInst(NativeGetTypeSupportType_t3BFF2DDCB88133594DA42CCA63ADA5BBFD2045CE* __this, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
intptr_t NativeGetTypeSupportType_Invoke_mF58A689A05763090B9FA3B740614497B1CC0CFB9_OpenStatic(NativeGetTypeSupportType_t3BFF2DDCB88133594DA42CCA63ADA5BBFD2045CE* __this, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
intptr_t NativeGetTypeSupportType_Invoke_mF58A689A05763090B9FA3B740614497B1CC0CFB9_OpenStaticInvoker(NativeGetTypeSupportType_t3BFF2DDCB88133594DA42CCA63ADA5BBFD2045CE* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker0< intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL);
}
intptr_t NativeGetTypeSupportType_Invoke_mF58A689A05763090B9FA3B740614497B1CC0CFB9_ClosedStaticInvoker(NativeGetTypeSupportType_t3BFF2DDCB88133594DA42CCA63ADA5BBFD2045CE* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< intptr_t, RuntimeObject* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_NativeGetTypeSupportType_t3BFF2DDCB88133594DA42CCA63ADA5BBFD2045CE (NativeGetTypeSupportType_t3BFF2DDCB88133594DA42CCA63ADA5BBFD2045CE* __this, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc();

	return returnValue;
}
// System.Void builtin_interfaces.msg.Duration/NativeGetTypeSupportType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGetTypeSupportType__ctor_m4BFCAAB4C6B20D445727418AFACFF31ACDD7856D (NativeGetTypeSupportType_t3BFF2DDCB88133594DA42CCA63ADA5BBFD2045CE* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&NativeGetTypeSupportType_Invoke_mF58A689A05763090B9FA3B740614497B1CC0CFB9_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&NativeGetTypeSupportType_Invoke_mF58A689A05763090B9FA3B740614497B1CC0CFB9_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NativeGetTypeSupportType_Invoke_mF58A689A05763090B9FA3B740614497B1CC0CFB9_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&NativeGetTypeSupportType_Invoke_mF58A689A05763090B9FA3B740614497B1CC0CFB9_Multicast;
}
// System.IntPtr builtin_interfaces.msg.Duration/NativeGetTypeSupportType::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeGetTypeSupportType_Invoke_mF58A689A05763090B9FA3B740614497B1CC0CFB9 (NativeGetTypeSupportType_t3BFF2DDCB88133594DA42CCA63ADA5BBFD2045CE* __this, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult builtin_interfaces.msg.Duration/NativeGetTypeSupportType::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeGetTypeSupportType_BeginInvoke_mDCD26B7FCA6CA699555C1068EA869A82B71E8F17 (NativeGetTypeSupportType_t3BFF2DDCB88133594DA42CCA63ADA5BBFD2045CE* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// System.IntPtr builtin_interfaces.msg.Duration/NativeGetTypeSupportType::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeGetTypeSupportType_EndInvoke_m6D5723DFF1B97996FC3CC1461A98E73BFA5C5E0F (NativeGetTypeSupportType_t3BFF2DDCB88133594DA42CCA63ADA5BBFD2045CE* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
intptr_t NativeCreateNativeMessageType_Invoke_m1277E13179A4A68CC60D011B1722FF89442CABA3_Multicast(NativeCreateNativeMessageType_t58C9326D140137105184BC85233A5AF360A9046F* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	intptr_t retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		NativeCreateNativeMessageType_t58C9326D140137105184BC85233A5AF360A9046F* currentDelegate = reinterpret_cast<NativeCreateNativeMessageType_t58C9326D140137105184BC85233A5AF360A9046F*>(delegatesToInvoke[i]);
		typedef intptr_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
intptr_t NativeCreateNativeMessageType_Invoke_m1277E13179A4A68CC60D011B1722FF89442CABA3_OpenInst(NativeCreateNativeMessageType_t58C9326D140137105184BC85233A5AF360A9046F* __this, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
intptr_t NativeCreateNativeMessageType_Invoke_m1277E13179A4A68CC60D011B1722FF89442CABA3_OpenStatic(NativeCreateNativeMessageType_t58C9326D140137105184BC85233A5AF360A9046F* __this, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
intptr_t NativeCreateNativeMessageType_Invoke_m1277E13179A4A68CC60D011B1722FF89442CABA3_OpenStaticInvoker(NativeCreateNativeMessageType_t58C9326D140137105184BC85233A5AF360A9046F* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker0< intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL);
}
intptr_t NativeCreateNativeMessageType_Invoke_m1277E13179A4A68CC60D011B1722FF89442CABA3_ClosedStaticInvoker(NativeCreateNativeMessageType_t58C9326D140137105184BC85233A5AF360A9046F* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< intptr_t, RuntimeObject* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_NativeCreateNativeMessageType_t58C9326D140137105184BC85233A5AF360A9046F (NativeCreateNativeMessageType_t58C9326D140137105184BC85233A5AF360A9046F* __this, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc();

	return returnValue;
}
// System.Void builtin_interfaces.msg.Duration/NativeCreateNativeMessageType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCreateNativeMessageType__ctor_mF6608EE3CBF7DE517F80C9BF826F9EBC2D850EC8 (NativeCreateNativeMessageType_t58C9326D140137105184BC85233A5AF360A9046F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&NativeCreateNativeMessageType_Invoke_m1277E13179A4A68CC60D011B1722FF89442CABA3_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&NativeCreateNativeMessageType_Invoke_m1277E13179A4A68CC60D011B1722FF89442CABA3_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NativeCreateNativeMessageType_Invoke_m1277E13179A4A68CC60D011B1722FF89442CABA3_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&NativeCreateNativeMessageType_Invoke_m1277E13179A4A68CC60D011B1722FF89442CABA3_Multicast;
}
// System.IntPtr builtin_interfaces.msg.Duration/NativeCreateNativeMessageType::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeCreateNativeMessageType_Invoke_m1277E13179A4A68CC60D011B1722FF89442CABA3 (NativeCreateNativeMessageType_t58C9326D140137105184BC85233A5AF360A9046F* __this, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult builtin_interfaces.msg.Duration/NativeCreateNativeMessageType::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeCreateNativeMessageType_BeginInvoke_mCF27F45D3C20C48C9701B5AA24B4A5610A76BA56 (NativeCreateNativeMessageType_t58C9326D140137105184BC85233A5AF360A9046F* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// System.IntPtr builtin_interfaces.msg.Duration/NativeCreateNativeMessageType::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeCreateNativeMessageType_EndInvoke_m5EB8E030D706B2C77A6AADE7F7DF4C114FAABAD1 (NativeCreateNativeMessageType_t58C9326D140137105184BC85233A5AF360A9046F* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
void NativeDestroyNativeMessageType_Invoke_m45C879AAC5DA1CE5BA56AD3C3F19B737E5BF255F_Multicast(NativeDestroyNativeMessageType_tD51BFA46C6FE30B2CB5B2A9071178DB5EB94D311* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		NativeDestroyNativeMessageType_tD51BFA46C6FE30B2CB5B2A9071178DB5EB94D311* currentDelegate = reinterpret_cast<NativeDestroyNativeMessageType_tD51BFA46C6FE30B2CB5B2A9071178DB5EB94D311*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_messageHandle, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void NativeDestroyNativeMessageType_Invoke_m45C879AAC5DA1CE5BA56AD3C3F19B737E5BF255F_OpenInst(NativeDestroyNativeMessageType_tD51BFA46C6FE30B2CB5B2A9071178DB5EB94D311* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_messageHandle, method);
}
void NativeDestroyNativeMessageType_Invoke_m45C879AAC5DA1CE5BA56AD3C3F19B737E5BF255F_OpenStatic(NativeDestroyNativeMessageType_tD51BFA46C6FE30B2CB5B2A9071178DB5EB94D311* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_messageHandle, method);
}
void NativeDestroyNativeMessageType_Invoke_m45C879AAC5DA1CE5BA56AD3C3F19B737E5BF255F_OpenStaticInvoker(NativeDestroyNativeMessageType_tD51BFA46C6FE30B2CB5B2A9071178DB5EB94D311* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	InvokerActionInvoker1< intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_messageHandle);
}
void NativeDestroyNativeMessageType_Invoke_m45C879AAC5DA1CE5BA56AD3C3F19B737E5BF255F_ClosedStaticInvoker(NativeDestroyNativeMessageType_tD51BFA46C6FE30B2CB5B2A9071178DB5EB94D311* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_messageHandle);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_NativeDestroyNativeMessageType_tD51BFA46C6FE30B2CB5B2A9071178DB5EB94D311 (NativeDestroyNativeMessageType_tD51BFA46C6FE30B2CB5B2A9071178DB5EB94D311* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_messageHandle);

}
// System.Void builtin_interfaces.msg.Duration/NativeDestroyNativeMessageType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeDestroyNativeMessageType__ctor_mD3221470F373277A033CDB2946FC0F596FF1A4FF (NativeDestroyNativeMessageType_tD51BFA46C6FE30B2CB5B2A9071178DB5EB94D311* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&NativeDestroyNativeMessageType_Invoke_m45C879AAC5DA1CE5BA56AD3C3F19B737E5BF255F_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&NativeDestroyNativeMessageType_Invoke_m45C879AAC5DA1CE5BA56AD3C3F19B737E5BF255F_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NativeDestroyNativeMessageType_Invoke_m45C879AAC5DA1CE5BA56AD3C3F19B737E5BF255F_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&NativeDestroyNativeMessageType_Invoke_m45C879AAC5DA1CE5BA56AD3C3F19B737E5BF255F_Multicast;
}
// System.Void builtin_interfaces.msg.Duration/NativeDestroyNativeMessageType::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeDestroyNativeMessageType_Invoke_m45C879AAC5DA1CE5BA56AD3C3F19B737E5BF255F (NativeDestroyNativeMessageType_tD51BFA46C6FE30B2CB5B2A9071178DB5EB94D311* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_messageHandle, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult builtin_interfaces.msg.Duration/NativeDestroyNativeMessageType::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeDestroyNativeMessageType_BeginInvoke_m8675BC819214AD741A864E514D3801CEFA93DC3B (NativeDestroyNativeMessageType_tD51BFA46C6FE30B2CB5B2A9071178DB5EB94D311* __this, intptr_t ___0_messageHandle, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
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
// System.Void builtin_interfaces.msg.Duration/NativeDestroyNativeMessageType::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeDestroyNativeMessageType_EndInvoke_m48373EC0CF9E85C96FD481FB29E8E7CEAC0D68EE (NativeDestroyNativeMessageType_tD51BFA46C6FE30B2CB5B2A9071178DB5EB94D311* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
int32_t NativeReadFieldSecType_Invoke_m544A20D9D273DB4C004864A1B8D46598CB001E06_Multicast(NativeReadFieldSecType_t928C1B88798604C4354B129B08975FA58D257C54* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		NativeReadFieldSecType_t928C1B88798604C4354B129B08975FA58D257C54* currentDelegate = reinterpret_cast<NativeReadFieldSecType_t928C1B88798604C4354B129B08975FA58D257C54*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_messageHandle, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t NativeReadFieldSecType_Invoke_m544A20D9D273DB4C004864A1B8D46598CB001E06_OpenInst(NativeReadFieldSecType_t928C1B88798604C4354B129B08975FA58D257C54* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_messageHandle, method);
}
int32_t NativeReadFieldSecType_Invoke_m544A20D9D273DB4C004864A1B8D46598CB001E06_OpenStatic(NativeReadFieldSecType_t928C1B88798604C4354B129B08975FA58D257C54* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_messageHandle, method);
}
int32_t NativeReadFieldSecType_Invoke_m544A20D9D273DB4C004864A1B8D46598CB001E06_OpenStaticInvoker(NativeReadFieldSecType_t928C1B88798604C4354B129B08975FA58D257C54* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< int32_t, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_messageHandle);
}
int32_t NativeReadFieldSecType_Invoke_m544A20D9D273DB4C004864A1B8D46598CB001E06_ClosedStaticInvoker(NativeReadFieldSecType_t928C1B88798604C4354B129B08975FA58D257C54* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, RuntimeObject*, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_messageHandle);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_NativeReadFieldSecType_t928C1B88798604C4354B129B08975FA58D257C54 (NativeReadFieldSecType_t928C1B88798604C4354B129B08975FA58D257C54* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_messageHandle);

	return returnValue;
}
// System.Void builtin_interfaces.msg.Duration/NativeReadFieldSecType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeReadFieldSecType__ctor_m2E57547A553102BF45EC1969AE0243D14D9886A8 (NativeReadFieldSecType_t928C1B88798604C4354B129B08975FA58D257C54* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&NativeReadFieldSecType_Invoke_m544A20D9D273DB4C004864A1B8D46598CB001E06_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&NativeReadFieldSecType_Invoke_m544A20D9D273DB4C004864A1B8D46598CB001E06_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NativeReadFieldSecType_Invoke_m544A20D9D273DB4C004864A1B8D46598CB001E06_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&NativeReadFieldSecType_Invoke_m544A20D9D273DB4C004864A1B8D46598CB001E06_Multicast;
}
// System.Int32 builtin_interfaces.msg.Duration/NativeReadFieldSecType::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeReadFieldSecType_Invoke_m544A20D9D273DB4C004864A1B8D46598CB001E06 (NativeReadFieldSecType_t928C1B88798604C4354B129B08975FA58D257C54* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_messageHandle, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult builtin_interfaces.msg.Duration/NativeReadFieldSecType::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeReadFieldSecType_BeginInvoke_m8019FB0498819EB0EF4F6864F2914D77DD6EB5B1 (NativeReadFieldSecType_t928C1B88798604C4354B129B08975FA58D257C54* __this, intptr_t ___0_messageHandle, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
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
// System.Int32 builtin_interfaces.msg.Duration/NativeReadFieldSecType::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeReadFieldSecType_EndInvoke_m68C6B59E7D3D13E5C94011ABE2CEA8D58E5D9EF0 (NativeReadFieldSecType_t928C1B88798604C4354B129B08975FA58D257C54* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void NativeWriteFieldSecType_Invoke_m220E34460FF2F3476F68854A650A850E8D690BE9_Multicast(NativeWriteFieldSecType_t8676F1C0647013744EEA9830D29BD38C2FC79C4F* __this, intptr_t ___0_messageHandle, int32_t ___1_value, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		NativeWriteFieldSecType_t8676F1C0647013744EEA9830D29BD38C2FC79C4F* currentDelegate = reinterpret_cast<NativeWriteFieldSecType_t8676F1C0647013744EEA9830D29BD38C2FC79C4F*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_messageHandle, ___1_value, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void NativeWriteFieldSecType_Invoke_m220E34460FF2F3476F68854A650A850E8D690BE9_OpenInst(NativeWriteFieldSecType_t8676F1C0647013744EEA9830D29BD38C2FC79C4F* __this, intptr_t ___0_messageHandle, int32_t ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_messageHandle, ___1_value, method);
}
void NativeWriteFieldSecType_Invoke_m220E34460FF2F3476F68854A650A850E8D690BE9_OpenStatic(NativeWriteFieldSecType_t8676F1C0647013744EEA9830D29BD38C2FC79C4F* __this, intptr_t ___0_messageHandle, int32_t ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_messageHandle, ___1_value, method);
}
void NativeWriteFieldSecType_Invoke_m220E34460FF2F3476F68854A650A850E8D690BE9_OpenStaticInvoker(NativeWriteFieldSecType_t8676F1C0647013744EEA9830D29BD38C2FC79C4F* __this, intptr_t ___0_messageHandle, int32_t ___1_value, const RuntimeMethod* method)
{
	InvokerActionInvoker2< intptr_t, int32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_messageHandle, ___1_value);
}
void NativeWriteFieldSecType_Invoke_m220E34460FF2F3476F68854A650A850E8D690BE9_ClosedStaticInvoker(NativeWriteFieldSecType_t8676F1C0647013744EEA9830D29BD38C2FC79C4F* __this, intptr_t ___0_messageHandle, int32_t ___1_value, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, intptr_t, int32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_messageHandle, ___1_value);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_NativeWriteFieldSecType_t8676F1C0647013744EEA9830D29BD38C2FC79C4F (NativeWriteFieldSecType_t8676F1C0647013744EEA9830D29BD38C2FC79C4F* __this, intptr_t ___0_messageHandle, int32_t ___1_value, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_messageHandle, ___1_value);

}
// System.Void builtin_interfaces.msg.Duration/NativeWriteFieldSecType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWriteFieldSecType__ctor_mCA996794A0AE77DCCD5374C07327A847C0E963D1 (NativeWriteFieldSecType_t8676F1C0647013744EEA9830D29BD38C2FC79C4F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&NativeWriteFieldSecType_Invoke_m220E34460FF2F3476F68854A650A850E8D690BE9_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&NativeWriteFieldSecType_Invoke_m220E34460FF2F3476F68854A650A850E8D690BE9_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NativeWriteFieldSecType_Invoke_m220E34460FF2F3476F68854A650A850E8D690BE9_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&NativeWriteFieldSecType_Invoke_m220E34460FF2F3476F68854A650A850E8D690BE9_Multicast;
}
// System.Void builtin_interfaces.msg.Duration/NativeWriteFieldSecType::Invoke(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWriteFieldSecType_Invoke_m220E34460FF2F3476F68854A650A850E8D690BE9 (NativeWriteFieldSecType_t8676F1C0647013744EEA9830D29BD38C2FC79C4F* __this, intptr_t ___0_messageHandle, int32_t ___1_value, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_messageHandle, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult builtin_interfaces.msg.Duration/NativeWriteFieldSecType::BeginInvoke(System.IntPtr,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeWriteFieldSecType_BeginInvoke_mC596ECEBEEF55970952D1BAB0AC8434D365BBC30 (NativeWriteFieldSecType_t8676F1C0647013744EEA9830D29BD38C2FC79C4F* __this, intptr_t ___0_messageHandle, int32_t ___1_value, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_messageHandle);
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___1_value);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void builtin_interfaces.msg.Duration/NativeWriteFieldSecType::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWriteFieldSecType_EndInvoke_m49E9F4BBCE0E575E94EC0F780935836087ECE829 (NativeWriteFieldSecType_t8676F1C0647013744EEA9830D29BD38C2FC79C4F* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
uint32_t NativeReadFieldNanosecType_Invoke_mC6BC1457D686CF5BF26DC40BC388B4BDCB1ADDA1_Multicast(NativeReadFieldNanosecType_t182F0C4CE8EA9C48B3A5DF251CB1F83A38FA8279* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	uint32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		NativeReadFieldNanosecType_t182F0C4CE8EA9C48B3A5DF251CB1F83A38FA8279* currentDelegate = reinterpret_cast<NativeReadFieldNanosecType_t182F0C4CE8EA9C48B3A5DF251CB1F83A38FA8279*>(delegatesToInvoke[i]);
		typedef uint32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_messageHandle, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
uint32_t NativeReadFieldNanosecType_Invoke_mC6BC1457D686CF5BF26DC40BC388B4BDCB1ADDA1_OpenInst(NativeReadFieldNanosecType_t182F0C4CE8EA9C48B3A5DF251CB1F83A38FA8279* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	typedef uint32_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_messageHandle, method);
}
uint32_t NativeReadFieldNanosecType_Invoke_mC6BC1457D686CF5BF26DC40BC388B4BDCB1ADDA1_OpenStatic(NativeReadFieldNanosecType_t182F0C4CE8EA9C48B3A5DF251CB1F83A38FA8279* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	typedef uint32_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_messageHandle, method);
}
uint32_t NativeReadFieldNanosecType_Invoke_mC6BC1457D686CF5BF26DC40BC388B4BDCB1ADDA1_OpenStaticInvoker(NativeReadFieldNanosecType_t182F0C4CE8EA9C48B3A5DF251CB1F83A38FA8279* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< uint32_t, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_messageHandle);
}
uint32_t NativeReadFieldNanosecType_Invoke_mC6BC1457D686CF5BF26DC40BC388B4BDCB1ADDA1_ClosedStaticInvoker(NativeReadFieldNanosecType_t182F0C4CE8EA9C48B3A5DF251CB1F83A38FA8279* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< uint32_t, RuntimeObject*, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_messageHandle);
}
IL2CPP_EXTERN_C  uint32_t DelegatePInvokeWrapper_NativeReadFieldNanosecType_t182F0C4CE8EA9C48B3A5DF251CB1F83A38FA8279 (NativeReadFieldNanosecType_t182F0C4CE8EA9C48B3A5DF251CB1F83A38FA8279* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	typedef uint32_t (CDECL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	uint32_t returnValue = il2cppPInvokeFunc(___0_messageHandle);

	return returnValue;
}
// System.Void builtin_interfaces.msg.Duration/NativeReadFieldNanosecType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeReadFieldNanosecType__ctor_m1710FC5828843AC4E5D4A9FD651931E94C7E666C (NativeReadFieldNanosecType_t182F0C4CE8EA9C48B3A5DF251CB1F83A38FA8279* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&NativeReadFieldNanosecType_Invoke_mC6BC1457D686CF5BF26DC40BC388B4BDCB1ADDA1_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&NativeReadFieldNanosecType_Invoke_mC6BC1457D686CF5BF26DC40BC388B4BDCB1ADDA1_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NativeReadFieldNanosecType_Invoke_mC6BC1457D686CF5BF26DC40BC388B4BDCB1ADDA1_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&NativeReadFieldNanosecType_Invoke_mC6BC1457D686CF5BF26DC40BC388B4BDCB1ADDA1_Multicast;
}
// System.UInt32 builtin_interfaces.msg.Duration/NativeReadFieldNanosecType::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NativeReadFieldNanosecType_Invoke_mC6BC1457D686CF5BF26DC40BC388B4BDCB1ADDA1 (NativeReadFieldNanosecType_t182F0C4CE8EA9C48B3A5DF251CB1F83A38FA8279* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method) 
{
	typedef uint32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_messageHandle, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult builtin_interfaces.msg.Duration/NativeReadFieldNanosecType::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeReadFieldNanosecType_BeginInvoke_m2745F473B025FBC4F5BCF996419E1EEA695B6B85 (NativeReadFieldNanosecType_t182F0C4CE8EA9C48B3A5DF251CB1F83A38FA8279* __this, intptr_t ___0_messageHandle, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
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
// System.UInt32 builtin_interfaces.msg.Duration/NativeReadFieldNanosecType::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NativeReadFieldNanosecType_EndInvoke_m92508AF2DFB814EC76A5308128C1E063FD2FDA63 (NativeReadFieldNanosecType_t182F0C4CE8EA9C48B3A5DF251CB1F83A38FA8279* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(uint32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void NativeWriteFieldNanosecType_Invoke_m18A7E5DA519011739DF74FB8E1CB02A3A1ED97BC_Multicast(NativeWriteFieldNanosecType_t1ECC507ECF4AA3765E4EA629CA6B6E1C5E50FD10* __this, intptr_t ___0_messageHandle, uint32_t ___1_value, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		NativeWriteFieldNanosecType_t1ECC507ECF4AA3765E4EA629CA6B6E1C5E50FD10* currentDelegate = reinterpret_cast<NativeWriteFieldNanosecType_t1ECC507ECF4AA3765E4EA629CA6B6E1C5E50FD10*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, uint32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_messageHandle, ___1_value, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void NativeWriteFieldNanosecType_Invoke_m18A7E5DA519011739DF74FB8E1CB02A3A1ED97BC_OpenInst(NativeWriteFieldNanosecType_t1ECC507ECF4AA3765E4EA629CA6B6E1C5E50FD10* __this, intptr_t ___0_messageHandle, uint32_t ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, uint32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_messageHandle, ___1_value, method);
}
void NativeWriteFieldNanosecType_Invoke_m18A7E5DA519011739DF74FB8E1CB02A3A1ED97BC_OpenStatic(NativeWriteFieldNanosecType_t1ECC507ECF4AA3765E4EA629CA6B6E1C5E50FD10* __this, intptr_t ___0_messageHandle, uint32_t ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, uint32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_messageHandle, ___1_value, method);
}
void NativeWriteFieldNanosecType_Invoke_m18A7E5DA519011739DF74FB8E1CB02A3A1ED97BC_OpenStaticInvoker(NativeWriteFieldNanosecType_t1ECC507ECF4AA3765E4EA629CA6B6E1C5E50FD10* __this, intptr_t ___0_messageHandle, uint32_t ___1_value, const RuntimeMethod* method)
{
	InvokerActionInvoker2< intptr_t, uint32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_messageHandle, ___1_value);
}
void NativeWriteFieldNanosecType_Invoke_m18A7E5DA519011739DF74FB8E1CB02A3A1ED97BC_ClosedStaticInvoker(NativeWriteFieldNanosecType_t1ECC507ECF4AA3765E4EA629CA6B6E1C5E50FD10* __this, intptr_t ___0_messageHandle, uint32_t ___1_value, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, intptr_t, uint32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_messageHandle, ___1_value);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_NativeWriteFieldNanosecType_t1ECC507ECF4AA3765E4EA629CA6B6E1C5E50FD10 (NativeWriteFieldNanosecType_t1ECC507ECF4AA3765E4EA629CA6B6E1C5E50FD10* __this, intptr_t ___0_messageHandle, uint32_t ___1_value, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, uint32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_messageHandle, ___1_value);

}
// System.Void builtin_interfaces.msg.Duration/NativeWriteFieldNanosecType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWriteFieldNanosecType__ctor_m280D951B38380EA5B6FAD6796082A93C6B60D9D0 (NativeWriteFieldNanosecType_t1ECC507ECF4AA3765E4EA629CA6B6E1C5E50FD10* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&NativeWriteFieldNanosecType_Invoke_m18A7E5DA519011739DF74FB8E1CB02A3A1ED97BC_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&NativeWriteFieldNanosecType_Invoke_m18A7E5DA519011739DF74FB8E1CB02A3A1ED97BC_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NativeWriteFieldNanosecType_Invoke_m18A7E5DA519011739DF74FB8E1CB02A3A1ED97BC_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&NativeWriteFieldNanosecType_Invoke_m18A7E5DA519011739DF74FB8E1CB02A3A1ED97BC_Multicast;
}
// System.Void builtin_interfaces.msg.Duration/NativeWriteFieldNanosecType::Invoke(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWriteFieldNanosecType_Invoke_m18A7E5DA519011739DF74FB8E1CB02A3A1ED97BC (NativeWriteFieldNanosecType_t1ECC507ECF4AA3765E4EA629CA6B6E1C5E50FD10* __this, intptr_t ___0_messageHandle, uint32_t ___1_value, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, uint32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_messageHandle, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult builtin_interfaces.msg.Duration/NativeWriteFieldNanosecType::BeginInvoke(System.IntPtr,System.UInt32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeWriteFieldNanosecType_BeginInvoke_m91BC7F05004249A646A16F86D9B3A291FA18FEE4 (NativeWriteFieldNanosecType_t1ECC507ECF4AA3765E4EA629CA6B6E1C5E50FD10* __this, intptr_t ___0_messageHandle, uint32_t ___1_value, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_messageHandle);
	__d_args[1] = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &___1_value);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void builtin_interfaces.msg.Duration/NativeWriteFieldNanosecType::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWriteFieldNanosecType_EndInvoke_mEDC839AEDB0B4DDC3072E1A9C71A90F128A412F5 (NativeWriteFieldNanosecType_t1ECC507ECF4AA3765E4EA629CA6B6E1C5E50FD10* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
// System.Boolean builtin_interfaces.msg.Time::get_IsDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Time_get_IsDisposed_mCDCE0D75CBD37E148811E93C4C8588FC732705E4 (Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___disposed_2;
		return L_0;
	}
}
// System.Int32 builtin_interfaces.msg.Time::get_Sec()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Time_get_Sec_mE050B429DBD14D7C80C01AC82639378AD7046021 (Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CSecU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void builtin_interfaces.msg.Time::set_Sec(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_Sec_mAFABF5D4EE0936BB1164B867D0688B3CF5E59F25 (Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CSecU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.UInt32 builtin_interfaces.msg.Time::get_Nanosec()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Time_get_Nanosec_mAA9EC2FA1685D3639555E2A9F8ABE9BD1D4ED808 (Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___U3CNanosecU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void builtin_interfaces.msg.Time::set_Nanosec(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_Nanosec_m728F7849CAC073D12896D38AFCAB388E78DCEED9 (Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_value;
		__this->___U3CNanosecU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void builtin_interfaces.msg.Time::MessageTypeSupportPreload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_MessageTypeSupportPreload_m754F547517CA082D79F2B1D7BCC723292710C92C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeInformation_tB2DFA85FB9251AE3A3112904C9DF06C30D1D3EAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F940A651BB0AD125BDEAA5BBE24CD3A754FEC99);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2678E1127A06C414D59753C6104A9428F7D4403D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral331C2AE40A11FD125142F1CB87DC691E1E798746);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B18A3E5160ED541A2344733BA0632FE0BF744F9);
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
		L_10 = InterfaceFuncInvoker1< intptr_t, String_t* >::Invoke(1 /* System.IntPtr ROS2.DllLoadUtils::LoadLibraryNoSuffix(System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_9, _stringLiteral0F940A651BB0AD125BDEAA5BBE24CD3A754FEC99);
		NullCheck(L_9);
		intptr_t L_11;
		L_11 = InterfaceFuncInvoker1< intptr_t, String_t* >::Invoke(1 /* System.IntPtr ROS2.DllLoadUtils::LoadLibraryNoSuffix(System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_9, _stringLiteral2678E1127A06C414D59753C6104A9428F7D4403D);
	}

IL_0060:
	{
		return;
	}
}
// System.Void builtin_interfaces.msg.Time::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time__cctor_m440A8F87FB4CCD5DC8561894E25D2588A45BBA45 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeCreateNativeMessageType_t762632B2C8CF227E63BA1D20B346B64492793054_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeCreateNativeMessageType_t762632B2C8CF227E63BA1D20B346B64492793054_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeDestroyNativeMessageType_t7459C33DB752D86695AA046FE5339029AD797B04_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeDestroyNativeMessageType_t7459C33DB752D86695AA046FE5339029AD797B04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGetTypeSupportType_t63782EF21498CB0633F23315B3ED307098D8C106_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGetTypeSupportType_t63782EF21498CB0633F23315B3ED307098D8C106_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeReadFieldNanosecType_t97EDBC81AAA04CCAC1B23D0B2B78C393C0DA91DB_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeReadFieldNanosecType_t97EDBC81AAA04CCAC1B23D0B2B78C393C0DA91DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeReadFieldSecType_t3470747120F9BFC5B6289A0B9E6F28EFA7ED099F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeReadFieldSecType_t3470747120F9BFC5B6289A0B9E6F28EFA7ED099F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeWriteFieldNanosecType_t5E0AE928ADDF2C29C3B07EDD132D94E839372856_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeWriteFieldNanosecType_t5E0AE928ADDF2C29C3B07EDD132D94E839372856_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeWriteFieldSecType_t93D0F4573A3D133A711AEBD65821FD8462365348_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeWriteFieldSecType_t93D0F4573A3D133A711AEBD65821FD8462365348_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral286CE5F62798417658F1B4FDA78876A84C42B7F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral30EF70E3AFA0F657F60D951A01085AD1DBF26C37);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53ED904F9DD607AE3FD3ECE9C80D5A4DCD356427);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77FEF257C3A120EF3F45BA6C72A3FB048FD4545B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96E0BAC397EF21AA492E6A1FD721AE4FCBEF808D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2BC3DCBFB8DD7C38E5AF232F720A4B5870E88EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2CF6655705E22CB42071C9E6CBCFD1DB53E9A52);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD755A24ABB6916DD5812AEECCAB7631B91B942CF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEB5542FFA07015567183DAEC12805E08BA1F64D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE73A2C0EA0A35379A85717FAB458F9C91CFEB38D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED550C215FA994C460982A30980E86D81505D5A6);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0;
		L_0 = DllLoadUtilsFactory_GetDllLoadUtils_m8EB2D6E40DBF00ED8E25114CAABFFFCF16286775(NULL);
		((Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_StaticFields*)il2cpp_codegen_static_fields_for(Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_il2cpp_TypeInfo_var))->___dllLoadUtils_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_StaticFields*)il2cpp_codegen_static_fields_for(Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_il2cpp_TypeInfo_var))->___dllLoadUtils_1), (void*)L_0);
		RuntimeObject* L_1 = ((Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_StaticFields*)il2cpp_codegen_static_fields_for(Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_il2cpp_TypeInfo_var))->___dllLoadUtils_1;
		NullCheck(L_1);
		intptr_t L_2;
		L_2 = InterfaceFuncInvoker1< intptr_t, String_t* >::Invoke(1 /* System.IntPtr ROS2.DllLoadUtils::LoadLibraryNoSuffix(System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_1, _stringLiteralD755A24ABB6916DD5812AEECCAB7631B91B942CF);
		RuntimeObject* L_3 = ((Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_StaticFields*)il2cpp_codegen_static_fields_for(Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_il2cpp_TypeInfo_var))->___dllLoadUtils_1;
		NullCheck(L_3);
		intptr_t L_4;
		L_4 = InterfaceFuncInvoker1< intptr_t, String_t* >::Invoke(1 /* System.IntPtr ROS2.DllLoadUtils::LoadLibraryNoSuffix(System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_3, _stringLiteralDEB5542FFA07015567183DAEC12805E08BA1F64D);
		RuntimeObject* L_5 = ((Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_StaticFields*)il2cpp_codegen_static_fields_for(Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_il2cpp_TypeInfo_var))->___dllLoadUtils_1;
		NullCheck(L_5);
		intptr_t L_6;
		L_6 = InterfaceFuncInvoker1< intptr_t, String_t* >::Invoke(1 /* System.IntPtr ROS2.DllLoadUtils::LoadLibraryNoSuffix(System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_5, _stringLiteral30EF70E3AFA0F657F60D951A01085AD1DBF26C37);
		Time_MessageTypeSupportPreload_m754F547517CA082D79F2B1D7BCC723292710C92C(NULL);
		RuntimeObject* L_7 = ((Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_StaticFields*)il2cpp_codegen_static_fields_for(Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_il2cpp_TypeInfo_var))->___dllLoadUtils_1;
		NullCheck(L_7);
		intptr_t L_8;
		L_8 = InterfaceFuncInvoker1< intptr_t, String_t* >::Invoke(0 /* System.IntPtr ROS2.DllLoadUtils::LoadLibrary(System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_7, _stringLiteralE73A2C0EA0A35379A85717FAB458F9C91CFEB38D);
		V_0 = L_8;
		RuntimeObject* L_9 = ((Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_StaticFields*)il2cpp_codegen_static_fields_for(Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_il2cpp_TypeInfo_var))->___dllLoadUtils_1;
		intptr_t L_10 = V_0;
		NullCheck(L_9);
		intptr_t L_11;
		L_11 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_9, L_10, _stringLiteral96E0BAC397EF21AA492E6A1FD721AE4FCBEF808D);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (NativeGetTypeSupportType_t63782EF21498CB0633F23315B3ED307098D8C106_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Delegate_t* L_14;
		L_14 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_11, L_13, NULL);
		((Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_StaticFields*)il2cpp_codegen_static_fields_for(Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_il2cpp_TypeInfo_var))->___native_get_typesupport_5 = ((NativeGetTypeSupportType_t63782EF21498CB0633F23315B3ED307098D8C106*)CastclassSealed((RuntimeObject*)L_14, NativeGetTypeSupportType_t63782EF21498CB0633F23315B3ED307098D8C106_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_StaticFields*)il2cpp_codegen_static_fields_for(Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_il2cpp_TypeInfo_var))->___native_get_typesupport_5), (void*)((NativeGetTypeSupportType_t63782EF21498CB0633F23315B3ED307098D8C106*)CastclassSealed((RuntimeObject*)L_14, NativeGetTypeSupportType_t63782EF21498CB0633F23315B3ED307098D8C106_il2cpp_TypeInfo_var)));
		RuntimeObject* L_15 = ((Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_StaticFields*)il2cpp_codegen_static_fields_for(Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_il2cpp_TypeInfo_var))->___dllLoadUtils_1;
		intptr_t L_16 = V_0;
		NullCheck(L_15);
		intptr_t L_17;
		L_17 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_15, L_16, _stringLiteral77FEF257C3A120EF3F45BA6C72A3FB048FD4545B);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (NativeCreateNativeMessageType_t762632B2C8CF227E63BA1D20B346B64492793054_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		Delegate_t* L_20;
		L_20 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_17, L_19, NULL);
		((Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_StaticFields*)il2cpp_codegen_static_fields_for(Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_il2cpp_TypeInfo_var))->___native_create_native_message_6 = ((NativeCreateNativeMessageType_t762632B2C8CF227E63BA1D20B346B64492793054*)CastclassSealed((RuntimeObject*)L_20, NativeCreateNativeMessageType_t762632B2C8CF227E63BA1D20B346B64492793054_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_StaticFields*)il2cpp_codegen_static_fields_for(Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_il2cpp_TypeInfo_var))->___native_create_native_message_6), (void*)((NativeCreateNativeMessageType_t762632B2C8CF227E63BA1D20B346B64492793054*)CastclassSealed((RuntimeObject*)L_20, NativeCreateNativeMessageType_t762632B2C8CF227E63BA1D20B346B64492793054_il2cpp_TypeInfo_var)));
		RuntimeObject* L_21 = ((Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_StaticFields*)il2cpp_codegen_static_fields_for(Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_il2cpp_TypeInfo_var))->___dllLoadUtils_1;
		intptr_t L_22 = V_0;
		NullCheck(L_21);
		intptr_t L_23;
		L_23 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_21, L_22, _stringLiteralC2BC3DCBFB8DD7C38E5AF232F720A4B5870E88EB);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (NativeDestroyNativeMessageType_t7459C33DB752D86695AA046FE5339029AD797B04_0_0_0_var) };
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		Delegate_t* L_26;
		L_26 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_23, L_25, NULL);
		((Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_StaticFields*)il2cpp_codegen_static_fields_for(Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_il2cpp_TypeInfo_var))->___native_destroy_native_message_7 = ((NativeDestroyNativeMessageType_t7459C33DB752D86695AA046FE5339029AD797B04*)CastclassSealed((RuntimeObject*)L_26, NativeDestroyNativeMessageType_t7459C33DB752D86695AA046FE5339029AD797B04_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_StaticFields*)il2cpp_codegen_static_fields_for(Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_il2cpp_TypeInfo_var))->___native_destroy_native_message_7), (void*)((NativeDestroyNativeMessageType_t7459C33DB752D86695AA046FE5339029AD797B04*)CastclassSealed((RuntimeObject*)L_26, NativeDestroyNativeMessageType_t7459C33DB752D86695AA046FE5339029AD797B04_il2cpp_TypeInfo_var)));
		RuntimeObject* L_27 = ((Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_StaticFields*)il2cpp_codegen_static_fields_for(Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_il2cpp_TypeInfo_var))->___dllLoadUtils_1;
		intptr_t L_28 = V_0;
		NullCheck(L_27);
		intptr_t L_29;
		L_29 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_27, L_28, _stringLiteralC2CF6655705E22CB42071C9E6CBCFD1DB53E9A52);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (NativeReadFieldSecType_t3470747120F9BFC5B6289A0B9E6F28EFA7ED099F_0_0_0_var) };
		Type_t* L_31;
		L_31 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_30, NULL);
		Delegate_t* L_32;
		L_32 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_29, L_31, NULL);
		((Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_StaticFields*)il2cpp_codegen_static_fields_for(Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_il2cpp_TypeInfo_var))->___native_read_field_sec_8 = ((NativeReadFieldSecType_t3470747120F9BFC5B6289A0B9E6F28EFA7ED099F*)CastclassSealed((RuntimeObject*)L_32, NativeReadFieldSecType_t3470747120F9BFC5B6289A0B9E6F28EFA7ED099F_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_StaticFields*)il2cpp_codegen_static_fields_for(Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_il2cpp_TypeInfo_var))->___native_read_field_sec_8), (void*)((NativeReadFieldSecType_t3470747120F9BFC5B6289A0B9E6F28EFA7ED099F*)CastclassSealed((RuntimeObject*)L_32, NativeReadFieldSecType_t3470747120F9BFC5B6289A0B9E6F28EFA7ED099F_il2cpp_TypeInfo_var)));
		RuntimeObject* L_33 = ((Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_StaticFields*)il2cpp_codegen_static_fields_for(Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_il2cpp_TypeInfo_var))->___dllLoadUtils_1;
		intptr_t L_34 = V_0;
		NullCheck(L_33);
		intptr_t L_35;
		L_35 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_33, L_34, _stringLiteralED550C215FA994C460982A30980E86D81505D5A6);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_36 = { reinterpret_cast<intptr_t> (NativeWriteFieldSecType_t93D0F4573A3D133A711AEBD65821FD8462365348_0_0_0_var) };
		Type_t* L_37;
		L_37 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_36, NULL);
		Delegate_t* L_38;
		L_38 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_35, L_37, NULL);
		((Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_StaticFields*)il2cpp_codegen_static_fields_for(Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_il2cpp_TypeInfo_var))->___native_write_field_sec_9 = ((NativeWriteFieldSecType_t93D0F4573A3D133A711AEBD65821FD8462365348*)CastclassSealed((RuntimeObject*)L_38, NativeWriteFieldSecType_t93D0F4573A3D133A711AEBD65821FD8462365348_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_StaticFields*)il2cpp_codegen_static_fields_for(Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_il2cpp_TypeInfo_var))->___native_write_field_sec_9), (void*)((NativeWriteFieldSecType_t93D0F4573A3D133A711AEBD65821FD8462365348*)CastclassSealed((RuntimeObject*)L_38, NativeWriteFieldSecType_t93D0F4573A3D133A711AEBD65821FD8462365348_il2cpp_TypeInfo_var)));
		RuntimeObject* L_39 = ((Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_StaticFields*)il2cpp_codegen_static_fields_for(Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_il2cpp_TypeInfo_var))->___dllLoadUtils_1;
		intptr_t L_40 = V_0;
		NullCheck(L_39);
		intptr_t L_41;
		L_41 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_39, L_40, _stringLiteral53ED904F9DD607AE3FD3ECE9C80D5A4DCD356427);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (NativeReadFieldNanosecType_t97EDBC81AAA04CCAC1B23D0B2B78C393C0DA91DB_0_0_0_var) };
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
		Delegate_t* L_44;
		L_44 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_41, L_43, NULL);
		((Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_StaticFields*)il2cpp_codegen_static_fields_for(Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_il2cpp_TypeInfo_var))->___native_read_field_nanosec_10 = ((NativeReadFieldNanosecType_t97EDBC81AAA04CCAC1B23D0B2B78C393C0DA91DB*)CastclassSealed((RuntimeObject*)L_44, NativeReadFieldNanosecType_t97EDBC81AAA04CCAC1B23D0B2B78C393C0DA91DB_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_StaticFields*)il2cpp_codegen_static_fields_for(Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_il2cpp_TypeInfo_var))->___native_read_field_nanosec_10), (void*)((NativeReadFieldNanosecType_t97EDBC81AAA04CCAC1B23D0B2B78C393C0DA91DB*)CastclassSealed((RuntimeObject*)L_44, NativeReadFieldNanosecType_t97EDBC81AAA04CCAC1B23D0B2B78C393C0DA91DB_il2cpp_TypeInfo_var)));
		RuntimeObject* L_45 = ((Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_StaticFields*)il2cpp_codegen_static_fields_for(Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_il2cpp_TypeInfo_var))->___dllLoadUtils_1;
		intptr_t L_46 = V_0;
		NullCheck(L_45);
		intptr_t L_47;
		L_47 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_45, L_46, _stringLiteral286CE5F62798417658F1B4FDA78876A84C42B7F6);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_48 = { reinterpret_cast<intptr_t> (NativeWriteFieldNanosecType_t5E0AE928ADDF2C29C3B07EDD132D94E839372856_0_0_0_var) };
		Type_t* L_49;
		L_49 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_48, NULL);
		Delegate_t* L_50;
		L_50 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_47, L_49, NULL);
		((Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_StaticFields*)il2cpp_codegen_static_fields_for(Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_il2cpp_TypeInfo_var))->___native_write_field_nanosec_11 = ((NativeWriteFieldNanosecType_t5E0AE928ADDF2C29C3B07EDD132D94E839372856*)CastclassSealed((RuntimeObject*)L_50, NativeWriteFieldNanosecType_t5E0AE928ADDF2C29C3B07EDD132D94E839372856_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_StaticFields*)il2cpp_codegen_static_fields_for(Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_il2cpp_TypeInfo_var))->___native_write_field_nanosec_11), (void*)((NativeWriteFieldNanosecType_t5E0AE928ADDF2C29C3B07EDD132D94E839372856*)CastclassSealed((RuntimeObject*)L_50, NativeWriteFieldNanosecType_t5E0AE928ADDF2C29C3B07EDD132D94E839372856_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.IntPtr builtin_interfaces.msg.Time::get_TypeSupportHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Time_get_TypeSupportHandle_m9706823D045D933D4B6E38B439360F8832D366EB (Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_il2cpp_TypeInfo_var);
		NativeGetTypeSupportType_t63782EF21498CB0633F23315B3ED307098D8C106* L_0 = ((Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_StaticFields*)il2cpp_codegen_static_fields_for(Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_il2cpp_TypeInfo_var))->___native_get_typesupport_5;
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = NativeGetTypeSupportType_Invoke_m9486539D16053846CEAEFBEB419E2CBF14582D7A_inline(L_0, NULL);
		return L_1;
	}
}
// System.IntPtr builtin_interfaces.msg.Time::get_Handle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Time_get_Handle_mBDDB286AACC422625CA248DDF3BB50B5EAC3F9BE (Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_il2cpp_TypeInfo_var);
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
		il2cpp_codegen_runtime_class_init_inline(Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_il2cpp_TypeInfo_var);
		NativeCreateNativeMessageType_t762632B2C8CF227E63BA1D20B346B64492793054* L_3 = ((Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_StaticFields*)il2cpp_codegen_static_fields_for(Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_il2cpp_TypeInfo_var))->___native_create_native_message_6;
		NullCheck(L_3);
		intptr_t L_4;
		L_4 = NativeCreateNativeMessageType_Invoke_m6CE484FBDED8321AE5632755203480FC425F7F34_inline(L_3, NULL);
		__this->____handle_0 = L_4;
	}

IL_0022:
	{
		intptr_t L_5 = __this->____handle_0;
		return L_5;
	}
}
// System.Void builtin_interfaces.msg.Time::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time__ctor_mEA5E7E5A128C871F3C464EF2DFAC2A9C96ABD293 (Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void builtin_interfaces.msg.Time::ReadNativeMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_ReadNativeMessage_m0B8F9835C663E0DC52DC1C8E9FE489C1FD5200E4 (Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0;
		L_0 = Time_get_Handle_mBDDB286AACC422625CA248DDF3BB50B5EAC3F9BE(__this, NULL);
		Time_ReadNativeMessage_m39165E35484A65FF9C453952AC4D1532D80FBA88(__this, L_0, NULL);
		return;
	}
}
// System.Void builtin_interfaces.msg.Time::ReadNativeMessage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_ReadNativeMessage_m39165E35484A65FF9C453952AC4D1532D80FBA88 (Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E* __this, intptr_t ___0_handle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_il2cpp_TypeInfo_var);
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Time_ReadNativeMessage_m39165E35484A65FF9C453952AC4D1532D80FBA88_RuntimeMethod_var)));
	}

IL_0018:
	{
		il2cpp_codegen_runtime_class_init_inline(Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_il2cpp_TypeInfo_var);
		NativeReadFieldSecType_t3470747120F9BFC5B6289A0B9E6F28EFA7ED099F* L_4 = ((Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_StaticFields*)il2cpp_codegen_static_fields_for(Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_il2cpp_TypeInfo_var))->___native_read_field_sec_8;
		intptr_t L_5 = ___0_handle;
		NullCheck(L_4);
		int32_t L_6;
		L_6 = NativeReadFieldSecType_Invoke_mB84ADEE779C82EFC760FFF7A907BAA918A6979EB_inline(L_4, L_5, NULL);
		Time_set_Sec_mAFABF5D4EE0936BB1164B867D0688B3CF5E59F25_inline(__this, L_6, NULL);
		NativeReadFieldNanosecType_t97EDBC81AAA04CCAC1B23D0B2B78C393C0DA91DB* L_7 = ((Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_StaticFields*)il2cpp_codegen_static_fields_for(Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_il2cpp_TypeInfo_var))->___native_read_field_nanosec_10;
		intptr_t L_8 = ___0_handle;
		NullCheck(L_7);
		uint32_t L_9;
		L_9 = NativeReadFieldNanosecType_Invoke_m3275600DF4B4ED9888042142F4E8E6BE3D638940_inline(L_7, L_8, NULL);
		Time_set_Nanosec_m728F7849CAC073D12896D38AFCAB388E78DCEED9_inline(__this, L_9, NULL);
		return;
	}
}
// System.Void builtin_interfaces.msg.Time::WriteNativeMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_WriteNativeMessage_m365527B17535D58837BBEC072FB5F634D670A953 (Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_il2cpp_TypeInfo_var);
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
		il2cpp_codegen_runtime_class_init_inline(Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_il2cpp_TypeInfo_var);
		NativeCreateNativeMessageType_t762632B2C8CF227E63BA1D20B346B64492793054* L_3 = ((Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_StaticFields*)il2cpp_codegen_static_fields_for(Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_il2cpp_TypeInfo_var))->___native_create_native_message_6;
		NullCheck(L_3);
		intptr_t L_4;
		L_4 = NativeCreateNativeMessageType_Invoke_m6CE484FBDED8321AE5632755203480FC425F7F34_inline(L_3, NULL);
		__this->____handle_0 = L_4;
	}

IL_0022:
	{
		intptr_t L_5;
		L_5 = Time_get_Handle_mBDDB286AACC422625CA248DDF3BB50B5EAC3F9BE(__this, NULL);
		Time_WriteNativeMessage_m65AE23FBA6AE3D2DC1A5F34AF1B3ABFCE2807BBB(__this, L_5, NULL);
		return;
	}
}
// System.Void builtin_interfaces.msg.Time::WriteNativeMessage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_WriteNativeMessage_m65AE23FBA6AE3D2DC1A5F34AF1B3ABFCE2807BBB (Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E* __this, intptr_t ___0_handle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_il2cpp_TypeInfo_var);
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Time_WriteNativeMessage_m65AE23FBA6AE3D2DC1A5F34AF1B3ABFCE2807BBB_RuntimeMethod_var)));
	}

IL_0018:
	{
		il2cpp_codegen_runtime_class_init_inline(Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_il2cpp_TypeInfo_var);
		NativeWriteFieldSecType_t93D0F4573A3D133A711AEBD65821FD8462365348* L_4 = ((Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_StaticFields*)il2cpp_codegen_static_fields_for(Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_il2cpp_TypeInfo_var))->___native_write_field_sec_9;
		intptr_t L_5 = ___0_handle;
		int32_t L_6;
		L_6 = Time_get_Sec_mE050B429DBD14D7C80C01AC82639378AD7046021_inline(__this, NULL);
		NullCheck(L_4);
		NativeWriteFieldSecType_Invoke_m58788F8F472218CBFA7E6ADD8812E3218C675A22_inline(L_4, L_5, L_6, NULL);
		NativeWriteFieldNanosecType_t5E0AE928ADDF2C29C3B07EDD132D94E839372856* L_7 = ((Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_StaticFields*)il2cpp_codegen_static_fields_for(Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_il2cpp_TypeInfo_var))->___native_write_field_nanosec_11;
		intptr_t L_8 = ___0_handle;
		uint32_t L_9;
		L_9 = Time_get_Nanosec_mAA9EC2FA1685D3639555E2A9F8ABE9BD1D4ED808_inline(__this, NULL);
		NullCheck(L_7);
		NativeWriteFieldNanosecType_Invoke_m03B7312FAAA6FF81D8793F88BDB695040F1D74F9_inline(L_7, L_8, L_9, NULL);
		return;
	}
}
// System.Void builtin_interfaces.msg.Time::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_Dispose_m0C7176209D128A4C51A7F3192F3D99CB604E7C13 (Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_il2cpp_TypeInfo_var);
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
		il2cpp_codegen_runtime_class_init_inline(Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_il2cpp_TypeInfo_var);
		NativeDestroyNativeMessageType_t7459C33DB752D86695AA046FE5339029AD797B04* L_4 = ((Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_StaticFields*)il2cpp_codegen_static_fields_for(Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E_il2cpp_TypeInfo_var))->___native_destroy_native_message_7;
		intptr_t L_5 = __this->____handle_0;
		NullCheck(L_4);
		NativeDestroyNativeMessageType_Invoke_mA68BC387EBBF45C8E26F206DB54F88C2990974A8_inline(L_4, L_5, NULL);
		intptr_t L_6 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->____handle_0 = L_6;
		__this->___disposed_2 = (bool)1;
	}

IL_003c:
	{
		return;
	}
}
// System.Void builtin_interfaces.msg.Time::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_Finalize_m171CF9853BF3316FB74A029B96F3609E54D9B91B (Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E* __this, const RuntimeMethod* method) 
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
			Time_Dispose_m0C7176209D128A4C51A7F3192F3D99CB604E7C13(__this, NULL);
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
intptr_t NativeGetTypeSupportType_Invoke_m9486539D16053846CEAEFBEB419E2CBF14582D7A_Multicast(NativeGetTypeSupportType_t63782EF21498CB0633F23315B3ED307098D8C106* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	intptr_t retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		NativeGetTypeSupportType_t63782EF21498CB0633F23315B3ED307098D8C106* currentDelegate = reinterpret_cast<NativeGetTypeSupportType_t63782EF21498CB0633F23315B3ED307098D8C106*>(delegatesToInvoke[i]);
		typedef intptr_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
intptr_t NativeGetTypeSupportType_Invoke_m9486539D16053846CEAEFBEB419E2CBF14582D7A_OpenInst(NativeGetTypeSupportType_t63782EF21498CB0633F23315B3ED307098D8C106* __this, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
intptr_t NativeGetTypeSupportType_Invoke_m9486539D16053846CEAEFBEB419E2CBF14582D7A_OpenStatic(NativeGetTypeSupportType_t63782EF21498CB0633F23315B3ED307098D8C106* __this, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
intptr_t NativeGetTypeSupportType_Invoke_m9486539D16053846CEAEFBEB419E2CBF14582D7A_OpenStaticInvoker(NativeGetTypeSupportType_t63782EF21498CB0633F23315B3ED307098D8C106* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker0< intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL);
}
intptr_t NativeGetTypeSupportType_Invoke_m9486539D16053846CEAEFBEB419E2CBF14582D7A_ClosedStaticInvoker(NativeGetTypeSupportType_t63782EF21498CB0633F23315B3ED307098D8C106* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< intptr_t, RuntimeObject* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_NativeGetTypeSupportType_t63782EF21498CB0633F23315B3ED307098D8C106 (NativeGetTypeSupportType_t63782EF21498CB0633F23315B3ED307098D8C106* __this, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc();

	return returnValue;
}
// System.Void builtin_interfaces.msg.Time/NativeGetTypeSupportType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGetTypeSupportType__ctor_m584E13A627DEE3AA684C83FD202EEC8D154E80E4 (NativeGetTypeSupportType_t63782EF21498CB0633F23315B3ED307098D8C106* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&NativeGetTypeSupportType_Invoke_m9486539D16053846CEAEFBEB419E2CBF14582D7A_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&NativeGetTypeSupportType_Invoke_m9486539D16053846CEAEFBEB419E2CBF14582D7A_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NativeGetTypeSupportType_Invoke_m9486539D16053846CEAEFBEB419E2CBF14582D7A_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&NativeGetTypeSupportType_Invoke_m9486539D16053846CEAEFBEB419E2CBF14582D7A_Multicast;
}
// System.IntPtr builtin_interfaces.msg.Time/NativeGetTypeSupportType::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeGetTypeSupportType_Invoke_m9486539D16053846CEAEFBEB419E2CBF14582D7A (NativeGetTypeSupportType_t63782EF21498CB0633F23315B3ED307098D8C106* __this, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult builtin_interfaces.msg.Time/NativeGetTypeSupportType::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeGetTypeSupportType_BeginInvoke_m6D7724FBA94E2B72D15E0A9211618AAC08FFE6FD (NativeGetTypeSupportType_t63782EF21498CB0633F23315B3ED307098D8C106* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// System.IntPtr builtin_interfaces.msg.Time/NativeGetTypeSupportType::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeGetTypeSupportType_EndInvoke_m7A183DE5955393ADDE4FBA0F34AFDC3B5E398B3C (NativeGetTypeSupportType_t63782EF21498CB0633F23315B3ED307098D8C106* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
intptr_t NativeCreateNativeMessageType_Invoke_m6CE484FBDED8321AE5632755203480FC425F7F34_Multicast(NativeCreateNativeMessageType_t762632B2C8CF227E63BA1D20B346B64492793054* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	intptr_t retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		NativeCreateNativeMessageType_t762632B2C8CF227E63BA1D20B346B64492793054* currentDelegate = reinterpret_cast<NativeCreateNativeMessageType_t762632B2C8CF227E63BA1D20B346B64492793054*>(delegatesToInvoke[i]);
		typedef intptr_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
intptr_t NativeCreateNativeMessageType_Invoke_m6CE484FBDED8321AE5632755203480FC425F7F34_OpenInst(NativeCreateNativeMessageType_t762632B2C8CF227E63BA1D20B346B64492793054* __this, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
intptr_t NativeCreateNativeMessageType_Invoke_m6CE484FBDED8321AE5632755203480FC425F7F34_OpenStatic(NativeCreateNativeMessageType_t762632B2C8CF227E63BA1D20B346B64492793054* __this, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
intptr_t NativeCreateNativeMessageType_Invoke_m6CE484FBDED8321AE5632755203480FC425F7F34_OpenStaticInvoker(NativeCreateNativeMessageType_t762632B2C8CF227E63BA1D20B346B64492793054* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker0< intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL);
}
intptr_t NativeCreateNativeMessageType_Invoke_m6CE484FBDED8321AE5632755203480FC425F7F34_ClosedStaticInvoker(NativeCreateNativeMessageType_t762632B2C8CF227E63BA1D20B346B64492793054* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< intptr_t, RuntimeObject* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_NativeCreateNativeMessageType_t762632B2C8CF227E63BA1D20B346B64492793054 (NativeCreateNativeMessageType_t762632B2C8CF227E63BA1D20B346B64492793054* __this, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc();

	return returnValue;
}
// System.Void builtin_interfaces.msg.Time/NativeCreateNativeMessageType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCreateNativeMessageType__ctor_m6D9E16DAFDD5EB0EAEE5EEA052730594141A6766 (NativeCreateNativeMessageType_t762632B2C8CF227E63BA1D20B346B64492793054* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&NativeCreateNativeMessageType_Invoke_m6CE484FBDED8321AE5632755203480FC425F7F34_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&NativeCreateNativeMessageType_Invoke_m6CE484FBDED8321AE5632755203480FC425F7F34_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NativeCreateNativeMessageType_Invoke_m6CE484FBDED8321AE5632755203480FC425F7F34_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&NativeCreateNativeMessageType_Invoke_m6CE484FBDED8321AE5632755203480FC425F7F34_Multicast;
}
// System.IntPtr builtin_interfaces.msg.Time/NativeCreateNativeMessageType::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeCreateNativeMessageType_Invoke_m6CE484FBDED8321AE5632755203480FC425F7F34 (NativeCreateNativeMessageType_t762632B2C8CF227E63BA1D20B346B64492793054* __this, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult builtin_interfaces.msg.Time/NativeCreateNativeMessageType::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeCreateNativeMessageType_BeginInvoke_m109FDE66AE155B37DDC8F5506A7D5E7D4A24626D (NativeCreateNativeMessageType_t762632B2C8CF227E63BA1D20B346B64492793054* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// System.IntPtr builtin_interfaces.msg.Time/NativeCreateNativeMessageType::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeCreateNativeMessageType_EndInvoke_m2E7A1508A6BCFFCCAB5C8E131081EFAD2A97212C (NativeCreateNativeMessageType_t762632B2C8CF227E63BA1D20B346B64492793054* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
void NativeDestroyNativeMessageType_Invoke_mA68BC387EBBF45C8E26F206DB54F88C2990974A8_Multicast(NativeDestroyNativeMessageType_t7459C33DB752D86695AA046FE5339029AD797B04* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		NativeDestroyNativeMessageType_t7459C33DB752D86695AA046FE5339029AD797B04* currentDelegate = reinterpret_cast<NativeDestroyNativeMessageType_t7459C33DB752D86695AA046FE5339029AD797B04*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_messageHandle, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void NativeDestroyNativeMessageType_Invoke_mA68BC387EBBF45C8E26F206DB54F88C2990974A8_OpenInst(NativeDestroyNativeMessageType_t7459C33DB752D86695AA046FE5339029AD797B04* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_messageHandle, method);
}
void NativeDestroyNativeMessageType_Invoke_mA68BC387EBBF45C8E26F206DB54F88C2990974A8_OpenStatic(NativeDestroyNativeMessageType_t7459C33DB752D86695AA046FE5339029AD797B04* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_messageHandle, method);
}
void NativeDestroyNativeMessageType_Invoke_mA68BC387EBBF45C8E26F206DB54F88C2990974A8_OpenStaticInvoker(NativeDestroyNativeMessageType_t7459C33DB752D86695AA046FE5339029AD797B04* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	InvokerActionInvoker1< intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_messageHandle);
}
void NativeDestroyNativeMessageType_Invoke_mA68BC387EBBF45C8E26F206DB54F88C2990974A8_ClosedStaticInvoker(NativeDestroyNativeMessageType_t7459C33DB752D86695AA046FE5339029AD797B04* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_messageHandle);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_NativeDestroyNativeMessageType_t7459C33DB752D86695AA046FE5339029AD797B04 (NativeDestroyNativeMessageType_t7459C33DB752D86695AA046FE5339029AD797B04* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_messageHandle);

}
// System.Void builtin_interfaces.msg.Time/NativeDestroyNativeMessageType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeDestroyNativeMessageType__ctor_mC374177D6AA44AC53ACC2E57E33CAB758E1F5DE0 (NativeDestroyNativeMessageType_t7459C33DB752D86695AA046FE5339029AD797B04* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&NativeDestroyNativeMessageType_Invoke_mA68BC387EBBF45C8E26F206DB54F88C2990974A8_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&NativeDestroyNativeMessageType_Invoke_mA68BC387EBBF45C8E26F206DB54F88C2990974A8_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NativeDestroyNativeMessageType_Invoke_mA68BC387EBBF45C8E26F206DB54F88C2990974A8_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&NativeDestroyNativeMessageType_Invoke_mA68BC387EBBF45C8E26F206DB54F88C2990974A8_Multicast;
}
// System.Void builtin_interfaces.msg.Time/NativeDestroyNativeMessageType::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeDestroyNativeMessageType_Invoke_mA68BC387EBBF45C8E26F206DB54F88C2990974A8 (NativeDestroyNativeMessageType_t7459C33DB752D86695AA046FE5339029AD797B04* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_messageHandle, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult builtin_interfaces.msg.Time/NativeDestroyNativeMessageType::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeDestroyNativeMessageType_BeginInvoke_m5EE3C616CCA78FB380B974AEEC0F783107585D76 (NativeDestroyNativeMessageType_t7459C33DB752D86695AA046FE5339029AD797B04* __this, intptr_t ___0_messageHandle, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
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
// System.Void builtin_interfaces.msg.Time/NativeDestroyNativeMessageType::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeDestroyNativeMessageType_EndInvoke_m244C276EC0DA804DDF4A4B5653A7254CA5C7727F (NativeDestroyNativeMessageType_t7459C33DB752D86695AA046FE5339029AD797B04* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
int32_t NativeReadFieldSecType_Invoke_mB84ADEE779C82EFC760FFF7A907BAA918A6979EB_Multicast(NativeReadFieldSecType_t3470747120F9BFC5B6289A0B9E6F28EFA7ED099F* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		NativeReadFieldSecType_t3470747120F9BFC5B6289A0B9E6F28EFA7ED099F* currentDelegate = reinterpret_cast<NativeReadFieldSecType_t3470747120F9BFC5B6289A0B9E6F28EFA7ED099F*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_messageHandle, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t NativeReadFieldSecType_Invoke_mB84ADEE779C82EFC760FFF7A907BAA918A6979EB_OpenInst(NativeReadFieldSecType_t3470747120F9BFC5B6289A0B9E6F28EFA7ED099F* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_messageHandle, method);
}
int32_t NativeReadFieldSecType_Invoke_mB84ADEE779C82EFC760FFF7A907BAA918A6979EB_OpenStatic(NativeReadFieldSecType_t3470747120F9BFC5B6289A0B9E6F28EFA7ED099F* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_messageHandle, method);
}
int32_t NativeReadFieldSecType_Invoke_mB84ADEE779C82EFC760FFF7A907BAA918A6979EB_OpenStaticInvoker(NativeReadFieldSecType_t3470747120F9BFC5B6289A0B9E6F28EFA7ED099F* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< int32_t, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_messageHandle);
}
int32_t NativeReadFieldSecType_Invoke_mB84ADEE779C82EFC760FFF7A907BAA918A6979EB_ClosedStaticInvoker(NativeReadFieldSecType_t3470747120F9BFC5B6289A0B9E6F28EFA7ED099F* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, RuntimeObject*, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_messageHandle);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_NativeReadFieldSecType_t3470747120F9BFC5B6289A0B9E6F28EFA7ED099F (NativeReadFieldSecType_t3470747120F9BFC5B6289A0B9E6F28EFA7ED099F* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_messageHandle);

	return returnValue;
}
// System.Void builtin_interfaces.msg.Time/NativeReadFieldSecType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeReadFieldSecType__ctor_mB158B1664EAA834C8FE8A5028E12A415FE41E29A (NativeReadFieldSecType_t3470747120F9BFC5B6289A0B9E6F28EFA7ED099F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&NativeReadFieldSecType_Invoke_mB84ADEE779C82EFC760FFF7A907BAA918A6979EB_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&NativeReadFieldSecType_Invoke_mB84ADEE779C82EFC760FFF7A907BAA918A6979EB_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NativeReadFieldSecType_Invoke_mB84ADEE779C82EFC760FFF7A907BAA918A6979EB_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&NativeReadFieldSecType_Invoke_mB84ADEE779C82EFC760FFF7A907BAA918A6979EB_Multicast;
}
// System.Int32 builtin_interfaces.msg.Time/NativeReadFieldSecType::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeReadFieldSecType_Invoke_mB84ADEE779C82EFC760FFF7A907BAA918A6979EB (NativeReadFieldSecType_t3470747120F9BFC5B6289A0B9E6F28EFA7ED099F* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_messageHandle, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult builtin_interfaces.msg.Time/NativeReadFieldSecType::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeReadFieldSecType_BeginInvoke_m8C31AAC9F3F5E52B06519314C5BA079A2BBFF48B (NativeReadFieldSecType_t3470747120F9BFC5B6289A0B9E6F28EFA7ED099F* __this, intptr_t ___0_messageHandle, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
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
// System.Int32 builtin_interfaces.msg.Time/NativeReadFieldSecType::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeReadFieldSecType_EndInvoke_m5A45EBDDB2F46556F6AADCDF177188CE36370295 (NativeReadFieldSecType_t3470747120F9BFC5B6289A0B9E6F28EFA7ED099F* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void NativeWriteFieldSecType_Invoke_m58788F8F472218CBFA7E6ADD8812E3218C675A22_Multicast(NativeWriteFieldSecType_t93D0F4573A3D133A711AEBD65821FD8462365348* __this, intptr_t ___0_messageHandle, int32_t ___1_value, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		NativeWriteFieldSecType_t93D0F4573A3D133A711AEBD65821FD8462365348* currentDelegate = reinterpret_cast<NativeWriteFieldSecType_t93D0F4573A3D133A711AEBD65821FD8462365348*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_messageHandle, ___1_value, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void NativeWriteFieldSecType_Invoke_m58788F8F472218CBFA7E6ADD8812E3218C675A22_OpenInst(NativeWriteFieldSecType_t93D0F4573A3D133A711AEBD65821FD8462365348* __this, intptr_t ___0_messageHandle, int32_t ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_messageHandle, ___1_value, method);
}
void NativeWriteFieldSecType_Invoke_m58788F8F472218CBFA7E6ADD8812E3218C675A22_OpenStatic(NativeWriteFieldSecType_t93D0F4573A3D133A711AEBD65821FD8462365348* __this, intptr_t ___0_messageHandle, int32_t ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_messageHandle, ___1_value, method);
}
void NativeWriteFieldSecType_Invoke_m58788F8F472218CBFA7E6ADD8812E3218C675A22_OpenStaticInvoker(NativeWriteFieldSecType_t93D0F4573A3D133A711AEBD65821FD8462365348* __this, intptr_t ___0_messageHandle, int32_t ___1_value, const RuntimeMethod* method)
{
	InvokerActionInvoker2< intptr_t, int32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_messageHandle, ___1_value);
}
void NativeWriteFieldSecType_Invoke_m58788F8F472218CBFA7E6ADD8812E3218C675A22_ClosedStaticInvoker(NativeWriteFieldSecType_t93D0F4573A3D133A711AEBD65821FD8462365348* __this, intptr_t ___0_messageHandle, int32_t ___1_value, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, intptr_t, int32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_messageHandle, ___1_value);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_NativeWriteFieldSecType_t93D0F4573A3D133A711AEBD65821FD8462365348 (NativeWriteFieldSecType_t93D0F4573A3D133A711AEBD65821FD8462365348* __this, intptr_t ___0_messageHandle, int32_t ___1_value, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_messageHandle, ___1_value);

}
// System.Void builtin_interfaces.msg.Time/NativeWriteFieldSecType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWriteFieldSecType__ctor_m853B3FFE47C9520283A7956BC2CF9AEAB6293F2C (NativeWriteFieldSecType_t93D0F4573A3D133A711AEBD65821FD8462365348* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&NativeWriteFieldSecType_Invoke_m58788F8F472218CBFA7E6ADD8812E3218C675A22_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&NativeWriteFieldSecType_Invoke_m58788F8F472218CBFA7E6ADD8812E3218C675A22_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NativeWriteFieldSecType_Invoke_m58788F8F472218CBFA7E6ADD8812E3218C675A22_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&NativeWriteFieldSecType_Invoke_m58788F8F472218CBFA7E6ADD8812E3218C675A22_Multicast;
}
// System.Void builtin_interfaces.msg.Time/NativeWriteFieldSecType::Invoke(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWriteFieldSecType_Invoke_m58788F8F472218CBFA7E6ADD8812E3218C675A22 (NativeWriteFieldSecType_t93D0F4573A3D133A711AEBD65821FD8462365348* __this, intptr_t ___0_messageHandle, int32_t ___1_value, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_messageHandle, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult builtin_interfaces.msg.Time/NativeWriteFieldSecType::BeginInvoke(System.IntPtr,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeWriteFieldSecType_BeginInvoke_m23F9394215AFE21A854751DB4989BC9E0B76813F (NativeWriteFieldSecType_t93D0F4573A3D133A711AEBD65821FD8462365348* __this, intptr_t ___0_messageHandle, int32_t ___1_value, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_messageHandle);
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___1_value);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void builtin_interfaces.msg.Time/NativeWriteFieldSecType::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWriteFieldSecType_EndInvoke_mDE735748700715A4E4569C0D3077367F61A25487 (NativeWriteFieldSecType_t93D0F4573A3D133A711AEBD65821FD8462365348* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
uint32_t NativeReadFieldNanosecType_Invoke_m3275600DF4B4ED9888042142F4E8E6BE3D638940_Multicast(NativeReadFieldNanosecType_t97EDBC81AAA04CCAC1B23D0B2B78C393C0DA91DB* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	uint32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		NativeReadFieldNanosecType_t97EDBC81AAA04CCAC1B23D0B2B78C393C0DA91DB* currentDelegate = reinterpret_cast<NativeReadFieldNanosecType_t97EDBC81AAA04CCAC1B23D0B2B78C393C0DA91DB*>(delegatesToInvoke[i]);
		typedef uint32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_messageHandle, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
uint32_t NativeReadFieldNanosecType_Invoke_m3275600DF4B4ED9888042142F4E8E6BE3D638940_OpenInst(NativeReadFieldNanosecType_t97EDBC81AAA04CCAC1B23D0B2B78C393C0DA91DB* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	typedef uint32_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_messageHandle, method);
}
uint32_t NativeReadFieldNanosecType_Invoke_m3275600DF4B4ED9888042142F4E8E6BE3D638940_OpenStatic(NativeReadFieldNanosecType_t97EDBC81AAA04CCAC1B23D0B2B78C393C0DA91DB* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	typedef uint32_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_messageHandle, method);
}
uint32_t NativeReadFieldNanosecType_Invoke_m3275600DF4B4ED9888042142F4E8E6BE3D638940_OpenStaticInvoker(NativeReadFieldNanosecType_t97EDBC81AAA04CCAC1B23D0B2B78C393C0DA91DB* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< uint32_t, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_messageHandle);
}
uint32_t NativeReadFieldNanosecType_Invoke_m3275600DF4B4ED9888042142F4E8E6BE3D638940_ClosedStaticInvoker(NativeReadFieldNanosecType_t97EDBC81AAA04CCAC1B23D0B2B78C393C0DA91DB* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< uint32_t, RuntimeObject*, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_messageHandle);
}
IL2CPP_EXTERN_C  uint32_t DelegatePInvokeWrapper_NativeReadFieldNanosecType_t97EDBC81AAA04CCAC1B23D0B2B78C393C0DA91DB (NativeReadFieldNanosecType_t97EDBC81AAA04CCAC1B23D0B2B78C393C0DA91DB* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method)
{
	typedef uint32_t (CDECL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	uint32_t returnValue = il2cppPInvokeFunc(___0_messageHandle);

	return returnValue;
}
// System.Void builtin_interfaces.msg.Time/NativeReadFieldNanosecType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeReadFieldNanosecType__ctor_mBA59816015DB64F012AC5A5D95F1D03154D6E70D (NativeReadFieldNanosecType_t97EDBC81AAA04CCAC1B23D0B2B78C393C0DA91DB* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&NativeReadFieldNanosecType_Invoke_m3275600DF4B4ED9888042142F4E8E6BE3D638940_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&NativeReadFieldNanosecType_Invoke_m3275600DF4B4ED9888042142F4E8E6BE3D638940_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NativeReadFieldNanosecType_Invoke_m3275600DF4B4ED9888042142F4E8E6BE3D638940_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&NativeReadFieldNanosecType_Invoke_m3275600DF4B4ED9888042142F4E8E6BE3D638940_Multicast;
}
// System.UInt32 builtin_interfaces.msg.Time/NativeReadFieldNanosecType::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NativeReadFieldNanosecType_Invoke_m3275600DF4B4ED9888042142F4E8E6BE3D638940 (NativeReadFieldNanosecType_t97EDBC81AAA04CCAC1B23D0B2B78C393C0DA91DB* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method) 
{
	typedef uint32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_messageHandle, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult builtin_interfaces.msg.Time/NativeReadFieldNanosecType::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeReadFieldNanosecType_BeginInvoke_m5EA597C88E146E230B90AD6B20FB2B952A768F36 (NativeReadFieldNanosecType_t97EDBC81AAA04CCAC1B23D0B2B78C393C0DA91DB* __this, intptr_t ___0_messageHandle, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
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
// System.UInt32 builtin_interfaces.msg.Time/NativeReadFieldNanosecType::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NativeReadFieldNanosecType_EndInvoke_m7F6AB88251A4503A6F2C80192F731820621F08C9 (NativeReadFieldNanosecType_t97EDBC81AAA04CCAC1B23D0B2B78C393C0DA91DB* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(uint32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void NativeWriteFieldNanosecType_Invoke_m03B7312FAAA6FF81D8793F88BDB695040F1D74F9_Multicast(NativeWriteFieldNanosecType_t5E0AE928ADDF2C29C3B07EDD132D94E839372856* __this, intptr_t ___0_messageHandle, uint32_t ___1_value, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		NativeWriteFieldNanosecType_t5E0AE928ADDF2C29C3B07EDD132D94E839372856* currentDelegate = reinterpret_cast<NativeWriteFieldNanosecType_t5E0AE928ADDF2C29C3B07EDD132D94E839372856*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, uint32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_messageHandle, ___1_value, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void NativeWriteFieldNanosecType_Invoke_m03B7312FAAA6FF81D8793F88BDB695040F1D74F9_OpenInst(NativeWriteFieldNanosecType_t5E0AE928ADDF2C29C3B07EDD132D94E839372856* __this, intptr_t ___0_messageHandle, uint32_t ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, uint32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_messageHandle, ___1_value, method);
}
void NativeWriteFieldNanosecType_Invoke_m03B7312FAAA6FF81D8793F88BDB695040F1D74F9_OpenStatic(NativeWriteFieldNanosecType_t5E0AE928ADDF2C29C3B07EDD132D94E839372856* __this, intptr_t ___0_messageHandle, uint32_t ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, uint32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_messageHandle, ___1_value, method);
}
void NativeWriteFieldNanosecType_Invoke_m03B7312FAAA6FF81D8793F88BDB695040F1D74F9_OpenStaticInvoker(NativeWriteFieldNanosecType_t5E0AE928ADDF2C29C3B07EDD132D94E839372856* __this, intptr_t ___0_messageHandle, uint32_t ___1_value, const RuntimeMethod* method)
{
	InvokerActionInvoker2< intptr_t, uint32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_messageHandle, ___1_value);
}
void NativeWriteFieldNanosecType_Invoke_m03B7312FAAA6FF81D8793F88BDB695040F1D74F9_ClosedStaticInvoker(NativeWriteFieldNanosecType_t5E0AE928ADDF2C29C3B07EDD132D94E839372856* __this, intptr_t ___0_messageHandle, uint32_t ___1_value, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, intptr_t, uint32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_messageHandle, ___1_value);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_NativeWriteFieldNanosecType_t5E0AE928ADDF2C29C3B07EDD132D94E839372856 (NativeWriteFieldNanosecType_t5E0AE928ADDF2C29C3B07EDD132D94E839372856* __this, intptr_t ___0_messageHandle, uint32_t ___1_value, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, uint32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_messageHandle, ___1_value);

}
// System.Void builtin_interfaces.msg.Time/NativeWriteFieldNanosecType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWriteFieldNanosecType__ctor_m50FB80E78E7DD2835DBD4827313C34BB0C9CC020 (NativeWriteFieldNanosecType_t5E0AE928ADDF2C29C3B07EDD132D94E839372856* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&NativeWriteFieldNanosecType_Invoke_m03B7312FAAA6FF81D8793F88BDB695040F1D74F9_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&NativeWriteFieldNanosecType_Invoke_m03B7312FAAA6FF81D8793F88BDB695040F1D74F9_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NativeWriteFieldNanosecType_Invoke_m03B7312FAAA6FF81D8793F88BDB695040F1D74F9_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&NativeWriteFieldNanosecType_Invoke_m03B7312FAAA6FF81D8793F88BDB695040F1D74F9_Multicast;
}
// System.Void builtin_interfaces.msg.Time/NativeWriteFieldNanosecType::Invoke(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWriteFieldNanosecType_Invoke_m03B7312FAAA6FF81D8793F88BDB695040F1D74F9 (NativeWriteFieldNanosecType_t5E0AE928ADDF2C29C3B07EDD132D94E839372856* __this, intptr_t ___0_messageHandle, uint32_t ___1_value, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, uint32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_messageHandle, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult builtin_interfaces.msg.Time/NativeWriteFieldNanosecType::BeginInvoke(System.IntPtr,System.UInt32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeWriteFieldNanosecType_BeginInvoke_m9B027E19B1E4EC44110161D57CF6C7D539B5D2B7 (NativeWriteFieldNanosecType_t5E0AE928ADDF2C29C3B07EDD132D94E839372856* __this, intptr_t ___0_messageHandle, uint32_t ___1_value, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_messageHandle);
	__d_args[1] = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &___1_value);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void builtin_interfaces.msg.Time/NativeWriteFieldNanosecType::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWriteFieldNanosecType_EndInvoke_mAC458DD9C3C2973765F2C65DF3ABD7EF1B02F0BA (NativeWriteFieldNanosecType_t5E0AE928ADDF2C29C3B07EDD132D94E839372856* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t NativeGetTypeSupportType_Invoke_mF58A689A05763090B9FA3B740614497B1CC0CFB9_inline (NativeGetTypeSupportType_t3BFF2DDCB88133594DA42CCA63ADA5BBFD2045CE* __this, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t NativeCreateNativeMessageType_Invoke_m1277E13179A4A68CC60D011B1722FF89442CABA3_inline (NativeCreateNativeMessageType_t58C9326D140137105184BC85233A5AF360A9046F* __this, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeReadFieldSecType_Invoke_m544A20D9D273DB4C004864A1B8D46598CB001E06_inline (NativeReadFieldSecType_t928C1B88798604C4354B129B08975FA58D257C54* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_messageHandle, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Duration_set_Sec_m2D265096F5F5193CFAEA510440984151A87F6779_inline (Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CSecU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t NativeReadFieldNanosecType_Invoke_mC6BC1457D686CF5BF26DC40BC388B4BDCB1ADDA1_inline (NativeReadFieldNanosecType_t182F0C4CE8EA9C48B3A5DF251CB1F83A38FA8279* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method) 
{
	typedef uint32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_messageHandle, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Duration_set_Nanosec_m53AA1C0C8B8C77C2F33BA485754B1D981365B211_inline (Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_value;
		__this->___U3CNanosecU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Duration_get_Sec_m57D2846019408B75354E0C2980EC50DFA2826AB3_inline (Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CSecU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeWriteFieldSecType_Invoke_m220E34460FF2F3476F68854A650A850E8D690BE9_inline (NativeWriteFieldSecType_t8676F1C0647013744EEA9830D29BD38C2FC79C4F* __this, intptr_t ___0_messageHandle, int32_t ___1_value, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_messageHandle, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t Duration_get_Nanosec_m488D87C4F629CDBB9FC818C5C61C759722DCC729_inline (Duration_t0551C51D8CEC7CAFE58580F07916EA4B687E9FB7* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___U3CNanosecU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeWriteFieldNanosecType_Invoke_m18A7E5DA519011739DF74FB8E1CB02A3A1ED97BC_inline (NativeWriteFieldNanosecType_t1ECC507ECF4AA3765E4EA629CA6B6E1C5E50FD10* __this, intptr_t ___0_messageHandle, uint32_t ___1_value, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, uint32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_messageHandle, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeDestroyNativeMessageType_Invoke_m45C879AAC5DA1CE5BA56AD3C3F19B737E5BF255F_inline (NativeDestroyNativeMessageType_tD51BFA46C6FE30B2CB5B2A9071178DB5EB94D311* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_messageHandle, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t NativeGetTypeSupportType_Invoke_m9486539D16053846CEAEFBEB419E2CBF14582D7A_inline (NativeGetTypeSupportType_t63782EF21498CB0633F23315B3ED307098D8C106* __this, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t NativeCreateNativeMessageType_Invoke_m6CE484FBDED8321AE5632755203480FC425F7F34_inline (NativeCreateNativeMessageType_t762632B2C8CF227E63BA1D20B346B64492793054* __this, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeReadFieldSecType_Invoke_mB84ADEE779C82EFC760FFF7A907BAA918A6979EB_inline (NativeReadFieldSecType_t3470747120F9BFC5B6289A0B9E6F28EFA7ED099F* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_messageHandle, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Time_set_Sec_mAFABF5D4EE0936BB1164B867D0688B3CF5E59F25_inline (Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CSecU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t NativeReadFieldNanosecType_Invoke_m3275600DF4B4ED9888042142F4E8E6BE3D638940_inline (NativeReadFieldNanosecType_t97EDBC81AAA04CCAC1B23D0B2B78C393C0DA91DB* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method) 
{
	typedef uint32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_messageHandle, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Time_set_Nanosec_m728F7849CAC073D12896D38AFCAB388E78DCEED9_inline (Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_value;
		__this->___U3CNanosecU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Time_get_Sec_mE050B429DBD14D7C80C01AC82639378AD7046021_inline (Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CSecU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeWriteFieldSecType_Invoke_m58788F8F472218CBFA7E6ADD8812E3218C675A22_inline (NativeWriteFieldSecType_t93D0F4573A3D133A711AEBD65821FD8462365348* __this, intptr_t ___0_messageHandle, int32_t ___1_value, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_messageHandle, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t Time_get_Nanosec_mAA9EC2FA1685D3639555E2A9F8ABE9BD1D4ED808_inline (Time_t5AE27143EBD2F0D6003ACE79D47DC14E6B77D86E* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___U3CNanosecU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeWriteFieldNanosecType_Invoke_m03B7312FAAA6FF81D8793F88BDB695040F1D74F9_inline (NativeWriteFieldNanosecType_t5E0AE928ADDF2C29C3B07EDD132D94E839372856* __this, intptr_t ___0_messageHandle, uint32_t ___1_value, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, uint32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_messageHandle, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeDestroyNativeMessageType_Invoke_mA68BC387EBBF45C8E26F206DB54F88C2990974A8_inline (NativeDestroyNativeMessageType_t7459C33DB752D86695AA046FE5339029AD797B04* __this, intptr_t ___0_messageHandle, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_messageHandle, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
