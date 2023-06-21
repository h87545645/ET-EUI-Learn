#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		void* params[4] = { &p1, &p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5<T1*, T2, T3, T4, T5>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		void* params[5] = { p1, &p2, &p3, &p4, &p5 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { &p1, &p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5<R, T1*, T2, T3, T4, T5>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		R ret;
		void* params[5] = { p1, &p2, &p3, &p4, &p5 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Action`1<System.Exception>
struct Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04;
// ET.ETTask`1<System.Boolean>
struct ETTask_1_tC3B29B37E823D9C66439D79CE23D65BBFE61686F;
// System.Collections.Generic.HashSet`1<System.Action>
struct HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828;
// System.Collections.Generic.List`1<ET.ETTask>
struct List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.Queue`1<ET.ETTask>
struct Queue_1_tD81FB1FE4DD008B5193D0BDAA9B48AEDE8DD41A4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// ET.ETTask[]
struct ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// ET.ETCancellationToken
struct ETCancellationToken_tACA8F146EDE95371894D92DF0FD89C07C08886E1;
// ET.ETTask
struct ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// ET.KcpLog
struct KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F;
// ET.KcpOutput
struct KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// ET.MonoBridge
struct MonoBridge_t0C781914E36C070562FDB6F992550A86C20923B5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// ET.ETTaskHelper/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tC12BA27A3BA3FD537DF6E1517A54731ACAE8E913;
// ET.ETTaskHelper/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t683F5DF1ABBC6076EC981A7D758038E5F5001048;
// ET.ETTaskHelper/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_tBFD52C26745A10D6A91728129D308A5FE9B05BFB;
// ET.ETTaskHelper/<WaitAll>d__6
struct U3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF;
// ET.ETTaskHelper/<WaitAll>d__7
struct U3CWaitAllU3Ed__7_t42A9EA8D454E034E1F4930E62C69FAF897600C75;
// ET.ETTaskHelper/<WaitAny>d__3
struct U3CWaitAnyU3Ed__3_t8677EFA57835BF586F6C9B558141A68766DB0665;
// ET.ETTaskHelper/CoroutineBlocker
struct CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A;
// ET.Mono2ETEventManager/ScrollRectDir
struct ScrollRectDir_t19028A127EB20BA751C93A66B996D53E89E37F3F;
// ET.ETTaskHelper/<>c__DisplayClass3_0/<<WaitAny>g__RunOneTask|0>d
struct U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_tBBC4427F5B54164F2F3B42D44912D3FD810ABF62;
// ET.ETTaskHelper/<>c__DisplayClass6_0/<<WaitAll>g__RunOneTask|0>d
struct U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952;
// ET.ETTaskHelper/<>c__DisplayClass7_0/<<WaitAll>g__RunOneTask|0>d
struct U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_t215012C959CD172F79B53DB8FD8AF7C94461365A;

IL2CPP_EXTERN_C RuntimeClass* CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Kcp_t429AB84FF46AA83D15D3DA2EF4C9CE96BF648B30_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mono2ETEventManager_tCABDE8E4852BCC5C5E02FD49A6D36AB4892A7271_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScrollRectDir_t19028A127EB20BA751C93A66B996D53E89E37F3F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_t215012C959CD172F79B53DB8FD8AF7C94461365A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_tBBC4427F5B54164F2F3B42D44912D3FD810ABF62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_0_tC12BA27A3BA3FD537DF6E1517A54731ACAE8E913_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass6_0_t683F5DF1ABBC6076EC981A7D758038E5F5001048_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass7_0_tBFD52C26745A10D6A91728129D308A5FE9B05BFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral02A29BDC20BCE88DC132CE04A01DD7C3469EA8EB;
IL2CPP_EXTERN_C String_t* _stringLiteral14B9C4ED649A12F3286872BC02BF44694FF70613;
IL2CPP_EXTERN_C String_t* _stringLiteralF5B17BC8CAFB0366DD8D8EA29F1A2C07CCE73DC5;
IL2CPP_EXTERN_C String_t* _stringLiteralFCE88E0B4651EFA0D8F7973A07C513EC28038096;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_t215012C959CD172F79B53DB8FD8AF7C94461365A_m27CDC64364917CB12D38E1F518D90ABE0D41AEC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952_m7BBF15F324CD989EAAAC7E26FEF23747228CC8D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_tBBC4427F5B54164F2F3B42D44912D3FD810ABF62_mC971D6B74BA54E773FEE72E822BCF0B21E5C12EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncETVoidMethodBuilder_Start_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_t215012C959CD172F79B53DB8FD8AF7C94461365A_mE119FFAF6EF557CD550DF1496829BA07BDEB6D74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncETVoidMethodBuilder_Start_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952_mF703CC49BFF53BD376F1D2C4A00507A237512E6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncETVoidMethodBuilder_Start_TisU3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_tBBC4427F5B54164F2F3B42D44912D3FD810ABF62_mD6BDA130DCC9EC8C27701B1A2F07A1B40EE35F42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ETAsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF_mC57852BDD2AAF841B61F73D4DC1445AF7DE956F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ETAsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CWaitAllU3Ed__7_t42A9EA8D454E034E1F4930E62C69FAF897600C75_m2590B34D5088AE2FA43296F11A7056C28A971258_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ETAsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CWaitAnyU3Ed__3_t8677EFA57835BF586F6C9B558141A68766DB0665_mEA0E3032AA1BB064DE097AF7E31C410AEFA73708_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ETAsyncTaskMethodBuilder_1_SetException_m4B20AE5BD8F1E608AAD3970CB6C2985ACB4D6B08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ETAsyncTaskMethodBuilder_1_SetResult_mBAD14F0004B857E596693C614C5B29587E97021C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ETVoid_Coroutine_m7D69369538267F547E8D8AF8467A2806C5F6E6DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ETVoid_OnCompleted_mE2A013466ABE3DE81D7193A13C5A88F902274170_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ETVoid_UnsafeOnCompleted_mBA7A78A207BDC8D1E2AD8B0D957316B36D224213_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ETVoid_get_IsCompleted_m6EC6117D7E6C71F1ABDA3DD9BFA990560A812572_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m2CF219B461F67CCD06F99FF3AFDEADC48A1BD26C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m8E225A51A6FD5B638EB3D77D976A473FB1C010B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mDE3732995809E5A4FABC3ACE34ADB9EDA62A6B09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KcpLog_BeginInvoke_m1712EEC7A9E73AC66BC49E0420EA58DD3B1BD9DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KcpLog_EndInvoke_m16B40206957AFDE3E0DA26112CC4BC3D6E3C77A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KcpLog_Invoke_mF30BC38D82257CB8527D6E2CBCBAA2081B5FC074_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KcpLog__ctor_m6121C293C59A8EA0CAE5913857B1396DBFC0CDC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KcpOutput_BeginInvoke_m530C0B87F4EB9F8B4883975895FF9E8D09FF65EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KcpOutput_EndInvoke_mE9A16D749003A839866D6DE9A11DC52C47C83D24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KcpOutput_Invoke_m0D17200A85788343ECCC96D489F76518974662A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KcpOutput__ctor_m352C858407C59680A6115553DB22CF7DBD0EC979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_KcpCheck_mFF5699B461298AC1FC2BDDB193A8B265C42A5B11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_KcpCreate_mFB6C10BC1F2873F05BA660C3627CC9C8D454F925_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_KcpFlush_m0D37EEA2AAF1E2B7445CCD3ADC0CBBF9DB909283_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_KcpGetconv_m75E390D675FD17CE5129D2E92EBAB2A3C7744B0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_KcpInput_mDEAA6D3D2FEC0B5472CB3FAE978ED5DD9F049E8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_KcpNodelay_mC659F51BEF21E59DC93BB569DFB20B030F8BEBC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_KcpPeeksize_m4E98089F13E28D997C53B9F43318E1A378C2577D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_KcpRecv_m4A8EADD4666985339638B265B14D5C03D3BF77AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_KcpRelease_m9942274BE8E5A2DCA150958CF8563D5229A06164_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_KcpSend_m109609A727F084054004E1F15BC55EC65D4F86AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_KcpSetLog_m4F59E7E9344EFC7217B9C84FE0DFEF2EE0B5EE25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_KcpSetminrto_mEB93821BF191ACBBBCC1E7918E45B71F1ED13903_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_KcpSetmtu_m627959E37515A9F77BC31566CAA74816C187192F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_KcpSetoutput_m650A6F5A616A162B7F488F1F95A4FC3270EAC628_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_KcpUpdate_m4B32869D5B5DD50FFEA8C80760FEEC026A7085AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_KcpWaitsnd_m069B8A91826334FB50024D0A584E05A50AFAEB91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_KcpWndsize_m76F69DCF04008E654B49358FDD4FD8D571E9D514_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_ikcp_check_m622BAB3EF82B3FA0D37104F8F36F075F47EACD2C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_ikcp_create_m65B289D9825C3E8701AAF805408A5C089A16AD0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_ikcp_flush_m379F0AB1930C706120A548693C76BB8439108F7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_ikcp_getconv_m7CFD0C1FEF4825D838B385697A49B61A9D3919F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_ikcp_input_mD236CC30373194C4027A7BD6E2561115DB933127_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_ikcp_nodelay_m2AA1F18619F35C9787E1E849E2856BFDBA7AAB54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_ikcp_peeksize_mF034ED89B138DB85D35CF6F55AE701F9A6A26A71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_ikcp_recv_m4282CB4E958BB4A5802CE6FDC8DB4BD496B78996_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_ikcp_release_mFEDEE6822FB19DD4DBA737A9530D29D8AA7CE7BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_ikcp_send_mC9AAFA8AC4B349A97A368AFA829D77E55C8682A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_ikcp_setlog_m15CF697BD5FBF75AA0C6D0E1D3A8E88846D56A9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_ikcp_setminrto_m6BA2CC874C011FD9ADF9B6D324114B074BED1E3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_ikcp_setmtu_m603F2EA8751291C312C84A8C967E8D576ABED42B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_ikcp_setoutput_m641E9841DD1F17DE384A86F91F1B76E4CE3BB900_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_ikcp_update_mFF3FA1FF289B9117348C6790BA46AF52E0760E29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_ikcp_waitsnd_mB8BCFAC87034508D3392ADDA415892C4AE41B4F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_ikcp_wndsize_m32F6D50A19B5381B060FAF4A24C8859BAF7EB3CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m058832077A5E305D1A30987EDF5EF94ABB118AB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m098A3FBEC846D65A6FA1C497181C458CB65EC608_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Mono2ETEventManager_OnScrollRectDir_mC90AAF4DAED953859BB61693A7B9BBB30226B097_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Mono2ETEventManager_add_scrollDir_mA8AB570316A87AF48979352473C713619C8B974B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Mono2ETEventManager_remove_scrollDir_mB14C04305DD537860EADF7CECFDE2AE8A81D8901_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonoBridge_OnCollisionEnter2D_mB941F28DB3E5181E8CCC13D46F533201D4948EDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonoBridge_OnCollisionExit_mDB619F44CABCAA7DB88CCEAFE99F77F9FE111B4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonoBridge_OnCollisionStay_m53CBC3AEEDF5401ED720267DAB056DA8528294EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonoBridge_OnTriggerEnter2D_m4BD8B4BC826AF231619EFF654FCF19BAA18F3DB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonoBridge_OnTriggerExit_mB4CE59E6BAC17C82060AB9EC74ABDEED0DF2D847_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonoBridge_OnTriggerStay_m5C51DAEE774C9BD51246B3621E768B0A3583708B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonoBridge__ctor_mCBF48C18C65DF11AA68A76C1A3D6BB3E1179ECEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recast_RecastClear_m473B8D51FA6D5E6F2E0779D41ADC34AE02FF3590_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recast_RecastFindNearestPoint_m11C47CB1E714AEF02D2C1A46C31EC9E835C5DB4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recast_RecastFindNearestPoint_m626C640DA9A8ADD1935B65905352F0C516A5D48B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recast_RecastFindRandomPointAroundCircle_m56E946B64540AEB84DBB4115045F5F4BE8AB9D56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recast_RecastFindRandomPointAroundCircle_m7A9A846FF4C2B9A4EA0E998BD5826D8D025CBA4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recast_RecastFindRandomPoint_m6BBAAC98659A9149E29F8BA6BE36DAA34DCEC5B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recast_RecastFindRandomPoint_mE48982AD91CF18D8AF76BEDB8958CE8F0F2BBF13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recast_RecastFind_m392F707F2F5368B22A882CE64BA38AE22E3642E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recast_RecastFind_mCBA38176FD73663D69B407633661CCEE4DCF29F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recast_RecastGetLong_mDD98E4DB71AF743043A54422A7B7ED02988811FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recast_RecastGet_m467619DA580236F07A592226572C394AFA40F497_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recast_RecastLoadLong_m2CB9D37282F4678187E58DD460DD58AFFA103E38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recast_RecastLoad_mB4EE23761CD49A97B85FA7639E4DF250BF8FA623_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScrollRectDir_BeginInvoke_m705723F679DAFEE7D02E7FC9241A6DB1134FD8B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScrollRectDir_EndInvoke_mC77E0F783C8E494BEF719AEE61140020E0934EA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScrollRectDir_Invoke_mCB06AE3B90B6B1799617A975E4FFEBEAC28038C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScrollRectDir__ctor_m6E69AE351DC0A0D52F97E92C3E46E3E57578AF0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_MoveNext_m8851E58BD5AA80E86B6E8F3745AC3BE04B00ECA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_MoveNext_mE6E8D66C93025FD6239EDB86C098A5214F652D73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_SetStateMachine_m77418E23AB1D2E544AC54CEE3CCEE6C313FECA88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_SetStateMachine_mCF501DE82C7EE07B063C4A75C71AC5245D8F594E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed__ctor_m957D17FCF8F99563E57F6F044773A130A14175F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed__ctor_mDBB7DE4CD3AD6D46837783FFF4BAB8A7B00D2BFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_MoveNext_m72B4D2A088FCB3B4D37B9C87787C8AB28D12CBAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_SetStateMachine_m0996420621D0CDAE6BD0B733243C8332C1C53314_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed__ctor_mFF81D6F270E5BD4E8D85DDC479AF0D90DF19D2AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3CWaitAnyU3Eg__RunOneTaskU7C0_m5DD7D1B5E12BEB782F1A2F51D15751E4097AE58F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0__ctor_mB78185AE3661C0859D1DA4C648F12E1838DACB9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass6_0_U3CWaitAllU3Eg__RunOneTaskU7C0_mCE1182ADD6A9B03DEE4481D7556D7A64C9BC7AFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass6_0__ctor_mB4BE8E3414AAE4FBCECE1D4E864D610D57F70C3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass7_0_U3CWaitAllU3Eg__RunOneTaskU7C0_m4DE07DB51B9BBADB87B80C5BA20ADFD11C4264EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass7_0__ctor_mB1A6E483E0D64CB11B7D3E223DA45868106D2B5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitAllU3Ed__6_MoveNext_mC67606D6615193A5AD14D47F4AA3309A557F0CE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitAllU3Ed__6_SetStateMachine_m8F2550CD0C39FBA84AF251340E455AE3C5EEF1E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitAllU3Ed__6__ctor_mAE0DF5005E1BC10B8C762B1A15F9D26FDE13D62B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitAllU3Ed__7_MoveNext_mC95FC8D1B850CC8694399E5759C1E281C0A17D2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitAllU3Ed__7_SetStateMachine_m6E8218E47D96B5D42555FBAE7983D4EA4EC68533_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitAllU3Ed__7__ctor_mC9D64BD3E446DD25B5D1A7EE63D5A9971C7D04E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitAnyU3Ed__3_MoveNext_m5BB1B329D9D7C1DD4166F3A774896D5972E9B67E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitAnyU3Ed__3_SetStateMachine_m906E8171935A307021743BEF32EB6ECEE6426DD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitAnyU3Ed__3__ctor_m4A0835601CE32737F9FE30330214A49FFD10B1D4_RuntimeMethod_var;
struct ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<ET.ETTask>
struct List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8* ____items_1;
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

// ET.ETCancellationToken
struct ETCancellationToken_tACA8F146EDE95371894D92DF0FD89C07C08886E1  : public RuntimeObject
{
	// System.Collections.Generic.HashSet`1<System.Action> ET.ETCancellationToken::actions
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___actions_0;
};

// ET.ETTask
struct ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9  : public RuntimeObject
{
	// System.Boolean ET.ETTask::fromPool
	bool ___fromPool_2;
	// ET.AwaiterStatus ET.ETTask::state
	uint8_t ___state_3;
	// System.Object ET.ETTask::callback
	RuntimeObject* ___callback_4;
};

// ET.Kcp
struct Kcp_t429AB84FF46AA83D15D3DA2EF4C9CE96BF648B30  : public RuntimeObject
{
};

// ET.Mono2ETEventManager
struct Mono2ETEventManager_tCABDE8E4852BCC5C5E02FD49A6D36AB4892A7271  : public RuntimeObject
{
};

// ET.Recast
struct Recast_tD185A230EB6DC6FEE5B363E529CC435229499B01  : public RuntimeObject
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

// ET.ETTaskHelper/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tC12BA27A3BA3FD537DF6E1517A54731ACAE8E913  : public RuntimeObject
{
	// ET.ETTaskHelper/CoroutineBlocker ET.ETTaskHelper/<>c__DisplayClass3_0::coroutineBlocker
	CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* ___coroutineBlocker_0;
};

// ET.ETTaskHelper/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t683F5DF1ABBC6076EC981A7D758038E5F5001048  : public RuntimeObject
{
	// ET.ETTaskHelper/CoroutineBlocker ET.ETTaskHelper/<>c__DisplayClass6_0::coroutineBlocker
	CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* ___coroutineBlocker_0;
};

// ET.ETTaskHelper/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_tBFD52C26745A10D6A91728129D308A5FE9B05BFB  : public RuntimeObject
{
	// ET.ETTaskHelper/CoroutineBlocker ET.ETTaskHelper/<>c__DisplayClass7_0::coroutineBlocker
	CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* ___coroutineBlocker_0;
};

// ET.ETTaskHelper/CoroutineBlocker
struct CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A  : public RuntimeObject
{
	// System.Int32 ET.ETTaskHelper/CoroutineBlocker::count
	int32_t ___count_0;
	// System.Collections.Generic.List`1<ET.ETTask> ET.ETTaskHelper/CoroutineBlocker::tcss
	List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101* ___tcss_1;
};

// ET.ETAsyncTaskMethodBuilder`1<System.Boolean>
struct ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31 
{
	// ET.ETTask`1<T> ET.ETAsyncTaskMethodBuilder`1::tcs
	ETTask_1_tC3B29B37E823D9C66439D79CE23D65BBFE61686F* ___tcs_0;
};

// System.Collections.Generic.List`1/Enumerator<ET.ETTask>
struct Enumerator_t05F9D6B822BE78199481DA0AA4B6B04FCC4968E9 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* ____current_3;
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

// ET.AsyncETVoidMethodBuilder
struct AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203 
{
	union
	{
		struct
		{
		};
		uint8_t AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203__padding[1];
	};
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// ET.ETVoid
struct ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 
{
	union
	{
		struct
		{
		};
		uint8_t ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38__padding[1];
	};
};

// ET.EventType.FrogCollisionEnter2D
struct FrogCollisionEnter2D_tA8E9452D0B54DAE49CBEB1227327E0C6CB74C4E4 
{
	// System.Int64 ET.EventType.FrogCollisionEnter2D::unitId
	int64_t ___unitId_0;
	// System.Boolean ET.EventType.FrogCollisionEnter2D::isUp
	bool ___isUp_1;
	// System.Boolean ET.EventType.FrogCollisionEnter2D::isLeft
	bool ___isLeft_2;
};
// Native definition for P/Invoke marshalling of ET.EventType.FrogCollisionEnter2D
struct FrogCollisionEnter2D_tA8E9452D0B54DAE49CBEB1227327E0C6CB74C4E4_marshaled_pinvoke
{
	int64_t ___unitId_0;
	int32_t ___isUp_1;
	int32_t ___isLeft_2;
};
// Native definition for COM marshalling of ET.EventType.FrogCollisionEnter2D
struct FrogCollisionEnter2D_tA8E9452D0B54DAE49CBEB1227327E0C6CB74C4E4_marshaled_com
{
	int64_t ___unitId_0;
	int32_t ___isUp_1;
	int32_t ___isLeft_2;
};

// ET.EventType.FrogEnableCamera
struct FrogEnableCamera_tBD4FB7B82CC8A5FD0E00C2193FC740DE56831E83 
{
	// System.Boolean ET.EventType.FrogEnableCamera::enable
	bool ___enable_0;
};
// Native definition for P/Invoke marshalling of ET.EventType.FrogEnableCamera
struct FrogEnableCamera_tBD4FB7B82CC8A5FD0E00C2193FC740DE56831E83_marshaled_pinvoke
{
	int32_t ___enable_0;
};
// Native definition for COM marshalling of ET.EventType.FrogEnableCamera
struct FrogEnableCamera_tBD4FB7B82CC8A5FD0E00C2193FC740DE56831E83_marshaled_com
{
	int32_t ___enable_0;
};

// ET.EventType.FrogGameCameraChange
struct FrogGameCameraChange_tC8573876E14A5082ED6CDD0294C3D48E17B1A0F7 
{
	// System.Int32 ET.EventType.FrogGameCameraChange::Index
	int32_t ___Index_0;
	// System.Int64 ET.EventType.FrogGameCameraChange::UnitId
	int64_t ___UnitId_1;
};

// ET.EventType.FrogLanded
struct FrogLanded_t18F1F3A53751805380593FCE47B5CCD637134B0D 
{
	// System.Int64 ET.EventType.FrogLanded::unitId
	int64_t ___unitId_0;
};

// ET.EventType.GameFinishEvent
struct GameFinishEvent_t497B195DF87E6B155E279155E1CCFF564E1C7BF7 
{
	// System.Int64 ET.EventType.GameFinishEvent::unitId
	int64_t ___unitId_0;
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

// ET.EventType.ScrollRectDirectionEvent
struct ScrollRectDirectionEvent_t840FBD756653EE0D67357959E58E31E1B8B17662 
{
	// System.Int32 ET.EventType.ScrollRectDirectionEvent::dir
	int32_t ___dir_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
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

// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};

// UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B  : public RuntimeObject
{
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_ReusedContacts
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* ___m_ReusedContacts_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContacts
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* ___m_LegacyContacts_8;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_ReusedContacts_7;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_LegacyContacts_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_ReusedContacts_7;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_LegacyContacts_8;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
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

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// ET.ETTaskHelper/<WaitAll>d__6
struct U3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF  : public RuntimeObject
{
	// System.Int32 ET.ETTaskHelper/<WaitAll>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// ET.ETAsyncTaskMethodBuilder`1<System.Boolean> ET.ETTaskHelper/<WaitAll>d__6::<>t__builder
	ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31 ___U3CU3Et__builder_1;
	// ET.ETTask[] ET.ETTaskHelper/<WaitAll>d__6::tasks
	ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8* ___tasks_2;
	// ET.ETCancellationToken ET.ETTaskHelper/<WaitAll>d__6::cancellationToken
	ETCancellationToken_tACA8F146EDE95371894D92DF0FD89C07C08886E1* ___cancellationToken_3;
	// ET.ETTaskHelper/<>c__DisplayClass6_0 ET.ETTaskHelper/<WaitAll>d__6::<>8__1
	U3CU3Ec__DisplayClass6_0_t683F5DF1ABBC6076EC981A7D758038E5F5001048* ___U3CU3E8__1_4;
	// ET.ETTask[] ET.ETTaskHelper/<WaitAll>d__6::<>s__2
	ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8* ___U3CU3Es__2_5;
	// System.Int32 ET.ETTaskHelper/<WaitAll>d__6::<>s__3
	int32_t ___U3CU3Es__3_6;
	// ET.ETTask ET.ETTaskHelper/<WaitAll>d__6::<task>5__4
	ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* ___U3CtaskU3E5__4_7;
	// System.Object ET.ETTaskHelper/<WaitAll>d__6::<>u__1
	RuntimeObject* ___U3CU3Eu__1_8;
};

// ET.ETTaskHelper/<WaitAll>d__7
struct U3CWaitAllU3Ed__7_t42A9EA8D454E034E1F4930E62C69FAF897600C75  : public RuntimeObject
{
	// System.Int32 ET.ETTaskHelper/<WaitAll>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// ET.ETAsyncTaskMethodBuilder`1<System.Boolean> ET.ETTaskHelper/<WaitAll>d__7::<>t__builder
	ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31 ___U3CU3Et__builder_1;
	// System.Collections.Generic.List`1<ET.ETTask> ET.ETTaskHelper/<WaitAll>d__7::tasks
	List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101* ___tasks_2;
	// ET.ETCancellationToken ET.ETTaskHelper/<WaitAll>d__7::cancellationToken
	ETCancellationToken_tACA8F146EDE95371894D92DF0FD89C07C08886E1* ___cancellationToken_3;
	// ET.ETTaskHelper/<>c__DisplayClass7_0 ET.ETTaskHelper/<WaitAll>d__7::<>8__1
	U3CU3Ec__DisplayClass7_0_tBFD52C26745A10D6A91728129D308A5FE9B05BFB* ___U3CU3E8__1_4;
	// System.Collections.Generic.List`1/Enumerator<ET.ETTask> ET.ETTaskHelper/<WaitAll>d__7::<>s__2
	Enumerator_t05F9D6B822BE78199481DA0AA4B6B04FCC4968E9 ___U3CU3Es__2_5;
	// ET.ETTask ET.ETTaskHelper/<WaitAll>d__7::<task>5__3
	ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* ___U3CtaskU3E5__3_6;
	// System.Object ET.ETTaskHelper/<WaitAll>d__7::<>u__1
	RuntimeObject* ___U3CU3Eu__1_7;
};

// ET.ETTaskHelper/<WaitAny>d__3
struct U3CWaitAnyU3Ed__3_t8677EFA57835BF586F6C9B558141A68766DB0665  : public RuntimeObject
{
	// System.Int32 ET.ETTaskHelper/<WaitAny>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// ET.ETAsyncTaskMethodBuilder`1<System.Boolean> ET.ETTaskHelper/<WaitAny>d__3::<>t__builder
	ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31 ___U3CU3Et__builder_1;
	// ET.ETTask[] ET.ETTaskHelper/<WaitAny>d__3::tasks
	ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8* ___tasks_2;
	// ET.ETCancellationToken ET.ETTaskHelper/<WaitAny>d__3::cancellationToken
	ETCancellationToken_tACA8F146EDE95371894D92DF0FD89C07C08886E1* ___cancellationToken_3;
	// ET.ETTaskHelper/<>c__DisplayClass3_0 ET.ETTaskHelper/<WaitAny>d__3::<>8__1
	U3CU3Ec__DisplayClass3_0_tC12BA27A3BA3FD537DF6E1517A54731ACAE8E913* ___U3CU3E8__1_4;
	// ET.ETTask[] ET.ETTaskHelper/<WaitAny>d__3::<>s__2
	ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8* ___U3CU3Es__2_5;
	// System.Int32 ET.ETTaskHelper/<WaitAny>d__3::<>s__3
	int32_t ___U3CU3Es__3_6;
	// ET.ETTask ET.ETTaskHelper/<WaitAny>d__3::<task>5__4
	ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* ___U3CtaskU3E5__4_7;
	// System.Object ET.ETTaskHelper/<WaitAny>d__3::<>u__1
	RuntimeObject* ___U3CU3Eu__1_8;
};

// ET.ETTaskHelper/<>c__DisplayClass3_0/<<WaitAny>g__RunOneTask|0>d
struct U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_tBBC4427F5B54164F2F3B42D44912D3FD810ABF62  : public RuntimeObject
{
	// System.Int32 ET.ETTaskHelper/<>c__DisplayClass3_0/<<WaitAny>g__RunOneTask|0>d::<>1__state
	int32_t ___U3CU3E1__state_0;
	// ET.AsyncETVoidMethodBuilder ET.ETTaskHelper/<>c__DisplayClass3_0/<<WaitAny>g__RunOneTask|0>d::<>t__builder
	AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203 ___U3CU3Et__builder_1;
	// ET.ETTask ET.ETTaskHelper/<>c__DisplayClass3_0/<<WaitAny>g__RunOneTask|0>d::task
	ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* ___task_2;
	// ET.ETTaskHelper/<>c__DisplayClass3_0 ET.ETTaskHelper/<>c__DisplayClass3_0/<<WaitAny>g__RunOneTask|0>d::<>4__this
	U3CU3Ec__DisplayClass3_0_tC12BA27A3BA3FD537DF6E1517A54731ACAE8E913* ___U3CU3E4__this_3;
	// System.Object ET.ETTaskHelper/<>c__DisplayClass3_0/<<WaitAny>g__RunOneTask|0>d::<>u__1
	RuntimeObject* ___U3CU3Eu__1_4;
};

// ET.ETTaskHelper/<>c__DisplayClass6_0/<<WaitAll>g__RunOneTask|0>d
struct U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952  : public RuntimeObject
{
	// System.Int32 ET.ETTaskHelper/<>c__DisplayClass6_0/<<WaitAll>g__RunOneTask|0>d::<>1__state
	int32_t ___U3CU3E1__state_0;
	// ET.AsyncETVoidMethodBuilder ET.ETTaskHelper/<>c__DisplayClass6_0/<<WaitAll>g__RunOneTask|0>d::<>t__builder
	AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203 ___U3CU3Et__builder_1;
	// ET.ETTask ET.ETTaskHelper/<>c__DisplayClass6_0/<<WaitAll>g__RunOneTask|0>d::task
	ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* ___task_2;
	// ET.ETTaskHelper/<>c__DisplayClass6_0 ET.ETTaskHelper/<>c__DisplayClass6_0/<<WaitAll>g__RunOneTask|0>d::<>4__this
	U3CU3Ec__DisplayClass6_0_t683F5DF1ABBC6076EC981A7D758038E5F5001048* ___U3CU3E4__this_3;
	// System.Object ET.ETTaskHelper/<>c__DisplayClass6_0/<<WaitAll>g__RunOneTask|0>d::<>u__1
	RuntimeObject* ___U3CU3Eu__1_4;
};

// ET.ETTaskHelper/<>c__DisplayClass7_0/<<WaitAll>g__RunOneTask|0>d
struct U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_t215012C959CD172F79B53DB8FD8AF7C94461365A  : public RuntimeObject
{
	// System.Int32 ET.ETTaskHelper/<>c__DisplayClass7_0/<<WaitAll>g__RunOneTask|0>d::<>1__state
	int32_t ___U3CU3E1__state_0;
	// ET.AsyncETVoidMethodBuilder ET.ETTaskHelper/<>c__DisplayClass7_0/<<WaitAll>g__RunOneTask|0>d::<>t__builder
	AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203 ___U3CU3Et__builder_1;
	// ET.ETTask ET.ETTaskHelper/<>c__DisplayClass7_0/<<WaitAll>g__RunOneTask|0>d::task
	ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* ___task_2;
	// ET.ETTaskHelper/<>c__DisplayClass7_0 ET.ETTaskHelper/<>c__DisplayClass7_0/<<WaitAll>g__RunOneTask|0>d::<>4__this
	U3CU3Ec__DisplayClass7_0_tBFD52C26745A10D6A91728129D308A5FE9B05BFB* ___U3CU3E4__this_3;
	// System.Object ET.ETTaskHelper/<>c__DisplayClass7_0/<<WaitAll>g__RunOneTask|0>d::<>u__1
	RuntimeObject* ___U3CU3Eu__1_4;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// ET.KcpLog
struct KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F  : public MulticastDelegate_t
{
};

// ET.KcpOutput
struct KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732  : public MulticastDelegate_t
{
};

// ET.Mono2ETEventManager/ScrollRectDir
struct ScrollRectDir_t19028A127EB20BA751C93A66B996D53E89E37F3F  : public MulticastDelegate_t
{
};

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// ET.MonoBridge
struct MonoBridge_t0C781914E36C070562FDB6F992550A86C20923B5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String ET.MonoBridge::CustomTag
	String_t* ___CustomTag_4;
	// System.Int64 ET.MonoBridge::BelongToUnitId
	int64_t ___BelongToUnitId_5;
	// System.Boolean ET.MonoBridge::IsMyPlayer
	bool ___IsMyPlayer_6;
};

// System.Collections.Generic.List`1<ET.ETTask>
struct List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<ET.ETTask>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// ET.ETCancellationToken

// ET.ETCancellationToken

// ET.ETTask
struct ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_StaticFields
{
	// System.Action`1<System.Exception> ET.ETTask::ExceptionHandler
	Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* ___ExceptionHandler_0;
	// System.Collections.Generic.Queue`1<ET.ETTask> ET.ETTask::queue
	Queue_1_tD81FB1FE4DD008B5193D0BDAA9B48AEDE8DD41A4* ___queue_1;
};

// ET.ETTask

// ET.Kcp
struct Kcp_t429AB84FF46AA83D15D3DA2EF4C9CE96BF648B30_StaticFields
{
	// ET.KcpOutput ET.Kcp::KcpOutput
	KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732* ___KcpOutput_3;
	// ET.KcpLog ET.Kcp::KcpLog
	KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F* ___KcpLog_4;
};

// ET.Kcp

// ET.Mono2ETEventManager
struct Mono2ETEventManager_tCABDE8E4852BCC5C5E02FD49A6D36AB4892A7271_StaticFields
{
	// ET.Mono2ETEventManager/ScrollRectDir ET.Mono2ETEventManager::scrollDir
	ScrollRectDir_t19028A127EB20BA751C93A66B996D53E89E37F3F* ___scrollDir_0;
};

// ET.Mono2ETEventManager

// ET.Recast

// ET.Recast

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.ValueType

// System.ValueType

// ET.ETTaskHelper/<>c__DisplayClass3_0

// ET.ETTaskHelper/<>c__DisplayClass3_0

// ET.ETTaskHelper/<>c__DisplayClass6_0

// ET.ETTaskHelper/<>c__DisplayClass6_0

// ET.ETTaskHelper/<>c__DisplayClass7_0

// ET.ETTaskHelper/<>c__DisplayClass7_0

// ET.ETTaskHelper/CoroutineBlocker

// ET.ETTaskHelper/CoroutineBlocker

// ET.ETAsyncTaskMethodBuilder`1<System.Boolean>

// ET.ETAsyncTaskMethodBuilder`1<System.Boolean>

// System.Collections.Generic.List`1/Enumerator<ET.ETTask>

// System.Collections.Generic.List`1/Enumerator<ET.ETTask>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// ET.AsyncETVoidMethodBuilder

// ET.AsyncETVoidMethodBuilder

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// ET.ETVoid

// ET.ETVoid

// ET.EventType.FrogCollisionEnter2D

// ET.EventType.FrogCollisionEnter2D

// ET.EventType.FrogEnableCamera

// ET.EventType.FrogEnableCamera

// ET.EventType.FrogGameCameraChange

// ET.EventType.FrogGameCameraChange

// ET.EventType.FrogLanded

// ET.EventType.FrogLanded

// ET.EventType.GameFinishEvent

// ET.EventType.GameFinishEvent

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

// ET.EventType.ScrollRectDirectionEvent

// ET.EventType.ScrollRectDirectionEvent

// System.Single

// System.Single

// System.UInt32

// System.UInt32

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// UnityEngine.Collision

// UnityEngine.Collision

// UnityEngine.Collision2D

// UnityEngine.Collision2D

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// ET.ETTaskHelper/<WaitAll>d__6

// ET.ETTaskHelper/<WaitAll>d__6

// ET.ETTaskHelper/<WaitAll>d__7

// ET.ETTaskHelper/<WaitAll>d__7

// ET.ETTaskHelper/<WaitAny>d__3

// ET.ETTaskHelper/<WaitAny>d__3

// ET.ETTaskHelper/<>c__DisplayClass3_0/<<WaitAny>g__RunOneTask|0>d

// ET.ETTaskHelper/<>c__DisplayClass3_0/<<WaitAny>g__RunOneTask|0>d

// ET.ETTaskHelper/<>c__DisplayClass6_0/<<WaitAll>g__RunOneTask|0>d

// ET.ETTaskHelper/<>c__DisplayClass6_0/<<WaitAll>g__RunOneTask|0>d

// ET.ETTaskHelper/<>c__DisplayClass7_0/<<WaitAll>g__RunOneTask|0>d

// ET.ETTaskHelper/<>c__DisplayClass7_0/<<WaitAll>g__RunOneTask|0>d

// UnityEngine.Component

// UnityEngine.Component

// System.MulticastDelegate

// System.MulticastDelegate

// System.Action

// System.Action

// System.AsyncCallback

// System.AsyncCallback

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.Collider

// UnityEngine.Collider

// ET.KcpLog

// ET.KcpLog

// ET.KcpOutput

// ET.KcpOutput

// ET.Mono2ETEventManager/ScrollRectDir

// ET.Mono2ETEventManager/ScrollRectDir

// UnityEngine.Collider2D

// UnityEngine.Collider2D

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// ET.MonoBridge

// ET.MonoBridge
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// ET.ETTask[]
struct ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8  : public RuntimeArray
{
	ALIGN_FIELD (8) ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* m_Items[1];

	inline ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* value)
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
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};


// System.Void ET.AsyncETVoidMethodBuilder::Start<System.Object>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncETVoidMethodBuilder_Start_TisRuntimeObject_mDAF82157F47158156813C55F133D7095999AAB4D_gshared (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* __this, RuntimeObject** ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void ET.AsyncETVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Object,System.Object>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisRuntimeObject_TisRuntimeObject_m7FBC796CCFE1449A93FDBD2D254B3534232714AA_gshared (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* __this, RuntimeObject** ___0_awaiter, RuntimeObject** ___1_stateMachine, const RuntimeMethod* method) ;
// System.Void ET.ETAsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Object,System.Object>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETAsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisRuntimeObject_TisRuntimeObject_m5FC6745E9F78080E789F766B63EE9BA67A07D47A_gshared (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* __this, RuntimeObject** ___0_awaiter, RuntimeObject** ___1_stateMachine, const RuntimeMethod* method) ;
// System.Void ET.ETAsyncTaskMethodBuilder`1<System.Boolean>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETAsyncTaskMethodBuilder_1_SetException_m4B20AE5BD8F1E608AAD3970CB6C2985ACB4D6B08_gshared (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void ET.ETAsyncTaskMethodBuilder`1<System.Boolean>::SetResult(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETAsyncTaskMethodBuilder_1_SetResult_mBAD14F0004B857E596693C614C5B29587E97021C_gshared (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* __this, bool ___0_ret, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void ET.ETTaskHelper/<>c__DisplayClass3_0/<<WaitAny>g__RunOneTask|0>d::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed__ctor_mFF81D6F270E5BD4E8D85DDC479AF0D90DF19D2AE (U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_tBBC4427F5B54164F2F3B42D44912D3FD810ABF62* __this, const RuntimeMethod* method) ;
// ET.AsyncETVoidMethodBuilder ET.AsyncETVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203 AsyncETVoidMethodBuilder_Create_m9CEDA84619E25BAC3C65FA55A7C6A56FF650F200 (const RuntimeMethod* method) ;
// System.Void ET.AsyncETVoidMethodBuilder::Start<ET.ETTaskHelper/<>c__DisplayClass3_0/<<WaitAny>g__RunOneTask|0>d>(TStateMachine&)
inline void AsyncETVoidMethodBuilder_Start_TisU3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_tBBC4427F5B54164F2F3B42D44912D3FD810ABF62_mD6BDA130DCC9EC8C27701B1A2F07A1B40EE35F42 (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* __this, U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_tBBC4427F5B54164F2F3B42D44912D3FD810ABF62** ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203*, U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_tBBC4427F5B54164F2F3B42D44912D3FD810ABF62**, const RuntimeMethod*))AsyncETVoidMethodBuilder_Start_TisRuntimeObject_mDAF82157F47158156813C55F133D7095999AAB4D_gshared)(__this, ___0_stateMachine, method);
}
// ET.ETVoid ET.AsyncETVoidMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 AsyncETVoidMethodBuilder_get_Task_m01D925CDA13749DAF0518204CA06493E8A93EC46 (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* __this, const RuntimeMethod* method) ;
// ET.ETTask ET.ETTask::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* ETTask_GetAwaiter_m18704BF1223130E4441BED1DF784F584052E9F46 (ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* __this, const RuntimeMethod* method) ;
// System.Boolean ET.ETTask::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ETTask_get_IsCompleted_mC46408CF8CDBC0122E679473EDB14A9BA55A13F2 (ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* __this, const RuntimeMethod* method) ;
// System.Void ET.AsyncETVoidMethodBuilder::AwaitUnsafeOnCompleted<ET.ETTask,ET.ETTaskHelper/<>c__DisplayClass3_0/<<WaitAny>g__RunOneTask|0>d>(TAwaiter&,TStateMachine&)
inline void AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_tBBC4427F5B54164F2F3B42D44912D3FD810ABF62_mC971D6B74BA54E773FEE72E822BCF0B21E5C12EF (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* __this, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9** ___0_awaiter, U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_tBBC4427F5B54164F2F3B42D44912D3FD810ABF62** ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203*, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9**, U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_tBBC4427F5B54164F2F3B42D44912D3FD810ABF62**, const RuntimeMethod*))AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisRuntimeObject_TisRuntimeObject_m7FBC796CCFE1449A93FDBD2D254B3534232714AA_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void ET.ETTask::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETTask_GetResult_m4025996962517219AB63CD35458CEE581DF064E6 (ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* __this, const RuntimeMethod* method) ;
// ET.ETTask ET.ETTaskHelper/CoroutineBlocker::WaitAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* CoroutineBlocker_WaitAsync_m73943BDA099AA93BBD5EAEEA957B1FA94706C3DF (CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* __this, const RuntimeMethod* method) ;
// System.Void ET.AsyncETVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncETVoidMethodBuilder_SetException_m7F5356721EF2BCB40149B2F55B8E2590699EBAF5 (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* __this, Exception_t* ___0_e, const RuntimeMethod* method) ;
// System.Void ET.AsyncETVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncETVoidMethodBuilder_SetResult_m290D2A1FF93C5EB907BE4243F0E62E0CA49E760A (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* __this, const RuntimeMethod* method) ;
// System.Void ET.ETTaskHelper/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_mB78185AE3661C0859D1DA4C648F12E1838DACB9F (U3CU3Ec__DisplayClass3_0_tC12BA27A3BA3FD537DF6E1517A54731ACAE8E913* __this, const RuntimeMethod* method) ;
// System.Void ET.ETTaskHelper/CoroutineBlocker::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoroutineBlocker__ctor_mC2DEAA1C928DA22578C4C3F820DD758ECAF79A52 (CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* __this, int32_t ___0_count, const RuntimeMethod* method) ;
// ET.ETVoid ET.ETTaskHelper/<>c__DisplayClass3_0::<WaitAny>g__RunOneTask|0(ET.ETTask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 U3CU3Ec__DisplayClass3_0_U3CWaitAnyU3Eg__RunOneTaskU7C0_m5DD7D1B5E12BEB782F1A2F51D15751E4097AE58F (U3CU3Ec__DisplayClass3_0_tC12BA27A3BA3FD537DF6E1517A54731ACAE8E913* __this, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* ___0_task, const RuntimeMethod* method) ;
// System.Void ET.ETVoid::Coroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETVoid_Coroutine_m7D69369538267F547E8D8AF8467A2806C5F6E6DA (ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38* __this, const RuntimeMethod* method) ;
// System.Void ET.ETAsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<ET.ETTask,ET.ETTaskHelper/<WaitAny>d__3>(TAwaiter&,TStateMachine&)
inline void ETAsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CWaitAnyU3Ed__3_t8677EFA57835BF586F6C9B558141A68766DB0665_mEA0E3032AA1BB064DE097AF7E31C410AEFA73708 (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* __this, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9** ___0_awaiter, U3CWaitAnyU3Ed__3_t8677EFA57835BF586F6C9B558141A68766DB0665** ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31*, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9**, U3CWaitAnyU3Ed__3_t8677EFA57835BF586F6C9B558141A68766DB0665**, const RuntimeMethod*))ETAsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisRuntimeObject_TisRuntimeObject_m5FC6745E9F78080E789F766B63EE9BA67A07D47A_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Boolean ET.ETTaskHelper::IsCancel(ET.ETCancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ETTaskHelper_IsCancel_mDF0D4F9A92B59AC77F15CE6E34F4D13A13C5EC14 (ETCancellationToken_tACA8F146EDE95371894D92DF0FD89C07C08886E1* ___0_self, const RuntimeMethod* method) ;
// System.Void ET.ETAsyncTaskMethodBuilder`1<System.Boolean>::SetException(System.Exception)
inline void ETAsyncTaskMethodBuilder_1_SetException_m4B20AE5BD8F1E608AAD3970CB6C2985ACB4D6B08 (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31*, Exception_t*, const RuntimeMethod*))ETAsyncTaskMethodBuilder_1_SetException_m4B20AE5BD8F1E608AAD3970CB6C2985ACB4D6B08_gshared)(__this, ___0_exception, method);
}
// System.Void ET.ETAsyncTaskMethodBuilder`1<System.Boolean>::SetResult(T)
inline void ETAsyncTaskMethodBuilder_1_SetResult_mBAD14F0004B857E596693C614C5B29587E97021C (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* __this, bool ___0_ret, const RuntimeMethod* method)
{
	((  void (*) (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31*, bool, const RuntimeMethod*))ETAsyncTaskMethodBuilder_1_SetResult_mBAD14F0004B857E596693C614C5B29587E97021C_gshared)(__this, ___0_ret, method);
}
// System.Void ET.ETTaskHelper/<>c__DisplayClass6_0/<<WaitAll>g__RunOneTask|0>d::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed__ctor_mDBB7DE4CD3AD6D46837783FFF4BAB8A7B00D2BFA (U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952* __this, const RuntimeMethod* method) ;
// System.Void ET.AsyncETVoidMethodBuilder::Start<ET.ETTaskHelper/<>c__DisplayClass6_0/<<WaitAll>g__RunOneTask|0>d>(TStateMachine&)
inline void AsyncETVoidMethodBuilder_Start_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952_mF703CC49BFF53BD376F1D2C4A00507A237512E6E (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* __this, U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952** ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203*, U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952**, const RuntimeMethod*))AsyncETVoidMethodBuilder_Start_TisRuntimeObject_mDAF82157F47158156813C55F133D7095999AAB4D_gshared)(__this, ___0_stateMachine, method);
}
// System.Void ET.AsyncETVoidMethodBuilder::AwaitUnsafeOnCompleted<ET.ETTask,ET.ETTaskHelper/<>c__DisplayClass6_0/<<WaitAll>g__RunOneTask|0>d>(TAwaiter&,TStateMachine&)
inline void AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952_m7BBF15F324CD989EAAAC7E26FEF23747228CC8D6 (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* __this, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9** ___0_awaiter, U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952** ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203*, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9**, U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952**, const RuntimeMethod*))AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisRuntimeObject_TisRuntimeObject_m7FBC796CCFE1449A93FDBD2D254B3534232714AA_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void ET.ETTaskHelper/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_mB4BE8E3414AAE4FBCECE1D4E864D610D57F70C3C (U3CU3Ec__DisplayClass6_0_t683F5DF1ABBC6076EC981A7D758038E5F5001048* __this, const RuntimeMethod* method) ;
// ET.ETVoid ET.ETTaskHelper/<>c__DisplayClass6_0::<WaitAll>g__RunOneTask|0(ET.ETTask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 U3CU3Ec__DisplayClass6_0_U3CWaitAllU3Eg__RunOneTaskU7C0_mCE1182ADD6A9B03DEE4481D7556D7A64C9BC7AFC (U3CU3Ec__DisplayClass6_0_t683F5DF1ABBC6076EC981A7D758038E5F5001048* __this, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* ___0_task, const RuntimeMethod* method) ;
// System.Void ET.ETAsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<ET.ETTask,ET.ETTaskHelper/<WaitAll>d__6>(TAwaiter&,TStateMachine&)
inline void ETAsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF_mC57852BDD2AAF841B61F73D4DC1445AF7DE956F6 (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* __this, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9** ___0_awaiter, U3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF** ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31*, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9**, U3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF**, const RuntimeMethod*))ETAsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisRuntimeObject_TisRuntimeObject_m5FC6745E9F78080E789F766B63EE9BA67A07D47A_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void ET.ETTaskHelper/<>c__DisplayClass7_0/<<WaitAll>g__RunOneTask|0>d::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed__ctor_m957D17FCF8F99563E57F6F044773A130A14175F9 (U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_t215012C959CD172F79B53DB8FD8AF7C94461365A* __this, const RuntimeMethod* method) ;
// System.Void ET.AsyncETVoidMethodBuilder::Start<ET.ETTaskHelper/<>c__DisplayClass7_0/<<WaitAll>g__RunOneTask|0>d>(TStateMachine&)
inline void AsyncETVoidMethodBuilder_Start_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_t215012C959CD172F79B53DB8FD8AF7C94461365A_mE119FFAF6EF557CD550DF1496829BA07BDEB6D74 (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* __this, U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_t215012C959CD172F79B53DB8FD8AF7C94461365A** ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203*, U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_t215012C959CD172F79B53DB8FD8AF7C94461365A**, const RuntimeMethod*))AsyncETVoidMethodBuilder_Start_TisRuntimeObject_mDAF82157F47158156813C55F133D7095999AAB4D_gshared)(__this, ___0_stateMachine, method);
}
// System.Void ET.AsyncETVoidMethodBuilder::AwaitUnsafeOnCompleted<ET.ETTask,ET.ETTaskHelper/<>c__DisplayClass7_0/<<WaitAll>g__RunOneTask|0>d>(TAwaiter&,TStateMachine&)
inline void AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_t215012C959CD172F79B53DB8FD8AF7C94461365A_m27CDC64364917CB12D38E1F518D90ABE0D41AEC2 (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* __this, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9** ___0_awaiter, U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_t215012C959CD172F79B53DB8FD8AF7C94461365A** ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203*, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9**, U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_t215012C959CD172F79B53DB8FD8AF7C94461365A**, const RuntimeMethod*))AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisRuntimeObject_TisRuntimeObject_m7FBC796CCFE1449A93FDBD2D254B3534232714AA_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void ET.ETTaskHelper/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_mB1A6E483E0D64CB11B7D3E223DA45868106D2B5E (U3CU3Ec__DisplayClass7_0_tBFD52C26745A10D6A91728129D308A5FE9B05BFB* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<ET.ETTask>::get_Count()
inline int32_t List_1_get_Count_m098A3FBEC846D65A6FA1C497181C458CB65EC608_inline (List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<ET.ETTask>::GetEnumerator()
inline Enumerator_t05F9D6B822BE78199481DA0AA4B6B04FCC4968E9 List_1_GetEnumerator_m058832077A5E305D1A30987EDF5EF94ABB118AB2 (List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t05F9D6B822BE78199481DA0AA4B6B04FCC4968E9 (*) (List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<ET.ETTask>::Dispose()
inline void Enumerator_Dispose_m2CF219B461F67CCD06F99FF3AFDEADC48A1BD26C (Enumerator_t05F9D6B822BE78199481DA0AA4B6B04FCC4968E9* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t05F9D6B822BE78199481DA0AA4B6B04FCC4968E9*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<ET.ETTask>::get_Current()
inline ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* Enumerator_get_Current_mDE3732995809E5A4FABC3ACE34ADB9EDA62A6B09_inline (Enumerator_t05F9D6B822BE78199481DA0AA4B6B04FCC4968E9* __this, const RuntimeMethod* method)
{
	return ((  ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* (*) (Enumerator_t05F9D6B822BE78199481DA0AA4B6B04FCC4968E9*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// ET.ETVoid ET.ETTaskHelper/<>c__DisplayClass7_0::<WaitAll>g__RunOneTask|0(ET.ETTask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 U3CU3Ec__DisplayClass7_0_U3CWaitAllU3Eg__RunOneTaskU7C0_m4DE07DB51B9BBADB87B80C5BA20ADFD11C4264EB (U3CU3Ec__DisplayClass7_0_tBFD52C26745A10D6A91728129D308A5FE9B05BFB* __this, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* ___0_task, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<ET.ETTask>::MoveNext()
inline bool Enumerator_MoveNext_m8E225A51A6FD5B638EB3D77D976A473FB1C010B2 (Enumerator_t05F9D6B822BE78199481DA0AA4B6B04FCC4968E9* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t05F9D6B822BE78199481DA0AA4B6B04FCC4968E9*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void ET.ETAsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<ET.ETTask,ET.ETTaskHelper/<WaitAll>d__7>(TAwaiter&,TStateMachine&)
inline void ETAsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CWaitAllU3Ed__7_t42A9EA8D454E034E1F4930E62C69FAF897600C75_m2590B34D5088AE2FA43296F11A7056C28A971258 (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* __this, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9** ___0_awaiter, U3CWaitAllU3Ed__7_t42A9EA8D454E034E1F4930E62C69FAF897600C75** ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31*, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9**, U3CWaitAllU3Ed__7_t42A9EA8D454E034E1F4930E62C69FAF897600C75**, const RuntimeMethod*))ETAsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisRuntimeObject_TisRuntimeObject_m5FC6745E9F78080E789F766B63EE9BA67A07D47A_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Boolean ET.ETVoid::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ETVoid_get_IsCompleted_m6EC6117D7E6C71F1ABDA3DD9BFA990560A812572 (ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38* __this, const RuntimeMethod* method) ;
// System.Void ET.ETVoid::OnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETVoid_OnCompleted_mE2A013466ABE3DE81D7193A13C5A88F902274170 (ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method) ;
// System.Void ET.ETVoid::UnsafeOnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETVoid_UnsafeOnCompleted_mBA7A78A207BDC8D1E2AD8B0D957316B36D224213 (ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271 (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.UInt32 ET.Kcp::ikcp_check(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Kcp_ikcp_check_m622BAB3EF82B3FA0D37104F8F36F075F47EACD2C (intptr_t ___0_kcp, uint32_t ___1_current, const RuntimeMethod* method) ;
// System.IntPtr ET.Kcp::ikcp_create(System.UInt32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Kcp_ikcp_create_m65B289D9825C3E8701AAF805408A5C089A16AD0D (uint32_t ___0_conv, intptr_t ___1_user, const RuntimeMethod* method) ;
// System.Void ET.Kcp::ikcp_flush(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_ikcp_flush_m379F0AB1930C706120A548693C76BB8439108F7A (intptr_t ___0_kcp, const RuntimeMethod* method) ;
// System.UInt32 ET.Kcp::ikcp_getconv(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Kcp_ikcp_getconv_m7CFD0C1FEF4825D838B385697A49B61A9D3919F7 (intptr_t ___0_ptr, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
// System.Int32 ET.Kcp::ikcp_input(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_ikcp_input_mD236CC30373194C4027A7BD6E2561115DB933127 (intptr_t ___0_kcp, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_data, int32_t ___2_offset, int32_t ___3_size, const RuntimeMethod* method) ;
// System.Int32 ET.Kcp::ikcp_nodelay(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_ikcp_nodelay_m2AA1F18619F35C9787E1E849E2856BFDBA7AAB54 (intptr_t ___0_kcp, int32_t ___1_nodelay, int32_t ___2_interval, int32_t ___3_resend, int32_t ___4_nc, const RuntimeMethod* method) ;
// System.Int32 ET.Kcp::ikcp_peeksize(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_ikcp_peeksize_mF034ED89B138DB85D35CF6F55AE701F9A6A26A71 (intptr_t ___0_kcp, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.Int32 ET.Kcp::ikcp_recv(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_ikcp_recv_m4282CB4E958BB4A5802CE6FDC8DB4BD496B78996 (intptr_t ___0_kcp, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_buffer, int32_t ___2_index, int32_t ___3_len, const RuntimeMethod* method) ;
// System.Void ET.Kcp::ikcp_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_ikcp_release_mFEDEE6822FB19DD4DBA737A9530D29D8AA7CE7BB (intptr_t ___0_kcp, const RuntimeMethod* method) ;
// System.Int32 ET.Kcp::ikcp_send(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_ikcp_send_mC9AAFA8AC4B349A97A368AFA829D77E55C8682A4 (intptr_t ___0_kcp, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_buffer, int32_t ___2_offset, int32_t ___3_len, const RuntimeMethod* method) ;
// System.Void ET.Kcp::ikcp_setminrto(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_ikcp_setminrto_m6BA2CC874C011FD9ADF9B6D324114B074BED1E3C (intptr_t ___0_ptr, int32_t ___1_minrto, const RuntimeMethod* method) ;
// System.Int32 ET.Kcp::ikcp_setmtu(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_ikcp_setmtu_m603F2EA8751291C312C84A8C967E8D576ABED42B (intptr_t ___0_kcp, int32_t ___1_mtu, const RuntimeMethod* method) ;
// System.Void ET.Kcp::ikcp_setoutput(ET.KcpOutput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_ikcp_setoutput_m641E9841DD1F17DE384A86F91F1B76E4CE3BB900 (KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732* ___0_output, const RuntimeMethod* method) ;
// System.Void ET.Kcp::ikcp_setlog(ET.KcpLog)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_ikcp_setlog_m15CF697BD5FBF75AA0C6D0E1D3A8E88846D56A9F (KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F* ___0_log, const RuntimeMethod* method) ;
// System.Void ET.Kcp::ikcp_update(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_ikcp_update_mFF3FA1FF289B9117348C6790BA46AF52E0760E29 (intptr_t ___0_kcp, uint32_t ___1_current, const RuntimeMethod* method) ;
// System.Int32 ET.Kcp::ikcp_waitsnd(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_ikcp_waitsnd_mB8BCFAC87034508D3392ADDA415892C4AE41B4F4 (intptr_t ___0_kcp, const RuntimeMethod* method) ;
// System.Int32 ET.Kcp::ikcp_wndsize(System.IntPtr,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_ikcp_wndsize_m32F6D50A19B5381B060FAF4A24C8859BAF7EB3CB (intptr_t ___0_kcp, int32_t ___1_sndwnd, int32_t ___2_rcvwnd, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// System.Void ET.Mono2ETEventManager/ScrollRectDir::Invoke(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScrollRectDir_Invoke_mCB06AE3B90B6B1799617A975E4FFEBEAC28038C0_inline (ScrollRectDir_t19028A127EB20BA751C93A66B996D53E89E37F3F* __this, int32_t ___0_dir, const RuntimeMethod* method) ;
// System.IntPtr ET.Recast::RecastLoad(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recast_RecastLoad_mB4EE23761CD49A97B85FA7639E4DF250BF8FA623 (int32_t ___0_id, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_buffer, int32_t ___2_n, const RuntimeMethod* method) ;
// System.Int64 System.IntPtr::ToInt64()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032 (intptr_t* __this, const RuntimeMethod* method) ;
// System.IntPtr ET.Recast::RecastGet(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recast_RecastGet_m467619DA580236F07A592226572C394AFA40F497 (int32_t ___0_id, const RuntimeMethod* method) ;
// System.Int32 System.IntPtr::ToInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_ToInt32_mD53B5D2C73C7E4BE5ADEBC5D187EACC83D5BB292 (intptr_t* __this, const RuntimeMethod* method) ;
// System.Void System.IntPtr::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntPtr__ctor_m2C033540A2F274766CF5C2A120587DD997E3F6DC (intptr_t* __this, int64_t ___0_value, const RuntimeMethod* method) ;
// System.Int32 ET.Recast::RecastFind(System.IntPtr,System.Single[],System.Single[],System.Single[],System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Recast_RecastFind_mCBA38176FD73663D69B407633661CCEE4DCF29F0 (intptr_t ___0_navPtr, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_extents, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___2_startPos, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___3_endPos, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___4_straightPath, const RuntimeMethod* method) ;
// System.Int32 ET.Recast::RecastFindNearestPoint(System.IntPtr,System.Single[],System.Single[],System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Recast_RecastFindNearestPoint_m11C47CB1E714AEF02D2C1A46C31EC9E835C5DB4B (intptr_t ___0_navPtr, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_extents, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___2_pos, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___3_nearestPos, const RuntimeMethod* method) ;
// System.Int32 ET.Recast::RecastFindRandomPointAroundCircle(System.IntPtr,System.Single[],System.Single[],System.Single,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Recast_RecastFindRandomPointAroundCircle_m56E946B64540AEB84DBB4115045F5F4BE8AB9D56 (intptr_t ___0_navPtr, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_extents, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___2_centerPos, float ___3_radius, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___4_randomPos, const RuntimeMethod* method) ;
// System.Int32 ET.Recast::RecastFindRandomPoint(System.IntPtr,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Recast_RecastFindRandomPoint_mE48982AD91CF18D8AF76BEDB8958CE8F0F2BBF13 (intptr_t ___0_navPtr, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_randomPos, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
IL2CPP_EXTERN_C uint32_t CDECL ikcp_check(intptr_t, uint32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL ikcp_create(uint32_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
IL2CPP_EXTERN_C void CDECL ikcp_flush(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
IL2CPP_EXTERN_C uint32_t CDECL ikcp_getconv(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ikcp_input(intptr_t, uint8_t*, int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ikcp_nodelay(intptr_t, int32_t, int32_t, int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ikcp_peeksize(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ikcp_recv(intptr_t, uint8_t*, int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
IL2CPP_EXTERN_C void CDECL ikcp_release(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ikcp_send(intptr_t, uint8_t*, int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
IL2CPP_EXTERN_C void CDECL ikcp_setminrto(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ikcp_setmtu(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
IL2CPP_EXTERN_C void CDECL ikcp_setoutput(Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
IL2CPP_EXTERN_C void CDECL ikcp_setlog(Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
IL2CPP_EXTERN_C void CDECL ikcp_update(intptr_t, uint32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ikcp_waitsnd(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ikcp_wndsize(intptr_t, int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_RecastDll_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL RecastLoad(int32_t, uint8_t*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_RecastDll_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL RecastGet(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_RecastDll_INTERNAL
IL2CPP_EXTERN_C void CDECL RecastClear();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_RecastDll_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL RecastFind(intptr_t, float*, float*, float*, float*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_RecastDll_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL RecastFindNearestPoint(intptr_t, float*, float*, float*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_RecastDll_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL RecastFindRandomPointAroundCircle(intptr_t, float*, float*, float, float*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_RecastDll_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL RecastFindRandomPoint(intptr_t, float*);
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ET.ETTaskHelper/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_mB78185AE3661C0859D1DA4C648F12E1838DACB9F (U3CU3Ec__DisplayClass3_0_tC12BA27A3BA3FD537DF6E1517A54731ACAE8E913* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0__ctor_mB78185AE3661C0859D1DA4C648F12E1838DACB9F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(U3CU3Ec__DisplayClass3_0__ctor_mB78185AE3661C0859D1DA4C648F12E1838DACB9F_RuntimeMethod_var);
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// ET.ETVoid ET.ETTaskHelper/<>c__DisplayClass3_0::<WaitAny>g__RunOneTask|0(ET.ETTask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 U3CU3Ec__DisplayClass3_0_U3CWaitAnyU3Eg__RunOneTaskU7C0_m5DD7D1B5E12BEB782F1A2F51D15751E4097AE58F (U3CU3Ec__DisplayClass3_0_tC12BA27A3BA3FD537DF6E1517A54731ACAE8E913* __this, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* ___0_task, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncETVoidMethodBuilder_Start_TisU3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_tBBC4427F5B54164F2F3B42D44912D3FD810ABF62_mD6BDA130DCC9EC8C27701B1A2F07A1B40EE35F42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_tBBC4427F5B54164F2F3B42D44912D3FD810ABF62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3CWaitAnyU3Eg__RunOneTaskU7C0_m5DD7D1B5E12BEB782F1A2F51D15751E4097AE58F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(U3CU3Ec__DisplayClass3_0_U3CWaitAnyU3Eg__RunOneTaskU7C0_m5DD7D1B5E12BEB782F1A2F51D15751E4097AE58F_RuntimeMethod_var);
	U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_tBBC4427F5B54164F2F3B42D44912D3FD810ABF62* V_0 = NULL;
	{
		U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_tBBC4427F5B54164F2F3B42D44912D3FD810ABF62* L_0 = (U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_tBBC4427F5B54164F2F3B42D44912D3FD810ABF62*)il2cpp_codegen_object_new(U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_tBBC4427F5B54164F2F3B42D44912D3FD810ABF62_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed__ctor_mFF81D6F270E5BD4E8D85DDC479AF0D90DF19D2AE(L_0, NULL);
		V_0 = L_0;
		U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_tBBC4427F5B54164F2F3B42D44912D3FD810ABF62* L_1 = V_0;
		AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203 L_2;
		L_2 = AsyncETVoidMethodBuilder_Create_m9CEDA84619E25BAC3C65FA55A7C6A56FF650F200(NULL);
		NullCheck(L_1);
		L_1->___U3CU3Et__builder_1 = L_2;
		U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_tBBC4427F5B54164F2F3B42D44912D3FD810ABF62* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_3), (void*)__this);
		U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_tBBC4427F5B54164F2F3B42D44912D3FD810ABF62* L_4 = V_0;
		ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_5 = ___0_task;
		NullCheck(L_4);
		L_4->___task_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___task_2), (void*)L_5);
		U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_tBBC4427F5B54164F2F3B42D44912D3FD810ABF62* L_6 = V_0;
		NullCheck(L_6);
		L_6->___U3CU3E1__state_0 = (-1);
		U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_tBBC4427F5B54164F2F3B42D44912D3FD810ABF62* L_7 = V_0;
		NullCheck(L_7);
		AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_8 = (&L_7->___U3CU3Et__builder_1);
		AsyncETVoidMethodBuilder_Start_TisU3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_tBBC4427F5B54164F2F3B42D44912D3FD810ABF62_mD6BDA130DCC9EC8C27701B1A2F07A1B40EE35F42(L_8, (&V_0), AsyncETVoidMethodBuilder_Start_TisU3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_tBBC4427F5B54164F2F3B42D44912D3FD810ABF62_mD6BDA130DCC9EC8C27701B1A2F07A1B40EE35F42_RuntimeMethod_var);
		U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_tBBC4427F5B54164F2F3B42D44912D3FD810ABF62* L_9 = V_0;
		NullCheck(L_9);
		AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_10 = (&L_9->___U3CU3Et__builder_1);
		ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 L_11;
		L_11 = AsyncETVoidMethodBuilder_get_Task_m01D925CDA13749DAF0518204CA06493E8A93EC46(L_10, NULL);
		return L_11;
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
// System.Void ET.ETTaskHelper/<>c__DisplayClass3_0/<<WaitAny>g__RunOneTask|0>d::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed__ctor_mFF81D6F270E5BD4E8D85DDC479AF0D90DF19D2AE (U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_tBBC4427F5B54164F2F3B42D44912D3FD810ABF62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed__ctor_mFF81D6F270E5BD4E8D85DDC479AF0D90DF19D2AE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed__ctor_mFF81D6F270E5BD4E8D85DDC479AF0D90DF19D2AE_RuntimeMethod_var);
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void ET.ETTaskHelper/<>c__DisplayClass3_0/<<WaitAny>g__RunOneTask|0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_MoveNext_m72B4D2A088FCB3B4D37B9C87787C8AB28D12CBAA (U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_tBBC4427F5B54164F2F3B42D44912D3FD810ABF62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_tBBC4427F5B54164F2F3B42D44912D3FD810ABF62_mC971D6B74BA54E773FEE72E822BCF0B21E5C12EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_MoveNext_m72B4D2A088FCB3B4D37B9C87787C8AB28D12CBAA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_MoveNext_m72B4D2A088FCB3B4D37B9C87787C8AB28D12CBAA_RuntimeMethod_var);
	int32_t V_0 = 0;
	ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* V_1 = NULL;
	U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_tBBC4427F5B54164F2F3B42D44912D3FD810ABF62* V_2 = NULL;
	ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* V_3 = NULL;
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0012_1;
			}
		}
		{
			goto IL_000c_1;
		}

IL_000c_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0014_1;
			}
		}
		{
			goto IL_0019_1;
		}

IL_0012_1:
		{
			goto IL_0055_1;
		}

IL_0014_1:
		{
			goto IL_00ba_1;
		}

IL_0019_1:
		{
			// await task;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_3 = __this->___task_2;
			NullCheck(L_3);
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_4;
			L_4 = ETTask_GetAwaiter_m18704BF1223130E4441BED1DF784F584052E9F46(L_3, NULL);
			V_1 = L_4;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_5 = V_1;
			NullCheck(L_5);
			bool L_6;
			L_6 = ETTask_get_IsCompleted_mC46408CF8CDBC0122E679473EDB14A9BA55A13F2(L_5, NULL);
			if (L_6)
			{
				goto IL_0071_1;
			}
		}
		{
			int32_t L_7 = 0;
			V_0 = L_7;
			__this->___U3CU3E1__state_0 = L_7;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_8 = V_1;
			__this->___U3CU3Eu__1_4 = L_8;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_4), (void*)L_8);
			V_2 = __this;
			AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_9 = (&__this->___U3CU3Et__builder_1);
			AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_tBBC4427F5B54164F2F3B42D44912D3FD810ABF62_mC971D6B74BA54E773FEE72E822BCF0B21E5C12EF(L_9, (&V_1), (&V_2), AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_tBBC4427F5B54164F2F3B42D44912D3FD810ABF62_mC971D6B74BA54E773FEE72E822BCF0B21E5C12EF_RuntimeMethod_var);
			goto IL_010d;
		}

IL_0055_1:
		{
			RuntimeObject* L_10 = __this->___U3CU3Eu__1_4;
			V_1 = ((ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9*)CastclassClass((RuntimeObject*)L_10, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var));
			__this->___U3CU3Eu__1_4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_4), (void*)NULL);
			int32_t L_11 = (-1);
			V_0 = L_11;
			__this->___U3CU3E1__state_0 = L_11;
		}

IL_0071_1:
		{
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_12 = V_1;
			NullCheck(L_12);
			ETTask_GetResult_m4025996962517219AB63CD35458CEE581DF064E6(L_12, NULL);
			// await coroutineBlocker.WaitAsync();
			U3CU3Ec__DisplayClass3_0_tC12BA27A3BA3FD537DF6E1517A54731ACAE8E913* L_13 = __this->___U3CU3E4__this_3;
			NullCheck(L_13);
			CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* L_14 = L_13->___coroutineBlocker_0;
			NullCheck(L_14);
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_15;
			L_15 = CoroutineBlocker_WaitAsync_m73943BDA099AA93BBD5EAEEA957B1FA94706C3DF(L_14, NULL);
			NullCheck(L_15);
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_16;
			L_16 = ETTask_GetAwaiter_m18704BF1223130E4441BED1DF784F584052E9F46(L_15, NULL);
			V_3 = L_16;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_17 = V_3;
			NullCheck(L_17);
			bool L_18;
			L_18 = ETTask_get_IsCompleted_mC46408CF8CDBC0122E679473EDB14A9BA55A13F2(L_17, NULL);
			if (L_18)
			{
				goto IL_00d6_1;
			}
		}
		{
			int32_t L_19 = 1;
			V_0 = L_19;
			__this->___U3CU3E1__state_0 = L_19;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_20 = V_3;
			__this->___U3CU3Eu__1_4 = L_20;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_4), (void*)L_20);
			V_2 = __this;
			AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_21 = (&__this->___U3CU3Et__builder_1);
			AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_tBBC4427F5B54164F2F3B42D44912D3FD810ABF62_mC971D6B74BA54E773FEE72E822BCF0B21E5C12EF(L_21, (&V_3), (&V_2), AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_tBBC4427F5B54164F2F3B42D44912D3FD810ABF62_mC971D6B74BA54E773FEE72E822BCF0B21E5C12EF_RuntimeMethod_var);
			goto IL_010d;
		}

IL_00ba_1:
		{
			RuntimeObject* L_22 = __this->___U3CU3Eu__1_4;
			V_3 = ((ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9*)CastclassClass((RuntimeObject*)L_22, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var));
			__this->___U3CU3Eu__1_4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_4), (void*)NULL);
			int32_t L_23 = (-1);
			V_0 = L_23;
			__this->___U3CU3E1__state_0 = L_23;
		}

IL_00d6_1:
		{
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_24 = V_3;
			NullCheck(L_24);
			ETTask_GetResult_m4025996962517219AB63CD35458CEE581DF064E6(L_24, NULL);
			goto IL_00f9;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00df;
		}
		throw e;
	}

CATCH_00df:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_25 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_26 = V_4;
		AsyncETVoidMethodBuilder_SetException_m7F5356721EF2BCB40149B2F55B8E2590699EBAF5(L_25, L_26, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_010d;
	}// end catch (depth: 1)

IL_00f9:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_27 = (&__this->___U3CU3Et__builder_1);
		AsyncETVoidMethodBuilder_SetResult_m290D2A1FF93C5EB907BE4243F0E62E0CA49E760A(L_27, NULL);
	}

IL_010d:
	{
		return;
	}
}
// System.Void ET.ETTaskHelper/<>c__DisplayClass3_0/<<WaitAny>g__RunOneTask|0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_SetStateMachine_m0996420621D0CDAE6BD0B733243C8332C1C53314 (U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_tBBC4427F5B54164F2F3B42D44912D3FD810ABF62* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_SetStateMachine_m0996420621D0CDAE6BD0B733243C8332C1C53314_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_SetStateMachine_m0996420621D0CDAE6BD0B733243C8332C1C53314_RuntimeMethod_var);
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
// System.Void ET.ETTaskHelper/<WaitAny>d__3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAnyU3Ed__3__ctor_m4A0835601CE32737F9FE30330214A49FFD10B1D4 (U3CWaitAnyU3Ed__3_t8677EFA57835BF586F6C9B558141A68766DB0665* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaitAnyU3Ed__3__ctor_m4A0835601CE32737F9FE30330214A49FFD10B1D4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(U3CWaitAnyU3Ed__3__ctor_m4A0835601CE32737F9FE30330214A49FFD10B1D4_RuntimeMethod_var);
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void ET.ETTaskHelper/<WaitAny>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAnyU3Ed__3_MoveNext_m5BB1B329D9D7C1DD4166F3A774896D5972E9B67E (U3CWaitAnyU3Ed__3_t8677EFA57835BF586F6C9B558141A68766DB0665* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETAsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CWaitAnyU3Ed__3_t8677EFA57835BF586F6C9B558141A68766DB0665_mEA0E3032AA1BB064DE097AF7E31C410AEFA73708_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETAsyncTaskMethodBuilder_1_SetResult_mBAD14F0004B857E596693C614C5B29587E97021C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_tC12BA27A3BA3FD537DF6E1517A54731ACAE8E913_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaitAnyU3Ed__3_MoveNext_m5BB1B329D9D7C1DD4166F3A774896D5972E9B67E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(U3CWaitAnyU3Ed__3_MoveNext_m5BB1B329D9D7C1DD4166F3A774896D5972E9B67E_RuntimeMethod_var);
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 V_3;
	memset((&V_3), 0, sizeof(V_3));
	ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* V_4 = NULL;
	U3CWaitAnyU3Ed__3_t8677EFA57835BF586F6C9B558141A68766DB0665* V_5 = NULL;
	bool V_6 = false;
	Exception_t* V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c_1;
			}
		}
		{
			goto IL_0011_1;
		}

IL_000c_1:
		{
			goto IL_00ff_1;
		}

IL_0011_1:
		{
			U3CU3Ec__DisplayClass3_0_tC12BA27A3BA3FD537DF6E1517A54731ACAE8E913* L_2 = (U3CU3Ec__DisplayClass3_0_tC12BA27A3BA3FD537DF6E1517A54731ACAE8E913*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_0_tC12BA27A3BA3FD537DF6E1517A54731ACAE8E913_il2cpp_TypeInfo_var);
			NullCheck(L_2);
			U3CU3Ec__DisplayClass3_0__ctor_mB78185AE3661C0859D1DA4C648F12E1838DACB9F(L_2, NULL);
			__this->___U3CU3E8__1_4 = L_2;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_4), (void*)L_2);
			// if (tasks.Length == 0)
			ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8* L_3 = __this->___tasks_2;
			NullCheck(L_3);
			V_2 = (bool)((((int32_t)(((RuntimeArray*)L_3)->max_length)) == ((int32_t)0))? 1 : 0);
			bool L_4 = V_2;
			if (!L_4)
			{
				goto IL_0033_1;
			}
		}
		{
			// return false;
			V_1 = (bool)0;
			goto IL_016a;
		}

IL_0033_1:
		{
			// CoroutineBlocker coroutineBlocker = new CoroutineBlocker(2);
			U3CU3Ec__DisplayClass3_0_tC12BA27A3BA3FD537DF6E1517A54731ACAE8E913* L_5 = __this->___U3CU3E8__1_4;
			CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* L_6 = (CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A*)il2cpp_codegen_object_new(CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A_il2cpp_TypeInfo_var);
			NullCheck(L_6);
			CoroutineBlocker__ctor_mC2DEAA1C928DA22578C4C3F820DD758ECAF79A52(L_6, 2, NULL);
			NullCheck(L_5);
			L_5->___coroutineBlocker_0 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&L_5->___coroutineBlocker_0), (void*)L_6);
			// foreach (ETTask task in tasks)
			ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8* L_7 = __this->___tasks_2;
			__this->___U3CU3Es__2_5 = L_7;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_5), (void*)L_7);
			__this->___U3CU3Es__3_6 = 0;
			goto IL_009e_1;
		}

IL_005a_1:
		{
			// foreach (ETTask task in tasks)
			ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8* L_8 = __this->___U3CU3Es__2_5;
			int32_t L_9 = __this->___U3CU3Es__3_6;
			NullCheck(L_8);
			int32_t L_10 = L_9;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
			__this->___U3CtaskU3E5__4_7 = L_11;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtaskU3E5__4_7), (void*)L_11);
			// RunOneTask(task).Coroutine();
			U3CU3Ec__DisplayClass3_0_tC12BA27A3BA3FD537DF6E1517A54731ACAE8E913* L_12 = __this->___U3CU3E8__1_4;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_13 = __this->___U3CtaskU3E5__4_7;
			NullCheck(L_12);
			ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 L_14;
			L_14 = U3CU3Ec__DisplayClass3_0_U3CWaitAnyU3Eg__RunOneTaskU7C0_m5DD7D1B5E12BEB782F1A2F51D15751E4097AE58F(L_12, L_13, NULL);
			V_3 = L_14;
			ETVoid_Coroutine_m7D69369538267F547E8D8AF8467A2806C5F6E6DA((&V_3), NULL);
			__this->___U3CtaskU3E5__4_7 = (ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtaskU3E5__4_7), (void*)(ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9*)NULL);
			int32_t L_15 = __this->___U3CU3Es__3_6;
			__this->___U3CU3Es__3_6 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		}

IL_009e_1:
		{
			// foreach (ETTask task in tasks)
			int32_t L_16 = __this->___U3CU3Es__3_6;
			ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8* L_17 = __this->___U3CU3Es__2_5;
			NullCheck(L_17);
			if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
			{
				goto IL_005a_1;
			}
		}
		{
			__this->___U3CU3Es__2_5 = (ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_5), (void*)(ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8*)NULL);
			// await coroutineBlocker.WaitAsync();
			U3CU3Ec__DisplayClass3_0_tC12BA27A3BA3FD537DF6E1517A54731ACAE8E913* L_18 = __this->___U3CU3E8__1_4;
			NullCheck(L_18);
			CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* L_19 = L_18->___coroutineBlocker_0;
			NullCheck(L_19);
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_20;
			L_20 = CoroutineBlocker_WaitAsync_m73943BDA099AA93BBD5EAEEA957B1FA94706C3DF(L_19, NULL);
			NullCheck(L_20);
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_21;
			L_21 = ETTask_GetAwaiter_m18704BF1223130E4441BED1DF784F584052E9F46(L_20, NULL);
			V_4 = L_21;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_22 = V_4;
			NullCheck(L_22);
			bool L_23;
			L_23 = ETTask_get_IsCompleted_mC46408CF8CDBC0122E679473EDB14A9BA55A13F2(L_22, NULL);
			if (L_23)
			{
				goto IL_011c_1;
			}
		}
		{
			int32_t L_24 = 0;
			V_0 = L_24;
			__this->___U3CU3E1__state_0 = L_24;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_25 = V_4;
			__this->___U3CU3Eu__1_8 = L_25;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_8), (void*)L_25);
			V_5 = __this;
			ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* L_26 = (&__this->___U3CU3Et__builder_1);
			ETAsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CWaitAnyU3Ed__3_t8677EFA57835BF586F6C9B558141A68766DB0665_mEA0E3032AA1BB064DE097AF7E31C410AEFA73708(L_26, (&V_4), (&V_5), ETAsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CWaitAnyU3Ed__3_t8677EFA57835BF586F6C9B558141A68766DB0665_mEA0E3032AA1BB064DE097AF7E31C410AEFA73708_RuntimeMethod_var);
			goto IL_0186;
		}

IL_00ff_1:
		{
			RuntimeObject* L_27 = __this->___U3CU3Eu__1_8;
			V_4 = ((ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9*)CastclassClass((RuntimeObject*)L_27, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var));
			__this->___U3CU3Eu__1_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_8), (void*)NULL);
			int32_t L_28 = (-1);
			V_0 = L_28;
			__this->___U3CU3E1__state_0 = L_28;
		}

IL_011c_1:
		{
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_29 = V_4;
			NullCheck(L_29);
			ETTask_GetResult_m4025996962517219AB63CD35458CEE581DF064E6(L_29, NULL);
			// if (cancellationToken == null)
			ETCancellationToken_tACA8F146EDE95371894D92DF0FD89C07C08886E1* L_30 = __this->___cancellationToken_3;
			V_6 = (bool)((((RuntimeObject*)(ETCancellationToken_tACA8F146EDE95371894D92DF0FD89C07C08886E1*)L_30) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
			bool L_31 = V_6;
			if (!L_31)
			{
				goto IL_0138_1;
			}
		}
		{
			// return true;
			V_1 = (bool)1;
			goto IL_016a;
		}

IL_0138_1:
		{
			// return !cancellationToken.IsCancel();
			ETCancellationToken_tACA8F146EDE95371894D92DF0FD89C07C08886E1* L_32 = __this->___cancellationToken_3;
			bool L_33;
			L_33 = ETTaskHelper_IsCancel_mDF0D4F9A92B59AC77F15CE6E34F4D13A13C5EC14(L_32, NULL);
			V_1 = (bool)((((int32_t)L_33) == ((int32_t)0))? 1 : 0);
			goto IL_016a;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0149;
		}
		throw e;
	}

CATCH_0149:
	{// begin catch(System.Exception)
		V_7 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CU3E8__1_4 = (U3CU3Ec__DisplayClass3_0_tC12BA27A3BA3FD537DF6E1517A54731ACAE8E913*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_4), (void*)(U3CU3Ec__DisplayClass3_0_tC12BA27A3BA3FD537DF6E1517A54731ACAE8E913*)NULL);
		ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* L_34 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_35 = V_7;
		ETAsyncTaskMethodBuilder_1_SetException_m4B20AE5BD8F1E608AAD3970CB6C2985ACB4D6B08(L_34, L_35, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ETAsyncTaskMethodBuilder_1_SetException_m4B20AE5BD8F1E608AAD3970CB6C2985ACB4D6B08_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0186;
	}// end catch (depth: 1)

IL_016a:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CU3E8__1_4 = (U3CU3Ec__DisplayClass3_0_tC12BA27A3BA3FD537DF6E1517A54731ACAE8E913*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_4), (void*)(U3CU3Ec__DisplayClass3_0_tC12BA27A3BA3FD537DF6E1517A54731ACAE8E913*)NULL);
		ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* L_36 = (&__this->___U3CU3Et__builder_1);
		bool L_37 = V_1;
		ETAsyncTaskMethodBuilder_1_SetResult_mBAD14F0004B857E596693C614C5B29587E97021C(L_36, L_37, ETAsyncTaskMethodBuilder_1_SetResult_mBAD14F0004B857E596693C614C5B29587E97021C_RuntimeMethod_var);
	}

IL_0186:
	{
		return;
	}
}
// System.Void ET.ETTaskHelper/<WaitAny>d__3::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAnyU3Ed__3_SetStateMachine_m906E8171935A307021743BEF32EB6ECEE6426DD7 (U3CWaitAnyU3Ed__3_t8677EFA57835BF586F6C9B558141A68766DB0665* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaitAnyU3Ed__3_SetStateMachine_m906E8171935A307021743BEF32EB6ECEE6426DD7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(U3CWaitAnyU3Ed__3_SetStateMachine_m906E8171935A307021743BEF32EB6ECEE6426DD7_RuntimeMethod_var);
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
// System.Void ET.ETTaskHelper/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_mB4BE8E3414AAE4FBCECE1D4E864D610D57F70C3C (U3CU3Ec__DisplayClass6_0_t683F5DF1ABBC6076EC981A7D758038E5F5001048* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0__ctor_mB4BE8E3414AAE4FBCECE1D4E864D610D57F70C3C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(U3CU3Ec__DisplayClass6_0__ctor_mB4BE8E3414AAE4FBCECE1D4E864D610D57F70C3C_RuntimeMethod_var);
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// ET.ETVoid ET.ETTaskHelper/<>c__DisplayClass6_0::<WaitAll>g__RunOneTask|0(ET.ETTask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 U3CU3Ec__DisplayClass6_0_U3CWaitAllU3Eg__RunOneTaskU7C0_mCE1182ADD6A9B03DEE4481D7556D7A64C9BC7AFC (U3CU3Ec__DisplayClass6_0_t683F5DF1ABBC6076EC981A7D758038E5F5001048* __this, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* ___0_task, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncETVoidMethodBuilder_Start_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952_mF703CC49BFF53BD376F1D2C4A00507A237512E6E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_U3CWaitAllU3Eg__RunOneTaskU7C0_mCE1182ADD6A9B03DEE4481D7556D7A64C9BC7AFC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(U3CU3Ec__DisplayClass6_0_U3CWaitAllU3Eg__RunOneTaskU7C0_mCE1182ADD6A9B03DEE4481D7556D7A64C9BC7AFC_RuntimeMethod_var);
	U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952* V_0 = NULL;
	{
		U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952* L_0 = (U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952*)il2cpp_codegen_object_new(U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed__ctor_mDBB7DE4CD3AD6D46837783FFF4BAB8A7B00D2BFA(L_0, NULL);
		V_0 = L_0;
		U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952* L_1 = V_0;
		AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203 L_2;
		L_2 = AsyncETVoidMethodBuilder_Create_m9CEDA84619E25BAC3C65FA55A7C6A56FF650F200(NULL);
		NullCheck(L_1);
		L_1->___U3CU3Et__builder_1 = L_2;
		U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_3), (void*)__this);
		U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952* L_4 = V_0;
		ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_5 = ___0_task;
		NullCheck(L_4);
		L_4->___task_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___task_2), (void*)L_5);
		U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952* L_6 = V_0;
		NullCheck(L_6);
		L_6->___U3CU3E1__state_0 = (-1);
		U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952* L_7 = V_0;
		NullCheck(L_7);
		AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_8 = (&L_7->___U3CU3Et__builder_1);
		AsyncETVoidMethodBuilder_Start_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952_mF703CC49BFF53BD376F1D2C4A00507A237512E6E(L_8, (&V_0), AsyncETVoidMethodBuilder_Start_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952_mF703CC49BFF53BD376F1D2C4A00507A237512E6E_RuntimeMethod_var);
		U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952* L_9 = V_0;
		NullCheck(L_9);
		AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_10 = (&L_9->___U3CU3Et__builder_1);
		ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 L_11;
		L_11 = AsyncETVoidMethodBuilder_get_Task_m01D925CDA13749DAF0518204CA06493E8A93EC46(L_10, NULL);
		return L_11;
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
// System.Void ET.ETTaskHelper/<>c__DisplayClass6_0/<<WaitAll>g__RunOneTask|0>d::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed__ctor_mDBB7DE4CD3AD6D46837783FFF4BAB8A7B00D2BFA (U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed__ctor_mDBB7DE4CD3AD6D46837783FFF4BAB8A7B00D2BFA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed__ctor_mDBB7DE4CD3AD6D46837783FFF4BAB8A7B00D2BFA_RuntimeMethod_var);
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void ET.ETTaskHelper/<>c__DisplayClass6_0/<<WaitAll>g__RunOneTask|0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_MoveNext_mE6E8D66C93025FD6239EDB86C098A5214F652D73 (U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952_m7BBF15F324CD989EAAAC7E26FEF23747228CC8D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_MoveNext_mE6E8D66C93025FD6239EDB86C098A5214F652D73_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_MoveNext_mE6E8D66C93025FD6239EDB86C098A5214F652D73_RuntimeMethod_var);
	int32_t V_0 = 0;
	ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* V_1 = NULL;
	U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952* V_2 = NULL;
	ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* V_3 = NULL;
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0012_1;
			}
		}
		{
			goto IL_000c_1;
		}

IL_000c_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0014_1;
			}
		}
		{
			goto IL_0019_1;
		}

IL_0012_1:
		{
			goto IL_0055_1;
		}

IL_0014_1:
		{
			goto IL_00ba_1;
		}

IL_0019_1:
		{
			// await task;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_3 = __this->___task_2;
			NullCheck(L_3);
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_4;
			L_4 = ETTask_GetAwaiter_m18704BF1223130E4441BED1DF784F584052E9F46(L_3, NULL);
			V_1 = L_4;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_5 = V_1;
			NullCheck(L_5);
			bool L_6;
			L_6 = ETTask_get_IsCompleted_mC46408CF8CDBC0122E679473EDB14A9BA55A13F2(L_5, NULL);
			if (L_6)
			{
				goto IL_0071_1;
			}
		}
		{
			int32_t L_7 = 0;
			V_0 = L_7;
			__this->___U3CU3E1__state_0 = L_7;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_8 = V_1;
			__this->___U3CU3Eu__1_4 = L_8;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_4), (void*)L_8);
			V_2 = __this;
			AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_9 = (&__this->___U3CU3Et__builder_1);
			AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952_m7BBF15F324CD989EAAAC7E26FEF23747228CC8D6(L_9, (&V_1), (&V_2), AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952_m7BBF15F324CD989EAAAC7E26FEF23747228CC8D6_RuntimeMethod_var);
			goto IL_010d;
		}

IL_0055_1:
		{
			RuntimeObject* L_10 = __this->___U3CU3Eu__1_4;
			V_1 = ((ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9*)CastclassClass((RuntimeObject*)L_10, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var));
			__this->___U3CU3Eu__1_4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_4), (void*)NULL);
			int32_t L_11 = (-1);
			V_0 = L_11;
			__this->___U3CU3E1__state_0 = L_11;
		}

IL_0071_1:
		{
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_12 = V_1;
			NullCheck(L_12);
			ETTask_GetResult_m4025996962517219AB63CD35458CEE581DF064E6(L_12, NULL);
			// await coroutineBlocker.WaitAsync();
			U3CU3Ec__DisplayClass6_0_t683F5DF1ABBC6076EC981A7D758038E5F5001048* L_13 = __this->___U3CU3E4__this_3;
			NullCheck(L_13);
			CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* L_14 = L_13->___coroutineBlocker_0;
			NullCheck(L_14);
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_15;
			L_15 = CoroutineBlocker_WaitAsync_m73943BDA099AA93BBD5EAEEA957B1FA94706C3DF(L_14, NULL);
			NullCheck(L_15);
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_16;
			L_16 = ETTask_GetAwaiter_m18704BF1223130E4441BED1DF784F584052E9F46(L_15, NULL);
			V_3 = L_16;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_17 = V_3;
			NullCheck(L_17);
			bool L_18;
			L_18 = ETTask_get_IsCompleted_mC46408CF8CDBC0122E679473EDB14A9BA55A13F2(L_17, NULL);
			if (L_18)
			{
				goto IL_00d6_1;
			}
		}
		{
			int32_t L_19 = 1;
			V_0 = L_19;
			__this->___U3CU3E1__state_0 = L_19;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_20 = V_3;
			__this->___U3CU3Eu__1_4 = L_20;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_4), (void*)L_20);
			V_2 = __this;
			AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_21 = (&__this->___U3CU3Et__builder_1);
			AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952_m7BBF15F324CD989EAAAC7E26FEF23747228CC8D6(L_21, (&V_3), (&V_2), AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952_m7BBF15F324CD989EAAAC7E26FEF23747228CC8D6_RuntimeMethod_var);
			goto IL_010d;
		}

IL_00ba_1:
		{
			RuntimeObject* L_22 = __this->___U3CU3Eu__1_4;
			V_3 = ((ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9*)CastclassClass((RuntimeObject*)L_22, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var));
			__this->___U3CU3Eu__1_4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_4), (void*)NULL);
			int32_t L_23 = (-1);
			V_0 = L_23;
			__this->___U3CU3E1__state_0 = L_23;
		}

IL_00d6_1:
		{
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_24 = V_3;
			NullCheck(L_24);
			ETTask_GetResult_m4025996962517219AB63CD35458CEE581DF064E6(L_24, NULL);
			goto IL_00f9;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00df;
		}
		throw e;
	}

CATCH_00df:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_25 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_26 = V_4;
		AsyncETVoidMethodBuilder_SetException_m7F5356721EF2BCB40149B2F55B8E2590699EBAF5(L_25, L_26, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_010d;
	}// end catch (depth: 1)

IL_00f9:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_27 = (&__this->___U3CU3Et__builder_1);
		AsyncETVoidMethodBuilder_SetResult_m290D2A1FF93C5EB907BE4243F0E62E0CA49E760A(L_27, NULL);
	}

IL_010d:
	{
		return;
	}
}
// System.Void ET.ETTaskHelper/<>c__DisplayClass6_0/<<WaitAll>g__RunOneTask|0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_SetStateMachine_mCF501DE82C7EE07B063C4A75C71AC5245D8F594E (U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_SetStateMachine_mCF501DE82C7EE07B063C4A75C71AC5245D8F594E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_SetStateMachine_mCF501DE82C7EE07B063C4A75C71AC5245D8F594E_RuntimeMethod_var);
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
// System.Void ET.ETTaskHelper/<WaitAll>d__6::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAllU3Ed__6__ctor_mAE0DF5005E1BC10B8C762B1A15F9D26FDE13D62B (U3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaitAllU3Ed__6__ctor_mAE0DF5005E1BC10B8C762B1A15F9D26FDE13D62B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(U3CWaitAllU3Ed__6__ctor_mAE0DF5005E1BC10B8C762B1A15F9D26FDE13D62B_RuntimeMethod_var);
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void ET.ETTaskHelper/<WaitAll>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAllU3Ed__6_MoveNext_mC67606D6615193A5AD14D47F4AA3309A557F0CE5 (U3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETAsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF_mC57852BDD2AAF841B61F73D4DC1445AF7DE956F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETAsyncTaskMethodBuilder_1_SetResult_mBAD14F0004B857E596693C614C5B29587E97021C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_t683F5DF1ABBC6076EC981A7D758038E5F5001048_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaitAllU3Ed__6_MoveNext_mC67606D6615193A5AD14D47F4AA3309A557F0CE5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(U3CWaitAllU3Ed__6_MoveNext_mC67606D6615193A5AD14D47F4AA3309A557F0CE5_RuntimeMethod_var);
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 V_3;
	memset((&V_3), 0, sizeof(V_3));
	ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* V_4 = NULL;
	U3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF* V_5 = NULL;
	bool V_6 = false;
	Exception_t* V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c_1;
			}
		}
		{
			goto IL_0011_1;
		}

IL_000c_1:
		{
			goto IL_0107_1;
		}

IL_0011_1:
		{
			U3CU3Ec__DisplayClass6_0_t683F5DF1ABBC6076EC981A7D758038E5F5001048* L_2 = (U3CU3Ec__DisplayClass6_0_t683F5DF1ABBC6076EC981A7D758038E5F5001048*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass6_0_t683F5DF1ABBC6076EC981A7D758038E5F5001048_il2cpp_TypeInfo_var);
			NullCheck(L_2);
			U3CU3Ec__DisplayClass6_0__ctor_mB4BE8E3414AAE4FBCECE1D4E864D610D57F70C3C(L_2, NULL);
			__this->___U3CU3E8__1_4 = L_2;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_4), (void*)L_2);
			// if (tasks.Length == 0)
			ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8* L_3 = __this->___tasks_2;
			NullCheck(L_3);
			V_2 = (bool)((((int32_t)(((RuntimeArray*)L_3)->max_length)) == ((int32_t)0))? 1 : 0);
			bool L_4 = V_2;
			if (!L_4)
			{
				goto IL_0033_1;
			}
		}
		{
			// return false;
			V_1 = (bool)0;
			goto IL_0173;
		}

IL_0033_1:
		{
			// CoroutineBlocker coroutineBlocker = new CoroutineBlocker(tasks.Length + 1);
			U3CU3Ec__DisplayClass6_0_t683F5DF1ABBC6076EC981A7D758038E5F5001048* L_5 = __this->___U3CU3E8__1_4;
			ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8* L_6 = __this->___tasks_2;
			NullCheck(L_6);
			CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* L_7 = (CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A*)il2cpp_codegen_object_new(CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A_il2cpp_TypeInfo_var);
			NullCheck(L_7);
			CoroutineBlocker__ctor_mC2DEAA1C928DA22578C4C3F820DD758ECAF79A52(L_7, ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_6)->max_length)), 1)), NULL);
			NullCheck(L_5);
			L_5->___coroutineBlocker_0 = L_7;
			Il2CppCodeGenWriteBarrier((void**)(&L_5->___coroutineBlocker_0), (void*)L_7);
			// foreach (ETTask task in tasks)
			ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8* L_8 = __this->___tasks_2;
			__this->___U3CU3Es__2_5 = L_8;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_5), (void*)L_8);
			__this->___U3CU3Es__3_6 = 0;
			goto IL_00a7_1;
		}

IL_0063_1:
		{
			// foreach (ETTask task in tasks)
			ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8* L_9 = __this->___U3CU3Es__2_5;
			int32_t L_10 = __this->___U3CU3Es__3_6;
			NullCheck(L_9);
			int32_t L_11 = L_10;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
			__this->___U3CtaskU3E5__4_7 = L_12;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtaskU3E5__4_7), (void*)L_12);
			// RunOneTask(task).Coroutine();
			U3CU3Ec__DisplayClass6_0_t683F5DF1ABBC6076EC981A7D758038E5F5001048* L_13 = __this->___U3CU3E8__1_4;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_14 = __this->___U3CtaskU3E5__4_7;
			NullCheck(L_13);
			ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 L_15;
			L_15 = U3CU3Ec__DisplayClass6_0_U3CWaitAllU3Eg__RunOneTaskU7C0_mCE1182ADD6A9B03DEE4481D7556D7A64C9BC7AFC(L_13, L_14, NULL);
			V_3 = L_15;
			ETVoid_Coroutine_m7D69369538267F547E8D8AF8467A2806C5F6E6DA((&V_3), NULL);
			__this->___U3CtaskU3E5__4_7 = (ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtaskU3E5__4_7), (void*)(ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9*)NULL);
			int32_t L_16 = __this->___U3CU3Es__3_6;
			__this->___U3CU3Es__3_6 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		}

IL_00a7_1:
		{
			// foreach (ETTask task in tasks)
			int32_t L_17 = __this->___U3CU3Es__3_6;
			ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8* L_18 = __this->___U3CU3Es__2_5;
			NullCheck(L_18);
			if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
			{
				goto IL_0063_1;
			}
		}
		{
			__this->___U3CU3Es__2_5 = (ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_5), (void*)(ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8*)NULL);
			// await coroutineBlocker.WaitAsync();
			U3CU3Ec__DisplayClass6_0_t683F5DF1ABBC6076EC981A7D758038E5F5001048* L_19 = __this->___U3CU3E8__1_4;
			NullCheck(L_19);
			CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* L_20 = L_19->___coroutineBlocker_0;
			NullCheck(L_20);
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_21;
			L_21 = CoroutineBlocker_WaitAsync_m73943BDA099AA93BBD5EAEEA957B1FA94706C3DF(L_20, NULL);
			NullCheck(L_21);
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_22;
			L_22 = ETTask_GetAwaiter_m18704BF1223130E4441BED1DF784F584052E9F46(L_21, NULL);
			V_4 = L_22;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_23 = V_4;
			NullCheck(L_23);
			bool L_24;
			L_24 = ETTask_get_IsCompleted_mC46408CF8CDBC0122E679473EDB14A9BA55A13F2(L_23, NULL);
			if (L_24)
			{
				goto IL_0124_1;
			}
		}
		{
			int32_t L_25 = 0;
			V_0 = L_25;
			__this->___U3CU3E1__state_0 = L_25;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_26 = V_4;
			__this->___U3CU3Eu__1_8 = L_26;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_8), (void*)L_26);
			V_5 = __this;
			ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* L_27 = (&__this->___U3CU3Et__builder_1);
			ETAsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF_mC57852BDD2AAF841B61F73D4DC1445AF7DE956F6(L_27, (&V_4), (&V_5), ETAsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF_mC57852BDD2AAF841B61F73D4DC1445AF7DE956F6_RuntimeMethod_var);
			goto IL_018f;
		}

IL_0107_1:
		{
			RuntimeObject* L_28 = __this->___U3CU3Eu__1_8;
			V_4 = ((ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9*)CastclassClass((RuntimeObject*)L_28, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var));
			__this->___U3CU3Eu__1_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_8), (void*)NULL);
			int32_t L_29 = (-1);
			V_0 = L_29;
			__this->___U3CU3E1__state_0 = L_29;
		}

IL_0124_1:
		{
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_30 = V_4;
			NullCheck(L_30);
			ETTask_GetResult_m4025996962517219AB63CD35458CEE581DF064E6(L_30, NULL);
			// if (cancellationToken == null)
			ETCancellationToken_tACA8F146EDE95371894D92DF0FD89C07C08886E1* L_31 = __this->___cancellationToken_3;
			V_6 = (bool)((((RuntimeObject*)(ETCancellationToken_tACA8F146EDE95371894D92DF0FD89C07C08886E1*)L_31) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
			bool L_32 = V_6;
			if (!L_32)
			{
				goto IL_0141_1;
			}
		}
		{
			// return true;
			V_1 = (bool)1;
			goto IL_0173;
		}

IL_0141_1:
		{
			// return !cancellationToken.IsCancel();
			ETCancellationToken_tACA8F146EDE95371894D92DF0FD89C07C08886E1* L_33 = __this->___cancellationToken_3;
			bool L_34;
			L_34 = ETTaskHelper_IsCancel_mDF0D4F9A92B59AC77F15CE6E34F4D13A13C5EC14(L_33, NULL);
			V_1 = (bool)((((int32_t)L_34) == ((int32_t)0))? 1 : 0);
			goto IL_0173;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0152;
		}
		throw e;
	}

CATCH_0152:
	{// begin catch(System.Exception)
		V_7 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CU3E8__1_4 = (U3CU3Ec__DisplayClass6_0_t683F5DF1ABBC6076EC981A7D758038E5F5001048*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_4), (void*)(U3CU3Ec__DisplayClass6_0_t683F5DF1ABBC6076EC981A7D758038E5F5001048*)NULL);
		ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* L_35 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_36 = V_7;
		ETAsyncTaskMethodBuilder_1_SetException_m4B20AE5BD8F1E608AAD3970CB6C2985ACB4D6B08(L_35, L_36, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ETAsyncTaskMethodBuilder_1_SetException_m4B20AE5BD8F1E608AAD3970CB6C2985ACB4D6B08_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_018f;
	}// end catch (depth: 1)

IL_0173:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CU3E8__1_4 = (U3CU3Ec__DisplayClass6_0_t683F5DF1ABBC6076EC981A7D758038E5F5001048*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_4), (void*)(U3CU3Ec__DisplayClass6_0_t683F5DF1ABBC6076EC981A7D758038E5F5001048*)NULL);
		ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* L_37 = (&__this->___U3CU3Et__builder_1);
		bool L_38 = V_1;
		ETAsyncTaskMethodBuilder_1_SetResult_mBAD14F0004B857E596693C614C5B29587E97021C(L_37, L_38, ETAsyncTaskMethodBuilder_1_SetResult_mBAD14F0004B857E596693C614C5B29587E97021C_RuntimeMethod_var);
	}

IL_018f:
	{
		return;
	}
}
// System.Void ET.ETTaskHelper/<WaitAll>d__6::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAllU3Ed__6_SetStateMachine_m8F2550CD0C39FBA84AF251340E455AE3C5EEF1E4 (U3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaitAllU3Ed__6_SetStateMachine_m8F2550CD0C39FBA84AF251340E455AE3C5EEF1E4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(U3CWaitAllU3Ed__6_SetStateMachine_m8F2550CD0C39FBA84AF251340E455AE3C5EEF1E4_RuntimeMethod_var);
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
// System.Void ET.ETTaskHelper/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_mB1A6E483E0D64CB11B7D3E223DA45868106D2B5E (U3CU3Ec__DisplayClass7_0_tBFD52C26745A10D6A91728129D308A5FE9B05BFB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_0__ctor_mB1A6E483E0D64CB11B7D3E223DA45868106D2B5E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(U3CU3Ec__DisplayClass7_0__ctor_mB1A6E483E0D64CB11B7D3E223DA45868106D2B5E_RuntimeMethod_var);
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// ET.ETVoid ET.ETTaskHelper/<>c__DisplayClass7_0::<WaitAll>g__RunOneTask|0(ET.ETTask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 U3CU3Ec__DisplayClass7_0_U3CWaitAllU3Eg__RunOneTaskU7C0_m4DE07DB51B9BBADB87B80C5BA20ADFD11C4264EB (U3CU3Ec__DisplayClass7_0_tBFD52C26745A10D6A91728129D308A5FE9B05BFB* __this, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* ___0_task, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncETVoidMethodBuilder_Start_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_t215012C959CD172F79B53DB8FD8AF7C94461365A_mE119FFAF6EF557CD550DF1496829BA07BDEB6D74_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_t215012C959CD172F79B53DB8FD8AF7C94461365A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_0_U3CWaitAllU3Eg__RunOneTaskU7C0_m4DE07DB51B9BBADB87B80C5BA20ADFD11C4264EB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(U3CU3Ec__DisplayClass7_0_U3CWaitAllU3Eg__RunOneTaskU7C0_m4DE07DB51B9BBADB87B80C5BA20ADFD11C4264EB_RuntimeMethod_var);
	U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_t215012C959CD172F79B53DB8FD8AF7C94461365A* V_0 = NULL;
	{
		U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_t215012C959CD172F79B53DB8FD8AF7C94461365A* L_0 = (U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_t215012C959CD172F79B53DB8FD8AF7C94461365A*)il2cpp_codegen_object_new(U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_t215012C959CD172F79B53DB8FD8AF7C94461365A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed__ctor_m957D17FCF8F99563E57F6F044773A130A14175F9(L_0, NULL);
		V_0 = L_0;
		U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_t215012C959CD172F79B53DB8FD8AF7C94461365A* L_1 = V_0;
		AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203 L_2;
		L_2 = AsyncETVoidMethodBuilder_Create_m9CEDA84619E25BAC3C65FA55A7C6A56FF650F200(NULL);
		NullCheck(L_1);
		L_1->___U3CU3Et__builder_1 = L_2;
		U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_t215012C959CD172F79B53DB8FD8AF7C94461365A* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_3), (void*)__this);
		U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_t215012C959CD172F79B53DB8FD8AF7C94461365A* L_4 = V_0;
		ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_5 = ___0_task;
		NullCheck(L_4);
		L_4->___task_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___task_2), (void*)L_5);
		U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_t215012C959CD172F79B53DB8FD8AF7C94461365A* L_6 = V_0;
		NullCheck(L_6);
		L_6->___U3CU3E1__state_0 = (-1);
		U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_t215012C959CD172F79B53DB8FD8AF7C94461365A* L_7 = V_0;
		NullCheck(L_7);
		AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_8 = (&L_7->___U3CU3Et__builder_1);
		AsyncETVoidMethodBuilder_Start_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_t215012C959CD172F79B53DB8FD8AF7C94461365A_mE119FFAF6EF557CD550DF1496829BA07BDEB6D74(L_8, (&V_0), AsyncETVoidMethodBuilder_Start_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_t215012C959CD172F79B53DB8FD8AF7C94461365A_mE119FFAF6EF557CD550DF1496829BA07BDEB6D74_RuntimeMethod_var);
		U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_t215012C959CD172F79B53DB8FD8AF7C94461365A* L_9 = V_0;
		NullCheck(L_9);
		AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_10 = (&L_9->___U3CU3Et__builder_1);
		ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 L_11;
		L_11 = AsyncETVoidMethodBuilder_get_Task_m01D925CDA13749DAF0518204CA06493E8A93EC46(L_10, NULL);
		return L_11;
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
// System.Void ET.ETTaskHelper/<>c__DisplayClass7_0/<<WaitAll>g__RunOneTask|0>d::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed__ctor_m957D17FCF8F99563E57F6F044773A130A14175F9 (U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_t215012C959CD172F79B53DB8FD8AF7C94461365A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed__ctor_m957D17FCF8F99563E57F6F044773A130A14175F9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed__ctor_m957D17FCF8F99563E57F6F044773A130A14175F9_RuntimeMethod_var);
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void ET.ETTaskHelper/<>c__DisplayClass7_0/<<WaitAll>g__RunOneTask|0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_MoveNext_m8851E58BD5AA80E86B6E8F3745AC3BE04B00ECA0 (U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_t215012C959CD172F79B53DB8FD8AF7C94461365A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_t215012C959CD172F79B53DB8FD8AF7C94461365A_m27CDC64364917CB12D38E1F518D90ABE0D41AEC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_MoveNext_m8851E58BD5AA80E86B6E8F3745AC3BE04B00ECA0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_MoveNext_m8851E58BD5AA80E86B6E8F3745AC3BE04B00ECA0_RuntimeMethod_var);
	int32_t V_0 = 0;
	ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* V_1 = NULL;
	U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_t215012C959CD172F79B53DB8FD8AF7C94461365A* V_2 = NULL;
	ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* V_3 = NULL;
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0012_1;
			}
		}
		{
			goto IL_000c_1;
		}

IL_000c_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0014_1;
			}
		}
		{
			goto IL_0019_1;
		}

IL_0012_1:
		{
			goto IL_0055_1;
		}

IL_0014_1:
		{
			goto IL_00ba_1;
		}

IL_0019_1:
		{
			// await task;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_3 = __this->___task_2;
			NullCheck(L_3);
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_4;
			L_4 = ETTask_GetAwaiter_m18704BF1223130E4441BED1DF784F584052E9F46(L_3, NULL);
			V_1 = L_4;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_5 = V_1;
			NullCheck(L_5);
			bool L_6;
			L_6 = ETTask_get_IsCompleted_mC46408CF8CDBC0122E679473EDB14A9BA55A13F2(L_5, NULL);
			if (L_6)
			{
				goto IL_0071_1;
			}
		}
		{
			int32_t L_7 = 0;
			V_0 = L_7;
			__this->___U3CU3E1__state_0 = L_7;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_8 = V_1;
			__this->___U3CU3Eu__1_4 = L_8;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_4), (void*)L_8);
			V_2 = __this;
			AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_9 = (&__this->___U3CU3Et__builder_1);
			AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_t215012C959CD172F79B53DB8FD8AF7C94461365A_m27CDC64364917CB12D38E1F518D90ABE0D41AEC2(L_9, (&V_1), (&V_2), AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_t215012C959CD172F79B53DB8FD8AF7C94461365A_m27CDC64364917CB12D38E1F518D90ABE0D41AEC2_RuntimeMethod_var);
			goto IL_010d;
		}

IL_0055_1:
		{
			RuntimeObject* L_10 = __this->___U3CU3Eu__1_4;
			V_1 = ((ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9*)CastclassClass((RuntimeObject*)L_10, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var));
			__this->___U3CU3Eu__1_4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_4), (void*)NULL);
			int32_t L_11 = (-1);
			V_0 = L_11;
			__this->___U3CU3E1__state_0 = L_11;
		}

IL_0071_1:
		{
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_12 = V_1;
			NullCheck(L_12);
			ETTask_GetResult_m4025996962517219AB63CD35458CEE581DF064E6(L_12, NULL);
			// await coroutineBlocker.WaitAsync();
			U3CU3Ec__DisplayClass7_0_tBFD52C26745A10D6A91728129D308A5FE9B05BFB* L_13 = __this->___U3CU3E4__this_3;
			NullCheck(L_13);
			CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* L_14 = L_13->___coroutineBlocker_0;
			NullCheck(L_14);
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_15;
			L_15 = CoroutineBlocker_WaitAsync_m73943BDA099AA93BBD5EAEEA957B1FA94706C3DF(L_14, NULL);
			NullCheck(L_15);
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_16;
			L_16 = ETTask_GetAwaiter_m18704BF1223130E4441BED1DF784F584052E9F46(L_15, NULL);
			V_3 = L_16;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_17 = V_3;
			NullCheck(L_17);
			bool L_18;
			L_18 = ETTask_get_IsCompleted_mC46408CF8CDBC0122E679473EDB14A9BA55A13F2(L_17, NULL);
			if (L_18)
			{
				goto IL_00d6_1;
			}
		}
		{
			int32_t L_19 = 1;
			V_0 = L_19;
			__this->___U3CU3E1__state_0 = L_19;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_20 = V_3;
			__this->___U3CU3Eu__1_4 = L_20;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_4), (void*)L_20);
			V_2 = __this;
			AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_21 = (&__this->___U3CU3Et__builder_1);
			AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_t215012C959CD172F79B53DB8FD8AF7C94461365A_m27CDC64364917CB12D38E1F518D90ABE0D41AEC2(L_21, (&V_3), (&V_2), AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_t215012C959CD172F79B53DB8FD8AF7C94461365A_m27CDC64364917CB12D38E1F518D90ABE0D41AEC2_RuntimeMethod_var);
			goto IL_010d;
		}

IL_00ba_1:
		{
			RuntimeObject* L_22 = __this->___U3CU3Eu__1_4;
			V_3 = ((ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9*)CastclassClass((RuntimeObject*)L_22, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var));
			__this->___U3CU3Eu__1_4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_4), (void*)NULL);
			int32_t L_23 = (-1);
			V_0 = L_23;
			__this->___U3CU3E1__state_0 = L_23;
		}

IL_00d6_1:
		{
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_24 = V_3;
			NullCheck(L_24);
			ETTask_GetResult_m4025996962517219AB63CD35458CEE581DF064E6(L_24, NULL);
			goto IL_00f9;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00df;
		}
		throw e;
	}

CATCH_00df:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_25 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_26 = V_4;
		AsyncETVoidMethodBuilder_SetException_m7F5356721EF2BCB40149B2F55B8E2590699EBAF5(L_25, L_26, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_010d;
	}// end catch (depth: 1)

IL_00f9:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_27 = (&__this->___U3CU3Et__builder_1);
		AsyncETVoidMethodBuilder_SetResult_m290D2A1FF93C5EB907BE4243F0E62E0CA49E760A(L_27, NULL);
	}

IL_010d:
	{
		return;
	}
}
// System.Void ET.ETTaskHelper/<>c__DisplayClass7_0/<<WaitAll>g__RunOneTask|0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_SetStateMachine_m77418E23AB1D2E544AC54CEE3CCEE6C313FECA88 (U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_t215012C959CD172F79B53DB8FD8AF7C94461365A* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_SetStateMachine_m77418E23AB1D2E544AC54CEE3CCEE6C313FECA88_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_SetStateMachine_m77418E23AB1D2E544AC54CEE3CCEE6C313FECA88_RuntimeMethod_var);
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
// System.Void ET.ETTaskHelper/<WaitAll>d__7::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAllU3Ed__7__ctor_mC9D64BD3E446DD25B5D1A7EE63D5A9971C7D04E4 (U3CWaitAllU3Ed__7_t42A9EA8D454E034E1F4930E62C69FAF897600C75* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaitAllU3Ed__7__ctor_mC9D64BD3E446DD25B5D1A7EE63D5A9971C7D04E4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(U3CWaitAllU3Ed__7__ctor_mC9D64BD3E446DD25B5D1A7EE63D5A9971C7D04E4_RuntimeMethod_var);
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void ET.ETTaskHelper/<WaitAll>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAllU3Ed__7_MoveNext_mC95FC8D1B850CC8694399E5759C1E281C0A17D2E (U3CWaitAllU3Ed__7_t42A9EA8D454E034E1F4930E62C69FAF897600C75* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETAsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CWaitAllU3Ed__7_t42A9EA8D454E034E1F4930E62C69FAF897600C75_m2590B34D5088AE2FA43296F11A7056C28A971258_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETAsyncTaskMethodBuilder_1_SetResult_mBAD14F0004B857E596693C614C5B29587E97021C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m2CF219B461F67CCD06F99FF3AFDEADC48A1BD26C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m8E225A51A6FD5B638EB3D77D976A473FB1C010B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mDE3732995809E5A4FABC3ACE34ADB9EDA62A6B09_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m058832077A5E305D1A30987EDF5EF94ABB118AB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m098A3FBEC846D65A6FA1C497181C458CB65EC608_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_0_tBFD52C26745A10D6A91728129D308A5FE9B05BFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaitAllU3Ed__7_MoveNext_mC95FC8D1B850CC8694399E5759C1E281C0A17D2E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(U3CWaitAllU3Ed__7_MoveNext_mC95FC8D1B850CC8694399E5759C1E281C0A17D2E_RuntimeMethod_var);
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 V_3;
	memset((&V_3), 0, sizeof(V_3));
	ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* V_4 = NULL;
	U3CWaitAllU3Ed__7_t42A9EA8D454E034E1F4930E62C69FAF897600C75* V_5 = NULL;
	Exception_t* V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c_1;
			}
		}
		{
			goto IL_0011_1;
		}

IL_000c_1:
		{
			goto IL_0114_1;
		}

IL_0011_1:
		{
			U3CU3Ec__DisplayClass7_0_tBFD52C26745A10D6A91728129D308A5FE9B05BFB* L_2 = (U3CU3Ec__DisplayClass7_0_tBFD52C26745A10D6A91728129D308A5FE9B05BFB*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass7_0_tBFD52C26745A10D6A91728129D308A5FE9B05BFB_il2cpp_TypeInfo_var);
			NullCheck(L_2);
			U3CU3Ec__DisplayClass7_0__ctor_mB1A6E483E0D64CB11B7D3E223DA45868106D2B5E(L_2, NULL);
			__this->___U3CU3E8__1_4 = L_2;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_4), (void*)L_2);
			// if (tasks.Count == 0)
			List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101* L_3 = __this->___tasks_2;
			NullCheck(L_3);
			int32_t L_4;
			L_4 = List_1_get_Count_m098A3FBEC846D65A6FA1C497181C458CB65EC608_inline(L_3, List_1_get_Count_m098A3FBEC846D65A6FA1C497181C458CB65EC608_RuntimeMethod_var);
			V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
			bool L_5 = V_2;
			if (!L_5)
			{
				goto IL_0037_1;
			}
		}
		{
			// return false;
			V_1 = (bool)0;
			goto IL_016c;
		}

IL_0037_1:
		{
			// CoroutineBlocker coroutineBlocker = new CoroutineBlocker(tasks.Count + 1);
			U3CU3Ec__DisplayClass7_0_tBFD52C26745A10D6A91728129D308A5FE9B05BFB* L_6 = __this->___U3CU3E8__1_4;
			List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101* L_7 = __this->___tasks_2;
			NullCheck(L_7);
			int32_t L_8;
			L_8 = List_1_get_Count_m098A3FBEC846D65A6FA1C497181C458CB65EC608_inline(L_7, List_1_get_Count_m098A3FBEC846D65A6FA1C497181C458CB65EC608_RuntimeMethod_var);
			CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* L_9 = (CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A*)il2cpp_codegen_object_new(CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A_il2cpp_TypeInfo_var);
			NullCheck(L_9);
			CoroutineBlocker__ctor_mC2DEAA1C928DA22578C4C3F820DD758ECAF79A52(L_9, ((int32_t)il2cpp_codegen_add(L_8, 1)), NULL);
			NullCheck(L_6);
			L_6->___coroutineBlocker_0 = L_9;
			Il2CppCodeGenWriteBarrier((void**)(&L_6->___coroutineBlocker_0), (void*)L_9);
			// foreach (ETTask task in tasks)
			List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101* L_10 = __this->___tasks_2;
			NullCheck(L_10);
			Enumerator_t05F9D6B822BE78199481DA0AA4B6B04FCC4968E9 L_11;
			L_11 = List_1_GetEnumerator_m058832077A5E305D1A30987EDF5EF94ABB118AB2(L_10, List_1_GetEnumerator_m058832077A5E305D1A30987EDF5EF94ABB118AB2_RuntimeMethod_var);
			__this->___U3CU3Es__2_5 = L_11;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Es__2_5))->____list_0), (void*)NULL);
			#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Es__2_5))->____current_3), (void*)NULL);
			#endif
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_00ab_1:
				{// begin finally (depth: 2)
					{
						int32_t L_12 = V_0;
						if ((((int32_t)L_12) >= ((int32_t)0)))
						{
							goto IL_00c1_1;
						}
					}
					{
						Enumerator_t05F9D6B822BE78199481DA0AA4B6B04FCC4968E9* L_13 = (&__this->___U3CU3Es__2_5);
						Enumerator_Dispose_m2CF219B461F67CCD06F99FF3AFDEADC48A1BD26C(L_13, Enumerator_Dispose_m2CF219B461F67CCD06F99FF3AFDEADC48A1BD26C_RuntimeMethod_var);
					}

IL_00c1_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					goto IL_009c_2;
				}

IL_0068_2:
				{
					// foreach (ETTask task in tasks)
					Enumerator_t05F9D6B822BE78199481DA0AA4B6B04FCC4968E9* L_14 = (&__this->___U3CU3Es__2_5);
					ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_15;
					L_15 = Enumerator_get_Current_mDE3732995809E5A4FABC3ACE34ADB9EDA62A6B09_inline(L_14, Enumerator_get_Current_mDE3732995809E5A4FABC3ACE34ADB9EDA62A6B09_RuntimeMethod_var);
					__this->___U3CtaskU3E5__3_6 = L_15;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtaskU3E5__3_6), (void*)L_15);
					// RunOneTask(task).Coroutine();
					U3CU3Ec__DisplayClass7_0_tBFD52C26745A10D6A91728129D308A5FE9B05BFB* L_16 = __this->___U3CU3E8__1_4;
					ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_17 = __this->___U3CtaskU3E5__3_6;
					NullCheck(L_16);
					ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 L_18;
					L_18 = U3CU3Ec__DisplayClass7_0_U3CWaitAllU3Eg__RunOneTaskU7C0_m4DE07DB51B9BBADB87B80C5BA20ADFD11C4264EB(L_16, L_17, NULL);
					V_3 = L_18;
					ETVoid_Coroutine_m7D69369538267F547E8D8AF8467A2806C5F6E6DA((&V_3), NULL);
					__this->___U3CtaskU3E5__3_6 = (ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9*)NULL;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtaskU3E5__3_6), (void*)(ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9*)NULL);
				}

IL_009c_2:
				{
					// foreach (ETTask task in tasks)
					Enumerator_t05F9D6B822BE78199481DA0AA4B6B04FCC4968E9* L_19 = (&__this->___U3CU3Es__2_5);
					bool L_20;
					L_20 = Enumerator_MoveNext_m8E225A51A6FD5B638EB3D77D976A473FB1C010B2(L_19, Enumerator_MoveNext_m8E225A51A6FD5B638EB3D77D976A473FB1C010B2_RuntimeMethod_var);
					if (L_20)
					{
						goto IL_0068_2;
					}
				}
				{
					goto IL_00c2_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_00c2_1:
		{
			Enumerator_t05F9D6B822BE78199481DA0AA4B6B04FCC4968E9* L_21 = (&__this->___U3CU3Es__2_5);
			il2cpp_codegen_initobj(L_21, sizeof(Enumerator_t05F9D6B822BE78199481DA0AA4B6B04FCC4968E9));
			// await coroutineBlocker.WaitAsync();
			U3CU3Ec__DisplayClass7_0_tBFD52C26745A10D6A91728129D308A5FE9B05BFB* L_22 = __this->___U3CU3E8__1_4;
			NullCheck(L_22);
			CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* L_23 = L_22->___coroutineBlocker_0;
			NullCheck(L_23);
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_24;
			L_24 = CoroutineBlocker_WaitAsync_m73943BDA099AA93BBD5EAEEA957B1FA94706C3DF(L_23, NULL);
			NullCheck(L_24);
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_25;
			L_25 = ETTask_GetAwaiter_m18704BF1223130E4441BED1DF784F584052E9F46(L_24, NULL);
			V_4 = L_25;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_26 = V_4;
			NullCheck(L_26);
			bool L_27;
			L_27 = ETTask_get_IsCompleted_mC46408CF8CDBC0122E679473EDB14A9BA55A13F2(L_26, NULL);
			if (L_27)
			{
				goto IL_0131_1;
			}
		}
		{
			int32_t L_28 = 0;
			V_0 = L_28;
			__this->___U3CU3E1__state_0 = L_28;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_29 = V_4;
			__this->___U3CU3Eu__1_7 = L_29;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_7), (void*)L_29);
			V_5 = __this;
			ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* L_30 = (&__this->___U3CU3Et__builder_1);
			ETAsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CWaitAllU3Ed__7_t42A9EA8D454E034E1F4930E62C69FAF897600C75_m2590B34D5088AE2FA43296F11A7056C28A971258(L_30, (&V_4), (&V_5), ETAsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CWaitAllU3Ed__7_t42A9EA8D454E034E1F4930E62C69FAF897600C75_m2590B34D5088AE2FA43296F11A7056C28A971258_RuntimeMethod_var);
			goto IL_0188;
		}

IL_0114_1:
		{
			RuntimeObject* L_31 = __this->___U3CU3Eu__1_7;
			V_4 = ((ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9*)CastclassClass((RuntimeObject*)L_31, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var));
			__this->___U3CU3Eu__1_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_7), (void*)NULL);
			int32_t L_32 = (-1);
			V_0 = L_32;
			__this->___U3CU3E1__state_0 = L_32;
		}

IL_0131_1:
		{
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_33 = V_4;
			NullCheck(L_33);
			ETTask_GetResult_m4025996962517219AB63CD35458CEE581DF064E6(L_33, NULL);
			// return !cancellationToken.IsCancel();
			ETCancellationToken_tACA8F146EDE95371894D92DF0FD89C07C08886E1* L_34 = __this->___cancellationToken_3;
			bool L_35;
			L_35 = ETTaskHelper_IsCancel_mDF0D4F9A92B59AC77F15CE6E34F4D13A13C5EC14(L_34, NULL);
			V_1 = (bool)((((int32_t)L_35) == ((int32_t)0))? 1 : 0);
			goto IL_016c;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_014b;
		}
		throw e;
	}

CATCH_014b:
	{// begin catch(System.Exception)
		V_6 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CU3E8__1_4 = (U3CU3Ec__DisplayClass7_0_tBFD52C26745A10D6A91728129D308A5FE9B05BFB*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_4), (void*)(U3CU3Ec__DisplayClass7_0_tBFD52C26745A10D6A91728129D308A5FE9B05BFB*)NULL);
		ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* L_36 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_37 = V_6;
		ETAsyncTaskMethodBuilder_1_SetException_m4B20AE5BD8F1E608AAD3970CB6C2985ACB4D6B08(L_36, L_37, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ETAsyncTaskMethodBuilder_1_SetException_m4B20AE5BD8F1E608AAD3970CB6C2985ACB4D6B08_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0188;
	}// end catch (depth: 1)

IL_016c:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CU3E8__1_4 = (U3CU3Ec__DisplayClass7_0_tBFD52C26745A10D6A91728129D308A5FE9B05BFB*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_4), (void*)(U3CU3Ec__DisplayClass7_0_tBFD52C26745A10D6A91728129D308A5FE9B05BFB*)NULL);
		ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* L_38 = (&__this->___U3CU3Et__builder_1);
		bool L_39 = V_1;
		ETAsyncTaskMethodBuilder_1_SetResult_mBAD14F0004B857E596693C614C5B29587E97021C(L_38, L_39, ETAsyncTaskMethodBuilder_1_SetResult_mBAD14F0004B857E596693C614C5B29587E97021C_RuntimeMethod_var);
	}

IL_0188:
	{
		return;
	}
}
// System.Void ET.ETTaskHelper/<WaitAll>d__7::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAllU3Ed__7_SetStateMachine_m6E8218E47D96B5D42555FBAE7983D4EA4EC68533 (U3CWaitAllU3Ed__7_t42A9EA8D454E034E1F4930E62C69FAF897600C75* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaitAllU3Ed__7_SetStateMachine_m6E8218E47D96B5D42555FBAE7983D4EA4EC68533_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(U3CWaitAllU3Ed__7_SetStateMachine_m6E8218E47D96B5D42555FBAE7983D4EA4EC68533_RuntimeMethod_var);
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
// System.Void ET.ETVoid::Coroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETVoid_Coroutine_m7D69369538267F547E8D8AF8467A2806C5F6E6DA (ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETVoid_Coroutine_m7D69369538267F547E8D8AF8467A2806C5F6E6DA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(ETVoid_Coroutine_m7D69369538267F547E8D8AF8467A2806C5F6E6DA_RuntimeMethod_var);
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ETVoid_Coroutine_m7D69369538267F547E8D8AF8467A2806C5F6E6DA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38*>(__this + _offset);
	ETVoid_Coroutine_m7D69369538267F547E8D8AF8467A2806C5F6E6DA(_thisAdjusted, method);
}
// System.Boolean ET.ETVoid::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ETVoid_get_IsCompleted_m6EC6117D7E6C71F1ABDA3DD9BFA990560A812572 (ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETVoid_get_IsCompleted_m6EC6117D7E6C71F1ABDA3DD9BFA990560A812572_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(ETVoid_get_IsCompleted_m6EC6117D7E6C71F1ABDA3DD9BFA990560A812572_RuntimeMethod_var);
	{
		// public bool IsCompleted => true;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool ETVoid_get_IsCompleted_m6EC6117D7E6C71F1ABDA3DD9BFA990560A812572_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38*>(__this + _offset);
	bool _returnValue;
	_returnValue = ETVoid_get_IsCompleted_m6EC6117D7E6C71F1ABDA3DD9BFA990560A812572(_thisAdjusted, method);
	return _returnValue;
}
// System.Void ET.ETVoid::OnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETVoid_OnCompleted_mE2A013466ABE3DE81D7193A13C5A88F902274170 (ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETVoid_OnCompleted_mE2A013466ABE3DE81D7193A13C5A88F902274170_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(ETVoid_OnCompleted_mE2A013466ABE3DE81D7193A13C5A88F902274170_RuntimeMethod_var);
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ETVoid_OnCompleted_mE2A013466ABE3DE81D7193A13C5A88F902274170_AdjustorThunk (RuntimeObject* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method)
{
	ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38*>(__this + _offset);
	ETVoid_OnCompleted_mE2A013466ABE3DE81D7193A13C5A88F902274170(_thisAdjusted, ___0_continuation, method);
}
// System.Void ET.ETVoid::UnsafeOnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETVoid_UnsafeOnCompleted_mBA7A78A207BDC8D1E2AD8B0D957316B36D224213 (ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETVoid_UnsafeOnCompleted_mBA7A78A207BDC8D1E2AD8B0D957316B36D224213_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(ETVoid_UnsafeOnCompleted_mBA7A78A207BDC8D1E2AD8B0D957316B36D224213_RuntimeMethod_var);
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ETVoid_UnsafeOnCompleted_mBA7A78A207BDC8D1E2AD8B0D957316B36D224213_AdjustorThunk (RuntimeObject* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method)
{
	ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38*>(__this + _offset);
	ETVoid_UnsafeOnCompleted_mBA7A78A207BDC8D1E2AD8B0D957316B36D224213(_thisAdjusted, ___0_continuation, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t KcpOutput_Invoke_m0D17200A85788343ECCC96D489F76518974662A5_Multicast(KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732* __this, intptr_t ___0_buf, int32_t ___1_len, intptr_t ___2_kcp, intptr_t ___3_user, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732* currentDelegate = reinterpret_cast<KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, intptr_t, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_buf, ___1_len, ___2_kcp, ___3_user, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t KcpOutput_Invoke_m0D17200A85788343ECCC96D489F76518974662A5_OpenInst(KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732* __this, intptr_t ___0_buf, int32_t ___1_len, intptr_t ___2_kcp, intptr_t ___3_user, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, int32_t, intptr_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_buf, ___1_len, ___2_kcp, ___3_user, method);
}
int32_t KcpOutput_Invoke_m0D17200A85788343ECCC96D489F76518974662A5_OpenStatic(KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732* __this, intptr_t ___0_buf, int32_t ___1_len, intptr_t ___2_kcp, intptr_t ___3_user, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, int32_t, intptr_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_buf, ___1_len, ___2_kcp, ___3_user, method);
}
int32_t KcpOutput_Invoke_m0D17200A85788343ECCC96D489F76518974662A5_OpenStaticInvoker(KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732* __this, intptr_t ___0_buf, int32_t ___1_len, intptr_t ___2_kcp, intptr_t ___3_user, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, intptr_t, int32_t, intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_buf, ___1_len, ___2_kcp, ___3_user);
}
int32_t KcpOutput_Invoke_m0D17200A85788343ECCC96D489F76518974662A5_ClosedStaticInvoker(KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732* __this, intptr_t ___0_buf, int32_t ___1_len, intptr_t ___2_kcp, intptr_t ___3_user, const RuntimeMethod* method)
{
	return InvokerFuncInvoker5< int32_t, RuntimeObject*, intptr_t, int32_t, intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_buf, ___1_len, ___2_kcp, ___3_user);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732 (KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732* __this, intptr_t ___0_buf, int32_t ___1_len, intptr_t ___2_kcp, intptr_t ___3_user, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)(intptr_t, int32_t, intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_buf, ___1_len, ___2_kcp, ___3_user);

	return returnValue;
}
// System.Void ET.KcpOutput::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpOutput__ctor_m352C858407C59680A6115553DB22CF7DBD0EC979 (KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KcpOutput__ctor_m352C858407C59680A6115553DB22CF7DBD0EC979_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(KcpOutput__ctor_m352C858407C59680A6115553DB22CF7DBD0EC979_RuntimeMethod_var);
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
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
				__this->___invoke_impl_1 = (intptr_t)&KcpOutput_Invoke_m0D17200A85788343ECCC96D489F76518974662A5_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&KcpOutput_Invoke_m0D17200A85788343ECCC96D489F76518974662A5_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&KcpOutput_Invoke_m0D17200A85788343ECCC96D489F76518974662A5_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&KcpOutput_Invoke_m0D17200A85788343ECCC96D489F76518974662A5_Multicast;
}
// System.Int32 ET.KcpOutput::Invoke(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KcpOutput_Invoke_m0D17200A85788343ECCC96D489F76518974662A5 (KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732* __this, intptr_t ___0_buf, int32_t ___1_len, intptr_t ___2_kcp, intptr_t ___3_user, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KcpOutput_Invoke_m0D17200A85788343ECCC96D489F76518974662A5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(KcpOutput_Invoke_m0D17200A85788343ECCC96D489F76518974662A5_RuntimeMethod_var);
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, intptr_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_buf, ___1_len, ___2_kcp, ___3_user, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ET.KcpOutput::BeginInvoke(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* KcpOutput_BeginInvoke_m530C0B87F4EB9F8B4883975895FF9E8D09FF65EF (KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732* __this, intptr_t ___0_buf, int32_t ___1_len, intptr_t ___2_kcp, intptr_t ___3_user, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___4_callback, RuntimeObject* ___5_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KcpOutput_BeginInvoke_m530C0B87F4EB9F8B4883975895FF9E8D09FF65EF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(KcpOutput_BeginInvoke_m530C0B87F4EB9F8B4883975895FF9E8D09FF65EF_RuntimeMethod_var);
	void *__d_args[5] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_buf);
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___1_len);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___2_kcp);
	__d_args[3] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___3_user);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___4_callback, (RuntimeObject*)___5_object);
}
// System.Int32 ET.KcpOutput::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KcpOutput_EndInvoke_mE9A16D749003A839866D6DE9A11DC52C47C83D24 (KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KcpOutput_EndInvoke_mE9A16D749003A839866D6DE9A11DC52C47C83D24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(KcpOutput_EndInvoke_mE9A16D749003A839866D6DE9A11DC52C47C83D24_RuntimeMethod_var);
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
void KcpLog_Invoke_mF30BC38D82257CB8527D6E2CBCBAA2081B5FC074_Multicast(KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F* __this, intptr_t ___0_buf, int32_t ___1_len, intptr_t ___2_kcp, intptr_t ___3_user, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F* currentDelegate = reinterpret_cast<KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, intptr_t, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_buf, ___1_len, ___2_kcp, ___3_user, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void KcpLog_Invoke_mF30BC38D82257CB8527D6E2CBCBAA2081B5FC074_OpenInst(KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F* __this, intptr_t ___0_buf, int32_t ___1_len, intptr_t ___2_kcp, intptr_t ___3_user, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int32_t, intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_buf, ___1_len, ___2_kcp, ___3_user, method);
}
void KcpLog_Invoke_mF30BC38D82257CB8527D6E2CBCBAA2081B5FC074_OpenStatic(KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F* __this, intptr_t ___0_buf, int32_t ___1_len, intptr_t ___2_kcp, intptr_t ___3_user, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int32_t, intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_buf, ___1_len, ___2_kcp, ___3_user, method);
}
void KcpLog_Invoke_mF30BC38D82257CB8527D6E2CBCBAA2081B5FC074_OpenStaticInvoker(KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F* __this, intptr_t ___0_buf, int32_t ___1_len, intptr_t ___2_kcp, intptr_t ___3_user, const RuntimeMethod* method)
{
	InvokerActionInvoker4< intptr_t, int32_t, intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_buf, ___1_len, ___2_kcp, ___3_user);
}
void KcpLog_Invoke_mF30BC38D82257CB8527D6E2CBCBAA2081B5FC074_ClosedStaticInvoker(KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F* __this, intptr_t ___0_buf, int32_t ___1_len, intptr_t ___2_kcp, intptr_t ___3_user, const RuntimeMethod* method)
{
	InvokerActionInvoker5< RuntimeObject*, intptr_t, int32_t, intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_buf, ___1_len, ___2_kcp, ___3_user);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F (KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F* __this, intptr_t ___0_buf, int32_t ___1_len, intptr_t ___2_kcp, intptr_t ___3_user, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, int32_t, intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_buf, ___1_len, ___2_kcp, ___3_user);

}
// System.Void ET.KcpLog::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpLog__ctor_m6121C293C59A8EA0CAE5913857B1396DBFC0CDC8 (KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KcpLog__ctor_m6121C293C59A8EA0CAE5913857B1396DBFC0CDC8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(KcpLog__ctor_m6121C293C59A8EA0CAE5913857B1396DBFC0CDC8_RuntimeMethod_var);
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
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
				__this->___invoke_impl_1 = (intptr_t)&KcpLog_Invoke_mF30BC38D82257CB8527D6E2CBCBAA2081B5FC074_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&KcpLog_Invoke_mF30BC38D82257CB8527D6E2CBCBAA2081B5FC074_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&KcpLog_Invoke_mF30BC38D82257CB8527D6E2CBCBAA2081B5FC074_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&KcpLog_Invoke_mF30BC38D82257CB8527D6E2CBCBAA2081B5FC074_Multicast;
}
// System.Void ET.KcpLog::Invoke(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpLog_Invoke_mF30BC38D82257CB8527D6E2CBCBAA2081B5FC074 (KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F* __this, intptr_t ___0_buf, int32_t ___1_len, intptr_t ___2_kcp, intptr_t ___3_user, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KcpLog_Invoke_mF30BC38D82257CB8527D6E2CBCBAA2081B5FC074_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(KcpLog_Invoke_mF30BC38D82257CB8527D6E2CBCBAA2081B5FC074_RuntimeMethod_var);
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_buf, ___1_len, ___2_kcp, ___3_user, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ET.KcpLog::BeginInvoke(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* KcpLog_BeginInvoke_m1712EEC7A9E73AC66BC49E0420EA58DD3B1BD9DD (KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F* __this, intptr_t ___0_buf, int32_t ___1_len, intptr_t ___2_kcp, intptr_t ___3_user, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___4_callback, RuntimeObject* ___5_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KcpLog_BeginInvoke_m1712EEC7A9E73AC66BC49E0420EA58DD3B1BD9DD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(KcpLog_BeginInvoke_m1712EEC7A9E73AC66BC49E0420EA58DD3B1BD9DD_RuntimeMethod_var);
	void *__d_args[5] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_buf);
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___1_len);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___2_kcp);
	__d_args[3] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___3_user);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___4_callback, (RuntimeObject*)___5_object);
}
// System.Void ET.KcpLog::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpLog_EndInvoke_m16B40206957AFDE3E0DA26112CC4BC3D6E3C77A1 (KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KcpLog_EndInvoke_m16B40206957AFDE3E0DA26112CC4BC3D6E3C77A1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(KcpLog_EndInvoke_m16B40206957AFDE3E0DA26112CC4BC3D6E3C77A1_RuntimeMethod_var);
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
// System.UInt32 ET.Kcp::ikcp_check(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Kcp_ikcp_check_m622BAB3EF82B3FA0D37104F8F36F075F47EACD2C (intptr_t ___0_kcp, uint32_t ___1_current, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Kcp_ikcp_check_m622BAB3EF82B3FA0D37104F8F36F075F47EACD2C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Kcp_ikcp_check_m622BAB3EF82B3FA0D37104F8F36F075F47EACD2C_RuntimeMethod_var);
	typedef uint32_t (CDECL *PInvokeFunc) (intptr_t, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kcp_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kcp"), "ikcp_check", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
	uint32_t returnValue = reinterpret_cast<PInvokeFunc>(ikcp_check)(___0_kcp, ___1_current);
	#else
	uint32_t returnValue = il2cppPInvokeFunc(___0_kcp, ___1_current);
	#endif

	return returnValue;
}
// System.IntPtr ET.Kcp::ikcp_create(System.UInt32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Kcp_ikcp_create_m65B289D9825C3E8701AAF805408A5C089A16AD0D (uint32_t ___0_conv, intptr_t ___1_user, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Kcp_ikcp_create_m65B289D9825C3E8701AAF805408A5C089A16AD0D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Kcp_ikcp_create_m65B289D9825C3E8701AAF805408A5C089A16AD0D_RuntimeMethod_var);
	typedef intptr_t (CDECL *PInvokeFunc) (uint32_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kcp_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint32_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kcp"), "ikcp_create", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ikcp_create)(___0_conv, ___1_user);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_conv, ___1_user);
	#endif

	return returnValue;
}
// System.Void ET.Kcp::ikcp_flush(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_ikcp_flush_m379F0AB1930C706120A548693C76BB8439108F7A (intptr_t ___0_kcp, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Kcp_ikcp_flush_m379F0AB1930C706120A548693C76BB8439108F7A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Kcp_ikcp_flush_m379F0AB1930C706120A548693C76BB8439108F7A_RuntimeMethod_var);
	typedef void (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kcp_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kcp"), "ikcp_flush", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
	reinterpret_cast<PInvokeFunc>(ikcp_flush)(___0_kcp);
	#else
	il2cppPInvokeFunc(___0_kcp);
	#endif

}
// System.UInt32 ET.Kcp::ikcp_getconv(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Kcp_ikcp_getconv_m7CFD0C1FEF4825D838B385697A49B61A9D3919F7 (intptr_t ___0_ptr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Kcp_ikcp_getconv_m7CFD0C1FEF4825D838B385697A49B61A9D3919F7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Kcp_ikcp_getconv_m7CFD0C1FEF4825D838B385697A49B61A9D3919F7_RuntimeMethod_var);
	typedef uint32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kcp_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kcp"), "ikcp_getconv", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
	uint32_t returnValue = reinterpret_cast<PInvokeFunc>(ikcp_getconv)(___0_ptr);
	#else
	uint32_t returnValue = il2cppPInvokeFunc(___0_ptr);
	#endif

	return returnValue;
}
// System.Int32 ET.Kcp::ikcp_input(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_ikcp_input_mD236CC30373194C4027A7BD6E2561115DB933127 (intptr_t ___0_kcp, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_data, int32_t ___2_offset, int32_t ___3_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Kcp_ikcp_input_mD236CC30373194C4027A7BD6E2561115DB933127_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Kcp_ikcp_input_mD236CC30373194C4027A7BD6E2561115DB933127_RuntimeMethod_var);
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, uint8_t*, int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kcp_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kcp"), "ikcp_input", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_data' to native representation
	uint8_t* ____1_data_marshaled = NULL;
	if (___1_data != NULL)
	{
		____1_data_marshaled = reinterpret_cast<uint8_t*>((___1_data)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ikcp_input)(___0_kcp, ____1_data_marshaled, ___2_offset, ___3_size);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_kcp, ____1_data_marshaled, ___2_offset, ___3_size);
	#endif

	return returnValue;
}
// System.Int32 ET.Kcp::ikcp_nodelay(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_ikcp_nodelay_m2AA1F18619F35C9787E1E849E2856BFDBA7AAB54 (intptr_t ___0_kcp, int32_t ___1_nodelay, int32_t ___2_interval, int32_t ___3_resend, int32_t ___4_nc, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Kcp_ikcp_nodelay_m2AA1F18619F35C9787E1E849E2856BFDBA7AAB54_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Kcp_ikcp_nodelay_m2AA1F18619F35C9787E1E849E2856BFDBA7AAB54_RuntimeMethod_var);
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t, int32_t, int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kcp_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(int32_t) + sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kcp"), "ikcp_nodelay", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ikcp_nodelay)(___0_kcp, ___1_nodelay, ___2_interval, ___3_resend, ___4_nc);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_kcp, ___1_nodelay, ___2_interval, ___3_resend, ___4_nc);
	#endif

	return returnValue;
}
// System.Int32 ET.Kcp::ikcp_peeksize(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_ikcp_peeksize_mF034ED89B138DB85D35CF6F55AE701F9A6A26A71 (intptr_t ___0_kcp, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Kcp_ikcp_peeksize_mF034ED89B138DB85D35CF6F55AE701F9A6A26A71_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Kcp_ikcp_peeksize_mF034ED89B138DB85D35CF6F55AE701F9A6A26A71_RuntimeMethod_var);
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kcp_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kcp"), "ikcp_peeksize", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ikcp_peeksize)(___0_kcp);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_kcp);
	#endif

	return returnValue;
}
// System.Int32 ET.Kcp::ikcp_recv(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_ikcp_recv_m4282CB4E958BB4A5802CE6FDC8DB4BD496B78996 (intptr_t ___0_kcp, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_buffer, int32_t ___2_index, int32_t ___3_len, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Kcp_ikcp_recv_m4282CB4E958BB4A5802CE6FDC8DB4BD496B78996_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Kcp_ikcp_recv_m4282CB4E958BB4A5802CE6FDC8DB4BD496B78996_RuntimeMethod_var);
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, uint8_t*, int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kcp_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kcp"), "ikcp_recv", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_buffer' to native representation
	uint8_t* ____1_buffer_marshaled = NULL;
	if (___1_buffer != NULL)
	{
		____1_buffer_marshaled = reinterpret_cast<uint8_t*>((___1_buffer)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ikcp_recv)(___0_kcp, ____1_buffer_marshaled, ___2_index, ___3_len);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_kcp, ____1_buffer_marshaled, ___2_index, ___3_len);
	#endif

	return returnValue;
}
// System.Void ET.Kcp::ikcp_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_ikcp_release_mFEDEE6822FB19DD4DBA737A9530D29D8AA7CE7BB (intptr_t ___0_kcp, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Kcp_ikcp_release_mFEDEE6822FB19DD4DBA737A9530D29D8AA7CE7BB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Kcp_ikcp_release_mFEDEE6822FB19DD4DBA737A9530D29D8AA7CE7BB_RuntimeMethod_var);
	typedef void (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kcp_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kcp"), "ikcp_release", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
	reinterpret_cast<PInvokeFunc>(ikcp_release)(___0_kcp);
	#else
	il2cppPInvokeFunc(___0_kcp);
	#endif

}
// System.Int32 ET.Kcp::ikcp_send(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_ikcp_send_mC9AAFA8AC4B349A97A368AFA829D77E55C8682A4 (intptr_t ___0_kcp, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_buffer, int32_t ___2_offset, int32_t ___3_len, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Kcp_ikcp_send_mC9AAFA8AC4B349A97A368AFA829D77E55C8682A4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Kcp_ikcp_send_mC9AAFA8AC4B349A97A368AFA829D77E55C8682A4_RuntimeMethod_var);
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, uint8_t*, int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kcp_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kcp"), "ikcp_send", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_buffer' to native representation
	uint8_t* ____1_buffer_marshaled = NULL;
	if (___1_buffer != NULL)
	{
		____1_buffer_marshaled = reinterpret_cast<uint8_t*>((___1_buffer)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ikcp_send)(___0_kcp, ____1_buffer_marshaled, ___2_offset, ___3_len);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_kcp, ____1_buffer_marshaled, ___2_offset, ___3_len);
	#endif

	return returnValue;
}
// System.Void ET.Kcp::ikcp_setminrto(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_ikcp_setminrto_m6BA2CC874C011FD9ADF9B6D324114B074BED1E3C (intptr_t ___0_ptr, int32_t ___1_minrto, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Kcp_ikcp_setminrto_m6BA2CC874C011FD9ADF9B6D324114B074BED1E3C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Kcp_ikcp_setminrto_m6BA2CC874C011FD9ADF9B6D324114B074BED1E3C_RuntimeMethod_var);
	typedef void (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kcp_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kcp"), "ikcp_setminrto", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
	reinterpret_cast<PInvokeFunc>(ikcp_setminrto)(___0_ptr, ___1_minrto);
	#else
	il2cppPInvokeFunc(___0_ptr, ___1_minrto);
	#endif

}
// System.Int32 ET.Kcp::ikcp_setmtu(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_ikcp_setmtu_m603F2EA8751291C312C84A8C967E8D576ABED42B (intptr_t ___0_kcp, int32_t ___1_mtu, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Kcp_ikcp_setmtu_m603F2EA8751291C312C84A8C967E8D576ABED42B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Kcp_ikcp_setmtu_m603F2EA8751291C312C84A8C967E8D576ABED42B_RuntimeMethod_var);
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kcp_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kcp"), "ikcp_setmtu", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ikcp_setmtu)(___0_kcp, ___1_mtu);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_kcp, ___1_mtu);
	#endif

	return returnValue;
}
// System.Void ET.Kcp::ikcp_setoutput(ET.KcpOutput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_ikcp_setoutput_m641E9841DD1F17DE384A86F91F1B76E4CE3BB900 (KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732* ___0_output, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Kcp_ikcp_setoutput_m641E9841DD1F17DE384A86F91F1B76E4CE3BB900_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Kcp_ikcp_setoutput_m641E9841DD1F17DE384A86F91F1B76E4CE3BB900_RuntimeMethod_var);
	typedef void (CDECL *PInvokeFunc) (Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kcp_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kcp"), "ikcp_setoutput", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_output' to native representation
	Il2CppMethodPointer ____0_output_marshaled = NULL;
	____0_output_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___0_output));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
	reinterpret_cast<PInvokeFunc>(ikcp_setoutput)(____0_output_marshaled);
	#else
	il2cppPInvokeFunc(____0_output_marshaled);
	#endif

}
// System.Void ET.Kcp::ikcp_setlog(ET.KcpLog)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_ikcp_setlog_m15CF697BD5FBF75AA0C6D0E1D3A8E88846D56A9F (KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F* ___0_log, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Kcp_ikcp_setlog_m15CF697BD5FBF75AA0C6D0E1D3A8E88846D56A9F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Kcp_ikcp_setlog_m15CF697BD5FBF75AA0C6D0E1D3A8E88846D56A9F_RuntimeMethod_var);
	typedef void (CDECL *PInvokeFunc) (Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kcp_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kcp"), "ikcp_setlog", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_log' to native representation
	Il2CppMethodPointer ____0_log_marshaled = NULL;
	____0_log_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___0_log));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
	reinterpret_cast<PInvokeFunc>(ikcp_setlog)(____0_log_marshaled);
	#else
	il2cppPInvokeFunc(____0_log_marshaled);
	#endif

}
// System.Void ET.Kcp::ikcp_update(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_ikcp_update_mFF3FA1FF289B9117348C6790BA46AF52E0760E29 (intptr_t ___0_kcp, uint32_t ___1_current, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Kcp_ikcp_update_mFF3FA1FF289B9117348C6790BA46AF52E0760E29_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Kcp_ikcp_update_mFF3FA1FF289B9117348C6790BA46AF52E0760E29_RuntimeMethod_var);
	typedef void (CDECL *PInvokeFunc) (intptr_t, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kcp_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kcp"), "ikcp_update", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
	reinterpret_cast<PInvokeFunc>(ikcp_update)(___0_kcp, ___1_current);
	#else
	il2cppPInvokeFunc(___0_kcp, ___1_current);
	#endif

}
// System.Int32 ET.Kcp::ikcp_waitsnd(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_ikcp_waitsnd_mB8BCFAC87034508D3392ADDA415892C4AE41B4F4 (intptr_t ___0_kcp, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Kcp_ikcp_waitsnd_mB8BCFAC87034508D3392ADDA415892C4AE41B4F4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Kcp_ikcp_waitsnd_mB8BCFAC87034508D3392ADDA415892C4AE41B4F4_RuntimeMethod_var);
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kcp_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kcp"), "ikcp_waitsnd", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ikcp_waitsnd)(___0_kcp);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_kcp);
	#endif

	return returnValue;
}
// System.Int32 ET.Kcp::ikcp_wndsize(System.IntPtr,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_ikcp_wndsize_m32F6D50A19B5381B060FAF4A24C8859BAF7EB3CB (intptr_t ___0_kcp, int32_t ___1_sndwnd, int32_t ___2_rcvwnd, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Kcp_ikcp_wndsize_m32F6D50A19B5381B060FAF4A24C8859BAF7EB3CB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Kcp_ikcp_wndsize_m32F6D50A19B5381B060FAF4A24C8859BAF7EB3CB_RuntimeMethod_var);
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kcp_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kcp"), "ikcp_wndsize", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ikcp_wndsize)(___0_kcp, ___1_sndwnd, ___2_rcvwnd);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_kcp, ___1_sndwnd, ___2_rcvwnd);
	#endif

	return returnValue;
}
// System.UInt32 ET.Kcp::KcpCheck(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Kcp_KcpCheck_mFF5699B461298AC1FC2BDDB193A8B265C42A5B11 (intptr_t ___0_kcp, uint32_t ___1_current, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Kcp_KcpCheck_mFF5699B461298AC1FC2BDDB193A8B265C42A5B11_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Kcp_KcpCheck_mFF5699B461298AC1FC2BDDB193A8B265C42A5B11_RuntimeMethod_var);
	uint32_t V_0 = 0;
	bool V_1 = false;
	uint32_t V_2 = 0;
	{
		// if (kcp == IntPtr.Zero)
		intptr_t L_0 = ___0_kcp;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		// throw new Exception($"kcp error, kcp point is zero");
		Exception_t* L_4 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFCE88E0B4651EFA0D8F7973A07C513EC28038096)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Kcp_KcpCheck_mFF5699B461298AC1FC2BDDB193A8B265C42A5B11_RuntimeMethod_var)));
	}

IL_001c:
	{
		// uint ret = ikcp_check(kcp, current);
		intptr_t L_5 = ___0_kcp;
		uint32_t L_6 = ___1_current;
		uint32_t L_7;
		L_7 = Kcp_ikcp_check_m622BAB3EF82B3FA0D37104F8F36F075F47EACD2C(L_5, L_6, NULL);
		V_0 = L_7;
		// return ret;
		uint32_t L_8 = V_0;
		V_2 = L_8;
		goto IL_0028;
	}

IL_0028:
	{
		// }
		uint32_t L_9 = V_2;
		return L_9;
	}
}
// System.IntPtr ET.Kcp::KcpCreate(System.UInt32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Kcp_KcpCreate_mFB6C10BC1F2873F05BA660C3627CC9C8D454F925 (uint32_t ___0_conv, intptr_t ___1_user, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Kcp_KcpCreate_mFB6C10BC1F2873F05BA660C3627CC9C8D454F925_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Kcp_KcpCreate_mFB6C10BC1F2873F05BA660C3627CC9C8D454F925_RuntimeMethod_var);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return ikcp_create(conv, user);
		uint32_t L_0 = ___0_conv;
		intptr_t L_1 = ___1_user;
		intptr_t L_2;
		L_2 = Kcp_ikcp_create_m65B289D9825C3E8701AAF805408A5C089A16AD0D(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		// }
		intptr_t L_3 = V_0;
		return L_3;
	}
}
// System.Void ET.Kcp::KcpFlush(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_KcpFlush_m0D37EEA2AAF1E2B7445CCD3ADC0CBBF9DB909283 (intptr_t ___0_kcp, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Kcp_KcpFlush_m0D37EEA2AAF1E2B7445CCD3ADC0CBBF9DB909283_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Kcp_KcpFlush_m0D37EEA2AAF1E2B7445CCD3ADC0CBBF9DB909283_RuntimeMethod_var);
	bool V_0 = false;
	{
		// if (kcp == IntPtr.Zero)
		intptr_t L_0 = ___0_kcp;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		// throw new Exception($"kcp error, kcp point is zero");
		Exception_t* L_4 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFCE88E0B4651EFA0D8F7973A07C513EC28038096)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Kcp_KcpFlush_m0D37EEA2AAF1E2B7445CCD3ADC0CBBF9DB909283_RuntimeMethod_var)));
	}

IL_001c:
	{
		// ikcp_flush(kcp);
		intptr_t L_5 = ___0_kcp;
		Kcp_ikcp_flush_m379F0AB1930C706120A548693C76BB8439108F7A(L_5, NULL);
		// }
		return;
	}
}
// System.UInt32 ET.Kcp::KcpGetconv(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Kcp_KcpGetconv_m75E390D675FD17CE5129D2E92EBAB2A3C7744B0D (intptr_t ___0_ptr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Kcp_KcpGetconv_m75E390D675FD17CE5129D2E92EBAB2A3C7744B0D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Kcp_KcpGetconv_m75E390D675FD17CE5129D2E92EBAB2A3C7744B0D_RuntimeMethod_var);
	bool V_0 = false;
	uint32_t V_1 = 0;
	{
		// if (ptr == IntPtr.Zero)
		intptr_t L_0 = ___0_ptr;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		// throw new Exception($"kcp error, kcp point is zero");
		Exception_t* L_4 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFCE88E0B4651EFA0D8F7973A07C513EC28038096)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Kcp_KcpGetconv_m75E390D675FD17CE5129D2E92EBAB2A3C7744B0D_RuntimeMethod_var)));
	}

IL_001c:
	{
		// return ikcp_getconv(ptr);
		intptr_t L_5 = ___0_ptr;
		uint32_t L_6;
		L_6 = Kcp_ikcp_getconv_m7CFD0C1FEF4825D838B385697A49B61A9D3919F7(L_5, NULL);
		V_1 = L_6;
		goto IL_0025;
	}

IL_0025:
	{
		// }
		uint32_t L_7 = V_1;
		return L_7;
	}
}
// System.Int32 ET.Kcp::KcpInput(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_KcpInput_mDEAA6D3D2FEC0B5472CB3FAE978ED5DD9F049E8A (intptr_t ___0_kcp, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_buffer, int32_t ___2_offset, int32_t ___3_len, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Kcp_KcpInput_mDEAA6D3D2FEC0B5472CB3FAE978ED5DD9F049E8A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Kcp_KcpInput_mDEAA6D3D2FEC0B5472CB3FAE978ED5DD9F049E8A_RuntimeMethod_var);
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		// if (kcp == IntPtr.Zero)
		intptr_t L_0 = ___0_kcp;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		// throw new Exception($"kcp error, kcp point is zero");
		Exception_t* L_4 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFCE88E0B4651EFA0D8F7973A07C513EC28038096)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Kcp_KcpInput_mDEAA6D3D2FEC0B5472CB3FAE978ED5DD9F049E8A_RuntimeMethod_var)));
	}

IL_001c:
	{
		// if (offset + len > buffer.Length)
		int32_t L_5 = ___2_offset;
		int32_t L_6 = ___3_len;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___1_buffer;
		NullCheck(L_7);
		V_2 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add(L_5, L_6))) > ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_004d;
		}
	}
	{
		// throw new Exception($"kcp error, KcpInput {buffer.Length} {offset} {len}");
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___1_buffer;
		NullCheck(L_9);
		int32_t L_10 = ((int32_t)(((RuntimeArray*)L_9)->max_length));
		RuntimeObject* L_11 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_10);
		int32_t L_12 = ___2_offset;
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_13);
		int32_t L_15 = ___3_len;
		int32_t L_16 = L_15;
		RuntimeObject* L_17 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_16);
		String_t* L_18;
		L_18 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF5B17BC8CAFB0366DD8D8EA29F1A2C07CCE73DC5)), L_11, L_14, L_17, NULL);
		Exception_t* L_19 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_19);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_19, L_18, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Kcp_KcpInput_mDEAA6D3D2FEC0B5472CB3FAE978ED5DD9F049E8A_RuntimeMethod_var)));
	}

IL_004d:
	{
		// int ret = ikcp_input(kcp, buffer, offset, len);
		intptr_t L_20 = ___0_kcp;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___1_buffer;
		int32_t L_22 = ___2_offset;
		int32_t L_23 = ___3_len;
		int32_t L_24;
		L_24 = Kcp_ikcp_input_mD236CC30373194C4027A7BD6E2561115DB933127(L_20, L_21, L_22, L_23, NULL);
		V_0 = L_24;
		// return ret;
		int32_t L_25 = V_0;
		V_3 = L_25;
		goto IL_005b;
	}

IL_005b:
	{
		// }
		int32_t L_26 = V_3;
		return L_26;
	}
}
// System.Int32 ET.Kcp::KcpNodelay(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_KcpNodelay_mC659F51BEF21E59DC93BB569DFB20B030F8BEBC2 (intptr_t ___0_kcp, int32_t ___1_nodelay, int32_t ___2_interval, int32_t ___3_resend, int32_t ___4_nc, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Kcp_KcpNodelay_mC659F51BEF21E59DC93BB569DFB20B030F8BEBC2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Kcp_KcpNodelay_mC659F51BEF21E59DC93BB569DFB20B030F8BEBC2_RuntimeMethod_var);
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// if (kcp == IntPtr.Zero)
		intptr_t L_0 = ___0_kcp;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		// throw new Exception($"kcp error, kcp point is zero");
		Exception_t* L_4 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFCE88E0B4651EFA0D8F7973A07C513EC28038096)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Kcp_KcpNodelay_mC659F51BEF21E59DC93BB569DFB20B030F8BEBC2_RuntimeMethod_var)));
	}

IL_001c:
	{
		// return ikcp_nodelay(kcp, nodelay, interval, resend, nc);
		intptr_t L_5 = ___0_kcp;
		int32_t L_6 = ___1_nodelay;
		int32_t L_7 = ___2_interval;
		int32_t L_8 = ___3_resend;
		int32_t L_9 = ___4_nc;
		int32_t L_10;
		L_10 = Kcp_ikcp_nodelay_m2AA1F18619F35C9787E1E849E2856BFDBA7AAB54(L_5, L_6, L_7, L_8, L_9, NULL);
		V_1 = L_10;
		goto IL_002a;
	}

IL_002a:
	{
		// }
		int32_t L_11 = V_1;
		return L_11;
	}
}
// System.Int32 ET.Kcp::KcpPeeksize(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_KcpPeeksize_m4E98089F13E28D997C53B9F43318E1A378C2577D (intptr_t ___0_kcp, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Kcp_KcpPeeksize_m4E98089F13E28D997C53B9F43318E1A378C2577D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Kcp_KcpPeeksize_m4E98089F13E28D997C53B9F43318E1A378C2577D_RuntimeMethod_var);
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		// if (kcp == IntPtr.Zero)
		intptr_t L_0 = ___0_kcp;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		// throw new Exception($"kcp error, kcp point is zero");
		Exception_t* L_4 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFCE88E0B4651EFA0D8F7973A07C513EC28038096)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Kcp_KcpPeeksize_m4E98089F13E28D997C53B9F43318E1A378C2577D_RuntimeMethod_var)));
	}

IL_001c:
	{
		// int ret = ikcp_peeksize(kcp);
		intptr_t L_5 = ___0_kcp;
		int32_t L_6;
		L_6 = Kcp_ikcp_peeksize_mF034ED89B138DB85D35CF6F55AE701F9A6A26A71(L_5, NULL);
		V_0 = L_6;
		// return ret;
		int32_t L_7 = V_0;
		V_2 = L_7;
		goto IL_0027;
	}

IL_0027:
	{
		// }
		int32_t L_8 = V_2;
		return L_8;
	}
}
// System.Int32 ET.Kcp::KcpRecv(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_KcpRecv_m4A8EADD4666985339638B265B14D5C03D3BF77AF (intptr_t ___0_kcp, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_buffer, int32_t ___2_index, int32_t ___3_len, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Kcp_KcpRecv_m4A8EADD4666985339638B265B14D5C03D3BF77AF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Kcp_KcpRecv_m4A8EADD4666985339638B265B14D5C03D3BF77AF_RuntimeMethod_var);
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		// if (kcp == IntPtr.Zero)
		intptr_t L_0 = ___0_kcp;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		// throw new Exception($"kcp error, kcp point is zero");
		Exception_t* L_4 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFCE88E0B4651EFA0D8F7973A07C513EC28038096)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Kcp_KcpRecv_m4A8EADD4666985339638B265B14D5C03D3BF77AF_RuntimeMethod_var)));
	}

IL_001c:
	{
		// if (buffer.Length < index + len)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___1_buffer;
		NullCheck(L_5);
		int32_t L_6 = ___2_index;
		int32_t L_7 = ___3_len;
		V_2 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))) < ((int32_t)((int32_t)il2cpp_codegen_add(L_6, L_7))))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0045;
		}
	}
	{
		// throw new Exception($"kcp error, KcpRecv error: {index} {len}");
		int32_t L_9 = ___2_index;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_10);
		int32_t L_12 = ___3_len;
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_13);
		String_t* L_15;
		L_15 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral02A29BDC20BCE88DC132CE04A01DD7C3469EA8EB)), L_11, L_14, NULL);
		Exception_t* L_16 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_16);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_16, L_15, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Kcp_KcpRecv_m4A8EADD4666985339638B265B14D5C03D3BF77AF_RuntimeMethod_var)));
	}

IL_0045:
	{
		// int ret = ikcp_recv(kcp, buffer, index, len);
		intptr_t L_17 = ___0_kcp;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___1_buffer;
		int32_t L_19 = ___2_index;
		int32_t L_20 = ___3_len;
		int32_t L_21;
		L_21 = Kcp_ikcp_recv_m4282CB4E958BB4A5802CE6FDC8DB4BD496B78996(L_17, L_18, L_19, L_20, NULL);
		V_0 = L_21;
		// return ret;
		int32_t L_22 = V_0;
		V_3 = L_22;
		goto IL_0053;
	}

IL_0053:
	{
		// }
		int32_t L_23 = V_3;
		return L_23;
	}
}
// System.Void ET.Kcp::KcpRelease(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_KcpRelease_m9942274BE8E5A2DCA150958CF8563D5229A06164 (intptr_t ___0_kcp, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Kcp_KcpRelease_m9942274BE8E5A2DCA150958CF8563D5229A06164_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Kcp_KcpRelease_m9942274BE8E5A2DCA150958CF8563D5229A06164_RuntimeMethod_var);
	bool V_0 = false;
	{
		// if (kcp == IntPtr.Zero)
		intptr_t L_0 = ___0_kcp;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		// throw new Exception($"kcp error, kcp point is zero");
		Exception_t* L_4 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFCE88E0B4651EFA0D8F7973A07C513EC28038096)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Kcp_KcpRelease_m9942274BE8E5A2DCA150958CF8563D5229A06164_RuntimeMethod_var)));
	}

IL_001c:
	{
		// ikcp_release(kcp);
		intptr_t L_5 = ___0_kcp;
		Kcp_ikcp_release_mFEDEE6822FB19DD4DBA737A9530D29D8AA7CE7BB(L_5, NULL);
		// }
		return;
	}
}
// System.Int32 ET.Kcp::KcpSend(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_KcpSend_m109609A727F084054004E1F15BC55EC65D4F86AD (intptr_t ___0_kcp, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_buffer, int32_t ___2_offset, int32_t ___3_len, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Kcp_KcpSend_m109609A727F084054004E1F15BC55EC65D4F86AD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Kcp_KcpSend_m109609A727F084054004E1F15BC55EC65D4F86AD_RuntimeMethod_var);
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		// if (kcp == IntPtr.Zero)
		intptr_t L_0 = ___0_kcp;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		// throw new Exception($"kcp error, kcp point is zero");
		Exception_t* L_4 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFCE88E0B4651EFA0D8F7973A07C513EC28038096)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Kcp_KcpSend_m109609A727F084054004E1F15BC55EC65D4F86AD_RuntimeMethod_var)));
	}

IL_001c:
	{
		// if (offset + len > buffer.Length)
		int32_t L_5 = ___2_offset;
		int32_t L_6 = ___3_len;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___1_buffer;
		NullCheck(L_7);
		V_2 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add(L_5, L_6))) > ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_004d;
		}
	}
	{
		// throw new Exception($"kcp error, KcpSend {buffer.Length} {offset} {len}");
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___1_buffer;
		NullCheck(L_9);
		int32_t L_10 = ((int32_t)(((RuntimeArray*)L_9)->max_length));
		RuntimeObject* L_11 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_10);
		int32_t L_12 = ___2_offset;
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_13);
		int32_t L_15 = ___3_len;
		int32_t L_16 = L_15;
		RuntimeObject* L_17 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_16);
		String_t* L_18;
		L_18 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral14B9C4ED649A12F3286872BC02BF44694FF70613)), L_11, L_14, L_17, NULL);
		Exception_t* L_19 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_19);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_19, L_18, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Kcp_KcpSend_m109609A727F084054004E1F15BC55EC65D4F86AD_RuntimeMethod_var)));
	}

IL_004d:
	{
		// int ret = ikcp_send(kcp, buffer, offset, len);
		intptr_t L_20 = ___0_kcp;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___1_buffer;
		int32_t L_22 = ___2_offset;
		int32_t L_23 = ___3_len;
		int32_t L_24;
		L_24 = Kcp_ikcp_send_mC9AAFA8AC4B349A97A368AFA829D77E55C8682A4(L_20, L_21, L_22, L_23, NULL);
		V_0 = L_24;
		// return ret;
		int32_t L_25 = V_0;
		V_3 = L_25;
		goto IL_005b;
	}

IL_005b:
	{
		// }
		int32_t L_26 = V_3;
		return L_26;
	}
}
// System.Void ET.Kcp::KcpSetminrto(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_KcpSetminrto_mEB93821BF191ACBBBCC1E7918E45B71F1ED13903 (intptr_t ___0_kcp, int32_t ___1_minrto, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Kcp_KcpSetminrto_mEB93821BF191ACBBBCC1E7918E45B71F1ED13903_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Kcp_KcpSetminrto_mEB93821BF191ACBBBCC1E7918E45B71F1ED13903_RuntimeMethod_var);
	bool V_0 = false;
	{
		// if (kcp == IntPtr.Zero)
		intptr_t L_0 = ___0_kcp;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		// throw new Exception($"kcp error, kcp point is zero");
		Exception_t* L_4 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFCE88E0B4651EFA0D8F7973A07C513EC28038096)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Kcp_KcpSetminrto_mEB93821BF191ACBBBCC1E7918E45B71F1ED13903_RuntimeMethod_var)));
	}

IL_001c:
	{
		// ikcp_setminrto(kcp, minrto);
		intptr_t L_5 = ___0_kcp;
		int32_t L_6 = ___1_minrto;
		Kcp_ikcp_setminrto_m6BA2CC874C011FD9ADF9B6D324114B074BED1E3C(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Int32 ET.Kcp::KcpSetmtu(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_KcpSetmtu_m627959E37515A9F77BC31566CAA74816C187192F (intptr_t ___0_kcp, int32_t ___1_mtu, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Kcp_KcpSetmtu_m627959E37515A9F77BC31566CAA74816C187192F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Kcp_KcpSetmtu_m627959E37515A9F77BC31566CAA74816C187192F_RuntimeMethod_var);
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// if (kcp == IntPtr.Zero)
		intptr_t L_0 = ___0_kcp;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		// throw new Exception($"kcp error, kcp point is zero");
		Exception_t* L_4 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFCE88E0B4651EFA0D8F7973A07C513EC28038096)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Kcp_KcpSetmtu_m627959E37515A9F77BC31566CAA74816C187192F_RuntimeMethod_var)));
	}

IL_001c:
	{
		// return ikcp_setmtu(kcp, mtu);
		intptr_t L_5 = ___0_kcp;
		int32_t L_6 = ___1_mtu;
		int32_t L_7;
		L_7 = Kcp_ikcp_setmtu_m603F2EA8751291C312C84A8C967E8D576ABED42B(L_5, L_6, NULL);
		V_1 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		// }
		int32_t L_8 = V_1;
		return L_8;
	}
}
// System.Void ET.Kcp::KcpSetoutput(ET.KcpOutput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_KcpSetoutput_m650A6F5A616A162B7F488F1F95A4FC3270EAC628 (KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732* ___0_output, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Kcp_KcpSetoutput_m650A6F5A616A162B7F488F1F95A4FC3270EAC628_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Kcp_t429AB84FF46AA83D15D3DA2EF4C9CE96BF648B30_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Kcp_KcpSetoutput_m650A6F5A616A162B7F488F1F95A4FC3270EAC628_RuntimeMethod_var);
	{
		// KcpOutput = output;
		KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732* L_0 = ___0_output;
		((Kcp_t429AB84FF46AA83D15D3DA2EF4C9CE96BF648B30_StaticFields*)il2cpp_codegen_static_fields_for(Kcp_t429AB84FF46AA83D15D3DA2EF4C9CE96BF648B30_il2cpp_TypeInfo_var))->___KcpOutput_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Kcp_t429AB84FF46AA83D15D3DA2EF4C9CE96BF648B30_StaticFields*)il2cpp_codegen_static_fields_for(Kcp_t429AB84FF46AA83D15D3DA2EF4C9CE96BF648B30_il2cpp_TypeInfo_var))->___KcpOutput_3), (void*)L_0);
		// ikcp_setoutput(KcpOutput);
		KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732* L_1 = ((Kcp_t429AB84FF46AA83D15D3DA2EF4C9CE96BF648B30_StaticFields*)il2cpp_codegen_static_fields_for(Kcp_t429AB84FF46AA83D15D3DA2EF4C9CE96BF648B30_il2cpp_TypeInfo_var))->___KcpOutput_3;
		Kcp_ikcp_setoutput_m641E9841DD1F17DE384A86F91F1B76E4CE3BB900(L_1, NULL);
		// }
		return;
	}
}
// System.Void ET.Kcp::KcpSetLog(ET.KcpLog)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_KcpSetLog_m4F59E7E9344EFC7217B9C84FE0DFEF2EE0B5EE25 (KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F* ___0_kcpLog, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Kcp_KcpSetLog_m4F59E7E9344EFC7217B9C84FE0DFEF2EE0B5EE25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Kcp_t429AB84FF46AA83D15D3DA2EF4C9CE96BF648B30_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Kcp_KcpSetLog_m4F59E7E9344EFC7217B9C84FE0DFEF2EE0B5EE25_RuntimeMethod_var);
	{
		// KcpLog = kcpLog;
		KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F* L_0 = ___0_kcpLog;
		((Kcp_t429AB84FF46AA83D15D3DA2EF4C9CE96BF648B30_StaticFields*)il2cpp_codegen_static_fields_for(Kcp_t429AB84FF46AA83D15D3DA2EF4C9CE96BF648B30_il2cpp_TypeInfo_var))->___KcpLog_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Kcp_t429AB84FF46AA83D15D3DA2EF4C9CE96BF648B30_StaticFields*)il2cpp_codegen_static_fields_for(Kcp_t429AB84FF46AA83D15D3DA2EF4C9CE96BF648B30_il2cpp_TypeInfo_var))->___KcpLog_4), (void*)L_0);
		// ikcp_setlog(KcpLog);
		KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F* L_1 = ((Kcp_t429AB84FF46AA83D15D3DA2EF4C9CE96BF648B30_StaticFields*)il2cpp_codegen_static_fields_for(Kcp_t429AB84FF46AA83D15D3DA2EF4C9CE96BF648B30_il2cpp_TypeInfo_var))->___KcpLog_4;
		Kcp_ikcp_setlog_m15CF697BD5FBF75AA0C6D0E1D3A8E88846D56A9F(L_1, NULL);
		// }
		return;
	}
}
// System.Void ET.Kcp::KcpUpdate(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_KcpUpdate_m4B32869D5B5DD50FFEA8C80760FEEC026A7085AD (intptr_t ___0_kcp, uint32_t ___1_current, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Kcp_KcpUpdate_m4B32869D5B5DD50FFEA8C80760FEEC026A7085AD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Kcp_KcpUpdate_m4B32869D5B5DD50FFEA8C80760FEEC026A7085AD_RuntimeMethod_var);
	bool V_0 = false;
	{
		// if (kcp == IntPtr.Zero)
		intptr_t L_0 = ___0_kcp;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		// throw new Exception($"kcp error, kcp point is zero");
		Exception_t* L_4 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFCE88E0B4651EFA0D8F7973A07C513EC28038096)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Kcp_KcpUpdate_m4B32869D5B5DD50FFEA8C80760FEEC026A7085AD_RuntimeMethod_var)));
	}

IL_001c:
	{
		// ikcp_update(kcp, current);
		intptr_t L_5 = ___0_kcp;
		uint32_t L_6 = ___1_current;
		Kcp_ikcp_update_mFF3FA1FF289B9117348C6790BA46AF52E0760E29(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Int32 ET.Kcp::KcpWaitsnd(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_KcpWaitsnd_m069B8A91826334FB50024D0A584E05A50AFAEB91 (intptr_t ___0_kcp, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Kcp_KcpWaitsnd_m069B8A91826334FB50024D0A584E05A50AFAEB91_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Kcp_KcpWaitsnd_m069B8A91826334FB50024D0A584E05A50AFAEB91_RuntimeMethod_var);
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		// if (kcp == IntPtr.Zero)
		intptr_t L_0 = ___0_kcp;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		// throw new Exception($"kcp error, kcp point is zero");
		Exception_t* L_4 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFCE88E0B4651EFA0D8F7973A07C513EC28038096)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Kcp_KcpWaitsnd_m069B8A91826334FB50024D0A584E05A50AFAEB91_RuntimeMethod_var)));
	}

IL_001c:
	{
		// int ret = ikcp_waitsnd(kcp);
		intptr_t L_5 = ___0_kcp;
		int32_t L_6;
		L_6 = Kcp_ikcp_waitsnd_mB8BCFAC87034508D3392ADDA415892C4AE41B4F4(L_5, NULL);
		V_0 = L_6;
		// return ret;
		int32_t L_7 = V_0;
		V_2 = L_7;
		goto IL_0027;
	}

IL_0027:
	{
		// }
		int32_t L_8 = V_2;
		return L_8;
	}
}
// System.Int32 ET.Kcp::KcpWndsize(System.IntPtr,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_KcpWndsize_m76F69DCF04008E654B49358FDD4FD8D571E9D514 (intptr_t ___0_kcp, int32_t ___1_sndwnd, int32_t ___2_rcvwnd, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Kcp_KcpWndsize_m76F69DCF04008E654B49358FDD4FD8D571E9D514_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Kcp_KcpWndsize_m76F69DCF04008E654B49358FDD4FD8D571E9D514_RuntimeMethod_var);
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// if (kcp == IntPtr.Zero)
		intptr_t L_0 = ___0_kcp;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		// throw new Exception($"kcp error, kcp point is zero");
		Exception_t* L_4 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFCE88E0B4651EFA0D8F7973A07C513EC28038096)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Kcp_KcpWndsize_m76F69DCF04008E654B49358FDD4FD8D571E9D514_RuntimeMethod_var)));
	}

IL_001c:
	{
		// return ikcp_wndsize(kcp, sndwnd, rcvwnd);
		intptr_t L_5 = ___0_kcp;
		int32_t L_6 = ___1_sndwnd;
		int32_t L_7 = ___2_rcvwnd;
		int32_t L_8;
		L_8 = Kcp_ikcp_wndsize_m32F6D50A19B5381B060FAF4A24C8859BAF7EB3CB(L_5, L_6, L_7, NULL);
		V_1 = L_8;
		goto IL_0027;
	}

IL_0027:
	{
		// }
		int32_t L_9 = V_1;
		return L_9;
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
// System.Void ET.MonoBridge::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBridge_OnCollisionEnter2D_mB941F28DB3E5181E8CCC13D46F533201D4948EDA (MonoBridge_t0C781914E36C070562FDB6F992550A86C20923B5* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoBridge_OnCollisionEnter2D_mB941F28DB3E5181E8CCC13D46F533201D4948EDA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(MonoBridge_OnCollisionEnter2D_mB941F28DB3E5181E8CCC13D46F533201D4948EDA_RuntimeMethod_var);
	{
		// }
		return;
	}
}
// System.Void ET.MonoBridge::OnCollisionStay(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBridge_OnCollisionStay_m53CBC3AEEDF5401ED720267DAB056DA8528294EB (MonoBridge_t0C781914E36C070562FDB6F992550A86C20923B5* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoBridge_OnCollisionStay_m53CBC3AEEDF5401ED720267DAB056DA8528294EB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(MonoBridge_OnCollisionStay_m53CBC3AEEDF5401ED720267DAB056DA8528294EB_RuntimeMethod_var);
	{
		// }
		return;
	}
}
// System.Void ET.MonoBridge::OnCollisionExit(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBridge_OnCollisionExit_mDB619F44CABCAA7DB88CCEAFE99F77F9FE111B4E (MonoBridge_t0C781914E36C070562FDB6F992550A86C20923B5* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoBridge_OnCollisionExit_mDB619F44CABCAA7DB88CCEAFE99F77F9FE111B4E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(MonoBridge_OnCollisionExit_mDB619F44CABCAA7DB88CCEAFE99F77F9FE111B4E_RuntimeMethod_var);
	{
		// }
		return;
	}
}
// System.Void ET.MonoBridge::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBridge_OnTriggerEnter2D_m4BD8B4BC826AF231619EFF654FCF19BAA18F3DB4 (MonoBridge_t0C781914E36C070562FDB6F992550A86C20923B5* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoBridge_OnTriggerEnter2D_m4BD8B4BC826AF231619EFF654FCF19BAA18F3DB4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(MonoBridge_OnTriggerEnter2D_m4BD8B4BC826AF231619EFF654FCF19BAA18F3DB4_RuntimeMethod_var);
	{
		// }
		return;
	}
}
// System.Void ET.MonoBridge::OnTriggerStay(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBridge_OnTriggerStay_m5C51DAEE774C9BD51246B3621E768B0A3583708B (MonoBridge_t0C781914E36C070562FDB6F992550A86C20923B5* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoBridge_OnTriggerStay_m5C51DAEE774C9BD51246B3621E768B0A3583708B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(MonoBridge_OnTriggerStay_m5C51DAEE774C9BD51246B3621E768B0A3583708B_RuntimeMethod_var);
	{
		// }
		return;
	}
}
// System.Void ET.MonoBridge::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBridge_OnTriggerExit_mB4CE59E6BAC17C82060AB9EC74ABDEED0DF2D847 (MonoBridge_t0C781914E36C070562FDB6F992550A86C20923B5* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoBridge_OnTriggerExit_mB4CE59E6BAC17C82060AB9EC74ABDEED0DF2D847_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(MonoBridge_OnTriggerExit_mB4CE59E6BAC17C82060AB9EC74ABDEED0DF2D847_RuntimeMethod_var);
	{
		// }
		return;
	}
}
// System.Void ET.MonoBridge::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBridge__ctor_mCBF48C18C65DF11AA68A76C1A3D6BB3E1179ECEA (MonoBridge_t0C781914E36C070562FDB6F992550A86C20923B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoBridge__ctor_mCBF48C18C65DF11AA68A76C1A3D6BB3E1179ECEA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(MonoBridge__ctor_mCBF48C18C65DF11AA68A76C1A3D6BB3E1179ECEA_RuntimeMethod_var);
	{
		// public bool IsMyPlayer = false;
		__this->___IsMyPlayer_6 = (bool)0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ET.Mono2ETEventManager::add_scrollDir(ET.Mono2ETEventManager/ScrollRectDir)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mono2ETEventManager_add_scrollDir_mA8AB570316A87AF48979352473C713619C8B974B (ScrollRectDir_t19028A127EB20BA751C93A66B996D53E89E37F3F* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mono2ETEventManager_add_scrollDir_mA8AB570316A87AF48979352473C713619C8B974B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mono2ETEventManager_tCABDE8E4852BCC5C5E02FD49A6D36AB4892A7271_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScrollRectDir_t19028A127EB20BA751C93A66B996D53E89E37F3F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Mono2ETEventManager_add_scrollDir_mA8AB570316A87AF48979352473C713619C8B974B_RuntimeMethod_var);
	ScrollRectDir_t19028A127EB20BA751C93A66B996D53E89E37F3F* V_0 = NULL;
	ScrollRectDir_t19028A127EB20BA751C93A66B996D53E89E37F3F* V_1 = NULL;
	ScrollRectDir_t19028A127EB20BA751C93A66B996D53E89E37F3F* V_2 = NULL;
	{
		ScrollRectDir_t19028A127EB20BA751C93A66B996D53E89E37F3F* L_0 = ((Mono2ETEventManager_tCABDE8E4852BCC5C5E02FD49A6D36AB4892A7271_StaticFields*)il2cpp_codegen_static_fields_for(Mono2ETEventManager_tCABDE8E4852BCC5C5E02FD49A6D36AB4892A7271_il2cpp_TypeInfo_var))->___scrollDir_0;
		V_0 = L_0;
	}

IL_0006:
	{
		ScrollRectDir_t19028A127EB20BA751C93A66B996D53E89E37F3F* L_1 = V_0;
		V_1 = L_1;
		ScrollRectDir_t19028A127EB20BA751C93A66B996D53E89E37F3F* L_2 = V_1;
		ScrollRectDir_t19028A127EB20BA751C93A66B996D53E89E37F3F* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((ScrollRectDir_t19028A127EB20BA751C93A66B996D53E89E37F3F*)CastclassSealed((RuntimeObject*)L_4, ScrollRectDir_t19028A127EB20BA751C93A66B996D53E89E37F3F_il2cpp_TypeInfo_var));
		ScrollRectDir_t19028A127EB20BA751C93A66B996D53E89E37F3F* L_5 = V_2;
		ScrollRectDir_t19028A127EB20BA751C93A66B996D53E89E37F3F* L_6 = V_1;
		ScrollRectDir_t19028A127EB20BA751C93A66B996D53E89E37F3F* L_7;
		L_7 = InterlockedCompareExchangeImpl<ScrollRectDir_t19028A127EB20BA751C93A66B996D53E89E37F3F*>((&((Mono2ETEventManager_tCABDE8E4852BCC5C5E02FD49A6D36AB4892A7271_StaticFields*)il2cpp_codegen_static_fields_for(Mono2ETEventManager_tCABDE8E4852BCC5C5E02FD49A6D36AB4892A7271_il2cpp_TypeInfo_var))->___scrollDir_0), L_5, L_6);
		V_0 = L_7;
		ScrollRectDir_t19028A127EB20BA751C93A66B996D53E89E37F3F* L_8 = V_0;
		ScrollRectDir_t19028A127EB20BA751C93A66B996D53E89E37F3F* L_9 = V_1;
		if ((!(((RuntimeObject*)(ScrollRectDir_t19028A127EB20BA751C93A66B996D53E89E37F3F*)L_8) == ((RuntimeObject*)(ScrollRectDir_t19028A127EB20BA751C93A66B996D53E89E37F3F*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void ET.Mono2ETEventManager::remove_scrollDir(ET.Mono2ETEventManager/ScrollRectDir)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mono2ETEventManager_remove_scrollDir_mB14C04305DD537860EADF7CECFDE2AE8A81D8901 (ScrollRectDir_t19028A127EB20BA751C93A66B996D53E89E37F3F* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mono2ETEventManager_remove_scrollDir_mB14C04305DD537860EADF7CECFDE2AE8A81D8901_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mono2ETEventManager_tCABDE8E4852BCC5C5E02FD49A6D36AB4892A7271_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScrollRectDir_t19028A127EB20BA751C93A66B996D53E89E37F3F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Mono2ETEventManager_remove_scrollDir_mB14C04305DD537860EADF7CECFDE2AE8A81D8901_RuntimeMethod_var);
	ScrollRectDir_t19028A127EB20BA751C93A66B996D53E89E37F3F* V_0 = NULL;
	ScrollRectDir_t19028A127EB20BA751C93A66B996D53E89E37F3F* V_1 = NULL;
	ScrollRectDir_t19028A127EB20BA751C93A66B996D53E89E37F3F* V_2 = NULL;
	{
		ScrollRectDir_t19028A127EB20BA751C93A66B996D53E89E37F3F* L_0 = ((Mono2ETEventManager_tCABDE8E4852BCC5C5E02FD49A6D36AB4892A7271_StaticFields*)il2cpp_codegen_static_fields_for(Mono2ETEventManager_tCABDE8E4852BCC5C5E02FD49A6D36AB4892A7271_il2cpp_TypeInfo_var))->___scrollDir_0;
		V_0 = L_0;
	}

IL_0006:
	{
		ScrollRectDir_t19028A127EB20BA751C93A66B996D53E89E37F3F* L_1 = V_0;
		V_1 = L_1;
		ScrollRectDir_t19028A127EB20BA751C93A66B996D53E89E37F3F* L_2 = V_1;
		ScrollRectDir_t19028A127EB20BA751C93A66B996D53E89E37F3F* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((ScrollRectDir_t19028A127EB20BA751C93A66B996D53E89E37F3F*)CastclassSealed((RuntimeObject*)L_4, ScrollRectDir_t19028A127EB20BA751C93A66B996D53E89E37F3F_il2cpp_TypeInfo_var));
		ScrollRectDir_t19028A127EB20BA751C93A66B996D53E89E37F3F* L_5 = V_2;
		ScrollRectDir_t19028A127EB20BA751C93A66B996D53E89E37F3F* L_6 = V_1;
		ScrollRectDir_t19028A127EB20BA751C93A66B996D53E89E37F3F* L_7;
		L_7 = InterlockedCompareExchangeImpl<ScrollRectDir_t19028A127EB20BA751C93A66B996D53E89E37F3F*>((&((Mono2ETEventManager_tCABDE8E4852BCC5C5E02FD49A6D36AB4892A7271_StaticFields*)il2cpp_codegen_static_fields_for(Mono2ETEventManager_tCABDE8E4852BCC5C5E02FD49A6D36AB4892A7271_il2cpp_TypeInfo_var))->___scrollDir_0), L_5, L_6);
		V_0 = L_7;
		ScrollRectDir_t19028A127EB20BA751C93A66B996D53E89E37F3F* L_8 = V_0;
		ScrollRectDir_t19028A127EB20BA751C93A66B996D53E89E37F3F* L_9 = V_1;
		if ((!(((RuntimeObject*)(ScrollRectDir_t19028A127EB20BA751C93A66B996D53E89E37F3F*)L_8) == ((RuntimeObject*)(ScrollRectDir_t19028A127EB20BA751C93A66B996D53E89E37F3F*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void ET.Mono2ETEventManager::OnScrollRectDir(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mono2ETEventManager_OnScrollRectDir_mC90AAF4DAED953859BB61693A7B9BBB30226B097 (int32_t ___0_dir, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mono2ETEventManager_OnScrollRectDir_mC90AAF4DAED953859BB61693A7B9BBB30226B097_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mono2ETEventManager_tCABDE8E4852BCC5C5E02FD49A6D36AB4892A7271_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Mono2ETEventManager_OnScrollRectDir_mC90AAF4DAED953859BB61693A7B9BBB30226B097_RuntimeMethod_var);
	{
		// scrollDir(dir);
		ScrollRectDir_t19028A127EB20BA751C93A66B996D53E89E37F3F* L_0 = ((Mono2ETEventManager_tCABDE8E4852BCC5C5E02FD49A6D36AB4892A7271_StaticFields*)il2cpp_codegen_static_fields_for(Mono2ETEventManager_tCABDE8E4852BCC5C5E02FD49A6D36AB4892A7271_il2cpp_TypeInfo_var))->___scrollDir_0;
		int32_t L_1 = ___0_dir;
		NullCheck(L_0);
		ScrollRectDir_Invoke_mCB06AE3B90B6B1799617A975E4FFEBEAC28038C0_inline(L_0, L_1, NULL);
		// }
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
void ScrollRectDir_Invoke_mCB06AE3B90B6B1799617A975E4FFEBEAC28038C0_Multicast(ScrollRectDir_t19028A127EB20BA751C93A66B996D53E89E37F3F* __this, int32_t ___0_dir, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ScrollRectDir_t19028A127EB20BA751C93A66B996D53E89E37F3F* currentDelegate = reinterpret_cast<ScrollRectDir_t19028A127EB20BA751C93A66B996D53E89E37F3F*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_dir, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ScrollRectDir_Invoke_mCB06AE3B90B6B1799617A975E4FFEBEAC28038C0_OpenInst(ScrollRectDir_t19028A127EB20BA751C93A66B996D53E89E37F3F* __this, int32_t ___0_dir, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_dir, method);
}
void ScrollRectDir_Invoke_mCB06AE3B90B6B1799617A975E4FFEBEAC28038C0_OpenStatic(ScrollRectDir_t19028A127EB20BA751C93A66B996D53E89E37F3F* __this, int32_t ___0_dir, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_dir, method);
}
void ScrollRectDir_Invoke_mCB06AE3B90B6B1799617A975E4FFEBEAC28038C0_OpenStaticInvoker(ScrollRectDir_t19028A127EB20BA751C93A66B996D53E89E37F3F* __this, int32_t ___0_dir, const RuntimeMethod* method)
{
	InvokerActionInvoker1< int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_dir);
}
void ScrollRectDir_Invoke_mCB06AE3B90B6B1799617A975E4FFEBEAC28038C0_ClosedStaticInvoker(ScrollRectDir_t19028A127EB20BA751C93A66B996D53E89E37F3F* __this, int32_t ___0_dir, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_dir);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ScrollRectDir_t19028A127EB20BA751C93A66B996D53E89E37F3F (ScrollRectDir_t19028A127EB20BA751C93A66B996D53E89E37F3F* __this, int32_t ___0_dir, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_dir);

}
// System.Void ET.Mono2ETEventManager/ScrollRectDir::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollRectDir__ctor_m6E69AE351DC0A0D52F97E92C3E46E3E57578AF0A (ScrollRectDir_t19028A127EB20BA751C93A66B996D53E89E37F3F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScrollRectDir__ctor_m6E69AE351DC0A0D52F97E92C3E46E3E57578AF0A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(ScrollRectDir__ctor_m6E69AE351DC0A0D52F97E92C3E46E3E57578AF0A_RuntimeMethod_var);
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
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
				__this->___invoke_impl_1 = (intptr_t)&ScrollRectDir_Invoke_mCB06AE3B90B6B1799617A975E4FFEBEAC28038C0_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ScrollRectDir_Invoke_mCB06AE3B90B6B1799617A975E4FFEBEAC28038C0_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ScrollRectDir_Invoke_mCB06AE3B90B6B1799617A975E4FFEBEAC28038C0_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&ScrollRectDir_Invoke_mCB06AE3B90B6B1799617A975E4FFEBEAC28038C0_Multicast;
}
// System.Void ET.Mono2ETEventManager/ScrollRectDir::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollRectDir_Invoke_mCB06AE3B90B6B1799617A975E4FFEBEAC28038C0 (ScrollRectDir_t19028A127EB20BA751C93A66B996D53E89E37F3F* __this, int32_t ___0_dir, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScrollRectDir_Invoke_mCB06AE3B90B6B1799617A975E4FFEBEAC28038C0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(ScrollRectDir_Invoke_mCB06AE3B90B6B1799617A975E4FFEBEAC28038C0_RuntimeMethod_var);
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_dir, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ET.Mono2ETEventManager/ScrollRectDir::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScrollRectDir_BeginInvoke_m705723F679DAFEE7D02E7FC9241A6DB1134FD8B0 (ScrollRectDir_t19028A127EB20BA751C93A66B996D53E89E37F3F* __this, int32_t ___0_dir, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScrollRectDir_BeginInvoke_m705723F679DAFEE7D02E7FC9241A6DB1134FD8B0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(ScrollRectDir_BeginInvoke_m705723F679DAFEE7D02E7FC9241A6DB1134FD8B0_RuntimeMethod_var);
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___0_dir);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void ET.Mono2ETEventManager/ScrollRectDir::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollRectDir_EndInvoke_mC77E0F783C8E494BEF719AEE61140020E0934EA5 (ScrollRectDir_t19028A127EB20BA751C93A66B996D53E89E37F3F* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScrollRectDir_EndInvoke_mC77E0F783C8E494BEF719AEE61140020E0934EA5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(ScrollRectDir_EndInvoke_mC77E0F783C8E494BEF719AEE61140020E0934EA5_RuntimeMethod_var);
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
// System.IntPtr ET.Recast::RecastLoad(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recast_RecastLoad_mB4EE23761CD49A97B85FA7639E4DF250BF8FA623 (int32_t ___0_id, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_buffer, int32_t ___2_n, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recast_RecastLoad_mB4EE23761CD49A97B85FA7639E4DF250BF8FA623_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Recast_RecastLoad_mB4EE23761CD49A97B85FA7639E4DF250BF8FA623_RuntimeMethod_var);
	typedef intptr_t (CDECL *PInvokeFunc) (int32_t, uint8_t*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_RecastDll_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("RecastDll"), "RecastLoad", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_buffer' to native representation
	uint8_t* ____1_buffer_marshaled = NULL;
	if (___1_buffer != NULL)
	{
		____1_buffer_marshaled = reinterpret_cast<uint8_t*>((___1_buffer)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_RecastDll_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(RecastLoad)(___0_id, ____1_buffer_marshaled, ___2_n);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_id, ____1_buffer_marshaled, ___2_n);
	#endif

	return returnValue;
}
// System.Int64 ET.Recast::RecastLoadLong(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Recast_RecastLoadLong_m2CB9D37282F4678187E58DD460DD58AFFA103E38 (int32_t ___0_id, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_buffer, int32_t ___2_n, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recast_RecastLoadLong_m2CB9D37282F4678187E58DD460DD58AFFA103E38_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Recast_RecastLoadLong_m2CB9D37282F4678187E58DD460DD58AFFA103E38_RuntimeMethod_var);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int64_t V_1 = 0;
	{
		// return RecastLoad(id, buffer, n).ToInt64();
		int32_t L_0 = ___0_id;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___1_buffer;
		int32_t L_2 = ___2_n;
		intptr_t L_3;
		L_3 = Recast_RecastLoad_mB4EE23761CD49A97B85FA7639E4DF250BF8FA623(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		int64_t L_4;
		L_4 = IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032((&V_0), NULL);
		V_1 = L_4;
		goto IL_0014;
	}

IL_0014:
	{
		// }
		int64_t L_5 = V_1;
		return L_5;
	}
}
// System.IntPtr ET.Recast::RecastGet(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recast_RecastGet_m467619DA580236F07A592226572C394AFA40F497 (int32_t ___0_id, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recast_RecastGet_m467619DA580236F07A592226572C394AFA40F497_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Recast_RecastGet_m467619DA580236F07A592226572C394AFA40F497_RuntimeMethod_var);
	typedef intptr_t (CDECL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_RecastDll_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("RecastDll"), "RecastGet", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_RecastDll_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(RecastGet)(___0_id);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_id);
	#endif

	return returnValue;
}
// System.Int64 ET.Recast::RecastGetLong(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Recast_RecastGetLong_mDD98E4DB71AF743043A54422A7B7ED02988811FD (int32_t ___0_id, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recast_RecastGetLong_mDD98E4DB71AF743043A54422A7B7ED02988811FD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Recast_RecastGetLong_mDD98E4DB71AF743043A54422A7B7ED02988811FD_RuntimeMethod_var);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int64_t V_1 = 0;
	{
		// return RecastGet(id).ToInt32();
		int32_t L_0 = ___0_id;
		intptr_t L_1;
		L_1 = Recast_RecastGet_m467619DA580236F07A592226572C394AFA40F497(L_0, NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = IntPtr_ToInt32_mD53B5D2C73C7E4BE5ADEBC5D187EACC83D5BB292((&V_0), NULL);
		V_1 = ((int64_t)L_2);
		goto IL_0013;
	}

IL_0013:
	{
		// }
		int64_t L_3 = V_1;
		return L_3;
	}
}
// System.Void ET.Recast::RecastClear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recast_RecastClear_m473B8D51FA6D5E6F2E0779D41ADC34AE02FF3590 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recast_RecastClear_m473B8D51FA6D5E6F2E0779D41ADC34AE02FF3590_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Recast_RecastClear_m473B8D51FA6D5E6F2E0779D41ADC34AE02FF3590_RuntimeMethod_var);
	typedef void (CDECL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_RecastDll_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("RecastDll"), "RecastClear", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_RecastDll_INTERNAL
	reinterpret_cast<PInvokeFunc>(RecastClear)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Int32 ET.Recast::RecastFind(System.IntPtr,System.Single[],System.Single[],System.Single[],System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Recast_RecastFind_mCBA38176FD73663D69B407633661CCEE4DCF29F0 (intptr_t ___0_navPtr, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_extents, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___2_startPos, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___3_endPos, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___4_straightPath, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recast_RecastFind_mCBA38176FD73663D69B407633661CCEE4DCF29F0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Recast_RecastFind_mCBA38176FD73663D69B407633661CCEE4DCF29F0_RuntimeMethod_var);
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, float*, float*, float*, float*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_RecastDll_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("RecastDll"), "RecastFind", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_extents' to native representation
	float* ____1_extents_marshaled = NULL;
	if (___1_extents != NULL)
	{
		____1_extents_marshaled = reinterpret_cast<float*>((___1_extents)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___2_startPos' to native representation
	float* ____2_startPos_marshaled = NULL;
	if (___2_startPos != NULL)
	{
		____2_startPos_marshaled = reinterpret_cast<float*>((___2_startPos)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___3_endPos' to native representation
	float* ____3_endPos_marshaled = NULL;
	if (___3_endPos != NULL)
	{
		____3_endPos_marshaled = reinterpret_cast<float*>((___3_endPos)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___4_straightPath' to native representation
	float* ____4_straightPath_marshaled = NULL;
	if (___4_straightPath != NULL)
	{
		____4_straightPath_marshaled = reinterpret_cast<float*>((___4_straightPath)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_RecastDll_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(RecastFind)(___0_navPtr, ____1_extents_marshaled, ____2_startPos_marshaled, ____3_endPos_marshaled, ____4_straightPath_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_navPtr, ____1_extents_marshaled, ____2_startPos_marshaled, ____3_endPos_marshaled, ____4_straightPath_marshaled);
	#endif

	return returnValue;
}
// System.Int32 ET.Recast::RecastFind(System.Int64,System.Single[],System.Single[],System.Single[],System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Recast_RecastFind_m392F707F2F5368B22A882CE64BA38AE22E3642E8 (int64_t ___0_navPtr, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_extents, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___2_startPos, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___3_endPos, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___4_straightPath, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recast_RecastFind_m392F707F2F5368B22A882CE64BA38AE22E3642E8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Recast_RecastFind_m392F707F2F5368B22A882CE64BA38AE22E3642E8_RuntimeMethod_var);
	int32_t V_0 = 0;
	{
		// return RecastFind(new IntPtr(navPtr), extents, startPos, endPos, straightPath);
		int64_t L_0 = ___0_navPtr;
		intptr_t L_1;
		memset((&L_1), 0, sizeof(L_1));
		IntPtr__ctor_m2C033540A2F274766CF5C2A120587DD997E3F6DC((&L_1), L_0, /*hidden argument*/NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = ___1_extents;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = ___2_startPos;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = ___3_endPos;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = ___4_straightPath;
		int32_t L_6;
		L_6 = Recast_RecastFind_mCBA38176FD73663D69B407633661CCEE4DCF29F0(L_1, L_2, L_3, L_4, L_5, NULL);
		V_0 = L_6;
		goto IL_0014;
	}

IL_0014:
	{
		// }
		int32_t L_7 = V_0;
		return L_7;
	}
}
// System.Int32 ET.Recast::RecastFindNearestPoint(System.IntPtr,System.Single[],System.Single[],System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Recast_RecastFindNearestPoint_m11C47CB1E714AEF02D2C1A46C31EC9E835C5DB4B (intptr_t ___0_navPtr, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_extents, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___2_pos, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___3_nearestPos, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recast_RecastFindNearestPoint_m11C47CB1E714AEF02D2C1A46C31EC9E835C5DB4B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Recast_RecastFindNearestPoint_m11C47CB1E714AEF02D2C1A46C31EC9E835C5DB4B_RuntimeMethod_var);
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, float*, float*, float*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_RecastDll_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("RecastDll"), "RecastFindNearestPoint", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_extents' to native representation
	float* ____1_extents_marshaled = NULL;
	if (___1_extents != NULL)
	{
		____1_extents_marshaled = reinterpret_cast<float*>((___1_extents)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___2_pos' to native representation
	float* ____2_pos_marshaled = NULL;
	if (___2_pos != NULL)
	{
		____2_pos_marshaled = reinterpret_cast<float*>((___2_pos)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___3_nearestPos' to native representation
	float* ____3_nearestPos_marshaled = NULL;
	if (___3_nearestPos != NULL)
	{
		____3_nearestPos_marshaled = reinterpret_cast<float*>((___3_nearestPos)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_RecastDll_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(RecastFindNearestPoint)(___0_navPtr, ____1_extents_marshaled, ____2_pos_marshaled, ____3_nearestPos_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_navPtr, ____1_extents_marshaled, ____2_pos_marshaled, ____3_nearestPos_marshaled);
	#endif

	return returnValue;
}
// System.Int32 ET.Recast::RecastFindNearestPoint(System.Int64,System.Single[],System.Single[],System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Recast_RecastFindNearestPoint_m626C640DA9A8ADD1935B65905352F0C516A5D48B (int64_t ___0_navPtr, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_extents, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___2_pos, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___3_nearestPos, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recast_RecastFindNearestPoint_m626C640DA9A8ADD1935B65905352F0C516A5D48B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Recast_RecastFindNearestPoint_m626C640DA9A8ADD1935B65905352F0C516A5D48B_RuntimeMethod_var);
	int32_t V_0 = 0;
	{
		// return RecastFindNearestPoint(new IntPtr(navPtr), extents, pos, nearestPos);
		int64_t L_0 = ___0_navPtr;
		intptr_t L_1;
		memset((&L_1), 0, sizeof(L_1));
		IntPtr__ctor_m2C033540A2F274766CF5C2A120587DD997E3F6DC((&L_1), L_0, /*hidden argument*/NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = ___1_extents;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = ___2_pos;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = ___3_nearestPos;
		int32_t L_5;
		L_5 = Recast_RecastFindNearestPoint_m11C47CB1E714AEF02D2C1A46C31EC9E835C5DB4B(L_1, L_2, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		// }
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Int32 ET.Recast::RecastFindRandomPointAroundCircle(System.IntPtr,System.Single[],System.Single[],System.Single,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Recast_RecastFindRandomPointAroundCircle_m56E946B64540AEB84DBB4115045F5F4BE8AB9D56 (intptr_t ___0_navPtr, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_extents, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___2_centerPos, float ___3_radius, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___4_randomPos, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recast_RecastFindRandomPointAroundCircle_m56E946B64540AEB84DBB4115045F5F4BE8AB9D56_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Recast_RecastFindRandomPointAroundCircle_m56E946B64540AEB84DBB4115045F5F4BE8AB9D56_RuntimeMethod_var);
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, float*, float*, float, float*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_RecastDll_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(void*) + sizeof(float) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("RecastDll"), "RecastFindRandomPointAroundCircle", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_extents' to native representation
	float* ____1_extents_marshaled = NULL;
	if (___1_extents != NULL)
	{
		____1_extents_marshaled = reinterpret_cast<float*>((___1_extents)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___2_centerPos' to native representation
	float* ____2_centerPos_marshaled = NULL;
	if (___2_centerPos != NULL)
	{
		____2_centerPos_marshaled = reinterpret_cast<float*>((___2_centerPos)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___4_randomPos' to native representation
	float* ____4_randomPos_marshaled = NULL;
	if (___4_randomPos != NULL)
	{
		____4_randomPos_marshaled = reinterpret_cast<float*>((___4_randomPos)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_RecastDll_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(RecastFindRandomPointAroundCircle)(___0_navPtr, ____1_extents_marshaled, ____2_centerPos_marshaled, ___3_radius, ____4_randomPos_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_navPtr, ____1_extents_marshaled, ____2_centerPos_marshaled, ___3_radius, ____4_randomPos_marshaled);
	#endif

	return returnValue;
}
// System.Int32 ET.Recast::RecastFindRandomPointAroundCircle(System.Int64,System.Single[],System.Single[],System.Single,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Recast_RecastFindRandomPointAroundCircle_m7A9A846FF4C2B9A4EA0E998BD5826D8D025CBA4B (int64_t ___0_navPtr, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_extents, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___2_centerPos, float ___3_radius, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___4_randomPos, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recast_RecastFindRandomPointAroundCircle_m7A9A846FF4C2B9A4EA0E998BD5826D8D025CBA4B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Recast_RecastFindRandomPointAroundCircle_m7A9A846FF4C2B9A4EA0E998BD5826D8D025CBA4B_RuntimeMethod_var);
	int32_t V_0 = 0;
	{
		// return RecastFindRandomPointAroundCircle(new IntPtr(navPtr), extents, centerPos, radius, randomPos);
		int64_t L_0 = ___0_navPtr;
		intptr_t L_1;
		memset((&L_1), 0, sizeof(L_1));
		IntPtr__ctor_m2C033540A2F274766CF5C2A120587DD997E3F6DC((&L_1), L_0, /*hidden argument*/NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = ___1_extents;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = ___2_centerPos;
		float L_4 = ___3_radius;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = ___4_randomPos;
		int32_t L_6;
		L_6 = Recast_RecastFindRandomPointAroundCircle_m56E946B64540AEB84DBB4115045F5F4BE8AB9D56(L_1, L_2, L_3, L_4, L_5, NULL);
		V_0 = L_6;
		goto IL_0014;
	}

IL_0014:
	{
		// }
		int32_t L_7 = V_0;
		return L_7;
	}
}
// System.Int32 ET.Recast::RecastFindRandomPoint(System.IntPtr,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Recast_RecastFindRandomPoint_mE48982AD91CF18D8AF76BEDB8958CE8F0F2BBF13 (intptr_t ___0_navPtr, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_randomPos, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recast_RecastFindRandomPoint_mE48982AD91CF18D8AF76BEDB8958CE8F0F2BBF13_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Recast_RecastFindRandomPoint_mE48982AD91CF18D8AF76BEDB8958CE8F0F2BBF13_RuntimeMethod_var);
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, float*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_RecastDll_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("RecastDll"), "RecastFindRandomPoint", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_randomPos' to native representation
	float* ____1_randomPos_marshaled = NULL;
	if (___1_randomPos != NULL)
	{
		____1_randomPos_marshaled = reinterpret_cast<float*>((___1_randomPos)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_RecastDll_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(RecastFindRandomPoint)(___0_navPtr, ____1_randomPos_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_navPtr, ____1_randomPos_marshaled);
	#endif

	return returnValue;
}
// System.Int32 ET.Recast::RecastFindRandomPoint(System.Int64,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Recast_RecastFindRandomPoint_m6BBAAC98659A9149E29F8BA6BE36DAA34DCEC5B2 (int64_t ___0_navPtr, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_randomPos, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recast_RecastFindRandomPoint_m6BBAAC98659A9149E29F8BA6BE36DAA34DCEC5B2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Recast_RecastFindRandomPoint_m6BBAAC98659A9149E29F8BA6BE36DAA34DCEC5B2_RuntimeMethod_var);
	int32_t V_0 = 0;
	{
		// return RecastFindRandomPoint(new IntPtr(navPtr), randomPos);
		int64_t L_0 = ___0_navPtr;
		intptr_t L_1;
		memset((&L_1), 0, sizeof(L_1));
		IntPtr__ctor_m2C033540A2F274766CF5C2A120587DD997E3F6DC((&L_1), L_0, /*hidden argument*/NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = ___1_randomPos;
		int32_t L_3;
		L_3 = Recast_RecastFindRandomPoint_mE48982AD91CF18D8AF76BEDB8958CE8F0F2BBF13(L_1, L_2, NULL);
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		int32_t L_4 = V_0;
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
// Conversion methods for marshalling of: ET.EventType.FrogCollisionEnter2D
IL2CPP_EXTERN_C void FrogCollisionEnter2D_tA8E9452D0B54DAE49CBEB1227327E0C6CB74C4E4_marshal_pinvoke(const FrogCollisionEnter2D_tA8E9452D0B54DAE49CBEB1227327E0C6CB74C4E4& unmarshaled, FrogCollisionEnter2D_tA8E9452D0B54DAE49CBEB1227327E0C6CB74C4E4_marshaled_pinvoke& marshaled)
{
	marshaled.___unitId_0 = unmarshaled.___unitId_0;
	marshaled.___isUp_1 = static_cast<int32_t>(unmarshaled.___isUp_1);
	marshaled.___isLeft_2 = static_cast<int32_t>(unmarshaled.___isLeft_2);
}
IL2CPP_EXTERN_C void FrogCollisionEnter2D_tA8E9452D0B54DAE49CBEB1227327E0C6CB74C4E4_marshal_pinvoke_back(const FrogCollisionEnter2D_tA8E9452D0B54DAE49CBEB1227327E0C6CB74C4E4_marshaled_pinvoke& marshaled, FrogCollisionEnter2D_tA8E9452D0B54DAE49CBEB1227327E0C6CB74C4E4& unmarshaled)
{
	int64_t unmarshaledunitId_temp_0 = 0;
	unmarshaledunitId_temp_0 = marshaled.___unitId_0;
	unmarshaled.___unitId_0 = unmarshaledunitId_temp_0;
	bool unmarshaledisUp_temp_1 = false;
	unmarshaledisUp_temp_1 = static_cast<bool>(marshaled.___isUp_1);
	unmarshaled.___isUp_1 = unmarshaledisUp_temp_1;
	bool unmarshaledisLeft_temp_2 = false;
	unmarshaledisLeft_temp_2 = static_cast<bool>(marshaled.___isLeft_2);
	unmarshaled.___isLeft_2 = unmarshaledisLeft_temp_2;
}
// Conversion method for clean up from marshalling of: ET.EventType.FrogCollisionEnter2D
IL2CPP_EXTERN_C void FrogCollisionEnter2D_tA8E9452D0B54DAE49CBEB1227327E0C6CB74C4E4_marshal_pinvoke_cleanup(FrogCollisionEnter2D_tA8E9452D0B54DAE49CBEB1227327E0C6CB74C4E4_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: ET.EventType.FrogCollisionEnter2D
IL2CPP_EXTERN_C void FrogCollisionEnter2D_tA8E9452D0B54DAE49CBEB1227327E0C6CB74C4E4_marshal_com(const FrogCollisionEnter2D_tA8E9452D0B54DAE49CBEB1227327E0C6CB74C4E4& unmarshaled, FrogCollisionEnter2D_tA8E9452D0B54DAE49CBEB1227327E0C6CB74C4E4_marshaled_com& marshaled)
{
	marshaled.___unitId_0 = unmarshaled.___unitId_0;
	marshaled.___isUp_1 = static_cast<int32_t>(unmarshaled.___isUp_1);
	marshaled.___isLeft_2 = static_cast<int32_t>(unmarshaled.___isLeft_2);
}
IL2CPP_EXTERN_C void FrogCollisionEnter2D_tA8E9452D0B54DAE49CBEB1227327E0C6CB74C4E4_marshal_com_back(const FrogCollisionEnter2D_tA8E9452D0B54DAE49CBEB1227327E0C6CB74C4E4_marshaled_com& marshaled, FrogCollisionEnter2D_tA8E9452D0B54DAE49CBEB1227327E0C6CB74C4E4& unmarshaled)
{
	int64_t unmarshaledunitId_temp_0 = 0;
	unmarshaledunitId_temp_0 = marshaled.___unitId_0;
	unmarshaled.___unitId_0 = unmarshaledunitId_temp_0;
	bool unmarshaledisUp_temp_1 = false;
	unmarshaledisUp_temp_1 = static_cast<bool>(marshaled.___isUp_1);
	unmarshaled.___isUp_1 = unmarshaledisUp_temp_1;
	bool unmarshaledisLeft_temp_2 = false;
	unmarshaledisLeft_temp_2 = static_cast<bool>(marshaled.___isLeft_2);
	unmarshaled.___isLeft_2 = unmarshaledisLeft_temp_2;
}
// Conversion method for clean up from marshalling of: ET.EventType.FrogCollisionEnter2D
IL2CPP_EXTERN_C void FrogCollisionEnter2D_tA8E9452D0B54DAE49CBEB1227327E0C6CB74C4E4_marshal_com_cleanup(FrogCollisionEnter2D_tA8E9452D0B54DAE49CBEB1227327E0C6CB74C4E4_marshaled_com& marshaled)
{
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
// Conversion methods for marshalling of: ET.EventType.FrogEnableCamera
IL2CPP_EXTERN_C void FrogEnableCamera_tBD4FB7B82CC8A5FD0E00C2193FC740DE56831E83_marshal_pinvoke(const FrogEnableCamera_tBD4FB7B82CC8A5FD0E00C2193FC740DE56831E83& unmarshaled, FrogEnableCamera_tBD4FB7B82CC8A5FD0E00C2193FC740DE56831E83_marshaled_pinvoke& marshaled)
{
	marshaled.___enable_0 = static_cast<int32_t>(unmarshaled.___enable_0);
}
IL2CPP_EXTERN_C void FrogEnableCamera_tBD4FB7B82CC8A5FD0E00C2193FC740DE56831E83_marshal_pinvoke_back(const FrogEnableCamera_tBD4FB7B82CC8A5FD0E00C2193FC740DE56831E83_marshaled_pinvoke& marshaled, FrogEnableCamera_tBD4FB7B82CC8A5FD0E00C2193FC740DE56831E83& unmarshaled)
{
	bool unmarshaledenable_temp_0 = false;
	unmarshaledenable_temp_0 = static_cast<bool>(marshaled.___enable_0);
	unmarshaled.___enable_0 = unmarshaledenable_temp_0;
}
// Conversion method for clean up from marshalling of: ET.EventType.FrogEnableCamera
IL2CPP_EXTERN_C void FrogEnableCamera_tBD4FB7B82CC8A5FD0E00C2193FC740DE56831E83_marshal_pinvoke_cleanup(FrogEnableCamera_tBD4FB7B82CC8A5FD0E00C2193FC740DE56831E83_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: ET.EventType.FrogEnableCamera
IL2CPP_EXTERN_C void FrogEnableCamera_tBD4FB7B82CC8A5FD0E00C2193FC740DE56831E83_marshal_com(const FrogEnableCamera_tBD4FB7B82CC8A5FD0E00C2193FC740DE56831E83& unmarshaled, FrogEnableCamera_tBD4FB7B82CC8A5FD0E00C2193FC740DE56831E83_marshaled_com& marshaled)
{
	marshaled.___enable_0 = static_cast<int32_t>(unmarshaled.___enable_0);
}
IL2CPP_EXTERN_C void FrogEnableCamera_tBD4FB7B82CC8A5FD0E00C2193FC740DE56831E83_marshal_com_back(const FrogEnableCamera_tBD4FB7B82CC8A5FD0E00C2193FC740DE56831E83_marshaled_com& marshaled, FrogEnableCamera_tBD4FB7B82CC8A5FD0E00C2193FC740DE56831E83& unmarshaled)
{
	bool unmarshaledenable_temp_0 = false;
	unmarshaledenable_temp_0 = static_cast<bool>(marshaled.___enable_0);
	unmarshaled.___enable_0 = unmarshaledenable_temp_0;
}
// Conversion method for clean up from marshalling of: ET.EventType.FrogEnableCamera
IL2CPP_EXTERN_C void FrogEnableCamera_tBD4FB7B82CC8A5FD0E00C2193FC740DE56831E83_marshal_com_cleanup(FrogEnableCamera_tBD4FB7B82CC8A5FD0E00C2193FC740DE56831E83_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScrollRectDir_Invoke_mCB06AE3B90B6B1799617A975E4FFEBEAC28038C0_inline (ScrollRectDir_t19028A127EB20BA751C93A66B996D53E89E37F3F* __this, int32_t ___0_dir, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_dir, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
