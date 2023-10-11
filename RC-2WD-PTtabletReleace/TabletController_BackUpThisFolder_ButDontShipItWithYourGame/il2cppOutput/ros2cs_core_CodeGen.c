#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.String ROS2.INode::get_Name()
// 0x00000002 ROS2.Client`2<I,O> ROS2.INode::CreateClient(System.String,ROS2.QualityOfServiceProfile)
// 0x00000003 System.Boolean ROS2.INode::RemoveClient(ROS2.IClientBase)
// 0x00000004 ROS2.Service`2<I,O> ROS2.INode::CreateService(System.String,System.Func`2<I,O>,ROS2.QualityOfServiceProfile)
// 0x00000005 System.Boolean ROS2.INode::RemoveService(ROS2.IServiceBase)
// 0x00000006 ROS2.Publisher`1<T> ROS2.INode::CreatePublisher(System.String,ROS2.QualityOfServiceProfile)
// 0x00000007 ROS2.Subscription`1<T> ROS2.INode::CreateSubscription(System.String,System.Action`1<T>,ROS2.QualityOfServiceProfile)
// 0x00000008 System.Boolean ROS2.INode::RemovePublisher(ROS2.IPublisherBase)
// 0x00000009 System.Boolean ROS2.INode::RemoveSubscription(ROS2.ISubscriptionBase)
// 0x0000000A System.Void ROS2.IClientBase::TakeMessage()
// 0x0000000B System.String ROS2.IClientBase::get_Topic()
// 0x0000000C System.Collections.Generic.IReadOnlyDictionary`2<System.Int64,System.Threading.Tasks.Task> ROS2.IClientBase::get_PendingRequests()
// 0x0000000D System.Boolean ROS2.IClientBase::Cancel(System.Threading.Tasks.Task)
// 0x0000000E ROS2.rcl_client_t ROS2.IClientBase::get_Handle()
// 0x0000000F System.Object ROS2.IClientBase::get_Mutex()
// 0x00000010 System.Collections.Generic.IReadOnlyDictionary`2<System.Int64,System.Threading.Tasks.Task`1<O>> ROS2.IClient`2::get_PendingRequests()
// 0x00000011 System.Boolean ROS2.IClient`2::IsServiceAvailable()
// 0x00000012 O ROS2.IClient`2::Call(I)
// 0x00000013 System.Threading.Tasks.Task`1<O> ROS2.IClient`2::CallAsync(I)
// 0x00000014 System.Threading.Tasks.Task`1<O> ROS2.IClient`2::CallAsync(I,System.Threading.Tasks.TaskCreationOptions)
// 0x00000015 System.Void ROS2.IServiceBase::TakeMessage()
// 0x00000016 System.String ROS2.IServiceBase::get_Topic()
// 0x00000017 ROS2.rcl_service_t ROS2.IServiceBase::get_Handle()
// 0x00000018 System.Object ROS2.IServiceBase::get_Mutex()
// 0x00000019 System.String ROS2.IPublisherBase::get_Topic()
// 0x0000001A System.Void ROS2.IPublisher`1::Publish(T)
// 0x0000001B System.Void ROS2.ISubscriptionBase::TakeMessage()
// 0x0000001C System.String ROS2.ISubscriptionBase::get_Topic()
// 0x0000001D ROS2.rcl_subscription_t ROS2.ISubscriptionBase::get_Handle()
// 0x0000001E System.Object ROS2.ISubscriptionBase::get_Mutex()
// 0x0000001F System.Void ROS2.NativeRcl::.cctor()
extern void NativeRcl__cctor_mA9EA811B221868979E62F35487DD8AEA85CA9F97 (void);
// 0x00000020 System.Void ROS2.NativeRcl/GetZeroInitializedContextType::.ctor(System.Object,System.IntPtr)
extern void GetZeroInitializedContextType__ctor_m93397F5891CE0071E9F570FB5AE02FA62741C4EB (void);
// 0x00000021 ROS2.rcl_context_t ROS2.NativeRcl/GetZeroInitializedContextType::Invoke()
extern void GetZeroInitializedContextType_Invoke_m7072D60BE53253063BD08973B4317F9C57538D39 (void);
// 0x00000022 System.IAsyncResult ROS2.NativeRcl/GetZeroInitializedContextType::BeginInvoke(System.AsyncCallback,System.Object)
extern void GetZeroInitializedContextType_BeginInvoke_mC3458EC08467DB6B7A26C697CD7D5B1486E63DDA (void);
// 0x00000023 ROS2.rcl_context_t ROS2.NativeRcl/GetZeroInitializedContextType::EndInvoke(System.IAsyncResult)
extern void GetZeroInitializedContextType_EndInvoke_m9E1045046752AC1C711793DC0AFAD2E77E84A1CC (void);
// 0x00000024 System.Void ROS2.NativeRcl/GetZeroInitializedInitOptionsType::.ctor(System.Object,System.IntPtr)
extern void GetZeroInitializedInitOptionsType__ctor_m8E805F1B6CF0F0E60A332DF93F9CE801C5FF7C8F (void);
// 0x00000025 ROS2.rcl_init_options_t ROS2.NativeRcl/GetZeroInitializedInitOptionsType::Invoke()
extern void GetZeroInitializedInitOptionsType_Invoke_m803F50B852A3CB597130ACCCBC620C83EC2B4893 (void);
// 0x00000026 System.IAsyncResult ROS2.NativeRcl/GetZeroInitializedInitOptionsType::BeginInvoke(System.AsyncCallback,System.Object)
extern void GetZeroInitializedInitOptionsType_BeginInvoke_m2C70582CEE7FCB103F2250EE58D4642548DD502B (void);
// 0x00000027 ROS2.rcl_init_options_t ROS2.NativeRcl/GetZeroInitializedInitOptionsType::EndInvoke(System.IAsyncResult)
extern void GetZeroInitializedInitOptionsType_EndInvoke_mEEF247E4793A4093C32A27A47A02823B1B274DD8 (void);
// 0x00000028 System.Void ROS2.NativeRcl/InitOptionsInitType::.ctor(System.Object,System.IntPtr)
extern void InitOptionsInitType__ctor_m855F2A9B95FA734B54B913D3BC5E291AD1A74A38 (void);
// 0x00000029 System.Int32 ROS2.NativeRcl/InitOptionsInitType::Invoke(ROS2.rcl_init_options_t&,ROS2.rcl_allocator_t)
extern void InitOptionsInitType_Invoke_m2C5736680F5DD498751DBF840837A366129379AA (void);
// 0x0000002A System.IAsyncResult ROS2.NativeRcl/InitOptionsInitType::BeginInvoke(ROS2.rcl_init_options_t&,ROS2.rcl_allocator_t,System.AsyncCallback,System.Object)
extern void InitOptionsInitType_BeginInvoke_m612A4F94B0674E5E803099116F97DD6ED505329C (void);
// 0x0000002B System.Int32 ROS2.NativeRcl/InitOptionsInitType::EndInvoke(ROS2.rcl_init_options_t&,System.IAsyncResult)
extern void InitOptionsInitType_EndInvoke_mE839A36BE03A9697F2287EA4EDB4E2403F5BB04F (void);
// 0x0000002C System.Void ROS2.NativeRcl/ShutdownType::.ctor(System.Object,System.IntPtr)
extern void ShutdownType__ctor_m0DEA3C2E8BBC090516A6ED8AC68C5D20C45A9957 (void);
// 0x0000002D System.Int32 ROS2.NativeRcl/ShutdownType::Invoke(ROS2.rcl_context_t&)
extern void ShutdownType_Invoke_mA18C5013CED464580638857F255A520DEDD59EFC (void);
// 0x0000002E System.IAsyncResult ROS2.NativeRcl/ShutdownType::BeginInvoke(ROS2.rcl_context_t&,System.AsyncCallback,System.Object)
extern void ShutdownType_BeginInvoke_m9AD7DF8BE444B2929E42B09EE7409C28694B3456 (void);
// 0x0000002F System.Int32 ROS2.NativeRcl/ShutdownType::EndInvoke(ROS2.rcl_context_t&,System.IAsyncResult)
extern void ShutdownType_EndInvoke_m13F3E7885082FF11249B680420D96A72D2DB546A (void);
// 0x00000030 System.Void ROS2.NativeRcl/ContextIsValidType::.ctor(System.Object,System.IntPtr)
extern void ContextIsValidType__ctor_mDE1AD482849061204241A8736B4F9FF43C7CBFC3 (void);
// 0x00000031 System.Boolean ROS2.NativeRcl/ContextIsValidType::Invoke(ROS2.rcl_context_t&)
extern void ContextIsValidType_Invoke_m27DC66426F72978C16FCB3F2281290538D1E02B8 (void);
// 0x00000032 System.IAsyncResult ROS2.NativeRcl/ContextIsValidType::BeginInvoke(ROS2.rcl_context_t&,System.AsyncCallback,System.Object)
extern void ContextIsValidType_BeginInvoke_mB5C503E743023775FB9F38603B21A8CF4DBA732B (void);
// 0x00000033 System.Boolean ROS2.NativeRcl/ContextIsValidType::EndInvoke(ROS2.rcl_context_t&,System.IAsyncResult)
extern void ContextIsValidType_EndInvoke_m2BCBF666F3F55CCFDD14CD729EBBD040D60A6842 (void);
// 0x00000034 System.Void ROS2.NativeRcl/InitType::.ctor(System.Object,System.IntPtr)
extern void InitType__ctor_m42E07CA2828FAA9BAD2B5D107E1D8839AD804126 (void);
// 0x00000035 System.Int32 ROS2.NativeRcl/InitType::Invoke(System.Int32,System.String[],ROS2.rcl_init_options_t&,ROS2.rcl_context_t&)
extern void InitType_Invoke_m3354874F784804204C9C98B653576DBEF55B152B (void);
// 0x00000036 System.IAsyncResult ROS2.NativeRcl/InitType::BeginInvoke(System.Int32,System.String[],ROS2.rcl_init_options_t&,ROS2.rcl_context_t&,System.AsyncCallback,System.Object)
extern void InitType_BeginInvoke_m87A9E079D970E94A677B779BD7D2629A220E15A6 (void);
// 0x00000037 System.Int32 ROS2.NativeRcl/InitType::EndInvoke(ROS2.rcl_init_options_t&,ROS2.rcl_context_t&,System.IAsyncResult)
extern void InitType_EndInvoke_m64641D91F0CC64E1ED27E0B7A674BF2842AE696C (void);
// 0x00000038 System.Void ROS2.NativeRcl/ContextFiniType::.ctor(System.Object,System.IntPtr)
extern void ContextFiniType__ctor_m64AC1E2EA51B1845A5972D34D600E1AD60FD24A2 (void);
// 0x00000039 System.Int32 ROS2.NativeRcl/ContextFiniType::Invoke(ROS2.rcl_context_t&)
extern void ContextFiniType_Invoke_mF3D3B7CDAAC699F416FFECA74785DDF3D27ED525 (void);
// 0x0000003A System.IAsyncResult ROS2.NativeRcl/ContextFiniType::BeginInvoke(ROS2.rcl_context_t&,System.AsyncCallback,System.Object)
extern void ContextFiniType_BeginInvoke_mE9D75B924477653A765C02C3E2D1C6FE57E434F4 (void);
// 0x0000003B System.Int32 ROS2.NativeRcl/ContextFiniType::EndInvoke(ROS2.rcl_context_t&,System.IAsyncResult)
extern void ContextFiniType_EndInvoke_mA13870E309A91670F8F62F56522666D8A66CE4E2 (void);
// 0x0000003C System.Void ROS2.NativeRcl/GetZeroInitializedNodeType::.ctor(System.Object,System.IntPtr)
extern void GetZeroInitializedNodeType__ctor_m5B443C2526A40C717757DA3BEDD91EC283D17887 (void);
// 0x0000003D ROS2.rcl_node_t ROS2.NativeRcl/GetZeroInitializedNodeType::Invoke()
extern void GetZeroInitializedNodeType_Invoke_m4971529E411B1A334F39F9BA27EBCC9EEEC44349 (void);
// 0x0000003E System.IAsyncResult ROS2.NativeRcl/GetZeroInitializedNodeType::BeginInvoke(System.AsyncCallback,System.Object)
extern void GetZeroInitializedNodeType_BeginInvoke_mC6B9B367FDF4EC79B4F87E6048877FF5A9428FB9 (void);
// 0x0000003F ROS2.rcl_node_t ROS2.NativeRcl/GetZeroInitializedNodeType::EndInvoke(System.IAsyncResult)
extern void GetZeroInitializedNodeType_EndInvoke_m6671624C3F8100421F5E633D404A5283D63876C2 (void);
// 0x00000040 System.Void ROS2.NativeRcl/NodeInitType::.ctor(System.Object,System.IntPtr)
extern void NodeInitType__ctor_mD4B6F04C12A76B23F9ECBAD6B9C1D65FF54D5291 (void);
// 0x00000041 System.Int32 ROS2.NativeRcl/NodeInitType::Invoke(ROS2.rcl_node_t&,System.String,System.String,ROS2.rcl_context_t&,System.IntPtr)
extern void NodeInitType_Invoke_mCD6B59F3B3FE2FB1353B8EA4DFA95066BBD629BD (void);
// 0x00000042 System.IAsyncResult ROS2.NativeRcl/NodeInitType::BeginInvoke(ROS2.rcl_node_t&,System.String,System.String,ROS2.rcl_context_t&,System.IntPtr,System.AsyncCallback,System.Object)
extern void NodeInitType_BeginInvoke_m704C724F7DDBB505E488042B1085735CA9C8DF52 (void);
// 0x00000043 System.Int32 ROS2.NativeRcl/NodeInitType::EndInvoke(ROS2.rcl_node_t&,ROS2.rcl_context_t&,System.IAsyncResult)
extern void NodeInitType_EndInvoke_mCFAB52EBEBB43F478504F05F5FC94A98D1F80C49 (void);
// 0x00000044 System.Void ROS2.NativeRcl/NodeFiniType::.ctor(System.Object,System.IntPtr)
extern void NodeFiniType__ctor_mFBA761825D56347B4803F59FB4D51D7373FE5B63 (void);
// 0x00000045 System.Int32 ROS2.NativeRcl/NodeFiniType::Invoke(ROS2.rcl_node_t&)
extern void NodeFiniType_Invoke_mA4955F10BF547445FEEF088F34F2B874823921E6 (void);
// 0x00000046 System.IAsyncResult ROS2.NativeRcl/NodeFiniType::BeginInvoke(ROS2.rcl_node_t&,System.AsyncCallback,System.Object)
extern void NodeFiniType_BeginInvoke_mE3D272E9CEA487DB49BD34F95C166FF2462D2730 (void);
// 0x00000047 System.Int32 ROS2.NativeRcl/NodeFiniType::EndInvoke(ROS2.rcl_node_t&,System.IAsyncResult)
extern void NodeFiniType_EndInvoke_mC23BE57B659FD5BB5A9AD1AC8DB58989AC87A5AF (void);
// 0x00000048 System.Void ROS2.NativeRcl/NodeGetNameType::.ctor(System.Object,System.IntPtr)
extern void NodeGetNameType__ctor_m696C728A8E7C73F7FDDA5C9C4AF03C481CADBFB3 (void);
// 0x00000049 System.IntPtr ROS2.NativeRcl/NodeGetNameType::Invoke(ROS2.rcl_node_t&)
extern void NodeGetNameType_Invoke_mBDA02B2AE615D3AF49925A19A04A3390374C674C (void);
// 0x0000004A System.IAsyncResult ROS2.NativeRcl/NodeGetNameType::BeginInvoke(ROS2.rcl_node_t&,System.AsyncCallback,System.Object)
extern void NodeGetNameType_BeginInvoke_m836FEAB78B5AE0D6951F12706D11F942EEE2D1D1 (void);
// 0x0000004B System.IntPtr ROS2.NativeRcl/NodeGetNameType::EndInvoke(ROS2.rcl_node_t&,System.IAsyncResult)
extern void NodeGetNameType_EndInvoke_mB3C2D6F3E84725FCBC294E9ED5F2B9FCD38155D5 (void);
// 0x0000004C System.Void ROS2.NativeRcl/NodeGetNamespaceType::.ctor(System.Object,System.IntPtr)
extern void NodeGetNamespaceType__ctor_mCF49A87E08C0985939E6517F769CDF1A00821EFF (void);
// 0x0000004D System.IntPtr ROS2.NativeRcl/NodeGetNamespaceType::Invoke(ROS2.rcl_node_t&)
extern void NodeGetNamespaceType_Invoke_m738E141A5C5C150936E6A7497262170CCF29F786 (void);
// 0x0000004E System.IAsyncResult ROS2.NativeRcl/NodeGetNamespaceType::BeginInvoke(ROS2.rcl_node_t&,System.AsyncCallback,System.Object)
extern void NodeGetNamespaceType_BeginInvoke_m1BF2079F72C587315D81CCE36B88858B897D77CD (void);
// 0x0000004F System.IntPtr ROS2.NativeRcl/NodeGetNamespaceType::EndInvoke(ROS2.rcl_node_t&,System.IAsyncResult)
extern void NodeGetNamespaceType_EndInvoke_m94341B99006DC4B5704523C31B4ADC0D196DB716 (void);
// 0x00000050 System.Void ROS2.NativeRcl/ClientGetDefaultOptionsType::.ctor(System.Object,System.IntPtr)
extern void ClientGetDefaultOptionsType__ctor_mFDA36DD3AD601E5134F9FC34A7499A048B9E0E2E (void);
// 0x00000051 System.IntPtr ROS2.NativeRcl/ClientGetDefaultOptionsType::Invoke()
extern void ClientGetDefaultOptionsType_Invoke_m613C3D2FC8C117E7D25F77CE37616824F60AAF0D (void);
// 0x00000052 System.IAsyncResult ROS2.NativeRcl/ClientGetDefaultOptionsType::BeginInvoke(System.AsyncCallback,System.Object)
extern void ClientGetDefaultOptionsType_BeginInvoke_mA33B0646DAE65FED3354098688314300D02C9AA5 (void);
// 0x00000053 System.IntPtr ROS2.NativeRcl/ClientGetDefaultOptionsType::EndInvoke(System.IAsyncResult)
extern void ClientGetDefaultOptionsType_EndInvoke_m441C2317A59418A6D9CFC0B524F4FACEF5F09A62 (void);
// 0x00000054 System.Void ROS2.NativeRcl/GetZeroInitiazizedClientType::.ctor(System.Object,System.IntPtr)
extern void GetZeroInitiazizedClientType__ctor_mE8E8EA3AC9A045A76B0BB81836A799D3BA132C83 (void);
// 0x00000055 ROS2.rcl_client_t ROS2.NativeRcl/GetZeroInitiazizedClientType::Invoke()
extern void GetZeroInitiazizedClientType_Invoke_m26624E5A1153E1150018FD334CDF10FC45E4A38E (void);
// 0x00000056 System.IAsyncResult ROS2.NativeRcl/GetZeroInitiazizedClientType::BeginInvoke(System.AsyncCallback,System.Object)
extern void GetZeroInitiazizedClientType_BeginInvoke_m326F7FAF6CF2D2A07A38F4DBAD49476F613396A6 (void);
// 0x00000057 ROS2.rcl_client_t ROS2.NativeRcl/GetZeroInitiazizedClientType::EndInvoke(System.IAsyncResult)
extern void GetZeroInitiazizedClientType_EndInvoke_m1E669599D1B0532FABCA2D5C021C989A30A5B02D (void);
// 0x00000058 System.Void ROS2.NativeRcl/ClientInitType::.ctor(System.Object,System.IntPtr)
extern void ClientInitType__ctor_m8860DF8D9F7A936623885A03ED4B759282CCA6F5 (void);
// 0x00000059 System.Int32 ROS2.NativeRcl/ClientInitType::Invoke(ROS2.rcl_client_t&,ROS2.rcl_node_t&,System.IntPtr,System.String,System.IntPtr)
extern void ClientInitType_Invoke_m156CF505201A0A5DE7CD13B9A78D5D088B048E0D (void);
// 0x0000005A System.IAsyncResult ROS2.NativeRcl/ClientInitType::BeginInvoke(ROS2.rcl_client_t&,ROS2.rcl_node_t&,System.IntPtr,System.String,System.IntPtr,System.AsyncCallback,System.Object)
extern void ClientInitType_BeginInvoke_m7FAA164EF55154713C43451EF7A3E2DC3CCD2D3E (void);
// 0x0000005B System.Int32 ROS2.NativeRcl/ClientInitType::EndInvoke(ROS2.rcl_client_t&,ROS2.rcl_node_t&,System.IAsyncResult)
extern void ClientInitType_EndInvoke_mAD94283B59C08CE930536371DF37705CA74FAB9E (void);
// 0x0000005C System.Void ROS2.NativeRcl/ClientFiniType::.ctor(System.Object,System.IntPtr)
extern void ClientFiniType__ctor_m543BCAE59E4C67819352871FD11DD5AB21FA0AB4 (void);
// 0x0000005D System.Int32 ROS2.NativeRcl/ClientFiniType::Invoke(ROS2.rcl_client_t&,ROS2.rcl_node_t&)
extern void ClientFiniType_Invoke_mDFE4B2C21C0F5FDB34FD6BE992C7EDE19A2F8DE8 (void);
// 0x0000005E System.IAsyncResult ROS2.NativeRcl/ClientFiniType::BeginInvoke(ROS2.rcl_client_t&,ROS2.rcl_node_t&,System.AsyncCallback,System.Object)
extern void ClientFiniType_BeginInvoke_mD8B48252B88E5E851A045EB534FD583459D03945 (void);
// 0x0000005F System.Int32 ROS2.NativeRcl/ClientFiniType::EndInvoke(ROS2.rcl_client_t&,ROS2.rcl_node_t&,System.IAsyncResult)
extern void ClientFiniType_EndInvoke_m4E08DA00DEEE7A77F481C838756DE4DA6AC4B17D (void);
// 0x00000060 System.Void ROS2.NativeRcl/SendRequestType::.ctor(System.Object,System.IntPtr)
extern void SendRequestType__ctor_m4E0CBCE3D1E3201E7ACFF8A25B0B7627B8AF71E2 (void);
// 0x00000061 System.Int32 ROS2.NativeRcl/SendRequestType::Invoke(ROS2.rcl_client_t&,System.IntPtr,System.Int64&)
extern void SendRequestType_Invoke_mAC38512CD9243A98504AD997C1DDB0BBEF5DC19D (void);
// 0x00000062 System.IAsyncResult ROS2.NativeRcl/SendRequestType::BeginInvoke(ROS2.rcl_client_t&,System.IntPtr,System.Int64&,System.AsyncCallback,System.Object)
extern void SendRequestType_BeginInvoke_m5B843A501DAB73CC624411F6600144DAC1B7EDDC (void);
// 0x00000063 System.Int32 ROS2.NativeRcl/SendRequestType::EndInvoke(ROS2.rcl_client_t&,System.Int64&,System.IAsyncResult)
extern void SendRequestType_EndInvoke_mA4C69C33A458E1914ABBEF1BEA10BBDDD8D561AF (void);
// 0x00000064 System.Void ROS2.NativeRcl/TakeResponceType::.ctor(System.Object,System.IntPtr)
extern void TakeResponceType__ctor_mA1267704880A80203900DA186DCAD7BF38098B8C (void);
// 0x00000065 System.Int32 ROS2.NativeRcl/TakeResponceType::Invoke(ROS2.rcl_client_t&,ROS2.rcl_rmw_request_id_t&,System.IntPtr)
extern void TakeResponceType_Invoke_m90A523D289847E9F3DF295FB5178E34D566650D8 (void);
// 0x00000066 System.IAsyncResult ROS2.NativeRcl/TakeResponceType::BeginInvoke(ROS2.rcl_client_t&,ROS2.rcl_rmw_request_id_t&,System.IntPtr,System.AsyncCallback,System.Object)
extern void TakeResponceType_BeginInvoke_mC0CE06FBA2E15384E1C5AD876DD4E965DC012F78 (void);
// 0x00000067 System.Int32 ROS2.NativeRcl/TakeResponceType::EndInvoke(ROS2.rcl_client_t&,ROS2.rcl_rmw_request_id_t&,System.IAsyncResult)
extern void TakeResponceType_EndInvoke_m624648C77270A28882F77BFD9BE2D5DB1C52240B (void);
// 0x00000068 System.Void ROS2.NativeRcl/ServiceIsAvailableType::.ctor(System.Object,System.IntPtr)
extern void ServiceIsAvailableType__ctor_m941388BE721D4E86EC0DBF84930CEBC54B8FD7DC (void);
// 0x00000069 System.Int32 ROS2.NativeRcl/ServiceIsAvailableType::Invoke(ROS2.rcl_node_t&,ROS2.rcl_client_t&,System.Boolean&)
extern void ServiceIsAvailableType_Invoke_m99FC35F5988E10A35AE07B70DBD3878C91D81AA0 (void);
// 0x0000006A System.IAsyncResult ROS2.NativeRcl/ServiceIsAvailableType::BeginInvoke(ROS2.rcl_node_t&,ROS2.rcl_client_t&,System.Boolean&,System.AsyncCallback,System.Object)
extern void ServiceIsAvailableType_BeginInvoke_m535FDB750319EFA17071F588538EFD8130E544DE (void);
// 0x0000006B System.Int32 ROS2.NativeRcl/ServiceIsAvailableType::EndInvoke(ROS2.rcl_node_t&,ROS2.rcl_client_t&,System.Boolean&,System.IAsyncResult)
extern void ServiceIsAvailableType_EndInvoke_m9760DD3B01D98594EE88DF6ADBA3090F8260151A (void);
// 0x0000006C System.Void ROS2.NativeRcl/ServiceGetDefaultOptionsType::.ctor(System.Object,System.IntPtr)
extern void ServiceGetDefaultOptionsType__ctor_m6EE0564F87E70372AB02A15406269E48EDD9B3F9 (void);
// 0x0000006D System.IntPtr ROS2.NativeRcl/ServiceGetDefaultOptionsType::Invoke()
extern void ServiceGetDefaultOptionsType_Invoke_m45F079C325A93529956C194445DBAB7C9C1A2DCB (void);
// 0x0000006E System.IAsyncResult ROS2.NativeRcl/ServiceGetDefaultOptionsType::BeginInvoke(System.AsyncCallback,System.Object)
extern void ServiceGetDefaultOptionsType_BeginInvoke_m20517DC05D6D6BD938C5195FAAFA07E9085E0D3D (void);
// 0x0000006F System.IntPtr ROS2.NativeRcl/ServiceGetDefaultOptionsType::EndInvoke(System.IAsyncResult)
extern void ServiceGetDefaultOptionsType_EndInvoke_mCEE3CA9F3609D4769F6F7A132B7649C1B298D0E1 (void);
// 0x00000070 System.Void ROS2.NativeRcl/GetZeroInitiazizedServiceType::.ctor(System.Object,System.IntPtr)
extern void GetZeroInitiazizedServiceType__ctor_m1EC2662478B72E8473F1F4390CCEF6237D05F3D1 (void);
// 0x00000071 ROS2.rcl_service_t ROS2.NativeRcl/GetZeroInitiazizedServiceType::Invoke()
extern void GetZeroInitiazizedServiceType_Invoke_m7B5969C46350F9926636767A3326F7BE4D45DD5A (void);
// 0x00000072 System.IAsyncResult ROS2.NativeRcl/GetZeroInitiazizedServiceType::BeginInvoke(System.AsyncCallback,System.Object)
extern void GetZeroInitiazizedServiceType_BeginInvoke_mFBDAA754CFD1CDDA1B521C7D8E2CE83460F7387C (void);
// 0x00000073 ROS2.rcl_service_t ROS2.NativeRcl/GetZeroInitiazizedServiceType::EndInvoke(System.IAsyncResult)
extern void GetZeroInitiazizedServiceType_EndInvoke_mE917C7FD8166EA1EEE1A85D00A557179BC174DA4 (void);
// 0x00000074 System.Void ROS2.NativeRcl/ServiceInitType::.ctor(System.Object,System.IntPtr)
extern void ServiceInitType__ctor_mFC9ACF99503E2F5BD6022C1B9EDDEE77B1D5E6E3 (void);
// 0x00000075 System.Int32 ROS2.NativeRcl/ServiceInitType::Invoke(ROS2.rcl_service_t&,ROS2.rcl_node_t&,System.IntPtr,System.String,System.IntPtr)
extern void ServiceInitType_Invoke_mE2600189DCF270800BB9B8F4E953947099E2CE76 (void);
// 0x00000076 System.IAsyncResult ROS2.NativeRcl/ServiceInitType::BeginInvoke(ROS2.rcl_service_t&,ROS2.rcl_node_t&,System.IntPtr,System.String,System.IntPtr,System.AsyncCallback,System.Object)
extern void ServiceInitType_BeginInvoke_m3B477AF765DF2BA2983A1F381269CCB14DB021C0 (void);
// 0x00000077 System.Int32 ROS2.NativeRcl/ServiceInitType::EndInvoke(ROS2.rcl_service_t&,ROS2.rcl_node_t&,System.IAsyncResult)
extern void ServiceInitType_EndInvoke_m59CCA29365D2E55DD6C49A2047C1A9FF5637970F (void);
// 0x00000078 System.Void ROS2.NativeRcl/ServiceFiniType::.ctor(System.Object,System.IntPtr)
extern void ServiceFiniType__ctor_m024779FCFC54C155862BA744E9CC394C2CC16299 (void);
// 0x00000079 System.Int32 ROS2.NativeRcl/ServiceFiniType::Invoke(ROS2.rcl_service_t&,ROS2.rcl_node_t&)
extern void ServiceFiniType_Invoke_m23C8D1C2A0543A797A38FFEFF4F5A4C5C03DC0AF (void);
// 0x0000007A System.IAsyncResult ROS2.NativeRcl/ServiceFiniType::BeginInvoke(ROS2.rcl_service_t&,ROS2.rcl_node_t&,System.AsyncCallback,System.Object)
extern void ServiceFiniType_BeginInvoke_mC6761D1C5AC4376E6CFE422ABD7D85C8A16F85AA (void);
// 0x0000007B System.Int32 ROS2.NativeRcl/ServiceFiniType::EndInvoke(ROS2.rcl_service_t&,ROS2.rcl_node_t&,System.IAsyncResult)
extern void ServiceFiniType_EndInvoke_mA136EB2B08EB5ACC06446EE94A1442C274C0470D (void);
// 0x0000007C System.Void ROS2.NativeRcl/TakeRequestType::.ctor(System.Object,System.IntPtr)
extern void TakeRequestType__ctor_m1CF9443D625A84C4E410310894A78171D8640727 (void);
// 0x0000007D System.Int32 ROS2.NativeRcl/TakeRequestType::Invoke(ROS2.rcl_service_t&,ROS2.rcl_rmw_request_id_t&,System.IntPtr)
extern void TakeRequestType_Invoke_mDADE3196CA47A730FC7A3AE7075D21BDF0591364 (void);
// 0x0000007E System.IAsyncResult ROS2.NativeRcl/TakeRequestType::BeginInvoke(ROS2.rcl_service_t&,ROS2.rcl_rmw_request_id_t&,System.IntPtr,System.AsyncCallback,System.Object)
extern void TakeRequestType_BeginInvoke_m4D521798FBCBC689E66703776857AA8D606E457E (void);
// 0x0000007F System.Int32 ROS2.NativeRcl/TakeRequestType::EndInvoke(ROS2.rcl_service_t&,ROS2.rcl_rmw_request_id_t&,System.IAsyncResult)
extern void TakeRequestType_EndInvoke_m924555C7DFC4559F531F1EC6773519AF833CC56A (void);
// 0x00000080 System.Void ROS2.NativeRcl/SendResponceType::.ctor(System.Object,System.IntPtr)
extern void SendResponceType__ctor_m34794A201637892490554CCC3A9FED35CFF65B74 (void);
// 0x00000081 System.Int32 ROS2.NativeRcl/SendResponceType::Invoke(ROS2.rcl_service_t&,ROS2.rcl_rmw_request_id_t&,System.IntPtr)
extern void SendResponceType_Invoke_mB6D8D953A6B98AF617D936823BD89B9FB2401CAA (void);
// 0x00000082 System.IAsyncResult ROS2.NativeRcl/SendResponceType::BeginInvoke(ROS2.rcl_service_t&,ROS2.rcl_rmw_request_id_t&,System.IntPtr,System.AsyncCallback,System.Object)
extern void SendResponceType_BeginInvoke_m5E44EBB7CE5C00DE3E1D22C37B728AA56A7549C2 (void);
// 0x00000083 System.Int32 ROS2.NativeRcl/SendResponceType::EndInvoke(ROS2.rcl_service_t&,ROS2.rcl_rmw_request_id_t&,System.IAsyncResult)
extern void SendResponceType_EndInvoke_mB0A10E15626458E0A83D78A734E1E002E0D61425 (void);
// 0x00000084 System.Void ROS2.NativeRcl/PublisherGetDefaultOptionsType::.ctor(System.Object,System.IntPtr)
extern void PublisherGetDefaultOptionsType__ctor_mA0B1931E2082D3B33B9E267C3E77F2FA2E8F99F1 (void);
// 0x00000085 System.IntPtr ROS2.NativeRcl/PublisherGetDefaultOptionsType::Invoke()
extern void PublisherGetDefaultOptionsType_Invoke_mC040D61CB42495D2798C3D5EC240F9E86A53ACFA (void);
// 0x00000086 System.IAsyncResult ROS2.NativeRcl/PublisherGetDefaultOptionsType::BeginInvoke(System.AsyncCallback,System.Object)
extern void PublisherGetDefaultOptionsType_BeginInvoke_mE8141627D0B1D7969487A6FDAAEAAB9F16382443 (void);
// 0x00000087 System.IntPtr ROS2.NativeRcl/PublisherGetDefaultOptionsType::EndInvoke(System.IAsyncResult)
extern void PublisherGetDefaultOptionsType_EndInvoke_mFB65FF68CED37E0153F9FEE81FAC822131F98C5C (void);
// 0x00000088 System.Void ROS2.NativeRcl/GetZeroInitiazizedPublisherType::.ctor(System.Object,System.IntPtr)
extern void GetZeroInitiazizedPublisherType__ctor_m5C896A97A22832F49DD0A780B03F36453B29E032 (void);
// 0x00000089 ROS2.rcl_publisher_t ROS2.NativeRcl/GetZeroInitiazizedPublisherType::Invoke()
extern void GetZeroInitiazizedPublisherType_Invoke_m389E74AC34BC9FEAD1F007F9B34CB27DAD4C8D77 (void);
// 0x0000008A System.IAsyncResult ROS2.NativeRcl/GetZeroInitiazizedPublisherType::BeginInvoke(System.AsyncCallback,System.Object)
extern void GetZeroInitiazizedPublisherType_BeginInvoke_m21A19A972C1FEFAD1F4DDA62BE3C1A96DC962BB9 (void);
// 0x0000008B ROS2.rcl_publisher_t ROS2.NativeRcl/GetZeroInitiazizedPublisherType::EndInvoke(System.IAsyncResult)
extern void GetZeroInitiazizedPublisherType_EndInvoke_m83F6B431288043CD6BE8FFE8FD8BD4CA7A266D7C (void);
// 0x0000008C System.Void ROS2.NativeRcl/PublisherInitType::.ctor(System.Object,System.IntPtr)
extern void PublisherInitType__ctor_mE0F288D21B7A38C8B7B3463D37F2CE4684867A79 (void);
// 0x0000008D System.Int32 ROS2.NativeRcl/PublisherInitType::Invoke(ROS2.rcl_publisher_t&,ROS2.rcl_node_t&,System.IntPtr,System.String,System.IntPtr)
extern void PublisherInitType_Invoke_mAF2E9C0A254E009AA2FFE8D9F61F76479F82915B (void);
// 0x0000008E System.IAsyncResult ROS2.NativeRcl/PublisherInitType::BeginInvoke(ROS2.rcl_publisher_t&,ROS2.rcl_node_t&,System.IntPtr,System.String,System.IntPtr,System.AsyncCallback,System.Object)
extern void PublisherInitType_BeginInvoke_mADF70B459529C6735CFBEC52EC718AAA6DD52558 (void);
// 0x0000008F System.Int32 ROS2.NativeRcl/PublisherInitType::EndInvoke(ROS2.rcl_publisher_t&,ROS2.rcl_node_t&,System.IAsyncResult)
extern void PublisherInitType_EndInvoke_m78E819113970B7658D233B9AEB990B112E6EC533 (void);
// 0x00000090 System.Void ROS2.NativeRcl/PublisherFiniType::.ctor(System.Object,System.IntPtr)
extern void PublisherFiniType__ctor_m8D130F0A60DA3C56799873BDBD256153E2AEA553 (void);
// 0x00000091 System.Int32 ROS2.NativeRcl/PublisherFiniType::Invoke(ROS2.rcl_publisher_t&,ROS2.rcl_node_t&)
extern void PublisherFiniType_Invoke_mD75EFB283C298ABF66E6C54681FBD0FA360FBE50 (void);
// 0x00000092 System.IAsyncResult ROS2.NativeRcl/PublisherFiniType::BeginInvoke(ROS2.rcl_publisher_t&,ROS2.rcl_node_t&,System.AsyncCallback,System.Object)
extern void PublisherFiniType_BeginInvoke_mB889696E5E9B6E4D446B7F6800E2B244AFE1DC8C (void);
// 0x00000093 System.Int32 ROS2.NativeRcl/PublisherFiniType::EndInvoke(ROS2.rcl_publisher_t&,ROS2.rcl_node_t&,System.IAsyncResult)
extern void PublisherFiniType_EndInvoke_mAC646AA1CC09BC064D3F08CAF569BEC292B65EBD (void);
// 0x00000094 System.Void ROS2.NativeRcl/PublishType::.ctor(System.Object,System.IntPtr)
extern void PublishType__ctor_m5B7F57C0F87D56E932042D2FDFF7B1571C6DD8CB (void);
// 0x00000095 System.Int32 ROS2.NativeRcl/PublishType::Invoke(ROS2.rcl_publisher_t&,System.IntPtr,System.IntPtr)
extern void PublishType_Invoke_m8052474DEFC5436485A16B823BE88180889EBE18 (void);
// 0x00000096 System.IAsyncResult ROS2.NativeRcl/PublishType::BeginInvoke(ROS2.rcl_publisher_t&,System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
extern void PublishType_BeginInvoke_m65613A5901BAFDBF903B7FE8622D1FADA7AB9DB4 (void);
// 0x00000097 System.Int32 ROS2.NativeRcl/PublishType::EndInvoke(ROS2.rcl_publisher_t&,System.IAsyncResult)
extern void PublishType_EndInvoke_m40A338A3229B4E4C01848347D667924DE1FBB5B6 (void);
// 0x00000098 System.Void ROS2.NativeRcl/GetZeroInitializedSubcriptionType::.ctor(System.Object,System.IntPtr)
extern void GetZeroInitializedSubcriptionType__ctor_m5B563ABBE4E2EBACDD4E398041F7641BFBB7FA8D (void);
// 0x00000099 ROS2.rcl_subscription_t ROS2.NativeRcl/GetZeroInitializedSubcriptionType::Invoke()
extern void GetZeroInitializedSubcriptionType_Invoke_m9B839F91135BCA2DCBCCED46A6BE33927934C705 (void);
// 0x0000009A System.IAsyncResult ROS2.NativeRcl/GetZeroInitializedSubcriptionType::BeginInvoke(System.AsyncCallback,System.Object)
extern void GetZeroInitializedSubcriptionType_BeginInvoke_m61CBFFB6C586BAD52F4922FD9E88528D263055B1 (void);
// 0x0000009B ROS2.rcl_subscription_t ROS2.NativeRcl/GetZeroInitializedSubcriptionType::EndInvoke(System.IAsyncResult)
extern void GetZeroInitializedSubcriptionType_EndInvoke_m7DFACAD8F963A40C48033B4F1E2567C9FA163A5C (void);
// 0x0000009C System.Void ROS2.NativeRcl/SubscriptionInitType::.ctor(System.Object,System.IntPtr)
extern void SubscriptionInitType__ctor_m59D8D9A27D0ECC18CFE979E2C69ECA5D37BCB7F8 (void);
// 0x0000009D System.Int32 ROS2.NativeRcl/SubscriptionInitType::Invoke(ROS2.rcl_subscription_t&,ROS2.rcl_node_t&,System.IntPtr,System.String,System.IntPtr)
extern void SubscriptionInitType_Invoke_mEE9EAE1803540A8222AE1A2BD2F4613F2D92B6F4 (void);
// 0x0000009E System.IAsyncResult ROS2.NativeRcl/SubscriptionInitType::BeginInvoke(ROS2.rcl_subscription_t&,ROS2.rcl_node_t&,System.IntPtr,System.String,System.IntPtr,System.AsyncCallback,System.Object)
extern void SubscriptionInitType_BeginInvoke_m66AA41F1D1AD393BA541C782223169B5441A70D1 (void);
// 0x0000009F System.Int32 ROS2.NativeRcl/SubscriptionInitType::EndInvoke(ROS2.rcl_subscription_t&,ROS2.rcl_node_t&,System.IAsyncResult)
extern void SubscriptionInitType_EndInvoke_m0D342C0C5244BF887B97C2D740897D0031F33C47 (void);
// 0x000000A0 System.Void ROS2.NativeRcl/SubscriptionFiniType::.ctor(System.Object,System.IntPtr)
extern void SubscriptionFiniType__ctor_mDF38B9B49291EDD2F37FE944A1C7F708266CE352 (void);
// 0x000000A1 System.Int32 ROS2.NativeRcl/SubscriptionFiniType::Invoke(ROS2.rcl_subscription_t&,ROS2.rcl_node_t&)
extern void SubscriptionFiniType_Invoke_mC9A32B3352CE680C5C5C9F03F4830606DFCE49EB (void);
// 0x000000A2 System.IAsyncResult ROS2.NativeRcl/SubscriptionFiniType::BeginInvoke(ROS2.rcl_subscription_t&,ROS2.rcl_node_t&,System.AsyncCallback,System.Object)
extern void SubscriptionFiniType_BeginInvoke_mC6E8CF03FE0601724BFBCEBD21BE3289AE55C5C0 (void);
// 0x000000A3 System.Int32 ROS2.NativeRcl/SubscriptionFiniType::EndInvoke(ROS2.rcl_subscription_t&,ROS2.rcl_node_t&,System.IAsyncResult)
extern void SubscriptionFiniType_EndInvoke_m2E1930D6B5C1C034A0B75028746675080E68715F (void);
// 0x000000A4 System.Void ROS2.NativeRcl/SubscriptionIsValidType::.ctor(System.Object,System.IntPtr)
extern void SubscriptionIsValidType__ctor_m876AB24A6709771393A61A9A324D32877C418F14 (void);
// 0x000000A5 System.Boolean ROS2.NativeRcl/SubscriptionIsValidType::Invoke(ROS2.rcl_subscription_t&)
extern void SubscriptionIsValidType_Invoke_mF11514EA69BC80E04167680EF7EFE7F8DD2E5702 (void);
// 0x000000A6 System.IAsyncResult ROS2.NativeRcl/SubscriptionIsValidType::BeginInvoke(ROS2.rcl_subscription_t&,System.AsyncCallback,System.Object)
extern void SubscriptionIsValidType_BeginInvoke_mE8B4DF1F88028AAB831FEEEFB0286811AF22ED02 (void);
// 0x000000A7 System.Boolean ROS2.NativeRcl/SubscriptionIsValidType::EndInvoke(ROS2.rcl_subscription_t&,System.IAsyncResult)
extern void SubscriptionIsValidType_EndInvoke_mF38DE9F9F2BAD0590798D1CFF0012D3D290308EB (void);
// 0x000000A8 System.Void ROS2.NativeRcl/TakeType::.ctor(System.Object,System.IntPtr)
extern void TakeType__ctor_m83F8B82C7436CE1B96E49D37558EA9F7A5F96BC4 (void);
// 0x000000A9 System.Int32 ROS2.NativeRcl/TakeType::Invoke(ROS2.rcl_subscription_t&,System.IntPtr,System.IntPtr,System.IntPtr)
extern void TakeType_Invoke_m0AFB55C3BC2C7AC726ECBB59E0BE46D1D4D039CB (void);
// 0x000000AA System.IAsyncResult ROS2.NativeRcl/TakeType::BeginInvoke(ROS2.rcl_subscription_t&,System.IntPtr,System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
extern void TakeType_BeginInvoke_mE79B91D38FB0D71C684AF22350444C8D7DE04A23 (void);
// 0x000000AB System.Int32 ROS2.NativeRcl/TakeType::EndInvoke(ROS2.rcl_subscription_t&,System.IAsyncResult)
extern void TakeType_EndInvoke_mDBF9849FC9335B1C7DBA88AC5AB7ADEF06192AE4 (void);
// 0x000000AC System.Void ROS2.NativeRcl/GetZeroInitializedWaitSetType::.ctor(System.Object,System.IntPtr)
extern void GetZeroInitializedWaitSetType__ctor_m9926EB1CD7E80F933DABF079EBC49A64E3F49A8F (void);
// 0x000000AD ROS2.rcl_wait_set_t ROS2.NativeRcl/GetZeroInitializedWaitSetType::Invoke()
extern void GetZeroInitializedWaitSetType_Invoke_mD8C5981A1D566582BCF6BC81F4633B86C1BA5608 (void);
// 0x000000AE System.IAsyncResult ROS2.NativeRcl/GetZeroInitializedWaitSetType::BeginInvoke(System.AsyncCallback,System.Object)
extern void GetZeroInitializedWaitSetType_BeginInvoke_mF5B2F1698EE82E6F73BD7D39D19C33E67998A739 (void);
// 0x000000AF ROS2.rcl_wait_set_t ROS2.NativeRcl/GetZeroInitializedWaitSetType::EndInvoke(System.IAsyncResult)
extern void GetZeroInitializedWaitSetType_EndInvoke_m459283368DB111D370962C063217337D9D8C4D4C (void);
// 0x000000B0 System.Void ROS2.NativeRcl/WaitSetResizeType::.ctor(System.Object,System.IntPtr)
extern void WaitSetResizeType__ctor_m2D84DCA405FCE1024C9EDB01F198A203A7E7DB16 (void);
// 0x000000B1 System.Int32 ROS2.NativeRcl/WaitSetResizeType::Invoke(ROS2.rcl_wait_set_t&,System.UIntPtr,System.UIntPtr,System.UIntPtr,System.UIntPtr,System.UIntPtr,System.UIntPtr)
extern void WaitSetResizeType_Invoke_m3A3751427298C8B363A512516D003CA42F5EF203 (void);
// 0x000000B2 System.IAsyncResult ROS2.NativeRcl/WaitSetResizeType::BeginInvoke(ROS2.rcl_wait_set_t&,System.UIntPtr,System.UIntPtr,System.UIntPtr,System.UIntPtr,System.UIntPtr,System.UIntPtr,System.AsyncCallback,System.Object)
extern void WaitSetResizeType_BeginInvoke_m19984476CBA4BBB7A0646024CC6508F989E14DD2 (void);
// 0x000000B3 System.Int32 ROS2.NativeRcl/WaitSetResizeType::EndInvoke(ROS2.rcl_wait_set_t&,System.IAsyncResult)
extern void WaitSetResizeType_EndInvoke_mD6FF697299EB7E95CF72B6EDE4447FFA4CFCF04F (void);
// 0x000000B4 System.Void ROS2.NativeRcl/WaitSetInitType::.ctor(System.Object,System.IntPtr)
extern void WaitSetInitType__ctor_mCAAE7815D319A159944793E695EE11885C64DCB0 (void);
// 0x000000B5 System.Int32 ROS2.NativeRcl/WaitSetInitType::Invoke(ROS2.rcl_wait_set_t&,System.UIntPtr,System.UIntPtr,System.UIntPtr,System.UIntPtr,System.UIntPtr,System.UIntPtr,ROS2.rcl_context_t&,ROS2.rcl_allocator_t)
extern void WaitSetInitType_Invoke_mA0882157A33C2FD6FCE7F5F0D2C21C4DBAAA4121 (void);
// 0x000000B6 System.IAsyncResult ROS2.NativeRcl/WaitSetInitType::BeginInvoke(ROS2.rcl_wait_set_t&,System.UIntPtr,System.UIntPtr,System.UIntPtr,System.UIntPtr,System.UIntPtr,System.UIntPtr,ROS2.rcl_context_t&,ROS2.rcl_allocator_t,System.AsyncCallback,System.Object)
extern void WaitSetInitType_BeginInvoke_m42219622AB573DF4BA91ECF629CBAC9E57BE7714 (void);
// 0x000000B7 System.Int32 ROS2.NativeRcl/WaitSetInitType::EndInvoke(ROS2.rcl_wait_set_t&,ROS2.rcl_context_t&,System.IAsyncResult)
extern void WaitSetInitType_EndInvoke_m7B827BA56148EED8C3312C93A8868C9BB957AE75 (void);
// 0x000000B8 System.Void ROS2.NativeRcl/WatiSetFiniType::.ctor(System.Object,System.IntPtr)
extern void WatiSetFiniType__ctor_m019BB39CACAF965688D105E2C5B140FBC0042345 (void);
// 0x000000B9 System.Int32 ROS2.NativeRcl/WatiSetFiniType::Invoke(ROS2.rcl_wait_set_t&)
extern void WatiSetFiniType_Invoke_m26EFD42CC7F1B0A4D17869E521AFA2B15977A8CC (void);
// 0x000000BA System.IAsyncResult ROS2.NativeRcl/WatiSetFiniType::BeginInvoke(ROS2.rcl_wait_set_t&,System.AsyncCallback,System.Object)
extern void WatiSetFiniType_BeginInvoke_mBAE484A53E98B064F90E608D8DC332813F9FD7B2 (void);
// 0x000000BB System.Int32 ROS2.NativeRcl/WatiSetFiniType::EndInvoke(ROS2.rcl_wait_set_t&,System.IAsyncResult)
extern void WatiSetFiniType_EndInvoke_m87BD8B14C167B902FFB570528ACCC02E09E118A8 (void);
// 0x000000BC System.Void ROS2.NativeRcl/WaitSetClearType::.ctor(System.Object,System.IntPtr)
extern void WaitSetClearType__ctor_m981DCF4A5BBED3B7C00789CD37DAC171EBAAAA61 (void);
// 0x000000BD System.Int32 ROS2.NativeRcl/WaitSetClearType::Invoke(ROS2.rcl_wait_set_t&)
extern void WaitSetClearType_Invoke_m818BAE5F8DB2F99D6F09BE7029C71F2B4793D9B2 (void);
// 0x000000BE System.IAsyncResult ROS2.NativeRcl/WaitSetClearType::BeginInvoke(ROS2.rcl_wait_set_t&,System.AsyncCallback,System.Object)
extern void WaitSetClearType_BeginInvoke_mC8A5EAC75076BC9E43B1382888F5563C61234F73 (void);
// 0x000000BF System.Int32 ROS2.NativeRcl/WaitSetClearType::EndInvoke(ROS2.rcl_wait_set_t&,System.IAsyncResult)
extern void WaitSetClearType_EndInvoke_mB9DECE1802B2D193DFB008E4A84BD7ED84F6D3BA (void);
// 0x000000C0 System.Void ROS2.NativeRcl/WaitSetAddSubscriptionType::.ctor(System.Object,System.IntPtr)
extern void WaitSetAddSubscriptionType__ctor_m973C70D1AD2D535DF3EFBD99524A790D8D49A3C4 (void);
// 0x000000C1 System.Int32 ROS2.NativeRcl/WaitSetAddSubscriptionType::Invoke(ROS2.rcl_wait_set_t&,ROS2.rcl_subscription_t&,System.UIntPtr&)
extern void WaitSetAddSubscriptionType_Invoke_m1B8ABA9D8D3187D8CBAE60427282B8ED3987885A (void);
// 0x000000C2 System.IAsyncResult ROS2.NativeRcl/WaitSetAddSubscriptionType::BeginInvoke(ROS2.rcl_wait_set_t&,ROS2.rcl_subscription_t&,System.UIntPtr&,System.AsyncCallback,System.Object)
extern void WaitSetAddSubscriptionType_BeginInvoke_mD0971FFFC89036BF8A5007D0F8A56B03CCC9FE23 (void);
// 0x000000C3 System.Int32 ROS2.NativeRcl/WaitSetAddSubscriptionType::EndInvoke(ROS2.rcl_wait_set_t&,ROS2.rcl_subscription_t&,System.UIntPtr&,System.IAsyncResult)
extern void WaitSetAddSubscriptionType_EndInvoke_mD275D7BA0A9EE0210FF85D6DFB581FA5582AEF6D (void);
// 0x000000C4 System.Void ROS2.NativeRcl/WaitSetAddClientType::.ctor(System.Object,System.IntPtr)
extern void WaitSetAddClientType__ctor_m275B3934D77694F41B9773987B58E2243062B8A7 (void);
// 0x000000C5 System.Int32 ROS2.NativeRcl/WaitSetAddClientType::Invoke(ROS2.rcl_wait_set_t&,ROS2.rcl_client_t&,System.UIntPtr&)
extern void WaitSetAddClientType_Invoke_m9815A26D8DA6BD1C2B488CC9AD7BBBF24FC77D7B (void);
// 0x000000C6 System.IAsyncResult ROS2.NativeRcl/WaitSetAddClientType::BeginInvoke(ROS2.rcl_wait_set_t&,ROS2.rcl_client_t&,System.UIntPtr&,System.AsyncCallback,System.Object)
extern void WaitSetAddClientType_BeginInvoke_m676D4A19023946F5B72B823AA2F3B83A1B6B1FAA (void);
// 0x000000C7 System.Int32 ROS2.NativeRcl/WaitSetAddClientType::EndInvoke(ROS2.rcl_wait_set_t&,ROS2.rcl_client_t&,System.UIntPtr&,System.IAsyncResult)
extern void WaitSetAddClientType_EndInvoke_m8303C8F54D257350CADBC604357F7BF88EEC4333 (void);
// 0x000000C8 System.Void ROS2.NativeRcl/WaitSetAddServiceType::.ctor(System.Object,System.IntPtr)
extern void WaitSetAddServiceType__ctor_m71006CBBF71E237FCED6B105E0ED650F54D6FCF8 (void);
// 0x000000C9 System.Int32 ROS2.NativeRcl/WaitSetAddServiceType::Invoke(ROS2.rcl_wait_set_t&,ROS2.rcl_service_t&,System.UIntPtr&)
extern void WaitSetAddServiceType_Invoke_m4101337D8D0EFD11A909E2EE2990E8A5C55BF83D (void);
// 0x000000CA System.IAsyncResult ROS2.NativeRcl/WaitSetAddServiceType::BeginInvoke(ROS2.rcl_wait_set_t&,ROS2.rcl_service_t&,System.UIntPtr&,System.AsyncCallback,System.Object)
extern void WaitSetAddServiceType_BeginInvoke_mE76DEBE35A5A379BA656CDC8C10F743C08C10232 (void);
// 0x000000CB System.Int32 ROS2.NativeRcl/WaitSetAddServiceType::EndInvoke(ROS2.rcl_wait_set_t&,ROS2.rcl_service_t&,System.UIntPtr&,System.IAsyncResult)
extern void WaitSetAddServiceType_EndInvoke_m6AD17259C7CC16C83646A4235F36EEC2ECAD8835 (void);
// 0x000000CC System.Void ROS2.NativeRcl/WaitType::.ctor(System.Object,System.IntPtr)
extern void WaitType__ctor_mAAED3A5D5AB0E524ED586F9ABE5A1D664E5BDF19 (void);
// 0x000000CD System.Int32 ROS2.NativeRcl/WaitType::Invoke(ROS2.rcl_wait_set_t&,System.Int64)
extern void WaitType_Invoke_m43F90F5C01799D6D1CF2F1D3D5D16B51A27E6B90 (void);
// 0x000000CE System.IAsyncResult ROS2.NativeRcl/WaitType::BeginInvoke(ROS2.rcl_wait_set_t&,System.Int64,System.AsyncCallback,System.Object)
extern void WaitType_BeginInvoke_m822942AAB86927A8E5F5DA6185E6DF3F135CFE66 (void);
// 0x000000CF System.Int32 ROS2.NativeRcl/WaitType::EndInvoke(ROS2.rcl_wait_set_t&,System.IAsyncResult)
extern void WaitType_EndInvoke_mA4E9B646A1D487CB40792FDA3EAFD26CD7FCAE4B (void);
// 0x000000D0 System.Void ROS2.NativeRcl/RclClockGetNow::.ctor(System.Object,System.IntPtr)
extern void RclClockGetNow__ctor_m34B661D824FBAD8A26CF1BEE741CEDDB44C425D0 (void);
// 0x000000D1 System.Int32 ROS2.NativeRcl/RclClockGetNow::Invoke(System.IntPtr,System.Int64&)
extern void RclClockGetNow_Invoke_m00070791151C18FE1EB755A8E1C4400261330075 (void);
// 0x000000D2 System.IAsyncResult ROS2.NativeRcl/RclClockGetNow::BeginInvoke(System.IntPtr,System.Int64&,System.AsyncCallback,System.Object)
extern void RclClockGetNow_BeginInvoke_mA0A01C855C189E3FD96E3543E6A71374B7D1669D (void);
// 0x000000D3 System.Int32 ROS2.NativeRcl/RclClockGetNow::EndInvoke(System.Int64&,System.IAsyncResult)
extern void RclClockGetNow_EndInvoke_m5E90E7F50138410C4F62A85C56A4A483B5713B30 (void);
// 0x000000D4 System.Void ROS2.NativeRcl/RclGetDefaultAllocatorType::.ctor(System.Object,System.IntPtr)
extern void RclGetDefaultAllocatorType__ctor_m427E58DAD55BE8F6A0DAA175A6A71ACD6F9F0480 (void);
// 0x000000D5 ROS2.rcl_allocator_t ROS2.NativeRcl/RclGetDefaultAllocatorType::Invoke()
extern void RclGetDefaultAllocatorType_Invoke_m41CECCE737A7F68EADC9033A4463964A4E585096 (void);
// 0x000000D6 System.IAsyncResult ROS2.NativeRcl/RclGetDefaultAllocatorType::BeginInvoke(System.AsyncCallback,System.Object)
extern void RclGetDefaultAllocatorType_BeginInvoke_m30AEAF2FB82FF29BC4803C8088D616ACBADFAD0B (void);
// 0x000000D7 ROS2.rcl_allocator_t ROS2.NativeRcl/RclGetDefaultAllocatorType::EndInvoke(System.IAsyncResult)
extern void RclGetDefaultAllocatorType_EndInvoke_mEC3E05A021850C623CB3EADD942A2CD662030ED5 (void);
// 0x000000D8 System.Void ROS2.NativeRcl/ResetErrorType::.ctor(System.Object,System.IntPtr)
extern void ResetErrorType__ctor_m6AA4EEEA59CCB10DB6D8D0E00BA9D971B787812C (void);
// 0x000000D9 System.Void ROS2.NativeRcl/ResetErrorType::Invoke()
extern void ResetErrorType_Invoke_m4274612856ECEBA822B4AA2B15E7F75487C4713C (void);
// 0x000000DA System.IAsyncResult ROS2.NativeRcl/ResetErrorType::BeginInvoke(System.AsyncCallback,System.Object)
extern void ResetErrorType_BeginInvoke_m25BB0E1E26ABF8988924404E45F43D2D40875B19 (void);
// 0x000000DB System.Void ROS2.NativeRcl/ResetErrorType::EndInvoke(System.IAsyncResult)
extern void ResetErrorType_EndInvoke_mE7E6CD4BE3954DE7C151651DD779E7494EED1744 (void);
// 0x000000DC System.Void ROS2.NativeRclInterface::.cctor()
extern void NativeRclInterface__cctor_m39CC3E5B9A65DFF54B537DA3B127C4104BF8B4B4 (void);
// 0x000000DD System.Void ROS2.NativeRclInterface/RCLCSInitType::.ctor(System.Object,System.IntPtr)
extern void RCLCSInitType__ctor_m580FEB7BEB81F8F40FD114D1A16065C862A1E2F5 (void);
// 0x000000DE System.Int32 ROS2.NativeRclInterface/RCLCSInitType::Invoke(ROS2.rcl_context_t&,ROS2.rcl_allocator_t)
extern void RCLCSInitType_Invoke_m0F244268FB97A1EC69BAE44FBD0BB9C201DF4E42 (void);
// 0x000000DF System.IAsyncResult ROS2.NativeRclInterface/RCLCSInitType::BeginInvoke(ROS2.rcl_context_t&,ROS2.rcl_allocator_t,System.AsyncCallback,System.Object)
extern void RCLCSInitType_BeginInvoke_m6536F3027A269C5E880A05A8E702322A0767F296 (void);
// 0x000000E0 System.Int32 ROS2.NativeRclInterface/RCLCSInitType::EndInvoke(ROS2.rcl_context_t&,System.IAsyncResult)
extern void RCLCSInitType_EndInvoke_mA8AF9F539EFDBA660FCC6F0A799C416C363F7ECB (void);
// 0x000000E1 System.Void ROS2.NativeRclInterface/GetErrorStringType::.ctor(System.Object,System.IntPtr)
extern void GetErrorStringType__ctor_mC3EDF9D9753A8B71C755D0E07DCD01D27F21A7BD (void);
// 0x000000E2 System.IntPtr ROS2.NativeRclInterface/GetErrorStringType::Invoke()
extern void GetErrorStringType_Invoke_mF682DB2C6231B00B54FC6BE368456DFC81000DA6 (void);
// 0x000000E3 System.IAsyncResult ROS2.NativeRclInterface/GetErrorStringType::BeginInvoke(System.AsyncCallback,System.Object)
extern void GetErrorStringType_BeginInvoke_m4F7ACE995B9A707118959C2BEF604AA71A36E9C5 (void);
// 0x000000E4 System.IntPtr ROS2.NativeRclInterface/GetErrorStringType::EndInvoke(System.IAsyncResult)
extern void GetErrorStringType_EndInvoke_m087D8F0AEAC2D07A1E332CD7170583381626AB4C (void);
// 0x000000E5 System.Void ROS2.NativeRclInterface/DisposeErrorStringType::.ctor(System.Object,System.IntPtr)
extern void DisposeErrorStringType__ctor_m0EB5EF05FF91FCA088835FC7708D75381ECF9551 (void);
// 0x000000E6 System.Void ROS2.NativeRclInterface/DisposeErrorStringType::Invoke(System.IntPtr)
extern void DisposeErrorStringType_Invoke_mEAB6DDBFAFCFE029EBCFDEEF35FB1C65038FD3C9 (void);
// 0x000000E7 System.IAsyncResult ROS2.NativeRclInterface/DisposeErrorStringType::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void DisposeErrorStringType_BeginInvoke_mE7E4EF0EE846F4C62C7A8E89DFF0B4E8B31A513A (void);
// 0x000000E8 System.Void ROS2.NativeRclInterface/DisposeErrorStringType::EndInvoke(System.IAsyncResult)
extern void DisposeErrorStringType_EndInvoke_m75ABC51A2973F9E56D5C3DCFF51AD4465629044F (void);
// 0x000000E9 System.Void ROS2.NativeRclInterface/NodeCreateDefaltOptionsType::.ctor(System.Object,System.IntPtr)
extern void NodeCreateDefaltOptionsType__ctor_mFE628D90420D3B28C275C8A93D46C68A68480D9C (void);
// 0x000000EA System.IntPtr ROS2.NativeRclInterface/NodeCreateDefaltOptionsType::Invoke()
extern void NodeCreateDefaltOptionsType_Invoke_m03EC69F947909616A6137C575C5EED4EC3A3B0BA (void);
// 0x000000EB System.IAsyncResult ROS2.NativeRclInterface/NodeCreateDefaltOptionsType::BeginInvoke(System.AsyncCallback,System.Object)
extern void NodeCreateDefaltOptionsType_BeginInvoke_m006EC6A24BA3C06C3AA9FF37FA934802D12E05EB (void);
// 0x000000EC System.IntPtr ROS2.NativeRclInterface/NodeCreateDefaltOptionsType::EndInvoke(System.IAsyncResult)
extern void NodeCreateDefaltOptionsType_EndInvoke_m037F04892DE56779FC58525BD9F008777BEAA3A1 (void);
// 0x000000ED System.Void ROS2.NativeRclInterface/NodeDisposeOptionsType::.ctor(System.Object,System.IntPtr)
extern void NodeDisposeOptionsType__ctor_mBBE70446F1843F451FC32EBE659770D6BCD6BBE4 (void);
// 0x000000EE System.Void ROS2.NativeRclInterface/NodeDisposeOptionsType::Invoke(System.IntPtr)
extern void NodeDisposeOptionsType_Invoke_m835EF8D0C527904297A9967E2B7FEB2184C3DE6E (void);
// 0x000000EF System.IAsyncResult ROS2.NativeRclInterface/NodeDisposeOptionsType::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void NodeDisposeOptionsType_BeginInvoke_mBB5F72A9C0FEE1B0BD32349A4EE03768AA33F7E4 (void);
// 0x000000F0 System.Void ROS2.NativeRclInterface/NodeDisposeOptionsType::EndInvoke(System.IAsyncResult)
extern void NodeDisposeOptionsType_EndInvoke_mFE098A17038E84C8F7C07DE1C0B8B5DDF4307191 (void);
// 0x000000F1 System.Void ROS2.NativeRclInterface/SubscriptionCreateOptionsType::.ctor(System.Object,System.IntPtr)
extern void SubscriptionCreateOptionsType__ctor_m8D99C7CCD6A78AC99CDF61EA1B795D5351128EB8 (void);
// 0x000000F2 System.IntPtr ROS2.NativeRclInterface/SubscriptionCreateOptionsType::Invoke(System.IntPtr)
extern void SubscriptionCreateOptionsType_Invoke_mF210824ACCCE79F0F900E04004E191CB9CB94B92 (void);
// 0x000000F3 System.IAsyncResult ROS2.NativeRclInterface/SubscriptionCreateOptionsType::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void SubscriptionCreateOptionsType_BeginInvoke_mCB7CFFC004FF294A8FF778CF81B7293DC7A85E60 (void);
// 0x000000F4 System.IntPtr ROS2.NativeRclInterface/SubscriptionCreateOptionsType::EndInvoke(System.IAsyncResult)
extern void SubscriptionCreateOptionsType_EndInvoke_m367C68F7FB8944C9AEF7B200100E5C30AAF6EFE8 (void);
// 0x000000F5 System.Void ROS2.NativeRclInterface/SubscriptionDisposeOptionsType::.ctor(System.Object,System.IntPtr)
extern void SubscriptionDisposeOptionsType__ctor_m14B9F359107C237734AAFA58BB4CD4DCDEF39DE6 (void);
// 0x000000F6 System.Void ROS2.NativeRclInterface/SubscriptionDisposeOptionsType::Invoke(System.IntPtr)
extern void SubscriptionDisposeOptionsType_Invoke_m02AC1A7D0766AAC31049295301F91239E4193BFD (void);
// 0x000000F7 System.IAsyncResult ROS2.NativeRclInterface/SubscriptionDisposeOptionsType::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void SubscriptionDisposeOptionsType_BeginInvoke_m4B89C5A7D034707AD3F2F034677B114DECB2CBFE (void);
// 0x000000F8 System.Void ROS2.NativeRclInterface/SubscriptionDisposeOptionsType::EndInvoke(System.IAsyncResult)
extern void SubscriptionDisposeOptionsType_EndInvoke_m052166573D6B556261584F88FCF916F232C46BCC (void);
// 0x000000F9 System.Void ROS2.NativeRclInterface/PublisherCreateOptionsType::.ctor(System.Object,System.IntPtr)
extern void PublisherCreateOptionsType__ctor_m538E9A00E4E0883C0FDA2CCA8599C98209C7C0F0 (void);
// 0x000000FA System.IntPtr ROS2.NativeRclInterface/PublisherCreateOptionsType::Invoke(System.IntPtr)
extern void PublisherCreateOptionsType_Invoke_m0458CA73CBDE23751269F6D1154CEC98506CDE11 (void);
// 0x000000FB System.IAsyncResult ROS2.NativeRclInterface/PublisherCreateOptionsType::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void PublisherCreateOptionsType_BeginInvoke_m3A991D9EAA470830C84FA03A7448002FB434D176 (void);
// 0x000000FC System.IntPtr ROS2.NativeRclInterface/PublisherCreateOptionsType::EndInvoke(System.IAsyncResult)
extern void PublisherCreateOptionsType_EndInvoke_mA74B2ED7F4869F91A0EC1A2F1F039F921EC03DBE (void);
// 0x000000FD System.Void ROS2.NativeRclInterface/PublisherDisposeOptionsType::.ctor(System.Object,System.IntPtr)
extern void PublisherDisposeOptionsType__ctor_mEB9AD5DB1D8975766449DD69E189E175932F2F43 (void);
// 0x000000FE System.Void ROS2.NativeRclInterface/PublisherDisposeOptionsType::Invoke(System.IntPtr)
extern void PublisherDisposeOptionsType_Invoke_m9861001577FD0A25DD8CC2BB37825A1912B9FE80 (void);
// 0x000000FF System.IAsyncResult ROS2.NativeRclInterface/PublisherDisposeOptionsType::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void PublisherDisposeOptionsType_BeginInvoke_m099D52A996175D61BB5E2C8700F1B25A2999FF7D (void);
// 0x00000100 System.Void ROS2.NativeRclInterface/PublisherDisposeOptionsType::EndInvoke(System.IAsyncResult)
extern void PublisherDisposeOptionsType_EndInvoke_m82BEC8CE504C2A92046D1BB9246485BD5DA97E1D (void);
// 0x00000101 System.Void ROS2.NativeRclInterface/ClientCreateOptionsType::.ctor(System.Object,System.IntPtr)
extern void ClientCreateOptionsType__ctor_m4024E3417DEE76E8236193C1954C70F1B87416E8 (void);
// 0x00000102 System.IntPtr ROS2.NativeRclInterface/ClientCreateOptionsType::Invoke(System.IntPtr)
extern void ClientCreateOptionsType_Invoke_m95D49A7DD70348BFF08C5F875D235C60B3DCCCFD (void);
// 0x00000103 System.IAsyncResult ROS2.NativeRclInterface/ClientCreateOptionsType::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void ClientCreateOptionsType_BeginInvoke_m1AA0E5314B1533D2862E86A53C4082BCB7533486 (void);
// 0x00000104 System.IntPtr ROS2.NativeRclInterface/ClientCreateOptionsType::EndInvoke(System.IAsyncResult)
extern void ClientCreateOptionsType_EndInvoke_m84C89F31FD4642EE737A6B0E6EEE5C3BCDD8E273 (void);
// 0x00000105 System.Void ROS2.NativeRclInterface/ClientDisposeOptionsType::.ctor(System.Object,System.IntPtr)
extern void ClientDisposeOptionsType__ctor_m450C576CA9F4A0CF2693A57F3CB7B9A1E6B3ECCC (void);
// 0x00000106 System.Void ROS2.NativeRclInterface/ClientDisposeOptionsType::Invoke(System.IntPtr)
extern void ClientDisposeOptionsType_Invoke_m743FDBF766E760B5C05F0916A23C61F99EDB4755 (void);
// 0x00000107 System.IAsyncResult ROS2.NativeRclInterface/ClientDisposeOptionsType::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void ClientDisposeOptionsType_BeginInvoke_m1C5AC4B391CE3D795C72837F235FF1BC22B1815D (void);
// 0x00000108 System.Void ROS2.NativeRclInterface/ClientDisposeOptionsType::EndInvoke(System.IAsyncResult)
extern void ClientDisposeOptionsType_EndInvoke_mC0A26C11AAD35148802EFD7B0B6B5665A75CB801 (void);
// 0x00000109 System.Void ROS2.NativeRclInterface/ServiceCreateOptionsType::.ctor(System.Object,System.IntPtr)
extern void ServiceCreateOptionsType__ctor_m78D08B6A27E38A5EC00CB1D47F5F2E6EE5E1CA02 (void);
// 0x0000010A System.IntPtr ROS2.NativeRclInterface/ServiceCreateOptionsType::Invoke(System.IntPtr)
extern void ServiceCreateOptionsType_Invoke_mE222D7D5FD8FFA2A79B17FB03D8260D6673B29AF (void);
// 0x0000010B System.IAsyncResult ROS2.NativeRclInterface/ServiceCreateOptionsType::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void ServiceCreateOptionsType_BeginInvoke_mB5792A8432DF2348797F8F3ACC4B238A1FED839E (void);
// 0x0000010C System.IntPtr ROS2.NativeRclInterface/ServiceCreateOptionsType::EndInvoke(System.IAsyncResult)
extern void ServiceCreateOptionsType_EndInvoke_m0E0142FE4B368B71E416742F7805A1EF93FB64B3 (void);
// 0x0000010D System.Void ROS2.NativeRclInterface/ServiceDisposeOptionsType::.ctor(System.Object,System.IntPtr)
extern void ServiceDisposeOptionsType__ctor_m7901E90CDE0FF0EF5559495D0B21573D2A0965C8 (void);
// 0x0000010E System.Void ROS2.NativeRclInterface/ServiceDisposeOptionsType::Invoke(System.IntPtr)
extern void ServiceDisposeOptionsType_Invoke_m937242BE18B3C30F62B706B6F50002CB9FDA43B0 (void);
// 0x0000010F System.IAsyncResult ROS2.NativeRclInterface/ServiceDisposeOptionsType::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void ServiceDisposeOptionsType_BeginInvoke_m04761A5ECA5E7453FC19B2515CD9B4B78FE7F94E (void);
// 0x00000110 System.Void ROS2.NativeRclInterface/ServiceDisposeOptionsType::EndInvoke(System.IAsyncResult)
extern void ServiceDisposeOptionsType_EndInvoke_m0FC3241037CC17C1371DFCC9100670B6510CDAA5 (void);
// 0x00000111 System.Void ROS2.NativeRclInterface/RclcsClockCreate::.ctor(System.Object,System.IntPtr)
extern void RclcsClockCreate__ctor_mE9DE7A6A4B3B916793004CC818C35748AEC6FF8B (void);
// 0x00000112 System.IntPtr ROS2.NativeRclInterface/RclcsClockCreate::Invoke(ROS2.rcl_allocator_t&)
extern void RclcsClockCreate_Invoke_mFD077B5620145E54382E184E765F442842D53B28 (void);
// 0x00000113 System.IAsyncResult ROS2.NativeRclInterface/RclcsClockCreate::BeginInvoke(ROS2.rcl_allocator_t&,System.AsyncCallback,System.Object)
extern void RclcsClockCreate_BeginInvoke_m7B6452DC8EEE9DCD0D24C7EDF2DB12D06C9B3D47 (void);
// 0x00000114 System.IntPtr ROS2.NativeRclInterface/RclcsClockCreate::EndInvoke(ROS2.rcl_allocator_t&,System.IAsyncResult)
extern void RclcsClockCreate_EndInvoke_mB53809C6625DF2882A2613CA9B3F388386CDFD7B (void);
// 0x00000115 System.Void ROS2.NativeRclInterface/RclcsClockDispose::.ctor(System.Object,System.IntPtr)
extern void RclcsClockDispose__ctor_m81E7A022B781030F537F78B22AB80EE856F53238 (void);
// 0x00000116 System.Void ROS2.NativeRclInterface/RclcsClockDispose::Invoke(System.IntPtr)
extern void RclcsClockDispose_Invoke_mB31FF352E25F02041B8C12B480B4AEA88827F56F (void);
// 0x00000117 System.IAsyncResult ROS2.NativeRclInterface/RclcsClockDispose::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void RclcsClockDispose_BeginInvoke_mE640BCF73D4BCE72CD1826D6294E2E1D4A2F08C5 (void);
// 0x00000118 System.Void ROS2.NativeRclInterface/RclcsClockDispose::EndInvoke(System.IAsyncResult)
extern void RclcsClockDispose_EndInvoke_mAF2B027308B8DCFB3152ECF455DF7CE3D2B88401 (void);
// 0x00000119 System.Void ROS2.NativeRmwInterface::.cctor()
extern void NativeRmwInterface__cctor_m3FCA9B660C7CD327972A06E1B35C624005A1DE00 (void);
// 0x0000011A System.Void ROS2.NativeRmwInterface/RMWImplementationIdentifier::.ctor(System.Object,System.IntPtr)
extern void RMWImplementationIdentifier__ctor_mF3472CF6AB2B38C5C1DE9808A4F0EFDEDE5015AC (void);
// 0x0000011B System.IntPtr ROS2.NativeRmwInterface/RMWImplementationIdentifier::Invoke()
extern void RMWImplementationIdentifier_Invoke_m2798432969B3FDB239028F2CCE63EA679D73EBD7 (void);
// 0x0000011C System.IAsyncResult ROS2.NativeRmwInterface/RMWImplementationIdentifier::BeginInvoke(System.AsyncCallback,System.Object)
extern void RMWImplementationIdentifier_BeginInvoke_m4E0CB2EF2C8B7613642F35BFE412CDC554E57D04 (void);
// 0x0000011D System.IntPtr ROS2.NativeRmwInterface/RMWImplementationIdentifier::EndInvoke(System.IAsyncResult)
extern void RMWImplementationIdentifier_EndInvoke_mF9FDEB47F51C93AF89F3FF730E434787FC9DFDAB (void);
// 0x0000011E System.Void ROS2.NativeRmwInterface/RMWNativeCreateQoSProfileIdentifierType::.ctor(System.Object,System.IntPtr)
extern void RMWNativeCreateQoSProfileIdentifierType__ctor_m6331BAF37623A2ADC84019AE90580B9883EAF0EA (void);
// 0x0000011F System.IntPtr ROS2.NativeRmwInterface/RMWNativeCreateQoSProfileIdentifierType::Invoke(System.Int32)
extern void RMWNativeCreateQoSProfileIdentifierType_Invoke_m719A1FA4411233308FBD0A52DD44DF51ADB12FA0 (void);
// 0x00000120 System.IAsyncResult ROS2.NativeRmwInterface/RMWNativeCreateQoSProfileIdentifierType::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern void RMWNativeCreateQoSProfileIdentifierType_BeginInvoke_mF7547D55E93BAF90DE4CE9C6A72378CC8F876252 (void);
// 0x00000121 System.IntPtr ROS2.NativeRmwInterface/RMWNativeCreateQoSProfileIdentifierType::EndInvoke(System.IAsyncResult)
extern void RMWNativeCreateQoSProfileIdentifierType_EndInvoke_mDE0AB4C1895C79550383A0B7F452C8875083157F (void);
// 0x00000122 System.Void ROS2.NativeRmwInterface/RMWNativeDeleteQoSProfileIdentifierType::.ctor(System.Object,System.IntPtr)
extern void RMWNativeDeleteQoSProfileIdentifierType__ctor_m0216F9B3F0D5418C5EA1ED37525AF9F9745A4E4E (void);
// 0x00000123 System.Void ROS2.NativeRmwInterface/RMWNativeDeleteQoSProfileIdentifierType::Invoke(System.IntPtr)
extern void RMWNativeDeleteQoSProfileIdentifierType_Invoke_mC0AD7D87AB168717B18ED02122FC64BA5E5519BE (void);
// 0x00000124 System.IAsyncResult ROS2.NativeRmwInterface/RMWNativeDeleteQoSProfileIdentifierType::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void RMWNativeDeleteQoSProfileIdentifierType_BeginInvoke_m378AD5CCDEA11A32092460342CE61F0A9EC7FD63 (void);
// 0x00000125 System.Void ROS2.NativeRmwInterface/RMWNativeDeleteQoSProfileIdentifierType::EndInvoke(System.IAsyncResult)
extern void RMWNativeDeleteQoSProfileIdentifierType_EndInvoke_m2224004BA91F048199EEBD71FC0912E9C4A73309 (void);
// 0x00000126 System.Void ROS2.NativeRmwInterface/RMWNativeSetHistoryIdentifierType::.ctor(System.Object,System.IntPtr)
extern void RMWNativeSetHistoryIdentifierType__ctor_m6700FEA80E80BA1EBC7F482F7B302AEF70293613 (void);
// 0x00000127 System.Void ROS2.NativeRmwInterface/RMWNativeSetHistoryIdentifierType::Invoke(System.IntPtr,System.Int32,System.Int32)
extern void RMWNativeSetHistoryIdentifierType_Invoke_mD19165DA0A5836757CDE8E627683D5431B79D486 (void);
// 0x00000128 System.IAsyncResult ROS2.NativeRmwInterface/RMWNativeSetHistoryIdentifierType::BeginInvoke(System.IntPtr,System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void RMWNativeSetHistoryIdentifierType_BeginInvoke_mB08974C94B92DAFBFBC73A95F39CB2E596A21E57 (void);
// 0x00000129 System.Void ROS2.NativeRmwInterface/RMWNativeSetHistoryIdentifierType::EndInvoke(System.IAsyncResult)
extern void RMWNativeSetHistoryIdentifierType_EndInvoke_m08B647D82C8619F1481E704481F4146D1D853E36 (void);
// 0x0000012A System.Void ROS2.NativeRmwInterface/RMWNativeSetReliabilityIdentifierType::.ctor(System.Object,System.IntPtr)
extern void RMWNativeSetReliabilityIdentifierType__ctor_mC6284964D5DC119EEB16776B85DE4EB0669DCAF6 (void);
// 0x0000012B System.Void ROS2.NativeRmwInterface/RMWNativeSetReliabilityIdentifierType::Invoke(System.IntPtr,System.Int32)
extern void RMWNativeSetReliabilityIdentifierType_Invoke_m0C867D84FBB2311D293FF704AE4E69BA487329FF (void);
// 0x0000012C System.IAsyncResult ROS2.NativeRmwInterface/RMWNativeSetReliabilityIdentifierType::BeginInvoke(System.IntPtr,System.Int32,System.AsyncCallback,System.Object)
extern void RMWNativeSetReliabilityIdentifierType_BeginInvoke_m87DCE8C2BB4F731034A6E14DAC78844E1833F7E3 (void);
// 0x0000012D System.Void ROS2.NativeRmwInterface/RMWNativeSetReliabilityIdentifierType::EndInvoke(System.IAsyncResult)
extern void RMWNativeSetReliabilityIdentifierType_EndInvoke_m1B2B5EF5E7C1281467A87BAE910CBAD215614A49 (void);
// 0x0000012E System.Void ROS2.NativeRmwInterface/RMWNativeSetDurabilityIdentifierType::.ctor(System.Object,System.IntPtr)
extern void RMWNativeSetDurabilityIdentifierType__ctor_mA10B1A1248CE6BDAE5DE5C09F97EE3945095FD8F (void);
// 0x0000012F System.Void ROS2.NativeRmwInterface/RMWNativeSetDurabilityIdentifierType::Invoke(System.IntPtr,System.Int32)
extern void RMWNativeSetDurabilityIdentifierType_Invoke_m37BD9B13755DD7B4C13114176D323EAD0AE802E3 (void);
// 0x00000130 System.IAsyncResult ROS2.NativeRmwInterface/RMWNativeSetDurabilityIdentifierType::BeginInvoke(System.IntPtr,System.Int32,System.AsyncCallback,System.Object)
extern void RMWNativeSetDurabilityIdentifierType_BeginInvoke_m4D25A2F69A83F70550100A7A28226D45025D210E (void);
// 0x00000131 System.Void ROS2.NativeRmwInterface/RMWNativeSetDurabilityIdentifierType::EndInvoke(System.IAsyncResult)
extern void RMWNativeSetDurabilityIdentifierType_EndInvoke_mA810891197729ED436F2F43EFC4669D487904ACF (void);
// 0x00000132 System.Void ROS2.Utils::CheckReturnEnum(System.Int32)
extern void Utils_CheckReturnEnum_m4F3CDB4D1DD633F528BFD99D5A245210AD36EF5E (void);
// 0x00000133 System.String ROS2.Utils::GetRclErrorString()
extern void Utils_GetRclErrorString_m6F27FEC35A46ADED61644CB41327F1C5847CCF79 (void);
// 0x00000134 System.String ROS2.Utils::PopRclErrorString()
extern void Utils_PopRclErrorString_mAE90DE98A76531C78A9110AA2FEB593853C09289 (void);
// 0x00000135 System.String ROS2.Utils::PtrToString(System.IntPtr)
extern void Utils_PtrToString_mCE2B96B740F655D1F150EED68843FAE759B87106 (void);
// 0x00000136 System.Double ROS2.RosTime::get_Seconds()
extern void RosTime_get_Seconds_mFB337E8C3F2FA0FDA6D6E15C2C4E2525AD27EE98 (void);
// 0x00000137 System.Boolean ROS2.Clock::get_IsDisposed()
extern void Clock_get_IsDisposed_mB8D14918EA0D0571FFFD5F941D6FD9B1632A9636 (void);
// 0x00000138 ROS2.RosTime ROS2.Clock::get_Now()
extern void Clock_get_Now_mEFBCCFAB1D677F1B33E0BC20CE72B57492D15F71 (void);
// 0x00000139 System.Void ROS2.Clock::.ctor()
extern void Clock__ctor_mB572733F38E7F7322089A9EC629E29C32CDB22A5 (void);
// 0x0000013A System.Void ROS2.Clock::Finalize()
extern void Clock_Finalize_mAF5FE3C86A69FC54847FCC145ECFE54232CE2497 (void);
// 0x0000013B System.Void ROS2.Clock::Dispose()
extern void Clock_Dispose_m152EDA0A3D3520DE913EDCF77394AF64CA0CE608 (void);
// 0x0000013C System.String ROS2.Client`2::get_Topic()
// 0x0000013D ROS2.rcl_client_t ROS2.Client`2::get_Handle()
// 0x0000013E System.Collections.Generic.IReadOnlyDictionary`2<System.Int64,System.Threading.Tasks.Task`1<O>> ROS2.Client`2::get_PendingRequests()
// 0x0000013F System.Void ROS2.Client`2::set_PendingRequests(System.Collections.Generic.IReadOnlyDictionary`2<System.Int64,System.Threading.Tasks.Task`1<O>>)
// 0x00000140 System.Collections.Generic.IReadOnlyDictionary`2<System.Int64,System.Threading.Tasks.Task> ROS2.Client`2::ROS2.IClientBase.get_PendingRequests()
// 0x00000141 System.Object ROS2.Client`2::get_Mutex()
// 0x00000142 System.Boolean ROS2.Client`2::get_IsDisposed()
// 0x00000143 System.Void ROS2.Client`2::.ctor(System.String,ROS2.Node,ROS2.QualityOfServiceProfile)
// 0x00000144 System.Void ROS2.Client`2::Finalize()
// 0x00000145 System.Void ROS2.Client`2::Dispose()
// 0x00000146 System.Void ROS2.Client`2::DestroyClient()
// 0x00000147 System.Boolean ROS2.Client`2::IsServiceAvailable()
// 0x00000148 System.Void ROS2.Client`2::TakeMessage()
// 0x00000149 System.Void ROS2.Client`2::ProcessResponse(System.Int64,ROS2.Internal.MessageInternals)
// 0x0000014A System.Int64 ROS2.Client`2::SendRequest(I)
// 0x0000014B System.Threading.Tasks.Task`1<O> ROS2.Client`2::RegisterSource(System.Threading.Tasks.TaskCompletionSource`1<O>,System.Int64)
// 0x0000014C O ROS2.Client`2::Call(I)
// 0x0000014D System.Threading.Tasks.Task`1<O> ROS2.Client`2::CallAsync(I)
// 0x0000014E System.Threading.Tasks.Task`1<O> ROS2.Client`2::CallAsync(I,System.Threading.Tasks.TaskCreationOptions)
// 0x0000014F System.Boolean ROS2.Client`2::Cancel(System.Threading.Tasks.Task)
// 0x00000150 System.Threading.Tasks.Task`1<O> ROS2.Client`2/PendingTasksView::get_Item(System.Int64)
// 0x00000151 System.Threading.Tasks.Task ROS2.Client`2/PendingTasksView::System.Collections.Generic.IReadOnlyDictionary<System.Int64,System.Threading.Tasks.Task>.get_Item(System.Int64)
// 0x00000152 System.Collections.Generic.IEnumerable`1<System.Int64> ROS2.Client`2/PendingTasksView::get_Keys()
// 0x00000153 System.Collections.Generic.IEnumerable`1<System.Threading.Tasks.Task`1<O>> ROS2.Client`2/PendingTasksView::get_Values()
// 0x00000154 System.Collections.Generic.IEnumerable`1<System.Threading.Tasks.Task> ROS2.Client`2/PendingTasksView::System.Collections.Generic.IReadOnlyDictionary<System.Int64,System.Threading.Tasks.Task>.get_Values()
// 0x00000155 System.Int32 ROS2.Client`2/PendingTasksView::get_Count()
// 0x00000156 System.Void ROS2.Client`2/PendingTasksView::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<System.Int64,System.ValueTuple`2<System.Threading.Tasks.TaskCompletionSource`1<O>,System.Threading.Tasks.Task`1<O>>>)
// 0x00000157 System.Boolean ROS2.Client`2/PendingTasksView::ContainsKey(System.Int64)
// 0x00000158 System.Boolean ROS2.Client`2/PendingTasksView::TryGetValue(System.Int64,System.Threading.Tasks.Task`1<O>&)
// 0x00000159 System.Boolean ROS2.Client`2/PendingTasksView::System.Collections.Generic.IReadOnlyDictionary<System.Int64,System.Threading.Tasks.Task>.TryGetValue(System.Int64,System.Threading.Tasks.Task&)
// 0x0000015A System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Threading.Tasks.Task`1<O>>> ROS2.Client`2/PendingTasksView::GetEnumerator()
// 0x0000015B System.Collections.IEnumerator ROS2.Client`2/PendingTasksView::System.Collections.IEnumerable.GetEnumerator()
// 0x0000015C System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Threading.Tasks.Task>> ROS2.Client`2/PendingTasksView::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<System.Int64,System.Threading.Tasks.Task>>.GetEnumerator()
// 0x0000015D System.Void ROS2.Client`2/PendingTasksView/<>c::.cctor()
// 0x0000015E System.Void ROS2.Client`2/PendingTasksView/<>c::.ctor()
// 0x0000015F System.Threading.Tasks.Task`1<O> ROS2.Client`2/PendingTasksView/<>c::<get_Values>b__7_0(System.ValueTuple`2<System.Threading.Tasks.TaskCompletionSource`1<O>,System.Threading.Tasks.Task`1<O>>)
// 0x00000160 System.Collections.Generic.KeyValuePair`2<System.Int64,System.Threading.Tasks.Task`1<O>> ROS2.Client`2/PendingTasksView/<>c::<GetEnumerator>b__17_0(System.Collections.Generic.KeyValuePair`2<System.Int64,System.ValueTuple`2<System.Threading.Tasks.TaskCompletionSource`1<O>,System.Threading.Tasks.Task`1<O>>>)
// 0x00000161 System.Collections.Generic.KeyValuePair`2<System.Int64,System.Threading.Tasks.Task> ROS2.Client`2/PendingTasksView/<>c::<System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<System.Int64,System.Threading.Tasks.Task>>.GetEnumerator>b__19_0(System.Collections.Generic.KeyValuePair`2<System.Int64,System.ValueTuple`2<System.Threading.Tasks.TaskCompletionSource`1<O>,System.Threading.Tasks.Task`1<O>>>)
// 0x00000162 System.Void ROS2.Client`2/<>c__DisplayClass34_0::.ctor()
// 0x00000163 System.Boolean ROS2.Client`2/<>c__DisplayClass34_0::<Cancel>b__0(System.Collections.Generic.KeyValuePair`2<System.Int64,System.ValueTuple`2<System.Threading.Tasks.TaskCompletionSource`1<O>,System.Threading.Tasks.Task`1<O>>>)
// 0x00000164 ROS2.rcl_service_t ROS2.Service`2::get_Handle()
// 0x00000165 System.String ROS2.Service`2::get_Topic()
// 0x00000166 System.Boolean ROS2.Service`2::get_IsDisposed()
// 0x00000167 System.Object ROS2.Service`2::get_Mutex()
// 0x00000168 System.Void ROS2.Service`2::.ctor(System.String,ROS2.Node,System.Func`2<I,O>,ROS2.QualityOfServiceProfile)
// 0x00000169 System.Void ROS2.Service`2::SendResp(ROS2.rcl_rmw_request_id_t,O)
// 0x0000016A System.Void ROS2.Service`2::TakeMessage()
// 0x0000016B System.Void ROS2.Service`2::ProcessRequest(ROS2.rcl_rmw_request_id_t,ROS2.Internal.MessageInternals)
// 0x0000016C System.Void ROS2.Service`2::Finalize()
// 0x0000016D System.Void ROS2.Service`2::Dispose()
// 0x0000016E System.Void ROS2.Service`2::DestroyService()
// 0x0000016F System.String ROS2.Node::get_Name()
extern void Node_get_Name_mE229862361FDE8FD5363AECA92F558B87F79A6EF (void);
// 0x00000170 System.Collections.Generic.List`1<ROS2.ISubscriptionBase> ROS2.Node::get_Subscriptions()
extern void Node_get_Subscriptions_mE8CB73008BF0BE009E3FF5912C54837F2E079492 (void);
// 0x00000171 System.Collections.Generic.List`1<ROS2.IClientBase> ROS2.Node::get_Clients()
extern void Node_get_Clients_mDF68BC88521E8D514B324E853F572258A278623B (void);
// 0x00000172 System.Collections.Generic.List`1<ROS2.IServiceBase> ROS2.Node::get_Services()
extern void Node_get_Services_m21D8E5DC5095719C2142C665CAB884C553D16CD5 (void);
// 0x00000173 System.Boolean ROS2.Node::get_IsDisposed()
extern void Node_get_IsDisposed_mF1271C534EE9D9F6E5ADE31260B40B311CDDFCBD (void);
// 0x00000174 System.Void ROS2.Node::.ctor(System.String,ROS2.rcl_context_t&)
extern void Node__ctor_mF9C64070A243DB4627A01DDE8964A4149380293B (void);
// 0x00000175 System.Void ROS2.Node::Finalize()
extern void Node_Finalize_m57FBEEC0B4294F2AD10BE8B4EF433E7D71CE9313 (void);
// 0x00000176 System.Void ROS2.Node::Dispose()
extern void Node_Dispose_m14617AAFCCEC9DE725CFC4318DA6301D0278E375 (void);
// 0x00000177 System.Void ROS2.Node::DestroyNode()
extern void Node_DestroyNode_mA12E1D4909A7D71CE3444DC22771F14EA6509290 (void);
// 0x00000178 ROS2.Client`2<I,O> ROS2.Node::CreateClient(System.String,ROS2.QualityOfServiceProfile)
// 0x00000179 System.Boolean ROS2.Node::RemoveClient(ROS2.IClientBase)
extern void Node_RemoveClient_m926C47B3852D0D5FF2AE437E1BDFF1149B830522 (void);
// 0x0000017A ROS2.Service`2<I,O> ROS2.Node::CreateService(System.String,System.Func`2<I,O>,ROS2.QualityOfServiceProfile)
// 0x0000017B System.Boolean ROS2.Node::RemoveService(ROS2.IServiceBase)
extern void Node_RemoveService_m2C5A7B9486E2E883855370204A0379E0A35DF16F (void);
// 0x0000017C ROS2.Publisher`1<T> ROS2.Node::CreatePublisher(System.String,ROS2.QualityOfServiceProfile)
// 0x0000017D ROS2.Subscription`1<T> ROS2.Node::CreateSubscription(System.String,System.Action`1<T>,ROS2.QualityOfServiceProfile)
// 0x0000017E System.Boolean ROS2.Node::RemovePublisher(ROS2.IPublisherBase)
extern void Node_RemovePublisher_m3EEEC664955F11EF9583EF00DF7C7652B4136FE6 (void);
// 0x0000017F System.Boolean ROS2.Node::RemoveSubscription(ROS2.ISubscriptionBase)
extern void Node_RemoveSubscription_m67C5DD8D30DD66D26C4CD00D34B175291AFFAC08 (void);
// 0x00000180 System.String ROS2.Publisher`1::get_Topic()
// 0x00000181 System.Boolean ROS2.Publisher`1::get_IsDisposed()
// 0x00000182 System.Void ROS2.Publisher`1::.ctor(System.String,ROS2.Node,ROS2.QualityOfServiceProfile)
// 0x00000183 System.Void ROS2.Publisher`1::Finalize()
// 0x00000184 System.Void ROS2.Publisher`1::Dispose()
// 0x00000185 System.Void ROS2.Publisher`1::DestroyPublisher()
// 0x00000186 System.Void ROS2.Publisher`1::Publish(T)
// 0x00000187 System.Void ROS2.QualityOfServiceProfile::.ctor(ROS2.QosPresetProfile)
extern void QualityOfServiceProfile__ctor_m07DC019B6D110CF8BE8CEDBB4472BF704A9D7AB0 (void);
// 0x00000188 System.Void ROS2.QualityOfServiceProfile::SetHistory(ROS2.HistoryPolicy,System.Int32)
extern void QualityOfServiceProfile_SetHistory_mA6DAAEB82E9797D3020A2A0C1FCF4218D3EF64C7 (void);
// 0x00000189 System.Void ROS2.QualityOfServiceProfile::SetReliability(ROS2.ReliabilityPolicy)
extern void QualityOfServiceProfile_SetReliability_mC616FDDA461B61574D5E808CF18073B45F6D20E0 (void);
// 0x0000018A System.Void ROS2.QualityOfServiceProfile::SetDurability(ROS2.DurabilityPolicy)
extern void QualityOfServiceProfile_SetDurability_m367BF4FD46D61FDD58EBF50E88824FB9F715BFCF (void);
// 0x0000018B System.Void ROS2.Ros2cs::Init()
extern void Ros2cs_Init_m0DD18818F4CB0ABB9E8745BB1FB6BC48CBEA6D54 (void);
// 0x0000018C System.String ROS2.Ros2cs::GetRMWImplementation()
extern void Ros2cs_GetRMWImplementation_mD7EF0B8E9E670E644BD29F9302BBFF61D615D352 (void);
// 0x0000018D System.Void ROS2.Ros2cs::Shutdown()
extern void Ros2cs_Shutdown_mC6D21423F0C5ABF86E21EFFD2F858B35DCF429AA (void);
// 0x0000018E System.Boolean ROS2.Ros2cs::Ok()
extern void Ros2cs_Ok_mCBF1F5567BD5AC76648366C7BCE560310CA9B2D4 (void);
// 0x0000018F ROS2.INode ROS2.Ros2cs::CreateNode(System.String)
extern void Ros2cs_CreateNode_m106B7064A86E1CC2A7D9E9784B0E293E1E182863 (void);
// 0x00000190 System.Boolean ROS2.Ros2cs::RemoveNode(ROS2.INode)
extern void Ros2cs_RemoveNode_m366576274210344333586F6DC07C5C163CFDB15F (void);
// 0x00000191 System.Void ROS2.Ros2cs::Spin(ROS2.INode,System.Double)
extern void Ros2cs_Spin_mCA20FECE067A33965FA0AAF4BCED065167B7CCC1 (void);
// 0x00000192 System.Void ROS2.Ros2cs::Spin(System.Collections.Generic.List`1<ROS2.INode>,System.Double)
extern void Ros2cs_Spin_m9FFBBF14D708D41FB3C8672E92D16CBA2EF2289B (void);
// 0x00000193 System.Boolean ROS2.Ros2cs::SpinOnce(ROS2.INode,System.Double)
extern void Ros2cs_SpinOnce_mB3D242DB486CA022D7967AE5BC1CA86B5D49C8D7 (void);
// 0x00000194 System.Boolean ROS2.Ros2cs::SpinOnce(System.Collections.Generic.List`1<ROS2.INode>,System.Double)
extern void Ros2cs_SpinOnce_mD28E68F09C97A9A71F1B21DA3FF52F362C69929E (void);
// 0x00000195 System.Void ROS2.Ros2cs::.cctor()
extern void Ros2cs__cctor_m1A864E175616216B5017FA616C15C62D85EE38F5 (void);
// 0x00000196 System.Void ROS2.Ros2cs/Destructor::Finalize()
extern void Destructor_Finalize_m903FB37D8E6B85F5D1695DE3E38F10C34F4A597F (void);
// 0x00000197 System.Void ROS2.Ros2cs/Destructor::.ctor()
extern void Destructor__ctor_mD243064E083C8E8D3CF643EFB77CD9B875DCDB73 (void);
// 0x00000198 System.Void ROS2.Ros2cs/<>c::.cctor()
extern void U3CU3Ec__cctor_m09694B5F1768A22D57498C283D750099D6AE0FB4 (void);
// 0x00000199 System.Void ROS2.Ros2cs/<>c::.ctor()
extern void U3CU3Ec__ctor_mA55B8DA6C9918646B8B269DD9DD2738ECE1252E9 (void);
// 0x0000019A System.Boolean ROS2.Ros2cs/<>c::<SpinOnce>b__18_3(ROS2.ISubscriptionBase)
extern void U3CU3Ec_U3CSpinOnceU3Eb__18_3_m31F64A88492947438FE574F0CAB6740E348BC2D1 (void);
// 0x0000019B System.Boolean ROS2.Ros2cs/<>c::<SpinOnce>b__18_4(ROS2.IClientBase)
extern void U3CU3Ec_U3CSpinOnceU3Eb__18_4_mAA6E17E7132CC4DB2940E4E64AC0EC75F3745B1C (void);
// 0x0000019C System.Boolean ROS2.Ros2cs/<>c::<SpinOnce>b__18_5(ROS2.IServiceBase)
extern void U3CU3Ec_U3CSpinOnceU3Eb__18_5_m7E6150B676C4CCB992865DDAE4193FD0FD5B291D (void);
// 0x0000019D System.Void ROS2.Ros2cs/<>c::<SpinOnce>b__18_0(ROS2.ISubscriptionBase)
extern void U3CU3Ec_U3CSpinOnceU3Eb__18_0_mADADEAFA800B6CA0690FC3B8F75B2F8CC7CE4025 (void);
// 0x0000019E System.Void ROS2.Ros2cs/<>c::<SpinOnce>b__18_1(ROS2.IClientBase)
extern void U3CU3Ec_U3CSpinOnceU3Eb__18_1_m4961852F0F03C268E282F5D44C6DD1424B09437E (void);
// 0x0000019F System.Void ROS2.Ros2cs/<>c::<SpinOnce>b__18_2(ROS2.IServiceBase)
extern void U3CU3Ec_U3CSpinOnceU3Eb__18_2_m7CC24ABEF5BEA2B6C2EA9D6F200D5C41BC919CB8 (void);
// 0x000001A0 ROS2.rcl_subscription_t ROS2.Subscription`1::get_Handle()
// 0x000001A1 System.String ROS2.Subscription`1::get_Topic()
// 0x000001A2 System.Boolean ROS2.Subscription`1::get_IsDisposed()
// 0x000001A3 System.Object ROS2.Subscription`1::get_Mutex()
// 0x000001A4 System.Void ROS2.Subscription`1::TakeMessage()
// 0x000001A5 ROS2.Internal.MessageInternals ROS2.Subscription`1::CreateMessage()
// 0x000001A6 System.Void ROS2.Subscription`1::TriggerCallback(ROS2.Internal.MessageInternals)
// 0x000001A7 System.Void ROS2.Subscription`1::.ctor(System.String,ROS2.Node,System.Action`1<T>,ROS2.QualityOfServiceProfile)
// 0x000001A8 System.Void ROS2.Subscription`1::Finalize()
// 0x000001A9 System.Void ROS2.Subscription`1::Dispose()
// 0x000001AA System.Void ROS2.Subscription`1::DestroySubscription()
// 0x000001AB System.UInt64 ROS2.WaitSet::get_SubscriptionCount()
extern void WaitSet_get_SubscriptionCount_mC9EB54530BA64F83DE8FC4D56D7A28547006A8EE (void);
// 0x000001AC System.UInt64 ROS2.WaitSet::get_ClientCount()
extern void WaitSet_get_ClientCount_m79058F880AB932A9B318C2ECDAAAB5E1129C8423 (void);
// 0x000001AD System.UInt64 ROS2.WaitSet::get_ServiceCount()
extern void WaitSet_get_ServiceCount_mD4F353D6562BD6BF4F52CBB9CCDB5EA7E2DBFF9B (void);
// 0x000001AE System.Void ROS2.WaitSet::.ctor(ROS2.rcl_context_t&)
extern void WaitSet__ctor_mA46DC9CD59BE3942840ECA84674F79B3557741AB (void);
// 0x000001AF System.Void ROS2.WaitSet::Finalize()
extern void WaitSet_Finalize_m16ED291D08BA82140D8684D49E6BD64B48159CD1 (void);
// 0x000001B0 System.Void ROS2.WaitSet::Clear()
extern void WaitSet_Clear_mBEA5E7F51D749C6A2A341B8E705959EB3C11D93C (void);
// 0x000001B1 System.Void ROS2.WaitSet::Resize(System.UInt64,System.UInt64,System.UInt64)
extern void WaitSet_Resize_m92C32888FEAE2FEEF7A5C10C44B23DCC2B0210E6 (void);
// 0x000001B2 ROS2.AddResult ROS2.WaitSet::TryAddSubscription(ROS2.ISubscriptionBase,System.UInt64&)
extern void WaitSet_TryAddSubscription_m6C97341D381ECF709DB8ADED4D73B0B59AA1C737 (void);
// 0x000001B3 ROS2.AddResult ROS2.WaitSet::TryAddClient(ROS2.IClientBase,System.UInt64&)
extern void WaitSet_TryAddClient_mC8C4AD06C66C4CD9FB4B31590BCCC6664371E9E2 (void);
// 0x000001B4 ROS2.AddResult ROS2.WaitSet::TryAddService(ROS2.IServiceBase,System.UInt64&)
extern void WaitSet_TryAddService_m5C27E93613BD360563A9AA96ABBBF5D57C03C7CA (void);
// 0x000001B5 System.Boolean ROS2.WaitSet::Wait()
extern void WaitSet_Wait_mFD830298FA63BEB78BA24CFC14114261BAFE857B (void);
// 0x000001B6 System.Boolean ROS2.WaitSet::Wait(System.TimeSpan)
extern void WaitSet_Wait_m9D17E419FB8A2C7D60878D791B92926E9B07F4A7 (void);
static Il2CppMethodPointer s_methodPointers[438] = 
{
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NativeRcl__cctor_mA9EA811B221868979E62F35487DD8AEA85CA9F97,
	GetZeroInitializedContextType__ctor_m93397F5891CE0071E9F570FB5AE02FA62741C4EB,
	GetZeroInitializedContextType_Invoke_m7072D60BE53253063BD08973B4317F9C57538D39,
	GetZeroInitializedContextType_BeginInvoke_mC3458EC08467DB6B7A26C697CD7D5B1486E63DDA,
	GetZeroInitializedContextType_EndInvoke_m9E1045046752AC1C711793DC0AFAD2E77E84A1CC,
	GetZeroInitializedInitOptionsType__ctor_m8E805F1B6CF0F0E60A332DF93F9CE801C5FF7C8F,
	GetZeroInitializedInitOptionsType_Invoke_m803F50B852A3CB597130ACCCBC620C83EC2B4893,
	GetZeroInitializedInitOptionsType_BeginInvoke_m2C70582CEE7FCB103F2250EE58D4642548DD502B,
	GetZeroInitializedInitOptionsType_EndInvoke_mEEF247E4793A4093C32A27A47A02823B1B274DD8,
	InitOptionsInitType__ctor_m855F2A9B95FA734B54B913D3BC5E291AD1A74A38,
	InitOptionsInitType_Invoke_m2C5736680F5DD498751DBF840837A366129379AA,
	InitOptionsInitType_BeginInvoke_m612A4F94B0674E5E803099116F97DD6ED505329C,
	InitOptionsInitType_EndInvoke_mE839A36BE03A9697F2287EA4EDB4E2403F5BB04F,
	ShutdownType__ctor_m0DEA3C2E8BBC090516A6ED8AC68C5D20C45A9957,
	ShutdownType_Invoke_mA18C5013CED464580638857F255A520DEDD59EFC,
	ShutdownType_BeginInvoke_m9AD7DF8BE444B2929E42B09EE7409C28694B3456,
	ShutdownType_EndInvoke_m13F3E7885082FF11249B680420D96A72D2DB546A,
	ContextIsValidType__ctor_mDE1AD482849061204241A8736B4F9FF43C7CBFC3,
	ContextIsValidType_Invoke_m27DC66426F72978C16FCB3F2281290538D1E02B8,
	ContextIsValidType_BeginInvoke_mB5C503E743023775FB9F38603B21A8CF4DBA732B,
	ContextIsValidType_EndInvoke_m2BCBF666F3F55CCFDD14CD729EBBD040D60A6842,
	InitType__ctor_m42E07CA2828FAA9BAD2B5D107E1D8839AD804126,
	InitType_Invoke_m3354874F784804204C9C98B653576DBEF55B152B,
	InitType_BeginInvoke_m87A9E079D970E94A677B779BD7D2629A220E15A6,
	InitType_EndInvoke_m64641D91F0CC64E1ED27E0B7A674BF2842AE696C,
	ContextFiniType__ctor_m64AC1E2EA51B1845A5972D34D600E1AD60FD24A2,
	ContextFiniType_Invoke_mF3D3B7CDAAC699F416FFECA74785DDF3D27ED525,
	ContextFiniType_BeginInvoke_mE9D75B924477653A765C02C3E2D1C6FE57E434F4,
	ContextFiniType_EndInvoke_mA13870E309A91670F8F62F56522666D8A66CE4E2,
	GetZeroInitializedNodeType__ctor_m5B443C2526A40C717757DA3BEDD91EC283D17887,
	GetZeroInitializedNodeType_Invoke_m4971529E411B1A334F39F9BA27EBCC9EEEC44349,
	GetZeroInitializedNodeType_BeginInvoke_mC6B9B367FDF4EC79B4F87E6048877FF5A9428FB9,
	GetZeroInitializedNodeType_EndInvoke_m6671624C3F8100421F5E633D404A5283D63876C2,
	NodeInitType__ctor_mD4B6F04C12A76B23F9ECBAD6B9C1D65FF54D5291,
	NodeInitType_Invoke_mCD6B59F3B3FE2FB1353B8EA4DFA95066BBD629BD,
	NodeInitType_BeginInvoke_m704C724F7DDBB505E488042B1085735CA9C8DF52,
	NodeInitType_EndInvoke_mCFAB52EBEBB43F478504F05F5FC94A98D1F80C49,
	NodeFiniType__ctor_mFBA761825D56347B4803F59FB4D51D7373FE5B63,
	NodeFiniType_Invoke_mA4955F10BF547445FEEF088F34F2B874823921E6,
	NodeFiniType_BeginInvoke_mE3D272E9CEA487DB49BD34F95C166FF2462D2730,
	NodeFiniType_EndInvoke_mC23BE57B659FD5BB5A9AD1AC8DB58989AC87A5AF,
	NodeGetNameType__ctor_m696C728A8E7C73F7FDDA5C9C4AF03C481CADBFB3,
	NodeGetNameType_Invoke_mBDA02B2AE615D3AF49925A19A04A3390374C674C,
	NodeGetNameType_BeginInvoke_m836FEAB78B5AE0D6951F12706D11F942EEE2D1D1,
	NodeGetNameType_EndInvoke_mB3C2D6F3E84725FCBC294E9ED5F2B9FCD38155D5,
	NodeGetNamespaceType__ctor_mCF49A87E08C0985939E6517F769CDF1A00821EFF,
	NodeGetNamespaceType_Invoke_m738E141A5C5C150936E6A7497262170CCF29F786,
	NodeGetNamespaceType_BeginInvoke_m1BF2079F72C587315D81CCE36B88858B897D77CD,
	NodeGetNamespaceType_EndInvoke_m94341B99006DC4B5704523C31B4ADC0D196DB716,
	ClientGetDefaultOptionsType__ctor_mFDA36DD3AD601E5134F9FC34A7499A048B9E0E2E,
	ClientGetDefaultOptionsType_Invoke_m613C3D2FC8C117E7D25F77CE37616824F60AAF0D,
	ClientGetDefaultOptionsType_BeginInvoke_mA33B0646DAE65FED3354098688314300D02C9AA5,
	ClientGetDefaultOptionsType_EndInvoke_m441C2317A59418A6D9CFC0B524F4FACEF5F09A62,
	GetZeroInitiazizedClientType__ctor_mE8E8EA3AC9A045A76B0BB81836A799D3BA132C83,
	GetZeroInitiazizedClientType_Invoke_m26624E5A1153E1150018FD334CDF10FC45E4A38E,
	GetZeroInitiazizedClientType_BeginInvoke_m326F7FAF6CF2D2A07A38F4DBAD49476F613396A6,
	GetZeroInitiazizedClientType_EndInvoke_m1E669599D1B0532FABCA2D5C021C989A30A5B02D,
	ClientInitType__ctor_m8860DF8D9F7A936623885A03ED4B759282CCA6F5,
	ClientInitType_Invoke_m156CF505201A0A5DE7CD13B9A78D5D088B048E0D,
	ClientInitType_BeginInvoke_m7FAA164EF55154713C43451EF7A3E2DC3CCD2D3E,
	ClientInitType_EndInvoke_mAD94283B59C08CE930536371DF37705CA74FAB9E,
	ClientFiniType__ctor_m543BCAE59E4C67819352871FD11DD5AB21FA0AB4,
	ClientFiniType_Invoke_mDFE4B2C21C0F5FDB34FD6BE992C7EDE19A2F8DE8,
	ClientFiniType_BeginInvoke_mD8B48252B88E5E851A045EB534FD583459D03945,
	ClientFiniType_EndInvoke_m4E08DA00DEEE7A77F481C838756DE4DA6AC4B17D,
	SendRequestType__ctor_m4E0CBCE3D1E3201E7ACFF8A25B0B7627B8AF71E2,
	SendRequestType_Invoke_mAC38512CD9243A98504AD997C1DDB0BBEF5DC19D,
	SendRequestType_BeginInvoke_m5B843A501DAB73CC624411F6600144DAC1B7EDDC,
	SendRequestType_EndInvoke_mA4C69C33A458E1914ABBEF1BEA10BBDDD8D561AF,
	TakeResponceType__ctor_mA1267704880A80203900DA186DCAD7BF38098B8C,
	TakeResponceType_Invoke_m90A523D289847E9F3DF295FB5178E34D566650D8,
	TakeResponceType_BeginInvoke_mC0CE06FBA2E15384E1C5AD876DD4E965DC012F78,
	TakeResponceType_EndInvoke_m624648C77270A28882F77BFD9BE2D5DB1C52240B,
	ServiceIsAvailableType__ctor_m941388BE721D4E86EC0DBF84930CEBC54B8FD7DC,
	ServiceIsAvailableType_Invoke_m99FC35F5988E10A35AE07B70DBD3878C91D81AA0,
	ServiceIsAvailableType_BeginInvoke_m535FDB750319EFA17071F588538EFD8130E544DE,
	ServiceIsAvailableType_EndInvoke_m9760DD3B01D98594EE88DF6ADBA3090F8260151A,
	ServiceGetDefaultOptionsType__ctor_m6EE0564F87E70372AB02A15406269E48EDD9B3F9,
	ServiceGetDefaultOptionsType_Invoke_m45F079C325A93529956C194445DBAB7C9C1A2DCB,
	ServiceGetDefaultOptionsType_BeginInvoke_m20517DC05D6D6BD938C5195FAAFA07E9085E0D3D,
	ServiceGetDefaultOptionsType_EndInvoke_mCEE3CA9F3609D4769F6F7A132B7649C1B298D0E1,
	GetZeroInitiazizedServiceType__ctor_m1EC2662478B72E8473F1F4390CCEF6237D05F3D1,
	GetZeroInitiazizedServiceType_Invoke_m7B5969C46350F9926636767A3326F7BE4D45DD5A,
	GetZeroInitiazizedServiceType_BeginInvoke_mFBDAA754CFD1CDDA1B521C7D8E2CE83460F7387C,
	GetZeroInitiazizedServiceType_EndInvoke_mE917C7FD8166EA1EEE1A85D00A557179BC174DA4,
	ServiceInitType__ctor_mFC9ACF99503E2F5BD6022C1B9EDDEE77B1D5E6E3,
	ServiceInitType_Invoke_mE2600189DCF270800BB9B8F4E953947099E2CE76,
	ServiceInitType_BeginInvoke_m3B477AF765DF2BA2983A1F381269CCB14DB021C0,
	ServiceInitType_EndInvoke_m59CCA29365D2E55DD6C49A2047C1A9FF5637970F,
	ServiceFiniType__ctor_m024779FCFC54C155862BA744E9CC394C2CC16299,
	ServiceFiniType_Invoke_m23C8D1C2A0543A797A38FFEFF4F5A4C5C03DC0AF,
	ServiceFiniType_BeginInvoke_mC6761D1C5AC4376E6CFE422ABD7D85C8A16F85AA,
	ServiceFiniType_EndInvoke_mA136EB2B08EB5ACC06446EE94A1442C274C0470D,
	TakeRequestType__ctor_m1CF9443D625A84C4E410310894A78171D8640727,
	TakeRequestType_Invoke_mDADE3196CA47A730FC7A3AE7075D21BDF0591364,
	TakeRequestType_BeginInvoke_m4D521798FBCBC689E66703776857AA8D606E457E,
	TakeRequestType_EndInvoke_m924555C7DFC4559F531F1EC6773519AF833CC56A,
	SendResponceType__ctor_m34794A201637892490554CCC3A9FED35CFF65B74,
	SendResponceType_Invoke_mB6D8D953A6B98AF617D936823BD89B9FB2401CAA,
	SendResponceType_BeginInvoke_m5E44EBB7CE5C00DE3E1D22C37B728AA56A7549C2,
	SendResponceType_EndInvoke_mB0A10E15626458E0A83D78A734E1E002E0D61425,
	PublisherGetDefaultOptionsType__ctor_mA0B1931E2082D3B33B9E267C3E77F2FA2E8F99F1,
	PublisherGetDefaultOptionsType_Invoke_mC040D61CB42495D2798C3D5EC240F9E86A53ACFA,
	PublisherGetDefaultOptionsType_BeginInvoke_mE8141627D0B1D7969487A6FDAAEAAB9F16382443,
	PublisherGetDefaultOptionsType_EndInvoke_mFB65FF68CED37E0153F9FEE81FAC822131F98C5C,
	GetZeroInitiazizedPublisherType__ctor_m5C896A97A22832F49DD0A780B03F36453B29E032,
	GetZeroInitiazizedPublisherType_Invoke_m389E74AC34BC9FEAD1F007F9B34CB27DAD4C8D77,
	GetZeroInitiazizedPublisherType_BeginInvoke_m21A19A972C1FEFAD1F4DDA62BE3C1A96DC962BB9,
	GetZeroInitiazizedPublisherType_EndInvoke_m83F6B431288043CD6BE8FFE8FD8BD4CA7A266D7C,
	PublisherInitType__ctor_mE0F288D21B7A38C8B7B3463D37F2CE4684867A79,
	PublisherInitType_Invoke_mAF2E9C0A254E009AA2FFE8D9F61F76479F82915B,
	PublisherInitType_BeginInvoke_mADF70B459529C6735CFBEC52EC718AAA6DD52558,
	PublisherInitType_EndInvoke_m78E819113970B7658D233B9AEB990B112E6EC533,
	PublisherFiniType__ctor_m8D130F0A60DA3C56799873BDBD256153E2AEA553,
	PublisherFiniType_Invoke_mD75EFB283C298ABF66E6C54681FBD0FA360FBE50,
	PublisherFiniType_BeginInvoke_mB889696E5E9B6E4D446B7F6800E2B244AFE1DC8C,
	PublisherFiniType_EndInvoke_mAC646AA1CC09BC064D3F08CAF569BEC292B65EBD,
	PublishType__ctor_m5B7F57C0F87D56E932042D2FDFF7B1571C6DD8CB,
	PublishType_Invoke_m8052474DEFC5436485A16B823BE88180889EBE18,
	PublishType_BeginInvoke_m65613A5901BAFDBF903B7FE8622D1FADA7AB9DB4,
	PublishType_EndInvoke_m40A338A3229B4E4C01848347D667924DE1FBB5B6,
	GetZeroInitializedSubcriptionType__ctor_m5B563ABBE4E2EBACDD4E398041F7641BFBB7FA8D,
	GetZeroInitializedSubcriptionType_Invoke_m9B839F91135BCA2DCBCCED46A6BE33927934C705,
	GetZeroInitializedSubcriptionType_BeginInvoke_m61CBFFB6C586BAD52F4922FD9E88528D263055B1,
	GetZeroInitializedSubcriptionType_EndInvoke_m7DFACAD8F963A40C48033B4F1E2567C9FA163A5C,
	SubscriptionInitType__ctor_m59D8D9A27D0ECC18CFE979E2C69ECA5D37BCB7F8,
	SubscriptionInitType_Invoke_mEE9EAE1803540A8222AE1A2BD2F4613F2D92B6F4,
	SubscriptionInitType_BeginInvoke_m66AA41F1D1AD393BA541C782223169B5441A70D1,
	SubscriptionInitType_EndInvoke_m0D342C0C5244BF887B97C2D740897D0031F33C47,
	SubscriptionFiniType__ctor_mDF38B9B49291EDD2F37FE944A1C7F708266CE352,
	SubscriptionFiniType_Invoke_mC9A32B3352CE680C5C5C9F03F4830606DFCE49EB,
	SubscriptionFiniType_BeginInvoke_mC6E8CF03FE0601724BFBCEBD21BE3289AE55C5C0,
	SubscriptionFiniType_EndInvoke_m2E1930D6B5C1C034A0B75028746675080E68715F,
	SubscriptionIsValidType__ctor_m876AB24A6709771393A61A9A324D32877C418F14,
	SubscriptionIsValidType_Invoke_mF11514EA69BC80E04167680EF7EFE7F8DD2E5702,
	SubscriptionIsValidType_BeginInvoke_mE8B4DF1F88028AAB831FEEEFB0286811AF22ED02,
	SubscriptionIsValidType_EndInvoke_mF38DE9F9F2BAD0590798D1CFF0012D3D290308EB,
	TakeType__ctor_m83F8B82C7436CE1B96E49D37558EA9F7A5F96BC4,
	TakeType_Invoke_m0AFB55C3BC2C7AC726ECBB59E0BE46D1D4D039CB,
	TakeType_BeginInvoke_mE79B91D38FB0D71C684AF22350444C8D7DE04A23,
	TakeType_EndInvoke_mDBF9849FC9335B1C7DBA88AC5AB7ADEF06192AE4,
	GetZeroInitializedWaitSetType__ctor_m9926EB1CD7E80F933DABF079EBC49A64E3F49A8F,
	GetZeroInitializedWaitSetType_Invoke_mD8C5981A1D566582BCF6BC81F4633B86C1BA5608,
	GetZeroInitializedWaitSetType_BeginInvoke_mF5B2F1698EE82E6F73BD7D39D19C33E67998A739,
	GetZeroInitializedWaitSetType_EndInvoke_m459283368DB111D370962C063217337D9D8C4D4C,
	WaitSetResizeType__ctor_m2D84DCA405FCE1024C9EDB01F198A203A7E7DB16,
	WaitSetResizeType_Invoke_m3A3751427298C8B363A512516D003CA42F5EF203,
	WaitSetResizeType_BeginInvoke_m19984476CBA4BBB7A0646024CC6508F989E14DD2,
	WaitSetResizeType_EndInvoke_mD6FF697299EB7E95CF72B6EDE4447FFA4CFCF04F,
	WaitSetInitType__ctor_mCAAE7815D319A159944793E695EE11885C64DCB0,
	WaitSetInitType_Invoke_mA0882157A33C2FD6FCE7F5F0D2C21C4DBAAA4121,
	WaitSetInitType_BeginInvoke_m42219622AB573DF4BA91ECF629CBAC9E57BE7714,
	WaitSetInitType_EndInvoke_m7B827BA56148EED8C3312C93A8868C9BB957AE75,
	WatiSetFiniType__ctor_m019BB39CACAF965688D105E2C5B140FBC0042345,
	WatiSetFiniType_Invoke_m26EFD42CC7F1B0A4D17869E521AFA2B15977A8CC,
	WatiSetFiniType_BeginInvoke_mBAE484A53E98B064F90E608D8DC332813F9FD7B2,
	WatiSetFiniType_EndInvoke_m87BD8B14C167B902FFB570528ACCC02E09E118A8,
	WaitSetClearType__ctor_m981DCF4A5BBED3B7C00789CD37DAC171EBAAAA61,
	WaitSetClearType_Invoke_m818BAE5F8DB2F99D6F09BE7029C71F2B4793D9B2,
	WaitSetClearType_BeginInvoke_mC8A5EAC75076BC9E43B1382888F5563C61234F73,
	WaitSetClearType_EndInvoke_mB9DECE1802B2D193DFB008E4A84BD7ED84F6D3BA,
	WaitSetAddSubscriptionType__ctor_m973C70D1AD2D535DF3EFBD99524A790D8D49A3C4,
	WaitSetAddSubscriptionType_Invoke_m1B8ABA9D8D3187D8CBAE60427282B8ED3987885A,
	WaitSetAddSubscriptionType_BeginInvoke_mD0971FFFC89036BF8A5007D0F8A56B03CCC9FE23,
	WaitSetAddSubscriptionType_EndInvoke_mD275D7BA0A9EE0210FF85D6DFB581FA5582AEF6D,
	WaitSetAddClientType__ctor_m275B3934D77694F41B9773987B58E2243062B8A7,
	WaitSetAddClientType_Invoke_m9815A26D8DA6BD1C2B488CC9AD7BBBF24FC77D7B,
	WaitSetAddClientType_BeginInvoke_m676D4A19023946F5B72B823AA2F3B83A1B6B1FAA,
	WaitSetAddClientType_EndInvoke_m8303C8F54D257350CADBC604357F7BF88EEC4333,
	WaitSetAddServiceType__ctor_m71006CBBF71E237FCED6B105E0ED650F54D6FCF8,
	WaitSetAddServiceType_Invoke_m4101337D8D0EFD11A909E2EE2990E8A5C55BF83D,
	WaitSetAddServiceType_BeginInvoke_mE76DEBE35A5A379BA656CDC8C10F743C08C10232,
	WaitSetAddServiceType_EndInvoke_m6AD17259C7CC16C83646A4235F36EEC2ECAD8835,
	WaitType__ctor_mAAED3A5D5AB0E524ED586F9ABE5A1D664E5BDF19,
	WaitType_Invoke_m43F90F5C01799D6D1CF2F1D3D5D16B51A27E6B90,
	WaitType_BeginInvoke_m822942AAB86927A8E5F5DA6185E6DF3F135CFE66,
	WaitType_EndInvoke_mA4E9B646A1D487CB40792FDA3EAFD26CD7FCAE4B,
	RclClockGetNow__ctor_m34B661D824FBAD8A26CF1BEE741CEDDB44C425D0,
	RclClockGetNow_Invoke_m00070791151C18FE1EB755A8E1C4400261330075,
	RclClockGetNow_BeginInvoke_mA0A01C855C189E3FD96E3543E6A71374B7D1669D,
	RclClockGetNow_EndInvoke_m5E90E7F50138410C4F62A85C56A4A483B5713B30,
	RclGetDefaultAllocatorType__ctor_m427E58DAD55BE8F6A0DAA175A6A71ACD6F9F0480,
	RclGetDefaultAllocatorType_Invoke_m41CECCE737A7F68EADC9033A4463964A4E585096,
	RclGetDefaultAllocatorType_BeginInvoke_m30AEAF2FB82FF29BC4803C8088D616ACBADFAD0B,
	RclGetDefaultAllocatorType_EndInvoke_mEC3E05A021850C623CB3EADD942A2CD662030ED5,
	ResetErrorType__ctor_m6AA4EEEA59CCB10DB6D8D0E00BA9D971B787812C,
	ResetErrorType_Invoke_m4274612856ECEBA822B4AA2B15E7F75487C4713C,
	ResetErrorType_BeginInvoke_m25BB0E1E26ABF8988924404E45F43D2D40875B19,
	ResetErrorType_EndInvoke_mE7E6CD4BE3954DE7C151651DD779E7494EED1744,
	NativeRclInterface__cctor_m39CC3E5B9A65DFF54B537DA3B127C4104BF8B4B4,
	RCLCSInitType__ctor_m580FEB7BEB81F8F40FD114D1A16065C862A1E2F5,
	RCLCSInitType_Invoke_m0F244268FB97A1EC69BAE44FBD0BB9C201DF4E42,
	RCLCSInitType_BeginInvoke_m6536F3027A269C5E880A05A8E702322A0767F296,
	RCLCSInitType_EndInvoke_mA8AF9F539EFDBA660FCC6F0A799C416C363F7ECB,
	GetErrorStringType__ctor_mC3EDF9D9753A8B71C755D0E07DCD01D27F21A7BD,
	GetErrorStringType_Invoke_mF682DB2C6231B00B54FC6BE368456DFC81000DA6,
	GetErrorStringType_BeginInvoke_m4F7ACE995B9A707118959C2BEF604AA71A36E9C5,
	GetErrorStringType_EndInvoke_m087D8F0AEAC2D07A1E332CD7170583381626AB4C,
	DisposeErrorStringType__ctor_m0EB5EF05FF91FCA088835FC7708D75381ECF9551,
	DisposeErrorStringType_Invoke_mEAB6DDBFAFCFE029EBCFDEEF35FB1C65038FD3C9,
	DisposeErrorStringType_BeginInvoke_mE7E4EF0EE846F4C62C7A8E89DFF0B4E8B31A513A,
	DisposeErrorStringType_EndInvoke_m75ABC51A2973F9E56D5C3DCFF51AD4465629044F,
	NodeCreateDefaltOptionsType__ctor_mFE628D90420D3B28C275C8A93D46C68A68480D9C,
	NodeCreateDefaltOptionsType_Invoke_m03EC69F947909616A6137C575C5EED4EC3A3B0BA,
	NodeCreateDefaltOptionsType_BeginInvoke_m006EC6A24BA3C06C3AA9FF37FA934802D12E05EB,
	NodeCreateDefaltOptionsType_EndInvoke_m037F04892DE56779FC58525BD9F008777BEAA3A1,
	NodeDisposeOptionsType__ctor_mBBE70446F1843F451FC32EBE659770D6BCD6BBE4,
	NodeDisposeOptionsType_Invoke_m835EF8D0C527904297A9967E2B7FEB2184C3DE6E,
	NodeDisposeOptionsType_BeginInvoke_mBB5F72A9C0FEE1B0BD32349A4EE03768AA33F7E4,
	NodeDisposeOptionsType_EndInvoke_mFE098A17038E84C8F7C07DE1C0B8B5DDF4307191,
	SubscriptionCreateOptionsType__ctor_m8D99C7CCD6A78AC99CDF61EA1B795D5351128EB8,
	SubscriptionCreateOptionsType_Invoke_mF210824ACCCE79F0F900E04004E191CB9CB94B92,
	SubscriptionCreateOptionsType_BeginInvoke_mCB7CFFC004FF294A8FF778CF81B7293DC7A85E60,
	SubscriptionCreateOptionsType_EndInvoke_m367C68F7FB8944C9AEF7B200100E5C30AAF6EFE8,
	SubscriptionDisposeOptionsType__ctor_m14B9F359107C237734AAFA58BB4CD4DCDEF39DE6,
	SubscriptionDisposeOptionsType_Invoke_m02AC1A7D0766AAC31049295301F91239E4193BFD,
	SubscriptionDisposeOptionsType_BeginInvoke_m4B89C5A7D034707AD3F2F034677B114DECB2CBFE,
	SubscriptionDisposeOptionsType_EndInvoke_m052166573D6B556261584F88FCF916F232C46BCC,
	PublisherCreateOptionsType__ctor_m538E9A00E4E0883C0FDA2CCA8599C98209C7C0F0,
	PublisherCreateOptionsType_Invoke_m0458CA73CBDE23751269F6D1154CEC98506CDE11,
	PublisherCreateOptionsType_BeginInvoke_m3A991D9EAA470830C84FA03A7448002FB434D176,
	PublisherCreateOptionsType_EndInvoke_mA74B2ED7F4869F91A0EC1A2F1F039F921EC03DBE,
	PublisherDisposeOptionsType__ctor_mEB9AD5DB1D8975766449DD69E189E175932F2F43,
	PublisherDisposeOptionsType_Invoke_m9861001577FD0A25DD8CC2BB37825A1912B9FE80,
	PublisherDisposeOptionsType_BeginInvoke_m099D52A996175D61BB5E2C8700F1B25A2999FF7D,
	PublisherDisposeOptionsType_EndInvoke_m82BEC8CE504C2A92046D1BB9246485BD5DA97E1D,
	ClientCreateOptionsType__ctor_m4024E3417DEE76E8236193C1954C70F1B87416E8,
	ClientCreateOptionsType_Invoke_m95D49A7DD70348BFF08C5F875D235C60B3DCCCFD,
	ClientCreateOptionsType_BeginInvoke_m1AA0E5314B1533D2862E86A53C4082BCB7533486,
	ClientCreateOptionsType_EndInvoke_m84C89F31FD4642EE737A6B0E6EEE5C3BCDD8E273,
	ClientDisposeOptionsType__ctor_m450C576CA9F4A0CF2693A57F3CB7B9A1E6B3ECCC,
	ClientDisposeOptionsType_Invoke_m743FDBF766E760B5C05F0916A23C61F99EDB4755,
	ClientDisposeOptionsType_BeginInvoke_m1C5AC4B391CE3D795C72837F235FF1BC22B1815D,
	ClientDisposeOptionsType_EndInvoke_mC0A26C11AAD35148802EFD7B0B6B5665A75CB801,
	ServiceCreateOptionsType__ctor_m78D08B6A27E38A5EC00CB1D47F5F2E6EE5E1CA02,
	ServiceCreateOptionsType_Invoke_mE222D7D5FD8FFA2A79B17FB03D8260D6673B29AF,
	ServiceCreateOptionsType_BeginInvoke_mB5792A8432DF2348797F8F3ACC4B238A1FED839E,
	ServiceCreateOptionsType_EndInvoke_m0E0142FE4B368B71E416742F7805A1EF93FB64B3,
	ServiceDisposeOptionsType__ctor_m7901E90CDE0FF0EF5559495D0B21573D2A0965C8,
	ServiceDisposeOptionsType_Invoke_m937242BE18B3C30F62B706B6F50002CB9FDA43B0,
	ServiceDisposeOptionsType_BeginInvoke_m04761A5ECA5E7453FC19B2515CD9B4B78FE7F94E,
	ServiceDisposeOptionsType_EndInvoke_m0FC3241037CC17C1371DFCC9100670B6510CDAA5,
	RclcsClockCreate__ctor_mE9DE7A6A4B3B916793004CC818C35748AEC6FF8B,
	RclcsClockCreate_Invoke_mFD077B5620145E54382E184E765F442842D53B28,
	RclcsClockCreate_BeginInvoke_m7B6452DC8EEE9DCD0D24C7EDF2DB12D06C9B3D47,
	RclcsClockCreate_EndInvoke_mB53809C6625DF2882A2613CA9B3F388386CDFD7B,
	RclcsClockDispose__ctor_m81E7A022B781030F537F78B22AB80EE856F53238,
	RclcsClockDispose_Invoke_mB31FF352E25F02041B8C12B480B4AEA88827F56F,
	RclcsClockDispose_BeginInvoke_mE640BCF73D4BCE72CD1826D6294E2E1D4A2F08C5,
	RclcsClockDispose_EndInvoke_mAF2B027308B8DCFB3152ECF455DF7CE3D2B88401,
	NativeRmwInterface__cctor_m3FCA9B660C7CD327972A06E1B35C624005A1DE00,
	RMWImplementationIdentifier__ctor_mF3472CF6AB2B38C5C1DE9808A4F0EFDEDE5015AC,
	RMWImplementationIdentifier_Invoke_m2798432969B3FDB239028F2CCE63EA679D73EBD7,
	RMWImplementationIdentifier_BeginInvoke_m4E0CB2EF2C8B7613642F35BFE412CDC554E57D04,
	RMWImplementationIdentifier_EndInvoke_mF9FDEB47F51C93AF89F3FF730E434787FC9DFDAB,
	RMWNativeCreateQoSProfileIdentifierType__ctor_m6331BAF37623A2ADC84019AE90580B9883EAF0EA,
	RMWNativeCreateQoSProfileIdentifierType_Invoke_m719A1FA4411233308FBD0A52DD44DF51ADB12FA0,
	RMWNativeCreateQoSProfileIdentifierType_BeginInvoke_mF7547D55E93BAF90DE4CE9C6A72378CC8F876252,
	RMWNativeCreateQoSProfileIdentifierType_EndInvoke_mDE0AB4C1895C79550383A0B7F452C8875083157F,
	RMWNativeDeleteQoSProfileIdentifierType__ctor_m0216F9B3F0D5418C5EA1ED37525AF9F9745A4E4E,
	RMWNativeDeleteQoSProfileIdentifierType_Invoke_mC0AD7D87AB168717B18ED02122FC64BA5E5519BE,
	RMWNativeDeleteQoSProfileIdentifierType_BeginInvoke_m378AD5CCDEA11A32092460342CE61F0A9EC7FD63,
	RMWNativeDeleteQoSProfileIdentifierType_EndInvoke_m2224004BA91F048199EEBD71FC0912E9C4A73309,
	RMWNativeSetHistoryIdentifierType__ctor_m6700FEA80E80BA1EBC7F482F7B302AEF70293613,
	RMWNativeSetHistoryIdentifierType_Invoke_mD19165DA0A5836757CDE8E627683D5431B79D486,
	RMWNativeSetHistoryIdentifierType_BeginInvoke_mB08974C94B92DAFBFBC73A95F39CB2E596A21E57,
	RMWNativeSetHistoryIdentifierType_EndInvoke_m08B647D82C8619F1481E704481F4146D1D853E36,
	RMWNativeSetReliabilityIdentifierType__ctor_mC6284964D5DC119EEB16776B85DE4EB0669DCAF6,
	RMWNativeSetReliabilityIdentifierType_Invoke_m0C867D84FBB2311D293FF704AE4E69BA487329FF,
	RMWNativeSetReliabilityIdentifierType_BeginInvoke_m87DCE8C2BB4F731034A6E14DAC78844E1833F7E3,
	RMWNativeSetReliabilityIdentifierType_EndInvoke_m1B2B5EF5E7C1281467A87BAE910CBAD215614A49,
	RMWNativeSetDurabilityIdentifierType__ctor_mA10B1A1248CE6BDAE5DE5C09F97EE3945095FD8F,
	RMWNativeSetDurabilityIdentifierType_Invoke_m37BD9B13755DD7B4C13114176D323EAD0AE802E3,
	RMWNativeSetDurabilityIdentifierType_BeginInvoke_m4D25A2F69A83F70550100A7A28226D45025D210E,
	RMWNativeSetDurabilityIdentifierType_EndInvoke_mA810891197729ED436F2F43EFC4669D487904ACF,
	Utils_CheckReturnEnum_m4F3CDB4D1DD633F528BFD99D5A245210AD36EF5E,
	Utils_GetRclErrorString_m6F27FEC35A46ADED61644CB41327F1C5847CCF79,
	Utils_PopRclErrorString_mAE90DE98A76531C78A9110AA2FEB593853C09289,
	Utils_PtrToString_mCE2B96B740F655D1F150EED68843FAE759B87106,
	RosTime_get_Seconds_mFB337E8C3F2FA0FDA6D6E15C2C4E2525AD27EE98,
	Clock_get_IsDisposed_mB8D14918EA0D0571FFFD5F941D6FD9B1632A9636,
	Clock_get_Now_mEFBCCFAB1D677F1B33E0BC20CE72B57492D15F71,
	Clock__ctor_mB572733F38E7F7322089A9EC629E29C32CDB22A5,
	Clock_Finalize_mAF5FE3C86A69FC54847FCC145ECFE54232CE2497,
	Clock_Dispose_m152EDA0A3D3520DE913EDCF77394AF64CA0CE608,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Node_get_Name_mE229862361FDE8FD5363AECA92F558B87F79A6EF,
	Node_get_Subscriptions_mE8CB73008BF0BE009E3FF5912C54837F2E079492,
	Node_get_Clients_mDF68BC88521E8D514B324E853F572258A278623B,
	Node_get_Services_m21D8E5DC5095719C2142C665CAB884C553D16CD5,
	Node_get_IsDisposed_mF1271C534EE9D9F6E5ADE31260B40B311CDDFCBD,
	Node__ctor_mF9C64070A243DB4627A01DDE8964A4149380293B,
	Node_Finalize_m57FBEEC0B4294F2AD10BE8B4EF433E7D71CE9313,
	Node_Dispose_m14617AAFCCEC9DE725CFC4318DA6301D0278E375,
	Node_DestroyNode_mA12E1D4909A7D71CE3444DC22771F14EA6509290,
	NULL,
	Node_RemoveClient_m926C47B3852D0D5FF2AE437E1BDFF1149B830522,
	NULL,
	Node_RemoveService_m2C5A7B9486E2E883855370204A0379E0A35DF16F,
	NULL,
	NULL,
	Node_RemovePublisher_m3EEEC664955F11EF9583EF00DF7C7652B4136FE6,
	Node_RemoveSubscription_m67C5DD8D30DD66D26C4CD00D34B175291AFFAC08,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	QualityOfServiceProfile__ctor_m07DC019B6D110CF8BE8CEDBB4472BF704A9D7AB0,
	QualityOfServiceProfile_SetHistory_mA6DAAEB82E9797D3020A2A0C1FCF4218D3EF64C7,
	QualityOfServiceProfile_SetReliability_mC616FDDA461B61574D5E808CF18073B45F6D20E0,
	QualityOfServiceProfile_SetDurability_m367BF4FD46D61FDD58EBF50E88824FB9F715BFCF,
	Ros2cs_Init_m0DD18818F4CB0ABB9E8745BB1FB6BC48CBEA6D54,
	Ros2cs_GetRMWImplementation_mD7EF0B8E9E670E644BD29F9302BBFF61D615D352,
	Ros2cs_Shutdown_mC6D21423F0C5ABF86E21EFFD2F858B35DCF429AA,
	Ros2cs_Ok_mCBF1F5567BD5AC76648366C7BCE560310CA9B2D4,
	Ros2cs_CreateNode_m106B7064A86E1CC2A7D9E9784B0E293E1E182863,
	Ros2cs_RemoveNode_m366576274210344333586F6DC07C5C163CFDB15F,
	Ros2cs_Spin_mCA20FECE067A33965FA0AAF4BCED065167B7CCC1,
	Ros2cs_Spin_m9FFBBF14D708D41FB3C8672E92D16CBA2EF2289B,
	Ros2cs_SpinOnce_mB3D242DB486CA022D7967AE5BC1CA86B5D49C8D7,
	Ros2cs_SpinOnce_mD28E68F09C97A9A71F1B21DA3FF52F362C69929E,
	Ros2cs__cctor_m1A864E175616216B5017FA616C15C62D85EE38F5,
	Destructor_Finalize_m903FB37D8E6B85F5D1695DE3E38F10C34F4A597F,
	Destructor__ctor_mD243064E083C8E8D3CF643EFB77CD9B875DCDB73,
	U3CU3Ec__cctor_m09694B5F1768A22D57498C283D750099D6AE0FB4,
	U3CU3Ec__ctor_mA55B8DA6C9918646B8B269DD9DD2738ECE1252E9,
	U3CU3Ec_U3CSpinOnceU3Eb__18_3_m31F64A88492947438FE574F0CAB6740E348BC2D1,
	U3CU3Ec_U3CSpinOnceU3Eb__18_4_mAA6E17E7132CC4DB2940E4E64AC0EC75F3745B1C,
	U3CU3Ec_U3CSpinOnceU3Eb__18_5_m7E6150B676C4CCB992865DDAE4193FD0FD5B291D,
	U3CU3Ec_U3CSpinOnceU3Eb__18_0_mADADEAFA800B6CA0690FC3B8F75B2F8CC7CE4025,
	U3CU3Ec_U3CSpinOnceU3Eb__18_1_m4961852F0F03C268E282F5D44C6DD1424B09437E,
	U3CU3Ec_U3CSpinOnceU3Eb__18_2_m7CC24ABEF5BEA2B6C2EA9D6F200D5C41BC919CB8,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	WaitSet_get_SubscriptionCount_mC9EB54530BA64F83DE8FC4D56D7A28547006A8EE,
	WaitSet_get_ClientCount_m79058F880AB932A9B318C2ECDAAAB5E1129C8423,
	WaitSet_get_ServiceCount_mD4F353D6562BD6BF4F52CBB9CCDB5EA7E2DBFF9B,
	WaitSet__ctor_mA46DC9CD59BE3942840ECA84674F79B3557741AB,
	WaitSet_Finalize_m16ED291D08BA82140D8684D49E6BD64B48159CD1,
	WaitSet_Clear_mBEA5E7F51D749C6A2A341B8E705959EB3C11D93C,
	WaitSet_Resize_m92C32888FEAE2FEEF7A5C10C44B23DCC2B0210E6,
	WaitSet_TryAddSubscription_m6C97341D381ECF709DB8ADED4D73B0B59AA1C737,
	WaitSet_TryAddClient_mC8C4AD06C66C4CD9FB4B31590BCCC6664371E9E2,
	WaitSet_TryAddService_m5C27E93613BD360563A9AA96ABBBF5D57C03C7CA,
	WaitSet_Wait_mFD830298FA63BEB78BA24CFC14114261BAFE857B,
	WaitSet_Wait_m9D17E419FB8A2C7D60878D791B92926E9B07F4A7,
};
extern void RosTime_get_Seconds_mFB337E8C3F2FA0FDA6D6E15C2C4E2525AD27EE98_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[1] = 
{
	{ 0x06000136, RosTime_get_Seconds_mFB337E8C3F2FA0FDA6D6E15C2C4E2525AD27EE98_AdjustorThunk },
};
static const int32_t s_InvokerIndices[438] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	8012,
	2394,
	5349,
	1872,
	4480,
	2394,
	5350,
	1872,
	4481,
	2394,
	1632,
	728,
	1631,
	2394,
	3485,
	1087,
	1631,
	2394,
	2928,
	1087,
	1395,
	2394,
	584,
	168,
	1042,
	2394,
	3485,
	1087,
	1631,
	2394,
	5351,
	1872,
	4482,
	2394,
	257,
	104,
	1042,
	2394,
	3485,
	1087,
	1631,
	2394,
	3715,
	1087,
	1828,
	2394,
	3715,
	1087,
	1828,
	2394,
	5205,
	1872,
	3718,
	2394,
	5348,
	1872,
	4479,
	2394,
	254,
	103,
	1042,
	2394,
	1628,
	723,
	1042,
	2394,
	1046,
	355,
	1042,
	2394,
	1041,
	354,
	1042,
	2394,
	1040,
	353,
	495,
	2394,
	5205,
	1872,
	3718,
	2394,
	5353,
	1872,
	4484,
	2394,
	254,
	103,
	1042,
	2394,
	1628,
	723,
	1042,
	2394,
	1041,
	354,
	1042,
	2394,
	1041,
	354,
	1042,
	2394,
	5205,
	1872,
	3718,
	2394,
	5352,
	1872,
	4483,
	2394,
	254,
	103,
	1042,
	2394,
	1628,
	723,
	1042,
	2394,
	1047,
	356,
	1631,
	2394,
	5354,
	1872,
	4485,
	2394,
	254,
	103,
	1042,
	2394,
	1628,
	723,
	1042,
	2394,
	2928,
	1087,
	1395,
	2394,
	499,
	166,
	1631,
	2394,
	5355,
	1872,
	4486,
	2394,
	99,
	20,
	1631,
	2394,
	19,
	6,
	1042,
	2394,
	3485,
	1087,
	1631,
	2394,
	3485,
	1087,
	1631,
	2394,
	1040,
	353,
	495,
	2394,
	1040,
	353,
	495,
	2394,
	1040,
	353,
	495,
	2394,
	1630,
	725,
	1631,
	2394,
	1672,
	734,
	1631,
	2394,
	5347,
	1872,
	4478,
	2394,
	5337,
	1872,
	4257,
	8012,
	2394,
	1632,
	728,
	1631,
	2394,
	5205,
	1872,
	3718,
	2394,
	4237,
	1103,
	4257,
	2394,
	5205,
	1872,
	3718,
	2394,
	4237,
	1103,
	4257,
	2394,
	3717,
	1103,
	3718,
	2394,
	4237,
	1103,
	4257,
	2394,
	3717,
	1103,
	3718,
	2394,
	4237,
	1103,
	4257,
	2394,
	3717,
	1103,
	3718,
	2394,
	4237,
	1103,
	4257,
	2394,
	3717,
	1103,
	3718,
	2394,
	4237,
	1103,
	4257,
	2394,
	3715,
	1087,
	1828,
	2394,
	4237,
	1103,
	4257,
	8012,
	2394,
	5205,
	1872,
	3718,
	2394,
	3716,
	1098,
	3718,
	2394,
	4237,
	1103,
	4257,
	2394,
	1256,
	368,
	4257,
	2394,
	2359,
	738,
	4257,
	2394,
	2359,
	738,
	4257,
	7822,
	7975,
	7975,
	7648,
	5159,
	5141,
	5256,
	5337,
	5337,
	5337,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	5228,
	5228,
	5228,
	5228,
	5141,
	2382,
	5337,
	5337,
	5337,
	0,
	3028,
	0,
	3028,
	0,
	0,
	3028,
	3028,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	4235,
	2167,
	4235,
	4235,
	8012,
	7975,
	8012,
	7942,
	7650,
	7464,
	7288,
	7288,
	6896,
	6896,
	8012,
	5337,
	5337,
	8012,
	5337,
	3028,
	3028,
	3028,
	4257,
	4257,
	4257,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	5323,
	5323,
	5323,
	4164,
	5337,
	5337,
	1330,
	1684,
	1684,
	1684,
	5141,
	3103,
};
static const Il2CppTokenRangePair s_rgctxIndices[11] = 
{
	{ 0x02000063, { 0, 46 } },
	{ 0x02000064, { 46, 30 } },
	{ 0x02000065, { 76, 7 } },
	{ 0x02000066, { 83, 1 } },
	{ 0x02000067, { 84, 9 } },
	{ 0x02000069, { 101, 4 } },
	{ 0x02000073, { 105, 8 } },
	{ 0x06000178, { 93, 2 } },
	{ 0x0600017A, { 95, 2 } },
	{ 0x0600017C, { 97, 2 } },
	{ 0x0600017D, { 99, 2 } },
};
extern const uint32_t g_rgctx_Client_2_get_PendingRequests_m643B134432F67597114499261A152DE0F2A25E27;
extern const uint32_t g_rgctx_Dictionary_2_tE989C858384B8D0D6F4620EB2A23F5DC9D2FB016;
extern const uint32_t g_rgctx_Dictionary_2__ctor_m23F6CDC70CD9FF4AC1DC48FC0248EADD99ECAEFC;
extern const uint32_t g_rgctx_PendingTasksView_t561AF86AA6C777ADB834969FC7E241318C092DB3;
extern const uint32_t g_rgctx_PendingTasksView__ctor_m1685804681873522D2BC905887E827A566F039D1;
extern const uint32_t g_rgctx_Client_2_set_PendingRequests_mB9346A168CB74C74539511AD403D762ECC108EF7;
extern const uint32_t g_rgctx_MessageTypeSupportHelper_GetTypeSupportHandle_TisI_t2704C0EA2CBBD7A3B3F9E241FB3106CCA4A56833_mBEB013786FA7A5E2A5236418923352CC74F61510;
extern const uint32_t g_rgctx_Client_2_Dispose_mD7924BB05F7333C3A5265D0CA6BE60A88E162234;
extern const uint32_t g_rgctx_Client_2_DestroyClient_m48E8529593DD7965DB42025FF2A237BFD2B40053;
extern const uint32_t g_rgctx_Dictionary_2_get_Values_mD9171283695B6A0A94702DB5A70C5B763D64B714;
extern const uint32_t g_rgctx_ValueCollection_tCDE1443068B5D707A0939236AF73CD79D2592AA5;
extern const uint32_t g_rgctx_ValueCollection_GetEnumerator_m854FFBECAECAFBCD87282C58CC8E7FFEF8CC571E;
extern const uint32_t g_rgctx_Enumerator_get_Current_mC332F3641B048A4503F6C8D1C785F4697F987B91;
extern const uint32_t g_rgctx_TaskCompletionSource_1_t57ABBDF88A7677E7BEE30575F3057CDF4F5E99AF;
extern const uint32_t g_rgctx_TaskCompletionSource_1_TrySetException_m274D7438F78DE17400E8C7712DA14A2549F7F18B;
extern const uint32_t g_rgctx_Enumerator_MoveNext_mEBA7A595A49D6A240BAB429B36083022B8DCBE57;
extern const uint32_t g_rgctx_Enumerator_tD678E46068093C51565347AE3ED7733DB6401610;
extern const Il2CppRGCTXConstrainedData g_rgctx_Enumerator_tD678E46068093C51565347AE3ED7733DB6401610_IDisposable_Dispose_m3C902735BE731EE30AC1185E7AEF6ACE7A9D9CC7;
extern const uint32_t g_rgctx_Dictionary_2_Clear_mF6A6E8213DAED7375F9884CCAC5F8C52B1EB732D;
extern const uint32_t g_rgctx_Activator_CreateInstance_TisO_t39A0AFA8FF666E1B04C63BA9605E380DD82AE6EE_m0FBD53BDD4E0FDB965260A86A1D79AA31689E405;
extern const uint32_t g_rgctx_O_t39A0AFA8FF666E1B04C63BA9605E380DD82AE6EE;
extern const uint32_t g_rgctx_Client_2_ProcessResponse_m30F5F049593C7CC8788D81C856A64A1582DCEEF8;
extern const uint32_t g_rgctx_Dictionary_2_TryGetValue_m6F2465046AA60AD329DE87272870C8A2DE747066;
extern const uint32_t g_rgctx_Dictionary_2_Remove_mA32DAB54878807F1598C20A013A9CD187509D50B;
extern const uint32_t g_rgctx_TaskCompletionSource_1_SetResult_mCDE41BFE454AA86CC21E45EA422654A090465DC0;
extern const uint32_t g_rgctx_I_t2704C0EA2CBBD7A3B3F9E241FB3106CCA4A56833;
extern const uint32_t g_rgctx_TaskCompletionSource_1_get_Task_mDD2E6A200ABD90D7E24433B68B3B6F9C5A769002;
extern const uint32_t g_rgctx_ValueTuple_2_t9D7D7C943A814D65B5DEADA4BE0C3CFBC86C9B10;
extern const uint32_t g_rgctx_ValueTuple_2__ctor_mF69F7B4F85D4140D486055CD2D6B4736371FCF50;
extern const uint32_t g_rgctx_Dictionary_2_Add_m9EF23CF1A616BDBF7CF01957EC5BC68199D6EB6A;
extern const uint32_t g_rgctx_Client_2_CallAsync_m32CA31392F8303B17EE97E67D97B56FFC7040AA8;
extern const uint32_t g_rgctx_Task_1_t3C31A53568B7B70D95DB29FC84C6040AF357E274;
extern const uint32_t g_rgctx_Task_1_get_Result_m42FD68BC617E6C326B41D00BFF2B90CE28D47BEF;
extern const uint32_t g_rgctx_Client_2_CallAsync_m1E9321652BC276C63E065E5572C5EF24B8FE24FD;
extern const uint32_t g_rgctx_Client_2_SendRequest_m9299E46983A32C2F29F0B086DBA0BCB4386D5976;
extern const uint32_t g_rgctx_TaskCompletionSource_1__ctor_m180DA83536E0E6D0CD6B9C44B5ABEF9BB8F10CB2;
extern const uint32_t g_rgctx_Client_2_RegisterSource_m527DBAD60CFDE15C2DA9A4B612B3699C22E020A0;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass34_0_tC8DF85CAB49EB0C5CA2C6913D559B8DE57AD9BBC;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass34_0__ctor_mBF5EF29D4476CA8680FD2CC981C4110D76FC212F;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass34_0_U3CCancelU3Eb__0_m386F863C7AFAA363F7DC21DC0AA151F768BD979E;
extern const uint32_t g_rgctx_Func_2_tB3740AD980E55A762C34101BF1018072ADB35340;
extern const uint32_t g_rgctx_Func_2__ctor_m66AD818BB3DB5D66CD20994994985C49CC0608FE;
extern const uint32_t g_rgctx_Enumerable_First_TisKeyValuePair_2_t1BE0C7CCDBD60798AC9F7BDE96957CB0622413B1_m97265DA915E41C09287B6AD63F97B3D588AADA00;
extern const uint32_t g_rgctx_KeyValuePair_2_get_Key_m48DF1B7AF4D0EF2A88285A6451458C6AD708DFF5;
extern const uint32_t g_rgctx_KeyValuePair_2_get_Value_mDF23ECBAB1DA21654DEACBA331241E16FAD8B641;
extern const uint32_t g_rgctx_TaskCompletionSource_1_SetCanceled_m21ADD1007560CB85E6F1D3632A725004266CE1C2;
extern const uint32_t g_rgctx_IReadOnlyDictionary_2_tCDE434B6A808005C256633F25729ED47013EF4CB;
extern const uint32_t g_rgctx_IReadOnlyDictionary_2_get_Item_m0488794FAAA0FCC916A4DD21CD136EA1E2766D9D;
extern const uint32_t g_rgctx_PendingTasksView_get_Item_m119B2F585A2DACC2C1D859E125B4ACA718C9A829;
extern const uint32_t g_rgctx_IReadOnlyDictionary_2_get_Keys_mCC5E8DA3419BA83DF7F88644E3D77CE9B3C96091;
extern const uint32_t g_rgctx_IReadOnlyDictionary_2_get_Values_m97E53A14E0DECADECE0FC19F58B31471213C8BAC;
extern const uint32_t g_rgctx_U3CU3Ec_t9CD08E916870455DD97341B73FAA9F6DEAAB2B35;
extern const uint32_t g_rgctx_U3CU3Ec_U3Cget_ValuesU3Eb__7_0_m27B98C96359254502EBAFBEC3DD640B5B2CEA44E;
extern const uint32_t g_rgctx_Func_2_tA532553EFD7F6DB9F23C24194C4D7A47C14E1E9D;
extern const uint32_t g_rgctx_Func_2__ctor_m9C7B7B8812DC1B02065977CB3CFF01777AB52BD1;
extern const uint32_t g_rgctx_Enumerable_Select_TisValueTuple_2_t0F2B1EF14D809DCDE6B0DF3CCFAB2BF8AE4524E9_TisTask_1_t3DA3020627E29BB85C8F2F102BED98FD0766AB62_m50C33AD03CEBDB6BDE53C6E361A9D2121CAEA513;
extern const uint32_t g_rgctx_Enumerable_ToArray_TisTask_1_t3DA3020627E29BB85C8F2F102BED98FD0766AB62_m11F41C6817FADEB039E7F4B615041220FA564B39;
extern const uint32_t g_rgctx_PendingTasksView_get_Values_m2DE7F1CCAC291A9BB62810D7185689F5AC90D7A2;
extern const uint32_t g_rgctx_IReadOnlyCollection_1_t3640AA283DD8874DE3F20D6F477AD21CC4CEA3AA;
extern const uint32_t g_rgctx_IReadOnlyCollection_1_get_Count_m441C3CFFC6222123C34BC405E4DA16066C8C9637;
extern const uint32_t g_rgctx_IReadOnlyDictionary_2_ContainsKey_mA4CC7C3DC52CD932884CDAEDA4FB6EAF28243E39;
extern const uint32_t g_rgctx_IReadOnlyDictionary_2_TryGetValue_mEC2609E0195E31880A088EAEDBAF4741A2457513;
extern const uint32_t g_rgctx_PendingTasksView_TryGetValue_mCD5FF5C770B05EB2913D9709D7CAB5AC0EB2FBB3;
extern const uint32_t g_rgctx_U3CU3Ec_U3CGetEnumeratorU3Eb__17_0_m343D91876E35067CBF7E3811066601528E1E8721;
extern const uint32_t g_rgctx_Func_2_t26955297C3BDEFB20F0D3C60D73A61351BFDBD79;
extern const uint32_t g_rgctx_Func_2__ctor_m25B4A759F773D2C5FB08D2AA2A77F434730EA6E1;
extern const uint32_t g_rgctx_Enumerable_Select_TisKeyValuePair_2_t0F5955AFDD55532F288940DFA045C67196D676E9_TisKeyValuePair_2_t88E7FE13E954AC0966CBD37AD1F91719EDF7F447_m68B1389EE9A30B7BA8D205EFA2D5BF13421A2834;
extern const uint32_t g_rgctx_Enumerable_ToArray_TisKeyValuePair_2_t88E7FE13E954AC0966CBD37AD1F91719EDF7F447_m0BB9B1A4CB715B1EC60F7DB4FE952B0A7A303E61;
extern const uint32_t g_rgctx_Enumerable_AsEnumerable_TisKeyValuePair_2_t88E7FE13E954AC0966CBD37AD1F91719EDF7F447_mAA7A092D6A3BA239479D3B22491EE549A00260CA;
extern const uint32_t g_rgctx_IEnumerable_1_t7163918093045759DC1134987396D7CD091B4CE9;
extern const uint32_t g_rgctx_IEnumerable_1_GetEnumerator_mA29D68D4C96E9AA9ABE9061BF379D9D57EAE860E;
extern const uint32_t g_rgctx_PendingTasksView_GetEnumerator_m8851E150A853E1D6E9F7F79B379D7B410C4C4BB7;
extern const uint32_t g_rgctx_U3CU3Ec_U3CSystem_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CSystem_Int64U2CSystem_Threading_Tasks_TaskU3EU3E_GetEnumeratorU3Eb__19_0_m87490045AF850C9F7AC00EB4E1A3AD110BF98272;
extern const uint32_t g_rgctx_Func_2_tBD3F86868DCDB18C03EA9EACE274BB41D2A9920B;
extern const uint32_t g_rgctx_Func_2__ctor_m3EE23ADFC7C46F591FD321BBC7F10BC753EB82A5;
extern const uint32_t g_rgctx_Enumerable_Select_TisKeyValuePair_2_t0F5955AFDD55532F288940DFA045C67196D676E9_TisKeyValuePair_2_tD6E25477E4ECFB5932C331E0E4F9557DEA2D4C59_m9AC9343315152E35E336A765BAEC24C9BD001D59;
extern const uint32_t g_rgctx_U3CU3Ec_t83FDA3B8BA88E165E4BDEE5D6625F455A4FB7DAB;
extern const uint32_t g_rgctx_U3CU3Ec__ctor_m42AE28171CCE5930824BC970B140CDF1870375C8;
extern const uint32_t g_rgctx_U3CU3Ec_t83FDA3B8BA88E165E4BDEE5D6625F455A4FB7DAB;
extern const uint32_t g_rgctx_KeyValuePair_2_get_Key_mB837C38A838945E5D95198C7219EA0C2FD60C6D2;
extern const uint32_t g_rgctx_KeyValuePair_2_get_Value_mBF3F89CC97339DFB149A365E923148156574CDC9;
extern const uint32_t g_rgctx_KeyValuePair_2_tA06FDB77890F1D58B3A1B4BC0A907CAE87526F8B;
extern const uint32_t g_rgctx_KeyValuePair_2__ctor_mF29F033367BAFEF26F3850CF0353E0497BC43BD0;
extern const uint32_t g_rgctx_KeyValuePair_2_get_Value_mF572B566446782BF18B6AADA55A820B18B02B480;
extern const uint32_t g_rgctx_Activator_CreateInstance_TisI_t2F9E65E1BBFE2F10144DFE0CC614CE91ECAD10C1_m8E1B1000A9DAAE3D06DA85109F8839F1E727C141;
extern const uint32_t g_rgctx_I_t2F9E65E1BBFE2F10144DFE0CC614CE91ECAD10C1;
extern const Il2CppRGCTXConstrainedData g_rgctx_I_t2F9E65E1BBFE2F10144DFE0CC614CE91ECAD10C1_IDisposable_Dispose_m3C902735BE731EE30AC1185E7AEF6ACE7A9D9CC7;
extern const uint32_t g_rgctx_O_t97F957C67DF265774019B216287D7728D81E92FC;
extern const uint32_t g_rgctx_Service_2_ProcessRequest_mA80BD75B70DA66505D31B082C923C9603575A867;
extern const uint32_t g_rgctx_Func_2_tDD9CB495EF202BFF577868F21285372DBA56776F;
extern const uint32_t g_rgctx_Func_2_Invoke_m800B76BD6A3A9603578BE4720F44FC60CAB79985;
extern const uint32_t g_rgctx_Service_2_SendResp_mBD2E36D861A8611F34DD5B4936135B27AF2950BC;
extern const uint32_t g_rgctx_Service_2_DestroyService_m1CD8BB6F0D0EAF85EF3E9830F775DDAB9AB2347A;
extern const uint32_t g_rgctx_Client_2_tA254EDBAEBAAF85D4B51A44285CFEB4109713817;
extern const uint32_t g_rgctx_Client_2__ctor_m5285402B12DDA2F62CA32D25AA5E3596122C0FE1;
extern const uint32_t g_rgctx_Service_2_t3AA287DD9B6B04DA6EC74EF0BA7F32CD73F0CE81;
extern const uint32_t g_rgctx_Service_2__ctor_m072151022C2E234B2E92A65A956E8096F16BD123;
extern const uint32_t g_rgctx_Publisher_1_t5E43E88B2C12CE7B5A41BEDF329EC4A59ED19C6C;
extern const uint32_t g_rgctx_Publisher_1__ctor_mD91A206D8EF07C50E67A57D516FDFEA5A771E23A;
extern const uint32_t g_rgctx_Subscription_1_tD83D757CB153F0BDB4C7185AF2C80E23500D9F6C;
extern const uint32_t g_rgctx_Subscription_1__ctor_m7BDDE8DB1B59CFC0FF9BEAE496BA4ABEBA9BB43B;
extern const uint32_t g_rgctx_MessageTypeSupportHelper_GetTypeSupportHandle_TisT_tFD9E8CC6919E43DCBA039F6CC22B0F09B5E2159C_m20CDB3E347D1A1B808532D685B67249975A0DAD1;
extern const uint32_t g_rgctx_Publisher_1_Dispose_mC408D1CAA37BED45FC0BAD038294F095355B120E;
extern const uint32_t g_rgctx_Publisher_1_DestroyPublisher_m13943201C4C2F62006A1AC8CF9C6BCFDAEE1E2A6;
extern const uint32_t g_rgctx_T_tFD9E8CC6919E43DCBA039F6CC22B0F09B5E2159C;
extern const uint32_t g_rgctx_Subscription_1_CreateMessage_mD7E767D0B9FE75140D44A7BA04FF81166DFF2DC3;
extern const uint32_t g_rgctx_Subscription_1_TriggerCallback_m8FCA7ED54340136E6745767F60E3F8F30FE40B78;
extern const uint32_t g_rgctx_Activator_CreateInstance_TisT_t414A14F880D9D241DE7ED9CB2635BBA5029E1E73_m2BFDBE91760E4C0DD5BFF4B1CE4D572215A9AD78;
extern const uint32_t g_rgctx_T_t414A14F880D9D241DE7ED9CB2635BBA5029E1E73;
extern const uint32_t g_rgctx_Action_1_tE590EAB6EB6C90688875FA767700BDA739CBC997;
extern const uint32_t g_rgctx_Action_1_Invoke_mF1B4B090A7F87B78E476027C15DE1F66EA9664A8;
extern const Il2CppRGCTXConstrainedData g_rgctx_T_t414A14F880D9D241DE7ED9CB2635BBA5029E1E73_IDisposable_Dispose_m3C902735BE731EE30AC1185E7AEF6ACE7A9D9CC7;
extern const uint32_t g_rgctx_Subscription_1_DestroySubscription_m1BEF56757980C9E7472AFA678B0485F621914B3B;
static const Il2CppRGCTXDefinition s_rgctxValues[113] = 
{
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Client_2_get_PendingRequests_m643B134432F67597114499261A152DE0F2A25E27 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Dictionary_2_tE989C858384B8D0D6F4620EB2A23F5DC9D2FB016 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Dictionary_2__ctor_m23F6CDC70CD9FF4AC1DC48FC0248EADD99ECAEFC },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_PendingTasksView_t561AF86AA6C777ADB834969FC7E241318C092DB3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_PendingTasksView__ctor_m1685804681873522D2BC905887E827A566F039D1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Client_2_set_PendingRequests_mB9346A168CB74C74539511AD403D762ECC108EF7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_MessageTypeSupportHelper_GetTypeSupportHandle_TisI_t2704C0EA2CBBD7A3B3F9E241FB3106CCA4A56833_mBEB013786FA7A5E2A5236418923352CC74F61510 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Client_2_Dispose_mD7924BB05F7333C3A5265D0CA6BE60A88E162234 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Client_2_DestroyClient_m48E8529593DD7965DB42025FF2A237BFD2B40053 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Dictionary_2_get_Values_mD9171283695B6A0A94702DB5A70C5B763D64B714 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ValueCollection_tCDE1443068B5D707A0939236AF73CD79D2592AA5 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ValueCollection_GetEnumerator_m854FFBECAECAFBCD87282C58CC8E7FFEF8CC571E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerator_get_Current_mC332F3641B048A4503F6C8D1C785F4697F987B91 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TaskCompletionSource_1_t57ABBDF88A7677E7BEE30575F3057CDF4F5E99AF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TaskCompletionSource_1_TrySetException_m274D7438F78DE17400E8C7712DA14A2549F7F18B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerator_MoveNext_mEBA7A595A49D6A240BAB429B36083022B8DCBE57 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Enumerator_tD678E46068093C51565347AE3ED7733DB6401610 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_Enumerator_tD678E46068093C51565347AE3ED7733DB6401610_IDisposable_Dispose_m3C902735BE731EE30AC1185E7AEF6ACE7A9D9CC7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Dictionary_2_Clear_mF6A6E8213DAED7375F9884CCAC5F8C52B1EB732D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Activator_CreateInstance_TisO_t39A0AFA8FF666E1B04C63BA9605E380DD82AE6EE_m0FBD53BDD4E0FDB965260A86A1D79AA31689E405 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_O_t39A0AFA8FF666E1B04C63BA9605E380DD82AE6EE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Client_2_ProcessResponse_m30F5F049593C7CC8788D81C856A64A1582DCEEF8 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Dictionary_2_TryGetValue_m6F2465046AA60AD329DE87272870C8A2DE747066 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Dictionary_2_Remove_mA32DAB54878807F1598C20A013A9CD187509D50B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TaskCompletionSource_1_SetResult_mCDE41BFE454AA86CC21E45EA422654A090465DC0 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_I_t2704C0EA2CBBD7A3B3F9E241FB3106CCA4A56833 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TaskCompletionSource_1_get_Task_mDD2E6A200ABD90D7E24433B68B3B6F9C5A769002 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ValueTuple_2_t9D7D7C943A814D65B5DEADA4BE0C3CFBC86C9B10 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ValueTuple_2__ctor_mF69F7B4F85D4140D486055CD2D6B4736371FCF50 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Dictionary_2_Add_m9EF23CF1A616BDBF7CF01957EC5BC68199D6EB6A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Client_2_CallAsync_m32CA31392F8303B17EE97E67D97B56FFC7040AA8 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Task_1_t3C31A53568B7B70D95DB29FC84C6040AF357E274 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Task_1_get_Result_m42FD68BC617E6C326B41D00BFF2B90CE28D47BEF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Client_2_CallAsync_m1E9321652BC276C63E065E5572C5EF24B8FE24FD },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Client_2_SendRequest_m9299E46983A32C2F29F0B086DBA0BCB4386D5976 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TaskCompletionSource_1__ctor_m180DA83536E0E6D0CD6B9C44B5ABEF9BB8F10CB2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Client_2_RegisterSource_m527DBAD60CFDE15C2DA9A4B612B3699C22E020A0 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__DisplayClass34_0_tC8DF85CAB49EB0C5CA2C6913D559B8DE57AD9BBC },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass34_0__ctor_mBF5EF29D4476CA8680FD2CC981C4110D76FC212F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass34_0_U3CCancelU3Eb__0_m386F863C7AFAA363F7DC21DC0AA151F768BD979E },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_tB3740AD980E55A762C34101BF1018072ADB35340 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2__ctor_m66AD818BB3DB5D66CD20994994985C49CC0608FE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerable_First_TisKeyValuePair_2_t1BE0C7CCDBD60798AC9F7BDE96957CB0622413B1_m97265DA915E41C09287B6AD63F97B3D588AADA00 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_KeyValuePair_2_get_Key_m48DF1B7AF4D0EF2A88285A6451458C6AD708DFF5 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_KeyValuePair_2_get_Value_mDF23ECBAB1DA21654DEACBA331241E16FAD8B641 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TaskCompletionSource_1_SetCanceled_m21ADD1007560CB85E6F1D3632A725004266CE1C2 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IReadOnlyDictionary_2_tCDE434B6A808005C256633F25729ED47013EF4CB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IReadOnlyDictionary_2_get_Item_m0488794FAAA0FCC916A4DD21CD136EA1E2766D9D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_PendingTasksView_get_Item_m119B2F585A2DACC2C1D859E125B4ACA718C9A829 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IReadOnlyDictionary_2_get_Keys_mCC5E8DA3419BA83DF7F88644E3D77CE9B3C96091 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IReadOnlyDictionary_2_get_Values_m97E53A14E0DECADECE0FC19F58B31471213C8BAC },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec_t9CD08E916870455DD97341B73FAA9F6DEAAB2B35 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec_U3Cget_ValuesU3Eb__7_0_m27B98C96359254502EBAFBEC3DD640B5B2CEA44E },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_tA532553EFD7F6DB9F23C24194C4D7A47C14E1E9D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2__ctor_m9C7B7B8812DC1B02065977CB3CFF01777AB52BD1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerable_Select_TisValueTuple_2_t0F2B1EF14D809DCDE6B0DF3CCFAB2BF8AE4524E9_TisTask_1_t3DA3020627E29BB85C8F2F102BED98FD0766AB62_m50C33AD03CEBDB6BDE53C6E361A9D2121CAEA513 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerable_ToArray_TisTask_1_t3DA3020627E29BB85C8F2F102BED98FD0766AB62_m11F41C6817FADEB039E7F4B615041220FA564B39 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_PendingTasksView_get_Values_m2DE7F1CCAC291A9BB62810D7185689F5AC90D7A2 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IReadOnlyCollection_1_t3640AA283DD8874DE3F20D6F477AD21CC4CEA3AA },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IReadOnlyCollection_1_get_Count_m441C3CFFC6222123C34BC405E4DA16066C8C9637 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IReadOnlyDictionary_2_ContainsKey_mA4CC7C3DC52CD932884CDAEDA4FB6EAF28243E39 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IReadOnlyDictionary_2_TryGetValue_mEC2609E0195E31880A088EAEDBAF4741A2457513 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_PendingTasksView_TryGetValue_mCD5FF5C770B05EB2913D9709D7CAB5AC0EB2FBB3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec_U3CGetEnumeratorU3Eb__17_0_m343D91876E35067CBF7E3811066601528E1E8721 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_t26955297C3BDEFB20F0D3C60D73A61351BFDBD79 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2__ctor_m25B4A759F773D2C5FB08D2AA2A77F434730EA6E1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerable_Select_TisKeyValuePair_2_t0F5955AFDD55532F288940DFA045C67196D676E9_TisKeyValuePair_2_t88E7FE13E954AC0966CBD37AD1F91719EDF7F447_m68B1389EE9A30B7BA8D205EFA2D5BF13421A2834 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerable_ToArray_TisKeyValuePair_2_t88E7FE13E954AC0966CBD37AD1F91719EDF7F447_m0BB9B1A4CB715B1EC60F7DB4FE952B0A7A303E61 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerable_AsEnumerable_TisKeyValuePair_2_t88E7FE13E954AC0966CBD37AD1F91719EDF7F447_mAA7A092D6A3BA239479D3B22491EE549A00260CA },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_t7163918093045759DC1134987396D7CD091B4CE9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerable_1_GetEnumerator_mA29D68D4C96E9AA9ABE9061BF379D9D57EAE860E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_PendingTasksView_GetEnumerator_m8851E150A853E1D6E9F7F79B379D7B410C4C4BB7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec_U3CSystem_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CSystem_Int64U2CSystem_Threading_Tasks_TaskU3EU3E_GetEnumeratorU3Eb__19_0_m87490045AF850C9F7AC00EB4E1A3AD110BF98272 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_tBD3F86868DCDB18C03EA9EACE274BB41D2A9920B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2__ctor_m3EE23ADFC7C46F591FD321BBC7F10BC753EB82A5 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerable_Select_TisKeyValuePair_2_t0F5955AFDD55532F288940DFA045C67196D676E9_TisKeyValuePair_2_tD6E25477E4ECFB5932C331E0E4F9557DEA2D4C59_m9AC9343315152E35E336A765BAEC24C9BD001D59 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec_t83FDA3B8BA88E165E4BDEE5D6625F455A4FB7DAB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__ctor_m42AE28171CCE5930824BC970B140CDF1870375C8 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec_t83FDA3B8BA88E165E4BDEE5D6625F455A4FB7DAB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_KeyValuePair_2_get_Key_mB837C38A838945E5D95198C7219EA0C2FD60C6D2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_KeyValuePair_2_get_Value_mBF3F89CC97339DFB149A365E923148156574CDC9 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_KeyValuePair_2_tA06FDB77890F1D58B3A1B4BC0A907CAE87526F8B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_KeyValuePair_2__ctor_mF29F033367BAFEF26F3850CF0353E0497BC43BD0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_KeyValuePair_2_get_Value_mF572B566446782BF18B6AADA55A820B18B02B480 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Activator_CreateInstance_TisI_t2F9E65E1BBFE2F10144DFE0CC614CE91ECAD10C1_m8E1B1000A9DAAE3D06DA85109F8839F1E727C141 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_I_t2F9E65E1BBFE2F10144DFE0CC614CE91ECAD10C1 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_I_t2F9E65E1BBFE2F10144DFE0CC614CE91ECAD10C1_IDisposable_Dispose_m3C902735BE731EE30AC1185E7AEF6ACE7A9D9CC7 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_O_t97F957C67DF265774019B216287D7728D81E92FC },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Service_2_ProcessRequest_mA80BD75B70DA66505D31B082C923C9603575A867 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_tDD9CB495EF202BFF577868F21285372DBA56776F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_m800B76BD6A3A9603578BE4720F44FC60CAB79985 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Service_2_SendResp_mBD2E36D861A8611F34DD5B4936135B27AF2950BC },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Service_2_DestroyService_m1CD8BB6F0D0EAF85EF3E9830F775DDAB9AB2347A },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Client_2_tA254EDBAEBAAF85D4B51A44285CFEB4109713817 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Client_2__ctor_m5285402B12DDA2F62CA32D25AA5E3596122C0FE1 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Service_2_t3AA287DD9B6B04DA6EC74EF0BA7F32CD73F0CE81 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Service_2__ctor_m072151022C2E234B2E92A65A956E8096F16BD123 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Publisher_1_t5E43E88B2C12CE7B5A41BEDF329EC4A59ED19C6C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Publisher_1__ctor_mD91A206D8EF07C50E67A57D516FDFEA5A771E23A },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Subscription_1_tD83D757CB153F0BDB4C7185AF2C80E23500D9F6C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Subscription_1__ctor_m7BDDE8DB1B59CFC0FF9BEAE496BA4ABEBA9BB43B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_MessageTypeSupportHelper_GetTypeSupportHandle_TisT_tFD9E8CC6919E43DCBA039F6CC22B0F09B5E2159C_m20CDB3E347D1A1B808532D685B67249975A0DAD1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Publisher_1_Dispose_mC408D1CAA37BED45FC0BAD038294F095355B120E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Publisher_1_DestroyPublisher_m13943201C4C2F62006A1AC8CF9C6BCFDAEE1E2A6 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tFD9E8CC6919E43DCBA039F6CC22B0F09B5E2159C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Subscription_1_CreateMessage_mD7E767D0B9FE75140D44A7BA04FF81166DFF2DC3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Subscription_1_TriggerCallback_m8FCA7ED54340136E6745767F60E3F8F30FE40B78 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Activator_CreateInstance_TisT_t414A14F880D9D241DE7ED9CB2635BBA5029E1E73_m2BFDBE91760E4C0DD5BFF4B1CE4D572215A9AD78 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t414A14F880D9D241DE7ED9CB2635BBA5029E1E73 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Action_1_tE590EAB6EB6C90688875FA767700BDA739CBC997 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Action_1_Invoke_mF1B4B090A7F87B78E476027C15DE1F66EA9664A8 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_T_t414A14F880D9D241DE7ED9CB2635BBA5029E1E73_IDisposable_Dispose_m3C902735BE731EE30AC1185E7AEF6ACE7A9D9CC7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Subscription_1_DestroySubscription_m1BEF56757980C9E7472AFA678B0485F621914B3B },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_ros2cs_core_CodeGenModule;
const Il2CppCodeGenModule g_ros2cs_core_CodeGenModule = 
{
	"ros2cs_core.dll",
	438,
	s_methodPointers,
	1,
	s_adjustorThunks,
	s_InvokerIndices,
	0,
	NULL,
	11,
	s_rgctxIndices,
	113,
	s_rgctxValues,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
