﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
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
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
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
struct InvokerActionInvoker3
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3)
	{
		void* params[3] = { &p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2, T3, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4)
	{
		void* params[4] = { p1, &p2, &p3, &p4 };
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
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		R ret;
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2*, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2, T3*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		R ret;
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2*, T3*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		R ret;
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2, T3, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, &p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1, T2*, T3*, T4*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3* p3, T4* p4)
	{
		R ret;
		void* params[4] = { &p1, p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3*, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, p2, p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5<R, T1*, T2*, T3, T4, T5>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4, T5 p5)
	{
		R ret;
		void* params[5] = { p1, p2, &p3, &p4, &p5 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5<R, T1*, T2*, T3, T4*, T5>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4* p4, T5 p5)
	{
		R ret;
		void* params[5] = { p1, p2, &p3, p4, &p5 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5<R, T1*, T2, T3*, T4*, T5*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3, T4* p4, T5* p5)
	{
		R ret;
		void* params[5] = { p1, &p2, p3, p4, p5 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5<R, T1*, T2*, T3*, T4*, T5>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5 p5)
	{
		R ret;
		void* params[5] = { p1, p2, p3, p4, &p5 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerFuncInvoker6;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerFuncInvoker6<R, T1*, T2*, T3*, T4, T5*, T6>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4 p4, T5* p5, T6 p6)
	{
		R ret;
		void* params[6] = { p1, p2, p3, &p4, p5, &p6 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerFuncInvoker6<R, T1*, T2*, T3*, T4*, T5*, T6>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6 p6)
	{
		R ret;
		void* params[6] = { p1, p2, p3, p4, p5, &p6 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
struct InvokerFuncInvoker9;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
struct InvokerFuncInvoker9<R, T1*, T2, T3, T4, T5, T6, T7, T8*, T9>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8* p8, T9 p9)
	{
		R ret;
		void* params[9] = { p1, &p2, &p3, &p4, &p5, &p6, &p7, p8, &p9 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
struct InvokerFuncInvoker10;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
struct InvokerFuncInvoker10<R, T1*, T2*, T3, T4, T5, T6, T7, T8, T9*, T10>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9* p9, T10 p10)
	{
		R ret;
		void* params[10] = { p1, p2, &p3, &p4, &p5, &p6, &p7, &p8, p9, &p10 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Collections.Generic.Dictionary`2<ROS2.LogLevel,System.ConsoleColor>
struct Dictionary_2_tE21EA2A24D6CB3091176D6974BBF38ACF8330303;
// System.Collections.Generic.Dictionary`2<ROS2.LogLevel,System.String>
struct Dictionary_2_tF4BD8E262191575AB12588F222EB1F74D30CC279;
// System.Collections.Generic.Dictionary`2<ROS2.LogLevel,ROS2.Ros2csLogger/Callback>
struct Dictionary_2_t2C711015AA5938D6B94F90272468FF95F25556E8;
// System.Collections.Generic.HashSet`1<ROS2.IPublisherBase>
struct HashSet_1_t84B08553CDF3D796DB788057B34FD5B0E857C6B4;
// System.Collections.Generic.HashSet`1<ROS2.ISubscriptionBase>
struct HashSet_1_t93DFD21E3FADFA2B1015453B87C88365793D5EA7;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.IEnumerable`1<ROS2.ISubscriptionBase>
struct IEnumerable_1_tB592F1520E5181DF2F32AD6F361FED95F8E684F4;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEqualityComparer`1<ROS2.IPublisherBase>
struct IEqualityComparer_1_t2676163A1880AD4E874718112579CD132F0EA3FB;
// System.Collections.Generic.IEqualityComparer`1<ROS2.ISubscriptionBase>
struct IEqualityComparer_1_t18A8A2BB33C89CBDBC828CE01A9BE98589E9DF83;
// System.Collections.Generic.List`1<ROS2.INode>
struct List_1_tDD6E1C9A706EDC9B52011559C08EE6DB5044D953;
// System.Collections.Generic.List`1<ROS2.ISubscriptionBase>
struct List_1_t0B869009E71D4485E120F9AC81AE38A128A6EF9F;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.HashSet`1/Slot<ROS2.IPublisherBase>[]
struct SlotU5BU5D_tC26CCABFCC5274912EBEB4F9DD3D5379E50DD0D0;
// System.Collections.Generic.HashSet`1/Slot<ROS2.ISubscriptionBase>[]
struct SlotU5BU5D_tD8116753391386A7E4F8926033E61ED722F709EC;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// ROS2.INode[]
struct INodeU5BU5D_t3A06A3EAB4160DDFD8D6645E69A454E2FCEF1947;
// ROS2.ISubscriptionBase[]
struct ISubscriptionBaseU5BU5D_t55ADED626B12E44B9E2AB612BD3707B8490FC58F;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// ROS2.Clock
struct Clock_tC2F4680529BC5DFA8864474F920454F3CF7A7F0A;
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
// ROS2.INode
struct INode_tCD64661050E9A232AEE12B0D79C944D163C949E5;
// ROS2.IPublisherBase
struct IPublisherBase_tF2325202EE245A37967B5AFB8C41ABCEFA8D6DAD;
// ROS2.ISubscriptionBase
struct ISubscriptionBase_tCD95FBCE3C6D4C86D95DEEA874AA4E01F914834D;
// ROS2.InvalidNamespaceException
struct InvalidNamespaceException_tD2E1A2EA479047BAD9F8E4FB4D794491CBF11993;
// ROS2.InvalidNodeNameException
struct InvalidNodeNameException_t2B3B398B7A2DD047EF775BD9E221D29EA06B6AE5;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// ROS2.Node
struct Node_t091203BA7C12AC4C2074891D81689DD9EC725A0D;
// ROS2.NotInitializedException
struct NotInitializedException_t50A36E084A8A7B49F17EB63CEF13167336C53EAC;
// ROS2.QualityOfServiceProfile
struct QualityOfServiceProfile_t167E8030D9BA28716116CB6354999131DD396BEA;
// ROS2.Ros2csLogger
struct Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D;
// ROS2.RuntimeError
struct RuntimeError_t642B93B4680822C51EF8CA1B918CAA84E4BE375C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// ROS2.NativeRcl/ContextFiniType
struct ContextFiniType_tDE6339FF3B53ECB6B5F180CA0660BE5C0770793F;
// ROS2.NativeRcl/ContextIsValidType
struct ContextIsValidType_t221B25824BF034AA390D02239F461440F4C6AFF9;
// ROS2.NativeRcl/GetZeroInitializedContextType
struct GetZeroInitializedContextType_t04171F8770DA4190523F40E24D627320BEE692D6;
// ROS2.NativeRcl/GetZeroInitializedInitOptionsType
struct GetZeroInitializedInitOptionsType_t672F00F3D9BAA9869AB5BCC51F11F37D7A068AF2;
// ROS2.NativeRcl/GetZeroInitializedNodeType
struct GetZeroInitializedNodeType_tB2B66F53C164F56418A2C83367AE26F42B8F4E92;
// ROS2.NativeRcl/GetZeroInitializedSubcriptionType
struct GetZeroInitializedSubcriptionType_tB15A38BFDD3D25B480ABD8275A9523A87001337D;
// ROS2.NativeRcl/GetZeroInitializedWaitSetType
struct GetZeroInitializedWaitSetType_t6399F00A6BBAE1E21B97BDCF19BD380C1D53C9CC;
// ROS2.NativeRcl/GetZeroInitiazizedPublisherType
struct GetZeroInitiazizedPublisherType_t01F144F0515432B1C3F325276AA671B750E8629D;
// ROS2.NativeRcl/InitOptionsInitType
struct InitOptionsInitType_t7CCFE47E2867A249ED36CE9D134E83FE296EF91E;
// ROS2.NativeRcl/InitType
struct InitType_t332D494FBA92CD10754698D41BD5954D3CF77B8B;
// ROS2.NativeRcl/NodeFiniType
struct NodeFiniType_tA1CDE02D8B40017868A11938E7CDE8B6DF56F210;
// ROS2.NativeRcl/NodeGetNameType
struct NodeGetNameType_t2D236E111C5F4170456B73FA899F7B3E62D48E31;
// ROS2.NativeRcl/NodeGetNamespaceType
struct NodeGetNamespaceType_t30FA5A59AE1F125ECA0B826562E15819F9F2AED0;
// ROS2.NativeRcl/NodeInitType
struct NodeInitType_t365D995BC724D5F7042E191CE9A4B13A5C3865C0;
// ROS2.NativeRcl/PublishType
struct PublishType_t85AE05C7B1E15E993E7977AE925CBEED7B0A80E0;
// ROS2.NativeRcl/PublisherFiniType
struct PublisherFiniType_t29E6144CCBA0F6A8AC0CC5BAA12C50B7CAE3658B;
// ROS2.NativeRcl/PublisherGetDefaultOptionsType
struct PublisherGetDefaultOptionsType_tF64AECD0842363AFF4C4B902D90A28492CEF5BA1;
// ROS2.NativeRcl/PublisherInitType
struct PublisherInitType_t0B6F34AF630DBB00D974207F5B6275F836349FF6;
// ROS2.NativeRcl/RclClockGetNow
struct RclClockGetNow_tE7C0124D0B68F9278C1BE9AA93083FBB57A442BD;
// ROS2.NativeRcl/RclGetDefaultAllocatorType
struct RclGetDefaultAllocatorType_t3073FF12B8067D85A753E0AED56D25D05214A994;
// ROS2.NativeRcl/ResetErrorType
struct ResetErrorType_t4D921B90107C97E83795A5C064D3691084BB81DC;
// ROS2.NativeRcl/ShutdownType
struct ShutdownType_t4FB0976CC98794F41196FD3CC575CAC576F438CA;
// ROS2.NativeRcl/SubscriptionFiniType
struct SubscriptionFiniType_t50087884E3CF041D8642AC77956FFD362358A620;
// ROS2.NativeRcl/SubscriptionInitType
struct SubscriptionInitType_t5D9745916CE3038181964DA68957FF6B8C13222A;
// ROS2.NativeRcl/SubscriptionIsValidType
struct SubscriptionIsValidType_tBAA19362E8D32CF2D87A459D0BBBC6D1B380AD7A;
// ROS2.NativeRcl/TakeType
struct TakeType_tD0132705DD1D245C5C1D36705B201977F5B0B006;
// ROS2.NativeRcl/WaitSetAddSubscriptionType
struct WaitSetAddSubscriptionType_tB952F7946A7A06C27D970D1F8A28089434E2F4B4;
// ROS2.NativeRcl/WaitSetClearType
struct WaitSetClearType_t86E1B05E31A40014E169F1C9624369F6A48ADA80;
// ROS2.NativeRcl/WaitSetInitType
struct WaitSetInitType_t87E1D05131F194FAB01E72C1A03A0A2538C411AA;
// ROS2.NativeRcl/WaitType
struct WaitType_t835E7382D2E046BD4590666AF95A16BFA8C85E01;
// ROS2.NativeRcl/WatiSetFiniType
struct WatiSetFiniType_tA3F438CE346815BF7ACA429F3EA9DB3556560FCC;
// ROS2.NativeRclInterface/DisposeErrorStringType
struct DisposeErrorStringType_tB0EB5ABA8F09AB9C18BCB301CABC0010FA27C990;
// ROS2.NativeRclInterface/GetErrorStringType
struct GetErrorStringType_t453607676A6C388E6CBFDFD75F799FDA836851DD;
// ROS2.NativeRclInterface/NodeCreateDefaltOptionsType
struct NodeCreateDefaltOptionsType_t694FBD8C3D7CA67B641200A83CB864C8FD58787E;
// ROS2.NativeRclInterface/NodeDisposeOptionsType
struct NodeDisposeOptionsType_t15BDDEA610F9F4D00AC15F76577DB21C03EAF5F7;
// ROS2.NativeRclInterface/PublisherCreateOptionsType
struct PublisherCreateOptionsType_t9606320C1541DAB9AEE9478589F1BDD99527DB8F;
// ROS2.NativeRclInterface/PublisherDisposeOptionsType
struct PublisherDisposeOptionsType_tC809782AD42F6F729C61AF44BBA4FA6E34339EBD;
// ROS2.NativeRclInterface/RCLCSInitType
struct RCLCSInitType_t98BFF379AE54A896A681209B70D41C4504AF733F;
// ROS2.NativeRclInterface/RclcsClockCreate
struct RclcsClockCreate_t7DE4D8ACB9FFEBA0D5B88B58E6C8C5A91AF86C4B;
// ROS2.NativeRclInterface/RclcsClockDispose
struct RclcsClockDispose_tDE4246256AFCE3214E441466A84D08B4922CAE03;
// ROS2.NativeRclInterface/SubscriptionCreateOptionsType
struct SubscriptionCreateOptionsType_tA856B0FFDE605A45098ED09C5BD2542A6F7AB64C;
// ROS2.NativeRclInterface/SubscriptionDisposeOptionsType
struct SubscriptionDisposeOptionsType_t39B2BA1FAA8B01F34399F64DBF3A9008416B15FC;
// ROS2.NativeRmwInterface/RMWImplementationIdentifier
struct RMWImplementationIdentifier_t7221E12FDDCCCC1D3CC320EDA66B945FA794AE37;
// ROS2.NativeRmwInterface/RMWNativeCreateQoSProfileIdentifierType
struct RMWNativeCreateQoSProfileIdentifierType_t86C350418729D57B100F216E31911830AE25AA97;
// ROS2.NativeRmwInterface/RMWNativeDeleteQoSProfileIdentifierType
struct RMWNativeDeleteQoSProfileIdentifierType_t5D2957D69DB205D4F3537302627D3EEC7922BF74;
// ROS2.NativeRmwInterface/RMWNativeSetDurabilityIdentifierType
struct RMWNativeSetDurabilityIdentifierType_tC20DAC0CC312A9DAEBC318C441BC8203EE4E0D14;
// ROS2.NativeRmwInterface/RMWNativeSetHistoryIdentifierType
struct RMWNativeSetHistoryIdentifierType_t438821C2B73F2BC4261752F5A9FF236255879D42;
// ROS2.NativeRmwInterface/RMWNativeSetReliabilityIdentifierType
struct RMWNativeSetReliabilityIdentifierType_tFE846BDE4F0A5F243647D947A73C2694378E19A5;
// ROS2.Ros2cs/Destructor
struct Destructor_t4467F647BC993F066B784EC268EFE0CBFD451D78;

IL2CPP_EXTERN_C RuntimeClass* ContextFiniType_tDE6339FF3B53ECB6B5F180CA0660BE5C0770793F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ContextIsValidType_t221B25824BF034AA390D02239F461440F4C6AFF9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Destructor_t4467F647BC993F066B784EC268EFE0CBFD451D78_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DisposeErrorStringType_tB0EB5ABA8F09AB9C18BCB301CABC0010FA27C990_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GetErrorStringType_t453607676A6C388E6CBFDFD75F799FDA836851DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GetZeroInitializedContextType_t04171F8770DA4190523F40E24D627320BEE692D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GetZeroInitializedInitOptionsType_t672F00F3D9BAA9869AB5BCC51F11F37D7A068AF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GetZeroInitializedNodeType_tB2B66F53C164F56418A2C83367AE26F42B8F4E92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GetZeroInitializedSubcriptionType_tB15A38BFDD3D25B480ABD8275A9523A87001337D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GetZeroInitializedWaitSetType_t6399F00A6BBAE1E21B97BDCF19BD380C1D53C9CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GetZeroInitiazizedPublisherType_t01F144F0515432B1C3F325276AA671B750E8629D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t84B08553CDF3D796DB788057B34FD5B0E857C6B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t93DFD21E3FADFA2B1015453B87C88365793D5EA7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IExtendedDisposable_t0D96DD735C20E2A96F22167FB12B710D6C92843E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* INode_tCD64661050E9A232AEE12B0D79C944D163C949E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPublisherBase_tF2325202EE245A37967B5AFB8C41ABCEFA8D6DAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISubscriptionBase_tCD95FBCE3C6D4C86D95DEEA874AA4E01F914834D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InitOptionsInitType_t7CCFE47E2867A249ED36CE9D134E83FE296EF91E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InitType_t332D494FBA92CD10754698D41BD5954D3CF77B8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidNamespaceException_tD2E1A2EA479047BAD9F8E4FB4D794491CBF11993_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidNodeNameException_t2B3B398B7A2DD047EF775BD9E221D29EA06B6AE5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0B869009E71D4485E120F9AC81AE38A128A6EF9F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDD6E1C9A706EDC9B52011559C08EE6DB5044D953_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NodeCreateDefaltOptionsType_t694FBD8C3D7CA67B641200A83CB864C8FD58787E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NodeDisposeOptionsType_t15BDDEA610F9F4D00AC15F76577DB21C03EAF5F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NodeFiniType_tA1CDE02D8B40017868A11938E7CDE8B6DF56F210_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NodeGetNameType_t2D236E111C5F4170456B73FA899F7B3E62D48E31_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NodeGetNamespaceType_t30FA5A59AE1F125ECA0B826562E15819F9F2AED0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NodeInitType_t365D995BC724D5F7042E191CE9A4B13A5C3865C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Node_t091203BA7C12AC4C2074891D81689DD9EC725A0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotInitializedException_t50A36E084A8A7B49F17EB63CEF13167336C53EAC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PublishType_t85AE05C7B1E15E993E7977AE925CBEED7B0A80E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PublisherCreateOptionsType_t9606320C1541DAB9AEE9478589F1BDD99527DB8F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PublisherDisposeOptionsType_tC809782AD42F6F729C61AF44BBA4FA6E34339EBD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PublisherFiniType_t29E6144CCBA0F6A8AC0CC5BAA12C50B7CAE3658B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PublisherGetDefaultOptionsType_tF64AECD0842363AFF4C4B902D90A28492CEF5BA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PublisherInitType_t0B6F34AF630DBB00D974207F5B6275F836349FF6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RCLCSInitType_t98BFF379AE54A896A681209B70D41C4504AF733F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RMWImplementationIdentifier_t7221E12FDDCCCC1D3CC320EDA66B945FA794AE37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RMWNativeCreateQoSProfileIdentifierType_t86C350418729D57B100F216E31911830AE25AA97_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RMWNativeDeleteQoSProfileIdentifierType_t5D2957D69DB205D4F3537302627D3EEC7922BF74_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RMWNativeSetDurabilityIdentifierType_tC20DAC0CC312A9DAEBC318C441BC8203EE4E0D14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RMWNativeSetHistoryIdentifierType_t438821C2B73F2BC4261752F5A9FF236255879D42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RMWNativeSetReliabilityIdentifierType_tFE846BDE4F0A5F243647D947A73C2694378E19A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RclClockGetNow_tE7C0124D0B68F9278C1BE9AA93083FBB57A442BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RclGetDefaultAllocatorType_t3073FF12B8067D85A753E0AED56D25D05214A994_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RclcsClockCreate_t7DE4D8ACB9FFEBA0D5B88B58E6C8C5A91AF86C4B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RclcsClockDispose_tDE4246256AFCE3214E441466A84D08B4922CAE03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResetErrorType_t4D921B90107C97E83795A5C064D3691084BB81DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeError_t642B93B4680822C51EF8CA1B918CAA84E4BE375C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShutdownType_t4FB0976CC98794F41196FD3CC575CAC576F438CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubscriptionCreateOptionsType_tA856B0FFDE605A45098ED09C5BD2542A6F7AB64C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubscriptionDisposeOptionsType_t39B2BA1FAA8B01F34399F64DBF3A9008416B15FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubscriptionFiniType_t50087884E3CF041D8642AC77956FFD362358A620_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubscriptionInitType_t5D9745916CE3038181964DA68957FF6B8C13222A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubscriptionIsValidType_tBAA19362E8D32CF2D87A459D0BBBC6D1B380AD7A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TakeType_tD0132705DD1D245C5C1D36705B201977F5B0B006_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitSetAddSubscriptionType_tB952F7946A7A06C27D970D1F8A28089434E2F4B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitSetClearType_t86E1B05E31A40014E169F1C9624369F6A48ADA80_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitSetInitType_t87E1D05131F194FAB01E72C1A03A0A2538C411AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitSet_tDE990309F026898B61B8C38ADEACEB84BABD94A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitType_t835E7382D2E046BD4590666AF95A16BFA8C85E01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WatiSetFiniType_tA3F438CE346815BF7ACA429F3EA9DB3556560FCC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* rcl_init_options_t_t3AD5D13EA98B32B75776F07E84592514E212EA50_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0D2464277EB9F452F839DB48B8B2133A90A2528E;
IL2CPP_EXTERN_C String_t* _stringLiteral27D1FC6AA0FCE574F7B38244BC13C62DA2A65957;
IL2CPP_EXTERN_C String_t* _stringLiteral29F5D4773DD98E9FEB3D279C8D79BA7843DE09A6;
IL2CPP_EXTERN_C String_t* _stringLiteral2AEB8636D8C77F295E3086E461B7122060B24C4C;
IL2CPP_EXTERN_C String_t* _stringLiteral39313828B539080491C7BB22E724D386DFFF4665;
IL2CPP_EXTERN_C String_t* _stringLiteral3B8FE116E9F41B430F20EA23965BD00D25206CF9;
IL2CPP_EXTERN_C String_t* _stringLiteral3F30C8A7DEF5018A1FF837543E457575A2278042;
IL2CPP_EXTERN_C String_t* _stringLiteral412D5FA94D75205B38539FBFE9CC0B3A04E69006;
IL2CPP_EXTERN_C String_t* _stringLiteral417B5B6499819685DF498F3683388ED2DBA81B2D;
IL2CPP_EXTERN_C String_t* _stringLiteral4310C4CCEAE0445F6834387B7996C7C7447AD99F;
IL2CPP_EXTERN_C String_t* _stringLiteral491E0281B62F2DBA66200376D63B7F6101A96FD1;
IL2CPP_EXTERN_C String_t* _stringLiteral4DD72C1541D3865273E7C4E4CEF3841B42F38C5A;
IL2CPP_EXTERN_C String_t* _stringLiteral514B7A1012F2BCBDE6CBEF474A8E77A0BEA27AAF;
IL2CPP_EXTERN_C String_t* _stringLiteral516D139866F77B7894C29F52E0A0B61DB7F90BE1;
IL2CPP_EXTERN_C String_t* _stringLiteral5198B2C1B713858BC3CB6685F47A3A6EA8E504D9;
IL2CPP_EXTERN_C String_t* _stringLiteral52DFF640C220B0A0F961BA313FC9AC8666B9C0F7;
IL2CPP_EXTERN_C String_t* _stringLiteral52FD8F8C79B0A4924F84C1C6C26D96CEC8AD6ABF;
IL2CPP_EXTERN_C String_t* _stringLiteral550F655B892E2726CFD8801E1DAB2F9234E1B6E9;
IL2CPP_EXTERN_C String_t* _stringLiteral5CA49DEA4C28AE04737385C631A49918D5462A12;
IL2CPP_EXTERN_C String_t* _stringLiteral66A654213BFF7E4C3758C06B20C298BF8F221129;
IL2CPP_EXTERN_C String_t* _stringLiteral685D5ECA5027BE2C46CB9FABD87EE02544CAB7ED;
IL2CPP_EXTERN_C String_t* _stringLiteral692DEB3A54499C52585B15ACE7132881F28640D6;
IL2CPP_EXTERN_C String_t* _stringLiteral6B87A4EBAD2F6191F71AB707A319CF0D1BDD776E;
IL2CPP_EXTERN_C String_t* _stringLiteral6BC0EFDF82D79D162E28A31B1D9259611FCDA2FF;
IL2CPP_EXTERN_C String_t* _stringLiteral6BD0698CA006715AADD3D4FE9AB9BF891FD58DB1;
IL2CPP_EXTERN_C String_t* _stringLiteral729F59DDAECD441E126322BACBBF767478E3359F;
IL2CPP_EXTERN_C String_t* _stringLiteral75DE1C2D84988936BA75C109BC4341E47B899ED5;
IL2CPP_EXTERN_C String_t* _stringLiteral775F131A7E94D6F7B340CFE5736ED45C40E0D4BA;
IL2CPP_EXTERN_C String_t* _stringLiteral7A08CECE5BCD6BBF5F1AD9999091BEEC5ED2D076;
IL2CPP_EXTERN_C String_t* _stringLiteral7B7404EB74ABECA7588F0660B4BCA34EDEDAA461;
IL2CPP_EXTERN_C String_t* _stringLiteral7CFE25D28348900C67CBAC353F8895E135E3ECEE;
IL2CPP_EXTERN_C String_t* _stringLiteral7D34104EC96BE07CEB7D418617550268D59AA87D;
IL2CPP_EXTERN_C String_t* _stringLiteral857C0E92DE22D5DA9AEED6D637EDF1F0FCA10462;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral8E5045210C104D954F336B7AD8A20EEA79E7C0FB;
IL2CPP_EXTERN_C String_t* _stringLiteral8EE83DD5E777E939DF480E9C65C2EDF0B643EB7D;
IL2CPP_EXTERN_C String_t* _stringLiteral9118E5C1DB9B097355412A7CAE591EEE8A1C4083;
IL2CPP_EXTERN_C String_t* _stringLiteral9520CF27629ABD8DFD7594796F3257428D305A59;
IL2CPP_EXTERN_C String_t* _stringLiteral959FBE534E503E929D23E8D9B7BB033CE2DD090C;
IL2CPP_EXTERN_C String_t* _stringLiteral981A75FEBDCFC55385DD62F40DB3EB28ACD51F77;
IL2CPP_EXTERN_C String_t* _stringLiteral981D53878445013C01900DB8D2C5EC5DD5026FBC;
IL2CPP_EXTERN_C String_t* _stringLiteral999974E733B14677FCB29020AE1EC9EF9BB9ED19;
IL2CPP_EXTERN_C String_t* _stringLiteral9A53676D98B36CD3B76E8419667229AED5927FCF;
IL2CPP_EXTERN_C String_t* _stringLiteral9EACF9E5AAB4BB2AB15144500B4EB910AA2A2000;
IL2CPP_EXTERN_C String_t* _stringLiteralACE6A81F3CA291FD1F8A411989CB8F89CD3A57F3;
IL2CPP_EXTERN_C String_t* _stringLiteralAEAB58AFDD426373778234F3F415E41737B5B215;
IL2CPP_EXTERN_C String_t* _stringLiteralB6A3C726CA5CC064F2491335D683BDD8501F3BA7;
IL2CPP_EXTERN_C String_t* _stringLiteralB9899AE59A9BA5F815B710C759F61C36BD513398;
IL2CPP_EXTERN_C String_t* _stringLiteralBB67DD686FE6E103072F214AA790B8D5B95A9476;
IL2CPP_EXTERN_C String_t* _stringLiteralBF9D87388A027C1516BC7BE9AC617A13F0B98A19;
IL2CPP_EXTERN_C String_t* _stringLiteralC423014BBCA3B56A3EE2C0C8CEA254A7ECE81CC9;
IL2CPP_EXTERN_C String_t* _stringLiteralC5D7181FD60D5BFC4EB831DF7D2250FFB07B7F55;
IL2CPP_EXTERN_C String_t* _stringLiteralC64B06C9BF94A74766013C3AD36C74567F62F132;
IL2CPP_EXTERN_C String_t* _stringLiteralCCD29A1AF71FB019A50817ABF96E90377B1A4998;
IL2CPP_EXTERN_C String_t* _stringLiteralCD621F65A233781127E7E1DDE814EE293E7E8C57;
IL2CPP_EXTERN_C String_t* _stringLiteralD3B303BB2205CDB2E0512B68553256028ADA06C4;
IL2CPP_EXTERN_C String_t* _stringLiteralD89F98299A4090BFBA6397AEE93A7F1ABF71E3EF;
IL2CPP_EXTERN_C String_t* _stringLiteralDCDE38208224E83BEC15CD4D7429E2AA2446E8CE;
IL2CPP_EXTERN_C String_t* _stringLiteralDE5F4D77371342DF15B29BA3FFA1CC3CDF0A4397;
IL2CPP_EXTERN_C String_t* _stringLiteralE0F85D2D24488A8A4646C7E756E230A116A8DE6C;
IL2CPP_EXTERN_C String_t* _stringLiteralF60C74C532A90F70D94F3A49FC96A51DA28782CB;
IL2CPP_EXTERN_C String_t* _stringLiteralFF849C1BE82D457A51F5123F268B49E5CCECA2D7;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisISubscriptionBase_tCD95FBCE3C6D4C86D95DEEA874AA4E01F914834D_mEC50A9AC6EB39445A02AD44CBABC38B3B63EB80F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m2049E8ADCBDFF0C3A5923266E34854C17641E422_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m78C2CE373F5D5F7DD8483380401ECE285C51E8EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mD8E9CE1E37A3643B72B8196FAD9743E0A96F4CF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mE5DD7F24F9370BB0948486C0F78A6CF33B924350_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m2A8BC35161E48CCDE8D7C310269082ACD4A85794_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m346F12BECF0659EE21A644F599F0C5A603A8B293_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m55015920D75F6C3F975BA20AB217EB351A55CC76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mB26CE4E4A248B30807F78497557F446B0E220D11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m029D491365B735630C632DDE207AE18F496B4FCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m08C50BB63F4AEB02BE425F1AC5A03ADBCB32831F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m2925D36AB4A8EB97168ACF699BCCBAA4112CFB6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mAA0480063E8FB91EA27DD04E45DF0AF607ADCA74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Clear_m0568EBB2A54163D9B164FD68CE1319F247F5FB0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Clear_m1F4D321F386CC97DB29CA7DA8CA2024559968A69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_m4605EB29B0FDBDF989998F85DC129B0BA0E96800_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_mBC61C0A6D78773A5CDBC43C1D24DF57224C27086_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_GetEnumerator_m4600FFA2C765C9CF4C33C6ADAFC923887150D062_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_GetEnumerator_mF4E967A756694C6CFE815008DD03BEFDFAA783C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Remove_m55A9CC1846DE8F10FA46F38BC1796E994CAB42EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Remove_m6031362F0F0125121CDAC9BE6D56269083811942_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m28EFE685C660394B031BF5F4505CA9B89472B982_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m8CAA5166B55902778454AD39F6086AA9CB6FD9E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m777C47D3E9AEC62DC26C78FF09B7AEE3A3705DB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF9B2D81207551005D9C14E334D82D0EA90831B53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m4C0DB9B46210C00A6CEFD3DE16A618503953E791_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mB772E9A11089BC01C355EBDB0DC4E27E08CD0182_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mF36FA17864321D4079BA826AD75B968F183F7662_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m71D00A3CB381B1DFE493596596AEA6E2FBF85750_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m78AA1AFFC92FF7B376A3F4C52040342CB0E0483C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m9245ADF5113E1C633538F94C98894CAAE7B96C31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mA4C4836FB546B25F21A978B1DA393120962C4B81_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ros2cs_CreateNode_m106B7064A86E1CC2A7D9E9784B0E293E1E182863_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utils_CheckReturnEnum_m4F3CDB4D1DD633F528BFD99D5A245210AD36EF5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ContextFiniType_tDE6339FF3B53ECB6B5F180CA0660BE5C0770793F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ContextIsValidType_t221B25824BF034AA390D02239F461440F4C6AFF9_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* DisposeErrorStringType_tB0EB5ABA8F09AB9C18BCB301CABC0010FA27C990_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* GetErrorStringType_t453607676A6C388E6CBFDFD75F799FDA836851DD_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* GetZeroInitializedContextType_t04171F8770DA4190523F40E24D627320BEE692D6_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* GetZeroInitializedInitOptionsType_t672F00F3D9BAA9869AB5BCC51F11F37D7A068AF2_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* GetZeroInitializedNodeType_tB2B66F53C164F56418A2C83367AE26F42B8F4E92_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* GetZeroInitializedSubcriptionType_tB15A38BFDD3D25B480ABD8275A9523A87001337D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* GetZeroInitializedWaitSetType_t6399F00A6BBAE1E21B97BDCF19BD380C1D53C9CC_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* GetZeroInitiazizedPublisherType_t01F144F0515432B1C3F325276AA671B750E8629D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* InitOptionsInitType_t7CCFE47E2867A249ED36CE9D134E83FE296EF91E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* InitType_t332D494FBA92CD10754698D41BD5954D3CF77B8B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NodeCreateDefaltOptionsType_t694FBD8C3D7CA67B641200A83CB864C8FD58787E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NodeDisposeOptionsType_t15BDDEA610F9F4D00AC15F76577DB21C03EAF5F7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NodeFiniType_tA1CDE02D8B40017868A11938E7CDE8B6DF56F210_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NodeGetNameType_t2D236E111C5F4170456B73FA899F7B3E62D48E31_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NodeGetNamespaceType_t30FA5A59AE1F125ECA0B826562E15819F9F2AED0_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NodeInitType_t365D995BC724D5F7042E191CE9A4B13A5C3865C0_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PublishType_t85AE05C7B1E15E993E7977AE925CBEED7B0A80E0_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PublisherCreateOptionsType_t9606320C1541DAB9AEE9478589F1BDD99527DB8F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PublisherDisposeOptionsType_tC809782AD42F6F729C61AF44BBA4FA6E34339EBD_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PublisherFiniType_t29E6144CCBA0F6A8AC0CC5BAA12C50B7CAE3658B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PublisherGetDefaultOptionsType_tF64AECD0842363AFF4C4B902D90A28492CEF5BA1_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PublisherInitType_t0B6F34AF630DBB00D974207F5B6275F836349FF6_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RCLCSInitType_t98BFF379AE54A896A681209B70D41C4504AF733F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RMWImplementationIdentifier_t7221E12FDDCCCC1D3CC320EDA66B945FA794AE37_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RMWNativeCreateQoSProfileIdentifierType_t86C350418729D57B100F216E31911830AE25AA97_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RMWNativeDeleteQoSProfileIdentifierType_t5D2957D69DB205D4F3537302627D3EEC7922BF74_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RMWNativeSetDurabilityIdentifierType_tC20DAC0CC312A9DAEBC318C441BC8203EE4E0D14_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RMWNativeSetHistoryIdentifierType_t438821C2B73F2BC4261752F5A9FF236255879D42_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RMWNativeSetReliabilityIdentifierType_tFE846BDE4F0A5F243647D947A73C2694378E19A5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RclClockGetNow_tE7C0124D0B68F9278C1BE9AA93083FBB57A442BD_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RclGetDefaultAllocatorType_t3073FF12B8067D85A753E0AED56D25D05214A994_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RclcsClockCreate_t7DE4D8ACB9FFEBA0D5B88B58E6C8C5A91AF86C4B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RclcsClockDispose_tDE4246256AFCE3214E441466A84D08B4922CAE03_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ResetErrorType_t4D921B90107C97E83795A5C064D3691084BB81DC_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ShutdownType_t4FB0976CC98794F41196FD3CC575CAC576F438CA_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SubscriptionCreateOptionsType_tA856B0FFDE605A45098ED09C5BD2542A6F7AB64C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SubscriptionDisposeOptionsType_t39B2BA1FAA8B01F34399F64DBF3A9008416B15FC_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SubscriptionFiniType_t50087884E3CF041D8642AC77956FFD362358A620_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SubscriptionInitType_t5D9745916CE3038181964DA68957FF6B8C13222A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SubscriptionIsValidType_tBAA19362E8D32CF2D87A459D0BBBC6D1B380AD7A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TakeType_tD0132705DD1D245C5C1D36705B201977F5B0B006_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* WaitSetAddSubscriptionType_tB952F7946A7A06C27D970D1F8A28089434E2F4B4_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* WaitSetClearType_t86E1B05E31A40014E169F1C9624369F6A48ADA80_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* WaitSetInitType_t87E1D05131F194FAB01E72C1A03A0A2538C411AA_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* WaitType_t835E7382D2E046BD4590666AF95A16BFA8C85E01_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* WatiSetFiniType_tA3F438CE346815BF7ACA429F3EA9DB3556560FCC_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tE30D6F86F4C1CAE8C7E15E59C17082C799E1AA4B 
{
};

// System.Collections.Generic.HashSet`1<ROS2.IPublisherBase>
struct HashSet_1_t84B08553CDF3D796DB788057B34FD5B0E857C6B4  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tC26CCABFCC5274912EBEB4F9DD3D5379E50DD0D0* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.HashSet`1<ROS2.ISubscriptionBase>
struct HashSet_1_t93DFD21E3FADFA2B1015453B87C88365793D5EA7  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tD8116753391386A7E4F8926033E61ED722F709EC* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.List`1<ROS2.INode>
struct List_1_tDD6E1C9A706EDC9B52011559C08EE6DB5044D953  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	INodeU5BU5D_t3A06A3EAB4160DDFD8D6645E69A454E2FCEF1947* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<ROS2.ISubscriptionBase>
struct List_1_t0B869009E71D4485E120F9AC81AE38A128A6EF9F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ISubscriptionBaseU5BU5D_t55ADED626B12E44B9E2AB612BD3707B8490FC58F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// ROS2.NativeRcl
struct NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3  : public RuntimeObject
{
};

// ROS2.NativeRclInterface
struct NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB  : public RuntimeObject
{
};

// ROS2.NativeRmwInterface
struct NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F  : public RuntimeObject
{
};

// ROS2.Ros2cs
struct Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F  : public RuntimeObject
{
};

// ROS2.Ros2csLogger
struct Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D  : public RuntimeObject
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

// ROS2.Utils
struct Utils_t4582F5996402A66767E4235CBDD387234B425971  : public RuntimeObject
{
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

// ROS2.WaitSet
struct WaitSet_tDE990309F026898B61B8C38ADEACEB84BABD94A7  : public RuntimeObject
{
};

// ROS2.Ros2cs/Destructor
struct Destructor_t4467F647BC993F066B784EC268EFE0CBFD451D78  : public RuntimeObject
{
};

// System.Collections.Generic.List`1/Enumerator<ROS2.INode>
struct Enumerator_tE4970469CF181052A9B4F9A0784FD2B70EE25314 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tDD6E1C9A706EDC9B52011559C08EE6DB5044D953* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.HashSet`1/Enumerator<ROS2.IPublisherBase>
struct Enumerator_t88F60AB230D10BED893260C0F5CDB91F8779DA50 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t84B08553CDF3D796DB788057B34FD5B0E857C6B4* ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.HashSet`1/Enumerator<ROS2.ISubscriptionBase>
struct Enumerator_t5BFFD485E919AC1FB05AC5738E10C72304D2FB1D 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t93DFD21E3FADFA2B1015453B87C88365793D5EA7* ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<ROS2.ISubscriptionBase>
struct Enumerator_t62EAD83F8CBB42DDEBDF46D3836DE26146A3F0CA 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t0B869009E71D4485E120F9AC81AE38A128A6EF9F* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.HashSet`1/Enumerator<System.Object>
struct Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
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

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// ROS2.RosTime
struct RosTime_t8921DCC752C891310CDDC28EE8F933399D8CCD44 
{
	// System.Int32 ROS2.RosTime::sec
	int32_t ___sec_0;
	// System.UInt32 ROS2.RosTime::nanosec
	uint32_t ___nanosec_1;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// System.UIntPtr
struct UIntPtr_t 
{
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;
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

// ROS2.Clock
struct Clock_tC2F4680529BC5DFA8864474F920454F3CF7A7F0A  : public RuntimeObject
{
	// System.IntPtr ROS2.Clock::handle
	intptr_t ___handle_0;
	// System.Boolean ROS2.Clock::disposed
	bool ___disposed_1;
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

// ROS2.QualityOfServiceProfile
struct QualityOfServiceProfile_t167E8030D9BA28716116CB6354999131DD396BEA  : public RuntimeObject
{
	// System.IntPtr ROS2.QualityOfServiceProfile::handle
	intptr_t ___handle_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// ROS2.rcl_allocator_t
struct rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831 
{
	// System.IntPtr ROS2.rcl_allocator_t::allocate
	intptr_t ___allocate_0;
	// System.IntPtr ROS2.rcl_allocator_t::deallocate
	intptr_t ___deallocate_1;
	// System.IntPtr ROS2.rcl_allocator_t::reallocate
	intptr_t ___reallocate_2;
	// System.IntPtr ROS2.rcl_allocator_t::zero_allocate
	intptr_t ___zero_allocate_3;
	// System.IntPtr ROS2.rcl_allocator_t::state
	intptr_t ___state_4;
};

// ROS2.rcl_arguments_t
struct rcl_arguments_t_tD42F4EB57CDA222F592DFAE7794C84256E3E376E 
{
	// System.IntPtr ROS2.rcl_arguments_t::impl
	intptr_t ___impl_0;
};

// ROS2.rcl_context_t
struct rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C 
{
	// System.IntPtr ROS2.rcl_context_t::global_arguments
	intptr_t ___global_arguments_0;
	// System.IntPtr ROS2.rcl_context_t::impl
	intptr_t ___impl_1;
	// System.IntPtr ROS2.rcl_context_t::instance_id_storage
	intptr_t ___instance_id_storage_2;
};

// ROS2.rcl_error_string_t
struct rcl_error_string_t_t6D042EBFA163B9EF0803E617CC70D5788EEFC598 
{
	// System.IntPtr ROS2.rcl_error_string_t::str
	intptr_t ___str_0;
};

// ROS2.rcl_init_options_t
struct rcl_init_options_t_t3AD5D13EA98B32B75776F07E84592514E212EA50 
{
	// System.IntPtr ROS2.rcl_init_options_t::impl
	intptr_t ___impl_0;
};

// ROS2.rcl_node_t
struct rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4 
{
	// System.IntPtr ROS2.rcl_node_t::context
	intptr_t ___context_0;
	// System.IntPtr ROS2.rcl_node_t::rcl_node_impl_t
	intptr_t ___rcl_node_impl_t_1;
};

// ROS2.rcl_publisher_t
struct rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB 
{
	// System.IntPtr ROS2.rcl_publisher_t::impl
	intptr_t ___impl_0;
};

// ROS2.rcl_subscription_t
struct rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD 
{
	// System.IntPtr ROS2.rcl_subscription_t::impl
	intptr_t ___impl_0;
};

// ROS2.rcl_wait_set_t
struct rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100 
{
	// System.IntPtr ROS2.rcl_wait_set_t::subscriptions
	intptr_t ___subscriptions_0;
	// System.UIntPtr ROS2.rcl_wait_set_t::size_of_subscriptions
	uintptr_t ___size_of_subscriptions_1;
	// System.IntPtr ROS2.rcl_wait_set_t::guard_conditions
	intptr_t ___guard_conditions_2;
	// System.UIntPtr ROS2.rcl_wait_set_t::size_of_guard_conditions
	uintptr_t ___size_of_guard_conditions_3;
	// System.IntPtr ROS2.rcl_wait_set_t::timers
	intptr_t ___timers_4;
	// System.UIntPtr ROS2.rcl_wait_set_t::size_of_timers
	uintptr_t ___size_of_timers_5;
	// System.IntPtr ROS2.rcl_wait_set_t::clients
	intptr_t ___clients_6;
	// System.UIntPtr ROS2.rcl_wait_set_t::size_of_clients
	uintptr_t ___size_of_clients_7;
	// System.IntPtr ROS2.rcl_wait_set_t::services
	intptr_t ___services_8;
	// System.UIntPtr ROS2.rcl_wait_set_t::size_of_services
	uintptr_t ___size_of_services_9;
	// System.IntPtr ROS2.rcl_wait_set_t::events
	intptr_t ___events_10;
	// System.UIntPtr ROS2.rcl_wait_set_t::size_of_events
	uintptr_t ___size_of_events_11;
	// System.IntPtr ROS2.rcl_wait_set_t::impl
	intptr_t ___impl_12;
};

// ROS2.InvalidNamespaceException
struct InvalidNamespaceException_tD2E1A2EA479047BAD9F8E4FB4D794491CBF11993  : public Exception_t
{
};

// ROS2.InvalidNodeNameException
struct InvalidNodeNameException_t2B3B398B7A2DD047EF775BD9E221D29EA06B6AE5  : public Exception_t
{
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

// ROS2.Node
struct Node_t091203BA7C12AC4C2074891D81689DD9EC725A0D  : public RuntimeObject
{
	// System.String ROS2.Node::name
	String_t* ___name_0;
	// ROS2.Ros2csLogger ROS2.Node::logger
	Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D* ___logger_1;
	// ROS2.rcl_node_t ROS2.Node::nodeHandle
	rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4 ___nodeHandle_2;
	// System.IntPtr ROS2.Node::defaultNodeOptions
	intptr_t ___defaultNodeOptions_3;
	// System.Collections.Generic.HashSet`1<ROS2.ISubscriptionBase> ROS2.Node::subscriptions
	HashSet_1_t93DFD21E3FADFA2B1015453B87C88365793D5EA7* ___subscriptions_4;
	// System.Collections.Generic.HashSet`1<ROS2.IPublisherBase> ROS2.Node::publishers
	HashSet_1_t84B08553CDF3D796DB788057B34FD5B0E857C6B4* ___publishers_5;
	// System.Object ROS2.Node::mutex
	RuntimeObject* ___mutex_6;
	// System.Boolean ROS2.Node::disposed
	bool ___disposed_7;
};

// ROS2.NotInitializedException
struct NotInitializedException_t50A36E084A8A7B49F17EB63CEF13167336C53EAC  : public Exception_t
{
};

// ROS2.RuntimeError
struct RuntimeError_t642B93B4680822C51EF8CA1B918CAA84E4BE375C  : public Exception_t
{
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

// ROS2.rcl_clock_t
struct rcl_clock_t_t68485B7DE697332F8C941A12FA7A984C64C5D7FB 
{
	// System.Int32 ROS2.rcl_clock_t::type
	int32_t ___type_0;
	// System.IntPtr ROS2.rcl_clock_t::jump_callbacks
	intptr_t ___jump_callbacks_1;
	// System.UIntPtr ROS2.rcl_clock_t::num_jump_callbacks
	uintptr_t ___num_jump_callbacks_2;
	// System.IntPtr ROS2.rcl_clock_t::get_now
	intptr_t ___get_now_3;
	// System.IntPtr ROS2.rcl_clock_t::data
	intptr_t ___data_4;
	// ROS2.rcl_allocator_t ROS2.rcl_clock_t::allocator
	rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831 ___allocator_5;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// ROS2.NativeRcl/ContextFiniType
struct ContextFiniType_tDE6339FF3B53ECB6B5F180CA0660BE5C0770793F  : public MulticastDelegate_t
{
};

// ROS2.NativeRcl/ContextIsValidType
struct ContextIsValidType_t221B25824BF034AA390D02239F461440F4C6AFF9  : public MulticastDelegate_t
{
};

// ROS2.NativeRcl/GetZeroInitializedContextType
struct GetZeroInitializedContextType_t04171F8770DA4190523F40E24D627320BEE692D6  : public MulticastDelegate_t
{
};

// ROS2.NativeRcl/GetZeroInitializedInitOptionsType
struct GetZeroInitializedInitOptionsType_t672F00F3D9BAA9869AB5BCC51F11F37D7A068AF2  : public MulticastDelegate_t
{
};

// ROS2.NativeRcl/GetZeroInitializedNodeType
struct GetZeroInitializedNodeType_tB2B66F53C164F56418A2C83367AE26F42B8F4E92  : public MulticastDelegate_t
{
};

// ROS2.NativeRcl/GetZeroInitializedSubcriptionType
struct GetZeroInitializedSubcriptionType_tB15A38BFDD3D25B480ABD8275A9523A87001337D  : public MulticastDelegate_t
{
};

// ROS2.NativeRcl/GetZeroInitializedWaitSetType
struct GetZeroInitializedWaitSetType_t6399F00A6BBAE1E21B97BDCF19BD380C1D53C9CC  : public MulticastDelegate_t
{
};

// ROS2.NativeRcl/GetZeroInitiazizedPublisherType
struct GetZeroInitiazizedPublisherType_t01F144F0515432B1C3F325276AA671B750E8629D  : public MulticastDelegate_t
{
};

// ROS2.NativeRcl/InitOptionsInitType
struct InitOptionsInitType_t7CCFE47E2867A249ED36CE9D134E83FE296EF91E  : public MulticastDelegate_t
{
};

// ROS2.NativeRcl/InitType
struct InitType_t332D494FBA92CD10754698D41BD5954D3CF77B8B  : public MulticastDelegate_t
{
};

// ROS2.NativeRcl/NodeFiniType
struct NodeFiniType_tA1CDE02D8B40017868A11938E7CDE8B6DF56F210  : public MulticastDelegate_t
{
};

// ROS2.NativeRcl/NodeGetNameType
struct NodeGetNameType_t2D236E111C5F4170456B73FA899F7B3E62D48E31  : public MulticastDelegate_t
{
};

// ROS2.NativeRcl/NodeGetNamespaceType
struct NodeGetNamespaceType_t30FA5A59AE1F125ECA0B826562E15819F9F2AED0  : public MulticastDelegate_t
{
};

// ROS2.NativeRcl/NodeInitType
struct NodeInitType_t365D995BC724D5F7042E191CE9A4B13A5C3865C0  : public MulticastDelegate_t
{
};

// ROS2.NativeRcl/PublishType
struct PublishType_t85AE05C7B1E15E993E7977AE925CBEED7B0A80E0  : public MulticastDelegate_t
{
};

// ROS2.NativeRcl/PublisherFiniType
struct PublisherFiniType_t29E6144CCBA0F6A8AC0CC5BAA12C50B7CAE3658B  : public MulticastDelegate_t
{
};

// ROS2.NativeRcl/PublisherGetDefaultOptionsType
struct PublisherGetDefaultOptionsType_tF64AECD0842363AFF4C4B902D90A28492CEF5BA1  : public MulticastDelegate_t
{
};

// ROS2.NativeRcl/PublisherInitType
struct PublisherInitType_t0B6F34AF630DBB00D974207F5B6275F836349FF6  : public MulticastDelegate_t
{
};

// ROS2.NativeRcl/RclClockGetNow
struct RclClockGetNow_tE7C0124D0B68F9278C1BE9AA93083FBB57A442BD  : public MulticastDelegate_t
{
};

// ROS2.NativeRcl/RclGetDefaultAllocatorType
struct RclGetDefaultAllocatorType_t3073FF12B8067D85A753E0AED56D25D05214A994  : public MulticastDelegate_t
{
};

// ROS2.NativeRcl/ResetErrorType
struct ResetErrorType_t4D921B90107C97E83795A5C064D3691084BB81DC  : public MulticastDelegate_t
{
};

// ROS2.NativeRcl/ShutdownType
struct ShutdownType_t4FB0976CC98794F41196FD3CC575CAC576F438CA  : public MulticastDelegate_t
{
};

// ROS2.NativeRcl/SubscriptionFiniType
struct SubscriptionFiniType_t50087884E3CF041D8642AC77956FFD362358A620  : public MulticastDelegate_t
{
};

// ROS2.NativeRcl/SubscriptionInitType
struct SubscriptionInitType_t5D9745916CE3038181964DA68957FF6B8C13222A  : public MulticastDelegate_t
{
};

// ROS2.NativeRcl/SubscriptionIsValidType
struct SubscriptionIsValidType_tBAA19362E8D32CF2D87A459D0BBBC6D1B380AD7A  : public MulticastDelegate_t
{
};

// ROS2.NativeRcl/TakeType
struct TakeType_tD0132705DD1D245C5C1D36705B201977F5B0B006  : public MulticastDelegate_t
{
};

// ROS2.NativeRcl/WaitSetAddSubscriptionType
struct WaitSetAddSubscriptionType_tB952F7946A7A06C27D970D1F8A28089434E2F4B4  : public MulticastDelegate_t
{
};

// ROS2.NativeRcl/WaitSetClearType
struct WaitSetClearType_t86E1B05E31A40014E169F1C9624369F6A48ADA80  : public MulticastDelegate_t
{
};

// ROS2.NativeRcl/WaitSetInitType
struct WaitSetInitType_t87E1D05131F194FAB01E72C1A03A0A2538C411AA  : public MulticastDelegate_t
{
};

// ROS2.NativeRcl/WaitType
struct WaitType_t835E7382D2E046BD4590666AF95A16BFA8C85E01  : public MulticastDelegate_t
{
};

// ROS2.NativeRcl/WatiSetFiniType
struct WatiSetFiniType_tA3F438CE346815BF7ACA429F3EA9DB3556560FCC  : public MulticastDelegate_t
{
};

// ROS2.NativeRclInterface/DisposeErrorStringType
struct DisposeErrorStringType_tB0EB5ABA8F09AB9C18BCB301CABC0010FA27C990  : public MulticastDelegate_t
{
};

// ROS2.NativeRclInterface/GetErrorStringType
struct GetErrorStringType_t453607676A6C388E6CBFDFD75F799FDA836851DD  : public MulticastDelegate_t
{
};

// ROS2.NativeRclInterface/NodeCreateDefaltOptionsType
struct NodeCreateDefaltOptionsType_t694FBD8C3D7CA67B641200A83CB864C8FD58787E  : public MulticastDelegate_t
{
};

// ROS2.NativeRclInterface/NodeDisposeOptionsType
struct NodeDisposeOptionsType_t15BDDEA610F9F4D00AC15F76577DB21C03EAF5F7  : public MulticastDelegate_t
{
};

// ROS2.NativeRclInterface/PublisherCreateOptionsType
struct PublisherCreateOptionsType_t9606320C1541DAB9AEE9478589F1BDD99527DB8F  : public MulticastDelegate_t
{
};

// ROS2.NativeRclInterface/PublisherDisposeOptionsType
struct PublisherDisposeOptionsType_tC809782AD42F6F729C61AF44BBA4FA6E34339EBD  : public MulticastDelegate_t
{
};

// ROS2.NativeRclInterface/RCLCSInitType
struct RCLCSInitType_t98BFF379AE54A896A681209B70D41C4504AF733F  : public MulticastDelegate_t
{
};

// ROS2.NativeRclInterface/RclcsClockCreate
struct RclcsClockCreate_t7DE4D8ACB9FFEBA0D5B88B58E6C8C5A91AF86C4B  : public MulticastDelegate_t
{
};

// ROS2.NativeRclInterface/RclcsClockDispose
struct RclcsClockDispose_tDE4246256AFCE3214E441466A84D08B4922CAE03  : public MulticastDelegate_t
{
};

// ROS2.NativeRclInterface/SubscriptionCreateOptionsType
struct SubscriptionCreateOptionsType_tA856B0FFDE605A45098ED09C5BD2542A6F7AB64C  : public MulticastDelegate_t
{
};

// ROS2.NativeRclInterface/SubscriptionDisposeOptionsType
struct SubscriptionDisposeOptionsType_t39B2BA1FAA8B01F34399F64DBF3A9008416B15FC  : public MulticastDelegate_t
{
};

// ROS2.NativeRmwInterface/RMWImplementationIdentifier
struct RMWImplementationIdentifier_t7221E12FDDCCCC1D3CC320EDA66B945FA794AE37  : public MulticastDelegate_t
{
};

// ROS2.NativeRmwInterface/RMWNativeCreateQoSProfileIdentifierType
struct RMWNativeCreateQoSProfileIdentifierType_t86C350418729D57B100F216E31911830AE25AA97  : public MulticastDelegate_t
{
};

// ROS2.NativeRmwInterface/RMWNativeDeleteQoSProfileIdentifierType
struct RMWNativeDeleteQoSProfileIdentifierType_t5D2957D69DB205D4F3537302627D3EEC7922BF74  : public MulticastDelegate_t
{
};

// ROS2.NativeRmwInterface/RMWNativeSetDurabilityIdentifierType
struct RMWNativeSetDurabilityIdentifierType_tC20DAC0CC312A9DAEBC318C441BC8203EE4E0D14  : public MulticastDelegate_t
{
};

// ROS2.NativeRmwInterface/RMWNativeSetHistoryIdentifierType
struct RMWNativeSetHistoryIdentifierType_t438821C2B73F2BC4261752F5A9FF236255879D42  : public MulticastDelegate_t
{
};

// ROS2.NativeRmwInterface/RMWNativeSetReliabilityIdentifierType
struct RMWNativeSetReliabilityIdentifierType_tFE846BDE4F0A5F243647D947A73C2694378E19A5  : public MulticastDelegate_t
{
};

// <Module>

// <Module>

// System.Collections.Generic.HashSet`1<ROS2.IPublisherBase>

// System.Collections.Generic.HashSet`1<ROS2.IPublisherBase>

// System.Collections.Generic.HashSet`1<ROS2.ISubscriptionBase>

// System.Collections.Generic.HashSet`1<ROS2.ISubscriptionBase>

// System.Collections.Generic.List`1<ROS2.INode>
struct List_1_tDD6E1C9A706EDC9B52011559C08EE6DB5044D953_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	INodeU5BU5D_t3A06A3EAB4160DDFD8D6645E69A454E2FCEF1947* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<ROS2.INode>

// System.Collections.Generic.List`1<ROS2.ISubscriptionBase>
struct List_1_t0B869009E71D4485E120F9AC81AE38A128A6EF9F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ISubscriptionBaseU5BU5D_t55ADED626B12E44B9E2AB612BD3707B8490FC58F* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<ROS2.ISubscriptionBase>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// ROS2.NativeRcl
struct NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields
{
	// ROS2.DllLoadUtils ROS2.NativeRcl::dllLoadUtils
	RuntimeObject* ___dllLoadUtils_0;
	// System.IntPtr ROS2.NativeRcl::nativeRCL
	intptr_t ___nativeRCL_1;
	// System.IntPtr ROS2.NativeRcl::nativeRCUtils
	intptr_t ___nativeRCUtils_2;
	// ROS2.NativeRcl/GetZeroInitializedContextType ROS2.NativeRcl::rcl_get_zero_initialized_context
	GetZeroInitializedContextType_t04171F8770DA4190523F40E24D627320BEE692D6* ___rcl_get_zero_initialized_context_3;
	// ROS2.NativeRcl/GetZeroInitializedInitOptionsType ROS2.NativeRcl::rcl_get_zero_initialized_init_options
	GetZeroInitializedInitOptionsType_t672F00F3D9BAA9869AB5BCC51F11F37D7A068AF2* ___rcl_get_zero_initialized_init_options_4;
	// ROS2.NativeRcl/InitOptionsInitType ROS2.NativeRcl::rcl_init_options_init
	InitOptionsInitType_t7CCFE47E2867A249ED36CE9D134E83FE296EF91E* ___rcl_init_options_init_5;
	// ROS2.NativeRcl/ShutdownType ROS2.NativeRcl::rcl_shutdown
	ShutdownType_t4FB0976CC98794F41196FD3CC575CAC576F438CA* ___rcl_shutdown_6;
	// ROS2.NativeRcl/ContextIsValidType ROS2.NativeRcl::rcl_context_is_valid
	ContextIsValidType_t221B25824BF034AA390D02239F461440F4C6AFF9* ___rcl_context_is_valid_7;
	// ROS2.NativeRcl/InitType ROS2.NativeRcl::rcl_init
	InitType_t332D494FBA92CD10754698D41BD5954D3CF77B8B* ___rcl_init_8;
	// ROS2.NativeRcl/ContextFiniType ROS2.NativeRcl::rcl_context_fini
	ContextFiniType_tDE6339FF3B53ECB6B5F180CA0660BE5C0770793F* ___rcl_context_fini_9;
	// ROS2.NativeRcl/GetZeroInitializedNodeType ROS2.NativeRcl::rcl_get_zero_initialized_node
	GetZeroInitializedNodeType_tB2B66F53C164F56418A2C83367AE26F42B8F4E92* ___rcl_get_zero_initialized_node_10;
	// ROS2.NativeRcl/NodeInitType ROS2.NativeRcl::rcl_node_init
	NodeInitType_t365D995BC724D5F7042E191CE9A4B13A5C3865C0* ___rcl_node_init_11;
	// ROS2.NativeRcl/NodeFiniType ROS2.NativeRcl::rcl_node_fini
	NodeFiniType_tA1CDE02D8B40017868A11938E7CDE8B6DF56F210* ___rcl_node_fini_12;
	// ROS2.NativeRcl/NodeGetNameType ROS2.NativeRcl::rcl_node_get_name
	NodeGetNameType_t2D236E111C5F4170456B73FA899F7B3E62D48E31* ___rcl_node_get_name_13;
	// ROS2.NativeRcl/NodeGetNamespaceType ROS2.NativeRcl::rcl_node_get_namespace
	NodeGetNamespaceType_t30FA5A59AE1F125ECA0B826562E15819F9F2AED0* ___rcl_node_get_namespace_14;
	// ROS2.NativeRcl/PublisherGetDefaultOptionsType ROS2.NativeRcl::rcl_publisher_get_default_options
	PublisherGetDefaultOptionsType_tF64AECD0842363AFF4C4B902D90A28492CEF5BA1* ___rcl_publisher_get_default_options_15;
	// ROS2.NativeRcl/GetZeroInitiazizedPublisherType ROS2.NativeRcl::rcl_get_zero_initialized_publisher
	GetZeroInitiazizedPublisherType_t01F144F0515432B1C3F325276AA671B750E8629D* ___rcl_get_zero_initialized_publisher_16;
	// ROS2.NativeRcl/PublisherInitType ROS2.NativeRcl::rcl_publisher_init
	PublisherInitType_t0B6F34AF630DBB00D974207F5B6275F836349FF6* ___rcl_publisher_init_17;
	// ROS2.NativeRcl/PublisherFiniType ROS2.NativeRcl::rcl_publisher_fini
	PublisherFiniType_t29E6144CCBA0F6A8AC0CC5BAA12C50B7CAE3658B* ___rcl_publisher_fini_18;
	// ROS2.NativeRcl/PublishType ROS2.NativeRcl::rcl_publish
	PublishType_t85AE05C7B1E15E993E7977AE925CBEED7B0A80E0* ___rcl_publish_19;
	// ROS2.NativeRcl/GetZeroInitializedSubcriptionType ROS2.NativeRcl::rcl_get_zero_initialized_subscription
	GetZeroInitializedSubcriptionType_tB15A38BFDD3D25B480ABD8275A9523A87001337D* ___rcl_get_zero_initialized_subscription_20;
	// ROS2.NativeRcl/SubscriptionInitType ROS2.NativeRcl::rcl_subscription_init
	SubscriptionInitType_t5D9745916CE3038181964DA68957FF6B8C13222A* ___rcl_subscription_init_21;
	// ROS2.NativeRcl/SubscriptionFiniType ROS2.NativeRcl::rcl_subscription_fini
	SubscriptionFiniType_t50087884E3CF041D8642AC77956FFD362358A620* ___rcl_subscription_fini_22;
	// ROS2.NativeRcl/SubscriptionIsValidType ROS2.NativeRcl::rcl_subscription_is_valid
	SubscriptionIsValidType_tBAA19362E8D32CF2D87A459D0BBBC6D1B380AD7A* ___rcl_subscription_is_valid_23;
	// ROS2.NativeRcl/TakeType ROS2.NativeRcl::rcl_take
	TakeType_tD0132705DD1D245C5C1D36705B201977F5B0B006* ___rcl_take_24;
	// ROS2.NativeRcl/GetZeroInitializedWaitSetType ROS2.NativeRcl::rcl_get_zero_initialized_wait_set
	GetZeroInitializedWaitSetType_t6399F00A6BBAE1E21B97BDCF19BD380C1D53C9CC* ___rcl_get_zero_initialized_wait_set_25;
	// ROS2.NativeRcl/WaitSetInitType ROS2.NativeRcl::rcl_wait_set_init
	WaitSetInitType_t87E1D05131F194FAB01E72C1A03A0A2538C411AA* ___rcl_wait_set_init_26;
	// ROS2.NativeRcl/WatiSetFiniType ROS2.NativeRcl::rcl_wait_set_fini
	WatiSetFiniType_tA3F438CE346815BF7ACA429F3EA9DB3556560FCC* ___rcl_wait_set_fini_27;
	// ROS2.NativeRcl/WaitSetClearType ROS2.NativeRcl::rcl_wait_set_clear
	WaitSetClearType_t86E1B05E31A40014E169F1C9624369F6A48ADA80* ___rcl_wait_set_clear_28;
	// ROS2.NativeRcl/WaitSetAddSubscriptionType ROS2.NativeRcl::rcl_wait_set_add_subscription
	WaitSetAddSubscriptionType_tB952F7946A7A06C27D970D1F8A28089434E2F4B4* ___rcl_wait_set_add_subscription_29;
	// ROS2.NativeRcl/WaitType ROS2.NativeRcl::rcl_wait
	WaitType_t835E7382D2E046BD4590666AF95A16BFA8C85E01* ___rcl_wait_30;
	// ROS2.NativeRcl/RclClockGetNow ROS2.NativeRcl::rcl_clock_get_now
	RclClockGetNow_tE7C0124D0B68F9278C1BE9AA93083FBB57A442BD* ___rcl_clock_get_now_31;
	// ROS2.NativeRcl/RclGetDefaultAllocatorType ROS2.NativeRcl::rcutils_get_default_allocator
	RclGetDefaultAllocatorType_t3073FF12B8067D85A753E0AED56D25D05214A994* ___rcutils_get_default_allocator_32;
	// ROS2.NativeRcl/ResetErrorType ROS2.NativeRcl::rcl_reset_error
	ResetErrorType_t4D921B90107C97E83795A5C064D3691084BB81DC* ___rcl_reset_error_33;
};

// ROS2.NativeRcl

// ROS2.NativeRclInterface
struct NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_StaticFields
{
	// ROS2.DllLoadUtils ROS2.NativeRclInterface::dllLoadUtils
	RuntimeObject* ___dllLoadUtils_0;
	// System.IntPtr ROS2.NativeRclInterface::nativeROS2CS
	intptr_t ___nativeROS2CS_1;
	// ROS2.NativeRclInterface/RCLCSInitType ROS2.NativeRclInterface::rclcs_init
	RCLCSInitType_t98BFF379AE54A896A681209B70D41C4504AF733F* ___rclcs_init_2;
	// ROS2.NativeRclInterface/GetErrorStringType ROS2.NativeRclInterface::rclcs_get_error_string
	GetErrorStringType_t453607676A6C388E6CBFDFD75F799FDA836851DD* ___rclcs_get_error_string_3;
	// ROS2.NativeRclInterface/DisposeErrorStringType ROS2.NativeRclInterface::rclcs_dispose_error_string
	DisposeErrorStringType_tB0EB5ABA8F09AB9C18BCB301CABC0010FA27C990* ___rclcs_dispose_error_string_4;
	// ROS2.NativeRclInterface/NodeCreateDefaltOptionsType ROS2.NativeRclInterface::rclcs_node_create_default_options
	NodeCreateDefaltOptionsType_t694FBD8C3D7CA67B641200A83CB864C8FD58787E* ___rclcs_node_create_default_options_5;
	// ROS2.NativeRclInterface/NodeDisposeOptionsType ROS2.NativeRclInterface::rclcs_node_dispose_options
	NodeDisposeOptionsType_t15BDDEA610F9F4D00AC15F76577DB21C03EAF5F7* ___rclcs_node_dispose_options_6;
	// ROS2.NativeRclInterface/SubscriptionCreateOptionsType ROS2.NativeRclInterface::rclcs_subscription_create_options
	SubscriptionCreateOptionsType_tA856B0FFDE605A45098ED09C5BD2542A6F7AB64C* ___rclcs_subscription_create_options_7;
	// ROS2.NativeRclInterface/SubscriptionDisposeOptionsType ROS2.NativeRclInterface::rclcs_subscription_dispose_options
	SubscriptionDisposeOptionsType_t39B2BA1FAA8B01F34399F64DBF3A9008416B15FC* ___rclcs_subscription_dispose_options_8;
	// ROS2.NativeRclInterface/PublisherCreateOptionsType ROS2.NativeRclInterface::rclcs_publisher_create_options
	PublisherCreateOptionsType_t9606320C1541DAB9AEE9478589F1BDD99527DB8F* ___rclcs_publisher_create_options_9;
	// ROS2.NativeRclInterface/PublisherDisposeOptionsType ROS2.NativeRclInterface::rclcs_publisher_dispose_options
	PublisherDisposeOptionsType_tC809782AD42F6F729C61AF44BBA4FA6E34339EBD* ___rclcs_publisher_dispose_options_10;
	// ROS2.NativeRclInterface/RclcsClockCreate ROS2.NativeRclInterface::rclcs_ros_clock_create
	RclcsClockCreate_t7DE4D8ACB9FFEBA0D5B88B58E6C8C5A91AF86C4B* ___rclcs_ros_clock_create_11;
	// ROS2.NativeRclInterface/RclcsClockDispose ROS2.NativeRclInterface::rclcs_ros_clock_dispose
	RclcsClockDispose_tDE4246256AFCE3214E441466A84D08B4922CAE03* ___rclcs_ros_clock_dispose_12;
};

// ROS2.NativeRclInterface

// ROS2.NativeRmwInterface
struct NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_StaticFields
{
	// ROS2.DllLoadUtils ROS2.NativeRmwInterface::dllLoadUtils
	RuntimeObject* ___dllLoadUtils_0;
	// System.IntPtr ROS2.NativeRmwInterface::nativeRMW
	intptr_t ___nativeRMW_1;
	// ROS2.NativeRmwInterface/RMWImplementationIdentifier ROS2.NativeRmwInterface::rmw_native_interface_get_implementation_identifier
	RMWImplementationIdentifier_t7221E12FDDCCCC1D3CC320EDA66B945FA794AE37* ___rmw_native_interface_get_implementation_identifier_2;
	// ROS2.NativeRmwInterface/RMWNativeCreateQoSProfileIdentifierType ROS2.NativeRmwInterface::rmw_native_interface_create_qos_profile
	RMWNativeCreateQoSProfileIdentifierType_t86C350418729D57B100F216E31911830AE25AA97* ___rmw_native_interface_create_qos_profile_3;
	// ROS2.NativeRmwInterface/RMWNativeDeleteQoSProfileIdentifierType ROS2.NativeRmwInterface::rmw_native_interface_delete_qos_profile
	RMWNativeDeleteQoSProfileIdentifierType_t5D2957D69DB205D4F3537302627D3EEC7922BF74* ___rmw_native_interface_delete_qos_profile_4;
	// ROS2.NativeRmwInterface/RMWNativeSetHistoryIdentifierType ROS2.NativeRmwInterface::rmw_native_interface_set_history
	RMWNativeSetHistoryIdentifierType_t438821C2B73F2BC4261752F5A9FF236255879D42* ___rmw_native_interface_set_history_5;
	// ROS2.NativeRmwInterface/RMWNativeSetReliabilityIdentifierType ROS2.NativeRmwInterface::rmw_native_interface_set_reliability
	RMWNativeSetReliabilityIdentifierType_tFE846BDE4F0A5F243647D947A73C2694378E19A5* ___rmw_native_interface_set_reliability_6;
	// ROS2.NativeRmwInterface/RMWNativeSetDurabilityIdentifierType ROS2.NativeRmwInterface::rmw_native_interface_set_durability
	RMWNativeSetDurabilityIdentifierType_tC20DAC0CC312A9DAEBC318C441BC8203EE4E0D14* ___rmw_native_interface_set_durability_7;
};

// ROS2.NativeRmwInterface

// ROS2.Ros2cs
struct Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_StaticFields
{
	// ROS2.Ros2cs/Destructor ROS2.Ros2cs::destructor
	Destructor_t4467F647BC993F066B784EC268EFE0CBFD451D78* ___destructor_0;
	// System.Object ROS2.Ros2cs::mutex
	RuntimeObject* ___mutex_1;
	// System.Boolean ROS2.Ros2cs::initialized
	bool ___initialized_2;
	// ROS2.rcl_context_t ROS2.Ros2cs::global_context
	rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C ___global_context_3;
	// ROS2.rcl_allocator_t ROS2.Ros2cs::default_allocator
	rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831 ___default_allocator_4;
	// System.Collections.Generic.List`1<ROS2.INode> ROS2.Ros2cs::nodes
	List_1_tDD6E1C9A706EDC9B52011559C08EE6DB5044D953* ___nodes_5;
	// System.Boolean ROS2.Ros2cs::warned_once
	bool ___warned_once_6;
};

// ROS2.Ros2cs

// ROS2.Ros2csLogger
struct Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_StaticFields
{
	// ROS2.Ros2csLogger ROS2.Ros2csLogger::_instance
	Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D* ____instance_0;
	// System.Collections.Generic.Dictionary`2<ROS2.LogLevel,System.String> ROS2.Ros2csLogger::LevelNames
	Dictionary_2_tF4BD8E262191575AB12588F222EB1F74D30CC279* ___LevelNames_1;
	// ROS2.LogLevel ROS2.Ros2csLogger::<LogLevel>k__BackingField
	int32_t ___U3CLogLevelU3Ek__BackingField_2;
	// System.Collections.Generic.Dictionary`2<ROS2.LogLevel,ROS2.Ros2csLogger/Callback> ROS2.Ros2csLogger::LevelCallbacks
	Dictionary_2_t2C711015AA5938D6B94F90272468FF95F25556E8* ___LevelCallbacks_3;
	// System.Collections.Generic.Dictionary`2<ROS2.LogLevel,System.ConsoleColor> ROS2.Ros2csLogger::LevelColors
	Dictionary_2_tE21EA2A24D6CB3091176D6974BBF38ACF8330303* ___LevelColors_4;
};

// ROS2.Ros2csLogger

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// ROS2.Utils

// ROS2.Utils

// ROS2.WaitSet
struct WaitSet_tDE990309F026898B61B8C38ADEACEB84BABD94A7_StaticFields
{
	// ROS2.rcl_allocator_t ROS2.WaitSet::allocator
	rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831 ___allocator_0;
	// ROS2.rcl_wait_set_t ROS2.WaitSet::handle
	rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100 ___handle_1;
};

// ROS2.WaitSet

// ROS2.Ros2cs/Destructor

// ROS2.Ros2cs/Destructor

// System.Collections.Generic.List`1/Enumerator<ROS2.INode>

// System.Collections.Generic.List`1/Enumerator<ROS2.INode>

// System.Collections.Generic.HashSet`1/Enumerator<ROS2.IPublisherBase>

// System.Collections.Generic.HashSet`1/Enumerator<ROS2.IPublisherBase>

// System.Collections.Generic.HashSet`1/Enumerator<ROS2.ISubscriptionBase>

// System.Collections.Generic.HashSet`1/Enumerator<ROS2.ISubscriptionBase>

// System.Collections.Generic.List`1/Enumerator<ROS2.ISubscriptionBase>

// System.Collections.Generic.List`1/Enumerator<ROS2.ISubscriptionBase>

// System.Collections.Generic.HashSet`1/Enumerator<System.Object>

// System.Collections.Generic.HashSet`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

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

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// ROS2.RosTime

// ROS2.RosTime

// System.UInt32

// System.UInt32

// System.UInt64

// System.UInt64

// System.UIntPtr
struct UIntPtr_t_StaticFields
{
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;
};

// System.UIntPtr

// System.Void

// System.Void

// ROS2.Clock

// ROS2.Clock

// System.Delegate

// System.Delegate

// ROS2.QualityOfServiceProfile

// ROS2.QualityOfServiceProfile

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// ROS2.rcl_allocator_t

// ROS2.rcl_allocator_t

// ROS2.rcl_arguments_t

// ROS2.rcl_arguments_t

// ROS2.rcl_context_t

// ROS2.rcl_context_t

// ROS2.rcl_error_string_t

// ROS2.rcl_error_string_t

// ROS2.rcl_init_options_t

// ROS2.rcl_init_options_t

// ROS2.rcl_node_t

// ROS2.rcl_node_t

// ROS2.rcl_publisher_t

// ROS2.rcl_publisher_t

// ROS2.rcl_subscription_t

// ROS2.rcl_subscription_t

// ROS2.rcl_wait_set_t

// ROS2.rcl_wait_set_t

// ROS2.InvalidNamespaceException

// ROS2.InvalidNamespaceException

// ROS2.InvalidNodeNameException

// ROS2.InvalidNodeNameException

// ROS2.Node

// ROS2.Node

// ROS2.NotInitializedException

// ROS2.NotInitializedException

// ROS2.RuntimeError

// ROS2.RuntimeError

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

// ROS2.rcl_clock_t

// ROS2.rcl_clock_t

// System.AsyncCallback

// System.AsyncCallback

// System.InvalidOperationException

// System.InvalidOperationException

// ROS2.NativeRcl/ContextFiniType

// ROS2.NativeRcl/ContextFiniType

// ROS2.NativeRcl/ContextIsValidType

// ROS2.NativeRcl/ContextIsValidType

// ROS2.NativeRcl/GetZeroInitializedContextType

// ROS2.NativeRcl/GetZeroInitializedContextType

// ROS2.NativeRcl/GetZeroInitializedInitOptionsType

// ROS2.NativeRcl/GetZeroInitializedInitOptionsType

// ROS2.NativeRcl/GetZeroInitializedNodeType

// ROS2.NativeRcl/GetZeroInitializedNodeType

// ROS2.NativeRcl/GetZeroInitializedSubcriptionType

// ROS2.NativeRcl/GetZeroInitializedSubcriptionType

// ROS2.NativeRcl/GetZeroInitializedWaitSetType

// ROS2.NativeRcl/GetZeroInitializedWaitSetType

// ROS2.NativeRcl/GetZeroInitiazizedPublisherType

// ROS2.NativeRcl/GetZeroInitiazizedPublisherType

// ROS2.NativeRcl/InitOptionsInitType

// ROS2.NativeRcl/InitOptionsInitType

// ROS2.NativeRcl/InitType

// ROS2.NativeRcl/InitType

// ROS2.NativeRcl/NodeFiniType

// ROS2.NativeRcl/NodeFiniType

// ROS2.NativeRcl/NodeGetNameType

// ROS2.NativeRcl/NodeGetNameType

// ROS2.NativeRcl/NodeGetNamespaceType

// ROS2.NativeRcl/NodeGetNamespaceType

// ROS2.NativeRcl/NodeInitType

// ROS2.NativeRcl/NodeInitType

// ROS2.NativeRcl/PublishType

// ROS2.NativeRcl/PublishType

// ROS2.NativeRcl/PublisherFiniType

// ROS2.NativeRcl/PublisherFiniType

// ROS2.NativeRcl/PublisherGetDefaultOptionsType

// ROS2.NativeRcl/PublisherGetDefaultOptionsType

// ROS2.NativeRcl/PublisherInitType

// ROS2.NativeRcl/PublisherInitType

// ROS2.NativeRcl/RclClockGetNow

// ROS2.NativeRcl/RclClockGetNow

// ROS2.NativeRcl/RclGetDefaultAllocatorType

// ROS2.NativeRcl/RclGetDefaultAllocatorType

// ROS2.NativeRcl/ResetErrorType

// ROS2.NativeRcl/ResetErrorType

// ROS2.NativeRcl/ShutdownType

// ROS2.NativeRcl/ShutdownType

// ROS2.NativeRcl/SubscriptionFiniType

// ROS2.NativeRcl/SubscriptionFiniType

// ROS2.NativeRcl/SubscriptionInitType

// ROS2.NativeRcl/SubscriptionInitType

// ROS2.NativeRcl/SubscriptionIsValidType

// ROS2.NativeRcl/SubscriptionIsValidType

// ROS2.NativeRcl/TakeType

// ROS2.NativeRcl/TakeType

// ROS2.NativeRcl/WaitSetAddSubscriptionType

// ROS2.NativeRcl/WaitSetAddSubscriptionType

// ROS2.NativeRcl/WaitSetClearType

// ROS2.NativeRcl/WaitSetClearType

// ROS2.NativeRcl/WaitSetInitType

// ROS2.NativeRcl/WaitSetInitType

// ROS2.NativeRcl/WaitType

// ROS2.NativeRcl/WaitType

// ROS2.NativeRcl/WatiSetFiniType

// ROS2.NativeRcl/WatiSetFiniType

// ROS2.NativeRclInterface/DisposeErrorStringType

// ROS2.NativeRclInterface/DisposeErrorStringType

// ROS2.NativeRclInterface/GetErrorStringType

// ROS2.NativeRclInterface/GetErrorStringType

// ROS2.NativeRclInterface/NodeCreateDefaltOptionsType

// ROS2.NativeRclInterface/NodeCreateDefaltOptionsType

// ROS2.NativeRclInterface/NodeDisposeOptionsType

// ROS2.NativeRclInterface/NodeDisposeOptionsType

// ROS2.NativeRclInterface/PublisherCreateOptionsType

// ROS2.NativeRclInterface/PublisherCreateOptionsType

// ROS2.NativeRclInterface/PublisherDisposeOptionsType

// ROS2.NativeRclInterface/PublisherDisposeOptionsType

// ROS2.NativeRclInterface/RCLCSInitType

// ROS2.NativeRclInterface/RCLCSInitType

// ROS2.NativeRclInterface/RclcsClockCreate

// ROS2.NativeRclInterface/RclcsClockCreate

// ROS2.NativeRclInterface/RclcsClockDispose

// ROS2.NativeRclInterface/RclcsClockDispose

// ROS2.NativeRclInterface/SubscriptionCreateOptionsType

// ROS2.NativeRclInterface/SubscriptionCreateOptionsType

// ROS2.NativeRclInterface/SubscriptionDisposeOptionsType

// ROS2.NativeRclInterface/SubscriptionDisposeOptionsType

// ROS2.NativeRmwInterface/RMWImplementationIdentifier

// ROS2.NativeRmwInterface/RMWImplementationIdentifier

// ROS2.NativeRmwInterface/RMWNativeCreateQoSProfileIdentifierType

// ROS2.NativeRmwInterface/RMWNativeCreateQoSProfileIdentifierType

// ROS2.NativeRmwInterface/RMWNativeDeleteQoSProfileIdentifierType

// ROS2.NativeRmwInterface/RMWNativeDeleteQoSProfileIdentifierType

// ROS2.NativeRmwInterface/RMWNativeSetDurabilityIdentifierType

// ROS2.NativeRmwInterface/RMWNativeSetDurabilityIdentifierType

// ROS2.NativeRmwInterface/RMWNativeSetHistoryIdentifierType

// ROS2.NativeRmwInterface/RMWNativeSetHistoryIdentifierType

// ROS2.NativeRmwInterface/RMWNativeSetReliabilityIdentifierType

// ROS2.NativeRmwInterface/RMWNativeSetReliabilityIdentifierType
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
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 HashSet_1_GetEnumerator_m143B98FEED7E9CABA2C494AB2F04DAD60A504635_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFB582AEAA2E73F3128B5571197BEDE256A83F657_gshared (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.HashSet`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m27565F5ACCCC75C3DD34CC4CAE3E6AEFEB9144A6_gshared (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_Clear_m75A6528F0B47448EB3B3A05EC379260E9BDFC2DD_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mF1D84C0A2829DDA2A0CEE1D82A5B999B5F6627CB_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;

// ROS2.DllLoadUtils ROS2.DllLoadUtilsFactory::GetDllLoadUtils()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DllLoadUtilsFactory_GetDllLoadUtils_m8EB2D6E40DBF00ED8E25114CAABFFFCF16286775 (const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Delegate System.Runtime.InteropServices.Marshal::GetDelegateForFunctionPointer(System.IntPtr,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304 (intptr_t ___0_ptr, Type_t* ___1_t, const RuntimeMethod* method) ;
// System.String ROS2.Utils::PopRclErrorString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utils_PopRclErrorString_mAE90DE98A76531C78A9110AA2FEB593853C09289 (const RuntimeMethod* method) ;
// System.Void ROS2.InvalidNodeNameException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidNodeNameException__ctor_mE916006BB15ADBCEEA6C9C47074B3F7F3E54F2D4 (InvalidNodeNameException_t2B3B398B7A2DD047EF775BD9E221D29EA06B6AE5* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void ROS2.InvalidNamespaceException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidNamespaceException__ctor_m2A6F857F2093126B4976A3565547399AF88456DC (InvalidNamespaceException_tD2E1A2EA479047BAD9F8E4FB4D794491CBF11993* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void ROS2.RuntimeError::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeError__ctor_mB011851C8F7691243FFA41F38598D65512C02879 (RuntimeError_t642B93B4680822C51EF8CA1B918CAA84E4BE375C* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.IntPtr ROS2.NativeRclInterface/GetErrorStringType::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t GetErrorStringType_Invoke_mF682DB2C6231B00B54FC6BE368456DFC81000DA6_inline (GetErrorStringType_t453607676A6C388E6CBFDFD75F799FDA836851DD* __this, const RuntimeMethod* method) ;
// System.String ROS2.Utils::PtrToString(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utils_PtrToString_mCE2B96B740F655D1F150EED68843FAE759B87106 (intptr_t ___0_p, const RuntimeMethod* method) ;
// System.Void ROS2.NativeRclInterface/DisposeErrorStringType::Invoke(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DisposeErrorStringType_Invoke_mEAB6DDBFAFCFE029EBCFDEEF35FB1C65038FD3C9_inline (DisposeErrorStringType_tB0EB5ABA8F09AB9C18BCB301CABC0010FA27C990* __this, intptr_t ___0_error_c_string, const RuntimeMethod* method) ;
// System.String ROS2.Utils::GetRclErrorString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utils_GetRclErrorString_m6F27FEC35A46ADED61644CB41327F1C5847CCF79 (const RuntimeMethod* method) ;
// System.Void ROS2.NativeRcl/ResetErrorType::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ResetErrorType_Invoke_m4274612856ECEBA822B4AA2B15E7F75487C4713C_inline (ResetErrorType_t4D921B90107C97E83795A5C064D3691084BB81DC* __this, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271 (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.String System.Runtime.InteropServices.Marshal::PtrToStringAnsi(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Marshal_PtrToStringAnsi_m8DF88D9F22FCF791C538A36C9233B3882F579B4A (intptr_t ___0_ptr, const RuntimeMethod* method) ;
// System.Double ROS2.RosTime::get_Seconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double RosTime_get_Seconds_mFB337E8C3F2FA0FDA6D6E15C2C4E2525AD27EE98 (RosTime_t8921DCC752C891310CDDC28EE8F933399D8CCD44* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// ROS2.rcl_allocator_t ROS2.NativeRcl/RclGetDefaultAllocatorType::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831 RclGetDefaultAllocatorType_Invoke_m41CECCE737A7F68EADC9033A4463964A4E585096_inline (RclGetDefaultAllocatorType_t3073FF12B8067D85A753E0AED56D25D05214A994* __this, const RuntimeMethod* method) ;
// System.IntPtr ROS2.NativeRclInterface/RclcsClockCreate::Invoke(ROS2.rcl_allocator_t&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t RclcsClockCreate_Invoke_mFD077B5620145E54382E184E765F442842D53B28_inline (RclcsClockCreate_t7DE4D8ACB9FFEBA0D5B88B58E6C8C5A91AF86C4B* __this, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831* ___0_allocator_handle, const RuntimeMethod* method) ;
// System.Int32 ROS2.NativeRcl/RclClockGetNow::Invoke(System.IntPtr,System.Int64&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RclClockGetNow_Invoke_m00070791151C18FE1EB755A8E1C4400261330075_inline (RclClockGetNow_tE7C0124D0B68F9278C1BE9AA93083FBB57A442BD* __this, intptr_t ___0_ros_clock, int64_t* ___1_query_now, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void ROS2.Clock::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Clock_Dispose_m152EDA0A3D3520DE913EDCF77394AF64CA0CE608 (Clock_tC2F4680529BC5DFA8864474F920454F3CF7A7F0A* __this, const RuntimeMethod* method) ;
// System.Void ROS2.NativeRclInterface/RclcsClockDispose::Invoke(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RclcsClockDispose_Invoke_mB31FF352E25F02041B8C12B480B4AEA88827F56F_inline (RclcsClockDispose_tDE4246256AFCE3214E441466A84D08B4922CAE03* __this, intptr_t ___0_clock_handle, const RuntimeMethod* method) ;
// ROS2.Ros2csLogger ROS2.Ros2csLogger::GetInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D* Ros2csLogger_GetInstance_m1E6254F517D7424C914CDD20035721DD2A7E9C3B (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<ROS2.ISubscriptionBase>::.ctor()
inline void HashSet_1__ctor_m28EFE685C660394B031BF5F4505CA9B89472B982 (HashSet_1_t93DFD21E3FADFA2B1015453B87C88365793D5EA7* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t93DFD21E3FADFA2B1015453B87C88365793D5EA7*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<ROS2.IPublisherBase>::.ctor()
inline void HashSet_1__ctor_m8CAA5166B55902778454AD39F6086AA9CB6FD9E4 (HashSet_1_t84B08553CDF3D796DB788057B34FD5B0E857C6B4* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t84B08553CDF3D796DB788057B34FD5B0E857C6B4*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// ROS2.rcl_node_t ROS2.NativeRcl/GetZeroInitializedNodeType::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4 GetZeroInitializedNodeType_Invoke_m4971529E411B1A334F39F9BA27EBCC9EEEC44349_inline (GetZeroInitializedNodeType_tB2B66F53C164F56418A2C83367AE26F42B8F4E92* __this, const RuntimeMethod* method) ;
// System.IntPtr ROS2.NativeRclInterface/NodeCreateDefaltOptionsType::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t NodeCreateDefaltOptionsType_Invoke_m03EC69F947909616A6137C575C5EED4EC3A3B0BA_inline (NodeCreateDefaltOptionsType_t694FBD8C3D7CA67B641200A83CB864C8FD58787E* __this, const RuntimeMethod* method) ;
// System.Int32 ROS2.NativeRcl/NodeInitType::Invoke(ROS2.rcl_node_t&,System.String,System.String,ROS2.rcl_context_t&,System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NodeInitType_Invoke_mCD6B59F3B3FE2FB1353B8EA4DFA95066BBD629BD_inline (NodeInitType_t365D995BC724D5F7042E191CE9A4B13A5C3865C0* __this, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___0_node, String_t* ___1_name, String_t* ___2_node_namespace, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___3_context, intptr_t ___4_default_options, const RuntimeMethod* method) ;
// System.Void ROS2.Utils::CheckReturnEnum(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_CheckReturnEnum_m4F3CDB4D1DD633F528BFD99D5A245210AD36EF5E (int32_t ___0_ret, const RuntimeMethod* method) ;
// System.Void ROS2.Ros2csLogger::LogInfo(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ros2csLogger_LogInfo_mB16EAA697EAC0CB85D40761A18AC6B3023DCCD65 (Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<ROS2.ISubscriptionBase>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_t0B869009E71D4485E120F9AC81AE38A128A6EF9F* Enumerable_ToList_TisISubscriptionBase_tCD95FBCE3C6D4C86D95DEEA874AA4E01F914834D_mEC50A9AC6EB39445A02AD44CBABC38B3B63EB80F (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  List_1_t0B869009E71D4485E120F9AC81AE38A128A6EF9F* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared)(___0_source, method);
}
// System.Void ROS2.Node::DestroyNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_DestroyNode_mA12E1D4909A7D71CE3444DC22771F14EA6509290 (Node_t091203BA7C12AC4C2074891D81689DD9EC725A0D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<ROS2.ISubscriptionBase>::GetEnumerator()
inline Enumerator_t5BFFD485E919AC1FB05AC5738E10C72304D2FB1D HashSet_1_GetEnumerator_m4600FFA2C765C9CF4C33C6ADAFC923887150D062 (HashSet_1_t93DFD21E3FADFA2B1015453B87C88365793D5EA7* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t5BFFD485E919AC1FB05AC5738E10C72304D2FB1D (*) (HashSet_1_t93DFD21E3FADFA2B1015453B87C88365793D5EA7*, const RuntimeMethod*))HashSet_1_GetEnumerator_m143B98FEED7E9CABA2C494AB2F04DAD60A504635_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1/Enumerator<ROS2.ISubscriptionBase>::Dispose()
inline void Enumerator_Dispose_mE5DD7F24F9370BB0948486C0F78A6CF33B924350 (Enumerator_t5BFFD485E919AC1FB05AC5738E10C72304D2FB1D* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t5BFFD485E919AC1FB05AC5738E10C72304D2FB1D*, const RuntimeMethod*))Enumerator_Dispose_mFB582AEAA2E73F3128B5571197BEDE256A83F657_gshared)(__this, method);
}
// T System.Collections.Generic.HashSet`1/Enumerator<ROS2.ISubscriptionBase>::get_Current()
inline RuntimeObject* Enumerator_get_Current_mAA0480063E8FB91EA27DD04E45DF0AF607ADCA74_inline (Enumerator_t5BFFD485E919AC1FB05AC5738E10C72304D2FB1D* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t5BFFD485E919AC1FB05AC5738E10C72304D2FB1D*, const RuntimeMethod*))Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<ROS2.ISubscriptionBase>::MoveNext()
inline bool Enumerator_MoveNext_m346F12BECF0659EE21A644F599F0C5A603A8B293 (Enumerator_t5BFFD485E919AC1FB05AC5738E10C72304D2FB1D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t5BFFD485E919AC1FB05AC5738E10C72304D2FB1D*, const RuntimeMethod*))Enumerator_MoveNext_m27565F5ACCCC75C3DD34CC4CAE3E6AEFEB9144A6_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<ROS2.ISubscriptionBase>::Clear()
inline void HashSet_1_Clear_m1F4D321F386CC97DB29CA7DA8CA2024559968A69 (HashSet_1_t93DFD21E3FADFA2B1015453B87C88365793D5EA7* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t93DFD21E3FADFA2B1015453B87C88365793D5EA7*, const RuntimeMethod*))HashSet_1_Clear_m75A6528F0B47448EB3B3A05EC379260E9BDFC2DD_gshared)(__this, method);
}
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<ROS2.IPublisherBase>::GetEnumerator()
inline Enumerator_t88F60AB230D10BED893260C0F5CDB91F8779DA50 HashSet_1_GetEnumerator_mF4E967A756694C6CFE815008DD03BEFDFAA783C0 (HashSet_1_t84B08553CDF3D796DB788057B34FD5B0E857C6B4* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t88F60AB230D10BED893260C0F5CDB91F8779DA50 (*) (HashSet_1_t84B08553CDF3D796DB788057B34FD5B0E857C6B4*, const RuntimeMethod*))HashSet_1_GetEnumerator_m143B98FEED7E9CABA2C494AB2F04DAD60A504635_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1/Enumerator<ROS2.IPublisherBase>::Dispose()
inline void Enumerator_Dispose_m78C2CE373F5D5F7DD8483380401ECE285C51E8EC (Enumerator_t88F60AB230D10BED893260C0F5CDB91F8779DA50* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t88F60AB230D10BED893260C0F5CDB91F8779DA50*, const RuntimeMethod*))Enumerator_Dispose_mFB582AEAA2E73F3128B5571197BEDE256A83F657_gshared)(__this, method);
}
// T System.Collections.Generic.HashSet`1/Enumerator<ROS2.IPublisherBase>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m2925D36AB4A8EB97168ACF699BCCBAA4112CFB6A_inline (Enumerator_t88F60AB230D10BED893260C0F5CDB91F8779DA50* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t88F60AB230D10BED893260C0F5CDB91F8779DA50*, const RuntimeMethod*))Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<ROS2.IPublisherBase>::MoveNext()
inline bool Enumerator_MoveNext_mB26CE4E4A248B30807F78497557F446B0E220D11 (Enumerator_t88F60AB230D10BED893260C0F5CDB91F8779DA50* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t88F60AB230D10BED893260C0F5CDB91F8779DA50*, const RuntimeMethod*))Enumerator_MoveNext_m27565F5ACCCC75C3DD34CC4CAE3E6AEFEB9144A6_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<ROS2.IPublisherBase>::Clear()
inline void HashSet_1_Clear_m0568EBB2A54163D9B164FD68CE1319F247F5FB0E (HashSet_1_t84B08553CDF3D796DB788057B34FD5B0E857C6B4* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t84B08553CDF3D796DB788057B34FD5B0E857C6B4*, const RuntimeMethod*))HashSet_1_Clear_m75A6528F0B47448EB3B3A05EC379260E9BDFC2DD_gshared)(__this, method);
}
// System.Int32 ROS2.NativeRcl/NodeFiniType::Invoke(ROS2.rcl_node_t&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NodeFiniType_Invoke_mA4955F10BF547445FEEF088F34F2B874823921E6_inline (NodeFiniType_tA1CDE02D8B40017868A11938E7CDE8B6DF56F210* __this, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___0_node, const RuntimeMethod* method) ;
// System.Void ROS2.NativeRclInterface/NodeDisposeOptionsType::Invoke(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NodeDisposeOptionsType_Invoke_m835EF8D0C527904297A9967E2B7FEB2184C3DE6E_inline (NodeDisposeOptionsType_t15BDDEA610F9F4D00AC15F76577DB21C03EAF5F7* __this, intptr_t ___0_options, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<ROS2.IPublisherBase>::Contains(T)
inline bool HashSet_1_Contains_mBC61C0A6D78773A5CDBC43C1D24DF57224C27086 (HashSet_1_t84B08553CDF3D796DB788057B34FD5B0E857C6B4* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t84B08553CDF3D796DB788057B34FD5B0E857C6B4*, RuntimeObject*, const RuntimeMethod*))HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared)(__this, ___0_item, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<ROS2.IPublisherBase>::Remove(T)
inline bool HashSet_1_Remove_m55A9CC1846DE8F10FA46F38BC1796E994CAB42EA (HashSet_1_t84B08553CDF3D796DB788057B34FD5B0E857C6B4* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t84B08553CDF3D796DB788057B34FD5B0E857C6B4*, RuntimeObject*, const RuntimeMethod*))HashSet_1_Remove_mF1D84C0A2829DDA2A0CEE1D82A5B999B5F6627CB_gshared)(__this, ___0_item, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<ROS2.ISubscriptionBase>::Contains(T)
inline bool HashSet_1_Contains_m4605EB29B0FDBDF989998F85DC129B0BA0E96800 (HashSet_1_t93DFD21E3FADFA2B1015453B87C88365793D5EA7* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t93DFD21E3FADFA2B1015453B87C88365793D5EA7*, RuntimeObject*, const RuntimeMethod*))HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared)(__this, ___0_item, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<ROS2.ISubscriptionBase>::Remove(T)
inline bool HashSet_1_Remove_m6031362F0F0125121CDAC9BE6D56269083811942 (HashSet_1_t93DFD21E3FADFA2B1015453B87C88365793D5EA7* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t93DFD21E3FADFA2B1015453B87C88365793D5EA7*, RuntimeObject*, const RuntimeMethod*))HashSet_1_Remove_mF1D84C0A2829DDA2A0CEE1D82A5B999B5F6627CB_gshared)(__this, ___0_item, method);
}
// System.IntPtr ROS2.NativeRmwInterface/RMWNativeCreateQoSProfileIdentifierType::Invoke(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t RMWNativeCreateQoSProfileIdentifierType_Invoke_m719A1FA4411233308FBD0A52DD44DF51ADB12FA0_inline (RMWNativeCreateQoSProfileIdentifierType_t86C350418729D57B100F216E31911830AE25AA97* __this, int32_t ___0_preset_profile, const RuntimeMethod* method) ;
// System.Void ROS2.NativeRmwInterface/RMWNativeSetHistoryIdentifierType::Invoke(System.IntPtr,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RMWNativeSetHistoryIdentifierType_Invoke_mD19165DA0A5836757CDE8E627683D5431B79D486_inline (RMWNativeSetHistoryIdentifierType_t438821C2B73F2BC4261752F5A9FF236255879D42* __this, intptr_t ___0_profile, int32_t ___1_mode, int32_t ___2_depth, const RuntimeMethod* method) ;
// System.Void ROS2.NativeRmwInterface/RMWNativeSetReliabilityIdentifierType::Invoke(System.IntPtr,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RMWNativeSetReliabilityIdentifierType_Invoke_m0C867D84FBB2311D293FF704AE4E69BA487329FF_inline (RMWNativeSetReliabilityIdentifierType_tFE846BDE4F0A5F243647D947A73C2694378E19A5* __this, intptr_t ___0_profile, int32_t ___1_mode, const RuntimeMethod* method) ;
// System.Void ROS2.NativeRmwInterface/RMWNativeSetDurabilityIdentifierType::Invoke(System.IntPtr,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RMWNativeSetDurabilityIdentifierType_Invoke_m37BD9B13755DD7B4C13114176D323EAD0AE802E3_inline (RMWNativeSetDurabilityIdentifierType_tC20DAC0CC312A9DAEBC318C441BC8203EE4E0D14* __this, intptr_t ___0_profile, int32_t ___1_mode, const RuntimeMethod* method) ;
// ROS2.rcl_context_t ROS2.NativeRcl/GetZeroInitializedContextType::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C GetZeroInitializedContextType_Invoke_m7072D60BE53253063BD08973B4317F9C57538D39_inline (GetZeroInitializedContextType_t04171F8770DA4190523F40E24D627320BEE692D6* __this, const RuntimeMethod* method) ;
// System.Int32 ROS2.NativeRclInterface/RCLCSInitType::Invoke(ROS2.rcl_context_t&,ROS2.rcl_allocator_t)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RCLCSInitType_Invoke_m0F244268FB97A1EC69BAE44FBD0BB9C201DF4E42_inline (RCLCSInitType_t98BFF379AE54A896A681209B70D41C4504AF733F* __this, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___0_context, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831 ___1_allocator, const RuntimeMethod* method) ;
// System.IntPtr ROS2.NativeRmwInterface/RMWImplementationIdentifier::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t RMWImplementationIdentifier_Invoke_m2798432969B3FDB239028F2CCE63EA679D73EBD7_inline (RMWImplementationIdentifier_t7221E12FDDCCCC1D3CC320EDA66B945FA794AE37* __this, const RuntimeMethod* method) ;
// System.Int32 ROS2.NativeRcl/ShutdownType::Invoke(ROS2.rcl_context_t&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ShutdownType_Invoke_mA18C5013CED464580638857F255A520DEDD59EFC_inline (ShutdownType_t4FB0976CC98794F41196FD3CC575CAC576F438CA* __this, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___0_context, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<ROS2.INode>::GetEnumerator()
inline Enumerator_tE4970469CF181052A9B4F9A0784FD2B70EE25314 List_1_GetEnumerator_mB772E9A11089BC01C355EBDB0DC4E27E08CD0182 (List_1_tDD6E1C9A706EDC9B52011559C08EE6DB5044D953* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tE4970469CF181052A9B4F9A0784FD2B70EE25314 (*) (List_1_tDD6E1C9A706EDC9B52011559C08EE6DB5044D953*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<ROS2.INode>::Dispose()
inline void Enumerator_Dispose_m2049E8ADCBDFF0C3A5923266E34854C17641E422 (Enumerator_tE4970469CF181052A9B4F9A0784FD2B70EE25314* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tE4970469CF181052A9B4F9A0784FD2B70EE25314*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<ROS2.INode>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m029D491365B735630C632DDE207AE18F496B4FCC_inline (Enumerator_tE4970469CF181052A9B4F9A0784FD2B70EE25314* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_tE4970469CF181052A9B4F9A0784FD2B70EE25314*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<ROS2.INode>::MoveNext()
inline bool Enumerator_MoveNext_m2A8BC35161E48CCDE8D7C310269082ACD4A85794 (Enumerator_tE4970469CF181052A9B4F9A0784FD2B70EE25314* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tE4970469CF181052A9B4F9A0784FD2B70EE25314*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<ROS2.INode>::Clear()
inline void List_1_Clear_m4C0DB9B46210C00A6CEFD3DE16A618503953E791_inline (List_1_tDD6E1C9A706EDC9B52011559C08EE6DB5044D953* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDD6E1C9A706EDC9B52011559C08EE6DB5044D953*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Boolean ROS2.NativeRcl/ContextIsValidType::Invoke(ROS2.rcl_context_t&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ContextIsValidType_Invoke_m27DC66426F72978C16FCB3F2281290538D1E02B8_inline (ContextIsValidType_t221B25824BF034AA390D02239F461440F4C6AFF9* __this, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___0_context, const RuntimeMethod* method) ;
// System.Boolean ROS2.Ros2cs::Ok()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ros2cs_Ok_mCBF1F5567BD5AC76648366C7BCE560310CA9B2D4 (const RuntimeMethod* method) ;
// System.Void ROS2.Ros2csLogger::LogError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ros2csLogger_LogError_mA0DE7B246DFEE60AC35F45ED985CD4FD8B2132CB (Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void ROS2.NotInitializedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotInitializedException__ctor_m46353248D56FD91C0B6A4B1AE0D19D5CA0A7D7A7 (NotInitializedException_t50A36E084A8A7B49F17EB63CEF13167336C53EAC* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void ROS2.Node::.ctor(System.String,ROS2.rcl_context_t&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node__ctor_mF9C64070A243DB4627A01DDE8964A4149380293B (Node_t091203BA7C12AC4C2074891D81689DD9EC725A0D* __this, String_t* ___0_nodeName, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___1_context, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<ROS2.INode>::Add(T)
inline void List_1_Add_m777C47D3E9AEC62DC26C78FF09B7AEE3A3705DB0_inline (List_1_tDD6E1C9A706EDC9B52011559C08EE6DB5044D953* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDD6E1C9A706EDC9B52011559C08EE6DB5044D953*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Boolean System.Collections.Generic.List`1<ROS2.INode>::Remove(T)
inline bool List_1_Remove_m71D00A3CB381B1DFE493596596AEA6E2FBF85750 (List_1_tDD6E1C9A706EDC9B52011559C08EE6DB5044D953* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tDD6E1C9A706EDC9B52011559C08EE6DB5044D953*, RuntimeObject*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<ROS2.INode>::.ctor()
inline void List_1__ctor_m9245ADF5113E1C633538F94C98894CAAE7B96C31 (List_1_tDD6E1C9A706EDC9B52011559C08EE6DB5044D953* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDD6E1C9A706EDC9B52011559C08EE6DB5044D953*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void ROS2.Ros2cs::Spin(System.Collections.Generic.List`1<ROS2.INode>,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ros2cs_Spin_m9FFBBF14D708D41FB3C8672E92D16CBA2EF2289B (List_1_tDD6E1C9A706EDC9B52011559C08EE6DB5044D953* ___0_nodes, double ___1_timeoutSec, const RuntimeMethod* method) ;
// System.Void ROS2.Ros2cs::SpinOnce(System.Collections.Generic.List`1<ROS2.INode>,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ros2cs_SpinOnce_mEF0341A878C8300783FDFEED687F2C657C60112D (List_1_tDD6E1C9A706EDC9B52011559C08EE6DB5044D953* ___0_nodes, double ___1_timeoutSec, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<ROS2.ISubscriptionBase>::.ctor()
inline void List_1__ctor_m78AA1AFFC92FF7B376A3F4C52040342CB0E0483C (List_1_t0B869009E71D4485E120F9AC81AE38A128A6EF9F* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0B869009E71D4485E120F9AC81AE38A128A6EF9F*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Collections.Generic.List`1<ROS2.ISubscriptionBase> ROS2.Node::get_Subscriptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t0B869009E71D4485E120F9AC81AE38A128A6EF9F* Node_get_Subscriptions_mE8CB73008BF0BE009E3FF5912C54837F2E079492 (Node_t091203BA7C12AC4C2074891D81689DD9EC725A0D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<ROS2.ISubscriptionBase>::GetEnumerator()
inline Enumerator_t62EAD83F8CBB42DDEBDF46D3836DE26146A3F0CA List_1_GetEnumerator_mF36FA17864321D4079BA826AD75B968F183F7662 (List_1_t0B869009E71D4485E120F9AC81AE38A128A6EF9F* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t62EAD83F8CBB42DDEBDF46D3836DE26146A3F0CA (*) (List_1_t0B869009E71D4485E120F9AC81AE38A128A6EF9F*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<ROS2.ISubscriptionBase>::Dispose()
inline void Enumerator_Dispose_mD8E9CE1E37A3643B72B8196FAD9743E0A96F4CF8 (Enumerator_t62EAD83F8CBB42DDEBDF46D3836DE26146A3F0CA* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t62EAD83F8CBB42DDEBDF46D3836DE26146A3F0CA*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<ROS2.ISubscriptionBase>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m08C50BB63F4AEB02BE425F1AC5A03ADBCB32831F_inline (Enumerator_t62EAD83F8CBB42DDEBDF46D3836DE26146A3F0CA* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t62EAD83F8CBB42DDEBDF46D3836DE26146A3F0CA*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<ROS2.ISubscriptionBase>::Add(T)
inline void List_1_Add_mF9B2D81207551005D9C14E334D82D0EA90831B53_inline (List_1_t0B869009E71D4485E120F9AC81AE38A128A6EF9F* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0B869009E71D4485E120F9AC81AE38A128A6EF9F*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<ROS2.ISubscriptionBase>::MoveNext()
inline bool Enumerator_MoveNext_m55015920D75F6C3F975BA20AB217EB351A55CC76 (Enumerator_t62EAD83F8CBB42DDEBDF46D3836DE26146A3F0CA* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t62EAD83F8CBB42DDEBDF46D3836DE26146A3F0CA*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void ROS2.WaitSet::Wait(ROS2.rcl_context_t,System.Collections.Generic.List`1<ROS2.ISubscriptionBase>,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitSet_Wait_mC1125CDBCA3628A40ED64B851D70E9013C594858 (rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C ___0_context, List_1_t0B869009E71D4485E120F9AC81AE38A128A6EF9F* ___1_subscriptions, double ___2_timeoutSec, const RuntimeMethod* method) ;
// System.Void ROS2.Ros2cs/Destructor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Destructor__ctor_mD243064E083C8E8D3CF643EFB77CD9B875DCDB73 (Destructor_t4467F647BC993F066B784EC268EFE0CBFD451D78* __this, const RuntimeMethod* method) ;
// System.Void ROS2.Ros2cs::Shutdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ros2cs_Shutdown_mC6D21423F0C5ABF86E21EFFD2F858B35DCF429AA (const RuntimeMethod* method) ;
// System.Int32 ROS2.NativeRcl/ContextFiniType::Invoke(ROS2.rcl_context_t&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ContextFiniType_Invoke_mF3D3B7CDAAC699F416FFECA74785DDF3D27ED525_inline (ContextFiniType_tDE6339FF3B53ECB6B5F180CA0660BE5C0770793F* __this, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___0_context, const RuntimeMethod* method) ;
// ROS2.rcl_wait_set_t ROS2.NativeRcl/GetZeroInitializedWaitSetType::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100 GetZeroInitializedWaitSetType_Invoke_mD8C5981A1D566582BCF6BC81F4633B86C1BA5608_inline (GetZeroInitializedWaitSetType_t6399F00A6BBAE1E21B97BDCF19BD380C1D53C9CC* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<ROS2.ISubscriptionBase>::get_Count()
inline int32_t List_1_get_Count_mA4C4836FB546B25F21A978B1DA393120962C4B81_inline (List_1_t0B869009E71D4485E120F9AC81AE38A128A6EF9F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t0B869009E71D4485E120F9AC81AE38A128A6EF9F*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Int32 ROS2.NativeRcl/WaitSetInitType::Invoke(ROS2.rcl_wait_set_t&,System.UInt64,System.UInt64,System.UInt64,System.UInt64,System.UInt64,System.UInt64,ROS2.rcl_context_t&,ROS2.rcl_allocator_t)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WaitSetInitType_Invoke_mFC58972C6405B961C2D4940FFD3AAC195163606A_inline (WaitSetInitType_t87E1D05131F194FAB01E72C1A03A0A2538C411AA* __this, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100* ___0_wait_set, uint64_t ___1_number_of_subscriptions, uint64_t ___2_number_of_guard_conditions, uint64_t ___3_number_of_timers, uint64_t ___4_number_of_clients, uint64_t ___5_number_of_services, uint64_t ___6_number_of_events, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___7_context, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831 ___8_allocator, const RuntimeMethod* method) ;
// System.Int32 ROS2.NativeRcl/WaitSetClearType::Invoke(ROS2.rcl_wait_set_t&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WaitSetClearType_Invoke_m818BAE5F8DB2F99D6F09BE7029C71F2B4793D9B2_inline (WaitSetClearType_t86E1B05E31A40014E169F1C9624369F6A48ADA80* __this, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100* ___0_wait_set, const RuntimeMethod* method) ;
// System.Int32 ROS2.NativeRcl/WaitSetAddSubscriptionType::Invoke(ROS2.rcl_wait_set_t&,ROS2.rcl_subscription_t&,System.UIntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WaitSetAddSubscriptionType_Invoke_mA77D86858C855053761227229392939A597DB410_inline (WaitSetAddSubscriptionType_tB952F7946A7A06C27D970D1F8A28089434E2F4B4* __this, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100* ___0_wait_set, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD* ___1_subscription, uintptr_t ___2_index, const RuntimeMethod* method) ;
// System.Int32 ROS2.NativeRcl/WaitType::Invoke(ROS2.rcl_wait_set_t&,System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WaitType_Invoke_mF1701861B4823AEEAAD6DDCBAE32A4FE9DB3334A_inline (WaitType_t835E7382D2E046BD4590666AF95A16BFA8C85E01* __this, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100* ___0_wait_set, uint64_t ___1_timeout, const RuntimeMethod* method) ;
// System.Int32 ROS2.NativeRcl/WatiSetFiniType::Invoke(ROS2.rcl_wait_set_t&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WatiSetFiniType_Invoke_m26EFD42CC7F1B0A4D17869E521AFA2B15977A8CC_inline (WatiSetFiniType_tA3F438CE346815BF7ACA429F3EA9DB3556560FCC* __this, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100* ___0_wait_set, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
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
// System.Void ROS2.NativeRcl::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeRcl__cctor_mA9EA811B221868979E62F35487DD8AEA85CA9F97 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContextFiniType_tDE6339FF3B53ECB6B5F180CA0660BE5C0770793F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContextFiniType_tDE6339FF3B53ECB6B5F180CA0660BE5C0770793F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContextIsValidType_t221B25824BF034AA390D02239F461440F4C6AFF9_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContextIsValidType_t221B25824BF034AA390D02239F461440F4C6AFF9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetZeroInitializedContextType_t04171F8770DA4190523F40E24D627320BEE692D6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetZeroInitializedContextType_t04171F8770DA4190523F40E24D627320BEE692D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetZeroInitializedInitOptionsType_t672F00F3D9BAA9869AB5BCC51F11F37D7A068AF2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetZeroInitializedInitOptionsType_t672F00F3D9BAA9869AB5BCC51F11F37D7A068AF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetZeroInitializedNodeType_tB2B66F53C164F56418A2C83367AE26F42B8F4E92_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetZeroInitializedNodeType_tB2B66F53C164F56418A2C83367AE26F42B8F4E92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetZeroInitializedSubcriptionType_tB15A38BFDD3D25B480ABD8275A9523A87001337D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetZeroInitializedSubcriptionType_tB15A38BFDD3D25B480ABD8275A9523A87001337D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetZeroInitializedWaitSetType_t6399F00A6BBAE1E21B97BDCF19BD380C1D53C9CC_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetZeroInitializedWaitSetType_t6399F00A6BBAE1E21B97BDCF19BD380C1D53C9CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetZeroInitiazizedPublisherType_t01F144F0515432B1C3F325276AA671B750E8629D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetZeroInitiazizedPublisherType_t01F144F0515432B1C3F325276AA671B750E8629D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitOptionsInitType_t7CCFE47E2867A249ED36CE9D134E83FE296EF91E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitOptionsInitType_t7CCFE47E2867A249ED36CE9D134E83FE296EF91E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitType_t332D494FBA92CD10754698D41BD5954D3CF77B8B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitType_t332D494FBA92CD10754698D41BD5954D3CF77B8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NodeFiniType_tA1CDE02D8B40017868A11938E7CDE8B6DF56F210_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NodeFiniType_tA1CDE02D8B40017868A11938E7CDE8B6DF56F210_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NodeGetNameType_t2D236E111C5F4170456B73FA899F7B3E62D48E31_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NodeGetNameType_t2D236E111C5F4170456B73FA899F7B3E62D48E31_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NodeGetNamespaceType_t30FA5A59AE1F125ECA0B826562E15819F9F2AED0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NodeGetNamespaceType_t30FA5A59AE1F125ECA0B826562E15819F9F2AED0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NodeInitType_t365D995BC724D5F7042E191CE9A4B13A5C3865C0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NodeInitType_t365D995BC724D5F7042E191CE9A4B13A5C3865C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PublishType_t85AE05C7B1E15E993E7977AE925CBEED7B0A80E0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PublishType_t85AE05C7B1E15E993E7977AE925CBEED7B0A80E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PublisherFiniType_t29E6144CCBA0F6A8AC0CC5BAA12C50B7CAE3658B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PublisherFiniType_t29E6144CCBA0F6A8AC0CC5BAA12C50B7CAE3658B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PublisherGetDefaultOptionsType_tF64AECD0842363AFF4C4B902D90A28492CEF5BA1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PublisherGetDefaultOptionsType_tF64AECD0842363AFF4C4B902D90A28492CEF5BA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PublisherInitType_t0B6F34AF630DBB00D974207F5B6275F836349FF6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PublisherInitType_t0B6F34AF630DBB00D974207F5B6275F836349FF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RclClockGetNow_tE7C0124D0B68F9278C1BE9AA93083FBB57A442BD_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RclClockGetNow_tE7C0124D0B68F9278C1BE9AA93083FBB57A442BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RclGetDefaultAllocatorType_t3073FF12B8067D85A753E0AED56D25D05214A994_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RclGetDefaultAllocatorType_t3073FF12B8067D85A753E0AED56D25D05214A994_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResetErrorType_t4D921B90107C97E83795A5C064D3691084BB81DC_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResetErrorType_t4D921B90107C97E83795A5C064D3691084BB81DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShutdownType_t4FB0976CC98794F41196FD3CC575CAC576F438CA_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShutdownType_t4FB0976CC98794F41196FD3CC575CAC576F438CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubscriptionFiniType_t50087884E3CF041D8642AC77956FFD362358A620_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubscriptionFiniType_t50087884E3CF041D8642AC77956FFD362358A620_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubscriptionInitType_t5D9745916CE3038181964DA68957FF6B8C13222A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubscriptionInitType_t5D9745916CE3038181964DA68957FF6B8C13222A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubscriptionIsValidType_tBAA19362E8D32CF2D87A459D0BBBC6D1B380AD7A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubscriptionIsValidType_tBAA19362E8D32CF2D87A459D0BBBC6D1B380AD7A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TakeType_tD0132705DD1D245C5C1D36705B201977F5B0B006_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TakeType_tD0132705DD1D245C5C1D36705B201977F5B0B006_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitSetAddSubscriptionType_tB952F7946A7A06C27D970D1F8A28089434E2F4B4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitSetAddSubscriptionType_tB952F7946A7A06C27D970D1F8A28089434E2F4B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitSetClearType_t86E1B05E31A40014E169F1C9624369F6A48ADA80_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitSetClearType_t86E1B05E31A40014E169F1C9624369F6A48ADA80_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitSetInitType_t87E1D05131F194FAB01E72C1A03A0A2538C411AA_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitSetInitType_t87E1D05131F194FAB01E72C1A03A0A2538C411AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitType_t835E7382D2E046BD4590666AF95A16BFA8C85E01_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitType_t835E7382D2E046BD4590666AF95A16BFA8C85E01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WatiSetFiniType_tA3F438CE346815BF7ACA429F3EA9DB3556560FCC_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WatiSetFiniType_tA3F438CE346815BF7ACA429F3EA9DB3556560FCC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27D1FC6AA0FCE574F7B38244BC13C62DA2A65957);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29F5D4773DD98E9FEB3D279C8D79BA7843DE09A6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F30C8A7DEF5018A1FF837543E457575A2278042);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral417B5B6499819685DF498F3683388ED2DBA81B2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4310C4CCEAE0445F6834387B7996C7C7447AD99F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral491E0281B62F2DBA66200376D63B7F6101A96FD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral514B7A1012F2BCBDE6CBEF474A8E77A0BEA27AAF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral516D139866F77B7894C29F52E0A0B61DB7F90BE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5198B2C1B713858BC3CB6685F47A3A6EA8E504D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52DFF640C220B0A0F961BA313FC9AC8666B9C0F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52FD8F8C79B0A4924F84C1C6C26D96CEC8AD6ABF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CA49DEA4C28AE04737385C631A49918D5462A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66A654213BFF7E4C3758C06B20C298BF8F221129);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral775F131A7E94D6F7B340CFE5736ED45C40E0D4BA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A08CECE5BCD6BBF5F1AD9999091BEEC5ED2D076);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CFE25D28348900C67CBAC353F8895E135E3ECEE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D34104EC96BE07CEB7D418617550268D59AA87D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral857C0E92DE22D5DA9AEED6D637EDF1F0FCA10462);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E5045210C104D954F336B7AD8A20EEA79E7C0FB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8EE83DD5E777E939DF480E9C65C2EDF0B643EB7D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9520CF27629ABD8DFD7594796F3257428D305A59);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral959FBE534E503E929D23E8D9B7BB033CE2DD090C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A53676D98B36CD3B76E8419667229AED5927FCF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralACE6A81F3CA291FD1F8A411989CB8F89CD3A57F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAEAB58AFDD426373778234F3F415E41737B5B215);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB67DD686FE6E103072F214AA790B8D5B95A9476);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9D87388A027C1516BC7BE9AC617A13F0B98A19);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5D7181FD60D5BFC4EB831DF7D2250FFB07B7F55);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCD29A1AF71FB019A50817ABF96E90377B1A4998);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD621F65A233781127E7E1DDE814EE293E7E8C57);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3B303BB2205CDB2E0512B68553256028ADA06C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD89F98299A4090BFBA6397AEE93A7F1ABF71E3EF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0F85D2D24488A8A4646C7E756E230A116A8DE6C);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = DllLoadUtilsFactory_GetDllLoadUtils_m8EB2D6E40DBF00ED8E25114CAABFFFCF16286775(NULL);
		((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___dllLoadUtils_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___dllLoadUtils_0), (void*)L_0);
		RuntimeObject* L_1 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___dllLoadUtils_0;
		NullCheck(L_1);
		intptr_t L_2;
		L_2 = InterfaceFuncInvoker1< intptr_t, String_t* >::Invoke(1 /* System.IntPtr ROS2.DllLoadUtils::LoadLibraryNoSuffix(System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_1, _stringLiteral66A654213BFF7E4C3758C06B20C298BF8F221129);
		((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___nativeRCL_1 = L_2;
		RuntimeObject* L_3 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___dllLoadUtils_0;
		NullCheck(L_3);
		intptr_t L_4;
		L_4 = InterfaceFuncInvoker1< intptr_t, String_t* >::Invoke(1 /* System.IntPtr ROS2.DllLoadUtils::LoadLibraryNoSuffix(System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_3, _stringLiteralCCD29A1AF71FB019A50817ABF96E90377B1A4998);
		((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___nativeRCUtils_2 = L_4;
		RuntimeObject* L_5 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___dllLoadUtils_0;
		intptr_t L_6 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___nativeRCL_1;
		NullCheck(L_5);
		intptr_t L_7;
		L_7 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_5, L_6, _stringLiteral514B7A1012F2BCBDE6CBEF474A8E77A0BEA27AAF);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (GetZeroInitializedContextType_t04171F8770DA4190523F40E24D627320BEE692D6_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Delegate_t* L_10;
		L_10 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_7, L_9, NULL);
		((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_get_zero_initialized_context_3 = ((GetZeroInitializedContextType_t04171F8770DA4190523F40E24D627320BEE692D6*)CastclassSealed((RuntimeObject*)L_10, GetZeroInitializedContextType_t04171F8770DA4190523F40E24D627320BEE692D6_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_get_zero_initialized_context_3), (void*)((GetZeroInitializedContextType_t04171F8770DA4190523F40E24D627320BEE692D6*)CastclassSealed((RuntimeObject*)L_10, GetZeroInitializedContextType_t04171F8770DA4190523F40E24D627320BEE692D6_il2cpp_TypeInfo_var)));
		RuntimeObject* L_11 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___dllLoadUtils_0;
		intptr_t L_12 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___nativeRCL_1;
		NullCheck(L_11);
		intptr_t L_13;
		L_13 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_11, L_12, _stringLiteral7D34104EC96BE07CEB7D418617550268D59AA87D);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (GetZeroInitializedInitOptionsType_t672F00F3D9BAA9869AB5BCC51F11F37D7A068AF2_0_0_0_var) };
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		Delegate_t* L_16;
		L_16 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_13, L_15, NULL);
		((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_get_zero_initialized_init_options_4 = ((GetZeroInitializedInitOptionsType_t672F00F3D9BAA9869AB5BCC51F11F37D7A068AF2*)CastclassSealed((RuntimeObject*)L_16, GetZeroInitializedInitOptionsType_t672F00F3D9BAA9869AB5BCC51F11F37D7A068AF2_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_get_zero_initialized_init_options_4), (void*)((GetZeroInitializedInitOptionsType_t672F00F3D9BAA9869AB5BCC51F11F37D7A068AF2*)CastclassSealed((RuntimeObject*)L_16, GetZeroInitializedInitOptionsType_t672F00F3D9BAA9869AB5BCC51F11F37D7A068AF2_il2cpp_TypeInfo_var)));
		RuntimeObject* L_17 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___dllLoadUtils_0;
		intptr_t L_18 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___nativeRCL_1;
		NullCheck(L_17);
		intptr_t L_19;
		L_19 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_17, L_18, _stringLiteral27D1FC6AA0FCE574F7B38244BC13C62DA2A65957);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (InitOptionsInitType_t7CCFE47E2867A249ED36CE9D134E83FE296EF91E_0_0_0_var) };
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
		Delegate_t* L_22;
		L_22 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_19, L_21, NULL);
		((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_init_options_init_5 = ((InitOptionsInitType_t7CCFE47E2867A249ED36CE9D134E83FE296EF91E*)CastclassSealed((RuntimeObject*)L_22, InitOptionsInitType_t7CCFE47E2867A249ED36CE9D134E83FE296EF91E_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_init_options_init_5), (void*)((InitOptionsInitType_t7CCFE47E2867A249ED36CE9D134E83FE296EF91E*)CastclassSealed((RuntimeObject*)L_22, InitOptionsInitType_t7CCFE47E2867A249ED36CE9D134E83FE296EF91E_il2cpp_TypeInfo_var)));
		RuntimeObject* L_23 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___dllLoadUtils_0;
		intptr_t L_24 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___nativeRCL_1;
		NullCheck(L_23);
		intptr_t L_25;
		L_25 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_23, L_24, _stringLiteral516D139866F77B7894C29F52E0A0B61DB7F90BE1);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (ShutdownType_t4FB0976CC98794F41196FD3CC575CAC576F438CA_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		Delegate_t* L_28;
		L_28 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_25, L_27, NULL);
		((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_shutdown_6 = ((ShutdownType_t4FB0976CC98794F41196FD3CC575CAC576F438CA*)CastclassSealed((RuntimeObject*)L_28, ShutdownType_t4FB0976CC98794F41196FD3CC575CAC576F438CA_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_shutdown_6), (void*)((ShutdownType_t4FB0976CC98794F41196FD3CC575CAC576F438CA*)CastclassSealed((RuntimeObject*)L_28, ShutdownType_t4FB0976CC98794F41196FD3CC575CAC576F438CA_il2cpp_TypeInfo_var)));
		RuntimeObject* L_29 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___dllLoadUtils_0;
		intptr_t L_30 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___nativeRCL_1;
		NullCheck(L_29);
		intptr_t L_31;
		L_31 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_29, L_30, _stringLiteral8EE83DD5E777E939DF480E9C65C2EDF0B643EB7D);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_32 = { reinterpret_cast<intptr_t> (ContextIsValidType_t221B25824BF034AA390D02239F461440F4C6AFF9_0_0_0_var) };
		Type_t* L_33;
		L_33 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_32, NULL);
		Delegate_t* L_34;
		L_34 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_31, L_33, NULL);
		((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_context_is_valid_7 = ((ContextIsValidType_t221B25824BF034AA390D02239F461440F4C6AFF9*)CastclassSealed((RuntimeObject*)L_34, ContextIsValidType_t221B25824BF034AA390D02239F461440F4C6AFF9_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_context_is_valid_7), (void*)((ContextIsValidType_t221B25824BF034AA390D02239F461440F4C6AFF9*)CastclassSealed((RuntimeObject*)L_34, ContextIsValidType_t221B25824BF034AA390D02239F461440F4C6AFF9_il2cpp_TypeInfo_var)));
		RuntimeObject* L_35 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___dllLoadUtils_0;
		intptr_t L_36 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___nativeRCL_1;
		NullCheck(L_35);
		intptr_t L_37;
		L_37 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_35, L_36, _stringLiteral491E0281B62F2DBA66200376D63B7F6101A96FD1);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_38 = { reinterpret_cast<intptr_t> (InitType_t332D494FBA92CD10754698D41BD5954D3CF77B8B_0_0_0_var) };
		Type_t* L_39;
		L_39 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_38, NULL);
		Delegate_t* L_40;
		L_40 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_37, L_39, NULL);
		((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_init_8 = ((InitType_t332D494FBA92CD10754698D41BD5954D3CF77B8B*)CastclassSealed((RuntimeObject*)L_40, InitType_t332D494FBA92CD10754698D41BD5954D3CF77B8B_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_init_8), (void*)((InitType_t332D494FBA92CD10754698D41BD5954D3CF77B8B*)CastclassSealed((RuntimeObject*)L_40, InitType_t332D494FBA92CD10754698D41BD5954D3CF77B8B_il2cpp_TypeInfo_var)));
		RuntimeObject* L_41 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___dllLoadUtils_0;
		intptr_t L_42 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___nativeRCL_1;
		NullCheck(L_41);
		intptr_t L_43;
		L_43 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_41, L_42, _stringLiteral775F131A7E94D6F7B340CFE5736ED45C40E0D4BA);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_44 = { reinterpret_cast<intptr_t> (ContextFiniType_tDE6339FF3B53ECB6B5F180CA0660BE5C0770793F_0_0_0_var) };
		Type_t* L_45;
		L_45 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_44, NULL);
		Delegate_t* L_46;
		L_46 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_43, L_45, NULL);
		((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_context_fini_9 = ((ContextFiniType_tDE6339FF3B53ECB6B5F180CA0660BE5C0770793F*)CastclassSealed((RuntimeObject*)L_46, ContextFiniType_tDE6339FF3B53ECB6B5F180CA0660BE5C0770793F_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_context_fini_9), (void*)((ContextFiniType_tDE6339FF3B53ECB6B5F180CA0660BE5C0770793F*)CastclassSealed((RuntimeObject*)L_46, ContextFiniType_tDE6339FF3B53ECB6B5F180CA0660BE5C0770793F_il2cpp_TypeInfo_var)));
		RuntimeObject* L_47 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___dllLoadUtils_0;
		intptr_t L_48 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___nativeRCL_1;
		NullCheck(L_47);
		intptr_t L_49;
		L_49 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_47, L_48, _stringLiteralD89F98299A4090BFBA6397AEE93A7F1ABF71E3EF);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_50 = { reinterpret_cast<intptr_t> (GetZeroInitializedNodeType_tB2B66F53C164F56418A2C83367AE26F42B8F4E92_0_0_0_var) };
		Type_t* L_51;
		L_51 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_50, NULL);
		Delegate_t* L_52;
		L_52 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_49, L_51, NULL);
		((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_get_zero_initialized_node_10 = ((GetZeroInitializedNodeType_tB2B66F53C164F56418A2C83367AE26F42B8F4E92*)CastclassSealed((RuntimeObject*)L_52, GetZeroInitializedNodeType_tB2B66F53C164F56418A2C83367AE26F42B8F4E92_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_get_zero_initialized_node_10), (void*)((GetZeroInitializedNodeType_tB2B66F53C164F56418A2C83367AE26F42B8F4E92*)CastclassSealed((RuntimeObject*)L_52, GetZeroInitializedNodeType_tB2B66F53C164F56418A2C83367AE26F42B8F4E92_il2cpp_TypeInfo_var)));
		RuntimeObject* L_53 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___dllLoadUtils_0;
		intptr_t L_54 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___nativeRCL_1;
		NullCheck(L_53);
		intptr_t L_55;
		L_55 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_53, L_54, _stringLiteral29F5D4773DD98E9FEB3D279C8D79BA7843DE09A6);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_56 = { reinterpret_cast<intptr_t> (NodeInitType_t365D995BC724D5F7042E191CE9A4B13A5C3865C0_0_0_0_var) };
		Type_t* L_57;
		L_57 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_56, NULL);
		Delegate_t* L_58;
		L_58 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_55, L_57, NULL);
		((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_node_init_11 = ((NodeInitType_t365D995BC724D5F7042E191CE9A4B13A5C3865C0*)CastclassSealed((RuntimeObject*)L_58, NodeInitType_t365D995BC724D5F7042E191CE9A4B13A5C3865C0_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_node_init_11), (void*)((NodeInitType_t365D995BC724D5F7042E191CE9A4B13A5C3865C0*)CastclassSealed((RuntimeObject*)L_58, NodeInitType_t365D995BC724D5F7042E191CE9A4B13A5C3865C0_il2cpp_TypeInfo_var)));
		RuntimeObject* L_59 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___dllLoadUtils_0;
		intptr_t L_60 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___nativeRCL_1;
		NullCheck(L_59);
		intptr_t L_61;
		L_61 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_59, L_60, _stringLiteral52DFF640C220B0A0F961BA313FC9AC8666B9C0F7);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_62 = { reinterpret_cast<intptr_t> (NodeFiniType_tA1CDE02D8B40017868A11938E7CDE8B6DF56F210_0_0_0_var) };
		Type_t* L_63;
		L_63 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_62, NULL);
		Delegate_t* L_64;
		L_64 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_61, L_63, NULL);
		((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_node_fini_12 = ((NodeFiniType_tA1CDE02D8B40017868A11938E7CDE8B6DF56F210*)CastclassSealed((RuntimeObject*)L_64, NodeFiniType_tA1CDE02D8B40017868A11938E7CDE8B6DF56F210_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_node_fini_12), (void*)((NodeFiniType_tA1CDE02D8B40017868A11938E7CDE8B6DF56F210*)CastclassSealed((RuntimeObject*)L_64, NodeFiniType_tA1CDE02D8B40017868A11938E7CDE8B6DF56F210_il2cpp_TypeInfo_var)));
		RuntimeObject* L_65 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___dllLoadUtils_0;
		intptr_t L_66 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___nativeRCL_1;
		NullCheck(L_65);
		intptr_t L_67;
		L_67 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_65, L_66, _stringLiteral959FBE534E503E929D23E8D9B7BB033CE2DD090C);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_68 = { reinterpret_cast<intptr_t> (NodeGetNameType_t2D236E111C5F4170456B73FA899F7B3E62D48E31_0_0_0_var) };
		Type_t* L_69;
		L_69 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_68, NULL);
		Delegate_t* L_70;
		L_70 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_67, L_69, NULL);
		((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_node_get_name_13 = ((NodeGetNameType_t2D236E111C5F4170456B73FA899F7B3E62D48E31*)CastclassSealed((RuntimeObject*)L_70, NodeGetNameType_t2D236E111C5F4170456B73FA899F7B3E62D48E31_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_node_get_name_13), (void*)((NodeGetNameType_t2D236E111C5F4170456B73FA899F7B3E62D48E31*)CastclassSealed((RuntimeObject*)L_70, NodeGetNameType_t2D236E111C5F4170456B73FA899F7B3E62D48E31_il2cpp_TypeInfo_var)));
		RuntimeObject* L_71 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___dllLoadUtils_0;
		intptr_t L_72 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___nativeRCL_1;
		NullCheck(L_71);
		intptr_t L_73;
		L_73 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_71, L_72, _stringLiteralCD621F65A233781127E7E1DDE814EE293E7E8C57);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_74 = { reinterpret_cast<intptr_t> (NodeGetNamespaceType_t30FA5A59AE1F125ECA0B826562E15819F9F2AED0_0_0_0_var) };
		Type_t* L_75;
		L_75 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_74, NULL);
		Delegate_t* L_76;
		L_76 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_73, L_75, NULL);
		((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_node_get_namespace_14 = ((NodeGetNamespaceType_t30FA5A59AE1F125ECA0B826562E15819F9F2AED0*)CastclassSealed((RuntimeObject*)L_76, NodeGetNamespaceType_t30FA5A59AE1F125ECA0B826562E15819F9F2AED0_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_node_get_namespace_14), (void*)((NodeGetNamespaceType_t30FA5A59AE1F125ECA0B826562E15819F9F2AED0*)CastclassSealed((RuntimeObject*)L_76, NodeGetNamespaceType_t30FA5A59AE1F125ECA0B826562E15819F9F2AED0_il2cpp_TypeInfo_var)));
		RuntimeObject* L_77 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___dllLoadUtils_0;
		intptr_t L_78 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___nativeRCL_1;
		NullCheck(L_77);
		intptr_t L_79;
		L_79 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_77, L_78, _stringLiteralBF9D87388A027C1516BC7BE9AC617A13F0B98A19);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_80 = { reinterpret_cast<intptr_t> (PublisherGetDefaultOptionsType_tF64AECD0842363AFF4C4B902D90A28492CEF5BA1_0_0_0_var) };
		Type_t* L_81;
		L_81 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_80, NULL);
		Delegate_t* L_82;
		L_82 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_79, L_81, NULL);
		((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_publisher_get_default_options_15 = ((PublisherGetDefaultOptionsType_tF64AECD0842363AFF4C4B902D90A28492CEF5BA1*)CastclassSealed((RuntimeObject*)L_82, PublisherGetDefaultOptionsType_tF64AECD0842363AFF4C4B902D90A28492CEF5BA1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_publisher_get_default_options_15), (void*)((PublisherGetDefaultOptionsType_tF64AECD0842363AFF4C4B902D90A28492CEF5BA1*)CastclassSealed((RuntimeObject*)L_82, PublisherGetDefaultOptionsType_tF64AECD0842363AFF4C4B902D90A28492CEF5BA1_il2cpp_TypeInfo_var)));
		RuntimeObject* L_83 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___dllLoadUtils_0;
		intptr_t L_84 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___nativeRCL_1;
		NullCheck(L_83);
		intptr_t L_85;
		L_85 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_83, L_84, _stringLiteralACE6A81F3CA291FD1F8A411989CB8F89CD3A57F3);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_86 = { reinterpret_cast<intptr_t> (GetZeroInitiazizedPublisherType_t01F144F0515432B1C3F325276AA671B750E8629D_0_0_0_var) };
		Type_t* L_87;
		L_87 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_86, NULL);
		Delegate_t* L_88;
		L_88 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_85, L_87, NULL);
		((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_get_zero_initialized_publisher_16 = ((GetZeroInitiazizedPublisherType_t01F144F0515432B1C3F325276AA671B750E8629D*)CastclassSealed((RuntimeObject*)L_88, GetZeroInitiazizedPublisherType_t01F144F0515432B1C3F325276AA671B750E8629D_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_get_zero_initialized_publisher_16), (void*)((GetZeroInitiazizedPublisherType_t01F144F0515432B1C3F325276AA671B750E8629D*)CastclassSealed((RuntimeObject*)L_88, GetZeroInitiazizedPublisherType_t01F144F0515432B1C3F325276AA671B750E8629D_il2cpp_TypeInfo_var)));
		RuntimeObject* L_89 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___dllLoadUtils_0;
		intptr_t L_90 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___nativeRCL_1;
		NullCheck(L_89);
		intptr_t L_91;
		L_91 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_89, L_90, _stringLiteral9520CF27629ABD8DFD7594796F3257428D305A59);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_92 = { reinterpret_cast<intptr_t> (PublisherInitType_t0B6F34AF630DBB00D974207F5B6275F836349FF6_0_0_0_var) };
		Type_t* L_93;
		L_93 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_92, NULL);
		Delegate_t* L_94;
		L_94 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_91, L_93, NULL);
		((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_publisher_init_17 = ((PublisherInitType_t0B6F34AF630DBB00D974207F5B6275F836349FF6*)CastclassSealed((RuntimeObject*)L_94, PublisherInitType_t0B6F34AF630DBB00D974207F5B6275F836349FF6_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_publisher_init_17), (void*)((PublisherInitType_t0B6F34AF630DBB00D974207F5B6275F836349FF6*)CastclassSealed((RuntimeObject*)L_94, PublisherInitType_t0B6F34AF630DBB00D974207F5B6275F836349FF6_il2cpp_TypeInfo_var)));
		RuntimeObject* L_95 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___dllLoadUtils_0;
		intptr_t L_96 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___nativeRCL_1;
		NullCheck(L_95);
		intptr_t L_97;
		L_97 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_95, L_96, _stringLiteral7CFE25D28348900C67CBAC353F8895E135E3ECEE);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_98 = { reinterpret_cast<intptr_t> (PublisherFiniType_t29E6144CCBA0F6A8AC0CC5BAA12C50B7CAE3658B_0_0_0_var) };
		Type_t* L_99;
		L_99 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_98, NULL);
		Delegate_t* L_100;
		L_100 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_97, L_99, NULL);
		((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_publisher_fini_18 = ((PublisherFiniType_t29E6144CCBA0F6A8AC0CC5BAA12C50B7CAE3658B*)CastclassSealed((RuntimeObject*)L_100, PublisherFiniType_t29E6144CCBA0F6A8AC0CC5BAA12C50B7CAE3658B_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_publisher_fini_18), (void*)((PublisherFiniType_t29E6144CCBA0F6A8AC0CC5BAA12C50B7CAE3658B*)CastclassSealed((RuntimeObject*)L_100, PublisherFiniType_t29E6144CCBA0F6A8AC0CC5BAA12C50B7CAE3658B_il2cpp_TypeInfo_var)));
		RuntimeObject* L_101 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___dllLoadUtils_0;
		intptr_t L_102 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___nativeRCL_1;
		NullCheck(L_101);
		intptr_t L_103;
		L_103 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_101, L_102, _stringLiteral8E5045210C104D954F336B7AD8A20EEA79E7C0FB);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_104 = { reinterpret_cast<intptr_t> (PublishType_t85AE05C7B1E15E993E7977AE925CBEED7B0A80E0_0_0_0_var) };
		Type_t* L_105;
		L_105 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_104, NULL);
		Delegate_t* L_106;
		L_106 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_103, L_105, NULL);
		((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_publish_19 = ((PublishType_t85AE05C7B1E15E993E7977AE925CBEED7B0A80E0*)CastclassSealed((RuntimeObject*)L_106, PublishType_t85AE05C7B1E15E993E7977AE925CBEED7B0A80E0_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_publish_19), (void*)((PublishType_t85AE05C7B1E15E993E7977AE925CBEED7B0A80E0*)CastclassSealed((RuntimeObject*)L_106, PublishType_t85AE05C7B1E15E993E7977AE925CBEED7B0A80E0_il2cpp_TypeInfo_var)));
		RuntimeObject* L_107 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___dllLoadUtils_0;
		intptr_t L_108 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___nativeRCL_1;
		NullCheck(L_107);
		intptr_t L_109;
		L_109 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_107, L_108, _stringLiteral417B5B6499819685DF498F3683388ED2DBA81B2D);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_110 = { reinterpret_cast<intptr_t> (GetZeroInitializedSubcriptionType_tB15A38BFDD3D25B480ABD8275A9523A87001337D_0_0_0_var) };
		Type_t* L_111;
		L_111 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_110, NULL);
		Delegate_t* L_112;
		L_112 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_109, L_111, NULL);
		((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_get_zero_initialized_subscription_20 = ((GetZeroInitializedSubcriptionType_tB15A38BFDD3D25B480ABD8275A9523A87001337D*)CastclassSealed((RuntimeObject*)L_112, GetZeroInitializedSubcriptionType_tB15A38BFDD3D25B480ABD8275A9523A87001337D_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_get_zero_initialized_subscription_20), (void*)((GetZeroInitializedSubcriptionType_tB15A38BFDD3D25B480ABD8275A9523A87001337D*)CastclassSealed((RuntimeObject*)L_112, GetZeroInitializedSubcriptionType_tB15A38BFDD3D25B480ABD8275A9523A87001337D_il2cpp_TypeInfo_var)));
		RuntimeObject* L_113 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___dllLoadUtils_0;
		intptr_t L_114 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___nativeRCL_1;
		NullCheck(L_113);
		intptr_t L_115;
		L_115 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_113, L_114, _stringLiteralAEAB58AFDD426373778234F3F415E41737B5B215);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_116 = { reinterpret_cast<intptr_t> (SubscriptionInitType_t5D9745916CE3038181964DA68957FF6B8C13222A_0_0_0_var) };
		Type_t* L_117;
		L_117 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_116, NULL);
		Delegate_t* L_118;
		L_118 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_115, L_117, NULL);
		((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_subscription_init_21 = ((SubscriptionInitType_t5D9745916CE3038181964DA68957FF6B8C13222A*)CastclassSealed((RuntimeObject*)L_118, SubscriptionInitType_t5D9745916CE3038181964DA68957FF6B8C13222A_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_subscription_init_21), (void*)((SubscriptionInitType_t5D9745916CE3038181964DA68957FF6B8C13222A*)CastclassSealed((RuntimeObject*)L_118, SubscriptionInitType_t5D9745916CE3038181964DA68957FF6B8C13222A_il2cpp_TypeInfo_var)));
		RuntimeObject* L_119 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___dllLoadUtils_0;
		intptr_t L_120 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___nativeRCL_1;
		NullCheck(L_119);
		intptr_t L_121;
		L_121 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_119, L_120, _stringLiteral7A08CECE5BCD6BBF5F1AD9999091BEEC5ED2D076);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_122 = { reinterpret_cast<intptr_t> (SubscriptionFiniType_t50087884E3CF041D8642AC77956FFD362358A620_0_0_0_var) };
		Type_t* L_123;
		L_123 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_122, NULL);
		Delegate_t* L_124;
		L_124 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_121, L_123, NULL);
		((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_subscription_fini_22 = ((SubscriptionFiniType_t50087884E3CF041D8642AC77956FFD362358A620*)CastclassSealed((RuntimeObject*)L_124, SubscriptionFiniType_t50087884E3CF041D8642AC77956FFD362358A620_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_subscription_fini_22), (void*)((SubscriptionFiniType_t50087884E3CF041D8642AC77956FFD362358A620*)CastclassSealed((RuntimeObject*)L_124, SubscriptionFiniType_t50087884E3CF041D8642AC77956FFD362358A620_il2cpp_TypeInfo_var)));
		RuntimeObject* L_125 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___dllLoadUtils_0;
		intptr_t L_126 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___nativeRCL_1;
		NullCheck(L_125);
		intptr_t L_127;
		L_127 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_125, L_126, _stringLiteral3F30C8A7DEF5018A1FF837543E457575A2278042);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_128 = { reinterpret_cast<intptr_t> (SubscriptionIsValidType_tBAA19362E8D32CF2D87A459D0BBBC6D1B380AD7A_0_0_0_var) };
		Type_t* L_129;
		L_129 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_128, NULL);
		Delegate_t* L_130;
		L_130 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_127, L_129, NULL);
		((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_subscription_is_valid_23 = ((SubscriptionIsValidType_tBAA19362E8D32CF2D87A459D0BBBC6D1B380AD7A*)CastclassSealed((RuntimeObject*)L_130, SubscriptionIsValidType_tBAA19362E8D32CF2D87A459D0BBBC6D1B380AD7A_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_subscription_is_valid_23), (void*)((SubscriptionIsValidType_tBAA19362E8D32CF2D87A459D0BBBC6D1B380AD7A*)CastclassSealed((RuntimeObject*)L_130, SubscriptionIsValidType_tBAA19362E8D32CF2D87A459D0BBBC6D1B380AD7A_il2cpp_TypeInfo_var)));
		RuntimeObject* L_131 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___dllLoadUtils_0;
		intptr_t L_132 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___nativeRCL_1;
		NullCheck(L_131);
		intptr_t L_133;
		L_133 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_131, L_132, _stringLiteralD3B303BB2205CDB2E0512B68553256028ADA06C4);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_134 = { reinterpret_cast<intptr_t> (TakeType_tD0132705DD1D245C5C1D36705B201977F5B0B006_0_0_0_var) };
		Type_t* L_135;
		L_135 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_134, NULL);
		Delegate_t* L_136;
		L_136 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_133, L_135, NULL);
		((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_take_24 = ((TakeType_tD0132705DD1D245C5C1D36705B201977F5B0B006*)CastclassSealed((RuntimeObject*)L_136, TakeType_tD0132705DD1D245C5C1D36705B201977F5B0B006_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_take_24), (void*)((TakeType_tD0132705DD1D245C5C1D36705B201977F5B0B006*)CastclassSealed((RuntimeObject*)L_136, TakeType_tD0132705DD1D245C5C1D36705B201977F5B0B006_il2cpp_TypeInfo_var)));
		RuntimeObject* L_137 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___dllLoadUtils_0;
		intptr_t L_138 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___nativeRCL_1;
		NullCheck(L_137);
		intptr_t L_139;
		L_139 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_137, L_138, _stringLiteralC5D7181FD60D5BFC4EB831DF7D2250FFB07B7F55);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_140 = { reinterpret_cast<intptr_t> (GetZeroInitializedWaitSetType_t6399F00A6BBAE1E21B97BDCF19BD380C1D53C9CC_0_0_0_var) };
		Type_t* L_141;
		L_141 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_140, NULL);
		Delegate_t* L_142;
		L_142 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_139, L_141, NULL);
		((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_get_zero_initialized_wait_set_25 = ((GetZeroInitializedWaitSetType_t6399F00A6BBAE1E21B97BDCF19BD380C1D53C9CC*)CastclassSealed((RuntimeObject*)L_142, GetZeroInitializedWaitSetType_t6399F00A6BBAE1E21B97BDCF19BD380C1D53C9CC_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_get_zero_initialized_wait_set_25), (void*)((GetZeroInitializedWaitSetType_t6399F00A6BBAE1E21B97BDCF19BD380C1D53C9CC*)CastclassSealed((RuntimeObject*)L_142, GetZeroInitializedWaitSetType_t6399F00A6BBAE1E21B97BDCF19BD380C1D53C9CC_il2cpp_TypeInfo_var)));
		RuntimeObject* L_143 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___dllLoadUtils_0;
		intptr_t L_144 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___nativeRCL_1;
		NullCheck(L_143);
		intptr_t L_145;
		L_145 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_143, L_144, _stringLiteralE0F85D2D24488A8A4646C7E756E230A116A8DE6C);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_146 = { reinterpret_cast<intptr_t> (WaitSetInitType_t87E1D05131F194FAB01E72C1A03A0A2538C411AA_0_0_0_var) };
		Type_t* L_147;
		L_147 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_146, NULL);
		Delegate_t* L_148;
		L_148 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_145, L_147, NULL);
		((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_wait_set_init_26 = ((WaitSetInitType_t87E1D05131F194FAB01E72C1A03A0A2538C411AA*)CastclassSealed((RuntimeObject*)L_148, WaitSetInitType_t87E1D05131F194FAB01E72C1A03A0A2538C411AA_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_wait_set_init_26), (void*)((WaitSetInitType_t87E1D05131F194FAB01E72C1A03A0A2538C411AA*)CastclassSealed((RuntimeObject*)L_148, WaitSetInitType_t87E1D05131F194FAB01E72C1A03A0A2538C411AA_il2cpp_TypeInfo_var)));
		RuntimeObject* L_149 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___dllLoadUtils_0;
		intptr_t L_150 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___nativeRCL_1;
		NullCheck(L_149);
		intptr_t L_151;
		L_151 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_149, L_150, _stringLiteral4310C4CCEAE0445F6834387B7996C7C7447AD99F);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_152 = { reinterpret_cast<intptr_t> (WatiSetFiniType_tA3F438CE346815BF7ACA429F3EA9DB3556560FCC_0_0_0_var) };
		Type_t* L_153;
		L_153 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_152, NULL);
		Delegate_t* L_154;
		L_154 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_151, L_153, NULL);
		((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_wait_set_fini_27 = ((WatiSetFiniType_tA3F438CE346815BF7ACA429F3EA9DB3556560FCC*)CastclassSealed((RuntimeObject*)L_154, WatiSetFiniType_tA3F438CE346815BF7ACA429F3EA9DB3556560FCC_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_wait_set_fini_27), (void*)((WatiSetFiniType_tA3F438CE346815BF7ACA429F3EA9DB3556560FCC*)CastclassSealed((RuntimeObject*)L_154, WatiSetFiniType_tA3F438CE346815BF7ACA429F3EA9DB3556560FCC_il2cpp_TypeInfo_var)));
		RuntimeObject* L_155 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___dllLoadUtils_0;
		intptr_t L_156 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___nativeRCL_1;
		NullCheck(L_155);
		intptr_t L_157;
		L_157 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_155, L_156, _stringLiteral857C0E92DE22D5DA9AEED6D637EDF1F0FCA10462);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_158 = { reinterpret_cast<intptr_t> (WaitSetClearType_t86E1B05E31A40014E169F1C9624369F6A48ADA80_0_0_0_var) };
		Type_t* L_159;
		L_159 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_158, NULL);
		Delegate_t* L_160;
		L_160 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_157, L_159, NULL);
		((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_wait_set_clear_28 = ((WaitSetClearType_t86E1B05E31A40014E169F1C9624369F6A48ADA80*)CastclassSealed((RuntimeObject*)L_160, WaitSetClearType_t86E1B05E31A40014E169F1C9624369F6A48ADA80_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_wait_set_clear_28), (void*)((WaitSetClearType_t86E1B05E31A40014E169F1C9624369F6A48ADA80*)CastclassSealed((RuntimeObject*)L_160, WaitSetClearType_t86E1B05E31A40014E169F1C9624369F6A48ADA80_il2cpp_TypeInfo_var)));
		RuntimeObject* L_161 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___dllLoadUtils_0;
		intptr_t L_162 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___nativeRCL_1;
		NullCheck(L_161);
		intptr_t L_163;
		L_163 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_161, L_162, _stringLiteral5198B2C1B713858BC3CB6685F47A3A6EA8E504D9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_164 = { reinterpret_cast<intptr_t> (WaitSetAddSubscriptionType_tB952F7946A7A06C27D970D1F8A28089434E2F4B4_0_0_0_var) };
		Type_t* L_165;
		L_165 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_164, NULL);
		Delegate_t* L_166;
		L_166 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_163, L_165, NULL);
		((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_wait_set_add_subscription_29 = ((WaitSetAddSubscriptionType_tB952F7946A7A06C27D970D1F8A28089434E2F4B4*)CastclassSealed((RuntimeObject*)L_166, WaitSetAddSubscriptionType_tB952F7946A7A06C27D970D1F8A28089434E2F4B4_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_wait_set_add_subscription_29), (void*)((WaitSetAddSubscriptionType_tB952F7946A7A06C27D970D1F8A28089434E2F4B4*)CastclassSealed((RuntimeObject*)L_166, WaitSetAddSubscriptionType_tB952F7946A7A06C27D970D1F8A28089434E2F4B4_il2cpp_TypeInfo_var)));
		RuntimeObject* L_167 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___dllLoadUtils_0;
		intptr_t L_168 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___nativeRCL_1;
		NullCheck(L_167);
		intptr_t L_169;
		L_169 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_167, L_168, _stringLiteralBB67DD686FE6E103072F214AA790B8D5B95A9476);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_170 = { reinterpret_cast<intptr_t> (WaitType_t835E7382D2E046BD4590666AF95A16BFA8C85E01_0_0_0_var) };
		Type_t* L_171;
		L_171 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_170, NULL);
		Delegate_t* L_172;
		L_172 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_169, L_171, NULL);
		((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_wait_30 = ((WaitType_t835E7382D2E046BD4590666AF95A16BFA8C85E01*)CastclassSealed((RuntimeObject*)L_172, WaitType_t835E7382D2E046BD4590666AF95A16BFA8C85E01_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_wait_30), (void*)((WaitType_t835E7382D2E046BD4590666AF95A16BFA8C85E01*)CastclassSealed((RuntimeObject*)L_172, WaitType_t835E7382D2E046BD4590666AF95A16BFA8C85E01_il2cpp_TypeInfo_var)));
		RuntimeObject* L_173 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___dllLoadUtils_0;
		intptr_t L_174 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___nativeRCL_1;
		NullCheck(L_173);
		intptr_t L_175;
		L_175 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_173, L_174, _stringLiteral5CA49DEA4C28AE04737385C631A49918D5462A12);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_176 = { reinterpret_cast<intptr_t> (RclClockGetNow_tE7C0124D0B68F9278C1BE9AA93083FBB57A442BD_0_0_0_var) };
		Type_t* L_177;
		L_177 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_176, NULL);
		Delegate_t* L_178;
		L_178 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_175, L_177, NULL);
		((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_clock_get_now_31 = ((RclClockGetNow_tE7C0124D0B68F9278C1BE9AA93083FBB57A442BD*)CastclassSealed((RuntimeObject*)L_178, RclClockGetNow_tE7C0124D0B68F9278C1BE9AA93083FBB57A442BD_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_clock_get_now_31), (void*)((RclClockGetNow_tE7C0124D0B68F9278C1BE9AA93083FBB57A442BD*)CastclassSealed((RuntimeObject*)L_178, RclClockGetNow_tE7C0124D0B68F9278C1BE9AA93083FBB57A442BD_il2cpp_TypeInfo_var)));
		RuntimeObject* L_179 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___dllLoadUtils_0;
		intptr_t L_180 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___nativeRCUtils_2;
		NullCheck(L_179);
		intptr_t L_181;
		L_181 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_179, L_180, _stringLiteral52FD8F8C79B0A4924F84C1C6C26D96CEC8AD6ABF);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_182 = { reinterpret_cast<intptr_t> (RclGetDefaultAllocatorType_t3073FF12B8067D85A753E0AED56D25D05214A994_0_0_0_var) };
		Type_t* L_183;
		L_183 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_182, NULL);
		Delegate_t* L_184;
		L_184 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_181, L_183, NULL);
		((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcutils_get_default_allocator_32 = ((RclGetDefaultAllocatorType_t3073FF12B8067D85A753E0AED56D25D05214A994*)CastclassSealed((RuntimeObject*)L_184, RclGetDefaultAllocatorType_t3073FF12B8067D85A753E0AED56D25D05214A994_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcutils_get_default_allocator_32), (void*)((RclGetDefaultAllocatorType_t3073FF12B8067D85A753E0AED56D25D05214A994*)CastclassSealed((RuntimeObject*)L_184, RclGetDefaultAllocatorType_t3073FF12B8067D85A753E0AED56D25D05214A994_il2cpp_TypeInfo_var)));
		RuntimeObject* L_185 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___dllLoadUtils_0;
		intptr_t L_186 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___nativeRCUtils_2;
		NullCheck(L_185);
		intptr_t L_187;
		L_187 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_185, L_186, _stringLiteral9A53676D98B36CD3B76E8419667229AED5927FCF);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_188 = { reinterpret_cast<intptr_t> (ResetErrorType_t4D921B90107C97E83795A5C064D3691084BB81DC_0_0_0_var) };
		Type_t* L_189;
		L_189 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_188, NULL);
		Delegate_t* L_190;
		L_190 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_187, L_189, NULL);
		((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_reset_error_33 = ((ResetErrorType_t4D921B90107C97E83795A5C064D3691084BB81DC*)CastclassSealed((RuntimeObject*)L_190, ResetErrorType_t4D921B90107C97E83795A5C064D3691084BB81DC_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_reset_error_33), (void*)((ResetErrorType_t4D921B90107C97E83795A5C064D3691084BB81DC*)CastclassSealed((RuntimeObject*)L_190, ResetErrorType_t4D921B90107C97E83795A5C064D3691084BB81DC_il2cpp_TypeInfo_var)));
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
rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C GetZeroInitializedContextType_Invoke_m7072D60BE53253063BD08973B4317F9C57538D39_Multicast(GetZeroInitializedContextType_t04171F8770DA4190523F40E24D627320BEE692D6* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GetZeroInitializedContextType_t04171F8770DA4190523F40E24D627320BEE692D6* currentDelegate = reinterpret_cast<GetZeroInitializedContextType_t04171F8770DA4190523F40E24D627320BEE692D6*>(delegatesToInvoke[i]);
		typedef rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C GetZeroInitializedContextType_Invoke_m7072D60BE53253063BD08973B4317F9C57538D39_OpenInst(GetZeroInitializedContextType_t04171F8770DA4190523F40E24D627320BEE692D6* __this, const RuntimeMethod* method)
{
	typedef rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C GetZeroInitializedContextType_Invoke_m7072D60BE53253063BD08973B4317F9C57538D39_OpenStatic(GetZeroInitializedContextType_t04171F8770DA4190523F40E24D627320BEE692D6* __this, const RuntimeMethod* method)
{
	typedef rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C GetZeroInitializedContextType_Invoke_m7072D60BE53253063BD08973B4317F9C57538D39_OpenStaticInvoker(GetZeroInitializedContextType_t04171F8770DA4190523F40E24D627320BEE692D6* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker0< rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL);
}
rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C GetZeroInitializedContextType_Invoke_m7072D60BE53253063BD08973B4317F9C57538D39_ClosedStaticInvoker(GetZeroInitializedContextType_t04171F8770DA4190523F40E24D627320BEE692D6* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C, RuntimeObject* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C DelegatePInvokeWrapper_GetZeroInitializedContextType_t04171F8770DA4190523F40E24D627320BEE692D6 (GetZeroInitializedContextType_t04171F8770DA4190523F40E24D627320BEE692D6* __this, const RuntimeMethod* method)
{
	typedef rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C (CDECL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C returnValue = il2cppPInvokeFunc();

	return returnValue;
}
// System.Void ROS2.NativeRcl/GetZeroInitializedContextType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetZeroInitializedContextType__ctor_m93397F5891CE0071E9F570FB5AE02FA62741C4EB (GetZeroInitializedContextType_t04171F8770DA4190523F40E24D627320BEE692D6* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&GetZeroInitializedContextType_Invoke_m7072D60BE53253063BD08973B4317F9C57538D39_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&GetZeroInitializedContextType_Invoke_m7072D60BE53253063BD08973B4317F9C57538D39_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetZeroInitializedContextType_Invoke_m7072D60BE53253063BD08973B4317F9C57538D39_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&GetZeroInitializedContextType_Invoke_m7072D60BE53253063BD08973B4317F9C57538D39_Multicast;
}
// ROS2.rcl_context_t ROS2.NativeRcl/GetZeroInitializedContextType::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C GetZeroInitializedContextType_Invoke_m7072D60BE53253063BD08973B4317F9C57538D39 (GetZeroInitializedContextType_t04171F8770DA4190523F40E24D627320BEE692D6* __this, const RuntimeMethod* method) 
{
	typedef rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ROS2.NativeRcl/GetZeroInitializedContextType::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GetZeroInitializedContextType_BeginInvoke_mC3458EC08467DB6B7A26C697CD7D5B1486E63DDA (GetZeroInitializedContextType_t04171F8770DA4190523F40E24D627320BEE692D6* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// ROS2.rcl_context_t ROS2.NativeRcl/GetZeroInitializedContextType::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C GetZeroInitializedContextType_EndInvoke_m9E1045046752AC1C711793DC0AFAD2E77E84A1CC (GetZeroInitializedContextType_t04171F8770DA4190523F40E24D627320BEE692D6* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
rcl_init_options_t_t3AD5D13EA98B32B75776F07E84592514E212EA50 GetZeroInitializedInitOptionsType_Invoke_m803F50B852A3CB597130ACCCBC620C83EC2B4893_Multicast(GetZeroInitializedInitOptionsType_t672F00F3D9BAA9869AB5BCC51F11F37D7A068AF2* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	rcl_init_options_t_t3AD5D13EA98B32B75776F07E84592514E212EA50 retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GetZeroInitializedInitOptionsType_t672F00F3D9BAA9869AB5BCC51F11F37D7A068AF2* currentDelegate = reinterpret_cast<GetZeroInitializedInitOptionsType_t672F00F3D9BAA9869AB5BCC51F11F37D7A068AF2*>(delegatesToInvoke[i]);
		typedef rcl_init_options_t_t3AD5D13EA98B32B75776F07E84592514E212EA50 (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
rcl_init_options_t_t3AD5D13EA98B32B75776F07E84592514E212EA50 GetZeroInitializedInitOptionsType_Invoke_m803F50B852A3CB597130ACCCBC620C83EC2B4893_OpenInst(GetZeroInitializedInitOptionsType_t672F00F3D9BAA9869AB5BCC51F11F37D7A068AF2* __this, const RuntimeMethod* method)
{
	typedef rcl_init_options_t_t3AD5D13EA98B32B75776F07E84592514E212EA50 (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
rcl_init_options_t_t3AD5D13EA98B32B75776F07E84592514E212EA50 GetZeroInitializedInitOptionsType_Invoke_m803F50B852A3CB597130ACCCBC620C83EC2B4893_OpenStatic(GetZeroInitializedInitOptionsType_t672F00F3D9BAA9869AB5BCC51F11F37D7A068AF2* __this, const RuntimeMethod* method)
{
	typedef rcl_init_options_t_t3AD5D13EA98B32B75776F07E84592514E212EA50 (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
rcl_init_options_t_t3AD5D13EA98B32B75776F07E84592514E212EA50 GetZeroInitializedInitOptionsType_Invoke_m803F50B852A3CB597130ACCCBC620C83EC2B4893_OpenStaticInvoker(GetZeroInitializedInitOptionsType_t672F00F3D9BAA9869AB5BCC51F11F37D7A068AF2* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker0< rcl_init_options_t_t3AD5D13EA98B32B75776F07E84592514E212EA50 >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL);
}
rcl_init_options_t_t3AD5D13EA98B32B75776F07E84592514E212EA50 GetZeroInitializedInitOptionsType_Invoke_m803F50B852A3CB597130ACCCBC620C83EC2B4893_ClosedStaticInvoker(GetZeroInitializedInitOptionsType_t672F00F3D9BAA9869AB5BCC51F11F37D7A068AF2* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< rcl_init_options_t_t3AD5D13EA98B32B75776F07E84592514E212EA50, RuntimeObject* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  rcl_init_options_t_t3AD5D13EA98B32B75776F07E84592514E212EA50 DelegatePInvokeWrapper_GetZeroInitializedInitOptionsType_t672F00F3D9BAA9869AB5BCC51F11F37D7A068AF2 (GetZeroInitializedInitOptionsType_t672F00F3D9BAA9869AB5BCC51F11F37D7A068AF2* __this, const RuntimeMethod* method)
{
	typedef rcl_init_options_t_t3AD5D13EA98B32B75776F07E84592514E212EA50 (CDECL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	rcl_init_options_t_t3AD5D13EA98B32B75776F07E84592514E212EA50 returnValue = il2cppPInvokeFunc();

	return returnValue;
}
// System.Void ROS2.NativeRcl/GetZeroInitializedInitOptionsType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetZeroInitializedInitOptionsType__ctor_m8E805F1B6CF0F0E60A332DF93F9CE801C5FF7C8F (GetZeroInitializedInitOptionsType_t672F00F3D9BAA9869AB5BCC51F11F37D7A068AF2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&GetZeroInitializedInitOptionsType_Invoke_m803F50B852A3CB597130ACCCBC620C83EC2B4893_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&GetZeroInitializedInitOptionsType_Invoke_m803F50B852A3CB597130ACCCBC620C83EC2B4893_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetZeroInitializedInitOptionsType_Invoke_m803F50B852A3CB597130ACCCBC620C83EC2B4893_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&GetZeroInitializedInitOptionsType_Invoke_m803F50B852A3CB597130ACCCBC620C83EC2B4893_Multicast;
}
// ROS2.rcl_init_options_t ROS2.NativeRcl/GetZeroInitializedInitOptionsType::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR rcl_init_options_t_t3AD5D13EA98B32B75776F07E84592514E212EA50 GetZeroInitializedInitOptionsType_Invoke_m803F50B852A3CB597130ACCCBC620C83EC2B4893 (GetZeroInitializedInitOptionsType_t672F00F3D9BAA9869AB5BCC51F11F37D7A068AF2* __this, const RuntimeMethod* method) 
{
	typedef rcl_init_options_t_t3AD5D13EA98B32B75776F07E84592514E212EA50 (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ROS2.NativeRcl/GetZeroInitializedInitOptionsType::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GetZeroInitializedInitOptionsType_BeginInvoke_m2C70582CEE7FCB103F2250EE58D4642548DD502B (GetZeroInitializedInitOptionsType_t672F00F3D9BAA9869AB5BCC51F11F37D7A068AF2* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// ROS2.rcl_init_options_t ROS2.NativeRcl/GetZeroInitializedInitOptionsType::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR rcl_init_options_t_t3AD5D13EA98B32B75776F07E84592514E212EA50 GetZeroInitializedInitOptionsType_EndInvoke_mEEF247E4793A4093C32A27A47A02823B1B274DD8 (GetZeroInitializedInitOptionsType_t672F00F3D9BAA9869AB5BCC51F11F37D7A068AF2* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(rcl_init_options_t_t3AD5D13EA98B32B75776F07E84592514E212EA50*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t InitOptionsInitType_Invoke_m2C5736680F5DD498751DBF840837A366129379AA_Multicast(InitOptionsInitType_t7CCFE47E2867A249ED36CE9D134E83FE296EF91E* __this, rcl_init_options_t_t3AD5D13EA98B32B75776F07E84592514E212EA50* ___0_init_options, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831 ___1_allocator, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		InitOptionsInitType_t7CCFE47E2867A249ED36CE9D134E83FE296EF91E* currentDelegate = reinterpret_cast<InitOptionsInitType_t7CCFE47E2867A249ED36CE9D134E83FE296EF91E*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, rcl_init_options_t_t3AD5D13EA98B32B75776F07E84592514E212EA50*, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_init_options, ___1_allocator, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t InitOptionsInitType_Invoke_m2C5736680F5DD498751DBF840837A366129379AA_OpenInst(InitOptionsInitType_t7CCFE47E2867A249ED36CE9D134E83FE296EF91E* __this, rcl_init_options_t_t3AD5D13EA98B32B75776F07E84592514E212EA50* ___0_init_options, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831 ___1_allocator, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (rcl_init_options_t_t3AD5D13EA98B32B75776F07E84592514E212EA50*, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_init_options, ___1_allocator, method);
}
int32_t InitOptionsInitType_Invoke_m2C5736680F5DD498751DBF840837A366129379AA_OpenStatic(InitOptionsInitType_t7CCFE47E2867A249ED36CE9D134E83FE296EF91E* __this, rcl_init_options_t_t3AD5D13EA98B32B75776F07E84592514E212EA50* ___0_init_options, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831 ___1_allocator, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (rcl_init_options_t_t3AD5D13EA98B32B75776F07E84592514E212EA50*, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_init_options, ___1_allocator, method);
}
int32_t InitOptionsInitType_Invoke_m2C5736680F5DD498751DBF840837A366129379AA_OpenStaticInvoker(InitOptionsInitType_t7CCFE47E2867A249ED36CE9D134E83FE296EF91E* __this, rcl_init_options_t_t3AD5D13EA98B32B75776F07E84592514E212EA50* ___0_init_options, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831 ___1_allocator, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, rcl_init_options_t_t3AD5D13EA98B32B75776F07E84592514E212EA50*, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831 >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_init_options, ___1_allocator);
}
int32_t InitOptionsInitType_Invoke_m2C5736680F5DD498751DBF840837A366129379AA_ClosedStaticInvoker(InitOptionsInitType_t7CCFE47E2867A249ED36CE9D134E83FE296EF91E* __this, rcl_init_options_t_t3AD5D13EA98B32B75776F07E84592514E212EA50* ___0_init_options, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831 ___1_allocator, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, rcl_init_options_t_t3AD5D13EA98B32B75776F07E84592514E212EA50*, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831 >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_init_options, ___1_allocator);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_InitOptionsInitType_t7CCFE47E2867A249ED36CE9D134E83FE296EF91E (InitOptionsInitType_t7CCFE47E2867A249ED36CE9D134E83FE296EF91E* __this, rcl_init_options_t_t3AD5D13EA98B32B75776F07E84592514E212EA50* ___0_init_options, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831 ___1_allocator, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)(rcl_init_options_t_t3AD5D13EA98B32B75776F07E84592514E212EA50*, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_init_options, ___1_allocator);

	return returnValue;
}
// System.Void ROS2.NativeRcl/InitOptionsInitType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitOptionsInitType__ctor_m855F2A9B95FA734B54B913D3BC5E291AD1A74A38 (InitOptionsInitType_t7CCFE47E2867A249ED36CE9D134E83FE296EF91E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&InitOptionsInitType_Invoke_m2C5736680F5DD498751DBF840837A366129379AA_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&InitOptionsInitType_Invoke_m2C5736680F5DD498751DBF840837A366129379AA_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&InitOptionsInitType_Invoke_m2C5736680F5DD498751DBF840837A366129379AA_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&InitOptionsInitType_Invoke_m2C5736680F5DD498751DBF840837A366129379AA_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&InitOptionsInitType_Invoke_m2C5736680F5DD498751DBF840837A366129379AA_Multicast;
}
// System.Int32 ROS2.NativeRcl/InitOptionsInitType::Invoke(ROS2.rcl_init_options_t&,ROS2.rcl_allocator_t)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InitOptionsInitType_Invoke_m2C5736680F5DD498751DBF840837A366129379AA (InitOptionsInitType_t7CCFE47E2867A249ED36CE9D134E83FE296EF91E* __this, rcl_init_options_t_t3AD5D13EA98B32B75776F07E84592514E212EA50* ___0_init_options, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831 ___1_allocator, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, rcl_init_options_t_t3AD5D13EA98B32B75776F07E84592514E212EA50*, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_init_options, ___1_allocator, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ROS2.NativeRcl/InitOptionsInitType::BeginInvoke(ROS2.rcl_init_options_t&,ROS2.rcl_allocator_t,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InitOptionsInitType_BeginInvoke_m612A4F94B0674E5E803099116F97DD6ED505329C (InitOptionsInitType_t7CCFE47E2867A249ED36CE9D134E83FE296EF91E* __this, rcl_init_options_t_t3AD5D13EA98B32B75776F07E84592514E212EA50* ___0_init_options, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831 ___1_allocator, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&rcl_init_options_t_t3AD5D13EA98B32B75776F07E84592514E212EA50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(rcl_init_options_t_t3AD5D13EA98B32B75776F07E84592514E212EA50_il2cpp_TypeInfo_var, &*___0_init_options);
	__d_args[1] = Box(rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831_il2cpp_TypeInfo_var, &___1_allocator);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Int32 ROS2.NativeRcl/InitOptionsInitType::EndInvoke(ROS2.rcl_init_options_t&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InitOptionsInitType_EndInvoke_mE839A36BE03A9697F2287EA4EDB4E2403F5BB04F (InitOptionsInitType_t7CCFE47E2867A249ED36CE9D134E83FE296EF91E* __this, rcl_init_options_t_t3AD5D13EA98B32B75776F07E84592514E212EA50* ___0_init_options, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_init_options,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, ___out_args);
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
int32_t ShutdownType_Invoke_mA18C5013CED464580638857F255A520DEDD59EFC_Multicast(ShutdownType_t4FB0976CC98794F41196FD3CC575CAC576F438CA* __this, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___0_context, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ShutdownType_t4FB0976CC98794F41196FD3CC575CAC576F438CA* currentDelegate = reinterpret_cast<ShutdownType_t4FB0976CC98794F41196FD3CC575CAC576F438CA*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_context, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t ShutdownType_Invoke_mA18C5013CED464580638857F255A520DEDD59EFC_OpenInst(ShutdownType_t4FB0976CC98794F41196FD3CC575CAC576F438CA* __this, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___0_context, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_context, method);
}
int32_t ShutdownType_Invoke_mA18C5013CED464580638857F255A520DEDD59EFC_OpenStatic(ShutdownType_t4FB0976CC98794F41196FD3CC575CAC576F438CA* __this, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___0_context, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_context, method);
}
int32_t ShutdownType_Invoke_mA18C5013CED464580638857F255A520DEDD59EFC_OpenStaticInvoker(ShutdownType_t4FB0976CC98794F41196FD3CC575CAC576F438CA* __this, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___0_context, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< int32_t, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_context);
}
int32_t ShutdownType_Invoke_mA18C5013CED464580638857F255A520DEDD59EFC_ClosedStaticInvoker(ShutdownType_t4FB0976CC98794F41196FD3CC575CAC576F438CA* __this, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___0_context, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, RuntimeObject*, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_context);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_ShutdownType_t4FB0976CC98794F41196FD3CC575CAC576F438CA (ShutdownType_t4FB0976CC98794F41196FD3CC575CAC576F438CA* __this, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___0_context, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)(rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_context);

	return returnValue;
}
// System.Void ROS2.NativeRcl/ShutdownType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShutdownType__ctor_m0DEA3C2E8BBC090516A6ED8AC68C5D20C45A9957 (ShutdownType_t4FB0976CC98794F41196FD3CC575CAC576F438CA* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&ShutdownType_Invoke_mA18C5013CED464580638857F255A520DEDD59EFC_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ShutdownType_Invoke_mA18C5013CED464580638857F255A520DEDD59EFC_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ShutdownType_Invoke_mA18C5013CED464580638857F255A520DEDD59EFC_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&ShutdownType_Invoke_mA18C5013CED464580638857F255A520DEDD59EFC_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ShutdownType_Invoke_mA18C5013CED464580638857F255A520DEDD59EFC_Multicast;
}
// System.Int32 ROS2.NativeRcl/ShutdownType::Invoke(ROS2.rcl_context_t&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ShutdownType_Invoke_mA18C5013CED464580638857F255A520DEDD59EFC (ShutdownType_t4FB0976CC98794F41196FD3CC575CAC576F438CA* __this, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___0_context, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_context, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ROS2.NativeRcl/ShutdownType::BeginInvoke(ROS2.rcl_context_t&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ShutdownType_BeginInvoke_m9AD7DF8BE444B2929E42B09EE7409C28694B3456 (ShutdownType_t4FB0976CC98794F41196FD3CC575CAC576F438CA* __this, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___0_context, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C_il2cpp_TypeInfo_var, &*___0_context);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Int32 ROS2.NativeRcl/ShutdownType::EndInvoke(ROS2.rcl_context_t&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ShutdownType_EndInvoke_m13F3E7885082FF11249B680420D96A72D2DB546A (ShutdownType_t4FB0976CC98794F41196FD3CC575CAC576F438CA* __this, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___0_context, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_context,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, ___out_args);
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
bool ContextIsValidType_Invoke_m27DC66426F72978C16FCB3F2281290538D1E02B8_Multicast(ContextIsValidType_t221B25824BF034AA390D02239F461440F4C6AFF9* __this, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___0_context, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	bool retVal = false;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ContextIsValidType_t221B25824BF034AA390D02239F461440F4C6AFF9* currentDelegate = reinterpret_cast<ContextIsValidType_t221B25824BF034AA390D02239F461440F4C6AFF9*>(delegatesToInvoke[i]);
		typedef bool (*FunctionPointerType) (RuntimeObject*, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_context, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
bool ContextIsValidType_Invoke_m27DC66426F72978C16FCB3F2281290538D1E02B8_OpenInst(ContextIsValidType_t221B25824BF034AA390D02239F461440F4C6AFF9* __this, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___0_context, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_context, method);
}
bool ContextIsValidType_Invoke_m27DC66426F72978C16FCB3F2281290538D1E02B8_OpenStatic(ContextIsValidType_t221B25824BF034AA390D02239F461440F4C6AFF9* __this, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___0_context, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_context, method);
}
bool ContextIsValidType_Invoke_m27DC66426F72978C16FCB3F2281290538D1E02B8_OpenStaticInvoker(ContextIsValidType_t221B25824BF034AA390D02239F461440F4C6AFF9* __this, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___0_context, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< bool, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_context);
}
bool ContextIsValidType_Invoke_m27DC66426F72978C16FCB3F2281290538D1E02B8_ClosedStaticInvoker(ContextIsValidType_t221B25824BF034AA390D02239F461440F4C6AFF9* __this, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___0_context, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< bool, RuntimeObject*, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_context);
}
IL2CPP_EXTERN_C  bool DelegatePInvokeWrapper_ContextIsValidType_t221B25824BF034AA390D02239F461440F4C6AFF9 (ContextIsValidType_t221B25824BF034AA390D02239F461440F4C6AFF9* __this, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___0_context, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)(rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_context);

	return static_cast<bool>(returnValue);
}
// System.Void ROS2.NativeRcl/ContextIsValidType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextIsValidType__ctor_mDE1AD482849061204241A8736B4F9FF43C7CBFC3 (ContextIsValidType_t221B25824BF034AA390D02239F461440F4C6AFF9* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&ContextIsValidType_Invoke_m27DC66426F72978C16FCB3F2281290538D1E02B8_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ContextIsValidType_Invoke_m27DC66426F72978C16FCB3F2281290538D1E02B8_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ContextIsValidType_Invoke_m27DC66426F72978C16FCB3F2281290538D1E02B8_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&ContextIsValidType_Invoke_m27DC66426F72978C16FCB3F2281290538D1E02B8_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ContextIsValidType_Invoke_m27DC66426F72978C16FCB3F2281290538D1E02B8_Multicast;
}
// System.Boolean ROS2.NativeRcl/ContextIsValidType::Invoke(ROS2.rcl_context_t&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ContextIsValidType_Invoke_m27DC66426F72978C16FCB3F2281290538D1E02B8 (ContextIsValidType_t221B25824BF034AA390D02239F461440F4C6AFF9* __this, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___0_context, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_context, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ROS2.NativeRcl/ContextIsValidType::BeginInvoke(ROS2.rcl_context_t&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ContextIsValidType_BeginInvoke_mB5C503E743023775FB9F38603B21A8CF4DBA732B (ContextIsValidType_t221B25824BF034AA390D02239F461440F4C6AFF9* __this, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___0_context, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C_il2cpp_TypeInfo_var, &*___0_context);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Boolean ROS2.NativeRcl/ContextIsValidType::EndInvoke(ROS2.rcl_context_t&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ContextIsValidType_EndInvoke_m2BCBF666F3F55CCFDD14CD729EBBD040D60A6842 (ContextIsValidType_t221B25824BF034AA390D02239F461440F4C6AFF9* __this, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___0_context, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_context,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, ___out_args);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t InitType_Invoke_m3354874F784804204C9C98B653576DBEF55B152B_Multicast(InitType_t332D494FBA92CD10754698D41BD5954D3CF77B8B* __this, int32_t ___0_argc, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_argv, rcl_init_options_t_t3AD5D13EA98B32B75776F07E84592514E212EA50* ___2_option, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___3_context, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		InitType_t332D494FBA92CD10754698D41BD5954D3CF77B8B* currentDelegate = reinterpret_cast<InitType_t332D494FBA92CD10754698D41BD5954D3CF77B8B*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, int32_t, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, rcl_init_options_t_t3AD5D13EA98B32B75776F07E84592514E212EA50*, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_argc, ___1_argv, ___2_option, ___3_context, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t InitType_Invoke_m3354874F784804204C9C98B653576DBEF55B152B_OpenInst(InitType_t332D494FBA92CD10754698D41BD5954D3CF77B8B* __this, int32_t ___0_argc, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_argv, rcl_init_options_t_t3AD5D13EA98B32B75776F07E84592514E212EA50* ___2_option, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___3_context, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (int32_t, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, rcl_init_options_t_t3AD5D13EA98B32B75776F07E84592514E212EA50*, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_argc, ___1_argv, ___2_option, ___3_context, method);
}
int32_t InitType_Invoke_m3354874F784804204C9C98B653576DBEF55B152B_OpenStatic(InitType_t332D494FBA92CD10754698D41BD5954D3CF77B8B* __this, int32_t ___0_argc, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_argv, rcl_init_options_t_t3AD5D13EA98B32B75776F07E84592514E212EA50* ___2_option, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___3_context, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (int32_t, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, rcl_init_options_t_t3AD5D13EA98B32B75776F07E84592514E212EA50*, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_argc, ___1_argv, ___2_option, ___3_context, method);
}
int32_t InitType_Invoke_m3354874F784804204C9C98B653576DBEF55B152B_OpenStaticInvoker(InitType_t332D494FBA92CD10754698D41BD5954D3CF77B8B* __this, int32_t ___0_argc, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_argv, rcl_init_options_t_t3AD5D13EA98B32B75776F07E84592514E212EA50* ___2_option, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___3_context, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, int32_t, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, rcl_init_options_t_t3AD5D13EA98B32B75776F07E84592514E212EA50*, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_argc, ___1_argv, ___2_option, ___3_context);
}
int32_t InitType_Invoke_m3354874F784804204C9C98B653576DBEF55B152B_ClosedStaticInvoker(InitType_t332D494FBA92CD10754698D41BD5954D3CF77B8B* __this, int32_t ___0_argc, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_argv, rcl_init_options_t_t3AD5D13EA98B32B75776F07E84592514E212EA50* ___2_option, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___3_context, const RuntimeMethod* method)
{
	return InvokerFuncInvoker5< int32_t, RuntimeObject*, int32_t, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, rcl_init_options_t_t3AD5D13EA98B32B75776F07E84592514E212EA50*, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_argc, ___1_argv, ___2_option, ___3_context);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_InitType_t332D494FBA92CD10754698D41BD5954D3CF77B8B (InitType_t332D494FBA92CD10754698D41BD5954D3CF77B8B* __this, int32_t ___0_argc, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_argv, rcl_init_options_t_t3AD5D13EA98B32B75776F07E84592514E212EA50* ___2_option, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___3_context, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)(int32_t, char**, rcl_init_options_t_t3AD5D13EA98B32B75776F07E84592514E212EA50*, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___1_argv' to native representation
	char** ____1_argv_marshaled = NULL;
	if (___1_argv != NULL)
	{
		il2cpp_array_size_t ____1_argv_Length = (___1_argv)->max_length;
		____1_argv_marshaled = il2cpp_codegen_marshal_allocate_array<char*>(____1_argv_Length + 1);
		(____1_argv_marshaled)[____1_argv_Length] = NULL;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____1_argv_Length); i++)
		{
			(____1_argv_marshaled)[i] = il2cpp_codegen_marshal_string((___1_argv)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____1_argv_marshaled = NULL;
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_argc, ____1_argv_marshaled, ___2_option, ___3_context);

	// Marshaling of parameter '___1_argv' back from native representation
	if (____1_argv_marshaled != NULL)
	{
		il2cpp_array_size_t ____1_argv_Length = (___1_argv)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____1_argv_Length); i++)
		{
			String_t* _____1_argv_marshaled_i__unmarshaled = NULL;
			_____1_argv_marshaled_i__unmarshaled = il2cpp_codegen_marshal_string_result((____1_argv_marshaled)[i]);
			(___1_argv)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _____1_argv_marshaled_i__unmarshaled);
		}
	}

	// Marshaling cleanup of parameter '___1_argv' native representation
	if (____1_argv_marshaled != NULL)
	{
		const il2cpp_array_size_t ____1_argv_marshaled_CleanupLoopCount = (___1_argv != NULL) ? (___1_argv)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____1_argv_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free((____1_argv_marshaled)[i]);
			(____1_argv_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(____1_argv_marshaled);
		____1_argv_marshaled = NULL;
	}

	return returnValue;
}
// System.Void ROS2.NativeRcl/InitType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitType__ctor_m42E07CA2828FAA9BAD2B5D107E1D8839AD804126 (InitType_t332D494FBA92CD10754698D41BD5954D3CF77B8B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&InitType_Invoke_m3354874F784804204C9C98B653576DBEF55B152B_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&InitType_Invoke_m3354874F784804204C9C98B653576DBEF55B152B_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&InitType_Invoke_m3354874F784804204C9C98B653576DBEF55B152B_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&InitType_Invoke_m3354874F784804204C9C98B653576DBEF55B152B_Multicast;
}
// System.Int32 ROS2.NativeRcl/InitType::Invoke(System.Int32,System.String[],ROS2.rcl_init_options_t&,ROS2.rcl_context_t&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InitType_Invoke_m3354874F784804204C9C98B653576DBEF55B152B (InitType_t332D494FBA92CD10754698D41BD5954D3CF77B8B* __this, int32_t ___0_argc, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_argv, rcl_init_options_t_t3AD5D13EA98B32B75776F07E84592514E212EA50* ___2_option, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___3_context, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, int32_t, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, rcl_init_options_t_t3AD5D13EA98B32B75776F07E84592514E212EA50*, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_argc, ___1_argv, ___2_option, ___3_context, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ROS2.NativeRcl/InitType::BeginInvoke(System.Int32,System.String[],ROS2.rcl_init_options_t&,ROS2.rcl_context_t&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InitType_BeginInvoke_m87A9E079D970E94A677B779BD7D2629A220E15A6 (InitType_t332D494FBA92CD10754698D41BD5954D3CF77B8B* __this, int32_t ___0_argc, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_argv, rcl_init_options_t_t3AD5D13EA98B32B75776F07E84592514E212EA50* ___2_option, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___3_context, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___4_callback, RuntimeObject* ___5_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&rcl_init_options_t_t3AD5D13EA98B32B75776F07E84592514E212EA50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___0_argc);
	__d_args[1] = ___1_argv;
	__d_args[2] = Box(rcl_init_options_t_t3AD5D13EA98B32B75776F07E84592514E212EA50_il2cpp_TypeInfo_var, &*___2_option);
	__d_args[3] = Box(rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C_il2cpp_TypeInfo_var, &*___3_context);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___4_callback, (RuntimeObject*)___5_object);
}
// System.Int32 ROS2.NativeRcl/InitType::EndInvoke(ROS2.rcl_init_options_t&,ROS2.rcl_context_t&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InitType_EndInvoke_m64641D91F0CC64E1ED27E0B7A674BF2842AE696C (InitType_t332D494FBA92CD10754698D41BD5954D3CF77B8B* __this, rcl_init_options_t_t3AD5D13EA98B32B75776F07E84592514E212EA50* ___0_option, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___1_context, RuntimeObject* ___2_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_option,
	___1_context,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___2_result, ___out_args);
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
int32_t ContextFiniType_Invoke_mF3D3B7CDAAC699F416FFECA74785DDF3D27ED525_Multicast(ContextFiniType_tDE6339FF3B53ECB6B5F180CA0660BE5C0770793F* __this, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___0_context, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ContextFiniType_tDE6339FF3B53ECB6B5F180CA0660BE5C0770793F* currentDelegate = reinterpret_cast<ContextFiniType_tDE6339FF3B53ECB6B5F180CA0660BE5C0770793F*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_context, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t ContextFiniType_Invoke_mF3D3B7CDAAC699F416FFECA74785DDF3D27ED525_OpenInst(ContextFiniType_tDE6339FF3B53ECB6B5F180CA0660BE5C0770793F* __this, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___0_context, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_context, method);
}
int32_t ContextFiniType_Invoke_mF3D3B7CDAAC699F416FFECA74785DDF3D27ED525_OpenStatic(ContextFiniType_tDE6339FF3B53ECB6B5F180CA0660BE5C0770793F* __this, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___0_context, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_context, method);
}
int32_t ContextFiniType_Invoke_mF3D3B7CDAAC699F416FFECA74785DDF3D27ED525_OpenStaticInvoker(ContextFiniType_tDE6339FF3B53ECB6B5F180CA0660BE5C0770793F* __this, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___0_context, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< int32_t, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_context);
}
int32_t ContextFiniType_Invoke_mF3D3B7CDAAC699F416FFECA74785DDF3D27ED525_ClosedStaticInvoker(ContextFiniType_tDE6339FF3B53ECB6B5F180CA0660BE5C0770793F* __this, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___0_context, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, RuntimeObject*, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_context);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_ContextFiniType_tDE6339FF3B53ECB6B5F180CA0660BE5C0770793F (ContextFiniType_tDE6339FF3B53ECB6B5F180CA0660BE5C0770793F* __this, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___0_context, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)(rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_context);

	return returnValue;
}
// System.Void ROS2.NativeRcl/ContextFiniType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextFiniType__ctor_m64AC1E2EA51B1845A5972D34D600E1AD60FD24A2 (ContextFiniType_tDE6339FF3B53ECB6B5F180CA0660BE5C0770793F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&ContextFiniType_Invoke_mF3D3B7CDAAC699F416FFECA74785DDF3D27ED525_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ContextFiniType_Invoke_mF3D3B7CDAAC699F416FFECA74785DDF3D27ED525_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ContextFiniType_Invoke_mF3D3B7CDAAC699F416FFECA74785DDF3D27ED525_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&ContextFiniType_Invoke_mF3D3B7CDAAC699F416FFECA74785DDF3D27ED525_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ContextFiniType_Invoke_mF3D3B7CDAAC699F416FFECA74785DDF3D27ED525_Multicast;
}
// System.Int32 ROS2.NativeRcl/ContextFiniType::Invoke(ROS2.rcl_context_t&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ContextFiniType_Invoke_mF3D3B7CDAAC699F416FFECA74785DDF3D27ED525 (ContextFiniType_tDE6339FF3B53ECB6B5F180CA0660BE5C0770793F* __this, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___0_context, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_context, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ROS2.NativeRcl/ContextFiniType::BeginInvoke(ROS2.rcl_context_t&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ContextFiniType_BeginInvoke_mE9D75B924477653A765C02C3E2D1C6FE57E434F4 (ContextFiniType_tDE6339FF3B53ECB6B5F180CA0660BE5C0770793F* __this, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___0_context, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C_il2cpp_TypeInfo_var, &*___0_context);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Int32 ROS2.NativeRcl/ContextFiniType::EndInvoke(ROS2.rcl_context_t&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ContextFiniType_EndInvoke_mA13870E309A91670F8F62F56522666D8A66CE4E2 (ContextFiniType_tDE6339FF3B53ECB6B5F180CA0660BE5C0770793F* __this, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___0_context, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_context,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, ___out_args);
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
rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4 GetZeroInitializedNodeType_Invoke_m4971529E411B1A334F39F9BA27EBCC9EEEC44349_Multicast(GetZeroInitializedNodeType_tB2B66F53C164F56418A2C83367AE26F42B8F4E92* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4 retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GetZeroInitializedNodeType_tB2B66F53C164F56418A2C83367AE26F42B8F4E92* currentDelegate = reinterpret_cast<GetZeroInitializedNodeType_tB2B66F53C164F56418A2C83367AE26F42B8F4E92*>(delegatesToInvoke[i]);
		typedef rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4 (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4 GetZeroInitializedNodeType_Invoke_m4971529E411B1A334F39F9BA27EBCC9EEEC44349_OpenInst(GetZeroInitializedNodeType_tB2B66F53C164F56418A2C83367AE26F42B8F4E92* __this, const RuntimeMethod* method)
{
	typedef rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4 (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4 GetZeroInitializedNodeType_Invoke_m4971529E411B1A334F39F9BA27EBCC9EEEC44349_OpenStatic(GetZeroInitializedNodeType_tB2B66F53C164F56418A2C83367AE26F42B8F4E92* __this, const RuntimeMethod* method)
{
	typedef rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4 (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4 GetZeroInitializedNodeType_Invoke_m4971529E411B1A334F39F9BA27EBCC9EEEC44349_OpenStaticInvoker(GetZeroInitializedNodeType_tB2B66F53C164F56418A2C83367AE26F42B8F4E92* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker0< rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4 >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL);
}
rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4 GetZeroInitializedNodeType_Invoke_m4971529E411B1A334F39F9BA27EBCC9EEEC44349_ClosedStaticInvoker(GetZeroInitializedNodeType_tB2B66F53C164F56418A2C83367AE26F42B8F4E92* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4, RuntimeObject* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4 DelegatePInvokeWrapper_GetZeroInitializedNodeType_tB2B66F53C164F56418A2C83367AE26F42B8F4E92 (GetZeroInitializedNodeType_tB2B66F53C164F56418A2C83367AE26F42B8F4E92* __this, const RuntimeMethod* method)
{
	typedef rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4 (CDECL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4 returnValue = il2cppPInvokeFunc();

	return returnValue;
}
// System.Void ROS2.NativeRcl/GetZeroInitializedNodeType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetZeroInitializedNodeType__ctor_m5B443C2526A40C717757DA3BEDD91EC283D17887 (GetZeroInitializedNodeType_tB2B66F53C164F56418A2C83367AE26F42B8F4E92* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&GetZeroInitializedNodeType_Invoke_m4971529E411B1A334F39F9BA27EBCC9EEEC44349_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&GetZeroInitializedNodeType_Invoke_m4971529E411B1A334F39F9BA27EBCC9EEEC44349_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetZeroInitializedNodeType_Invoke_m4971529E411B1A334F39F9BA27EBCC9EEEC44349_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&GetZeroInitializedNodeType_Invoke_m4971529E411B1A334F39F9BA27EBCC9EEEC44349_Multicast;
}
// ROS2.rcl_node_t ROS2.NativeRcl/GetZeroInitializedNodeType::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4 GetZeroInitializedNodeType_Invoke_m4971529E411B1A334F39F9BA27EBCC9EEEC44349 (GetZeroInitializedNodeType_tB2B66F53C164F56418A2C83367AE26F42B8F4E92* __this, const RuntimeMethod* method) 
{
	typedef rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4 (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ROS2.NativeRcl/GetZeroInitializedNodeType::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GetZeroInitializedNodeType_BeginInvoke_mC6B9B367FDF4EC79B4F87E6048877FF5A9428FB9 (GetZeroInitializedNodeType_tB2B66F53C164F56418A2C83367AE26F42B8F4E92* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// ROS2.rcl_node_t ROS2.NativeRcl/GetZeroInitializedNodeType::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4 GetZeroInitializedNodeType_EndInvoke_m6671624C3F8100421F5E633D404A5283D63876C2 (GetZeroInitializedNodeType_tB2B66F53C164F56418A2C83367AE26F42B8F4E92* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t NodeInitType_Invoke_mCD6B59F3B3FE2FB1353B8EA4DFA95066BBD629BD_Multicast(NodeInitType_t365D995BC724D5F7042E191CE9A4B13A5C3865C0* __this, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___0_node, String_t* ___1_name, String_t* ___2_node_namespace, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___3_context, intptr_t ___4_default_options, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		NodeInitType_t365D995BC724D5F7042E191CE9A4B13A5C3865C0* currentDelegate = reinterpret_cast<NodeInitType_t365D995BC724D5F7042E191CE9A4B13A5C3865C0*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4*, String_t*, String_t*, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C*, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_node, ___1_name, ___2_node_namespace, ___3_context, ___4_default_options, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t NodeInitType_Invoke_mCD6B59F3B3FE2FB1353B8EA4DFA95066BBD629BD_OpenInst(NodeInitType_t365D995BC724D5F7042E191CE9A4B13A5C3865C0* __this, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___0_node, String_t* ___1_name, String_t* ___2_node_namespace, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___3_context, intptr_t ___4_default_options, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4*, String_t*, String_t*, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_node, ___1_name, ___2_node_namespace, ___3_context, ___4_default_options, method);
}
int32_t NodeInitType_Invoke_mCD6B59F3B3FE2FB1353B8EA4DFA95066BBD629BD_OpenStatic(NodeInitType_t365D995BC724D5F7042E191CE9A4B13A5C3865C0* __this, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___0_node, String_t* ___1_name, String_t* ___2_node_namespace, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___3_context, intptr_t ___4_default_options, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4*, String_t*, String_t*, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_node, ___1_name, ___2_node_namespace, ___3_context, ___4_default_options, method);
}
int32_t NodeInitType_Invoke_mCD6B59F3B3FE2FB1353B8EA4DFA95066BBD629BD_OpenStaticInvoker(NodeInitType_t365D995BC724D5F7042E191CE9A4B13A5C3865C0* __this, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___0_node, String_t* ___1_name, String_t* ___2_node_namespace, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___3_context, intptr_t ___4_default_options, const RuntimeMethod* method)
{
	return InvokerFuncInvoker5< int32_t, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4*, String_t*, String_t*, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C*, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_node, ___1_name, ___2_node_namespace, ___3_context, ___4_default_options);
}
int32_t NodeInitType_Invoke_mCD6B59F3B3FE2FB1353B8EA4DFA95066BBD629BD_ClosedStaticInvoker(NodeInitType_t365D995BC724D5F7042E191CE9A4B13A5C3865C0* __this, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___0_node, String_t* ___1_name, String_t* ___2_node_namespace, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___3_context, intptr_t ___4_default_options, const RuntimeMethod* method)
{
	return InvokerFuncInvoker6< int32_t, RuntimeObject*, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4*, String_t*, String_t*, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C*, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_node, ___1_name, ___2_node_namespace, ___3_context, ___4_default_options);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_NodeInitType_t365D995BC724D5F7042E191CE9A4B13A5C3865C0 (NodeInitType_t365D995BC724D5F7042E191CE9A4B13A5C3865C0* __this, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___0_node, String_t* ___1_name, String_t* ___2_node_namespace, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___3_context, intptr_t ___4_default_options, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)(rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4*, char*, char*, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C*, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___1_name' to native representation
	char* ____1_name_marshaled = NULL;
	____1_name_marshaled = il2cpp_codegen_marshal_string(___1_name);

	// Marshaling of parameter '___2_node_namespace' to native representation
	char* ____2_node_namespace_marshaled = NULL;
	____2_node_namespace_marshaled = il2cpp_codegen_marshal_string(___2_node_namespace);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_node, ____1_name_marshaled, ____2_node_namespace_marshaled, ___3_context, ___4_default_options);

	// Marshaling cleanup of parameter '___1_name' native representation
	il2cpp_codegen_marshal_free(____1_name_marshaled);
	____1_name_marshaled = NULL;

	// Marshaling cleanup of parameter '___2_node_namespace' native representation
	il2cpp_codegen_marshal_free(____2_node_namespace_marshaled);
	____2_node_namespace_marshaled = NULL;

	return returnValue;
}
// System.Void ROS2.NativeRcl/NodeInitType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeInitType__ctor_mD4B6F04C12A76B23F9ECBAD6B9C1D65FF54D5291 (NodeInitType_t365D995BC724D5F7042E191CE9A4B13A5C3865C0* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 5;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NodeInitType_Invoke_mCD6B59F3B3FE2FB1353B8EA4DFA95066BBD629BD_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&NodeInitType_Invoke_mCD6B59F3B3FE2FB1353B8EA4DFA95066BBD629BD_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NodeInitType_Invoke_mCD6B59F3B3FE2FB1353B8EA4DFA95066BBD629BD_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 4;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&NodeInitType_Invoke_mCD6B59F3B3FE2FB1353B8EA4DFA95066BBD629BD_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&NodeInitType_Invoke_mCD6B59F3B3FE2FB1353B8EA4DFA95066BBD629BD_Multicast;
}
// System.Int32 ROS2.NativeRcl/NodeInitType::Invoke(ROS2.rcl_node_t&,System.String,System.String,ROS2.rcl_context_t&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NodeInitType_Invoke_mCD6B59F3B3FE2FB1353B8EA4DFA95066BBD629BD (NodeInitType_t365D995BC724D5F7042E191CE9A4B13A5C3865C0* __this, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___0_node, String_t* ___1_name, String_t* ___2_node_namespace, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___3_context, intptr_t ___4_default_options, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4*, String_t*, String_t*, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_node, ___1_name, ___2_node_namespace, ___3_context, ___4_default_options, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ROS2.NativeRcl/NodeInitType::BeginInvoke(ROS2.rcl_node_t&,System.String,System.String,ROS2.rcl_context_t&,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NodeInitType_BeginInvoke_m704C724F7DDBB505E488042B1085735CA9C8DF52 (NodeInitType_t365D995BC724D5F7042E191CE9A4B13A5C3865C0* __this, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___0_node, String_t* ___1_name, String_t* ___2_node_namespace, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___3_context, intptr_t ___4_default_options, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___5_callback, RuntimeObject* ___6_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = Box(rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4_il2cpp_TypeInfo_var, &*___0_node);
	__d_args[1] = ___1_name;
	__d_args[2] = ___2_node_namespace;
	__d_args[3] = Box(rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C_il2cpp_TypeInfo_var, &*___3_context);
	__d_args[4] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___4_default_options);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___5_callback, (RuntimeObject*)___6_object);
}
// System.Int32 ROS2.NativeRcl/NodeInitType::EndInvoke(ROS2.rcl_node_t&,ROS2.rcl_context_t&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NodeInitType_EndInvoke_mCFAB52EBEBB43F478504F05F5FC94A98D1F80C49 (NodeInitType_t365D995BC724D5F7042E191CE9A4B13A5C3865C0* __this, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___0_node, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___1_context, RuntimeObject* ___2_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_node,
	___1_context,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___2_result, ___out_args);
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
int32_t NodeFiniType_Invoke_mA4955F10BF547445FEEF088F34F2B874823921E6_Multicast(NodeFiniType_tA1CDE02D8B40017868A11938E7CDE8B6DF56F210* __this, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___0_node, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		NodeFiniType_tA1CDE02D8B40017868A11938E7CDE8B6DF56F210* currentDelegate = reinterpret_cast<NodeFiniType_tA1CDE02D8B40017868A11938E7CDE8B6DF56F210*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_node, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t NodeFiniType_Invoke_mA4955F10BF547445FEEF088F34F2B874823921E6_OpenInst(NodeFiniType_tA1CDE02D8B40017868A11938E7CDE8B6DF56F210* __this, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___0_node, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_node, method);
}
int32_t NodeFiniType_Invoke_mA4955F10BF547445FEEF088F34F2B874823921E6_OpenStatic(NodeFiniType_tA1CDE02D8B40017868A11938E7CDE8B6DF56F210* __this, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___0_node, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_node, method);
}
int32_t NodeFiniType_Invoke_mA4955F10BF547445FEEF088F34F2B874823921E6_OpenStaticInvoker(NodeFiniType_tA1CDE02D8B40017868A11938E7CDE8B6DF56F210* __this, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___0_node, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< int32_t, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_node);
}
int32_t NodeFiniType_Invoke_mA4955F10BF547445FEEF088F34F2B874823921E6_ClosedStaticInvoker(NodeFiniType_tA1CDE02D8B40017868A11938E7CDE8B6DF56F210* __this, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___0_node, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, RuntimeObject*, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_node);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_NodeFiniType_tA1CDE02D8B40017868A11938E7CDE8B6DF56F210 (NodeFiniType_tA1CDE02D8B40017868A11938E7CDE8B6DF56F210* __this, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___0_node, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)(rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_node);

	return returnValue;
}
// System.Void ROS2.NativeRcl/NodeFiniType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeFiniType__ctor_mFBA761825D56347B4803F59FB4D51D7373FE5B63 (NodeFiniType_tA1CDE02D8B40017868A11938E7CDE8B6DF56F210* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&NodeFiniType_Invoke_mA4955F10BF547445FEEF088F34F2B874823921E6_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&NodeFiniType_Invoke_mA4955F10BF547445FEEF088F34F2B874823921E6_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NodeFiniType_Invoke_mA4955F10BF547445FEEF088F34F2B874823921E6_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&NodeFiniType_Invoke_mA4955F10BF547445FEEF088F34F2B874823921E6_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&NodeFiniType_Invoke_mA4955F10BF547445FEEF088F34F2B874823921E6_Multicast;
}
// System.Int32 ROS2.NativeRcl/NodeFiniType::Invoke(ROS2.rcl_node_t&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NodeFiniType_Invoke_mA4955F10BF547445FEEF088F34F2B874823921E6 (NodeFiniType_tA1CDE02D8B40017868A11938E7CDE8B6DF56F210* __this, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___0_node, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_node, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ROS2.NativeRcl/NodeFiniType::BeginInvoke(ROS2.rcl_node_t&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NodeFiniType_BeginInvoke_mE3D272E9CEA487DB49BD34F95C166FF2462D2730 (NodeFiniType_tA1CDE02D8B40017868A11938E7CDE8B6DF56F210* __this, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___0_node, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4_il2cpp_TypeInfo_var, &*___0_node);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Int32 ROS2.NativeRcl/NodeFiniType::EndInvoke(ROS2.rcl_node_t&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NodeFiniType_EndInvoke_mC23BE57B659FD5BB5A9AD1AC8DB58989AC87A5AF (NodeFiniType_tA1CDE02D8B40017868A11938E7CDE8B6DF56F210* __this, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___0_node, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_node,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, ___out_args);
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
intptr_t NodeGetNameType_Invoke_mBDA02B2AE615D3AF49925A19A04A3390374C674C_Multicast(NodeGetNameType_t2D236E111C5F4170456B73FA899F7B3E62D48E31* __this, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___0_node, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	intptr_t retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		NodeGetNameType_t2D236E111C5F4170456B73FA899F7B3E62D48E31* currentDelegate = reinterpret_cast<NodeGetNameType_t2D236E111C5F4170456B73FA899F7B3E62D48E31*>(delegatesToInvoke[i]);
		typedef intptr_t (*FunctionPointerType) (RuntimeObject*, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_node, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
intptr_t NodeGetNameType_Invoke_mBDA02B2AE615D3AF49925A19A04A3390374C674C_OpenInst(NodeGetNameType_t2D236E111C5F4170456B73FA899F7B3E62D48E31* __this, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___0_node, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_node, method);
}
intptr_t NodeGetNameType_Invoke_mBDA02B2AE615D3AF49925A19A04A3390374C674C_OpenStatic(NodeGetNameType_t2D236E111C5F4170456B73FA899F7B3E62D48E31* __this, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___0_node, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_node, method);
}
intptr_t NodeGetNameType_Invoke_mBDA02B2AE615D3AF49925A19A04A3390374C674C_OpenStaticInvoker(NodeGetNameType_t2D236E111C5F4170456B73FA899F7B3E62D48E31* __this, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___0_node, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< intptr_t, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_node);
}
intptr_t NodeGetNameType_Invoke_mBDA02B2AE615D3AF49925A19A04A3390374C674C_ClosedStaticInvoker(NodeGetNameType_t2D236E111C5F4170456B73FA899F7B3E62D48E31* __this, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___0_node, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< intptr_t, RuntimeObject*, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_node);
}
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_NodeGetNameType_t2D236E111C5F4170456B73FA899F7B3E62D48E31 (NodeGetNameType_t2D236E111C5F4170456B73FA899F7B3E62D48E31* __this, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___0_node, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc)(rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___0_node);

	return returnValue;
}
// System.Void ROS2.NativeRcl/NodeGetNameType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeGetNameType__ctor_m696C728A8E7C73F7FDDA5C9C4AF03C481CADBFB3 (NodeGetNameType_t2D236E111C5F4170456B73FA899F7B3E62D48E31* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&NodeGetNameType_Invoke_mBDA02B2AE615D3AF49925A19A04A3390374C674C_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&NodeGetNameType_Invoke_mBDA02B2AE615D3AF49925A19A04A3390374C674C_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NodeGetNameType_Invoke_mBDA02B2AE615D3AF49925A19A04A3390374C674C_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&NodeGetNameType_Invoke_mBDA02B2AE615D3AF49925A19A04A3390374C674C_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&NodeGetNameType_Invoke_mBDA02B2AE615D3AF49925A19A04A3390374C674C_Multicast;
}
// System.IntPtr ROS2.NativeRcl/NodeGetNameType::Invoke(ROS2.rcl_node_t&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NodeGetNameType_Invoke_mBDA02B2AE615D3AF49925A19A04A3390374C674C (NodeGetNameType_t2D236E111C5F4170456B73FA899F7B3E62D48E31* __this, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___0_node, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_node, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ROS2.NativeRcl/NodeGetNameType::BeginInvoke(ROS2.rcl_node_t&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NodeGetNameType_BeginInvoke_m836FEAB78B5AE0D6951F12706D11F942EEE2D1D1 (NodeGetNameType_t2D236E111C5F4170456B73FA899F7B3E62D48E31* __this, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___0_node, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4_il2cpp_TypeInfo_var, &*___0_node);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.IntPtr ROS2.NativeRcl/NodeGetNameType::EndInvoke(ROS2.rcl_node_t&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NodeGetNameType_EndInvoke_mB3C2D6F3E84725FCBC294E9ED5F2B9FCD38155D5 (NodeGetNameType_t2D236E111C5F4170456B73FA899F7B3E62D48E31* __this, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___0_node, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_node,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, ___out_args);
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
intptr_t NodeGetNamespaceType_Invoke_m738E141A5C5C150936E6A7497262170CCF29F786_Multicast(NodeGetNamespaceType_t30FA5A59AE1F125ECA0B826562E15819F9F2AED0* __this, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___0_node, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	intptr_t retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		NodeGetNamespaceType_t30FA5A59AE1F125ECA0B826562E15819F9F2AED0* currentDelegate = reinterpret_cast<NodeGetNamespaceType_t30FA5A59AE1F125ECA0B826562E15819F9F2AED0*>(delegatesToInvoke[i]);
		typedef intptr_t (*FunctionPointerType) (RuntimeObject*, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_node, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
intptr_t NodeGetNamespaceType_Invoke_m738E141A5C5C150936E6A7497262170CCF29F786_OpenInst(NodeGetNamespaceType_t30FA5A59AE1F125ECA0B826562E15819F9F2AED0* __this, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___0_node, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_node, method);
}
intptr_t NodeGetNamespaceType_Invoke_m738E141A5C5C150936E6A7497262170CCF29F786_OpenStatic(NodeGetNamespaceType_t30FA5A59AE1F125ECA0B826562E15819F9F2AED0* __this, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___0_node, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_node, method);
}
intptr_t NodeGetNamespaceType_Invoke_m738E141A5C5C150936E6A7497262170CCF29F786_OpenStaticInvoker(NodeGetNamespaceType_t30FA5A59AE1F125ECA0B826562E15819F9F2AED0* __this, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___0_node, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< intptr_t, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_node);
}
intptr_t NodeGetNamespaceType_Invoke_m738E141A5C5C150936E6A7497262170CCF29F786_ClosedStaticInvoker(NodeGetNamespaceType_t30FA5A59AE1F125ECA0B826562E15819F9F2AED0* __this, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___0_node, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< intptr_t, RuntimeObject*, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_node);
}
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_NodeGetNamespaceType_t30FA5A59AE1F125ECA0B826562E15819F9F2AED0 (NodeGetNamespaceType_t30FA5A59AE1F125ECA0B826562E15819F9F2AED0* __this, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___0_node, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc)(rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___0_node);

	return returnValue;
}
// System.Void ROS2.NativeRcl/NodeGetNamespaceType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeGetNamespaceType__ctor_mCF49A87E08C0985939E6517F769CDF1A00821EFF (NodeGetNamespaceType_t30FA5A59AE1F125ECA0B826562E15819F9F2AED0* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&NodeGetNamespaceType_Invoke_m738E141A5C5C150936E6A7497262170CCF29F786_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&NodeGetNamespaceType_Invoke_m738E141A5C5C150936E6A7497262170CCF29F786_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NodeGetNamespaceType_Invoke_m738E141A5C5C150936E6A7497262170CCF29F786_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&NodeGetNamespaceType_Invoke_m738E141A5C5C150936E6A7497262170CCF29F786_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&NodeGetNamespaceType_Invoke_m738E141A5C5C150936E6A7497262170CCF29F786_Multicast;
}
// System.IntPtr ROS2.NativeRcl/NodeGetNamespaceType::Invoke(ROS2.rcl_node_t&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NodeGetNamespaceType_Invoke_m738E141A5C5C150936E6A7497262170CCF29F786 (NodeGetNamespaceType_t30FA5A59AE1F125ECA0B826562E15819F9F2AED0* __this, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___0_node, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_node, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ROS2.NativeRcl/NodeGetNamespaceType::BeginInvoke(ROS2.rcl_node_t&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NodeGetNamespaceType_BeginInvoke_m1BF2079F72C587315D81CCE36B88858B897D77CD (NodeGetNamespaceType_t30FA5A59AE1F125ECA0B826562E15819F9F2AED0* __this, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___0_node, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4_il2cpp_TypeInfo_var, &*___0_node);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.IntPtr ROS2.NativeRcl/NodeGetNamespaceType::EndInvoke(ROS2.rcl_node_t&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NodeGetNamespaceType_EndInvoke_m94341B99006DC4B5704523C31B4ADC0D196DB716 (NodeGetNamespaceType_t30FA5A59AE1F125ECA0B826562E15819F9F2AED0* __this, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___0_node, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_node,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, ___out_args);
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
intptr_t PublisherGetDefaultOptionsType_Invoke_mC040D61CB42495D2798C3D5EC240F9E86A53ACFA_Multicast(PublisherGetDefaultOptionsType_tF64AECD0842363AFF4C4B902D90A28492CEF5BA1* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	intptr_t retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PublisherGetDefaultOptionsType_tF64AECD0842363AFF4C4B902D90A28492CEF5BA1* currentDelegate = reinterpret_cast<PublisherGetDefaultOptionsType_tF64AECD0842363AFF4C4B902D90A28492CEF5BA1*>(delegatesToInvoke[i]);
		typedef intptr_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
intptr_t PublisherGetDefaultOptionsType_Invoke_mC040D61CB42495D2798C3D5EC240F9E86A53ACFA_OpenInst(PublisherGetDefaultOptionsType_tF64AECD0842363AFF4C4B902D90A28492CEF5BA1* __this, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
intptr_t PublisherGetDefaultOptionsType_Invoke_mC040D61CB42495D2798C3D5EC240F9E86A53ACFA_OpenStatic(PublisherGetDefaultOptionsType_tF64AECD0842363AFF4C4B902D90A28492CEF5BA1* __this, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
intptr_t PublisherGetDefaultOptionsType_Invoke_mC040D61CB42495D2798C3D5EC240F9E86A53ACFA_OpenStaticInvoker(PublisherGetDefaultOptionsType_tF64AECD0842363AFF4C4B902D90A28492CEF5BA1* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker0< intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL);
}
intptr_t PublisherGetDefaultOptionsType_Invoke_mC040D61CB42495D2798C3D5EC240F9E86A53ACFA_ClosedStaticInvoker(PublisherGetDefaultOptionsType_tF64AECD0842363AFF4C4B902D90A28492CEF5BA1* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< intptr_t, RuntimeObject* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_PublisherGetDefaultOptionsType_tF64AECD0842363AFF4C4B902D90A28492CEF5BA1 (PublisherGetDefaultOptionsType_tF64AECD0842363AFF4C4B902D90A28492CEF5BA1* __this, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc();

	return returnValue;
}
// System.Void ROS2.NativeRcl/PublisherGetDefaultOptionsType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PublisherGetDefaultOptionsType__ctor_mA0B1931E2082D3B33B9E267C3E77F2FA2E8F99F1 (PublisherGetDefaultOptionsType_tF64AECD0842363AFF4C4B902D90A28492CEF5BA1* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&PublisherGetDefaultOptionsType_Invoke_mC040D61CB42495D2798C3D5EC240F9E86A53ACFA_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&PublisherGetDefaultOptionsType_Invoke_mC040D61CB42495D2798C3D5EC240F9E86A53ACFA_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PublisherGetDefaultOptionsType_Invoke_mC040D61CB42495D2798C3D5EC240F9E86A53ACFA_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&PublisherGetDefaultOptionsType_Invoke_mC040D61CB42495D2798C3D5EC240F9E86A53ACFA_Multicast;
}
// System.IntPtr ROS2.NativeRcl/PublisherGetDefaultOptionsType::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PublisherGetDefaultOptionsType_Invoke_mC040D61CB42495D2798C3D5EC240F9E86A53ACFA (PublisherGetDefaultOptionsType_tF64AECD0842363AFF4C4B902D90A28492CEF5BA1* __this, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ROS2.NativeRcl/PublisherGetDefaultOptionsType::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PublisherGetDefaultOptionsType_BeginInvoke_mE8141627D0B1D7969487A6FDAAEAAB9F16382443 (PublisherGetDefaultOptionsType_tF64AECD0842363AFF4C4B902D90A28492CEF5BA1* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// System.IntPtr ROS2.NativeRcl/PublisherGetDefaultOptionsType::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PublisherGetDefaultOptionsType_EndInvoke_mFB65FF68CED37E0153F9FEE81FAC822131F98C5C (PublisherGetDefaultOptionsType_tF64AECD0842363AFF4C4B902D90A28492CEF5BA1* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB GetZeroInitiazizedPublisherType_Invoke_m389E74AC34BC9FEAD1F007F9B34CB27DAD4C8D77_Multicast(GetZeroInitiazizedPublisherType_t01F144F0515432B1C3F325276AA671B750E8629D* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GetZeroInitiazizedPublisherType_t01F144F0515432B1C3F325276AA671B750E8629D* currentDelegate = reinterpret_cast<GetZeroInitiazizedPublisherType_t01F144F0515432B1C3F325276AA671B750E8629D*>(delegatesToInvoke[i]);
		typedef rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB GetZeroInitiazizedPublisherType_Invoke_m389E74AC34BC9FEAD1F007F9B34CB27DAD4C8D77_OpenInst(GetZeroInitiazizedPublisherType_t01F144F0515432B1C3F325276AA671B750E8629D* __this, const RuntimeMethod* method)
{
	typedef rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB GetZeroInitiazizedPublisherType_Invoke_m389E74AC34BC9FEAD1F007F9B34CB27DAD4C8D77_OpenStatic(GetZeroInitiazizedPublisherType_t01F144F0515432B1C3F325276AA671B750E8629D* __this, const RuntimeMethod* method)
{
	typedef rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB GetZeroInitiazizedPublisherType_Invoke_m389E74AC34BC9FEAD1F007F9B34CB27DAD4C8D77_OpenStaticInvoker(GetZeroInitiazizedPublisherType_t01F144F0515432B1C3F325276AA671B750E8629D* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker0< rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL);
}
rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB GetZeroInitiazizedPublisherType_Invoke_m389E74AC34BC9FEAD1F007F9B34CB27DAD4C8D77_ClosedStaticInvoker(GetZeroInitiazizedPublisherType_t01F144F0515432B1C3F325276AA671B750E8629D* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB, RuntimeObject* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB DelegatePInvokeWrapper_GetZeroInitiazizedPublisherType_t01F144F0515432B1C3F325276AA671B750E8629D (GetZeroInitiazizedPublisherType_t01F144F0515432B1C3F325276AA671B750E8629D* __this, const RuntimeMethod* method)
{
	typedef rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB (CDECL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB returnValue = il2cppPInvokeFunc();

	return returnValue;
}
// System.Void ROS2.NativeRcl/GetZeroInitiazizedPublisherType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetZeroInitiazizedPublisherType__ctor_m5C896A97A22832F49DD0A780B03F36453B29E032 (GetZeroInitiazizedPublisherType_t01F144F0515432B1C3F325276AA671B750E8629D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&GetZeroInitiazizedPublisherType_Invoke_m389E74AC34BC9FEAD1F007F9B34CB27DAD4C8D77_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&GetZeroInitiazizedPublisherType_Invoke_m389E74AC34BC9FEAD1F007F9B34CB27DAD4C8D77_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetZeroInitiazizedPublisherType_Invoke_m389E74AC34BC9FEAD1F007F9B34CB27DAD4C8D77_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&GetZeroInitiazizedPublisherType_Invoke_m389E74AC34BC9FEAD1F007F9B34CB27DAD4C8D77_Multicast;
}
// ROS2.rcl_publisher_t ROS2.NativeRcl/GetZeroInitiazizedPublisherType::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB GetZeroInitiazizedPublisherType_Invoke_m389E74AC34BC9FEAD1F007F9B34CB27DAD4C8D77 (GetZeroInitiazizedPublisherType_t01F144F0515432B1C3F325276AA671B750E8629D* __this, const RuntimeMethod* method) 
{
	typedef rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ROS2.NativeRcl/GetZeroInitiazizedPublisherType::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GetZeroInitiazizedPublisherType_BeginInvoke_m21A19A972C1FEFAD1F4DDA62BE3C1A96DC962BB9 (GetZeroInitiazizedPublisherType_t01F144F0515432B1C3F325276AA671B750E8629D* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// ROS2.rcl_publisher_t ROS2.NativeRcl/GetZeroInitiazizedPublisherType::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB GetZeroInitiazizedPublisherType_EndInvoke_m83F6B431288043CD6BE8FFE8FD8BD4CA7A266D7C (GetZeroInitiazizedPublisherType_t01F144F0515432B1C3F325276AA671B750E8629D* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t PublisherInitType_Invoke_mAF2E9C0A254E009AA2FFE8D9F61F76479F82915B_Multicast(PublisherInitType_t0B6F34AF630DBB00D974207F5B6275F836349FF6* __this, rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB* ___0_publisher, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___1_node, intptr_t ___2_type_support_ptr, String_t* ___3_topic_name, intptr_t ___4_publisher_options, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PublisherInitType_t0B6F34AF630DBB00D974207F5B6275F836349FF6* currentDelegate = reinterpret_cast<PublisherInitType_t0B6F34AF630DBB00D974207F5B6275F836349FF6*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB*, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4*, intptr_t, String_t*, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_publisher, ___1_node, ___2_type_support_ptr, ___3_topic_name, ___4_publisher_options, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t PublisherInitType_Invoke_mAF2E9C0A254E009AA2FFE8D9F61F76479F82915B_OpenInst(PublisherInitType_t0B6F34AF630DBB00D974207F5B6275F836349FF6* __this, rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB* ___0_publisher, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___1_node, intptr_t ___2_type_support_ptr, String_t* ___3_topic_name, intptr_t ___4_publisher_options, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB*, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4*, intptr_t, String_t*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_publisher, ___1_node, ___2_type_support_ptr, ___3_topic_name, ___4_publisher_options, method);
}
int32_t PublisherInitType_Invoke_mAF2E9C0A254E009AA2FFE8D9F61F76479F82915B_OpenStatic(PublisherInitType_t0B6F34AF630DBB00D974207F5B6275F836349FF6* __this, rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB* ___0_publisher, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___1_node, intptr_t ___2_type_support_ptr, String_t* ___3_topic_name, intptr_t ___4_publisher_options, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB*, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4*, intptr_t, String_t*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_publisher, ___1_node, ___2_type_support_ptr, ___3_topic_name, ___4_publisher_options, method);
}
int32_t PublisherInitType_Invoke_mAF2E9C0A254E009AA2FFE8D9F61F76479F82915B_OpenStaticInvoker(PublisherInitType_t0B6F34AF630DBB00D974207F5B6275F836349FF6* __this, rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB* ___0_publisher, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___1_node, intptr_t ___2_type_support_ptr, String_t* ___3_topic_name, intptr_t ___4_publisher_options, const RuntimeMethod* method)
{
	return InvokerFuncInvoker5< int32_t, rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB*, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4*, intptr_t, String_t*, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_publisher, ___1_node, ___2_type_support_ptr, ___3_topic_name, ___4_publisher_options);
}
int32_t PublisherInitType_Invoke_mAF2E9C0A254E009AA2FFE8D9F61F76479F82915B_ClosedStaticInvoker(PublisherInitType_t0B6F34AF630DBB00D974207F5B6275F836349FF6* __this, rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB* ___0_publisher, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___1_node, intptr_t ___2_type_support_ptr, String_t* ___3_topic_name, intptr_t ___4_publisher_options, const RuntimeMethod* method)
{
	return InvokerFuncInvoker6< int32_t, RuntimeObject*, rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB*, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4*, intptr_t, String_t*, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_publisher, ___1_node, ___2_type_support_ptr, ___3_topic_name, ___4_publisher_options);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_PublisherInitType_t0B6F34AF630DBB00D974207F5B6275F836349FF6 (PublisherInitType_t0B6F34AF630DBB00D974207F5B6275F836349FF6* __this, rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB* ___0_publisher, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___1_node, intptr_t ___2_type_support_ptr, String_t* ___3_topic_name, intptr_t ___4_publisher_options, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)(rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB*, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4*, intptr_t, char*, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___3_topic_name' to native representation
	char* ____3_topic_name_marshaled = NULL;
	____3_topic_name_marshaled = il2cpp_codegen_marshal_string(___3_topic_name);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_publisher, ___1_node, ___2_type_support_ptr, ____3_topic_name_marshaled, ___4_publisher_options);

	// Marshaling cleanup of parameter '___3_topic_name' native representation
	il2cpp_codegen_marshal_free(____3_topic_name_marshaled);
	____3_topic_name_marshaled = NULL;

	return returnValue;
}
// System.Void ROS2.NativeRcl/PublisherInitType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PublisherInitType__ctor_mE0F288D21B7A38C8B7B3463D37F2CE4684867A79 (PublisherInitType_t0B6F34AF630DBB00D974207F5B6275F836349FF6* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 5;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PublisherInitType_Invoke_mAF2E9C0A254E009AA2FFE8D9F61F76479F82915B_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&PublisherInitType_Invoke_mAF2E9C0A254E009AA2FFE8D9F61F76479F82915B_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PublisherInitType_Invoke_mAF2E9C0A254E009AA2FFE8D9F61F76479F82915B_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 4;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&PublisherInitType_Invoke_mAF2E9C0A254E009AA2FFE8D9F61F76479F82915B_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&PublisherInitType_Invoke_mAF2E9C0A254E009AA2FFE8D9F61F76479F82915B_Multicast;
}
// System.Int32 ROS2.NativeRcl/PublisherInitType::Invoke(ROS2.rcl_publisher_t&,ROS2.rcl_node_t&,System.IntPtr,System.String,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PublisherInitType_Invoke_mAF2E9C0A254E009AA2FFE8D9F61F76479F82915B (PublisherInitType_t0B6F34AF630DBB00D974207F5B6275F836349FF6* __this, rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB* ___0_publisher, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___1_node, intptr_t ___2_type_support_ptr, String_t* ___3_topic_name, intptr_t ___4_publisher_options, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB*, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4*, intptr_t, String_t*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_publisher, ___1_node, ___2_type_support_ptr, ___3_topic_name, ___4_publisher_options, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ROS2.NativeRcl/PublisherInitType::BeginInvoke(ROS2.rcl_publisher_t&,ROS2.rcl_node_t&,System.IntPtr,System.String,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PublisherInitType_BeginInvoke_mADF70B459529C6735CFBEC52EC718AAA6DD52558 (PublisherInitType_t0B6F34AF630DBB00D974207F5B6275F836349FF6* __this, rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB* ___0_publisher, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___1_node, intptr_t ___2_type_support_ptr, String_t* ___3_topic_name, intptr_t ___4_publisher_options, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___5_callback, RuntimeObject* ___6_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = Box(rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB_il2cpp_TypeInfo_var, &*___0_publisher);
	__d_args[1] = Box(rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4_il2cpp_TypeInfo_var, &*___1_node);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___2_type_support_ptr);
	__d_args[3] = ___3_topic_name;
	__d_args[4] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___4_publisher_options);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___5_callback, (RuntimeObject*)___6_object);
}
// System.Int32 ROS2.NativeRcl/PublisherInitType::EndInvoke(ROS2.rcl_publisher_t&,ROS2.rcl_node_t&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PublisherInitType_EndInvoke_m78E819113970B7658D233B9AEB990B112E6EC533 (PublisherInitType_t0B6F34AF630DBB00D974207F5B6275F836349FF6* __this, rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB* ___0_publisher, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___1_node, RuntimeObject* ___2_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_publisher,
	___1_node,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___2_result, ___out_args);
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
int32_t PublisherFiniType_Invoke_mD75EFB283C298ABF66E6C54681FBD0FA360FBE50_Multicast(PublisherFiniType_t29E6144CCBA0F6A8AC0CC5BAA12C50B7CAE3658B* __this, rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB* ___0_publisher, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___1_node, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PublisherFiniType_t29E6144CCBA0F6A8AC0CC5BAA12C50B7CAE3658B* currentDelegate = reinterpret_cast<PublisherFiniType_t29E6144CCBA0F6A8AC0CC5BAA12C50B7CAE3658B*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB*, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_publisher, ___1_node, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t PublisherFiniType_Invoke_mD75EFB283C298ABF66E6C54681FBD0FA360FBE50_OpenInst(PublisherFiniType_t29E6144CCBA0F6A8AC0CC5BAA12C50B7CAE3658B* __this, rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB* ___0_publisher, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___1_node, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB*, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_publisher, ___1_node, method);
}
int32_t PublisherFiniType_Invoke_mD75EFB283C298ABF66E6C54681FBD0FA360FBE50_OpenStatic(PublisherFiniType_t29E6144CCBA0F6A8AC0CC5BAA12C50B7CAE3658B* __this, rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB* ___0_publisher, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___1_node, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB*, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_publisher, ___1_node, method);
}
int32_t PublisherFiniType_Invoke_mD75EFB283C298ABF66E6C54681FBD0FA360FBE50_OpenStaticInvoker(PublisherFiniType_t29E6144CCBA0F6A8AC0CC5BAA12C50B7CAE3658B* __this, rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB* ___0_publisher, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___1_node, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB*, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_publisher, ___1_node);
}
int32_t PublisherFiniType_Invoke_mD75EFB283C298ABF66E6C54681FBD0FA360FBE50_ClosedStaticInvoker(PublisherFiniType_t29E6144CCBA0F6A8AC0CC5BAA12C50B7CAE3658B* __this, rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB* ___0_publisher, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___1_node, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB*, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_publisher, ___1_node);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_PublisherFiniType_t29E6144CCBA0F6A8AC0CC5BAA12C50B7CAE3658B (PublisherFiniType_t29E6144CCBA0F6A8AC0CC5BAA12C50B7CAE3658B* __this, rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB* ___0_publisher, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___1_node, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)(rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB*, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_publisher, ___1_node);

	return returnValue;
}
// System.Void ROS2.NativeRcl/PublisherFiniType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PublisherFiniType__ctor_m8D130F0A60DA3C56799873BDBD256153E2AEA553 (PublisherFiniType_t29E6144CCBA0F6A8AC0CC5BAA12C50B7CAE3658B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&PublisherFiniType_Invoke_mD75EFB283C298ABF66E6C54681FBD0FA360FBE50_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&PublisherFiniType_Invoke_mD75EFB283C298ABF66E6C54681FBD0FA360FBE50_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PublisherFiniType_Invoke_mD75EFB283C298ABF66E6C54681FBD0FA360FBE50_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&PublisherFiniType_Invoke_mD75EFB283C298ABF66E6C54681FBD0FA360FBE50_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&PublisherFiniType_Invoke_mD75EFB283C298ABF66E6C54681FBD0FA360FBE50_Multicast;
}
// System.Int32 ROS2.NativeRcl/PublisherFiniType::Invoke(ROS2.rcl_publisher_t&,ROS2.rcl_node_t&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PublisherFiniType_Invoke_mD75EFB283C298ABF66E6C54681FBD0FA360FBE50 (PublisherFiniType_t29E6144CCBA0F6A8AC0CC5BAA12C50B7CAE3658B* __this, rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB* ___0_publisher, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___1_node, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB*, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_publisher, ___1_node, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ROS2.NativeRcl/PublisherFiniType::BeginInvoke(ROS2.rcl_publisher_t&,ROS2.rcl_node_t&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PublisherFiniType_BeginInvoke_mB889696E5E9B6E4D446B7F6800E2B244AFE1DC8C (PublisherFiniType_t29E6144CCBA0F6A8AC0CC5BAA12C50B7CAE3658B* __this, rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB* ___0_publisher, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___1_node, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB_il2cpp_TypeInfo_var, &*___0_publisher);
	__d_args[1] = Box(rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4_il2cpp_TypeInfo_var, &*___1_node);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Int32 ROS2.NativeRcl/PublisherFiniType::EndInvoke(ROS2.rcl_publisher_t&,ROS2.rcl_node_t&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PublisherFiniType_EndInvoke_mAC646AA1CC09BC064D3F08CAF569BEC292B65EBD (PublisherFiniType_t29E6144CCBA0F6A8AC0CC5BAA12C50B7CAE3658B* __this, rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB* ___0_publisher, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___1_node, RuntimeObject* ___2_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_publisher,
	___1_node,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___2_result, ___out_args);
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
int32_t PublishType_Invoke_m8052474DEFC5436485A16B823BE88180889EBE18_Multicast(PublishType_t85AE05C7B1E15E993E7977AE925CBEED7B0A80E0* __this, rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB* ___0_publisher, intptr_t ___1_message, intptr_t ___2_allocator, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PublishType_t85AE05C7B1E15E993E7977AE925CBEED7B0A80E0* currentDelegate = reinterpret_cast<PublishType_t85AE05C7B1E15E993E7977AE925CBEED7B0A80E0*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB*, intptr_t, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_publisher, ___1_message, ___2_allocator, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t PublishType_Invoke_m8052474DEFC5436485A16B823BE88180889EBE18_OpenInst(PublishType_t85AE05C7B1E15E993E7977AE925CBEED7B0A80E0* __this, rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB* ___0_publisher, intptr_t ___1_message, intptr_t ___2_allocator, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB*, intptr_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_publisher, ___1_message, ___2_allocator, method);
}
int32_t PublishType_Invoke_m8052474DEFC5436485A16B823BE88180889EBE18_OpenStatic(PublishType_t85AE05C7B1E15E993E7977AE925CBEED7B0A80E0* __this, rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB* ___0_publisher, intptr_t ___1_message, intptr_t ___2_allocator, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB*, intptr_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_publisher, ___1_message, ___2_allocator, method);
}
int32_t PublishType_Invoke_m8052474DEFC5436485A16B823BE88180889EBE18_OpenStaticInvoker(PublishType_t85AE05C7B1E15E993E7977AE925CBEED7B0A80E0* __this, rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB* ___0_publisher, intptr_t ___1_message, intptr_t ___2_allocator, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB*, intptr_t, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_publisher, ___1_message, ___2_allocator);
}
int32_t PublishType_Invoke_m8052474DEFC5436485A16B823BE88180889EBE18_ClosedStaticInvoker(PublishType_t85AE05C7B1E15E993E7977AE925CBEED7B0A80E0* __this, rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB* ___0_publisher, intptr_t ___1_message, intptr_t ___2_allocator, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, RuntimeObject*, rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB*, intptr_t, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_publisher, ___1_message, ___2_allocator);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_PublishType_t85AE05C7B1E15E993E7977AE925CBEED7B0A80E0 (PublishType_t85AE05C7B1E15E993E7977AE925CBEED7B0A80E0* __this, rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB* ___0_publisher, intptr_t ___1_message, intptr_t ___2_allocator, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)(rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB*, intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_publisher, ___1_message, ___2_allocator);

	return returnValue;
}
// System.Void ROS2.NativeRcl/PublishType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PublishType__ctor_m5B7F57C0F87D56E932042D2FDFF7B1571C6DD8CB (PublishType_t85AE05C7B1E15E993E7977AE925CBEED7B0A80E0* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PublishType_Invoke_m8052474DEFC5436485A16B823BE88180889EBE18_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&PublishType_Invoke_m8052474DEFC5436485A16B823BE88180889EBE18_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PublishType_Invoke_m8052474DEFC5436485A16B823BE88180889EBE18_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&PublishType_Invoke_m8052474DEFC5436485A16B823BE88180889EBE18_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&PublishType_Invoke_m8052474DEFC5436485A16B823BE88180889EBE18_Multicast;
}
// System.Int32 ROS2.NativeRcl/PublishType::Invoke(ROS2.rcl_publisher_t&,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PublishType_Invoke_m8052474DEFC5436485A16B823BE88180889EBE18 (PublishType_t85AE05C7B1E15E993E7977AE925CBEED7B0A80E0* __this, rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB* ___0_publisher, intptr_t ___1_message, intptr_t ___2_allocator, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB*, intptr_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_publisher, ___1_message, ___2_allocator, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ROS2.NativeRcl/PublishType::BeginInvoke(ROS2.rcl_publisher_t&,System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PublishType_BeginInvoke_m65613A5901BAFDBF903B7FE8622D1FADA7AB9DB4 (PublishType_t85AE05C7B1E15E993E7977AE925CBEED7B0A80E0* __this, rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB* ___0_publisher, intptr_t ___1_message, intptr_t ___2_allocator, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB_il2cpp_TypeInfo_var, &*___0_publisher);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___1_message);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___2_allocator);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// System.Int32 ROS2.NativeRcl/PublishType::EndInvoke(ROS2.rcl_publisher_t&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PublishType_EndInvoke_m40A338A3229B4E4C01848347D667924DE1FBB5B6 (PublishType_t85AE05C7B1E15E993E7977AE925CBEED7B0A80E0* __this, rcl_publisher_t_tF3458C5660B16606E9866B0FBB459074CD9E64FB* ___0_publisher, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_publisher,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, ___out_args);
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
rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD GetZeroInitializedSubcriptionType_Invoke_m9B839F91135BCA2DCBCCED46A6BE33927934C705_Multicast(GetZeroInitializedSubcriptionType_tB15A38BFDD3D25B480ABD8275A9523A87001337D* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GetZeroInitializedSubcriptionType_tB15A38BFDD3D25B480ABD8275A9523A87001337D* currentDelegate = reinterpret_cast<GetZeroInitializedSubcriptionType_tB15A38BFDD3D25B480ABD8275A9523A87001337D*>(delegatesToInvoke[i]);
		typedef rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD GetZeroInitializedSubcriptionType_Invoke_m9B839F91135BCA2DCBCCED46A6BE33927934C705_OpenInst(GetZeroInitializedSubcriptionType_tB15A38BFDD3D25B480ABD8275A9523A87001337D* __this, const RuntimeMethod* method)
{
	typedef rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD GetZeroInitializedSubcriptionType_Invoke_m9B839F91135BCA2DCBCCED46A6BE33927934C705_OpenStatic(GetZeroInitializedSubcriptionType_tB15A38BFDD3D25B480ABD8275A9523A87001337D* __this, const RuntimeMethod* method)
{
	typedef rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD GetZeroInitializedSubcriptionType_Invoke_m9B839F91135BCA2DCBCCED46A6BE33927934C705_OpenStaticInvoker(GetZeroInitializedSubcriptionType_tB15A38BFDD3D25B480ABD8275A9523A87001337D* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker0< rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL);
}
rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD GetZeroInitializedSubcriptionType_Invoke_m9B839F91135BCA2DCBCCED46A6BE33927934C705_ClosedStaticInvoker(GetZeroInitializedSubcriptionType_tB15A38BFDD3D25B480ABD8275A9523A87001337D* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD, RuntimeObject* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD DelegatePInvokeWrapper_GetZeroInitializedSubcriptionType_tB15A38BFDD3D25B480ABD8275A9523A87001337D (GetZeroInitializedSubcriptionType_tB15A38BFDD3D25B480ABD8275A9523A87001337D* __this, const RuntimeMethod* method)
{
	typedef rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD (CDECL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD returnValue = il2cppPInvokeFunc();

	return returnValue;
}
// System.Void ROS2.NativeRcl/GetZeroInitializedSubcriptionType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetZeroInitializedSubcriptionType__ctor_m5B563ABBE4E2EBACDD4E398041F7641BFBB7FA8D (GetZeroInitializedSubcriptionType_tB15A38BFDD3D25B480ABD8275A9523A87001337D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&GetZeroInitializedSubcriptionType_Invoke_m9B839F91135BCA2DCBCCED46A6BE33927934C705_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&GetZeroInitializedSubcriptionType_Invoke_m9B839F91135BCA2DCBCCED46A6BE33927934C705_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetZeroInitializedSubcriptionType_Invoke_m9B839F91135BCA2DCBCCED46A6BE33927934C705_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&GetZeroInitializedSubcriptionType_Invoke_m9B839F91135BCA2DCBCCED46A6BE33927934C705_Multicast;
}
// ROS2.rcl_subscription_t ROS2.NativeRcl/GetZeroInitializedSubcriptionType::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD GetZeroInitializedSubcriptionType_Invoke_m9B839F91135BCA2DCBCCED46A6BE33927934C705 (GetZeroInitializedSubcriptionType_tB15A38BFDD3D25B480ABD8275A9523A87001337D* __this, const RuntimeMethod* method) 
{
	typedef rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ROS2.NativeRcl/GetZeroInitializedSubcriptionType::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GetZeroInitializedSubcriptionType_BeginInvoke_m61CBFFB6C586BAD52F4922FD9E88528D263055B1 (GetZeroInitializedSubcriptionType_tB15A38BFDD3D25B480ABD8275A9523A87001337D* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// ROS2.rcl_subscription_t ROS2.NativeRcl/GetZeroInitializedSubcriptionType::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD GetZeroInitializedSubcriptionType_EndInvoke_m7DFACAD8F963A40C48033B4F1E2567C9FA163A5C (GetZeroInitializedSubcriptionType_tB15A38BFDD3D25B480ABD8275A9523A87001337D* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t SubscriptionInitType_Invoke_mEE9EAE1803540A8222AE1A2BD2F4613F2D92B6F4_Multicast(SubscriptionInitType_t5D9745916CE3038181964DA68957FF6B8C13222A* __this, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD* ___0_subscription, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___1_node, intptr_t ___2_type_support_ptr, String_t* ___3_topic_name, intptr_t ___4_subscription_options, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SubscriptionInitType_t5D9745916CE3038181964DA68957FF6B8C13222A* currentDelegate = reinterpret_cast<SubscriptionInitType_t5D9745916CE3038181964DA68957FF6B8C13222A*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD*, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4*, intptr_t, String_t*, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_subscription, ___1_node, ___2_type_support_ptr, ___3_topic_name, ___4_subscription_options, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t SubscriptionInitType_Invoke_mEE9EAE1803540A8222AE1A2BD2F4613F2D92B6F4_OpenInst(SubscriptionInitType_t5D9745916CE3038181964DA68957FF6B8C13222A* __this, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD* ___0_subscription, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___1_node, intptr_t ___2_type_support_ptr, String_t* ___3_topic_name, intptr_t ___4_subscription_options, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD*, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4*, intptr_t, String_t*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_subscription, ___1_node, ___2_type_support_ptr, ___3_topic_name, ___4_subscription_options, method);
}
int32_t SubscriptionInitType_Invoke_mEE9EAE1803540A8222AE1A2BD2F4613F2D92B6F4_OpenStatic(SubscriptionInitType_t5D9745916CE3038181964DA68957FF6B8C13222A* __this, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD* ___0_subscription, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___1_node, intptr_t ___2_type_support_ptr, String_t* ___3_topic_name, intptr_t ___4_subscription_options, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD*, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4*, intptr_t, String_t*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_subscription, ___1_node, ___2_type_support_ptr, ___3_topic_name, ___4_subscription_options, method);
}
int32_t SubscriptionInitType_Invoke_mEE9EAE1803540A8222AE1A2BD2F4613F2D92B6F4_OpenStaticInvoker(SubscriptionInitType_t5D9745916CE3038181964DA68957FF6B8C13222A* __this, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD* ___0_subscription, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___1_node, intptr_t ___2_type_support_ptr, String_t* ___3_topic_name, intptr_t ___4_subscription_options, const RuntimeMethod* method)
{
	return InvokerFuncInvoker5< int32_t, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD*, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4*, intptr_t, String_t*, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_subscription, ___1_node, ___2_type_support_ptr, ___3_topic_name, ___4_subscription_options);
}
int32_t SubscriptionInitType_Invoke_mEE9EAE1803540A8222AE1A2BD2F4613F2D92B6F4_ClosedStaticInvoker(SubscriptionInitType_t5D9745916CE3038181964DA68957FF6B8C13222A* __this, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD* ___0_subscription, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___1_node, intptr_t ___2_type_support_ptr, String_t* ___3_topic_name, intptr_t ___4_subscription_options, const RuntimeMethod* method)
{
	return InvokerFuncInvoker6< int32_t, RuntimeObject*, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD*, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4*, intptr_t, String_t*, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_subscription, ___1_node, ___2_type_support_ptr, ___3_topic_name, ___4_subscription_options);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_SubscriptionInitType_t5D9745916CE3038181964DA68957FF6B8C13222A (SubscriptionInitType_t5D9745916CE3038181964DA68957FF6B8C13222A* __this, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD* ___0_subscription, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___1_node, intptr_t ___2_type_support_ptr, String_t* ___3_topic_name, intptr_t ___4_subscription_options, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)(rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD*, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4*, intptr_t, char*, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___3_topic_name' to native representation
	char* ____3_topic_name_marshaled = NULL;
	____3_topic_name_marshaled = il2cpp_codegen_marshal_string(___3_topic_name);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_subscription, ___1_node, ___2_type_support_ptr, ____3_topic_name_marshaled, ___4_subscription_options);

	// Marshaling cleanup of parameter '___3_topic_name' native representation
	il2cpp_codegen_marshal_free(____3_topic_name_marshaled);
	____3_topic_name_marshaled = NULL;

	return returnValue;
}
// System.Void ROS2.NativeRcl/SubscriptionInitType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubscriptionInitType__ctor_m59D8D9A27D0ECC18CFE979E2C69ECA5D37BCB7F8 (SubscriptionInitType_t5D9745916CE3038181964DA68957FF6B8C13222A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 5;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SubscriptionInitType_Invoke_mEE9EAE1803540A8222AE1A2BD2F4613F2D92B6F4_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SubscriptionInitType_Invoke_mEE9EAE1803540A8222AE1A2BD2F4613F2D92B6F4_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SubscriptionInitType_Invoke_mEE9EAE1803540A8222AE1A2BD2F4613F2D92B6F4_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 4;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&SubscriptionInitType_Invoke_mEE9EAE1803540A8222AE1A2BD2F4613F2D92B6F4_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&SubscriptionInitType_Invoke_mEE9EAE1803540A8222AE1A2BD2F4613F2D92B6F4_Multicast;
}
// System.Int32 ROS2.NativeRcl/SubscriptionInitType::Invoke(ROS2.rcl_subscription_t&,ROS2.rcl_node_t&,System.IntPtr,System.String,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SubscriptionInitType_Invoke_mEE9EAE1803540A8222AE1A2BD2F4613F2D92B6F4 (SubscriptionInitType_t5D9745916CE3038181964DA68957FF6B8C13222A* __this, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD* ___0_subscription, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___1_node, intptr_t ___2_type_support_ptr, String_t* ___3_topic_name, intptr_t ___4_subscription_options, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD*, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4*, intptr_t, String_t*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_subscription, ___1_node, ___2_type_support_ptr, ___3_topic_name, ___4_subscription_options, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ROS2.NativeRcl/SubscriptionInitType::BeginInvoke(ROS2.rcl_subscription_t&,ROS2.rcl_node_t&,System.IntPtr,System.String,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SubscriptionInitType_BeginInvoke_m66AA41F1D1AD393BA541C782223169B5441A70D1 (SubscriptionInitType_t5D9745916CE3038181964DA68957FF6B8C13222A* __this, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD* ___0_subscription, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___1_node, intptr_t ___2_type_support_ptr, String_t* ___3_topic_name, intptr_t ___4_subscription_options, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___5_callback, RuntimeObject* ___6_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = Box(rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD_il2cpp_TypeInfo_var, &*___0_subscription);
	__d_args[1] = Box(rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4_il2cpp_TypeInfo_var, &*___1_node);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___2_type_support_ptr);
	__d_args[3] = ___3_topic_name;
	__d_args[4] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___4_subscription_options);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___5_callback, (RuntimeObject*)___6_object);
}
// System.Int32 ROS2.NativeRcl/SubscriptionInitType::EndInvoke(ROS2.rcl_subscription_t&,ROS2.rcl_node_t&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SubscriptionInitType_EndInvoke_m0D342C0C5244BF887B97C2D740897D0031F33C47 (SubscriptionInitType_t5D9745916CE3038181964DA68957FF6B8C13222A* __this, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD* ___0_subscription, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___1_node, RuntimeObject* ___2_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_subscription,
	___1_node,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___2_result, ___out_args);
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
int32_t SubscriptionFiniType_Invoke_mC9A32B3352CE680C5C5C9F03F4830606DFCE49EB_Multicast(SubscriptionFiniType_t50087884E3CF041D8642AC77956FFD362358A620* __this, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD* ___0_subscription, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___1_node, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SubscriptionFiniType_t50087884E3CF041D8642AC77956FFD362358A620* currentDelegate = reinterpret_cast<SubscriptionFiniType_t50087884E3CF041D8642AC77956FFD362358A620*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD*, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_subscription, ___1_node, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t SubscriptionFiniType_Invoke_mC9A32B3352CE680C5C5C9F03F4830606DFCE49EB_OpenInst(SubscriptionFiniType_t50087884E3CF041D8642AC77956FFD362358A620* __this, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD* ___0_subscription, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___1_node, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD*, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_subscription, ___1_node, method);
}
int32_t SubscriptionFiniType_Invoke_mC9A32B3352CE680C5C5C9F03F4830606DFCE49EB_OpenStatic(SubscriptionFiniType_t50087884E3CF041D8642AC77956FFD362358A620* __this, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD* ___0_subscription, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___1_node, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD*, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_subscription, ___1_node, method);
}
int32_t SubscriptionFiniType_Invoke_mC9A32B3352CE680C5C5C9F03F4830606DFCE49EB_OpenStaticInvoker(SubscriptionFiniType_t50087884E3CF041D8642AC77956FFD362358A620* __this, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD* ___0_subscription, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___1_node, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD*, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_subscription, ___1_node);
}
int32_t SubscriptionFiniType_Invoke_mC9A32B3352CE680C5C5C9F03F4830606DFCE49EB_ClosedStaticInvoker(SubscriptionFiniType_t50087884E3CF041D8642AC77956FFD362358A620* __this, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD* ___0_subscription, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___1_node, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD*, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_subscription, ___1_node);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_SubscriptionFiniType_t50087884E3CF041D8642AC77956FFD362358A620 (SubscriptionFiniType_t50087884E3CF041D8642AC77956FFD362358A620* __this, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD* ___0_subscription, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___1_node, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)(rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD*, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_subscription, ___1_node);

	return returnValue;
}
// System.Void ROS2.NativeRcl/SubscriptionFiniType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubscriptionFiniType__ctor_mDF38B9B49291EDD2F37FE944A1C7F708266CE352 (SubscriptionFiniType_t50087884E3CF041D8642AC77956FFD362358A620* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&SubscriptionFiniType_Invoke_mC9A32B3352CE680C5C5C9F03F4830606DFCE49EB_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SubscriptionFiniType_Invoke_mC9A32B3352CE680C5C5C9F03F4830606DFCE49EB_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SubscriptionFiniType_Invoke_mC9A32B3352CE680C5C5C9F03F4830606DFCE49EB_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&SubscriptionFiniType_Invoke_mC9A32B3352CE680C5C5C9F03F4830606DFCE49EB_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&SubscriptionFiniType_Invoke_mC9A32B3352CE680C5C5C9F03F4830606DFCE49EB_Multicast;
}
// System.Int32 ROS2.NativeRcl/SubscriptionFiniType::Invoke(ROS2.rcl_subscription_t&,ROS2.rcl_node_t&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SubscriptionFiniType_Invoke_mC9A32B3352CE680C5C5C9F03F4830606DFCE49EB (SubscriptionFiniType_t50087884E3CF041D8642AC77956FFD362358A620* __this, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD* ___0_subscription, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___1_node, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD*, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_subscription, ___1_node, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ROS2.NativeRcl/SubscriptionFiniType::BeginInvoke(ROS2.rcl_subscription_t&,ROS2.rcl_node_t&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SubscriptionFiniType_BeginInvoke_mC6E8CF03FE0601724BFBCEBD21BE3289AE55C5C0 (SubscriptionFiniType_t50087884E3CF041D8642AC77956FFD362358A620* __this, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD* ___0_subscription, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___1_node, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD_il2cpp_TypeInfo_var, &*___0_subscription);
	__d_args[1] = Box(rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4_il2cpp_TypeInfo_var, &*___1_node);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Int32 ROS2.NativeRcl/SubscriptionFiniType::EndInvoke(ROS2.rcl_subscription_t&,ROS2.rcl_node_t&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SubscriptionFiniType_EndInvoke_m2E1930D6B5C1C034A0B75028746675080E68715F (SubscriptionFiniType_t50087884E3CF041D8642AC77956FFD362358A620* __this, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD* ___0_subscription, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___1_node, RuntimeObject* ___2_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_subscription,
	___1_node,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___2_result, ___out_args);
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
bool SubscriptionIsValidType_Invoke_mF11514EA69BC80E04167680EF7EFE7F8DD2E5702_Multicast(SubscriptionIsValidType_tBAA19362E8D32CF2D87A459D0BBBC6D1B380AD7A* __this, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD* ___0_subscription, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	bool retVal = false;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SubscriptionIsValidType_tBAA19362E8D32CF2D87A459D0BBBC6D1B380AD7A* currentDelegate = reinterpret_cast<SubscriptionIsValidType_tBAA19362E8D32CF2D87A459D0BBBC6D1B380AD7A*>(delegatesToInvoke[i]);
		typedef bool (*FunctionPointerType) (RuntimeObject*, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_subscription, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
bool SubscriptionIsValidType_Invoke_mF11514EA69BC80E04167680EF7EFE7F8DD2E5702_OpenInst(SubscriptionIsValidType_tBAA19362E8D32CF2D87A459D0BBBC6D1B380AD7A* __this, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD* ___0_subscription, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_subscription, method);
}
bool SubscriptionIsValidType_Invoke_mF11514EA69BC80E04167680EF7EFE7F8DD2E5702_OpenStatic(SubscriptionIsValidType_tBAA19362E8D32CF2D87A459D0BBBC6D1B380AD7A* __this, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD* ___0_subscription, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_subscription, method);
}
bool SubscriptionIsValidType_Invoke_mF11514EA69BC80E04167680EF7EFE7F8DD2E5702_OpenStaticInvoker(SubscriptionIsValidType_tBAA19362E8D32CF2D87A459D0BBBC6D1B380AD7A* __this, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD* ___0_subscription, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< bool, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_subscription);
}
bool SubscriptionIsValidType_Invoke_mF11514EA69BC80E04167680EF7EFE7F8DD2E5702_ClosedStaticInvoker(SubscriptionIsValidType_tBAA19362E8D32CF2D87A459D0BBBC6D1B380AD7A* __this, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD* ___0_subscription, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< bool, RuntimeObject*, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_subscription);
}
IL2CPP_EXTERN_C  bool DelegatePInvokeWrapper_SubscriptionIsValidType_tBAA19362E8D32CF2D87A459D0BBBC6D1B380AD7A (SubscriptionIsValidType_tBAA19362E8D32CF2D87A459D0BBBC6D1B380AD7A* __this, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD* ___0_subscription, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)(rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_subscription);

	return static_cast<bool>(returnValue);
}
// System.Void ROS2.NativeRcl/SubscriptionIsValidType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubscriptionIsValidType__ctor_m876AB24A6709771393A61A9A324D32877C418F14 (SubscriptionIsValidType_tBAA19362E8D32CF2D87A459D0BBBC6D1B380AD7A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&SubscriptionIsValidType_Invoke_mF11514EA69BC80E04167680EF7EFE7F8DD2E5702_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SubscriptionIsValidType_Invoke_mF11514EA69BC80E04167680EF7EFE7F8DD2E5702_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SubscriptionIsValidType_Invoke_mF11514EA69BC80E04167680EF7EFE7F8DD2E5702_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&SubscriptionIsValidType_Invoke_mF11514EA69BC80E04167680EF7EFE7F8DD2E5702_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&SubscriptionIsValidType_Invoke_mF11514EA69BC80E04167680EF7EFE7F8DD2E5702_Multicast;
}
// System.Boolean ROS2.NativeRcl/SubscriptionIsValidType::Invoke(ROS2.rcl_subscription_t&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SubscriptionIsValidType_Invoke_mF11514EA69BC80E04167680EF7EFE7F8DD2E5702 (SubscriptionIsValidType_tBAA19362E8D32CF2D87A459D0BBBC6D1B380AD7A* __this, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD* ___0_subscription, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_subscription, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ROS2.NativeRcl/SubscriptionIsValidType::BeginInvoke(ROS2.rcl_subscription_t&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SubscriptionIsValidType_BeginInvoke_mE8B4DF1F88028AAB831FEEEFB0286811AF22ED02 (SubscriptionIsValidType_tBAA19362E8D32CF2D87A459D0BBBC6D1B380AD7A* __this, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD* ___0_subscription, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD_il2cpp_TypeInfo_var, &*___0_subscription);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Boolean ROS2.NativeRcl/SubscriptionIsValidType::EndInvoke(ROS2.rcl_subscription_t&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SubscriptionIsValidType_EndInvoke_mF38DE9F9F2BAD0590798D1CFF0012D3D290308EB (SubscriptionIsValidType_tBAA19362E8D32CF2D87A459D0BBBC6D1B380AD7A* __this, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD* ___0_subscription, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_subscription,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, ___out_args);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t TakeType_Invoke_m0AFB55C3BC2C7AC726ECBB59E0BE46D1D4D039CB_Multicast(TakeType_tD0132705DD1D245C5C1D36705B201977F5B0B006* __this, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD* ___0_subscription, intptr_t ___1_message_handle, intptr_t ___2_message_info, intptr_t ___3_allocation, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		TakeType_tD0132705DD1D245C5C1D36705B201977F5B0B006* currentDelegate = reinterpret_cast<TakeType_tD0132705DD1D245C5C1D36705B201977F5B0B006*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD*, intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_subscription, ___1_message_handle, ___2_message_info, ___3_allocation, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t TakeType_Invoke_m0AFB55C3BC2C7AC726ECBB59E0BE46D1D4D039CB_OpenInst(TakeType_tD0132705DD1D245C5C1D36705B201977F5B0B006* __this, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD* ___0_subscription, intptr_t ___1_message_handle, intptr_t ___2_message_info, intptr_t ___3_allocation, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD*, intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_subscription, ___1_message_handle, ___2_message_info, ___3_allocation, method);
}
int32_t TakeType_Invoke_m0AFB55C3BC2C7AC726ECBB59E0BE46D1D4D039CB_OpenStatic(TakeType_tD0132705DD1D245C5C1D36705B201977F5B0B006* __this, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD* ___0_subscription, intptr_t ___1_message_handle, intptr_t ___2_message_info, intptr_t ___3_allocation, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD*, intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_subscription, ___1_message_handle, ___2_message_info, ___3_allocation, method);
}
int32_t TakeType_Invoke_m0AFB55C3BC2C7AC726ECBB59E0BE46D1D4D039CB_OpenStaticInvoker(TakeType_tD0132705DD1D245C5C1D36705B201977F5B0B006* __this, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD* ___0_subscription, intptr_t ___1_message_handle, intptr_t ___2_message_info, intptr_t ___3_allocation, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD*, intptr_t, intptr_t, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_subscription, ___1_message_handle, ___2_message_info, ___3_allocation);
}
int32_t TakeType_Invoke_m0AFB55C3BC2C7AC726ECBB59E0BE46D1D4D039CB_ClosedStaticInvoker(TakeType_tD0132705DD1D245C5C1D36705B201977F5B0B006* __this, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD* ___0_subscription, intptr_t ___1_message_handle, intptr_t ___2_message_info, intptr_t ___3_allocation, const RuntimeMethod* method)
{
	return InvokerFuncInvoker5< int32_t, RuntimeObject*, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD*, intptr_t, intptr_t, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_subscription, ___1_message_handle, ___2_message_info, ___3_allocation);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_TakeType_tD0132705DD1D245C5C1D36705B201977F5B0B006 (TakeType_tD0132705DD1D245C5C1D36705B201977F5B0B006* __this, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD* ___0_subscription, intptr_t ___1_message_handle, intptr_t ___2_message_info, intptr_t ___3_allocation, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)(rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD*, intptr_t, intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_subscription, ___1_message_handle, ___2_message_info, ___3_allocation);

	return returnValue;
}
// System.Void ROS2.NativeRcl/TakeType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TakeType__ctor_m83F8B82C7436CE1B96E49D37558EA9F7A5F96BC4 (TakeType_tD0132705DD1D245C5C1D36705B201977F5B0B006* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TakeType_Invoke_m0AFB55C3BC2C7AC726ECBB59E0BE46D1D4D039CB_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&TakeType_Invoke_m0AFB55C3BC2C7AC726ECBB59E0BE46D1D4D039CB_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TakeType_Invoke_m0AFB55C3BC2C7AC726ECBB59E0BE46D1D4D039CB_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&TakeType_Invoke_m0AFB55C3BC2C7AC726ECBB59E0BE46D1D4D039CB_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&TakeType_Invoke_m0AFB55C3BC2C7AC726ECBB59E0BE46D1D4D039CB_Multicast;
}
// System.Int32 ROS2.NativeRcl/TakeType::Invoke(ROS2.rcl_subscription_t&,System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TakeType_Invoke_m0AFB55C3BC2C7AC726ECBB59E0BE46D1D4D039CB (TakeType_tD0132705DD1D245C5C1D36705B201977F5B0B006* __this, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD* ___0_subscription, intptr_t ___1_message_handle, intptr_t ___2_message_info, intptr_t ___3_allocation, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD*, intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_subscription, ___1_message_handle, ___2_message_info, ___3_allocation, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ROS2.NativeRcl/TakeType::BeginInvoke(ROS2.rcl_subscription_t&,System.IntPtr,System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TakeType_BeginInvoke_mE79B91D38FB0D71C684AF22350444C8D7DE04A23 (TakeType_tD0132705DD1D245C5C1D36705B201977F5B0B006* __this, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD* ___0_subscription, intptr_t ___1_message_handle, intptr_t ___2_message_info, intptr_t ___3_allocation, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___4_callback, RuntimeObject* ___5_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD_il2cpp_TypeInfo_var, &*___0_subscription);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___1_message_handle);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___2_message_info);
	__d_args[3] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___3_allocation);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___4_callback, (RuntimeObject*)___5_object);
}
// System.Int32 ROS2.NativeRcl/TakeType::EndInvoke(ROS2.rcl_subscription_t&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TakeType_EndInvoke_mDBF9849FC9335B1C7DBA88AC5AB7ADEF06192AE4 (TakeType_tD0132705DD1D245C5C1D36705B201977F5B0B006* __this, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD* ___0_subscription, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_subscription,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, ___out_args);
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
rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100 GetZeroInitializedWaitSetType_Invoke_mD8C5981A1D566582BCF6BC81F4633B86C1BA5608_Multicast(GetZeroInitializedWaitSetType_t6399F00A6BBAE1E21B97BDCF19BD380C1D53C9CC* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100 retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GetZeroInitializedWaitSetType_t6399F00A6BBAE1E21B97BDCF19BD380C1D53C9CC* currentDelegate = reinterpret_cast<GetZeroInitializedWaitSetType_t6399F00A6BBAE1E21B97BDCF19BD380C1D53C9CC*>(delegatesToInvoke[i]);
		typedef rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100 (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100 GetZeroInitializedWaitSetType_Invoke_mD8C5981A1D566582BCF6BC81F4633B86C1BA5608_OpenInst(GetZeroInitializedWaitSetType_t6399F00A6BBAE1E21B97BDCF19BD380C1D53C9CC* __this, const RuntimeMethod* method)
{
	typedef rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100 (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100 GetZeroInitializedWaitSetType_Invoke_mD8C5981A1D566582BCF6BC81F4633B86C1BA5608_OpenStatic(GetZeroInitializedWaitSetType_t6399F00A6BBAE1E21B97BDCF19BD380C1D53C9CC* __this, const RuntimeMethod* method)
{
	typedef rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100 (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100 GetZeroInitializedWaitSetType_Invoke_mD8C5981A1D566582BCF6BC81F4633B86C1BA5608_OpenStaticInvoker(GetZeroInitializedWaitSetType_t6399F00A6BBAE1E21B97BDCF19BD380C1D53C9CC* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker0< rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100 >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL);
}
rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100 GetZeroInitializedWaitSetType_Invoke_mD8C5981A1D566582BCF6BC81F4633B86C1BA5608_ClosedStaticInvoker(GetZeroInitializedWaitSetType_t6399F00A6BBAE1E21B97BDCF19BD380C1D53C9CC* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100, RuntimeObject* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100 DelegatePInvokeWrapper_GetZeroInitializedWaitSetType_t6399F00A6BBAE1E21B97BDCF19BD380C1D53C9CC (GetZeroInitializedWaitSetType_t6399F00A6BBAE1E21B97BDCF19BD380C1D53C9CC* __this, const RuntimeMethod* method)
{
	typedef rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100 (CDECL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100 returnValue = il2cppPInvokeFunc();

	return returnValue;
}
// System.Void ROS2.NativeRcl/GetZeroInitializedWaitSetType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetZeroInitializedWaitSetType__ctor_m9926EB1CD7E80F933DABF079EBC49A64E3F49A8F (GetZeroInitializedWaitSetType_t6399F00A6BBAE1E21B97BDCF19BD380C1D53C9CC* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&GetZeroInitializedWaitSetType_Invoke_mD8C5981A1D566582BCF6BC81F4633B86C1BA5608_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&GetZeroInitializedWaitSetType_Invoke_mD8C5981A1D566582BCF6BC81F4633B86C1BA5608_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetZeroInitializedWaitSetType_Invoke_mD8C5981A1D566582BCF6BC81F4633B86C1BA5608_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&GetZeroInitializedWaitSetType_Invoke_mD8C5981A1D566582BCF6BC81F4633B86C1BA5608_Multicast;
}
// ROS2.rcl_wait_set_t ROS2.NativeRcl/GetZeroInitializedWaitSetType::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100 GetZeroInitializedWaitSetType_Invoke_mD8C5981A1D566582BCF6BC81F4633B86C1BA5608 (GetZeroInitializedWaitSetType_t6399F00A6BBAE1E21B97BDCF19BD380C1D53C9CC* __this, const RuntimeMethod* method) 
{
	typedef rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100 (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ROS2.NativeRcl/GetZeroInitializedWaitSetType::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GetZeroInitializedWaitSetType_BeginInvoke_mF5B2F1698EE82E6F73BD7D39D19C33E67998A739 (GetZeroInitializedWaitSetType_t6399F00A6BBAE1E21B97BDCF19BD380C1D53C9CC* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// ROS2.rcl_wait_set_t ROS2.NativeRcl/GetZeroInitializedWaitSetType::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100 GetZeroInitializedWaitSetType_EndInvoke_m459283368DB111D370962C063217337D9D8C4D4C (GetZeroInitializedWaitSetType_t6399F00A6BBAE1E21B97BDCF19BD380C1D53C9CC* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t WaitSetInitType_Invoke_mFC58972C6405B961C2D4940FFD3AAC195163606A_Multicast(WaitSetInitType_t87E1D05131F194FAB01E72C1A03A0A2538C411AA* __this, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100* ___0_wait_set, uint64_t ___1_number_of_subscriptions, uint64_t ___2_number_of_guard_conditions, uint64_t ___3_number_of_timers, uint64_t ___4_number_of_clients, uint64_t ___5_number_of_services, uint64_t ___6_number_of_events, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___7_context, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831 ___8_allocator, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WaitSetInitType_t87E1D05131F194FAB01E72C1A03A0A2538C411AA* currentDelegate = reinterpret_cast<WaitSetInitType_t87E1D05131F194FAB01E72C1A03A0A2538C411AA*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100*, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C*, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_wait_set, ___1_number_of_subscriptions, ___2_number_of_guard_conditions, ___3_number_of_timers, ___4_number_of_clients, ___5_number_of_services, ___6_number_of_events, ___7_context, ___8_allocator, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t WaitSetInitType_Invoke_mFC58972C6405B961C2D4940FFD3AAC195163606A_OpenInst(WaitSetInitType_t87E1D05131F194FAB01E72C1A03A0A2538C411AA* __this, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100* ___0_wait_set, uint64_t ___1_number_of_subscriptions, uint64_t ___2_number_of_guard_conditions, uint64_t ___3_number_of_timers, uint64_t ___4_number_of_clients, uint64_t ___5_number_of_services, uint64_t ___6_number_of_events, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___7_context, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831 ___8_allocator, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100*, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C*, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_wait_set, ___1_number_of_subscriptions, ___2_number_of_guard_conditions, ___3_number_of_timers, ___4_number_of_clients, ___5_number_of_services, ___6_number_of_events, ___7_context, ___8_allocator, method);
}
int32_t WaitSetInitType_Invoke_mFC58972C6405B961C2D4940FFD3AAC195163606A_OpenStatic(WaitSetInitType_t87E1D05131F194FAB01E72C1A03A0A2538C411AA* __this, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100* ___0_wait_set, uint64_t ___1_number_of_subscriptions, uint64_t ___2_number_of_guard_conditions, uint64_t ___3_number_of_timers, uint64_t ___4_number_of_clients, uint64_t ___5_number_of_services, uint64_t ___6_number_of_events, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___7_context, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831 ___8_allocator, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100*, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C*, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_wait_set, ___1_number_of_subscriptions, ___2_number_of_guard_conditions, ___3_number_of_timers, ___4_number_of_clients, ___5_number_of_services, ___6_number_of_events, ___7_context, ___8_allocator, method);
}
int32_t WaitSetInitType_Invoke_mFC58972C6405B961C2D4940FFD3AAC195163606A_OpenStaticInvoker(WaitSetInitType_t87E1D05131F194FAB01E72C1A03A0A2538C411AA* __this, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100* ___0_wait_set, uint64_t ___1_number_of_subscriptions, uint64_t ___2_number_of_guard_conditions, uint64_t ___3_number_of_timers, uint64_t ___4_number_of_clients, uint64_t ___5_number_of_services, uint64_t ___6_number_of_events, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___7_context, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831 ___8_allocator, const RuntimeMethod* method)
{
	return InvokerFuncInvoker9< int32_t, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100*, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C*, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831 >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_wait_set, ___1_number_of_subscriptions, ___2_number_of_guard_conditions, ___3_number_of_timers, ___4_number_of_clients, ___5_number_of_services, ___6_number_of_events, ___7_context, ___8_allocator);
}
int32_t WaitSetInitType_Invoke_mFC58972C6405B961C2D4940FFD3AAC195163606A_ClosedStaticInvoker(WaitSetInitType_t87E1D05131F194FAB01E72C1A03A0A2538C411AA* __this, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100* ___0_wait_set, uint64_t ___1_number_of_subscriptions, uint64_t ___2_number_of_guard_conditions, uint64_t ___3_number_of_timers, uint64_t ___4_number_of_clients, uint64_t ___5_number_of_services, uint64_t ___6_number_of_events, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___7_context, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831 ___8_allocator, const RuntimeMethod* method)
{
	return InvokerFuncInvoker10< int32_t, RuntimeObject*, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100*, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C*, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831 >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_wait_set, ___1_number_of_subscriptions, ___2_number_of_guard_conditions, ___3_number_of_timers, ___4_number_of_clients, ___5_number_of_services, ___6_number_of_events, ___7_context, ___8_allocator);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_WaitSetInitType_t87E1D05131F194FAB01E72C1A03A0A2538C411AA (WaitSetInitType_t87E1D05131F194FAB01E72C1A03A0A2538C411AA* __this, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100* ___0_wait_set, uint64_t ___1_number_of_subscriptions, uint64_t ___2_number_of_guard_conditions, uint64_t ___3_number_of_timers, uint64_t ___4_number_of_clients, uint64_t ___5_number_of_services, uint64_t ___6_number_of_events, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___7_context, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831 ___8_allocator, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)(rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100*, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C*, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_wait_set, ___1_number_of_subscriptions, ___2_number_of_guard_conditions, ___3_number_of_timers, ___4_number_of_clients, ___5_number_of_services, ___6_number_of_events, ___7_context, ___8_allocator);

	return returnValue;
}
// System.Void ROS2.NativeRcl/WaitSetInitType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitSetInitType__ctor_mCAAE7815D319A159944793E695EE11885C64DCB0 (WaitSetInitType_t87E1D05131F194FAB01E72C1A03A0A2538C411AA* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 9;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WaitSetInitType_Invoke_mFC58972C6405B961C2D4940FFD3AAC195163606A_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&WaitSetInitType_Invoke_mFC58972C6405B961C2D4940FFD3AAC195163606A_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WaitSetInitType_Invoke_mFC58972C6405B961C2D4940FFD3AAC195163606A_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 8;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&WaitSetInitType_Invoke_mFC58972C6405B961C2D4940FFD3AAC195163606A_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WaitSetInitType_Invoke_mFC58972C6405B961C2D4940FFD3AAC195163606A_Multicast;
}
// System.Int32 ROS2.NativeRcl/WaitSetInitType::Invoke(ROS2.rcl_wait_set_t&,System.UInt64,System.UInt64,System.UInt64,System.UInt64,System.UInt64,System.UInt64,ROS2.rcl_context_t&,ROS2.rcl_allocator_t)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WaitSetInitType_Invoke_mFC58972C6405B961C2D4940FFD3AAC195163606A (WaitSetInitType_t87E1D05131F194FAB01E72C1A03A0A2538C411AA* __this, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100* ___0_wait_set, uint64_t ___1_number_of_subscriptions, uint64_t ___2_number_of_guard_conditions, uint64_t ___3_number_of_timers, uint64_t ___4_number_of_clients, uint64_t ___5_number_of_services, uint64_t ___6_number_of_events, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___7_context, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831 ___8_allocator, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100*, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C*, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_wait_set, ___1_number_of_subscriptions, ___2_number_of_guard_conditions, ___3_number_of_timers, ___4_number_of_clients, ___5_number_of_services, ___6_number_of_events, ___7_context, ___8_allocator, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ROS2.NativeRcl/WaitSetInitType::BeginInvoke(ROS2.rcl_wait_set_t&,System.UInt64,System.UInt64,System.UInt64,System.UInt64,System.UInt64,System.UInt64,ROS2.rcl_context_t&,ROS2.rcl_allocator_t,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WaitSetInitType_BeginInvoke_m67E44E299062610343EA5724CE115B6FD6E47DB6 (WaitSetInitType_t87E1D05131F194FAB01E72C1A03A0A2538C411AA* __this, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100* ___0_wait_set, uint64_t ___1_number_of_subscriptions, uint64_t ___2_number_of_guard_conditions, uint64_t ___3_number_of_timers, uint64_t ___4_number_of_clients, uint64_t ___5_number_of_services, uint64_t ___6_number_of_events, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___7_context, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831 ___8_allocator, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___9_callback, RuntimeObject* ___10_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[10] = {0};
	__d_args[0] = Box(rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100_il2cpp_TypeInfo_var, &*___0_wait_set);
	__d_args[1] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &___1_number_of_subscriptions);
	__d_args[2] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &___2_number_of_guard_conditions);
	__d_args[3] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &___3_number_of_timers);
	__d_args[4] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &___4_number_of_clients);
	__d_args[5] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &___5_number_of_services);
	__d_args[6] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &___6_number_of_events);
	__d_args[7] = Box(rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C_il2cpp_TypeInfo_var, &*___7_context);
	__d_args[8] = Box(rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831_il2cpp_TypeInfo_var, &___8_allocator);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___9_callback, (RuntimeObject*)___10_object);
}
// System.Int32 ROS2.NativeRcl/WaitSetInitType::EndInvoke(ROS2.rcl_wait_set_t&,ROS2.rcl_context_t&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WaitSetInitType_EndInvoke_m7B827BA56148EED8C3312C93A8868C9BB957AE75 (WaitSetInitType_t87E1D05131F194FAB01E72C1A03A0A2538C411AA* __this, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100* ___0_wait_set, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___1_context, RuntimeObject* ___2_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_wait_set,
	___1_context,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___2_result, ___out_args);
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
int32_t WatiSetFiniType_Invoke_m26EFD42CC7F1B0A4D17869E521AFA2B15977A8CC_Multicast(WatiSetFiniType_tA3F438CE346815BF7ACA429F3EA9DB3556560FCC* __this, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100* ___0_wait_set, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WatiSetFiniType_tA3F438CE346815BF7ACA429F3EA9DB3556560FCC* currentDelegate = reinterpret_cast<WatiSetFiniType_tA3F438CE346815BF7ACA429F3EA9DB3556560FCC*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_wait_set, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t WatiSetFiniType_Invoke_m26EFD42CC7F1B0A4D17869E521AFA2B15977A8CC_OpenInst(WatiSetFiniType_tA3F438CE346815BF7ACA429F3EA9DB3556560FCC* __this, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100* ___0_wait_set, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_wait_set, method);
}
int32_t WatiSetFiniType_Invoke_m26EFD42CC7F1B0A4D17869E521AFA2B15977A8CC_OpenStatic(WatiSetFiniType_tA3F438CE346815BF7ACA429F3EA9DB3556560FCC* __this, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100* ___0_wait_set, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_wait_set, method);
}
int32_t WatiSetFiniType_Invoke_m26EFD42CC7F1B0A4D17869E521AFA2B15977A8CC_OpenStaticInvoker(WatiSetFiniType_tA3F438CE346815BF7ACA429F3EA9DB3556560FCC* __this, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100* ___0_wait_set, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< int32_t, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_wait_set);
}
int32_t WatiSetFiniType_Invoke_m26EFD42CC7F1B0A4D17869E521AFA2B15977A8CC_ClosedStaticInvoker(WatiSetFiniType_tA3F438CE346815BF7ACA429F3EA9DB3556560FCC* __this, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100* ___0_wait_set, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, RuntimeObject*, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_wait_set);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_WatiSetFiniType_tA3F438CE346815BF7ACA429F3EA9DB3556560FCC (WatiSetFiniType_tA3F438CE346815BF7ACA429F3EA9DB3556560FCC* __this, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100* ___0_wait_set, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)(rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_wait_set);

	return returnValue;
}
// System.Void ROS2.NativeRcl/WatiSetFiniType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WatiSetFiniType__ctor_m019BB39CACAF965688D105E2C5B140FBC0042345 (WatiSetFiniType_tA3F438CE346815BF7ACA429F3EA9DB3556560FCC* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&WatiSetFiniType_Invoke_m26EFD42CC7F1B0A4D17869E521AFA2B15977A8CC_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&WatiSetFiniType_Invoke_m26EFD42CC7F1B0A4D17869E521AFA2B15977A8CC_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WatiSetFiniType_Invoke_m26EFD42CC7F1B0A4D17869E521AFA2B15977A8CC_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&WatiSetFiniType_Invoke_m26EFD42CC7F1B0A4D17869E521AFA2B15977A8CC_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WatiSetFiniType_Invoke_m26EFD42CC7F1B0A4D17869E521AFA2B15977A8CC_Multicast;
}
// System.Int32 ROS2.NativeRcl/WatiSetFiniType::Invoke(ROS2.rcl_wait_set_t&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WatiSetFiniType_Invoke_m26EFD42CC7F1B0A4D17869E521AFA2B15977A8CC (WatiSetFiniType_tA3F438CE346815BF7ACA429F3EA9DB3556560FCC* __this, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100* ___0_wait_set, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_wait_set, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ROS2.NativeRcl/WatiSetFiniType::BeginInvoke(ROS2.rcl_wait_set_t&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WatiSetFiniType_BeginInvoke_mBAE484A53E98B064F90E608D8DC332813F9FD7B2 (WatiSetFiniType_tA3F438CE346815BF7ACA429F3EA9DB3556560FCC* __this, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100* ___0_wait_set, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100_il2cpp_TypeInfo_var, &*___0_wait_set);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Int32 ROS2.NativeRcl/WatiSetFiniType::EndInvoke(ROS2.rcl_wait_set_t&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WatiSetFiniType_EndInvoke_m87BD8B14C167B902FFB570528ACCC02E09E118A8 (WatiSetFiniType_tA3F438CE346815BF7ACA429F3EA9DB3556560FCC* __this, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100* ___0_wait_set, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_wait_set,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, ___out_args);
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
int32_t WaitSetClearType_Invoke_m818BAE5F8DB2F99D6F09BE7029C71F2B4793D9B2_Multicast(WaitSetClearType_t86E1B05E31A40014E169F1C9624369F6A48ADA80* __this, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100* ___0_wait_set, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WaitSetClearType_t86E1B05E31A40014E169F1C9624369F6A48ADA80* currentDelegate = reinterpret_cast<WaitSetClearType_t86E1B05E31A40014E169F1C9624369F6A48ADA80*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_wait_set, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t WaitSetClearType_Invoke_m818BAE5F8DB2F99D6F09BE7029C71F2B4793D9B2_OpenInst(WaitSetClearType_t86E1B05E31A40014E169F1C9624369F6A48ADA80* __this, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100* ___0_wait_set, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_wait_set, method);
}
int32_t WaitSetClearType_Invoke_m818BAE5F8DB2F99D6F09BE7029C71F2B4793D9B2_OpenStatic(WaitSetClearType_t86E1B05E31A40014E169F1C9624369F6A48ADA80* __this, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100* ___0_wait_set, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_wait_set, method);
}
int32_t WaitSetClearType_Invoke_m818BAE5F8DB2F99D6F09BE7029C71F2B4793D9B2_OpenStaticInvoker(WaitSetClearType_t86E1B05E31A40014E169F1C9624369F6A48ADA80* __this, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100* ___0_wait_set, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< int32_t, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_wait_set);
}
int32_t WaitSetClearType_Invoke_m818BAE5F8DB2F99D6F09BE7029C71F2B4793D9B2_ClosedStaticInvoker(WaitSetClearType_t86E1B05E31A40014E169F1C9624369F6A48ADA80* __this, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100* ___0_wait_set, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, RuntimeObject*, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_wait_set);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_WaitSetClearType_t86E1B05E31A40014E169F1C9624369F6A48ADA80 (WaitSetClearType_t86E1B05E31A40014E169F1C9624369F6A48ADA80* __this, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100* ___0_wait_set, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)(rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_wait_set);

	return returnValue;
}
// System.Void ROS2.NativeRcl/WaitSetClearType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitSetClearType__ctor_m981DCF4A5BBED3B7C00789CD37DAC171EBAAAA61 (WaitSetClearType_t86E1B05E31A40014E169F1C9624369F6A48ADA80* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&WaitSetClearType_Invoke_m818BAE5F8DB2F99D6F09BE7029C71F2B4793D9B2_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&WaitSetClearType_Invoke_m818BAE5F8DB2F99D6F09BE7029C71F2B4793D9B2_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WaitSetClearType_Invoke_m818BAE5F8DB2F99D6F09BE7029C71F2B4793D9B2_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&WaitSetClearType_Invoke_m818BAE5F8DB2F99D6F09BE7029C71F2B4793D9B2_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WaitSetClearType_Invoke_m818BAE5F8DB2F99D6F09BE7029C71F2B4793D9B2_Multicast;
}
// System.Int32 ROS2.NativeRcl/WaitSetClearType::Invoke(ROS2.rcl_wait_set_t&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WaitSetClearType_Invoke_m818BAE5F8DB2F99D6F09BE7029C71F2B4793D9B2 (WaitSetClearType_t86E1B05E31A40014E169F1C9624369F6A48ADA80* __this, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100* ___0_wait_set, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_wait_set, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ROS2.NativeRcl/WaitSetClearType::BeginInvoke(ROS2.rcl_wait_set_t&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WaitSetClearType_BeginInvoke_mC8A5EAC75076BC9E43B1382888F5563C61234F73 (WaitSetClearType_t86E1B05E31A40014E169F1C9624369F6A48ADA80* __this, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100* ___0_wait_set, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100_il2cpp_TypeInfo_var, &*___0_wait_set);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Int32 ROS2.NativeRcl/WaitSetClearType::EndInvoke(ROS2.rcl_wait_set_t&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WaitSetClearType_EndInvoke_mB9DECE1802B2D193DFB008E4A84BD7ED84F6D3BA (WaitSetClearType_t86E1B05E31A40014E169F1C9624369F6A48ADA80* __this, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100* ___0_wait_set, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_wait_set,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, ___out_args);
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
int32_t WaitSetAddSubscriptionType_Invoke_mA77D86858C855053761227229392939A597DB410_Multicast(WaitSetAddSubscriptionType_tB952F7946A7A06C27D970D1F8A28089434E2F4B4* __this, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100* ___0_wait_set, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD* ___1_subscription, uintptr_t ___2_index, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WaitSetAddSubscriptionType_tB952F7946A7A06C27D970D1F8A28089434E2F4B4* currentDelegate = reinterpret_cast<WaitSetAddSubscriptionType_tB952F7946A7A06C27D970D1F8A28089434E2F4B4*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100*, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD*, uintptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_wait_set, ___1_subscription, ___2_index, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t WaitSetAddSubscriptionType_Invoke_mA77D86858C855053761227229392939A597DB410_OpenInst(WaitSetAddSubscriptionType_tB952F7946A7A06C27D970D1F8A28089434E2F4B4* __this, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100* ___0_wait_set, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD* ___1_subscription, uintptr_t ___2_index, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100*, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD*, uintptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_wait_set, ___1_subscription, ___2_index, method);
}
int32_t WaitSetAddSubscriptionType_Invoke_mA77D86858C855053761227229392939A597DB410_OpenStatic(WaitSetAddSubscriptionType_tB952F7946A7A06C27D970D1F8A28089434E2F4B4* __this, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100* ___0_wait_set, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD* ___1_subscription, uintptr_t ___2_index, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100*, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD*, uintptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_wait_set, ___1_subscription, ___2_index, method);
}
int32_t WaitSetAddSubscriptionType_Invoke_mA77D86858C855053761227229392939A597DB410_OpenStaticInvoker(WaitSetAddSubscriptionType_tB952F7946A7A06C27D970D1F8A28089434E2F4B4* __this, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100* ___0_wait_set, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD* ___1_subscription, uintptr_t ___2_index, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100*, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD*, uintptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_wait_set, ___1_subscription, ___2_index);
}
int32_t WaitSetAddSubscriptionType_Invoke_mA77D86858C855053761227229392939A597DB410_ClosedStaticInvoker(WaitSetAddSubscriptionType_tB952F7946A7A06C27D970D1F8A28089434E2F4B4* __this, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100* ___0_wait_set, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD* ___1_subscription, uintptr_t ___2_index, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, RuntimeObject*, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100*, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD*, uintptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_wait_set, ___1_subscription, ___2_index);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_WaitSetAddSubscriptionType_tB952F7946A7A06C27D970D1F8A28089434E2F4B4 (WaitSetAddSubscriptionType_tB952F7946A7A06C27D970D1F8A28089434E2F4B4* __this, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100* ___0_wait_set, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD* ___1_subscription, uintptr_t ___2_index, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)(rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100*, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD*, uintptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_wait_set, ___1_subscription, ___2_index);

	return returnValue;
}
// System.Void ROS2.NativeRcl/WaitSetAddSubscriptionType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitSetAddSubscriptionType__ctor_m973C70D1AD2D535DF3EFBD99524A790D8D49A3C4 (WaitSetAddSubscriptionType_tB952F7946A7A06C27D970D1F8A28089434E2F4B4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WaitSetAddSubscriptionType_Invoke_mA77D86858C855053761227229392939A597DB410_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&WaitSetAddSubscriptionType_Invoke_mA77D86858C855053761227229392939A597DB410_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WaitSetAddSubscriptionType_Invoke_mA77D86858C855053761227229392939A597DB410_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&WaitSetAddSubscriptionType_Invoke_mA77D86858C855053761227229392939A597DB410_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WaitSetAddSubscriptionType_Invoke_mA77D86858C855053761227229392939A597DB410_Multicast;
}
// System.Int32 ROS2.NativeRcl/WaitSetAddSubscriptionType::Invoke(ROS2.rcl_wait_set_t&,ROS2.rcl_subscription_t&,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WaitSetAddSubscriptionType_Invoke_mA77D86858C855053761227229392939A597DB410 (WaitSetAddSubscriptionType_tB952F7946A7A06C27D970D1F8A28089434E2F4B4* __this, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100* ___0_wait_set, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD* ___1_subscription, uintptr_t ___2_index, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100*, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD*, uintptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_wait_set, ___1_subscription, ___2_index, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ROS2.NativeRcl/WaitSetAddSubscriptionType::BeginInvoke(ROS2.rcl_wait_set_t&,ROS2.rcl_subscription_t&,System.UIntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WaitSetAddSubscriptionType_BeginInvoke_mA666FD960D6C0ADED5737E8A9E9A54CA9A95A6BC (WaitSetAddSubscriptionType_tB952F7946A7A06C27D970D1F8A28089434E2F4B4* __this, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100* ___0_wait_set, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD* ___1_subscription, uintptr_t ___2_index, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100_il2cpp_TypeInfo_var, &*___0_wait_set);
	__d_args[1] = Box(rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD_il2cpp_TypeInfo_var, &*___1_subscription);
	__d_args[2] = Box(UIntPtr_t_il2cpp_TypeInfo_var, &___2_index);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// System.Int32 ROS2.NativeRcl/WaitSetAddSubscriptionType::EndInvoke(ROS2.rcl_wait_set_t&,ROS2.rcl_subscription_t&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WaitSetAddSubscriptionType_EndInvoke_m500C3C3BA62891E11E3DA0A4B4D8A31D7B65DAAA (WaitSetAddSubscriptionType_tB952F7946A7A06C27D970D1F8A28089434E2F4B4* __this, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100* ___0_wait_set, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD* ___1_subscription, RuntimeObject* ___2_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_wait_set,
	___1_subscription,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___2_result, ___out_args);
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
int32_t WaitType_Invoke_mF1701861B4823AEEAAD6DDCBAE32A4FE9DB3334A_Multicast(WaitType_t835E7382D2E046BD4590666AF95A16BFA8C85E01* __this, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100* ___0_wait_set, uint64_t ___1_timeout, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WaitType_t835E7382D2E046BD4590666AF95A16BFA8C85E01* currentDelegate = reinterpret_cast<WaitType_t835E7382D2E046BD4590666AF95A16BFA8C85E01*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100*, uint64_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_wait_set, ___1_timeout, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t WaitType_Invoke_mF1701861B4823AEEAAD6DDCBAE32A4FE9DB3334A_OpenInst(WaitType_t835E7382D2E046BD4590666AF95A16BFA8C85E01* __this, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100* ___0_wait_set, uint64_t ___1_timeout, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100*, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_wait_set, ___1_timeout, method);
}
int32_t WaitType_Invoke_mF1701861B4823AEEAAD6DDCBAE32A4FE9DB3334A_OpenStatic(WaitType_t835E7382D2E046BD4590666AF95A16BFA8C85E01* __this, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100* ___0_wait_set, uint64_t ___1_timeout, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100*, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_wait_set, ___1_timeout, method);
}
int32_t WaitType_Invoke_mF1701861B4823AEEAAD6DDCBAE32A4FE9DB3334A_OpenStaticInvoker(WaitType_t835E7382D2E046BD4590666AF95A16BFA8C85E01* __this, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100* ___0_wait_set, uint64_t ___1_timeout, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100*, uint64_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_wait_set, ___1_timeout);
}
int32_t WaitType_Invoke_mF1701861B4823AEEAAD6DDCBAE32A4FE9DB3334A_ClosedStaticInvoker(WaitType_t835E7382D2E046BD4590666AF95A16BFA8C85E01* __this, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100* ___0_wait_set, uint64_t ___1_timeout, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100*, uint64_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_wait_set, ___1_timeout);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_WaitType_t835E7382D2E046BD4590666AF95A16BFA8C85E01 (WaitType_t835E7382D2E046BD4590666AF95A16BFA8C85E01* __this, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100* ___0_wait_set, uint64_t ___1_timeout, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)(rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100*, uint64_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_wait_set, ___1_timeout);

	return returnValue;
}
// System.Void ROS2.NativeRcl/WaitType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitType__ctor_mAAED3A5D5AB0E524ED586F9ABE5A1D664E5BDF19 (WaitType_t835E7382D2E046BD4590666AF95A16BFA8C85E01* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&WaitType_Invoke_mF1701861B4823AEEAAD6DDCBAE32A4FE9DB3334A_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&WaitType_Invoke_mF1701861B4823AEEAAD6DDCBAE32A4FE9DB3334A_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WaitType_Invoke_mF1701861B4823AEEAAD6DDCBAE32A4FE9DB3334A_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&WaitType_Invoke_mF1701861B4823AEEAAD6DDCBAE32A4FE9DB3334A_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WaitType_Invoke_mF1701861B4823AEEAAD6DDCBAE32A4FE9DB3334A_Multicast;
}
// System.Int32 ROS2.NativeRcl/WaitType::Invoke(ROS2.rcl_wait_set_t&,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WaitType_Invoke_mF1701861B4823AEEAAD6DDCBAE32A4FE9DB3334A (WaitType_t835E7382D2E046BD4590666AF95A16BFA8C85E01* __this, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100* ___0_wait_set, uint64_t ___1_timeout, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100*, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_wait_set, ___1_timeout, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ROS2.NativeRcl/WaitType::BeginInvoke(ROS2.rcl_wait_set_t&,System.UInt64,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WaitType_BeginInvoke_m7D2AB4A7C3AC335A9992767318A2C9EA9252B540 (WaitType_t835E7382D2E046BD4590666AF95A16BFA8C85E01* __this, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100* ___0_wait_set, uint64_t ___1_timeout, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100_il2cpp_TypeInfo_var, &*___0_wait_set);
	__d_args[1] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &___1_timeout);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Int32 ROS2.NativeRcl/WaitType::EndInvoke(ROS2.rcl_wait_set_t&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WaitType_EndInvoke_mA4E9B646A1D487CB40792FDA3EAFD26CD7FCAE4B (WaitType_t835E7382D2E046BD4590666AF95A16BFA8C85E01* __this, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100* ___0_wait_set, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_wait_set,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, ___out_args);
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
int32_t RclClockGetNow_Invoke_m00070791151C18FE1EB755A8E1C4400261330075_Multicast(RclClockGetNow_tE7C0124D0B68F9278C1BE9AA93083FBB57A442BD* __this, intptr_t ___0_ros_clock, int64_t* ___1_query_now, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		RclClockGetNow_tE7C0124D0B68F9278C1BE9AA93083FBB57A442BD* currentDelegate = reinterpret_cast<RclClockGetNow_tE7C0124D0B68F9278C1BE9AA93083FBB57A442BD*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int64_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_ros_clock, ___1_query_now, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t RclClockGetNow_Invoke_m00070791151C18FE1EB755A8E1C4400261330075_OpenInst(RclClockGetNow_tE7C0124D0B68F9278C1BE9AA93083FBB57A442BD* __this, intptr_t ___0_ros_clock, int64_t* ___1_query_now, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, int64_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_ros_clock, ___1_query_now, method);
}
int32_t RclClockGetNow_Invoke_m00070791151C18FE1EB755A8E1C4400261330075_OpenStatic(RclClockGetNow_tE7C0124D0B68F9278C1BE9AA93083FBB57A442BD* __this, intptr_t ___0_ros_clock, int64_t* ___1_query_now, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, int64_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_ros_clock, ___1_query_now, method);
}
int32_t RclClockGetNow_Invoke_m00070791151C18FE1EB755A8E1C4400261330075_OpenStaticInvoker(RclClockGetNow_tE7C0124D0B68F9278C1BE9AA93083FBB57A442BD* __this, intptr_t ___0_ros_clock, int64_t* ___1_query_now, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, intptr_t, int64_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_ros_clock, ___1_query_now);
}
int32_t RclClockGetNow_Invoke_m00070791151C18FE1EB755A8E1C4400261330075_ClosedStaticInvoker(RclClockGetNow_tE7C0124D0B68F9278C1BE9AA93083FBB57A442BD* __this, intptr_t ___0_ros_clock, int64_t* ___1_query_now, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, intptr_t, int64_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_ros_clock, ___1_query_now);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_RclClockGetNow_tE7C0124D0B68F9278C1BE9AA93083FBB57A442BD (RclClockGetNow_tE7C0124D0B68F9278C1BE9AA93083FBB57A442BD* __this, intptr_t ___0_ros_clock, int64_t* ___1_query_now, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)(intptr_t, int64_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_ros_clock, ___1_query_now);

	return returnValue;
}
// System.Void ROS2.NativeRcl/RclClockGetNow::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RclClockGetNow__ctor_m34B661D824FBAD8A26CF1BEE741CEDDB44C425D0 (RclClockGetNow_tE7C0124D0B68F9278C1BE9AA93083FBB57A442BD* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&RclClockGetNow_Invoke_m00070791151C18FE1EB755A8E1C4400261330075_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&RclClockGetNow_Invoke_m00070791151C18FE1EB755A8E1C4400261330075_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&RclClockGetNow_Invoke_m00070791151C18FE1EB755A8E1C4400261330075_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&RclClockGetNow_Invoke_m00070791151C18FE1EB755A8E1C4400261330075_Multicast;
}
// System.Int32 ROS2.NativeRcl/RclClockGetNow::Invoke(System.IntPtr,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RclClockGetNow_Invoke_m00070791151C18FE1EB755A8E1C4400261330075 (RclClockGetNow_tE7C0124D0B68F9278C1BE9AA93083FBB57A442BD* __this, intptr_t ___0_ros_clock, int64_t* ___1_query_now, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int64_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_ros_clock, ___1_query_now, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ROS2.NativeRcl/RclClockGetNow::BeginInvoke(System.IntPtr,System.Int64&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RclClockGetNow_BeginInvoke_mA0A01C855C189E3FD96E3543E6A71374B7D1669D (RclClockGetNow_tE7C0124D0B68F9278C1BE9AA93083FBB57A442BD* __this, intptr_t ___0_ros_clock, int64_t* ___1_query_now, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_ros_clock);
	__d_args[1] = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &*___1_query_now);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Int32 ROS2.NativeRcl/RclClockGetNow::EndInvoke(System.Int64&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RclClockGetNow_EndInvoke_m5E90E7F50138410C4F62A85C56A4A483B5713B30 (RclClockGetNow_tE7C0124D0B68F9278C1BE9AA93083FBB57A442BD* __this, int64_t* ___0_query_now, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_query_now,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, ___out_args);
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
rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831 RclGetDefaultAllocatorType_Invoke_m41CECCE737A7F68EADC9033A4463964A4E585096_Multicast(RclGetDefaultAllocatorType_t3073FF12B8067D85A753E0AED56D25D05214A994* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831 retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		RclGetDefaultAllocatorType_t3073FF12B8067D85A753E0AED56D25D05214A994* currentDelegate = reinterpret_cast<RclGetDefaultAllocatorType_t3073FF12B8067D85A753E0AED56D25D05214A994*>(delegatesToInvoke[i]);
		typedef rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831 (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831 RclGetDefaultAllocatorType_Invoke_m41CECCE737A7F68EADC9033A4463964A4E585096_OpenInst(RclGetDefaultAllocatorType_t3073FF12B8067D85A753E0AED56D25D05214A994* __this, const RuntimeMethod* method)
{
	typedef rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831 (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831 RclGetDefaultAllocatorType_Invoke_m41CECCE737A7F68EADC9033A4463964A4E585096_OpenStatic(RclGetDefaultAllocatorType_t3073FF12B8067D85A753E0AED56D25D05214A994* __this, const RuntimeMethod* method)
{
	typedef rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831 (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831 RclGetDefaultAllocatorType_Invoke_m41CECCE737A7F68EADC9033A4463964A4E585096_OpenStaticInvoker(RclGetDefaultAllocatorType_t3073FF12B8067D85A753E0AED56D25D05214A994* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker0< rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831 >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL);
}
rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831 RclGetDefaultAllocatorType_Invoke_m41CECCE737A7F68EADC9033A4463964A4E585096_ClosedStaticInvoker(RclGetDefaultAllocatorType_t3073FF12B8067D85A753E0AED56D25D05214A994* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831, RuntimeObject* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831 DelegatePInvokeWrapper_RclGetDefaultAllocatorType_t3073FF12B8067D85A753E0AED56D25D05214A994 (RclGetDefaultAllocatorType_t3073FF12B8067D85A753E0AED56D25D05214A994* __this, const RuntimeMethod* method)
{
	typedef rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831 (CDECL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831 returnValue = il2cppPInvokeFunc();

	return returnValue;
}
// System.Void ROS2.NativeRcl/RclGetDefaultAllocatorType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RclGetDefaultAllocatorType__ctor_m427E58DAD55BE8F6A0DAA175A6A71ACD6F9F0480 (RclGetDefaultAllocatorType_t3073FF12B8067D85A753E0AED56D25D05214A994* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&RclGetDefaultAllocatorType_Invoke_m41CECCE737A7F68EADC9033A4463964A4E585096_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&RclGetDefaultAllocatorType_Invoke_m41CECCE737A7F68EADC9033A4463964A4E585096_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&RclGetDefaultAllocatorType_Invoke_m41CECCE737A7F68EADC9033A4463964A4E585096_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&RclGetDefaultAllocatorType_Invoke_m41CECCE737A7F68EADC9033A4463964A4E585096_Multicast;
}
// ROS2.rcl_allocator_t ROS2.NativeRcl/RclGetDefaultAllocatorType::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831 RclGetDefaultAllocatorType_Invoke_m41CECCE737A7F68EADC9033A4463964A4E585096 (RclGetDefaultAllocatorType_t3073FF12B8067D85A753E0AED56D25D05214A994* __this, const RuntimeMethod* method) 
{
	typedef rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831 (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ROS2.NativeRcl/RclGetDefaultAllocatorType::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RclGetDefaultAllocatorType_BeginInvoke_m30AEAF2FB82FF29BC4803C8088D616ACBADFAD0B (RclGetDefaultAllocatorType_t3073FF12B8067D85A753E0AED56D25D05214A994* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// ROS2.rcl_allocator_t ROS2.NativeRcl/RclGetDefaultAllocatorType::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831 RclGetDefaultAllocatorType_EndInvoke_mEC3E05A021850C623CB3EADD942A2CD662030ED5 (RclGetDefaultAllocatorType_t3073FF12B8067D85A753E0AED56D25D05214A994* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ResetErrorType_Invoke_m4274612856ECEBA822B4AA2B15E7F75487C4713C_Multicast(ResetErrorType_t4D921B90107C97E83795A5C064D3691084BB81DC* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ResetErrorType_t4D921B90107C97E83795A5C064D3691084BB81DC* currentDelegate = reinterpret_cast<ResetErrorType_t4D921B90107C97E83795A5C064D3691084BB81DC*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ResetErrorType_Invoke_m4274612856ECEBA822B4AA2B15E7F75487C4713C_OpenInst(ResetErrorType_t4D921B90107C97E83795A5C064D3691084BB81DC* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void ResetErrorType_Invoke_m4274612856ECEBA822B4AA2B15E7F75487C4713C_OpenStatic(ResetErrorType_t4D921B90107C97E83795A5C064D3691084BB81DC* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void ResetErrorType_Invoke_m4274612856ECEBA822B4AA2B15E7F75487C4713C_OpenStaticInvoker(ResetErrorType_t4D921B90107C97E83795A5C064D3691084BB81DC* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL);
}
void ResetErrorType_Invoke_m4274612856ECEBA822B4AA2B15E7F75487C4713C_ClosedStaticInvoker(ResetErrorType_t4D921B90107C97E83795A5C064D3691084BB81DC* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ResetErrorType_t4D921B90107C97E83795A5C064D3691084BB81DC (ResetErrorType_t4D921B90107C97E83795A5C064D3691084BB81DC* __this, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void ROS2.NativeRcl/ResetErrorType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResetErrorType__ctor_m6AA4EEEA59CCB10DB6D8D0E00BA9D971B787812C (ResetErrorType_t4D921B90107C97E83795A5C064D3691084BB81DC* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&ResetErrorType_Invoke_m4274612856ECEBA822B4AA2B15E7F75487C4713C_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ResetErrorType_Invoke_m4274612856ECEBA822B4AA2B15E7F75487C4713C_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ResetErrorType_Invoke_m4274612856ECEBA822B4AA2B15E7F75487C4713C_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&ResetErrorType_Invoke_m4274612856ECEBA822B4AA2B15E7F75487C4713C_Multicast;
}
// System.Void ROS2.NativeRcl/ResetErrorType::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResetErrorType_Invoke_m4274612856ECEBA822B4AA2B15E7F75487C4713C (ResetErrorType_t4D921B90107C97E83795A5C064D3691084BB81DC* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ROS2.NativeRcl/ResetErrorType::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ResetErrorType_BeginInvoke_m25BB0E1E26ABF8988924404E45F43D2D40875B19 (ResetErrorType_t4D921B90107C97E83795A5C064D3691084BB81DC* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// System.Void ROS2.NativeRcl/ResetErrorType::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResetErrorType_EndInvoke_mE7E6CD4BE3954DE7C151651DD779E7494EED1744 (ResetErrorType_t4D921B90107C97E83795A5C064D3691084BB81DC* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
// System.Void ROS2.NativeRclInterface::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeRclInterface__cctor_m39CC3E5B9A65DFF54B537DA3B127C4104BF8B4B4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisposeErrorStringType_tB0EB5ABA8F09AB9C18BCB301CABC0010FA27C990_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisposeErrorStringType_tB0EB5ABA8F09AB9C18BCB301CABC0010FA27C990_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetErrorStringType_t453607676A6C388E6CBFDFD75F799FDA836851DD_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetErrorStringType_t453607676A6C388E6CBFDFD75F799FDA836851DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NodeCreateDefaltOptionsType_t694FBD8C3D7CA67B641200A83CB864C8FD58787E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NodeCreateDefaltOptionsType_t694FBD8C3D7CA67B641200A83CB864C8FD58787E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NodeDisposeOptionsType_t15BDDEA610F9F4D00AC15F76577DB21C03EAF5F7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NodeDisposeOptionsType_t15BDDEA610F9F4D00AC15F76577DB21C03EAF5F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PublisherCreateOptionsType_t9606320C1541DAB9AEE9478589F1BDD99527DB8F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PublisherCreateOptionsType_t9606320C1541DAB9AEE9478589F1BDD99527DB8F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PublisherDisposeOptionsType_tC809782AD42F6F729C61AF44BBA4FA6E34339EBD_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PublisherDisposeOptionsType_tC809782AD42F6F729C61AF44BBA4FA6E34339EBD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RCLCSInitType_t98BFF379AE54A896A681209B70D41C4504AF733F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RCLCSInitType_t98BFF379AE54A896A681209B70D41C4504AF733F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RclcsClockCreate_t7DE4D8ACB9FFEBA0D5B88B58E6C8C5A91AF86C4B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RclcsClockCreate_t7DE4D8ACB9FFEBA0D5B88B58E6C8C5A91AF86C4B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RclcsClockDispose_tDE4246256AFCE3214E441466A84D08B4922CAE03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RclcsClockDispose_tDE4246256AFCE3214E441466A84D08B4922CAE03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubscriptionCreateOptionsType_tA856B0FFDE605A45098ED09C5BD2542A6F7AB64C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubscriptionCreateOptionsType_tA856B0FFDE605A45098ED09C5BD2542A6F7AB64C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubscriptionDisposeOptionsType_t39B2BA1FAA8B01F34399F64DBF3A9008416B15FC_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubscriptionDisposeOptionsType_t39B2BA1FAA8B01F34399F64DBF3A9008416B15FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B8FE116E9F41B430F20EA23965BD00D25206CF9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DD72C1541D3865273E7C4E4CEF3841B42F38C5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral685D5ECA5027BE2C46CB9FABD87EE02544CAB7ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral692DEB3A54499C52585B15ACE7132881F28640D6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6BC0EFDF82D79D162E28A31B1D9259611FCDA2FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral729F59DDAECD441E126322BACBBF767478E3359F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B7404EB74ABECA7588F0660B4BCA34EDEDAA461);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral981A75FEBDCFC55385DD62F40DB3EB28ACD51F77);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral981D53878445013C01900DB8D2C5EC5DD5026FBC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EACF9E5AAB4BB2AB15144500B4EB910AA2A2000);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC423014BBCA3B56A3EE2C0C8CEA254A7ECE81CC9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCDE38208224E83BEC15CD4D7429E2AA2446E8CE);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = DllLoadUtilsFactory_GetDllLoadUtils_m8EB2D6E40DBF00ED8E25114CAABFFFCF16286775(NULL);
		((NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_StaticFields*)il2cpp_codegen_static_fields_for(NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var))->___dllLoadUtils_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_StaticFields*)il2cpp_codegen_static_fields_for(NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var))->___dllLoadUtils_0), (void*)L_0);
		RuntimeObject* L_1 = ((NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_StaticFields*)il2cpp_codegen_static_fields_for(NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var))->___dllLoadUtils_0;
		NullCheck(L_1);
		intptr_t L_2;
		L_2 = InterfaceFuncInvoker1< intptr_t, String_t* >::Invoke(0 /* System.IntPtr ROS2.DllLoadUtils::LoadLibrary(System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_1, _stringLiteral692DEB3A54499C52585B15ACE7132881F28640D6);
		((NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_StaticFields*)il2cpp_codegen_static_fields_for(NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var))->___nativeROS2CS_1 = L_2;
		RuntimeObject* L_3 = ((NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_StaticFields*)il2cpp_codegen_static_fields_for(NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var))->___dllLoadUtils_0;
		intptr_t L_4 = ((NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_StaticFields*)il2cpp_codegen_static_fields_for(NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var))->___nativeROS2CS_1;
		NullCheck(L_3);
		intptr_t L_5;
		L_5 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_3, L_4, _stringLiteral4DD72C1541D3865273E7C4E4CEF3841B42F38C5A);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (RCLCSInitType_t98BFF379AE54A896A681209B70D41C4504AF733F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Delegate_t* L_8;
		L_8 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_5, L_7, NULL);
		((NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_StaticFields*)il2cpp_codegen_static_fields_for(NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var))->___rclcs_init_2 = ((RCLCSInitType_t98BFF379AE54A896A681209B70D41C4504AF733F*)CastclassSealed((RuntimeObject*)L_8, RCLCSInitType_t98BFF379AE54A896A681209B70D41C4504AF733F_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_StaticFields*)il2cpp_codegen_static_fields_for(NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var))->___rclcs_init_2), (void*)((RCLCSInitType_t98BFF379AE54A896A681209B70D41C4504AF733F*)CastclassSealed((RuntimeObject*)L_8, RCLCSInitType_t98BFF379AE54A896A681209B70D41C4504AF733F_il2cpp_TypeInfo_var)));
		RuntimeObject* L_9 = ((NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_StaticFields*)il2cpp_codegen_static_fields_for(NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var))->___dllLoadUtils_0;
		intptr_t L_10 = ((NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_StaticFields*)il2cpp_codegen_static_fields_for(NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var))->___nativeROS2CS_1;
		NullCheck(L_9);
		intptr_t L_11;
		L_11 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_9, L_10, _stringLiteral685D5ECA5027BE2C46CB9FABD87EE02544CAB7ED);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (GetErrorStringType_t453607676A6C388E6CBFDFD75F799FDA836851DD_0_0_0_var) };
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		Delegate_t* L_14;
		L_14 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_11, L_13, NULL);
		((NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_StaticFields*)il2cpp_codegen_static_fields_for(NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var))->___rclcs_get_error_string_3 = ((GetErrorStringType_t453607676A6C388E6CBFDFD75F799FDA836851DD*)CastclassSealed((RuntimeObject*)L_14, GetErrorStringType_t453607676A6C388E6CBFDFD75F799FDA836851DD_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_StaticFields*)il2cpp_codegen_static_fields_for(NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var))->___rclcs_get_error_string_3), (void*)((GetErrorStringType_t453607676A6C388E6CBFDFD75F799FDA836851DD*)CastclassSealed((RuntimeObject*)L_14, GetErrorStringType_t453607676A6C388E6CBFDFD75F799FDA836851DD_il2cpp_TypeInfo_var)));
		RuntimeObject* L_15 = ((NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_StaticFields*)il2cpp_codegen_static_fields_for(NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var))->___dllLoadUtils_0;
		intptr_t L_16 = ((NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_StaticFields*)il2cpp_codegen_static_fields_for(NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var))->___nativeROS2CS_1;
		NullCheck(L_15);
		intptr_t L_17;
		L_17 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_15, L_16, _stringLiteralDCDE38208224E83BEC15CD4D7429E2AA2446E8CE);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (DisposeErrorStringType_tB0EB5ABA8F09AB9C18BCB301CABC0010FA27C990_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		Delegate_t* L_20;
		L_20 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_17, L_19, NULL);
		((NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_StaticFields*)il2cpp_codegen_static_fields_for(NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var))->___rclcs_dispose_error_string_4 = ((DisposeErrorStringType_tB0EB5ABA8F09AB9C18BCB301CABC0010FA27C990*)CastclassSealed((RuntimeObject*)L_20, DisposeErrorStringType_tB0EB5ABA8F09AB9C18BCB301CABC0010FA27C990_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_StaticFields*)il2cpp_codegen_static_fields_for(NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var))->___rclcs_dispose_error_string_4), (void*)((DisposeErrorStringType_tB0EB5ABA8F09AB9C18BCB301CABC0010FA27C990*)CastclassSealed((RuntimeObject*)L_20, DisposeErrorStringType_tB0EB5ABA8F09AB9C18BCB301CABC0010FA27C990_il2cpp_TypeInfo_var)));
		RuntimeObject* L_21 = ((NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_StaticFields*)il2cpp_codegen_static_fields_for(NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var))->___dllLoadUtils_0;
		intptr_t L_22 = ((NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_StaticFields*)il2cpp_codegen_static_fields_for(NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var))->___nativeROS2CS_1;
		NullCheck(L_21);
		intptr_t L_23;
		L_23 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_21, L_22, _stringLiteral3B8FE116E9F41B430F20EA23965BD00D25206CF9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (NodeCreateDefaltOptionsType_t694FBD8C3D7CA67B641200A83CB864C8FD58787E_0_0_0_var) };
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		Delegate_t* L_26;
		L_26 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_23, L_25, NULL);
		((NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_StaticFields*)il2cpp_codegen_static_fields_for(NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var))->___rclcs_node_create_default_options_5 = ((NodeCreateDefaltOptionsType_t694FBD8C3D7CA67B641200A83CB864C8FD58787E*)CastclassSealed((RuntimeObject*)L_26, NodeCreateDefaltOptionsType_t694FBD8C3D7CA67B641200A83CB864C8FD58787E_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_StaticFields*)il2cpp_codegen_static_fields_for(NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var))->___rclcs_node_create_default_options_5), (void*)((NodeCreateDefaltOptionsType_t694FBD8C3D7CA67B641200A83CB864C8FD58787E*)CastclassSealed((RuntimeObject*)L_26, NodeCreateDefaltOptionsType_t694FBD8C3D7CA67B641200A83CB864C8FD58787E_il2cpp_TypeInfo_var)));
		RuntimeObject* L_27 = ((NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_StaticFields*)il2cpp_codegen_static_fields_for(NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var))->___dllLoadUtils_0;
		intptr_t L_28 = ((NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_StaticFields*)il2cpp_codegen_static_fields_for(NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var))->___nativeROS2CS_1;
		NullCheck(L_27);
		intptr_t L_29;
		L_29 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_27, L_28, _stringLiteral981A75FEBDCFC55385DD62F40DB3EB28ACD51F77);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (NodeDisposeOptionsType_t15BDDEA610F9F4D00AC15F76577DB21C03EAF5F7_0_0_0_var) };
		Type_t* L_31;
		L_31 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_30, NULL);
		Delegate_t* L_32;
		L_32 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_29, L_31, NULL);
		((NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_StaticFields*)il2cpp_codegen_static_fields_for(NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var))->___rclcs_node_dispose_options_6 = ((NodeDisposeOptionsType_t15BDDEA610F9F4D00AC15F76577DB21C03EAF5F7*)CastclassSealed((RuntimeObject*)L_32, NodeDisposeOptionsType_t15BDDEA610F9F4D00AC15F76577DB21C03EAF5F7_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_StaticFields*)il2cpp_codegen_static_fields_for(NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var))->___rclcs_node_dispose_options_6), (void*)((NodeDisposeOptionsType_t15BDDEA610F9F4D00AC15F76577DB21C03EAF5F7*)CastclassSealed((RuntimeObject*)L_32, NodeDisposeOptionsType_t15BDDEA610F9F4D00AC15F76577DB21C03EAF5F7_il2cpp_TypeInfo_var)));
		RuntimeObject* L_33 = ((NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_StaticFields*)il2cpp_codegen_static_fields_for(NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var))->___dllLoadUtils_0;
		intptr_t L_34 = ((NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_StaticFields*)il2cpp_codegen_static_fields_for(NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var))->___nativeROS2CS_1;
		NullCheck(L_33);
		intptr_t L_35;
		L_35 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_33, L_34, _stringLiteralC423014BBCA3B56A3EE2C0C8CEA254A7ECE81CC9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_36 = { reinterpret_cast<intptr_t> (SubscriptionCreateOptionsType_tA856B0FFDE605A45098ED09C5BD2542A6F7AB64C_0_0_0_var) };
		Type_t* L_37;
		L_37 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_36, NULL);
		Delegate_t* L_38;
		L_38 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_35, L_37, NULL);
		((NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_StaticFields*)il2cpp_codegen_static_fields_for(NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var))->___rclcs_subscription_create_options_7 = ((SubscriptionCreateOptionsType_tA856B0FFDE605A45098ED09C5BD2542A6F7AB64C*)CastclassSealed((RuntimeObject*)L_38, SubscriptionCreateOptionsType_tA856B0FFDE605A45098ED09C5BD2542A6F7AB64C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_StaticFields*)il2cpp_codegen_static_fields_for(NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var))->___rclcs_subscription_create_options_7), (void*)((SubscriptionCreateOptionsType_tA856B0FFDE605A45098ED09C5BD2542A6F7AB64C*)CastclassSealed((RuntimeObject*)L_38, SubscriptionCreateOptionsType_tA856B0FFDE605A45098ED09C5BD2542A6F7AB64C_il2cpp_TypeInfo_var)));
		RuntimeObject* L_39 = ((NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_StaticFields*)il2cpp_codegen_static_fields_for(NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var))->___dllLoadUtils_0;
		intptr_t L_40 = ((NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_StaticFields*)il2cpp_codegen_static_fields_for(NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var))->___nativeROS2CS_1;
		NullCheck(L_39);
		intptr_t L_41;
		L_41 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_39, L_40, _stringLiteral6BC0EFDF82D79D162E28A31B1D9259611FCDA2FF);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (SubscriptionDisposeOptionsType_t39B2BA1FAA8B01F34399F64DBF3A9008416B15FC_0_0_0_var) };
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
		Delegate_t* L_44;
		L_44 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_41, L_43, NULL);
		((NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_StaticFields*)il2cpp_codegen_static_fields_for(NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var))->___rclcs_subscription_dispose_options_8 = ((SubscriptionDisposeOptionsType_t39B2BA1FAA8B01F34399F64DBF3A9008416B15FC*)CastclassSealed((RuntimeObject*)L_44, SubscriptionDisposeOptionsType_t39B2BA1FAA8B01F34399F64DBF3A9008416B15FC_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_StaticFields*)il2cpp_codegen_static_fields_for(NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var))->___rclcs_subscription_dispose_options_8), (void*)((SubscriptionDisposeOptionsType_t39B2BA1FAA8B01F34399F64DBF3A9008416B15FC*)CastclassSealed((RuntimeObject*)L_44, SubscriptionDisposeOptionsType_t39B2BA1FAA8B01F34399F64DBF3A9008416B15FC_il2cpp_TypeInfo_var)));
		RuntimeObject* L_45 = ((NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_StaticFields*)il2cpp_codegen_static_fields_for(NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var))->___dllLoadUtils_0;
		intptr_t L_46 = ((NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_StaticFields*)il2cpp_codegen_static_fields_for(NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var))->___nativeROS2CS_1;
		NullCheck(L_45);
		intptr_t L_47;
		L_47 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_45, L_46, _stringLiteral9EACF9E5AAB4BB2AB15144500B4EB910AA2A2000);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_48 = { reinterpret_cast<intptr_t> (PublisherCreateOptionsType_t9606320C1541DAB9AEE9478589F1BDD99527DB8F_0_0_0_var) };
		Type_t* L_49;
		L_49 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_48, NULL);
		Delegate_t* L_50;
		L_50 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_47, L_49, NULL);
		((NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_StaticFields*)il2cpp_codegen_static_fields_for(NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var))->___rclcs_publisher_create_options_9 = ((PublisherCreateOptionsType_t9606320C1541DAB9AEE9478589F1BDD99527DB8F*)CastclassSealed((RuntimeObject*)L_50, PublisherCreateOptionsType_t9606320C1541DAB9AEE9478589F1BDD99527DB8F_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_StaticFields*)il2cpp_codegen_static_fields_for(NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var))->___rclcs_publisher_create_options_9), (void*)((PublisherCreateOptionsType_t9606320C1541DAB9AEE9478589F1BDD99527DB8F*)CastclassSealed((RuntimeObject*)L_50, PublisherCreateOptionsType_t9606320C1541DAB9AEE9478589F1BDD99527DB8F_il2cpp_TypeInfo_var)));
		RuntimeObject* L_51 = ((NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_StaticFields*)il2cpp_codegen_static_fields_for(NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var))->___dllLoadUtils_0;
		intptr_t L_52 = ((NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_StaticFields*)il2cpp_codegen_static_fields_for(NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var))->___nativeROS2CS_1;
		NullCheck(L_51);
		intptr_t L_53;
		L_53 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_51, L_52, _stringLiteral729F59DDAECD441E126322BACBBF767478E3359F);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_54 = { reinterpret_cast<intptr_t> (PublisherDisposeOptionsType_tC809782AD42F6F729C61AF44BBA4FA6E34339EBD_0_0_0_var) };
		Type_t* L_55;
		L_55 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_54, NULL);
		Delegate_t* L_56;
		L_56 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_53, L_55, NULL);
		((NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_StaticFields*)il2cpp_codegen_static_fields_for(NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var))->___rclcs_publisher_dispose_options_10 = ((PublisherDisposeOptionsType_tC809782AD42F6F729C61AF44BBA4FA6E34339EBD*)CastclassSealed((RuntimeObject*)L_56, PublisherDisposeOptionsType_tC809782AD42F6F729C61AF44BBA4FA6E34339EBD_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_StaticFields*)il2cpp_codegen_static_fields_for(NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var))->___rclcs_publisher_dispose_options_10), (void*)((PublisherDisposeOptionsType_tC809782AD42F6F729C61AF44BBA4FA6E34339EBD*)CastclassSealed((RuntimeObject*)L_56, PublisherDisposeOptionsType_tC809782AD42F6F729C61AF44BBA4FA6E34339EBD_il2cpp_TypeInfo_var)));
		RuntimeObject* L_57 = ((NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_StaticFields*)il2cpp_codegen_static_fields_for(NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var))->___dllLoadUtils_0;
		intptr_t L_58 = ((NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_StaticFields*)il2cpp_codegen_static_fields_for(NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var))->___nativeROS2CS_1;
		NullCheck(L_57);
		intptr_t L_59;
		L_59 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_57, L_58, _stringLiteral7B7404EB74ABECA7588F0660B4BCA34EDEDAA461);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (RclcsClockCreate_t7DE4D8ACB9FFEBA0D5B88B58E6C8C5A91AF86C4B_0_0_0_var) };
		Type_t* L_61;
		L_61 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_60, NULL);
		Delegate_t* L_62;
		L_62 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_59, L_61, NULL);
		((NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_StaticFields*)il2cpp_codegen_static_fields_for(NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var))->___rclcs_ros_clock_create_11 = ((RclcsClockCreate_t7DE4D8ACB9FFEBA0D5B88B58E6C8C5A91AF86C4B*)CastclassSealed((RuntimeObject*)L_62, RclcsClockCreate_t7DE4D8ACB9FFEBA0D5B88B58E6C8C5A91AF86C4B_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_StaticFields*)il2cpp_codegen_static_fields_for(NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var))->___rclcs_ros_clock_create_11), (void*)((RclcsClockCreate_t7DE4D8ACB9FFEBA0D5B88B58E6C8C5A91AF86C4B*)CastclassSealed((RuntimeObject*)L_62, RclcsClockCreate_t7DE4D8ACB9FFEBA0D5B88B58E6C8C5A91AF86C4B_il2cpp_TypeInfo_var)));
		RuntimeObject* L_63 = ((NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_StaticFields*)il2cpp_codegen_static_fields_for(NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var))->___dllLoadUtils_0;
		intptr_t L_64 = ((NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_StaticFields*)il2cpp_codegen_static_fields_for(NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var))->___nativeROS2CS_1;
		NullCheck(L_63);
		intptr_t L_65;
		L_65 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_63, L_64, _stringLiteral981D53878445013C01900DB8D2C5EC5DD5026FBC);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_66 = { reinterpret_cast<intptr_t> (RclcsClockDispose_tDE4246256AFCE3214E441466A84D08B4922CAE03_0_0_0_var) };
		Type_t* L_67;
		L_67 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_66, NULL);
		Delegate_t* L_68;
		L_68 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_65, L_67, NULL);
		((NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_StaticFields*)il2cpp_codegen_static_fields_for(NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var))->___rclcs_ros_clock_dispose_12 = ((RclcsClockDispose_tDE4246256AFCE3214E441466A84D08B4922CAE03*)CastclassSealed((RuntimeObject*)L_68, RclcsClockDispose_tDE4246256AFCE3214E441466A84D08B4922CAE03_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_StaticFields*)il2cpp_codegen_static_fields_for(NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var))->___rclcs_ros_clock_dispose_12), (void*)((RclcsClockDispose_tDE4246256AFCE3214E441466A84D08B4922CAE03*)CastclassSealed((RuntimeObject*)L_68, RclcsClockDispose_tDE4246256AFCE3214E441466A84D08B4922CAE03_il2cpp_TypeInfo_var)));
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
int32_t RCLCSInitType_Invoke_m0F244268FB97A1EC69BAE44FBD0BB9C201DF4E42_Multicast(RCLCSInitType_t98BFF379AE54A896A681209B70D41C4504AF733F* __this, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___0_context, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831 ___1_allocator, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		RCLCSInitType_t98BFF379AE54A896A681209B70D41C4504AF733F* currentDelegate = reinterpret_cast<RCLCSInitType_t98BFF379AE54A896A681209B70D41C4504AF733F*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C*, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_context, ___1_allocator, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t RCLCSInitType_Invoke_m0F244268FB97A1EC69BAE44FBD0BB9C201DF4E42_OpenInst(RCLCSInitType_t98BFF379AE54A896A681209B70D41C4504AF733F* __this, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___0_context, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831 ___1_allocator, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C*, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_context, ___1_allocator, method);
}
int32_t RCLCSInitType_Invoke_m0F244268FB97A1EC69BAE44FBD0BB9C201DF4E42_OpenStatic(RCLCSInitType_t98BFF379AE54A896A681209B70D41C4504AF733F* __this, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___0_context, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831 ___1_allocator, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C*, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_context, ___1_allocator, method);
}
int32_t RCLCSInitType_Invoke_m0F244268FB97A1EC69BAE44FBD0BB9C201DF4E42_OpenStaticInvoker(RCLCSInitType_t98BFF379AE54A896A681209B70D41C4504AF733F* __this, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___0_context, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831 ___1_allocator, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C*, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831 >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_context, ___1_allocator);
}
int32_t RCLCSInitType_Invoke_m0F244268FB97A1EC69BAE44FBD0BB9C201DF4E42_ClosedStaticInvoker(RCLCSInitType_t98BFF379AE54A896A681209B70D41C4504AF733F* __this, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___0_context, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831 ___1_allocator, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C*, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831 >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_context, ___1_allocator);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_RCLCSInitType_t98BFF379AE54A896A681209B70D41C4504AF733F (RCLCSInitType_t98BFF379AE54A896A681209B70D41C4504AF733F* __this, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___0_context, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831 ___1_allocator, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C*, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_context, ___1_allocator);

	return returnValue;
}
// System.Void ROS2.NativeRclInterface/RCLCSInitType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RCLCSInitType__ctor_m580FEB7BEB81F8F40FD114D1A16065C862A1E2F5 (RCLCSInitType_t98BFF379AE54A896A681209B70D41C4504AF733F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&RCLCSInitType_Invoke_m0F244268FB97A1EC69BAE44FBD0BB9C201DF4E42_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&RCLCSInitType_Invoke_m0F244268FB97A1EC69BAE44FBD0BB9C201DF4E42_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&RCLCSInitType_Invoke_m0F244268FB97A1EC69BAE44FBD0BB9C201DF4E42_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&RCLCSInitType_Invoke_m0F244268FB97A1EC69BAE44FBD0BB9C201DF4E42_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&RCLCSInitType_Invoke_m0F244268FB97A1EC69BAE44FBD0BB9C201DF4E42_Multicast;
}
// System.Int32 ROS2.NativeRclInterface/RCLCSInitType::Invoke(ROS2.rcl_context_t&,ROS2.rcl_allocator_t)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RCLCSInitType_Invoke_m0F244268FB97A1EC69BAE44FBD0BB9C201DF4E42 (RCLCSInitType_t98BFF379AE54A896A681209B70D41C4504AF733F* __this, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___0_context, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831 ___1_allocator, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C*, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_context, ___1_allocator, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ROS2.NativeRclInterface/RCLCSInitType::BeginInvoke(ROS2.rcl_context_t&,ROS2.rcl_allocator_t,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RCLCSInitType_BeginInvoke_m6536F3027A269C5E880A05A8E702322A0767F296 (RCLCSInitType_t98BFF379AE54A896A681209B70D41C4504AF733F* __this, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___0_context, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831 ___1_allocator, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C_il2cpp_TypeInfo_var, &*___0_context);
	__d_args[1] = Box(rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831_il2cpp_TypeInfo_var, &___1_allocator);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Int32 ROS2.NativeRclInterface/RCLCSInitType::EndInvoke(ROS2.rcl_context_t&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RCLCSInitType_EndInvoke_mA8AF9F539EFDBA660FCC6F0A799C416C363F7ECB (RCLCSInitType_t98BFF379AE54A896A681209B70D41C4504AF733F* __this, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___0_context, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_context,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, ___out_args);
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
intptr_t GetErrorStringType_Invoke_mF682DB2C6231B00B54FC6BE368456DFC81000DA6_Multicast(GetErrorStringType_t453607676A6C388E6CBFDFD75F799FDA836851DD* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	intptr_t retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GetErrorStringType_t453607676A6C388E6CBFDFD75F799FDA836851DD* currentDelegate = reinterpret_cast<GetErrorStringType_t453607676A6C388E6CBFDFD75F799FDA836851DD*>(delegatesToInvoke[i]);
		typedef intptr_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
intptr_t GetErrorStringType_Invoke_mF682DB2C6231B00B54FC6BE368456DFC81000DA6_OpenInst(GetErrorStringType_t453607676A6C388E6CBFDFD75F799FDA836851DD* __this, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
intptr_t GetErrorStringType_Invoke_mF682DB2C6231B00B54FC6BE368456DFC81000DA6_OpenStatic(GetErrorStringType_t453607676A6C388E6CBFDFD75F799FDA836851DD* __this, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
intptr_t GetErrorStringType_Invoke_mF682DB2C6231B00B54FC6BE368456DFC81000DA6_OpenStaticInvoker(GetErrorStringType_t453607676A6C388E6CBFDFD75F799FDA836851DD* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker0< intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL);
}
intptr_t GetErrorStringType_Invoke_mF682DB2C6231B00B54FC6BE368456DFC81000DA6_ClosedStaticInvoker(GetErrorStringType_t453607676A6C388E6CBFDFD75F799FDA836851DD* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< intptr_t, RuntimeObject* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_GetErrorStringType_t453607676A6C388E6CBFDFD75F799FDA836851DD (GetErrorStringType_t453607676A6C388E6CBFDFD75F799FDA836851DD* __this, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc();

	return returnValue;
}
// System.Void ROS2.NativeRclInterface/GetErrorStringType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetErrorStringType__ctor_mC3EDF9D9753A8B71C755D0E07DCD01D27F21A7BD (GetErrorStringType_t453607676A6C388E6CBFDFD75F799FDA836851DD* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&GetErrorStringType_Invoke_mF682DB2C6231B00B54FC6BE368456DFC81000DA6_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&GetErrorStringType_Invoke_mF682DB2C6231B00B54FC6BE368456DFC81000DA6_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetErrorStringType_Invoke_mF682DB2C6231B00B54FC6BE368456DFC81000DA6_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&GetErrorStringType_Invoke_mF682DB2C6231B00B54FC6BE368456DFC81000DA6_Multicast;
}
// System.IntPtr ROS2.NativeRclInterface/GetErrorStringType::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GetErrorStringType_Invoke_mF682DB2C6231B00B54FC6BE368456DFC81000DA6 (GetErrorStringType_t453607676A6C388E6CBFDFD75F799FDA836851DD* __this, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ROS2.NativeRclInterface/GetErrorStringType::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GetErrorStringType_BeginInvoke_m4F7ACE995B9A707118959C2BEF604AA71A36E9C5 (GetErrorStringType_t453607676A6C388E6CBFDFD75F799FDA836851DD* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// System.IntPtr ROS2.NativeRclInterface/GetErrorStringType::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GetErrorStringType_EndInvoke_m087D8F0AEAC2D07A1E332CD7170583381626AB4C (GetErrorStringType_t453607676A6C388E6CBFDFD75F799FDA836851DD* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
void DisposeErrorStringType_Invoke_mEAB6DDBFAFCFE029EBCFDEEF35FB1C65038FD3C9_Multicast(DisposeErrorStringType_tB0EB5ABA8F09AB9C18BCB301CABC0010FA27C990* __this, intptr_t ___0_error_c_string, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DisposeErrorStringType_tB0EB5ABA8F09AB9C18BCB301CABC0010FA27C990* currentDelegate = reinterpret_cast<DisposeErrorStringType_tB0EB5ABA8F09AB9C18BCB301CABC0010FA27C990*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_error_c_string, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DisposeErrorStringType_Invoke_mEAB6DDBFAFCFE029EBCFDEEF35FB1C65038FD3C9_OpenInst(DisposeErrorStringType_tB0EB5ABA8F09AB9C18BCB301CABC0010FA27C990* __this, intptr_t ___0_error_c_string, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_error_c_string, method);
}
void DisposeErrorStringType_Invoke_mEAB6DDBFAFCFE029EBCFDEEF35FB1C65038FD3C9_OpenStatic(DisposeErrorStringType_tB0EB5ABA8F09AB9C18BCB301CABC0010FA27C990* __this, intptr_t ___0_error_c_string, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_error_c_string, method);
}
void DisposeErrorStringType_Invoke_mEAB6DDBFAFCFE029EBCFDEEF35FB1C65038FD3C9_OpenStaticInvoker(DisposeErrorStringType_tB0EB5ABA8F09AB9C18BCB301CABC0010FA27C990* __this, intptr_t ___0_error_c_string, const RuntimeMethod* method)
{
	InvokerActionInvoker1< intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_error_c_string);
}
void DisposeErrorStringType_Invoke_mEAB6DDBFAFCFE029EBCFDEEF35FB1C65038FD3C9_ClosedStaticInvoker(DisposeErrorStringType_tB0EB5ABA8F09AB9C18BCB301CABC0010FA27C990* __this, intptr_t ___0_error_c_string, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_error_c_string);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DisposeErrorStringType_tB0EB5ABA8F09AB9C18BCB301CABC0010FA27C990 (DisposeErrorStringType_tB0EB5ABA8F09AB9C18BCB301CABC0010FA27C990* __this, intptr_t ___0_error_c_string, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_error_c_string);

}
// System.Void ROS2.NativeRclInterface/DisposeErrorStringType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisposeErrorStringType__ctor_m0EB5EF05FF91FCA088835FC7708D75381ECF9551 (DisposeErrorStringType_tB0EB5ABA8F09AB9C18BCB301CABC0010FA27C990* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&DisposeErrorStringType_Invoke_mEAB6DDBFAFCFE029EBCFDEEF35FB1C65038FD3C9_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DisposeErrorStringType_Invoke_mEAB6DDBFAFCFE029EBCFDEEF35FB1C65038FD3C9_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DisposeErrorStringType_Invoke_mEAB6DDBFAFCFE029EBCFDEEF35FB1C65038FD3C9_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&DisposeErrorStringType_Invoke_mEAB6DDBFAFCFE029EBCFDEEF35FB1C65038FD3C9_Multicast;
}
// System.Void ROS2.NativeRclInterface/DisposeErrorStringType::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisposeErrorStringType_Invoke_mEAB6DDBFAFCFE029EBCFDEEF35FB1C65038FD3C9 (DisposeErrorStringType_tB0EB5ABA8F09AB9C18BCB301CABC0010FA27C990* __this, intptr_t ___0_error_c_string, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_error_c_string, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ROS2.NativeRclInterface/DisposeErrorStringType::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DisposeErrorStringType_BeginInvoke_mE7E4EF0EE846F4C62C7A8E89DFF0B4E8B31A513A (DisposeErrorStringType_tB0EB5ABA8F09AB9C18BCB301CABC0010FA27C990* __this, intptr_t ___0_error_c_string, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_error_c_string);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void ROS2.NativeRclInterface/DisposeErrorStringType::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisposeErrorStringType_EndInvoke_m75ABC51A2973F9E56D5C3DCFF51AD4465629044F (DisposeErrorStringType_tB0EB5ABA8F09AB9C18BCB301CABC0010FA27C990* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
intptr_t NodeCreateDefaltOptionsType_Invoke_m03EC69F947909616A6137C575C5EED4EC3A3B0BA_Multicast(NodeCreateDefaltOptionsType_t694FBD8C3D7CA67B641200A83CB864C8FD58787E* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	intptr_t retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		NodeCreateDefaltOptionsType_t694FBD8C3D7CA67B641200A83CB864C8FD58787E* currentDelegate = reinterpret_cast<NodeCreateDefaltOptionsType_t694FBD8C3D7CA67B641200A83CB864C8FD58787E*>(delegatesToInvoke[i]);
		typedef intptr_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
intptr_t NodeCreateDefaltOptionsType_Invoke_m03EC69F947909616A6137C575C5EED4EC3A3B0BA_OpenInst(NodeCreateDefaltOptionsType_t694FBD8C3D7CA67B641200A83CB864C8FD58787E* __this, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
intptr_t NodeCreateDefaltOptionsType_Invoke_m03EC69F947909616A6137C575C5EED4EC3A3B0BA_OpenStatic(NodeCreateDefaltOptionsType_t694FBD8C3D7CA67B641200A83CB864C8FD58787E* __this, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
intptr_t NodeCreateDefaltOptionsType_Invoke_m03EC69F947909616A6137C575C5EED4EC3A3B0BA_OpenStaticInvoker(NodeCreateDefaltOptionsType_t694FBD8C3D7CA67B641200A83CB864C8FD58787E* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker0< intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL);
}
intptr_t NodeCreateDefaltOptionsType_Invoke_m03EC69F947909616A6137C575C5EED4EC3A3B0BA_ClosedStaticInvoker(NodeCreateDefaltOptionsType_t694FBD8C3D7CA67B641200A83CB864C8FD58787E* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< intptr_t, RuntimeObject* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_NodeCreateDefaltOptionsType_t694FBD8C3D7CA67B641200A83CB864C8FD58787E (NodeCreateDefaltOptionsType_t694FBD8C3D7CA67B641200A83CB864C8FD58787E* __this, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc();

	return returnValue;
}
// System.Void ROS2.NativeRclInterface/NodeCreateDefaltOptionsType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeCreateDefaltOptionsType__ctor_mFE628D90420D3B28C275C8A93D46C68A68480D9C (NodeCreateDefaltOptionsType_t694FBD8C3D7CA67B641200A83CB864C8FD58787E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&NodeCreateDefaltOptionsType_Invoke_m03EC69F947909616A6137C575C5EED4EC3A3B0BA_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&NodeCreateDefaltOptionsType_Invoke_m03EC69F947909616A6137C575C5EED4EC3A3B0BA_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NodeCreateDefaltOptionsType_Invoke_m03EC69F947909616A6137C575C5EED4EC3A3B0BA_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&NodeCreateDefaltOptionsType_Invoke_m03EC69F947909616A6137C575C5EED4EC3A3B0BA_Multicast;
}
// System.IntPtr ROS2.NativeRclInterface/NodeCreateDefaltOptionsType::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NodeCreateDefaltOptionsType_Invoke_m03EC69F947909616A6137C575C5EED4EC3A3B0BA (NodeCreateDefaltOptionsType_t694FBD8C3D7CA67B641200A83CB864C8FD58787E* __this, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ROS2.NativeRclInterface/NodeCreateDefaltOptionsType::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NodeCreateDefaltOptionsType_BeginInvoke_m006EC6A24BA3C06C3AA9FF37FA934802D12E05EB (NodeCreateDefaltOptionsType_t694FBD8C3D7CA67B641200A83CB864C8FD58787E* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// System.IntPtr ROS2.NativeRclInterface/NodeCreateDefaltOptionsType::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NodeCreateDefaltOptionsType_EndInvoke_m037F04892DE56779FC58525BD9F008777BEAA3A1 (NodeCreateDefaltOptionsType_t694FBD8C3D7CA67B641200A83CB864C8FD58787E* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
void NodeDisposeOptionsType_Invoke_m835EF8D0C527904297A9967E2B7FEB2184C3DE6E_Multicast(NodeDisposeOptionsType_t15BDDEA610F9F4D00AC15F76577DB21C03EAF5F7* __this, intptr_t ___0_options, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		NodeDisposeOptionsType_t15BDDEA610F9F4D00AC15F76577DB21C03EAF5F7* currentDelegate = reinterpret_cast<NodeDisposeOptionsType_t15BDDEA610F9F4D00AC15F76577DB21C03EAF5F7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_options, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void NodeDisposeOptionsType_Invoke_m835EF8D0C527904297A9967E2B7FEB2184C3DE6E_OpenInst(NodeDisposeOptionsType_t15BDDEA610F9F4D00AC15F76577DB21C03EAF5F7* __this, intptr_t ___0_options, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_options, method);
}
void NodeDisposeOptionsType_Invoke_m835EF8D0C527904297A9967E2B7FEB2184C3DE6E_OpenStatic(NodeDisposeOptionsType_t15BDDEA610F9F4D00AC15F76577DB21C03EAF5F7* __this, intptr_t ___0_options, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_options, method);
}
void NodeDisposeOptionsType_Invoke_m835EF8D0C527904297A9967E2B7FEB2184C3DE6E_OpenStaticInvoker(NodeDisposeOptionsType_t15BDDEA610F9F4D00AC15F76577DB21C03EAF5F7* __this, intptr_t ___0_options, const RuntimeMethod* method)
{
	InvokerActionInvoker1< intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_options);
}
void NodeDisposeOptionsType_Invoke_m835EF8D0C527904297A9967E2B7FEB2184C3DE6E_ClosedStaticInvoker(NodeDisposeOptionsType_t15BDDEA610F9F4D00AC15F76577DB21C03EAF5F7* __this, intptr_t ___0_options, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_options);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_NodeDisposeOptionsType_t15BDDEA610F9F4D00AC15F76577DB21C03EAF5F7 (NodeDisposeOptionsType_t15BDDEA610F9F4D00AC15F76577DB21C03EAF5F7* __this, intptr_t ___0_options, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_options);

}
// System.Void ROS2.NativeRclInterface/NodeDisposeOptionsType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeDisposeOptionsType__ctor_mBBE70446F1843F451FC32EBE659770D6BCD6BBE4 (NodeDisposeOptionsType_t15BDDEA610F9F4D00AC15F76577DB21C03EAF5F7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&NodeDisposeOptionsType_Invoke_m835EF8D0C527904297A9967E2B7FEB2184C3DE6E_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&NodeDisposeOptionsType_Invoke_m835EF8D0C527904297A9967E2B7FEB2184C3DE6E_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NodeDisposeOptionsType_Invoke_m835EF8D0C527904297A9967E2B7FEB2184C3DE6E_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&NodeDisposeOptionsType_Invoke_m835EF8D0C527904297A9967E2B7FEB2184C3DE6E_Multicast;
}
// System.Void ROS2.NativeRclInterface/NodeDisposeOptionsType::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeDisposeOptionsType_Invoke_m835EF8D0C527904297A9967E2B7FEB2184C3DE6E (NodeDisposeOptionsType_t15BDDEA610F9F4D00AC15F76577DB21C03EAF5F7* __this, intptr_t ___0_options, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_options, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ROS2.NativeRclInterface/NodeDisposeOptionsType::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NodeDisposeOptionsType_BeginInvoke_mBB5F72A9C0FEE1B0BD32349A4EE03768AA33F7E4 (NodeDisposeOptionsType_t15BDDEA610F9F4D00AC15F76577DB21C03EAF5F7* __this, intptr_t ___0_options, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_options);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void ROS2.NativeRclInterface/NodeDisposeOptionsType::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeDisposeOptionsType_EndInvoke_mFE098A17038E84C8F7C07DE1C0B8B5DDF4307191 (NodeDisposeOptionsType_t15BDDEA610F9F4D00AC15F76577DB21C03EAF5F7* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
intptr_t SubscriptionCreateOptionsType_Invoke_mF210824ACCCE79F0F900E04004E191CB9CB94B92_Multicast(SubscriptionCreateOptionsType_tA856B0FFDE605A45098ED09C5BD2542A6F7AB64C* __this, intptr_t ___0_qos, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	intptr_t retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SubscriptionCreateOptionsType_tA856B0FFDE605A45098ED09C5BD2542A6F7AB64C* currentDelegate = reinterpret_cast<SubscriptionCreateOptionsType_tA856B0FFDE605A45098ED09C5BD2542A6F7AB64C*>(delegatesToInvoke[i]);
		typedef intptr_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_qos, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
intptr_t SubscriptionCreateOptionsType_Invoke_mF210824ACCCE79F0F900E04004E191CB9CB94B92_OpenInst(SubscriptionCreateOptionsType_tA856B0FFDE605A45098ED09C5BD2542A6F7AB64C* __this, intptr_t ___0_qos, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_qos, method);
}
intptr_t SubscriptionCreateOptionsType_Invoke_mF210824ACCCE79F0F900E04004E191CB9CB94B92_OpenStatic(SubscriptionCreateOptionsType_tA856B0FFDE605A45098ED09C5BD2542A6F7AB64C* __this, intptr_t ___0_qos, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_qos, method);
}
intptr_t SubscriptionCreateOptionsType_Invoke_mF210824ACCCE79F0F900E04004E191CB9CB94B92_OpenStaticInvoker(SubscriptionCreateOptionsType_tA856B0FFDE605A45098ED09C5BD2542A6F7AB64C* __this, intptr_t ___0_qos, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< intptr_t, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_qos);
}
intptr_t SubscriptionCreateOptionsType_Invoke_mF210824ACCCE79F0F900E04004E191CB9CB94B92_ClosedStaticInvoker(SubscriptionCreateOptionsType_tA856B0FFDE605A45098ED09C5BD2542A6F7AB64C* __this, intptr_t ___0_qos, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< intptr_t, RuntimeObject*, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_qos);
}
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_SubscriptionCreateOptionsType_tA856B0FFDE605A45098ED09C5BD2542A6F7AB64C (SubscriptionCreateOptionsType_tA856B0FFDE605A45098ED09C5BD2542A6F7AB64C* __this, intptr_t ___0_qos, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___0_qos);

	return returnValue;
}
// System.Void ROS2.NativeRclInterface/SubscriptionCreateOptionsType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubscriptionCreateOptionsType__ctor_m8D99C7CCD6A78AC99CDF61EA1B795D5351128EB8 (SubscriptionCreateOptionsType_tA856B0FFDE605A45098ED09C5BD2542A6F7AB64C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&SubscriptionCreateOptionsType_Invoke_mF210824ACCCE79F0F900E04004E191CB9CB94B92_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SubscriptionCreateOptionsType_Invoke_mF210824ACCCE79F0F900E04004E191CB9CB94B92_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SubscriptionCreateOptionsType_Invoke_mF210824ACCCE79F0F900E04004E191CB9CB94B92_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&SubscriptionCreateOptionsType_Invoke_mF210824ACCCE79F0F900E04004E191CB9CB94B92_Multicast;
}
// System.IntPtr ROS2.NativeRclInterface/SubscriptionCreateOptionsType::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SubscriptionCreateOptionsType_Invoke_mF210824ACCCE79F0F900E04004E191CB9CB94B92 (SubscriptionCreateOptionsType_tA856B0FFDE605A45098ED09C5BD2542A6F7AB64C* __this, intptr_t ___0_qos, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_qos, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ROS2.NativeRclInterface/SubscriptionCreateOptionsType::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SubscriptionCreateOptionsType_BeginInvoke_mCB7CFFC004FF294A8FF778CF81B7293DC7A85E60 (SubscriptionCreateOptionsType_tA856B0FFDE605A45098ED09C5BD2542A6F7AB64C* __this, intptr_t ___0_qos, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_qos);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.IntPtr ROS2.NativeRclInterface/SubscriptionCreateOptionsType::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SubscriptionCreateOptionsType_EndInvoke_m367C68F7FB8944C9AEF7B200100E5C30AAF6EFE8 (SubscriptionCreateOptionsType_tA856B0FFDE605A45098ED09C5BD2542A6F7AB64C* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
void SubscriptionDisposeOptionsType_Invoke_m02AC1A7D0766AAC31049295301F91239E4193BFD_Multicast(SubscriptionDisposeOptionsType_t39B2BA1FAA8B01F34399F64DBF3A9008416B15FC* __this, intptr_t ___0_options, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SubscriptionDisposeOptionsType_t39B2BA1FAA8B01F34399F64DBF3A9008416B15FC* currentDelegate = reinterpret_cast<SubscriptionDisposeOptionsType_t39B2BA1FAA8B01F34399F64DBF3A9008416B15FC*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_options, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void SubscriptionDisposeOptionsType_Invoke_m02AC1A7D0766AAC31049295301F91239E4193BFD_OpenInst(SubscriptionDisposeOptionsType_t39B2BA1FAA8B01F34399F64DBF3A9008416B15FC* __this, intptr_t ___0_options, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_options, method);
}
void SubscriptionDisposeOptionsType_Invoke_m02AC1A7D0766AAC31049295301F91239E4193BFD_OpenStatic(SubscriptionDisposeOptionsType_t39B2BA1FAA8B01F34399F64DBF3A9008416B15FC* __this, intptr_t ___0_options, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_options, method);
}
void SubscriptionDisposeOptionsType_Invoke_m02AC1A7D0766AAC31049295301F91239E4193BFD_OpenStaticInvoker(SubscriptionDisposeOptionsType_t39B2BA1FAA8B01F34399F64DBF3A9008416B15FC* __this, intptr_t ___0_options, const RuntimeMethod* method)
{
	InvokerActionInvoker1< intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_options);
}
void SubscriptionDisposeOptionsType_Invoke_m02AC1A7D0766AAC31049295301F91239E4193BFD_ClosedStaticInvoker(SubscriptionDisposeOptionsType_t39B2BA1FAA8B01F34399F64DBF3A9008416B15FC* __this, intptr_t ___0_options, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_options);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_SubscriptionDisposeOptionsType_t39B2BA1FAA8B01F34399F64DBF3A9008416B15FC (SubscriptionDisposeOptionsType_t39B2BA1FAA8B01F34399F64DBF3A9008416B15FC* __this, intptr_t ___0_options, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_options);

}
// System.Void ROS2.NativeRclInterface/SubscriptionDisposeOptionsType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubscriptionDisposeOptionsType__ctor_m14B9F359107C237734AAFA58BB4CD4DCDEF39DE6 (SubscriptionDisposeOptionsType_t39B2BA1FAA8B01F34399F64DBF3A9008416B15FC* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&SubscriptionDisposeOptionsType_Invoke_m02AC1A7D0766AAC31049295301F91239E4193BFD_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SubscriptionDisposeOptionsType_Invoke_m02AC1A7D0766AAC31049295301F91239E4193BFD_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SubscriptionDisposeOptionsType_Invoke_m02AC1A7D0766AAC31049295301F91239E4193BFD_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&SubscriptionDisposeOptionsType_Invoke_m02AC1A7D0766AAC31049295301F91239E4193BFD_Multicast;
}
// System.Void ROS2.NativeRclInterface/SubscriptionDisposeOptionsType::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubscriptionDisposeOptionsType_Invoke_m02AC1A7D0766AAC31049295301F91239E4193BFD (SubscriptionDisposeOptionsType_t39B2BA1FAA8B01F34399F64DBF3A9008416B15FC* __this, intptr_t ___0_options, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_options, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ROS2.NativeRclInterface/SubscriptionDisposeOptionsType::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SubscriptionDisposeOptionsType_BeginInvoke_m4B89C5A7D034707AD3F2F034677B114DECB2CBFE (SubscriptionDisposeOptionsType_t39B2BA1FAA8B01F34399F64DBF3A9008416B15FC* __this, intptr_t ___0_options, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_options);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void ROS2.NativeRclInterface/SubscriptionDisposeOptionsType::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubscriptionDisposeOptionsType_EndInvoke_m052166573D6B556261584F88FCF916F232C46BCC (SubscriptionDisposeOptionsType_t39B2BA1FAA8B01F34399F64DBF3A9008416B15FC* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
intptr_t PublisherCreateOptionsType_Invoke_m0458CA73CBDE23751269F6D1154CEC98506CDE11_Multicast(PublisherCreateOptionsType_t9606320C1541DAB9AEE9478589F1BDD99527DB8F* __this, intptr_t ___0_qos, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	intptr_t retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PublisherCreateOptionsType_t9606320C1541DAB9AEE9478589F1BDD99527DB8F* currentDelegate = reinterpret_cast<PublisherCreateOptionsType_t9606320C1541DAB9AEE9478589F1BDD99527DB8F*>(delegatesToInvoke[i]);
		typedef intptr_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_qos, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
intptr_t PublisherCreateOptionsType_Invoke_m0458CA73CBDE23751269F6D1154CEC98506CDE11_OpenInst(PublisherCreateOptionsType_t9606320C1541DAB9AEE9478589F1BDD99527DB8F* __this, intptr_t ___0_qos, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_qos, method);
}
intptr_t PublisherCreateOptionsType_Invoke_m0458CA73CBDE23751269F6D1154CEC98506CDE11_OpenStatic(PublisherCreateOptionsType_t9606320C1541DAB9AEE9478589F1BDD99527DB8F* __this, intptr_t ___0_qos, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_qos, method);
}
intptr_t PublisherCreateOptionsType_Invoke_m0458CA73CBDE23751269F6D1154CEC98506CDE11_OpenStaticInvoker(PublisherCreateOptionsType_t9606320C1541DAB9AEE9478589F1BDD99527DB8F* __this, intptr_t ___0_qos, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< intptr_t, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_qos);
}
intptr_t PublisherCreateOptionsType_Invoke_m0458CA73CBDE23751269F6D1154CEC98506CDE11_ClosedStaticInvoker(PublisherCreateOptionsType_t9606320C1541DAB9AEE9478589F1BDD99527DB8F* __this, intptr_t ___0_qos, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< intptr_t, RuntimeObject*, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_qos);
}
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_PublisherCreateOptionsType_t9606320C1541DAB9AEE9478589F1BDD99527DB8F (PublisherCreateOptionsType_t9606320C1541DAB9AEE9478589F1BDD99527DB8F* __this, intptr_t ___0_qos, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___0_qos);

	return returnValue;
}
// System.Void ROS2.NativeRclInterface/PublisherCreateOptionsType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PublisherCreateOptionsType__ctor_m538E9A00E4E0883C0FDA2CCA8599C98209C7C0F0 (PublisherCreateOptionsType_t9606320C1541DAB9AEE9478589F1BDD99527DB8F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&PublisherCreateOptionsType_Invoke_m0458CA73CBDE23751269F6D1154CEC98506CDE11_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&PublisherCreateOptionsType_Invoke_m0458CA73CBDE23751269F6D1154CEC98506CDE11_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PublisherCreateOptionsType_Invoke_m0458CA73CBDE23751269F6D1154CEC98506CDE11_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&PublisherCreateOptionsType_Invoke_m0458CA73CBDE23751269F6D1154CEC98506CDE11_Multicast;
}
// System.IntPtr ROS2.NativeRclInterface/PublisherCreateOptionsType::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PublisherCreateOptionsType_Invoke_m0458CA73CBDE23751269F6D1154CEC98506CDE11 (PublisherCreateOptionsType_t9606320C1541DAB9AEE9478589F1BDD99527DB8F* __this, intptr_t ___0_qos, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_qos, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ROS2.NativeRclInterface/PublisherCreateOptionsType::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PublisherCreateOptionsType_BeginInvoke_m3A991D9EAA470830C84FA03A7448002FB434D176 (PublisherCreateOptionsType_t9606320C1541DAB9AEE9478589F1BDD99527DB8F* __this, intptr_t ___0_qos, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_qos);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.IntPtr ROS2.NativeRclInterface/PublisherCreateOptionsType::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PublisherCreateOptionsType_EndInvoke_mA74B2ED7F4869F91A0EC1A2F1F039F921EC03DBE (PublisherCreateOptionsType_t9606320C1541DAB9AEE9478589F1BDD99527DB8F* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
void PublisherDisposeOptionsType_Invoke_m9861001577FD0A25DD8CC2BB37825A1912B9FE80_Multicast(PublisherDisposeOptionsType_tC809782AD42F6F729C61AF44BBA4FA6E34339EBD* __this, intptr_t ___0_options, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PublisherDisposeOptionsType_tC809782AD42F6F729C61AF44BBA4FA6E34339EBD* currentDelegate = reinterpret_cast<PublisherDisposeOptionsType_tC809782AD42F6F729C61AF44BBA4FA6E34339EBD*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_options, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void PublisherDisposeOptionsType_Invoke_m9861001577FD0A25DD8CC2BB37825A1912B9FE80_OpenInst(PublisherDisposeOptionsType_tC809782AD42F6F729C61AF44BBA4FA6E34339EBD* __this, intptr_t ___0_options, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_options, method);
}
void PublisherDisposeOptionsType_Invoke_m9861001577FD0A25DD8CC2BB37825A1912B9FE80_OpenStatic(PublisherDisposeOptionsType_tC809782AD42F6F729C61AF44BBA4FA6E34339EBD* __this, intptr_t ___0_options, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_options, method);
}
void PublisherDisposeOptionsType_Invoke_m9861001577FD0A25DD8CC2BB37825A1912B9FE80_OpenStaticInvoker(PublisherDisposeOptionsType_tC809782AD42F6F729C61AF44BBA4FA6E34339EBD* __this, intptr_t ___0_options, const RuntimeMethod* method)
{
	InvokerActionInvoker1< intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_options);
}
void PublisherDisposeOptionsType_Invoke_m9861001577FD0A25DD8CC2BB37825A1912B9FE80_ClosedStaticInvoker(PublisherDisposeOptionsType_tC809782AD42F6F729C61AF44BBA4FA6E34339EBD* __this, intptr_t ___0_options, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_options);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_PublisherDisposeOptionsType_tC809782AD42F6F729C61AF44BBA4FA6E34339EBD (PublisherDisposeOptionsType_tC809782AD42F6F729C61AF44BBA4FA6E34339EBD* __this, intptr_t ___0_options, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_options);

}
// System.Void ROS2.NativeRclInterface/PublisherDisposeOptionsType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PublisherDisposeOptionsType__ctor_mEB9AD5DB1D8975766449DD69E189E175932F2F43 (PublisherDisposeOptionsType_tC809782AD42F6F729C61AF44BBA4FA6E34339EBD* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&PublisherDisposeOptionsType_Invoke_m9861001577FD0A25DD8CC2BB37825A1912B9FE80_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&PublisherDisposeOptionsType_Invoke_m9861001577FD0A25DD8CC2BB37825A1912B9FE80_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PublisherDisposeOptionsType_Invoke_m9861001577FD0A25DD8CC2BB37825A1912B9FE80_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&PublisherDisposeOptionsType_Invoke_m9861001577FD0A25DD8CC2BB37825A1912B9FE80_Multicast;
}
// System.Void ROS2.NativeRclInterface/PublisherDisposeOptionsType::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PublisherDisposeOptionsType_Invoke_m9861001577FD0A25DD8CC2BB37825A1912B9FE80 (PublisherDisposeOptionsType_tC809782AD42F6F729C61AF44BBA4FA6E34339EBD* __this, intptr_t ___0_options, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_options, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ROS2.NativeRclInterface/PublisherDisposeOptionsType::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PublisherDisposeOptionsType_BeginInvoke_m099D52A996175D61BB5E2C8700F1B25A2999FF7D (PublisherDisposeOptionsType_tC809782AD42F6F729C61AF44BBA4FA6E34339EBD* __this, intptr_t ___0_options, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_options);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void ROS2.NativeRclInterface/PublisherDisposeOptionsType::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PublisherDisposeOptionsType_EndInvoke_m82BEC8CE504C2A92046D1BB9246485BD5DA97E1D (PublisherDisposeOptionsType_tC809782AD42F6F729C61AF44BBA4FA6E34339EBD* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
intptr_t RclcsClockCreate_Invoke_mFD077B5620145E54382E184E765F442842D53B28_Multicast(RclcsClockCreate_t7DE4D8ACB9FFEBA0D5B88B58E6C8C5A91AF86C4B* __this, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831* ___0_allocator_handle, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	intptr_t retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		RclcsClockCreate_t7DE4D8ACB9FFEBA0D5B88B58E6C8C5A91AF86C4B* currentDelegate = reinterpret_cast<RclcsClockCreate_t7DE4D8ACB9FFEBA0D5B88B58E6C8C5A91AF86C4B*>(delegatesToInvoke[i]);
		typedef intptr_t (*FunctionPointerType) (RuntimeObject*, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_allocator_handle, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
intptr_t RclcsClockCreate_Invoke_mFD077B5620145E54382E184E765F442842D53B28_OpenInst(RclcsClockCreate_t7DE4D8ACB9FFEBA0D5B88B58E6C8C5A91AF86C4B* __this, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831* ___0_allocator_handle, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_allocator_handle, method);
}
intptr_t RclcsClockCreate_Invoke_mFD077B5620145E54382E184E765F442842D53B28_OpenStatic(RclcsClockCreate_t7DE4D8ACB9FFEBA0D5B88B58E6C8C5A91AF86C4B* __this, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831* ___0_allocator_handle, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_allocator_handle, method);
}
intptr_t RclcsClockCreate_Invoke_mFD077B5620145E54382E184E765F442842D53B28_OpenStaticInvoker(RclcsClockCreate_t7DE4D8ACB9FFEBA0D5B88B58E6C8C5A91AF86C4B* __this, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831* ___0_allocator_handle, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< intptr_t, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_allocator_handle);
}
intptr_t RclcsClockCreate_Invoke_mFD077B5620145E54382E184E765F442842D53B28_ClosedStaticInvoker(RclcsClockCreate_t7DE4D8ACB9FFEBA0D5B88B58E6C8C5A91AF86C4B* __this, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831* ___0_allocator_handle, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< intptr_t, RuntimeObject*, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_allocator_handle);
}
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_RclcsClockCreate_t7DE4D8ACB9FFEBA0D5B88B58E6C8C5A91AF86C4B (RclcsClockCreate_t7DE4D8ACB9FFEBA0D5B88B58E6C8C5A91AF86C4B* __this, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831* ___0_allocator_handle, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc)(rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___0_allocator_handle);

	return returnValue;
}
// System.Void ROS2.NativeRclInterface/RclcsClockCreate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RclcsClockCreate__ctor_mE9DE7A6A4B3B916793004CC818C35748AEC6FF8B (RclcsClockCreate_t7DE4D8ACB9FFEBA0D5B88B58E6C8C5A91AF86C4B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&RclcsClockCreate_Invoke_mFD077B5620145E54382E184E765F442842D53B28_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&RclcsClockCreate_Invoke_mFD077B5620145E54382E184E765F442842D53B28_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&RclcsClockCreate_Invoke_mFD077B5620145E54382E184E765F442842D53B28_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&RclcsClockCreate_Invoke_mFD077B5620145E54382E184E765F442842D53B28_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&RclcsClockCreate_Invoke_mFD077B5620145E54382E184E765F442842D53B28_Multicast;
}
// System.IntPtr ROS2.NativeRclInterface/RclcsClockCreate::Invoke(ROS2.rcl_allocator_t&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RclcsClockCreate_Invoke_mFD077B5620145E54382E184E765F442842D53B28 (RclcsClockCreate_t7DE4D8ACB9FFEBA0D5B88B58E6C8C5A91AF86C4B* __this, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831* ___0_allocator_handle, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_allocator_handle, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ROS2.NativeRclInterface/RclcsClockCreate::BeginInvoke(ROS2.rcl_allocator_t&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RclcsClockCreate_BeginInvoke_m7B6452DC8EEE9DCD0D24C7EDF2DB12D06C9B3D47 (RclcsClockCreate_t7DE4D8ACB9FFEBA0D5B88B58E6C8C5A91AF86C4B* __this, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831* ___0_allocator_handle, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831_il2cpp_TypeInfo_var, &*___0_allocator_handle);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.IntPtr ROS2.NativeRclInterface/RclcsClockCreate::EndInvoke(ROS2.rcl_allocator_t&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RclcsClockCreate_EndInvoke_mB53809C6625DF2882A2613CA9B3F388386CDFD7B (RclcsClockCreate_t7DE4D8ACB9FFEBA0D5B88B58E6C8C5A91AF86C4B* __this, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831* ___0_allocator_handle, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_allocator_handle,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, ___out_args);
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
void RclcsClockDispose_Invoke_mB31FF352E25F02041B8C12B480B4AEA88827F56F_Multicast(RclcsClockDispose_tDE4246256AFCE3214E441466A84D08B4922CAE03* __this, intptr_t ___0_clock_handle, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		RclcsClockDispose_tDE4246256AFCE3214E441466A84D08B4922CAE03* currentDelegate = reinterpret_cast<RclcsClockDispose_tDE4246256AFCE3214E441466A84D08B4922CAE03*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_clock_handle, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void RclcsClockDispose_Invoke_mB31FF352E25F02041B8C12B480B4AEA88827F56F_OpenInst(RclcsClockDispose_tDE4246256AFCE3214E441466A84D08B4922CAE03* __this, intptr_t ___0_clock_handle, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_clock_handle, method);
}
void RclcsClockDispose_Invoke_mB31FF352E25F02041B8C12B480B4AEA88827F56F_OpenStatic(RclcsClockDispose_tDE4246256AFCE3214E441466A84D08B4922CAE03* __this, intptr_t ___0_clock_handle, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_clock_handle, method);
}
void RclcsClockDispose_Invoke_mB31FF352E25F02041B8C12B480B4AEA88827F56F_OpenStaticInvoker(RclcsClockDispose_tDE4246256AFCE3214E441466A84D08B4922CAE03* __this, intptr_t ___0_clock_handle, const RuntimeMethod* method)
{
	InvokerActionInvoker1< intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_clock_handle);
}
void RclcsClockDispose_Invoke_mB31FF352E25F02041B8C12B480B4AEA88827F56F_ClosedStaticInvoker(RclcsClockDispose_tDE4246256AFCE3214E441466A84D08B4922CAE03* __this, intptr_t ___0_clock_handle, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_clock_handle);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_RclcsClockDispose_tDE4246256AFCE3214E441466A84D08B4922CAE03 (RclcsClockDispose_tDE4246256AFCE3214E441466A84D08B4922CAE03* __this, intptr_t ___0_clock_handle, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_clock_handle);

}
// System.Void ROS2.NativeRclInterface/RclcsClockDispose::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RclcsClockDispose__ctor_m81E7A022B781030F537F78B22AB80EE856F53238 (RclcsClockDispose_tDE4246256AFCE3214E441466A84D08B4922CAE03* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&RclcsClockDispose_Invoke_mB31FF352E25F02041B8C12B480B4AEA88827F56F_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&RclcsClockDispose_Invoke_mB31FF352E25F02041B8C12B480B4AEA88827F56F_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&RclcsClockDispose_Invoke_mB31FF352E25F02041B8C12B480B4AEA88827F56F_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&RclcsClockDispose_Invoke_mB31FF352E25F02041B8C12B480B4AEA88827F56F_Multicast;
}
// System.Void ROS2.NativeRclInterface/RclcsClockDispose::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RclcsClockDispose_Invoke_mB31FF352E25F02041B8C12B480B4AEA88827F56F (RclcsClockDispose_tDE4246256AFCE3214E441466A84D08B4922CAE03* __this, intptr_t ___0_clock_handle, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_clock_handle, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ROS2.NativeRclInterface/RclcsClockDispose::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RclcsClockDispose_BeginInvoke_mE640BCF73D4BCE72CD1826D6294E2E1D4A2F08C5 (RclcsClockDispose_tDE4246256AFCE3214E441466A84D08B4922CAE03* __this, intptr_t ___0_clock_handle, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_clock_handle);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void ROS2.NativeRclInterface/RclcsClockDispose::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RclcsClockDispose_EndInvoke_mAF2B027308B8DCFB3152ECF455DF7CE3D2B88401 (RclcsClockDispose_tDE4246256AFCE3214E441466A84D08B4922CAE03* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
// System.Void ROS2.NativeRmwInterface::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeRmwInterface__cctor_m3FCA9B660C7CD327972A06E1B35C624005A1DE00 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RMWImplementationIdentifier_t7221E12FDDCCCC1D3CC320EDA66B945FA794AE37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RMWImplementationIdentifier_t7221E12FDDCCCC1D3CC320EDA66B945FA794AE37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RMWNativeCreateQoSProfileIdentifierType_t86C350418729D57B100F216E31911830AE25AA97_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RMWNativeCreateQoSProfileIdentifierType_t86C350418729D57B100F216E31911830AE25AA97_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RMWNativeDeleteQoSProfileIdentifierType_t5D2957D69DB205D4F3537302627D3EEC7922BF74_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RMWNativeDeleteQoSProfileIdentifierType_t5D2957D69DB205D4F3537302627D3EEC7922BF74_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RMWNativeSetDurabilityIdentifierType_tC20DAC0CC312A9DAEBC318C441BC8203EE4E0D14_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RMWNativeSetDurabilityIdentifierType_tC20DAC0CC312A9DAEBC318C441BC8203EE4E0D14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RMWNativeSetHistoryIdentifierType_t438821C2B73F2BC4261752F5A9FF236255879D42_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RMWNativeSetHistoryIdentifierType_t438821C2B73F2BC4261752F5A9FF236255879D42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RMWNativeSetReliabilityIdentifierType_tFE846BDE4F0A5F243647D947A73C2694378E19A5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RMWNativeSetReliabilityIdentifierType_tFE846BDE4F0A5F243647D947A73C2694378E19A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AEB8636D8C77F295E3086E461B7122060B24C4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39313828B539080491C7BB22E724D386DFFF4665);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral692DEB3A54499C52585B15ACE7132881F28640D6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B87A4EBAD2F6191F71AB707A319CF0D1BDD776E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6BD0698CA006715AADD3D4FE9AB9BF891FD58DB1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75DE1C2D84988936BA75C109BC4341E47B899ED5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC64B06C9BF94A74766013C3AD36C74567F62F132);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = DllLoadUtilsFactory_GetDllLoadUtils_m8EB2D6E40DBF00ED8E25114CAABFFFCF16286775(NULL);
		((NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_StaticFields*)il2cpp_codegen_static_fields_for(NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_il2cpp_TypeInfo_var))->___dllLoadUtils_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_StaticFields*)il2cpp_codegen_static_fields_for(NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_il2cpp_TypeInfo_var))->___dllLoadUtils_0), (void*)L_0);
		RuntimeObject* L_1 = ((NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_StaticFields*)il2cpp_codegen_static_fields_for(NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_il2cpp_TypeInfo_var))->___dllLoadUtils_0;
		NullCheck(L_1);
		intptr_t L_2;
		L_2 = InterfaceFuncInvoker1< intptr_t, String_t* >::Invoke(0 /* System.IntPtr ROS2.DllLoadUtils::LoadLibrary(System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_1, _stringLiteral692DEB3A54499C52585B15ACE7132881F28640D6);
		((NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_StaticFields*)il2cpp_codegen_static_fields_for(NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_il2cpp_TypeInfo_var))->___nativeRMW_1 = L_2;
		RuntimeObject* L_3 = ((NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_StaticFields*)il2cpp_codegen_static_fields_for(NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_il2cpp_TypeInfo_var))->___dllLoadUtils_0;
		intptr_t L_4 = ((NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_StaticFields*)il2cpp_codegen_static_fields_for(NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_il2cpp_TypeInfo_var))->___nativeRMW_1;
		NullCheck(L_3);
		intptr_t L_5;
		L_5 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_3, L_4, _stringLiteral39313828B539080491C7BB22E724D386DFFF4665);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (RMWImplementationIdentifier_t7221E12FDDCCCC1D3CC320EDA66B945FA794AE37_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Delegate_t* L_8;
		L_8 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_5, L_7, NULL);
		((NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_StaticFields*)il2cpp_codegen_static_fields_for(NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_il2cpp_TypeInfo_var))->___rmw_native_interface_get_implementation_identifier_2 = ((RMWImplementationIdentifier_t7221E12FDDCCCC1D3CC320EDA66B945FA794AE37*)CastclassSealed((RuntimeObject*)L_8, RMWImplementationIdentifier_t7221E12FDDCCCC1D3CC320EDA66B945FA794AE37_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_StaticFields*)il2cpp_codegen_static_fields_for(NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_il2cpp_TypeInfo_var))->___rmw_native_interface_get_implementation_identifier_2), (void*)((RMWImplementationIdentifier_t7221E12FDDCCCC1D3CC320EDA66B945FA794AE37*)CastclassSealed((RuntimeObject*)L_8, RMWImplementationIdentifier_t7221E12FDDCCCC1D3CC320EDA66B945FA794AE37_il2cpp_TypeInfo_var)));
		RuntimeObject* L_9 = ((NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_StaticFields*)il2cpp_codegen_static_fields_for(NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_il2cpp_TypeInfo_var))->___dllLoadUtils_0;
		intptr_t L_10 = ((NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_StaticFields*)il2cpp_codegen_static_fields_for(NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_il2cpp_TypeInfo_var))->___nativeRMW_1;
		NullCheck(L_9);
		intptr_t L_11;
		L_11 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_9, L_10, _stringLiteral6B87A4EBAD2F6191F71AB707A319CF0D1BDD776E);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (RMWNativeCreateQoSProfileIdentifierType_t86C350418729D57B100F216E31911830AE25AA97_0_0_0_var) };
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		Delegate_t* L_14;
		L_14 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_11, L_13, NULL);
		((NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_StaticFields*)il2cpp_codegen_static_fields_for(NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_il2cpp_TypeInfo_var))->___rmw_native_interface_create_qos_profile_3 = ((RMWNativeCreateQoSProfileIdentifierType_t86C350418729D57B100F216E31911830AE25AA97*)CastclassSealed((RuntimeObject*)L_14, RMWNativeCreateQoSProfileIdentifierType_t86C350418729D57B100F216E31911830AE25AA97_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_StaticFields*)il2cpp_codegen_static_fields_for(NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_il2cpp_TypeInfo_var))->___rmw_native_interface_create_qos_profile_3), (void*)((RMWNativeCreateQoSProfileIdentifierType_t86C350418729D57B100F216E31911830AE25AA97*)CastclassSealed((RuntimeObject*)L_14, RMWNativeCreateQoSProfileIdentifierType_t86C350418729D57B100F216E31911830AE25AA97_il2cpp_TypeInfo_var)));
		RuntimeObject* L_15 = ((NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_StaticFields*)il2cpp_codegen_static_fields_for(NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_il2cpp_TypeInfo_var))->___dllLoadUtils_0;
		intptr_t L_16 = ((NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_StaticFields*)il2cpp_codegen_static_fields_for(NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_il2cpp_TypeInfo_var))->___nativeRMW_1;
		NullCheck(L_15);
		intptr_t L_17;
		L_17 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_15, L_16, _stringLiteralC64B06C9BF94A74766013C3AD36C74567F62F132);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (RMWNativeDeleteQoSProfileIdentifierType_t5D2957D69DB205D4F3537302627D3EEC7922BF74_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		Delegate_t* L_20;
		L_20 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_17, L_19, NULL);
		((NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_StaticFields*)il2cpp_codegen_static_fields_for(NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_il2cpp_TypeInfo_var))->___rmw_native_interface_delete_qos_profile_4 = ((RMWNativeDeleteQoSProfileIdentifierType_t5D2957D69DB205D4F3537302627D3EEC7922BF74*)CastclassSealed((RuntimeObject*)L_20, RMWNativeDeleteQoSProfileIdentifierType_t5D2957D69DB205D4F3537302627D3EEC7922BF74_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_StaticFields*)il2cpp_codegen_static_fields_for(NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_il2cpp_TypeInfo_var))->___rmw_native_interface_delete_qos_profile_4), (void*)((RMWNativeDeleteQoSProfileIdentifierType_t5D2957D69DB205D4F3537302627D3EEC7922BF74*)CastclassSealed((RuntimeObject*)L_20, RMWNativeDeleteQoSProfileIdentifierType_t5D2957D69DB205D4F3537302627D3EEC7922BF74_il2cpp_TypeInfo_var)));
		RuntimeObject* L_21 = ((NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_StaticFields*)il2cpp_codegen_static_fields_for(NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_il2cpp_TypeInfo_var))->___dllLoadUtils_0;
		intptr_t L_22 = ((NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_StaticFields*)il2cpp_codegen_static_fields_for(NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_il2cpp_TypeInfo_var))->___nativeRMW_1;
		NullCheck(L_21);
		intptr_t L_23;
		L_23 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_21, L_22, _stringLiteral2AEB8636D8C77F295E3086E461B7122060B24C4C);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (RMWNativeSetHistoryIdentifierType_t438821C2B73F2BC4261752F5A9FF236255879D42_0_0_0_var) };
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		Delegate_t* L_26;
		L_26 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_23, L_25, NULL);
		((NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_StaticFields*)il2cpp_codegen_static_fields_for(NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_il2cpp_TypeInfo_var))->___rmw_native_interface_set_history_5 = ((RMWNativeSetHistoryIdentifierType_t438821C2B73F2BC4261752F5A9FF236255879D42*)CastclassSealed((RuntimeObject*)L_26, RMWNativeSetHistoryIdentifierType_t438821C2B73F2BC4261752F5A9FF236255879D42_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_StaticFields*)il2cpp_codegen_static_fields_for(NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_il2cpp_TypeInfo_var))->___rmw_native_interface_set_history_5), (void*)((RMWNativeSetHistoryIdentifierType_t438821C2B73F2BC4261752F5A9FF236255879D42*)CastclassSealed((RuntimeObject*)L_26, RMWNativeSetHistoryIdentifierType_t438821C2B73F2BC4261752F5A9FF236255879D42_il2cpp_TypeInfo_var)));
		RuntimeObject* L_27 = ((NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_StaticFields*)il2cpp_codegen_static_fields_for(NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_il2cpp_TypeInfo_var))->___dllLoadUtils_0;
		intptr_t L_28 = ((NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_StaticFields*)il2cpp_codegen_static_fields_for(NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_il2cpp_TypeInfo_var))->___nativeRMW_1;
		NullCheck(L_27);
		intptr_t L_29;
		L_29 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_27, L_28, _stringLiteral75DE1C2D84988936BA75C109BC4341E47B899ED5);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (RMWNativeSetReliabilityIdentifierType_tFE846BDE4F0A5F243647D947A73C2694378E19A5_0_0_0_var) };
		Type_t* L_31;
		L_31 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_30, NULL);
		Delegate_t* L_32;
		L_32 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_29, L_31, NULL);
		((NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_StaticFields*)il2cpp_codegen_static_fields_for(NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_il2cpp_TypeInfo_var))->___rmw_native_interface_set_reliability_6 = ((RMWNativeSetReliabilityIdentifierType_tFE846BDE4F0A5F243647D947A73C2694378E19A5*)CastclassSealed((RuntimeObject*)L_32, RMWNativeSetReliabilityIdentifierType_tFE846BDE4F0A5F243647D947A73C2694378E19A5_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_StaticFields*)il2cpp_codegen_static_fields_for(NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_il2cpp_TypeInfo_var))->___rmw_native_interface_set_reliability_6), (void*)((RMWNativeSetReliabilityIdentifierType_tFE846BDE4F0A5F243647D947A73C2694378E19A5*)CastclassSealed((RuntimeObject*)L_32, RMWNativeSetReliabilityIdentifierType_tFE846BDE4F0A5F243647D947A73C2694378E19A5_il2cpp_TypeInfo_var)));
		RuntimeObject* L_33 = ((NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_StaticFields*)il2cpp_codegen_static_fields_for(NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_il2cpp_TypeInfo_var))->___dllLoadUtils_0;
		intptr_t L_34 = ((NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_StaticFields*)il2cpp_codegen_static_fields_for(NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_il2cpp_TypeInfo_var))->___nativeRMW_1;
		NullCheck(L_33);
		intptr_t L_35;
		L_35 = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(3 /* System.IntPtr ROS2.DllLoadUtils::GetProcAddress(System.IntPtr,System.String) */, DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7_il2cpp_TypeInfo_var, L_33, L_34, _stringLiteral6BD0698CA006715AADD3D4FE9AB9BF891FD58DB1);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_36 = { reinterpret_cast<intptr_t> (RMWNativeSetDurabilityIdentifierType_tC20DAC0CC312A9DAEBC318C441BC8203EE4E0D14_0_0_0_var) };
		Type_t* L_37;
		L_37 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_36, NULL);
		Delegate_t* L_38;
		L_38 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_35, L_37, NULL);
		((NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_StaticFields*)il2cpp_codegen_static_fields_for(NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_il2cpp_TypeInfo_var))->___rmw_native_interface_set_durability_7 = ((RMWNativeSetDurabilityIdentifierType_tC20DAC0CC312A9DAEBC318C441BC8203EE4E0D14*)CastclassSealed((RuntimeObject*)L_38, RMWNativeSetDurabilityIdentifierType_tC20DAC0CC312A9DAEBC318C441BC8203EE4E0D14_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_StaticFields*)il2cpp_codegen_static_fields_for(NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_il2cpp_TypeInfo_var))->___rmw_native_interface_set_durability_7), (void*)((RMWNativeSetDurabilityIdentifierType_tC20DAC0CC312A9DAEBC318C441BC8203EE4E0D14*)CastclassSealed((RuntimeObject*)L_38, RMWNativeSetDurabilityIdentifierType_tC20DAC0CC312A9DAEBC318C441BC8203EE4E0D14_il2cpp_TypeInfo_var)));
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
intptr_t RMWImplementationIdentifier_Invoke_m2798432969B3FDB239028F2CCE63EA679D73EBD7_Multicast(RMWImplementationIdentifier_t7221E12FDDCCCC1D3CC320EDA66B945FA794AE37* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	intptr_t retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		RMWImplementationIdentifier_t7221E12FDDCCCC1D3CC320EDA66B945FA794AE37* currentDelegate = reinterpret_cast<RMWImplementationIdentifier_t7221E12FDDCCCC1D3CC320EDA66B945FA794AE37*>(delegatesToInvoke[i]);
		typedef intptr_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
intptr_t RMWImplementationIdentifier_Invoke_m2798432969B3FDB239028F2CCE63EA679D73EBD7_OpenInst(RMWImplementationIdentifier_t7221E12FDDCCCC1D3CC320EDA66B945FA794AE37* __this, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
intptr_t RMWImplementationIdentifier_Invoke_m2798432969B3FDB239028F2CCE63EA679D73EBD7_OpenStatic(RMWImplementationIdentifier_t7221E12FDDCCCC1D3CC320EDA66B945FA794AE37* __this, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
intptr_t RMWImplementationIdentifier_Invoke_m2798432969B3FDB239028F2CCE63EA679D73EBD7_OpenStaticInvoker(RMWImplementationIdentifier_t7221E12FDDCCCC1D3CC320EDA66B945FA794AE37* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker0< intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL);
}
intptr_t RMWImplementationIdentifier_Invoke_m2798432969B3FDB239028F2CCE63EA679D73EBD7_ClosedStaticInvoker(RMWImplementationIdentifier_t7221E12FDDCCCC1D3CC320EDA66B945FA794AE37* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< intptr_t, RuntimeObject* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_RMWImplementationIdentifier_t7221E12FDDCCCC1D3CC320EDA66B945FA794AE37 (RMWImplementationIdentifier_t7221E12FDDCCCC1D3CC320EDA66B945FA794AE37* __this, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc();

	return returnValue;
}
// System.Void ROS2.NativeRmwInterface/RMWImplementationIdentifier::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RMWImplementationIdentifier__ctor_mF3472CF6AB2B38C5C1DE9808A4F0EFDEDE5015AC (RMWImplementationIdentifier_t7221E12FDDCCCC1D3CC320EDA66B945FA794AE37* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&RMWImplementationIdentifier_Invoke_m2798432969B3FDB239028F2CCE63EA679D73EBD7_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&RMWImplementationIdentifier_Invoke_m2798432969B3FDB239028F2CCE63EA679D73EBD7_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&RMWImplementationIdentifier_Invoke_m2798432969B3FDB239028F2CCE63EA679D73EBD7_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&RMWImplementationIdentifier_Invoke_m2798432969B3FDB239028F2CCE63EA679D73EBD7_Multicast;
}
// System.IntPtr ROS2.NativeRmwInterface/RMWImplementationIdentifier::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RMWImplementationIdentifier_Invoke_m2798432969B3FDB239028F2CCE63EA679D73EBD7 (RMWImplementationIdentifier_t7221E12FDDCCCC1D3CC320EDA66B945FA794AE37* __this, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ROS2.NativeRmwInterface/RMWImplementationIdentifier::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RMWImplementationIdentifier_BeginInvoke_m4E0CB2EF2C8B7613642F35BFE412CDC554E57D04 (RMWImplementationIdentifier_t7221E12FDDCCCC1D3CC320EDA66B945FA794AE37* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// System.IntPtr ROS2.NativeRmwInterface/RMWImplementationIdentifier::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RMWImplementationIdentifier_EndInvoke_mF9FDEB47F51C93AF89F3FF730E434787FC9DFDAB (RMWImplementationIdentifier_t7221E12FDDCCCC1D3CC320EDA66B945FA794AE37* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
intptr_t RMWNativeCreateQoSProfileIdentifierType_Invoke_m719A1FA4411233308FBD0A52DD44DF51ADB12FA0_Multicast(RMWNativeCreateQoSProfileIdentifierType_t86C350418729D57B100F216E31911830AE25AA97* __this, int32_t ___0_preset_profile, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	intptr_t retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		RMWNativeCreateQoSProfileIdentifierType_t86C350418729D57B100F216E31911830AE25AA97* currentDelegate = reinterpret_cast<RMWNativeCreateQoSProfileIdentifierType_t86C350418729D57B100F216E31911830AE25AA97*>(delegatesToInvoke[i]);
		typedef intptr_t (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_preset_profile, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
intptr_t RMWNativeCreateQoSProfileIdentifierType_Invoke_m719A1FA4411233308FBD0A52DD44DF51ADB12FA0_OpenInst(RMWNativeCreateQoSProfileIdentifierType_t86C350418729D57B100F216E31911830AE25AA97* __this, int32_t ___0_preset_profile, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_preset_profile, method);
}
intptr_t RMWNativeCreateQoSProfileIdentifierType_Invoke_m719A1FA4411233308FBD0A52DD44DF51ADB12FA0_OpenStatic(RMWNativeCreateQoSProfileIdentifierType_t86C350418729D57B100F216E31911830AE25AA97* __this, int32_t ___0_preset_profile, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_preset_profile, method);
}
intptr_t RMWNativeCreateQoSProfileIdentifierType_Invoke_m719A1FA4411233308FBD0A52DD44DF51ADB12FA0_OpenStaticInvoker(RMWNativeCreateQoSProfileIdentifierType_t86C350418729D57B100F216E31911830AE25AA97* __this, int32_t ___0_preset_profile, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< intptr_t, int32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_preset_profile);
}
intptr_t RMWNativeCreateQoSProfileIdentifierType_Invoke_m719A1FA4411233308FBD0A52DD44DF51ADB12FA0_ClosedStaticInvoker(RMWNativeCreateQoSProfileIdentifierType_t86C350418729D57B100F216E31911830AE25AA97* __this, int32_t ___0_preset_profile, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< intptr_t, RuntimeObject*, int32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_preset_profile);
}
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_RMWNativeCreateQoSProfileIdentifierType_t86C350418729D57B100F216E31911830AE25AA97 (RMWNativeCreateQoSProfileIdentifierType_t86C350418729D57B100F216E31911830AE25AA97* __this, int32_t ___0_preset_profile, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___0_preset_profile);

	return returnValue;
}
// System.Void ROS2.NativeRmwInterface/RMWNativeCreateQoSProfileIdentifierType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RMWNativeCreateQoSProfileIdentifierType__ctor_m6331BAF37623A2ADC84019AE90580B9883EAF0EA (RMWNativeCreateQoSProfileIdentifierType_t86C350418729D57B100F216E31911830AE25AA97* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&RMWNativeCreateQoSProfileIdentifierType_Invoke_m719A1FA4411233308FBD0A52DD44DF51ADB12FA0_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&RMWNativeCreateQoSProfileIdentifierType_Invoke_m719A1FA4411233308FBD0A52DD44DF51ADB12FA0_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&RMWNativeCreateQoSProfileIdentifierType_Invoke_m719A1FA4411233308FBD0A52DD44DF51ADB12FA0_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&RMWNativeCreateQoSProfileIdentifierType_Invoke_m719A1FA4411233308FBD0A52DD44DF51ADB12FA0_Multicast;
}
// System.IntPtr ROS2.NativeRmwInterface/RMWNativeCreateQoSProfileIdentifierType::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RMWNativeCreateQoSProfileIdentifierType_Invoke_m719A1FA4411233308FBD0A52DD44DF51ADB12FA0 (RMWNativeCreateQoSProfileIdentifierType_t86C350418729D57B100F216E31911830AE25AA97* __this, int32_t ___0_preset_profile, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_preset_profile, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ROS2.NativeRmwInterface/RMWNativeCreateQoSProfileIdentifierType::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RMWNativeCreateQoSProfileIdentifierType_BeginInvoke_mF7547D55E93BAF90DE4CE9C6A72378CC8F876252 (RMWNativeCreateQoSProfileIdentifierType_t86C350418729D57B100F216E31911830AE25AA97* __this, int32_t ___0_preset_profile, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___0_preset_profile);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.IntPtr ROS2.NativeRmwInterface/RMWNativeCreateQoSProfileIdentifierType::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RMWNativeCreateQoSProfileIdentifierType_EndInvoke_mDE0AB4C1895C79550383A0B7F452C8875083157F (RMWNativeCreateQoSProfileIdentifierType_t86C350418729D57B100F216E31911830AE25AA97* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
void RMWNativeDeleteQoSProfileIdentifierType_Invoke_mC0AD7D87AB168717B18ED02122FC64BA5E5519BE_Multicast(RMWNativeDeleteQoSProfileIdentifierType_t5D2957D69DB205D4F3537302627D3EEC7922BF74* __this, intptr_t ___0_profile, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		RMWNativeDeleteQoSProfileIdentifierType_t5D2957D69DB205D4F3537302627D3EEC7922BF74* currentDelegate = reinterpret_cast<RMWNativeDeleteQoSProfileIdentifierType_t5D2957D69DB205D4F3537302627D3EEC7922BF74*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_profile, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void RMWNativeDeleteQoSProfileIdentifierType_Invoke_mC0AD7D87AB168717B18ED02122FC64BA5E5519BE_OpenInst(RMWNativeDeleteQoSProfileIdentifierType_t5D2957D69DB205D4F3537302627D3EEC7922BF74* __this, intptr_t ___0_profile, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_profile, method);
}
void RMWNativeDeleteQoSProfileIdentifierType_Invoke_mC0AD7D87AB168717B18ED02122FC64BA5E5519BE_OpenStatic(RMWNativeDeleteQoSProfileIdentifierType_t5D2957D69DB205D4F3537302627D3EEC7922BF74* __this, intptr_t ___0_profile, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_profile, method);
}
void RMWNativeDeleteQoSProfileIdentifierType_Invoke_mC0AD7D87AB168717B18ED02122FC64BA5E5519BE_OpenStaticInvoker(RMWNativeDeleteQoSProfileIdentifierType_t5D2957D69DB205D4F3537302627D3EEC7922BF74* __this, intptr_t ___0_profile, const RuntimeMethod* method)
{
	InvokerActionInvoker1< intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_profile);
}
void RMWNativeDeleteQoSProfileIdentifierType_Invoke_mC0AD7D87AB168717B18ED02122FC64BA5E5519BE_ClosedStaticInvoker(RMWNativeDeleteQoSProfileIdentifierType_t5D2957D69DB205D4F3537302627D3EEC7922BF74* __this, intptr_t ___0_profile, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_profile);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_RMWNativeDeleteQoSProfileIdentifierType_t5D2957D69DB205D4F3537302627D3EEC7922BF74 (RMWNativeDeleteQoSProfileIdentifierType_t5D2957D69DB205D4F3537302627D3EEC7922BF74* __this, intptr_t ___0_profile, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_profile);

}
// System.Void ROS2.NativeRmwInterface/RMWNativeDeleteQoSProfileIdentifierType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RMWNativeDeleteQoSProfileIdentifierType__ctor_m0216F9B3F0D5418C5EA1ED37525AF9F9745A4E4E (RMWNativeDeleteQoSProfileIdentifierType_t5D2957D69DB205D4F3537302627D3EEC7922BF74* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&RMWNativeDeleteQoSProfileIdentifierType_Invoke_mC0AD7D87AB168717B18ED02122FC64BA5E5519BE_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&RMWNativeDeleteQoSProfileIdentifierType_Invoke_mC0AD7D87AB168717B18ED02122FC64BA5E5519BE_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&RMWNativeDeleteQoSProfileIdentifierType_Invoke_mC0AD7D87AB168717B18ED02122FC64BA5E5519BE_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&RMWNativeDeleteQoSProfileIdentifierType_Invoke_mC0AD7D87AB168717B18ED02122FC64BA5E5519BE_Multicast;
}
// System.Void ROS2.NativeRmwInterface/RMWNativeDeleteQoSProfileIdentifierType::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RMWNativeDeleteQoSProfileIdentifierType_Invoke_mC0AD7D87AB168717B18ED02122FC64BA5E5519BE (RMWNativeDeleteQoSProfileIdentifierType_t5D2957D69DB205D4F3537302627D3EEC7922BF74* __this, intptr_t ___0_profile, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_profile, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ROS2.NativeRmwInterface/RMWNativeDeleteQoSProfileIdentifierType::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RMWNativeDeleteQoSProfileIdentifierType_BeginInvoke_m378AD5CCDEA11A32092460342CE61F0A9EC7FD63 (RMWNativeDeleteQoSProfileIdentifierType_t5D2957D69DB205D4F3537302627D3EEC7922BF74* __this, intptr_t ___0_profile, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_profile);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void ROS2.NativeRmwInterface/RMWNativeDeleteQoSProfileIdentifierType::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RMWNativeDeleteQoSProfileIdentifierType_EndInvoke_m2224004BA91F048199EEBD71FC0912E9C4A73309 (RMWNativeDeleteQoSProfileIdentifierType_t5D2957D69DB205D4F3537302627D3EEC7922BF74* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
void RMWNativeSetHistoryIdentifierType_Invoke_mD19165DA0A5836757CDE8E627683D5431B79D486_Multicast(RMWNativeSetHistoryIdentifierType_t438821C2B73F2BC4261752F5A9FF236255879D42* __this, intptr_t ___0_profile, int32_t ___1_mode, int32_t ___2_depth, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		RMWNativeSetHistoryIdentifierType_t438821C2B73F2BC4261752F5A9FF236255879D42* currentDelegate = reinterpret_cast<RMWNativeSetHistoryIdentifierType_t438821C2B73F2BC4261752F5A9FF236255879D42*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_profile, ___1_mode, ___2_depth, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void RMWNativeSetHistoryIdentifierType_Invoke_mD19165DA0A5836757CDE8E627683D5431B79D486_OpenInst(RMWNativeSetHistoryIdentifierType_t438821C2B73F2BC4261752F5A9FF236255879D42* __this, intptr_t ___0_profile, int32_t ___1_mode, int32_t ___2_depth, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_profile, ___1_mode, ___2_depth, method);
}
void RMWNativeSetHistoryIdentifierType_Invoke_mD19165DA0A5836757CDE8E627683D5431B79D486_OpenStatic(RMWNativeSetHistoryIdentifierType_t438821C2B73F2BC4261752F5A9FF236255879D42* __this, intptr_t ___0_profile, int32_t ___1_mode, int32_t ___2_depth, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_profile, ___1_mode, ___2_depth, method);
}
void RMWNativeSetHistoryIdentifierType_Invoke_mD19165DA0A5836757CDE8E627683D5431B79D486_OpenStaticInvoker(RMWNativeSetHistoryIdentifierType_t438821C2B73F2BC4261752F5A9FF236255879D42* __this, intptr_t ___0_profile, int32_t ___1_mode, int32_t ___2_depth, const RuntimeMethod* method)
{
	InvokerActionInvoker3< intptr_t, int32_t, int32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_profile, ___1_mode, ___2_depth);
}
void RMWNativeSetHistoryIdentifierType_Invoke_mD19165DA0A5836757CDE8E627683D5431B79D486_ClosedStaticInvoker(RMWNativeSetHistoryIdentifierType_t438821C2B73F2BC4261752F5A9FF236255879D42* __this, intptr_t ___0_profile, int32_t ___1_mode, int32_t ___2_depth, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, intptr_t, int32_t, int32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_profile, ___1_mode, ___2_depth);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_RMWNativeSetHistoryIdentifierType_t438821C2B73F2BC4261752F5A9FF236255879D42 (RMWNativeSetHistoryIdentifierType_t438821C2B73F2BC4261752F5A9FF236255879D42* __this, intptr_t ___0_profile, int32_t ___1_mode, int32_t ___2_depth, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_profile, ___1_mode, ___2_depth);

}
// System.Void ROS2.NativeRmwInterface/RMWNativeSetHistoryIdentifierType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RMWNativeSetHistoryIdentifierType__ctor_m6700FEA80E80BA1EBC7F482F7B302AEF70293613 (RMWNativeSetHistoryIdentifierType_t438821C2B73F2BC4261752F5A9FF236255879D42* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&RMWNativeSetHistoryIdentifierType_Invoke_mD19165DA0A5836757CDE8E627683D5431B79D486_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&RMWNativeSetHistoryIdentifierType_Invoke_mD19165DA0A5836757CDE8E627683D5431B79D486_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&RMWNativeSetHistoryIdentifierType_Invoke_mD19165DA0A5836757CDE8E627683D5431B79D486_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&RMWNativeSetHistoryIdentifierType_Invoke_mD19165DA0A5836757CDE8E627683D5431B79D486_Multicast;
}
// System.Void ROS2.NativeRmwInterface/RMWNativeSetHistoryIdentifierType::Invoke(System.IntPtr,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RMWNativeSetHistoryIdentifierType_Invoke_mD19165DA0A5836757CDE8E627683D5431B79D486 (RMWNativeSetHistoryIdentifierType_t438821C2B73F2BC4261752F5A9FF236255879D42* __this, intptr_t ___0_profile, int32_t ___1_mode, int32_t ___2_depth, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_profile, ___1_mode, ___2_depth, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ROS2.NativeRmwInterface/RMWNativeSetHistoryIdentifierType::BeginInvoke(System.IntPtr,System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RMWNativeSetHistoryIdentifierType_BeginInvoke_mB08974C94B92DAFBFBC73A95F39CB2E596A21E57 (RMWNativeSetHistoryIdentifierType_t438821C2B73F2BC4261752F5A9FF236255879D42* __this, intptr_t ___0_profile, int32_t ___1_mode, int32_t ___2_depth, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_profile);
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___1_mode);
	__d_args[2] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___2_depth);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// System.Void ROS2.NativeRmwInterface/RMWNativeSetHistoryIdentifierType::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RMWNativeSetHistoryIdentifierType_EndInvoke_m08B647D82C8619F1481E704481F4146D1D853E36 (RMWNativeSetHistoryIdentifierType_t438821C2B73F2BC4261752F5A9FF236255879D42* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
void RMWNativeSetReliabilityIdentifierType_Invoke_m0C867D84FBB2311D293FF704AE4E69BA487329FF_Multicast(RMWNativeSetReliabilityIdentifierType_tFE846BDE4F0A5F243647D947A73C2694378E19A5* __this, intptr_t ___0_profile, int32_t ___1_mode, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		RMWNativeSetReliabilityIdentifierType_tFE846BDE4F0A5F243647D947A73C2694378E19A5* currentDelegate = reinterpret_cast<RMWNativeSetReliabilityIdentifierType_tFE846BDE4F0A5F243647D947A73C2694378E19A5*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_profile, ___1_mode, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void RMWNativeSetReliabilityIdentifierType_Invoke_m0C867D84FBB2311D293FF704AE4E69BA487329FF_OpenInst(RMWNativeSetReliabilityIdentifierType_tFE846BDE4F0A5F243647D947A73C2694378E19A5* __this, intptr_t ___0_profile, int32_t ___1_mode, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_profile, ___1_mode, method);
}
void RMWNativeSetReliabilityIdentifierType_Invoke_m0C867D84FBB2311D293FF704AE4E69BA487329FF_OpenStatic(RMWNativeSetReliabilityIdentifierType_tFE846BDE4F0A5F243647D947A73C2694378E19A5* __this, intptr_t ___0_profile, int32_t ___1_mode, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_profile, ___1_mode, method);
}
void RMWNativeSetReliabilityIdentifierType_Invoke_m0C867D84FBB2311D293FF704AE4E69BA487329FF_OpenStaticInvoker(RMWNativeSetReliabilityIdentifierType_tFE846BDE4F0A5F243647D947A73C2694378E19A5* __this, intptr_t ___0_profile, int32_t ___1_mode, const RuntimeMethod* method)
{
	InvokerActionInvoker2< intptr_t, int32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_profile, ___1_mode);
}
void RMWNativeSetReliabilityIdentifierType_Invoke_m0C867D84FBB2311D293FF704AE4E69BA487329FF_ClosedStaticInvoker(RMWNativeSetReliabilityIdentifierType_tFE846BDE4F0A5F243647D947A73C2694378E19A5* __this, intptr_t ___0_profile, int32_t ___1_mode, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, intptr_t, int32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_profile, ___1_mode);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_RMWNativeSetReliabilityIdentifierType_tFE846BDE4F0A5F243647D947A73C2694378E19A5 (RMWNativeSetReliabilityIdentifierType_tFE846BDE4F0A5F243647D947A73C2694378E19A5* __this, intptr_t ___0_profile, int32_t ___1_mode, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_profile, ___1_mode);

}
// System.Void ROS2.NativeRmwInterface/RMWNativeSetReliabilityIdentifierType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RMWNativeSetReliabilityIdentifierType__ctor_mC6284964D5DC119EEB16776B85DE4EB0669DCAF6 (RMWNativeSetReliabilityIdentifierType_tFE846BDE4F0A5F243647D947A73C2694378E19A5* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&RMWNativeSetReliabilityIdentifierType_Invoke_m0C867D84FBB2311D293FF704AE4E69BA487329FF_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&RMWNativeSetReliabilityIdentifierType_Invoke_m0C867D84FBB2311D293FF704AE4E69BA487329FF_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&RMWNativeSetReliabilityIdentifierType_Invoke_m0C867D84FBB2311D293FF704AE4E69BA487329FF_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&RMWNativeSetReliabilityIdentifierType_Invoke_m0C867D84FBB2311D293FF704AE4E69BA487329FF_Multicast;
}
// System.Void ROS2.NativeRmwInterface/RMWNativeSetReliabilityIdentifierType::Invoke(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RMWNativeSetReliabilityIdentifierType_Invoke_m0C867D84FBB2311D293FF704AE4E69BA487329FF (RMWNativeSetReliabilityIdentifierType_tFE846BDE4F0A5F243647D947A73C2694378E19A5* __this, intptr_t ___0_profile, int32_t ___1_mode, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_profile, ___1_mode, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ROS2.NativeRmwInterface/RMWNativeSetReliabilityIdentifierType::BeginInvoke(System.IntPtr,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RMWNativeSetReliabilityIdentifierType_BeginInvoke_m87DCE8C2BB4F731034A6E14DAC78844E1833F7E3 (RMWNativeSetReliabilityIdentifierType_tFE846BDE4F0A5F243647D947A73C2694378E19A5* __this, intptr_t ___0_profile, int32_t ___1_mode, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_profile);
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___1_mode);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void ROS2.NativeRmwInterface/RMWNativeSetReliabilityIdentifierType::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RMWNativeSetReliabilityIdentifierType_EndInvoke_m1B2B5EF5E7C1281467A87BAE910CBAD215614A49 (RMWNativeSetReliabilityIdentifierType_tFE846BDE4F0A5F243647D947A73C2694378E19A5* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
void RMWNativeSetDurabilityIdentifierType_Invoke_m37BD9B13755DD7B4C13114176D323EAD0AE802E3_Multicast(RMWNativeSetDurabilityIdentifierType_tC20DAC0CC312A9DAEBC318C441BC8203EE4E0D14* __this, intptr_t ___0_profile, int32_t ___1_mode, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		RMWNativeSetDurabilityIdentifierType_tC20DAC0CC312A9DAEBC318C441BC8203EE4E0D14* currentDelegate = reinterpret_cast<RMWNativeSetDurabilityIdentifierType_tC20DAC0CC312A9DAEBC318C441BC8203EE4E0D14*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_profile, ___1_mode, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void RMWNativeSetDurabilityIdentifierType_Invoke_m37BD9B13755DD7B4C13114176D323EAD0AE802E3_OpenInst(RMWNativeSetDurabilityIdentifierType_tC20DAC0CC312A9DAEBC318C441BC8203EE4E0D14* __this, intptr_t ___0_profile, int32_t ___1_mode, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_profile, ___1_mode, method);
}
void RMWNativeSetDurabilityIdentifierType_Invoke_m37BD9B13755DD7B4C13114176D323EAD0AE802E3_OpenStatic(RMWNativeSetDurabilityIdentifierType_tC20DAC0CC312A9DAEBC318C441BC8203EE4E0D14* __this, intptr_t ___0_profile, int32_t ___1_mode, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_profile, ___1_mode, method);
}
void RMWNativeSetDurabilityIdentifierType_Invoke_m37BD9B13755DD7B4C13114176D323EAD0AE802E3_OpenStaticInvoker(RMWNativeSetDurabilityIdentifierType_tC20DAC0CC312A9DAEBC318C441BC8203EE4E0D14* __this, intptr_t ___0_profile, int32_t ___1_mode, const RuntimeMethod* method)
{
	InvokerActionInvoker2< intptr_t, int32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_profile, ___1_mode);
}
void RMWNativeSetDurabilityIdentifierType_Invoke_m37BD9B13755DD7B4C13114176D323EAD0AE802E3_ClosedStaticInvoker(RMWNativeSetDurabilityIdentifierType_tC20DAC0CC312A9DAEBC318C441BC8203EE4E0D14* __this, intptr_t ___0_profile, int32_t ___1_mode, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, intptr_t, int32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_profile, ___1_mode);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_RMWNativeSetDurabilityIdentifierType_tC20DAC0CC312A9DAEBC318C441BC8203EE4E0D14 (RMWNativeSetDurabilityIdentifierType_tC20DAC0CC312A9DAEBC318C441BC8203EE4E0D14* __this, intptr_t ___0_profile, int32_t ___1_mode, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_profile, ___1_mode);

}
// System.Void ROS2.NativeRmwInterface/RMWNativeSetDurabilityIdentifierType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RMWNativeSetDurabilityIdentifierType__ctor_mA10B1A1248CE6BDAE5DE5C09F97EE3945095FD8F (RMWNativeSetDurabilityIdentifierType_tC20DAC0CC312A9DAEBC318C441BC8203EE4E0D14* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&RMWNativeSetDurabilityIdentifierType_Invoke_m37BD9B13755DD7B4C13114176D323EAD0AE802E3_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&RMWNativeSetDurabilityIdentifierType_Invoke_m37BD9B13755DD7B4C13114176D323EAD0AE802E3_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&RMWNativeSetDurabilityIdentifierType_Invoke_m37BD9B13755DD7B4C13114176D323EAD0AE802E3_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&RMWNativeSetDurabilityIdentifierType_Invoke_m37BD9B13755DD7B4C13114176D323EAD0AE802E3_Multicast;
}
// System.Void ROS2.NativeRmwInterface/RMWNativeSetDurabilityIdentifierType::Invoke(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RMWNativeSetDurabilityIdentifierType_Invoke_m37BD9B13755DD7B4C13114176D323EAD0AE802E3 (RMWNativeSetDurabilityIdentifierType_tC20DAC0CC312A9DAEBC318C441BC8203EE4E0D14* __this, intptr_t ___0_profile, int32_t ___1_mode, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_profile, ___1_mode, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ROS2.NativeRmwInterface/RMWNativeSetDurabilityIdentifierType::BeginInvoke(System.IntPtr,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RMWNativeSetDurabilityIdentifierType_BeginInvoke_m4D25A2F69A83F70550100A7A28226D45025D210E (RMWNativeSetDurabilityIdentifierType_tC20DAC0CC312A9DAEBC318C441BC8203EE4E0D14* __this, intptr_t ___0_profile, int32_t ___1_mode, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_profile);
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___1_mode);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void ROS2.NativeRmwInterface/RMWNativeSetDurabilityIdentifierType::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RMWNativeSetDurabilityIdentifierType_EndInvoke_mA810891197729ED436F2F43EFC4669D487904ACF (RMWNativeSetDurabilityIdentifierType_tC20DAC0CC312A9DAEBC318C441BC8203EE4E0D14* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void ROS2.Utils::CheckReturnEnum(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_CheckReturnEnum_m4F3CDB4D1DD633F528BFD99D5A245210AD36EF5E (int32_t ___0_ret, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		String_t* L_0;
		L_0 = Utils_PopRclErrorString_mAE90DE98A76531C78A9110AA2FEB593853C09289(NULL);
		V_0 = L_0;
		int32_t L_1 = ___0_ret;
		V_1 = L_1;
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)201))))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)202))))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_4 = V_1;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		goto IL_003c;
	}

IL_0029:
	{
		goto IL_0043;
	}

IL_002e:
	{
		String_t* L_5 = V_0;
		InvalidNodeNameException_t2B3B398B7A2DD047EF775BD9E221D29EA06B6AE5* L_6 = (InvalidNodeNameException_t2B3B398B7A2DD047EF775BD9E221D29EA06B6AE5*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidNodeNameException_t2B3B398B7A2DD047EF775BD9E221D29EA06B6AE5_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		InvalidNodeNameException__ctor_mE916006BB15ADBCEEA6C9C47074B3F7F3E54F2D4(L_6, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Utils_CheckReturnEnum_m4F3CDB4D1DD633F528BFD99D5A245210AD36EF5E_RuntimeMethod_var)));
	}

IL_0035:
	{
		String_t* L_7 = V_0;
		InvalidNamespaceException_tD2E1A2EA479047BAD9F8E4FB4D794491CBF11993* L_8 = (InvalidNamespaceException_tD2E1A2EA479047BAD9F8E4FB4D794491CBF11993*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidNamespaceException_tD2E1A2EA479047BAD9F8E4FB4D794491CBF11993_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		InvalidNamespaceException__ctor_m2A6F857F2093126B4976A3565547399AF88456DC(L_8, L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Utils_CheckReturnEnum_m4F3CDB4D1DD633F528BFD99D5A245210AD36EF5E_RuntimeMethod_var)));
	}

IL_003c:
	{
		String_t* L_9 = V_0;
		RuntimeError_t642B93B4680822C51EF8CA1B918CAA84E4BE375C* L_10 = (RuntimeError_t642B93B4680822C51EF8CA1B918CAA84E4BE375C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeError_t642B93B4680822C51EF8CA1B918CAA84E4BE375C_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		RuntimeError__ctor_mB011851C8F7691243FFA41F38598D65512C02879(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Utils_CheckReturnEnum_m4F3CDB4D1DD633F528BFD99D5A245210AD36EF5E_RuntimeMethod_var)));
	}

IL_0043:
	{
		return;
	}
}
// System.String ROS2.Utils::GetRclErrorString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utils_GetRclErrorString_m6F27FEC35A46ADED61644CB41327F1C5847CCF79 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var);
		GetErrorStringType_t453607676A6C388E6CBFDFD75F799FDA836851DD* L_0 = ((NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_StaticFields*)il2cpp_codegen_static_fields_for(NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var))->___rclcs_get_error_string_3;
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = GetErrorStringType_Invoke_mF682DB2C6231B00B54FC6BE368456DFC81000DA6_inline(L_0, NULL);
		V_0 = L_1;
		intptr_t L_2 = V_0;
		String_t* L_3;
		L_3 = Utils_PtrToString_mCE2B96B740F655D1F150EED68843FAE759B87106(L_2, NULL);
		V_1 = L_3;
		DisposeErrorStringType_tB0EB5ABA8F09AB9C18BCB301CABC0010FA27C990* L_4 = ((NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_StaticFields*)il2cpp_codegen_static_fields_for(NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var))->___rclcs_dispose_error_string_4;
		intptr_t L_5 = V_0;
		NullCheck(L_4);
		DisposeErrorStringType_Invoke_mEAB6DDBFAFCFE029EBCFDEEF35FB1C65038FD3C9_inline(L_4, L_5, NULL);
		String_t* L_6 = V_1;
		return L_6;
	}
}
// System.String ROS2.Utils::PopRclErrorString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utils_PopRclErrorString_mAE90DE98A76531C78A9110AA2FEB593853C09289 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0;
		L_0 = Utils_GetRclErrorString_m6F27FEC35A46ADED61644CB41327F1C5847CCF79(NULL);
		V_0 = L_0;
		il2cpp_codegen_runtime_class_init_inline(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var);
		ResetErrorType_t4D921B90107C97E83795A5C064D3691084BB81DC* L_1 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_reset_error_33;
		NullCheck(L_1);
		ResetErrorType_Invoke_m4274612856ECEBA822B4AA2B15E7F75487C4713C_inline(L_1, NULL);
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.String ROS2.Utils::PtrToString(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utils_PtrToString_mCE2B96B740F655D1F150EED68843FAE759B87106 (intptr_t ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___0_p;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0012:
	{
		intptr_t L_3 = ___0_p;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = Marshal_PtrToStringAnsi_m8DF88D9F22FCF791C538A36C9233B3882F579B4A(L_3, NULL);
		return L_4;
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
// System.Double ROS2.RosTime::get_Seconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double RosTime_get_Seconds_mFB337E8C3F2FA0FDA6D6E15C2C4E2525AD27EE98 (RosTime_t8921DCC752C891310CDDC28EE8F933399D8CCD44* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___sec_0;
		uint32_t L_1 = __this->___nanosec_1;
		return ((double)il2cpp_codegen_add(((double)L_0), ((double)(((double)((double)(uint32_t)L_1))/(1000000000.0)))));
	}
}
IL2CPP_EXTERN_C  double RosTime_get_Seconds_mFB337E8C3F2FA0FDA6D6E15C2C4E2525AD27EE98_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RosTime_t8921DCC752C891310CDDC28EE8F933399D8CCD44* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RosTime_t8921DCC752C891310CDDC28EE8F933399D8CCD44*>(__this + _offset);
	double _returnValue;
	_returnValue = RosTime_get_Seconds_mFB337E8C3F2FA0FDA6D6E15C2C4E2525AD27EE98(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ROS2.Clock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Clock__ctor_mB572733F38E7F7322089A9EC629E29C32CDB22A5 (Clock_tC2F4680529BC5DFA8864474F920454F3CF7A7F0A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var);
		RclGetDefaultAllocatorType_t3073FF12B8067D85A753E0AED56D25D05214A994* L_0 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcutils_get_default_allocator_32;
		NullCheck(L_0);
		rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831 L_1;
		L_1 = RclGetDefaultAllocatorType_Invoke_m41CECCE737A7F68EADC9033A4463964A4E585096_inline(L_0, NULL);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var);
		RclcsClockCreate_t7DE4D8ACB9FFEBA0D5B88B58E6C8C5A91AF86C4B* L_2 = ((NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_StaticFields*)il2cpp_codegen_static_fields_for(NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var))->___rclcs_ros_clock_create_11;
		NullCheck(L_2);
		intptr_t L_3;
		L_3 = RclcsClockCreate_Invoke_mFD077B5620145E54382E184E765F442842D53B28_inline(L_2, (&V_0), NULL);
		__this->___handle_0 = L_3;
		return;
	}
}
// System.Boolean ROS2.Clock::get_IsDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Clock_get_IsDisposed_mB8D14918EA0D0571FFFD5F941D6FD9B1632A9636 (Clock_tC2F4680529BC5DFA8864474F920454F3CF7A7F0A* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___disposed_1;
		return L_0;
	}
}
// ROS2.RosTime ROS2.Clock::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RosTime_t8921DCC752C891310CDDC28EE8F933399D8CCD44 Clock_get_Now_mEFBCCFAB1D677F1B33E0BC20CE72B57492D15F71 (Clock_tC2F4680529BC5DFA8864474F920454F3CF7A7F0A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RosTime_t8921DCC752C891310CDDC28EE8F933399D8CCD44 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int64_t V_1 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RosTime_t8921DCC752C891310CDDC28EE8F933399D8CCD44));
		V_1 = ((int64_t)0);
		il2cpp_codegen_runtime_class_init_inline(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var);
		RclClockGetNow_tE7C0124D0B68F9278C1BE9AA93083FBB57A442BD* L_0 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_clock_get_now_31;
		intptr_t L_1 = __this->___handle_0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = RclClockGetNow_Invoke_m00070791151C18FE1EB755A8E1C4400261330075_inline(L_0, L_1, (&V_1), NULL);
		int64_t L_3 = V_1;
		(&V_0)->___sec_0 = ((int32_t)((int64_t)(L_3/((int64_t)((int32_t)1000000000)))));
		int64_t L_4 = V_1;
		int32_t L_5 = (&V_0)->___sec_0;
		(&V_0)->___nanosec_1 = ((int32_t)(uint32_t)((int64_t)il2cpp_codegen_subtract(L_4, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_5), ((int64_t)((int32_t)1000000000)))))));
		RosTime_t8921DCC752C891310CDDC28EE8F933399D8CCD44 L_6 = V_0;
		return L_6;
	}
}
// System.Void ROS2.Clock::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Clock_Finalize_mAF5FE3C86A69FC54847FCC145ECFE54232CE2497 (Clock_tC2F4680529BC5DFA8864474F920454F3CF7A7F0A* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Clock_Dispose_m152EDA0A3D3520DE913EDCF77394AF64CA0CE608(__this, NULL);
			goto IL_0012;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0012:
	{
		return;
	}
}
// System.Void ROS2.Clock::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Clock_Dispose_m152EDA0A3D3520DE913EDCF77394AF64CA0CE608 (Clock_tC2F4680529BC5DFA8864474F920454F3CF7A7F0A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->___disposed_1;
		if (L_0)
		{
			goto IL_0022;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var);
		RclcsClockDispose_tDE4246256AFCE3214E441466A84D08B4922CAE03* L_1 = ((NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_StaticFields*)il2cpp_codegen_static_fields_for(NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var))->___rclcs_ros_clock_dispose_12;
		intptr_t L_2 = __this->___handle_0;
		NullCheck(L_1);
		RclcsClockDispose_Invoke_mB31FF352E25F02041B8C12B480B4AEA88827F56F_inline(L_1, L_2, NULL);
		__this->___disposed_1 = (bool)1;
	}

IL_0022:
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
// System.Void ROS2.Node::.ctor(System.String,ROS2.rcl_context_t&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node__ctor_mF9C64070A243DB4627A01DDE8964A4149380293B (Node_t091203BA7C12AC4C2074891D81689DD9EC725A0D* __this, String_t* ___0_nodeName, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m28EFE685C660394B031BF5F4505CA9B89472B982_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m8CAA5166B55902778454AD39F6086AA9CB6FD9E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t84B08553CDF3D796DB788057B34FD5B0E857C6B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t93DFD21E3FADFA2B1015453B87C88365793D5EA7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D2464277EB9F452F839DB48B8B2133A90A2528E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_il2cpp_TypeInfo_var);
		Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D* L_0;
		L_0 = Ros2csLogger_GetInstance_m1E6254F517D7424C914CDD20035721DD2A7E9C3B(NULL);
		__this->___logger_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___logger_1), (void*)L_0);
		RuntimeObject* L_1 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_1, NULL);
		__this->___mutex_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mutex_6), (void*)L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_2 = ___0_nodeName;
		__this->___name_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_0), (void*)L_2);
		V_0 = _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
		HashSet_1_t93DFD21E3FADFA2B1015453B87C88365793D5EA7* L_3 = (HashSet_1_t93DFD21E3FADFA2B1015453B87C88365793D5EA7*)il2cpp_codegen_object_new(HashSet_1_t93DFD21E3FADFA2B1015453B87C88365793D5EA7_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		HashSet_1__ctor_m28EFE685C660394B031BF5F4505CA9B89472B982(L_3, HashSet_1__ctor_m28EFE685C660394B031BF5F4505CA9B89472B982_RuntimeMethod_var);
		__this->___subscriptions_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___subscriptions_4), (void*)L_3);
		HashSet_1_t84B08553CDF3D796DB788057B34FD5B0E857C6B4* L_4 = (HashSet_1_t84B08553CDF3D796DB788057B34FD5B0E857C6B4*)il2cpp_codegen_object_new(HashSet_1_t84B08553CDF3D796DB788057B34FD5B0E857C6B4_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		HashSet_1__ctor_m8CAA5166B55902778454AD39F6086AA9CB6FD9E4(L_4, HashSet_1__ctor_m8CAA5166B55902778454AD39F6086AA9CB6FD9E4_RuntimeMethod_var);
		__this->___publishers_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___publishers_5), (void*)L_4);
		il2cpp_codegen_runtime_class_init_inline(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var);
		GetZeroInitializedNodeType_tB2B66F53C164F56418A2C83367AE26F42B8F4E92* L_5 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_get_zero_initialized_node_10;
		NullCheck(L_5);
		rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4 L_6;
		L_6 = GetZeroInitializedNodeType_Invoke_m4971529E411B1A334F39F9BA27EBCC9EEEC44349_inline(L_5, NULL);
		__this->___nodeHandle_2 = L_6;
		il2cpp_codegen_runtime_class_init_inline(NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var);
		NodeCreateDefaltOptionsType_t694FBD8C3D7CA67B641200A83CB864C8FD58787E* L_7 = ((NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_StaticFields*)il2cpp_codegen_static_fields_for(NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var))->___rclcs_node_create_default_options_5;
		NullCheck(L_7);
		intptr_t L_8;
		L_8 = NodeCreateDefaltOptionsType_Invoke_m03EC69F947909616A6137C575C5EED4EC3A3B0BA_inline(L_7, NULL);
		__this->___defaultNodeOptions_3 = L_8;
		NodeInitType_t365D995BC724D5F7042E191CE9A4B13A5C3865C0* L_9 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_node_init_11;
		rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* L_10 = (rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4*)(&__this->___nodeHandle_2);
		String_t* L_11 = ___0_nodeName;
		String_t* L_12 = V_0;
		rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* L_13 = ___1_context;
		intptr_t L_14 = __this->___defaultNodeOptions_3;
		NullCheck(L_9);
		int32_t L_15;
		L_15 = NodeInitType_Invoke_mCD6B59F3B3FE2FB1353B8EA4DFA95066BBD629BD_inline(L_9, L_10, L_11, L_12, L_13, L_14, NULL);
		Utils_CheckReturnEnum_m4F3CDB4D1DD633F528BFD99D5A245210AD36EF5E(L_15, NULL);
		Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D* L_16 = __this->___logger_1;
		NullCheck(L_16);
		Ros2csLogger_LogInfo_mB16EAA697EAC0CB85D40761A18AC6B3023DCCD65(L_16, _stringLiteral0D2464277EB9F452F839DB48B8B2133A90A2528E, NULL);
		return;
	}
}
// System.String ROS2.Node::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Node_get_Name_mE229862361FDE8FD5363AECA92F558B87F79A6EF (Node_t091203BA7C12AC4C2074891D81689DD9EC725A0D* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___name_0;
		return L_0;
	}
}
// System.Collections.Generic.List`1<ROS2.ISubscriptionBase> ROS2.Node::get_Subscriptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t0B869009E71D4485E120F9AC81AE38A128A6EF9F* Node_get_Subscriptions_mE8CB73008BF0BE009E3FF5912C54837F2E079492 (Node_t091203BA7C12AC4C2074891D81689DD9EC725A0D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisISubscriptionBase_tCD95FBCE3C6D4C86D95DEEA874AA4E01F914834D_mEC50A9AC6EB39445A02AD44CBABC38B3B63EB80F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	List_1_t0B869009E71D4485E120F9AC81AE38A128A6EF9F* V_2 = NULL;
	{
		RuntimeObject* L_0 = __this->___mutex_6;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0022:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_002b;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_002b:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			HashSet_1_t93DFD21E3FADFA2B1015453B87C88365793D5EA7* L_4 = __this->___subscriptions_4;
			List_1_t0B869009E71D4485E120F9AC81AE38A128A6EF9F* L_5;
			L_5 = Enumerable_ToList_TisISubscriptionBase_tCD95FBCE3C6D4C86D95DEEA874AA4E01F914834D_mEC50A9AC6EB39445A02AD44CBABC38B3B63EB80F(L_4, Enumerable_ToList_TisISubscriptionBase_tCD95FBCE3C6D4C86D95DEEA874AA4E01F914834D_mEC50A9AC6EB39445A02AD44CBABC38B3B63EB80F_RuntimeMethod_var);
			V_2 = L_5;
			goto IL_002c;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002c:
	{
		List_1_t0B869009E71D4485E120F9AC81AE38A128A6EF9F* L_6 = V_2;
		return L_6;
	}
}
// System.Boolean ROS2.Node::get_IsDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Node_get_IsDisposed_mF1271C534EE9D9F6E5ADE31260B40B311CDDFCBD (Node_t091203BA7C12AC4C2074891D81689DD9EC725A0D* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___disposed_7;
		return L_0;
	}
}
// System.Void ROS2.Node::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_Finalize_m57FBEEC0B4294F2AD10BE8B4EF433E7D71CE9313 (Node_t091203BA7C12AC4C2074891D81689DD9EC725A0D* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Node_DestroyNode_mA12E1D4909A7D71CE3444DC22771F14EA6509290(__this, NULL);
			goto IL_0012;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0012:
	{
		return;
	}
}
// System.Void ROS2.Node::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_Dispose_m14617AAFCCEC9DE725CFC4318DA6301D0278E375 (Node_t091203BA7C12AC4C2074891D81689DD9EC725A0D* __this, const RuntimeMethod* method) 
{
	{
		Node_DestroyNode_mA12E1D4909A7D71CE3444DC22771F14EA6509290(__this, NULL);
		return;
	}
}
// System.Void ROS2.Node::DestroyNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_DestroyNode_mA12E1D4909A7D71CE3444DC22771F14EA6509290 (Node_t091203BA7C12AC4C2074891D81689DD9EC725A0D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m78C2CE373F5D5F7DD8483380401ECE285C51E8EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mE5DD7F24F9370BB0948486C0F78A6CF33B924350_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m346F12BECF0659EE21A644F599F0C5A603A8B293_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB26CE4E4A248B30807F78497557F446B0E220D11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m2925D36AB4A8EB97168ACF699BCCBAA4112CFB6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mAA0480063E8FB91EA27DD04E45DF0AF607ADCA74_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Clear_m0568EBB2A54163D9B164FD68CE1319F247F5FB0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Clear_m1F4D321F386CC97DB29CA7DA8CA2024559968A69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_GetEnumerator_m4600FFA2C765C9CF4C33C6ADAFC923887150D062_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_GetEnumerator_mF4E967A756694C6CFE815008DD03BEFDFAA783C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral412D5FA94D75205B38539FBFE9CC0B3A04E69006);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9899AE59A9BA5F815B710C759F61C36BD513398);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	Enumerator_t5BFFD485E919AC1FB05AC5738E10C72304D2FB1D V_3;
	memset((&V_3), 0, sizeof(V_3));
	RuntimeObject* V_4 = NULL;
	Enumerator_t88F60AB230D10BED893260C0F5CDB91F8779DA50 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		RuntimeObject* L_0 = __this->___mutex_6;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0102:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_010b;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_010b:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				bool L_4 = __this->___disposed_7;
				if (L_4)
				{
					goto IL_00fd_1;
				}
			}
			{
				HashSet_1_t93DFD21E3FADFA2B1015453B87C88365793D5EA7* L_5 = __this->___subscriptions_4;
				NullCheck(L_5);
				Enumerator_t5BFFD485E919AC1FB05AC5738E10C72304D2FB1D L_6;
				L_6 = HashSet_1_GetEnumerator_m4600FFA2C765C9CF4C33C6ADAFC923887150D062(L_5, HashSet_1_GetEnumerator_m4600FFA2C765C9CF4C33C6ADAFC923887150D062_RuntimeMethod_var);
				V_3 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_004c_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_mE5DD7F24F9370BB0948486C0F78A6CF33B924350((&V_3), Enumerator_Dispose_mE5DD7F24F9370BB0948486C0F78A6CF33B924350_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_003b_2;
					}

IL_002d_2:
					{
						RuntimeObject* L_7;
						L_7 = Enumerator_get_Current_mAA0480063E8FB91EA27DD04E45DF0AF607ADCA74_inline((&V_3), Enumerator_get_Current_mAA0480063E8FB91EA27DD04E45DF0AF607ADCA74_RuntimeMethod_var);
						V_2 = L_7;
						RuntimeObject* L_8 = V_2;
						NullCheck(L_8);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
					}

IL_003b_2:
					{
						bool L_9;
						L_9 = Enumerator_MoveNext_m346F12BECF0659EE21A644F599F0C5A603A8B293((&V_3), Enumerator_MoveNext_m346F12BECF0659EE21A644F599F0C5A603A8B293_RuntimeMethod_var);
						if (L_9)
						{
							goto IL_002d_2;
						}
					}
					{
						goto IL_005a_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_005a_1:
			{
				HashSet_1_t93DFD21E3FADFA2B1015453B87C88365793D5EA7* L_10 = __this->___subscriptions_4;
				NullCheck(L_10);
				HashSet_1_Clear_m1F4D321F386CC97DB29CA7DA8CA2024559968A69(L_10, HashSet_1_Clear_m1F4D321F386CC97DB29CA7DA8CA2024559968A69_RuntimeMethod_var);
				HashSet_1_t84B08553CDF3D796DB788057B34FD5B0E857C6B4* L_11 = __this->___publishers_5;
				NullCheck(L_11);
				Enumerator_t88F60AB230D10BED893260C0F5CDB91F8779DA50 L_12;
				L_12 = HashSet_1_GetEnumerator_mF4E967A756694C6CFE815008DD03BEFDFAA783C0(L_11, HashSet_1_GetEnumerator_mF4E967A756694C6CFE815008DD03BEFDFAA783C0_RuntimeMethod_var);
				V_5 = L_12;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0098_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_m78C2CE373F5D5F7DD8483380401ECE285C51E8EC((&V_5), Enumerator_Dispose_m78C2CE373F5D5F7DD8483380401ECE285C51E8EC_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_0087_2;
					}

IL_0077_2:
					{
						RuntimeObject* L_13;
						L_13 = Enumerator_get_Current_m2925D36AB4A8EB97168ACF699BCCBAA4112CFB6A_inline((&V_5), Enumerator_get_Current_m2925D36AB4A8EB97168ACF699BCCBAA4112CFB6A_RuntimeMethod_var);
						V_4 = L_13;
						RuntimeObject* L_14 = V_4;
						NullCheck(L_14);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_14);
					}

IL_0087_2:
					{
						bool L_15;
						L_15 = Enumerator_MoveNext_mB26CE4E4A248B30807F78497557F446B0E220D11((&V_5), Enumerator_MoveNext_mB26CE4E4A248B30807F78497557F446B0E220D11_RuntimeMethod_var);
						if (L_15)
						{
							goto IL_0077_2;
						}
					}
					{
						goto IL_00a6_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_00a6_1:
			{
				HashSet_1_t84B08553CDF3D796DB788057B34FD5B0E857C6B4* L_16 = __this->___publishers_5;
				NullCheck(L_16);
				HashSet_1_Clear_m0568EBB2A54163D9B164FD68CE1319F247F5FB0E(L_16, HashSet_1_Clear_m0568EBB2A54163D9B164FD68CE1319F247F5FB0E_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var);
				NodeFiniType_tA1CDE02D8B40017868A11938E7CDE8B6DF56F210* L_17 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_node_fini_12;
				rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* L_18 = (rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4*)(&__this->___nodeHandle_2);
				NullCheck(L_17);
				int32_t L_19;
				L_19 = NodeFiniType_Invoke_mA4955F10BF547445FEEF088F34F2B874823921E6_inline(L_17, L_18, NULL);
				Utils_CheckReturnEnum_m4F3CDB4D1DD633F528BFD99D5A245210AD36EF5E(L_19, NULL);
				il2cpp_codegen_runtime_class_init_inline(NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var);
				NodeDisposeOptionsType_t15BDDEA610F9F4D00AC15F76577DB21C03EAF5F7* L_20 = ((NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_StaticFields*)il2cpp_codegen_static_fields_for(NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var))->___rclcs_node_dispose_options_6;
				intptr_t L_21 = __this->___defaultNodeOptions_3;
				NullCheck(L_20);
				NodeDisposeOptionsType_Invoke_m835EF8D0C527904297A9967E2B7FEB2184C3DE6E_inline(L_20, L_21, NULL);
				__this->___disposed_7 = (bool)1;
				Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D* L_22 = __this->___logger_1;
				String_t* L_23 = __this->___name_0;
				String_t* L_24;
				L_24 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral412D5FA94D75205B38539FBFE9CC0B3A04E69006, L_23, _stringLiteralB9899AE59A9BA5F815B710C759F61C36BD513398, NULL);
				NullCheck(L_22);
				Ros2csLogger_LogInfo_mB16EAA697EAC0CB85D40761A18AC6B3023DCCD65(L_22, L_24, NULL);
			}

IL_00fd_1:
			{
				goto IL_010c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_010c:
	{
		return;
	}
}
// System.Boolean ROS2.Node::RemovePublisher(ROS2.IPublisherBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Node_RemovePublisher_m3EEEC664955F11EF9583EF00DF7C7652B4136FE6 (Node_t091203BA7C12AC4C2074891D81689DD9EC725A0D* __this, RuntimeObject* ___0_publisher, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mBC61C0A6D78773A5CDBC43C1D24DF57224C27086_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Remove_m55A9CC1846DE8F10FA46F38BC1796E994CAB42EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPublisherBase_tF2325202EE245A37967B5AFB8C41ABCEFA8D6DAD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF60C74C532A90F70D94F3A49FC96A51DA28782CB);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		RuntimeObject* L_0 = __this->___mutex_6;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005c:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0065;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0065:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				HashSet_1_t84B08553CDF3D796DB788057B34FD5B0E857C6B4* L_4 = __this->___publishers_5;
				RuntimeObject* L_5 = ___0_publisher;
				NullCheck(L_4);
				bool L_6;
				L_6 = HashSet_1_Contains_mBC61C0A6D78773A5CDBC43C1D24DF57224C27086(L_4, L_5, HashSet_1_Contains_mBC61C0A6D78773A5CDBC43C1D24DF57224C27086_RuntimeMethod_var);
				if (!L_6)
				{
					goto IL_0055_1;
				}
			}
			{
				Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D* L_7 = __this->___logger_1;
				RuntimeObject* L_8 = ___0_publisher;
				NullCheck(L_8);
				String_t* L_9;
				L_9 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String ROS2.IPublisherBase::get_Topic() */, IPublisherBase_tF2325202EE245A37967B5AFB8C41ABCEFA8D6DAD_il2cpp_TypeInfo_var, L_8);
				String_t* L_10;
				L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralF60C74C532A90F70D94F3A49FC96A51DA28782CB, L_9, NULL);
				NullCheck(L_7);
				Ros2csLogger_LogInfo_mB16EAA697EAC0CB85D40761A18AC6B3023DCCD65(L_7, L_10, NULL);
				RuntimeObject* L_11 = ___0_publisher;
				NullCheck(L_11);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_11);
				HashSet_1_t84B08553CDF3D796DB788057B34FD5B0E857C6B4* L_12 = __this->___publishers_5;
				RuntimeObject* L_13 = ___0_publisher;
				NullCheck(L_12);
				bool L_14;
				L_14 = HashSet_1_Remove_m55A9CC1846DE8F10FA46F38BC1796E994CAB42EA(L_12, L_13, HashSet_1_Remove_m55A9CC1846DE8F10FA46F38BC1796E994CAB42EA_RuntimeMethod_var);
				V_2 = L_14;
				goto IL_0066;
			}

IL_0055_1:
			{
				V_2 = (bool)0;
				goto IL_0066;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0066:
	{
		bool L_15 = V_2;
		return L_15;
	}
}
// System.Boolean ROS2.Node::RemoveSubscription(ROS2.ISubscriptionBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Node_RemoveSubscription_m67C5DD8D30DD66D26C4CD00D34B175291AFFAC08 (Node_t091203BA7C12AC4C2074891D81689DD9EC725A0D* __this, RuntimeObject* ___0_subscription, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_m4605EB29B0FDBDF989998F85DC129B0BA0E96800_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Remove_m6031362F0F0125121CDAC9BE6D56269083811942_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubscriptionBase_tCD95FBCE3C6D4C86D95DEEA874AA4E01F914834D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral999974E733B14677FCB29020AE1EC9EF9BB9ED19);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		RuntimeObject* L_0 = __this->___mutex_6;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005c:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0065;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0065:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				HashSet_1_t93DFD21E3FADFA2B1015453B87C88365793D5EA7* L_4 = __this->___subscriptions_4;
				RuntimeObject* L_5 = ___0_subscription;
				NullCheck(L_4);
				bool L_6;
				L_6 = HashSet_1_Contains_m4605EB29B0FDBDF989998F85DC129B0BA0E96800(L_4, L_5, HashSet_1_Contains_m4605EB29B0FDBDF989998F85DC129B0BA0E96800_RuntimeMethod_var);
				if (!L_6)
				{
					goto IL_0055_1;
				}
			}
			{
				Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D* L_7 = __this->___logger_1;
				RuntimeObject* L_8 = ___0_subscription;
				NullCheck(L_8);
				String_t* L_9;
				L_9 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String ROS2.ISubscriptionBase::get_Topic() */, ISubscriptionBase_tCD95FBCE3C6D4C86D95DEEA874AA4E01F914834D_il2cpp_TypeInfo_var, L_8);
				String_t* L_10;
				L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral999974E733B14677FCB29020AE1EC9EF9BB9ED19, L_9, NULL);
				NullCheck(L_7);
				Ros2csLogger_LogInfo_mB16EAA697EAC0CB85D40761A18AC6B3023DCCD65(L_7, L_10, NULL);
				RuntimeObject* L_11 = ___0_subscription;
				NullCheck(L_11);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_11);
				HashSet_1_t93DFD21E3FADFA2B1015453B87C88365793D5EA7* L_12 = __this->___subscriptions_4;
				RuntimeObject* L_13 = ___0_subscription;
				NullCheck(L_12);
				bool L_14;
				L_14 = HashSet_1_Remove_m6031362F0F0125121CDAC9BE6D56269083811942(L_12, L_13, HashSet_1_Remove_m6031362F0F0125121CDAC9BE6D56269083811942_RuntimeMethod_var);
				V_2 = L_14;
				goto IL_0066;
			}

IL_0055_1:
			{
				V_2 = (bool)0;
				goto IL_0066;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0066:
	{
		bool L_15 = V_2;
		return L_15;
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
// System.Void ROS2.QualityOfServiceProfile::.ctor(ROS2.QosPresetProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QualityOfServiceProfile__ctor_m07DC019B6D110CF8BE8CEDBB4472BF704A9D7AB0 (QualityOfServiceProfile_t167E8030D9BA28716116CB6354999131DD396BEA* __this, int32_t ___0_preset_profile, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_il2cpp_TypeInfo_var);
		RMWNativeCreateQoSProfileIdentifierType_t86C350418729D57B100F216E31911830AE25AA97* L_0 = ((NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_StaticFields*)il2cpp_codegen_static_fields_for(NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_il2cpp_TypeInfo_var))->___rmw_native_interface_create_qos_profile_3;
		int32_t L_1 = ___0_preset_profile;
		NullCheck(L_0);
		intptr_t L_2;
		L_2 = RMWNativeCreateQoSProfileIdentifierType_Invoke_m719A1FA4411233308FBD0A52DD44DF51ADB12FA0_inline(L_0, L_1, NULL);
		__this->___handle_0 = L_2;
		return;
	}
}
// System.Void ROS2.QualityOfServiceProfile::SetHistory(ROS2.HistoryPolicy,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QualityOfServiceProfile_SetHistory_mA6DAAEB82E9797D3020A2A0C1FCF4218D3EF64C7 (QualityOfServiceProfile_t167E8030D9BA28716116CB6354999131DD396BEA* __this, int32_t ___0_policy, int32_t ___1_depth, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_il2cpp_TypeInfo_var);
		RMWNativeSetHistoryIdentifierType_t438821C2B73F2BC4261752F5A9FF236255879D42* L_0 = ((NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_StaticFields*)il2cpp_codegen_static_fields_for(NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_il2cpp_TypeInfo_var))->___rmw_native_interface_set_history_5;
		intptr_t L_1 = __this->___handle_0;
		int32_t L_2 = ___0_policy;
		int32_t L_3 = ___1_depth;
		NullCheck(L_0);
		RMWNativeSetHistoryIdentifierType_Invoke_mD19165DA0A5836757CDE8E627683D5431B79D486_inline(L_0, L_1, L_2, L_3, NULL);
		return;
	}
}
// System.Void ROS2.QualityOfServiceProfile::SetReliability(ROS2.ReliabilityPolicy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QualityOfServiceProfile_SetReliability_mC616FDDA461B61574D5E808CF18073B45F6D20E0 (QualityOfServiceProfile_t167E8030D9BA28716116CB6354999131DD396BEA* __this, int32_t ___0_policy, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_il2cpp_TypeInfo_var);
		RMWNativeSetReliabilityIdentifierType_tFE846BDE4F0A5F243647D947A73C2694378E19A5* L_0 = ((NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_StaticFields*)il2cpp_codegen_static_fields_for(NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_il2cpp_TypeInfo_var))->___rmw_native_interface_set_reliability_6;
		intptr_t L_1 = __this->___handle_0;
		int32_t L_2 = ___0_policy;
		NullCheck(L_0);
		RMWNativeSetReliabilityIdentifierType_Invoke_m0C867D84FBB2311D293FF704AE4E69BA487329FF_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void ROS2.QualityOfServiceProfile::SetDurability(ROS2.DurabilityPolicy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QualityOfServiceProfile_SetDurability_m367BF4FD46D61FDD58EBF50E88824FB9F715BFCF (QualityOfServiceProfile_t167E8030D9BA28716116CB6354999131DD396BEA* __this, int32_t ___0_policy, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_il2cpp_TypeInfo_var);
		RMWNativeSetDurabilityIdentifierType_tC20DAC0CC312A9DAEBC318C441BC8203EE4E0D14* L_0 = ((NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_StaticFields*)il2cpp_codegen_static_fields_for(NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_il2cpp_TypeInfo_var))->___rmw_native_interface_set_durability_7;
		intptr_t L_1 = __this->___handle_0;
		int32_t L_2 = ___0_policy;
		NullCheck(L_0);
		RMWNativeSetDurabilityIdentifierType_Invoke_m37BD9B13755DD7B4C13114176D323EAD0AE802E3_inline(L_0, L_1, L_2, NULL);
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
// System.Void ROS2.Ros2cs::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ros2cs_Init_m0DD18818F4CB0ABB9E8745BB1FB6BC48CBEA6D54 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_StaticFields*)il2cpp_codegen_static_fields_for(Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var))->___mutex_1;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0061:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_006a;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_006a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				il2cpp_codegen_runtime_class_init_inline(Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var);
				bool L_4 = ((Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_StaticFields*)il2cpp_codegen_static_fields_for(Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var))->___initialized_2;
				if (!L_4)
				{
					goto IL_001f_1;
				}
			}
			{
				goto IL_006b;
			}

IL_001f_1:
			{
				il2cpp_codegen_runtime_class_init_inline(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var);
				RclGetDefaultAllocatorType_t3073FF12B8067D85A753E0AED56D25D05214A994* L_5 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcutils_get_default_allocator_32;
				NullCheck(L_5);
				rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831 L_6;
				L_6 = RclGetDefaultAllocatorType_Invoke_m41CECCE737A7F68EADC9033A4463964A4E585096_inline(L_5, NULL);
				il2cpp_codegen_runtime_class_init_inline(Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var);
				((Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_StaticFields*)il2cpp_codegen_static_fields_for(Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var))->___default_allocator_4 = L_6;
				GetZeroInitializedContextType_t04171F8770DA4190523F40E24D627320BEE692D6* L_7 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_get_zero_initialized_context_3;
				NullCheck(L_7);
				rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C L_8;
				L_8 = GetZeroInitializedContextType_Invoke_m7072D60BE53253063BD08973B4317F9C57538D39_inline(L_7, NULL);
				((Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_StaticFields*)il2cpp_codegen_static_fields_for(Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var))->___global_context_3 = L_8;
				il2cpp_codegen_runtime_class_init_inline(NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var);
				RCLCSInitType_t98BFF379AE54A896A681209B70D41C4504AF733F* L_9 = ((NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_StaticFields*)il2cpp_codegen_static_fields_for(NativeRclInterface_tF0B14E825CB7DE6D3CB324ECA9B73A7DEB5549AB_il2cpp_TypeInfo_var))->___rclcs_init_2;
				rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831 L_10 = ((Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_StaticFields*)il2cpp_codegen_static_fields_for(Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var))->___default_allocator_4;
				NullCheck(L_9);
				int32_t L_11;
				L_11 = RCLCSInitType_Invoke_m0F244268FB97A1EC69BAE44FBD0BB9C201DF4E42_inline(L_9, (&((Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_StaticFields*)il2cpp_codegen_static_fields_for(Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var))->___global_context_3), L_10, NULL);
				Utils_CheckReturnEnum_m4F3CDB4D1DD633F528BFD99D5A245210AD36EF5E(L_11, NULL);
				((Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_StaticFields*)il2cpp_codegen_static_fields_for(Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var))->___initialized_2 = (bool)1;
				goto IL_006b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006b:
	{
		return;
	}
}
// System.String ROS2.Ros2cs::GetRMWImplementation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Ros2cs_GetRMWImplementation_mD7EF0B8E9E670E644BD29F9302BBFF61D615D352 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_il2cpp_TypeInfo_var);
		RMWImplementationIdentifier_t7221E12FDDCCCC1D3CC320EDA66B945FA794AE37* L_0 = ((NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_StaticFields*)il2cpp_codegen_static_fields_for(NativeRmwInterface_t33EB2F23ACA153A10C34F7038725CF3B59430F0F_il2cpp_TypeInfo_var))->___rmw_native_interface_get_implementation_identifier_2;
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = RMWImplementationIdentifier_Invoke_m2798432969B3FDB239028F2CCE63EA679D73EBD7_inline(L_0, NULL);
		String_t* L_2;
		L_2 = Utils_PtrToString_mCE2B96B740F655D1F150EED68843FAE759B87106(L_1, NULL);
		return L_2;
	}
}
// System.Void ROS2.Ros2cs::Shutdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ros2cs_Shutdown_mC6D21423F0C5ABF86E21EFFD2F858B35DCF429AA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m2049E8ADCBDFF0C3A5923266E34854C17641E422_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m2A8BC35161E48CCDE8D7C310269082ACD4A85794_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m029D491365B735630C632DDE207AE18F496B4FCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m4C0DB9B46210C00A6CEFD3DE16A618503953E791_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mB772E9A11089BC01C355EBDB0DC4E27E08CD0182_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral550F655B892E2726CFD8801E1DAB2F9234E1B6E9);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	Enumerator_tE4970469CF181052A9B4F9A0784FD2B70EE25314 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		il2cpp_codegen_runtime_class_init_inline(Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_StaticFields*)il2cpp_codegen_static_fields_for(Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var))->___mutex_1;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0094:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_009d;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_009d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				il2cpp_codegen_runtime_class_init_inline(Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var);
				bool L_4 = ((Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_StaticFields*)il2cpp_codegen_static_fields_for(Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var))->___initialized_2;
				if (L_4)
				{
					goto IL_001f_1;
				}
			}
			{
				goto IL_009e;
			}

IL_001f_1:
			{
				il2cpp_codegen_runtime_class_init_inline(Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var);
				((Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_StaticFields*)il2cpp_codegen_static_fields_for(Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var))->___initialized_2 = (bool)0;
				il2cpp_codegen_runtime_class_init_inline(Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_il2cpp_TypeInfo_var);
				Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D* L_5;
				L_5 = Ros2csLogger_GetInstance_m1E6254F517D7424C914CDD20035721DD2A7E9C3B(NULL);
				NullCheck(L_5);
				Ros2csLogger_LogInfo_mB16EAA697EAC0CB85D40761A18AC6B3023DCCD65(L_5, _stringLiteral550F655B892E2726CFD8801E1DAB2F9234E1B6E9, NULL);
				il2cpp_codegen_runtime_class_init_inline(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var);
				ShutdownType_t4FB0976CC98794F41196FD3CC575CAC576F438CA* L_6 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_shutdown_6;
				NullCheck(L_6);
				int32_t L_7;
				L_7 = ShutdownType_Invoke_mA18C5013CED464580638857F255A520DEDD59EFC_inline(L_6, (&((Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_StaticFields*)il2cpp_codegen_static_fields_for(Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var))->___global_context_3), NULL);
				Utils_CheckReturnEnum_m4F3CDB4D1DD633F528BFD99D5A245210AD36EF5E(L_7, NULL);
				List_1_tDD6E1C9A706EDC9B52011559C08EE6DB5044D953* L_8 = ((Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_StaticFields*)il2cpp_codegen_static_fields_for(Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var))->___nodes_5;
				NullCheck(L_8);
				Enumerator_tE4970469CF181052A9B4F9A0784FD2B70EE25314 L_9;
				L_9 = List_1_GetEnumerator_mB772E9A11089BC01C355EBDB0DC4E27E08CD0182(L_8, List_1_GetEnumerator_mB772E9A11089BC01C355EBDB0DC4E27E08CD0182_RuntimeMethod_var);
				V_3 = L_9;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0077_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_m2049E8ADCBDFF0C3A5923266E34854C17641E422((&V_3), Enumerator_Dispose_m2049E8ADCBDFF0C3A5923266E34854C17641E422_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_0066_2;
					}

IL_0058_2:
					{
						RuntimeObject* L_10;
						L_10 = Enumerator_get_Current_m029D491365B735630C632DDE207AE18F496B4FCC_inline((&V_3), Enumerator_get_Current_m029D491365B735630C632DDE207AE18F496B4FCC_RuntimeMethod_var);
						V_2 = L_10;
						RuntimeObject* L_11 = V_2;
						NullCheck(L_11);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_11);
					}

IL_0066_2:
					{
						bool L_12;
						L_12 = Enumerator_MoveNext_m2A8BC35161E48CCDE8D7C310269082ACD4A85794((&V_3), Enumerator_MoveNext_m2A8BC35161E48CCDE8D7C310269082ACD4A85794_RuntimeMethod_var);
						if (L_12)
						{
							goto IL_0058_2;
						}
					}
					{
						goto IL_0085_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0085_1:
			{
				il2cpp_codegen_runtime_class_init_inline(Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var);
				List_1_tDD6E1C9A706EDC9B52011559C08EE6DB5044D953* L_13 = ((Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_StaticFields*)il2cpp_codegen_static_fields_for(Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var))->___nodes_5;
				NullCheck(L_13);
				List_1_Clear_m4C0DB9B46210C00A6CEFD3DE16A618503953E791_inline(L_13, List_1_Clear_m4C0DB9B46210C00A6CEFD3DE16A618503953E791_RuntimeMethod_var);
				goto IL_009e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_009e:
	{
		return;
	}
}
// System.Boolean ROS2.Ros2cs::Ok()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ros2cs_Ok_mCBF1F5567BD5AC76648366C7BCE560310CA9B2D4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var);
		bool L_0 = ((Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_StaticFields*)il2cpp_codegen_static_fields_for(Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var))->___initialized_2;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var);
		ContextIsValidType_t221B25824BF034AA390D02239F461440F4C6AFF9* L_1 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_context_is_valid_7;
		il2cpp_codegen_runtime_class_init_inline(Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		bool L_2;
		L_2 = ContextIsValidType_Invoke_m27DC66426F72978C16FCB3F2281290538D1E02B8_inline(L_1, (&((Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_StaticFields*)il2cpp_codegen_static_fields_for(Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var))->___global_context_3), NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 0;
	}

IL_001c:
	{
		return (bool)G_B3_0;
	}
}
// ROS2.INode ROS2.Ros2cs::CreateNode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Ros2cs_CreateNode_m106B7064A86E1CC2A7D9E9784B0E293E1E182863 (String_t* ___0_nodeName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m2049E8ADCBDFF0C3A5923266E34854C17641E422_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m2A8BC35161E48CCDE8D7C310269082ACD4A85794_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m029D491365B735630C632DDE207AE18F496B4FCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INode_tCD64661050E9A232AEE12B0D79C944D163C949E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m777C47D3E9AEC62DC26C78FF09B7AEE3A3705DB0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mB772E9A11089BC01C355EBDB0DC4E27E08CD0182_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Node_t091203BA7C12AC4C2074891D81689DD9EC725A0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	Enumerator_tE4970469CF181052A9B4F9A0784FD2B70EE25314 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Node_t091203BA7C12AC4C2074891D81689DD9EC725A0D* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_StaticFields*)il2cpp_codegen_static_fields_for(Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var))->___mutex_1;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_00b8:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				il2cpp_codegen_runtime_class_init_inline(Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var);
				bool L_4;
				L_4 = Ros2cs_Ok_mCBF1F5567BD5AC76648366C7BCE560310CA9B2D4(NULL);
				if (L_4)
				{
					goto IL_002f_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_il2cpp_TypeInfo_var)));
				Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D* L_5;
				L_5 = Ros2csLogger_GetInstance_m1E6254F517D7424C914CDD20035721DD2A7E9C3B(NULL);
				NullCheck(L_5);
				Ros2csLogger_LogError_mA0DE7B246DFEE60AC35F45ED985CD4FD8B2132CB(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDE5F4D77371342DF15B29BA3FFA1CC3CDF0A4397)), NULL);
				NotInitializedException_t50A36E084A8A7B49F17EB63CEF13167336C53EAC* L_6 = (NotInitializedException_t50A36E084A8A7B49F17EB63CEF13167336C53EAC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotInitializedException_t50A36E084A8A7B49F17EB63CEF13167336C53EAC_il2cpp_TypeInfo_var)));
				NullCheck(L_6);
				NotInitializedException__ctor_m46353248D56FD91C0B6A4B1AE0D19D5CA0A7D7A7(L_6, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Ros2cs_CreateNode_m106B7064A86E1CC2A7D9E9784B0E293E1E182863_RuntimeMethod_var)));
			}

IL_002f_1:
			{
				il2cpp_codegen_runtime_class_init_inline(Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var);
				List_1_tDD6E1C9A706EDC9B52011559C08EE6DB5044D953* L_7 = ((Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_StaticFields*)il2cpp_codegen_static_fields_for(Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var))->___nodes_5;
				NullCheck(L_7);
				Enumerator_tE4970469CF181052A9B4F9A0784FD2B70EE25314 L_8;
				L_8 = List_1_GetEnumerator_mB772E9A11089BC01C355EBDB0DC4E27E08CD0182(L_7, List_1_GetEnumerator_mB772E9A11089BC01C355EBDB0DC4E27E08CD0182_RuntimeMethod_var);
				V_3 = L_8;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_007f_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_m2049E8ADCBDFF0C3A5923266E34854C17641E422((&V_3), Enumerator_Dispose_m2049E8ADCBDFF0C3A5923266E34854C17641E422_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_006e_2;
					}

IL_003f_2:
					{
						RuntimeObject* L_9;
						L_9 = Enumerator_get_Current_m029D491365B735630C632DDE207AE18F496B4FCC_inline((&V_3), Enumerator_get_Current_m029D491365B735630C632DDE207AE18F496B4FCC_RuntimeMethod_var);
						V_2 = L_9;
						RuntimeObject* L_10 = V_2;
						NullCheck(L_10);
						String_t* L_11;
						L_11 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String ROS2.INode::get_Name() */, INode_tCD64661050E9A232AEE12B0D79C944D163C949E5_il2cpp_TypeInfo_var, L_10);
						String_t* L_12 = ___0_nodeName;
						bool L_13;
						L_13 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, L_12, NULL);
						if (!L_13)
						{
							goto IL_006e_2;
						}
					}
					{
						String_t* L_14 = ___0_nodeName;
						String_t* L_15;
						L_15 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9118E5C1DB9B097355412A7CAE591EEE8A1C4083)), L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB6A3C726CA5CC064F2491335D683BDD8501F3BA7)), NULL);
						InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_16 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
						NullCheck(L_16);
						InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_16, L_15, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Ros2cs_CreateNode_m106B7064A86E1CC2A7D9E9784B0E293E1E182863_RuntimeMethod_var)));
					}

IL_006e_2:
					{
						bool L_17;
						L_17 = Enumerator_MoveNext_m2A8BC35161E48CCDE8D7C310269082ACD4A85794((&V_3), Enumerator_MoveNext_m2A8BC35161E48CCDE8D7C310269082ACD4A85794_RuntimeMethod_var);
						if (L_17)
						{
							goto IL_003f_2;
						}
					}
					{
						goto IL_008d_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_008d_1:
			{
				String_t* L_18 = ___0_nodeName;
				il2cpp_codegen_runtime_class_init_inline(Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var);
				Node_t091203BA7C12AC4C2074891D81689DD9EC725A0D* L_19 = (Node_t091203BA7C12AC4C2074891D81689DD9EC725A0D*)il2cpp_codegen_object_new(Node_t091203BA7C12AC4C2074891D81689DD9EC725A0D_il2cpp_TypeInfo_var);
				NullCheck(L_19);
				Node__ctor_mF9C64070A243DB4627A01DDE8964A4149380293B(L_19, L_18, (&((Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_StaticFields*)il2cpp_codegen_static_fields_for(Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var))->___global_context_3), NULL);
				V_4 = L_19;
				List_1_tDD6E1C9A706EDC9B52011559C08EE6DB5044D953* L_20 = ((Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_StaticFields*)il2cpp_codegen_static_fields_for(Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var))->___nodes_5;
				Node_t091203BA7C12AC4C2074891D81689DD9EC725A0D* L_21 = V_4;
				NullCheck(L_20);
				List_1_Add_m777C47D3E9AEC62DC26C78FF09B7AEE3A3705DB0_inline(L_20, L_21, List_1_Add_m777C47D3E9AEC62DC26C78FF09B7AEE3A3705DB0_RuntimeMethod_var);
				Node_t091203BA7C12AC4C2074891D81689DD9EC725A0D* L_22 = V_4;
				V_5 = L_22;
				goto IL_00b9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		RuntimeObject* L_23 = V_5;
		return L_23;
	}
}
// System.Boolean ROS2.Ros2cs::RemoveNode(ROS2.INode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ros2cs_RemoveNode_m366576274210344333586F6DC07C5C163CFDB15F (RuntimeObject* ___0_node, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m71D00A3CB381B1DFE493596596AEA6E2FBF85750_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_StaticFields*)il2cpp_codegen_static_fields_for(Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var))->___mutex_1;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0041;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0041:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				il2cpp_codegen_runtime_class_init_inline(Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var);
				bool L_4 = ((Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_StaticFields*)il2cpp_codegen_static_fields_for(Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var))->___initialized_2;
				if (L_4)
				{
					goto IL_0021_1;
				}
			}
			{
				V_2 = (bool)0;
				goto IL_0042;
			}

IL_0021_1:
			{
				RuntimeObject* L_5 = ___0_node;
				NullCheck(L_5);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				il2cpp_codegen_runtime_class_init_inline(Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var);
				List_1_tDD6E1C9A706EDC9B52011559C08EE6DB5044D953* L_6 = ((Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_StaticFields*)il2cpp_codegen_static_fields_for(Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var))->___nodes_5;
				RuntimeObject* L_7 = ___0_node;
				NullCheck(L_6);
				bool L_8;
				L_8 = List_1_Remove_m71D00A3CB381B1DFE493596596AEA6E2FBF85750(L_6, L_7, List_1_Remove_m71D00A3CB381B1DFE493596596AEA6E2FBF85750_RuntimeMethod_var);
				V_2 = L_8;
				goto IL_0042;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0042:
	{
		bool L_9 = V_2;
		return L_9;
	}
}
// System.Void ROS2.Ros2cs::Spin(ROS2.INode,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ros2cs_Spin_mCA20FECE067A33965FA0AAF4BCED065167B7CCC1 (RuntimeObject* ___0_node, double ___1_timeoutSec, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m777C47D3E9AEC62DC26C78FF09B7AEE3A3705DB0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m9245ADF5113E1C633538F94C98894CAAE7B96C31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDD6E1C9A706EDC9B52011559C08EE6DB5044D953_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tDD6E1C9A706EDC9B52011559C08EE6DB5044D953* V_0 = NULL;
	List_1_tDD6E1C9A706EDC9B52011559C08EE6DB5044D953* V_1 = NULL;
	{
		List_1_tDD6E1C9A706EDC9B52011559C08EE6DB5044D953* L_0 = (List_1_tDD6E1C9A706EDC9B52011559C08EE6DB5044D953*)il2cpp_codegen_object_new(List_1_tDD6E1C9A706EDC9B52011559C08EE6DB5044D953_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m9245ADF5113E1C633538F94C98894CAAE7B96C31(L_0, List_1__ctor_m9245ADF5113E1C633538F94C98894CAAE7B96C31_RuntimeMethod_var);
		V_1 = L_0;
		List_1_tDD6E1C9A706EDC9B52011559C08EE6DB5044D953* L_1 = V_1;
		RuntimeObject* L_2 = ___0_node;
		NullCheck(L_1);
		List_1_Add_m777C47D3E9AEC62DC26C78FF09B7AEE3A3705DB0_inline(L_1, L_2, List_1_Add_m777C47D3E9AEC62DC26C78FF09B7AEE3A3705DB0_RuntimeMethod_var);
		List_1_tDD6E1C9A706EDC9B52011559C08EE6DB5044D953* L_3 = V_1;
		V_0 = L_3;
		List_1_tDD6E1C9A706EDC9B52011559C08EE6DB5044D953* L_4 = V_0;
		double L_5 = ___1_timeoutSec;
		il2cpp_codegen_runtime_class_init_inline(Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var);
		Ros2cs_Spin_m9FFBBF14D708D41FB3C8672E92D16CBA2EF2289B(L_4, L_5, NULL);
		return;
	}
}
// System.Void ROS2.Ros2cs::Spin(System.Collections.Generic.List`1<ROS2.INode>,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ros2cs_Spin_m9FFBBF14D708D41FB3C8672E92D16CBA2EF2289B (List_1_tDD6E1C9A706EDC9B52011559C08EE6DB5044D953* ___0_nodes, double ___1_timeoutSec, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_000c;
	}

IL_0005:
	{
		List_1_tDD6E1C9A706EDC9B52011559C08EE6DB5044D953* L_0 = ___0_nodes;
		double L_1 = ___1_timeoutSec;
		il2cpp_codegen_runtime_class_init_inline(Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var);
		Ros2cs_SpinOnce_mEF0341A878C8300783FDFEED687F2C657C60112D(L_0, L_1, NULL);
	}

IL_000c:
	{
		il2cpp_codegen_runtime_class_init_inline(Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var);
		bool L_2 = ((Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_StaticFields*)il2cpp_codegen_static_fields_for(Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var))->___initialized_2;
		if (L_2)
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
// System.Void ROS2.Ros2cs::SpinOnce(ROS2.INode,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ros2cs_SpinOnce_mCA5BD018C7010D187CDCC39869AC3B4C88302D7C (RuntimeObject* ___0_node, double ___1_timeoutSec, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m777C47D3E9AEC62DC26C78FF09B7AEE3A3705DB0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m9245ADF5113E1C633538F94C98894CAAE7B96C31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDD6E1C9A706EDC9B52011559C08EE6DB5044D953_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tDD6E1C9A706EDC9B52011559C08EE6DB5044D953* V_0 = NULL;
	List_1_tDD6E1C9A706EDC9B52011559C08EE6DB5044D953* V_1 = NULL;
	{
		List_1_tDD6E1C9A706EDC9B52011559C08EE6DB5044D953* L_0 = (List_1_tDD6E1C9A706EDC9B52011559C08EE6DB5044D953*)il2cpp_codegen_object_new(List_1_tDD6E1C9A706EDC9B52011559C08EE6DB5044D953_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m9245ADF5113E1C633538F94C98894CAAE7B96C31(L_0, List_1__ctor_m9245ADF5113E1C633538F94C98894CAAE7B96C31_RuntimeMethod_var);
		V_1 = L_0;
		List_1_tDD6E1C9A706EDC9B52011559C08EE6DB5044D953* L_1 = V_1;
		RuntimeObject* L_2 = ___0_node;
		NullCheck(L_1);
		List_1_Add_m777C47D3E9AEC62DC26C78FF09B7AEE3A3705DB0_inline(L_1, L_2, List_1_Add_m777C47D3E9AEC62DC26C78FF09B7AEE3A3705DB0_RuntimeMethod_var);
		List_1_tDD6E1C9A706EDC9B52011559C08EE6DB5044D953* L_3 = V_1;
		V_0 = L_3;
		List_1_tDD6E1C9A706EDC9B52011559C08EE6DB5044D953* L_4 = V_0;
		double L_5 = ___1_timeoutSec;
		il2cpp_codegen_runtime_class_init_inline(Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var);
		Ros2cs_SpinOnce_mEF0341A878C8300783FDFEED687F2C657C60112D(L_4, L_5, NULL);
		return;
	}
}
// System.Void ROS2.Ros2cs::SpinOnce(System.Collections.Generic.List`1<ROS2.INode>,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ros2cs_SpinOnce_mEF0341A878C8300783FDFEED687F2C657C60112D (List_1_tDD6E1C9A706EDC9B52011559C08EE6DB5044D953* ___0_nodes, double ___1_timeoutSec, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m2049E8ADCBDFF0C3A5923266E34854C17641E422_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD8E9CE1E37A3643B72B8196FAD9743E0A96F4CF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m2A8BC35161E48CCDE8D7C310269082ACD4A85794_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m55015920D75F6C3F975BA20AB217EB351A55CC76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m029D491365B735630C632DDE207AE18F496B4FCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m08C50BB63F4AEB02BE425F1AC5A03ADBCB32831F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubscriptionBase_tCD95FBCE3C6D4C86D95DEEA874AA4E01F914834D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF9B2D81207551005D9C14E334D82D0EA90831B53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mB772E9A11089BC01C355EBDB0DC4E27E08CD0182_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mF36FA17864321D4079BA826AD75B968F183F7662_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m78AA1AFFC92FF7B376A3F4C52040342CB0E0483C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0B869009E71D4485E120F9AC81AE38A128A6EF9F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Node_t091203BA7C12AC4C2074891D81689DD9EC725A0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitSet_tDE990309F026898B61B8C38ADEACEB84BABD94A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	List_1_t0B869009E71D4485E120F9AC81AE38A128A6EF9F* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Enumerator_tE4970469CF181052A9B4F9A0784FD2B70EE25314 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Node_t091203BA7C12AC4C2074891D81689DD9EC725A0D* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Enumerator_t62EAD83F8CBB42DDEBDF46D3836DE26146A3F0CA V_7;
	memset((&V_7), 0, sizeof(V_7));
	RuntimeObject* V_8 = NULL;
	Enumerator_t62EAD83F8CBB42DDEBDF46D3836DE26146A3F0CA V_9;
	memset((&V_9), 0, sizeof(V_9));
	{
		il2cpp_codegen_runtime_class_init_inline(Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_StaticFields*)il2cpp_codegen_static_fields_for(Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var))->___mutex_1;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0109:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0112;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0112:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				il2cpp_codegen_runtime_class_init_inline(Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var);
				bool L_4 = ((Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_StaticFields*)il2cpp_codegen_static_fields_for(Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var))->___initialized_2;
				if (L_4)
				{
					goto IL_001f_1;
				}
			}
			{
				goto IL_0113;
			}

IL_001f_1:
			{
				List_1_t0B869009E71D4485E120F9AC81AE38A128A6EF9F* L_5 = (List_1_t0B869009E71D4485E120F9AC81AE38A128A6EF9F*)il2cpp_codegen_object_new(List_1_t0B869009E71D4485E120F9AC81AE38A128A6EF9F_il2cpp_TypeInfo_var);
				NullCheck(L_5);
				List_1__ctor_m78AA1AFFC92FF7B376A3F4C52040342CB0E0483C(L_5, List_1__ctor_m78AA1AFFC92FF7B376A3F4C52040342CB0E0483C_RuntimeMethod_var);
				V_2 = L_5;
				List_1_tDD6E1C9A706EDC9B52011559C08EE6DB5044D953* L_6 = ___0_nodes;
				NullCheck(L_6);
				Enumerator_tE4970469CF181052A9B4F9A0784FD2B70EE25314 L_7;
				L_7 = List_1_GetEnumerator_mB772E9A11089BC01C355EBDB0DC4E27E08CD0182(L_6, List_1_GetEnumerator_mB772E9A11089BC01C355EBDB0DC4E27E08CD0182_RuntimeMethod_var);
				V_4 = L_7;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00ae_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_m2049E8ADCBDFF0C3A5923266E34854C17641E422((&V_4), Enumerator_Dispose_m2049E8ADCBDFF0C3A5923266E34854C17641E422_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_009d_2;
					}

IL_0032_2:
					{
						RuntimeObject* L_8;
						L_8 = Enumerator_get_Current_m029D491365B735630C632DDE207AE18F496B4FCC_inline((&V_4), Enumerator_get_Current_m029D491365B735630C632DDE207AE18F496B4FCC_RuntimeMethod_var);
						V_3 = L_8;
						RuntimeObject* L_9 = V_3;
						V_5 = ((Node_t091203BA7C12AC4C2074891D81689DD9EC725A0D*)IsInstClass((RuntimeObject*)L_9, Node_t091203BA7C12AC4C2074891D81689DD9EC725A0D_il2cpp_TypeInfo_var));
						Node_t091203BA7C12AC4C2074891D81689DD9EC725A0D* L_10 = V_5;
						if (L_10)
						{
							goto IL_004e_2;
						}
					}
					{
						goto IL_009d_2;
					}

IL_004e_2:
					{
						Node_t091203BA7C12AC4C2074891D81689DD9EC725A0D* L_11 = V_5;
						NullCheck(L_11);
						List_1_t0B869009E71D4485E120F9AC81AE38A128A6EF9F* L_12;
						L_12 = Node_get_Subscriptions_mE8CB73008BF0BE009E3FF5912C54837F2E079492(L_11, NULL);
						NullCheck(L_12);
						Enumerator_t62EAD83F8CBB42DDEBDF46D3836DE26146A3F0CA L_13;
						L_13 = List_1_GetEnumerator_mF36FA17864321D4079BA826AD75B968F183F7662(L_12, List_1_GetEnumerator_mF36FA17864321D4079BA826AD75B968F183F7662_RuntimeMethod_var);
						V_7 = L_13;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_008f_2:
							{// begin finally (depth: 3)
								Enumerator_Dispose_mD8E9CE1E37A3643B72B8196FAD9743E0A96F4CF8((&V_7), Enumerator_Dispose_mD8E9CE1E37A3643B72B8196FAD9743E0A96F4CF8_RuntimeMethod_var);
								return;
							}// end finally (depth: 3)
						});
						try
						{// begin try (depth: 3)
							{
								goto IL_007e_3;
							}

IL_0061_3:
							{
								RuntimeObject* L_14;
								L_14 = Enumerator_get_Current_m08C50BB63F4AEB02BE425F1AC5A03ADBCB32831F_inline((&V_7), Enumerator_get_Current_m08C50BB63F4AEB02BE425F1AC5A03ADBCB32831F_RuntimeMethod_var);
								V_6 = L_14;
								RuntimeObject* L_15 = V_6;
								if (L_15)
								{
									goto IL_0076_3;
								}
							}
							{
								goto IL_007e_3;
							}

IL_0076_3:
							{
								List_1_t0B869009E71D4485E120F9AC81AE38A128A6EF9F* L_16 = V_2;
								RuntimeObject* L_17 = V_6;
								NullCheck(L_16);
								List_1_Add_mF9B2D81207551005D9C14E334D82D0EA90831B53_inline(L_16, L_17, List_1_Add_mF9B2D81207551005D9C14E334D82D0EA90831B53_RuntimeMethod_var);
							}

IL_007e_3:
							{
								bool L_18;
								L_18 = Enumerator_MoveNext_m55015920D75F6C3F975BA20AB217EB351A55CC76((&V_7), Enumerator_MoveNext_m55015920D75F6C3F975BA20AB217EB351A55CC76_RuntimeMethod_var);
								if (L_18)
								{
									goto IL_0061_3;
								}
							}
							{
								goto IL_009d_2;
							}
						}// end try (depth: 3)
						catch(Il2CppExceptionWrapper& e)
						{
							__finallyBlock.StoreException(e.ex);
						}
					}

IL_009d_2:
					{
						bool L_19;
						L_19 = Enumerator_MoveNext_m2A8BC35161E48CCDE8D7C310269082ACD4A85794((&V_4), Enumerator_MoveNext_m2A8BC35161E48CCDE8D7C310269082ACD4A85794_RuntimeMethod_var);
						if (L_19)
						{
							goto IL_0032_2;
						}
					}
					{
						goto IL_00bc_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_00bc_1:
			{
				il2cpp_codegen_runtime_class_init_inline(Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var);
				rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C L_20 = ((Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_StaticFields*)il2cpp_codegen_static_fields_for(Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var))->___global_context_3;
				List_1_t0B869009E71D4485E120F9AC81AE38A128A6EF9F* L_21 = V_2;
				double L_22 = ___1_timeoutSec;
				il2cpp_codegen_runtime_class_init_inline(WaitSet_tDE990309F026898B61B8C38ADEACEB84BABD94A7_il2cpp_TypeInfo_var);
				WaitSet_Wait_mC1125CDBCA3628A40ED64B851D70E9013C594858(L_20, L_21, L_22, NULL);
				List_1_t0B869009E71D4485E120F9AC81AE38A128A6EF9F* L_23 = V_2;
				NullCheck(L_23);
				Enumerator_t62EAD83F8CBB42DDEBDF46D3836DE26146A3F0CA L_24;
				L_24 = List_1_GetEnumerator_mF36FA17864321D4079BA826AD75B968F183F7662(L_23, List_1_GetEnumerator_mF36FA17864321D4079BA826AD75B968F183F7662_RuntimeMethod_var);
				V_9 = L_24;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00f6_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_mD8E9CE1E37A3643B72B8196FAD9743E0A96F4CF8((&V_9), Enumerator_Dispose_mD8E9CE1E37A3643B72B8196FAD9743E0A96F4CF8_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_00e5_2;
					}

IL_00d5_2:
					{
						RuntimeObject* L_25;
						L_25 = Enumerator_get_Current_m08C50BB63F4AEB02BE425F1AC5A03ADBCB32831F_inline((&V_9), Enumerator_get_Current_m08C50BB63F4AEB02BE425F1AC5A03ADBCB32831F_RuntimeMethod_var);
						V_8 = L_25;
						RuntimeObject* L_26 = V_8;
						NullCheck(L_26);
						InterfaceActionInvoker0::Invoke(0 /* System.Void ROS2.ISubscriptionBase::TakeMessage() */, ISubscriptionBase_tCD95FBCE3C6D4C86D95DEEA874AA4E01F914834D_il2cpp_TypeInfo_var, L_26);
					}

IL_00e5_2:
					{
						bool L_27;
						L_27 = Enumerator_MoveNext_m55015920D75F6C3F975BA20AB217EB351A55CC76((&V_9), Enumerator_MoveNext_m55015920D75F6C3F975BA20AB217EB351A55CC76_RuntimeMethod_var);
						if (L_27)
						{
							goto IL_00d5_2;
						}
					}
					{
						goto IL_0104_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0104_1:
			{
				goto IL_0113;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0113:
	{
		return;
	}
}
// System.Void ROS2.Ros2cs::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ros2cs__cctor_m1A864E175616216B5017FA616C15C62D85EE38F5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Destructor_t4467F647BC993F066B784EC268EFE0CBFD451D78_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m9245ADF5113E1C633538F94C98894CAAE7B96C31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDD6E1C9A706EDC9B52011559C08EE6DB5044D953_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Destructor_t4467F647BC993F066B784EC268EFE0CBFD451D78* L_0 = (Destructor_t4467F647BC993F066B784EC268EFE0CBFD451D78*)il2cpp_codegen_object_new(Destructor_t4467F647BC993F066B784EC268EFE0CBFD451D78_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Destructor__ctor_mD243064E083C8E8D3CF643EFB77CD9B875DCDB73(L_0, NULL);
		((Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_StaticFields*)il2cpp_codegen_static_fields_for(Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var))->___destructor_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_StaticFields*)il2cpp_codegen_static_fields_for(Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var))->___destructor_0), (void*)L_0);
		RuntimeObject* L_1 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_1, NULL);
		((Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_StaticFields*)il2cpp_codegen_static_fields_for(Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var))->___mutex_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_StaticFields*)il2cpp_codegen_static_fields_for(Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var))->___mutex_1), (void*)L_1);
		((Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_StaticFields*)il2cpp_codegen_static_fields_for(Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var))->___initialized_2 = (bool)0;
		List_1_tDD6E1C9A706EDC9B52011559C08EE6DB5044D953* L_2 = (List_1_tDD6E1C9A706EDC9B52011559C08EE6DB5044D953*)il2cpp_codegen_object_new(List_1_tDD6E1C9A706EDC9B52011559C08EE6DB5044D953_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m9245ADF5113E1C633538F94C98894CAAE7B96C31(L_2, List_1__ctor_m9245ADF5113E1C633538F94C98894CAAE7B96C31_RuntimeMethod_var);
		((Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_StaticFields*)il2cpp_codegen_static_fields_for(Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var))->___nodes_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_StaticFields*)il2cpp_codegen_static_fields_for(Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var))->___nodes_5), (void*)L_2);
		((Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_StaticFields*)il2cpp_codegen_static_fields_for(Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var))->___warned_once_6 = (bool)0;
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
// System.Void ROS2.Ros2cs/Destructor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Destructor__ctor_mD243064E083C8E8D3CF643EFB77CD9B875DCDB73 (Destructor_t4467F647BC993F066B784EC268EFE0CBFD451D78* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void ROS2.Ros2cs/Destructor::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Destructor_Finalize_m903FB37D8E6B85F5D1695DE3E38F10C34F4A597F (Destructor_t4467F647BC993F066B784EC268EFE0CBFD451D78* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF849C1BE82D457A51F5123F268B49E5CCECA2D7);
		s_Il2CppMethodInitialized = true;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0029:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			il2cpp_codegen_runtime_class_init_inline(Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_il2cpp_TypeInfo_var);
			Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D* L_0;
			L_0 = Ros2csLogger_GetInstance_m1E6254F517D7424C914CDD20035721DD2A7E9C3B(NULL);
			NullCheck(L_0);
			Ros2csLogger_LogInfo_mB16EAA697EAC0CB85D40761A18AC6B3023DCCD65(L_0, _stringLiteralFF849C1BE82D457A51F5123F268B49E5CCECA2D7, NULL);
			il2cpp_codegen_runtime_class_init_inline(Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var);
			Ros2cs_Shutdown_mC6D21423F0C5ABF86E21EFFD2F858B35DCF429AA(NULL);
			il2cpp_codegen_runtime_class_init_inline(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var);
			ContextFiniType_tDE6339FF3B53ECB6B5F180CA0660BE5C0770793F* L_1 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_context_fini_9;
			NullCheck(L_1);
			int32_t L_2;
			L_2 = ContextFiniType_Invoke_mF3D3B7CDAAC699F416FFECA74785DDF3D27ED525_inline(L_1, (&((Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_StaticFields*)il2cpp_codegen_static_fields_for(Ros2cs_t16218FABEE7CF4322F5DA08B41E6A8D22A0D840F_il2cpp_TypeInfo_var))->___global_context_3), NULL);
			goto IL_0030;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0030:
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
// System.Void ROS2.WaitSet::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitSet__cctor_m6EF08F666256103CE64A162364D9AAF3565338FB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitSet_tDE990309F026898B61B8C38ADEACEB84BABD94A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var);
		RclGetDefaultAllocatorType_t3073FF12B8067D85A753E0AED56D25D05214A994* L_0 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcutils_get_default_allocator_32;
		NullCheck(L_0);
		rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831 L_1;
		L_1 = RclGetDefaultAllocatorType_Invoke_m41CECCE737A7F68EADC9033A4463964A4E585096_inline(L_0, NULL);
		((WaitSet_tDE990309F026898B61B8C38ADEACEB84BABD94A7_StaticFields*)il2cpp_codegen_static_fields_for(WaitSet_tDE990309F026898B61B8C38ADEACEB84BABD94A7_il2cpp_TypeInfo_var))->___allocator_0 = L_1;
		GetZeroInitializedWaitSetType_t6399F00A6BBAE1E21B97BDCF19BD380C1D53C9CC* L_2 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_get_zero_initialized_wait_set_25;
		NullCheck(L_2);
		rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100 L_3;
		L_3 = GetZeroInitializedWaitSetType_Invoke_mD8C5981A1D566582BCF6BC81F4633B86C1BA5608_inline(L_2, NULL);
		((WaitSet_tDE990309F026898B61B8C38ADEACEB84BABD94A7_StaticFields*)il2cpp_codegen_static_fields_for(WaitSet_tDE990309F026898B61B8C38ADEACEB84BABD94A7_il2cpp_TypeInfo_var))->___handle_1 = L_3;
		return;
	}
}
// System.Void ROS2.WaitSet::Wait(ROS2.rcl_context_t,System.Collections.Generic.List`1<ROS2.ISubscriptionBase>,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitSet_Wait_mC1125CDBCA3628A40ED64B851D70E9013C594858 (rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C ___0_context, List_1_t0B869009E71D4485E120F9AC81AE38A128A6EF9F* ___1_subscriptions, double ___2_timeoutSec, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD8E9CE1E37A3643B72B8196FAD9743E0A96F4CF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m55015920D75F6C3F975BA20AB217EB351A55CC76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m08C50BB63F4AEB02BE425F1AC5A03ADBCB32831F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IExtendedDisposable_t0D96DD735C20E2A96F22167FB12B710D6C92843E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubscriptionBase_tCD95FBCE3C6D4C86D95DEEA874AA4E01F914834D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mF36FA17864321D4079BA826AD75B968F183F7662_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mA4C4836FB546B25F21A978B1DA393120962C4B81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitSet_tDE990309F026898B61B8C38ADEACEB84BABD94A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	RuntimeObject* V_7 = NULL;
	Enumerator_t62EAD83F8CBB42DDEBDF46D3836DE26146A3F0CA V_8;
	memset((&V_8), 0, sizeof(V_8));
	RuntimeObject* V_9 = NULL;
	RuntimeObject* V_10 = NULL;
	bool V_11 = false;
	rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD V_12;
	memset((&V_12), 0, sizeof(V_12));
	uint64_t V_13 = 0;
	int32_t V_14 = 0;
	{
		List_1_t0B869009E71D4485E120F9AC81AE38A128A6EF9F* L_0 = ___1_subscriptions;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mA4C4836FB546B25F21A978B1DA393120962C4B81_inline(L_0, List_1_get_Count_mA4C4836FB546B25F21A978B1DA393120962C4B81_RuntimeMethod_var);
		V_0 = ((int64_t)L_1);
		uint64_t L_2 = V_0;
		if ((!(((uint64_t)L_2) == ((uint64_t)((int64_t)0)))))
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		V_1 = ((int64_t)0);
		V_2 = ((int64_t)0);
		V_3 = ((int64_t)0);
		V_4 = ((int64_t)0);
		V_5 = ((int64_t)0);
		il2cpp_codegen_runtime_class_init_inline(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var);
		WaitSetInitType_t87E1D05131F194FAB01E72C1A03A0A2538C411AA* L_3 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_wait_set_init_26;
		il2cpp_codegen_runtime_class_init_inline(WaitSet_tDE990309F026898B61B8C38ADEACEB84BABD94A7_il2cpp_TypeInfo_var);
		uint64_t L_4 = V_0;
		uint64_t L_5 = V_1;
		uint64_t L_6 = V_2;
		uint64_t L_7 = V_3;
		uint64_t L_8 = V_4;
		uint64_t L_9 = V_5;
		rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831 L_10 = ((WaitSet_tDE990309F026898B61B8C38ADEACEB84BABD94A7_StaticFields*)il2cpp_codegen_static_fields_for(WaitSet_tDE990309F026898B61B8C38ADEACEB84BABD94A7_il2cpp_TypeInfo_var))->___allocator_0;
		NullCheck(L_3);
		int32_t L_11;
		L_11 = WaitSetInitType_Invoke_mFC58972C6405B961C2D4940FFD3AAC195163606A_inline(L_3, (&((WaitSet_tDE990309F026898B61B8C38ADEACEB84BABD94A7_StaticFields*)il2cpp_codegen_static_fields_for(WaitSet_tDE990309F026898B61B8C38ADEACEB84BABD94A7_il2cpp_TypeInfo_var))->___handle_1), L_4, L_5, L_6, L_7, L_8, L_9, (&___0_context), L_10, NULL);
		Utils_CheckReturnEnum_m4F3CDB4D1DD633F528BFD99D5A245210AD36EF5E(L_11, NULL);
		WaitSetClearType_t86E1B05E31A40014E169F1C9624369F6A48ADA80* L_12 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_wait_set_clear_28;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = WaitSetClearType_Invoke_m818BAE5F8DB2F99D6F09BE7029C71F2B4793D9B2_inline(L_12, (&((WaitSet_tDE990309F026898B61B8C38ADEACEB84BABD94A7_StaticFields*)il2cpp_codegen_static_fields_for(WaitSet_tDE990309F026898B61B8C38ADEACEB84BABD94A7_il2cpp_TypeInfo_var))->___handle_1), NULL);
		Utils_CheckReturnEnum_m4F3CDB4D1DD633F528BFD99D5A245210AD36EF5E(L_13, NULL);
		V_6 = ((int64_t)0);
		List_1_t0B869009E71D4485E120F9AC81AE38A128A6EF9F* L_14 = ___1_subscriptions;
		NullCheck(L_14);
		Enumerator_t62EAD83F8CBB42DDEBDF46D3836DE26146A3F0CA L_15;
		L_15 = List_1_GetEnumerator_mF36FA17864321D4079BA826AD75B968F183F7662(L_14, List_1_GetEnumerator_mF36FA17864321D4079BA826AD75B968F183F7662_RuntimeMethod_var);
		V_8 = L_15;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00f7:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mD8E9CE1E37A3643B72B8196FAD9743E0A96F4CF8((&V_8), Enumerator_Dispose_mD8E9CE1E37A3643B72B8196FAD9743E0A96F4CF8_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00e6_1;
			}

IL_006a_1:
			{
				RuntimeObject* L_16;
				L_16 = Enumerator_get_Current_m08C50BB63F4AEB02BE425F1AC5A03ADBCB32831F_inline((&V_8), Enumerator_get_Current_m08C50BB63F4AEB02BE425F1AC5A03ADBCB32831F_RuntimeMethod_var);
				V_7 = L_16;
				uint64_t L_17 = V_6;
				uint64_t L_18 = V_0;
				if ((!(((uint64_t)L_17) >= ((uint64_t)L_18))))
				{
					goto IL_0080_1;
				}
			}
			{
				goto IL_00f2_1;
			}

IL_0080_1:
			{
				RuntimeObject* L_19 = V_7;
				NullCheck(L_19);
				RuntimeObject* L_20;
				L_20 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Object ROS2.ISubscriptionBase::get_Mutex() */, ISubscriptionBase_tCD95FBCE3C6D4C86D95DEEA874AA4E01F914834D_il2cpp_TypeInfo_var, L_19);
				V_9 = L_20;
				RuntimeObject* L_21 = V_9;
				V_10 = L_21;
				V_11 = (bool)0;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00d3_1:
					{// begin finally (depth: 2)
						{
							bool L_22 = V_11;
							if (!L_22)
							{
								goto IL_00de_1;
							}
						}
						{
							RuntimeObject* L_23 = V_10;
							Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_23, NULL);
						}

IL_00de_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						RuntimeObject* L_24 = V_10;
						Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_24, (&V_11), NULL);
						RuntimeObject* L_25 = V_7;
						NullCheck(L_25);
						bool L_26;
						L_26 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean ROS2.IExtendedDisposable::get_IsDisposed() */, IExtendedDisposable_t0D96DD735C20E2A96F22167FB12B710D6C92843E_il2cpp_TypeInfo_var, L_25);
						if (!L_26)
						{
							goto IL_00aa_2;
						}
					}
					{
						goto IL_00e6_1;
					}

IL_00aa_2:
					{
						RuntimeObject* L_27 = V_7;
						NullCheck(L_27);
						rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD L_28;
						L_28 = InterfaceFuncInvoker0< rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD >::Invoke(2 /* ROS2.rcl_subscription_t ROS2.ISubscriptionBase::get_Handle() */, ISubscriptionBase_tCD95FBCE3C6D4C86D95DEEA874AA4E01F914834D_il2cpp_TypeInfo_var, L_27);
						V_12 = L_28;
						il2cpp_codegen_runtime_class_init_inline(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var);
						WaitSetAddSubscriptionType_tB952F7946A7A06C27D970D1F8A28089434E2F4B4* L_29 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_wait_set_add_subscription_29;
						il2cpp_codegen_runtime_class_init_inline(WaitSet_tDE990309F026898B61B8C38ADEACEB84BABD94A7_il2cpp_TypeInfo_var);
						il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
						uintptr_t L_30 = ((UIntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(UIntPtr_t_il2cpp_TypeInfo_var))->___Zero_0;
						NullCheck(L_29);
						int32_t L_31;
						L_31 = WaitSetAddSubscriptionType_Invoke_mA77D86858C855053761227229392939A597DB410_inline(L_29, (&((WaitSet_tDE990309F026898B61B8C38ADEACEB84BABD94A7_StaticFields*)il2cpp_codegen_static_fields_for(WaitSet_tDE990309F026898B61B8C38ADEACEB84BABD94A7_il2cpp_TypeInfo_var))->___handle_1), (&V_12), L_30, NULL);
						Utils_CheckReturnEnum_m4F3CDB4D1DD633F528BFD99D5A245210AD36EF5E(L_31, NULL);
						goto IL_00df_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_00df_1:
			{
				uint64_t L_32 = V_6;
				V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_32, ((int64_t)1)));
			}

IL_00e6_1:
			{
				bool L_33;
				L_33 = Enumerator_MoveNext_m55015920D75F6C3F975BA20AB217EB351A55CC76((&V_8), Enumerator_MoveNext_m55015920D75F6C3F975BA20AB217EB351A55CC76_RuntimeMethod_var);
				if (L_33)
				{
					goto IL_006a_1;
				}
			}

IL_00f2_1:
			{
				goto IL_0105;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0105:
	{
		double L_34 = ___2_timeoutSec;
		V_13 = il2cpp_codegen_cast_floating_point<uint64_t, int64_t, double>(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(L_34, (1000.0))), (1000.0))), (1000.0))));
		il2cpp_codegen_runtime_class_init_inline(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var);
		WaitType_t835E7382D2E046BD4590666AF95A16BFA8C85E01* L_35 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_wait_30;
		il2cpp_codegen_runtime_class_init_inline(WaitSet_tDE990309F026898B61B8C38ADEACEB84BABD94A7_il2cpp_TypeInfo_var);
		uint64_t L_36 = V_13;
		NullCheck(L_35);
		int32_t L_37;
		L_37 = WaitType_Invoke_mF1701861B4823AEEAAD6DDCBAE32A4FE9DB3334A_inline(L_35, (&((WaitSet_tDE990309F026898B61B8C38ADEACEB84BABD94A7_StaticFields*)il2cpp_codegen_static_fields_for(WaitSet_tDE990309F026898B61B8C38ADEACEB84BABD94A7_il2cpp_TypeInfo_var))->___handle_1), L_36, NULL);
		V_14 = L_37;
		int32_t L_38 = V_14;
		if (!L_38)
		{
			goto IL_0150;
		}
	}
	{
		int32_t L_39 = V_14;
		if ((((int32_t)L_39) == ((int32_t)2)))
		{
			goto IL_0150;
		}
	}
	{
		int32_t L_40 = V_14;
		Utils_CheckReturnEnum_m4F3CDB4D1DD633F528BFD99D5A245210AD36EF5E(L_40, NULL);
	}

IL_0150:
	{
		il2cpp_codegen_runtime_class_init_inline(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var);
		WatiSetFiniType_tA3F438CE346815BF7ACA429F3EA9DB3556560FCC* L_41 = ((NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_StaticFields*)il2cpp_codegen_static_fields_for(NativeRcl_t7CD71C3C78C928054685DA5D9D962FAB0D946FC3_il2cpp_TypeInfo_var))->___rcl_wait_set_fini_27;
		il2cpp_codegen_runtime_class_init_inline(WaitSet_tDE990309F026898B61B8C38ADEACEB84BABD94A7_il2cpp_TypeInfo_var);
		NullCheck(L_41);
		int32_t L_42;
		L_42 = WatiSetFiniType_Invoke_m26EFD42CC7F1B0A4D17869E521AFA2B15977A8CC_inline(L_41, (&((WaitSet_tDE990309F026898B61B8C38ADEACEB84BABD94A7_StaticFields*)il2cpp_codegen_static_fields_for(WaitSet_tDE990309F026898B61B8C38ADEACEB84BABD94A7_il2cpp_TypeInfo_var))->___handle_1), NULL);
		Utils_CheckReturnEnum_m4F3CDB4D1DD633F528BFD99D5A245210AD36EF5E(L_42, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t GetErrorStringType_Invoke_mF682DB2C6231B00B54FC6BE368456DFC81000DA6_inline (GetErrorStringType_t453607676A6C388E6CBFDFD75F799FDA836851DD* __this, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DisposeErrorStringType_Invoke_mEAB6DDBFAFCFE029EBCFDEEF35FB1C65038FD3C9_inline (DisposeErrorStringType_tB0EB5ABA8F09AB9C18BCB301CABC0010FA27C990* __this, intptr_t ___0_error_c_string, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_error_c_string, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ResetErrorType_Invoke_m4274612856ECEBA822B4AA2B15E7F75487C4713C_inline (ResetErrorType_t4D921B90107C97E83795A5C064D3691084BB81DC* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831 RclGetDefaultAllocatorType_Invoke_m41CECCE737A7F68EADC9033A4463964A4E585096_inline (RclGetDefaultAllocatorType_t3073FF12B8067D85A753E0AED56D25D05214A994* __this, const RuntimeMethod* method) 
{
	typedef rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831 (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t RclcsClockCreate_Invoke_mFD077B5620145E54382E184E765F442842D53B28_inline (RclcsClockCreate_t7DE4D8ACB9FFEBA0D5B88B58E6C8C5A91AF86C4B* __this, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831* ___0_allocator_handle, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_allocator_handle, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RclClockGetNow_Invoke_m00070791151C18FE1EB755A8E1C4400261330075_inline (RclClockGetNow_tE7C0124D0B68F9278C1BE9AA93083FBB57A442BD* __this, intptr_t ___0_ros_clock, int64_t* ___1_query_now, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int64_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_ros_clock, ___1_query_now, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RclcsClockDispose_Invoke_mB31FF352E25F02041B8C12B480B4AEA88827F56F_inline (RclcsClockDispose_tDE4246256AFCE3214E441466A84D08B4922CAE03* __this, intptr_t ___0_clock_handle, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_clock_handle, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4 GetZeroInitializedNodeType_Invoke_m4971529E411B1A334F39F9BA27EBCC9EEEC44349_inline (GetZeroInitializedNodeType_tB2B66F53C164F56418A2C83367AE26F42B8F4E92* __this, const RuntimeMethod* method) 
{
	typedef rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4 (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t NodeCreateDefaltOptionsType_Invoke_m03EC69F947909616A6137C575C5EED4EC3A3B0BA_inline (NodeCreateDefaltOptionsType_t694FBD8C3D7CA67B641200A83CB864C8FD58787E* __this, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NodeInitType_Invoke_mCD6B59F3B3FE2FB1353B8EA4DFA95066BBD629BD_inline (NodeInitType_t365D995BC724D5F7042E191CE9A4B13A5C3865C0* __this, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___0_node, String_t* ___1_name, String_t* ___2_node_namespace, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___3_context, intptr_t ___4_default_options, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4*, String_t*, String_t*, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_node, ___1_name, ___2_node_namespace, ___3_context, ___4_default_options, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NodeFiniType_Invoke_mA4955F10BF547445FEEF088F34F2B874823921E6_inline (NodeFiniType_tA1CDE02D8B40017868A11938E7CDE8B6DF56F210* __this, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4* ___0_node, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, rcl_node_t_t9F8CA7E58C8AB79CD77BA6AD847C12CC66592EE4*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_node, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NodeDisposeOptionsType_Invoke_m835EF8D0C527904297A9967E2B7FEB2184C3DE6E_inline (NodeDisposeOptionsType_t15BDDEA610F9F4D00AC15F76577DB21C03EAF5F7* __this, intptr_t ___0_options, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_options, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t RMWNativeCreateQoSProfileIdentifierType_Invoke_m719A1FA4411233308FBD0A52DD44DF51ADB12FA0_inline (RMWNativeCreateQoSProfileIdentifierType_t86C350418729D57B100F216E31911830AE25AA97* __this, int32_t ___0_preset_profile, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_preset_profile, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RMWNativeSetHistoryIdentifierType_Invoke_mD19165DA0A5836757CDE8E627683D5431B79D486_inline (RMWNativeSetHistoryIdentifierType_t438821C2B73F2BC4261752F5A9FF236255879D42* __this, intptr_t ___0_profile, int32_t ___1_mode, int32_t ___2_depth, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_profile, ___1_mode, ___2_depth, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RMWNativeSetReliabilityIdentifierType_Invoke_m0C867D84FBB2311D293FF704AE4E69BA487329FF_inline (RMWNativeSetReliabilityIdentifierType_tFE846BDE4F0A5F243647D947A73C2694378E19A5* __this, intptr_t ___0_profile, int32_t ___1_mode, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_profile, ___1_mode, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RMWNativeSetDurabilityIdentifierType_Invoke_m37BD9B13755DD7B4C13114176D323EAD0AE802E3_inline (RMWNativeSetDurabilityIdentifierType_tC20DAC0CC312A9DAEBC318C441BC8203EE4E0D14* __this, intptr_t ___0_profile, int32_t ___1_mode, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_profile, ___1_mode, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C GetZeroInitializedContextType_Invoke_m7072D60BE53253063BD08973B4317F9C57538D39_inline (GetZeroInitializedContextType_t04171F8770DA4190523F40E24D627320BEE692D6* __this, const RuntimeMethod* method) 
{
	typedef rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RCLCSInitType_Invoke_m0F244268FB97A1EC69BAE44FBD0BB9C201DF4E42_inline (RCLCSInitType_t98BFF379AE54A896A681209B70D41C4504AF733F* __this, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___0_context, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831 ___1_allocator, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C*, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_context, ___1_allocator, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t RMWImplementationIdentifier_Invoke_m2798432969B3FDB239028F2CCE63EA679D73EBD7_inline (RMWImplementationIdentifier_t7221E12FDDCCCC1D3CC320EDA66B945FA794AE37* __this, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ShutdownType_Invoke_mA18C5013CED464580638857F255A520DEDD59EFC_inline (ShutdownType_t4FB0976CC98794F41196FD3CC575CAC576F438CA* __this, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___0_context, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_context, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ContextIsValidType_Invoke_m27DC66426F72978C16FCB3F2281290538D1E02B8_inline (ContextIsValidType_t221B25824BF034AA390D02239F461440F4C6AFF9* __this, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___0_context, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_context, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ContextFiniType_Invoke_mF3D3B7CDAAC699F416FFECA74785DDF3D27ED525_inline (ContextFiniType_tDE6339FF3B53ECB6B5F180CA0660BE5C0770793F* __this, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___0_context, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_context, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100 GetZeroInitializedWaitSetType_Invoke_mD8C5981A1D566582BCF6BC81F4633B86C1BA5608_inline (GetZeroInitializedWaitSetType_t6399F00A6BBAE1E21B97BDCF19BD380C1D53C9CC* __this, const RuntimeMethod* method) 
{
	typedef rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100 (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WaitSetInitType_Invoke_mFC58972C6405B961C2D4940FFD3AAC195163606A_inline (WaitSetInitType_t87E1D05131F194FAB01E72C1A03A0A2538C411AA* __this, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100* ___0_wait_set, uint64_t ___1_number_of_subscriptions, uint64_t ___2_number_of_guard_conditions, uint64_t ___3_number_of_timers, uint64_t ___4_number_of_clients, uint64_t ___5_number_of_services, uint64_t ___6_number_of_events, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C* ___7_context, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831 ___8_allocator, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100*, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, rcl_context_t_t4A8A59148C4D71818FA75F3C6BEFB096C280265C*, rcl_allocator_t_t40D3622B7E96B8543C5B6B4D4EEB89FB05FDC831, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_wait_set, ___1_number_of_subscriptions, ___2_number_of_guard_conditions, ___3_number_of_timers, ___4_number_of_clients, ___5_number_of_services, ___6_number_of_events, ___7_context, ___8_allocator, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WaitSetClearType_Invoke_m818BAE5F8DB2F99D6F09BE7029C71F2B4793D9B2_inline (WaitSetClearType_t86E1B05E31A40014E169F1C9624369F6A48ADA80* __this, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100* ___0_wait_set, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_wait_set, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WaitSetAddSubscriptionType_Invoke_mA77D86858C855053761227229392939A597DB410_inline (WaitSetAddSubscriptionType_tB952F7946A7A06C27D970D1F8A28089434E2F4B4* __this, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100* ___0_wait_set, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD* ___1_subscription, uintptr_t ___2_index, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100*, rcl_subscription_t_t2A6FF3ED0B914A5AA6B0E2A05245C64268D5DDAD*, uintptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_wait_set, ___1_subscription, ___2_index, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WaitType_Invoke_mF1701861B4823AEEAAD6DDCBAE32A4FE9DB3334A_inline (WaitType_t835E7382D2E046BD4590666AF95A16BFA8C85E01* __this, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100* ___0_wait_set, uint64_t ___1_timeout, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100*, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_wait_set, ___1_timeout, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WatiSetFiniType_Invoke_m26EFD42CC7F1B0A4D17869E521AFA2B15977A8CC_inline (WatiSetFiniType_tA3F438CE346815BF7ACA429F3EA9DB3556560FCC* __this, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100* ___0_wait_set, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, rcl_wait_set_t_tF9E234E6C91C21C0D625B69B10C645DFB81B9100*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_wait_set, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = __this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items_1;
		V_0 = L_1;
		int32_t L_2 = __this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size_2;
		return L_0;
	}
}
