#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
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
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>
struct Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>
struct Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71;
// System.Collections.Generic.Dictionary`2<ROS2.LogLevel,System.ConsoleColor>
struct Dictionary_2_tE21EA2A24D6CB3091176D6974BBF38ACF8330303;
// System.Collections.Generic.Dictionary`2<ROS2.LogLevel,System.String>
struct Dictionary_2_tF4BD8E262191575AB12588F222EB1F74D30CC279;
// System.Collections.Generic.Dictionary`2<ROS2.LogLevel,ROS2.Ros2csLogger/Callback>
struct Dictionary_2_t2C711015AA5938D6B94F90272468FF95F25556E8;
// System.Collections.Generic.IEqualityComparer`1<ROS2.LogLevel>
struct IEqualityComparer_1_t5878CA3B99A3423B0D5E5D47FC2695930F34F809;
// System.Collections.Generic.Dictionary`2/KeyCollection<ROS2.LogLevel,System.ConsoleColor>
struct KeyCollection_t39151FC96970A8B1FD25FD1F81397F294419E792;
// System.Collections.Generic.Dictionary`2/KeyCollection<ROS2.LogLevel,System.String>
struct KeyCollection_tDE15FB3BE31D86D718B98BD57817829E5241FCC3;
// System.Collections.Generic.Dictionary`2/KeyCollection<ROS2.LogLevel,ROS2.Ros2csLogger/Callback>
struct KeyCollection_tFD90C8ED0D107B0056F9716948BF80B6D95C933E;
// System.Collections.Generic.Dictionary`2/ValueCollection<ROS2.LogLevel,System.ConsoleColor>
struct ValueCollection_tDD2DBFA1C0DD187C2ACE3DD48669EEA0B26BF0CB;
// System.Collections.Generic.Dictionary`2/ValueCollection<ROS2.LogLevel,System.String>
struct ValueCollection_t7992B342E117662A3E181DA13733B3FCC67F4DE4;
// System.Collections.Generic.Dictionary`2/ValueCollection<ROS2.LogLevel,ROS2.Ros2csLogger/Callback>
struct ValueCollection_tA3CF5BC300AB4DE7D707B3E2D7E4E2DB58CB285C;
// System.Collections.Generic.Dictionary`2/Entry<ROS2.LogLevel,System.ConsoleColor>[]
struct EntryU5BU5D_tC722B9909716C75271B0574ACFCCBA3C286445CF;
// System.Collections.Generic.Dictionary`2/Entry<ROS2.LogLevel,System.String>[]
struct EntryU5BU5D_t60E92E103E4D94433E949326F17EC696DDC5762B;
// System.Collections.Generic.Dictionary`2/Entry<ROS2.LogLevel,ROS2.Ros2csLogger/Callback>[]
struct EntryU5BU5D_t821EBEB9757E3E48C642B01E3239C5F7EDC14FCE;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// ROS2.Benchmark
struct Benchmark_tD02AA2D1CC80B5AA7C5998D00C91EACF340072A6;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// ROS2.DllLoadUtils
struct DllLoadUtils_t2E8EE2821E268C6E3C9C972C6FB48E9A5B6AD0E7;
// ROS2.DllLoadUtilsFactory
struct DllLoadUtilsFactory_tDFF5C7BA0017D8159A71ECFD917AEA3DB58FCF95;
// ROS2.DllLoadUtilsMacOSX
struct DllLoadUtilsMacOSX_tC6B691D5E65D6717F56414A7FA67000B83670CC5;
// ROS2.DllLoadUtilsUWP
struct DllLoadUtilsUWP_t09AF02A3CA60BC353EE69E22864BFB6C4FFF00A9;
// ROS2.DllLoadUtilsUnix
struct DllLoadUtilsUnix_tCAF2656F9FA3696C2E96C08EF84D415F06192EB9;
// ROS2.DllLoadUtilsWindowsDesktop
struct DllLoadUtilsWindowsDesktop_tD963BD6535E5C71C4DFA7C13DEB5904A34AEA0F0;
// System.Exception
struct Exception_t;
// ROS2.GlobalVariables
struct GlobalVariables_t3CBA016557FB31DD42A020D559A0D577B73146B1;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// ROS2.InvalidNamespaceException
struct InvalidNamespaceException_tD2E1A2EA479047BAD9F8E4FB4D794491CBF11993;
// ROS2.InvalidNodeNameException
struct InvalidNodeNameException_t2B3B398B7A2DD047EF775BD9E221D29EA06B6AE5;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// ROS2.NotInitializedException
struct NotInitializedException_t50A36E084A8A7B49F17EB63CEF13167336C53EAC;
// ROS2.Ros2csLogger
struct Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D;
// ROS2.RuntimeError
struct RuntimeError_t642B93B4680822C51EF8CA1B918CAA84E4BE375C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Diagnostics.Stopwatch
struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043;
// System.String
struct String_t;
// ROS2.UnknownPlatformError
struct UnknownPlatformError_t5DAF061D40628B97D1AA050E63C43CA9E36B027F;
// ROS2.UnsatisfiedLinkError
struct UnsatisfiedLinkError_t95D9C8F54A363978BA07F2488371B5A8F5581AF3;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// ROS2.WaitSetEmptyException
struct WaitSetEmptyException_tE65951081E09DFA7CC1E8FF9DFB3D547AD957EAB;
// ROS2.Ros2csLogger/Callback
struct Callback_tF1258F518E485A36439361A50245F89E59DAACE8;

IL2CPP_EXTERN_C RuntimeClass* Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t2C711015AA5938D6B94F90272468FF95F25556E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tE21EA2A24D6CB3091176D6974BBF38ACF8330303_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tF4BD8E262191575AB12588F222EB1F74D30CC279_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DllLoadUtilsMacOSX_tC6B691D5E65D6717F56414A7FA67000B83670CC5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DllLoadUtilsUWP_t09AF02A3CA60BC353EE69E22864BFB6C4FFF00A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DllLoadUtilsUnix_tCAF2656F9FA3696C2E96C08EF84D415F06192EB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DllLoadUtilsWindowsDesktop_tD963BD6535E5C71C4DFA7C13DEB5904A34AEA0F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GlobalVariables_t3CBA016557FB31DD42A020D559A0D577B73146B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeLoadException_t6333E3083F7BFF1A582969E6F67ACBA8B0035C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnknownPlatformError_t5DAF061D40628B97D1AA050E63C43CA9E36B027F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnsatisfiedLinkError_t95D9C8F54A363978BA07F2488371B5A8F5581AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0A104D015A90F9AC5C50E8ABB0FEEDEC8E32B0A4;
IL2CPP_EXTERN_C String_t* _stringLiteral10A105116F1400FFCE661E402C3C12DDCA0D688C;
IL2CPP_EXTERN_C String_t* _stringLiteral1168E92C164109D6220480DEDA987085B2A21155;
IL2CPP_EXTERN_C String_t* _stringLiteral13633BE53AFD750A8938C37773A9A66FDAD2A686;
IL2CPP_EXTERN_C String_t* _stringLiteral136C02AD3C58D35059D73A24D11B4E44CBD93D35;
IL2CPP_EXTERN_C String_t* _stringLiteral22EF9BD68EED1091D75509A86565D5CC33F395E4;
IL2CPP_EXTERN_C String_t* _stringLiteral2AAEF2ADD6C5746EBCFBEBC221DFABB61D2174AE;
IL2CPP_EXTERN_C String_t* _stringLiteral2BB232DB7EDC10532DFE5585E589BD132CE1C90A;
IL2CPP_EXTERN_C String_t* _stringLiteral398803902029A56CF0224A0A4E4E9A93C45A0BA9;
IL2CPP_EXTERN_C String_t* _stringLiteral420970FC857D0E541C788790F58AA66962B22CC8;
IL2CPP_EXTERN_C String_t* _stringLiteral44A2C30EE3C713B4D21FA53CE82508AA974EF69F;
IL2CPP_EXTERN_C String_t* _stringLiteral5C66974B4089AA23B1526AD01AF306524EBA1B59;
IL2CPP_EXTERN_C String_t* _stringLiteral72BEAD40626D332E9E48C02BCCE913FAD1416B50;
IL2CPP_EXTERN_C String_t* _stringLiteral822BBE2B166571D1198C9A5A09A2130F908AA3E7;
IL2CPP_EXTERN_C String_t* _stringLiteral8926D1F23A6193D098BE746937803D482B430E87;
IL2CPP_EXTERN_C String_t* _stringLiteral8BD8EBBF9AAADE3A1911E0372AF7DEEFC2B7800D;
IL2CPP_EXTERN_C String_t* _stringLiteralA774568E563D66749C6AE3C9ED661AA85D0B3956;
IL2CPP_EXTERN_C String_t* _stringLiteralB1FB128E8250FDC938418FE8568B1D0C8E456416;
IL2CPP_EXTERN_C String_t* _stringLiteralB46ABC1B04F6DDB759A2C890E7B803B83A74C73F;
IL2CPP_EXTERN_C String_t* _stringLiteralB4EBDA851FBD92CD334D8D8A0D8568128F8FB3A6;
IL2CPP_EXTERN_C String_t* _stringLiteralC098FA5E280EF8CE35E102539B58FD2EAFAB5CCA;
IL2CPP_EXTERN_C String_t* _stringLiteralC674A47F2CCAE15D7372B2A51A3EF72D9C5F1ECE;
IL2CPP_EXTERN_C String_t* _stringLiteralD6671AB681FCCDE604241BD0A83D624C05B26D44;
IL2CPP_EXTERN_C String_t* _stringLiteralD7AC4164735B55B69648987887BCC39417C8A9AB;
IL2CPP_EXTERN_C String_t* _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE39E570FD194883C0CD9FFC4CEFC53427C27F06E;
IL2CPP_EXTERN_C String_t* _stringLiteralEA008AB922F24BD7FF67A671D99943A377F6F35A;
IL2CPP_EXTERN_C String_t* _stringLiteralF1BE71E920B70B431E17F147C5CC565749839574;
IL2CPP_EXTERN_C String_t* _stringLiteralFD81936DC825E2D065E79C7A2EF1941AC3BCAC92;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m7F01CEF304F66C637623FBBB54B845AE0D6A1ED0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mDDEF807BF37E0AA97EBBDBEE693405FB19C0DCD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mF6DEB8B58171E92E5234DE8253418786ED6E07C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m226D41F3D5C8F8732B9DD08786ECFF60958CC809_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m48E82F061D2B81F7A63C56D8A9F4E41EB86F309D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m81AF07AB7B2CCA080F808145615A163D46BD823F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m0D19FD93C3CBAEEDAE323D628F7E297A1AB84E9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m3B86E685B91E647965777E7F3953C6F811917608_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m7A96F221C55D582E107C548C3F689DD793CB6F86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m1AD3599D5AC8313BA9B586F3BDC1FCB03532DC22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DllLoadUtilsFactory_GetDllLoadUtils_m8EB2D6E40DBF00ED8E25114CAABFFFCF16286775_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DllLoadUtilsMacOSX_GetProcAddress_m18B1BF6E6E988C53DF1277BA0332DD4352475877_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DllLoadUtilsMacOSX_LoadLibraryNoSuffix_m9B44E81F7BC1295A4F27FDBD0CC3250D95107216_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DllLoadUtilsMacOSX_LoadLibrary_mBE64FAEFDC423376C4DAA9BCA9302CA0C87115F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DllLoadUtilsUWP_ROS2_DllLoadUtils_LoadLibraryNoSuffix_mF08C427B9BFF1A36827A347E57225B9778780CE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DllLoadUtilsUWP_ROS2_DllLoadUtils_LoadLibrary_m8465119722F68C04B76667FA645F8AFC3E293696_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DllLoadUtilsUnix_GetProcAddress_m2FBC0A5DB22DFD3D15303F2A476A2CF3770F11C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DllLoadUtilsUnix_Load_mFA4C4A92A66957C9B19D3E4AC62331A0E74BFE39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DllLoadUtilsWindowsDesktop_ROS2_DllLoadUtils_LoadLibraryNoSuffix_mC1D16A91C073E3A64731165AD986CB953F8DEBDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DllLoadUtilsWindowsDesktop_ROS2_DllLoadUtils_LoadLibrary_mBCB94E399BED777FFCC55A219DC55DAB71F33C41_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t567E60BCB5BA04635881950D957EE729B071A7BB 
{
};

// System.Collections.Generic.Dictionary`2<ROS2.LogLevel,System.ConsoleColor>
struct Dictionary_2_tE21EA2A24D6CB3091176D6974BBF38ACF8330303  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tC722B9909716C75271B0574ACFCCBA3C286445CF* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t39151FC96970A8B1FD25FD1F81397F294419E792* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tDD2DBFA1C0DD187C2ACE3DD48669EEA0B26BF0CB* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<ROS2.LogLevel,System.String>
struct Dictionary_2_tF4BD8E262191575AB12588F222EB1F74D30CC279  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t60E92E103E4D94433E949326F17EC696DDC5762B* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tDE15FB3BE31D86D718B98BD57817829E5241FCC3* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t7992B342E117662A3E181DA13733B3FCC67F4DE4* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<ROS2.LogLevel,ROS2.Ros2csLogger/Callback>
struct Dictionary_2_t2C711015AA5938D6B94F90272468FF95F25556E8  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t821EBEB9757E3E48C642B01E3239C5F7EDC14FCE* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tFD90C8ED0D107B0056F9716948BF80B6D95C933E* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tA3CF5BC300AB4DE7D707B3E2D7E4E2DB58CB285C* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// ROS2.Benchmark
struct Benchmark_tD02AA2D1CC80B5AA7C5998D00C91EACF340072A6  : public RuntimeObject
{
	// System.Diagnostics.Stopwatch ROS2.Benchmark::timer
	Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* ___timer_0;
	// System.String ROS2.Benchmark::benchmarkName
	String_t* ___benchmarkName_1;
	// System.Boolean ROS2.Benchmark::disposed
	bool ___disposed_2;
};

// ROS2.DllLoadUtilsFactory
struct DllLoadUtilsFactory_tDFF5C7BA0017D8159A71ECFD917AEA3DB58FCF95  : public RuntimeObject
{
};

// ROS2.DllLoadUtilsMacOSX
struct DllLoadUtilsMacOSX_tC6B691D5E65D6717F56414A7FA67000B83670CC5  : public RuntimeObject
{
};

// ROS2.DllLoadUtilsUWP
struct DllLoadUtilsUWP_t09AF02A3CA60BC353EE69E22864BFB6C4FFF00A9  : public RuntimeObject
{
};

// ROS2.DllLoadUtilsUnix
struct DllLoadUtilsUnix_tCAF2656F9FA3696C2E96C08EF84D415F06192EB9  : public RuntimeObject
{
};

// ROS2.DllLoadUtilsWindowsDesktop
struct DllLoadUtilsWindowsDesktop_tD963BD6535E5C71C4DFA7C13DEB5904A34AEA0F0  : public RuntimeObject
{
};

// ROS2.GlobalVariables
struct GlobalVariables_t3CBA016557FB31DD42A020D559A0D577B73146B1  : public RuntimeObject
{
};

// ROS2.Internal.MessageTypeSupportHelper
struct MessageTypeSupportHelper_tE1ED4A7476E15241A6CBA4A2A4FE7A89E423B8B3  : public RuntimeObject
{
};

// ROS2.Ros2csLogger
struct Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D  : public RuntimeObject
{
};

// System.Diagnostics.Stopwatch
struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043  : public RuntimeObject
{
	// System.Int64 System.Diagnostics.Stopwatch::elapsed
	int64_t ___elapsed_2;
	// System.Int64 System.Diagnostics.Stopwatch::started
	int64_t ___started_3;
	// System.Boolean System.Diagnostics.Stopwatch::is_running
	bool ___is_running_4;
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

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
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

// ROS2.UnknownPlatformError
struct UnknownPlatformError_t5DAF061D40628B97D1AA050E63C43CA9E36B027F  : public Exception_t
{
};

// ROS2.UnsatisfiedLinkError
struct UnsatisfiedLinkError_t95D9C8F54A363978BA07F2488371B5A8F5581AF3  : public Exception_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.TypeLoadException
struct TypeLoadException_t6333E3083F7BFF1A582969E6F67ACBA8B0035C32  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.TypeLoadException::ClassName
	String_t* ___ClassName_18;
	// System.String System.TypeLoadException::AssemblyName
	String_t* ___AssemblyName_19;
	// System.String System.TypeLoadException::MessageArg
	String_t* ___MessageArg_20;
	// System.Int32 System.TypeLoadException::ResourceId
	int32_t ___ResourceId_21;
};

// ROS2.Ros2csLogger/Callback
struct Callback_tF1258F518E485A36439361A50245F89E59DAACE8  : public MulticastDelegate_t
{
};

// ROS2.WaitSetEmptyException
struct WaitSetEmptyException_tE65951081E09DFA7CC1E8FF9DFB3D547AD957EAB  : public InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB
{
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<ROS2.LogLevel,System.ConsoleColor>

// System.Collections.Generic.Dictionary`2<ROS2.LogLevel,System.ConsoleColor>

// System.Collections.Generic.Dictionary`2<ROS2.LogLevel,System.String>

// System.Collections.Generic.Dictionary`2<ROS2.LogLevel,System.String>

// System.Collections.Generic.Dictionary`2<ROS2.LogLevel,ROS2.Ros2csLogger/Callback>

// System.Collections.Generic.Dictionary`2<ROS2.LogLevel,ROS2.Ros2csLogger/Callback>

// ROS2.Benchmark

// ROS2.Benchmark

// ROS2.DllLoadUtilsFactory

// ROS2.DllLoadUtilsFactory

// ROS2.DllLoadUtilsMacOSX

// ROS2.DllLoadUtilsMacOSX

// ROS2.DllLoadUtilsUWP

// ROS2.DllLoadUtilsUWP

// ROS2.DllLoadUtilsUnix
struct DllLoadUtilsUnix_tCAF2656F9FA3696C2E96C08EF84D415F06192EB9_StaticFields
{
	// System.Boolean ROS2.DllLoadUtilsUnix::libPreloaded
	bool ___libPreloaded_2;
};

// ROS2.DllLoadUtilsUnix

// ROS2.DllLoadUtilsWindowsDesktop

// ROS2.DllLoadUtilsWindowsDesktop

// ROS2.GlobalVariables
struct GlobalVariables_t3CBA016557FB31DD42A020D559A0D577B73146B1_StaticFields
{
	// System.Boolean ROS2.GlobalVariables::preloadLibrary
	bool ___preloadLibrary_0;
	// System.String ROS2.GlobalVariables::preloadLibraryName
	String_t* ___preloadLibraryName_1;
	// System.String ROS2.GlobalVariables::absolutePath
	String_t* ___absolutePath_2;
};

// ROS2.GlobalVariables

// ROS2.Internal.MessageTypeSupportHelper

// ROS2.Internal.MessageTypeSupportHelper

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

// System.Diagnostics.Stopwatch
struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_StaticFields
{
	// System.Int64 System.Diagnostics.Stopwatch::Frequency
	int64_t ___Frequency_0;
	// System.Boolean System.Diagnostics.Stopwatch::IsHighResolution
	bool ___IsHighResolution_1;
};

// System.Diagnostics.Stopwatch

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

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.DateTime

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

// System.Void

// System.Void

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// ROS2.InvalidNamespaceException

// ROS2.InvalidNamespaceException

// ROS2.InvalidNodeNameException

// ROS2.InvalidNodeNameException

// ROS2.NotInitializedException

// ROS2.NotInitializedException

// ROS2.RuntimeError

// ROS2.RuntimeError

// ROS2.UnknownPlatformError

// ROS2.UnknownPlatformError

// ROS2.UnsatisfiedLinkError

// ROS2.UnsatisfiedLinkError

// System.AsyncCallback

// System.AsyncCallback

// System.InvalidOperationException

// System.InvalidOperationException

// System.TypeLoadException

// System.TypeLoadException

// ROS2.Ros2csLogger/Callback

// ROS2.Ros2csLogger/Callback

// ROS2.WaitSetEmptyException

// ROS2.WaitSetEmptyException
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m78DDC81EE49FB9D4194E83685FFED445DFDB75CA_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Item_m2AD6E76220E3D39F0898141D91D3D0CD814B31CE_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, int32_t ___0_key, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m9C4302CCAE3C1BF70D02091D0E0CED7663F18211_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCC9983804D8DC41E938E080075F9EA7BDD0C7059_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mC515884C0546021A29DC0A00DBCABD89B1B65872_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m72F4FDC32CBD28A6AAC85284DEF64CE9BF8DE582_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mAEAF04AB4A1511F9DDAB58DC19E3AAC3CA5B727B_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, int32_t ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// ROS2.Platform ROS2.DllLoadUtilsFactory::CheckPlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DllLoadUtilsFactory_CheckPlatform_m1F441100BCDBE9C63E8AE2D6E64767FC2731C43F (const RuntimeMethod* method) ;
// System.Void ROS2.DllLoadUtilsUnix::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DllLoadUtilsUnix__ctor_m9AABF216AF1961B64ADAB7081A4D00C24004C762 (DllLoadUtilsUnix_tCAF2656F9FA3696C2E96C08EF84D415F06192EB9* __this, const RuntimeMethod* method) ;
// System.Void ROS2.DllLoadUtilsMacOSX::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DllLoadUtilsMacOSX__ctor_m887A815344901372997A848869D9034772C0F399 (DllLoadUtilsMacOSX_tC6B691D5E65D6717F56414A7FA67000B83670CC5* __this, const RuntimeMethod* method) ;
// System.Void ROS2.DllLoadUtilsWindowsDesktop::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DllLoadUtilsWindowsDesktop__ctor_mA453638EB6465997DA25134E15E81AA12B630B20 (DllLoadUtilsWindowsDesktop_tD963BD6535E5C71C4DFA7C13DEB5904A34AEA0F0* __this, const RuntimeMethod* method) ;
// System.Void ROS2.DllLoadUtilsUWP::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DllLoadUtilsUWP__ctor_mB0E996F3686CFC62D0C76EFCBA1CE9B15C330026 (DllLoadUtilsUWP_t09AF02A3CA60BC353EE69E22864BFB6C4FFF00A9* __this, const RuntimeMethod* method) ;
// System.Void ROS2.UnknownPlatformError::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnknownPlatformError__ctor_mBFF2D804C4FEF2D01650582FA263C7107C8C6BD7 (UnknownPlatformError_t5DAF061D40628B97D1AA050E63C43CA9E36B027F* __this, const RuntimeMethod* method) ;
// System.IntPtr ROS2.DllLoadUtilsFactory::LoadPackagedLibrary(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DllLoadUtilsFactory_LoadPackagedLibrary_m02758B851C1E91C887F1464D62EFAA09457F4282 (String_t* ___0_fileName, int32_t ___1_reserved, const RuntimeMethod* method) ;
// System.Int32 ROS2.DllLoadUtilsFactory::FreeLibraryUWP(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DllLoadUtilsFactory_FreeLibraryUWP_mF4294AF3BD7F02DF85F35E2E70C4FCF9685788BE (intptr_t ___0_handle, const RuntimeMethod* method) ;
// System.IntPtr ROS2.DllLoadUtilsFactory::LoadLibrary(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DllLoadUtilsFactory_LoadLibrary_mF9ED56AD4EE7C17A6358AA701F303CA8AFDF1EBF (String_t* ___0_fileName, const RuntimeMethod* method) ;
// System.Int32 ROS2.DllLoadUtilsFactory::FreeLibraryDesktop(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DllLoadUtilsFactory_FreeLibraryDesktop_m918D1E444FF2A2E1A826AF26D0298F4C74AE49A7 (intptr_t ___0_handle, const RuntimeMethod* method) ;
// System.IntPtr ROS2.DllLoadUtilsFactory::dlopen_unix(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DllLoadUtilsFactory_dlopen_unix_mB72E1925D036F508D4A582FADC74ED20F4585687 (String_t* ___0_fileName, int32_t ___1_flags, const RuntimeMethod* method) ;
// System.Int32 ROS2.DllLoadUtilsFactory::dlclose_unix(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DllLoadUtilsFactory_dlclose_unix_mFF9A72E5A8FC78D10996181F1C67F6C9A6B63940 (intptr_t ___0_handle, const RuntimeMethod* method) ;
// System.IntPtr ROS2.DllLoadUtilsFactory::dlopen_macosx(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DllLoadUtilsFactory_dlopen_macosx_m279CDE888436518750D136F0A552B23C1411C4BA (String_t* ___0_fileName, int32_t ___1_flags, const RuntimeMethod* method) ;
// System.Int32 ROS2.DllLoadUtilsFactory::dlclose_macosx(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DllLoadUtilsFactory_dlclose_macosx_m1B2A77DD2372273A511F8BA03B88CBBE7F6844F5 (intptr_t ___0_handle, const RuntimeMethod* method) ;
// System.Boolean ROS2.DllLoadUtilsFactory::IsUnix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DllLoadUtilsFactory_IsUnix_mA5BDA0897B4C9BAB91A322DF88A57F9FE87FE863 (const RuntimeMethod* method) ;
// System.Boolean ROS2.DllLoadUtilsFactory::IsMacOSX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DllLoadUtilsFactory_IsMacOSX_m67785593515916B81224463F8AEA37942ABCDC0E (const RuntimeMethod* method) ;
// System.Boolean ROS2.DllLoadUtilsFactory::IsWindowsDesktop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DllLoadUtilsFactory_IsWindowsDesktop_m73742ACD3876E9F2FD9AD7E0FF32E94D619E1FAF (const RuntimeMethod* method) ;
// System.Boolean ROS2.DllLoadUtilsFactory::IsUWP()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DllLoadUtilsFactory_IsUWP_m4B1B0042E82F090646B5628DF546F788E35A6603 (const RuntimeMethod* method) ;
// System.Int32 ROS2.DllLoadUtilsUWP::FreeLibrary(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DllLoadUtilsUWP_FreeLibrary_mB2857FCDA173FA319462B3E792BE2B5CA701FB34 (intptr_t ___0_handle, const RuntimeMethod* method) ;
// System.IntPtr ROS2.DllLoadUtilsUWP::GetProcAddress(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DllLoadUtilsUWP_GetProcAddress_m478B99C7C2DBE69402A9CC1039C2FE5209E14264 (intptr_t ___0_handle, String_t* ___1_procedureName, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.IntPtr ROS2.DllLoadUtilsUWP::LoadPackagedLibrary(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DllLoadUtilsUWP_LoadPackagedLibrary_mB5548F2280FD5A669CDA22169BFD03DA7E60D6E4 (String_t* ___0_fileName, int32_t ___1_reserved, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271 (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.Void ROS2.UnsatisfiedLinkError::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsatisfiedLinkError__ctor_m1B877D8FC23D00B1C337A41C6B3E8EBEC0A41C4B (UnsatisfiedLinkError_t95D9C8F54A363978BA07F2488371B5A8F5581AF3* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Int32 ROS2.DllLoadUtilsWindowsDesktop::FreeLibrary(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DllLoadUtilsWindowsDesktop_FreeLibrary_m4A7EAD60217C3A0F597CD12CF8285CED38FA16D1 (intptr_t ___0_handle, const RuntimeMethod* method) ;
// System.IntPtr ROS2.DllLoadUtilsWindowsDesktop::GetProcAddress(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DllLoadUtilsWindowsDesktop_GetProcAddress_mC92AEC48C242B60994840F70B389F918644303CC (intptr_t ___0_handle, String_t* ___1_procedureName, const RuntimeMethod* method) ;
// System.IntPtr ROS2.DllLoadUtilsWindowsDesktop::LoadLibrary(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DllLoadUtilsWindowsDesktop_LoadLibrary_m1BFE1D8CD1E2B3641C0A57DF1DA083A58BE89FDC (String_t* ___0_fileName, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// ROS2.Ros2csLogger ROS2.Ros2csLogger::GetInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D* Ros2csLogger_GetInstance_m1E6254F517D7424C914CDD20035721DD2A7E9C3B (const RuntimeMethod* method) ;
// System.Void ROS2.Ros2csLogger::LogDebug(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ros2csLogger_LogDebug_mA487124DD0DCBFC7F43410E041C4F1A060A90943 (Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.IntPtr ROS2.DllLoadUtilsUnix::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DllLoadUtilsUnix_Load_mFA4C4A92A66957C9B19D3E4AC62331A0E74BFE39 (DllLoadUtilsUnix_tCAF2656F9FA3696C2E96C08EF84D415F06192EB9* __this, String_t* ___0_libraryFileName, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Int32 ROS2.DllLoadUtilsUnix::dlclose(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DllLoadUtilsUnix_dlclose_m0E3988FEDE9398DEF42F71809CB21DE29262409E (intptr_t ___0_handle, const RuntimeMethod* method) ;
// System.IntPtr ROS2.DllLoadUtilsUnix::dlerror()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DllLoadUtilsUnix_dlerror_mC583B0589B8D89173E6546CB134ADB24E6E64ACD (const RuntimeMethod* method) ;
// System.IntPtr ROS2.DllLoadUtilsUnix::dlsym(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DllLoadUtilsUnix_dlsym_m627B8C6DACA25E869606801620871397CC750441 (intptr_t ___0_handle, String_t* ___1_symbol, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.String System.Runtime.InteropServices.Marshal::PtrToStringAnsi(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Marshal_PtrToStringAnsi_m8DF88D9F22FCF791C538A36C9233B3882F579B4A (intptr_t ___0_ptr, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.IntPtr ROS2.DllLoadUtilsUnix::dlopen(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DllLoadUtilsUnix_dlopen_m165CA5AB75B9E3804FAF643AB4011412E234777E (String_t* ___0_fileName, int32_t ___1_flags, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
// System.Void ROS2.DllLoadUtilsUnix::CheckPreloadLibraries()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DllLoadUtilsUnix_CheckPreloadLibraries_m7293FE7BBEDB65506A524012A8459CA6C04FAA6B (DllLoadUtilsUnix_tCAF2656F9FA3696C2E96C08EF84D415F06192EB9* __this, const RuntimeMethod* method) ;
// System.IntPtr ROS2.DllLoadUtilsUnix::LoadLibraryByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DllLoadUtilsUnix_LoadLibraryByName_m64DF75C2BA63E046FCB40F520127FE7887D7C4AD (DllLoadUtilsUnix_tCAF2656F9FA3696C2E96C08EF84D415F06192EB9* __this, String_t* ___0_libraryFileName, const RuntimeMethod* method) ;
// System.Int32 ROS2.DllLoadUtilsMacOSX::dlclose(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DllLoadUtilsMacOSX_dlclose_m14A1592183BDD2848214C2A9E055C70BBB5ADAC3 (intptr_t ___0_handle, const RuntimeMethod* method) ;
// System.IntPtr ROS2.DllLoadUtilsMacOSX::dlerror()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DllLoadUtilsMacOSX_dlerror_m0FA247A38B1D70F43729E323561B8F37F21099FF (const RuntimeMethod* method) ;
// System.IntPtr ROS2.DllLoadUtilsMacOSX::dlsym(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DllLoadUtilsMacOSX_dlsym_mB8B6E6115AC7AF5848C2659B1FC8FA3D87CA4085 (intptr_t ___0_handle, String_t* ___1_symbol, const RuntimeMethod* method) ;
// System.IntPtr ROS2.DllLoadUtilsMacOSX::dlopen(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DllLoadUtilsMacOSX_dlopen_m5F7C860FB0CA60BE17A7D80DEF687ADD9D0DCA5D (String_t* ___0_fileName, int32_t ___1_flags, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F (Exception_t* __this, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3 (Exception_t* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m63F5561BE647F655D22C8289E53A5D3A2196B668 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<ROS2.LogLevel,ROS2.Ros2csLogger/Callback>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m1AD3599D5AC8313BA9B586F3BDC1FCB03532DC22 (Dictionary_2_t2C711015AA5938D6B94F90272468FF95F25556E8* __this, int32_t ___0_key, Callback_tF1258F518E485A36439361A50245F89E59DAACE8* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2C711015AA5938D6B94F90272468FF95F25556E8*, int32_t, Callback_tF1258F518E485A36439361A50245F89E59DAACE8*, const RuntimeMethod*))Dictionary_2_set_Item_m78DDC81EE49FB9D4194E83685FFED445DFDB75CA_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void ROS2.Ros2csLogger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ros2csLogger__ctor_mE011FB9DB49F8C5AD20EBA540E3BAD1499C38C09 (Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D* __this, const RuntimeMethod* method) ;
// ROS2.LogLevel ROS2.Ros2csLogger::get_LogLevel()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Ros2csLogger_get_LogLevel_m4FF98FB19E2B9790C6020DF8D813F7961167972F_inline (const RuntimeMethod* method) ;
// System.ConsoleColor System.Console::get_ForegroundColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Console_get_ForegroundColor_mA1C5AED75FA15026FF6F6A5AD99969F0A5A1A677 (const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<ROS2.LogLevel,System.ConsoleColor>::get_Item(TKey)
inline int32_t Dictionary_2_get_Item_m7A96F221C55D582E107C548C3F689DD793CB6F86 (Dictionary_2_tE21EA2A24D6CB3091176D6974BBF38ACF8330303* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tE21EA2A24D6CB3091176D6974BBF38ACF8330303*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m2AD6E76220E3D39F0898141D91D3D0CD814B31CE_gshared)(__this, ___0_key, method);
}
// System.Void System.Console::set_ForegroundColor(System.ConsoleColor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Console_set_ForegroundColor_m4332BA76D4ECCFF08C9C71F05C4D47EA83EC176F (int32_t ___0_value, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<ROS2.LogLevel,ROS2.Ros2csLogger/Callback>::get_Item(TKey)
inline Callback_tF1258F518E485A36439361A50245F89E59DAACE8* Dictionary_2_get_Item_m3B86E685B91E647965777E7F3953C6F811917608 (Dictionary_2_t2C711015AA5938D6B94F90272468FF95F25556E8* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  Callback_tF1258F518E485A36439361A50245F89E59DAACE8* (*) (Dictionary_2_t2C711015AA5938D6B94F90272468FF95F25556E8*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m9C4302CCAE3C1BF70D02091D0E0CED7663F18211_gshared)(__this, ___0_key, method);
}
// System.Void ROS2.Ros2csLogger/Callback::Invoke(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Callback_Invoke_mBB09CD967A55FB4A922C03658F5FB2B3563A4B12_inline (Callback_tF1258F518E485A36439361A50245F89E59DAACE8* __this, RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C (const RuntimeMethod* method) ;
// System.String System.DateTime::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, String_t* ___0_format, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<ROS2.LogLevel,System.String>::get_Item(TKey)
inline String_t* Dictionary_2_get_Item_m0D19FD93C3CBAEEDAE323D628F7E297A1AB84E9E (Dictionary_2_tF4BD8E262191575AB12588F222EB1F74D30CC279* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Dictionary_2_tF4BD8E262191575AB12588F222EB1F74D30CC279*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m9C4302CCAE3C1BF70D02091D0E0CED7663F18211_gshared)(__this, ___0_key, method);
}
// System.Void System.Console::WriteLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Console_WriteLine_m77CEDA0C084428F0D6220988DA66992EC1925AEA (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void ROS2.Ros2csLogger::Log(ROS2.LogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ros2csLogger_Log_m2B6D45543390930B16FBB8E5155E1433FE6AE103 (Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D* __this, int32_t ___0_level, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<ROS2.LogLevel,System.String>::.ctor()
inline void Dictionary_2__ctor_m48E82F061D2B81F7A63C56D8A9F4E41EB86F309D (Dictionary_2_tF4BD8E262191575AB12588F222EB1F74D30CC279* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF4BD8E262191575AB12588F222EB1F74D30CC279*, const RuntimeMethod*))Dictionary_2__ctor_mCC9983804D8DC41E938E080075F9EA7BDD0C7059_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<ROS2.LogLevel,System.String>::Add(TKey,TValue)
inline void Dictionary_2_Add_m7F01CEF304F66C637623FBBB54B845AE0D6A1ED0 (Dictionary_2_tF4BD8E262191575AB12588F222EB1F74D30CC279* __this, int32_t ___0_key, String_t* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF4BD8E262191575AB12588F222EB1F74D30CC279*, int32_t, String_t*, const RuntimeMethod*))Dictionary_2_Add_mC515884C0546021A29DC0A00DBCABD89B1B65872_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2<ROS2.LogLevel,ROS2.Ros2csLogger/Callback>::.ctor()
inline void Dictionary_2__ctor_m226D41F3D5C8F8732B9DD08786ECFF60958CC809 (Dictionary_2_t2C711015AA5938D6B94F90272468FF95F25556E8* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2C711015AA5938D6B94F90272468FF95F25556E8*, const RuntimeMethod*))Dictionary_2__ctor_mCC9983804D8DC41E938E080075F9EA7BDD0C7059_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<ROS2.LogLevel,ROS2.Ros2csLogger/Callback>::Add(TKey,TValue)
inline void Dictionary_2_Add_mDDEF807BF37E0AA97EBBDBEE693405FB19C0DCD3 (Dictionary_2_t2C711015AA5938D6B94F90272468FF95F25556E8* __this, int32_t ___0_key, Callback_tF1258F518E485A36439361A50245F89E59DAACE8* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2C711015AA5938D6B94F90272468FF95F25556E8*, int32_t, Callback_tF1258F518E485A36439361A50245F89E59DAACE8*, const RuntimeMethod*))Dictionary_2_Add_mC515884C0546021A29DC0A00DBCABD89B1B65872_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2<ROS2.LogLevel,System.ConsoleColor>::.ctor()
inline void Dictionary_2__ctor_m81AF07AB7B2CCA080F808145615A163D46BD823F (Dictionary_2_tE21EA2A24D6CB3091176D6974BBF38ACF8330303* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE21EA2A24D6CB3091176D6974BBF38ACF8330303*, const RuntimeMethod*))Dictionary_2__ctor_m72F4FDC32CBD28A6AAC85284DEF64CE9BF8DE582_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<ROS2.LogLevel,System.ConsoleColor>::Add(TKey,TValue)
inline void Dictionary_2_Add_mF6DEB8B58171E92E5234DE8253418786ED6E07C3 (Dictionary_2_tE21EA2A24D6CB3091176D6974BBF38ACF8330303* __this, int32_t ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE21EA2A24D6CB3091176D6974BBF38ACF8330303*, int32_t, int32_t, const RuntimeMethod*))Dictionary_2_Add_mAEAF04AB4A1511F9DDAB58DC19E3AAC3CA5B727B_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Diagnostics.Stopwatch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch__ctor_mAFE6B2F45CF1C3469EF6D5307972BC098B473D0A (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Stopwatch::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Start_m35906A38C7D336CF9DD35854C7E170D762A55915 (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Stopwatch::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Stop_m8F2A2EFD9D7D5B4180A5E5379E5443864618D7DC (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) ;
// System.Int64 System.Diagnostics.Stopwatch::get_ElapsedTicks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Stopwatch_get_ElapsedTicks_m3F4040FBF8C7CCDC69E0E04824019DEBB25AA410 (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) ;
// System.Int64 System.Diagnostics.Stopwatch::get_ElapsedMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Stopwatch_get_ElapsedMilliseconds_m8D8E60ADEB47D008C06D8E57D28D41EAE07AECBF (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_api_ms_win_core_libraryloader_l2_1_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL LoadPackagedLibrary(Il2CppChar*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_api_ms_win_core_libraryloader_l1_2_0_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FreeLibrary(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL LoadLibrary(char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libdl_so_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL dlopen(char*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libdl_so_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL dlclose(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_api_ms_win_core_libraryloader_l1_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GetProcAddress(intptr_t, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libdl_so_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL dlsym(intptr_t, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libdl_so_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL dlerror();
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
// System.Void ROS2.GlobalVariables::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalVariables__ctor_m6DE775F1227B4BC8EDC25450EEE0EC8ABAB4186E (GlobalVariables_t3CBA016557FB31DD42A020D559A0D577B73146B1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void ROS2.GlobalVariables::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalVariables__cctor_m97CABBC3E29B67B8E43C08DE5E91671C1569CB7F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalVariables_t3CBA016557FB31DD42A020D559A0D577B73146B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		((GlobalVariables_t3CBA016557FB31DD42A020D559A0D577B73146B1_StaticFields*)il2cpp_codegen_static_fields_for(GlobalVariables_t3CBA016557FB31DD42A020D559A0D577B73146B1_il2cpp_TypeInfo_var))->___preloadLibrary_0 = (bool)0;
		((GlobalVariables_t3CBA016557FB31DD42A020D559A0D577B73146B1_StaticFields*)il2cpp_codegen_static_fields_for(GlobalVariables_t3CBA016557FB31DD42A020D559A0D577B73146B1_il2cpp_TypeInfo_var))->___preloadLibraryName_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&((GlobalVariables_t3CBA016557FB31DD42A020D559A0D577B73146B1_StaticFields*)il2cpp_codegen_static_fields_for(GlobalVariables_t3CBA016557FB31DD42A020D559A0D577B73146B1_il2cpp_TypeInfo_var))->___preloadLibraryName_1), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		((GlobalVariables_t3CBA016557FB31DD42A020D559A0D577B73146B1_StaticFields*)il2cpp_codegen_static_fields_for(GlobalVariables_t3CBA016557FB31DD42A020D559A0D577B73146B1_il2cpp_TypeInfo_var))->___absolutePath_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&((GlobalVariables_t3CBA016557FB31DD42A020D559A0D577B73146B1_StaticFields*)il2cpp_codegen_static_fields_for(GlobalVariables_t3CBA016557FB31DD42A020D559A0D577B73146B1_il2cpp_TypeInfo_var))->___absolutePath_2), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
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
// System.IntPtr ROS2.DllLoadUtilsFactory::LoadPackagedLibrary(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DllLoadUtilsFactory_LoadPackagedLibrary_m02758B851C1E91C887F1464D62EFAA09457F4282 (String_t* ___0_fileName, int32_t ___1_reserved, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (Il2CppChar*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_api_ms_win_core_libraryloader_l2_1_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(Il2CppChar*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("api-ms-win-core-libraryloader-l2-1-0.dll"), "LoadPackagedLibrary", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_fileName' to native representation
	Il2CppChar* ____0_fileName_marshaled = NULL;
	if (___0_fileName != NULL)
	{
		____0_fileName_marshaled = &___0_fileName->____firstChar_5;
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_api_ms_win_core_libraryloader_l2_1_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(LoadPackagedLibrary)(____0_fileName_marshaled, ___1_reserved);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_fileName_marshaled, ___1_reserved);
	#endif
	il2cpp_codegen_marshal_store_last_error();

	return returnValue;
}
// System.Int32 ROS2.DllLoadUtilsFactory::FreeLibraryUWP(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DllLoadUtilsFactory_FreeLibraryUWP_mF4294AF3BD7F02DF85F35E2E70C4FCF9685788BE (intptr_t ___0_handle, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_api_ms_win_core_libraryloader_l1_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("api-ms-win-core-libraryloader-l1-2-0.dll"), "FreeLibrary", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_api_ms_win_core_libraryloader_l1_2_0_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FreeLibrary)(___0_handle);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_handle);
	#endif
	il2cpp_codegen_marshal_store_last_error();

	return returnValue;
}
// System.IntPtr ROS2.DllLoadUtilsFactory::LoadLibrary(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DllLoadUtilsFactory_LoadLibrary_mF9ED56AD4EE7C17A6358AA701F303CA8AFDF1EBF (String_t* ___0_fileName, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kernel32_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "LoadLibrary", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_fileName' to native representation
	char* ____0_fileName_marshaled = NULL;
	____0_fileName_marshaled = il2cpp_codegen_marshal_string(___0_fileName);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(LoadLibrary)(____0_fileName_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_fileName_marshaled);
	#endif
	il2cpp_codegen_marshal_store_last_error();

	// Marshaling cleanup of parameter '___0_fileName' native representation
	il2cpp_codegen_marshal_free(____0_fileName_marshaled);
	____0_fileName_marshaled = NULL;

	return returnValue;
}
// System.Int32 ROS2.DllLoadUtilsFactory::FreeLibraryDesktop(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DllLoadUtilsFactory_FreeLibraryDesktop_m918D1E444FF2A2E1A826AF26D0298F4C74AE49A7 (intptr_t ___0_handle, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kernel32_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "FreeLibrary", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FreeLibrary)(___0_handle);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_handle);
	#endif
	il2cpp_codegen_marshal_store_last_error();

	return returnValue;
}
// System.IntPtr ROS2.DllLoadUtilsFactory::dlopen_unix(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DllLoadUtilsFactory_dlopen_unix_mB72E1925D036F508D4A582FADC74ED20F4585687 (String_t* ___0_fileName, int32_t ___1_flags, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libdl_so_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libdl.so.2"), "dlopen", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_fileName' to native representation
	char* ____0_fileName_marshaled = NULL;
	____0_fileName_marshaled = il2cpp_codegen_marshal_string(___0_fileName);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libdl_so_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(dlopen)(____0_fileName_marshaled, ___1_flags);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_fileName_marshaled, ___1_flags);
	#endif

	// Marshaling cleanup of parameter '___0_fileName' native representation
	il2cpp_codegen_marshal_free(____0_fileName_marshaled);
	____0_fileName_marshaled = NULL;

	return returnValue;
}
// System.Int32 ROS2.DllLoadUtilsFactory::dlclose_unix(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DllLoadUtilsFactory_dlclose_unix_mFF9A72E5A8FC78D10996181F1C67F6C9A6B63940 (intptr_t ___0_handle, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libdl_so_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libdl.so.2"), "dlclose", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libdl_so_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(dlclose)(___0_handle);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_handle);
	#endif

	return returnValue;
}
// System.IntPtr ROS2.DllLoadUtilsFactory::dlopen_macosx(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DllLoadUtilsFactory_dlopen_macosx_m279CDE888436518750D136F0A552B23C1411C4BA (String_t* ___0_fileName, int32_t ___1_flags, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libdl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libdl.dylib"), "dlopen", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_fileName' to native representation
	char* ____0_fileName_marshaled = NULL;
	____0_fileName_marshaled = il2cpp_codegen_marshal_string(___0_fileName);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libdl_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(dlopen)(____0_fileName_marshaled, ___1_flags);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_fileName_marshaled, ___1_flags);
	#endif

	// Marshaling cleanup of parameter '___0_fileName' native representation
	il2cpp_codegen_marshal_free(____0_fileName_marshaled);
	____0_fileName_marshaled = NULL;

	return returnValue;
}
// System.Int32 ROS2.DllLoadUtilsFactory::dlclose_macosx(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DllLoadUtilsFactory_dlclose_macosx_m1B2A77DD2372273A511F8BA03B88CBBE7F6844F5 (intptr_t ___0_handle, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libdl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libdl.dylib"), "dlclose", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libdl_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(dlclose)(___0_handle);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_handle);
	#endif

	return returnValue;
}
// ROS2.DllLoadUtils ROS2.DllLoadUtilsFactory::GetDllLoadUtils()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DllLoadUtilsFactory_GetDllLoadUtils_m8EB2D6E40DBF00ED8E25114CAABFFFCF16286775 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DllLoadUtilsMacOSX_tC6B691D5E65D6717F56414A7FA67000B83670CC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DllLoadUtilsUWP_t09AF02A3CA60BC353EE69E22864BFB6C4FFF00A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DllLoadUtilsUnix_tCAF2656F9FA3696C2E96C08EF84D415F06192EB9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DllLoadUtilsWindowsDesktop_tD963BD6535E5C71C4DFA7C13DEB5904A34AEA0F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = DllLoadUtilsFactory_CheckPlatform_m1F441100BCDBE9C63E8AE2D6E64767FC2731C43F(NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0028;
			}
			case 2:
			{
				goto IL_002e;
			}
			case 3:
			{
				goto IL_0034;
			}
			case 4:
			{
				goto IL_003a;
			}
		}
	}
	{
		goto IL_003a;
	}

IL_0022:
	{
		DllLoadUtilsUnix_tCAF2656F9FA3696C2E96C08EF84D415F06192EB9* L_2 = (DllLoadUtilsUnix_tCAF2656F9FA3696C2E96C08EF84D415F06192EB9*)il2cpp_codegen_object_new(DllLoadUtilsUnix_tCAF2656F9FA3696C2E96C08EF84D415F06192EB9_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		DllLoadUtilsUnix__ctor_m9AABF216AF1961B64ADAB7081A4D00C24004C762(L_2, NULL);
		return L_2;
	}

IL_0028:
	{
		DllLoadUtilsMacOSX_tC6B691D5E65D6717F56414A7FA67000B83670CC5* L_3 = (DllLoadUtilsMacOSX_tC6B691D5E65D6717F56414A7FA67000B83670CC5*)il2cpp_codegen_object_new(DllLoadUtilsMacOSX_tC6B691D5E65D6717F56414A7FA67000B83670CC5_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		DllLoadUtilsMacOSX__ctor_m887A815344901372997A848869D9034772C0F399(L_3, NULL);
		return L_3;
	}

IL_002e:
	{
		DllLoadUtilsWindowsDesktop_tD963BD6535E5C71C4DFA7C13DEB5904A34AEA0F0* L_4 = (DllLoadUtilsWindowsDesktop_tD963BD6535E5C71C4DFA7C13DEB5904A34AEA0F0*)il2cpp_codegen_object_new(DllLoadUtilsWindowsDesktop_tD963BD6535E5C71C4DFA7C13DEB5904A34AEA0F0_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		DllLoadUtilsWindowsDesktop__ctor_mA453638EB6465997DA25134E15E81AA12B630B20(L_4, NULL);
		return L_4;
	}

IL_0034:
	{
		DllLoadUtilsUWP_t09AF02A3CA60BC353EE69E22864BFB6C4FFF00A9* L_5 = (DllLoadUtilsUWP_t09AF02A3CA60BC353EE69E22864BFB6C4FFF00A9*)il2cpp_codegen_object_new(DllLoadUtilsUWP_t09AF02A3CA60BC353EE69E22864BFB6C4FFF00A9_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		DllLoadUtilsUWP__ctor_mB0E996F3686CFC62D0C76EFCBA1CE9B15C330026(L_5, NULL);
		return L_5;
	}

IL_003a:
	{
		UnknownPlatformError_t5DAF061D40628B97D1AA050E63C43CA9E36B027F* L_6 = (UnknownPlatformError_t5DAF061D40628B97D1AA050E63C43CA9E36B027F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnknownPlatformError_t5DAF061D40628B97D1AA050E63C43CA9E36B027F_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		UnknownPlatformError__ctor_mBFF2D804C4FEF2D01650582FA263C7107C8C6BD7(L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DllLoadUtilsFactory_GetDllLoadUtils_m8EB2D6E40DBF00ED8E25114CAABFFFCF16286775_RuntimeMethod_var)));
	}
}
// System.Boolean ROS2.DllLoadUtilsFactory::IsUWP()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DllLoadUtilsFactory_IsUWP_m4B1B0042E82F090646B5628DF546F788E35A6603 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22EF9BD68EED1091D75509A86565D5CC33F395E4);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		intptr_t L_0;
		L_0 = DllLoadUtilsFactory_LoadPackagedLibrary_m02758B851C1E91C887F1464D62EFAA09457F4282(_stringLiteral22EF9BD68EED1091D75509A86565D5CC33F395E4, 0, NULL);
		int32_t L_1;
		L_1 = DllLoadUtilsFactory_FreeLibraryUWP_mF4294AF3BD7F02DF85F35E2E70C4FCF9685788BE(L_0, NULL);
		V_0 = (bool)1;
		goto IL_001a;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeLoadException_t6333E3083F7BFF1A582969E6F67ACBA8B0035C32_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0015;
		}
		throw e;
	}

CATCH_0015:
	{// begin catch(System.TypeLoadException)
		V_0 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001a;
	}// end catch (depth: 1)

IL_001a:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean ROS2.DllLoadUtilsFactory::IsWindowsDesktop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DllLoadUtilsFactory_IsWindowsDesktop_m73742ACD3876E9F2FD9AD7E0FF32E94D619E1FAF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13633BE53AFD750A8938C37773A9A66FDAD2A686);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		intptr_t L_0;
		L_0 = DllLoadUtilsFactory_LoadLibrary_mF9ED56AD4EE7C17A6358AA701F303CA8AFDF1EBF(_stringLiteral13633BE53AFD750A8938C37773A9A66FDAD2A686, NULL);
		int32_t L_1;
		L_1 = DllLoadUtilsFactory_FreeLibraryDesktop_m918D1E444FF2A2E1A826AF26D0298F4C74AE49A7(L_0, NULL);
		V_0 = (bool)1;
		goto IL_0019;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeLoadException_t6333E3083F7BFF1A582969E6F67ACBA8B0035C32_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0014;
		}
		throw e;
	}

CATCH_0014:
	{// begin catch(System.TypeLoadException)
		V_0 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0019;
	}// end catch (depth: 1)

IL_0019:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean ROS2.DllLoadUtilsFactory::IsUnix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DllLoadUtilsFactory_IsUnix_mA5BDA0897B4C9BAB91A322DF88A57F9FE87FE863 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC674A47F2CCAE15D7372B2A51A3EF72D9C5F1ECE);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		intptr_t L_0;
		L_0 = DllLoadUtilsFactory_dlopen_unix_mB72E1925D036F508D4A582FADC74ED20F4585687(_stringLiteralC674A47F2CCAE15D7372B2A51A3EF72D9C5F1ECE, 2, NULL);
		int32_t L_1;
		L_1 = DllLoadUtilsFactory_dlclose_unix_mFF9A72E5A8FC78D10996181F1C67F6C9A6B63940(L_0, NULL);
		V_0 = (bool)1;
		goto IL_001a;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeLoadException_t6333E3083F7BFF1A582969E6F67ACBA8B0035C32_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0015;
		}
		throw e;
	}

CATCH_0015:
	{// begin catch(System.TypeLoadException)
		V_0 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001a;
	}// end catch (depth: 1)

IL_001a:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean ROS2.DllLoadUtilsFactory::IsMacOSX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DllLoadUtilsFactory_IsMacOSX_m67785593515916B81224463F8AEA37942ABCDC0E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C66974B4089AA23B1526AD01AF306524EBA1B59);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		intptr_t L_0;
		L_0 = DllLoadUtilsFactory_dlopen_macosx_m279CDE888436518750D136F0A552B23C1411C4BA(_stringLiteral5C66974B4089AA23B1526AD01AF306524EBA1B59, 2, NULL);
		int32_t L_1;
		L_1 = DllLoadUtilsFactory_dlclose_macosx_m1B2A77DD2372273A511F8BA03B88CBBE7F6844F5(L_0, NULL);
		V_0 = (bool)1;
		goto IL_001a;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeLoadException_t6333E3083F7BFF1A582969E6F67ACBA8B0035C32_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0015;
		}
		throw e;
	}

CATCH_0015:
	{// begin catch(System.TypeLoadException)
		V_0 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001a;
	}// end catch (depth: 1)

IL_001a:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// ROS2.Platform ROS2.DllLoadUtilsFactory::CheckPlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DllLoadUtilsFactory_CheckPlatform_m1F441100BCDBE9C63E8AE2D6E64767FC2731C43F (const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = DllLoadUtilsFactory_IsUnix_mA5BDA0897B4C9BAB91A322DF88A57F9FE87FE863(NULL);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return (int32_t)(0);
	}

IL_0009:
	{
		bool L_1;
		L_1 = DllLoadUtilsFactory_IsMacOSX_m67785593515916B81224463F8AEA37942ABCDC0E(NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return (int32_t)(1);
	}

IL_0012:
	{
		bool L_2;
		L_2 = DllLoadUtilsFactory_IsWindowsDesktop_m73742ACD3876E9F2FD9AD7E0FF32E94D619E1FAF(NULL);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		return (int32_t)(2);
	}

IL_001b:
	{
		bool L_3;
		L_3 = DllLoadUtilsFactory_IsUWP_m4B1B0042E82F090646B5628DF546F788E35A6603(NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		return (int32_t)(3);
	}

IL_0024:
	{
		return (int32_t)(4);
	}
}
// System.Void ROS2.DllLoadUtilsFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DllLoadUtilsFactory__ctor_mC99E435AE42E546405613D29DE0061074A8C9F1F (DllLoadUtilsFactory_tDFF5C7BA0017D8159A71ECFD917AEA3DB58FCF95* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.IntPtr ROS2.DllLoadUtilsUWP::LoadPackagedLibrary(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DllLoadUtilsUWP_LoadPackagedLibrary_mB5548F2280FD5A669CDA22169BFD03DA7E60D6E4 (String_t* ___0_fileName, int32_t ___1_reserved, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (Il2CppChar*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_api_ms_win_core_libraryloader_l2_1_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(Il2CppChar*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("api-ms-win-core-libraryloader-l2-1-0.dll"), "LoadPackagedLibrary", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_fileName' to native representation
	Il2CppChar* ____0_fileName_marshaled = NULL;
	if (___0_fileName != NULL)
	{
		____0_fileName_marshaled = &___0_fileName->____firstChar_5;
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_api_ms_win_core_libraryloader_l2_1_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(LoadPackagedLibrary)(____0_fileName_marshaled, ___1_reserved);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_fileName_marshaled, ___1_reserved);
	#endif
	il2cpp_codegen_marshal_store_last_error();

	return returnValue;
}
// System.Int32 ROS2.DllLoadUtilsUWP::FreeLibrary(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DllLoadUtilsUWP_FreeLibrary_mB2857FCDA173FA319462B3E792BE2B5CA701FB34 (intptr_t ___0_handle, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_api_ms_win_core_libraryloader_l1_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("api-ms-win-core-libraryloader-l1-2-0.dll"), "FreeLibrary", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_api_ms_win_core_libraryloader_l1_2_0_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FreeLibrary)(___0_handle);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_handle);
	#endif
	il2cpp_codegen_marshal_store_last_error();

	return returnValue;
}
// System.IntPtr ROS2.DllLoadUtilsUWP::GetProcAddress(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DllLoadUtilsUWP_GetProcAddress_m478B99C7C2DBE69402A9CC1039C2FE5209E14264 (intptr_t ___0_handle, String_t* ___1_procedureName, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_api_ms_win_core_libraryloader_l1_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("api-ms-win-core-libraryloader-l1-2-0.dll"), "GetProcAddress", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_procedureName' to native representation
	char* ____1_procedureName_marshaled = NULL;
	____1_procedureName_marshaled = il2cpp_codegen_marshal_string(___1_procedureName);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_api_ms_win_core_libraryloader_l1_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GetProcAddress)(___0_handle, ____1_procedureName_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_handle, ____1_procedureName_marshaled);
	#endif
	il2cpp_codegen_marshal_store_last_error();

	// Marshaling cleanup of parameter '___1_procedureName' native representation
	il2cpp_codegen_marshal_free(____1_procedureName_marshaled);
	____1_procedureName_marshaled = NULL;

	return returnValue;
}
// System.Void ROS2.DllLoadUtilsUWP::ROS2.DllLoadUtils.FreeLibrary(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DllLoadUtilsUWP_ROS2_DllLoadUtils_FreeLibrary_mD761B1788C0BF2D4DD9E52388031893F024B24DC (DllLoadUtilsUWP_t09AF02A3CA60BC353EE69E22864BFB6C4FFF00A9* __this, intptr_t ___0_handle, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_handle;
		int32_t L_1;
		L_1 = DllLoadUtilsUWP_FreeLibrary_mB2857FCDA173FA319462B3E792BE2B5CA701FB34(L_0, NULL);
		return;
	}
}
// System.IntPtr ROS2.DllLoadUtilsUWP::ROS2.DllLoadUtils.GetProcAddress(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DllLoadUtilsUWP_ROS2_DllLoadUtils_GetProcAddress_m8D47FD58DE1E3427D5039D17AAB8714835D7FBC9 (DllLoadUtilsUWP_t09AF02A3CA60BC353EE69E22864BFB6C4FFF00A9* __this, intptr_t ___0_dllHandle, String_t* ___1_name, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_dllHandle;
		String_t* L_1 = ___1_name;
		intptr_t L_2;
		L_2 = DllLoadUtilsUWP_GetProcAddress_m478B99C7C2DBE69402A9CC1039C2FE5209E14264(L_0, L_1, NULL);
		return L_2;
	}
}
// System.IntPtr ROS2.DllLoadUtilsUWP::ROS2.DllLoadUtils.LoadLibrary(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DllLoadUtilsUWP_ROS2_DllLoadUtils_LoadLibrary_m8465119722F68C04B76667FA645F8AFC3E293696 (DllLoadUtilsUWP_t09AF02A3CA60BC353EE69E22864BFB6C4FFF00A9* __this, String_t* ___0_fileName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA774568E563D66749C6AE3C9ED661AA85D0B3956);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		String_t* L_0 = ___0_fileName;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_0, _stringLiteralA774568E563D66749C6AE3C9ED661AA85D0B3956, NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		intptr_t L_3;
		L_3 = DllLoadUtilsUWP_LoadPackagedLibrary_mB5548F2280FD5A669CDA22169BFD03DA7E60D6E4(L_2, 0, NULL);
		intptr_t L_4 = L_3;
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_6;
		L_6 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_4, L_5, NULL);
		G_B1_0 = L_4;
		if (!L_6)
		{
			G_B2_0 = L_4;
			goto IL_0027;
		}
	}
	{
		String_t* L_7 = V_0;
		UnsatisfiedLinkError_t95D9C8F54A363978BA07F2488371B5A8F5581AF3* L_8 = (UnsatisfiedLinkError_t95D9C8F54A363978BA07F2488371B5A8F5581AF3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnsatisfiedLinkError_t95D9C8F54A363978BA07F2488371B5A8F5581AF3_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		UnsatisfiedLinkError__ctor_m1B877D8FC23D00B1C337A41C6B3E8EBEC0A41C4B(L_8, L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DllLoadUtilsUWP_ROS2_DllLoadUtils_LoadLibrary_m8465119722F68C04B76667FA645F8AFC3E293696_RuntimeMethod_var)));
	}

IL_0027:
	{
		return G_B2_0;
	}
}
// System.IntPtr ROS2.DllLoadUtilsUWP::ROS2.DllLoadUtils.LoadLibraryNoSuffix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DllLoadUtilsUWP_ROS2_DllLoadUtils_LoadLibraryNoSuffix_mF08C427B9BFF1A36827A347E57225B9778780CE9 (DllLoadUtilsUWP_t09AF02A3CA60BC353EE69E22864BFB6C4FFF00A9* __this, String_t* ___0_fileName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A104D015A90F9AC5C50E8ABB0FEEDEC8E32B0A4);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		String_t* L_0 = ___0_fileName;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_0, _stringLiteral0A104D015A90F9AC5C50E8ABB0FEEDEC8E32B0A4, NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		intptr_t L_3;
		L_3 = DllLoadUtilsUWP_LoadPackagedLibrary_mB5548F2280FD5A669CDA22169BFD03DA7E60D6E4(L_2, 0, NULL);
		intptr_t L_4 = L_3;
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_6;
		L_6 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_4, L_5, NULL);
		G_B1_0 = L_4;
		if (!L_6)
		{
			G_B2_0 = L_4;
			goto IL_0027;
		}
	}
	{
		String_t* L_7 = V_0;
		UnsatisfiedLinkError_t95D9C8F54A363978BA07F2488371B5A8F5581AF3* L_8 = (UnsatisfiedLinkError_t95D9C8F54A363978BA07F2488371B5A8F5581AF3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnsatisfiedLinkError_t95D9C8F54A363978BA07F2488371B5A8F5581AF3_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		UnsatisfiedLinkError__ctor_m1B877D8FC23D00B1C337A41C6B3E8EBEC0A41C4B(L_8, L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DllLoadUtilsUWP_ROS2_DllLoadUtils_LoadLibraryNoSuffix_mF08C427B9BFF1A36827A347E57225B9778780CE9_RuntimeMethod_var)));
	}

IL_0027:
	{
		return G_B2_0;
	}
}
// System.Void ROS2.DllLoadUtilsUWP::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DllLoadUtilsUWP__ctor_mB0E996F3686CFC62D0C76EFCBA1CE9B15C330026 (DllLoadUtilsUWP_t09AF02A3CA60BC353EE69E22864BFB6C4FFF00A9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.IntPtr ROS2.DllLoadUtilsWindowsDesktop::LoadLibrary(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DllLoadUtilsWindowsDesktop_LoadLibrary_m1BFE1D8CD1E2B3641C0A57DF1DA083A58BE89FDC (String_t* ___0_fileName, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kernel32_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "LoadLibrary", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_fileName' to native representation
	char* ____0_fileName_marshaled = NULL;
	____0_fileName_marshaled = il2cpp_codegen_marshal_string(___0_fileName);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(LoadLibrary)(____0_fileName_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_fileName_marshaled);
	#endif
	il2cpp_codegen_marshal_store_last_error();

	// Marshaling cleanup of parameter '___0_fileName' native representation
	il2cpp_codegen_marshal_free(____0_fileName_marshaled);
	____0_fileName_marshaled = NULL;

	return returnValue;
}
// System.Int32 ROS2.DllLoadUtilsWindowsDesktop::FreeLibrary(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DllLoadUtilsWindowsDesktop_FreeLibrary_m4A7EAD60217C3A0F597CD12CF8285CED38FA16D1 (intptr_t ___0_handle, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kernel32_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "FreeLibrary", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FreeLibrary)(___0_handle);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_handle);
	#endif
	il2cpp_codegen_marshal_store_last_error();

	return returnValue;
}
// System.IntPtr ROS2.DllLoadUtilsWindowsDesktop::GetProcAddress(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DllLoadUtilsWindowsDesktop_GetProcAddress_mC92AEC48C242B60994840F70B389F918644303CC (intptr_t ___0_handle, String_t* ___1_procedureName, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kernel32_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "GetProcAddress", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_procedureName' to native representation
	char* ____1_procedureName_marshaled = NULL;
	____1_procedureName_marshaled = il2cpp_codegen_marshal_string(___1_procedureName);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GetProcAddress)(___0_handle, ____1_procedureName_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_handle, ____1_procedureName_marshaled);
	#endif
	il2cpp_codegen_marshal_store_last_error();

	// Marshaling cleanup of parameter '___1_procedureName' native representation
	il2cpp_codegen_marshal_free(____1_procedureName_marshaled);
	____1_procedureName_marshaled = NULL;

	return returnValue;
}
// System.Void ROS2.DllLoadUtilsWindowsDesktop::ROS2.DllLoadUtils.FreeLibrary(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DllLoadUtilsWindowsDesktop_ROS2_DllLoadUtils_FreeLibrary_m01EE0D275C4B2F9FE833D57784F65D6474D41EBC (DllLoadUtilsWindowsDesktop_tD963BD6535E5C71C4DFA7C13DEB5904A34AEA0F0* __this, intptr_t ___0_handle, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_handle;
		int32_t L_1;
		L_1 = DllLoadUtilsWindowsDesktop_FreeLibrary_m4A7EAD60217C3A0F597CD12CF8285CED38FA16D1(L_0, NULL);
		return;
	}
}
// System.IntPtr ROS2.DllLoadUtilsWindowsDesktop::ROS2.DllLoadUtils.GetProcAddress(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DllLoadUtilsWindowsDesktop_ROS2_DllLoadUtils_GetProcAddress_m7FEA1E0BDC467F3F798F9340F8D8E45B785EE62F (DllLoadUtilsWindowsDesktop_tD963BD6535E5C71C4DFA7C13DEB5904A34AEA0F0* __this, intptr_t ___0_dllHandle, String_t* ___1_name, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_dllHandle;
		String_t* L_1 = ___1_name;
		intptr_t L_2;
		L_2 = DllLoadUtilsWindowsDesktop_GetProcAddress_mC92AEC48C242B60994840F70B389F918644303CC(L_0, L_1, NULL);
		return L_2;
	}
}
// System.IntPtr ROS2.DllLoadUtilsWindowsDesktop::ROS2.DllLoadUtils.LoadLibrary(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DllLoadUtilsWindowsDesktop_ROS2_DllLoadUtils_LoadLibrary_mBCB94E399BED777FFCC55A219DC55DAB71F33C41 (DllLoadUtilsWindowsDesktop_tD963BD6535E5C71C4DFA7C13DEB5904A34AEA0F0* __this, String_t* ___0_fileName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA774568E563D66749C6AE3C9ED661AA85D0B3956);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		String_t* L_0 = ___0_fileName;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_0, _stringLiteralA774568E563D66749C6AE3C9ED661AA85D0B3956, NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		intptr_t L_3;
		L_3 = DllLoadUtilsWindowsDesktop_LoadLibrary_m1BFE1D8CD1E2B3641C0A57DF1DA083A58BE89FDC(L_2, NULL);
		intptr_t L_4 = L_3;
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_6;
		L_6 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_4, L_5, NULL);
		G_B1_0 = L_4;
		if (!L_6)
		{
			G_B2_0 = L_4;
			goto IL_0026;
		}
	}
	{
		String_t* L_7 = V_0;
		UnsatisfiedLinkError_t95D9C8F54A363978BA07F2488371B5A8F5581AF3* L_8 = (UnsatisfiedLinkError_t95D9C8F54A363978BA07F2488371B5A8F5581AF3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnsatisfiedLinkError_t95D9C8F54A363978BA07F2488371B5A8F5581AF3_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		UnsatisfiedLinkError__ctor_m1B877D8FC23D00B1C337A41C6B3E8EBEC0A41C4B(L_8, L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DllLoadUtilsWindowsDesktop_ROS2_DllLoadUtils_LoadLibrary_mBCB94E399BED777FFCC55A219DC55DAB71F33C41_RuntimeMethod_var)));
	}

IL_0026:
	{
		return G_B2_0;
	}
}
// System.IntPtr ROS2.DllLoadUtilsWindowsDesktop::ROS2.DllLoadUtils.LoadLibraryNoSuffix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DllLoadUtilsWindowsDesktop_ROS2_DllLoadUtils_LoadLibraryNoSuffix_mC1D16A91C073E3A64731165AD986CB953F8DEBDD (DllLoadUtilsWindowsDesktop_tD963BD6535E5C71C4DFA7C13DEB5904A34AEA0F0* __this, String_t* ___0_fileName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A104D015A90F9AC5C50E8ABB0FEEDEC8E32B0A4);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		String_t* L_0 = ___0_fileName;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_0, _stringLiteral0A104D015A90F9AC5C50E8ABB0FEEDEC8E32B0A4, NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		intptr_t L_3;
		L_3 = DllLoadUtilsWindowsDesktop_LoadLibrary_m1BFE1D8CD1E2B3641C0A57DF1DA083A58BE89FDC(L_2, NULL);
		intptr_t L_4 = L_3;
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_6;
		L_6 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_4, L_5, NULL);
		G_B1_0 = L_4;
		if (!L_6)
		{
			G_B2_0 = L_4;
			goto IL_0026;
		}
	}
	{
		String_t* L_7 = V_0;
		UnsatisfiedLinkError_t95D9C8F54A363978BA07F2488371B5A8F5581AF3* L_8 = (UnsatisfiedLinkError_t95D9C8F54A363978BA07F2488371B5A8F5581AF3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnsatisfiedLinkError_t95D9C8F54A363978BA07F2488371B5A8F5581AF3_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		UnsatisfiedLinkError__ctor_m1B877D8FC23D00B1C337A41C6B3E8EBEC0A41C4B(L_8, L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DllLoadUtilsWindowsDesktop_ROS2_DllLoadUtils_LoadLibraryNoSuffix_mC1D16A91C073E3A64731165AD986CB953F8DEBDD_RuntimeMethod_var)));
	}

IL_0026:
	{
		return G_B2_0;
	}
}
// System.Void ROS2.DllLoadUtilsWindowsDesktop::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DllLoadUtilsWindowsDesktop__ctor_mA453638EB6465997DA25134E15E81AA12B630B20 (DllLoadUtilsWindowsDesktop_tD963BD6535E5C71C4DFA7C13DEB5904A34AEA0F0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.IntPtr ROS2.DllLoadUtilsUnix::dlopen(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DllLoadUtilsUnix_dlopen_m165CA5AB75B9E3804FAF643AB4011412E234777E (String_t* ___0_fileName, int32_t ___1_flags, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libdl_so_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libdl.so.2"), "dlopen", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_fileName' to native representation
	char* ____0_fileName_marshaled = NULL;
	____0_fileName_marshaled = il2cpp_codegen_marshal_string(___0_fileName);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libdl_so_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(dlopen)(____0_fileName_marshaled, ___1_flags);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_fileName_marshaled, ___1_flags);
	#endif

	// Marshaling cleanup of parameter '___0_fileName' native representation
	il2cpp_codegen_marshal_free(____0_fileName_marshaled);
	____0_fileName_marshaled = NULL;

	return returnValue;
}
// System.IntPtr ROS2.DllLoadUtilsUnix::dlsym(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DllLoadUtilsUnix_dlsym_m627B8C6DACA25E869606801620871397CC750441 (intptr_t ___0_handle, String_t* ___1_symbol, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libdl_so_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libdl.so.2"), "dlsym", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_symbol' to native representation
	char* ____1_symbol_marshaled = NULL;
	____1_symbol_marshaled = il2cpp_codegen_marshal_string(___1_symbol);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libdl_so_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(dlsym)(___0_handle, ____1_symbol_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_handle, ____1_symbol_marshaled);
	#endif

	// Marshaling cleanup of parameter '___1_symbol' native representation
	il2cpp_codegen_marshal_free(____1_symbol_marshaled);
	____1_symbol_marshaled = NULL;

	return returnValue;
}
// System.Int32 ROS2.DllLoadUtilsUnix::dlclose(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DllLoadUtilsUnix_dlclose_m0E3988FEDE9398DEF42F71809CB21DE29262409E (intptr_t ___0_handle, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libdl_so_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libdl.so.2"), "dlclose", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libdl_so_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(dlclose)(___0_handle);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_handle);
	#endif

	return returnValue;
}
// System.IntPtr ROS2.DllLoadUtilsUnix::dlerror()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DllLoadUtilsUnix_dlerror_mC583B0589B8D89173E6546CB134ADB24E6E64ACD (const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libdl_so_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libdl.so.2"), "dlerror", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libdl_so_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(dlerror)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Void ROS2.DllLoadUtilsUnix::CheckPreloadLibraries()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DllLoadUtilsUnix_CheckPreloadLibraries_m7293FE7BBEDB65506A524012A8459CA6C04FAA6B (DllLoadUtilsUnix_tCAF2656F9FA3696C2E96C08EF84D415F06192EB9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DllLoadUtilsUnix_tCAF2656F9FA3696C2E96C08EF84D415F06192EB9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalVariables_t3CBA016557FB31DD42A020D559A0D577B73146B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BB232DB7EDC10532DFE5585E589BD132CE1C90A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8926D1F23A6193D098BE746937803D482B430E87);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((DllLoadUtilsUnix_tCAF2656F9FA3696C2E96C08EF84D415F06192EB9_StaticFields*)il2cpp_codegen_static_fields_for(DllLoadUtilsUnix_tCAF2656F9FA3696C2E96C08EF84D415F06192EB9_il2cpp_TypeInfo_var))->___libPreloaded_2;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GlobalVariables_t3CBA016557FB31DD42A020D559A0D577B73146B1_il2cpp_TypeInfo_var);
		String_t* L_1 = ((GlobalVariables_t3CBA016557FB31DD42A020D559A0D577B73146B1_StaticFields*)il2cpp_codegen_static_fields_for(GlobalVariables_t3CBA016557FB31DD42A020D559A0D577B73146B1_il2cpp_TypeInfo_var))->___preloadLibraryName_1;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_2)
		{
			goto IL_0019;
		}
	}

IL_0018:
	{
		return;
	}

IL_0019:
	{
		il2cpp_codegen_runtime_class_init_inline(Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_il2cpp_TypeInfo_var);
		Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D* L_3;
		L_3 = Ros2csLogger_GetInstance_m1E6254F517D7424C914CDD20035721DD2A7E9C3B(NULL);
		il2cpp_codegen_runtime_class_init_inline(GlobalVariables_t3CBA016557FB31DD42A020D559A0D577B73146B1_il2cpp_TypeInfo_var);
		String_t* L_4 = ((GlobalVariables_t3CBA016557FB31DD42A020D559A0D577B73146B1_StaticFields*)il2cpp_codegen_static_fields_for(GlobalVariables_t3CBA016557FB31DD42A020D559A0D577B73146B1_il2cpp_TypeInfo_var))->___preloadLibraryName_1;
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral2BB232DB7EDC10532DFE5585E589BD132CE1C90A, L_4, NULL);
		NullCheck(L_3);
		Ros2csLogger_LogDebug_mA487124DD0DCBFC7F43410E041C4F1A060A90943(L_3, L_5, NULL);
		String_t* L_6 = ((GlobalVariables_t3CBA016557FB31DD42A020D559A0D577B73146B1_StaticFields*)il2cpp_codegen_static_fields_for(GlobalVariables_t3CBA016557FB31DD42A020D559A0D577B73146B1_il2cpp_TypeInfo_var))->___preloadLibraryName_1;
		intptr_t L_7;
		L_7 = DllLoadUtilsUnix_Load_mFA4C4A92A66957C9B19D3E4AC62331A0E74BFE39(__this, L_6, NULL);
		Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D* L_8;
		L_8 = Ros2csLogger_GetInstance_m1E6254F517D7424C914CDD20035721DD2A7E9C3B(NULL);
		String_t* L_9 = ((GlobalVariables_t3CBA016557FB31DD42A020D559A0D577B73146B1_StaticFields*)il2cpp_codegen_static_fields_for(GlobalVariables_t3CBA016557FB31DD42A020D559A0D577B73146B1_il2cpp_TypeInfo_var))->___preloadLibraryName_1;
		String_t* L_10;
		L_10 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral2BB232DB7EDC10532DFE5585E589BD132CE1C90A, L_9, _stringLiteral8926D1F23A6193D098BE746937803D482B430E87, NULL);
		NullCheck(L_8);
		Ros2csLogger_LogDebug_mA487124DD0DCBFC7F43410E041C4F1A060A90943(L_8, L_10, NULL);
		((DllLoadUtilsUnix_tCAF2656F9FA3696C2E96C08EF84D415F06192EB9_StaticFields*)il2cpp_codegen_static_fields_for(DllLoadUtilsUnix_tCAF2656F9FA3696C2E96C08EF84D415F06192EB9_il2cpp_TypeInfo_var))->___libPreloaded_2 = (bool)1;
		return;
	}
}
// System.Void ROS2.DllLoadUtilsUnix::FreeLibrary(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DllLoadUtilsUnix_FreeLibrary_mEFE578A237EC8FC1E96C1B50B547E6CEAB34E5C0 (DllLoadUtilsUnix_tCAF2656F9FA3696C2E96C08EF84D415F06192EB9* __this, intptr_t ___0_handle, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_handle;
		int32_t L_1;
		L_1 = DllLoadUtilsUnix_dlclose_m0E3988FEDE9398DEF42F71809CB21DE29262409E(L_0, NULL);
		return;
	}
}
// System.IntPtr ROS2.DllLoadUtilsUnix::GetProcAddress(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DllLoadUtilsUnix_GetProcAddress_m2FBC0A5DB22DFD3D15303F2A476A2CF3770F11C0 (DllLoadUtilsUnix_tCAF2656F9FA3696C2E96C08EF84D415F06192EB9* __this, intptr_t ___0_dllHandle, String_t* ___1_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = DllLoadUtilsUnix_dlerror_mC583B0589B8D89173E6546CB134ADB24E6E64ACD(NULL);
		intptr_t L_1 = ___0_dllHandle;
		String_t* L_2 = ___1_name;
		intptr_t L_3;
		L_3 = DllLoadUtilsUnix_dlsym_m627B8C6DACA25E869606801620871397CC750441(L_1, L_2, NULL);
		intptr_t L_4;
		L_4 = DllLoadUtilsUnix_dlerror_mC583B0589B8D89173E6546CB134ADB24E6E64ACD(NULL);
		V_0 = L_4;
		intptr_t L_5 = V_0;
		intptr_t L_6 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_7;
		L_7 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_5, L_6, NULL);
		G_B1_0 = L_3;
		if (!L_7)
		{
			G_B2_0 = L_3;
			goto IL_0036;
		}
	}
	{
		intptr_t L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var)));
		String_t* L_9;
		L_9 = Marshal_PtrToStringAnsi_m8DF88D9F22FCF791C538A36C9233B3882F579B4A(L_8, NULL);
		String_t* L_10;
		L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral136C02AD3C58D35059D73A24D11B4E44CBD93D35)), L_9, NULL);
		Exception_t* L_11 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DllLoadUtilsUnix_GetProcAddress_m2FBC0A5DB22DFD3D15303F2A476A2CF3770F11C0_RuntimeMethod_var)));
	}

IL_0036:
	{
		return G_B2_0;
	}
}
// System.IntPtr ROS2.DllLoadUtilsUnix::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DllLoadUtilsUnix_Load_mFA4C4A92A66957C9B19D3E4AC62331A0E74BFE39 (DllLoadUtilsUnix_tCAF2656F9FA3696C2E96C08EF84D415F06192EB9* __this, String_t* ___0_libraryFileName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalVariables_t3CBA016557FB31DD42A020D559A0D577B73146B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral398803902029A56CF0224A0A4E4E9A93C45A0BA9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72BEAD40626D332E9E48C02BCCE913FAD1416B50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB46ABC1B04F6DDB759A2C890E7B803B83A74C73F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4EBDA851FBD92CD334D8D8A0D8568128F8FB3A6);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_runtime_class_init_inline(GlobalVariables_t3CBA016557FB31DD42A020D559A0D577B73146B1_il2cpp_TypeInfo_var);
		String_t* L_0 = ((GlobalVariables_t3CBA016557FB31DD42A020D559A0D577B73146B1_StaticFields*)il2cpp_codegen_static_fields_for(GlobalVariables_t3CBA016557FB31DD42A020D559A0D577B73146B1_il2cpp_TypeInfo_var))->___absolutePath_2;
		String_t* L_1 = ___0_libraryFileName;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_0, L_1, NULL);
		V_0 = L_2;
		il2cpp_codegen_runtime_class_init_inline(Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_il2cpp_TypeInfo_var);
		Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D* L_3;
		L_3 = Ros2csLogger_GetInstance_m1E6254F517D7424C914CDD20035721DD2A7E9C3B(NULL);
		String_t* L_4 = V_0;
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral398803902029A56CF0224A0A4E4E9A93C45A0BA9, L_4, NULL);
		NullCheck(L_3);
		Ros2csLogger_LogDebug_mA487124DD0DCBFC7F43410E041C4F1A060A90943(L_3, L_5, NULL);
		String_t* L_6 = V_0;
		intptr_t L_7;
		L_7 = DllLoadUtilsUnix_dlopen_m165CA5AB75B9E3804FAF643AB4011412E234777E(L_6, 2, NULL);
		V_1 = L_7;
		intptr_t L_8 = V_1;
		intptr_t L_9 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_10;
		L_10 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_0090;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GlobalVariables_t3CBA016557FB31DD42A020D559A0D577B73146B1_il2cpp_TypeInfo_var);
		String_t* L_11 = ((GlobalVariables_t3CBA016557FB31DD42A020D559A0D577B73146B1_StaticFields*)il2cpp_codegen_static_fields_for(GlobalVariables_t3CBA016557FB31DD42A020D559A0D577B73146B1_il2cpp_TypeInfo_var))->___absolutePath_2;
		bool L_12;
		L_12 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_11, NULL);
		if (L_12)
		{
			goto IL_0090;
		}
	}
	{
		intptr_t L_13;
		L_13 = DllLoadUtilsUnix_dlerror_mC583B0589B8D89173E6546CB134ADB24E6E64ACD(NULL);
		V_2 = L_13;
		il2cpp_codegen_runtime_class_init_inline(Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_il2cpp_TypeInfo_var);
		Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D* L_14;
		L_14 = Ros2csLogger_GetInstance_m1E6254F517D7424C914CDD20035721DD2A7E9C3B(NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral72BEAD40626D332E9E48C02BCCE913FAD1416B50);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral72BEAD40626D332E9E48C02BCCE913FAD1416B50);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
		String_t* L_18 = V_0;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_18);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_17;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_19;
		intptr_t L_21 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		String_t* L_22;
		L_22 = Marshal_PtrToStringAnsi_m8DF88D9F22FCF791C538A36C9233B3882F579B4A(L_21, NULL);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_22);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_22);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = L_20;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteralB4EBDA851FBD92CD334D8D8A0D8568128F8FB3A6);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralB4EBDA851FBD92CD334D8D8A0D8568128F8FB3A6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = L_23;
		String_t* L_25 = ___0_libraryFileName;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_25);
		String_t* L_26;
		L_26 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_24, NULL);
		NullCheck(L_14);
		Ros2csLogger_LogDebug_mA487124DD0DCBFC7F43410E041C4F1A060A90943(L_14, L_26, NULL);
		String_t* L_27 = ___0_libraryFileName;
		V_0 = L_27;
		String_t* L_28 = V_0;
		intptr_t L_29;
		L_29 = DllLoadUtilsUnix_dlopen_m165CA5AB75B9E3804FAF643AB4011412E234777E(L_28, 2, NULL);
		V_1 = L_29;
	}

IL_0090:
	{
		intptr_t L_30 = V_1;
		intptr_t L_31 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_32;
		L_32 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_30, L_31, NULL);
		if (!L_32)
		{
			goto IL_00a4;
		}
	}
	{
		String_t* L_33 = V_0;
		UnsatisfiedLinkError_t95D9C8F54A363978BA07F2488371B5A8F5581AF3* L_34 = (UnsatisfiedLinkError_t95D9C8F54A363978BA07F2488371B5A8F5581AF3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnsatisfiedLinkError_t95D9C8F54A363978BA07F2488371B5A8F5581AF3_il2cpp_TypeInfo_var)));
		NullCheck(L_34);
		UnsatisfiedLinkError__ctor_m1B877D8FC23D00B1C337A41C6B3E8EBEC0A41C4B(L_34, L_33, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_34, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DllLoadUtilsUnix_Load_mFA4C4A92A66957C9B19D3E4AC62331A0E74BFE39_RuntimeMethod_var)));
	}

IL_00a4:
	{
		il2cpp_codegen_runtime_class_init_inline(Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_il2cpp_TypeInfo_var);
		Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D* L_35;
		L_35 = Ros2csLogger_GetInstance_m1E6254F517D7424C914CDD20035721DD2A7E9C3B(NULL);
		String_t* L_36 = V_0;
		String_t* L_37;
		L_37 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralB46ABC1B04F6DDB759A2C890E7B803B83A74C73F, L_36, NULL);
		NullCheck(L_35);
		Ros2csLogger_LogDebug_mA487124DD0DCBFC7F43410E041C4F1A060A90943(L_35, L_37, NULL);
		intptr_t L_38 = V_1;
		return L_38;
	}
}
// System.IntPtr ROS2.DllLoadUtilsUnix::LoadLibraryByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DllLoadUtilsUnix_LoadLibraryByName_m64DF75C2BA63E046FCB40F520127FE7887D7C4AD (DllLoadUtilsUnix_tCAF2656F9FA3696C2E96C08EF84D415F06192EB9* __this, String_t* ___0_libraryFileName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalVariables_t3CBA016557FB31DD42A020D559A0D577B73146B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GlobalVariables_t3CBA016557FB31DD42A020D559A0D577B73146B1_il2cpp_TypeInfo_var);
		bool L_0 = ((GlobalVariables_t3CBA016557FB31DD42A020D559A0D577B73146B1_StaticFields*)il2cpp_codegen_static_fields_for(GlobalVariables_t3CBA016557FB31DD42A020D559A0D577B73146B1_il2cpp_TypeInfo_var))->___preloadLibrary_0;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		DllLoadUtilsUnix_CheckPreloadLibraries_m7293FE7BBEDB65506A524012A8459CA6C04FAA6B(__this, NULL);
	}

IL_000d:
	{
		String_t* L_1 = ___0_libraryFileName;
		intptr_t L_2;
		L_2 = DllLoadUtilsUnix_Load_mFA4C4A92A66957C9B19D3E4AC62331A0E74BFE39(__this, L_1, NULL);
		return L_2;
	}
}
// System.IntPtr ROS2.DllLoadUtilsUnix::LoadLibrary(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DllLoadUtilsUnix_LoadLibrary_m6FC3F6FCB71EA52DDC1203C27439123658C2104C (DllLoadUtilsUnix_tCAF2656F9FA3696C2E96C08EF84D415F06192EB9* __this, String_t* ___0_fileName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral822BBE2B166571D1198C9A5A09A2130F908AA3E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD81936DC825E2D065E79C7A2EF1941AC3BCAC92);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___0_fileName;
		String_t* L_1;
		L_1 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral822BBE2B166571D1198C9A5A09A2130F908AA3E7, L_0, _stringLiteralFD81936DC825E2D065E79C7A2EF1941AC3BCAC92, NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		intptr_t L_3;
		L_3 = DllLoadUtilsUnix_LoadLibraryByName_m64DF75C2BA63E046FCB40F520127FE7887D7C4AD(__this, L_2, NULL);
		return L_3;
	}
}
// System.IntPtr ROS2.DllLoadUtilsUnix::LoadLibraryNoSuffix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DllLoadUtilsUnix_LoadLibraryNoSuffix_mE39494A6A5F49C5E8D3B039093413D0100B76E5E (DllLoadUtilsUnix_tCAF2656F9FA3696C2E96C08EF84D415F06192EB9* __this, String_t* ___0_fileName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral822BBE2B166571D1198C9A5A09A2130F908AA3E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1FB128E8250FDC938418FE8568B1D0C8E456416);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___0_fileName;
		String_t* L_1;
		L_1 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral822BBE2B166571D1198C9A5A09A2130F908AA3E7, L_0, _stringLiteralB1FB128E8250FDC938418FE8568B1D0C8E456416, NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		intptr_t L_3;
		L_3 = DllLoadUtilsUnix_LoadLibraryByName_m64DF75C2BA63E046FCB40F520127FE7887D7C4AD(__this, L_2, NULL);
		return L_3;
	}
}
// System.Void ROS2.DllLoadUtilsUnix::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DllLoadUtilsUnix__ctor_m9AABF216AF1961B64ADAB7081A4D00C24004C762 (DllLoadUtilsUnix_tCAF2656F9FA3696C2E96C08EF84D415F06192EB9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.IntPtr ROS2.DllLoadUtilsMacOSX::dlopen(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DllLoadUtilsMacOSX_dlopen_m5F7C860FB0CA60BE17A7D80DEF687ADD9D0DCA5D (String_t* ___0_fileName, int32_t ___1_flags, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libdl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libdl.dylib"), "dlopen", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_fileName' to native representation
	char* ____0_fileName_marshaled = NULL;
	____0_fileName_marshaled = il2cpp_codegen_marshal_string(___0_fileName);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libdl_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(dlopen)(____0_fileName_marshaled, ___1_flags);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_fileName_marshaled, ___1_flags);
	#endif

	// Marshaling cleanup of parameter '___0_fileName' native representation
	il2cpp_codegen_marshal_free(____0_fileName_marshaled);
	____0_fileName_marshaled = NULL;

	return returnValue;
}
// System.IntPtr ROS2.DllLoadUtilsMacOSX::dlsym(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DllLoadUtilsMacOSX_dlsym_mB8B6E6115AC7AF5848C2659B1FC8FA3D87CA4085 (intptr_t ___0_handle, String_t* ___1_symbol, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libdl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libdl.dylib"), "dlsym", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_symbol' to native representation
	char* ____1_symbol_marshaled = NULL;
	____1_symbol_marshaled = il2cpp_codegen_marshal_string(___1_symbol);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libdl_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(dlsym)(___0_handle, ____1_symbol_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_handle, ____1_symbol_marshaled);
	#endif

	// Marshaling cleanup of parameter '___1_symbol' native representation
	il2cpp_codegen_marshal_free(____1_symbol_marshaled);
	____1_symbol_marshaled = NULL;

	return returnValue;
}
// System.Int32 ROS2.DllLoadUtilsMacOSX::dlclose(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DllLoadUtilsMacOSX_dlclose_m14A1592183BDD2848214C2A9E055C70BBB5ADAC3 (intptr_t ___0_handle, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libdl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libdl.dylib"), "dlclose", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libdl_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(dlclose)(___0_handle);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_handle);
	#endif

	return returnValue;
}
// System.IntPtr ROS2.DllLoadUtilsMacOSX::dlerror()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DllLoadUtilsMacOSX_dlerror_m0FA247A38B1D70F43729E323561B8F37F21099FF (const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libdl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libdl.dylib"), "dlerror", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libdl_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(dlerror)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Void ROS2.DllLoadUtilsMacOSX::FreeLibrary(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DllLoadUtilsMacOSX_FreeLibrary_mDE6B8A66A56F2D3700B45529136C0A42874FF6B7 (DllLoadUtilsMacOSX_tC6B691D5E65D6717F56414A7FA67000B83670CC5* __this, intptr_t ___0_handle, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_handle;
		int32_t L_1;
		L_1 = DllLoadUtilsMacOSX_dlclose_m14A1592183BDD2848214C2A9E055C70BBB5ADAC3(L_0, NULL);
		return;
	}
}
// System.IntPtr ROS2.DllLoadUtilsMacOSX::GetProcAddress(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DllLoadUtilsMacOSX_GetProcAddress_m18B1BF6E6E988C53DF1277BA0332DD4352475877 (DllLoadUtilsMacOSX_tC6B691D5E65D6717F56414A7FA67000B83670CC5* __this, intptr_t ___0_dllHandle, String_t* ___1_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = DllLoadUtilsMacOSX_dlerror_m0FA247A38B1D70F43729E323561B8F37F21099FF(NULL);
		intptr_t L_1 = ___0_dllHandle;
		String_t* L_2 = ___1_name;
		intptr_t L_3;
		L_3 = DllLoadUtilsMacOSX_dlsym_mB8B6E6115AC7AF5848C2659B1FC8FA3D87CA4085(L_1, L_2, NULL);
		intptr_t L_4;
		L_4 = DllLoadUtilsMacOSX_dlerror_m0FA247A38B1D70F43729E323561B8F37F21099FF(NULL);
		V_0 = L_4;
		intptr_t L_5 = V_0;
		intptr_t L_6 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_7;
		L_7 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_5, L_6, NULL);
		G_B1_0 = L_3;
		if (!L_7)
		{
			G_B2_0 = L_3;
			goto IL_0036;
		}
	}
	{
		intptr_t L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var)));
		String_t* L_9;
		L_9 = Marshal_PtrToStringAnsi_m8DF88D9F22FCF791C538A36C9233B3882F579B4A(L_8, NULL);
		String_t* L_10;
		L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral136C02AD3C58D35059D73A24D11B4E44CBD93D35)), L_9, NULL);
		Exception_t* L_11 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DllLoadUtilsMacOSX_GetProcAddress_m18B1BF6E6E988C53DF1277BA0332DD4352475877_RuntimeMethod_var)));
	}

IL_0036:
	{
		return G_B2_0;
	}
}
// System.IntPtr ROS2.DllLoadUtilsMacOSX::LoadLibrary(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DllLoadUtilsMacOSX_LoadLibrary_mBE64FAEFDC423376C4DAA9BCA9302CA0C87115F0 (DllLoadUtilsMacOSX_tC6B691D5E65D6717F56414A7FA67000B83670CC5* __this, String_t* ___0_fileName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral822BBE2B166571D1198C9A5A09A2130F908AA3E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE39E570FD194883C0CD9FFC4CEFC53427C27F06E);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		String_t* L_0 = ___0_fileName;
		String_t* L_1;
		L_1 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral822BBE2B166571D1198C9A5A09A2130F908AA3E7, L_0, _stringLiteralE39E570FD194883C0CD9FFC4CEFC53427C27F06E, NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		intptr_t L_3;
		L_3 = DllLoadUtilsMacOSX_dlopen_m5F7C860FB0CA60BE17A7D80DEF687ADD9D0DCA5D(L_2, 2, NULL);
		intptr_t L_4 = L_3;
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_6;
		L_6 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_4, L_5, NULL);
		G_B1_0 = L_4;
		if (!L_6)
		{
			G_B2_0 = L_4;
			goto IL_002c;
		}
	}
	{
		String_t* L_7 = V_0;
		UnsatisfiedLinkError_t95D9C8F54A363978BA07F2488371B5A8F5581AF3* L_8 = (UnsatisfiedLinkError_t95D9C8F54A363978BA07F2488371B5A8F5581AF3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnsatisfiedLinkError_t95D9C8F54A363978BA07F2488371B5A8F5581AF3_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		UnsatisfiedLinkError__ctor_m1B877D8FC23D00B1C337A41C6B3E8EBEC0A41C4B(L_8, L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DllLoadUtilsMacOSX_LoadLibrary_mBE64FAEFDC423376C4DAA9BCA9302CA0C87115F0_RuntimeMethod_var)));
	}

IL_002c:
	{
		return G_B2_0;
	}
}
// System.IntPtr ROS2.DllLoadUtilsMacOSX::LoadLibraryNoSuffix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DllLoadUtilsMacOSX_LoadLibraryNoSuffix_m9B44E81F7BC1295A4F27FDBD0CC3250D95107216 (DllLoadUtilsMacOSX_tC6B691D5E65D6717F56414A7FA67000B83670CC5* __this, String_t* ___0_fileName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral822BBE2B166571D1198C9A5A09A2130F908AA3E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1BE71E920B70B431E17F147C5CC565749839574);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		String_t* L_0 = ___0_fileName;
		String_t* L_1;
		L_1 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral822BBE2B166571D1198C9A5A09A2130F908AA3E7, L_0, _stringLiteralF1BE71E920B70B431E17F147C5CC565749839574, NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		intptr_t L_3;
		L_3 = DllLoadUtilsMacOSX_dlopen_m5F7C860FB0CA60BE17A7D80DEF687ADD9D0DCA5D(L_2, 2, NULL);
		intptr_t L_4 = L_3;
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_6;
		L_6 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_4, L_5, NULL);
		G_B1_0 = L_4;
		if (!L_6)
		{
			G_B2_0 = L_4;
			goto IL_002c;
		}
	}
	{
		String_t* L_7 = V_0;
		UnsatisfiedLinkError_t95D9C8F54A363978BA07F2488371B5A8F5581AF3* L_8 = (UnsatisfiedLinkError_t95D9C8F54A363978BA07F2488371B5A8F5581AF3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnsatisfiedLinkError_t95D9C8F54A363978BA07F2488371B5A8F5581AF3_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		UnsatisfiedLinkError__ctor_m1B877D8FC23D00B1C337A41C6B3E8EBEC0A41C4B(L_8, L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DllLoadUtilsMacOSX_LoadLibraryNoSuffix_m9B44E81F7BC1295A4F27FDBD0CC3250D95107216_RuntimeMethod_var)));
	}

IL_002c:
	{
		return G_B2_0;
	}
}
// System.Void ROS2.DllLoadUtilsMacOSX::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DllLoadUtilsMacOSX__ctor_m887A815344901372997A848869D9034772C0F399 (DllLoadUtilsMacOSX_tC6B691D5E65D6717F56414A7FA67000B83670CC5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void ROS2.UnsatisfiedLinkError::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsatisfiedLinkError__ctor_m45E8138EB6A78D3FCCF0CB40EA5C6A763F48FF85 (UnsatisfiedLinkError_t95D9C8F54A363978BA07F2488371B5A8F5581AF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(__this, NULL);
		return;
	}
}
// System.Void ROS2.UnsatisfiedLinkError::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsatisfiedLinkError__ctor_m1B877D8FC23D00B1C337A41C6B3E8EBEC0A41C4B (UnsatisfiedLinkError_t95D9C8F54A363978BA07F2488371B5A8F5581AF3* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		return;
	}
}
// System.Void ROS2.UnsatisfiedLinkError::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsatisfiedLinkError__ctor_m276AF76515DB485146616F1A908BA85EF9E50D40 (UnsatisfiedLinkError_t95D9C8F54A363978BA07F2488371B5A8F5581AF3* __this, String_t* ___0_message, Exception_t* ___1_inner, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		Exception_t* L_1 = ___1_inner;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(__this, L_0, L_1, NULL);
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
// System.Void ROS2.UnknownPlatformError::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnknownPlatformError__ctor_mBFF2D804C4FEF2D01650582FA263C7107C8C6BD7 (UnknownPlatformError_t5DAF061D40628B97D1AA050E63C43CA9E36B027F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(__this, NULL);
		return;
	}
}
// System.Void ROS2.UnknownPlatformError::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnknownPlatformError__ctor_m28FB831D337C42A42235C1C5A8292C9755A4B5A3 (UnknownPlatformError_t5DAF061D40628B97D1AA050E63C43CA9E36B027F* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		return;
	}
}
// System.Void ROS2.UnknownPlatformError::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnknownPlatformError__ctor_m82E67ACF9063E355DA43CC68FDB063BBB7538867 (UnknownPlatformError_t5DAF061D40628B97D1AA050E63C43CA9E36B027F* __this, String_t* ___0_message, Exception_t* ___1_inner, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		Exception_t* L_1 = ___1_inner;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(__this, L_0, L_1, NULL);
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
// System.Void ROS2.RuntimeError::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeError__ctor_mBF35755CAA6E1964AF5CD1FE123FB1DCE12CCD6C (RuntimeError_t642B93B4680822C51EF8CA1B918CAA84E4BE375C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(__this, NULL);
		return;
	}
}
// System.Void ROS2.RuntimeError::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeError__ctor_mB011851C8F7691243FFA41F38598D65512C02879 (RuntimeError_t642B93B4680822C51EF8CA1B918CAA84E4BE375C* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		return;
	}
}
// System.Void ROS2.RuntimeError::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeError__ctor_m09323CD3387D069F5A8ADC1E736306C27006495C (RuntimeError_t642B93B4680822C51EF8CA1B918CAA84E4BE375C* __this, String_t* ___0_message, Exception_t* ___1_inner, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		Exception_t* L_1 = ___1_inner;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(__this, L_0, L_1, NULL);
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
// System.Void ROS2.NotInitializedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotInitializedException__ctor_m46353248D56FD91C0B6A4B1AE0D19D5CA0A7D7A7 (NotInitializedException_t50A36E084A8A7B49F17EB63CEF13167336C53EAC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(__this, NULL);
		return;
	}
}
// System.Void ROS2.NotInitializedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotInitializedException__ctor_mB0819C6A699487A0E857F5F81D48DA3316889A9C (NotInitializedException_t50A36E084A8A7B49F17EB63CEF13167336C53EAC* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		return;
	}
}
// System.Void ROS2.NotInitializedException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotInitializedException__ctor_m6A73C91EF3F184EC2E8991F9D455415A60F3C913 (NotInitializedException_t50A36E084A8A7B49F17EB63CEF13167336C53EAC* __this, String_t* ___0_message, Exception_t* ___1_inner, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		Exception_t* L_1 = ___1_inner;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(__this, L_0, L_1, NULL);
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
// System.Void ROS2.InvalidNodeNameException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidNodeNameException__ctor_m05B693C0295A604BBA681EC2699C771A23AD568B (InvalidNodeNameException_t2B3B398B7A2DD047EF775BD9E221D29EA06B6AE5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(__this, NULL);
		return;
	}
}
// System.Void ROS2.InvalidNodeNameException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidNodeNameException__ctor_mE916006BB15ADBCEEA6C9C47074B3F7F3E54F2D4 (InvalidNodeNameException_t2B3B398B7A2DD047EF775BD9E221D29EA06B6AE5* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		return;
	}
}
// System.Void ROS2.InvalidNodeNameException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidNodeNameException__ctor_mAC34C63A0F53A402D35DE26DFEF556953E28DD77 (InvalidNodeNameException_t2B3B398B7A2DD047EF775BD9E221D29EA06B6AE5* __this, String_t* ___0_message, Exception_t* ___1_inner, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		Exception_t* L_1 = ___1_inner;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(__this, L_0, L_1, NULL);
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
// System.Void ROS2.InvalidNamespaceException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidNamespaceException__ctor_mDA18DA6B51E2DEF339213F6916BFBC09C7E37FD1 (InvalidNamespaceException_tD2E1A2EA479047BAD9F8E4FB4D794491CBF11993* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(__this, NULL);
		return;
	}
}
// System.Void ROS2.InvalidNamespaceException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidNamespaceException__ctor_m2A6F857F2093126B4976A3565547399AF88456DC (InvalidNamespaceException_tD2E1A2EA479047BAD9F8E4FB4D794491CBF11993* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		return;
	}
}
// System.Void ROS2.InvalidNamespaceException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidNamespaceException__ctor_mB2A589370A51934047F2F546093A87D44E07538B (InvalidNamespaceException_tD2E1A2EA479047BAD9F8E4FB4D794491CBF11993* __this, String_t* ___0_message, Exception_t* ___1_inner, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		Exception_t* L_1 = ___1_inner;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(__this, L_0, L_1, NULL);
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
// System.Void ROS2.WaitSetEmptyException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitSetEmptyException__ctor_m75AF9A41B488F26C87D4E5A360E187019CD29CDC (WaitSetEmptyException_tE65951081E09DFA7CC1E8FF9DFB3D547AD957EAB* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(__this, NULL);
		return;
	}
}
// System.Void ROS2.WaitSetEmptyException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitSetEmptyException__ctor_mE82B0AB50FAD6C65912AE3369812DE222B0C56D3 (WaitSetEmptyException_tE65951081E09DFA7CC1E8FF9DFB3D547AD957EAB* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_message;
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(__this, L_0, NULL);
		return;
	}
}
// System.Void ROS2.WaitSetEmptyException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitSetEmptyException__ctor_mCD685CC6C9B1EFFE2B628756ED5F09AC47B79E62 (WaitSetEmptyException_tE65951081E09DFA7CC1E8FF9DFB3D547AD957EAB* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_message;
		Exception_t* L_1 = ___1_innerException;
		InvalidOperationException__ctor_m63F5561BE647F655D22C8289E53A5D3A2196B668(__this, L_0, L_1, NULL);
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
// System.Void ROS2.Ros2csLogger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ros2csLogger__ctor_mE011FB9DB49F8C5AD20EBA540E3BAD1499C38C09 (Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// ROS2.LogLevel ROS2.Ros2csLogger::get_LogLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Ros2csLogger_get_LogLevel_m4FF98FB19E2B9790C6020DF8D813F7961167972F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_StaticFields*)il2cpp_codegen_static_fields_for(Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_il2cpp_TypeInfo_var))->___U3CLogLevelU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void ROS2.Ros2csLogger::set_LogLevel(ROS2.LogLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ros2csLogger_set_LogLevel_m9099754D82B928C50B7F78472F89F77AA4092C11 (int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_il2cpp_TypeInfo_var);
		((Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_StaticFields*)il2cpp_codegen_static_fields_for(Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_il2cpp_TypeInfo_var))->___U3CLogLevelU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Void ROS2.Ros2csLogger::setCallback(ROS2.LogLevel,ROS2.Ros2csLogger/Callback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ros2csLogger_setCallback_mB201D14CA8C21A4CB4116861A6C1D0493DBCF00C (int32_t ___0_level, Callback_tF1258F518E485A36439361A50245F89E59DAACE8* ___1_cb, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m1AD3599D5AC8313BA9B586F3BDC1FCB03532DC22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_il2cpp_TypeInfo_var);
		Dictionary_2_t2C711015AA5938D6B94F90272468FF95F25556E8* L_0 = ((Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_StaticFields*)il2cpp_codegen_static_fields_for(Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_il2cpp_TypeInfo_var))->___LevelCallbacks_3;
		int32_t L_1 = ___0_level;
		Callback_tF1258F518E485A36439361A50245F89E59DAACE8* L_2 = ___1_cb;
		NullCheck(L_0);
		Dictionary_2_set_Item_m1AD3599D5AC8313BA9B586F3BDC1FCB03532DC22(L_0, L_1, L_2, Dictionary_2_set_Item_m1AD3599D5AC8313BA9B586F3BDC1FCB03532DC22_RuntimeMethod_var);
		return;
	}
}
// ROS2.Ros2csLogger ROS2.Ros2csLogger::GetInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D* Ros2csLogger_GetInstance_m1E6254F517D7424C914CDD20035721DD2A7E9C3B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_il2cpp_TypeInfo_var);
		Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D* L_0 = ((Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_StaticFields*)il2cpp_codegen_static_fields_for(Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_il2cpp_TypeInfo_var))->____instance_0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D* L_1 = (Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D*)il2cpp_codegen_object_new(Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Ros2csLogger__ctor_mE011FB9DB49F8C5AD20EBA540E3BAD1499C38C09(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_il2cpp_TypeInfo_var);
		((Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_StaticFields*)il2cpp_codegen_static_fields_for(Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_il2cpp_TypeInfo_var))->____instance_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_StaticFields*)il2cpp_codegen_static_fields_for(Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_il2cpp_TypeInfo_var))->____instance_0), (void*)L_1);
	}

IL_0011:
	{
		il2cpp_codegen_runtime_class_init_inline(Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_il2cpp_TypeInfo_var);
		Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D* L_2 = ((Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_StaticFields*)il2cpp_codegen_static_fields_for(Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_il2cpp_TypeInfo_var))->____instance_0;
		return L_2;
	}
}
// System.Void ROS2.Ros2csLogger::Log(ROS2.LogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ros2csLogger_Log_m2B6D45543390930B16FBB8E5155E1433FE6AE103 (Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D* __this, int32_t ___0_level, String_t* ___1_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m0D19FD93C3CBAEEDAE323D628F7E297A1AB84E9E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m3B86E685B91E647965777E7F3953C6F811917608_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m7A96F221C55D582E107C548C3F689DD793CB6F86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10A105116F1400FFCE661E402C3C12DDCA0D688C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AAEF2ADD6C5746EBCFBEBC221DFABB61D2174AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44A2C30EE3C713B4D21FA53CE82508AA974EF69F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7AC4164735B55B69648987887BCC39417C8A9AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_runtime_class_init_inline(Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = Ros2csLogger_get_LogLevel_m4FF98FB19E2B9790C6020DF8D813F7961167972F_inline(NULL);
		int32_t L_1 = ___0_level;
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Console_get_ForegroundColor_mA1C5AED75FA15026FF6F6A5AD99969F0A5A1A677(NULL);
		V_0 = L_2;
		il2cpp_codegen_runtime_class_init_inline(Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_il2cpp_TypeInfo_var);
		Dictionary_2_tE21EA2A24D6CB3091176D6974BBF38ACF8330303* L_3 = ((Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_StaticFields*)il2cpp_codegen_static_fields_for(Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_il2cpp_TypeInfo_var))->___LevelColors_4;
		int32_t L_4 = ___0_level;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = Dictionary_2_get_Item_m7A96F221C55D582E107C548C3F689DD793CB6F86(L_3, L_4, Dictionary_2_get_Item_m7A96F221C55D582E107C548C3F689DD793CB6F86_RuntimeMethod_var);
		Console_set_ForegroundColor_m4332BA76D4ECCFF08C9C71F05C4D47EA83EC176F(L_5, NULL);
		Dictionary_2_t2C711015AA5938D6B94F90272468FF95F25556E8* L_6 = ((Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_StaticFields*)il2cpp_codegen_static_fields_for(Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_il2cpp_TypeInfo_var))->___LevelCallbacks_3;
		int32_t L_7 = ___0_level;
		NullCheck(L_6);
		Callback_tF1258F518E485A36439361A50245F89E59DAACE8* L_8;
		L_8 = Dictionary_2_get_Item_m3B86E685B91E647965777E7F3953C6F811917608(L_6, L_7, Dictionary_2_get_Item_m3B86E685B91E647965777E7F3953C6F811917608_RuntimeMethod_var);
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_il2cpp_TypeInfo_var);
		Dictionary_2_t2C711015AA5938D6B94F90272468FF95F25556E8* L_9 = ((Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_StaticFields*)il2cpp_codegen_static_fields_for(Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_il2cpp_TypeInfo_var))->___LevelCallbacks_3;
		int32_t L_10 = ___0_level;
		NullCheck(L_9);
		Callback_tF1258F518E485A36439361A50245F89E59DAACE8* L_11;
		L_11 = Dictionary_2_get_Item_m3B86E685B91E647965777E7F3953C6F811917608(L_9, L_10, Dictionary_2_get_Item_m3B86E685B91E647965777E7F3953C6F811917608_RuntimeMethod_var);
		String_t* L_12 = ___1_message;
		String_t* L_13;
		L_13 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralD7AC4164735B55B69648987887BCC39417C8A9AB, L_12, NULL);
		NullCheck(L_11);
		Callback_Invoke_mBB09CD967A55FB4A922C03658F5FB2B3563A4B12_inline(L_11, L_13, NULL);
	}

IL_0047:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_17;
		L_17 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_1 = L_17;
		String_t* L_18;
		L_18 = DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78((&V_1), _stringLiteral44A2C30EE3C713B4D21FA53CE82508AA974EF69F, NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_18);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_18);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_16;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteral2AAEF2ADD6C5746EBCFBEBC221DFABB61D2174AE);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral2AAEF2ADD6C5746EBCFBEBC221DFABB61D2174AE);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_19;
		il2cpp_codegen_runtime_class_init_inline(Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_il2cpp_TypeInfo_var);
		Dictionary_2_tF4BD8E262191575AB12588F222EB1F74D30CC279* L_21 = ((Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_StaticFields*)il2cpp_codegen_static_fields_for(Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_il2cpp_TypeInfo_var))->___LevelNames_1;
		int32_t L_22 = ___0_level;
		NullCheck(L_21);
		String_t* L_23;
		L_23 = Dictionary_2_get_Item_m0D19FD93C3CBAEEDAE323D628F7E297A1AB84E9E(L_21, L_22, Dictionary_2_get_Item_m0D19FD93C3CBAEEDAE323D628F7E297A1AB84E9E_RuntimeMethod_var);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_23);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = L_20;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, _stringLiteral10A105116F1400FFCE661E402C3C12DDCA0D688C);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral10A105116F1400FFCE661E402C3C12DDCA0D688C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = L_24;
		String_t* L_26 = ___1_message;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_26);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_26);
		String_t* L_27;
		L_27 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_25, NULL);
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_WriteLine_m77CEDA0C084428F0D6220988DA66992EC1925AEA(L_27, NULL);
		int32_t L_28 = V_0;
		Console_set_ForegroundColor_m4332BA76D4ECCFF08C9C71F05C4D47EA83EC176F(L_28, NULL);
		return;
	}
}
// System.Void ROS2.Ros2csLogger::LogInfo(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ros2csLogger_LogInfo_mB16EAA697EAC0CB85D40761A18AC6B3023DCCD65 (Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_message;
		Ros2csLogger_Log_m2B6D45543390930B16FBB8E5155E1433FE6AE103(__this, 1, L_0, NULL);
		return;
	}
}
// System.Void ROS2.Ros2csLogger::LogWarning(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ros2csLogger_LogWarning_m4C78D4FD0D00607A5479373F3427D4C5493175A7 (Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_message;
		Ros2csLogger_Log_m2B6D45543390930B16FBB8E5155E1433FE6AE103(__this, 2, L_0, NULL);
		return;
	}
}
// System.Void ROS2.Ros2csLogger::LogError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ros2csLogger_LogError_mA0DE7B246DFEE60AC35F45ED985CD4FD8B2132CB (Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_message;
		Ros2csLogger_Log_m2B6D45543390930B16FBB8E5155E1433FE6AE103(__this, 3, L_0, NULL);
		return;
	}
}
// System.Void ROS2.Ros2csLogger::LogDebug(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ros2csLogger_LogDebug_mA487124DD0DCBFC7F43410E041C4F1A060A90943 (Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_message;
		Ros2csLogger_Log_m2B6D45543390930B16FBB8E5155E1433FE6AE103(__this, 0, L_0, NULL);
		return;
	}
}
// System.Void ROS2.Ros2csLogger::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ros2csLogger__cctor_m6D4E3C4177F0EA2AC319C310FBA1DC932A00E9EB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m7F01CEF304F66C637623FBBB54B845AE0D6A1ED0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mDDEF807BF37E0AA97EBBDBEE693405FB19C0DCD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mF6DEB8B58171E92E5234DE8253418786ED6E07C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m226D41F3D5C8F8732B9DD08786ECFF60958CC809_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m48E82F061D2B81F7A63C56D8A9F4E41EB86F309D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m81AF07AB7B2CCA080F808145615A163D46BD823F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t2C711015AA5938D6B94F90272468FF95F25556E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tE21EA2A24D6CB3091176D6974BBF38ACF8330303_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tF4BD8E262191575AB12588F222EB1F74D30CC279_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral420970FC857D0E541C788790F58AA66962B22CC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BD8EBBF9AAADE3A1911E0372AF7DEEFC2B7800D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6671AB681FCCDE604241BD0A83D624C05B26D44);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA008AB922F24BD7FF67A671D99943A377F6F35A);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_tF4BD8E262191575AB12588F222EB1F74D30CC279* L_0 = (Dictionary_2_tF4BD8E262191575AB12588F222EB1F74D30CC279*)il2cpp_codegen_object_new(Dictionary_2_tF4BD8E262191575AB12588F222EB1F74D30CC279_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m48E82F061D2B81F7A63C56D8A9F4E41EB86F309D(L_0, Dictionary_2__ctor_m48E82F061D2B81F7A63C56D8A9F4E41EB86F309D_RuntimeMethod_var);
		Dictionary_2_tF4BD8E262191575AB12588F222EB1F74D30CC279* L_1 = L_0;
		NullCheck(L_1);
		Dictionary_2_Add_m7F01CEF304F66C637623FBBB54B845AE0D6A1ED0(L_1, 0, _stringLiteral420970FC857D0E541C788790F58AA66962B22CC8, Dictionary_2_Add_m7F01CEF304F66C637623FBBB54B845AE0D6A1ED0_RuntimeMethod_var);
		Dictionary_2_tF4BD8E262191575AB12588F222EB1F74D30CC279* L_2 = L_1;
		NullCheck(L_2);
		Dictionary_2_Add_m7F01CEF304F66C637623FBBB54B845AE0D6A1ED0(L_2, 1, _stringLiteralD6671AB681FCCDE604241BD0A83D624C05B26D44, Dictionary_2_Add_m7F01CEF304F66C637623FBBB54B845AE0D6A1ED0_RuntimeMethod_var);
		Dictionary_2_tF4BD8E262191575AB12588F222EB1F74D30CC279* L_3 = L_2;
		NullCheck(L_3);
		Dictionary_2_Add_m7F01CEF304F66C637623FBBB54B845AE0D6A1ED0(L_3, 2, _stringLiteralEA008AB922F24BD7FF67A671D99943A377F6F35A, Dictionary_2_Add_m7F01CEF304F66C637623FBBB54B845AE0D6A1ED0_RuntimeMethod_var);
		Dictionary_2_tF4BD8E262191575AB12588F222EB1F74D30CC279* L_4 = L_3;
		NullCheck(L_4);
		Dictionary_2_Add_m7F01CEF304F66C637623FBBB54B845AE0D6A1ED0(L_4, 3, _stringLiteral8BD8EBBF9AAADE3A1911E0372AF7DEEFC2B7800D, Dictionary_2_Add_m7F01CEF304F66C637623FBBB54B845AE0D6A1ED0_RuntimeMethod_var);
		((Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_StaticFields*)il2cpp_codegen_static_fields_for(Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_il2cpp_TypeInfo_var))->___LevelNames_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_StaticFields*)il2cpp_codegen_static_fields_for(Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_il2cpp_TypeInfo_var))->___LevelNames_1), (void*)L_4);
		Dictionary_2_t2C711015AA5938D6B94F90272468FF95F25556E8* L_5 = (Dictionary_2_t2C711015AA5938D6B94F90272468FF95F25556E8*)il2cpp_codegen_object_new(Dictionary_2_t2C711015AA5938D6B94F90272468FF95F25556E8_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Dictionary_2__ctor_m226D41F3D5C8F8732B9DD08786ECFF60958CC809(L_5, Dictionary_2__ctor_m226D41F3D5C8F8732B9DD08786ECFF60958CC809_RuntimeMethod_var);
		Dictionary_2_t2C711015AA5938D6B94F90272468FF95F25556E8* L_6 = L_5;
		NullCheck(L_6);
		Dictionary_2_Add_mDDEF807BF37E0AA97EBBDBEE693405FB19C0DCD3(L_6, 0, (Callback_tF1258F518E485A36439361A50245F89E59DAACE8*)NULL, Dictionary_2_Add_mDDEF807BF37E0AA97EBBDBEE693405FB19C0DCD3_RuntimeMethod_var);
		Dictionary_2_t2C711015AA5938D6B94F90272468FF95F25556E8* L_7 = L_6;
		NullCheck(L_7);
		Dictionary_2_Add_mDDEF807BF37E0AA97EBBDBEE693405FB19C0DCD3(L_7, 1, (Callback_tF1258F518E485A36439361A50245F89E59DAACE8*)NULL, Dictionary_2_Add_mDDEF807BF37E0AA97EBBDBEE693405FB19C0DCD3_RuntimeMethod_var);
		Dictionary_2_t2C711015AA5938D6B94F90272468FF95F25556E8* L_8 = L_7;
		NullCheck(L_8);
		Dictionary_2_Add_mDDEF807BF37E0AA97EBBDBEE693405FB19C0DCD3(L_8, 2, (Callback_tF1258F518E485A36439361A50245F89E59DAACE8*)NULL, Dictionary_2_Add_mDDEF807BF37E0AA97EBBDBEE693405FB19C0DCD3_RuntimeMethod_var);
		Dictionary_2_t2C711015AA5938D6B94F90272468FF95F25556E8* L_9 = L_8;
		NullCheck(L_9);
		Dictionary_2_Add_mDDEF807BF37E0AA97EBBDBEE693405FB19C0DCD3(L_9, 3, (Callback_tF1258F518E485A36439361A50245F89E59DAACE8*)NULL, Dictionary_2_Add_mDDEF807BF37E0AA97EBBDBEE693405FB19C0DCD3_RuntimeMethod_var);
		((Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_StaticFields*)il2cpp_codegen_static_fields_for(Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_il2cpp_TypeInfo_var))->___LevelCallbacks_3 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_StaticFields*)il2cpp_codegen_static_fields_for(Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_il2cpp_TypeInfo_var))->___LevelCallbacks_3), (void*)L_9);
		Dictionary_2_tE21EA2A24D6CB3091176D6974BBF38ACF8330303* L_10 = (Dictionary_2_tE21EA2A24D6CB3091176D6974BBF38ACF8330303*)il2cpp_codegen_object_new(Dictionary_2_tE21EA2A24D6CB3091176D6974BBF38ACF8330303_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Dictionary_2__ctor_m81AF07AB7B2CCA080F808145615A163D46BD823F(L_10, Dictionary_2__ctor_m81AF07AB7B2CCA080F808145615A163D46BD823F_RuntimeMethod_var);
		Dictionary_2_tE21EA2A24D6CB3091176D6974BBF38ACF8330303* L_11 = L_10;
		NullCheck(L_11);
		Dictionary_2_Add_mF6DEB8B58171E92E5234DE8253418786ED6E07C3(L_11, 0, ((int32_t)10), Dictionary_2_Add_mF6DEB8B58171E92E5234DE8253418786ED6E07C3_RuntimeMethod_var);
		Dictionary_2_tE21EA2A24D6CB3091176D6974BBF38ACF8330303* L_12 = L_11;
		NullCheck(L_12);
		Dictionary_2_Add_mF6DEB8B58171E92E5234DE8253418786ED6E07C3(L_12, 1, ((int32_t)15), Dictionary_2_Add_mF6DEB8B58171E92E5234DE8253418786ED6E07C3_RuntimeMethod_var);
		Dictionary_2_tE21EA2A24D6CB3091176D6974BBF38ACF8330303* L_13 = L_12;
		NullCheck(L_13);
		Dictionary_2_Add_mF6DEB8B58171E92E5234DE8253418786ED6E07C3(L_13, 2, ((int32_t)14), Dictionary_2_Add_mF6DEB8B58171E92E5234DE8253418786ED6E07C3_RuntimeMethod_var);
		Dictionary_2_tE21EA2A24D6CB3091176D6974BBF38ACF8330303* L_14 = L_13;
		NullCheck(L_14);
		Dictionary_2_Add_mF6DEB8B58171E92E5234DE8253418786ED6E07C3(L_14, 3, ((int32_t)12), Dictionary_2_Add_mF6DEB8B58171E92E5234DE8253418786ED6E07C3_RuntimeMethod_var);
		((Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_StaticFields*)il2cpp_codegen_static_fields_for(Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_il2cpp_TypeInfo_var))->___LevelColors_4 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&((Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_StaticFields*)il2cpp_codegen_static_fields_for(Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_il2cpp_TypeInfo_var))->___LevelColors_4), (void*)L_14);
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
void Callback_Invoke_mBB09CD967A55FB4A922C03658F5FB2B3563A4B12_Multicast(Callback_tF1258F518E485A36439361A50245F89E59DAACE8* __this, RuntimeObject* ___0_message, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Callback_tF1258F518E485A36439361A50245F89E59DAACE8* currentDelegate = reinterpret_cast<Callback_tF1258F518E485A36439361A50245F89E59DAACE8*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_message, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void Callback_Invoke_mBB09CD967A55FB4A922C03658F5FB2B3563A4B12_OpenInst(Callback_tF1258F518E485A36439361A50245F89E59DAACE8* __this, RuntimeObject* ___0_message, const RuntimeMethod* method)
{
	NullCheck(___0_message);
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_message, method);
}
void Callback_Invoke_mBB09CD967A55FB4A922C03658F5FB2B3563A4B12_OpenStatic(Callback_tF1258F518E485A36439361A50245F89E59DAACE8* __this, RuntimeObject* ___0_message, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_message, method);
}
void Callback_Invoke_mBB09CD967A55FB4A922C03658F5FB2B3563A4B12_OpenStaticInvoker(Callback_tF1258F518E485A36439361A50245F89E59DAACE8* __this, RuntimeObject* ___0_message, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_message);
}
void Callback_Invoke_mBB09CD967A55FB4A922C03658F5FB2B3563A4B12_ClosedStaticInvoker(Callback_tF1258F518E485A36439361A50245F89E59DAACE8* __this, RuntimeObject* ___0_message, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_message);
}
void Callback_Invoke_mBB09CD967A55FB4A922C03658F5FB2B3563A4B12_OpenVirtual(Callback_tF1258F518E485A36439361A50245F89E59DAACE8* __this, RuntimeObject* ___0_message, const RuntimeMethod* method)
{
	NullCheck(___0_message);
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_message);
}
void Callback_Invoke_mBB09CD967A55FB4A922C03658F5FB2B3563A4B12_OpenInterface(Callback_tF1258F518E485A36439361A50245F89E59DAACE8* __this, RuntimeObject* ___0_message, const RuntimeMethod* method)
{
	NullCheck(___0_message);
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_message);
}
void Callback_Invoke_mBB09CD967A55FB4A922C03658F5FB2B3563A4B12_OpenGenericVirtual(Callback_tF1258F518E485A36439361A50245F89E59DAACE8* __this, RuntimeObject* ___0_message, const RuntimeMethod* method)
{
	NullCheck(___0_message);
	GenericVirtualActionInvoker0::Invoke(method, ___0_message);
}
void Callback_Invoke_mBB09CD967A55FB4A922C03658F5FB2B3563A4B12_OpenGenericInterface(Callback_tF1258F518E485A36439361A50245F89E59DAACE8* __this, RuntimeObject* ___0_message, const RuntimeMethod* method)
{
	NullCheck(___0_message);
	GenericInterfaceActionInvoker0::Invoke(method, ___0_message);
}
// System.Void ROS2.Ros2csLogger/Callback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Callback__ctor_m6F7162CD186150E5622ECA540751A94941E7899A (Callback_tF1258F518E485A36439361A50245F89E59DAACE8* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&Callback_Invoke_mBB09CD967A55FB4A922C03658F5FB2B3563A4B12_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&Callback_Invoke_mBB09CD967A55FB4A922C03658F5FB2B3563A4B12_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Callback_Invoke_mBB09CD967A55FB4A922C03658F5FB2B3563A4B12_OpenStatic;
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
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&Callback_Invoke_mBB09CD967A55FB4A922C03658F5FB2B3563A4B12_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&Callback_Invoke_mBB09CD967A55FB4A922C03658F5FB2B3563A4B12_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&Callback_Invoke_mBB09CD967A55FB4A922C03658F5FB2B3563A4B12_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&Callback_Invoke_mBB09CD967A55FB4A922C03658F5FB2B3563A4B12_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&Callback_Invoke_mBB09CD967A55FB4A922C03658F5FB2B3563A4B12_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&Callback_Invoke_mBB09CD967A55FB4A922C03658F5FB2B3563A4B12_Multicast;
}
// System.Void ROS2.Ros2csLogger/Callback::Invoke(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Callback_Invoke_mBB09CD967A55FB4A922C03658F5FB2B3563A4B12 (Callback_tF1258F518E485A36439361A50245F89E59DAACE8* __this, RuntimeObject* ___0_message, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_message, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ROS2.Ros2csLogger/Callback::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Callback_BeginInvoke_mB58EB86C0343F803131F25CEEF3418A39F05E0AF (Callback_tF1258F518E485A36439361A50245F89E59DAACE8* __this, RuntimeObject* ___0_message, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_message;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void ROS2.Ros2csLogger/Callback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Callback_EndInvoke_m49A9209E6100866D321E56F961239328E4E775C1 (Callback_tF1258F518E485A36439361A50245F89E59DAACE8* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
// System.Boolean ROS2.Benchmark::get_IsDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Benchmark_get_IsDisposed_mFD0C59B4DFDCFB3C0EC2F1BF85AF2351738FF126 (Benchmark_tD02AA2D1CC80B5AA7C5998D00C91EACF340072A6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___disposed_2;
		return L_0;
	}
}
// System.Void ROS2.Benchmark::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Benchmark__ctor_mDE14BF0570C4F11A4131A606673058D537DD139C (Benchmark_tD02AA2D1CC80B5AA7C5998D00C91EACF340072A6* __this, String_t* ___0_benchmarkName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_0 = (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043*)il2cpp_codegen_object_new(Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Stopwatch__ctor_mAFE6B2F45CF1C3469EF6D5307972BC098B473D0A(L_0, NULL);
		__this->___timer_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___timer_0), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_1 = ___0_benchmarkName;
		__this->___benchmarkName_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___benchmarkName_1), (void*)L_1);
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_2 = __this->___timer_0;
		NullCheck(L_2);
		Stopwatch_Start_m35906A38C7D336CF9DD35854C7E170D762A55915(L_2, NULL);
		return;
	}
}
// System.Void ROS2.Benchmark::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Benchmark_Dispose_mB30541B19D8940E110D91F4DCE814FD168F0D7F5 (Benchmark_tD02AA2D1CC80B5AA7C5998D00C91EACF340072A6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC098FA5E280EF8CE35E102539B58FD2EAFAB5CCA);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->___disposed_2;
		if (L_0)
		{
			goto IL_004f;
		}
	}
	{
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_1 = __this->___timer_0;
		NullCheck(L_1);
		Stopwatch_Stop_m8F2A2EFD9D7D5B4180A5E5379E5443864618D7DC(L_1, NULL);
		String_t* L_2 = __this->___benchmarkName_1;
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_3 = __this->___timer_0;
		NullCheck(L_3);
		int64_t L_4;
		L_4 = Stopwatch_get_ElapsedTicks_m3F4040FBF8C7CCDC69E0E04824019DEBB25AA410(L_3, NULL);
		int64_t L_5 = L_4;
		RuntimeObject* L_6 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_5);
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_7 = __this->___timer_0;
		NullCheck(L_7);
		int64_t L_8;
		L_8 = Stopwatch_get_ElapsedMilliseconds_m8D8E60ADEB47D008C06D8E57D28D41EAE07AECBF(L_7, NULL);
		int64_t L_9 = L_8;
		RuntimeObject* L_10 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_9);
		String_t* L_11;
		L_11 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteralC098FA5E280EF8CE35E102539B58FD2EAFAB5CCA, L_2, L_6, L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_WriteLine_m77CEDA0C084428F0D6220988DA66992EC1925AEA(L_11, NULL);
		__this->___disposed_2 = (bool)1;
	}

IL_004f:
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Ros2csLogger_get_LogLevel_m4FF98FB19E2B9790C6020DF8D813F7961167972F_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_StaticFields*)il2cpp_codegen_static_fields_for(Ros2csLogger_tEBD8F6C80D7A39F0FFA9B1B4D2323EF92117E01D_il2cpp_TypeInfo_var))->___U3CLogLevelU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Callback_Invoke_mBB09CD967A55FB4A922C03658F5FB2B3563A4B12_inline (Callback_tF1258F518E485A36439361A50245F89E59DAACE8* __this, RuntimeObject* ___0_message, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_message, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
