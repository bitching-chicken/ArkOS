#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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

struct Action_1_tC926860F20D428DA3E93D6FBA36420E904DD903B;
struct Action_1_t87D266BDCAC7E2FA2FA9733C3E286D256FCFFFFA;
struct AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD;
struct AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A;
struct Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C;
struct Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7;
struct List_1_tDB72209F35D56F62A287633F9450978E90B90987;
struct List_1_tBDCF1E0892E8DA197607E498736F867735A73137;
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
struct ActionU5BU5D_tF6161335A0A12A221AB081D78725C8AB6FE506D2;
struct AdaptivePerformanceScalerProfileU5BU5D_t502F55D3686CAB852984FDB6F92431963616F4B7;
struct AdaptivePerformanceSubsystemDescriptorU5BU5D_tE478BE4CA194FF832B443F6091F40CCF7F1BEA20;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct AdaptiveFramerate_t87F82B3C838B42BFDE5277B446D2A9C4674D6104;
struct AdaptivePerformanceIndexer_tE43B4A07AF7944322BA939E2D4F8AE90AD42EF73;
struct AdaptivePerformanceIndexerSettings_t3D9418B7302C8FCA3344719FF10FBADFD2F1CDC6;
struct AdaptivePerformanceLoaderHelper_t43D3768280F68D5528D8DCF87E0FC143DCF9A14F;
struct AdaptivePerformanceScalerSettings_tAF8002CE95F36DE71E945DA73AADB6783EB2FFD8;
struct AdaptivePerformanceScalerSettingsBase_tDF99867134986926CE22505B0B9EE99AD74501AA;
struct AdaptivePerformanceSubsystem_t2D41A24C328589A3018DA0478476D2591E9B5C23;
struct AdaptivePerformanceSubsystemBase_t056A2AE227166A477FC9F9536AD7B0F891D32CD9;
struct AdaptivePerformanceSubsystemDescriptor_t5D0468D8D509E8995FBDCD5DE6EF6F293B16DC82;
struct AdaptiveVariableRefreshRate_tAEC009151419AD9BF86B44283692F0C4CD9794A4;
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D;
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
struct AsyncUpdater_t723A6C592E8D827601A39F38D588CF80812FE976;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710;
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
struct IAdaptivePerformanceSettings_tFB49C60F821F093D3F18E8DC115E7D929E6C86C8;
struct IApplicationLifecycle_tD2CAC721E42E96F6573349B22EADAF166F7A4DCC;
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
struct IDevicePerformanceLevelControl_t894EA40FAE48D533C71232E4AE425D2DA8C142D5;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IPrincipal_tE7AF5096287F6C3472585E124CB38FF2A51EAB5F;
struct ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67;
struct ISubsystemDescriptor_tEF29944D579CC7D70F52CB883150735991D54E6E;
struct IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85;
struct InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687;
struct LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F;
struct LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct MulticastDelegate_t;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449;
struct SamsungAndroidProviderLoader_t750DAFC3B980CC2B2FB3F5BC080B536ECAF5D293;
struct SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC;
struct SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6;
struct Semaphore_t12119E120563D7838E1DAFB15006DC8985C6AC4B;
struct String_t;
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F;
struct ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2;
struct Type_t;
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_tABA0937559C907263A60A045368B2CE9F49A48EC;
struct VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95;
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct U3CU3Ec_t025A21461965FABBEE9B88CFED183BF18C71FF39;
struct AutoVariableRefreshRate_t90CC96BA9BE6AF1DC8343CDE46B0CC345FEBB63D;
struct NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8;
struct VRRManager_t72B06FC7051365C9A258D97C6E189C2A4D0CDEDA;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t87D266BDCAC7E2FA2FA9733C3E286D256FCFFFFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncUpdater_t723A6C592E8D827601A39F38D588CF80812FE976_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AutoVariableRefreshRate_t90CC96BA9BE6AF1DC8343CDE46B0CC345FEBB63D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameSDKLog_tD0080E506C05822E023880100FA71E86D5D5C043_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tBDCF1E0892E8DA197607E498736F867735A73137_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDB72209F35D56F62A287633F9450978E90B90987_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SamsungAndroidProviderLoader_t750DAFC3B980CC2B2FB3F5BC080B536ECAF5D293_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Semaphore_t12119E120563D7838E1DAFB15006DC8985C6AC4B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t025A21461965FABBEE9B88CFED183BF18C71FF39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VRRManager_t72B06FC7051365C9A258D97C6E189C2A4D0CDEDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VariableRefreshRate_tEA02E83F092552EB0AECAB3F133EF281D66EEA4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t7E9DE41EDEA5625CB525F8458652452578C771EB____1CF7BCBCA3752B35CE3BB0A99FBB4D637CFE4490C96A7976F92CC4A3E841FD59_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t7E9DE41EDEA5625CB525F8458652452578C771EB____999BE04B442501DCC963E6B4F9CC61D9FFB41C39B34BC70F98240E12299D2861_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral110C230ECC11791A56E51CE07FE5E6FD5A78178A;
IL2CPP_EXTERN_C String_t* _stringLiteral1174361642F6FE4FCA189A130190A4E9597912D6;
IL2CPP_EXTERN_C String_t* _stringLiteral1D8E0CE0AA8B1F1859A8CEA37DFAA26D56616E45;
IL2CPP_EXTERN_C String_t* _stringLiteral2D677AB4F1E4297F4CF5654EAD125EEBC50D20EF;
IL2CPP_EXTERN_C String_t* _stringLiteral3261C3E11E9AB172DA0BD2010EF79C41DE23C91C;
IL2CPP_EXTERN_C String_t* _stringLiteral3D6253C836CCF9A6B8A05245CB6B1EF24E546455;
IL2CPP_EXTERN_C String_t* _stringLiteral3F4AC1F33F14DDD96BF2B1B6A4F2079D321F0170;
IL2CPP_EXTERN_C String_t* _stringLiteral4CF9A4312580ADAE7FA331122F314BFA89FDA671;
IL2CPP_EXTERN_C String_t* _stringLiteral4F209C20BD06D8D1C76C888ACA266837D8ADDC01;
IL2CPP_EXTERN_C String_t* _stringLiteral58B9EE58F492CF50D7C051554FE7BDD815569565;
IL2CPP_EXTERN_C String_t* _stringLiteral5B5485AAFD0F88488213FA21BAC0D600944F8265;
IL2CPP_EXTERN_C String_t* _stringLiteral623E70A7FF6385C93E57D1CAE15E16E3188E7663;
IL2CPP_EXTERN_C String_t* _stringLiteral74C185339ADE6B87DA245E0CBDFD66891CC43F54;
IL2CPP_EXTERN_C String_t* _stringLiteral7DF31CBCAC5F9AB299F5D58B49B126C24553D2D1;
IL2CPP_EXTERN_C String_t* _stringLiteral8CAC7A1CF27146D11E92BE39054D8E4594FE9B3D;
IL2CPP_EXTERN_C String_t* _stringLiteral8E5FBE3F351EB8F12ED980FF209B6810ED6C1D60;
IL2CPP_EXTERN_C String_t* _stringLiteralA1AAE3AE980660190B1F9951D819C0F1BEA090B7;
IL2CPP_EXTERN_C String_t* _stringLiteralA479396D9311F0A23258AE9653EFD051C3B8A4D5;
IL2CPP_EXTERN_C String_t* _stringLiteralA789C1A58CA8F1B51679B983874466E76B48EFB3;
IL2CPP_EXTERN_C String_t* _stringLiteralBD05CCAF3885FF0D51C07DE89653D67A9929A857;
IL2CPP_EXTERN_C String_t* _stringLiteralBDE80E2AD15AB61A85DBD7C97F022E1D102ABA5B;
IL2CPP_EXTERN_C String_t* _stringLiteralBFF26CE68BA9E05875398617FA39CC574FA97E6A;
IL2CPP_EXTERN_C String_t* _stringLiteralD289A15F06D391673864A3B5CEDBFF42865743C1;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDAD4FD80C1A0A39AD74FD88700D89B9595B8D595;
IL2CPP_EXTERN_C String_t* _stringLiteralDB8C132238F9E774E6E9E180238DA0A65C25145C;
IL2CPP_EXTERN_C String_t* _stringLiteralE02D43BFB3611F4411DD21848B293789A2B1B8D6;
IL2CPP_EXTERN_C String_t* _stringLiteralEEC7732C32C4E0262755BF931431F792DE2E0033;
IL2CPP_EXTERN_C String_t* _stringLiteralF206CAA96C8ED929B66CE9CAF1513182AC391082;
IL2CPP_EXTERN_C String_t* _stringLiteralFAC891F8E2E6B2BA23524259218EF5EF3BF998B4;
IL2CPP_EXTERN_C const RuntimeMethod* AdaptivePerformanceLoaderHelper_CreateSubsystem_TisAdaptivePerformanceSubsystemDescriptor_t5D0468D8D509E8995FBDCD5DE6EF6F293B16DC82_TisSamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_m99C7D46952CCF2B412FEB0DA2401A952ECB2A0A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AdaptivePerformanceLoaderHelper_DestroySubsystem_TisSamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_mF5E05816FE8B1579D3D604DC4DC2147F5331F6D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AdaptivePerformanceLoaderHelper_GetLoadedSubsystem_TisSamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_m1D52E70DE4C6278337CEDD2340C23B38674CF8E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AdaptivePerformanceLoaderHelper_StartSubsystem_TisSamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_m280177B28B689C5DA83E4056364D33158B8BDE3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AdaptivePerformanceLoaderHelper_StopSubsystem_TisSamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_m5043429A11F0840924CB4E0AE730585740AEBCCB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AdaptiveVariableRefreshRate_RefreshRateChanged_mFF8AAB10FAD23ACDB2DFDE115BD96015AE9B5DFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisInt32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_m55B538F2538A5C0157CC28301628D6EDAC92C007_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m697B633D0C1EECAC6C493EC797FC44416F706F4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUpdater_ThreadProc_m20254534606D36097A4DCB11A7BC960FFA281360_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncValue_1_SyncUpdate_m36DC9C08B8E7C6C425C5ADD8E3F807D75A1D85E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncValue_1_Update_m15F2BF5D1A6143887E28FE6EB0C7B112EF7F204C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncValue_1__ctor_m8F76CA33FF29AF1898F434F8ED52FD8D3821ACB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncValue_1_get_value_m575C6560C02998BF7B68C755BDD5E515C34A9B43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDB1225A75BFAF418EF64307D04DBE72CF9246A03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m5E7FCE3DF7B23B6D88C14A04177C1DCD15063858_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8A119323481338039197B73D82916BB46DEE3C2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SamsungGameSDKAdaptivePerformanceSubsystem_CheckInitialTemperatureAndSendWarnings_mA4425C0019E331BDF01B791DC3E71D1CAB7EEABE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SamsungGameSDKAdaptivePerformanceSubsystem_OnCpuPerformanceBoostModeTimeout_mD62D5D0817845C0442175DD0E6D0A85894859794_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SamsungGameSDKAdaptivePerformanceSubsystem_OnGpuPerformanceBoostModeTimeout_mCAB37F0ACE9C858CC9452EDA7ADD8D694FB44F46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SamsungGameSDKAdaptivePerformanceSubsystem_OnPerformanceLevelTimeout_mA6402C54280B5C28F1054D67B0689B97006DBB31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SamsungGameSDKAdaptivePerformanceSubsystem_OnPerformanceWarning_m4F10CCC53C50EB06584ECD641A77E64404010C76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SamsungGameSDKAdaptivePerformanceSubsystem_U3C_ctorU3Eb__26_1_mCE696AB1F6975769FC2500AECB6FE848409B3B4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SamsungGameSDKAdaptivePerformanceSubsystem_U3C_ctorU3Eb__26_2_m4FE8C54EE4AA931A4C2D2C73BD6DE66E478FE7E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__26_0_m5B1E90197167FA3947DD02BAE512EF46DBD77D15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_t1268B5EDA43417C2860DC1B9423CC2EB6171CF0E 
{
};
struct AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A  : public RuntimeObject
{
	AsyncUpdater_t723A6C592E8D827601A39F38D588CF80812FE976* ___updater;
	int32_t ___updateHandle;
	bool ___pendingUpdate;
	Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7* ___updateFunc;
	double ___newValue;
	float ___updateTimeDeltaSeconds;
	float ___updateTimestamp;
	double ___U3CvalueU3Ek__BackingField;
	float ___U3CchangeTimestampU3Ek__BackingField;
};
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};
struct List_1_tDB72209F35D56F62A287633F9450978E90B90987  : public RuntimeObject
{
	ActionU5BU5D_tF6161335A0A12A221AB081D78725C8AB6FE506D2* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tBDCF1E0892E8DA197607E498736F867735A73137  : public RuntimeObject
{
	AdaptivePerformanceSubsystemDescriptorU5BU5D_tE478BE4CA194FF832B443F6091F40CCF7F1BEA20* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct U3CPrivateImplementationDetailsU3E_t7E9DE41EDEA5625CB525F8458652452578C771EB  : public RuntimeObject
{
};
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject;
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass;
};
struct AsyncUpdater_t723A6C592E8D827601A39F38D588CF80812FE976  : public RuntimeObject
{
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___m_Thread;
	bool ___m_Disposed;
	bool ___m_Quit;
	List_1_tDB72209F35D56F62A287633F9450978E90B90987* ___m_UpdateAction;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___m_UpdateRequests;
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___m_RequestComplete;
	int32_t ___m_UpdateRequestReadIndex;
	int32_t ___m_UpdateRequestWriteIndex;
	RuntimeObject* ___m_Mutex;
	Semaphore_t12119E120563D7838E1DAFB15006DC8985C6AC4B* ___m_Semaphore;
};
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};
struct GameSDKLog_tD0080E506C05822E023880100FA71E86D5D5C043  : public RuntimeObject
{
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	RuntimeObject* ____identity;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct SamsungAndroidProviderConstants_t99957262BF70058B6F67A669F6F9A4930FA91484  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct Subsystem_t5E67EE95D848FB950AD5D76325BF8959A6F7C7D7  : public RuntimeObject
{
	RuntimeObject* ___m_SubsystemDescriptor;
};
struct SubsystemDescriptor_tF417D2751C69A8B0DD86162EBCE55F84D3493A71  : public RuntimeObject
{
	String_t* ___U3CidU3Ek__BackingField;
	Type_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField;
};
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_tABA0937559C907263A60A045368B2CE9F49A48EC  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct VariableRefreshRate_tEA02E83F092552EB0AECAB3F133EF281D66EEA4D  : public RuntimeObject
{
};
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7  : public RuntimeObject
{
	int32_t ____Major;
	int32_t ____Minor;
	int32_t ____Build;
	int32_t ____Revision;
};
struct U3CU3Ec_t025A21461965FABBEE9B88CFED183BF18C71FF39  : public RuntimeObject
{
};
struct AutoVariableRefreshRate_t90CC96BA9BE6AF1DC8343CDE46B0CC345FEBB63D  : public RuntimeObject
{
	SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* ___settings;
	RuntimeObject* ___vrrManager;
	float ___VrrUpdateTime;
	int32_t ___lastRefreshRateIndex;
};
struct VRRManager_t72B06FC7051365C9A258D97C6E189C2A4D0CDEDA  : public RuntimeObject
{
	NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* ___m_Api;
	RuntimeObject* ___m_RefreshRateChangedLock;
	bool ___m_RefreshRateChanged;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___m_SupportedRefreshRates;
	int32_t ___m_CurrentRefreshRate;
	int32_t ___m_LastSetRefreshRate;
	VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* ___RefreshRateChanged;
};
struct SubsystemDescriptor_1_t566EA771D29FA6FC4CE5AD4A45252B9EAEC5448D  : public SubsystemDescriptor_tF417D2751C69A8B0DD86162EBCE55F84D3493A71
{
};
struct Subsystem_1_t6436576E2E2D8870B122767439E50A43338FB1FA  : public Subsystem_t5E67EE95D848FB950AD5D76325BF8959A6F7C7D7
{
};
struct AdaptivePerformanceScalerEvent_t4FB8CAC39F9A8788AB10F7B8E579B0A4FB56558D 
{
	String_t* ___Name;
	int32_t ___Level;
};
struct AdaptivePerformanceScalerEvent_t4FB8CAC39F9A8788AB10F7B8E579B0A4FB56558D_marshaled_pinvoke
{
	char* ___Name;
	int32_t ___Level;
};
struct AdaptivePerformanceScalerEvent_t4FB8CAC39F9A8788AB10F7B8E579B0A4FB56558D_marshaled_com
{
	Il2CppChar* ___Name;
	int32_t ___Level;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct ClusterInfo_tE84F530B1972D0F8712CD136B14D4C4136B0BA15 
{
	int32_t ___U3CBigCoreU3Ek__BackingField;
	int32_t ___U3CMediumCoreU3Ek__BackingField;
	int32_t ___U3CLittleCoreU3Ek__BackingField;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687* ___internal_thread;
	RuntimeObject* ___m_ThreadStartArg;
	RuntimeObject* ___pending_exception;
	MulticastDelegate_t* ___m_Delegate;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___m_ExecutionContext;
	bool ___m_ExecutionContextBelongsToOuterScope;
	RuntimeObject* ___principal;
	int32_t ___principal_version;
};
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	int64_t ____ticks;
};
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
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D1073_t002D1501ACA5BEAA71368FD07A46F60F210819D4 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1073_t002D1501ACA5BEAA71368FD07A46F60F210819D4__padding[1073];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D819_tFE5FD8B108E7C9F4F064EA63D4807E9BB8F214C6 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D819_tFE5FD8B108E7C9F4F064EA63D4807E9BB8F214C6__padding[819];
	};
};
#pragma pack(pop, tp)
struct Cinfo_t016018D78B642CAAA7B595015B8AF98E5F1008DB 
{
	String_t* ___U3CidU3Ek__BackingField;
	Type_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField;
};
struct Cinfo_t016018D78B642CAAA7B595015B8AF98E5F1008DB_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField;
	Type_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField;
};
struct Cinfo_t016018D78B642CAAA7B595015B8AF98E5F1008DB_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField;
	Type_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField;
};
struct MonoScriptData_t3C4089E2DFC89903FD4A2083479138259FABDA6D 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___FilePathsData;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	bool ___IsEditorOnly;
};
struct MonoScriptData_t3C4089E2DFC89903FD4A2083479138259FABDA6D_marshaled_pinvoke
{
	Il2CppSafeArray* ___FilePathsData;
	Il2CppSafeArray* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	int32_t ___IsEditorOnly;
};
struct MonoScriptData_t3C4089E2DFC89903FD4A2083479138259FABDA6D_marshaled_com
{
	Il2CppSafeArray* ___FilePathsData;
	Il2CppSafeArray* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	int32_t ___IsEditorOnly;
};
struct AdaptivePerformanceSubsystemBase_t056A2AE227166A477FC9F9536AD7B0F891D32CD9  : public Subsystem_1_t6436576E2E2D8870B122767439E50A43338FB1FA
{
	bool ___U3CinitializedU3Ek__BackingField;
};
struct AdaptivePerformanceSubsystemDescriptor_t5D0468D8D509E8995FBDCD5DE6EF6F293B16DC82  : public SubsystemDescriptor_1_t566EA771D29FA6FC4CE5AD4A45252B9EAEC5448D
{
};
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D  : public RuntimeObject
{
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___javaInterface;
	intptr_t ___proxyObject;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Feature_t9EAFA6FC987A8E73645DF83E49D1DB313EED6EEB 
{
	int32_t ___value__;
};
struct Int32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C 
{
	int32_t ___value__;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	intptr_t ___value;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct StringComparison_tE14A55CCFA001A5AC85D754179BF2888F45CC94D 
{
	int32_t ___value__;
};
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	intptr_t ___waitHandle;
	SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449* ___safeWaitHandle;
	bool ___hasThreadAffinity;
};
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_pinvoke : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	intptr_t ___waitHandle;
	void* ___safeWaitHandle;
	int32_t ___hasThreadAffinity;
};
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_com : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	intptr_t ___waitHandle;
	void* ___safeWaitHandle;
	int32_t ___hasThreadAffinity;
};
struct WarningLevel_t5C5B992767B63159DE16F2E667AECCB6592DB4AC 
{
	int32_t ___value__;
};
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			bool ___z;
		};
		#pragma pack(pop, tp)
		struct
		{
			bool ___z_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Il2CppChar ___c;
		};
		#pragma pack(pop, tp)
		struct
		{
			Il2CppChar ___c_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_forAlignmentOnly;
		};
	};
};
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___z;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___z_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___c;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___c_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_forAlignmentOnly;
		};
	};
};
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___z;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___z_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___c;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___c_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_forAlignmentOnly;
		};
	};
};
struct AdaptivePerformanceSubsystem_t2D41A24C328589A3018DA0478476D2591E9B5C23  : public AdaptivePerformanceSubsystemBase_t056A2AE227166A477FC9F9536AD7B0F891D32CD9
{
	int32_t ___U3CCapabilitiesU3Ek__BackingField;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83 
{
	int32_t ___U3CChangeFlagsU3Ek__BackingField;
	float ___U3CTemperatureLevelU3Ek__BackingField;
	float ___U3CTemperatureTrendU3Ek__BackingField;
	int32_t ___U3CWarningLevelU3Ek__BackingField;
	int32_t ___U3CCpuPerformanceLevelU3Ek__BackingField;
	int32_t ___U3CGpuPerformanceLevelU3Ek__BackingField;
	bool ___U3CPerformanceLevelControlAvailableU3Ek__BackingField;
	float ___U3CCpuFrameTimeU3Ek__BackingField;
	float ___U3CGpuFrameTimeU3Ek__BackingField;
	float ___U3COverallFrameTimeU3Ek__BackingField;
	bool ___U3CCpuPerformanceBoostU3Ek__BackingField;
	bool ___U3CGpuPerformanceBoostU3Ek__BackingField;
	ClusterInfo_tE84F530B1972D0F8712CD136B14D4C4136B0BA15 ___U3CClusterInfoU3Ek__BackingField;
};
struct PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83_marshaled_pinvoke
{
	int32_t ___U3CChangeFlagsU3Ek__BackingField;
	float ___U3CTemperatureLevelU3Ek__BackingField;
	float ___U3CTemperatureTrendU3Ek__BackingField;
	int32_t ___U3CWarningLevelU3Ek__BackingField;
	int32_t ___U3CCpuPerformanceLevelU3Ek__BackingField;
	int32_t ___U3CGpuPerformanceLevelU3Ek__BackingField;
	int32_t ___U3CPerformanceLevelControlAvailableU3Ek__BackingField;
	float ___U3CCpuFrameTimeU3Ek__BackingField;
	float ___U3CGpuFrameTimeU3Ek__BackingField;
	float ___U3COverallFrameTimeU3Ek__BackingField;
	int32_t ___U3CCpuPerformanceBoostU3Ek__BackingField;
	int32_t ___U3CGpuPerformanceBoostU3Ek__BackingField;
	ClusterInfo_tE84F530B1972D0F8712CD136B14D4C4136B0BA15 ___U3CClusterInfoU3Ek__BackingField;
};
struct PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83_marshaled_com
{
	int32_t ___U3CChangeFlagsU3Ek__BackingField;
	float ___U3CTemperatureLevelU3Ek__BackingField;
	float ___U3CTemperatureTrendU3Ek__BackingField;
	int32_t ___U3CWarningLevelU3Ek__BackingField;
	int32_t ___U3CCpuPerformanceLevelU3Ek__BackingField;
	int32_t ___U3CGpuPerformanceLevelU3Ek__BackingField;
	int32_t ___U3CPerformanceLevelControlAvailableU3Ek__BackingField;
	float ___U3CCpuFrameTimeU3Ek__BackingField;
	float ___U3CGpuFrameTimeU3Ek__BackingField;
	float ___U3COverallFrameTimeU3Ek__BackingField;
	int32_t ___U3CCpuPerformanceBoostU3Ek__BackingField;
	int32_t ___U3CGpuPerformanceBoostU3Ek__BackingField;
	ClusterInfo_tE84F530B1972D0F8712CD136B14D4C4136B0BA15 ___U3CClusterInfoU3Ek__BackingField;
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};
struct Semaphore_t12119E120563D7838E1DAFB15006DC8985C6AC4B  : public WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
	Action_1_t87D266BDCAC7E2FA2FA9733C3E286D256FCFFFFA* ___PerformanceWarningEvent;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___PerformanceLevelTimeoutEvent;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___CpuPerformanceBoostReleasedByTimeoutEvent;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___GpuPerformanceBoostReleasedByTimeoutEvent;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___RefreshRateChangedEvent;
};
struct Action_1_tC926860F20D428DA3E93D6FBA36420E904DD903B  : public MulticastDelegate_t
{
};
struct Action_1_t87D266BDCAC7E2FA2FA9733C3E286D256FCFFFFA  : public MulticastDelegate_t
{
};
struct Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7  : public MulticastDelegate_t
{
};
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};
struct AdaptivePerformanceLoader_tF12F9ABBB7711A0FDE47852B1F358EAD7664F54E  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};
struct AdaptivePerformanceScaler_tB9F76E7E942E332BEF5DC363BE906AD4FD1700BC  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	AdaptivePerformanceIndexer_tE43B4A07AF7944322BA939E2D4F8AE90AD42EF73* ___m_Indexer;
	int32_t ___U3CCurrentLevelU3Ek__BackingField;
	int32_t ___U3CGpuImpactU3Ek__BackingField;
	int32_t ___U3CCpuImpactU3Ek__BackingField;
	int32_t ___m_OverrideLevel;
	AdaptivePerformanceScalerSettingsBase_tDF99867134986926CE22505B0B9EE99AD74501AA* ___m_defaultSetting;
	AdaptivePerformanceScalerEvent_t4FB8CAC39F9A8788AB10F7B8E579B0A4FB56558D ___m_ScalerEvent;
	IAdaptivePerformanceSettings_tFB49C60F821F093D3F18E8DC115E7D929E6C86C8* ___m_Settings;
};
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};
struct IAdaptivePerformanceSettings_tFB49C60F821F093D3F18E8DC115E7D929E6C86C8  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	bool ___m_Logging;
	bool ___m_AutomaticPerformanceModeEnabled;
	bool ___m_EnableBoostOnStartup;
	int32_t ___m_StatsLoggingFrequencyInFrames;
	AdaptivePerformanceIndexerSettings_t3D9418B7302C8FCA3344719FF10FBADFD2F1CDC6* ___m_IndexerSettings;
	AdaptivePerformanceScalerSettings_tAF8002CE95F36DE71E945DA73AADB6783EB2FFD8* ___m_ScalerSettings;
	AdaptivePerformanceScalerProfileU5BU5D_t502F55D3686CAB852984FDB6F92431963616F4B7* ___m_scalerProfileList;
	int32_t ___m_DefaultScalerProfilerIndex;
};
struct SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6  : public AdaptivePerformanceSubsystem_t2D41A24C328589A3018DA0478476D2591E9B5C23
{
	NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* ___m_Api;
	AsyncUpdater_t723A6C592E8D827601A39F38D588CF80812FE976* ___m_AsyncUpdater;
	PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83 ___m_Data;
	RuntimeObject* ___m_DataLock;
	AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A* ___m_SkinTemp;
	AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A* ___m_GPUTime;
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___m_Version;
	float ___m_MinTempLevel;
	float ___m_MaxTempLevel;
	bool ___m_PerformanceLevelControlSystemChange;
	bool ___m_AllowPerformanceLevelControlChanges;
	AutoVariableRefreshRate_t90CC96BA9BE6AF1DC8343CDE46B0CC345FEBB63D* ___m_AutoVariableRefreshRate;
	int32_t ___U3CMaxCpuPerformanceLevelU3Ek__BackingField;
	int32_t ___U3CMaxGpuPerformanceLevelU3Ek__BackingField;
};
struct ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2  : public MulticastDelegate_t
{
};
struct VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95  : public MulticastDelegate_t
{
};
struct AdaptiveFramerate_t87F82B3C838B42BFDE5277B446D2A9C4674D6104  : public AdaptivePerformanceScaler_tB9F76E7E942E332BEF5DC363BE906AD4FD1700BC
{
	int32_t ___m_DefaultFPS;
};
struct AdaptivePerformanceLoaderHelper_t43D3768280F68D5528D8DCF87E0FC143DCF9A14F  : public AdaptivePerformanceLoader_tF12F9ABBB7711A0FDE47852B1F358EAD7664F54E
{
	Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* ___m_SubsystemInstanceMap;
};
struct SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC  : public IAdaptivePerformanceSettings_tFB49C60F821F093D3F18E8DC115E7D929E6C86C8
{
	bool ___m_SamsungProviderLogging;
	bool ___m_HighSpeedVRR;
	bool ___m_AutomaticVRR;
};
struct AdaptiveVariableRefreshRate_tAEC009151419AD9BF86B44283692F0C4CD9794A4  : public AdaptiveFramerate_t87F82B3C838B42BFDE5277B446D2A9C4674D6104
{
	bool ___m_AdaptiveVRREnabled;
	RuntimeObject* ___m_VRR;
	int32_t ___m_CurrentRefreshRateIndex;
	int32_t ___m_DefaultRefreshRateIndex;
};
struct SamsungAndroidProviderLoader_t750DAFC3B980CC2B2FB3F5BC080B536ECAF5D293  : public AdaptivePerformanceLoaderHelper_t43D3768280F68D5528D8DCF87E0FC143DCF9A14F
{
};
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value;
};
struct List_1_tDB72209F35D56F62A287633F9450978E90B90987_StaticFields
{
	ActionU5BU5D_tF6161335A0A12A221AB081D78725C8AB6FE506D2* ___s_emptyArray;
};
struct List_1_tBDCF1E0892E8DA197607E498736F867735A73137_StaticFields
{
	AdaptivePerformanceSubsystemDescriptorU5BU5D_tE478BE4CA194FF832B443F6091F40CCF7F1BEA20* ___s_emptyArray;
};
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray;
};
struct U3CPrivateImplementationDetailsU3E_t7E9DE41EDEA5625CB525F8458652452578C771EB_StaticFields
{
	__StaticArrayInitTypeSizeU3D819_tFE5FD8B108E7C9F4F064EA63D4807E9BB8F214C6 ___1CF7BCBCA3752B35CE3BB0A99FBB4D637CFE4490C96A7976F92CC4A3E841FD59;
	__StaticArrayInitTypeSizeU3D1073_t002D1501ACA5BEAA71368FD07A46F60F210819D4 ___999BE04B442501DCC963E6B4F9CC61D9FFB41C39B34BC70F98240E12299D2861;
};
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	bool ___enableDebugPrints;
};
struct GameSDKLog_tD0080E506C05822E023880100FA71E86D5D5C043_StaticFields
{
	SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* ___settings;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct VariableRefreshRate_tEA02E83F092552EB0AECAB3F133EF281D66EEA4D_StaticFields
{
	RuntimeObject* ___U3CInstanceU3Ek__BackingField;
};
struct U3CU3Ec_t025A21461965FABBEE9B88CFED183BF18C71FF39_StaticFields
{
	U3CU3Ec_t025A21461965FABBEE9B88CFED183BF18C71FF39* ___U3CU3E9;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3CU3E9__26_0;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_StaticFields
{
	LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E* ___s_LocalDataStoreMgr;
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentCulture;
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentUICulture;
};
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_ThreadStaticFields
{
	LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F* ___s_LocalDataStore;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentCulture;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentUICulture;
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___current_thread;
};
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue;
};
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_StaticFields
{
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___s_JavaLangSystemClass;
	intptr_t ___s_HashCodeMethodID;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_StaticFields
{
	intptr_t ___InvalidHandle;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
struct NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_StaticFields
{
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___s_GameSDK;
	intptr_t ___s_GameSDKRawObjectID;
	intptr_t ___s_GetGpuFrameTimeID;
	intptr_t ___s_GetHighPrecisionSkinTempLevelID;
	intptr_t ___s_GetClusterInfolID;
	bool ___s_isAvailable;
	jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___s_NoArgs;
};
struct SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_StaticFields
{
	SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* ___settings;
};
struct SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC_StaticFields
{
	SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* ___s_RuntimeInstance;
};
struct SamsungAndroidProviderLoader_t750DAFC3B980CC2B2FB3F5BC080B536ECAF5D293_StaticFields
{
	List_1_tBDCF1E0892E8DA197607E498736F867735A73137* ___s_SamsungGameSDKSubsystemDescriptors;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
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
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
struct jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F  : public RuntimeArray
{
	ALIGN_FIELD (8) jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 m_Items[1];

	inline jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 value)
	{
		m_Items[index] = value;
	}
};
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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m697B633D0C1EECAC6C493EC797FC44416F706F4F_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptivePerformanceLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m5A5862F45F20C876D0E996E32E4F74463ED37883_gshared (AdaptivePerformanceLoaderHelper_t43D3768280F68D5528D8DCF87E0FC143DCF9A14F* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_descriptors, String_t* ___1_id, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptivePerformanceLoaderHelper_StartSubsystem_TisRuntimeObject_mED46F7CFD33FB472255ECFB6FCC441D782DD8421_gshared (AdaptivePerformanceLoaderHelper_t43D3768280F68D5528D8DCF87E0FC143DCF9A14F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptivePerformanceLoaderHelper_StopSubsystem_TisRuntimeObject_mFE5CC154546FE5C5FEA943ADDE6690D3C39A3A77_gshared (AdaptivePerformanceLoaderHelper_t43D3768280F68D5528D8DCF87E0FC143DCF9A14F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptivePerformanceLoaderHelper_DestroySubsystem_TisRuntimeObject_mEB494C898E29C9B3A0FFDC6502073D730D1DD21C_gshared (AdaptivePerformanceLoaderHelper_t43D3768280F68D5528D8DCF87E0FC143DCF9A14F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m8EDF953DA7FF0E33AE19FB51BD7DBDB7C495CFE0_gshared (Action_1_tC926860F20D428DA3E93D6FBA36420E904DD903B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mFD3B853B23577DD7757C6726EB1FB0EC97D25B31_gshared (Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncValue_1__ctor_m8F76CA33FF29AF1898F434F8ED52FD8D3821ACB5_gshared (AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A* __this, AsyncUpdater_t723A6C592E8D827601A39F38D588CF80812FE976* ___0_updater, double ___1_value, float ___2_updateTimeDeltaSeconds, Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7* ___3_updateFunc, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncValue_1_SyncUpdate_m36DC9C08B8E7C6C425C5ADD8E3F807D75A1D85E2_gshared (AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A* __this, float ___0_timestamp, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double AsyncValue_1_get_value_m575C6560C02998BF7B68C755BDD5E515C34A9B43_gshared_inline (AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncValue_1_Update_m15F2BF5D1A6143887E28FE6EB0C7B112EF7F204C_gshared (AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A* __this, float ___0_timestamp, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mBF7DDBCD230E9D28EDF45D3E65F907DE1AE0CCBC_gshared_inline (Action_1_tC926860F20D428DA3E93D6FBA36420E904DD903B* __this, int32_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m378B392086AAB6F400944FA9839516326B3F7BB8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveFramerate_Awake_mEFFD0C457A737B1F637A2BB27E7C468351A7C894 (AdaptiveFramerate_t87F82B3C838B42BFDE5277B446D2A9C4674D6104* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* VariableRefreshRate_get_Instance_m450C4BACDE831B071DDC9573BD1FE24D4FA4BEEA_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableRefreshRateEventHandler__ctor_m7A50456A08A0FDE7002210349CE4F2D9BF73EBF7 (VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
inline int32_t Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m697B633D0C1EECAC6C493EC797FC44416F706F4F (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_value, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, const RuntimeMethod*))Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m697B633D0C1EECAC6C493EC797FC44416F706F4F_gshared)(___0_array, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveFramerate_OnDisabled_m6CA3A4174B1E09B31BEFB70E212B7811C2CF9DD0 (AdaptiveFramerate_t87F82B3C838B42BFDE5277B446D2A9C4674D6104* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveFramerate_OnEnabled_m83DA60536ADE76F0E290455BF879835B354BA3BD (AdaptiveFramerate_t87F82B3C838B42BFDE5277B446D2A9C4674D6104* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveFramerate__ctor_m4DDA4198D52446513FA0C8CA97BB19FA72C9EBE3 (AdaptiveFramerate_t87F82B3C838B42BFDE5277B446D2A9C4674D6104* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* SamsungAndroidProviderLoader_get_samsungGameSDKSubsystem_m74B312CF72A655ED0D1B9289B62D273848341720 (SamsungAndroidProviderLoader_t750DAFC3B980CC2B2FB3F5BC080B536ECAF5D293* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* SamsungAndroidProviderSettings_GetSettings_m1049E50BEC709D010C89CB78635F11BAF183A4CB_inline (const RuntimeMethod* method) ;
inline void AdaptivePerformanceLoaderHelper_CreateSubsystem_TisAdaptivePerformanceSubsystemDescriptor_t5D0468D8D509E8995FBDCD5DE6EF6F293B16DC82_TisSamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_m99C7D46952CCF2B412FEB0DA2401A952ECB2A0A9 (AdaptivePerformanceLoaderHelper_t43D3768280F68D5528D8DCF87E0FC143DCF9A14F* __this, List_1_tBDCF1E0892E8DA197607E498736F867735A73137* ___0_descriptors, String_t* ___1_id, const RuntimeMethod* method)
{
	((  void (*) (AdaptivePerformanceLoaderHelper_t43D3768280F68D5528D8DCF87E0FC143DCF9A14F*, List_1_tBDCF1E0892E8DA197607E498736F867735A73137*, String_t*, const RuntimeMethod*))AdaptivePerformanceLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m5A5862F45F20C876D0E996E32E4F74463ED37883_gshared)(__this, ___0_descriptors, ___1_id, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AdaptivePerformanceSubsystemBase_get_initialized_mD8CA1B7504E7C565ADE1B49E8DB08232A66FA631_inline (AdaptivePerformanceSubsystemBase_t056A2AE227166A477FC9F9536AD7B0F891D32CD9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SamsungGameSDKAdaptivePerformanceSubsystem_Initialize_m9F03A36723372058F03421AB92B77BA6C4E9B1AA (SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* __this, const RuntimeMethod* method) ;
inline void AdaptivePerformanceLoaderHelper_StartSubsystem_TisSamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_m280177B28B689C5DA83E4056364D33158B8BDE3D (AdaptivePerformanceLoaderHelper_t43D3768280F68D5528D8DCF87E0FC143DCF9A14F* __this, const RuntimeMethod* method)
{
	((  void (*) (AdaptivePerformanceLoaderHelper_t43D3768280F68D5528D8DCF87E0FC143DCF9A14F*, const RuntimeMethod*))AdaptivePerformanceLoaderHelper_StartSubsystem_TisRuntimeObject_mED46F7CFD33FB472255ECFB6FCC441D782DD8421_gshared)(__this, method);
}
inline void AdaptivePerformanceLoaderHelper_StopSubsystem_TisSamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_m5043429A11F0840924CB4E0AE730585740AEBCCB (AdaptivePerformanceLoaderHelper_t43D3768280F68D5528D8DCF87E0FC143DCF9A14F* __this, const RuntimeMethod* method)
{
	((  void (*) (AdaptivePerformanceLoaderHelper_t43D3768280F68D5528D8DCF87E0FC143DCF9A14F*, const RuntimeMethod*))AdaptivePerformanceLoaderHelper_StopSubsystem_TisRuntimeObject_mFE5CC154546FE5C5FEA943ADDE6690D3C39A3A77_gshared)(__this, method);
}
inline void AdaptivePerformanceLoaderHelper_DestroySubsystem_TisSamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_mF5E05816FE8B1579D3D604DC4DC2147F5331F6D4 (AdaptivePerformanceLoaderHelper_t43D3768280F68D5528D8DCF87E0FC143DCF9A14F* __this, const RuntimeMethod* method)
{
	((  void (*) (AdaptivePerformanceLoaderHelper_t43D3768280F68D5528D8DCF87E0FC143DCF9A14F*, const RuntimeMethod*))AdaptivePerformanceLoaderHelper_DestroySubsystem_TisRuntimeObject_mEB494C898E29C9B3A0FFDC6502073D730D1DD21C_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptivePerformanceLoaderHelper__ctor_mEEA0DF770A2EAB15E711E6FCC9AE3166FFF30863 (AdaptivePerformanceLoaderHelper_t43D3768280F68D5528D8DCF87E0FC143DCF9A14F* __this, const RuntimeMethod* method) ;
inline void List_1__ctor_mDB1225A75BFAF418EF64307D04DBE72CF9246A03 (List_1_tBDCF1E0892E8DA197607E498736F867735A73137* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBDCF1E0892E8DA197607E498736F867735A73137*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAdaptivePerformanceSettings__ctor_mBEEA4933FD88BF7E3C20FAAE1E8BEAF3EBB18379 (IAdaptivePerformanceSettings_tFB49C60F821F093D3F18E8DC115E7D929E6C86C8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SamsungAndroidProviderSettings_get_samsungProviderLogging_mE70D42A6A1439E3DB2406B298C2AF4F30811DA9C_inline (SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Thread_get_IsAlive_m87922B882A526D780570799F497EEB4C99F005DF (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, const RuntimeMethod* method) ;
inline int32_t List_1_get_Count_m5E7FCE3DF7B23B6D88C14A04177C1DCD15063858_inline (List_1_tDB72209F35D56F62A287633F9450978E90B90987* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDB72209F35D56F62A287633F9450978E90B90987*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
inline void List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_inline (List_1_tDB72209F35D56F62A287633F9450978E90B90987* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDB72209F35D56F62A287633F9450978E90B90987*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Semaphore__ctor_m5954C9FB5ED41FD527888AA96F28398DBCAFA237 (Semaphore_t12119E120563D7838E1DAFB15006DC8985C6AC4B* __this, int32_t ___0_initialCount, int32_t ___1_maximumCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Thread_Start_m2230799AA331CA9ACEF49D5500281D0C1A9F72FA (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Semaphore_Release_m3AA41CBF1DEA03948FD56E47B5E05A68F43A7A94 (Semaphore_t12119E120563D7838E1DAFB15006DC8985C6AC4B* __this, const RuntimeMethod* method) ;
inline void List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212 (List_1_tDB72209F35D56F62A287633F9450978E90B90987* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDB72209F35D56F62A287633F9450978E90B90987*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadStart__ctor_m35CE51F76358F20E4A0C8F2963C3AE14E5FF7E71 (ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread__ctor_m1FA23A179DF4F5B659689D6FA40DE903086212E2 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2* ___0_start, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_set_Name_m53E2BA6E84C04A6393EA5E470E516703CB892E4A (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_AttachCurrentThread_m412647220ED1F7D42F9D41F692D1D7DC4696B6D4 (const RuntimeMethod* method) ;
inline Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* List_1_get_Item_m8A119323481338039197B73D82916BB46DEE3C2D (List_1_tDB72209F35D56F62A287633F9450978E90B90987* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* (*) (List_1_tDB72209F35D56F62A287633F9450978E90B90987*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_DetachCurrentThread_mC0F3D8974C0681528B801EF0AC2A54E5C7A2E933 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Join_mB756581AAF5EB028081256E0517892BC8867779F (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUpdater_Dispose_mD52CA6DA8B1B7993C6AC8D3C4F0A5C88088E8996 (AsyncUpdater_t723A6C592E8D827601A39F38D588CF80812FE976* __this, bool ___0_disposing, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptivePerformanceSubsystem__ctor_mEEBD3B76AC04711B8088F2E55218C832F490A078 (AdaptivePerformanceSubsystem_t2D41A24C328589A3018DA0478476D2591E9B5C23* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystem_set_MaxCpuPerformanceLevel_m7040D551B96A10A49DB28DC1CB6FF6E55811BF9C_inline (SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystem_set_MaxGpuPerformanceLevel_mDD72ADA0233E838AB2B08625407171D6FABC33BA_inline (SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* __this, int32_t ___0_value, const RuntimeMethod* method) ;
inline void Action_1__ctor_m3447050AC75D7978A825F681D4EB19C5A0B735E0 (Action_1_t87D266BDCAC7E2FA2FA9733C3E286D256FCFFFFA* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t87D266BDCAC7E2FA2FA9733C3E286D256FCFFFFA*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m8EDF953DA7FF0E33AE19FB51BD7DBDB7C495CFE0_gshared)(__this, ___0_object, ___1_method, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi__ctor_m62E976B074521326BD1F50D144286A876C851B1E (NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* __this, Action_1_t87D266BDCAC7E2FA2FA9733C3E286D256FCFFFFA* ___0_sustainedPerformanceWarning, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___1_sustainedPerformanceTimeout, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___2_refreshRateChanged, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___3_cpuPerformanceBoostReleasedByTimeout, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___4_gpuPerformanceBoostReleasedByTimeout, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUpdater__ctor_m0E52F8DBFA255D988D89F3DF47CD6FA7E90EBB34 (AsyncUpdater_t723A6C592E8D827601A39F38D588CF80812FE976* __this, const RuntimeMethod* method) ;
inline void Func_1__ctor_mFD3B853B23577DD7757C6726EB1FB0EC97D25B31 (Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mFD3B853B23577DD7757C6726EB1FB0EC97D25B31_gshared)(__this, ___0_object, ___1_method, method);
}
inline void AsyncValue_1__ctor_m8F76CA33FF29AF1898F434F8ED52FD8D3821ACB5 (AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A* __this, AsyncUpdater_t723A6C592E8D827601A39F38D588CF80812FE976* ___0_updater, double ___1_value, float ___2_updateTimeDeltaSeconds, Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7* ___3_updateFunc, const RuntimeMethod* method)
{
	((  void (*) (AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A*, AsyncUpdater_t723A6C592E8D827601A39F38D588CF80812FE976*, double, float, Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7*, const RuntimeMethod*))AsyncValue_1__ctor_m8F76CA33FF29AF1898F434F8ED52FD8D3821ACB5_gshared)(__this, ___0_updater, ___1_value, ___2_updateTimeDeltaSeconds, ___3_updateFunc, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdaptivePerformanceSubsystem_set_Capabilities_m13719E1250D06D80D0889D1015C9F35078F7414F_inline (AdaptivePerformanceSubsystem_t2D41A24C328589A3018DA0478476D2591E9B5C23* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUpdater_Start_m44754B8FBC894327CB62D4C2893211AF14068983 (AsyncUpdater_t723A6C592E8D827601A39F38D588CF80812FE976* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PerformanceDataRecord_get_ChangeFlags_m83DE31AF3877A2A1507A6703B190533FD166B9B7_inline (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PerformanceDataRecord_set_ChangeFlags_mE99AA127E129C78872D68F5C650D55B8E5D33DC8_inline (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PerformanceDataRecord_set_WarningLevel_mBC3853B7D0AA1412C41DFD248FA9E7252DAEB5F4_inline (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PerformanceDataRecord_set_CpuPerformanceLevel_m8BBB7FA33AF2644ED0DE81CD58CCB07C5F71ED03_inline (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PerformanceDataRecord_set_GpuPerformanceLevel_mBA26ABE3F6089BA232022D7F0F38B55B8FA9481A_inline (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PerformanceDataRecord_set_CpuPerformanceBoost_mD8BF1CE74A03B57E81DBCD9A3DDE8DAA27968FF5_inline (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PerformanceDataRecord_set_GpuPerformanceBoost_m0A5764E94B8EC621A0AA51B2F7C24BA1EAF844B9_inline (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NativeApi_GetHighPrecisionSkinTempLevel_mF772B46B9F70B8520E7CE50D9FBB854BD435836A (NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeApi_GetClusterInfo_m1B6635A235E064CCBACD2D3875A97816A3FCA920 (NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
inline void AsyncValue_1_SyncUpdate_m36DC9C08B8E7C6C425C5ADD8E3F807D75A1D85E2 (AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A* __this, float ___0_timestamp, const RuntimeMethod* method)
{
	((  void (*) (AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A*, float, const RuntimeMethod*))AsyncValue_1_SyncUpdate_m36DC9C08B8E7C6C425C5ADD8E3F807D75A1D85E2_gshared)(__this, ___0_timestamp, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SamsungGameSDKAdaptivePerformanceSubsystem_GetTemperatureLevel_mA400905D39A068B49434A3C39B2D7028F0760058 (SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PerformanceDataRecord_set_TemperatureLevel_mFC2BC8E019EFB0E7611C242D1F5D4EAB76570BB5_inline (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Version__ctor_m52D06833AE6481C0A9B72085BDC4D09A723CEF7F (Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* __this, String_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_Initialize_mD5CCC8D65B6D995B365BE4602144DEBA9BDD55CD (NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeApi_GetVersion_mA4099836535EE991E5F2F9F910A2051AA54944A2 (NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SamsungGameSDKAdaptivePerformanceSubsystem_TryParseVersion_m11B181A8D69F59774E2E1196D0D8F61EE341E3E0 (String_t* ___0_versionString, Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7** ___1_version, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Version__ctor_m0871675040007535EA3D8083A4BEAE9DF8C92FF4 (Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* __this, int32_t ___0_major, int32_t ___1_minor, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB (Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___0_v1, Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___1_v2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdaptivePerformanceSubsystemBase_set_initialized_m7B2B09A90BC940B4903FBF8FB7D4F87581CDFF72_inline (AdaptivePerformanceSubsystemBase_t056A2AE227166A477FC9F9536AD7B0F891D32CD9* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeApi_GetMaxCpuPerformanceLevel_m7106C512DEFDAD0EF76DF0F752E95B5C20ADFE92 (NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeApi_GetMaxGpuPerformanceLevel_m287193E794C3784CDA030D5B37F3F4D8B34BEAB8 (NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AdaptivePerformanceSubsystem_get_Capabilities_m3B41A455C5EF85D90A6796AE764E6285E1AF21A1_inline (AdaptivePerformanceSubsystem_t2D41A24C328589A3018DA0478476D2591E9B5C23* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_Terminate_m20E038F0579D7C9D58454AD72011ED757FA27C1F (NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SamsungGameSDKAdaptivePerformanceSubsystem_get_MaxCpuPerformanceLevel_m7558F2A23D816B4F3EB7B94934B9646038C4D6F0_inline (SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SamsungGameSDKAdaptivePerformanceSubsystem_get_MaxGpuPerformanceLevel_m5268FD732220398272D98125ABD2A92C0DB76C28_inline (SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PerformanceDataRecord_set_PerformanceLevelControlAvailable_m78A1EFC49C88D90E778F7C4C8605662E94B125FF_inline (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystem_ImmediateUpdateTemperature_m35F36531EA566899C06B7B46F7EB4C089333C2FF (SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystem_CheckAndInitializeVRR_m5D3A1BB4096B76E85CFF99048F2464407BBE12BA (SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_IsVariableRefreshRateSupported_mFF2652DEC0862E5EE5F6E7E74363B3AADF9A4128 (NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRRManager__ctor_mD2277F2A0AC768DEEA16B64982A3741F9347EDBF (VRRManager_t72B06FC7051365C9A258D97C6E189C2A4D0CDEDA* __this, NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* ___0_api, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VariableRefreshRate_set_Instance_m5F8051BFDE6E14BAC0C837E841B48D67590AB992_inline (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoVariableRefreshRate__ctor_m325160788CB50F3FD45C4BDA6ADBF4EA40A398E2 (AutoVariableRefreshRate_t90CC96BA9BE6AF1DC8343CDE46B0CC345FEBB63D* __this, RuntimeObject* ___0_vrrManagerInstance, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TimeSpan_FromSeconds_m4401B50C0CA831134068595C6AF2F1CA92AAF80F (double ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Sleep_m64ACA63DDE948BB823BD6A5871D9C0B29A77E55A (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_timeout, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SamsungGameSDKAdaptivePerformanceSubsystem_GetHighPrecisionSkinTempLevel_mE797BBCCD724C732D8CC903F304B1E2E75D48F32 (SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystem_OnPerformanceWarning_m4F10CCC53C50EB06584ECD641A77E64404010C76 (SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* __this, int32_t ___0_warningLevel, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClusterInfo_set_BigCore_m6773CE3416C5DDE25B397D398D60253CA4A913A0_inline (ClusterInfo_tE84F530B1972D0F8712CD136B14D4C4136B0BA15* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClusterInfo_set_MediumCore_mC984A40803648B368E8E998F82E7C89D9E24E126_inline (ClusterInfo_tE84F530B1972D0F8712CD136B14D4C4136B0BA15* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClusterInfo_set_LittleCore_m2B02B46BBEA719EFBDD955DF419EAAC81E69C7AB_inline (ClusterInfo_tE84F530B1972D0F8712CD136B14D4C4136B0BA15* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PerformanceDataRecord_set_ClusterInfo_m70A3B30678BE28E09161ADF030CBAFE8D5BC9E3E_inline (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* __this, ClusterInfo_tE84F530B1972D0F8712CD136B14D4C4136B0BA15 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUpdater_Dispose_mE3267C63AAF1B517C1AE45CC31A0FC5397E94E1F (AsyncUpdater_t723A6C592E8D827601A39F38D588CF80812FE976* __this, const RuntimeMethod* method) ;
inline double AsyncValue_1_get_value_m575C6560C02998BF7B68C755BDD5E515C34A9B43_inline (AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A* __this, const RuntimeMethod* method)
{
	return ((  double (*) (AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A*, const RuntimeMethod*))AsyncValue_1_get_value_m575C6560C02998BF7B68C755BDD5E515C34A9B43_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
inline bool AsyncValue_1_Update_m15F2BF5D1A6143887E28FE6EB0C7B112EF7F204C (AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A* __this, float ___0_timestamp, const RuntimeMethod* method)
{
	return ((  bool (*) (AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A*, float, const RuntimeMethod*))AsyncValue_1_Update_m15F2BF5D1A6143887E28FE6EB0C7B112EF7F204C_gshared)(__this, ___0_timestamp, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRRManager_Update_mCFB9B5DDFAAE08091FCA2DB70DCBEACCE74B2C53 (VRRManager_t72B06FC7051365C9A258D97C6E189C2A4D0CDEDA* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SamsungAndroidProviderSettings_get_automaticVRR_mA4EC43A6755953623F7A5F1B3C365A3A9CE25C3B_inline (SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QualitySettings_get_vSyncCount_m0293E74C6CEF18FA03FB12C85802361FA83DC293 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoVariableRefreshRate_UpdateAutoVRR_m723236AA9993CBBF5B79B2A512AD7275D977990E (AutoVariableRefreshRate_t90CC96BA9BE6AF1DC8343CDE46B0CC345FEBB63D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystem_DisableSystemControl_m52ABFCD191A8A41C6C6D134C9B501F5F22499B57 (SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SamsungGameSDKAdaptivePerformanceSubsystem_LatestGpuFrameTime_m89926139AD9A965DF8CDE618059668C4CF0FF098 (SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PerformanceDataRecord_set_GpuFrameTime_mB779C484C185DB05F985A295EA7242EB8DA37299_inline (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA (float ___0_val1, float ___1_val2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Math_Min_mE913811A2F7566294BF4649A434282634E7254B3 (float ___0_val1, float ___1_val2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SamsungGameSDKAdaptivePerformanceSubsystem_NormalizeTemperatureLevel_m9C0BB9B7FAE193661793BD231588CC973F360475 (float ___0_currentTempLevel, float ___1_minValue, float ___2_maxValue, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SamsungGameSDKAdaptivePerformanceSubsystem_NormalizeTemperatureLevel_m3F1FA12928FDB3257CB4DCB6703760C849E129D4 (SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* __this, float ___0_currentTempLevel, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Version_op_Equality_mED378603AE784D5ACEDB8F4B250F50773B331D4B (Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___0_v1, Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___1_v2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeApi_SetFreqLevels_mC568D9356108AC7A1AAE662C3FD108A565181E09 (NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* __this, int32_t ___0_cpu, int32_t ___1_gpu, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PerformanceDataRecord_get_CpuPerformanceLevel_mF688EC621C77916A86F96CF7D0DAFD520B6D68E8_inline (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PerformanceDataRecord_get_GpuPerformanceLevel_mA928B60EF914AB4E7D95291E1357A3FE795DBE23_inline (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystem_EnableSystemControl_mB94BB9BBD5D600060144AB841617FEAD284CB717 (SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_EnableCpuBoost_m142D18B1745C6F3ADE07F313B92A27432B076B8E (NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PerformanceDataRecord_get_CpuPerformanceBoost_m55A78568F8E19144717C3CEC17CE90FA766591D2_inline (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_EnableGpuBoost_mDABE6D115C876233BF7EBD13DDFF7F7A12DBB0C9 (NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PerformanceDataRecord_get_GpuPerformanceBoost_mFD01BBFC9A9BE53ED81947089A02691635789B7E_inline (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRRManager_Resume_mF04994891A6B381E8DF8A8078E9A0928F2D04AFE (VRRManager_t72B06FC7051365C9A258D97C6E189C2A4D0CDEDA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_deviceModel_m308FFBADED4BF6CB34C318A0BBDA762D09A7F185 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mA2A4405B1B9F3653A6A9AA7F223F68D86A0C6264 (String_t* __this, String_t* ___0_value, int32_t ___1_comparisonType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_IsAvailable_mB9AB23571615F83CFC23833580CAA31CF801CFD2 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m77027979E9BA297A2803C6EA7691881619C35F91_inline (Cinfo_t016018D78B642CAAA7B595015B8AF98E5F1008DB* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_mE5398A3C07C0B759B72027FE49DDBC1FCB50A5B9_inline (Cinfo_t016018D78B642CAAA7B595015B8AF98E5F1008DB* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdaptivePerformanceSubsystemDescriptor_t5D0468D8D509E8995FBDCD5DE6EF6F293B16DC82* AdaptivePerformanceSubsystemDescriptor_RegisterDescriptor_m800920584650488044B385B98D26FF6E50CAC0E2 (Cinfo_t016018D78B642CAAA7B595015B8AF98E5F1008DB ___0_cinfo, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NativeApi_GetGpuFrameTime_m849D6C1752EF1034093E711C7D3B2A28ADFAFAD7 (NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, String_t* ___0_javaInterface, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_StaticInit_mEF71D12CE69859AEEC61AB5672227101BE13B9F5 (const RuntimeMethod* method) ;
inline void Action_1_Invoke_m772CF576DB7B297059C25510D48E3CD587FB66DF_inline (Action_1_t87D266BDCAC7E2FA2FA9733C3E286D256FCFFFFA* __this, int32_t ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t87D266BDCAC7E2FA2FA9733C3E286D256FCFFFFA*, int32_t, const RuntimeMethod*))Action_1_Invoke_mBF7DDBCD230E9D28EDF45D3E65F907DE1AE0CCBC_gshared_inline)(__this, ___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_ExceptionClear_m1205CD178ADB8E0E7EBDBE349AFA767D5D7758B8 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetMethodID_mA7FF961764CA4D68C4789E5A17926CE5FF9B3549 (intptr_t ___0_clazz, String_t* ___1_name, String_t* ___2_sig, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ExceptionOccurred_mAE2AE7C57E06059383EDCAB956A01BDF7D03F54C (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_m931A344F16D4C65EFB0B492EB07C7A82AF0B9FA1 (int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_ExceptionDescribe_m20B24A293E6A8467E312E028E6AA250934684508 (const RuntimeMethod* method) ;
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_className, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
inline bool AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_gshared)(__this, ___0_methodName, ___1_args, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_IsAPVersionSupported_m4A6DADB4AF2E304468EB3BF8D21390884799378B (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaObject_GetRawObject_m536F043B5CE2C21369FF6173C9D2A9A62136BC48 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeApi_GetJavaMethodID_mDD29DF658AA7F00923F11BA548038BC1B8BD5C77 (intptr_t ___0_classId, String_t* ___1_name, String_t* ___2_sig, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271 (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
inline bool AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_gshared)(__this, ___0_methodName, ___1_args, method);
}
inline String_t* AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared)(__this, ___0_methodName, ___1_args, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_RegisterListener_mAA67F27863950076632CC6B474F8A6F4327223B4 (NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnregisterListener_m56A5D73E83313776E1D333A3B23251A761CE2E98 (NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_identifier_mEA3314E50D44FB3CE2C2E78B336ACF4AD97BA056 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNI_CallDoubleMethod_m9001B2EF56623D6F17B4E9E87788CDD3E760A897 (intptr_t ___0_obj, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) ;
inline int32_t AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_gshared)(__this, ___0_methodName, ___1_args, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_CallIntMethod_mD1299CB9F99E26D2734A0F02D376DE6EF49F1741 (intptr_t ___0_obj, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) ;
inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* AndroidJavaObject_Call_TisInt32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_m55B538F2538A5C0157CC28301628D6EDAC92C007 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared)(__this, ___0_methodName, ___1_args, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* NativeApi_GetSupportedRefreshRates_mF2EBFD7946532F52B99039E03D5612D40348BFF1 (NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SamsungAndroidProviderSettings_get_highSpeedVRR_mF7D7A276D6AC87D624429E128A5B36155ABCE4A1_inline (SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* __this, const RuntimeMethod* method) ;
inline void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared)(__this, method);
}
inline void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline)(__this, ___0_item, method);
}
inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeApi_GetCurrentRefreshRate_m59A77EADD8B0175EEB26AF149AF886C5B6C5A3C2 (NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRRManager_SetDefaultVRR_mC8C818C82827547B528A80DA7DAA3E27A228A97C (VRRManager_t72B06FC7051365C9A258D97C6E189C2A4D0CDEDA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRRManager_UpdateRefreshRateInfo_m095C6C40745CDED72FD296C0100264BABAB7EBC6 (VRRManager_t72B06FC7051365C9A258D97C6E189C2A4D0CDEDA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VRRManager_SetRefreshRateByIndexInternal_m9C5DEB988F2F1D6827DDB2208FB4ECA33D328BC6 (VRRManager_t72B06FC7051365C9A258D97C6E189C2A4D0CDEDA* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VariableRefreshRateEventHandler_Invoke_mA665080591D6EA72C7EC12CFC0CAFAC8E5FF37EC_inline (VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SamsungAndroidProviderSettings_set_automaticVRR_m10FAA3C18EF7EF58166BB3D9A572B5D249584639_inline (SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* VRRManager_get_SupportedRefreshRates_m2E19C96EE046A2767D0534C3FAF4E7A20D07A259_inline (VRRManager_t72B06FC7051365C9A258D97C6E189C2A4D0CDEDA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_targetFrameRate_m5A5B0FC0DFE1EBC940FF49B8237A243F45A630E1 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_SetRefreshRate_m04C7E330A964E07262D3C75B791A1F5883408549 (NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* __this, int32_t ___0_targetRefreshRate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4CC0B583F326027934207C5B0D037250C4E17560 (U3CU3Ec_t025A21461965FABBEE9B88CFED183BF18C71FF39* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRRManager_OnRefreshRateChanged_mC7B94DF25479D1DEA7BFD4286412271E28CD1169 (VRRManager_t72B06FC7051365C9A258D97C6E189C2A4D0CDEDA* __this, const RuntimeMethod* method) ;
inline void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared)(__this, ___0_item, method);
}
inline void List_1_AddWithResize_m378B392086AAB6F400944FA9839516326B3F7BB8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_AddWithResize_m378B392086AAB6F400944FA9839516326B3F7BB8_gshared)(__this, ___0_item, method);
}
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonoScriptData_t3C4089E2DFC89903FD4A2083479138259FABDA6D UnitySourceGeneratedAssemblyMonoScriptTypes_v1_Get_m61070571B47F834599647D47BE2C70E651A12320 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t7E9DE41EDEA5625CB525F8458652452578C771EB____1CF7BCBCA3752B35CE3BB0A99FBB4D637CFE4490C96A7976F92CC4A3E841FD59_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t7E9DE41EDEA5625CB525F8458652452578C771EB____999BE04B442501DCC963E6B4F9CC61D9FFB41C39B34BC70F98240E12299D2861_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MonoScriptData_t3C4089E2DFC89903FD4A2083479138259FABDA6D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MonoScriptData_t3C4089E2DFC89903FD4A2083479138259FABDA6D));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)819));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t7E9DE41EDEA5625CB525F8458652452578C771EB____1CF7BCBCA3752B35CE3BB0A99FBB4D637CFE4490C96A7976F92CC4A3E841FD59_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		(&V_0)->___FilePathsData = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___FilePathsData), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1073));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t7E9DE41EDEA5625CB525F8458652452578C771EB____999BE04B442501DCC963E6B4F9CC61D9FFB41C39B34BC70F98240E12299D2861_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_4, L_5, NULL);
		(&V_0)->___TypesData = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___TypesData), (void*)L_4);
		(&V_0)->___TotalFiles = 6;
		(&V_0)->___TotalTypes = ((int32_t)13);
		(&V_0)->___IsEditorOnly = (bool)0;
		MonoScriptData_t3C4089E2DFC89903FD4A2083479138259FABDA6D L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__ctor_mCA7E98FC3AAAAF268CE397048241DFE4F1E35CFA (UnitySourceGeneratedAssemblyMonoScriptTypes_v1_tABA0937559C907263A60A045368B2CE9F49A48EC* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C void MonoScriptData_t3C4089E2DFC89903FD4A2083479138259FABDA6D_marshal_pinvoke(const MonoScriptData_t3C4089E2DFC89903FD4A2083479138259FABDA6D& unmarshaled, MonoScriptData_t3C4089E2DFC89903FD4A2083479138259FABDA6D_marshaled_pinvoke& marshaled)
{
	marshaled.___FilePathsData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___FilePathsData);
	marshaled.___TypesData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___TypesData);
	marshaled.___TotalTypes = unmarshaled.___TotalTypes;
	marshaled.___TotalFiles = unmarshaled.___TotalFiles;
	marshaled.___IsEditorOnly = static_cast<int32_t>(unmarshaled.___IsEditorOnly);
}
IL2CPP_EXTERN_C void MonoScriptData_t3C4089E2DFC89903FD4A2083479138259FABDA6D_marshal_pinvoke_back(const MonoScriptData_t3C4089E2DFC89903FD4A2083479138259FABDA6D_marshaled_pinvoke& marshaled, MonoScriptData_t3C4089E2DFC89903FD4A2083479138259FABDA6D& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___FilePathsData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___FilePathsData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___FilePathsData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___FilePathsData));
	unmarshaled.___TypesData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___TypesData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___TypesData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___TypesData));
	int32_t unmarshaledTotalTypes_temp_2 = 0;
	unmarshaledTotalTypes_temp_2 = marshaled.___TotalTypes;
	unmarshaled.___TotalTypes = unmarshaledTotalTypes_temp_2;
	int32_t unmarshaledTotalFiles_temp_3 = 0;
	unmarshaledTotalFiles_temp_3 = marshaled.___TotalFiles;
	unmarshaled.___TotalFiles = unmarshaledTotalFiles_temp_3;
	bool unmarshaledIsEditorOnly_temp_4 = false;
	unmarshaledIsEditorOnly_temp_4 = static_cast<bool>(marshaled.___IsEditorOnly);
	unmarshaled.___IsEditorOnly = unmarshaledIsEditorOnly_temp_4;
}
IL2CPP_EXTERN_C void MonoScriptData_t3C4089E2DFC89903FD4A2083479138259FABDA6D_marshal_pinvoke_cleanup(MonoScriptData_t3C4089E2DFC89903FD4A2083479138259FABDA6D_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___FilePathsData);
	marshaled.___FilePathsData = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___TypesData);
	marshaled.___TypesData = NULL;
}
IL2CPP_EXTERN_C void MonoScriptData_t3C4089E2DFC89903FD4A2083479138259FABDA6D_marshal_com(const MonoScriptData_t3C4089E2DFC89903FD4A2083479138259FABDA6D& unmarshaled, MonoScriptData_t3C4089E2DFC89903FD4A2083479138259FABDA6D_marshaled_com& marshaled)
{
	marshaled.___FilePathsData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___FilePathsData);
	marshaled.___TypesData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___TypesData);
	marshaled.___TotalTypes = unmarshaled.___TotalTypes;
	marshaled.___TotalFiles = unmarshaled.___TotalFiles;
	marshaled.___IsEditorOnly = static_cast<int32_t>(unmarshaled.___IsEditorOnly);
}
IL2CPP_EXTERN_C void MonoScriptData_t3C4089E2DFC89903FD4A2083479138259FABDA6D_marshal_com_back(const MonoScriptData_t3C4089E2DFC89903FD4A2083479138259FABDA6D_marshaled_com& marshaled, MonoScriptData_t3C4089E2DFC89903FD4A2083479138259FABDA6D& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___FilePathsData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___FilePathsData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___FilePathsData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___FilePathsData));
	unmarshaled.___TypesData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___TypesData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___TypesData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___TypesData));
	int32_t unmarshaledTotalTypes_temp_2 = 0;
	unmarshaledTotalTypes_temp_2 = marshaled.___TotalTypes;
	unmarshaled.___TotalTypes = unmarshaledTotalTypes_temp_2;
	int32_t unmarshaledTotalFiles_temp_3 = 0;
	unmarshaledTotalFiles_temp_3 = marshaled.___TotalFiles;
	unmarshaled.___TotalFiles = unmarshaledTotalFiles_temp_3;
	bool unmarshaledIsEditorOnly_temp_4 = false;
	unmarshaledIsEditorOnly_temp_4 = static_cast<bool>(marshaled.___IsEditorOnly);
	unmarshaled.___IsEditorOnly = unmarshaledIsEditorOnly_temp_4;
}
IL2CPP_EXTERN_C void MonoScriptData_t3C4089E2DFC89903FD4A2083479138259FABDA6D_marshal_com_cleanup(MonoScriptData_t3C4089E2DFC89903FD4A2083479138259FABDA6D_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___FilePathsData);
	marshaled.___FilePathsData = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___TypesData);
	marshaled.___TypesData = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdaptiveVariableRefreshRate_get_Name_mF8C08025C2614FAA00F1545EE340DFA951C561C0 (AdaptiveVariableRefreshRate_tAEC009151419AD9BF86B44283692F0C4CD9794A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4CF9A4312580ADAE7FA331122F314BFA89FDA671);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral4CF9A4312580ADAE7FA331122F314BFA89FDA671;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdaptiveVariableRefreshRate_get_Enabled_mD0C3364B0533C355A3A3EB26D552679F71755808 (AdaptiveVariableRefreshRate_tAEC009151419AD9BF86B44283692F0C4CD9794A4* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___m_AdaptiveVRREnabled;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveVariableRefreshRate_set_Enabled_m65B74C83EF4D8828A61B9EF174EDB36EC542B37D (AdaptiveVariableRefreshRate_tAEC009151419AD9BF86B44283692F0C4CD9794A4* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___m_AdaptiveVRREnabled = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveVariableRefreshRate_Awake_mFE8680AB2D8A192912C5A96FC14211D2DBB89A22 (AdaptiveVariableRefreshRate_tAEC009151419AD9BF86B44283692F0C4CD9794A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdaptiveVariableRefreshRate_RefreshRateChanged_mFF8AAB10FAD23ACDB2DFDE115BD96015AE9B5DFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m697B633D0C1EECAC6C493EC797FC44416F706F4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AdaptiveFramerate_Awake_mEFFD0C457A737B1F637A2BB27E7C468351A7C894(__this, NULL);
		IAdaptivePerformanceSettings_tFB49C60F821F093D3F18E8DC115E7D929E6C86C8* L_0 = ((AdaptivePerformanceScaler_tB9F76E7E942E332BEF5DC363BE906AD4FD1700BC*)__this)->___m_Settings;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		return;
	}

IL_0015:
	{
		RuntimeObject* L_2;
		L_2 = VariableRefreshRate_get_Instance_m450C4BACDE831B071DDC9573BD1FE24D4FA4BEEA_inline(NULL);
		__this->___m_VRR = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_VRR), (void*)L_2);
		RuntimeObject* L_3 = __this->___m_VRR;
		if (L_3)
		{
			goto IL_0030;
		}
	}
	{
		VirtualActionInvoker1< bool >::Invoke(7, __this, (bool)0);
		return;
	}

IL_0030:
	{
		RuntimeObject* L_4 = __this->___m_VRR;
		VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* L_5 = (VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95*)il2cpp_codegen_object_new(VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95_il2cpp_TypeInfo_var);
		VariableRefreshRateEventHandler__ctor_m7A50456A08A0FDE7002210349CE4F2D9BF73EBF7(L_5, __this, (intptr_t)((void*)AdaptiveVariableRefreshRate_RefreshRateChanged_mFF8AAB10FAD23ACDB2DFDE115BD96015AE9B5DFC_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* >::Invoke(3, IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var, L_4, L_5);
		RuntimeObject* L_6 = __this->___m_VRR;
		NullCheck(L_6);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7;
		L_7 = InterfaceFuncInvoker0< Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* >::Invoke(0, IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var, L_6);
		RuntimeObject* L_8 = __this->___m_VRR;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(1, IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var, L_8);
		int32_t L_10;
		L_10 = Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m697B633D0C1EECAC6C493EC797FC44416F706F4F(L_7, L_9, Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m697B633D0C1EECAC6C493EC797FC44416F706F4F_RuntimeMethod_var);
		__this->___m_CurrentRefreshRateIndex = L_10;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveVariableRefreshRate_OnDisabled_m4D920248468848B9B22B226130A74865A7CCE40B (AdaptiveVariableRefreshRate_tAEC009151419AD9BF86B44283692F0C4CD9794A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AdaptiveFramerate_OnDisabled_m6CA3A4174B1E09B31BEFB70E212B7811C2CF9DD0(__this, NULL);
		RuntimeObject* L_0 = __this->___m_VRR;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		return;
	}

IL_000f:
	{
		RuntimeObject* L_1 = __this->___m_VRR;
		int32_t L_2 = __this->___m_DefaultRefreshRateIndex;
		NullCheck(L_1);
		bool L_3;
		L_3 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(2, IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveVariableRefreshRate_OnEnabled_m22746B6382BB835B71C1762FEF1A392D5A491B80 (AdaptiveVariableRefreshRate_tAEC009151419AD9BF86B44283692F0C4CD9794A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m697B633D0C1EECAC6C493EC797FC44416F706F4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AdaptiveFramerate_OnEnabled_m83DA60536ADE76F0E290455BF879835B354BA3BD(__this, NULL);
		RuntimeObject* L_0 = __this->___m_VRR;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		return;
	}

IL_000f:
	{
		RuntimeObject* L_1 = __this->___m_VRR;
		NullCheck(L_1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2;
		L_2 = InterfaceFuncInvoker0< Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* >::Invoke(0, IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var, L_1);
		RuntimeObject* L_3 = __this->___m_VRR;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var, L_3);
		int32_t L_5;
		L_5 = Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m697B633D0C1EECAC6C493EC797FC44416F706F4F(L_2, L_4, Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m697B633D0C1EECAC6C493EC797FC44416F706F4F_RuntimeMethod_var);
		__this->___m_DefaultRefreshRateIndex = L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveVariableRefreshRate_OnDestroy_m7B555B16DF7CFECFD01D8C478FB4694155437045 (AdaptiveVariableRefreshRate_tAEC009151419AD9BF86B44283692F0C4CD9794A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdaptiveVariableRefreshRate_RefreshRateChanged_mFF8AAB10FAD23ACDB2DFDE115BD96015AE9B5DFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___m_VRR;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		RuntimeObject* L_1 = __this->___m_VRR;
		VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* L_2 = (VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95*)il2cpp_codegen_object_new(VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95_il2cpp_TypeInfo_var);
		VariableRefreshRateEventHandler__ctor_m7A50456A08A0FDE7002210349CE4F2D9BF73EBF7(L_2, __this, (intptr_t)((void*)AdaptiveVariableRefreshRate_RefreshRateChanged_mFF8AAB10FAD23ACDB2DFDE115BD96015AE9B5DFC_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		InterfaceActionInvoker1< VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* >::Invoke(4, IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveVariableRefreshRate_RefreshRateChanged_mFF8AAB10FAD23ACDB2DFDE115BD96015AE9B5DFC (AdaptiveVariableRefreshRate_tAEC009151419AD9BF86B44283692F0C4CD9794A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m697B633D0C1EECAC6C493EC797FC44416F706F4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___m_VRR;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		RuntimeObject* L_1 = __this->___m_VRR;
		NullCheck(L_1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2;
		L_2 = InterfaceFuncInvoker0< Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* >::Invoke(0, IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var, L_1);
		RuntimeObject* L_3 = __this->___m_VRR;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var, L_3);
		int32_t L_5;
		L_5 = Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m697B633D0C1EECAC6C493EC797FC44416F706F4F(L_2, L_4, Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m697B633D0C1EECAC6C493EC797FC44416F706F4F_RuntimeMethod_var);
		__this->___m_CurrentRefreshRateIndex = L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveVariableRefreshRate_OnLevelIncrease_m47AE80C1833D7191B6679CBF9AE7099A7EC35078 (AdaptiveVariableRefreshRate_tAEC009151419AD9BF86B44283692F0C4CD9794A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___m_VRR;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		int32_t L_1 = __this->___m_CurrentRefreshRateIndex;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_2 = __this->___m_CurrentRefreshRateIndex;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		RuntimeObject* L_3 = __this->___m_VRR;
		NullCheck(L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4;
		L_4 = InterfaceFuncInvoker0< Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* >::Invoke(0, IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var, L_3);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		int32_t L_8 = V_1;
		float L_9;
		L_9 = VirtualFuncInvoker0< float >::Invoke(16, __this);
		if ((((float)((float)L_8)) < ((float)L_9)))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_10 = V_1;
		float L_11;
		L_11 = VirtualFuncInvoker0< float >::Invoke(18, __this);
		if ((!(((float)((float)L_10)) > ((float)L_11))))
		{
			goto IL_003e;
		}
	}

IL_003d:
	{
		return;
	}

IL_003e:
	{
		RuntimeObject* L_12 = __this->___m_VRR;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		bool L_14;
		L_14 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(2, IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var, L_12, L_13);
		if (!L_14)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_15 = V_0;
		__this->___m_CurrentRefreshRateIndex = L_15;
	}

IL_0053:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveVariableRefreshRate_OnLevelDecrease_mA347DC91AA9491E9451BA5FAA164C39A05DE2983 (AdaptiveVariableRefreshRate_tAEC009151419AD9BF86B44283692F0C4CD9794A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___m_VRR;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		int32_t L_1 = __this->___m_CurrentRefreshRateIndex;
		RuntimeObject* L_2 = __this->___m_VRR;
		NullCheck(L_2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3;
		L_3 = InterfaceFuncInvoker0< Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* >::Invoke(0, IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_3);
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), 1)))))
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_4 = __this->___m_CurrentRefreshRateIndex;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		RuntimeObject* L_5 = __this->___m_VRR;
		NullCheck(L_5);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6;
		L_6 = InterfaceFuncInvoker0< Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* >::Invoke(0, IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var, L_5);
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_1 = L_9;
		int32_t L_10 = V_1;
		float L_11;
		L_11 = VirtualFuncInvoker0< float >::Invoke(16, __this);
		if ((((float)((float)L_10)) < ((float)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_12 = V_1;
		float L_13;
		L_13 = VirtualFuncInvoker0< float >::Invoke(18, __this);
		if ((!(((float)((float)L_12)) > ((float)L_13))))
		{
			goto IL_004c;
		}
	}

IL_004b:
	{
		return;
	}

IL_004c:
	{
		RuntimeObject* L_14 = __this->___m_VRR;
		int32_t L_15 = V_0;
		NullCheck(L_14);
		bool L_16;
		L_16 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(2, IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var, L_14, L_15);
		if (!L_16)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_17 = V_0;
		__this->___m_CurrentRefreshRateIndex = L_17;
	}

IL_0061:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveVariableRefreshRate__ctor_m45F992D15709678C75D34B6D5F8FB008674E2C58 (AdaptiveVariableRefreshRate_tAEC009151419AD9BF86B44283692F0C4CD9794A4* __this, const RuntimeMethod* method) 
{
	{
		AdaptiveFramerate__ctor_m4DDA4198D52446513FA0C8CA97BB19FA72C9EBE3(__this, NULL);
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* SamsungAndroidProviderLoader_get_samsungGameSDKSubsystem_m74B312CF72A655ED0D1B9289B62D273848341720 (SamsungAndroidProviderLoader_t750DAFC3B980CC2B2FB3F5BC080B536ECAF5D293* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdaptivePerformanceLoaderHelper_GetLoadedSubsystem_TisSamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_m1D52E70DE4C6278337CEDD2340C23B38674CF8E0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* L_0;
		L_0 = GenericVirtualFuncInvoker0< SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* >::Invoke(AdaptivePerformanceLoaderHelper_GetLoadedSubsystem_TisSamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_m1D52E70DE4C6278337CEDD2340C23B38674CF8E0_RuntimeMethod_var, __this);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SamsungAndroidProviderLoader_GetDefaultSubsystem_mD1D0DCFB80C6753B89AC9720C65FE76984B99520 (SamsungAndroidProviderLoader_t750DAFC3B980CC2B2FB3F5BC080B536ECAF5D293* __this, const RuntimeMethod* method) 
{
	{
		SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* L_0;
		L_0 = SamsungAndroidProviderLoader_get_samsungGameSDKSubsystem_m74B312CF72A655ED0D1B9289B62D273848341720(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IAdaptivePerformanceSettings_tFB49C60F821F093D3F18E8DC115E7D929E6C86C8* SamsungAndroidProviderLoader_GetSettings_m8A0099932C135CE398515BF7482C43D894F22441 (SamsungAndroidProviderLoader_t750DAFC3B980CC2B2FB3F5BC080B536ECAF5D293* __this, const RuntimeMethod* method) 
{
	{
		SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* L_0;
		L_0 = SamsungAndroidProviderSettings_GetSettings_m1049E50BEC709D010C89CB78635F11BAF183A4CB_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SamsungAndroidProviderLoader_Initialize_m5858C2F5E9FAAEE52409997159AD034C02064991 (SamsungAndroidProviderLoader_t750DAFC3B980CC2B2FB3F5BC080B536ECAF5D293* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdaptivePerformanceLoaderHelper_CreateSubsystem_TisAdaptivePerformanceSubsystemDescriptor_t5D0468D8D509E8995FBDCD5DE6EF6F293B16DC82_TisSamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_m99C7D46952CCF2B412FEB0DA2401A952ECB2A0A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungAndroidProviderLoader_t750DAFC3B980CC2B2FB3F5BC080B536ECAF5D293_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F4AC1F33F14DDD96BF2B1B6A4F2079D321F0170);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFF26CE68BA9E05875398617FA39CC574FA97E6A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE02D43BFB3611F4411DD21848B293789A2B1B8D6);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SamsungAndroidProviderLoader_t750DAFC3B980CC2B2FB3F5BC080B536ECAF5D293_il2cpp_TypeInfo_var);
		List_1_tBDCF1E0892E8DA197607E498736F867735A73137* L_0 = ((SamsungAndroidProviderLoader_t750DAFC3B980CC2B2FB3F5BC080B536ECAF5D293_StaticFields*)il2cpp_codegen_static_fields_for(SamsungAndroidProviderLoader_t750DAFC3B980CC2B2FB3F5BC080B536ECAF5D293_il2cpp_TypeInfo_var))->___s_SamsungGameSDKSubsystemDescriptors;
		AdaptivePerformanceLoaderHelper_CreateSubsystem_TisAdaptivePerformanceSubsystemDescriptor_t5D0468D8D509E8995FBDCD5DE6EF6F293B16DC82_TisSamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_m99C7D46952CCF2B412FEB0DA2401A952ECB2A0A9(__this, L_0, _stringLiteralE02D43BFB3611F4411DD21848B293789A2B1B8D6, AdaptivePerformanceLoaderHelper_CreateSubsystem_TisAdaptivePerformanceSubsystemDescriptor_t5D0468D8D509E8995FBDCD5DE6EF6F293B16DC82_TisSamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_m99C7D46952CCF2B412FEB0DA2401A952ECB2A0A9_RuntimeMethod_var);
		SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* L_1;
		L_1 = SamsungAndroidProviderLoader_get_samsungGameSDKSubsystem_m74B312CF72A655ED0D1B9289B62D273848341720(__this, NULL);
		if (L_1)
		{
			goto IL_0024;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralBFF26CE68BA9E05875398617FA39CC574FA97E6A, NULL);
		return (bool)0;
	}

IL_0024:
	{
		SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* L_2;
		L_2 = SamsungAndroidProviderLoader_get_samsungGameSDKSubsystem_m74B312CF72A655ED0D1B9289B62D273848341720(__this, NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = AdaptivePerformanceSubsystemBase_get_initialized_mD8CA1B7504E7C565ADE1B49E8DB08232A66FA631_inline(L_2, NULL);
		if (L_3)
		{
			goto IL_004a;
		}
	}
	{
		SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* L_4;
		L_4 = SamsungAndroidProviderLoader_get_samsungGameSDKSubsystem_m74B312CF72A655ED0D1B9289B62D273848341720(__this, NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = SamsungGameSDKAdaptivePerformanceSubsystem_Initialize_m9F03A36723372058F03421AB92B77BA6C4E9B1AA(L_4, NULL);
		if (L_5)
		{
			goto IL_004a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral3F4AC1F33F14DDD96BF2B1B6A4F2079D321F0170, NULL);
		return (bool)0;
	}

IL_004a:
	{
		SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* L_6;
		L_6 = SamsungAndroidProviderLoader_get_samsungGameSDKSubsystem_m74B312CF72A655ED0D1B9289B62D273848341720(__this, NULL);
		if (!L_6)
		{
			goto IL_005e;
		}
	}
	{
		SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* L_7;
		L_7 = SamsungAndroidProviderLoader_get_samsungGameSDKSubsystem_m74B312CF72A655ED0D1B9289B62D273848341720(__this, NULL);
		NullCheck(L_7);
		bool L_8;
		L_8 = AdaptivePerformanceSubsystemBase_get_initialized_mD8CA1B7504E7C565ADE1B49E8DB08232A66FA631_inline(L_7, NULL);
		return L_8;
	}

IL_005e:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SamsungAndroidProviderLoader_Start_m6F124A52212118BBC82F0F5B534661CC348F8CC6 (SamsungAndroidProviderLoader_t750DAFC3B980CC2B2FB3F5BC080B536ECAF5D293* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdaptivePerformanceLoaderHelper_StartSubsystem_TisSamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_m280177B28B689C5DA83E4056364D33158B8BDE3D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AdaptivePerformanceLoaderHelper_StartSubsystem_TisSamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_m280177B28B689C5DA83E4056364D33158B8BDE3D(__this, AdaptivePerformanceLoaderHelper_StartSubsystem_TisSamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_m280177B28B689C5DA83E4056364D33158B8BDE3D_RuntimeMethod_var);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SamsungAndroidProviderLoader_Stop_m09649590212A34E95BC5C4F709C20D53CE95B66F (SamsungAndroidProviderLoader_t750DAFC3B980CC2B2FB3F5BC080B536ECAF5D293* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdaptivePerformanceLoaderHelper_StopSubsystem_TisSamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_m5043429A11F0840924CB4E0AE730585740AEBCCB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AdaptivePerformanceLoaderHelper_StopSubsystem_TisSamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_m5043429A11F0840924CB4E0AE730585740AEBCCB(__this, AdaptivePerformanceLoaderHelper_StopSubsystem_TisSamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_m5043429A11F0840924CB4E0AE730585740AEBCCB_RuntimeMethod_var);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SamsungAndroidProviderLoader_Deinitialize_mC01C17A4795C55BD72DADBDF7115BC90BCBD5BD0 (SamsungAndroidProviderLoader_t750DAFC3B980CC2B2FB3F5BC080B536ECAF5D293* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdaptivePerformanceLoaderHelper_DestroySubsystem_TisSamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_mF5E05816FE8B1579D3D604DC4DC2147F5331F6D4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AdaptivePerformanceLoaderHelper_DestroySubsystem_TisSamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_mF5E05816FE8B1579D3D604DC4DC2147F5331F6D4(__this, AdaptivePerformanceLoaderHelper_DestroySubsystem_TisSamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_mF5E05816FE8B1579D3D604DC4DC2147F5331F6D4_RuntimeMethod_var);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungAndroidProviderLoader__ctor_m2B6288D900467305274E822344CB000EC7B1420E (SamsungAndroidProviderLoader_t750DAFC3B980CC2B2FB3F5BC080B536ECAF5D293* __this, const RuntimeMethod* method) 
{
	{
		AdaptivePerformanceLoaderHelper__ctor_mEEA0DF770A2EAB15E711E6FCC9AE3166FFF30863(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungAndroidProviderLoader__cctor_m0E47CB4911A6547C0314E08E62E072F66E25EAE6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDB1225A75BFAF418EF64307D04DBE72CF9246A03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBDCF1E0892E8DA197607E498736F867735A73137_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungAndroidProviderLoader_t750DAFC3B980CC2B2FB3F5BC080B536ECAF5D293_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tBDCF1E0892E8DA197607E498736F867735A73137* L_0 = (List_1_tBDCF1E0892E8DA197607E498736F867735A73137*)il2cpp_codegen_object_new(List_1_tBDCF1E0892E8DA197607E498736F867735A73137_il2cpp_TypeInfo_var);
		List_1__ctor_mDB1225A75BFAF418EF64307D04DBE72CF9246A03(L_0, List_1__ctor_mDB1225A75BFAF418EF64307D04DBE72CF9246A03_RuntimeMethod_var);
		((SamsungAndroidProviderLoader_t750DAFC3B980CC2B2FB3F5BC080B536ECAF5D293_StaticFields*)il2cpp_codegen_static_fields_for(SamsungAndroidProviderLoader_t750DAFC3B980CC2B2FB3F5BC080B536ECAF5D293_il2cpp_TypeInfo_var))->___s_SamsungGameSDKSubsystemDescriptors = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SamsungAndroidProviderLoader_t750DAFC3B980CC2B2FB3F5BC080B536ECAF5D293_StaticFields*)il2cpp_codegen_static_fields_for(SamsungAndroidProviderLoader_t750DAFC3B980CC2B2FB3F5BC080B536ECAF5D293_il2cpp_TypeInfo_var))->___s_SamsungGameSDKSubsystemDescriptors), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SamsungAndroidProviderSettings_get_samsungProviderLogging_mE70D42A6A1439E3DB2406B298C2AF4F30811DA9C (SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___m_SamsungProviderLogging;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungAndroidProviderSettings_set_samsungProviderLogging_m799B21694D0AE66CED86A06CCBFB24E4B322F37B (SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___m_SamsungProviderLogging = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SamsungAndroidProviderSettings_get_highSpeedVRR_mF7D7A276D6AC87D624429E128A5B36155ABCE4A1 (SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___m_HighSpeedVRR;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungAndroidProviderSettings_set_highSpeedVRR_mEBA299AB5B79E26FA9760EDB5DB357D1F51159F2 (SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___m_HighSpeedVRR = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SamsungAndroidProviderSettings_get_automaticVRR_mA4EC43A6755953623F7A5F1B3C365A3A9CE25C3B (SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___m_AutomaticVRR;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungAndroidProviderSettings_set_automaticVRR_m10FAA3C18EF7EF58166BB3D9A572B5D249584639 (SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___m_AutomaticVRR = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungAndroidProviderSettings_Awake_mBE88FA41ECD3C5566F2E71A1FA500536653A0220 (SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC_StaticFields*)il2cpp_codegen_static_fields_for(SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC_il2cpp_TypeInfo_var))->___s_RuntimeInstance = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC_StaticFields*)il2cpp_codegen_static_fields_for(SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC_il2cpp_TypeInfo_var))->___s_RuntimeInstance), (void*)__this);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* SamsungAndroidProviderSettings_GetSettings_m1049E50BEC709D010C89CB78635F11BAF183A4CB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* L_0 = ((SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC_StaticFields*)il2cpp_codegen_static_fields_for(SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC_il2cpp_TypeInfo_var))->___s_RuntimeInstance;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungAndroidProviderSettings__ctor_m6BA5E84565C1FB2B7857B12FC7606CC78C1240E5 (SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* __this, const RuntimeMethod* method) 
{
	{
		__this->___m_AutomaticVRR = (bool)1;
		IAdaptivePerformanceSettings__ctor_mBEEA4933FD88BF7E3C20FAAE1E8BEAF3EBB18379(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSDKLog_Debug_m0098F995F87EF78DC722B73ADEDAD740E38B3C02 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSDKLog_tD0080E506C05822E023880100FA71E86D5D5C043_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral623E70A7FF6385C93E57D1CAE15E16E3188E7663);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GameSDKLog_tD0080E506C05822E023880100FA71E86D5D5C043_il2cpp_TypeInfo_var);
		SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* L_0 = ((GameSDKLog_tD0080E506C05822E023880100FA71E86D5D5C043_StaticFields*)il2cpp_codegen_static_fields_for(GameSDKLog_tD0080E506C05822E023880100FA71E86D5D5C043_il2cpp_TypeInfo_var))->___settings;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GameSDKLog_tD0080E506C05822E023880100FA71E86D5D5C043_il2cpp_TypeInfo_var);
		SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* L_2 = ((GameSDKLog_tD0080E506C05822E023880100FA71E86D5D5C043_StaticFields*)il2cpp_codegen_static_fields_for(GameSDKLog_tD0080E506C05822E023880100FA71E86D5D5C043_il2cpp_TypeInfo_var))->___settings;
		NullCheck(L_2);
		bool L_3;
		L_3 = SamsungAndroidProviderSettings_get_samsungProviderLogging_mE70D42A6A1439E3DB2406B298C2AF4F30811DA9C_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		String_t* L_4 = ___0_format;
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral623E70A7FF6385C93E57D1CAE15E16E3188E7663, L_4, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___1_args;
		String_t* L_7;
		L_7 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_5, L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_7, NULL);
	}

IL_002f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSDKLog__cctor_m32B284F99397E214C0E7F2DA7E47C5B27E9A1FD1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSDKLog_tD0080E506C05822E023880100FA71E86D5D5C043_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* L_0;
		L_0 = SamsungAndroidProviderSettings_GetSettings_m1049E50BEC709D010C89CB78635F11BAF183A4CB_inline(NULL);
		((GameSDKLog_tD0080E506C05822E023880100FA71E86D5D5C043_StaticFields*)il2cpp_codegen_static_fields_for(GameSDKLog_tD0080E506C05822E023880100FA71E86D5D5C043_il2cpp_TypeInfo_var))->___settings = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((GameSDKLog_tD0080E506C05822E023880100FA71E86D5D5C043_StaticFields*)il2cpp_codegen_static_fields_for(GameSDKLog_tD0080E506C05822E023880100FA71E86D5D5C043_il2cpp_TypeInfo_var))->___settings), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AsyncUpdater_Register_m76240B5B2E1EB64E1DEBDCF0A4839BE515BB62B1 (AsyncUpdater_t723A6C592E8D827601A39F38D588CF80812FE976* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5E7FCE3DF7B23B6D88C14A04177C1DCD15063858_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_0 = __this->___m_Thread;
		NullCheck(L_0);
		bool L_1;
		L_1 = Thread_get_IsAlive_m87922B882A526D780570799F497EEB4C99F005DF(L_0, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		return (-1);
	}

IL_000f:
	{
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_2 = __this->___m_UpdateAction;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m5E7FCE3DF7B23B6D88C14A04177C1DCD15063858_inline(L_2, List_1_get_Count_m5E7FCE3DF7B23B6D88C14A04177C1DCD15063858_RuntimeMethod_var);
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_4 = __this->___m_UpdateAction;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = ___0_action;
		NullCheck(L_4);
		List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_inline(L_4, L_5, List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_RuntimeMethod_var);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUpdater_Start_m44754B8FBC894327CB62D4C2893211AF14068983 (AsyncUpdater_t723A6C592E8D827601A39F38D588CF80812FE976* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5E7FCE3DF7B23B6D88C14A04177C1DCD15063858_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Semaphore_t12119E120563D7838E1DAFB15006DC8985C6AC4B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_0 = __this->___m_UpdateAction;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m5E7FCE3DF7B23B6D88C14A04177C1DCD15063858_inline(L_0, List_1_get_Count_m5E7FCE3DF7B23B6D88C14A04177C1DCD15063858_RuntimeMethod_var);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		int32_t L_3 = V_0;
		Semaphore_t12119E120563D7838E1DAFB15006DC8985C6AC4B* L_4 = (Semaphore_t12119E120563D7838E1DAFB15006DC8985C6AC4B*)il2cpp_codegen_object_new(Semaphore_t12119E120563D7838E1DAFB15006DC8985C6AC4B_il2cpp_TypeInfo_var);
		Semaphore__ctor_m5954C9FB5ED41FD527888AA96F28398DBCAFA237(L_4, 0, L_3, NULL);
		__this->___m_Semaphore = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Semaphore), (void*)L_4);
		int32_t L_5 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_5);
		__this->___m_UpdateRequests = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UpdateRequests), (void*)L_6);
		int32_t L_7 = V_0;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_8 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var, (uint32_t)L_7);
		__this->___m_RequestComplete = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RequestComplete), (void*)L_8);
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_9 = __this->___m_Thread;
		NullCheck(L_9);
		Thread_Start_m2230799AA331CA9ACEF49D5500281D0C1A9F72FA(L_9, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncUpdater_RequestUpdate_m17D6A4052A9E1BF5ED30873ACD8A9EE3E27F73A5 (AsyncUpdater_t723A6C592E8D827601A39F38D588CF80812FE976* __this, int32_t ___0_handle, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		RuntimeObject* L_0 = __this->___m_Mutex;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0050:
			{
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0059;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0059:
				{
					return;
				}
			}
		});
		try
		{
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				int32_t L_4 = __this->___m_UpdateRequestWriteIndex;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->___m_UpdateRequests;
				NullCheck(L_5);
				V_2 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_4, 1))%((int32_t)(((RuntimeArray*)L_5)->max_length))));
				int32_t L_6 = V_2;
				int32_t L_7 = __this->___m_UpdateRequestReadIndex;
				if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
				{
					goto IL_0030_1;
				}
			}
			{
				V_3 = (bool)0;
				goto IL_0068;
			}

IL_0030_1:
			{
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->___m_UpdateRequests;
				int32_t L_9 = __this->___m_UpdateRequestWriteIndex;
				int32_t L_10 = ___0_handle;
				NullCheck(L_8);
				(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (int32_t)L_10);
				BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_11 = __this->___m_RequestComplete;
				int32_t L_12 = ___0_handle;
				NullCheck(L_11);
				(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (bool)0);
				int32_t L_13 = V_2;
				__this->___m_UpdateRequestWriteIndex = L_13;
				goto IL_005a;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005a:
	{
		Semaphore_t12119E120563D7838E1DAFB15006DC8985C6AC4B* L_14 = __this->___m_Semaphore;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = Semaphore_Release_m3AA41CBF1DEA03948FD56E47B5E05A68F43A7A94(L_14, NULL);
		return (bool)1;
	}

IL_0068:
	{
		bool L_16 = V_3;
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncUpdater_IsRequestComplete_m7CF12C9A54067687AA18188D656C17A82E67D72B (AsyncUpdater_t723A6C592E8D827601A39F38D588CF80812FE976* __this, int32_t ___0_handle, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		RuntimeObject* L_0 = __this->___m_Mutex;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001c:
			{
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0025;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0025:
				{
					return;
				}
			}
		});
		try
		{
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_4 = __this->___m_RequestComplete;
			int32_t L_5 = ___0_handle;
			NullCheck(L_4);
			int32_t L_6 = L_5;
			uint8_t L_7 = (uint8_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
			V_2 = (bool)L_7;
			goto IL_0026;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0026:
	{
		bool L_8 = V_2;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUpdater__ctor_m0E52F8DBFA255D988D89F3DF47CD6FA7E90EBB34 (AsyncUpdater_t723A6C592E8D827601A39F38D588CF80812FE976* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUpdater_ThreadProc_m20254534606D36097A4DCB11A7BC960FFA281360_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDB72209F35D56F62A287633F9450978E90B90987_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE02D43BFB3611F4411DD21848B293789A2B1B8D6);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_0 = (List_1_tDB72209F35D56F62A287633F9450978E90B90987*)il2cpp_codegen_object_new(List_1_tDB72209F35D56F62A287633F9450978E90B90987_il2cpp_TypeInfo_var);
		List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212(L_0, List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212_RuntimeMethod_var);
		__this->___m_UpdateAction = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UpdateAction), (void*)L_0);
		RuntimeObject* L_1 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_1, NULL);
		__this->___m_Mutex = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Mutex), (void*)L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2* L_2 = (ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2*)il2cpp_codegen_object_new(ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_il2cpp_TypeInfo_var);
		ThreadStart__ctor_m35CE51F76358F20E4A0C8F2963C3AE14E5FF7E71(L_2, __this, (intptr_t)((void*)AsyncUpdater_ThreadProc_m20254534606D36097A4DCB11A7BC960FFA281360_RuntimeMethod_var), NULL);
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_3 = (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F*)il2cpp_codegen_object_new(Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var);
		Thread__ctor_m1FA23A179DF4F5B659689D6FA40DE903086212E2(L_3, L_2, NULL);
		__this->___m_Thread = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Thread), (void*)L_3);
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_4 = __this->___m_Thread;
		NullCheck(L_4);
		Thread_set_Name_m53E2BA6E84C04A6393EA5E470E516703CB892E4A(L_4, _stringLiteralE02D43BFB3611F4411DD21848B293789A2B1B8D6, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUpdater_ThreadProc_m20254534606D36097A4DCB11A7BC960FFA281360 (AsyncUpdater_t723A6C592E8D827601A39F38D588CF80812FE976* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8A119323481338039197B73D82916BB46DEE3C2D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0;
		L_0 = AndroidJNI_AttachCurrentThread_m412647220ED1F7D42F9D41F692D1D7DC4696B6D4(NULL);
	}

IL_0006:
	{
	}
	try
	{
		Semaphore_t12119E120563D7838E1DAFB15006DC8985C6AC4B* L_1 = __this->___m_Semaphore;
		NullCheck(L_1);
		bool L_2;
		L_2 = VirtualFuncInvoker0< bool >::Invoke(9, L_1);
		goto IL_001b;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0015;
		}
		throw e;
	}

CATCH_0015:
	{
		Exception_t* L_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00bd;
	}

IL_001b:
	{
		V_0 = (-1);
		RuntimeObject* L_4 = __this->___m_Mutex;
		V_1 = L_4;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0070:
			{
				{
					bool L_5 = V_2;
					if (!L_5)
					{
						goto IL_0079;
					}
				}
				{
					RuntimeObject* L_6 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_6, NULL);
				}

IL_0079:
				{
					return;
				}
			}
		});
		try
		{
			{
				RuntimeObject* L_7 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_7, (&V_2), NULL);
				bool L_8 = __this->___m_Quit;
				if (!L_8)
				{
					goto IL_003b_1;
				}
			}
			{
				goto IL_00bd;
			}

IL_003b_1:
			{
				int32_t L_9 = __this->___m_UpdateRequestReadIndex;
				int32_t L_10 = __this->___m_UpdateRequestWriteIndex;
				if ((((int32_t)L_9) == ((int32_t)L_10)))
				{
					goto IL_006e_1;
				}
			}
			{
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->___m_UpdateRequests;
				int32_t L_12 = __this->___m_UpdateRequestReadIndex;
				NullCheck(L_11);
				int32_t L_13 = L_12;
				int32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
				V_0 = L_14;
				int32_t L_15 = __this->___m_UpdateRequestReadIndex;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = __this->___m_UpdateRequests;
				NullCheck(L_16);
				__this->___m_UpdateRequestReadIndex = ((int32_t)(((int32_t)il2cpp_codegen_add(L_15, 1))%((int32_t)(((RuntimeArray*)L_16)->max_length))));
			}

IL_006e_1:
			{
				goto IL_007a;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007a:
	{
		int32_t L_17 = V_0;
		if ((((int32_t)L_17) < ((int32_t)0)))
		{
			goto IL_0006;
		}
	}
	try
	{
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_18 = __this->___m_UpdateAction;
		int32_t L_19 = V_0;
		NullCheck(L_18);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_20;
		L_20 = List_1_get_Item_m8A119323481338039197B73D82916BB46DEE3C2D(L_18, L_19, List_1_get_Item_m8A119323481338039197B73D82916BB46DEE3C2D_RuntimeMethod_var);
		NullCheck(L_20);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_20, NULL);
		goto IL_0094;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0091;
		}
		throw e;
	}

CATCH_0091:
	{
		Exception_t* L_21 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0094;
	}

IL_0094:
	{
		RuntimeObject* L_22 = __this->___m_Mutex;
		V_1 = L_22;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{
				{
					bool L_23 = V_2;
					if (!L_23)
					{
						goto IL_00bc;
					}
				}
				{
					RuntimeObject* L_24 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_24, NULL);
				}

IL_00bc:
				{
					return;
				}
			}
		});
		try
		{
			RuntimeObject* L_25 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_25, (&V_2), NULL);
			BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_26 = __this->___m_RequestComplete;
			int32_t L_27 = V_0;
			NullCheck(L_26);
			(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (bool)1);
			goto IL_0006;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00bd:
	{
		int32_t L_28;
		L_28 = AndroidJNI_DetachCurrentThread_mC0F3D8974C0681528B801EF0AC2A54E5C7A2E933(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUpdater_Dispose_mD52CA6DA8B1B7993C6AC8D3C4F0A5C88088E8996 (AsyncUpdater_t723A6C592E8D827601A39F38D588CF80812FE976* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		bool L_0 = __this->___m_Disposed;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		bool L_1 = ___0_disposing;
		if (!L_1)
		{
			goto IL_0054;
		}
	}
	{
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_2 = __this->___m_Thread;
		NullCheck(L_2);
		bool L_3;
		L_3 = Thread_get_IsAlive_m87922B882A526D780570799F497EEB4C99F005DF(L_2, NULL);
		if (!L_3)
		{
			goto IL_0054;
		}
	}
	{
		RuntimeObject* L_4 = __this->___m_Mutex;
		V_0 = L_4;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0033:
			{
				{
					bool L_5 = V_1;
					if (!L_5)
					{
						goto IL_003c;
					}
				}
				{
					RuntimeObject* L_6 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_6, NULL);
				}

IL_003c:
				{
					return;
				}
			}
		});
		try
		{
			RuntimeObject* L_7 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_7, (&V_1), NULL);
			__this->___m_Quit = (bool)1;
			goto IL_003d;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003d:
	{
		Semaphore_t12119E120563D7838E1DAFB15006DC8985C6AC4B* L_8 = __this->___m_Semaphore;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Semaphore_Release_m3AA41CBF1DEA03948FD56E47B5E05A68F43A7A94(L_8, NULL);
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_10 = __this->___m_Thread;
		NullCheck(L_10);
		Thread_Join_mB756581AAF5EB028081256E0517892BC8867779F(L_10, NULL);
	}

IL_0054:
	{
		__this->___m_Disposed = (bool)1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUpdater_Dispose_mE3267C63AAF1B517C1AE45CC31A0FC5397E94E1F (AsyncUpdater_t723A6C592E8D827601A39F38D588CF80812FE976* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncUpdater_Dispose_mD52CA6DA8B1B7993C6AC8D3C4F0A5C88088E8996(__this, (bool)1, NULL);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SamsungGameSDKAdaptivePerformanceSubsystem_get_ApplicationLifecycle_m64F7677D5782694290573907AF9FBAD2A10C7D96 (SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* __this, const RuntimeMethod* method) 
{
	{
		return __this;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SamsungGameSDKAdaptivePerformanceSubsystem_get_PerformanceLevelControl_mC60177D4C36D89C823ECA720EA790F3209FECFCC (SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* __this, const RuntimeMethod* method) 
{
	{
		return __this;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SamsungGameSDKAdaptivePerformanceSubsystem_get_MaxCpuPerformanceLevel_m7558F2A23D816B4F3EB7B94934B9646038C4D6F0 (SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CMaxCpuPerformanceLevelU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystem_set_MaxCpuPerformanceLevel_m7040D551B96A10A49DB28DC1CB6FF6E55811BF9C (SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CMaxCpuPerformanceLevelU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SamsungGameSDKAdaptivePerformanceSubsystem_get_MaxGpuPerformanceLevel_m5268FD732220398272D98125ABD2A92C0DB76C28 (SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CMaxGpuPerformanceLevelU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystem_set_MaxGpuPerformanceLevel_mDD72ADA0233E838AB2B08625407171D6FABC33BA (SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CMaxGpuPerformanceLevelU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystem__ctor_m194A02186321C4A798F3D9884AE32C85217515D8 (SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t87D266BDCAC7E2FA2FA9733C3E286D256FCFFFFA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUpdater_t723A6C592E8D827601A39F38D588CF80812FE976_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncValue_1__ctor_m8F76CA33FF29AF1898F434F8ED52FD8D3821ACB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungGameSDKAdaptivePerformanceSubsystem_OnCpuPerformanceBoostModeTimeout_mD62D5D0817845C0442175DD0E6D0A85894859794_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungGameSDKAdaptivePerformanceSubsystem_OnGpuPerformanceBoostModeTimeout_mCAB37F0ACE9C858CC9452EDA7ADD8D694FB44F46_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungGameSDKAdaptivePerformanceSubsystem_OnPerformanceLevelTimeout_mA6402C54280B5C28F1054D67B0689B97006DBB31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungGameSDKAdaptivePerformanceSubsystem_OnPerformanceWarning_m4F10CCC53C50EB06584ECD641A77E64404010C76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungGameSDKAdaptivePerformanceSubsystem_U3C_ctorU3Eb__26_1_mCE696AB1F6975769FC2500AECB6FE848409B3B4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungGameSDKAdaptivePerformanceSubsystem_U3C_ctorU3Eb__26_2_m4FE8C54EE4AA931A4C2D2C73BD6DE66E478FE7E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__26_0_m5B1E90197167FA3947DD02BAE512EF46DBD77D15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t025A21461965FABBEE9B88CFED183BF18C71FF39_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_1 = NULL;
	Action_1_t87D266BDCAC7E2FA2FA9733C3E286D256FCFFFFA* G_B2_2 = NULL;
	SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* G_B2_3 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_1 = NULL;
	Action_1_t87D266BDCAC7E2FA2FA9733C3E286D256FCFFFFA* G_B1_2 = NULL;
	SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* G_B1_3 = NULL;
	{
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___m_DataLock = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DataLock), (void*)L_0);
		__this->___m_MaxTempLevel = (10.0f);
		__this->___m_AllowPerformanceLevelControlChanges = (bool)1;
		AdaptivePerformanceSubsystem__ctor_mEEBD3B76AC04711B8088F2E55218C832F490A078(__this, NULL);
		SamsungGameSDKAdaptivePerformanceSubsystem_set_MaxCpuPerformanceLevel_m7040D551B96A10A49DB28DC1CB6FF6E55811BF9C_inline(__this, 3, NULL);
		SamsungGameSDKAdaptivePerformanceSubsystem_set_MaxGpuPerformanceLevel_mDD72ADA0233E838AB2B08625407171D6FABC33BA_inline(__this, 3, NULL);
		Action_1_t87D266BDCAC7E2FA2FA9733C3E286D256FCFFFFA* L_1 = (Action_1_t87D266BDCAC7E2FA2FA9733C3E286D256FCFFFFA*)il2cpp_codegen_object_new(Action_1_t87D266BDCAC7E2FA2FA9733C3E286D256FCFFFFA_il2cpp_TypeInfo_var);
		Action_1__ctor_m3447050AC75D7978A825F681D4EB19C5A0B735E0(L_1, __this, (intptr_t)((void*)SamsungGameSDKAdaptivePerformanceSubsystem_OnPerformanceWarning_m4F10CCC53C50EB06584ECD641A77E64404010C76_RuntimeMethod_var), NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_2, __this, (intptr_t)((void*)SamsungGameSDKAdaptivePerformanceSubsystem_OnPerformanceLevelTimeout_mA6402C54280B5C28F1054D67B0689B97006DBB31_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t025A21461965FABBEE9B88CFED183BF18C71FF39_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ((U3CU3Ec_t025A21461965FABBEE9B88CFED183BF18C71FF39_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t025A21461965FABBEE9B88CFED183BF18C71FF39_il2cpp_TypeInfo_var))->___U3CU3E9__26_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = L_3;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_2;
			G_B2_2 = L_1;
			G_B2_3 = __this;
			goto IL_0069;
		}
		G_B1_0 = L_4;
		G_B1_1 = L_2;
		G_B1_2 = L_1;
		G_B1_3 = __this;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t025A21461965FABBEE9B88CFED183BF18C71FF39_il2cpp_TypeInfo_var);
		U3CU3Ec_t025A21461965FABBEE9B88CFED183BF18C71FF39* L_5 = ((U3CU3Ec_t025A21461965FABBEE9B88CFED183BF18C71FF39_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t025A21461965FABBEE9B88CFED183BF18C71FF39_il2cpp_TypeInfo_var))->___U3CU3E9;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_6, L_5, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__26_0_m5B1E90197167FA3947DD02BAE512EF46DBD77D15_RuntimeMethod_var), NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = L_6;
		((U3CU3Ec_t025A21461965FABBEE9B88CFED183BF18C71FF39_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t025A21461965FABBEE9B88CFED183BF18C71FF39_il2cpp_TypeInfo_var))->___U3CU3E9__26_0 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t025A21461965FABBEE9B88CFED183BF18C71FF39_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t025A21461965FABBEE9B88CFED183BF18C71FF39_il2cpp_TypeInfo_var))->___U3CU3E9__26_0), (void*)L_7);
		G_B2_0 = L_7;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
	}

IL_0069:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_8, __this, (intptr_t)((void*)SamsungGameSDKAdaptivePerformanceSubsystem_OnCpuPerformanceBoostModeTimeout_mD62D5D0817845C0442175DD0E6D0A85894859794_RuntimeMethod_var), NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_9, __this, (intptr_t)((void*)SamsungGameSDKAdaptivePerformanceSubsystem_OnGpuPerformanceBoostModeTimeout_mCAB37F0ACE9C858CC9452EDA7ADD8D694FB44F46_RuntimeMethod_var), NULL);
		NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* L_10 = (NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8*)il2cpp_codegen_object_new(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var);
		NativeApi__ctor_m62E976B074521326BD1F50D144286A876C851B1E(L_10, G_B2_2, G_B2_1, G_B2_0, L_8, L_9, NULL);
		NullCheck(G_B2_3);
		G_B2_3->___m_Api = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_3->___m_Api), (void*)L_10);
		AsyncUpdater_t723A6C592E8D827601A39F38D588CF80812FE976* L_11 = (AsyncUpdater_t723A6C592E8D827601A39F38D588CF80812FE976*)il2cpp_codegen_object_new(AsyncUpdater_t723A6C592E8D827601A39F38D588CF80812FE976_il2cpp_TypeInfo_var);
		AsyncUpdater__ctor_m0E52F8DBFA255D988D89F3DF47CD6FA7E90EBB34(L_11, NULL);
		__this->___m_AsyncUpdater = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AsyncUpdater), (void*)L_11);
		AsyncUpdater_t723A6C592E8D827601A39F38D588CF80812FE976* L_12 = __this->___m_AsyncUpdater;
		Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7* L_13 = (Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7*)il2cpp_codegen_object_new(Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7_il2cpp_TypeInfo_var);
		Func_1__ctor_mFD3B853B23577DD7757C6726EB1FB0EC97D25B31(L_13, __this, (intptr_t)((void*)SamsungGameSDKAdaptivePerformanceSubsystem_U3C_ctorU3Eb__26_1_mCE696AB1F6975769FC2500AECB6FE848409B3B4F_RuntimeMethod_var), NULL);
		AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A* L_14 = (AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A*)il2cpp_codegen_object_new(AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A_il2cpp_TypeInfo_var);
		AsyncValue_1__ctor_m8F76CA33FF29AF1898F434F8ED52FD8D3821ACB5(L_14, L_12, (-1.0), (2.70000005f), L_13, AsyncValue_1__ctor_m8F76CA33FF29AF1898F434F8ED52FD8D3821ACB5_RuntimeMethod_var);
		__this->___m_SkinTemp = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SkinTemp), (void*)L_14);
		AsyncUpdater_t723A6C592E8D827601A39F38D588CF80812FE976* L_15 = __this->___m_AsyncUpdater;
		Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7* L_16 = (Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7*)il2cpp_codegen_object_new(Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7_il2cpp_TypeInfo_var);
		Func_1__ctor_mFD3B853B23577DD7757C6726EB1FB0EC97D25B31(L_16, __this, (intptr_t)((void*)SamsungGameSDKAdaptivePerformanceSubsystem_U3C_ctorU3Eb__26_2_m4FE8C54EE4AA931A4C2D2C73BD6DE66E478FE7E0_RuntimeMethod_var), NULL);
		AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A* L_17 = (AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A*)il2cpp_codegen_object_new(AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A_il2cpp_TypeInfo_var);
		AsyncValue_1__ctor_m8F76CA33FF29AF1898F434F8ED52FD8D3821ACB5(L_17, L_15, (-1.0), (0.0f), L_16, AsyncValue_1__ctor_m8F76CA33FF29AF1898F434F8ED52FD8D3821ACB5_RuntimeMethod_var);
		__this->___m_GPUTime = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_GPUTime), (void*)L_17);
		AdaptivePerformanceSubsystem_set_Capabilities_m13719E1250D06D80D0889D1015C9F35078F7414F_inline(__this, ((int32_t)123), NULL);
		AsyncUpdater_t723A6C592E8D827601A39F38D588CF80812FE976* L_18 = __this->___m_AsyncUpdater;
		NullCheck(L_18);
		AsyncUpdater_Start_m44754B8FBC894327CB62D4C2893211AF14068983(L_18, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystem_OnPerformanceWarning_m4F10CCC53C50EB06584ECD641A77E64404010C76 (SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* __this, int32_t ___0_warningLevel, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = __this->___m_DataLock;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0046:
			{
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_004f;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_004f:
				{
					return;
				}
			}
		});
		try
		{
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_4 = (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83*)(&__this->___m_Data);
			PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_5 = L_4;
			int32_t L_6;
			L_6 = PerformanceDataRecord_get_ChangeFlags_m83DE31AF3877A2A1507A6703B190533FD166B9B7_inline(L_5, NULL);
			PerformanceDataRecord_set_ChangeFlags_mE99AA127E129C78872D68F5C650D55B8E5D33DC8_inline(L_5, ((int32_t)((int32_t)L_6|1)), NULL);
			PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_7 = (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83*)(&__this->___m_Data);
			PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_8 = L_7;
			int32_t L_9;
			L_9 = PerformanceDataRecord_get_ChangeFlags_m83DE31AF3877A2A1507A6703B190533FD166B9B7_inline(L_8, NULL);
			PerformanceDataRecord_set_ChangeFlags_mE99AA127E129C78872D68F5C650D55B8E5D33DC8_inline(L_8, ((int32_t)((int32_t)L_9|((int32_t)32))), NULL);
			PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_10 = (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83*)(&__this->___m_Data);
			int32_t L_11 = ___0_warningLevel;
			PerformanceDataRecord_set_WarningLevel_mBC3853B7D0AA1412C41DFD248FA9E7252DAEB5F4_inline(L_10, L_11, NULL);
			goto IL_0050;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0050:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystem_OnPerformanceLevelTimeout_mA6402C54280B5C28F1054D67B0689B97006DBB31 (SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = __this->___m_DataLock;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0052:
			{
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_005b;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_005b:
				{
					return;
				}
			}
		});
		try
		{
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_4 = (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83*)(&__this->___m_Data);
			PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_5 = L_4;
			int32_t L_6;
			L_6 = PerformanceDataRecord_get_ChangeFlags_m83DE31AF3877A2A1507A6703B190533FD166B9B7_inline(L_5, NULL);
			PerformanceDataRecord_set_ChangeFlags_mE99AA127E129C78872D68F5C650D55B8E5D33DC8_inline(L_5, ((int32_t)((int32_t)L_6|8)), NULL);
			PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_7 = (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83*)(&__this->___m_Data);
			PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_8 = L_7;
			int32_t L_9;
			L_9 = PerformanceDataRecord_get_ChangeFlags_m83DE31AF3877A2A1507A6703B190533FD166B9B7_inline(L_8, NULL);
			PerformanceDataRecord_set_ChangeFlags_mE99AA127E129C78872D68F5C650D55B8E5D33DC8_inline(L_8, ((int32_t)((int32_t)L_9|((int32_t)16))), NULL);
			PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_10 = (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83*)(&__this->___m_Data);
			PerformanceDataRecord_set_CpuPerformanceLevel_m8BBB7FA33AF2644ED0DE81CD58CCB07C5F71ED03_inline(L_10, (-1), NULL);
			PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_11 = (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83*)(&__this->___m_Data);
			PerformanceDataRecord_set_GpuPerformanceLevel_mBA26ABE3F6089BA232022D7F0F38B55B8FA9481A_inline(L_11, (-1), NULL);
			goto IL_005c;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystem_OnCpuPerformanceBoostModeTimeout_mD62D5D0817845C0442175DD0E6D0A85894859794 (SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = __this->___m_DataLock;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0036:
			{
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_003f;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_003f:
				{
					return;
				}
			}
		});
		try
		{
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_4 = (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83*)(&__this->___m_Data);
			PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_5 = L_4;
			int32_t L_6;
			L_6 = PerformanceDataRecord_get_ChangeFlags_m83DE31AF3877A2A1507A6703B190533FD166B9B7_inline(L_5, NULL);
			PerformanceDataRecord_set_ChangeFlags_mE99AA127E129C78872D68F5C650D55B8E5D33DC8_inline(L_5, ((int32_t)((int32_t)L_6|((int32_t)512))), NULL);
			PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_7 = (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83*)(&__this->___m_Data);
			PerformanceDataRecord_set_CpuPerformanceBoost_mD8BF1CE74A03B57E81DBCD9A3DDE8DAA27968FF5_inline(L_7, (bool)0, NULL);
			goto IL_0040;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0040:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystem_OnGpuPerformanceBoostModeTimeout_mCAB37F0ACE9C858CC9452EDA7ADD8D694FB44F46 (SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = __this->___m_DataLock;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0036:
			{
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_003f;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_003f:
				{
					return;
				}
			}
		});
		try
		{
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_4 = (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83*)(&__this->___m_Data);
			PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_5 = L_4;
			int32_t L_6;
			L_6 = PerformanceDataRecord_get_ChangeFlags_m83DE31AF3877A2A1507A6703B190533FD166B9B7_inline(L_5, NULL);
			PerformanceDataRecord_set_ChangeFlags_mE99AA127E129C78872D68F5C650D55B8E5D33DC8_inline(L_5, ((int32_t)((int32_t)L_6|((int32_t)1024))), NULL);
			PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_7 = (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83*)(&__this->___m_Data);
			PerformanceDataRecord_set_GpuPerformanceBoost_m0A5764E94B8EC621A0AA51B2F7C24BA1EAF844B9_inline(L_7, (bool)0, NULL);
			goto IL_0040;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0040:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SamsungGameSDKAdaptivePerformanceSubsystem_GetHighPrecisionSkinTempLevel_mE797BBCCD724C732D8CC903F304B1E2E75D48F32 (SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* __this, const RuntimeMethod* method) 
{
	{
		NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* L_0 = __this->___m_Api;
		NullCheck(L_0);
		double L_1;
		L_1 = NativeApi_GetHighPrecisionSkinTempLevel_mF772B46B9F70B8520E7CE50D9FBB854BD435836A(L_0, NULL);
		return ((float)L_1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SamsungGameSDKAdaptivePerformanceSubsystem_GetClusterInfo_mCDCC1E57CDB95E8FB869C9B0BD6A2ACB7D10FBE2 (SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* __this, const RuntimeMethod* method) 
{
	{
		NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* L_0 = __this->___m_Api;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = NativeApi_GetClusterInfo_m1B6635A235E064CCBACD2D3875A97816A3FCA920(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystem_ImmediateUpdateTemperature_m35F36531EA566899C06B7B46F7EB4C089333C2FF (SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncValue_1_SyncUpdate_m36DC9C08B8E7C6C425C5ADD8E3F807D75A1D85E2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	{
		float L_0;
		L_0 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		V_0 = L_0;
		AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A* L_1 = __this->___m_SkinTemp;
		float L_2 = V_0;
		NullCheck(L_1);
		AsyncValue_1_SyncUpdate_m36DC9C08B8E7C6C425C5ADD8E3F807D75A1D85E2(L_1, L_2, AsyncValue_1_SyncUpdate_m36DC9C08B8E7C6C425C5ADD8E3F807D75A1D85E2_RuntimeMethod_var);
		RuntimeObject* L_3 = __this->___m_DataLock;
		V_1 = L_3;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0049:
			{
				{
					bool L_4 = V_2;
					if (!L_4)
					{
						goto IL_0052;
					}
				}
				{
					RuntimeObject* L_5 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_5, NULL);
				}

IL_0052:
				{
					return;
				}
			}
		});
		try
		{
			RuntimeObject* L_6 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_6, (&V_2), NULL);
			PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_7 = (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83*)(&__this->___m_Data);
			PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_8 = L_7;
			int32_t L_9;
			L_9 = PerformanceDataRecord_get_ChangeFlags_m83DE31AF3877A2A1507A6703B190533FD166B9B7_inline(L_8, NULL);
			PerformanceDataRecord_set_ChangeFlags_mE99AA127E129C78872D68F5C650D55B8E5D33DC8_inline(L_8, ((int32_t)((int32_t)L_9|2)), NULL);
			PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_10 = (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83*)(&__this->___m_Data);
			float L_11;
			L_11 = SamsungGameSDKAdaptivePerformanceSubsystem_GetTemperatureLevel_mA400905D39A068B49434A3C39B2D7028F0760058(__this, NULL);
			PerformanceDataRecord_set_TemperatureLevel_mFC2BC8E019EFB0E7611C242D1F5D4EAB76570BB5_inline(L_10, L_11, NULL);
			goto IL_0053;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0053:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SamsungGameSDKAdaptivePerformanceSubsystem_TryParseVersion_m11B181A8D69F59774E2E1196D0D8F61EE341E3E0 (String_t* ___0_versionString, Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7** ___1_version, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{
		Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7** L_0 = ___1_version;
		String_t* L_1 = ___0_versionString;
		Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* L_2 = (Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7*)il2cpp_codegen_object_new(Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7_il2cpp_TypeInfo_var);
		Version__ctor_m52D06833AE6481C0A9B72085BDC4D09A723CEF7F(L_2, L_1, NULL);
		*((RuntimeObject**)L_0) = (RuntimeObject*)L_2;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)L_2);
		goto IL_0012;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000a;
		}
		throw e;
	}

CATCH_000a:
	{
		Exception_t* L_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7** L_4 = ___1_version;
		*((RuntimeObject**)L_4) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)NULL);
		V_0 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0014;
	}

IL_0012:
	{
		return (bool)1;
	}

IL_0014:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SamsungGameSDKAdaptivePerformanceSubsystem_Initialize_m9F03A36723372058F03421AB92B77BA6C4E9B1AA (SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = AdaptivePerformanceSubsystemBase_get_initialized_mD8CA1B7504E7C565ADE1B49E8DB08232A66FA631_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* L_1 = __this->___m_Api;
		NullCheck(L_1);
		bool L_2;
		L_2 = NativeApi_Initialize_mD5CCC8D65B6D995B365BE4602144DEBA9BDD55CD(L_1, NULL);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)0;
	}

IL_0019:
	{
		NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* L_3 = __this->___m_Api;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = NativeApi_GetVersion_mA4099836535EE991E5F2F9F910A2051AA54944A2(L_3, NULL);
		Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7** L_5 = (Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7**)(&__this->___m_Version);
		il2cpp_codegen_runtime_class_init_inline(SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = SamsungGameSDKAdaptivePerformanceSubsystem_TryParseVersion_m11B181A8D69F59774E2E1196D0D8F61EE341E3E0(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0118;
		}
	}
	{
		Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* L_7 = __this->___m_Version;
		Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* L_8 = (Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7*)il2cpp_codegen_object_new(Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7_il2cpp_TypeInfo_var);
		Version__ctor_m0871675040007535EA3D8083A4BEAE9DF8C92FF4(L_8, 3, 5, NULL);
		bool L_9;
		L_9 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_0088;
		}
	}
	{
		AdaptivePerformanceSubsystemBase_set_initialized_m7B2B09A90BC940B4903FBF8FB7D4F87581CDFF72_inline(__this, (bool)1, NULL);
		NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* L_10 = __this->___m_Api;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = NativeApi_GetMaxCpuPerformanceLevel_m7106C512DEFDAD0EF76DF0F752E95B5C20ADFE92(L_10, NULL);
		SamsungGameSDKAdaptivePerformanceSubsystem_set_MaxCpuPerformanceLevel_m7040D551B96A10A49DB28DC1CB6FF6E55811BF9C_inline(__this, L_11, NULL);
		NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* L_12 = __this->___m_Api;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = NativeApi_GetMaxGpuPerformanceLevel_m287193E794C3784CDA030D5B37F3F4D8B34BEAB8(L_12, NULL);
		SamsungGameSDKAdaptivePerformanceSubsystem_set_MaxGpuPerformanceLevel_mDD72ADA0233E838AB2B08625407171D6FABC33BA_inline(__this, L_13, NULL);
		int32_t L_14;
		L_14 = AdaptivePerformanceSubsystem_get_Capabilities_m3B41A455C5EF85D90A6796AE764E6285E1AF21A1_inline(__this, NULL);
		AdaptivePerformanceSubsystem_set_Capabilities_m13719E1250D06D80D0889D1015C9F35078F7414F_inline(__this, ((int32_t)((int32_t)L_14|((int32_t)1536))), NULL);
		goto IL_0118;
	}

IL_0088:
	{
		Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* L_15 = __this->___m_Version;
		Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* L_16 = (Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7*)il2cpp_codegen_object_new(Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7_il2cpp_TypeInfo_var);
		Version__ctor_m0871675040007535EA3D8083A4BEAE9DF8C92FF4(L_16, 3, 4, NULL);
		bool L_17;
		L_17 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(L_15, L_16, NULL);
		if (!L_17)
		{
			goto IL_00c7;
		}
	}
	{
		AdaptivePerformanceSubsystemBase_set_initialized_m7B2B09A90BC940B4903FBF8FB7D4F87581CDFF72_inline(__this, (bool)1, NULL);
		NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* L_18 = __this->___m_Api;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = NativeApi_GetMaxCpuPerformanceLevel_m7106C512DEFDAD0EF76DF0F752E95B5C20ADFE92(L_18, NULL);
		SamsungGameSDKAdaptivePerformanceSubsystem_set_MaxCpuPerformanceLevel_m7040D551B96A10A49DB28DC1CB6FF6E55811BF9C_inline(__this, L_19, NULL);
		NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* L_20 = __this->___m_Api;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = NativeApi_GetMaxGpuPerformanceLevel_m287193E794C3784CDA030D5B37F3F4D8B34BEAB8(L_20, NULL);
		SamsungGameSDKAdaptivePerformanceSubsystem_set_MaxGpuPerformanceLevel_mDD72ADA0233E838AB2B08625407171D6FABC33BA_inline(__this, L_21, NULL);
		goto IL_0118;
	}

IL_00c7:
	{
		Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* L_22 = __this->___m_Version;
		Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* L_23 = (Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7*)il2cpp_codegen_object_new(Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7_il2cpp_TypeInfo_var);
		Version__ctor_m0871675040007535EA3D8083A4BEAE9DF8C92FF4(L_23, 3, 2, NULL);
		bool L_24;
		L_24 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(L_22, L_23, NULL);
		if (!L_24)
		{
			goto IL_0106;
		}
	}
	{
		AdaptivePerformanceSubsystemBase_set_initialized_m7B2B09A90BC940B4903FBF8FB7D4F87581CDFF72_inline(__this, (bool)1, NULL);
		NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* L_25 = __this->___m_Api;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = NativeApi_GetMaxCpuPerformanceLevel_m7106C512DEFDAD0EF76DF0F752E95B5C20ADFE92(L_25, NULL);
		SamsungGameSDKAdaptivePerformanceSubsystem_set_MaxCpuPerformanceLevel_m7040D551B96A10A49DB28DC1CB6FF6E55811BF9C_inline(__this, L_26, NULL);
		NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* L_27 = __this->___m_Api;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = NativeApi_GetMaxGpuPerformanceLevel_m287193E794C3784CDA030D5B37F3F4D8B34BEAB8(L_27, NULL);
		SamsungGameSDKAdaptivePerformanceSubsystem_set_MaxGpuPerformanceLevel_mDD72ADA0233E838AB2B08625407171D6FABC33BA_inline(__this, L_28, NULL);
		goto IL_0118;
	}

IL_0106:
	{
		NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* L_29 = __this->___m_Api;
		NullCheck(L_29);
		NativeApi_Terminate_m20E038F0579D7C9D58454AD72011ED757FA27C1F(L_29, NULL);
		AdaptivePerformanceSubsystemBase_set_initialized_m7B2B09A90BC940B4903FBF8FB7D4F87581CDFF72_inline(__this, (bool)0, NULL);
	}

IL_0118:
	{
		int32_t L_30;
		L_30 = SamsungGameSDKAdaptivePerformanceSubsystem_get_MaxCpuPerformanceLevel_m7558F2A23D816B4F3EB7B94934B9646038C4D6F0_inline(__this, NULL);
		if ((!(((uint32_t)L_30) == ((uint32_t)((int32_t)-999)))))
		{
			goto IL_0142;
		}
	}
	{
		SamsungGameSDKAdaptivePerformanceSubsystem_set_MaxCpuPerformanceLevel_m7040D551B96A10A49DB28DC1CB6FF6E55811BF9C_inline(__this, (-1), NULL);
		int32_t L_31;
		L_31 = AdaptivePerformanceSubsystem_get_Capabilities_m3B41A455C5EF85D90A6796AE764E6285E1AF21A1_inline(__this, NULL);
		AdaptivePerformanceSubsystem_set_Capabilities_m13719E1250D06D80D0889D1015C9F35078F7414F_inline(__this, ((int32_t)((int32_t)L_31&((int32_t)-9))), NULL);
		__this->___m_AllowPerformanceLevelControlChanges = (bool)0;
	}

IL_0142:
	{
		int32_t L_32;
		L_32 = SamsungGameSDKAdaptivePerformanceSubsystem_get_MaxGpuPerformanceLevel_m5268FD732220398272D98125ABD2A92C0DB76C28_inline(__this, NULL);
		if ((!(((uint32_t)L_32) == ((uint32_t)((int32_t)-999)))))
		{
			goto IL_016c;
		}
	}
	{
		SamsungGameSDKAdaptivePerformanceSubsystem_set_MaxGpuPerformanceLevel_mDD72ADA0233E838AB2B08625407171D6FABC33BA_inline(__this, (-1), NULL);
		int32_t L_33;
		L_33 = AdaptivePerformanceSubsystem_get_Capabilities_m3B41A455C5EF85D90A6796AE764E6285E1AF21A1_inline(__this, NULL);
		AdaptivePerformanceSubsystem_set_Capabilities_m13719E1250D06D80D0889D1015C9F35078F7414F_inline(__this, ((int32_t)((int32_t)L_33&((int32_t)-17))), NULL);
		__this->___m_AllowPerformanceLevelControlChanges = (bool)0;
	}

IL_016c:
	{
		PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_34 = (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83*)(&__this->___m_Data);
		bool L_35 = __this->___m_AllowPerformanceLevelControlChanges;
		PerformanceDataRecord_set_PerformanceLevelControlAvailable_m78A1EFC49C88D90E778F7C4C8605662E94B125FF_inline(L_34, L_35, NULL);
		bool L_36;
		L_36 = AdaptivePerformanceSubsystemBase_get_initialized_mD8CA1B7504E7C565ADE1B49E8DB08232A66FA631_inline(__this, NULL);
		return L_36;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystem_Start_m4F49E9201D743855075D2400D1D4E1B200E9147C (SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungGameSDKAdaptivePerformanceSubsystem_CheckInitialTemperatureAndSendWarnings_mA4425C0019E331BDF01B791DC3E71D1CAB7EEABE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = AdaptivePerformanceSubsystemBase_get_initialized_mD8CA1B7504E7C565ADE1B49E8DB08232A66FA631_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		SamsungGameSDKAdaptivePerformanceSubsystem_ImmediateUpdateTemperature_m35F36531EA566899C06B7B46F7EB4C089333C2FF(__this, NULL);
		ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2* L_1 = (ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2*)il2cpp_codegen_object_new(ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_il2cpp_TypeInfo_var);
		ThreadStart__ctor_m35CE51F76358F20E4A0C8F2963C3AE14E5FF7E71(L_1, __this, (intptr_t)((void*)SamsungGameSDKAdaptivePerformanceSubsystem_CheckInitialTemperatureAndSendWarnings_mA4425C0019E331BDF01B791DC3E71D1CAB7EEABE_RuntimeMethod_var), NULL);
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_2 = (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F*)il2cpp_codegen_object_new(Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var);
		Thread__ctor_m1FA23A179DF4F5B659689D6FA40DE903086212E2(L_2, L_1, NULL);
		NullCheck(L_2);
		Thread_Start_m2230799AA331CA9ACEF49D5500281D0C1A9F72FA(L_2, NULL);
		SamsungGameSDKAdaptivePerformanceSubsystem_CheckAndInitializeVRR_m5D3A1BB4096B76E85CFF99048F2464407BBE12BA(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystem_CheckAndInitializeVRR_m5D3A1BB4096B76E85CFF99048F2464407BBE12BA (SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoVariableRefreshRate_t90CC96BA9BE6AF1DC8343CDE46B0CC345FEBB63D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VRRManager_t72B06FC7051365C9A258D97C6E189C2A4D0CDEDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* L_0 = __this->___m_Api;
		NullCheck(L_0);
		bool L_1;
		L_1 = NativeApi_IsVariableRefreshRateSupported_mFF2652DEC0862E5EE5F6E7E74363B3AADF9A4128(L_0, NULL);
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		RuntimeObject* L_2;
		L_2 = VariableRefreshRate_get_Instance_m450C4BACDE831B071DDC9573BD1FE24D4FA4BEEA_inline(NULL);
		if (L_2)
		{
			goto IL_0042;
		}
	}
	{
		NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* L_3 = __this->___m_Api;
		VRRManager_t72B06FC7051365C9A258D97C6E189C2A4D0CDEDA* L_4 = (VRRManager_t72B06FC7051365C9A258D97C6E189C2A4D0CDEDA*)il2cpp_codegen_object_new(VRRManager_t72B06FC7051365C9A258D97C6E189C2A4D0CDEDA_il2cpp_TypeInfo_var);
		VRRManager__ctor_mD2277F2A0AC768DEEA16B64982A3741F9347EDBF(L_4, L_3, NULL);
		VariableRefreshRate_set_Instance_m5F8051BFDE6E14BAC0C837E841B48D67590AB992_inline(L_4, NULL);
		RuntimeObject* L_5;
		L_5 = VariableRefreshRate_get_Instance_m450C4BACDE831B071DDC9573BD1FE24D4FA4BEEA_inline(NULL);
		AutoVariableRefreshRate_t90CC96BA9BE6AF1DC8343CDE46B0CC345FEBB63D* L_6 = (AutoVariableRefreshRate_t90CC96BA9BE6AF1DC8343CDE46B0CC345FEBB63D*)il2cpp_codegen_object_new(AutoVariableRefreshRate_t90CC96BA9BE6AF1DC8343CDE46B0CC345FEBB63D_il2cpp_TypeInfo_var);
		AutoVariableRefreshRate__ctor_m325160788CB50F3FD45C4BDA6ADBF4EA40A398E2(L_6, L_5, NULL);
		__this->___m_AutoVariableRefreshRate = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AutoVariableRefreshRate), (void*)L_6);
		return;
	}

IL_0035:
	{
		VariableRefreshRate_set_Instance_m5F8051BFDE6E14BAC0C837E841B48D67590AB992_inline((RuntimeObject*)NULL, NULL);
		__this->___m_AutoVariableRefreshRate = (AutoVariableRefreshRate_t90CC96BA9BE6AF1DC8343CDE46B0CC345FEBB63D*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AutoVariableRefreshRate), (void*)(AutoVariableRefreshRate_t90CC96BA9BE6AF1DC8343CDE46B0CC345FEBB63D*)NULL);
	}

IL_0042:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystem_CheckInitialTemperatureAndSendWarnings_mA4425C0019E331BDF01B791DC3E71D1CAB7EEABE (SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	ClusterInfo_tE84F530B1972D0F8712CD136B14D4C4136B0BA15 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0;
		L_0 = TimeSpan_FromSeconds_m4401B50C0CA831134068595C6AF2F1CA92AAF80F((2.0), NULL);
		Thread_Sleep_m64ACA63DDE948BB823BD6A5871D9C0B29A77E55A(L_0, NULL);
		float L_1;
		L_1 = SamsungGameSDKAdaptivePerformanceSubsystem_GetHighPrecisionSkinTempLevel_mE797BBCCD724C732D8CC903F304B1E2E75D48F32(__this, NULL);
		V_0 = L_1;
		Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* L_2 = __this->___m_Version;
		Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* L_3 = (Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7*)il2cpp_codegen_object_new(Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7_il2cpp_TypeInfo_var);
		Version__ctor_m0871675040007535EA3D8083A4BEAE9DF8C92FF4(L_3, 3, 2, NULL);
		bool L_4;
		L_4 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_004e;
		}
	}
	{
		float L_5 = V_0;
		if ((!(((float)L_5) >= ((float)(7.0f)))))
		{
			goto IL_003f;
		}
	}
	{
		SamsungGameSDKAdaptivePerformanceSubsystem_OnPerformanceWarning_m4F10CCC53C50EB06584ECD641A77E64404010C76(__this, 2, NULL);
		goto IL_004e;
	}

IL_003f:
	{
		float L_6 = V_0;
		if ((!(((float)L_6) >= ((float)(5.0f)))))
		{
			goto IL_004e;
		}
	}
	{
		SamsungGameSDKAdaptivePerformanceSubsystem_OnPerformanceWarning_m4F10CCC53C50EB06584ECD641A77E64404010C76(__this, 1, NULL);
	}

IL_004e:
	{
		Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* L_7 = __this->___m_Version;
		Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* L_8 = (Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7*)il2cpp_codegen_object_new(Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7_il2cpp_TypeInfo_var);
		Version__ctor_m0871675040007535EA3D8083A4BEAE9DF8C92FF4(L_8, 3, 5, NULL);
		bool L_9;
		L_9 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_00ff;
		}
	}
	{
		NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* L_10 = __this->___m_Api;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = NativeApi_GetClusterInfo_m1B6635A235E064CCBACD2D3875A97816A3FCA920(L_10, NULL);
		V_1 = L_11;
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-999))))
		{
			goto IL_00ff;
		}
	}
	{
		il2cpp_codegen_initobj((&V_2), sizeof(ClusterInfo_tE84F530B1972D0F8712CD136B14D4C4136B0BA15));
		int32_t L_13 = V_1;
		ClusterInfo_set_BigCore_m6773CE3416C5DDE25B397D398D60253CA4A913A0_inline((&V_2), ((int32_t)(L_13/((int32_t)100))), NULL);
		int32_t L_14 = V_1;
		ClusterInfo_set_MediumCore_mC984A40803648B368E8E998F82E7C89D9E24E126_inline((&V_2), ((int32_t)(((int32_t)(L_14%((int32_t)100)))/((int32_t)10))), NULL);
		int32_t L_15 = V_1;
		ClusterInfo_set_LittleCore_m2B02B46BBEA719EFBDD955DF419EAAC81E69C7AB_inline((&V_2), ((int32_t)(((int32_t)(L_15%((int32_t)100)))%((int32_t)10))), NULL);
		RuntimeObject* L_16 = __this->___m_DataLock;
		V_3 = L_16;
		V_4 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00e2:
			{
				{
					bool L_17 = V_4;
					if (!L_17)
					{
						goto IL_00ec;
					}
				}
				{
					RuntimeObject* L_18 = V_3;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_18, NULL);
				}

IL_00ec:
				{
					return;
				}
			}
		});
		try
		{
			RuntimeObject* L_19 = V_3;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_19, (&V_4), NULL);
			PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_20 = (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83*)(&__this->___m_Data);
			ClusterInfo_tE84F530B1972D0F8712CD136B14D4C4136B0BA15 L_21 = V_2;
			PerformanceDataRecord_set_ClusterInfo_m70A3B30678BE28E09161ADF030CBAFE8D5BC9E3E_inline(L_20, L_21, NULL);
			PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_22 = (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83*)(&__this->___m_Data);
			PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_23 = L_22;
			int32_t L_24;
			L_24 = PerformanceDataRecord_get_ChangeFlags_m83DE31AF3877A2A1507A6703B190533FD166B9B7_inline(L_23, NULL);
			PerformanceDataRecord_set_ChangeFlags_mE99AA127E129C78872D68F5C650D55B8E5D33DC8_inline(L_23, ((int32_t)((int32_t)L_24|((int32_t)2048))), NULL);
			goto IL_00ed;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ed:
	{
		int32_t L_25;
		L_25 = AdaptivePerformanceSubsystem_get_Capabilities_m3B41A455C5EF85D90A6796AE764E6285E1AF21A1_inline(__this, NULL);
		AdaptivePerformanceSubsystem_set_Capabilities_m13719E1250D06D80D0889D1015C9F35078F7414F_inline(__this, ((int32_t)((int32_t)L_25|((int32_t)2048))), NULL);
	}

IL_00ff:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystem_Stop_mFCBC995D803C49AEF8336024FCC012D7F943F8E6 (SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystem_OnDestroy_m125EF89FBFE1759F19991BE72E50BCA6EAB3C31A (SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* __this, const RuntimeMethod* method) 
{
	{
		VariableRefreshRate_set_Instance_m5F8051BFDE6E14BAC0C837E841B48D67590AB992_inline((RuntimeObject*)NULL, NULL);
		__this->___m_AutoVariableRefreshRate = (AutoVariableRefreshRate_t90CC96BA9BE6AF1DC8343CDE46B0CC345FEBB63D*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AutoVariableRefreshRate), (void*)(AutoVariableRefreshRate_t90CC96BA9BE6AF1DC8343CDE46B0CC345FEBB63D*)NULL);
		bool L_0;
		L_0 = AdaptivePerformanceSubsystemBase_get_initialized_mD8CA1B7504E7C565ADE1B49E8DB08232A66FA631_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* L_1 = __this->___m_Api;
		NullCheck(L_1);
		NativeApi_Terminate_m20E038F0579D7C9D58454AD72011ED757FA27C1F(L_1, NULL);
		AdaptivePerformanceSubsystemBase_set_initialized_m7B2B09A90BC940B4903FBF8FB7D4F87581CDFF72_inline(__this, (bool)0, NULL);
	}

IL_0027:
	{
		AsyncUpdater_t723A6C592E8D827601A39F38D588CF80812FE976* L_2 = __this->___m_AsyncUpdater;
		NullCheck(L_2);
		AsyncUpdater_Dispose_mE3267C63AAF1B517C1AE45CC31A0FC5397E94E1F(L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SamsungGameSDKAdaptivePerformanceSubsystem_get_Stats_m19FBE176BD214D1102BDE6A44369396D2FC09D55 (SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncValue_1_get_value_m575C6560C02998BF7B68C755BDD5E515C34A9B43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDE80E2AD15AB61A85DBD7C97F022E1D102ABA5B);
		s_Il2CppMethodInitialized = true;
	}
	AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	double G_B3_0 = 0.0;
	String_t* G_B3_1 = NULL;
	AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A* G_B5_0 = NULL;
	RuntimeObject* G_B5_1 = NULL;
	String_t* G_B5_2 = NULL;
	AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	String_t* G_B4_2 = NULL;
	double G_B6_0 = 0.0;
	RuntimeObject* G_B6_1 = NULL;
	String_t* G_B6_2 = NULL;
	{
		AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A* L_0 = __this->___m_SkinTemp;
		AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = _stringLiteralBDE80E2AD15AB61A85DBD7C97F022E1D102ABA5B;
			goto IL_001a;
		}
		G_B1_0 = L_1;
		G_B1_1 = _stringLiteralBDE80E2AD15AB61A85DBD7C97F022E1D102ABA5B;
	}
	{
		G_B3_0 = (-1.0);
		G_B3_1 = G_B1_1;
		goto IL_001f;
	}

IL_001a:
	{
		NullCheck(G_B2_0);
		double L_2;
		L_2 = AsyncValue_1_get_value_m575C6560C02998BF7B68C755BDD5E515C34A9B43_inline(G_B2_0, AsyncValue_1_get_value_m575C6560C02998BF7B68C755BDD5E515C34A9B43_RuntimeMethod_var);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_1;
	}

IL_001f:
	{
		double L_3 = G_B3_0;
		RuntimeObject* L_4 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_3);
		AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A* L_5 = __this->___m_GPUTime;
		AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A* L_6 = L_5;
		if (L_6)
		{
			G_B5_0 = L_6;
			G_B5_1 = L_4;
			G_B5_2 = G_B3_1;
			goto IL_0039;
		}
		G_B4_0 = L_6;
		G_B4_1 = L_4;
		G_B4_2 = G_B3_1;
	}
	{
		G_B6_0 = (-1.0);
		G_B6_1 = G_B4_1;
		G_B6_2 = G_B4_2;
		goto IL_003e;
	}

IL_0039:
	{
		NullCheck(G_B5_0);
		double L_7;
		L_7 = AsyncValue_1_get_value_m575C6560C02998BF7B68C755BDD5E515C34A9B43_inline(G_B5_0, AsyncValue_1_get_value_m575C6560C02998BF7B68C755BDD5E515C34A9B43_RuntimeMethod_var);
		G_B6_0 = L_7;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
	}

IL_003e:
	{
		double L_8 = G_B6_0;
		RuntimeObject* L_9 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(G_B6_2, G_B6_1, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83 SamsungGameSDKAdaptivePerformanceSubsystem_Update_m5BFCB2FF33FE1365E42344C8ECBC2EE42EA2C29F (SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncValue_1_Update_m15F2BF5D1A6143887E28FE6EB0C7B112EF7F204C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncValue_1_get_value_m575C6560C02998BF7B68C755BDD5E515C34A9B43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VRRManager_t72B06FC7051365C9A258D97C6E189C2A4D0CDEDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83 V_4;
	memset((&V_4), 0, sizeof(V_4));
	VRRManager_t72B06FC7051365C9A258D97C6E189C2A4D0CDEDA* G_B2_0 = NULL;
	VRRManager_t72B06FC7051365C9A258D97C6E189C2A4D0CDEDA* G_B1_0 = NULL;
	{
		float L_0;
		L_0 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		V_0 = L_0;
		AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A* L_1 = __this->___m_GPUTime;
		float L_2 = V_0;
		NullCheck(L_1);
		bool L_3;
		L_3 = AsyncValue_1_Update_m15F2BF5D1A6143887E28FE6EB0C7B112EF7F204C(L_1, L_2, AsyncValue_1_Update_m15F2BF5D1A6143887E28FE6EB0C7B112EF7F204C_RuntimeMethod_var);
		AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A* L_4 = __this->___m_SkinTemp;
		float L_5 = V_0;
		NullCheck(L_4);
		bool L_6;
		L_6 = AsyncValue_1_Update_m15F2BF5D1A6143887E28FE6EB0C7B112EF7F204C(L_4, L_5, AsyncValue_1_Update_m15F2BF5D1A6143887E28FE6EB0C7B112EF7F204C_RuntimeMethod_var);
		V_1 = L_6;
		RuntimeObject* L_7;
		L_7 = VariableRefreshRate_get_Instance_m450C4BACDE831B071DDC9573BD1FE24D4FA4BEEA_inline(NULL);
		VRRManager_t72B06FC7051365C9A258D97C6E189C2A4D0CDEDA* L_8 = ((VRRManager_t72B06FC7051365C9A258D97C6E189C2A4D0CDEDA*)IsInstClass((RuntimeObject*)L_7, VRRManager_t72B06FC7051365C9A258D97C6E189C2A4D0CDEDA_il2cpp_TypeInfo_var));
		if (L_8)
		{
			G_B2_0 = L_8;
			goto IL_0030;
		}
		G_B1_0 = L_8;
	}
	{
		goto IL_0035;
	}

IL_0030:
	{
		NullCheck(G_B2_0);
		VRRManager_Update_mCFB9B5DDFAAE08091FCA2DB70DCBEACCE74B2C53(G_B2_0, NULL);
	}

IL_0035:
	{
		RuntimeObject* L_9;
		L_9 = VariableRefreshRate_get_Instance_m450C4BACDE831B071DDC9573BD1FE24D4FA4BEEA_inline(NULL);
		if (!((VRRManager_t72B06FC7051365C9A258D97C6E189C2A4D0CDEDA*)IsInstClass((RuntimeObject*)L_9, VRRManager_t72B06FC7051365C9A258D97C6E189C2A4D0CDEDA_il2cpp_TypeInfo_var)))
		{
			goto IL_005f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_il2cpp_TypeInfo_var);
		SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* L_10 = ((SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_StaticFields*)il2cpp_codegen_static_fields_for(SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_il2cpp_TypeInfo_var))->___settings;
		NullCheck(L_10);
		bool L_11;
		L_11 = SamsungAndroidProviderSettings_get_automaticVRR_mA4EC43A6755953623F7A5F1B3C365A3A9CE25C3B_inline(L_10, NULL);
		if (!L_11)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_12;
		L_12 = QualitySettings_get_vSyncCount_m0293E74C6CEF18FA03FB12C85802361FA83DC293(NULL);
		if (L_12)
		{
			goto IL_005f;
		}
	}
	{
		AutoVariableRefreshRate_t90CC96BA9BE6AF1DC8343CDE46B0CC345FEBB63D* L_13 = __this->___m_AutoVariableRefreshRate;
		NullCheck(L_13);
		AutoVariableRefreshRate_UpdateAutoVRR_m723236AA9993CBBF5B79B2A512AD7275D977990E(L_13, NULL);
	}

IL_005f:
	{
		bool L_14 = __this->___m_PerformanceLevelControlSystemChange;
		if (!L_14)
		{
			goto IL_009d;
		}
	}
	{
		AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A* L_15 = __this->___m_SkinTemp;
		NullCheck(L_15);
		double L_16;
		L_16 = AsyncValue_1_get_value_m575C6560C02998BF7B68C755BDD5E515C34A9B43_inline(L_15, AsyncValue_1_get_value_m575C6560C02998BF7B68C755BDD5E515C34A9B43_RuntimeMethod_var);
		if ((!(((float)((float)L_16)) < ((float)(5.0f)))))
		{
			goto IL_009d;
		}
	}
	{
		RuntimeObject* L_17 = __this->___m_DataLock;
		V_2 = L_17;
		V_3 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0093:
			{
				{
					bool L_18 = V_3;
					if (!L_18)
					{
						goto IL_009c;
					}
				}
				{
					RuntimeObject* L_19 = V_2;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_19, NULL);
				}

IL_009c:
				{
					return;
				}
			}
		});
		try
		{
			RuntimeObject* L_20 = V_2;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_20, (&V_3), NULL);
			SamsungGameSDKAdaptivePerformanceSubsystem_DisableSystemControl_m52ABFCD191A8A41C6C6D134C9B501F5F22499B57(__this, NULL);
			goto IL_009d;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_009d:
	{
		RuntimeObject* L_21 = __this->___m_DataLock;
		V_2 = L_21;
		V_3 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0110:
			{
				{
					bool L_22 = V_3;
					if (!L_22)
					{
						goto IL_0119;
					}
				}
				{
					RuntimeObject* L_23 = V_2;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_23, NULL);
				}

IL_0119:
				{
					return;
				}
			}
		});
		try
		{
			{
				RuntimeObject* L_24 = V_2;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_24, (&V_3), NULL);
				bool L_25 = V_1;
				if (!L_25)
				{
					goto IL_00d5_1;
				}
			}
			{
				PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_26 = (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83*)(&__this->___m_Data);
				PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_27 = L_26;
				int32_t L_28;
				L_28 = PerformanceDataRecord_get_ChangeFlags_m83DE31AF3877A2A1507A6703B190533FD166B9B7_inline(L_27, NULL);
				PerformanceDataRecord_set_ChangeFlags_mE99AA127E129C78872D68F5C650D55B8E5D33DC8_inline(L_27, ((int32_t)((int32_t)L_28|2)), NULL);
				PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_29 = (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83*)(&__this->___m_Data);
				float L_30;
				L_30 = SamsungGameSDKAdaptivePerformanceSubsystem_GetTemperatureLevel_mA400905D39A068B49434A3C39B2D7028F0760058(__this, NULL);
				PerformanceDataRecord_set_TemperatureLevel_mFC2BC8E019EFB0E7611C242D1F5D4EAB76570BB5_inline(L_29, L_30, NULL);
			}

IL_00d5_1:
			{
				PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_31 = (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83*)(&__this->___m_Data);
				float L_32;
				L_32 = SamsungGameSDKAdaptivePerformanceSubsystem_LatestGpuFrameTime_m89926139AD9A965DF8CDE618059668C4CF0FF098(__this, NULL);
				PerformanceDataRecord_set_GpuFrameTime_mB779C484C185DB05F985A295EA7242EB8DA37299_inline(L_31, L_32, NULL);
				PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_33 = (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83*)(&__this->___m_Data);
				PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_34 = L_33;
				int32_t L_35;
				L_35 = PerformanceDataRecord_get_ChangeFlags_m83DE31AF3877A2A1507A6703B190533FD166B9B7_inline(L_34, NULL);
				PerformanceDataRecord_set_ChangeFlags_mE99AA127E129C78872D68F5C650D55B8E5D33DC8_inline(L_34, ((int32_t)((int32_t)L_35|((int32_t)64))), NULL);
				PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83 L_36 = __this->___m_Data;
				PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_37 = (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83*)(&__this->___m_Data);
				PerformanceDataRecord_set_ChangeFlags_mE99AA127E129C78872D68F5C650D55B8E5D33DC8_inline(L_37, 0, NULL);
				V_4 = L_36;
				goto IL_011a;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_011a:
	{
		PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83 L_38 = V_4;
		return L_38;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* SamsungGameSDKAdaptivePerformanceSubsystem_get_Version_m91F0F6F31D1C556FE7276C52CC3F49657AA8C3C5 (SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* __this, const RuntimeMethod* method) 
{
	{
		Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* L_0 = __this->___m_Version;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SamsungGameSDKAdaptivePerformanceSubsystem_NormalizeTemperatureLevel_m9C0BB9B7FAE193661793BD231588CC973F360475 (float ___0_currentTempLevel, float ___1_minValue, float ___2_maxValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		V_0 = (-1.0f);
		float L_0 = ___0_currentTempLevel;
		float L_1 = ___1_minValue;
		if ((!(((float)L_0) >= ((float)L_1))))
		{
			goto IL_0024;
		}
	}
	{
		float L_2 = ___0_currentTempLevel;
		float L_3 = ___2_maxValue;
		if ((!(((float)L_2) <= ((float)L_3))))
		{
			goto IL_0024;
		}
	}
	{
		float L_4 = ___0_currentTempLevel;
		float L_5 = ___2_maxValue;
		V_0 = ((float)(L_4/L_5));
		float L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_7;
		L_7 = Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA(L_6, (0.0f), NULL);
		float L_8 = ___2_maxValue;
		float L_9;
		L_9 = Math_Min_mE913811A2F7566294BF4649A434282634E7254B3(L_7, L_8, NULL);
		V_0 = L_9;
	}

IL_0024:
	{
		float L_10 = V_0;
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SamsungGameSDKAdaptivePerformanceSubsystem_NormalizeTemperatureLevel_m3F1FA12928FDB3257CB4DCB6703760C849E129D4 (SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* __this, float ___0_currentTempLevel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___0_currentTempLevel;
		float L_1 = __this->___m_MinTempLevel;
		float L_2 = __this->___m_MaxTempLevel;
		il2cpp_codegen_runtime_class_init_inline(SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_il2cpp_TypeInfo_var);
		float L_3;
		L_3 = SamsungGameSDKAdaptivePerformanceSubsystem_NormalizeTemperatureLevel_m9C0BB9B7FAE193661793BD231588CC973F360475(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SamsungGameSDKAdaptivePerformanceSubsystem_GetTemperatureLevel_mA400905D39A068B49434A3C39B2D7028F0760058 (SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncValue_1_get_value_m575C6560C02998BF7B68C755BDD5E515C34A9B43_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A* L_0 = __this->___m_SkinTemp;
		NullCheck(L_0);
		double L_1;
		L_1 = AsyncValue_1_get_value_m575C6560C02998BF7B68C755BDD5E515C34A9B43_inline(L_0, AsyncValue_1_get_value_m575C6560C02998BF7B68C755BDD5E515C34A9B43_RuntimeMethod_var);
		float L_2;
		L_2 = SamsungGameSDKAdaptivePerformanceSubsystem_NormalizeTemperatureLevel_m3F1FA12928FDB3257CB4DCB6703760C849E129D4(__this, ((float)L_1), NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SamsungGameSDKAdaptivePerformanceSubsystem_LatestGpuFrameTime_m89926139AD9A965DF8CDE618059668C4CF0FF098 (SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncValue_1_get_value_m575C6560C02998BF7B68C755BDD5E515C34A9B43_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A* L_0 = __this->___m_GPUTime;
		NullCheck(L_0);
		double L_1;
		L_1 = AsyncValue_1_get_value_m575C6560C02998BF7B68C755BDD5E515C34A9B43_inline(L_0, AsyncValue_1_get_value_m575C6560C02998BF7B68C755BDD5E515C34A9B43_RuntimeMethod_var);
		return ((float)((double)(L_1/(1000.0))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SamsungGameSDKAdaptivePerformanceSubsystem_SetPerformanceLevel_mF7A7EB7881A44422169813981D9FA03EC16084B4 (SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* __this, int32_t* ___0_cpuLevel, int32_t* ___1_gpuLevel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* G_B17_0 = NULL;
	PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* G_B18_1 = NULL;
	PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* G_B20_0 = NULL;
	PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* G_B19_0 = NULL;
	int32_t G_B21_0 = 0;
	PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* G_B21_1 = NULL;
	{
		int32_t L_0;
		L_0 = AdaptivePerformanceSubsystem_get_Capabilities_m3B41A455C5EF85D90A6796AE764E6285E1AF21A1_inline(__this, NULL);
		if ((!(((uint32_t)((int32_t)((int32_t)L_0&8))) == ((uint32_t)8))))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1;
		L_1 = AdaptivePerformanceSubsystem_get_Capabilities_m3B41A455C5EF85D90A6796AE764E6285E1AF21A1_inline(__this, NULL);
		if ((((int32_t)((int32_t)((int32_t)L_1&((int32_t)16)))) == ((int32_t)((int32_t)16))))
		{
			goto IL_001a;
		}
	}

IL_0018:
	{
		return (bool)0;
	}

IL_001a:
	{
		int32_t* L_2 = ___0_cpuLevel;
		int32_t L_3 = *((int32_t*)L_2);
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t* L_4 = ___0_cpuLevel;
		*((int32_t*)L_4) = (int32_t)0;
		goto IL_0036;
	}

IL_0024:
	{
		int32_t* L_5 = ___0_cpuLevel;
		int32_t L_6 = *((int32_t*)L_5);
		int32_t L_7;
		L_7 = SamsungGameSDKAdaptivePerformanceSubsystem_get_MaxCpuPerformanceLevel_m7558F2A23D816B4F3EB7B94934B9646038C4D6F0_inline(__this, NULL);
		if ((((int32_t)L_6) <= ((int32_t)L_7)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t* L_8 = ___0_cpuLevel;
		int32_t L_9;
		L_9 = SamsungGameSDKAdaptivePerformanceSubsystem_get_MaxCpuPerformanceLevel_m7558F2A23D816B4F3EB7B94934B9646038C4D6F0_inline(__this, NULL);
		*((int32_t*)L_8) = (int32_t)L_9;
	}

IL_0036:
	{
		int32_t* L_10 = ___1_gpuLevel;
		int32_t L_11 = *((int32_t*)L_10);
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		int32_t* L_12 = ___1_gpuLevel;
		*((int32_t*)L_12) = (int32_t)0;
		goto IL_0052;
	}

IL_0040:
	{
		int32_t* L_13 = ___1_gpuLevel;
		int32_t L_14 = *((int32_t*)L_13);
		int32_t L_15;
		L_15 = SamsungGameSDKAdaptivePerformanceSubsystem_get_MaxGpuPerformanceLevel_m5268FD732220398272D98125ABD2A92C0DB76C28_inline(__this, NULL);
		if ((((int32_t)L_14) <= ((int32_t)L_15)))
		{
			goto IL_0052;
		}
	}
	{
		int32_t* L_16 = ___1_gpuLevel;
		int32_t L_17;
		L_17 = SamsungGameSDKAdaptivePerformanceSubsystem_get_MaxGpuPerformanceLevel_m5268FD732220398272D98125ABD2A92C0DB76C28_inline(__this, NULL);
		*((int32_t*)L_16) = (int32_t)L_17;
	}

IL_0052:
	{
		Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* L_18 = __this->___m_Version;
		Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* L_19 = (Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7*)il2cpp_codegen_object_new(Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7_il2cpp_TypeInfo_var);
		Version__ctor_m0871675040007535EA3D8083A4BEAE9DF8C92FF4(L_19, 3, 2, NULL);
		bool L_20;
		L_20 = Version_op_Equality_mED378603AE784D5ACEDB8F4B250F50773B331D4B(L_18, L_19, NULL);
		if (!L_20)
		{
			goto IL_006d;
		}
	}
	{
		int32_t* L_21 = ___0_cpuLevel;
		int32_t L_22 = *((int32_t*)L_21);
		if (L_22)
		{
			goto IL_006d;
		}
	}
	{
		int32_t* L_23 = ___0_cpuLevel;
		*((int32_t*)L_23) = (int32_t)1;
	}

IL_006d:
	{
		V_0 = (bool)0;
		NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* L_24 = __this->___m_Api;
		int32_t* L_25 = ___0_cpuLevel;
		int32_t L_26 = *((int32_t*)L_25);
		int32_t* L_27 = ___1_gpuLevel;
		int32_t L_28 = *((int32_t*)L_27);
		NullCheck(L_24);
		int32_t L_29;
		L_29 = NativeApi_SetFreqLevels_mC568D9356108AC7A1AAE662C3FD108A565181E09(L_24, L_26, L_28, NULL);
		V_1 = L_29;
		int32_t L_30 = V_1;
		V_0 = (bool)((((int32_t)L_30) == ((int32_t)1))? 1 : 0);
		RuntimeObject* L_31 = __this->___m_DataLock;
		V_2 = L_31;
		V_3 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0131:
			{
				{
					bool L_32 = V_3;
					if (!L_32)
					{
						goto IL_013a;
					}
				}
				{
					RuntimeObject* L_33 = V_2;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_33, NULL);
				}

IL_013a:
				{
					return;
				}
			}
		});
		try
		{
			{
				RuntimeObject* L_34 = V_2;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_34, (&V_3), NULL);
				PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_35 = (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83*)(&__this->___m_Data);
				int32_t L_36;
				L_36 = PerformanceDataRecord_get_CpuPerformanceLevel_mF688EC621C77916A86F96CF7D0DAFD520B6D68E8_inline(L_35, NULL);
				V_4 = L_36;
				PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_37 = (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83*)(&__this->___m_Data);
				int32_t L_38;
				L_38 = PerformanceDataRecord_get_GpuPerformanceLevel_mA928B60EF914AB4E7D95291E1357A3FE795DBE23_inline(L_37, NULL);
				V_5 = L_38;
				PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_39 = (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83*)(&__this->___m_Data);
				bool L_40 = V_0;
				if (L_40)
				{
					G_B17_0 = L_39;
					goto IL_00bb_1;
				}
				G_B16_0 = L_39;
			}
			{
				G_B18_0 = (-1);
				G_B18_1 = G_B16_0;
				goto IL_00bd_1;
			}

IL_00bb_1:
			{
				int32_t* L_41 = ___0_cpuLevel;
				int32_t L_42 = *((int32_t*)L_41);
				G_B18_0 = L_42;
				G_B18_1 = G_B17_0;
			}

IL_00bd_1:
			{
				PerformanceDataRecord_set_CpuPerformanceLevel_m8BBB7FA33AF2644ED0DE81CD58CCB07C5F71ED03_inline(G_B18_1, G_B18_0, NULL);
				PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_43 = (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83*)(&__this->___m_Data);
				bool L_44 = V_0;
				if (L_44)
				{
					G_B20_0 = L_43;
					goto IL_00ce_1;
				}
				G_B19_0 = L_43;
			}
			{
				G_B21_0 = (-1);
				G_B21_1 = G_B19_0;
				goto IL_00d0_1;
			}

IL_00ce_1:
			{
				int32_t* L_45 = ___1_gpuLevel;
				int32_t L_46 = *((int32_t*)L_45);
				G_B21_0 = L_46;
				G_B21_1 = G_B20_0;
			}

IL_00d0_1:
			{
				PerformanceDataRecord_set_GpuPerformanceLevel_mBA26ABE3F6089BA232022D7F0F38B55B8FA9481A_inline(G_B21_1, G_B21_0, NULL);
				bool L_47 = V_0;
				if (!L_47)
				{
					goto IL_011d_1;
				}
			}
			{
				PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_48 = (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83*)(&__this->___m_Data);
				int32_t L_49;
				L_49 = PerformanceDataRecord_get_CpuPerformanceLevel_mF688EC621C77916A86F96CF7D0DAFD520B6D68E8_inline(L_48, NULL);
				int32_t L_50 = V_4;
				if ((((int32_t)L_49) == ((int32_t)L_50)))
				{
					goto IL_00fa_1;
				}
			}
			{
				PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_51 = (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83*)(&__this->___m_Data);
				PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_52 = L_51;
				int32_t L_53;
				L_53 = PerformanceDataRecord_get_ChangeFlags_m83DE31AF3877A2A1507A6703B190533FD166B9B7_inline(L_52, NULL);
				PerformanceDataRecord_set_ChangeFlags_mE99AA127E129C78872D68F5C650D55B8E5D33DC8_inline(L_52, ((int32_t)((int32_t)L_53|8)), NULL);
			}

IL_00fa_1:
			{
				PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_54 = (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83*)(&__this->___m_Data);
				int32_t L_55;
				L_55 = PerformanceDataRecord_get_GpuPerformanceLevel_mA928B60EF914AB4E7D95291E1357A3FE795DBE23_inline(L_54, NULL);
				int32_t L_56 = V_5;
				if ((((int32_t)L_55) == ((int32_t)L_56)))
				{
					goto IL_011d_1;
				}
			}
			{
				PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_57 = (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83*)(&__this->___m_Data);
				PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_58 = L_57;
				int32_t L_59;
				L_59 = PerformanceDataRecord_get_ChangeFlags_m83DE31AF3877A2A1507A6703B190533FD166B9B7_inline(L_58, NULL);
				PerformanceDataRecord_set_ChangeFlags_mE99AA127E129C78872D68F5C650D55B8E5D33DC8_inline(L_58, ((int32_t)((int32_t)L_59|((int32_t)16))), NULL);
			}

IL_011d_1:
			{
				int32_t L_60 = V_1;
				if ((((int32_t)L_60) <= ((int32_t)1)))
				{
					goto IL_012f_1;
				}
			}
			{
				int32_t L_61 = V_1;
				if ((((int32_t)L_61) == ((int32_t)2)))
				{
					goto IL_0129_1;
				}
			}
			{
				int32_t L_62 = V_1;
			}

IL_0129_1:
			{
				SamsungGameSDKAdaptivePerformanceSubsystem_EnableSystemControl_mB94BB9BBD5D600060144AB841617FEAD284CB717(__this, NULL);
			}

IL_012f_1:
			{
				goto IL_013b;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_013b:
	{
		bool L_63 = V_0;
		return L_63;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SamsungGameSDKAdaptivePerformanceSubsystem_EnableCpuBoost_mC7D5D179C6EEAA8A6F95C705B7975034574515B1 (SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* L_0 = __this->___m_Api;
		NullCheck(L_0);
		bool L_1;
		L_1 = NativeApi_EnableCpuBoost_m142D18B1745C6F3ADE07F313B92A27432B076B8E(L_0, NULL);
		V_0 = L_1;
		RuntimeObject* L_2 = __this->___m_DataLock;
		V_1 = L_2;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0065:
			{
				{
					bool L_3 = V_2;
					if (!L_3)
					{
						goto IL_006e;
					}
				}
				{
					RuntimeObject* L_4 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_4, NULL);
				}

IL_006e:
				{
					return;
				}
			}
		});
		try
		{
			{
				RuntimeObject* L_5 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_5, (&V_2), NULL);
				PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_6 = (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83*)(&__this->___m_Data);
				bool L_7;
				L_7 = PerformanceDataRecord_get_CpuPerformanceBoost_m55A78568F8E19144717C3CEC17CE90FA766591D2_inline(L_6, NULL);
				V_3 = L_7;
				PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_8 = (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83*)(&__this->___m_Data);
				bool L_9 = V_0;
				PerformanceDataRecord_set_CpuPerformanceBoost_mD8BF1CE74A03B57E81DBCD9A3DDE8DAA27968FF5_inline(L_8, L_9, NULL);
				PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_10 = (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83*)(&__this->___m_Data);
				bool L_11;
				L_11 = PerformanceDataRecord_get_CpuPerformanceBoost_m55A78568F8E19144717C3CEC17CE90FA766591D2_inline(L_10, NULL);
				bool L_12 = V_3;
				if ((((int32_t)L_11) == ((int32_t)L_12)))
				{
					goto IL_005a_1;
				}
			}
			{
				PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_13 = (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83*)(&__this->___m_Data);
				PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_14 = L_13;
				int32_t L_15;
				L_15 = PerformanceDataRecord_get_ChangeFlags_m83DE31AF3877A2A1507A6703B190533FD166B9B7_inline(L_14, NULL);
				PerformanceDataRecord_set_ChangeFlags_mE99AA127E129C78872D68F5C650D55B8E5D33DC8_inline(L_14, ((int32_t)((int32_t)L_15|((int32_t)512))), NULL);
			}

IL_005a_1:
			{
				bool L_16 = V_0;
				if (!L_16)
				{
					goto IL_0063_1;
				}
			}
			{
				SamsungGameSDKAdaptivePerformanceSubsystem_EnableSystemControl_mB94BB9BBD5D600060144AB841617FEAD284CB717(__this, NULL);
			}

IL_0063_1:
			{
				goto IL_006f;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006f:
	{
		bool L_17 = V_0;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SamsungGameSDKAdaptivePerformanceSubsystem_EnableGpuBoost_m157A466FC62D0953B2DC71528A1590108A51C6DC (SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* L_0 = __this->___m_Api;
		NullCheck(L_0);
		bool L_1;
		L_1 = NativeApi_EnableGpuBoost_mDABE6D115C876233BF7EBD13DDFF7F7A12DBB0C9(L_0, NULL);
		V_0 = L_1;
		RuntimeObject* L_2 = __this->___m_DataLock;
		V_1 = L_2;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0065:
			{
				{
					bool L_3 = V_2;
					if (!L_3)
					{
						goto IL_006e;
					}
				}
				{
					RuntimeObject* L_4 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_4, NULL);
				}

IL_006e:
				{
					return;
				}
			}
		});
		try
		{
			{
				RuntimeObject* L_5 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_5, (&V_2), NULL);
				PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_6 = (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83*)(&__this->___m_Data);
				bool L_7;
				L_7 = PerformanceDataRecord_get_GpuPerformanceBoost_mFD01BBFC9A9BE53ED81947089A02691635789B7E_inline(L_6, NULL);
				V_3 = L_7;
				PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_8 = (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83*)(&__this->___m_Data);
				bool L_9 = V_0;
				PerformanceDataRecord_set_GpuPerformanceBoost_m0A5764E94B8EC621A0AA51B2F7C24BA1EAF844B9_inline(L_8, L_9, NULL);
				PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_10 = (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83*)(&__this->___m_Data);
				bool L_11;
				L_11 = PerformanceDataRecord_get_GpuPerformanceBoost_mFD01BBFC9A9BE53ED81947089A02691635789B7E_inline(L_10, NULL);
				bool L_12 = V_3;
				if ((((int32_t)L_11) == ((int32_t)L_12)))
				{
					goto IL_005a_1;
				}
			}
			{
				PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_13 = (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83*)(&__this->___m_Data);
				PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_14 = L_13;
				int32_t L_15;
				L_15 = PerformanceDataRecord_get_ChangeFlags_m83DE31AF3877A2A1507A6703B190533FD166B9B7_inline(L_14, NULL);
				PerformanceDataRecord_set_ChangeFlags_mE99AA127E129C78872D68F5C650D55B8E5D33DC8_inline(L_14, ((int32_t)((int32_t)L_15|((int32_t)1024))), NULL);
			}

IL_005a_1:
			{
				bool L_16 = V_0;
				if (!L_16)
				{
					goto IL_0063_1;
				}
			}
			{
				SamsungGameSDKAdaptivePerformanceSubsystem_EnableSystemControl_mB94BB9BBD5D600060144AB841617FEAD284CB717(__this, NULL);
			}

IL_0063_1:
			{
				goto IL_006f;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006f:
	{
		bool L_17 = V_0;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystem_ApplicationPause_m37FF4DB9F309D1BAD03CE9B885B241A314C6AAB8 (SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystem_ApplicationResume_mACA1836F742AC36FAF1EFD803FA796DF19B96549 (SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VRRManager_t72B06FC7051365C9A258D97C6E189C2A4D0CDEDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	VRRManager_t72B06FC7051365C9A258D97C6E189C2A4D0CDEDA* G_B14_0 = NULL;
	VRRManager_t72B06FC7051365C9A258D97C6E189C2A4D0CDEDA* G_B13_0 = NULL;
	{
		NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* L_0 = __this->___m_Api;
		NullCheck(L_0);
		bool L_1;
		L_1 = NativeApi_Initialize_mD5CCC8D65B6D995B365BE4602144DEBA9BDD55CD(L_0, NULL);
		int32_t L_2;
		L_2 = AdaptivePerformanceSubsystem_get_Capabilities_m3B41A455C5EF85D90A6796AE764E6285E1AF21A1_inline(__this, NULL);
		if ((!(((uint32_t)((int32_t)((int32_t)L_2&8))) == ((uint32_t)8))))
		{
			goto IL_0053;
		}
	}
	{
		RuntimeObject* L_3 = __this->___m_DataLock;
		V_0 = L_3;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0049:
			{
				{
					bool L_4 = V_1;
					if (!L_4)
					{
						goto IL_0052;
					}
				}
				{
					RuntimeObject* L_5 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_5, NULL);
				}

IL_0052:
				{
					return;
				}
			}
		});
		try
		{
			RuntimeObject* L_6 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_6, (&V_1), NULL);
			PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_7 = (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83*)(&__this->___m_Data);
			PerformanceDataRecord_set_CpuPerformanceLevel_m8BBB7FA33AF2644ED0DE81CD58CCB07C5F71ED03_inline(L_7, (-1), NULL);
			PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_8 = (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83*)(&__this->___m_Data);
			PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_9 = L_8;
			int32_t L_10;
			L_10 = PerformanceDataRecord_get_ChangeFlags_m83DE31AF3877A2A1507A6703B190533FD166B9B7_inline(L_9, NULL);
			PerformanceDataRecord_set_ChangeFlags_mE99AA127E129C78872D68F5C650D55B8E5D33DC8_inline(L_9, ((int32_t)((int32_t)L_10|8)), NULL);
			goto IL_0053;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0053:
	{
		int32_t L_11;
		L_11 = AdaptivePerformanceSubsystem_get_Capabilities_m3B41A455C5EF85D90A6796AE764E6285E1AF21A1_inline(__this, NULL);
		if ((!(((uint32_t)((int32_t)((int32_t)L_11&((int32_t)16)))) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_009d;
		}
	}
	{
		RuntimeObject* L_12 = __this->___m_DataLock;
		V_0 = L_12;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0093:
			{
				{
					bool L_13 = V_1;
					if (!L_13)
					{
						goto IL_009c;
					}
				}
				{
					RuntimeObject* L_14 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_14, NULL);
				}

IL_009c:
				{
					return;
				}
			}
		});
		try
		{
			RuntimeObject* L_15 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_15, (&V_1), NULL);
			PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_16 = (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83*)(&__this->___m_Data);
			PerformanceDataRecord_set_GpuPerformanceLevel_mBA26ABE3F6089BA232022D7F0F38B55B8FA9481A_inline(L_16, (-1), NULL);
			PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_17 = (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83*)(&__this->___m_Data);
			PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_18 = L_17;
			int32_t L_19;
			L_19 = PerformanceDataRecord_get_ChangeFlags_m83DE31AF3877A2A1507A6703B190533FD166B9B7_inline(L_18, NULL);
			PerformanceDataRecord_set_ChangeFlags_mE99AA127E129C78872D68F5C650D55B8E5D33DC8_inline(L_18, ((int32_t)((int32_t)L_19|((int32_t)16))), NULL);
			goto IL_009d;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_009d:
	{
		SamsungGameSDKAdaptivePerformanceSubsystem_ImmediateUpdateTemperature_m35F36531EA566899C06B7B46F7EB4C089333C2FF(__this, NULL);
		SamsungGameSDKAdaptivePerformanceSubsystem_CheckAndInitializeVRR_m5D3A1BB4096B76E85CFF99048F2464407BBE12BA(__this, NULL);
		RuntimeObject* L_20;
		L_20 = VariableRefreshRate_get_Instance_m450C4BACDE831B071DDC9573BD1FE24D4FA4BEEA_inline(NULL);
		VRRManager_t72B06FC7051365C9A258D97C6E189C2A4D0CDEDA* L_21 = ((VRRManager_t72B06FC7051365C9A258D97C6E189C2A4D0CDEDA*)IsInstClass((RuntimeObject*)L_20, VRRManager_t72B06FC7051365C9A258D97C6E189C2A4D0CDEDA_il2cpp_TypeInfo_var));
		if (L_21)
		{
			G_B14_0 = L_21;
			goto IL_00b8;
		}
		G_B13_0 = L_21;
	}
	{
		return;
	}

IL_00b8:
	{
		NullCheck(G_B14_0);
		VRRManager_Resume_mF04994891A6B381E8DF8A8078E9A0928F2D04AFE(G_B14_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystem_EnableSystemControl_mB94BB9BBD5D600060144AB841617FEAD284CB717 (SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___m_AllowPerformanceLevelControlChanges;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_1 = (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83*)(&__this->___m_Data);
		PerformanceDataRecord_set_PerformanceLevelControlAvailable_m78A1EFC49C88D90E778F7C4C8605662E94B125FF_inline(L_1, (bool)0, NULL);
		PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_2 = (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83*)(&__this->___m_Data);
		PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_3 = L_2;
		int32_t L_4;
		L_4 = PerformanceDataRecord_get_ChangeFlags_m83DE31AF3877A2A1507A6703B190533FD166B9B7_inline(L_3, NULL);
		PerformanceDataRecord_set_ChangeFlags_mE99AA127E129C78872D68F5C650D55B8E5D33DC8_inline(L_3, ((int32_t)((int32_t)L_4|((int32_t)32))), NULL);
		__this->___m_PerformanceLevelControlSystemChange = (bool)1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystem_DisableSystemControl_m52ABFCD191A8A41C6C6D134C9B501F5F22499B57 (SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___m_AllowPerformanceLevelControlChanges;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_1 = (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83*)(&__this->___m_Data);
		PerformanceDataRecord_set_PerformanceLevelControlAvailable_m78A1EFC49C88D90E778F7C4C8605662E94B125FF_inline(L_1, (bool)1, NULL);
		PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_2 = (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83*)(&__this->___m_Data);
		PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* L_3 = L_2;
		int32_t L_4;
		L_4 = PerformanceDataRecord_get_ChangeFlags_m83DE31AF3877A2A1507A6703B190533FD166B9B7_inline(L_3, NULL);
		PerformanceDataRecord_set_ChangeFlags_mE99AA127E129C78872D68F5C650D55B8E5D33DC8_inline(L_3, ((int32_t)((int32_t)L_4|((int32_t)32))), NULL);
		__this->___m_PerformanceLevelControlSystemChange = (bool)0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystem_RegisterDescriptor_m3D03A2248E3E9C6C4DE63379BD3D4CA7B47070EC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA789C1A58CA8F1B51679B983874466E76B48EFB3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE02D43BFB3611F4411DD21848B293789A2B1B8D6);
		s_Il2CppMethodInitialized = true;
	}
	Cinfo_t016018D78B642CAAA7B595015B8AF98E5F1008DB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0;
		L_0 = SystemInfo_get_deviceModel_m308FFBADED4BF6CB34C318A0BBDA762D09A7F185(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = String_StartsWith_mA2A4405B1B9F3653A6A9AA7F223F68D86A0C6264(L_0, _stringLiteralA789C1A58CA8F1B51679B983874466E76B48EFB3, 5, NULL);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		il2cpp_codegen_runtime_class_init_inline(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = NativeApi_IsAvailable_mB9AB23571615F83CFC23833580CAA31CF801CFD2(NULL);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		return;
	}

IL_001b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Cinfo_t016018D78B642CAAA7B595015B8AF98E5F1008DB));
		Cinfo_set_id_m77027979E9BA297A2803C6EA7691881619C35F91_inline((&V_0), _stringLiteralE02D43BFB3611F4411DD21848B293789A2B1B8D6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		Cinfo_set_subsystemImplementationType_mE5398A3C07C0B759B72027FE49DDBC1FCB50A5B9_inline((&V_0), L_4, NULL);
		Cinfo_t016018D78B642CAAA7B595015B8AF98E5F1008DB L_5 = V_0;
		AdaptivePerformanceSubsystemDescriptor_t5D0468D8D509E8995FBDCD5DE6EF6F293B16DC82* L_6;
		L_6 = AdaptivePerformanceSubsystemDescriptor_RegisterDescriptor_m800920584650488044B385B98D26FF6E50CAC0E2(L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystem__cctor_mE82D17AF6F7F529AD0D66D0111656024B8AFCEBA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* L_0;
		L_0 = SamsungAndroidProviderSettings_GetSettings_m1049E50BEC709D010C89CB78635F11BAF183A4CB_inline(NULL);
		((SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_StaticFields*)il2cpp_codegen_static_fields_for(SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_il2cpp_TypeInfo_var))->___settings = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_StaticFields*)il2cpp_codegen_static_fields_for(SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_il2cpp_TypeInfo_var))->___settings), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SamsungGameSDKAdaptivePerformanceSubsystem_U3C_ctorU3Eb__26_1_mCE696AB1F6975769FC2500AECB6FE848409B3B4F (SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* __this, const RuntimeMethod* method) 
{
	{
		float L_0;
		L_0 = SamsungGameSDKAdaptivePerformanceSubsystem_GetHighPrecisionSkinTempLevel_mE797BBCCD724C732D8CC903F304B1E2E75D48F32(__this, NULL);
		return ((double)L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SamsungGameSDKAdaptivePerformanceSubsystem_U3C_ctorU3Eb__26_2_m4FE8C54EE4AA931A4C2D2C73BD6DE66E478FE7E0 (SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* __this, const RuntimeMethod* method) 
{
	{
		NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* L_0 = __this->___m_Api;
		NullCheck(L_0);
		double L_1;
		L_1 = NativeApi_GetGpuFrameTime_m849D6C1752EF1034093E711C7D3B2A28ADFAFAD7(L_0, NULL);
		return L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi__ctor_m62E976B074521326BD1F50D144286A876C851B1E (NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* __this, Action_1_t87D266BDCAC7E2FA2FA9733C3E286D256FCFFFFA* ___0_sustainedPerformanceWarning, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___1_sustainedPerformanceTimeout, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___2_refreshRateChanged, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___3_cpuPerformanceBoostReleasedByTimeout, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___4_gpuPerformanceBoostReleasedByTimeout, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B5485AAFD0F88488213FA21BAC0D600944F8265);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, _stringLiteral5B5485AAFD0F88488213FA21BAC0D600944F8265, NULL);
		Action_1_t87D266BDCAC7E2FA2FA9733C3E286D256FCFFFFA* L_0 = ___0_sustainedPerformanceWarning;
		__this->___PerformanceWarningEvent = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PerformanceWarningEvent), (void*)L_0);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = ___1_sustainedPerformanceTimeout;
		__this->___PerformanceLevelTimeoutEvent = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PerformanceLevelTimeoutEvent), (void*)L_1);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ___2_refreshRateChanged;
		__this->___RefreshRateChangedEvent = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RefreshRateChangedEvent), (void*)L_2);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___3_cpuPerformanceBoostReleasedByTimeout;
		__this->___CpuPerformanceBoostReleasedByTimeoutEvent = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CpuPerformanceBoostReleasedByTimeoutEvent), (void*)L_3);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___4_gpuPerformanceBoostReleasedByTimeout;
		__this->___GpuPerformanceBoostReleasedByTimeoutEvent = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GpuPerformanceBoostReleasedByTimeoutEvent), (void*)L_4);
		il2cpp_codegen_runtime_class_init_inline(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var);
		NativeApi_StaticInit_mEF71D12CE69859AEEC61AB5672227101BE13B9F5(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_onHighTempWarning_m45F34E7ACDF15877EC50E84BB0A0EA50A6CF2DEA (NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* __this, int32_t ___0_warningLevel, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_warningLevel;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Action_1_t87D266BDCAC7E2FA2FA9733C3E286D256FCFFFFA* L_1 = __this->___PerformanceWarningEvent;
		NullCheck(L_1);
		Action_1_Invoke_m772CF576DB7B297059C25510D48E3CD587FB66DF_inline(L_1, 0, NULL);
		return;
	}

IL_0010:
	{
		int32_t L_2 = ___0_warningLevel;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0021;
		}
	}
	{
		Action_1_t87D266BDCAC7E2FA2FA9733C3E286D256FCFFFFA* L_3 = __this->___PerformanceWarningEvent;
		NullCheck(L_3);
		Action_1_Invoke_m772CF576DB7B297059C25510D48E3CD587FB66DF_inline(L_3, 1, NULL);
		return;
	}

IL_0021:
	{
		int32_t L_4 = ___0_warningLevel;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0031;
		}
	}
	{
		Action_1_t87D266BDCAC7E2FA2FA9733C3E286D256FCFFFFA* L_5 = __this->___PerformanceWarningEvent;
		NullCheck(L_5);
		Action_1_Invoke_m772CF576DB7B297059C25510D48E3CD587FB66DF_inline(L_5, 2, NULL);
	}

IL_0031:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_onReleasedByTimeout_m1A8865E591932D04A8762F459FABA949EFB6EFE1 (NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* __this, const RuntimeMethod* method) 
{
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___PerformanceLevelTimeoutEvent;
		NullCheck(L_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_onReleasedCpuBoost_mFDB5018EC339425836E93B20040B8E2A90A60182 (NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* __this, const RuntimeMethod* method) 
{
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___CpuPerformanceBoostReleasedByTimeoutEvent;
		NullCheck(L_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_onReleasedGpuBoost_m875EDF1A54DA3126DD581B81A0CAF47CB358F099 (NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* __this, const RuntimeMethod* method) 
{
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___GpuPerformanceBoostReleasedByTimeoutEvent;
		NullCheck(L_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_onRefreshRateChanged_m90F4B1D55344D831F246080300ED00AE677C31DB (NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* __this, const RuntimeMethod* method) 
{
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___RefreshRateChangedEvent;
		NullCheck(L_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeApi_GetJavaMethodID_mDD29DF658AA7F00923F11BA548038BC1B8BD5C77 (intptr_t ___0_classId, String_t* ___1_name, String_t* ___2_sig, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AndroidJNI_ExceptionClear_m1205CD178ADB8E0E7EBDBE349AFA767D5D7758B8(NULL);
		intptr_t L_0 = ___0_classId;
		String_t* L_1 = ___1_name;
		String_t* L_2 = ___2_sig;
		intptr_t L_3;
		L_3 = AndroidJNI_GetMethodID_mA7FF961764CA4D68C4789E5A17926CE5FF9B3549(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		intptr_t L_4;
		L_4 = AndroidJNI_ExceptionOccurred_mAE2AE7C57E06059383EDCAB956A01BDF7D03F54C(NULL);
		intptr_t L_5;
		L_5 = IntPtr_op_Explicit_m931A344F16D4C65EFB0B492EB07C7A82AF0B9FA1(0, NULL);
		bool L_6;
		L_6 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		AndroidJNI_ExceptionDescribe_m20B24A293E6A8467E312E028E6AA250934684508(NULL);
		AndroidJNI_ExceptionClear_m1205CD178ADB8E0E7EBDBE349AFA767D5D7758B8(NULL);
		intptr_t L_7;
		L_7 = IntPtr_op_Explicit_m931A344F16D4C65EFB0B492EB07C7A82AF0B9FA1(0, NULL);
		return L_7;
	}

IL_0031:
	{
		intptr_t L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_StaticInit_mEF71D12CE69859AEEC61AB5672227101BE13B9F5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral110C230ECC11791A56E51CE07FE5E6FD5A78178A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D677AB4F1E4297F4CF5654EAD125EEBC50D20EF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74C185339ADE6B87DA245E0CBDFD66891CC43F54);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1AAE3AE980660190B1F9951D819C0F1BEA090B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAD4FD80C1A0A39AD74FD88700D89B9595B8D595);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB8C132238F9E774E6E9E180238DA0A65C25145C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEEC7732C32C4E0262755BF931431F792DE2E0033);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		il2cpp_codegen_runtime_class_init_inline(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var))->___s_GameSDK;
		if (L_0)
		{
			goto IL_00ee;
		}
	}
	try
	{
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
			L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
			AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_2, _stringLiteralEEC7732C32C4E0262755BF931431F792DE2E0033, L_1, NULL);
			il2cpp_codegen_runtime_class_init_inline(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var);
			((NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var))->___s_GameSDK = L_2;
			Il2CppCodeGenWriteBarrier((void**)(&((NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var))->___s_GameSDK), (void*)L_2);
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = ((NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var))->___s_GameSDK;
			if (!L_3)
			{
				goto IL_003e_1;
			}
		}
		{
			il2cpp_codegen_runtime_class_init_inline(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var);
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = ((NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var))->___s_GameSDK;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5;
			L_5 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
			NullCheck(L_4);
			bool L_6;
			L_6 = AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6(L_4, _stringLiteral74C185339ADE6B87DA245E0CBDFD66891CC43F54, L_5, AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
			((NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var))->___s_isAvailable = L_6;
		}

IL_003e_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0040;
		}
		throw e;
	}

CATCH_0040:
	{
		Exception_t* L_7 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var)));
		((NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var))))->___s_isAvailable = (bool)0;
		((NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var))))->___s_GameSDK = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var))))->___s_GameSDK), (void*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		il2cpp_codegen_runtime_class_init_inline(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var);
		bool L_8 = ((NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var))->___s_isAvailable;
		if (!L_8)
		{
			goto IL_00ee;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = NativeApi_IsAPVersionSupported_m4A6DADB4AF2E304468EB3BF8D21390884799378B(NULL);
		if (L_9)
		{
			goto IL_006d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var);
		((NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var))->___s_isAvailable = (bool)0;
		((NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var))->___s_GameSDK = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var))->___s_GameSDK), (void*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)NULL);
		return;
	}

IL_006d:
	{
		il2cpp_codegen_runtime_class_init_inline(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_10 = ((NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var))->___s_GameSDK;
		NullCheck(L_10);
		intptr_t L_11;
		L_11 = AndroidJavaObject_GetRawObject_m536F043B5CE2C21369FF6173C9D2A9A62136BC48(L_10, NULL);
		((NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var))->___s_GameSDKRawObjectID = L_11;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_12 = ((NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var))->___s_GameSDK;
		NullCheck(L_12);
		intptr_t L_13;
		L_13 = AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5(L_12, NULL);
		intptr_t L_14 = L_13;
		intptr_t L_15;
		L_15 = NativeApi_GetJavaMethodID_mDD29DF658AA7F00923F11BA548038BC1B8BD5C77(L_14, _stringLiteral110C230ECC11791A56E51CE07FE5E6FD5A78178A, _stringLiteralDB8C132238F9E774E6E9E180238DA0A65C25145C, NULL);
		((NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var))->___s_GetGpuFrameTimeID = L_15;
		intptr_t L_16 = L_14;
		intptr_t L_17;
		L_17 = NativeApi_GetJavaMethodID_mDD29DF658AA7F00923F11BA548038BC1B8BD5C77(L_16, _stringLiteralDAD4FD80C1A0A39AD74FD88700D89B9595B8D595, _stringLiteralDB8C132238F9E774E6E9E180238DA0A65C25145C, NULL);
		((NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var))->___s_GetHighPrecisionSkinTempLevelID = L_17;
		intptr_t L_18;
		L_18 = NativeApi_GetJavaMethodID_mDD29DF658AA7F00923F11BA548038BC1B8BD5C77(L_16, _stringLiteralA1AAE3AE980660190B1F9951D819C0F1BEA090B7, _stringLiteral2D677AB4F1E4297F4CF5654EAD125EEBC50D20EF, NULL);
		((NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var))->___s_GetClusterInfolID = L_18;
		intptr_t L_19 = ((NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var))->___s_GetGpuFrameTimeID;
		intptr_t L_20;
		L_20 = IntPtr_op_Explicit_m931A344F16D4C65EFB0B492EB07C7A82AF0B9FA1(0, NULL);
		bool L_21;
		L_21 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_19, L_20, NULL);
		if (L_21)
		{
			goto IL_00e8;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var);
		intptr_t L_22 = ((NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var))->___s_GetHighPrecisionSkinTempLevelID;
		intptr_t L_23;
		L_23 = IntPtr_op_Explicit_m931A344F16D4C65EFB0B492EB07C7A82AF0B9FA1(0, NULL);
		bool L_24;
		L_24 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_22, L_23, NULL);
		if (!L_24)
		{
			goto IL_00ee;
		}
	}

IL_00e8:
	{
		il2cpp_codegen_runtime_class_init_inline(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var);
		((NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var))->___s_isAvailable = (bool)0;
	}

IL_00ee:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_IsAvailable_mB9AB23571615F83CFC23833580CAA31CF801CFD2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var);
		NativeApi_StaticInit_mEF71D12CE69859AEEC61AB5672227101BE13B9F5(NULL);
		bool L_0 = ((NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var))->___s_isAvailable;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_RegisterListener_mAA67F27863950076632CC6B474F8A6F4327223B4 (NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3261C3E11E9AB172DA0BD2010EF79C41DE23C91C);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		V_0 = (bool)0;
	}
	try
	{
		il2cpp_codegen_runtime_class_init_inline(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var))->___s_GameSDK;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, __this);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)__this);
		NullCheck(L_0);
		bool L_3;
		L_3 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_0, _stringLiteral3261C3E11E9AB172DA0BD2010EF79C41DE23C91C, L_2, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		V_0 = L_3;
		goto IL_0023;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001e;
		}
		throw e;
	}

CATCH_001e:
	{
		Exception_t* L_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_0 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0023;
	}

IL_0023:
	{
		bool L_5 = V_0;
		bool L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnregisterListener_m56A5D73E83313776E1D333A3B23251A761CE2E98 (NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3261C3E11E9AB172DA0BD2010EF79C41DE23C91C);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		V_0 = (bool)1;
	}
	try
	{
		il2cpp_codegen_runtime_class_init_inline(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var))->___s_GameSDK;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		NullCheck(L_0);
		bool L_2;
		L_2 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_0, _stringLiteral3261C3E11E9AB172DA0BD2010EF79C41DE23C91C, L_1, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		V_0 = L_2;
		goto IL_001f;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001a;
		}
		throw e;
	}

CATCH_001a:
	{
		Exception_t* L_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_0 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_001f;
	}

IL_001f:
	{
		bool L_4 = V_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_IsAPVersionSupported_m4A6DADB4AF2E304468EB3BF8D21390884799378B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8CAC7A1CF27146D11E92BE39054D8E4594FE9B3D);
		s_Il2CppMethodInitialized = true;
	}
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* V_0 = NULL;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{
		{
			il2cpp_codegen_runtime_class_init_inline(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var);
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var))->___s_GameSDK;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
			L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
			NullCheck(L_0);
			String_t* L_2;
			L_2 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_0, _stringLiteral8CAC7A1CF27146D11E92BE39054D8E4594FE9B3D, L_1, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
			il2cpp_codegen_runtime_class_init_inline(SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_il2cpp_TypeInfo_var);
			bool L_3;
			L_3 = SamsungGameSDKAdaptivePerformanceSubsystem_TryParseVersion_m11B181A8D69F59774E2E1196D0D8F61EE341E3E0(L_2, (&V_0), NULL);
			if (!L_3)
			{
				goto IL_002d_1;
			}
		}
		{
			Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* L_4 = V_0;
			Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* L_5 = (Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7*)il2cpp_codegen_object_new(Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7_il2cpp_TypeInfo_var);
			Version__ctor_m0871675040007535EA3D8083A4BEAE9DF8C92FF4(L_5, 3, 2, NULL);
			bool L_6;
			L_6 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(L_4, L_5, NULL);
			V_1 = L_6;
			goto IL_0036;
		}

IL_002d_1:
		{
			V_1 = (bool)0;
			goto IL_0036;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0031;
		}
		throw e;
	}

CATCH_0031:
	{
		Exception_t* L_7 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0034;
	}

IL_0034:
	{
		return (bool)0;
	}

IL_0036:
	{
		bool L_8 = V_1;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_Initialize_mD5CCC8D65B6D995B365BE4602144DEBA9BDD55CD (NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD289A15F06D391673864A3B5CEDBFF42865743C1);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		V_0 = (bool)0;
	}
	try
	{
		{
			String_t* L_0;
			L_0 = NativeApi_GetVersion_mA4099836535EE991E5F2F9F910A2051AA54944A2(__this, NULL);
			il2cpp_codegen_runtime_class_init_inline(SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_il2cpp_TypeInfo_var);
			bool L_1;
			L_1 = SamsungGameSDKAdaptivePerformanceSubsystem_TryParseVersion_m11B181A8D69F59774E2E1196D0D8F61EE341E3E0(L_0, (&V_1), NULL);
			if (!L_1)
			{
				goto IL_0049_1;
			}
		}
		{
			Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* L_2 = V_1;
			Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* L_3 = (Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7*)il2cpp_codegen_object_new(Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7_il2cpp_TypeInfo_var);
			Version__ctor_m0871675040007535EA3D8083A4BEAE9DF8C92FF4(L_3, 3, 2, NULL);
			bool L_4;
			L_4 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(L_2, L_3, NULL);
			if (!L_4)
			{
				goto IL_003f_1;
			}
		}
		{
			il2cpp_codegen_runtime_class_init_inline(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var);
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5 = ((NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var))->___s_GameSDK;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_6;
			Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* L_8 = V_1;
			NullCheck(L_8);
			String_t* L_9;
			L_9 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_8);
			NullCheck(L_7);
			ArrayElementTypeCheck (L_7, L_9);
			(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_9);
			NullCheck(L_5);
			bool L_10;
			L_10 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_5, _stringLiteralD289A15F06D391673864A3B5CEDBFF42865743C1, L_7, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
			V_0 = L_10;
		}

IL_003f_1:
		{
			bool L_11 = V_0;
			if (!L_11)
			{
				goto IL_0049_1;
			}
		}
		{
			bool L_12;
			L_12 = NativeApi_RegisterListener_mAA67F27863950076632CC6B474F8A6F4327223B4(__this, NULL);
			V_0 = L_12;
		}

IL_0049_1:
		{
			goto IL_004e;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_004b;
		}
		throw e;
	}

CATCH_004b:
	{
		Exception_t* L_13 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004e;
	}

IL_004e:
	{
		bool L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_Terminate_m20E038F0579D7C9D58454AD72011ED757FA27C1F (NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E5FBE3F351EB8F12ED980FF209B6810ED6C1D60);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		NativeApi_UnregisterListener_m56A5D73E83313776E1D333A3B23251A761CE2E98(__this, NULL);
	}
	try
	{
		il2cpp_codegen_runtime_class_init_inline(Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = Application_get_identifier_mEA3314E50D44FB3CE2C2E78B336ACF4AD97BA056(NULL);
		V_0 = L_0;
		il2cpp_codegen_runtime_class_init_inline(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ((NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var))->___s_GameSDK;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		String_t* L_4 = V_0;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		NullCheck(L_1);
		bool L_5;
		L_5 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_1, _stringLiteral8E5FBE3F351EB8F12ED980FF209B6810ED6C1D60, L_3, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		goto IL_002b;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0028;
		}
		throw e;
	}

CATCH_0028:
	{
		Exception_t* L_6 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002b;
	}

IL_002b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeApi_GetVersion_mA4099836535EE991E5F2F9F910A2051AA54944A2 (NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8CAC7A1CF27146D11E92BE39054D8E4594FE9B3D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}
	try
	{
		il2cpp_codegen_runtime_class_init_inline(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var))->___s_GameSDK;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_2;
		L_2 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_0, _stringLiteral8CAC7A1CF27146D11E92BE39054D8E4594FE9B3D, L_1, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		V_0 = L_2;
		goto IL_0020;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001d;
		}
		throw e;
	}

CATCH_001d:
	{
		Exception_t* L_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0020;
	}

IL_0020:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NativeApi_GetHighPrecisionSkinTempLevel_mF772B46B9F70B8520E7CE50D9FBB854BD435836A (NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		V_0 = (-1.0);
	}
	try
	{
		{
			il2cpp_codegen_runtime_class_init_inline(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var);
			intptr_t L_0 = ((NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var))->___s_GameSDKRawObjectID;
			intptr_t L_1 = ((NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var))->___s_GetHighPrecisionSkinTempLevelID;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_2 = ((NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var))->___s_NoArgs;
			double L_3;
			L_3 = AndroidJNI_CallDoubleMethod_m9001B2EF56623D6F17B4E9E87788CDD3E760A897(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			intptr_t L_4;
			L_4 = AndroidJNI_ExceptionOccurred_mAE2AE7C57E06059383EDCAB956A01BDF7D03F54C(NULL);
			bool L_5;
			L_5 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_4, 0, NULL);
			if (!L_5)
			{
				goto IL_003a_1;
			}
		}
		{
			AndroidJNI_ExceptionDescribe_m20B24A293E6A8467E312E028E6AA250934684508(NULL);
			AndroidJNI_ExceptionClear_m1205CD178ADB8E0E7EBDBE349AFA767D5D7758B8(NULL);
		}

IL_003a_1:
		{
			goto IL_003f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		Exception_t* L_6 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_003f;
	}

IL_003f:
	{
		double L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NativeApi_GetGpuFrameTime_m849D6C1752EF1034093E711C7D3B2A28ADFAFAD7 (NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		V_0 = (-1.0);
	}
	try
	{
		{
			il2cpp_codegen_runtime_class_init_inline(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var);
			intptr_t L_0 = ((NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var))->___s_GameSDKRawObjectID;
			intptr_t L_1 = ((NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var))->___s_GetGpuFrameTimeID;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_2 = ((NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var))->___s_NoArgs;
			double L_3;
			L_3 = AndroidJNI_CallDoubleMethod_m9001B2EF56623D6F17B4E9E87788CDD3E760A897(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			intptr_t L_4;
			L_4 = AndroidJNI_ExceptionOccurred_mAE2AE7C57E06059383EDCAB956A01BDF7D03F54C(NULL);
			bool L_5;
			L_5 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_4, 0, NULL);
			if (!L_5)
			{
				goto IL_003a_1;
			}
		}
		{
			AndroidJNI_ExceptionDescribe_m20B24A293E6A8467E312E028E6AA250934684508(NULL);
			AndroidJNI_ExceptionClear_m1205CD178ADB8E0E7EBDBE349AFA767D5D7758B8(NULL);
		}

IL_003a_1:
		{
			goto IL_003f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		Exception_t* L_6 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_003f;
	}

IL_003f:
	{
		double L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeApi_SetFreqLevels_mC568D9356108AC7A1AAE662C3FD108A565181E09 (NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* __this, int32_t ___0_cpu, int32_t ___1_gpu, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F209C20BD06D8D1C76C888ACA266837D8ADDC01);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		V_0 = 0;
	}
	try
	{
		il2cpp_codegen_runtime_class_init_inline(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var))->___s_GameSDK;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		int32_t L_3 = ___0_cpu;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_2;
		int32_t L_7 = ___1_gpu;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_9);
		NullCheck(L_0);
		int32_t L_10;
		L_10 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_0, _stringLiteral4F209C20BD06D8D1C76C888ACA266837D8ADDC01, L_6, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		V_0 = L_10;
		goto IL_002f;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_002c;
		}
		throw e;
	}

CATCH_002c:
	{
		Exception_t* L_11 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002f;
	}

IL_002f:
	{
		int32_t L_12 = V_0;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_EnableCpuBoost_m142D18B1745C6F3ADE07F313B92A27432B076B8E (NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD05CCAF3885FF0D51C07DE89653D67A9929A857);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		V_0 = (bool)0;
	}
	try
	{
		il2cpp_codegen_runtime_class_init_inline(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var))->___s_GameSDK;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		int32_t L_3 = 1;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		NullCheck(L_0);
		bool L_5;
		L_5 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_0, _stringLiteralBD05CCAF3885FF0D51C07DE89653D67A9929A857, L_2, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		V_0 = L_5;
		goto IL_0026;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0023;
		}
		throw e;
	}

CATCH_0023:
	{
		Exception_t* L_6 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0026;
	}

IL_0026:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_EnableGpuBoost_mDABE6D115C876233BF7EBD13DDFF7F7A12DBB0C9 (NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58B9EE58F492CF50D7C051554FE7BDD815569565);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		V_0 = (bool)0;
	}
	try
	{
		il2cpp_codegen_runtime_class_init_inline(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var))->___s_GameSDK;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		int32_t L_3 = 1;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		NullCheck(L_0);
		bool L_5;
		L_5 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_0, _stringLiteral58B9EE58F492CF50D7C051554FE7BDD815569565, L_2, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		V_0 = L_5;
		goto IL_0026;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0023;
		}
		throw e;
	}

CATCH_0023:
	{
		Exception_t* L_6 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0026;
	}

IL_0026:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeApi_GetClusterInfo_m1B6635A235E064CCBACD2D3875A97816A3FCA920 (NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		V_0 = ((int32_t)-999);
	}
	try
	{
		{
			il2cpp_codegen_runtime_class_init_inline(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var);
			intptr_t L_0 = ((NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var))->___s_GameSDKRawObjectID;
			intptr_t L_1 = ((NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var))->___s_GetClusterInfolID;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_2 = ((NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var))->___s_NoArgs;
			int32_t L_3;
			L_3 = AndroidJNI_CallIntMethod_mD1299CB9F99E26D2734A0F02D376DE6EF49F1741(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			intptr_t L_4;
			L_4 = AndroidJNI_ExceptionOccurred_mAE2AE7C57E06059383EDCAB956A01BDF7D03F54C(NULL);
			bool L_5;
			L_5 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_4, 0, NULL);
			if (!L_5)
			{
				goto IL_0036_1;
			}
		}
		{
			AndroidJNI_ExceptionDescribe_m20B24A293E6A8467E312E028E6AA250934684508(NULL);
			AndroidJNI_ExceptionClear_m1205CD178ADB8E0E7EBDBE349AFA767D5D7758B8(NULL);
		}

IL_0036_1:
		{
			goto IL_003b;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0038;
		}
		throw e;
	}

CATCH_0038:
	{
		Exception_t* L_6 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_003b;
	}

IL_003b:
	{
		int32_t L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeApi_GetMaxCpuPerformanceLevel_m7106C512DEFDAD0EF76DF0F752E95B5C20ADFE92 (NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFAC891F8E2E6B2BA23524259218EF5EF3BF998B4);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		V_0 = (-1);
	}
	try
	{
		il2cpp_codegen_runtime_class_init_inline(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var))->___s_GameSDK;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		int32_t L_2;
		L_2 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_0, _stringLiteralFAC891F8E2E6B2BA23524259218EF5EF3BF998B4, L_1, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		V_0 = L_2;
		goto IL_001c;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0019;
		}
		throw e;
	}

CATCH_0019:
	{
		Exception_t* L_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_001c;
	}

IL_001c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeApi_GetMaxGpuPerformanceLevel_m287193E794C3784CDA030D5B37F3F4D8B34BEAB8 (NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA479396D9311F0A23258AE9653EFD051C3B8A4D5);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		V_0 = (-1);
	}
	try
	{
		il2cpp_codegen_runtime_class_init_inline(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var))->___s_GameSDK;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		int32_t L_2;
		L_2 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_0, _stringLiteralA479396D9311F0A23258AE9653EFD051C3B8A4D5, L_1, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		V_0 = L_2;
		goto IL_001c;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0019;
		}
		throw e;
	}

CATCH_0019:
	{
		Exception_t* L_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_001c;
	}

IL_001c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_IsVariableRefreshRateSupported_mFF2652DEC0862E5EE5F6E7E74363B3AADF9A4128 (NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1174361642F6FE4FCA189A130190A4E9597912D6);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		V_0 = (bool)0;
	}
	try
	{
		il2cpp_codegen_runtime_class_init_inline(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var))->___s_GameSDK;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2;
		L_2 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_0, _stringLiteral1174361642F6FE4FCA189A130190A4E9597912D6, L_1, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		V_0 = L_2;
		goto IL_001c;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0019;
		}
		throw e;
	}

CATCH_0019:
	{
		Exception_t* L_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_001c;
	}

IL_001c:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* NativeApi_GetSupportedRefreshRates_mF2EBFD7946532F52B99039E03D5612D40348BFF1 (NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_m55B538F2538A5C0157CC28301628D6EDAC92C007_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D6253C836CCF9A6B8A05245CB6B1EF24E546455);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		V_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
	}
	try
	{
		il2cpp_codegen_runtime_class_init_inline(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var))->___s_GameSDK;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2;
		L_2 = AndroidJavaObject_Call_TisInt32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_m55B538F2538A5C0157CC28301628D6EDAC92C007(L_0, _stringLiteral3D6253C836CCF9A6B8A05245CB6B1EF24E546455, L_1, AndroidJavaObject_Call_TisInt32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_m55B538F2538A5C0157CC28301628D6EDAC92C007_RuntimeMethod_var);
		V_0 = L_2;
		goto IL_001c;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0019;
		}
		throw e;
	}

CATCH_0019:
	{
		Exception_t* L_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_001c;
	}

IL_001c:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)0);
		return L_5;
	}

IL_0026:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_SetRefreshRate_m04C7E330A964E07262D3C75B791A1F5883408549 (NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* __this, int32_t ___0_targetRefreshRate, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF206CAA96C8ED929B66CE9CAF1513182AC391082);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{
		il2cpp_codegen_runtime_class_init_inline(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var))->___s_GameSDK;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		int32_t L_3 = ___0_targetRefreshRate;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, _stringLiteralF206CAA96C8ED929B66CE9CAF1513182AC391082, L_2, NULL);
		goto IL_0025;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0020;
		}
		throw e;
	}

CATCH_0020:
	{
		Exception_t* L_6 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_0 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0027;
	}

IL_0025:
	{
		return (bool)1;
	}

IL_0027:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_ResetRefreshRate_mC3FBA2BE59BFF568B0559E3011EE6DA736602C2A (NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DF31CBCAC5F9AB299F5D58B49B126C24553D2D1);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{
		il2cpp_codegen_runtime_class_init_inline(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var))->___s_GameSDK;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, _stringLiteral7DF31CBCAC5F9AB299F5D58B49B126C24553D2D1, L_1, NULL);
		goto IL_001b;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		Exception_t* L_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_0 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_001d;
	}

IL_001b:
	{
		return (bool)1;
	}

IL_001d:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeApi_GetCurrentRefreshRate_m59A77EADD8B0175EEB26AF149AF886C5B6C5A3C2 (NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D8E0CE0AA8B1F1859A8CEA37DFAA26D56616E45);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		V_0 = (-1);
	}
	try
	{
		il2cpp_codegen_runtime_class_init_inline(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var))->___s_GameSDK;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		int32_t L_2;
		L_2 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_0, _stringLiteral1D8E0CE0AA8B1F1859A8CEA37DFAA26D56616E45, L_1, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		V_0 = L_2;
		goto IL_001c;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0019;
		}
		throw e;
	}

CATCH_0019:
	{
		Exception_t* L_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_001c;
	}

IL_001c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi__cctor_m32D0AB85FA1CB934C7CB97DA2CA6DF254ADB792F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var))->___s_GameSDK = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var))->___s_GameSDK), (void*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)NULL);
		((NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var))->___s_isAvailable = (bool)0;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_0 = (jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)SZArrayNew(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var, (uint32_t)0);
		((NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var))->___s_NoArgs = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_StaticFields*)il2cpp_codegen_static_fields_for(NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8_il2cpp_TypeInfo_var))->___s_NoArgs), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRRManager_UpdateRefreshRateInfo_m095C6C40745CDED72FD296C0100264BABAB7EBC6 (VRRManager_t72B06FC7051365C9A258D97C6E189C2A4D0CDEDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* V_1 = NULL;
	int32_t V_2 = 0;
	{
		NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* L_0 = __this->___m_Api;
		NullCheck(L_0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1;
		L_1 = NativeApi_GetSupportedRefreshRates_mF2EBFD7946532F52B99039E03D5612D40348BFF1(L_0, NULL);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_il2cpp_TypeInfo_var);
		SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* L_2 = ((SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_StaticFields*)il2cpp_codegen_static_fields_for(SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_il2cpp_TypeInfo_var))->___settings;
		NullCheck(L_2);
		bool L_3;
		L_3 = SamsungAndroidProviderSettings_get_highSpeedVRR_mF7D7A276D6AC87D624429E128A5B36155ABCE4A1_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		__this->___m_SupportedRefreshRates = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SupportedRefreshRates), (void*)L_4);
		goto IL_0051;
	}

IL_0021:
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_5 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_5, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		V_1 = L_5;
		V_2 = 0;
		goto IL_003f;
	}

IL_002b:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_0;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		if ((((int32_t)L_9) > ((int32_t)((int32_t)60))))
		{
			goto IL_003b;
		}
	}
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_10 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = V_0;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		int32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_10);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_10, L_14, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
	}

IL_003b:
	{
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_003f:
	{
		int32_t L_16 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = V_0;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_002b;
		}
	}
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_18 = V_1;
		NullCheck(L_18);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19;
		L_19 = List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA(L_18, List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_RuntimeMethod_var);
		__this->___m_SupportedRefreshRates = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SupportedRefreshRates), (void*)L_19);
	}

IL_0051:
	{
		NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* L_20 = __this->___m_Api;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = NativeApi_GetCurrentRefreshRate_m59A77EADD8B0175EEB26AF149AF886C5B6C5A3C2(L_20, NULL);
		__this->___m_CurrentRefreshRate = L_21;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRRManager__ctor_mD2277F2A0AC768DEEA16B64982A3741F9347EDBF (VRRManager_t72B06FC7051365C9A258D97C6E189C2A4D0CDEDA* __this, NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* ___0_api, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___m_RefreshRateChangedLock = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RefreshRateChangedLock), (void*)L_0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___m_SupportedRefreshRates = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SupportedRefreshRates), (void*)L_1);
		__this->___m_CurrentRefreshRate = (-1);
		__this->___m_LastSetRefreshRate = (-1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* L_2 = ___0_api;
		__this->___m_Api = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Api), (void*)L_2);
		VRRManager_SetDefaultVRR_mC8C818C82827547B528A80DA7DAA3E27A228A97C(__this, NULL);
		VRRManager_UpdateRefreshRateInfo_m095C6C40745CDED72FD296C0100264BABAB7EBC6(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRRManager_SetDefaultVRR_mC8C818C82827547B528A80DA7DAA3E27A228A97C (VRRManager_t72B06FC7051365C9A258D97C6E189C2A4D0CDEDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m697B633D0C1EECAC6C493EC797FC44416F706F4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_il2cpp_TypeInfo_var);
		SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* L_0 = ((SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_StaticFields*)il2cpp_codegen_static_fields_for(SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_il2cpp_TypeInfo_var))->___settings;
		NullCheck(L_0);
		bool L_1;
		L_1 = SamsungAndroidProviderSettings_get_highSpeedVRR_mF7D7A276D6AC87D624429E128A5B36155ABCE4A1_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->___m_SupportedRefreshRates;
		int32_t L_3;
		L_3 = Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m697B633D0C1EECAC6C493EC797FC44416F706F4F(L_2, ((int32_t)60), Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m697B633D0C1EECAC6C493EC797FC44416F706F4F_RuntimeMethod_var);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_5 = V_0;
		bool L_6;
		L_6 = VRRManager_SetRefreshRateByIndexInternal_m9C5DEB988F2F1D6827DDB2208FB4ECA33D328BC6(__this, L_5, NULL);
	}

IL_0027:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRRManager_Resume_mF04994891A6B381E8DF8A8078E9A0928F2D04AFE (VRRManager_t72B06FC7051365C9A258D97C6E189C2A4D0CDEDA* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	{
		V_0 = (bool)0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___m_SupportedRefreshRates;
		V_1 = L_0;
		int32_t L_1 = __this->___m_LastSetRefreshRate;
		V_2 = L_1;
		VRRManager_UpdateRefreshRateInfo_m095C6C40745CDED72FD296C0100264BABAB7EBC6(__this, NULL);
		int32_t L_2 = __this->___m_CurrentRefreshRate;
		int32_t L_3 = V_2;
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_0023;
		}
	}
	{
		V_0 = (bool)1;
		goto IL_002e;
	}

IL_0023:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->___m_SupportedRefreshRates;
		if ((((RuntimeObject*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_4) == ((RuntimeObject*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_5)))
		{
			goto IL_002e;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_002e:
	{
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_7 = __this->___m_RefreshRateChangedLock;
		V_3 = L_7;
		V_4 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004c:
			{
				{
					bool L_8 = V_4;
					if (!L_8)
					{
						goto IL_0056;
					}
				}
				{
					RuntimeObject* L_9 = V_3;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_9, NULL);
				}

IL_0056:
				{
					return;
				}
			}
		});
		try
		{
			RuntimeObject* L_10 = V_3;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_10, (&V_4), NULL);
			__this->___m_RefreshRateChanged = (bool)1;
			goto IL_0057;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0057:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRRManager_Update_mCFB9B5DDFAAE08091FCA2DB70DCBEACCE74B2C53 (VRRManager_t72B06FC7051365C9A258D97C6E189C2A4D0CDEDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m697B633D0C1EECAC6C493EC797FC44416F706F4F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* G_B14_0 = NULL;
	VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* G_B13_0 = NULL;
	{
		V_0 = (bool)0;
		RuntimeObject* L_0 = __this->___m_RefreshRateChangedLock;
		V_1 = L_0;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0023:
			{
				{
					bool L_1 = V_2;
					if (!L_1)
					{
						goto IL_002c;
					}
				}
				{
					RuntimeObject* L_2 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_002c:
				{
					return;
				}
			}
		});
		try
		{
			RuntimeObject* L_3 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_2), NULL);
			bool L_4 = __this->___m_RefreshRateChanged;
			V_0 = L_4;
			__this->___m_RefreshRateChanged = (bool)0;
			goto IL_002d;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002d:
	{
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_008d;
		}
	}
	{
		VRRManager_UpdateRefreshRateInfo_m095C6C40745CDED72FD296C0100264BABAB7EBC6(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->___m_SupportedRefreshRates;
		int32_t L_7 = __this->___m_LastSetRefreshRate;
		int32_t L_8;
		L_8 = Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m697B633D0C1EECAC6C493EC797FC44416F706F4F(L_6, L_7, Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m697B633D0C1EECAC6C493EC797FC44416F706F4F_RuntimeMethod_var);
		V_3 = L_8;
		int32_t L_9 = V_3;
		if ((((int32_t)L_9) == ((int32_t)(-1))))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_10 = V_3;
		bool L_11;
		L_11 = VRRManager_SetRefreshRateByIndexInternal_m9C5DEB988F2F1D6827DDB2208FB4ECA33D328BC6(__this, L_10, NULL);
		goto IL_007d;
	}

IL_0056:
	{
		int32_t L_12 = V_3;
		if ((!(((uint32_t)L_12) == ((uint32_t)(-1)))))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_13 = __this->___m_LastSetRefreshRate;
		if ((((int32_t)L_13) == ((int32_t)(-1))))
		{
			goto IL_007d;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->___m_SupportedRefreshRates;
		int32_t L_15;
		L_15 = Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m697B633D0C1EECAC6C493EC797FC44416F706F4F(L_14, ((int32_t)60), Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m697B633D0C1EECAC6C493EC797FC44416F706F4F_RuntimeMethod_var);
		V_3 = L_15;
		int32_t L_16 = V_3;
		if ((((int32_t)L_16) == ((int32_t)(-1))))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_17 = V_3;
		bool L_18;
		L_18 = VRRManager_SetRefreshRateByIndexInternal_m9C5DEB988F2F1D6827DDB2208FB4ECA33D328BC6(__this, L_17, NULL);
	}

IL_007d:
	{
		VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* L_19 = __this->___RefreshRateChanged;
		VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* L_20 = L_19;
		if (L_20)
		{
			G_B14_0 = L_20;
			goto IL_0088;
		}
		G_B13_0 = L_20;
	}
	{
		return;
	}

IL_0088:
	{
		NullCheck(G_B14_0);
		VariableRefreshRateEventHandler_Invoke_mA665080591D6EA72C7EC12CFC0CAFAC8E5FF37EC_inline(G_B14_0, NULL);
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* VRRManager_get_SupportedRefreshRates_m2E19C96EE046A2767D0534C3FAF4E7A20D07A259 (VRRManager_t72B06FC7051365C9A258D97C6E189C2A4D0CDEDA* __this, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___m_SupportedRefreshRates;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VRRManager_get_CurrentRefreshRate_mC13F1F1107275DB649F511F5A36706E0BEFE108A (VRRManager_t72B06FC7051365C9A258D97C6E189C2A4D0CDEDA* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_CurrentRefreshRate;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VRRManager_SetRefreshRateByIndex_m2B4321780B5B1AFE76E6FED2431E99754C28DE71 (VRRManager_t72B06FC7051365C9A258D97C6E189C2A4D0CDEDA* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_il2cpp_TypeInfo_var);
		SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* L_0 = ((SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_StaticFields*)il2cpp_codegen_static_fields_for(SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_il2cpp_TypeInfo_var))->___settings;
		NullCheck(L_0);
		SamsungAndroidProviderSettings_set_automaticVRR_m10FAA3C18EF7EF58166BB3D9A572B5D249584639_inline(L_0, (bool)0, NULL);
		int32_t L_1 = ___0_index;
		bool L_2;
		L_2 = VRRManager_SetRefreshRateByIndexInternal_m9C5DEB988F2F1D6827DDB2208FB4ECA33D328BC6(__this, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VRRManager_SetRefreshRateByIndexInternal_m9C5DEB988F2F1D6827DDB2208FB4ECA33D328BC6 (VRRManager_t72B06FC7051365C9A258D97C6E189C2A4D0CDEDA* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0069;
		}
	}
	{
		int32_t L_1 = ___0_index;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2;
		L_2 = VRRManager_get_SupportedRefreshRates_m2E19C96EE046A2767D0534C3FAF4E7A20D07A259_inline(__this, NULL);
		NullCheck(L_2);
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_0069;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3;
		L_3 = VRRManager_get_SupportedRefreshRates_m2E19C96EE046A2767D0534C3FAF4E7A20D07A259_inline(__this, NULL);
		int32_t L_4 = ___0_index;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = L_6;
		il2cpp_codegen_runtime_class_init_inline(Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Application_get_targetFrameRate_m5A5B0FC0DFE1EBC940FF49B8237A243F45A630E1(NULL);
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_8 = ___0_index;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9;
		L_9 = VRRManager_get_SupportedRefreshRates_m2E19C96EE046A2767D0534C3FAF4E7A20D07A259_inline(__this, NULL);
		int32_t L_10 = ___0_index;
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		___0_index = L_11;
		NullCheck(L_9);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		il2cpp_codegen_runtime_class_init_inline(Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var);
		int32_t L_14;
		L_14 = Application_get_targetFrameRate_m5A5B0FC0DFE1EBC940FF49B8237A243F45A630E1(NULL);
	}

IL_0038:
	{
		il2cpp_codegen_runtime_class_init_inline(SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_il2cpp_TypeInfo_var);
		SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* L_15 = ((SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_StaticFields*)il2cpp_codegen_static_fields_for(SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6_il2cpp_TypeInfo_var))->___settings;
		NullCheck(L_15);
		bool L_16;
		L_16 = SamsungAndroidProviderSettings_get_highSpeedVRR_mF7D7A276D6AC87D624429E128A5B36155ABCE4A1_inline(L_15, NULL);
		if (L_16)
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_17 = V_0;
		if ((((int32_t)L_17) <= ((int32_t)((int32_t)60))))
		{
			goto IL_004b;
		}
	}
	{
		return (bool)0;
	}

IL_004b:
	{
		NativeApi_t885F19A3A181CBD14806FC97A8D927B407E021F8* L_18 = __this->___m_Api;
		int32_t L_19 = V_0;
		NullCheck(L_18);
		bool L_20;
		L_20 = NativeApi_SetRefreshRate_m04C7E330A964E07262D3C75B791A1F5883408549(L_18, L_19, NULL);
		if (!L_20)
		{
			goto IL_0069;
		}
	}
	{
		int32_t L_21 = V_0;
		__this->___m_CurrentRefreshRate = L_21;
		int32_t L_22 = V_0;
		__this->___m_LastSetRefreshRate = L_22;
		return (bool)1;
	}

IL_0069:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRRManager_add_RefreshRateChanged_m00DA9DA38832F706BC294A0CA62A5450160C71C1 (VRRManager_t72B06FC7051365C9A258D97C6E189C2A4D0CDEDA* __this, VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* V_0 = NULL;
	VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* V_1 = NULL;
	VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* V_2 = NULL;
	{
		VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* L_0 = __this->___RefreshRateChanged;
		V_0 = L_0;
	}

IL_0007:
	{
		VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* L_1 = V_0;
		V_1 = L_1;
		VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* L_2 = V_1;
		VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95*)CastclassSealed((RuntimeObject*)L_4, VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95_il2cpp_TypeInfo_var));
		VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95** L_5 = (VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95**)(&__this->___RefreshRateChanged);
		VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* L_6 = V_2;
		VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* L_7 = V_1;
		VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* L_8;
		L_8 = InterlockedCompareExchangeImpl<VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95*>(L_5, L_6, L_7);
		V_0 = L_8;
		VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* L_9 = V_0;
		VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* L_10 = V_1;
		if ((!(((RuntimeObject*)(VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95*)L_9) == ((RuntimeObject*)(VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRRManager_remove_RefreshRateChanged_m24055555511ADF2DA5DEE4145C079CBB306C2CA5 (VRRManager_t72B06FC7051365C9A258D97C6E189C2A4D0CDEDA* __this, VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* V_0 = NULL;
	VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* V_1 = NULL;
	VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* V_2 = NULL;
	{
		VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* L_0 = __this->___RefreshRateChanged;
		V_0 = L_0;
	}

IL_0007:
	{
		VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* L_1 = V_0;
		V_1 = L_1;
		VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* L_2 = V_1;
		VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95*)CastclassSealed((RuntimeObject*)L_4, VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95_il2cpp_TypeInfo_var));
		VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95** L_5 = (VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95**)(&__this->___RefreshRateChanged);
		VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* L_6 = V_2;
		VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* L_7 = V_1;
		VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* L_8;
		L_8 = InterlockedCompareExchangeImpl<VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95*>(L_5, L_6, L_7);
		V_0 = L_8;
		VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* L_9 = V_0;
		VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* L_10 = V_1;
		if ((!(((RuntimeObject*)(VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95*)L_9) == ((RuntimeObject*)(VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRRManager_OnRefreshRateChanged_mC7B94DF25479D1DEA7BFD4286412271E28CD1169 (VRRManager_t72B06FC7051365C9A258D97C6E189C2A4D0CDEDA* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = __this->___m_RefreshRateChangedLock;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001a:
			{
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0023;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0023:
				{
					return;
				}
			}
		});
		try
		{
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			__this->___m_RefreshRateChanged = (bool)1;
			goto IL_0024;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0024:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoVariableRefreshRate__ctor_m325160788CB50F3FD45C4BDA6ADBF4EA40A398E2 (AutoVariableRefreshRate_t90CC96BA9BE6AF1DC8343CDE46B0CC345FEBB63D* __this, RuntimeObject* ___0_vrrManagerInstance, const RuntimeMethod* method) 
{
	{
		SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* L_0;
		L_0 = SamsungAndroidProviderSettings_GetSettings_m1049E50BEC709D010C89CB78635F11BAF183A4CB_inline(NULL);
		__this->___settings = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___settings), (void*)L_0);
		__this->___VrrUpdateTime = (1.0f);
		__this->___lastRefreshRateIndex = (-1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_1 = ___0_vrrManagerInstance;
		__this->___vrrManager = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___vrrManager), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoVariableRefreshRate_UpdateAutoVRR_m723236AA9993CBBF5B79B2A512AD7275D977990E (AutoVariableRefreshRate_t90CC96BA9BE6AF1DC8343CDE46B0CC345FEBB63D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		float L_0 = __this->___VrrUpdateTime;
		float L_1;
		L_1 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		__this->___VrrUpdateTime = ((float)il2cpp_codegen_subtract(L_0, L_1));
		float L_2 = __this->___VrrUpdateTime;
		if ((!(((float)L_2) <= ((float)(0.0f)))))
		{
			goto IL_009b;
		}
	}
	{
		__this->___VrrUpdateTime = (1.0f);
		RuntimeObject* L_3 = __this->___vrrManager;
		NullCheck(L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4;
		L_4 = InterfaceFuncInvoker0< Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* >::Invoke(0, IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_4)->max_length)), 1));
		il2cpp_codegen_runtime_class_init_inline(Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = Application_get_targetFrameRate_m5A5B0FC0DFE1EBC940FF49B8237A243F45A630E1(NULL);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0072;
		}
	}
	{
		V_1 = 0;
		goto IL_0062;
	}

IL_0046:
	{
		il2cpp_codegen_runtime_class_init_inline(Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = Application_get_targetFrameRate_m5A5B0FC0DFE1EBC940FF49B8237A243F45A630E1(NULL);
		RuntimeObject* L_7 = __this->___vrrManager;
		NullCheck(L_7);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8;
		L_8 = InterfaceFuncInvoker0< Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* >::Invoke(0, IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var, L_7);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		if ((((int32_t)L_6) > ((int32_t)L_11)))
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_12 = V_1;
		V_0 = L_12;
		goto IL_0072;
	}

IL_005e:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0062:
	{
		int32_t L_14 = V_1;
		RuntimeObject* L_15 = __this->___vrrManager;
		NullCheck(L_15);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16;
		L_16 = InterfaceFuncInvoker0< Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* >::Invoke(0, IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var, L_15);
		NullCheck(L_16);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_0046;
		}
	}

IL_0072:
	{
		int32_t L_17 = __this->___lastRefreshRateIndex;
		int32_t L_18 = V_0;
		if ((((int32_t)L_17) == ((int32_t)L_18)))
		{
			goto IL_009b;
		}
	}
	{
		int32_t L_19 = V_0;
		__this->___lastRefreshRateIndex = L_19;
		RuntimeObject* L_20 = __this->___vrrManager;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		bool L_22;
		L_22 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(2, IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var, L_20, L_21);
		SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* L_23 = __this->___settings;
		NullCheck(L_23);
		SamsungAndroidProviderSettings_set_automaticVRR_m10FAA3C18EF7EF58166BB3D9A572B5D249584639_inline(L_23, (bool)1, NULL);
	}

IL_009b:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mEC2CAEA5CE93FA6DAB7421C1F9A9155F57751031 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t025A21461965FABBEE9B88CFED183BF18C71FF39_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t025A21461965FABBEE9B88CFED183BF18C71FF39* L_0 = (U3CU3Ec_t025A21461965FABBEE9B88CFED183BF18C71FF39*)il2cpp_codegen_object_new(U3CU3Ec_t025A21461965FABBEE9B88CFED183BF18C71FF39_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m4CC0B583F326027934207C5B0D037250C4E17560(L_0, NULL);
		((U3CU3Ec_t025A21461965FABBEE9B88CFED183BF18C71FF39_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t025A21461965FABBEE9B88CFED183BF18C71FF39_il2cpp_TypeInfo_var))->___U3CU3E9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t025A21461965FABBEE9B88CFED183BF18C71FF39_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t025A21461965FABBEE9B88CFED183BF18C71FF39_il2cpp_TypeInfo_var))->___U3CU3E9), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4CC0B583F326027934207C5B0D037250C4E17560 (U3CU3Ec_t025A21461965FABBEE9B88CFED183BF18C71FF39* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__26_0_m5B1E90197167FA3947DD02BAE512EF46DBD77D15 (U3CU3Ec_t025A21461965FABBEE9B88CFED183BF18C71FF39* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VRRManager_t72B06FC7051365C9A258D97C6E189C2A4D0CDEDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VRRManager_t72B06FC7051365C9A258D97C6E189C2A4D0CDEDA* G_B2_0 = NULL;
	VRRManager_t72B06FC7051365C9A258D97C6E189C2A4D0CDEDA* G_B1_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = VariableRefreshRate_get_Instance_m450C4BACDE831B071DDC9573BD1FE24D4FA4BEEA_inline(NULL);
		VRRManager_t72B06FC7051365C9A258D97C6E189C2A4D0CDEDA* L_1 = ((VRRManager_t72B06FC7051365C9A258D97C6E189C2A4D0CDEDA*)IsInstClass((RuntimeObject*)L_0, VRRManager_t72B06FC7051365C9A258D97C6E189C2A4D0CDEDA_il2cpp_TypeInfo_var));
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		return;
	}

IL_000f:
	{
		NullCheck(G_B2_0);
		VRRManager_OnRefreshRateChanged_mC7B94DF25479D1DEA7BFD4286412271E28CD1169(G_B2_0, NULL);
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
void VariableRefreshRateEventHandler_Invoke_mA665080591D6EA72C7EC12CFC0CAFAC8E5FF37EC_Multicast(VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* currentDelegate = reinterpret_cast<VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void VariableRefreshRateEventHandler_Invoke_mA665080591D6EA72C7EC12CFC0CAFAC8E5FF37EC_OpenInst(VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(method);
}
void VariableRefreshRateEventHandler_Invoke_mA665080591D6EA72C7EC12CFC0CAFAC8E5FF37EC_OpenStatic(VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(method);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95 (VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	il2cppPInvokeFunc();

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableRefreshRateEventHandler__ctor_m7A50456A08A0FDE7002210349CE4F2D9BF73EBF7 (VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&VariableRefreshRateEventHandler_Invoke_mA665080591D6EA72C7EC12CFC0CAFAC8E5FF37EC_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&VariableRefreshRateEventHandler_Invoke_mA665080591D6EA72C7EC12CFC0CAFAC8E5FF37EC_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableRefreshRateEventHandler_Invoke_mA665080591D6EA72C7EC12CFC0CAFAC8E5FF37EC (VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VariableRefreshRateEventHandler_BeginInvoke_m96B39CC25E1EA9D1C5BD5CD00D817CFBDC29C5A4 (VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableRefreshRateEventHandler_EndInvoke_mA9620AD3877A7CAF092C68D0A97BFE556627B348 (VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VariableRefreshRate_get_Instance_m450C4BACDE831B071DDC9573BD1FE24D4FA4BEEA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableRefreshRate_tEA02E83F092552EB0AECAB3F133EF281D66EEA4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((VariableRefreshRate_tEA02E83F092552EB0AECAB3F133EF281D66EEA4D_StaticFields*)il2cpp_codegen_static_fields_for(VariableRefreshRate_tEA02E83F092552EB0AECAB3F133EF281D66EEA4D_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableRefreshRate_set_Instance_m5F8051BFDE6E14BAC0C837E841B48D67590AB992 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableRefreshRate_tEA02E83F092552EB0AECAB3F133EF281D66EEA4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_value;
		((VariableRefreshRate_tEA02E83F092552EB0AECAB3F133EF281D66EEA4D_StaticFields*)il2cpp_codegen_static_fields_for(VariableRefreshRate_tEA02E83F092552EB0AECAB3F133EF281D66EEA4D_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((VariableRefreshRate_tEA02E83F092552EB0AECAB3F133EF281D66EEA4D_StaticFields*)il2cpp_codegen_static_fields_for(VariableRefreshRate_tEA02E83F092552EB0AECAB3F133EF281D66EEA4D_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField), (void*)L_0);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* VariableRefreshRate_get_Instance_m450C4BACDE831B071DDC9573BD1FE24D4FA4BEEA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableRefreshRate_tEA02E83F092552EB0AECAB3F133EF281D66EEA4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((VariableRefreshRate_tEA02E83F092552EB0AECAB3F133EF281D66EEA4D_StaticFields*)il2cpp_codegen_static_fields_for(VariableRefreshRate_tEA02E83F092552EB0AECAB3F133EF281D66EEA4D_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* SamsungAndroidProviderSettings_GetSettings_m1049E50BEC709D010C89CB78635F11BAF183A4CB_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* L_0 = ((SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC_StaticFields*)il2cpp_codegen_static_fields_for(SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC_il2cpp_TypeInfo_var))->___s_RuntimeInstance;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AdaptivePerformanceSubsystemBase_get_initialized_mD8CA1B7504E7C565ADE1B49E8DB08232A66FA631_inline (AdaptivePerformanceSubsystemBase_t056A2AE227166A477FC9F9536AD7B0F891D32CD9* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CinitializedU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SamsungAndroidProviderSettings_get_samsungProviderLogging_mE70D42A6A1439E3DB2406B298C2AF4F30811DA9C_inline (SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___m_SamsungProviderLogging;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystem_set_MaxCpuPerformanceLevel_m7040D551B96A10A49DB28DC1CB6FF6E55811BF9C_inline (SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CMaxCpuPerformanceLevelU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SamsungGameSDKAdaptivePerformanceSubsystem_set_MaxGpuPerformanceLevel_mDD72ADA0233E838AB2B08625407171D6FABC33BA_inline (SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CMaxGpuPerformanceLevelU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdaptivePerformanceSubsystem_set_Capabilities_m13719E1250D06D80D0889D1015C9F35078F7414F_inline (AdaptivePerformanceSubsystem_t2D41A24C328589A3018DA0478476D2591E9B5C23* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CCapabilitiesU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PerformanceDataRecord_get_ChangeFlags_m83DE31AF3877A2A1507A6703B190533FD166B9B7_inline (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CChangeFlagsU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PerformanceDataRecord_set_ChangeFlags_mE99AA127E129C78872D68F5C650D55B8E5D33DC8_inline (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CChangeFlagsU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PerformanceDataRecord_set_WarningLevel_mBC3853B7D0AA1412C41DFD248FA9E7252DAEB5F4_inline (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CWarningLevelU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PerformanceDataRecord_set_CpuPerformanceLevel_m8BBB7FA33AF2644ED0DE81CD58CCB07C5F71ED03_inline (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CCpuPerformanceLevelU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PerformanceDataRecord_set_GpuPerformanceLevel_mBA26ABE3F6089BA232022D7F0F38B55B8FA9481A_inline (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CGpuPerformanceLevelU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PerformanceDataRecord_set_CpuPerformanceBoost_mD8BF1CE74A03B57E81DBCD9A3DDE8DAA27968FF5_inline (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CCpuPerformanceBoostU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PerformanceDataRecord_set_GpuPerformanceBoost_m0A5764E94B8EC621A0AA51B2F7C24BA1EAF844B9_inline (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CGpuPerformanceBoostU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PerformanceDataRecord_set_TemperatureLevel_mFC2BC8E019EFB0E7611C242D1F5D4EAB76570BB5_inline (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_value;
		__this->___U3CTemperatureLevelU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdaptivePerformanceSubsystemBase_set_initialized_m7B2B09A90BC940B4903FBF8FB7D4F87581CDFF72_inline (AdaptivePerformanceSubsystemBase_t056A2AE227166A477FC9F9536AD7B0F891D32CD9* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CinitializedU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AdaptivePerformanceSubsystem_get_Capabilities_m3B41A455C5EF85D90A6796AE764E6285E1AF21A1_inline (AdaptivePerformanceSubsystem_t2D41A24C328589A3018DA0478476D2591E9B5C23* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CCapabilitiesU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SamsungGameSDKAdaptivePerformanceSubsystem_get_MaxCpuPerformanceLevel_m7558F2A23D816B4F3EB7B94934B9646038C4D6F0_inline (SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CMaxCpuPerformanceLevelU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SamsungGameSDKAdaptivePerformanceSubsystem_get_MaxGpuPerformanceLevel_m5268FD732220398272D98125ABD2A92C0DB76C28_inline (SamsungGameSDKAdaptivePerformanceSubsystem_t40AA2BBE117DB8D860622870170F2DDFD0BB78F6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CMaxGpuPerformanceLevelU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PerformanceDataRecord_set_PerformanceLevelControlAvailable_m78A1EFC49C88D90E778F7C4C8605662E94B125FF_inline (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CPerformanceLevelControlAvailableU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VariableRefreshRate_set_Instance_m5F8051BFDE6E14BAC0C837E841B48D67590AB992_inline (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableRefreshRate_tEA02E83F092552EB0AECAB3F133EF281D66EEA4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_value;
		((VariableRefreshRate_tEA02E83F092552EB0AECAB3F133EF281D66EEA4D_StaticFields*)il2cpp_codegen_static_fields_for(VariableRefreshRate_tEA02E83F092552EB0AECAB3F133EF281D66EEA4D_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((VariableRefreshRate_tEA02E83F092552EB0AECAB3F133EF281D66EEA4D_StaticFields*)il2cpp_codegen_static_fields_for(VariableRefreshRate_tEA02E83F092552EB0AECAB3F133EF281D66EEA4D_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClusterInfo_set_BigCore_m6773CE3416C5DDE25B397D398D60253CA4A913A0_inline (ClusterInfo_tE84F530B1972D0F8712CD136B14D4C4136B0BA15* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CBigCoreU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClusterInfo_set_MediumCore_mC984A40803648B368E8E998F82E7C89D9E24E126_inline (ClusterInfo_tE84F530B1972D0F8712CD136B14D4C4136B0BA15* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CMediumCoreU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClusterInfo_set_LittleCore_m2B02B46BBEA719EFBDD955DF419EAAC81E69C7AB_inline (ClusterInfo_tE84F530B1972D0F8712CD136B14D4C4136B0BA15* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CLittleCoreU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PerformanceDataRecord_set_ClusterInfo_m70A3B30678BE28E09161ADF030CBAFE8D5BC9E3E_inline (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* __this, ClusterInfo_tE84F530B1972D0F8712CD136B14D4C4136B0BA15 ___0_value, const RuntimeMethod* method) 
{
	{
		ClusterInfo_tE84F530B1972D0F8712CD136B14D4C4136B0BA15 L_0 = ___0_value;
		__this->___U3CClusterInfoU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SamsungAndroidProviderSettings_get_automaticVRR_mA4EC43A6755953623F7A5F1B3C365A3A9CE25C3B_inline (SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___m_AutomaticVRR;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PerformanceDataRecord_set_GpuFrameTime_mB779C484C185DB05F985A295EA7242EB8DA37299_inline (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_value;
		__this->___U3CGpuFrameTimeU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PerformanceDataRecord_get_CpuPerformanceLevel_mF688EC621C77916A86F96CF7D0DAFD520B6D68E8_inline (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CCpuPerformanceLevelU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PerformanceDataRecord_get_GpuPerformanceLevel_mA928B60EF914AB4E7D95291E1357A3FE795DBE23_inline (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CGpuPerformanceLevelU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PerformanceDataRecord_get_CpuPerformanceBoost_m55A78568F8E19144717C3CEC17CE90FA766591D2_inline (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CCpuPerformanceBoostU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PerformanceDataRecord_get_GpuPerformanceBoost_mFD01BBFC9A9BE53ED81947089A02691635789B7E_inline (PerformanceDataRecord_tDF1B7607FB8378B49C42DFFA5AE4A64F62C42F83* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CGpuPerformanceBoostU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m77027979E9BA297A2803C6EA7691881619C35F91_inline (Cinfo_t016018D78B642CAAA7B595015B8AF98E5F1008DB* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CidU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_mE5398A3C07C0B759B72027FE49DDBC1FCB50A5B9_inline (Cinfo_t016018D78B642CAAA7B595015B8AF98E5F1008DB* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___0_value;
		__this->___U3CsubsystemImplementationTypeU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsubsystemImplementationTypeU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SamsungAndroidProviderSettings_get_highSpeedVRR_mF7D7A276D6AC87D624429E128A5B36155ABCE4A1_inline (SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___m_HighSpeedVRR;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VariableRefreshRateEventHandler_Invoke_mA665080591D6EA72C7EC12CFC0CAFAC8E5FF37EC_inline (VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SamsungAndroidProviderSettings_set_automaticVRR_m10FAA3C18EF7EF58166BB3D9A572B5D249584639_inline (SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___m_AutomaticVRR = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* VRRManager_get_SupportedRefreshRates_m2E19C96EE046A2767D0534C3FAF4E7A20D07A259_inline (VRRManager_t72B06FC7051365C9A258D97C6E189C2A4D0CDEDA* __this, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___m_SupportedRefreshRates;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
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
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
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
		List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double AsyncValue_1_get_value_m575C6560C02998BF7B68C755BDD5E515C34A9B43_gshared_inline (AsyncValue_1_tEB0DAFC36390120B2189858822D394983AC03C9A* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3CvalueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mBF7DDBCD230E9D28EDF45D3E65F907DE1AE0CCBC_gshared_inline (Action_1_tC926860F20D428DA3E93D6FBA36420E904DD903B* __this, int32_t ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int32_t)L_8);
		return;
	}

IL_0034:
	{
		int32_t L_9 = ___0_item;
		List_1_AddWithResize_m378B392086AAB6F400944FA9839516326B3F7BB8(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
