#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// System.Collections.Generic.Dictionary`2<System.Int32,Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter>>
struct Dictionary_2_t30B1449996464D018C2DF1046C38BE7B569157F4;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.Type,System.Object>
struct Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5;
// Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsEntity>
struct EcsGrowList_1_t6BC5FF876D381A8F076800C4F4C84DC46575D129;
// Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter>
struct EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B;
// Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsSystemsRunItem>
struct EcsGrowList_1_tD18B57B6C1A2CB2A9F73AA1DC91373C73ED94442;
// Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.IEcsSystem>
struct EcsGrowList_1_t006CB893F5B32B3D946B3134BB7AADB9976F6676;
// Leopotam.Ecs.EcsGrowList`1<System.Int32>
struct EcsGrowList_1_t05BE086951C7D264D8941FC753076684714DAAC3;
// Leopotam.Ecs.EcsGrowList`1<System.Object>
struct EcsGrowList_1_tD2FE2DF3939E65F1327B5527C78A504B16DDFF3E;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter>>
struct KeyCollection_tE876BEC9D6233DF834DD3D4FEEAEC7C2EEA81E0B;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>
struct KeyCollection_t67E8423B5AEB30C254013AD88AB68D2A36F1F436;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Object>
struct KeyCollection_t06BF4E8028DD7CCA572FE96F996862FCB21C8ED4;
// System.Collections.Generic.List`1<Leopotam.Ecs.IEcsSystemsDebugListener>
struct List_1_t0F98A68EA406CEAC8C6D79EBCA75F0D6C6FC4E70;
// System.Collections.Generic.List`1<Leopotam.Ecs.IEcsWorldDebugListener>
struct List_1_tC7540F0D91B566D741FCE4333F4F18F8889FDFE3;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter>>
struct ValueCollection_tFAF1AB314C2A0D14DB0764462753CE3A0ABF7434;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t74AF7C1BAE06C66E984668F663D574ED6A596D28;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Object>
struct ValueCollection_t9EB9C5634AB88E4E9CA993FE202AEE842111C914;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter>>[]
struct EntryU5BU5D_t03CBB2B44FBC260D7BDB2B324FFA54C6BB1C6006;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Int32>[]
struct EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Object>[]
struct EntryU5BU5D_t756A95E079BB929872956FD3C32190FE718B2B92;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// Leopotam.Ecs.EcsEntity[]
struct EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C;
// Leopotam.Ecs.EcsFilter[]
struct EcsFilterU5BU5D_t3EF9DBAB76F9FFBF2F62801A0320AABBBD53F8DA;
// Leopotam.Ecs.EcsSystemsRunItem[]
struct EcsSystemsRunItemU5BU5D_tC0773D762D85EEA5701C25D539B2F787110F5E29;
// Leopotam.Ecs.IEcsComponentPool[]
struct IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39;
// Leopotam.Ecs.IEcsSystem[]
struct IEcsSystemU5BU5D_t01603786BF421D79490FAF8E16607C66CC2ABB2B;
// Leopotam.Ecs.IEcsSystemsDebugListener[]
struct IEcsSystemsDebugListenerU5BU5D_tFA4B94B6DD28A59BCF8309BCC4E018A8CB6C145C;
// Leopotam.Ecs.IEcsWorldDebugListener[]
struct IEcsWorldDebugListenerU5BU5D_tA3150B866984D3B39D72E96216804F22DE302E8E;
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
// Leopotam.Ecs.EcsFilter/DelayedOp[]
struct DelayedOpU5BU5D_t5DE36772360B7C519979E55E5A333A3FEAF23670;
// Leopotam.Ecs.EcsWorld/EcsEntityData[]
struct EcsEntityDataU5BU5D_t526CEB257B536F3BC51E7F01A338728794063469;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// Leopotam.Ecs.EcsComponentPool
struct EcsComponentPool_t2F85D730BCB26AD8062C352D30B8AF4218A0FF8F;
// Leopotam.Ecs.EcsEntity
struct EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E;
// Leopotam.Ecs.EcsFilter
struct EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC;
// Leopotam.Ecs.EcsIgnoreInjectAttribute
struct EcsIgnoreInjectAttribute_t5C2E58E9FA2D3E282E15334B5523F49E97851448;
// Leopotam.Ecs.EcsSystems
struct EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B;
// Leopotam.Ecs.EcsSystemsRunItem
struct EcsSystemsRunItem_tC86619AF6C15024EF70C76FA34BC7C30CC6161FF;
// Leopotam.Ecs.EcsWorld
struct EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090;
// System.Exception
struct Exception_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Leopotam.Ecs.IEcsComponentPool
struct IEcsComponentPool_t9FB24E470344947394FBDF6CA1F7221CEB0F7F44;
// Leopotam.Ecs.IEcsRunSystem
struct IEcsRunSystem_t952C96C577CEBB09E08ECBBA204B2B998F358B79;
// Leopotam.Ecs.IEcsSystem
struct IEcsSystem_t60CC99ACA015A25510A91258F2F5A3DA31C9CF84;
// Leopotam.Ecs.IEcsSystemsDebugListener
struct IEcsSystemsDebugListener_tF991EC1204AD1C6E572058DA150532B4DAFB6C12;
// Leopotam.Ecs.IEcsWorldDebugListener
struct IEcsWorldDebugListener_t60C684525E14FB8F0C6F9310FF04E25BEB3FD717;
// Unity.IL2CPP.CompilerServices.Il2CppSetOptionAttribute
struct Il2CppSetOptionAttribute_tDECA43B02B571750B0BBB5936F9A9C43D0B95E56;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DelayedOpU5BU5D_t5DE36772360B7C519979E55E5A333A3FEAF23670_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t30B1449996464D018C2DF1046C38BE7B569157F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EcsEntityDataU5BU5D_t526CEB257B536F3BC51E7F01A338728794063469_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EcsGrowList_1_t006CB893F5B32B3D946B3134BB7AADB9976F6676_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EcsGrowList_1_t05BE086951C7D264D8941FC753076684714DAAC3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EcsGrowList_1_t6BC5FF876D381A8F076800C4F4C84DC46575D129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EcsGrowList_1_tD18B57B6C1A2CB2A9F73AA1DC91373C73ED94442_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EcsSystemsRunItem_tC86619AF6C15024EF70C76FA34BC7C30CC6161FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEcsComponentPool_t9FB24E470344947394FBDF6CA1F7221CEB0F7F44_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEcsDestroySystem_t618262FD9F9BDF9D5B211E96F19844F71EEA0A1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEcsInitSystem_tE0C75B22B6D0FD328CDA5B8863A7CC4AF512BC04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEcsPostDestroySystem_tD4B1DAFFBAF41074077DAACFE3305204FCA06858_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEcsPreInitSystem_t7806A863D80BA54FA5599D875EB236D89348E1F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEcsRunSystem_t952C96C577CEBB09E08ECBBA204B2B998F358B79_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEcsSystemsDebugListener_tF991EC1204AD1C6E572058DA150532B4DAFB6C12_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEcsWorldDebugListener_t60C684525E14FB8F0C6F9310FF04E25BEB3FD717_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0F98A68EA406CEAC8C6D79EBCA75F0D6C6FC4E70_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC7540F0D91B566D741FCE4333F4F18F8889FDFE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0983E2F566C219C5C61211ED8BC8EA7F270A906E;
IL2CPP_EXTERN_C String_t* _stringLiteral149412EF5DD4FABC7521825E523B524E1EB45E71;
IL2CPP_EXTERN_C String_t* _stringLiteral25A4FBE3BF5562DC866CA4DA98C373F38B573C74;
IL2CPP_EXTERN_C String_t* _stringLiteral2E422EB4772F1976D4425CDE7F443C68DE946D68;
IL2CPP_EXTERN_C String_t* _stringLiteral3A6FDF288A824FB48440B5D0C92A42043315A3AD;
IL2CPP_EXTERN_C String_t* _stringLiteral42421D059AAE096C7B60839ABFEB44B5C73C66C4;
IL2CPP_EXTERN_C String_t* _stringLiteral432B630D178FA64EAD79FE90B66545CC0E025765;
IL2CPP_EXTERN_C String_t* _stringLiteral457FC7B96A28919D20AEDC09CA3CDC4CC21B0D13;
IL2CPP_EXTERN_C String_t* _stringLiteral46E688EE9CEA12647607134D9F4CFBDE2F065AF2;
IL2CPP_EXTERN_C String_t* _stringLiteral4B75DBAF67E4FF20F08D39DC9C8BA76DFA05C0AA;
IL2CPP_EXTERN_C String_t* _stringLiteral4EB64A3A13534D8009CFBAF7571370DD449066FD;
IL2CPP_EXTERN_C String_t* _stringLiteral4F0C344884FC9B83B4A2A736DE917C41C17AF206;
IL2CPP_EXTERN_C String_t* _stringLiteral526364499B42E287EE096D7EA2B6D87A51289D0E;
IL2CPP_EXTERN_C String_t* _stringLiteral57D91E963C1256046C939886D4EF47C540C197E2;
IL2CPP_EXTERN_C String_t* _stringLiteral5E60BFB9BB233C2EFEEE045F37B1E64647148979;
IL2CPP_EXTERN_C String_t* _stringLiteral606C771900936C652E7DC0D284530387D5ED57D1;
IL2CPP_EXTERN_C String_t* _stringLiteral6257718D2302FD68D301F831D5DD87D21396E6FC;
IL2CPP_EXTERN_C String_t* _stringLiteral629984DF45E8ABD6B751FF45E163326B9D580988;
IL2CPP_EXTERN_C String_t* _stringLiteral65C50EE4F514C906B18B5B9D555024AA24DD14E4;
IL2CPP_EXTERN_C String_t* _stringLiteral6A593CE8065C964E88607664A02F0AC49384C3FA;
IL2CPP_EXTERN_C String_t* _stringLiteral6A6D6805DD57E5756D9C4E976A28536E727965A2;
IL2CPP_EXTERN_C String_t* _stringLiteral6CB6CBAEFB707D790B1CB2ED0E4DEF2AB92D4CA7;
IL2CPP_EXTERN_C String_t* _stringLiteral6ECE305DF9F97A39845FE33E7F8ECEDE4CAC75C1;
IL2CPP_EXTERN_C String_t* _stringLiteral6FC4420D546F38081E27458A6B155EA0E2FBBA4D;
IL2CPP_EXTERN_C String_t* _stringLiteral8F6A0CE0FC9A511BCFFC553063AC3CBAA2D1E47D;
IL2CPP_EXTERN_C String_t* _stringLiteral9A0E9ABEC1A97A416116255237E07FACD27092A2;
IL2CPP_EXTERN_C String_t* _stringLiteral9AB398480C1B076194BB4CBA8FB26B3378F973A6;
IL2CPP_EXTERN_C String_t* _stringLiteral9E971242C1AFFA651AB3B5655687128872AFBAF8;
IL2CPP_EXTERN_C String_t* _stringLiteralA906DC2DAC00369EDB944E99FDB0C529B1279531;
IL2CPP_EXTERN_C String_t* _stringLiteralA9A6DF0DA0A3492705FE14C392B46B40246A923F;
IL2CPP_EXTERN_C String_t* _stringLiteralAA66ED9C74A8CE529E01D730BA97D57E57A34F95;
IL2CPP_EXTERN_C String_t* _stringLiteralAB9E2385A9B81E000D6B67C908B888F657688F53;
IL2CPP_EXTERN_C String_t* _stringLiteralAD9511B3791B6914024A8A85095F5542D1019951;
IL2CPP_EXTERN_C String_t* _stringLiteralBAD9D618F46B8767EA3F5D2E39C4174C54422E7A;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC74D986764FC80FC48FB6A690AE1752FE4336E20;
IL2CPP_EXTERN_C String_t* _stringLiteralC7740996BF0E7FB3BDF5EE9BACDA3879D19B6044;
IL2CPP_EXTERN_C String_t* _stringLiteralCEF755D2E5400B69B5641D660ED14A00DA630865;
IL2CPP_EXTERN_C String_t* _stringLiteralD005F93B177BE1B4026669C892E44D2F18CCCD6C;
IL2CPP_EXTERN_C String_t* _stringLiteralD6C6C179BF2FFCA1A20E3ECDBE723A7176ED7715;
IL2CPP_EXTERN_C String_t* _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
IL2CPP_EXTERN_C String_t* _stringLiteralE5BF82CEA932C3DA6E3DCA5F71AC5CC36746C870;
IL2CPP_EXTERN_C String_t* _stringLiteralE7C889CD3951CB5AE334AE0DE08667B43AAA6556;
IL2CPP_EXTERN_C String_t* _stringLiteralEA8E3D47DA899F90008EA38068C06006FD0EF74F;
IL2CPP_EXTERN_C String_t* _stringLiteralEFD0582341B5BB3B305762DA13B0072CAE573CFB;
IL2CPP_EXTERN_C String_t* _stringLiteralF36C572D06C6253E318E68863ED100E5A2FBA478;
IL2CPP_EXTERN_C String_t* _stringLiteralF4CE6C363FEC68EE5E06DCCDE841F049522A07A2;
IL2CPP_EXTERN_C String_t* _stringLiteralFE79A84F0C410242A95761BE689BB0C77471F1A4;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m697B633D0C1EECAC6C493EC797FC44416F706F4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisDelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643_mE752D0FB29CF89DBD6805FA2F6F717C7F87D59A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisEcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D_m0EF6D9B9A664FE94FC75B2B1CD78A846F1A61B63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6BAA7BD6F22421B894347B1476C37052FAC6C916_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m050AC0D9D6F681C25C12FBBC7DD71F926D206ED9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_mEACC35835C05B20642437541D2844FDA88378AAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m48F4681691A2A706881C69C2FB59A4CFD58EB7AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mAAEB730BB484D3ECA345BF704F67084E465FFBF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m456EDDEE587F91E5D186EE848813C4CE1A380987_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA89437E6304FF9DE4848A9FFF946BF49A0F5DC79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mAF56F61CBD9F77BAFCE5E2591712018424E7DB22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m075857BE5F7ED4C4E3D32A575D6787367BEE256D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m420CFC153320557E6823B06767710D1E636E5BDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mDCA5D6962B16CA1ECF35EC04B0F4E79475C5EC96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsEntityExtensions_Copy_m1A65073E7637822646091CF0F6164294DC5C4BDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsEntityExtensions_Destroy_m6DF536AB88ADBB52F10983D339A2EF731881701B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsEntityExtensions_GetComponentTypes_m30DBF5C68EA43C12ACE8A54D3041FFC590B2E90D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsEntityExtensions_GetComponentValues_m352A4AE8A6409CDFED34583F79DAA3B6AF09191C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsEntityExtensions_GetComponentsCount_mF9A542E48DD9D5C6A524EC5C982A37C446B06736_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsEntityExtensions_MoveTo_mFF351B56465BDCCF3207403E703740310316F7A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsFilter_Unlock_m194398A287AA4320005015ED2F33DB4116FF50B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsGrowList_1_Add_m1362B595B89FB7EBA1B3331BB951D46BA18D0232_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsGrowList_1_Add_m19887B8370A2040D1E9C14B4FA889A5A8BF8C199_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsGrowList_1_Add_m47584E78B83F59D13EC3B7812C75F97A5062E5D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsGrowList_1_Add_m7781F80F65A40FAF0240500CE3DC03904FDA7275_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsGrowList_1_Add_mB34B99A8A330CB3FC27634B68EA9A59A1DB729AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsGrowList_1__ctor_m2D0E0C3C4F67DFE1B2189E6CD60E541BFF82F977_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsGrowList_1__ctor_m30D908245D0493D452F0EF6295F2CCEE86EE1A52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsGrowList_1__ctor_m8CBC958C10AFE368670AFA75A52BDC09EAA40472_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsGrowList_1__ctor_m8EF3B1BEB3E023A2240DED5D66296C53791C5948_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsGrowList_1__ctor_mBEFEB97AD463DE7EF4A901D4E6BD7C3920676203_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsGrowList_1__ctor_mE59E17E9B5DAD41A34225F68D4BD276D19332902_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsSystems_AddDebugListener_m3D02F0F7E69A82A2C7182B7972EE5739EC6DB9A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsSystems_Add_mA343724876083CFE729D753EE4D9E8FC03D7EE05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsSystems_Destroy_mA9987A30E62146C975F2C2E023AB5414FE7A9269_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsSystems_GetRunSystemState_mF1C4467122FAD975341916824456CE9ED4DBA97F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsSystems_Init_m904C81F43527CB190F17835DF10F1F64EAE5CB64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsSystems_InjectDataToSystem_m9618385A7688C849FDA8940B69F36FE2492A5550_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsSystems_Inject_mF2CC0D4D2815DD8C43515393BA345688E7FDDB84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsSystems_ProcessInjects_m16FD1E7A4FD791B01481D017CA42C54DEDE8AD36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsSystems_RemoveDebugListener_m9C8166B4BF0D4BB8F4249CB1416A516C40D9939E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsSystems_Run_m44FBDAF554CD169B2D913C4FA5884C460105D172_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsSystems_SetRunSystemState_mA144399AAF2339C35D37DE3D80EF51B04A50F78A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsWorld_AddDebugListener_mE795D6EEE2E530128AFDAB469BBAD3AC2ABAB980_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsWorld_CheckForLeakedEntities_mA8238916A6543AD386CD024E48DF6EB802BD9988_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsWorld_Destroy_m7B94DC862066418289EAAFFD7E33B195080AE092_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsWorld_GetEntityData_m279427A5EDB9357D58A2EABDCA4D5FDBFDFE5670_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsWorld_GetFilter_m52CD6F02CE215E1CA1A2C041022F5EE4E4283A44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsWorld_NewEntity_m828FEED297F5F42E2F36D2093B694FECE4253EAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsWorld_RecycleEntityData_mF32D0E0B4CE31E2AE7027C51DA0C54F9D53FC0D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsWorld_RemoveDebugListener_m802C53F96C3A2BFF351D17FA78B7944EA3AAF536_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsWorld_UpdateFilters_mC5F1D16AB93D10EFCBCCEB9CA9982BB888A7928F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m153C479DE1E49B926CC87C8355FEA2E34F5C7E93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mA452FB910DA7DD11178A7DF048CD2F9F4255F382_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m452929CF39739875E8D0E99D3835FB1E6854195C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m686E9F4F715B3E1E3530A9516FB350F32726418B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mC044E9E00E380CF1C3A2B7E8683DAFC81C19897E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mD550F51A6EADAA1F4604F3F610F0C7780DC8D2E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m94FB4DC031581990488B18A4B232F1E0661E51E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m09F40736D1027FF053D1615DC80BBCCDD581870E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m77111D4FD63811CF5FCDE1537EE44E2710B39AF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mB805BC5C24A8126195D8C78BCE8FC75BFA900E38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m7E1DCE1BA21C909F54440BFBD207B20711E45008_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m9C7C97CB64A6A4D61A013B1368A33E92F362866A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mBA1F962358471BBAC734DF0BCC09177CD8B6A79C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7165B9E024FB6015CFDC1BD3EF5C059051D304B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE43CC0AF1036A41B4A33687F520868B22A774281_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mA247EEA01F5FDA110EE3868745BB7FD99EA0E758_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mBB3BC3E7006C4F216B9184956D745320C58C0E95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m21961D4F8434746893C9CE71A0A1BD6322E7EA9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m5A4B69534BA097B8CFBF21644C3A01C3010DC2C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* EcsIgnoreInjectAttribute_t5C2E58E9FA2D3E282E15334B5523F49E97851448_0_0_0_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E;;
struct EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_marshaled_com;
struct EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_marshaled_com;;
struct EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_marshaled_pinvoke;
struct EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_marshaled_pinvoke;;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C;
struct EcsFilterU5BU5D_t3EF9DBAB76F9FFBF2F62801A0320AABBBD53F8DA;
struct EcsSystemsRunItemU5BU5D_tC0773D762D85EEA5701C25D539B2F787110F5E29;
struct FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8;
struct IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39;
struct IEcsSystemU5BU5D_t01603786BF421D79490FAF8E16607C66CC2ABB2B;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct DelayedOpU5BU5D_t5DE36772360B7C519979E55E5A333A3FEAF23670;
struct EcsEntityDataU5BU5D_t526CEB257B536F3BC51E7F01A338728794063469;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tE2FB5C003D698C16D337A05E272453F6642DE0D1 
{
};

// System.Collections.Generic.Dictionary`2<System.Int32,Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter>>
struct Dictionary_2_t30B1449996464D018C2DF1046C38BE7B569157F4  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t03CBB2B44FBC260D7BDB2B324FFA54C6BB1C6006* ____entries_1;
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
	KeyCollection_tE876BEC9D6233DF834DD3D4FEEAEC7C2EEA81E0B* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tFAF1AB314C2A0D14DB0764462753CE3A0ABF7434* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* ____entries_1;
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
	KeyCollection_t67E8423B5AEB30C254013AD88AB68D2A36F1F436* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t74AF7C1BAE06C66E984668F663D574ED6A596D28* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Type,System.Object>
struct Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t756A95E079BB929872956FD3C32190FE718B2B92* ____entries_1;
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
	KeyCollection_t06BF4E8028DD7CCA572FE96F996862FCB21C8ED4* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t9EB9C5634AB88E4E9CA993FE202AEE842111C914* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsEntity>
struct EcsGrowList_1_t6BC5FF876D381A8F076800C4F4C84DC46575D129  : public RuntimeObject
{
	// T[] Leopotam.Ecs.EcsGrowList`1::Items
	EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C* ___Items_0;
	// System.Int32 Leopotam.Ecs.EcsGrowList`1::Count
	int32_t ___Count_1;
};

// Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter>
struct EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B  : public RuntimeObject
{
	// T[] Leopotam.Ecs.EcsGrowList`1::Items
	EcsFilterU5BU5D_t3EF9DBAB76F9FFBF2F62801A0320AABBBD53F8DA* ___Items_0;
	// System.Int32 Leopotam.Ecs.EcsGrowList`1::Count
	int32_t ___Count_1;
};

// Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsSystemsRunItem>
struct EcsGrowList_1_tD18B57B6C1A2CB2A9F73AA1DC91373C73ED94442  : public RuntimeObject
{
	// T[] Leopotam.Ecs.EcsGrowList`1::Items
	EcsSystemsRunItemU5BU5D_tC0773D762D85EEA5701C25D539B2F787110F5E29* ___Items_0;
	// System.Int32 Leopotam.Ecs.EcsGrowList`1::Count
	int32_t ___Count_1;
};

// Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.IEcsSystem>
struct EcsGrowList_1_t006CB893F5B32B3D946B3134BB7AADB9976F6676  : public RuntimeObject
{
	// T[] Leopotam.Ecs.EcsGrowList`1::Items
	IEcsSystemU5BU5D_t01603786BF421D79490FAF8E16607C66CC2ABB2B* ___Items_0;
	// System.Int32 Leopotam.Ecs.EcsGrowList`1::Count
	int32_t ___Count_1;
};

// Leopotam.Ecs.EcsGrowList`1<System.Int32>
struct EcsGrowList_1_t05BE086951C7D264D8941FC753076684714DAAC3  : public RuntimeObject
{
	// T[] Leopotam.Ecs.EcsGrowList`1::Items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___Items_0;
	// System.Int32 Leopotam.Ecs.EcsGrowList`1::Count
	int32_t ___Count_1;
};

// Leopotam.Ecs.EcsGrowList`1<System.Object>
struct EcsGrowList_1_tD2FE2DF3939E65F1327B5527C78A504B16DDFF3E  : public RuntimeObject
{
	// T[] Leopotam.Ecs.EcsGrowList`1::Items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Items_0;
	// System.Int32 Leopotam.Ecs.EcsGrowList`1::Count
	int32_t ___Count_1;
};

// System.Collections.Generic.List`1<Leopotam.Ecs.IEcsSystemsDebugListener>
struct List_1_t0F98A68EA406CEAC8C6D79EBCA75F0D6C6FC4E70  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IEcsSystemsDebugListenerU5BU5D_tFA4B94B6DD28A59BCF8309BCC4E018A8CB6C145C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t0F98A68EA406CEAC8C6D79EBCA75F0D6C6FC4E70_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IEcsSystemsDebugListenerU5BU5D_tFA4B94B6DD28A59BCF8309BCC4E018A8CB6C145C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Leopotam.Ecs.IEcsWorldDebugListener>
struct List_1_tC7540F0D91B566D741FCE4333F4F18F8889FDFE3  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IEcsWorldDebugListenerU5BU5D_tA3150B866984D3B39D72E96216804F22DE302E8E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tC7540F0D91B566D741FCE4333F4F18F8889FDFE3_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IEcsWorldDebugListenerU5BU5D_tA3150B866984D3B39D72E96216804F22DE302E8E* ___s_emptyArray_5;
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

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235  : public RuntimeObject
{
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};

struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// Leopotam.Ecs.EcsComponentPool
struct EcsComponentPool_t2F85D730BCB26AD8062C352D30B8AF4218A0FF8F  : public RuntimeObject
{
};

struct EcsComponentPool_t2F85D730BCB26AD8062C352D30B8AF4218A0FF8F_StaticFields
{
	// System.Int32 Leopotam.Ecs.EcsComponentPool::ComponentTypesCount
	int32_t ___ComponentTypesCount_0;
};

// Leopotam.Ecs.EcsComponentRefExtensions
struct EcsComponentRefExtensions_tE72831491818DFCCB7F3B423A9FE036B8CFD7AF3  : public RuntimeObject
{
};

// Leopotam.Ecs.EcsEntityExtensions
struct EcsEntityExtensions_t34F61DA8CEFD669D4DB9124682ECB51CBFF832FD  : public RuntimeObject
{
};

// Leopotam.Ecs.EcsFilter
struct EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC  : public RuntimeObject
{
	// Leopotam.Ecs.EcsEntity[] Leopotam.Ecs.EcsFilter::Entities
	EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C* ___Entities_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> Leopotam.Ecs.EcsFilter::EntitiesMap
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___EntitiesMap_1;
	// System.Int32 Leopotam.Ecs.EcsFilter::EntitiesCount
	int32_t ___EntitiesCount_2;
	// System.Int32 Leopotam.Ecs.EcsFilter::LockCount
	int32_t ___LockCount_3;
	// System.Int32 Leopotam.Ecs.EcsFilter::EntitiesCacheSize
	int32_t ___EntitiesCacheSize_4;
	// Leopotam.Ecs.EcsFilter/DelayedOp[] Leopotam.Ecs.EcsFilter::_delayedOps
	DelayedOpU5BU5D_t5DE36772360B7C519979E55E5A333A3FEAF23670* ____delayedOps_5;
	// System.Int32 Leopotam.Ecs.EcsFilter::_delayedOpsCount
	int32_t ____delayedOpsCount_6;
	// System.Int32[] Leopotam.Ecs.EcsFilter::IncludedTypeIndices
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___IncludedTypeIndices_7;
	// System.Int32[] Leopotam.Ecs.EcsFilter::ExcludedTypeIndices
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___ExcludedTypeIndices_8;
	// System.Type[] Leopotam.Ecs.EcsFilter::IncludedTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___IncludedTypes_9;
	// System.Type[] Leopotam.Ecs.EcsFilter::ExcludedTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___ExcludedTypes_10;
};

// Leopotam.Ecs.EcsSystems
struct EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B  : public RuntimeObject
{
	// System.String Leopotam.Ecs.EcsSystems::Name
	String_t* ___Name_0;
	// Leopotam.Ecs.EcsWorld Leopotam.Ecs.EcsSystems::World
	EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* ___World_1;
	// Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.IEcsSystem> Leopotam.Ecs.EcsSystems::_allSystems
	EcsGrowList_1_t006CB893F5B32B3D946B3134BB7AADB9976F6676* ____allSystems_2;
	// Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsSystemsRunItem> Leopotam.Ecs.EcsSystems::_runSystems
	EcsGrowList_1_tD18B57B6C1A2CB2A9F73AA1DC91373C73ED94442* ____runSystems_3;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> Leopotam.Ecs.EcsSystems::_namedRunSystems
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ____namedRunSystems_4;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Object> Leopotam.Ecs.EcsSystems::_injections
	Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* ____injections_5;
	// System.Boolean Leopotam.Ecs.EcsSystems::_injected
	bool ____injected_6;
	// System.Boolean Leopotam.Ecs.EcsSystems::_initialized
	bool ____initialized_7;
	// System.Boolean Leopotam.Ecs.EcsSystems::_destroyed
	bool ____destroyed_8;
	// System.Collections.Generic.List`1<Leopotam.Ecs.IEcsSystemsDebugListener> Leopotam.Ecs.EcsSystems::_debugListeners
	List_1_t0F98A68EA406CEAC8C6D79EBCA75F0D6C6FC4E70* ____debugListeners_9;
};

// Leopotam.Ecs.EcsSystemsRunItem
struct EcsSystemsRunItem_tC86619AF6C15024EF70C76FA34BC7C30CC6161FF  : public RuntimeObject
{
	// System.Boolean Leopotam.Ecs.EcsSystemsRunItem::Active
	bool ___Active_0;
	// Leopotam.Ecs.IEcsRunSystem Leopotam.Ecs.EcsSystemsRunItem::System
	RuntimeObject* ___System_1;
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

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
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

// System.Collections.Generic.List`1/Enumerator<Leopotam.Ecs.IEcsWorldDebugListener>
struct Enumerator_t22FF5D0DE3C75401D4D69F6613F2D690B7B96DF5 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tC7540F0D91B566D741FCE4333F4F18F8889FDFE3* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
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

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Type,System.Object>
struct KeyValuePair_2_tEB150CB79DEEFC9D74129B8A1EB95BF14AAF20DA 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Type_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// Leopotam.Ecs.EcsEntity
struct EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E 
{
	// System.Int32 Leopotam.Ecs.EcsEntity::Id
	int32_t ___Id_0;
	// System.UInt16 Leopotam.Ecs.EcsEntity::Gen
	uint16_t ___Gen_1;
	// Leopotam.Ecs.EcsWorld Leopotam.Ecs.EcsEntity::Owner
	EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* ___Owner_2;
};

struct EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_StaticFields
{
	// Leopotam.Ecs.EcsEntity Leopotam.Ecs.EcsEntity::Null
	EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E ___Null_3;
};
// Native definition for P/Invoke marshalling of Leopotam.Ecs.EcsEntity
struct EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_marshaled_pinvoke
{
	int32_t ___Id_0;
	uint16_t ___Gen_1;
	EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* ___Owner_2;
};
// Native definition for COM marshalling of Leopotam.Ecs.EcsEntity
struct EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_marshaled_com
{
	int32_t ___Id_0;
	uint16_t ___Gen_1;
	EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* ___Owner_2;
};

// Leopotam.Ecs.EcsIgnoreInjectAttribute
struct EcsIgnoreInjectAttribute_t5C2E58E9FA2D3E282E15334B5523F49E97851448  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// Leopotam.Ecs.EcsWorldConfig
struct EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8 
{
	// System.Int32 Leopotam.Ecs.EcsWorldConfig::WorldEntitiesCacheSize
	int32_t ___WorldEntitiesCacheSize_0;
	// System.Int32 Leopotam.Ecs.EcsWorldConfig::WorldFiltersCacheSize
	int32_t ___WorldFiltersCacheSize_1;
	// System.Int32 Leopotam.Ecs.EcsWorldConfig::WorldComponentPoolsCacheSize
	int32_t ___WorldComponentPoolsCacheSize_2;
	// System.Int32 Leopotam.Ecs.EcsWorldConfig::EntityComponentsCacheSize
	int32_t ___EntityComponentsCacheSize_3;
	// System.Int32 Leopotam.Ecs.EcsWorldConfig::FilterEntitiesCacheSize
	int32_t ___FilterEntitiesCacheSize_4;
};

// Leopotam.Ecs.EcsWorldStats
struct EcsWorldStats_tCC6E2E5270D51D54D4B77BA4888150493B3024BD 
{
	// System.Int32 Leopotam.Ecs.EcsWorldStats::ActiveEntities
	int32_t ___ActiveEntities_0;
	// System.Int32 Leopotam.Ecs.EcsWorldStats::ReservedEntities
	int32_t ___ReservedEntities_1;
	// System.Int32 Leopotam.Ecs.EcsWorldStats::Filters
	int32_t ___Filters_2;
	// System.Int32 Leopotam.Ecs.EcsWorldStats::Components
	int32_t ___Components_3;
};

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
};

// Unity.IL2CPP.CompilerServices.Il2CppSetOptionAttribute
struct Il2CppSetOptionAttribute_tDECA43B02B571750B0BBB5936F9A9C43D0B95E56  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// Unity.IL2CPP.CompilerServices.Option Unity.IL2CPP.CompilerServices.Il2CppSetOptionAttribute::<Option>k__BackingField
	int32_t ___U3COptionU3Ek__BackingField_0;
	// System.Object Unity.IL2CPP.CompilerServices.Il2CppSetOptionAttribute::<Value>k__BackingField
	RuntimeObject* ___U3CValueU3Ek__BackingField_1;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
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

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
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

// Leopotam.Ecs.EcsFilter/Enumerator
struct Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B 
{
	// Leopotam.Ecs.EcsFilter Leopotam.Ecs.EcsFilter/Enumerator::_filter
	EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* ____filter_0;
	// System.Int32 Leopotam.Ecs.EcsFilter/Enumerator::_count
	int32_t ____count_1;
	// System.Int32 Leopotam.Ecs.EcsFilter/Enumerator::_idx
	int32_t ____idx_2;
};
// Native definition for P/Invoke marshalling of Leopotam.Ecs.EcsFilter/Enumerator
struct Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B_marshaled_pinvoke
{
	EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* ____filter_0;
	int32_t ____count_1;
	int32_t ____idx_2;
};
// Native definition for COM marshalling of Leopotam.Ecs.EcsFilter/Enumerator
struct Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B_marshaled_com
{
	EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* ____filter_0;
	int32_t ____count_1;
	int32_t ____idx_2;
};

// Leopotam.Ecs.EcsWorld/EcsEntityData
struct EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D 
{
	// System.UInt16 Leopotam.Ecs.EcsWorld/EcsEntityData::Gen
	uint16_t ___Gen_0;
	// System.Int16 Leopotam.Ecs.EcsWorld/EcsEntityData::ComponentsCountX2
	int16_t ___ComponentsCountX2_1;
	// System.Int32[] Leopotam.Ecs.EcsWorld/EcsEntityData::Components
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___Components_2;
};
// Native definition for P/Invoke marshalling of Leopotam.Ecs.EcsWorld/EcsEntityData
#pragma pack(push, tp, 2)
struct EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D_marshaled_pinvoke
{
	uint16_t ___Gen_0;
	int16_t ___ComponentsCountX2_1;
	Il2CppSafeArray/*NONE*/* ___Components_2;
};
#pragma pack(pop, tp)
// Native definition for COM marshalling of Leopotam.Ecs.EcsWorld/EcsEntityData
#pragma pack(push, tp, 2)
struct EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D_marshaled_com
{
	uint16_t ___Gen_0;
	int16_t ___ComponentsCountX2_1;
	Il2CppSafeArray/*NONE*/* ___Components_2;
};
#pragma pack(pop, tp)

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Object>
struct Enumerator_t54912F955AC650EB9D1184290F33662BA237EFF1 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tEB150CB79DEEFC9D74129B8A1EB95BF14AAF20DA ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// Leopotam.Ecs.EcsWorld
struct EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090  : public RuntimeObject
{
	// Leopotam.Ecs.EcsWorld/EcsEntityData[] Leopotam.Ecs.EcsWorld::Entities
	EcsEntityDataU5BU5D_t526CEB257B536F3BC51E7F01A338728794063469* ___Entities_0;
	// System.Int32 Leopotam.Ecs.EcsWorld::EntitiesCount
	int32_t ___EntitiesCount_1;
	// Leopotam.Ecs.EcsGrowList`1<System.Int32> Leopotam.Ecs.EcsWorld::FreeEntities
	EcsGrowList_1_t05BE086951C7D264D8941FC753076684714DAAC3* ___FreeEntities_2;
	// Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter> Leopotam.Ecs.EcsWorld::Filters
	EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* ___Filters_3;
	// System.Collections.Generic.Dictionary`2<System.Int32,Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter>> Leopotam.Ecs.EcsWorld::FilterByIncludedComponents
	Dictionary_2_t30B1449996464D018C2DF1046C38BE7B569157F4* ___FilterByIncludedComponents_4;
	// System.Collections.Generic.Dictionary`2<System.Int32,Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter>> Leopotam.Ecs.EcsWorld::FilterByExcludedComponents
	Dictionary_2_t30B1449996464D018C2DF1046C38BE7B569157F4* ___FilterByExcludedComponents_5;
	// System.Int32 Leopotam.Ecs.EcsWorld::_usedComponentsCount
	int32_t ____usedComponentsCount_6;
	// Leopotam.Ecs.EcsWorldConfig Leopotam.Ecs.EcsWorld::Config
	EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8 ___Config_7;
	// System.Object[] Leopotam.Ecs.EcsWorld::_filterCtor
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____filterCtor_8;
	// Leopotam.Ecs.IEcsComponentPool[] Leopotam.Ecs.EcsWorld::ComponentPools
	IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39* ___ComponentPools_9;
	// System.Boolean Leopotam.Ecs.EcsWorld::IsDestroyed
	bool ___IsDestroyed_10;
	// System.Collections.Generic.List`1<Leopotam.Ecs.IEcsWorldDebugListener> Leopotam.Ecs.EcsWorld::DebugListeners
	List_1_tC7540F0D91B566D741FCE4333F4F18F8889FDFE3* ___DebugListeners_11;
	// Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsEntity> Leopotam.Ecs.EcsWorld::_leakedEntities
	EcsGrowList_1_t6BC5FF876D381A8F076800C4F4C84DC46575D129* ____leakedEntities_12;
	// System.Boolean Leopotam.Ecs.EcsWorld::_inDestroying
	bool ____inDestroying_13;
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

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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

// Leopotam.Ecs.EcsFilter/DelayedOp
struct DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643 
{
	// System.Boolean Leopotam.Ecs.EcsFilter/DelayedOp::IsAdd
	bool ___IsAdd_0;
	// Leopotam.Ecs.EcsEntity Leopotam.Ecs.EcsFilter/DelayedOp::Entity
	EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E ___Entity_1;
};
// Native definition for P/Invoke marshalling of Leopotam.Ecs.EcsFilter/DelayedOp
struct DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643_marshaled_pinvoke
{
	int32_t ___IsAdd_0;
	EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_marshaled_pinvoke ___Entity_1;
};
// Native definition for COM marshalling of Leopotam.Ecs.EcsFilter/DelayedOp
struct DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643_marshaled_com
{
	int32_t ___IsAdd_0;
	EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_marshaled_com ___Entity_1;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
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
// Leopotam.Ecs.IEcsComponentPool[]
struct IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39  : public RuntimeArray
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
// Leopotam.Ecs.EcsEntity[]
struct EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C  : public RuntimeArray
{
	ALIGN_FIELD (8) EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E m_Items[1];

	inline EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Owner_2), (void*)NULL);
	}
	inline EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Owner_2), (void*)NULL);
	}
};
// Leopotam.Ecs.EcsFilter/DelayedOp[]
struct DelayedOpU5BU5D_t5DE36772360B7C519979E55E5A333A3FEAF23670  : public RuntimeArray
{
	ALIGN_FIELD (8) DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643 m_Items[1];

	inline DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___Entity_1))->___Owner_2), (void*)NULL);
	}
	inline DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___Entity_1))->___Owner_2), (void*)NULL);
	}
};
// Leopotam.Ecs.EcsSystemsRunItem[]
struct EcsSystemsRunItemU5BU5D_tC0773D762D85EEA5701C25D539B2F787110F5E29  : public RuntimeArray
{
	ALIGN_FIELD (8) EcsSystemsRunItem_tC86619AF6C15024EF70C76FA34BC7C30CC6161FF* m_Items[1];

	inline EcsSystemsRunItem_tC86619AF6C15024EF70C76FA34BC7C30CC6161FF* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EcsSystemsRunItem_tC86619AF6C15024EF70C76FA34BC7C30CC6161FF** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EcsSystemsRunItem_tC86619AF6C15024EF70C76FA34BC7C30CC6161FF* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline EcsSystemsRunItem_tC86619AF6C15024EF70C76FA34BC7C30CC6161FF* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EcsSystemsRunItem_tC86619AF6C15024EF70C76FA34BC7C30CC6161FF** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EcsSystemsRunItem_tC86619AF6C15024EF70C76FA34BC7C30CC6161FF* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Leopotam.Ecs.IEcsSystem[]
struct IEcsSystemU5BU5D_t01603786BF421D79490FAF8E16607C66CC2ABB2B  : public RuntimeArray
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
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8  : public RuntimeArray
{
	ALIGN_FIELD (8) FieldInfo_t* m_Items[1];

	inline FieldInfo_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FieldInfo_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FieldInfo_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FieldInfo_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FieldInfo_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FieldInfo_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Leopotam.Ecs.EcsWorld/EcsEntityData[]
struct EcsEntityDataU5BU5D_t526CEB257B536F3BC51E7F01A338728794063469  : public RuntimeArray
{
	ALIGN_FIELD (8) EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D m_Items[1];

	inline EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Components_2), (void*)NULL);
	}
	inline EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Components_2), (void*)NULL);
	}
};
// Leopotam.Ecs.EcsFilter[]
struct EcsFilterU5BU5D_t3EF9DBAB76F9FFBF2F62801A0320AABBBD53F8DA  : public RuntimeArray
{
	ALIGN_FIELD (8) EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* m_Items[1];

	inline EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};

IL2CPP_EXTERN_C void EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_marshal_pinvoke(const EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E& unmarshaled, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_marshal_pinvoke_back(const EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_marshaled_pinvoke& marshaled, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E& unmarshaled);
IL2CPP_EXTERN_C void EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_marshal_pinvoke_cleanup(EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_marshal_com(const EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E& unmarshaled, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_marshaled_com& marshaled);
IL2CPP_EXTERN_C void EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_marshal_com_back(const EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_marshaled_com& marshaled, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E& unmarshaled);
IL2CPP_EXTERN_C void EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_marshal_com_cleanup(EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_marshaled_com& marshaled);

// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<System.Int32>(T[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6BAA7BD6F22421B894347B1476C37052FAC6C916_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** ___array0, int32_t ___newSize1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mAF56F61CBD9F77BAFCE5E2591712018424E7DB22_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<Leopotam.Ecs.EcsFilter/DelayedOp>(T[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisDelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643_mE752D0FB29CF89DBD6805FA2F6F717C7F87D59A1_gshared (DelayedOpU5BU5D_t5DE36772360B7C519979E55E5A333A3FEAF23670** ___array0, int32_t ___newSize1, const RuntimeMethod* method) ;
// System.Int32 System.Array::IndexOf<System.Int32>(T[],T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m697B633D0C1EECAC6C493EC797FC44416F706F4F_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___array0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsGrowList`1<System.Object>::.ctor(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsGrowList_1__ctor_mE59E17E9B5DAD41A34225F68D4BD276D19332902_gshared_inline (EcsGrowList_1_tD2FE2DF3939E65F1327B5527C78A504B16DDFF3E* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF225F49F6BE54C39563CECD7C693F0AE4F0530E8_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsGrowList`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsGrowList_1_Add_m210AFA3DF2F152B6A7B848331A7396B35C6ADF3F_gshared_inline (EcsGrowList_1_tD2FE2DF3939E65F1327B5527C78A504B16DDFF3E* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m050AC0D9D6F681C25C12FBBC7DD71F926D206ED9_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m420CFC153320557E6823B06767710D1E636E5BDF_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mAAEB730BB484D3ECA345BF704F67084E465FFBF9_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___key0, int32_t* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsEntity>::.ctor(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsGrowList_1__ctor_m30D908245D0493D452F0EF6295F2CCEE86EE1A52_gshared_inline (EcsGrowList_1_t6BC5FF876D381A8F076800C4F4C84DC46575D129* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsGrowList`1<System.Int32>::.ctor(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsGrowList_1__ctor_mBEFEB97AD463DE7EF4A901D4E6BD7C3920676203_gshared_inline (EcsGrowList_1_t05BE086951C7D264D8941FC753076684714DAAC3* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2E996E8E97DFC188B4E8854C11A9C82B16EDD2CE_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<Leopotam.Ecs.EcsWorld/EcsEntityData>(T[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisEcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D_m0EF6D9B9A664FE94FC75B2B1CD78A846F1A61B63_gshared (EcsEntityDataU5BU5D_t526CEB257B536F3BC51E7F01A338728794063469** ___array0, int32_t ___newSize1, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsEntity>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsGrowList_1_Add_mB34B99A8A330CB3FC27634B68EA9A59A1DB729AC_gshared_inline (EcsGrowList_1_t6BC5FF876D381A8F076800C4F4C84DC46575D129* __this, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E ___item0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsGrowList`1<System.Int32>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsGrowList_1_Add_m19887B8370A2040D1E9C14B4FA889A5A8BF8C199_gshared_inline (EcsGrowList_1_t05BE086951C7D264D8941FC753076684714DAAC3* __this, int32_t ___item0, const RuntimeMethod* method) ;

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Void Unity.IL2CPP.CompilerServices.Il2CppSetOptionAttribute::set_Option(Unity.IL2CPP.CompilerServices.Option)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Il2CppSetOptionAttribute_set_Option_m8700BB2365861BAA58378A7475EA399B0332B6D4_inline (Il2CppSetOptionAttribute_tDECA43B02B571750B0BBB5936F9A9C43D0B95E56* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Unity.IL2CPP.CompilerServices.Il2CppSetOptionAttribute::set_Value(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Il2CppSetOptionAttribute_set_Value_mB869FDE2C07DD58952DC730E0ECB413D63AC5E78_inline (Il2CppSetOptionAttribute_tDECA43B02B571750B0BBB5936F9A9C43D0B95E56* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean Leopotam.Ecs.EcsEntityExtensions::IsAlive(Leopotam.Ecs.EcsEntity&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EcsEntityExtensions_IsAlive_mA54004DC20E6E7ACE79BC206D69697BEBACE03C3_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) ;
// System.Int32 Leopotam.Ecs.EcsEntityExtensions::GetComponentValues(Leopotam.Ecs.EcsEntity&,System.Object[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EcsEntityExtensions_GetComponentValues_m352A4AE8A6409CDFED34583F79DAA3B6AF09191C (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** ___list1, const RuntimeMethod* method) ;
// System.Object[] Leopotam.Ecs.EcsEntity::get_Components()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* EcsEntity_get_Components_m69ABDBAA27802F73FE2259CA17FE3350C9AF0B97 (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* __this, const RuntimeMethod* method) ;
// System.Int32 System.UInt16::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200 (uint16_t* __this, const RuntimeMethod* method) ;
// System.Int32 Leopotam.Ecs.EcsEntity::GetHashCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EcsEntity_GetHashCode_m833E737089406173FC610597E3A93BF8C34F302D_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* __this, const RuntimeMethod* method) ;
// System.Boolean Leopotam.Ecs.EcsEntity::Equals(Leopotam.Ecs.EcsEntity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsEntity_Equals_m813ABFB67E22C48C0F57BF1AD656E48F8C6BA652 (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* __this, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E ___other0, const RuntimeMethod* method) ;
// System.Boolean Leopotam.Ecs.EcsEntity::Equals(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EcsEntity_Equals_mEEBE85D5F0849E2944B0DDC54151EB9F46055702_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* __this, RuntimeObject* ___other0, const RuntimeMethod* method) ;
// System.Boolean Leopotam.Ecs.EcsEntityExtensions::IsNull(Leopotam.Ecs.EcsEntity&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EcsEntityExtensions_IsNull_m6484A3968191361BCE21B21E90B53CBD5BADC1B7_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) ;
// System.Int32 Leopotam.Ecs.EcsEntityExtensions::GetComponentTypes(Leopotam.Ecs.EcsEntity&,System.Type[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EcsEntityExtensions_GetComponentTypes_m30DBF5C68EA43C12ACE8A54D3041FFC590B2E90D (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB** ___list1, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5 (StringBuilder_t* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Int32 System.Text.StringBuilder::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8 (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.String Leopotam.Ecs.EcsEntity::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EcsEntity_ToString_m8D2A9A232ADBFA045F4924132123D281CF1E2D6E (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* __this, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// Leopotam.Ecs.EcsWorld/EcsEntityData& Leopotam.Ecs.EcsWorld::GetEntityData(Leopotam.Ecs.EcsEntity&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* EcsWorld_GetEntityData_m279427A5EDB9357D58A2EABDCA4D5FDBFDFE5670_inline (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) ;
// Leopotam.Ecs.EcsEntity Leopotam.Ecs.EcsWorld::NewEntity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E EcsWorld_NewEntity_m828FEED297F5F42E2F36D2093B694FECE4253EAD_inline (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsWorld::UpdateFilters(System.Int32,Leopotam.Ecs.EcsEntity&,Leopotam.Ecs.EcsWorld/EcsEntityData&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsWorld_UpdateFilters_mC5F1D16AB93D10EFCBCCEB9CA9982BB888A7928F_inline (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, int32_t ___typeIdx0, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity1, EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* ___entityData2, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Leopotam.Ecs.IEcsWorldDebugListener>::get_Item(System.Int32)
inline RuntimeObject* List_1_get_Item_m21961D4F8434746893C9CE71A0A1BD6322E7EA9F (List_1_tC7540F0D91B566D741FCE4333F4F18F8889FDFE3* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_tC7540F0D91B566D741FCE4333F4F18F8889FDFE3*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<Leopotam.Ecs.IEcsWorldDebugListener>::get_Count()
inline int32_t List_1_get_Count_mBB3BC3E7006C4F216B9184956D745320C58C0E95_inline (List_1_tC7540F0D91B566D741FCE4333F4F18F8889FDFE3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tC7540F0D91B566D741FCE4333F4F18F8889FDFE3*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Boolean Leopotam.Ecs.EcsEntityExtensions::AreEquals(Leopotam.Ecs.EcsEntity&,Leopotam.Ecs.EcsEntity&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EcsEntityExtensions_AreEquals_m12E0A04AF4C515D2F92BB1F2D322C3B636627AAC_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___lhs0, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___rhs1, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<System.Int32>(T[]&,System.Int32)
inline void Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6BAA7BD6F22421B894347B1476C37052FAC6C916 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C**, int32_t, const RuntimeMethod*))Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6BAA7BD6F22421B894347B1476C37052FAC6C916_gshared)(___array0, ___newSize1, method);
}
// System.Void Leopotam.Ecs.EcsEntityExtensions::Destroy(Leopotam.Ecs.EcsEntity&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsEntityExtensions_Destroy_m6DF536AB88ADBB52F10983D339A2EF731881701B_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsWorld::RecycleEntityData(System.Int32,Leopotam.Ecs.EcsWorld/EcsEntityData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsWorld_RecycleEntityData_mF32D0E0B4CE31E2AE7027C51DA0C54F9D53FC0D2 (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, int32_t ___id0, EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* ___entityData1, const RuntimeMethod* method) ;
// System.Boolean Leopotam.Ecs.EcsEntityExtensions::IsWorldAlive(Leopotam.Ecs.EcsEntity&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EcsEntityExtensions_IsWorldAlive_mEA0D4AC1ED9B2D3412DAC98F1F18024A3377B913_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) ;
// System.Boolean Leopotam.Ecs.EcsWorld::IsAlive()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EcsWorld_IsAlive_mCBD30D99C44C9963296CBAB628A78C2423CC9155_inline (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Int32)
inline void Dictionary_2__ctor_mAF56F61CBD9F77BAFCE5E2591712018424E7DB22 (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*, int32_t, const RuntimeMethod*))Dictionary_2__ctor_mAF56F61CBD9F77BAFCE5E2591712018424E7DB22_gshared)(__this, ___capacity0, method);
}
// System.Void Leopotam.Ecs.EcsFilter/Enumerator::.ctor(Leopotam.Ecs.EcsFilter)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator__ctor_mAD2CACAE4DC96A5F987178A5C4532E38610796C2_inline (Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B* __this, EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* ___filter0, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<Leopotam.Ecs.EcsFilter/DelayedOp>(T[]&,System.Int32)
inline void Array_Resize_TisDelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643_mE752D0FB29CF89DBD6805FA2F6F717C7F87D59A1 (DelayedOpU5BU5D_t5DE36772360B7C519979E55E5A333A3FEAF23670** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (DelayedOpU5BU5D_t5DE36772360B7C519979E55E5A333A3FEAF23670**, int32_t, const RuntimeMethod*))Array_Resize_TisDelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643_mE752D0FB29CF89DBD6805FA2F6F717C7F87D59A1_gshared)(___array0, ___newSize1, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Int32 System.Array::IndexOf<System.Int32>(T[],T)
inline int32_t Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m697B633D0C1EECAC6C493EC797FC44416F706F4F (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___array0, int32_t ___value1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, const RuntimeMethod*))Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m697B633D0C1EECAC6C493EC797FC44416F706F4F_gshared)(___array0, ___value1, method);
}
// System.Int32 Leopotam.Ecs.EcsFilter::GetEntitiesCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EcsFilter_GetEntitiesCount_m1BDEEE64638444BB80F6331A144CE7C760ECE9C1_inline (EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* __this, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsFilter::Lock()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsFilter_Lock_mA02D6F8F94E8DE65F1DC6F854EF457260AFF57F8_inline (EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* __this, const RuntimeMethod* method) ;
// System.Int32 Leopotam.Ecs.EcsFilter/Enumerator::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_m3643613B3D6014D3200CB8D0F5F50F0C6CCFFCCD_inline (Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B* __this, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsFilter::Unlock()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsFilter_Unlock_m194398A287AA4320005015ED2F33DB4116FF50B7_inline (EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* __this, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsFilter/Enumerator::Dispose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_Dispose_mAB0D6EEA7028DFCB8261808853152882FC8EBBA8_inline (Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B* __this, const RuntimeMethod* method) ;
// System.Boolean Leopotam.Ecs.EcsFilter/Enumerator::MoveNext()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mA175620871ECBCBDEA305F457591FD1A5197389E_inline (Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Leopotam.Ecs.IEcsSystemsDebugListener>::Add(T)
inline void List_1_Add_mB805BC5C24A8126195D8C78BCE8FC75BFA900E38_inline (List_1_t0F98A68EA406CEAC8C6D79EBCA75F0D6C6FC4E70* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0F98A68EA406CEAC8C6D79EBCA75F0D6C6FC4E70*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<Leopotam.Ecs.IEcsSystemsDebugListener>::Remove(T)
inline bool List_1_Remove_mBA1F962358471BBAC734DF0BCC09177CD8B6A79C (List_1_t0F98A68EA406CEAC8C6D79EBCA75F0D6C6FC4E70* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t0F98A68EA406CEAC8C6D79EBCA75F0D6C6FC4E70*, RuntimeObject*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.IEcsSystem>::.ctor(System.Int32)
inline void EcsGrowList_1__ctor_m2D0E0C3C4F67DFE1B2189E6CD60E541BFF82F977_inline (EcsGrowList_1_t006CB893F5B32B3D946B3134BB7AADB9976F6676* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (EcsGrowList_1_t006CB893F5B32B3D946B3134BB7AADB9976F6676*, int32_t, const RuntimeMethod*))EcsGrowList_1__ctor_mE59E17E9B5DAD41A34225F68D4BD276D19332902_gshared_inline)(__this, ___capacity0, method);
}
// System.Void Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsSystemsRunItem>::.ctor(System.Int32)
inline void EcsGrowList_1__ctor_m8EF3B1BEB3E023A2240DED5D66296C53791C5948_inline (EcsGrowList_1_tD18B57B6C1A2CB2A9F73AA1DC91373C73ED94442* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (EcsGrowList_1_tD18B57B6C1A2CB2A9F73AA1DC91373C73ED94442*, int32_t, const RuntimeMethod*))EcsGrowList_1__ctor_mE59E17E9B5DAD41A34225F68D4BD276D19332902_gshared_inline)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Object>::.ctor(System.Int32)
inline void Dictionary_2__ctor_mA89437E6304FF9DE4848A9FFF946BF49A0F5DC79 (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5*, int32_t, const RuntimeMethod*))Dictionary_2__ctor_mF225F49F6BE54C39563CECD7C693F0AE4F0530E8_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<Leopotam.Ecs.IEcsSystemsDebugListener>::.ctor(System.Int32)
inline void List_1__ctor_mE43CC0AF1036A41B4A33687F520868B22A774281 (List_1_t0F98A68EA406CEAC8C6D79EBCA75F0D6C6FC4E70* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0F98A68EA406CEAC8C6D79EBCA75F0D6C6FC4E70*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___capacity0, method);
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.IEcsSystem>::Add(T)
inline void EcsGrowList_1_Add_m1362B595B89FB7EBA1B3331BB951D46BA18D0232_inline (EcsGrowList_1_t006CB893F5B32B3D946B3134BB7AADB9976F6676* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (EcsGrowList_1_t006CB893F5B32B3D946B3134BB7AADB9976F6676*, RuntimeObject*, const RuntimeMethod*))EcsGrowList_1_Add_m210AFA3DF2F152B6A7B848331A7396B35C6ADF3F_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m050AC0D9D6F681C25C12FBBC7DD71F926D206ED9 (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m050AC0D9D6F681C25C12FBBC7DD71F926D206ED9_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m420CFC153320557E6823B06767710D1E636E5BDF (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*, int32_t, int32_t, const RuntimeMethod*))Dictionary_2_set_Item_m420CFC153320557E6823B06767710D1E636E5BDF_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Leopotam.Ecs.EcsSystemsRunItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsSystemsRunItem__ctor_m5583332E82FC941C64E61B66DCA60CDBFF88674A (EcsSystemsRunItem_tC86619AF6C15024EF70C76FA34BC7C30CC6161FF* __this, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsSystemsRunItem>::Add(T)
inline void EcsGrowList_1_Add_m7781F80F65A40FAF0240500CE3DC03904FDA7275_inline (EcsGrowList_1_tD18B57B6C1A2CB2A9F73AA1DC91373C73ED94442* __this, EcsSystemsRunItem_tC86619AF6C15024EF70C76FA34BC7C30CC6161FF* ___item0, const RuntimeMethod* method)
{
	((  void (*) (EcsGrowList_1_tD18B57B6C1A2CB2A9F73AA1DC91373C73ED94442*, EcsSystemsRunItem_tC86619AF6C15024EF70C76FA34BC7C30CC6161FF*, const RuntimeMethod*))EcsGrowList_1_Add_m210AFA3DF2F152B6A7B848331A7396B35C6ADF3F_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mAAEB730BB484D3ECA345BF704F67084E465FFBF9 (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___key0, int32_t* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*, int32_t, int32_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_mAAEB730BB484D3ECA345BF704F67084E465FFBF9_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Object>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mDCA5D6962B16CA1ECF35EC04B0F4E79475C5EC96 (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* __this, Type_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5*, Type_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Type,System.Object>::GetEnumerator()
inline Enumerator_t54912F955AC650EB9D1184290F33662BA237EFF1 Dictionary_2_GetEnumerator_mEACC35835C05B20642437541D2844FDA88378AAB (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t54912F955AC650EB9D1184290F33662BA237EFF1 (*) (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Object>::Dispose()
inline void Enumerator_Dispose_mA452FB910DA7DD11178A7DF048CD2F9F4255F382 (Enumerator_t54912F955AC650EB9D1184290F33662BA237EFF1* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t54912F955AC650EB9D1184290F33662BA237EFF1*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Object>::get_Current()
inline KeyValuePair_2_tEB150CB79DEEFC9D74129B8A1EB95BF14AAF20DA Enumerator_get_Current_mD550F51A6EADAA1F4604F3F610F0C7780DC8D2E8_inline (Enumerator_t54912F955AC650EB9D1184290F33662BA237EFF1* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tEB150CB79DEEFC9D74129B8A1EB95BF14AAF20DA (*) (Enumerator_t54912F955AC650EB9D1184290F33662BA237EFF1*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Type,System.Object>::get_Key()
inline Type_t* KeyValuePair_2_get_Key_m94FB4DC031581990488B18A4B232F1E0661E51E6_inline (KeyValuePair_2_tEB150CB79DEEFC9D74129B8A1EB95BF14AAF20DA* __this, const RuntimeMethod* method)
{
	return ((  Type_t* (*) (KeyValuePair_2_tEB150CB79DEEFC9D74129B8A1EB95BF14AAF20DA*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Type,System.Object>::get_Value()
inline RuntimeObject* KeyValuePair_2_get_Value_m09F40736D1027FF053D1615DC80BBCCDD581870E_inline (KeyValuePair_2_tEB150CB79DEEFC9D74129B8A1EB95BF14AAF20DA* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_tEB150CB79DEEFC9D74129B8A1EB95BF14AAF20DA*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Object>::MoveNext()
inline bool Enumerator_MoveNext_m686E9F4F715B3E1E3530A9516FB350F32726418B (Enumerator_t54912F955AC650EB9D1184290F33662BA237EFF1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t54912F955AC650EB9D1184290F33662BA237EFF1*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// Leopotam.Ecs.EcsSystems Leopotam.Ecs.EcsSystems::ProcessInjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* EcsSystems_ProcessInjects_m16FD1E7A4FD791B01481D017CA42C54DEDE8AD36 (EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* __this, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsSystems::InjectDataToSystem(Leopotam.Ecs.IEcsSystem,Leopotam.Ecs.EcsWorld,System.Collections.Generic.Dictionary`2<System.Type,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsSystems_InjectDataToSystem_m9618385A7688C849FDA8940B69F36FE2492A5550 (RuntimeObject* ___system0, EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* ___world1, Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* ___injections2, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Boolean Leopotam.Ecs.EcsWorld::CheckForLeakedEntities(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsWorld_CheckForLeakedEntities_mA8238916A6543AD386CD024E48DF6EB802BD9988 (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, String_t* ___errorMsg0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Leopotam.Ecs.IEcsSystemsDebugListener>::get_Count()
inline int32_t List_1_get_Count_mA247EEA01F5FDA110EE3868745BB7FD99EA0E758_inline (List_1_t0F98A68EA406CEAC8C6D79EBCA75F0D6C6FC4E70* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t0F98A68EA406CEAC8C6D79EBCA75F0D6C6FC4E70*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<Leopotam.Ecs.IEcsSystemsDebugListener>::get_Item(System.Int32)
inline RuntimeObject* List_1_get_Item_m5A4B69534BA097B8CFBF21644C3A01C3010DC2C2 (List_1_t0F98A68EA406CEAC8C6D79EBCA75F0D6C6FC4E70* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_t0F98A68EA406CEAC8C6D79EBCA75F0D6C6FC4E70*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.FieldInfo::get_IsStatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_get_IsStatic_mEBBEB7B19A48D3E11BE830F3704C131A681F6139 (FieldInfo_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.Attribute::IsDefined(System.Reflection.MemberInfo,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Attribute_IsDefined_m2EB6141EC7A5855CB8FCAE554ED52458C5475B86 (MemberInfo_t* ___element0, Type_t* ___attributeType1, const RuntimeMethod* method) ;
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C (FieldInfo_t* __this, RuntimeObject* ___obj0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// Leopotam.Ecs.EcsFilter Leopotam.Ecs.EcsWorld::GetFilter(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* EcsWorld_GetFilter_m52CD6F02CE215E1CA1A2C041022F5EE4E4283A44 (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, Type_t* ___filterType0, bool ___createIfNotExists1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Leopotam.Ecs.IEcsWorldDebugListener>::.ctor(System.Int32)
inline void List_1__ctor_m7165B9E024FB6015CFDC1BD3EF5C059051D304B0 (List_1_tC7540F0D91B566D741FCE4333F4F18F8889FDFE3* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC7540F0D91B566D741FCE4333F4F18F8889FDFE3*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___capacity0, method);
}
// System.Void Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsEntity>::.ctor(System.Int32)
inline void EcsGrowList_1__ctor_m30D908245D0493D452F0EF6295F2CCEE86EE1A52_inline (EcsGrowList_1_t6BC5FF876D381A8F076800C4F4C84DC46575D129* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (EcsGrowList_1_t6BC5FF876D381A8F076800C4F4C84DC46575D129*, int32_t, const RuntimeMethod*))EcsGrowList_1__ctor_m30D908245D0493D452F0EF6295F2CCEE86EE1A52_gshared_inline)(__this, ___capacity0, method);
}
// System.Void Leopotam.Ecs.EcsGrowList`1<System.Int32>::.ctor(System.Int32)
inline void EcsGrowList_1__ctor_mBEFEB97AD463DE7EF4A901D4E6BD7C3920676203_inline (EcsGrowList_1_t05BE086951C7D264D8941FC753076684714DAAC3* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (EcsGrowList_1_t05BE086951C7D264D8941FC753076684714DAAC3*, int32_t, const RuntimeMethod*))EcsGrowList_1__ctor_mBEFEB97AD463DE7EF4A901D4E6BD7C3920676203_gshared_inline)(__this, ___capacity0, method);
}
// System.Void Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter>::.ctor(System.Int32)
inline void EcsGrowList_1__ctor_m8CBC958C10AFE368670AFA75A52BDC09EAA40472_inline (EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B*, int32_t, const RuntimeMethod*))EcsGrowList_1__ctor_mE59E17E9B5DAD41A34225F68D4BD276D19332902_gshared_inline)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter>>::.ctor(System.Int32)
inline void Dictionary_2__ctor_m456EDDEE587F91E5D186EE848813C4CE1A380987 (Dictionary_2_t30B1449996464D018C2DF1046C38BE7B569157F4* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t30B1449996464D018C2DF1046C38BE7B569157F4*, int32_t, const RuntimeMethod*))Dictionary_2__ctor_m2E996E8E97DFC188B4E8854C11A9C82B16EDD2CE_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<Leopotam.Ecs.IEcsWorldDebugListener>::Add(T)
inline void List_1_Add_m77111D4FD63811CF5FCDE1537EE44E2710B39AF3_inline (List_1_tC7540F0D91B566D741FCE4333F4F18F8889FDFE3* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC7540F0D91B566D741FCE4333F4F18F8889FDFE3*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<Leopotam.Ecs.IEcsWorldDebugListener>::Remove(T)
inline bool List_1_Remove_m9C7C97CB64A6A4D61A013B1368A33E92F362866A (List_1_tC7540F0D91B566D741FCE4333F4F18F8889FDFE3* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tC7540F0D91B566D741FCE4333F4F18F8889FDFE3*, RuntimeObject*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void System.Array::Resize<Leopotam.Ecs.EcsWorld/EcsEntityData>(T[]&,System.Int32)
inline void Array_Resize_TisEcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D_m0EF6D9B9A664FE94FC75B2B1CD78A846F1A61B63 (EcsEntityDataU5BU5D_t526CEB257B536F3BC51E7F01A338728794063469** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (EcsEntityDataU5BU5D_t526CEB257B536F3BC51E7F01A338728794063469**, int32_t, const RuntimeMethod*))Array_Resize_TisEcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D_m0EF6D9B9A664FE94FC75B2B1CD78A846F1A61B63_gshared)(___array0, ___newSize1, method);
}
// System.Void Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsEntity>::Add(T)
inline void EcsGrowList_1_Add_mB34B99A8A330CB3FC27634B68EA9A59A1DB729AC_inline (EcsGrowList_1_t6BC5FF876D381A8F076800C4F4C84DC46575D129* __this, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E ___item0, const RuntimeMethod* method)
{
	((  void (*) (EcsGrowList_1_t6BC5FF876D381A8F076800C4F4C84DC46575D129*, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E, const RuntimeMethod*))EcsGrowList_1_Add_mB34B99A8A330CB3FC27634B68EA9A59A1DB729AC_gshared_inline)(__this, ___item0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Leopotam.Ecs.IEcsWorldDebugListener>::GetEnumerator()
inline Enumerator_t22FF5D0DE3C75401D4D69F6613F2D690B7B96DF5 List_1_GetEnumerator_m7E1DCE1BA21C909F54440BFBD207B20711E45008 (List_1_tC7540F0D91B566D741FCE4333F4F18F8889FDFE3* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t22FF5D0DE3C75401D4D69F6613F2D690B7B96DF5 (*) (List_1_tC7540F0D91B566D741FCE4333F4F18F8889FDFE3*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Leopotam.Ecs.IEcsWorldDebugListener>::Dispose()
inline void Enumerator_Dispose_m153C479DE1E49B926CC87C8355FEA2E34F5C7E93 (Enumerator_t22FF5D0DE3C75401D4D69F6613F2D690B7B96DF5* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t22FF5D0DE3C75401D4D69F6613F2D690B7B96DF5*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Leopotam.Ecs.IEcsWorldDebugListener>::get_Current()
inline RuntimeObject* Enumerator_get_Current_mC044E9E00E380CF1C3A2B7E8683DAFC81C19897E_inline (Enumerator_t22FF5D0DE3C75401D4D69F6613F2D690B7B96DF5* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t22FF5D0DE3C75401D4D69F6613F2D690B7B96DF5*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Leopotam.Ecs.IEcsWorldDebugListener>::MoveNext()
inline bool Enumerator_MoveNext_m452929CF39739875E8D0E99D3835FB1E6854195C (Enumerator_t22FF5D0DE3C75401D4D69F6613F2D690B7B96DF5* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t22FF5D0DE3C75401D4D69F6613F2D690B7B96DF5*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// System.Object System.Activator::CreateInstance(System.Type,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Activator_CreateInstance_m0DFAA1415ABA9B28430FDC70A9915BE437C04B04 (Type_t* ___type0, int32_t ___bindingAttr1, Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___binder2, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args3, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___culture4, const RuntimeMethod* method) ;
// System.Boolean Leopotam.Ecs.EcsFilter::AreComponentsSame(Leopotam.Ecs.EcsFilter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsFilter_AreComponentsSame_mE4B2D3FDE457C24EABB6C49DBA30E922678B3663 (EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* __this, EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* ___filter0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter>::Add(T)
inline void EcsGrowList_1_Add_m47584E78B83F59D13EC3B7812C75F97A5062E5D5_inline (EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* __this, EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* ___item0, const RuntimeMethod* method)
{
	((  void (*) (EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B*, EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC*, const RuntimeMethod*))EcsGrowList_1_Add_m210AFA3DF2F152B6A7B848331A7396B35C6ADF3F_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter>>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m48F4681691A2A706881C69C2FB59A4CFD58EB7AB (Dictionary_2_t30B1449996464D018C2DF1046C38BE7B569157F4* __this, int32_t ___key0, EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t30B1449996464D018C2DF1046C38BE7B569157F4*, int32_t, EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B**, const RuntimeMethod*))Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter>>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m075857BE5F7ED4C4E3D32A575D6787367BEE256D (Dictionary_2_t30B1449996464D018C2DF1046C38BE7B569157F4* __this, int32_t ___key0, EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t30B1449996464D018C2DF1046C38BE7B569157F4*, int32_t, EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B*, const RuntimeMethod*))Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean Leopotam.Ecs.EcsFilter::IsCompatible(Leopotam.Ecs.EcsWorld/EcsEntityData&,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EcsFilter_IsCompatible_m908B473016F3D41FC338BDC440381396E28ECAA2_inline (EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* __this, EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* ___entityData0, int32_t ___addedRemovedTypeIndex1, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsGrowList`1<System.Int32>::Add(T)
inline void EcsGrowList_1_Add_m19887B8370A2040D1E9C14B4FA889A5A8BF8C199_inline (EcsGrowList_1_t05BE086951C7D264D8941FC753076684714DAAC3* __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (EcsGrowList_1_t05BE086951C7D264D8941FC753076684714DAAC3*, int32_t, const RuntimeMethod*))EcsGrowList_1_Add_m19887B8370A2040D1E9C14B4FA889A5A8BF8C199_gshared_inline)(__this, ___item0, method);
}
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> Leopotam.Ecs.EcsFilter::GetInternalEntitiesMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* EcsFilter_GetInternalEntitiesMap_mDF9685AB884F4391DA63B84BFADB282C965153F5 (EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* __this, const RuntimeMethod* method) ;
// System.Int32 Leopotam.Ecs.EcsEntityExtensions::GetInternalId(Leopotam.Ecs.EcsEntity&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EcsEntityExtensions_GetInternalId_mDF05CA62470626A1B47E8E3934D0CFC6432BBA09_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) ;
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
// Unity.IL2CPP.CompilerServices.Option Unity.IL2CPP.CompilerServices.Il2CppSetOptionAttribute::get_Option()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Il2CppSetOptionAttribute_get_Option_m3D029EB0E19145D2EAB03AC130BFDB44A2CCEF2D (Il2CppSetOptionAttribute_tDECA43B02B571750B0BBB5936F9A9C43D0B95E56* __this, const RuntimeMethod* method) 
{
	{
		// public Option Option { get; private set; }
		int32_t L_0 = __this->___U3COptionU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Unity.IL2CPP.CompilerServices.Il2CppSetOptionAttribute::set_Option(Unity.IL2CPP.CompilerServices.Option)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Il2CppSetOptionAttribute_set_Option_m8700BB2365861BAA58378A7475EA399B0332B6D4 (Il2CppSetOptionAttribute_tDECA43B02B571750B0BBB5936F9A9C43D0B95E56* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public Option Option { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3COptionU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Object Unity.IL2CPP.CompilerServices.Il2CppSetOptionAttribute::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Il2CppSetOptionAttribute_get_Value_m023375C33638B45A22FA9859153924B453F1BDD2 (Il2CppSetOptionAttribute_tDECA43B02B571750B0BBB5936F9A9C43D0B95E56* __this, const RuntimeMethod* method) 
{
	{
		// public object Value { get; private set; }
		RuntimeObject* L_0 = __this->___U3CValueU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Unity.IL2CPP.CompilerServices.Il2CppSetOptionAttribute::set_Value(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Il2CppSetOptionAttribute_set_Value_mB869FDE2C07DD58952DC730E0ECB413D63AC5E78 (Il2CppSetOptionAttribute_tDECA43B02B571750B0BBB5936F9A9C43D0B95E56* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public object Value { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CValueU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CValueU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void Unity.IL2CPP.CompilerServices.Il2CppSetOptionAttribute::.ctor(Unity.IL2CPP.CompilerServices.Option,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Il2CppSetOptionAttribute__ctor_m9E6E1BE504326E217113A2F99590C2C113488460 (Il2CppSetOptionAttribute_tDECA43B02B571750B0BBB5936F9A9C43D0B95E56* __this, int32_t ___option0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		// public Il2CppSetOptionAttribute (Option option, object value) { Option = option; Value = value; }
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// public Il2CppSetOptionAttribute (Option option, object value) { Option = option; Value = value; }
		int32_t L_0 = ___option0;
		Il2CppSetOptionAttribute_set_Option_m8700BB2365861BAA58378A7475EA399B0332B6D4_inline(__this, L_0, NULL);
		// public Il2CppSetOptionAttribute (Option option, object value) { Option = option; Value = value; }
		RuntimeObject* L_1 = ___value1;
		Il2CppSetOptionAttribute_set_Value_mB869FDE2C07DD58952DC730E0ECB413D63AC5E78_inline(__this, L_1, NULL);
		// public Il2CppSetOptionAttribute (Option option, object value) { Option = option; Value = value; }
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
// System.Void Leopotam.Ecs.EcsIgnoreInjectAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsIgnoreInjectAttribute__ctor_mE4442344E307563D400A3D263D65A9CC9461AC1F (EcsIgnoreInjectAttribute_t5C2E58E9FA2D3E282E15334B5523F49E97851448* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void Leopotam.Ecs.EcsComponentPool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsComponentPool__ctor_mED311A6468F5089EE4C97E5EBCE1FE132AA0E038 (EcsComponentPool_t2F85D730BCB26AD8062C352D30B8AF4218A0FF8F* __this, const RuntimeMethod* method) 
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Leopotam.Ecs.EcsEntity
IL2CPP_EXTERN_C void EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_marshal_pinvoke(const EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E& unmarshaled, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Owner_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Owner' of type 'EcsEntity': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Owner_2Exception, NULL);
}
IL2CPP_EXTERN_C void EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_marshal_pinvoke_back(const EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_marshaled_pinvoke& marshaled, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E& unmarshaled)
{
	Exception_t* ___Owner_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Owner' of type 'EcsEntity': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Owner_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: Leopotam.Ecs.EcsEntity
IL2CPP_EXTERN_C void EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_marshal_pinvoke_cleanup(EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Leopotam.Ecs.EcsEntity
IL2CPP_EXTERN_C void EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_marshal_com(const EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E& unmarshaled, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_marshaled_com& marshaled)
{
	Exception_t* ___Owner_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Owner' of type 'EcsEntity': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Owner_2Exception, NULL);
}
IL2CPP_EXTERN_C void EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_marshal_com_back(const EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_marshaled_com& marshaled, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E& unmarshaled)
{
	Exception_t* ___Owner_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Owner' of type 'EcsEntity': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Owner_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: Leopotam.Ecs.EcsEntity
IL2CPP_EXTERN_C void EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_marshal_com_cleanup(EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_marshaled_com& marshaled)
{
}
// System.Object[] Leopotam.Ecs.EcsEntity::get_Components()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* EcsEntity_get_Components_m69ABDBAA27802F73FE2259CA17FE3350C9AF0B97 (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* __this, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	bool V_1 = false;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_2 = NULL;
	{
		// object[] list = null;
		V_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL;
		// if (this.IsAlive ()) {
		bool L_0;
		L_0 = EcsEntityExtensions_IsAlive_mA54004DC20E6E7ACE79BC206D69697BEBACE03C3_inline(__this, NULL);
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// this.GetComponentValues (ref list);
		int32_t L_2;
		L_2 = EcsEntityExtensions_GetComponentValues_m352A4AE8A6409CDFED34583F79DAA3B6AF09191C(__this, (&V_0), NULL);
	}

IL_0018:
	{
		// return list;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		V_2 = L_3;
		goto IL_001c;
	}

IL_001c:
	{
		// }
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_2;
		return L_4;
	}
}
IL2CPP_EXTERN_C  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* EcsEntity_get_Components_m69ABDBAA27802F73FE2259CA17FE3350C9AF0B97_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E*>(__this + _offset);
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* _returnValue;
	_returnValue = EcsEntity_get_Components_m69ABDBAA27802F73FE2259CA17FE3350C9AF0B97(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Leopotam.Ecs.EcsEntity::op_Equality(Leopotam.Ecs.EcsEntity&,Leopotam.Ecs.EcsEntity&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsEntity_op_Equality_m8DB5E86FB6007F40FD23D26CB0B1A4DA0007E7E3 (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___lhs0, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// return lhs.Id == rhs.Id && lhs.Gen == rhs.Gen;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_0 = ___lhs0;
		int32_t L_1 = L_0->___Id_0;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_2 = ___rhs1;
		int32_t L_3 = L_2->___Id_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_001f;
		}
	}
	{
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_4 = ___lhs0;
		uint16_t L_5 = L_4->___Gen_1;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_6 = ___rhs1;
		uint16_t L_7 = L_6->___Gen_1;
		G_B3_0 = ((((int32_t)L_5) == ((int32_t)L_7))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0023;
	}

IL_0023:
	{
		// }
		bool L_8 = V_0;
		return L_8;
	}
}
// System.Boolean Leopotam.Ecs.EcsEntity::op_Inequality(Leopotam.Ecs.EcsEntity&,Leopotam.Ecs.EcsEntity&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsEntity_op_Inequality_mBBFD4286A8B1A27A68BAAE5DC8B3DC6BB6684B5C (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___lhs0, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// return lhs.Id != rhs.Id || lhs.Gen != rhs.Gen;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_0 = ___lhs0;
		int32_t L_1 = L_0->___Id_0;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_2 = ___rhs1;
		int32_t L_3 = L_2->___Id_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0022;
		}
	}
	{
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_4 = ___lhs0;
		uint16_t L_5 = L_4->___Gen_1;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_6 = ___rhs1;
		uint16_t L_7 = L_6->___Gen_1;
		G_B3_0 = ((((int32_t)((((int32_t)L_5) == ((int32_t)L_7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = 1;
	}

IL_0023:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0026;
	}

IL_0026:
	{
		// }
		bool L_8 = V_0;
		return L_8;
	}
}
// System.Int32 Leopotam.Ecs.EcsEntity::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EcsEntity_GetHashCode_m833E737089406173FC610597E3A93BF8C34F302D (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	{
		// var hashCode = (Id * 397) ^ Gen.GetHashCode ();
		int32_t L_0 = __this->___Id_0;
		uint16_t* L_1 = (&__this->___Gen_1);
		int32_t L_2;
		L_2 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_1, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)397)))^L_2));
		// hashCode = (hashCode * 397) ^ (Owner != null ? Owner.GetHashCode () : 0);
		int32_t L_3 = V_0;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_4 = __this->___Owner_2;
		G_B1_0 = ((int32_t)il2cpp_codegen_multiply(L_3, ((int32_t)397)));
		if (L_4)
		{
			G_B2_0 = ((int32_t)il2cpp_codegen_multiply(L_3, ((int32_t)397)));
			goto IL_002d;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0038;
	}

IL_002d:
	{
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_5 = __this->___Owner_2;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_5);
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B3_1^G_B3_0));
		// return hashCode;
		int32_t L_7 = V_0;
		V_1 = L_7;
		goto IL_003e;
	}

IL_003e:
	{
		// }
		int32_t L_8 = V_1;
		return L_8;
	}
}
IL2CPP_EXTERN_C  int32_t EcsEntity_GetHashCode_m833E737089406173FC610597E3A93BF8C34F302D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = EcsEntity_GetHashCode_m833E737089406173FC610597E3A93BF8C34F302D_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Leopotam.Ecs.EcsEntity::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsEntity_Equals_mEEBE85D5F0849E2944B0DDC54151EB9F46055702 (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* __this, RuntimeObject* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// return other is EcsEntity otherEntity && Equals (otherEntity);
		RuntimeObject* L_0 = ___other0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_il2cpp_TypeInfo_var)))
		{
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_1 = ___other0;
		V_0 = ((*(EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E*)((EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E*)(EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E*)UnBox(L_1, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_il2cpp_TypeInfo_var))));
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_2 = V_0;
		bool L_3;
		L_3 = EcsEntity_Equals_m813ABFB67E22C48C0F57BF1AD656E48F8C6BA652(__this, L_2, NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 0;
	}

IL_001a:
	{
		V_1 = (bool)G_B3_0;
		goto IL_001d;
	}

IL_001d:
	{
		// }
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool EcsEntity_Equals_mEEBE85D5F0849E2944B0DDC54151EB9F46055702_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___other0, const RuntimeMethod* method)
{
	EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E*>(__this + _offset);
	bool _returnValue;
	_returnValue = EcsEntity_Equals_mEEBE85D5F0849E2944B0DDC54151EB9F46055702_inline(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.String Leopotam.Ecs.EcsEntity::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EcsEntity_ToString_m8D2A9A232ADBFA045F4924132123D281CF1E2D6E (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral149412EF5DD4FABC7521825E523B524E1EB45E71);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46E688EE9CEA12647607134D9F4CFBDE2F065AF2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFD0582341B5BB3B305762DA13B0072CAE573CFB);
		s_Il2CppMethodInitialized = true;
	}
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_0 = NULL;
	StringBuilder_t* V_1 = NULL;
	bool V_2 = false;
	String_t* V_3 = NULL;
	bool V_4 = false;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_5 = NULL;
	int32_t V_6 = 0;
	Type_t* V_7 = NULL;
	bool V_8 = false;
	{
		// if (this.IsNull ()) { return "Entity-Null"; }
		bool L_0;
		L_0 = EcsEntityExtensions_IsNull_m6484A3968191361BCE21B21E90B53CBD5BADC1B7_inline(__this, NULL);
		V_2 = L_0;
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// if (this.IsNull ()) { return "Entity-Null"; }
		V_3 = _stringLiteral149412EF5DD4FABC7521825E523B524E1EB45E71;
		goto IL_00b7;
	}

IL_0017:
	{
		// if (!this.IsAlive ()) { return "Entity-NonAlive"; }
		bool L_2;
		L_2 = EcsEntityExtensions_IsAlive_mA54004DC20E6E7ACE79BC206D69697BEBACE03C3_inline(__this, NULL);
		V_4 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_4;
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		// if (!this.IsAlive ()) { return "Entity-NonAlive"; }
		V_3 = _stringLiteralEFD0582341B5BB3B305762DA13B0072CAE573CFB;
		goto IL_00b7;
	}

IL_0032:
	{
		// Type[] types = null;
		V_0 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)NULL;
		// this.GetComponentTypes (ref types);
		int32_t L_4;
		L_4 = EcsEntityExtensions_GetComponentTypes_m30DBF5C68EA43C12ACE8A54D3041FFC590B2E90D(__this, (&V_0), NULL);
		// var sb = new System.Text.StringBuilder (512);
		StringBuilder_t* L_5 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(L_5, ((int32_t)512), NULL);
		V_1 = L_5;
		// foreach (var type in types) {
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_6 = V_0;
		V_5 = L_6;
		V_6 = 0;
		goto IL_008b;
	}

IL_0051:
	{
		// foreach (var type in types) {
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_7 = V_5;
		int32_t L_8 = V_6;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Type_t* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_7 = L_10;
		// if (sb.Length > 0) { sb.Append (","); }
		StringBuilder_t* L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_11, NULL);
		V_8 = (bool)((((int32_t)L_12) > ((int32_t)0))? 1 : 0);
		bool L_13 = V_8;
		if (!L_13)
		{
			goto IL_0076;
		}
	}
	{
		// if (sb.Length > 0) { sb.Append (","); }
		StringBuilder_t* L_14 = V_1;
		NullCheck(L_14);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_14, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, NULL);
	}

IL_0076:
	{
		// sb.Append (type.Name);
		StringBuilder_t* L_16 = V_1;
		Type_t* L_17 = V_7;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_17);
		NullCheck(L_16);
		StringBuilder_t* L_19;
		L_19 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_16, L_18, NULL);
		int32_t L_20 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_008b:
	{
		// foreach (var type in types) {
		int32_t L_21 = V_6;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_22 = V_5;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_0051;
		}
	}
	{
		// return $"Entity-{Id}:{Gen} [{sb}]";
		int32_t L_23 = __this->___Id_0;
		int32_t L_24 = L_23;
		RuntimeObject* L_25 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_24);
		uint16_t L_26 = __this->___Gen_1;
		uint16_t L_27 = L_26;
		RuntimeObject* L_28 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_27);
		StringBuilder_t* L_29 = V_1;
		String_t* L_30;
		L_30 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral46E688EE9CEA12647607134D9F4CFBDE2F065AF2, L_25, L_28, L_29, NULL);
		V_3 = L_30;
		goto IL_00b7;
	}

IL_00b7:
	{
		// }
		String_t* L_31 = V_3;
		return L_31;
	}
}
IL2CPP_EXTERN_C  String_t* EcsEntity_ToString_m8D2A9A232ADBFA045F4924132123D281CF1E2D6E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = EcsEntity_ToString_m8D2A9A232ADBFA045F4924132123D281CF1E2D6E(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Leopotam.Ecs.EcsEntity::Equals(Leopotam.Ecs.EcsEntity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsEntity_Equals_m813ABFB67E22C48C0F57BF1AD656E48F8C6BA652 (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* __this, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E ___other0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		// return Id == other.Id && Gen == other.Gen && Owner == other.Owner;
		int32_t L_0 = __this->___Id_0;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_1 = ___other0;
		int32_t L_2 = L_1.___Id_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_002d;
		}
	}
	{
		uint16_t L_3 = __this->___Gen_1;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_4 = ___other0;
		uint16_t L_5 = L_4.___Gen_1;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_5))))
		{
			goto IL_002d;
		}
	}
	{
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_6 = __this->___Owner_2;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_7 = ___other0;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_8 = L_7.___Owner_2;
		G_B4_0 = ((((RuntimeObject*)(EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090*)L_6) == ((RuntimeObject*)(EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090*)L_8))? 1 : 0);
		goto IL_002e;
	}

IL_002d:
	{
		G_B4_0 = 0;
	}

IL_002e:
	{
		V_0 = (bool)G_B4_0;
		goto IL_0031;
	}

IL_0031:
	{
		// }
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C  bool EcsEntity_Equals_m813ABFB67E22C48C0F57BF1AD656E48F8C6BA652_AdjustorThunk (RuntimeObject* __this, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E ___other0, const RuntimeMethod* method)
{
	EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E*>(__this + _offset);
	bool _returnValue;
	_returnValue = EcsEntity_Equals_m813ABFB67E22C48C0F57BF1AD656E48F8C6BA652(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Void Leopotam.Ecs.EcsEntity::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsEntity__cctor_mBA19EFBCD49CBE0800B1BB88898D604B63F11DD8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly EcsEntity Null = new EcsEntity ();
		il2cpp_codegen_initobj((&((EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_StaticFields*)il2cpp_codegen_static_fields_for(EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_il2cpp_TypeInfo_var))->___Null_3), sizeof(EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E));
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
// Leopotam.Ecs.EcsEntity Leopotam.Ecs.EcsEntityExtensions::Copy(Leopotam.Ecs.EcsEntity&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E EcsEntityExtensions_Copy_m1A65073E7637822646091CF0F6164294DC5C4BDA (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsComponentPool_t9FB24E470344947394FBDF6CA1F7221CEB0F7F44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsWorldDebugListener_t60C684525E14FB8F0C6F9310FF04E25BEB3FD717_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mBB3BC3E7006C4F216B9184956D745320C58C0E95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21961D4F8434746893C9CE71A0A1BD6322E7EA9F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* V_0 = NULL;
	EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* V_1 = NULL;
	EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E V_2;
	memset((&V_2), 0, sizeof(V_2));
	EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	RuntimeObject* V_10 = NULL;
	int32_t V_11 = 0;
	bool V_12 = false;
	int32_t V_13 = 0;
	bool V_14 = false;
	EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E V_15;
	memset((&V_15), 0, sizeof(V_15));
	{
		// var owner = entity.Owner;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_0 = ___entity0;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_1 = L_0->___Owner_2;
		V_0 = L_1;
		// if (owner == null) { throw new Exception ("Cant copy invalid entity."); }
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_2 = V_0;
		V_4 = (bool)((((RuntimeObject*)(EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_3 = V_4;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// if (owner == null) { throw new Exception ("Cant copy invalid entity."); }
		Exception_t* L_4 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral432B630D178FA64EAD79FE90B66545CC0E025765)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsEntityExtensions_Copy_m1A65073E7637822646091CF0F6164294DC5C4BDA_RuntimeMethod_var)));
	}

IL_001e:
	{
		// ref var srcData = ref owner.GetEntityData (entity);
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_5 = V_0;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_6 = ___entity0;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_7;
		L_7 = EcsWorld_GetEntityData_m279427A5EDB9357D58A2EABDCA4D5FDBFDFE5670_inline(L_5, L_6, NULL);
		V_1 = L_7;
		// if (srcData.Gen != entity.Gen) { throw new Exception ("Cant copy destroyed entity."); }
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_8 = V_1;
		uint16_t L_9 = L_8->___Gen_0;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_10 = ___entity0;
		uint16_t L_11 = L_10->___Gen_1;
		V_5 = (bool)((((int32_t)((((int32_t)L_9) == ((int32_t)L_11))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_0049;
		}
	}
	{
		// if (srcData.Gen != entity.Gen) { throw new Exception ("Cant copy destroyed entity."); }
		Exception_t* L_13 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral457FC7B96A28919D20AEDC09CA3CDC4CC21B0D13)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsEntityExtensions_Copy_m1A65073E7637822646091CF0F6164294DC5C4BDA_RuntimeMethod_var)));
	}

IL_0049:
	{
		// var dstEntity = owner.NewEntity ();
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_14 = V_0;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_15;
		L_15 = EcsWorld_NewEntity_m828FEED297F5F42E2F36D2093B694FECE4253EAD_inline(L_14, NULL);
		V_2 = L_15;
		// ref var dstData = ref owner.GetEntityData (dstEntity);
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_16 = V_0;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_17;
		L_17 = EcsWorld_GetEntityData_m279427A5EDB9357D58A2EABDCA4D5FDBFDFE5670_inline(L_16, (&V_2), NULL);
		V_3 = L_17;
		// if (dstData.Components.Length < srcData.ComponentsCountX2) {
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_18 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = L_18->___Components_2;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_20 = V_1;
		int16_t L_21 = L_20->___ComponentsCountX2_1;
		V_6 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))) < ((int32_t)L_21))? 1 : 0);
		bool L_22 = V_6;
		if (!L_22)
		{
			goto IL_0084;
		}
	}
	{
		// dstData.Components = new int[srcData.Components.Length];
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_23 = V_3;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_24 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = L_24->___Components_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)));
		L_23->___Components_2 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&L_23->___Components_2), (void*)L_26);
	}

IL_0084:
	{
		// dstData.ComponentsCountX2 = 0;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_27 = V_3;
		L_27->___ComponentsCountX2_1 = (int16_t)0;
		// for (int i = 0, iiMax = srcData.ComponentsCountX2; i < iiMax; i += 2) {
		V_7 = 0;
		// for (int i = 0, iiMax = srcData.ComponentsCountX2; i < iiMax; i += 2) {
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_28 = V_1;
		int16_t L_29 = L_28->___ComponentsCountX2_1;
		V_8 = L_29;
		goto IL_0104;
	}

IL_0098:
	{
		// var typeIdx = srcData.Components[i];
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_30 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = L_30->___Components_2;
		int32_t L_32 = V_7;
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		V_9 = L_34;
		// var pool = owner.ComponentPools[typeIdx];
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_35 = V_0;
		IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39* L_36 = L_35->___ComponentPools_9;
		int32_t L_37 = V_9;
		int32_t L_38 = L_37;
		RuntimeObject* L_39 = (L_36)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_38));
		V_10 = L_39;
		// var dstItemIdx = pool.New ();
		RuntimeObject* L_40 = V_10;
		int32_t L_41;
		L_41 = InterfaceFuncInvoker0< int32_t >::Invoke(3 /* System.Int32 Leopotam.Ecs.IEcsComponentPool::New() */, IEcsComponentPool_t9FB24E470344947394FBDF6CA1F7221CEB0F7F44_il2cpp_TypeInfo_var, L_40);
		V_11 = L_41;
		// dstData.Components[i] = typeIdx;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_42 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = L_42->___Components_2;
		int32_t L_44 = V_7;
		int32_t L_45 = V_9;
		(L_43)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_44), (int32_t)L_45);
		// dstData.Components[i + 1] = dstItemIdx;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_46 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_47 = L_46->___Components_2;
		int32_t L_48 = V_7;
		int32_t L_49 = V_11;
		(L_47)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_48, 1))), (int32_t)L_49);
		// pool.CopyData (srcData.Components[i + 1], dstItemIdx);
		RuntimeObject* L_50 = V_10;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_51 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_52 = L_51->___Components_2;
		int32_t L_53 = V_7;
		int32_t L_54 = ((int32_t)il2cpp_codegen_add(L_53, 1));
		int32_t L_55 = (L_52)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_54));
		int32_t L_56 = V_11;
		InterfaceActionInvoker2< int32_t, int32_t >::Invoke(4 /* System.Void Leopotam.Ecs.IEcsComponentPool::CopyData(System.Int32,System.Int32) */, IEcsComponentPool_t9FB24E470344947394FBDF6CA1F7221CEB0F7F44_il2cpp_TypeInfo_var, L_50, L_55, L_56);
		// dstData.ComponentsCountX2 += 2;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_57 = V_3;
		int16_t* L_58 = (&L_57->___ComponentsCountX2_1);
		int16_t* L_59 = L_58;
		int32_t L_60 = *((int16_t*)L_59);
		*((int16_t*)L_59) = (int16_t)((int16_t)((int32_t)il2cpp_codegen_add(L_60, 2)));
		// owner.UpdateFilters (typeIdx, dstEntity, dstData);
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_61 = V_0;
		int32_t L_62 = V_9;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_63 = V_3;
		EcsWorld_UpdateFilters_mC5F1D16AB93D10EFCBCCEB9CA9982BB888A7928F_inline(L_61, L_62, (&V_2), L_63, NULL);
		// for (int i = 0, iiMax = srcData.ComponentsCountX2; i < iiMax; i += 2) {
		int32_t L_64 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_64, 2));
	}

IL_0104:
	{
		// for (int i = 0, iiMax = srcData.ComponentsCountX2; i < iiMax; i += 2) {
		int32_t L_65 = V_7;
		int32_t L_66 = V_8;
		V_12 = (bool)((((int32_t)L_65) < ((int32_t)L_66))? 1 : 0);
		bool L_67 = V_12;
		if (L_67)
		{
			goto IL_0098;
		}
	}
	{
		// for (var ii = 0; ii < owner.DebugListeners.Count; ii++) {
		V_13 = 0;
		goto IL_0136;
	}

IL_0115:
	{
		// owner.DebugListeners[ii].OnComponentListChanged (entity);
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_68 = V_0;
		List_1_tC7540F0D91B566D741FCE4333F4F18F8889FDFE3* L_69 = L_68->___DebugListeners_11;
		int32_t L_70 = V_13;
		RuntimeObject* L_71;
		L_71 = List_1_get_Item_m21961D4F8434746893C9CE71A0A1BD6322E7EA9F(L_69, L_70, List_1_get_Item_m21961D4F8434746893C9CE71A0A1BD6322E7EA9F_RuntimeMethod_var);
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_72 = ___entity0;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_73 = (*(EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E*)L_72);
		InterfaceActionInvoker1< EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E >::Invoke(3 /* System.Void Leopotam.Ecs.IEcsWorldDebugListener::OnComponentListChanged(Leopotam.Ecs.EcsEntity) */, IEcsWorldDebugListener_t60C684525E14FB8F0C6F9310FF04E25BEB3FD717_il2cpp_TypeInfo_var, L_71, L_73);
		// for (var ii = 0; ii < owner.DebugListeners.Count; ii++) {
		int32_t L_74 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_74, 1));
	}

IL_0136:
	{
		// for (var ii = 0; ii < owner.DebugListeners.Count; ii++) {
		int32_t L_75 = V_13;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_76 = V_0;
		List_1_tC7540F0D91B566D741FCE4333F4F18F8889FDFE3* L_77 = L_76->___DebugListeners_11;
		int32_t L_78;
		L_78 = List_1_get_Count_mBB3BC3E7006C4F216B9184956D745320C58C0E95_inline(L_77, List_1_get_Count_mBB3BC3E7006C4F216B9184956D745320C58C0E95_RuntimeMethod_var);
		V_14 = (bool)((((int32_t)L_75) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_14;
		if (L_79)
		{
			goto IL_0115;
		}
	}
	{
		// return dstEntity;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_80 = V_2;
		V_15 = L_80;
		goto IL_0150;
	}

IL_0150:
	{
		// }
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_81 = V_15;
		return L_81;
	}
}
// System.Void Leopotam.Ecs.EcsEntityExtensions::MoveTo(Leopotam.Ecs.EcsEntity&,Leopotam.Ecs.EcsEntity&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsEntityExtensions_MoveTo_mFF351B56465BDCCF3207403E703740310316F7A7 (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___source0, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___target1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6BAA7BD6F22421B894347B1476C37052FAC6C916_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsComponentPool_t9FB24E470344947394FBDF6CA1F7221CEB0F7F44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsWorldDebugListener_t60C684525E14FB8F0C6F9310FF04E25BEB3FD717_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mBB3BC3E7006C4F216B9184956D745320C58C0E95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21961D4F8434746893C9CE71A0A1BD6322E7EA9F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* V_1 = NULL;
	EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* V_2 = NULL;
	EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	RuntimeObject* V_12 = NULL;
	int32_t V_13 = 0;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	int32_t V_17 = 0;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	int32_t V_21 = 0;
	bool V_22 = false;
	{
		// if (!source.IsAlive ()) { throw new Exception ("Cant move from invalid entity."); }
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_0 = ___source0;
		bool L_1;
		L_1 = EcsEntityExtensions_IsAlive_mA54004DC20E6E7ACE79BC206D69697BEBACE03C3_inline(L_0, NULL);
		V_4 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_4;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// if (!source.IsAlive ()) { throw new Exception ("Cant move from invalid entity."); }
		Exception_t* L_3 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCEF755D2E5400B69B5641D660ED14A00DA630865)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsEntityExtensions_MoveTo_mFF351B56465BDCCF3207403E703740310316F7A7_RuntimeMethod_var)));
	}

IL_001c:
	{
		// if (!target.IsAlive ()) { throw new Exception ("Cant move to invalid entity."); }
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_4 = ___target1;
		bool L_5;
		L_5 = EcsEntityExtensions_IsAlive_mA54004DC20E6E7ACE79BC206D69697BEBACE03C3_inline(L_4, NULL);
		V_5 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_5;
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		// if (!target.IsAlive ()) { throw new Exception ("Cant move to invalid entity."); }
		Exception_t* L_7 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3A6FDF288A824FB48440B5D0C92A42043315A3AD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsEntityExtensions_MoveTo_mFF351B56465BDCCF3207403E703740310316F7A7_RuntimeMethod_var)));
	}

IL_0037:
	{
		// if (source.Owner != target.Owner) { throw new Exception ("Cant move data between worlds."); }
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_8 = ___source0;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_9 = L_8->___Owner_2;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_10 = ___target1;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_11 = L_10->___Owner_2;
		V_6 = (bool)((((int32_t)((((RuntimeObject*)(EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090*)L_9) == ((RuntimeObject*)(EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090*)L_11))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_6;
		if (!L_12)
		{
			goto IL_005a;
		}
	}
	{
		// if (source.Owner != target.Owner) { throw new Exception ("Cant move data between worlds."); }
		Exception_t* L_13 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA9A6DF0DA0A3492705FE14C392B46B40246A923F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsEntityExtensions_MoveTo_mFF351B56465BDCCF3207403E703740310316F7A7_RuntimeMethod_var)));
	}

IL_005a:
	{
		// if (source.AreEquals (target)) { throw new Exception ("Source and target entities are same."); }
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_14 = ___source0;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_15 = ___target1;
		bool L_16;
		L_16 = EcsEntityExtensions_AreEquals_m12E0A04AF4C515D2F92BB1F2D322C3B636627AAC_inline(L_14, L_15, NULL);
		V_7 = L_16;
		bool L_17 = V_7;
		if (!L_17)
		{
			goto IL_0073;
		}
	}
	{
		// if (source.AreEquals (target)) { throw new Exception ("Source and target entities are same."); }
		Exception_t* L_18 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF36C572D06C6253E318E68863ED100E5A2FBA478)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsEntityExtensions_MoveTo_mFF351B56465BDCCF3207403E703740310316F7A7_RuntimeMethod_var)));
	}

IL_0073:
	{
		// var componentsListChanged = false;
		V_0 = (bool)0;
		// var owner = source.Owner;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_19 = ___source0;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_20 = L_19->___Owner_2;
		V_1 = L_20;
		// ref var srcData = ref owner.GetEntityData (source);
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_21 = V_1;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_22 = ___source0;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_23;
		L_23 = EcsWorld_GetEntityData_m279427A5EDB9357D58A2EABDCA4D5FDBFDFE5670_inline(L_21, L_22, NULL);
		V_2 = L_23;
		// ref var dstData = ref owner.GetEntityData (target);
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_24 = V_1;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_25 = ___target1;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_26;
		L_26 = EcsWorld_GetEntityData_m279427A5EDB9357D58A2EABDCA4D5FDBFDFE5670_inline(L_24, L_25, NULL);
		V_3 = L_26;
		// if (dstData.Components.Length < srcData.ComponentsCountX2) {
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_27 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = L_27->___Components_2;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_29 = V_2;
		int16_t L_30 = L_29->___ComponentsCountX2_1;
		V_8 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length))) < ((int32_t)L_30))? 1 : 0);
		bool L_31 = V_8;
		if (!L_31)
		{
			goto IL_00b7;
		}
	}
	{
		// dstData.Components = new int[srcData.Components.Length];
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_32 = V_3;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_33 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = L_33->___Components_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_34)->max_length)));
		L_32->___Components_2 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&L_32->___Components_2), (void*)L_35);
	}

IL_00b7:
	{
		// for (int i = 0, iiMax = srcData.ComponentsCountX2; i < iiMax; i += 2) {
		V_9 = 0;
		// for (int i = 0, iiMax = srcData.ComponentsCountX2; i < iiMax; i += 2) {
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_36 = V_2;
		int16_t L_37 = L_36->___ComponentsCountX2_1;
		V_10 = L_37;
		goto IL_01d5;
	}

IL_00c7:
	{
		// var typeIdx = srcData.Components[i];
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_38 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = L_38->___Components_2;
		int32_t L_40 = V_9;
		int32_t L_41 = L_40;
		int32_t L_42 = (L_39)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_41));
		V_11 = L_42;
		// var pool = owner.ComponentPools[typeIdx];
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_43 = V_1;
		IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39* L_44 = L_43->___ComponentPools_9;
		int32_t L_45 = V_11;
		int32_t L_46 = L_45;
		RuntimeObject* L_47 = (L_44)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_46));
		V_12 = L_47;
		// var j = dstData.ComponentsCountX2 - 2;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_48 = V_3;
		int16_t L_49 = L_48->___ComponentsCountX2_1;
		V_13 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_49, 2));
		goto IL_0108;
	}

IL_00ea:
	{
		// if (dstData.Components[j] == typeIdx) { break; }
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_50 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_51 = L_50->___Components_2;
		int32_t L_52 = V_13;
		int32_t L_53 = L_52;
		int32_t L_54 = (L_51)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_53));
		int32_t L_55 = V_11;
		V_14 = (bool)((((int32_t)L_54) == ((int32_t)L_55))? 1 : 0);
		bool L_56 = V_14;
		if (!L_56)
		{
			goto IL_0101;
		}
	}
	{
		// if (dstData.Components[j] == typeIdx) { break; }
		goto IL_0116;
	}

IL_0101:
	{
		// for (; j >= 0; j -= 2) {
		int32_t L_57 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_subtract(L_57, 2));
	}

IL_0108:
	{
		// for (; j >= 0; j -= 2) {
		int32_t L_58 = V_13;
		V_15 = (bool)((((int32_t)((((int32_t)L_58) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_59 = V_15;
		if (L_59)
		{
			goto IL_00ea;
		}
	}

IL_0116:
	{
		// if (j >= 0) {
		int32_t L_60 = V_13;
		V_16 = (bool)((((int32_t)((((int32_t)L_60) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_61 = V_16;
		if (!L_61)
		{
			goto IL_0149;
		}
	}
	{
		// pool.CopyData (srcData.Components[i + 1], dstData.Components[j + 1]);
		RuntimeObject* L_62 = V_12;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_63 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_64 = L_63->___Components_2;
		int32_t L_65 = V_9;
		int32_t L_66 = ((int32_t)il2cpp_codegen_add(L_65, 1));
		int32_t L_67 = (L_64)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_66));
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_68 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_69 = L_68->___Components_2;
		int32_t L_70 = V_13;
		int32_t L_71 = ((int32_t)il2cpp_codegen_add(L_70, 1));
		int32_t L_72 = (L_69)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_71));
		InterfaceActionInvoker2< int32_t, int32_t >::Invoke(4 /* System.Void Leopotam.Ecs.IEcsComponentPool::CopyData(System.Int32,System.Int32) */, IEcsComponentPool_t9FB24E470344947394FBDF6CA1F7221CEB0F7F44_il2cpp_TypeInfo_var, L_62, L_67, L_72);
		goto IL_01ce;
	}

IL_0149:
	{
		// if (dstData.Components.Length == dstData.ComponentsCountX2) {
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_73 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_74 = L_73->___Components_2;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_75 = V_3;
		int16_t L_76 = L_75->___ComponentsCountX2_1;
		V_18 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length))) == ((int32_t)L_76))? 1 : 0);
		bool L_77 = V_18;
		if (!L_77)
		{
			goto IL_0176;
		}
	}
	{
		// Array.Resize (ref dstData.Components, dstData.ComponentsCountX2 << 1);
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_78 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_79 = (&L_78->___Components_2);
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_80 = V_3;
		int16_t L_81 = L_80->___ComponentsCountX2_1;
		Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6BAA7BD6F22421B894347B1476C37052FAC6C916(L_79, ((int32_t)((int32_t)L_81<<1)), Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6BAA7BD6F22421B894347B1476C37052FAC6C916_RuntimeMethod_var);
	}

IL_0176:
	{
		// dstData.Components[dstData.ComponentsCountX2] = typeIdx;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_82 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = L_82->___Components_2;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_84 = V_3;
		int16_t L_85 = L_84->___ComponentsCountX2_1;
		int32_t L_86 = V_11;
		(L_83)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_85), (int32_t)L_86);
		// var idx = pool.New ();
		RuntimeObject* L_87 = V_12;
		int32_t L_88;
		L_88 = InterfaceFuncInvoker0< int32_t >::Invoke(3 /* System.Int32 Leopotam.Ecs.IEcsComponentPool::New() */, IEcsComponentPool_t9FB24E470344947394FBDF6CA1F7221CEB0F7F44_il2cpp_TypeInfo_var, L_87);
		V_17 = L_88;
		// dstData.Components[dstData.ComponentsCountX2 + 1] = idx;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_89 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_90 = L_89->___Components_2;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_91 = V_3;
		int16_t L_92 = L_91->___ComponentsCountX2_1;
		int32_t L_93 = V_17;
		(L_90)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_92, 1))), (int32_t)L_93);
		// dstData.ComponentsCountX2 += 2;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_94 = V_3;
		int16_t* L_95 = (&L_94->___ComponentsCountX2_1);
		int16_t* L_96 = L_95;
		int32_t L_97 = *((int16_t*)L_96);
		*((int16_t*)L_96) = (int16_t)((int16_t)((int32_t)il2cpp_codegen_add(L_97, 2)));
		// pool.CopyData (srcData.Components[i + 1], idx);
		RuntimeObject* L_98 = V_12;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_99 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_100 = L_99->___Components_2;
		int32_t L_101 = V_9;
		int32_t L_102 = ((int32_t)il2cpp_codegen_add(L_101, 1));
		int32_t L_103 = (L_100)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_102));
		int32_t L_104 = V_17;
		InterfaceActionInvoker2< int32_t, int32_t >::Invoke(4 /* System.Void Leopotam.Ecs.IEcsComponentPool::CopyData(System.Int32,System.Int32) */, IEcsComponentPool_t9FB24E470344947394FBDF6CA1F7221CEB0F7F44_il2cpp_TypeInfo_var, L_98, L_103, L_104);
		// owner.UpdateFilters (typeIdx, target, dstData);
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_105 = V_1;
		int32_t L_106 = V_11;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_107 = ___target1;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_108 = V_3;
		EcsWorld_UpdateFilters_mC5F1D16AB93D10EFCBCCEB9CA9982BB888A7928F_inline(L_105, L_106, L_107, L_108, NULL);
		// componentsListChanged = true;
		V_0 = (bool)1;
	}

IL_01ce:
	{
		// for (int i = 0, iiMax = srcData.ComponentsCountX2; i < iiMax; i += 2) {
		int32_t L_109 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_109, 2));
	}

IL_01d5:
	{
		// for (int i = 0, iiMax = srcData.ComponentsCountX2; i < iiMax; i += 2) {
		int32_t L_110 = V_9;
		int32_t L_111 = V_10;
		V_19 = (bool)((((int32_t)L_110) < ((int32_t)L_111))? 1 : 0);
		bool L_112 = V_19;
		if (L_112)
		{
			goto IL_00c7;
		}
	}
	{
		// if (componentsListChanged) {
		bool L_113 = V_0;
		V_20 = L_113;
		bool L_114 = V_20;
		if (!L_114)
		{
			goto IL_0228;
		}
	}
	{
		// for (var ii = 0; ii < owner.DebugListeners.Count; ii++) {
		V_21 = 0;
		goto IL_0212;
	}

IL_01f1:
	{
		// owner.DebugListeners[ii].OnComponentListChanged (target);
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_115 = V_1;
		List_1_tC7540F0D91B566D741FCE4333F4F18F8889FDFE3* L_116 = L_115->___DebugListeners_11;
		int32_t L_117 = V_21;
		RuntimeObject* L_118;
		L_118 = List_1_get_Item_m21961D4F8434746893C9CE71A0A1BD6322E7EA9F(L_116, L_117, List_1_get_Item_m21961D4F8434746893C9CE71A0A1BD6322E7EA9F_RuntimeMethod_var);
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_119 = ___target1;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_120 = (*(EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E*)L_119);
		InterfaceActionInvoker1< EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E >::Invoke(3 /* System.Void Leopotam.Ecs.IEcsWorldDebugListener::OnComponentListChanged(Leopotam.Ecs.EcsEntity) */, IEcsWorldDebugListener_t60C684525E14FB8F0C6F9310FF04E25BEB3FD717_il2cpp_TypeInfo_var, L_118, L_120);
		// for (var ii = 0; ii < owner.DebugListeners.Count; ii++) {
		int32_t L_121 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_121, 1));
	}

IL_0212:
	{
		// for (var ii = 0; ii < owner.DebugListeners.Count; ii++) {
		int32_t L_122 = V_21;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_123 = V_1;
		List_1_tC7540F0D91B566D741FCE4333F4F18F8889FDFE3* L_124 = L_123->___DebugListeners_11;
		int32_t L_125;
		L_125 = List_1_get_Count_mBB3BC3E7006C4F216B9184956D745320C58C0E95_inline(L_124, List_1_get_Count_mBB3BC3E7006C4F216B9184956D745320C58C0E95_RuntimeMethod_var);
		V_22 = (bool)((((int32_t)L_122) < ((int32_t)L_125))? 1 : 0);
		bool L_126 = V_22;
		if (L_126)
		{
			goto IL_01f1;
		}
	}
	{
	}

IL_0228:
	{
		// source.Destroy ();
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_127 = ___source0;
		EcsEntityExtensions_Destroy_m6DF536AB88ADBB52F10983D339A2EF731881701B_inline(L_127, NULL);
		// }
		return;
	}
}
// System.Boolean Leopotam.Ecs.EcsEntityExtensions::AreEquals(Leopotam.Ecs.EcsEntity&,Leopotam.Ecs.EcsEntity&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsEntityExtensions_AreEquals_m12E0A04AF4C515D2F92BB1F2D322C3B636627AAC (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___lhs0, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// return lhs.Id == rhs.Id && lhs.Gen == rhs.Gen;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_0 = ___lhs0;
		int32_t L_1 = L_0->___Id_0;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_2 = ___rhs1;
		int32_t L_3 = L_2->___Id_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_001f;
		}
	}
	{
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_4 = ___lhs0;
		uint16_t L_5 = L_4->___Gen_1;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_6 = ___rhs1;
		uint16_t L_7 = L_6->___Gen_1;
		G_B3_0 = ((((int32_t)L_5) == ((int32_t)L_7))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0023;
	}

IL_0023:
	{
		// }
		bool L_8 = V_0;
		return L_8;
	}
}
// System.Boolean Leopotam.Ecs.EcsEntityExtensions::AreIdEquals(Leopotam.Ecs.EcsEntity&,Leopotam.Ecs.EcsEntity&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsEntityExtensions_AreIdEquals_mA372E568961BB91FF9EC69EC699518161ED38E4A (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___lhs0, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return lhs.Id == rhs.Id;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_0 = ___lhs0;
		int32_t L_1 = L_0->___Id_0;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_2 = ___rhs1;
		int32_t L_3 = L_2->___Id_0;
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)L_3))? 1 : 0);
		goto IL_0012;
	}

IL_0012:
	{
		// }
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Int32 Leopotam.Ecs.EcsEntityExtensions::GetInternalId(Leopotam.Ecs.EcsEntity&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EcsEntityExtensions_GetInternalId_mDF05CA62470626A1B47E8E3934D0CFC6432BBA09 (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return entity.Id;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_0 = ___entity0;
		int32_t L_1 = L_0->___Id_0;
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Leopotam.Ecs.EcsEntityExtensions::GetInternalGen(Leopotam.Ecs.EcsEntity&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EcsEntityExtensions_GetInternalGen_m3F6BB7C940D0141290285D2A59234457813CE9AB (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return entity.Gen;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_0 = ___entity0;
		uint16_t L_1 = L_0->___Gen_1;
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		int32_t L_2 = V_0;
		return L_2;
	}
}
// Leopotam.Ecs.EcsWorld Leopotam.Ecs.EcsEntityExtensions::GetInternalWorld(Leopotam.Ecs.EcsEntity&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* EcsEntityExtensions_GetInternalWorld_m11414EC0D0BDCC3B887E1E9969D9400CA0F4F114 (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) 
{
	EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* V_0 = NULL;
	{
		// return entity.Owner;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_0 = ___entity0;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_1 = L_0->___Owner_2;
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_2 = V_0;
		return L_2;
	}
}
// System.Void Leopotam.Ecs.EcsEntityExtensions::Destroy(Leopotam.Ecs.EcsEntity&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsEntityExtensions_Destroy_m6DF536AB88ADBB52F10983D339A2EF731881701B (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsComponentPool_t9FB24E470344947394FBDF6CA1F7221CEB0F7F44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsWorldDebugListener_t60C684525E14FB8F0C6F9310FF04E25BEB3FD717_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mBB3BC3E7006C4F216B9184956D745320C58C0E95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21961D4F8434746893C9CE71A0A1BD6322E7EA9F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* V_0 = NULL;
	EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	{
		// ref var entityData = ref entity.Owner.GetEntityData (entity);
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_0 = ___entity0;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_1 = L_0->___Owner_2;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_2 = ___entity0;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_3;
		L_3 = EcsWorld_GetEntityData_m279427A5EDB9357D58A2EABDCA4D5FDBFDFE5670_inline(L_1, L_2, NULL);
		V_0 = L_3;
		// savedEntity.Id = entity.Id;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_4 = ___entity0;
		int32_t L_5 = L_4->___Id_0;
		(&V_1)->___Id_0 = L_5;
		// savedEntity.Gen = entity.Gen;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_6 = ___entity0;
		uint16_t L_7 = L_6->___Gen_1;
		(&V_1)->___Gen_1 = L_7;
		// savedEntity.Owner = entity.Owner;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_8 = ___entity0;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_9 = L_8->___Owner_2;
		(&V_1)->___Owner_2 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_1)->___Owner_2), (void*)L_9);
		// if (entityData.Gen != entity.Gen) { throw new Exception ("Cant touch destroyed entity."); }
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_10 = V_0;
		uint16_t L_11 = L_10->___Gen_0;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_12 = ___entity0;
		uint16_t L_13 = L_12->___Gen_1;
		V_2 = (bool)((((int32_t)((((int32_t)L_11) == ((int32_t)L_13))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_2;
		if (!L_14)
		{
			goto IL_0056;
		}
	}
	{
		// if (entityData.Gen != entity.Gen) { throw new Exception ("Cant touch destroyed entity."); }
		Exception_t* L_15 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F6A0CE0FC9A511BCFFC553063AC3CBAA2D1E47D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsEntityExtensions_Destroy_m6DF536AB88ADBB52F10983D339A2EF731881701B_RuntimeMethod_var)));
	}

IL_0056:
	{
		// for (var i = entityData.ComponentsCountX2 - 2; i >= 0; i -= 2) {
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_16 = V_0;
		int16_t L_17 = L_16->___ComponentsCountX2_1;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_17, 2));
		goto IL_00f2;
	}

IL_0064:
	{
		// savedEntity.Owner.UpdateFilters (-entityData.Components[i], savedEntity, entityData);
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_18 = V_1;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_19 = L_18.___Owner_2;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_20 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = L_20->___Components_2;
		int32_t L_22 = V_3;
		int32_t L_23 = L_22;
		int32_t L_24 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_25 = V_0;
		EcsWorld_UpdateFilters_mC5F1D16AB93D10EFCBCCEB9CA9982BB888A7928F_inline(L_19, ((-L_24)), (&V_1), L_25, NULL);
		// savedEntity.Owner.ComponentPools[entityData.Components[i]].Recycle (entityData.Components[i + 1]);
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_26 = V_1;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_27 = L_26.___Owner_2;
		IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39* L_28 = L_27->___ComponentPools_9;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_29 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = L_29->___Components_2;
		int32_t L_31 = V_3;
		int32_t L_32 = L_31;
		int32_t L_33 = (L_30)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32));
		int32_t L_34 = L_33;
		RuntimeObject* L_35 = (L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34));
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_36 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = L_36->___Components_2;
		int32_t L_38 = V_3;
		int32_t L_39 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		int32_t L_40 = (L_37)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_39));
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void Leopotam.Ecs.IEcsComponentPool::Recycle(System.Int32) */, IEcsComponentPool_t9FB24E470344947394FBDF6CA1F7221CEB0F7F44_il2cpp_TypeInfo_var, L_35, L_40);
		// entityData.ComponentsCountX2 -= 2;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_41 = V_0;
		int16_t* L_42 = (&L_41->___ComponentsCountX2_1);
		int16_t* L_43 = L_42;
		int32_t L_44 = *((int16_t*)L_43);
		*((int16_t*)L_43) = (int16_t)((int16_t)((int32_t)il2cpp_codegen_subtract(L_44, 2)));
		// for (var ii = 0; ii < savedEntity.Owner.DebugListeners.Count; ii++) {
		V_4 = 0;
		goto IL_00d3;
	}

IL_00b2:
	{
		// savedEntity.Owner.DebugListeners[ii].OnComponentListChanged (savedEntity);
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_45 = V_1;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_46 = L_45.___Owner_2;
		List_1_tC7540F0D91B566D741FCE4333F4F18F8889FDFE3* L_47 = L_46->___DebugListeners_11;
		int32_t L_48 = V_4;
		RuntimeObject* L_49;
		L_49 = List_1_get_Item_m21961D4F8434746893C9CE71A0A1BD6322E7EA9F(L_47, L_48, List_1_get_Item_m21961D4F8434746893C9CE71A0A1BD6322E7EA9F_RuntimeMethod_var);
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_50 = V_1;
		InterfaceActionInvoker1< EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E >::Invoke(3 /* System.Void Leopotam.Ecs.IEcsWorldDebugListener::OnComponentListChanged(Leopotam.Ecs.EcsEntity) */, IEcsWorldDebugListener_t60C684525E14FB8F0C6F9310FF04E25BEB3FD717_il2cpp_TypeInfo_var, L_49, L_50);
		// for (var ii = 0; ii < savedEntity.Owner.DebugListeners.Count; ii++) {
		int32_t L_51 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_00d3:
	{
		// for (var ii = 0; ii < savedEntity.Owner.DebugListeners.Count; ii++) {
		int32_t L_52 = V_4;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_53 = V_1;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_54 = L_53.___Owner_2;
		List_1_tC7540F0D91B566D741FCE4333F4F18F8889FDFE3* L_55 = L_54->___DebugListeners_11;
		int32_t L_56;
		L_56 = List_1_get_Count_mBB3BC3E7006C4F216B9184956D745320C58C0E95_inline(L_55, List_1_get_Count_mBB3BC3E7006C4F216B9184956D745320C58C0E95_RuntimeMethod_var);
		V_5 = (bool)((((int32_t)L_52) < ((int32_t)L_56))? 1 : 0);
		bool L_57 = V_5;
		if (L_57)
		{
			goto IL_00b2;
		}
	}
	{
		// for (var i = entityData.ComponentsCountX2 - 2; i >= 0; i -= 2) {
		int32_t L_58 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_58, 2));
	}

IL_00f2:
	{
		// for (var i = entityData.ComponentsCountX2 - 2; i >= 0; i -= 2) {
		int32_t L_59 = V_3;
		V_6 = (bool)((((int32_t)((((int32_t)L_59) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_60 = V_6;
		if (L_60)
		{
			goto IL_0064;
		}
	}
	{
		// entityData.ComponentsCountX2 = 0;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_61 = V_0;
		L_61->___ComponentsCountX2_1 = (int16_t)0;
		// savedEntity.Owner.RecycleEntityData (savedEntity.Id, ref entityData);
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_62 = V_1;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_63 = L_62.___Owner_2;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_64 = V_1;
		int32_t L_65 = L_64.___Id_0;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_66 = V_0;
		EcsWorld_RecycleEntityData_mF32D0E0B4CE31E2AE7027C51DA0C54F9D53FC0D2(L_63, L_65, L_66, NULL);
		// for (var ii = 0; ii < savedEntity.Owner.DebugListeners.Count; ii++) {
		V_7 = 0;
		goto IL_0142;
	}

IL_0121:
	{
		// savedEntity.Owner.DebugListeners[ii].OnEntityDestroyed (savedEntity);
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_67 = V_1;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_68 = L_67.___Owner_2;
		List_1_tC7540F0D91B566D741FCE4333F4F18F8889FDFE3* L_69 = L_68->___DebugListeners_11;
		int32_t L_70 = V_7;
		RuntimeObject* L_71;
		L_71 = List_1_get_Item_m21961D4F8434746893C9CE71A0A1BD6322E7EA9F(L_69, L_70, List_1_get_Item_m21961D4F8434746893C9CE71A0A1BD6322E7EA9F_RuntimeMethod_var);
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_72 = V_1;
		InterfaceActionInvoker1< EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E >::Invoke(1 /* System.Void Leopotam.Ecs.IEcsWorldDebugListener::OnEntityDestroyed(Leopotam.Ecs.EcsEntity) */, IEcsWorldDebugListener_t60C684525E14FB8F0C6F9310FF04E25BEB3FD717_il2cpp_TypeInfo_var, L_71, L_72);
		// for (var ii = 0; ii < savedEntity.Owner.DebugListeners.Count; ii++) {
		int32_t L_73 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_73, 1));
	}

IL_0142:
	{
		// for (var ii = 0; ii < savedEntity.Owner.DebugListeners.Count; ii++) {
		int32_t L_74 = V_7;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_75 = V_1;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_76 = L_75.___Owner_2;
		List_1_tC7540F0D91B566D741FCE4333F4F18F8889FDFE3* L_77 = L_76->___DebugListeners_11;
		int32_t L_78;
		L_78 = List_1_get_Count_mBB3BC3E7006C4F216B9184956D745320C58C0E95_inline(L_77, List_1_get_Count_mBB3BC3E7006C4F216B9184956D745320C58C0E95_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_74) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_8;
		if (L_79)
		{
			goto IL_0121;
		}
	}
	{
		// }
		return;
	}
}
// System.Boolean Leopotam.Ecs.EcsEntityExtensions::IsNull(Leopotam.Ecs.EcsEntity&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsEntityExtensions_IsNull_m6484A3968191361BCE21B21E90B53CBD5BADC1B7 (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// return entity.Id == 0 && entity.Gen == 0;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_0 = ___entity0;
		int32_t L_1 = L_0->___Id_0;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_2 = ___entity0;
		uint16_t L_3 = L_2->___Gen_1;
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
	}

IL_0015:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0018;
	}

IL_0018:
	{
		// }
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean Leopotam.Ecs.EcsEntityExtensions::IsAlive(Leopotam.Ecs.EcsEntity&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsEntityExtensions_IsAlive_mA54004DC20E6E7ACE79BC206D69697BEBACE03C3 (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) 
{
	EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B5_0 = 0;
	{
		// if (!IsWorldAlive (entity)) { return false; }
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_0 = ___entity0;
		bool L_1;
		L_1 = EcsEntityExtensions_IsWorldAlive_mEA0D4AC1ED9B2D3412DAC98F1F18024A3377B913_inline(L_0, NULL);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		// if (!IsWorldAlive (entity)) { return false; }
		V_2 = (bool)0;
		goto IL_0040;
	}

IL_0013:
	{
		// ref var entityData = ref entity.Owner.GetEntityData (entity);
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_3 = ___entity0;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_4 = L_3->___Owner_2;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_5 = ___entity0;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_6;
		L_6 = EcsWorld_GetEntityData_m279427A5EDB9357D58A2EABDCA4D5FDBFDFE5670_inline(L_4, L_5, NULL);
		V_0 = L_6;
		// return entityData.Gen == entity.Gen && entityData.ComponentsCountX2 >= 0;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_7 = V_0;
		uint16_t L_8 = L_7->___Gen_0;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_9 = ___entity0;
		uint16_t L_10 = L_9->___Gen_1;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_10))))
		{
			goto IL_003c;
		}
	}
	{
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_11 = V_0;
		int16_t L_12 = L_11->___ComponentsCountX2_1;
		G_B5_0 = ((((int32_t)((((int32_t)L_12) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003d;
	}

IL_003c:
	{
		G_B5_0 = 0;
	}

IL_003d:
	{
		V_2 = (bool)G_B5_0;
		goto IL_0040;
	}

IL_0040:
	{
		// }
		bool L_13 = V_2;
		return L_13;
	}
}
// System.Boolean Leopotam.Ecs.EcsEntityExtensions::IsWorldAlive(Leopotam.Ecs.EcsEntity&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsEntityExtensions_IsWorldAlive_mEA0D4AC1ED9B2D3412DAC98F1F18024A3377B913 (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// return entity.Owner != null && entity.Owner.IsAlive ();
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_0 = ___entity0;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_1 = L_0->___Owner_2;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_2 = ___entity0;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_3 = L_2->___Owner_2;
		bool L_4;
		L_4 = EcsWorld_IsAlive_mCBD30D99C44C9963296CBAB628A78C2423CC9155_inline(L_3, NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 0;
	}

IL_0017:
	{
		V_0 = (bool)G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		// }
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Int32 Leopotam.Ecs.EcsEntityExtensions::GetComponentsCount(Leopotam.Ecs.EcsEntity&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EcsEntityExtensions_GetComponentsCount_mF9A542E48DD9D5C6A524EC5C982A37C446B06736 (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) 
{
	EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t G_B5_0 = 0;
	{
		// ref var entityData = ref entity.Owner.GetEntityData (entity);
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_0 = ___entity0;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_1 = L_0->___Owner_2;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_2 = ___entity0;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_3;
		L_3 = EcsWorld_GetEntityData_m279427A5EDB9357D58A2EABDCA4D5FDBFDFE5670_inline(L_1, L_2, NULL);
		V_0 = L_3;
		// if (entityData.Gen != entity.Gen) { throw new Exception ("Cant touch destroyed entity."); }
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_4 = V_0;
		uint16_t L_5 = L_4->___Gen_0;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_6 = ___entity0;
		uint16_t L_7 = L_6->___Gen_1;
		V_1 = (bool)((((int32_t)((((int32_t)L_5) == ((int32_t)L_7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_002f;
		}
	}
	{
		// if (entityData.Gen != entity.Gen) { throw new Exception ("Cant touch destroyed entity."); }
		Exception_t* L_9 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F6A0CE0FC9A511BCFFC553063AC3CBAA2D1E47D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsEntityExtensions_GetComponentsCount_mF9A542E48DD9D5C6A524EC5C982A37C446B06736_RuntimeMethod_var)));
	}

IL_002f:
	{
		// return entityData.ComponentsCountX2 <= 0 ? 0 : (entityData.ComponentsCountX2 >> 1);
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_10 = V_0;
		int16_t L_11 = L_10->___ComponentsCountX2_1;
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_12 = V_0;
		int16_t L_13 = L_12->___ComponentsCountX2_1;
		G_B5_0 = ((int32_t)((int32_t)L_13>>1));
		goto IL_0043;
	}

IL_0042:
	{
		G_B5_0 = 0;
	}

IL_0043:
	{
		V_2 = G_B5_0;
		goto IL_0046;
	}

IL_0046:
	{
		// }
		int32_t L_14 = V_2;
		return L_14;
	}
}
// System.Int32 Leopotam.Ecs.EcsEntityExtensions::GetComponentTypes(Leopotam.Ecs.EcsEntity&,System.Type[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EcsEntityExtensions_GetComponentTypes_m30DBF5C68EA43C12ACE8A54D3041FFC590B2E90D (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB** ___list1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsComponentPool_t9FB24E470344947394FBDF6CA1F7221CEB0F7F44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t G_B5_0 = 0;
	{
		// ref var entityData = ref entity.Owner.GetEntityData (entity);
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_0 = ___entity0;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_1 = L_0->___Owner_2;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_2 = ___entity0;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_3;
		L_3 = EcsWorld_GetEntityData_m279427A5EDB9357D58A2EABDCA4D5FDBFDFE5670_inline(L_1, L_2, NULL);
		V_0 = L_3;
		// if (entityData.Gen != entity.Gen) { throw new Exception ("Cant touch destroyed entity."); }
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_4 = V_0;
		uint16_t L_5 = L_4->___Gen_0;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_6 = ___entity0;
		uint16_t L_7 = L_6->___Gen_1;
		V_2 = (bool)((((int32_t)((((int32_t)L_5) == ((int32_t)L_7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_002f;
		}
	}
	{
		// if (entityData.Gen != entity.Gen) { throw new Exception ("Cant touch destroyed entity."); }
		Exception_t* L_9 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F6A0CE0FC9A511BCFFC553063AC3CBAA2D1E47D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsEntityExtensions_GetComponentTypes_m30DBF5C68EA43C12ACE8A54D3041FFC590B2E90D_RuntimeMethod_var)));
	}

IL_002f:
	{
		// var itemsCount = entityData.ComponentsCountX2 >> 1;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_10 = V_0;
		int16_t L_11 = L_10->___ComponentsCountX2_1;
		V_1 = ((int32_t)((int32_t)L_11>>1));
		// if (list == null || list.Length < itemsCount) {
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB** L_12 = ___list1;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_13 = *((TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB**)L_12);
		if (!L_13)
		{
			goto IL_0045;
		}
	}
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB** L_14 = ___list1;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_15 = *((TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB**)L_14);
		int32_t L_16 = V_1;
		G_B5_0 = ((((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length))) < ((int32_t)L_16))? 1 : 0);
		goto IL_0046;
	}

IL_0045:
	{
		G_B5_0 = 1;
	}

IL_0046:
	{
		V_3 = (bool)G_B5_0;
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_0054;
		}
	}
	{
		// list = new Type[itemsCount];
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB** L_18 = ___list1;
		int32_t L_19 = V_1;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_20 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)L_19);
		*((RuntimeObject**)L_18) = (RuntimeObject*)L_20;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_18, (void*)(RuntimeObject*)L_20);
	}

IL_0054:
	{
		// for (int i = 0, j = 0, iMax = entityData.ComponentsCountX2; i < iMax; i += 2, j++) {
		V_4 = 0;
		// for (int i = 0, j = 0, iMax = entityData.ComponentsCountX2; i < iMax; i += 2, j++) {
		V_5 = 0;
		// for (int i = 0, j = 0, iMax = entityData.ComponentsCountX2; i < iMax; i += 2, j++) {
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_21 = V_0;
		int16_t L_22 = L_21->___ComponentsCountX2_1;
		V_6 = L_22;
		goto IL_0091;
	}

IL_0064:
	{
		// list[j] = entity.Owner.ComponentPools[entityData.Components[i]].ItemType;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB** L_23 = ___list1;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_24 = *((TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB**)L_23);
		int32_t L_25 = V_5;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_26 = ___entity0;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_27 = L_26->___Owner_2;
		IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39* L_28 = L_27->___ComponentPools_9;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_29 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = L_29->___Components_2;
		int32_t L_31 = V_4;
		int32_t L_32 = L_31;
		int32_t L_33 = (L_30)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32));
		int32_t L_34 = L_33;
		RuntimeObject* L_35 = (L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34));
		Type_t* L_36;
		L_36 = InterfaceFuncInvoker0< Type_t* >::Invoke(0 /* System.Type Leopotam.Ecs.IEcsComponentPool::get_ItemType() */, IEcsComponentPool_t9FB24E470344947394FBDF6CA1F7221CEB0F7F44_il2cpp_TypeInfo_var, L_35);
		ArrayElementTypeCheck (L_24, L_36);
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25), (Type_t*)L_36);
		// for (int i = 0, j = 0, iMax = entityData.ComponentsCountX2; i < iMax; i += 2, j++) {
		int32_t L_37 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_37, 2));
		// for (int i = 0, j = 0, iMax = entityData.ComponentsCountX2; i < iMax; i += 2, j++) {
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_0091:
	{
		// for (int i = 0, j = 0, iMax = entityData.ComponentsCountX2; i < iMax; i += 2, j++) {
		int32_t L_39 = V_4;
		int32_t L_40 = V_6;
		V_7 = (bool)((((int32_t)L_39) < ((int32_t)L_40))? 1 : 0);
		bool L_41 = V_7;
		if (L_41)
		{
			goto IL_0064;
		}
	}
	{
		// return itemsCount;
		int32_t L_42 = V_1;
		V_8 = L_42;
		goto IL_00a2;
	}

IL_00a2:
	{
		// }
		int32_t L_43 = V_8;
		return L_43;
	}
}
// System.Int32 Leopotam.Ecs.EcsEntityExtensions::GetComponentValues(Leopotam.Ecs.EcsEntity&,System.Object[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EcsEntityExtensions_GetComponentValues_m352A4AE8A6409CDFED34583F79DAA3B6AF09191C (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** ___list1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsComponentPool_t9FB24E470344947394FBDF6CA1F7221CEB0F7F44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t G_B5_0 = 0;
	{
		// ref var entityData = ref entity.Owner.GetEntityData (entity);
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_0 = ___entity0;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_1 = L_0->___Owner_2;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_2 = ___entity0;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_3;
		L_3 = EcsWorld_GetEntityData_m279427A5EDB9357D58A2EABDCA4D5FDBFDFE5670_inline(L_1, L_2, NULL);
		V_0 = L_3;
		// if (entityData.Gen != entity.Gen) { throw new Exception ("Cant touch destroyed entity."); }
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_4 = V_0;
		uint16_t L_5 = L_4->___Gen_0;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_6 = ___entity0;
		uint16_t L_7 = L_6->___Gen_1;
		V_2 = (bool)((((int32_t)((((int32_t)L_5) == ((int32_t)L_7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_002f;
		}
	}
	{
		// if (entityData.Gen != entity.Gen) { throw new Exception ("Cant touch destroyed entity."); }
		Exception_t* L_9 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F6A0CE0FC9A511BCFFC553063AC3CBAA2D1E47D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsEntityExtensions_GetComponentValues_m352A4AE8A6409CDFED34583F79DAA3B6AF09191C_RuntimeMethod_var)));
	}

IL_002f:
	{
		// var itemsCount = entityData.ComponentsCountX2 >> 1;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_10 = V_0;
		int16_t L_11 = L_10->___ComponentsCountX2_1;
		V_1 = ((int32_t)((int32_t)L_11>>1));
		// if (list == null || list.Length < itemsCount) {
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** L_12 = ___list1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = *((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918**)L_12);
		if (!L_13)
		{
			goto IL_0045;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** L_14 = ___list1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = *((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918**)L_14);
		int32_t L_16 = V_1;
		G_B5_0 = ((((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length))) < ((int32_t)L_16))? 1 : 0);
		goto IL_0046;
	}

IL_0045:
	{
		G_B5_0 = 1;
	}

IL_0046:
	{
		V_3 = (bool)G_B5_0;
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_0054;
		}
	}
	{
		// list = new object[itemsCount];
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** L_18 = ___list1;
		int32_t L_19 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)L_19);
		*((RuntimeObject**)L_18) = (RuntimeObject*)L_20;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_18, (void*)(RuntimeObject*)L_20);
	}

IL_0054:
	{
		// for (int i = 0, j = 0, iMax = entityData.ComponentsCountX2; i < iMax; i += 2, j++) {
		V_4 = 0;
		// for (int i = 0, j = 0, iMax = entityData.ComponentsCountX2; i < iMax; i += 2, j++) {
		V_5 = 0;
		// for (int i = 0, j = 0, iMax = entityData.ComponentsCountX2; i < iMax; i += 2, j++) {
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_21 = V_0;
		int16_t L_22 = L_21->___ComponentsCountX2_1;
		V_6 = L_22;
		goto IL_009c;
	}

IL_0064:
	{
		// list[j] = entity.Owner.ComponentPools[entityData.Components[i]].GetItem (entityData.Components[i + 1]);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** L_23 = ___list1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = *((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918**)L_23);
		int32_t L_25 = V_5;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_26 = ___entity0;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_27 = L_26->___Owner_2;
		IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39* L_28 = L_27->___ComponentPools_9;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_29 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = L_29->___Components_2;
		int32_t L_31 = V_4;
		int32_t L_32 = L_31;
		int32_t L_33 = (L_30)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32));
		int32_t L_34 = L_33;
		RuntimeObject* L_35 = (L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34));
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_36 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = L_36->___Components_2;
		int32_t L_38 = V_4;
		int32_t L_39 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		int32_t L_40 = (L_37)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_39));
		RuntimeObject* L_41;
		L_41 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(1 /* System.Object Leopotam.Ecs.IEcsComponentPool::GetItem(System.Int32) */, IEcsComponentPool_t9FB24E470344947394FBDF6CA1F7221CEB0F7F44_il2cpp_TypeInfo_var, L_35, L_40);
		ArrayElementTypeCheck (L_24, L_41);
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25), (RuntimeObject*)L_41);
		// for (int i = 0, j = 0, iMax = entityData.ComponentsCountX2; i < iMax; i += 2, j++) {
		int32_t L_42 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_42, 2));
		// for (int i = 0, j = 0, iMax = entityData.ComponentsCountX2; i < iMax; i += 2, j++) {
		int32_t L_43 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_009c:
	{
		// for (int i = 0, j = 0, iMax = entityData.ComponentsCountX2; i < iMax; i += 2, j++) {
		int32_t L_44 = V_4;
		int32_t L_45 = V_6;
		V_7 = (bool)((((int32_t)L_44) < ((int32_t)L_45))? 1 : 0);
		bool L_46 = V_7;
		if (L_46)
		{
			goto IL_0064;
		}
	}
	{
		// return itemsCount;
		int32_t L_47 = V_1;
		V_8 = L_47;
		goto IL_00ad;
	}

IL_00ad:
	{
		// }
		int32_t L_48 = V_8;
		return L_48;
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
// System.Void Leopotam.Ecs.EcsFilter::.ctor(Leopotam.Ecs.EcsWorld)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsFilter__ctor_m8BE03B3B5DC04DF1AAC39E1779750D9B369258E6 (EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* __this, EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* ___world0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DelayedOpU5BU5D_t5DE36772360B7C519979E55E5A333A3FEAF23670_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mAF56F61CBD9F77BAFCE5E2591712018424E7DB22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected EcsFilter (EcsWorld world) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// EntitiesCacheSize = world.Config.FilterEntitiesCacheSize;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_0 = ___world0;
		EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8* L_1 = (&L_0->___Config_7);
		int32_t L_2 = L_1->___FilterEntitiesCacheSize_4;
		__this->___EntitiesCacheSize_4 = L_2;
		// Entities = new EcsEntity[EntitiesCacheSize];
		int32_t L_3 = __this->___EntitiesCacheSize_4;
		EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C* L_4 = (EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C*)(EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C*)SZArrayNew(EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C_il2cpp_TypeInfo_var, (uint32_t)L_3);
		__this->___Entities_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Entities_0), (void*)L_4);
		// EntitiesMap = new Dictionary<int, int> (EntitiesCacheSize);
		int32_t L_5 = __this->___EntitiesCacheSize_4;
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_6 = (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*)il2cpp_codegen_object_new(Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mAF56F61CBD9F77BAFCE5E2591712018424E7DB22(L_6, L_5, Dictionary_2__ctor_mAF56F61CBD9F77BAFCE5E2591712018424E7DB22_RuntimeMethod_var);
		__this->___EntitiesMap_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EntitiesMap_1), (void*)L_6);
		// _delayedOps = new DelayedOp[EntitiesCacheSize];
		int32_t L_7 = __this->___EntitiesCacheSize_4;
		DelayedOpU5BU5D_t5DE36772360B7C519979E55E5A333A3FEAF23670* L_8 = (DelayedOpU5BU5D_t5DE36772360B7C519979E55E5A333A3FEAF23670*)(DelayedOpU5BU5D_t5DE36772360B7C519979E55E5A333A3FEAF23670*)SZArrayNew(DelayedOpU5BU5D_t5DE36772360B7C519979E55E5A333A3FEAF23670_il2cpp_TypeInfo_var, (uint32_t)L_7);
		__this->____delayedOps_5 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____delayedOps_5), (void*)L_8);
		// }
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> Leopotam.Ecs.EcsFilter::GetInternalEntitiesMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* EcsFilter_GetInternalEntitiesMap_mDF9685AB884F4391DA63B84BFADB282C965153F5 (EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* __this, const RuntimeMethod* method) 
{
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* V_0 = NULL;
	{
		// return EntitiesMap;
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_0 = __this->___EntitiesMap_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_1 = V_0;
		return L_1;
	}
}
// Leopotam.Ecs.EcsFilter/Enumerator Leopotam.Ecs.EcsFilter::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B EcsFilter_GetEnumerator_m22DA51087D82F61AB4B6DF5846599DDD8EC0A49A (EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* __this, const RuntimeMethod* method) 
{
	Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Enumerator (this);
		Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mAD2CACAE4DC96A5F987178A5C4532E38610796C2_inline((&L_0), __this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B L_1 = V_0;
		return L_1;
	}
}
// Leopotam.Ecs.EcsEntity& Leopotam.Ecs.EcsFilter::GetEntity(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* EcsFilter_GetEntity_mDDEA2A83E7CDFFF9D766CE98642AF9E1892EE7D7 (EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* __this, int32_t* ___idx0, const RuntimeMethod* method) 
{
	EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* V_0 = NULL;
	{
		// return ref Entities[idx];
		EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C* L_0 = __this->___Entities_0;
		int32_t* L_1 = ___idx0;
		int32_t L_2 = *((int32_t*)L_1);
		V_0 = ((L_0)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_2)));
		goto IL_0011;
	}

IL_0011:
	{
		// }
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_3 = V_0;
		return L_3;
	}
}
// System.Int32 Leopotam.Ecs.EcsFilter::GetEntitiesCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EcsFilter_GetEntitiesCount_m1BDEEE64638444BB80F6331A144CE7C760ECE9C1 (EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return EntitiesCount;
		int32_t L_0 = __this->___EntitiesCount_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Leopotam.Ecs.EcsFilter::IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsFilter_IsEmpty_m0A8F9AB37F444FE7817BC980FC6075EF41A43210 (EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return EntitiesCount == 0;
		int32_t L_0 = __this->___EntitiesCount_2;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Leopotam.Ecs.EcsFilter::IsCompatible(Leopotam.Ecs.EcsWorld/EcsEntityData&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsFilter_IsCompatible_m908B473016F3D41FC338BDC440381396E28ECAA2 (EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* __this, EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* ___entityData0, int32_t ___addedRemovedTypeIndex1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B26_0 = 0;
	{
		// var incIdx = IncludedTypeIndices.Length - 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___IncludedTypeIndices_7;
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_0)->max_length)), 1));
		goto IL_0074;
	}

IL_000e:
	{
		// var typeIdx = IncludedTypeIndices[incIdx];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->___IncludedTypeIndices_7;
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		// var idx = entityData.ComponentsCountX2 - 2;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_5 = ___entityData0;
		int16_t L_6 = L_5->___ComponentsCountX2_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, 2));
		goto IL_0054;
	}

IL_0023:
	{
		// var typeIdx2 = entityData.Components[idx];
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_7 = ___entityData0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = L_7->___Components_2;
		int32_t L_9 = V_2;
		int32_t L_10 = L_9;
		int32_t L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = L_11;
		// if (typeIdx2 == -addedRemovedTypeIndex) {
		int32_t L_12 = V_3;
		int32_t L_13 = ___addedRemovedTypeIndex1;
		V_4 = (bool)((((int32_t)L_12) == ((int32_t)((-L_13))))? 1 : 0);
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_003b;
		}
	}
	{
		// continue;
		goto IL_0050;
	}

IL_003b:
	{
		// if (typeIdx2 == addedRemovedTypeIndex || typeIdx2 == typeIdx) {
		int32_t L_15 = V_3;
		int32_t L_16 = ___addedRemovedTypeIndex1;
		if ((((int32_t)L_15) == ((int32_t)L_16)))
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_17 = V_3;
		int32_t L_18 = V_1;
		G_B7_0 = ((((int32_t)L_17) == ((int32_t)L_18))? 1 : 0);
		goto IL_0046;
	}

IL_0045:
	{
		G_B7_0 = 1;
	}

IL_0046:
	{
		V_5 = (bool)G_B7_0;
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_004f;
		}
	}
	{
		// break;
		goto IL_0061;
	}

IL_004f:
	{
	}

IL_0050:
	{
		// for (; idx >= 0; idx -= 2) {
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_20, 2));
	}

IL_0054:
	{
		// for (; idx >= 0; idx -= 2) {
		int32_t L_21 = V_2;
		V_6 = (bool)((((int32_t)((((int32_t)L_21) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_6;
		if (L_22)
		{
			goto IL_0023;
		}
	}

IL_0061:
	{
		// if (idx == -2) {
		int32_t L_23 = V_2;
		V_7 = (bool)((((int32_t)L_23) == ((int32_t)((int32_t)-2)))? 1 : 0);
		bool L_24 = V_7;
		if (!L_24)
		{
			goto IL_006f;
		}
	}
	{
		// break;
		goto IL_0081;
	}

IL_006f:
	{
		// for (; incIdx >= 0; incIdx--) {
		int32_t L_25 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_25, 1));
	}

IL_0074:
	{
		// for (; incIdx >= 0; incIdx--) {
		int32_t L_26 = V_0;
		V_8 = (bool)((((int32_t)((((int32_t)L_26) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_27 = V_8;
		if (L_27)
		{
			goto IL_000e;
		}
	}

IL_0081:
	{
		// if (incIdx != -1) {
		int32_t L_28 = V_0;
		V_9 = (bool)((((int32_t)((((int32_t)L_28) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_29 = V_9;
		if (!L_29)
		{
			goto IL_0097;
		}
	}
	{
		// return false;
		V_10 = (bool)0;
		goto IL_0130;
	}

IL_0097:
	{
		// if (ExcludedTypeIndices != null) {
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->___ExcludedTypeIndices_8;
		V_11 = (bool)((!(((RuntimeObject*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_30) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_31 = V_11;
		if (!L_31)
		{
			goto IL_012b;
		}
	}
	{
		// for (var excIdx = 0; excIdx < ExcludedTypeIndices.Length; excIdx++) {
		V_12 = 0;
		goto IL_0118;
	}

IL_00af:
	{
		// var typeIdx = ExcludedTypeIndices[excIdx];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = __this->___ExcludedTypeIndices_8;
		int32_t L_33 = V_12;
		int32_t L_34 = L_33;
		int32_t L_35 = (L_32)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34));
		V_13 = L_35;
		// for (var idx = entityData.ComponentsCountX2 - 2; idx >= 0; idx -= 2) {
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_36 = ___entityData0;
		int16_t L_37 = L_36->___ComponentsCountX2_1;
		V_14 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_37, 2));
		goto IL_0103;
	}

IL_00c7:
	{
		// var typeIdx2 = entityData.Components[idx];
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_38 = ___entityData0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = L_38->___Components_2;
		int32_t L_40 = V_14;
		int32_t L_41 = L_40;
		int32_t L_42 = (L_39)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_41));
		V_15 = L_42;
		// if (typeIdx2 == -addedRemovedTypeIndex) {
		int32_t L_43 = V_15;
		int32_t L_44 = ___addedRemovedTypeIndex1;
		V_16 = (bool)((((int32_t)L_43) == ((int32_t)((-L_44))))? 1 : 0);
		bool L_45 = V_16;
		if (!L_45)
		{
			goto IL_00e2;
		}
	}
	{
		// continue;
		goto IL_00fd;
	}

IL_00e2:
	{
		// if (typeIdx2 == addedRemovedTypeIndex || typeIdx2 == typeIdx) {
		int32_t L_46 = V_15;
		int32_t L_47 = ___addedRemovedTypeIndex1;
		if ((((int32_t)L_46) == ((int32_t)L_47)))
		{
			goto IL_00ef;
		}
	}
	{
		int32_t L_48 = V_15;
		int32_t L_49 = V_13;
		G_B26_0 = ((((int32_t)L_48) == ((int32_t)L_49))? 1 : 0);
		goto IL_00f0;
	}

IL_00ef:
	{
		G_B26_0 = 1;
	}

IL_00f0:
	{
		V_17 = (bool)G_B26_0;
		bool L_50 = V_17;
		if (!L_50)
		{
			goto IL_00fc;
		}
	}
	{
		// return false;
		V_10 = (bool)0;
		goto IL_0130;
	}

IL_00fc:
	{
	}

IL_00fd:
	{
		// for (var idx = entityData.ComponentsCountX2 - 2; idx >= 0; idx -= 2) {
		int32_t L_51 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_subtract(L_51, 2));
	}

IL_0103:
	{
		// for (var idx = entityData.ComponentsCountX2 - 2; idx >= 0; idx -= 2) {
		int32_t L_52 = V_14;
		V_18 = (bool)((((int32_t)((((int32_t)L_52) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_53 = V_18;
		if (L_53)
		{
			goto IL_00c7;
		}
	}
	{
		// for (var excIdx = 0; excIdx < ExcludedTypeIndices.Length; excIdx++) {
		int32_t L_54 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_0118:
	{
		// for (var excIdx = 0; excIdx < ExcludedTypeIndices.Length; excIdx++) {
		int32_t L_55 = V_12;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = __this->___ExcludedTypeIndices_8;
		V_19 = (bool)((((int32_t)L_55) < ((int32_t)((int32_t)(((RuntimeArray*)L_56)->max_length))))? 1 : 0);
		bool L_57 = V_19;
		if (L_57)
		{
			goto IL_00af;
		}
	}
	{
	}

IL_012b:
	{
		// return true;
		V_10 = (bool)1;
		goto IL_0130;
	}

IL_0130:
	{
		// }
		bool L_58 = V_10;
		return L_58;
	}
}
// System.Boolean Leopotam.Ecs.EcsFilter::AddDelayedOp(System.Boolean,Leopotam.Ecs.EcsEntity&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsFilter_AddDelayedOp_m44BC0C9E8CDF94E3CDE5F99F84308D2C2ADF28A4 (EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* __this, bool ___isAdd0, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisDelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643_mE752D0FB29CF89DBD6805FA2F6F717C7F87D59A1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	{
		// if (LockCount <= 0) {
		int32_t L_0 = __this->___LockCount_3;
		V_1 = (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// return false;
		V_2 = (bool)0;
		goto IL_0077;
	}

IL_0016:
	{
		// if (_delayedOps.Length == _delayedOpsCount) {
		DelayedOpU5BU5D_t5DE36772360B7C519979E55E5A333A3FEAF23670* L_2 = __this->____delayedOps_5;
		int32_t L_3 = __this->____delayedOpsCount_6;
		V_3 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))) == ((int32_t)L_3))? 1 : 0);
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		// Array.Resize (ref _delayedOps, _delayedOpsCount << 1);
		DelayedOpU5BU5D_t5DE36772360B7C519979E55E5A333A3FEAF23670** L_5 = (&__this->____delayedOps_5);
		int32_t L_6 = __this->____delayedOpsCount_6;
		Array_Resize_TisDelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643_mE752D0FB29CF89DBD6805FA2F6F717C7F87D59A1(L_5, ((int32_t)(L_6<<1)), Array_Resize_TisDelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643_mE752D0FB29CF89DBD6805FA2F6F717C7F87D59A1_RuntimeMethod_var);
	}

IL_0040:
	{
		// ref var op = ref _delayedOps[_delayedOpsCount++];
		DelayedOpU5BU5D_t5DE36772360B7C519979E55E5A333A3FEAF23670* L_7 = __this->____delayedOps_5;
		int32_t L_8 = __this->____delayedOpsCount_6;
		V_4 = L_8;
		int32_t L_9 = V_4;
		__this->____delayedOpsCount_6 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		int32_t L_10 = V_4;
		V_0 = ((L_7)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_10)));
		// op.IsAdd = isAdd;
		DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643* L_11 = V_0;
		bool L_12 = ___isAdd0;
		L_11->___IsAdd_0 = L_12;
		// op.Entity = entity;
		DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643* L_13 = V_0;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_14 = ___entity1;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_15 = (*(EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E*)L_14);
		L_13->___Entity_1 = L_15;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_13->___Entity_1))->___Owner_2), (void*)NULL);
		// return true;
		V_2 = (bool)1;
		goto IL_0077;
	}

IL_0077:
	{
		// }
		bool L_16 = V_2;
		return L_16;
	}
}
// System.Void Leopotam.Ecs.EcsFilter::Lock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsFilter_Lock_mA02D6F8F94E8DE65F1DC6F854EF457260AFF57F8 (EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* __this, const RuntimeMethod* method) 
{
	{
		// LockCount++;
		int32_t L_0 = __this->___LockCount_3;
		__this->___LockCount_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// }
		return;
	}
}
// System.Void Leopotam.Ecs.EcsFilter::Unlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsFilter_Unlock_m194398A287AA4320005015ED2F33DB4116FF50B7 (EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B5_0 = 0;
	{
		// if (LockCount <= 0) {
		int32_t L_0 = __this->___LockCount_3;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		// throw new Exception ($"Invalid lock-unlock balance for \"{GetType ().Name}\".");
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42421D059AAE096C7B60839ABFEB44B5C73C66C4)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral606C771900936C652E7DC0D284530387D5ED57D1)), NULL);
		Exception_t* L_5 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsFilter_Unlock_m194398A287AA4320005015ED2F33DB4116FF50B7_RuntimeMethod_var)));
	}

IL_0032:
	{
		// LockCount--;
		int32_t L_6 = __this->___LockCount_3;
		__this->___LockCount_3 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
		// if (LockCount == 0 && _delayedOpsCount > 0) {
		int32_t L_7 = __this->___LockCount_3;
		if (L_7)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_8 = __this->____delayedOpsCount_6;
		G_B5_0 = ((((int32_t)L_8) > ((int32_t)0))? 1 : 0);
		goto IL_0054;
	}

IL_0053:
	{
		G_B5_0 = 0;
	}

IL_0054:
	{
		V_1 = (bool)G_B5_0;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_00b9;
		}
	}
	{
		// for (int i = 0, iMax = _delayedOpsCount; i < iMax; i++) {
		V_2 = 0;
		// for (int i = 0, iMax = _delayedOpsCount; i < iMax; i++) {
		int32_t L_10 = __this->____delayedOpsCount_6;
		V_3 = L_10;
		goto IL_00a7;
	}

IL_0064:
	{
		// ref var op = ref _delayedOps[i];
		DelayedOpU5BU5D_t5DE36772360B7C519979E55E5A333A3FEAF23670* L_11 = __this->____delayedOps_5;
		int32_t L_12 = V_2;
		V_4 = ((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_12)));
		// if (op.IsAdd) {
		DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643* L_13 = V_4;
		bool L_14 = L_13->___IsAdd_0;
		V_5 = L_14;
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_0092;
		}
	}
	{
		// OnAddEntity (op.Entity);
		DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643* L_16 = V_4;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_17 = (&L_16->___Entity_1);
		VirtualActionInvoker1< EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* >::Invoke(5 /* System.Void Leopotam.Ecs.EcsFilter::OnAddEntity(Leopotam.Ecs.EcsEntity& modreq(System.Runtime.InteropServices.InAttribute)) */, __this, L_17);
		goto IL_00a2;
	}

IL_0092:
	{
		// OnRemoveEntity (op.Entity);
		DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643* L_18 = V_4;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_19 = (&L_18->___Entity_1);
		VirtualActionInvoker1< EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* >::Invoke(6 /* System.Void Leopotam.Ecs.EcsFilter::OnRemoveEntity(Leopotam.Ecs.EcsEntity& modreq(System.Runtime.InteropServices.InAttribute)) */, __this, L_19);
	}

IL_00a2:
	{
		// for (int i = 0, iMax = _delayedOpsCount; i < iMax; i++) {
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_00a7:
	{
		// for (int i = 0, iMax = _delayedOpsCount; i < iMax; i++) {
		int32_t L_21 = V_2;
		int32_t L_22 = V_3;
		V_6 = (bool)((((int32_t)L_21) < ((int32_t)L_22))? 1 : 0);
		bool L_23 = V_6;
		if (L_23)
		{
			goto IL_0064;
		}
	}
	{
		// _delayedOpsCount = 0;
		__this->____delayedOpsCount_6 = 0;
	}

IL_00b9:
	{
		// }
		return;
	}
}
// System.Boolean Leopotam.Ecs.EcsFilter::AreComponentsSame(Leopotam.Ecs.EcsFilter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsFilter_AreComponentsSame_mE4B2D3FDE457C24EABB6C49DBA30E922678B3663 (EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* __this, EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* ___filter0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m697B633D0C1EECAC6C493EC797FC44416F706F4F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	bool V_9 = false;
	bool V_10 = false;
	int32_t G_B12_0 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B20_0 = 0;
	{
		// if (IncludedTypeIndices.Length != filter.IncludedTypeIndices.Length) {
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___IncludedTypeIndices_7;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_1 = ___filter0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = L_1->___IncludedTypeIndices_7;
		V_0 = (bool)((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0115;
	}

IL_0022:
	{
		// for (var i = 0; i < IncludedTypeIndices.Length; i++) {
		V_2 = 0;
		goto IL_004e;
	}

IL_0026:
	{
		// if (Array.IndexOf (filter.IncludedTypeIndices, IncludedTypeIndices[i]) == -1) {
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_4 = ___filter0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = L_4->___IncludedTypeIndices_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->___IncludedTypeIndices_7;
		int32_t L_7 = V_2;
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		int32_t L_10;
		L_10 = Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m697B633D0C1EECAC6C493EC797FC44416F706F4F(L_5, L_9, Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m697B633D0C1EECAC6C493EC797FC44416F706F4F_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_10) == ((int32_t)(-1)))? 1 : 0);
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_0049;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0115;
	}

IL_0049:
	{
		// for (var i = 0; i < IncludedTypeIndices.Length; i++) {
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_004e:
	{
		// for (var i = 0; i < IncludedTypeIndices.Length; i++) {
		int32_t L_13 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->___IncludedTypeIndices_7;
		V_4 = (bool)((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))? 1 : 0);
		bool L_15 = V_4;
		if (L_15)
		{
			goto IL_0026;
		}
	}
	{
		// if ((ExcludedTypeIndices == null && filter.ExcludedTypeIndices != null) ||
		//     (ExcludedTypeIndices != null && filter.ExcludedTypeIndices == null)) {
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = __this->___ExcludedTypeIndices_8;
		if (L_16)
		{
			goto IL_006f;
		}
	}
	{
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_17 = ___filter0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = L_17->___ExcludedTypeIndices_8;
		if (L_18)
		{
			goto IL_0085;
		}
	}

IL_006f:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = __this->___ExcludedTypeIndices_8;
		if (!L_19)
		{
			goto IL_0082;
		}
	}
	{
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_20 = ___filter0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = L_20->___ExcludedTypeIndices_8;
		G_B12_0 = ((((RuntimeObject*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_21) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		goto IL_0083;
	}

IL_0082:
	{
		G_B12_0 = 0;
	}

IL_0083:
	{
		G_B14_0 = G_B12_0;
		goto IL_0086;
	}

IL_0085:
	{
		G_B14_0 = 1;
	}

IL_0086:
	{
		V_5 = (bool)G_B14_0;
		bool L_22 = V_5;
		if (!L_22)
		{
			goto IL_0094;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0115;
	}

IL_0094:
	{
		// if (ExcludedTypeIndices != null) {
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = __this->___ExcludedTypeIndices_8;
		V_6 = (bool)((!(((RuntimeObject*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_23) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_24 = V_6;
		if (!L_24)
		{
			goto IL_0111;
		}
	}
	{
		// if (filter.ExcludedTypeIndices == null || ExcludedTypeIndices.Length != filter.ExcludedTypeIndices.Length) {
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_25 = ___filter0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = L_25->___ExcludedTypeIndices_8;
		if (!L_26)
		{
			goto IL_00c3;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = __this->___ExcludedTypeIndices_8;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_28 = ___filter0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = L_28->___ExcludedTypeIndices_8;
		G_B20_0 = ((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length))) == ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00c4;
	}

IL_00c3:
	{
		G_B20_0 = 1;
	}

IL_00c4:
	{
		V_7 = (bool)G_B20_0;
		bool L_30 = V_7;
		if (!L_30)
		{
			goto IL_00cf;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0115;
	}

IL_00cf:
	{
		// for (var i = 0; i < ExcludedTypeIndices.Length; i++) {
		V_8 = 0;
		goto IL_00fe;
	}

IL_00d4:
	{
		// if (Array.IndexOf (filter.ExcludedTypeIndices, ExcludedTypeIndices[i]) == -1) {
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_31 = ___filter0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = L_31->___ExcludedTypeIndices_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = __this->___ExcludedTypeIndices_8;
		int32_t L_34 = V_8;
		int32_t L_35 = L_34;
		int32_t L_36 = (L_33)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_35));
		int32_t L_37;
		L_37 = Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m697B633D0C1EECAC6C493EC797FC44416F706F4F(L_32, L_36, Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m697B633D0C1EECAC6C493EC797FC44416F706F4F_RuntimeMethod_var);
		V_9 = (bool)((((int32_t)L_37) == ((int32_t)(-1)))? 1 : 0);
		bool L_38 = V_9;
		if (!L_38)
		{
			goto IL_00f7;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0115;
	}

IL_00f7:
	{
		// for (var i = 0; i < ExcludedTypeIndices.Length; i++) {
		int32_t L_39 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00fe:
	{
		// for (var i = 0; i < ExcludedTypeIndices.Length; i++) {
		int32_t L_40 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = __this->___ExcludedTypeIndices_8;
		V_10 = (bool)((((int32_t)L_40) < ((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length))))? 1 : 0);
		bool L_42 = V_10;
		if (L_42)
		{
			goto IL_00d4;
		}
	}
	{
	}

IL_0111:
	{
		// return true;
		V_1 = (bool)1;
		goto IL_0115;
	}

IL_0115:
	{
		// }
		bool L_43 = V_1;
		return L_43;
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
// Conversion methods for marshalling of: Leopotam.Ecs.EcsFilter/Enumerator
IL2CPP_EXTERN_C void Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B_marshal_pinvoke(const Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B& unmarshaled, Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B_marshaled_pinvoke& marshaled)
{
	Exception_t* ____filter_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_filter' of type 'Enumerator': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____filter_0Exception, NULL);
}
IL2CPP_EXTERN_C void Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B_marshal_pinvoke_back(const Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B_marshaled_pinvoke& marshaled, Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B& unmarshaled)
{
	Exception_t* ____filter_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_filter' of type 'Enumerator': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____filter_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Leopotam.Ecs.EcsFilter/Enumerator
IL2CPP_EXTERN_C void Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B_marshal_pinvoke_cleanup(Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Leopotam.Ecs.EcsFilter/Enumerator
IL2CPP_EXTERN_C void Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B_marshal_com(const Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B& unmarshaled, Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B_marshaled_com& marshaled)
{
	Exception_t* ____filter_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_filter' of type 'Enumerator': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____filter_0Exception, NULL);
}
IL2CPP_EXTERN_C void Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B_marshal_com_back(const Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B_marshaled_com& marshaled, Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B& unmarshaled)
{
	Exception_t* ____filter_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_filter' of type 'Enumerator': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____filter_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Leopotam.Ecs.EcsFilter/Enumerator
IL2CPP_EXTERN_C void Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B_marshal_com_cleanup(Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B_marshaled_com& marshaled)
{
}
// System.Void Leopotam.Ecs.EcsFilter/Enumerator::.ctor(Leopotam.Ecs.EcsFilter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mAD2CACAE4DC96A5F987178A5C4532E38610796C2 (Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B* __this, EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* ___filter0, const RuntimeMethod* method) 
{
	{
		// _filter = filter;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_0 = ___filter0;
		__this->____filter_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____filter_0), (void*)L_0);
		// _count = _filter.GetEntitiesCount ();
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_1 = __this->____filter_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = EcsFilter_GetEntitiesCount_m1BDEEE64638444BB80F6331A144CE7C760ECE9C1_inline(L_1, NULL);
		__this->____count_1 = L_2;
		// _idx = -1;
		__this->____idx_2 = (-1);
		// _filter.Lock ();
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_3 = __this->____filter_0;
		NullCheck(L_3);
		EcsFilter_Lock_mA02D6F8F94E8DE65F1DC6F854EF457260AFF57F8_inline(L_3, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator__ctor_mAD2CACAE4DC96A5F987178A5C4532E38610796C2_AdjustorThunk (RuntimeObject* __this, EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* ___filter0, const RuntimeMethod* method)
{
	Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B*>(__this + _offset);
	Enumerator__ctor_mAD2CACAE4DC96A5F987178A5C4532E38610796C2_inline(_thisAdjusted, ___filter0, method);
}
// System.Int32 Leopotam.Ecs.EcsFilter/Enumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_m3643613B3D6014D3200CB8D0F5F50F0C6CCFFCCD (Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B* __this, const RuntimeMethod* method) 
{
	{
		// get => _idx;
		int32_t L_0 = __this->____idx_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t Enumerator_get_Current_m3643613B3D6014D3200CB8D0F5F50F0C6CCFFCCD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Enumerator_get_Current_m3643613B3D6014D3200CB8D0F5F50F0C6CCFFCCD_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Leopotam.Ecs.EcsFilter/Enumerator::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mAB0D6EEA7028DFCB8261808853152882FC8EBBA8 (Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B* __this, const RuntimeMethod* method) 
{
	{
		// _filter.Unlock ();
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_0 = __this->____filter_0;
		EcsFilter_Unlock_m194398A287AA4320005015ED2F33DB4116FF50B7_inline(L_0, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Dispose_mAB0D6EEA7028DFCB8261808853152882FC8EBBA8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B*>(__this + _offset);
	Enumerator_Dispose_mAB0D6EEA7028DFCB8261808853152882FC8EBBA8_inline(_thisAdjusted, method);
}
// System.Boolean Leopotam.Ecs.EcsFilter/Enumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mA175620871ECBCBDEA305F457591FD1A5197389E (Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// return ++_idx < _count;
		int32_t L_0 = __this->____idx_2;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t L_1 = V_0;
		__this->____idx_2 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____count_1;
		V_1 = (bool)((((int32_t)L_2) < ((int32_t)L_3))? 1 : 0);
		goto IL_001d;
	}

IL_001d:
	{
		// }
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool Enumerator_MoveNext_mA175620871ECBCBDEA305F457591FD1A5197389E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B*>(__this + _offset);
	bool _returnValue;
	_returnValue = Enumerator_MoveNext_mA175620871ECBCBDEA305F457591FD1A5197389E_inline(_thisAdjusted, method);
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


// Conversion methods for marshalling of: Leopotam.Ecs.EcsFilter/DelayedOp
IL2CPP_EXTERN_C void DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643_marshal_pinvoke(const DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643& unmarshaled, DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Entity_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Entity' of type 'DelayedOp'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Entity_1Exception, NULL);
}
IL2CPP_EXTERN_C void DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643_marshal_pinvoke_back(const DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643_marshaled_pinvoke& marshaled, DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643& unmarshaled)
{
	Exception_t* ___Entity_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Entity' of type 'DelayedOp'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Entity_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Leopotam.Ecs.EcsFilter/DelayedOp
IL2CPP_EXTERN_C void DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643_marshal_pinvoke_cleanup(DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: Leopotam.Ecs.EcsFilter/DelayedOp
IL2CPP_EXTERN_C void DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643_marshal_com(const DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643& unmarshaled, DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643_marshaled_com& marshaled)
{
	Exception_t* ___Entity_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Entity' of type 'DelayedOp'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Entity_1Exception, NULL);
}
IL2CPP_EXTERN_C void DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643_marshal_com_back(const DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643_marshaled_com& marshaled, DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643& unmarshaled)
{
	Exception_t* ___Entity_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Entity' of type 'DelayedOp'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Entity_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Leopotam.Ecs.EcsFilter/DelayedOp
IL2CPP_EXTERN_C void DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643_marshal_com_cleanup(DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643_marshaled_com& marshaled)
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
// System.Void Leopotam.Ecs.EcsSystems::AddDebugListener(Leopotam.Ecs.IEcsSystemsDebugListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsSystems_AddDebugListener_m3D02F0F7E69A82A2C7182B7972EE5739EC6DB9A1 (EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* __this, RuntimeObject* ___listener0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB805BC5C24A8126195D8C78BCE8FC75BFA900E38_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (listener == null) { throw new Exception ("listener is null"); }
		RuntimeObject* L_0 = ___listener0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// if (listener == null) { throw new Exception ("listener is null"); }
		Exception_t* L_2 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9AB398480C1B076194BB4CBA8FB26B3378F973A6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsSystems_AddDebugListener_m3D02F0F7E69A82A2C7182B7972EE5739EC6DB9A1_RuntimeMethod_var)));
	}

IL_0015:
	{
		// _debugListeners.Add (listener);
		List_1_t0F98A68EA406CEAC8C6D79EBCA75F0D6C6FC4E70* L_3 = __this->____debugListeners_9;
		RuntimeObject* L_4 = ___listener0;
		List_1_Add_mB805BC5C24A8126195D8C78BCE8FC75BFA900E38_inline(L_3, L_4, List_1_Add_mB805BC5C24A8126195D8C78BCE8FC75BFA900E38_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Leopotam.Ecs.EcsSystems::RemoveDebugListener(Leopotam.Ecs.IEcsSystemsDebugListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsSystems_RemoveDebugListener_m9C8166B4BF0D4BB8F4249CB1416A516C40D9939E (EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* __this, RuntimeObject* ___listener0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mBA1F962358471BBAC734DF0BCC09177CD8B6A79C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (listener == null) { throw new Exception ("listener is null"); }
		RuntimeObject* L_0 = ___listener0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// if (listener == null) { throw new Exception ("listener is null"); }
		Exception_t* L_2 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9AB398480C1B076194BB4CBA8FB26B3378F973A6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsSystems_RemoveDebugListener_m9C8166B4BF0D4BB8F4249CB1416A516C40D9939E_RuntimeMethod_var)));
	}

IL_0015:
	{
		// _debugListeners.Remove (listener);
		List_1_t0F98A68EA406CEAC8C6D79EBCA75F0D6C6FC4E70* L_3 = __this->____debugListeners_9;
		RuntimeObject* L_4 = ___listener0;
		bool L_5;
		L_5 = List_1_Remove_mBA1F962358471BBAC734DF0BCC09177CD8B6A79C(L_3, L_4, List_1_Remove_mBA1F962358471BBAC734DF0BCC09177CD8B6A79C_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Leopotam.Ecs.EcsSystems::.ctor(Leopotam.Ecs.EcsWorld,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsSystems__ctor_m9EEBEADC48F59CC8272A29A355A23AF492857B4B (EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* __this, EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* ___world0, String_t* ___name1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA89437E6304FF9DE4848A9FFF946BF49A0F5DC79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mAF56F61CBD9F77BAFCE5E2591712018424E7DB22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsGrowList_1__ctor_m2D0E0C3C4F67DFE1B2189E6CD60E541BFF82F977_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsGrowList_1__ctor_m8EF3B1BEB3E023A2240DED5D66296C53791C5948_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsGrowList_1_t006CB893F5B32B3D946B3134BB7AADB9976F6676_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsGrowList_1_tD18B57B6C1A2CB2A9F73AA1DC91373C73ED94442_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE43CC0AF1036A41B4A33687F520868B22A774281_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0F98A68EA406CEAC8C6D79EBCA75F0D6C6FC4E70_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly EcsGrowList<IEcsSystem> _allSystems = new EcsGrowList<IEcsSystem> (64);
		EcsGrowList_1_t006CB893F5B32B3D946B3134BB7AADB9976F6676* L_0 = (EcsGrowList_1_t006CB893F5B32B3D946B3134BB7AADB9976F6676*)il2cpp_codegen_object_new(EcsGrowList_1_t006CB893F5B32B3D946B3134BB7AADB9976F6676_il2cpp_TypeInfo_var);
		EcsGrowList_1__ctor_m2D0E0C3C4F67DFE1B2189E6CD60E541BFF82F977_inline(L_0, ((int32_t)64), EcsGrowList_1__ctor_m2D0E0C3C4F67DFE1B2189E6CD60E541BFF82F977_RuntimeMethod_var);
		__this->____allSystems_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____allSystems_2), (void*)L_0);
		// readonly EcsGrowList<EcsSystemsRunItem> _runSystems = new EcsGrowList<EcsSystemsRunItem> (64);
		EcsGrowList_1_tD18B57B6C1A2CB2A9F73AA1DC91373C73ED94442* L_1 = (EcsGrowList_1_tD18B57B6C1A2CB2A9F73AA1DC91373C73ED94442*)il2cpp_codegen_object_new(EcsGrowList_1_tD18B57B6C1A2CB2A9F73AA1DC91373C73ED94442_il2cpp_TypeInfo_var);
		EcsGrowList_1__ctor_m8EF3B1BEB3E023A2240DED5D66296C53791C5948_inline(L_1, ((int32_t)64), EcsGrowList_1__ctor_m8EF3B1BEB3E023A2240DED5D66296C53791C5948_RuntimeMethod_var);
		__this->____runSystems_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____runSystems_3), (void*)L_1);
		// readonly Dictionary<int, int> _namedRunSystems = new Dictionary<int, int> (64);
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_2 = (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*)il2cpp_codegen_object_new(Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mAF56F61CBD9F77BAFCE5E2591712018424E7DB22(L_2, ((int32_t)64), Dictionary_2__ctor_mAF56F61CBD9F77BAFCE5E2591712018424E7DB22_RuntimeMethod_var);
		__this->____namedRunSystems_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____namedRunSystems_4), (void*)L_2);
		// readonly Dictionary<Type, object> _injections = new Dictionary<Type, object> (32);
		Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* L_3 = (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5*)il2cpp_codegen_object_new(Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA89437E6304FF9DE4848A9FFF946BF49A0F5DC79(L_3, ((int32_t)32), Dictionary_2__ctor_mA89437E6304FF9DE4848A9FFF946BF49A0F5DC79_RuntimeMethod_var);
		__this->____injections_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____injections_5), (void*)L_3);
		// readonly List<IEcsSystemsDebugListener> _debugListeners = new List<IEcsSystemsDebugListener> (4);
		List_1_t0F98A68EA406CEAC8C6D79EBCA75F0D6C6FC4E70* L_4 = (List_1_t0F98A68EA406CEAC8C6D79EBCA75F0D6C6FC4E70*)il2cpp_codegen_object_new(List_1_t0F98A68EA406CEAC8C6D79EBCA75F0D6C6FC4E70_il2cpp_TypeInfo_var);
		List_1__ctor_mE43CC0AF1036A41B4A33687F520868B22A774281(L_4, 4, List_1__ctor_mE43CC0AF1036A41B4A33687F520868B22A774281_RuntimeMethod_var);
		__this->____debugListeners_9 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____debugListeners_9), (void*)L_4);
		// public EcsSystems (EcsWorld world, string name = null) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// World = world;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_5 = ___world0;
		__this->___World_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___World_1), (void*)L_5);
		// Name = name;
		String_t* L_6 = ___name1;
		__this->___Name_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Name_0), (void*)L_6);
		// }
		return;
	}
}
// Leopotam.Ecs.EcsSystems Leopotam.Ecs.EcsSystems::Add(Leopotam.Ecs.IEcsSystem,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* EcsSystems_Add_mA343724876083CFE729D753EE4D9E8FC03D7EE05 (EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* __this, RuntimeObject* ___system0, String_t* ___namedRunSystem1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m050AC0D9D6F681C25C12FBBC7DD71F926D206ED9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m420CFC153320557E6823B06767710D1E636E5BDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsGrowList_1_Add_m1362B595B89FB7EBA1B3331BB951D46BA18D0232_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsGrowList_1_Add_m7781F80F65A40FAF0240500CE3DC03904FDA7275_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsSystemsRunItem_tC86619AF6C15024EF70C76FA34BC7C30CC6161FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsRunSystem_t952C96C577CEBB09E08ECBBA204B2B998F358B79_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* V_9 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B15_0 = 0;
	{
		// if (system == null) { throw new Exception ("System is null."); }
		RuntimeObject* L_0 = ___system0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// if (system == null) { throw new Exception ("System is null."); }
		Exception_t* L_2 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAD9511B3791B6914024A8A85095F5542D1019951)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsSystems_Add_mA343724876083CFE729D753EE4D9E8FC03D7EE05_RuntimeMethod_var)));
	}

IL_0015:
	{
		// if (_initialized) { throw new Exception ("Cant add system after initialization."); }
		bool L_3 = __this->____initialized_7;
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		// if (_initialized) { throw new Exception ("Cant add system after initialization."); }
		Exception_t* L_5 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral629984DF45E8ABD6B751FF45E163326B9D580988)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsSystems_Add_mA343724876083CFE729D753EE4D9E8FC03D7EE05_RuntimeMethod_var)));
	}

IL_002b:
	{
		// if (_destroyed) { throw new Exception ("Cant touch after destroy."); }
		bool L_6 = __this->____destroyed_8;
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0041;
		}
	}
	{
		// if (_destroyed) { throw new Exception ("Cant touch after destroy."); }
		Exception_t* L_8 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4EB64A3A13534D8009CFBAF7571370DD449066FD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsSystems_Add_mA343724876083CFE729D753EE4D9E8FC03D7EE05_RuntimeMethod_var)));
	}

IL_0041:
	{
		// if (!string.IsNullOrEmpty (namedRunSystem) && !(system is IEcsRunSystem)) { throw new Exception ("Cant name non-IEcsRunSystem."); }
		String_t* L_9 = ___namedRunSystem1;
		bool L_10;
		L_10 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_9, NULL);
		if (L_10)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_11 = ___system0;
		G_B9_0 = ((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_11, IEcsRunSystem_t952C96C577CEBB09E08ECBBA204B2B998F358B79_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0058;
	}

IL_0057:
	{
		G_B9_0 = 0;
	}

IL_0058:
	{
		V_3 = (bool)G_B9_0;
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_0068;
		}
	}
	{
		// if (!string.IsNullOrEmpty (namedRunSystem) && !(system is IEcsRunSystem)) { throw new Exception ("Cant name non-IEcsRunSystem."); }
		Exception_t* L_13 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0983E2F566C219C5C61211ED8BC8EA7F270A906E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsSystems_Add_mA343724876083CFE729D753EE4D9E8FC03D7EE05_RuntimeMethod_var)));
	}

IL_0068:
	{
		// _allSystems.Add (system);
		EcsGrowList_1_t006CB893F5B32B3D946B3134BB7AADB9976F6676* L_14 = __this->____allSystems_2;
		RuntimeObject* L_15 = ___system0;
		EcsGrowList_1_Add_m1362B595B89FB7EBA1B3331BB951D46BA18D0232_inline(L_14, L_15, EcsGrowList_1_Add_m1362B595B89FB7EBA1B3331BB951D46BA18D0232_RuntimeMethod_var);
		// if (system is IEcsRunSystem) {
		RuntimeObject* L_16 = ___system0;
		V_4 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_16, IEcsRunSystem_t952C96C577CEBB09E08ECBBA204B2B998F358B79_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_0128;
		}
	}
	{
		// if (namedRunSystem == null && system is EcsSystems ecsSystems) {
		String_t* L_18 = ___namedRunSystem1;
		if (L_18)
		{
			goto IL_009a;
		}
	}
	{
		RuntimeObject* L_19 = ___system0;
		V_5 = ((EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B*)IsInstSealed((RuntimeObject*)L_19, EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B_il2cpp_TypeInfo_var));
		EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* L_20 = V_5;
		G_B15_0 = ((!(((RuntimeObject*)(EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B*)L_20) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_009b;
	}

IL_009a:
	{
		G_B15_0 = 0;
	}

IL_009b:
	{
		V_6 = (bool)G_B15_0;
		bool L_21 = V_6;
		if (!L_21)
		{
			goto IL_00ac;
		}
	}
	{
		// namedRunSystem = ecsSystems.Name;
		EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* L_22 = V_5;
		String_t* L_23 = L_22->___Name_0;
		___namedRunSystem1 = L_23;
	}

IL_00ac:
	{
		// if (namedRunSystem != null) {
		String_t* L_24 = ___namedRunSystem1;
		V_7 = (bool)((!(((RuntimeObject*)(String_t*)L_24) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_25 = V_7;
		if (!L_25)
		{
			goto IL_0103;
		}
	}
	{
		// if (_namedRunSystems.ContainsKey (namedRunSystem.GetHashCode ())) {
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_26 = __this->____namedRunSystems_4;
		String_t* L_27 = ___namedRunSystem1;
		int32_t L_28;
		L_28 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_27);
		bool L_29;
		L_29 = Dictionary_2_ContainsKey_m050AC0D9D6F681C25C12FBBC7DD71F926D206ED9(L_26, L_28, Dictionary_2_ContainsKey_m050AC0D9D6F681C25C12FBBC7DD71F926D206ED9_RuntimeMethod_var);
		V_8 = L_29;
		bool L_30 = V_8;
		if (!L_30)
		{
			goto IL_00e5;
		}
	}
	{
		// throw new Exception ($"Cant add named system - \"{namedRunSystem}\" name already exists.");
		String_t* L_31 = ___namedRunSystem1;
		String_t* L_32;
		L_32 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBAD9D618F46B8767EA3F5D2E39C4174C54422E7A)), L_31, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC74D986764FC80FC48FB6A690AE1752FE4336E20)), NULL);
		Exception_t* L_33 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_33, L_32, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_33, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsSystems_Add_mA343724876083CFE729D753EE4D9E8FC03D7EE05_RuntimeMethod_var)));
	}

IL_00e5:
	{
		// _namedRunSystems[namedRunSystem.GetHashCode ()] = _runSystems.Count;
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_34 = __this->____namedRunSystems_4;
		String_t* L_35 = ___namedRunSystem1;
		int32_t L_36;
		L_36 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_35);
		EcsGrowList_1_tD18B57B6C1A2CB2A9F73AA1DC91373C73ED94442* L_37 = __this->____runSystems_3;
		int32_t L_38 = L_37->___Count_1;
		Dictionary_2_set_Item_m420CFC153320557E6823B06767710D1E636E5BDF(L_34, L_36, L_38, Dictionary_2_set_Item_m420CFC153320557E6823B06767710D1E636E5BDF_RuntimeMethod_var);
	}

IL_0103:
	{
		// _runSystems.Add (new EcsSystemsRunItem { Active = true, System = (IEcsRunSystem) system });
		EcsGrowList_1_tD18B57B6C1A2CB2A9F73AA1DC91373C73ED94442* L_39 = __this->____runSystems_3;
		EcsSystemsRunItem_tC86619AF6C15024EF70C76FA34BC7C30CC6161FF* L_40 = (EcsSystemsRunItem_tC86619AF6C15024EF70C76FA34BC7C30CC6161FF*)il2cpp_codegen_object_new(EcsSystemsRunItem_tC86619AF6C15024EF70C76FA34BC7C30CC6161FF_il2cpp_TypeInfo_var);
		EcsSystemsRunItem__ctor_m5583332E82FC941C64E61B66DCA60CDBFF88674A(L_40, NULL);
		EcsSystemsRunItem_tC86619AF6C15024EF70C76FA34BC7C30CC6161FF* L_41 = L_40;
		L_41->___Active_0 = (bool)1;
		EcsSystemsRunItem_tC86619AF6C15024EF70C76FA34BC7C30CC6161FF* L_42 = L_41;
		RuntimeObject* L_43 = ___system0;
		L_42->___System_1 = ((RuntimeObject*)Castclass((RuntimeObject*)L_43, IEcsRunSystem_t952C96C577CEBB09E08ECBBA204B2B998F358B79_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_42->___System_1), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_43, IEcsRunSystem_t952C96C577CEBB09E08ECBBA204B2B998F358B79_il2cpp_TypeInfo_var)));
		EcsGrowList_1_Add_m7781F80F65A40FAF0240500CE3DC03904FDA7275_inline(L_39, L_42, EcsGrowList_1_Add_m7781F80F65A40FAF0240500CE3DC03904FDA7275_RuntimeMethod_var);
	}

IL_0128:
	{
		// return this;
		V_9 = __this;
		goto IL_012d;
	}

IL_012d:
	{
		// }
		EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* L_44 = V_9;
		return L_44;
	}
}
// System.Int32 Leopotam.Ecs.EcsSystems::GetNamedRunSystem(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EcsSystems_GetNamedRunSystem_mCE067A379BFC7FD092B657BCC59A6FB29DF05977 (EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mAAEB730BB484D3ECA345BF704F67084E465FFBF9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		// return _namedRunSystems.TryGetValue (name.GetHashCode (), out var idx) ? idx : -1;
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_0 = __this->____namedRunSystems_4;
		String_t* L_1 = ___name0;
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_mAAEB730BB484D3ECA345BF704F67084E465FFBF9(L_0, L_2, (&V_0), Dictionary_2_TryGetValue_mAAEB730BB484D3ECA345BF704F67084E465FFBF9_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0019;
		}
	}
	{
		G_B3_0 = (-1);
		goto IL_001a;
	}

IL_0019:
	{
		int32_t L_4 = V_0;
		G_B3_0 = L_4;
	}

IL_001a:
	{
		V_1 = G_B3_0;
		goto IL_001d;
	}

IL_001d:
	{
		// }
		int32_t L_5 = V_1;
		return L_5;
	}
}
// System.Void Leopotam.Ecs.EcsSystems::SetRunSystemState(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsSystems_SetRunSystemState_mA144399AAF2339C35D37DE3D80EF51B04A50F78A (EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* __this, int32_t ___idx0, bool ___state1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (idx < 0 || idx >= _runSystems.Count) { throw new Exception ("Invalid index"); }
		int32_t L_0 = ___idx0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = ___idx0;
		EcsGrowList_1_tD18B57B6C1A2CB2A9F73AA1DC91373C73ED94442* L_2 = __this->____runSystems_3;
		int32_t L_3 = L_2->___Count_1;
		G_B3_0 = ((((int32_t)((((int32_t)L_1) < ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 1;
	}

IL_0019:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		// if (idx < 0 || idx >= _runSystems.Count) { throw new Exception ("Invalid index"); }
		Exception_t* L_5 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD005F93B177BE1B4026669C892E44D2F18CCCD6C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsSystems_SetRunSystemState_mA144399AAF2339C35D37DE3D80EF51B04A50F78A_RuntimeMethod_var)));
	}

IL_0029:
	{
		// _runSystems.Items[idx].Active = state;
		EcsGrowList_1_tD18B57B6C1A2CB2A9F73AA1DC91373C73ED94442* L_6 = __this->____runSystems_3;
		EcsSystemsRunItemU5BU5D_tC0773D762D85EEA5701C25D539B2F787110F5E29* L_7 = L_6->___Items_0;
		int32_t L_8 = ___idx0;
		int32_t L_9 = L_8;
		EcsSystemsRunItem_tC86619AF6C15024EF70C76FA34BC7C30CC6161FF* L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		bool L_11 = ___state1;
		L_10->___Active_0 = L_11;
		// }
		return;
	}
}
// System.Boolean Leopotam.Ecs.EcsSystems::GetRunSystemState(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsSystems_GetRunSystemState_mF1C4467122FAD975341916824456CE9ED4DBA97F (EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* __this, int32_t ___idx0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// if (idx < 0 || idx >= _runSystems.Count) { throw new Exception ("Invalid index"); }
		int32_t L_0 = ___idx0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = ___idx0;
		EcsGrowList_1_tD18B57B6C1A2CB2A9F73AA1DC91373C73ED94442* L_2 = __this->____runSystems_3;
		int32_t L_3 = L_2->___Count_1;
		G_B3_0 = ((((int32_t)((((int32_t)L_1) < ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 1;
	}

IL_0019:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		// if (idx < 0 || idx >= _runSystems.Count) { throw new Exception ("Invalid index"); }
		Exception_t* L_5 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD005F93B177BE1B4026669C892E44D2F18CCCD6C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsSystems_GetRunSystemState_mF1C4467122FAD975341916824456CE9ED4DBA97F_RuntimeMethod_var)));
	}

IL_0029:
	{
		// return _runSystems.Items[idx].Active;
		EcsGrowList_1_tD18B57B6C1A2CB2A9F73AA1DC91373C73ED94442* L_6 = __this->____runSystems_3;
		EcsSystemsRunItemU5BU5D_tC0773D762D85EEA5701C25D539B2F787110F5E29* L_7 = L_6->___Items_0;
		int32_t L_8 = ___idx0;
		int32_t L_9 = L_8;
		EcsSystemsRunItem_tC86619AF6C15024EF70C76FA34BC7C30CC6161FF* L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		bool L_11 = L_10->___Active_0;
		V_1 = L_11;
		goto IL_003e;
	}

IL_003e:
	{
		// }
		bool L_12 = V_1;
		return L_12;
	}
}
// Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.IEcsSystem> Leopotam.Ecs.EcsSystems::GetAllSystems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsGrowList_1_t006CB893F5B32B3D946B3134BB7AADB9976F6676* EcsSystems_GetAllSystems_m1C39035CC02ADEE0D8E009F94F8BED8B0E9ED480 (EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* __this, const RuntimeMethod* method) 
{
	EcsGrowList_1_t006CB893F5B32B3D946B3134BB7AADB9976F6676* V_0 = NULL;
	{
		// return _allSystems;
		EcsGrowList_1_t006CB893F5B32B3D946B3134BB7AADB9976F6676* L_0 = __this->____allSystems_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		EcsGrowList_1_t006CB893F5B32B3D946B3134BB7AADB9976F6676* L_1 = V_0;
		return L_1;
	}
}
// Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsSystemsRunItem> Leopotam.Ecs.EcsSystems::GetRunSystems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsGrowList_1_tD18B57B6C1A2CB2A9F73AA1DC91373C73ED94442* EcsSystems_GetRunSystems_mBA38AD6D5B0F797CF9866E796820627BD973A8E5 (EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* __this, const RuntimeMethod* method) 
{
	EcsGrowList_1_tD18B57B6C1A2CB2A9F73AA1DC91373C73ED94442* V_0 = NULL;
	{
		// return _runSystems;
		EcsGrowList_1_tD18B57B6C1A2CB2A9F73AA1DC91373C73ED94442* L_0 = __this->____runSystems_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		EcsGrowList_1_tD18B57B6C1A2CB2A9F73AA1DC91373C73ED94442* L_1 = V_0;
		return L_1;
	}
}
// Leopotam.Ecs.EcsSystems Leopotam.Ecs.EcsSystems::Inject(System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* EcsSystems_Inject_mF2CC0D4D2815DD8C43515393BA345688E7FDDB84 (EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* __this, RuntimeObject* ___obj0, Type_t* ___overridenType1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mDCA5D6962B16CA1ECF35EC04B0F4E79475C5EC96_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* V_4 = NULL;
	int32_t G_B7_0 = 0;
	{
		// if (_initialized) { throw new Exception ("Cant inject after initialization."); }
		bool L_0 = __this->____initialized_7;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// if (_initialized) { throw new Exception ("Cant inject after initialization."); }
		Exception_t* L_2 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6FC4420D546F38081E27458A6B155EA0E2FBBA4D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsSystems_Inject_mF2CC0D4D2815DD8C43515393BA345688E7FDDB84_RuntimeMethod_var)));
	}

IL_0017:
	{
		// if (obj == null) { throw new Exception ("Cant inject null instance."); }
		RuntimeObject* L_3 = ___obj0;
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		// if (obj == null) { throw new Exception ("Cant inject null instance."); }
		Exception_t* L_5 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4F0C344884FC9B83B4A2A736DE917C41C17AF206)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsSystems_Inject_mF2CC0D4D2815DD8C43515393BA345688E7FDDB84_RuntimeMethod_var)));
	}

IL_002b:
	{
		// if (overridenType != null && !overridenType.IsInstanceOfType (obj)) { throw new Exception ("Invalid overriden type."); }
		Type_t* L_6 = ___overridenType1;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_6, (Type_t*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0040;
		}
	}
	{
		Type_t* L_8 = ___overridenType1;
		RuntimeObject* L_9 = ___obj0;
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(113 /* System.Boolean System.Type::IsInstanceOfType(System.Object) */, L_8, L_9);
		G_B7_0 = ((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		goto IL_0041;
	}

IL_0040:
	{
		G_B7_0 = 0;
	}

IL_0041:
	{
		V_2 = (bool)G_B7_0;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0051;
		}
	}
	{
		// if (overridenType != null && !overridenType.IsInstanceOfType (obj)) { throw new Exception ("Invalid overriden type."); }
		Exception_t* L_12 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE5BF82CEA932C3DA6E3DCA5F71AC5CC36746C870)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsSystems_Inject_mF2CC0D4D2815DD8C43515393BA345688E7FDDB84_RuntimeMethod_var)));
	}

IL_0051:
	{
		// if (overridenType == null) {
		Type_t* L_13 = ___overridenType1;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_13, (Type_t*)NULL, NULL);
		V_3 = L_14;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_0066;
		}
	}
	{
		// overridenType = obj.GetType ();
		RuntimeObject* L_16 = ___obj0;
		Type_t* L_17;
		L_17 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_16, NULL);
		___overridenType1 = L_17;
	}

IL_0066:
	{
		// _injections[overridenType] = obj;
		Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* L_18 = __this->____injections_5;
		Type_t* L_19 = ___overridenType1;
		RuntimeObject* L_20 = ___obj0;
		Dictionary_2_set_Item_mDCA5D6962B16CA1ECF35EC04B0F4E79475C5EC96(L_18, L_19, L_20, Dictionary_2_set_Item_mDCA5D6962B16CA1ECF35EC04B0F4E79475C5EC96_RuntimeMethod_var);
		// return this;
		V_4 = __this;
		goto IL_0079;
	}

IL_0079:
	{
		// }
		EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* L_21 = V_4;
		return L_21;
	}
}
// Leopotam.Ecs.EcsSystems Leopotam.Ecs.EcsSystems::ProcessInjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* EcsSystems_ProcessInjects_m16FD1E7A4FD791B01481D017CA42C54DEDE8AD36 (EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mEACC35835C05B20642437541D2844FDA88378AAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mDCA5D6962B16CA1ECF35EC04B0F4E79475C5EC96_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mA452FB910DA7DD11178A7DF048CD2F9F4255F382_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m686E9F4F715B3E1E3530A9516FB350F32726418B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD550F51A6EADAA1F4604F3F610F0C7780DC8D2E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m94FB4DC031581990488B18A4B232F1E0661E51E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m09F40736D1027FF053D1615DC80BBCCDD581870E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* V_5 = NULL;
	bool V_6 = false;
	Enumerator_t54912F955AC650EB9D1184290F33662BA237EFF1 V_7;
	memset((&V_7), 0, sizeof(V_7));
	KeyValuePair_2_tEB150CB79DEEFC9D74129B8A1EB95BF14AAF20DA V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* V_10 = NULL;
	{
		// if (_initialized) { throw new Exception ("Cant inject after initialization."); }
		bool L_0 = __this->____initialized_7;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// if (_initialized) { throw new Exception ("Cant inject after initialization."); }
		Exception_t* L_2 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6FC4420D546F38081E27458A6B155EA0E2FBBA4D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsSystems_ProcessInjects_m16FD1E7A4FD791B01481D017CA42C54DEDE8AD36_RuntimeMethod_var)));
	}

IL_0017:
	{
		// if (_destroyed) { throw new Exception ("Cant touch after destroy."); }
		bool L_3 = __this->____destroyed_8;
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		// if (_destroyed) { throw new Exception ("Cant touch after destroy."); }
		Exception_t* L_5 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4EB64A3A13534D8009CFBAF7571370DD449066FD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsSystems_ProcessInjects_m16FD1E7A4FD791B01481D017CA42C54DEDE8AD36_RuntimeMethod_var)));
	}

IL_002d:
	{
		// if (!_injected) {
		bool L_6 = __this->____injected_6;
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_010a;
		}
	}
	{
		// _injected = true;
		__this->____injected_6 = (bool)1;
		// for (int i = 0, iMax = _allSystems.Count; i < iMax; i++) {
		V_3 = 0;
		// for (int i = 0, iMax = _allSystems.Count; i < iMax; i++) {
		EcsGrowList_1_t006CB893F5B32B3D946B3134BB7AADB9976F6676* L_8 = __this->____allSystems_2;
		int32_t L_9 = L_8->___Count_1;
		V_4 = L_9;
		goto IL_00fb;
	}

IL_0059:
	{
		// if (_allSystems.Items[i] is EcsSystems nestedSystems) {
		EcsGrowList_1_t006CB893F5B32B3D946B3134BB7AADB9976F6676* L_10 = __this->____allSystems_2;
		IEcsSystemU5BU5D_t01603786BF421D79490FAF8E16607C66CC2ABB2B* L_11 = L_10->___Items_0;
		int32_t L_12 = V_3;
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		V_5 = ((EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B*)IsInstSealed((RuntimeObject*)L_14, EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B_il2cpp_TypeInfo_var));
		EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* L_15 = V_5;
		V_6 = (bool)((!(((RuntimeObject*)(EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B*)L_15) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_16 = V_6;
		if (!L_16)
		{
			goto IL_00d5;
		}
	}
	{
		// foreach (var pair in _injections) {
		Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* L_17 = __this->____injections_5;
		Enumerator_t54912F955AC650EB9D1184290F33662BA237EFF1 L_18;
		L_18 = Dictionary_2_GetEnumerator_mEACC35835C05B20642437541D2844FDA88378AAB(L_17, Dictionary_2_GetEnumerator_mEACC35835C05B20642437541D2844FDA88378AAB_RuntimeMethod_var);
		V_7 = L_18;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00bb:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mA452FB910DA7DD11178A7DF048CD2F9F4255F382((&V_7), Enumerator_Dispose_mA452FB910DA7DD11178A7DF048CD2F9F4255F382_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00b0_1;
			}

IL_008a_1:
			{
				// foreach (var pair in _injections) {
				KeyValuePair_2_tEB150CB79DEEFC9D74129B8A1EB95BF14AAF20DA L_19;
				L_19 = Enumerator_get_Current_mD550F51A6EADAA1F4604F3F610F0C7780DC8D2E8_inline((&V_7), Enumerator_get_Current_mD550F51A6EADAA1F4604F3F610F0C7780DC8D2E8_RuntimeMethod_var);
				V_8 = L_19;
				// nestedSystems._injections[pair.Key] = pair.Value;
				EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* L_20 = V_5;
				Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* L_21 = L_20->____injections_5;
				Type_t* L_22;
				L_22 = KeyValuePair_2_get_Key_m94FB4DC031581990488B18A4B232F1E0661E51E6_inline((&V_8), KeyValuePair_2_get_Key_m94FB4DC031581990488B18A4B232F1E0661E51E6_RuntimeMethod_var);
				RuntimeObject* L_23;
				L_23 = KeyValuePair_2_get_Value_m09F40736D1027FF053D1615DC80BBCCDD581870E_inline((&V_8), KeyValuePair_2_get_Value_m09F40736D1027FF053D1615DC80BBCCDD581870E_RuntimeMethod_var);
				Dictionary_2_set_Item_mDCA5D6962B16CA1ECF35EC04B0F4E79475C5EC96(L_21, L_22, L_23, Dictionary_2_set_Item_mDCA5D6962B16CA1ECF35EC04B0F4E79475C5EC96_RuntimeMethod_var);
			}

IL_00b0_1:
			{
				// foreach (var pair in _injections) {
				bool L_24;
				L_24 = Enumerator_MoveNext_m686E9F4F715B3E1E3530A9516FB350F32726418B((&V_7), Enumerator_MoveNext_m686E9F4F715B3E1E3530A9516FB350F32726418B_RuntimeMethod_var);
				if (L_24)
				{
					goto IL_008a_1;
				}
			}
			{
				goto IL_00ca;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ca:
	{
		// nestedSystems.ProcessInjects ();
		EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* L_25 = V_5;
		EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* L_26;
		L_26 = EcsSystems_ProcessInjects_m16FD1E7A4FD791B01481D017CA42C54DEDE8AD36(L_25, NULL);
		goto IL_00f6;
	}

IL_00d5:
	{
		// InjectDataToSystem (_allSystems.Items[i], World, _injections);
		EcsGrowList_1_t006CB893F5B32B3D946B3134BB7AADB9976F6676* L_27 = __this->____allSystems_2;
		IEcsSystemU5BU5D_t01603786BF421D79490FAF8E16607C66CC2ABB2B* L_28 = L_27->___Items_0;
		int32_t L_29 = V_3;
		int32_t L_30 = L_29;
		RuntimeObject* L_31 = (L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_32 = __this->___World_1;
		Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* L_33 = __this->____injections_5;
		EcsSystems_InjectDataToSystem_m9618385A7688C849FDA8940B69F36FE2492A5550(L_31, L_32, L_33, NULL);
	}

IL_00f6:
	{
		// for (int i = 0, iMax = _allSystems.Count; i < iMax; i++) {
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00fb:
	{
		// for (int i = 0, iMax = _allSystems.Count; i < iMax; i++) {
		int32_t L_35 = V_3;
		int32_t L_36 = V_4;
		V_9 = (bool)((((int32_t)L_35) < ((int32_t)L_36))? 1 : 0);
		bool L_37 = V_9;
		if (L_37)
		{
			goto IL_0059;
		}
	}
	{
	}

IL_010a:
	{
		// return this;
		V_10 = __this;
		goto IL_010f;
	}

IL_010f:
	{
		// }
		EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* L_38 = V_10;
		return L_38;
	}
}
// System.Void Leopotam.Ecs.EcsSystems::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsSystems_Init_m904C81F43527CB190F17835DF10F1F64EAE5CB64 (EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsInitSystem_tE0C75B22B6D0FD328CDA5B8863A7CC4AF512BC04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsPreInitSystem_t7806A863D80BA54FA5599D875EB236D89348E1F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B75DBAF67E4FF20F08D39DC9C8BA76DFA05C0AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A6D6805DD57E5756D9C4E976A28536E727965A2);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	RuntimeObject* V_10 = NULL;
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	bool V_13 = false;
	{
		// if (_initialized) { throw new Exception ("Already initialized."); }
		bool L_0 = __this->____initialized_7;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// if (_initialized) { throw new Exception ("Already initialized."); }
		Exception_t* L_2 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral25A4FBE3BF5562DC866CA4DA98C373F38B573C74)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsSystems_Init_m904C81F43527CB190F17835DF10F1F64EAE5CB64_RuntimeMethod_var)));
	}

IL_0017:
	{
		// if (_destroyed) { throw new Exception ("Cant touch after destroy."); }
		bool L_3 = __this->____destroyed_8;
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		// if (_destroyed) { throw new Exception ("Cant touch after destroy."); }
		Exception_t* L_5 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4EB64A3A13534D8009CFBAF7571370DD449066FD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsSystems_Init_m904C81F43527CB190F17835DF10F1F64EAE5CB64_RuntimeMethod_var)));
	}

IL_002d:
	{
		// ProcessInjects ();
		EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* L_6;
		L_6 = EcsSystems_ProcessInjects_m16FD1E7A4FD791B01481D017CA42C54DEDE8AD36(__this, NULL);
		// for (int i = 0, iMax = _allSystems.Count; i < iMax; i++) {
		V_2 = 0;
		// for (int i = 0, iMax = _allSystems.Count; i < iMax; i++) {
		EcsGrowList_1_t006CB893F5B32B3D946B3134BB7AADB9976F6676* L_7 = __this->____allSystems_2;
		int32_t L_8 = L_7->___Count_1;
		V_3 = L_8;
		goto IL_0099;
	}

IL_0044:
	{
		// var system = _allSystems.Items[i];
		EcsGrowList_1_t006CB893F5B32B3D946B3134BB7AADB9976F6676* L_9 = __this->____allSystems_2;
		IEcsSystemU5BU5D_t01603786BF421D79490FAF8E16607C66CC2ABB2B* L_10 = L_9->___Items_0;
		int32_t L_11 = V_2;
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		V_4 = L_13;
		// if (system is IEcsPreInitSystem preInitSystem) {
		RuntimeObject* L_14 = V_4;
		V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_14, IEcsPreInitSystem_t7806A863D80BA54FA5599D875EB236D89348E1F4_il2cpp_TypeInfo_var));
		RuntimeObject* L_15 = V_5;
		V_6 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_15) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_16 = V_6;
		if (!L_16)
		{
			goto IL_0094;
		}
	}
	{
		// preInitSystem.PreInit ();
		RuntimeObject* L_17 = V_5;
		InterfaceActionInvoker0::Invoke(0 /* System.Void Leopotam.Ecs.IEcsPreInitSystem::PreInit() */, IEcsPreInitSystem_t7806A863D80BA54FA5599D875EB236D89348E1F4_il2cpp_TypeInfo_var, L_17);
		// World.CheckForLeakedEntities ($"{preInitSystem.GetType ().Name}.PreInit()");
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_18 = __this->___World_1;
		RuntimeObject* L_19 = V_5;
		Type_t* L_20;
		L_20 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_19, NULL);
		String_t* L_21;
		L_21 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_20);
		String_t* L_22;
		L_22 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_21, _stringLiteral4B75DBAF67E4FF20F08D39DC9C8BA76DFA05C0AA, NULL);
		bool L_23;
		L_23 = EcsWorld_CheckForLeakedEntities_mA8238916A6543AD386CD024E48DF6EB802BD9988(L_18, L_22, NULL);
	}

IL_0094:
	{
		// for (int i = 0, iMax = _allSystems.Count; i < iMax; i++) {
		int32_t L_24 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0099:
	{
		// for (int i = 0, iMax = _allSystems.Count; i < iMax; i++) {
		int32_t L_25 = V_2;
		int32_t L_26 = V_3;
		V_7 = (bool)((((int32_t)L_25) < ((int32_t)L_26))? 1 : 0);
		bool L_27 = V_7;
		if (L_27)
		{
			goto IL_0044;
		}
	}
	{
		// for (int i = 0, iMax = _allSystems.Count; i < iMax; i++) {
		V_8 = 0;
		// for (int i = 0, iMax = _allSystems.Count; i < iMax; i++) {
		EcsGrowList_1_t006CB893F5B32B3D946B3134BB7AADB9976F6676* L_28 = __this->____allSystems_2;
		int32_t L_29 = L_28->___Count_1;
		V_9 = L_29;
		goto IL_010d;
	}

IL_00b5:
	{
		// var system = _allSystems.Items[i];
		EcsGrowList_1_t006CB893F5B32B3D946B3134BB7AADB9976F6676* L_30 = __this->____allSystems_2;
		IEcsSystemU5BU5D_t01603786BF421D79490FAF8E16607C66CC2ABB2B* L_31 = L_30->___Items_0;
		int32_t L_32 = V_8;
		int32_t L_33 = L_32;
		RuntimeObject* L_34 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		V_10 = L_34;
		// if (system is IEcsInitSystem initSystem) {
		RuntimeObject* L_35 = V_10;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_35, IEcsInitSystem_tE0C75B22B6D0FD328CDA5B8863A7CC4AF512BC04_il2cpp_TypeInfo_var));
		RuntimeObject* L_36 = V_11;
		V_12 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_36) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_37 = V_12;
		if (!L_37)
		{
			goto IL_0106;
		}
	}
	{
		// initSystem.Init ();
		RuntimeObject* L_38 = V_11;
		InterfaceActionInvoker0::Invoke(0 /* System.Void Leopotam.Ecs.IEcsInitSystem::Init() */, IEcsInitSystem_tE0C75B22B6D0FD328CDA5B8863A7CC4AF512BC04_il2cpp_TypeInfo_var, L_38);
		// World.CheckForLeakedEntities ($"{initSystem.GetType ().Name}.Init()");
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_39 = __this->___World_1;
		RuntimeObject* L_40 = V_11;
		Type_t* L_41;
		L_41 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_40, NULL);
		String_t* L_42;
		L_42 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_41);
		String_t* L_43;
		L_43 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_42, _stringLiteral6A6D6805DD57E5756D9C4E976A28536E727965A2, NULL);
		bool L_44;
		L_44 = EcsWorld_CheckForLeakedEntities_mA8238916A6543AD386CD024E48DF6EB802BD9988(L_39, L_43, NULL);
	}

IL_0106:
	{
		// for (int i = 0, iMax = _allSystems.Count; i < iMax; i++) {
		int32_t L_45 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_010d:
	{
		// for (int i = 0, iMax = _allSystems.Count; i < iMax; i++) {
		int32_t L_46 = V_8;
		int32_t L_47 = V_9;
		V_13 = (bool)((((int32_t)L_46) < ((int32_t)L_47))? 1 : 0);
		bool L_48 = V_13;
		if (L_48)
		{
			goto IL_00b5;
		}
	}
	{
		// _initialized = true;
		__this->____initialized_7 = (bool)1;
		// }
		return;
	}
}
// System.Void Leopotam.Ecs.EcsSystems::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsSystems_Run_m44FBDAF554CD169B2D913C4FA5884C460105D172 (EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsRunSystem_t952C96C577CEBB09E08ECBBA204B2B998F358B79_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	EcsSystemsRunItem_tC86619AF6C15024EF70C76FA34BC7C30CC6161FF* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	{
		// if (!_initialized) { throw new Exception ($"[{Name ?? "NONAME"}] EcsSystems should be initialized before."); }
		bool L_0 = __this->____initialized_7;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		// if (!_initialized) { throw new Exception ($"[{Name ?? "NONAME"}] EcsSystems should be initialized before."); }
		String_t* L_2 = __this->___Name_0;
		String_t* L_3 = L_2;
		G_B2_0 = L_3;
		G_B2_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1));
		if (L_3)
		{
			G_B3_0 = L_3;
			G_B3_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1));
			goto IL_0023;
		}
	}
	{
		G_B3_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA66ED9C74A8CE529E01D730BA97D57E57A34F95));
		G_B3_1 = G_B2_1;
	}

IL_0023:
	{
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B3_1, G_B3_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA906DC2DAC00369EDB944E99FDB0C529B1279531)), NULL);
		Exception_t* L_5 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsSystems_Run_m44FBDAF554CD169B2D913C4FA5884C460105D172_RuntimeMethod_var)));
	}

IL_0033:
	{
		// if (_destroyed) { throw new Exception ("Cant touch after destroy."); }
		bool L_6 = __this->____destroyed_8;
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		// if (_destroyed) { throw new Exception ("Cant touch after destroy."); }
		Exception_t* L_8 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4EB64A3A13534D8009CFBAF7571370DD449066FD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsSystems_Run_m44FBDAF554CD169B2D913C4FA5884C460105D172_RuntimeMethod_var)));
	}

IL_0049:
	{
		// for (int i = 0, iMax = _runSystems.Count; i < iMax; i++) {
		V_2 = 0;
		// for (int i = 0, iMax = _runSystems.Count; i < iMax; i++) {
		EcsGrowList_1_tD18B57B6C1A2CB2A9F73AA1DC91373C73ED94442* L_9 = __this->____runSystems_3;
		int32_t L_10 = L_9->___Count_1;
		V_3 = L_10;
		goto IL_00c9;
	}

IL_0059:
	{
		// var runItem = _runSystems.Items[i];
		EcsGrowList_1_tD18B57B6C1A2CB2A9F73AA1DC91373C73ED94442* L_11 = __this->____runSystems_3;
		EcsSystemsRunItemU5BU5D_tC0773D762D85EEA5701C25D539B2F787110F5E29* L_12 = L_11->___Items_0;
		int32_t L_13 = V_2;
		int32_t L_14 = L_13;
		EcsSystemsRunItem_tC86619AF6C15024EF70C76FA34BC7C30CC6161FF* L_15 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		V_4 = L_15;
		// if (runItem.Active) {
		EcsSystemsRunItem_tC86619AF6C15024EF70C76FA34BC7C30CC6161FF* L_16 = V_4;
		bool L_17 = L_16->___Active_0;
		V_5 = L_17;
		bool L_18 = V_5;
		if (!L_18)
		{
			goto IL_0085;
		}
	}
	{
		// runItem.System.Run ();
		EcsSystemsRunItem_tC86619AF6C15024EF70C76FA34BC7C30CC6161FF* L_19 = V_4;
		RuntimeObject* L_20 = L_19->___System_1;
		InterfaceActionInvoker0::Invoke(0 /* System.Void Leopotam.Ecs.IEcsRunSystem::Run() */, IEcsRunSystem_t952C96C577CEBB09E08ECBBA204B2B998F358B79_il2cpp_TypeInfo_var, L_20);
	}

IL_0085:
	{
		// if (World.CheckForLeakedEntities (null)) {
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_21 = __this->___World_1;
		bool L_22;
		L_22 = EcsWorld_CheckForLeakedEntities_mA8238916A6543AD386CD024E48DF6EB802BD9988(L_21, (String_t*)NULL, NULL);
		V_6 = L_22;
		bool L_23 = V_6;
		if (!L_23)
		{
			goto IL_00c4;
		}
	}
	{
		// throw new Exception ($"Empty entity detected, possible memory leak in {_runSystems.Items[i].GetType ().Name}.Run ()");
		EcsGrowList_1_tD18B57B6C1A2CB2A9F73AA1DC91373C73ED94442* L_24 = __this->____runSystems_3;
		EcsSystemsRunItemU5BU5D_tC0773D762D85EEA5701C25D539B2F787110F5E29* L_25 = L_24->___Items_0;
		int32_t L_26 = V_2;
		int32_t L_27 = L_26;
		EcsSystemsRunItem_tC86619AF6C15024EF70C76FA34BC7C30CC6161FF* L_28 = (L_25)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		Type_t* L_29;
		L_29 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_28, NULL);
		String_t* L_30;
		L_30 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_29);
		String_t* L_31;
		L_31 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6A593CE8065C964E88607664A02F0AC49384C3FA)), L_30, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral526364499B42E287EE096D7EA2B6D87A51289D0E)), NULL);
		Exception_t* L_32 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_32, L_31, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_32, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsSystems_Run_m44FBDAF554CD169B2D913C4FA5884C460105D172_RuntimeMethod_var)));
	}

IL_00c4:
	{
		// for (int i = 0, iMax = _runSystems.Count; i < iMax; i++) {
		int32_t L_33 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00c9:
	{
		// for (int i = 0, iMax = _runSystems.Count; i < iMax; i++) {
		int32_t L_34 = V_2;
		int32_t L_35 = V_3;
		V_7 = (bool)((((int32_t)L_34) < ((int32_t)L_35))? 1 : 0);
		bool L_36 = V_7;
		if (L_36)
		{
			goto IL_0059;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Leopotam.Ecs.EcsSystems::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsSystems_Destroy_mA9987A30E62146C975F2C2E023AB5414FE7A9269 (EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsDestroySystem_t618262FD9F9BDF9D5B211E96F19844F71EEA0A1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsPostDestroySystem_tD4B1DAFFBAF41074077DAACFE3305204FCA06858_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsSystemsDebugListener_tF991EC1204AD1C6E572058DA150532B4DAFB6C12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mA247EEA01F5FDA110EE3868745BB7FD99EA0E758_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m5A4B69534BA097B8CFBF21644C3A01C3010DC2C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65C50EE4F514C906B18B5B9D555024AA24DD14E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE79A84F0C410242A95761BE689BB0C77471F1A4);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	RuntimeObject* V_7 = NULL;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	bool V_13 = false;
	{
		// if (_destroyed) { throw new Exception ("Already destroyed."); }
		bool L_0 = __this->____destroyed_8;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// if (_destroyed) { throw new Exception ("Already destroyed."); }
		Exception_t* L_2 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6ECE305DF9F97A39845FE33E7F8ECEDE4CAC75C1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsSystems_Destroy_mA9987A30E62146C975F2C2E023AB5414FE7A9269_RuntimeMethod_var)));
	}

IL_0017:
	{
		// _destroyed = true;
		__this->____destroyed_8 = (bool)1;
		// for (var i = _allSystems.Count - 1; i >= 0; i--) {
		EcsGrowList_1_t006CB893F5B32B3D946B3134BB7AADB9976F6676* L_3 = __this->____allSystems_2;
		int32_t L_4 = L_3->___Count_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
		goto IL_007d;
	}

IL_002e:
	{
		// var system = _allSystems.Items[i];
		EcsGrowList_1_t006CB893F5B32B3D946B3134BB7AADB9976F6676* L_5 = __this->____allSystems_2;
		IEcsSystemU5BU5D_t01603786BF421D79490FAF8E16607C66CC2ABB2B* L_6 = L_5->___Items_0;
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		V_2 = L_9;
		// if (system is IEcsDestroySystem destroySystem) {
		RuntimeObject* L_10 = V_2;
		V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_10, IEcsDestroySystem_t618262FD9F9BDF9D5B211E96F19844F71EEA0A1D_il2cpp_TypeInfo_var));
		RuntimeObject* L_11 = V_3;
		V_4 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_11) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_0078;
		}
	}
	{
		// destroySystem.Destroy ();
		RuntimeObject* L_13 = V_3;
		InterfaceActionInvoker0::Invoke(0 /* System.Void Leopotam.Ecs.IEcsDestroySystem::Destroy() */, IEcsDestroySystem_t618262FD9F9BDF9D5B211E96F19844F71EEA0A1D_il2cpp_TypeInfo_var, L_13);
		// World.CheckForLeakedEntities ($"{destroySystem.GetType ().Name}.Destroy ()");
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_14 = __this->___World_1;
		RuntimeObject* L_15 = V_3;
		Type_t* L_16;
		L_16 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_15, NULL);
		String_t* L_17;
		L_17 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_16);
		String_t* L_18;
		L_18 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_17, _stringLiteralFE79A84F0C410242A95761BE689BB0C77471F1A4, NULL);
		bool L_19;
		L_19 = EcsWorld_CheckForLeakedEntities_mA8238916A6543AD386CD024E48DF6EB802BD9988(L_14, L_18, NULL);
	}

IL_0078:
	{
		// for (var i = _allSystems.Count - 1; i >= 0; i--) {
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_20, 1));
	}

IL_007d:
	{
		// for (var i = _allSystems.Count - 1; i >= 0; i--) {
		int32_t L_21 = V_1;
		V_5 = (bool)((((int32_t)((((int32_t)L_21) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_5;
		if (L_22)
		{
			goto IL_002e;
		}
	}
	{
		// for (var i = _allSystems.Count - 1; i >= 0; i--) {
		EcsGrowList_1_t006CB893F5B32B3D946B3134BB7AADB9976F6676* L_23 = __this->____allSystems_2;
		int32_t L_24 = L_23->___Count_1;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_24, 1));
		goto IL_00f3;
	}

IL_009b:
	{
		// var system = _allSystems.Items[i];
		EcsGrowList_1_t006CB893F5B32B3D946B3134BB7AADB9976F6676* L_25 = __this->____allSystems_2;
		IEcsSystemU5BU5D_t01603786BF421D79490FAF8E16607C66CC2ABB2B* L_26 = L_25->___Items_0;
		int32_t L_27 = V_6;
		int32_t L_28 = L_27;
		RuntimeObject* L_29 = (L_26)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28));
		V_7 = L_29;
		// if (system is IEcsPostDestroySystem postDestroySystem) {
		RuntimeObject* L_30 = V_7;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_30, IEcsPostDestroySystem_tD4B1DAFFBAF41074077DAACFE3305204FCA06858_il2cpp_TypeInfo_var));
		RuntimeObject* L_31 = V_8;
		V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_31) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_32 = V_9;
		if (!L_32)
		{
			goto IL_00ec;
		}
	}
	{
		// postDestroySystem.PostDestroy ();
		RuntimeObject* L_33 = V_8;
		InterfaceActionInvoker0::Invoke(0 /* System.Void Leopotam.Ecs.IEcsPostDestroySystem::PostDestroy() */, IEcsPostDestroySystem_tD4B1DAFFBAF41074077DAACFE3305204FCA06858_il2cpp_TypeInfo_var, L_33);
		// World.CheckForLeakedEntities ($"{postDestroySystem.GetType ().Name}.PostDestroy ()");
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_34 = __this->___World_1;
		RuntimeObject* L_35 = V_8;
		Type_t* L_36;
		L_36 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_35, NULL);
		String_t* L_37;
		L_37 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_36);
		String_t* L_38;
		L_38 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_37, _stringLiteral65C50EE4F514C906B18B5B9D555024AA24DD14E4, NULL);
		bool L_39;
		L_39 = EcsWorld_CheckForLeakedEntities_mA8238916A6543AD386CD024E48DF6EB802BD9988(L_34, L_38, NULL);
	}

IL_00ec:
	{
		// for (var i = _allSystems.Count - 1; i >= 0; i--) {
		int32_t L_40 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_40, 1));
	}

IL_00f3:
	{
		// for (var i = _allSystems.Count - 1; i >= 0; i--) {
		int32_t L_41 = V_6;
		V_10 = (bool)((((int32_t)((((int32_t)L_41) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_42 = V_10;
		if (L_42)
		{
			goto IL_009b;
		}
	}
	{
		// for (int i = 0, iMax = _debugListeners.Count; i < iMax; i++) {
		V_11 = 0;
		// for (int i = 0, iMax = _debugListeners.Count; i < iMax; i++) {
		List_1_t0F98A68EA406CEAC8C6D79EBCA75F0D6C6FC4E70* L_43 = __this->____debugListeners_9;
		int32_t L_44;
		L_44 = List_1_get_Count_mA247EEA01F5FDA110EE3868745BB7FD99EA0E758_inline(L_43, List_1_get_Count_mA247EEA01F5FDA110EE3868745BB7FD99EA0E758_RuntimeMethod_var);
		V_12 = L_44;
		goto IL_012f;
	}

IL_0113:
	{
		// _debugListeners[i].OnSystemsDestroyed (this);
		List_1_t0F98A68EA406CEAC8C6D79EBCA75F0D6C6FC4E70* L_45 = __this->____debugListeners_9;
		int32_t L_46 = V_11;
		RuntimeObject* L_47;
		L_47 = List_1_get_Item_m5A4B69534BA097B8CFBF21644C3A01C3010DC2C2(L_45, L_46, List_1_get_Item_m5A4B69534BA097B8CFBF21644C3A01C3010DC2C2_RuntimeMethod_var);
		InterfaceActionInvoker1< EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* >::Invoke(0 /* System.Void Leopotam.Ecs.IEcsSystemsDebugListener::OnSystemsDestroyed(Leopotam.Ecs.EcsSystems) */, IEcsSystemsDebugListener_tF991EC1204AD1C6E572058DA150532B4DAFB6C12_il2cpp_TypeInfo_var, L_47, __this);
		// for (int i = 0, iMax = _debugListeners.Count; i < iMax; i++) {
		int32_t L_48 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_012f:
	{
		// for (int i = 0, iMax = _debugListeners.Count; i < iMax; i++) {
		int32_t L_49 = V_11;
		int32_t L_50 = V_12;
		V_13 = (bool)((((int32_t)L_49) < ((int32_t)L_50))? 1 : 0);
		bool L_51 = V_13;
		if (L_51)
		{
			goto IL_0113;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Leopotam.Ecs.EcsSystems::InjectDataToSystem(Leopotam.Ecs.IEcsSystem,Leopotam.Ecs.EcsWorld,System.Collections.Generic.Dictionary`2<System.Type,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsSystems_InjectDataToSystem_m9618385A7688C849FDA8940B69F36FE2492A5550 (RuntimeObject* ___system0, EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* ___world1, Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* ___injections2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mEACC35835C05B20642437541D2844FDA88378AAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsIgnoreInjectAttribute_t5C2E58E9FA2D3E282E15334B5523F49E97851448_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mA452FB910DA7DD11178A7DF048CD2F9F4255F382_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m686E9F4F715B3E1E3530A9516FB350F32726418B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD550F51A6EADAA1F4604F3F610F0C7780DC8D2E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m94FB4DC031581990488B18A4B232F1E0661E51E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m09F40736D1027FF053D1615DC80BBCCDD581870E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	Type_t* V_3 = NULL;
	FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* V_4 = NULL;
	int32_t V_5 = 0;
	FieldInfo_t* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	Enumerator_t54912F955AC650EB9D1184290F33662BA237EFF1 V_11;
	memset((&V_11), 0, sizeof(V_11));
	KeyValuePair_2_tEB150CB79DEEFC9D74129B8A1EB95BF14AAF20DA V_12;
	memset((&V_12), 0, sizeof(V_12));
	bool V_13 = false;
	int32_t G_B4_0 = 0;
	{
		// var systemType = system.GetType ();
		RuntimeObject* L_0 = ___system0;
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		V_0 = L_1;
		// var worldType = world.GetType ();
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_2 = ___world1;
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_2, NULL);
		V_1 = L_3;
		// var filterType = typeof (EcsFilter);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		V_2 = L_5;
		// var ignoreType = typeof (EcsIgnoreInjectAttribute);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (EcsIgnoreInjectAttribute_t5C2E58E9FA2D3E282E15334B5523F49E97851448_0_0_0_var) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		V_3 = L_7;
		// foreach (var f in systemType.GetFields (BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Instance)) {
		Type_t* L_8 = V_0;
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_9;
		L_9 = VirtualFuncInvoker1< FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8*, int32_t >::Invoke(84 /* System.Reflection.FieldInfo[] System.Type::GetFields(System.Reflection.BindingFlags) */, L_8, ((int32_t)52));
		V_4 = L_9;
		V_5 = 0;
		goto IL_0138;
	}

IL_0038:
	{
		// foreach (var f in systemType.GetFields (BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Instance)) {
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_10 = V_4;
		int32_t L_11 = V_5;
		int32_t L_12 = L_11;
		FieldInfo_t* L_13 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		V_6 = L_13;
		// if (f.IsStatic || Attribute.IsDefined (f, ignoreType)) {
		FieldInfo_t* L_14 = V_6;
		bool L_15;
		L_15 = FieldInfo_get_IsStatic_mEBBEB7B19A48D3E11BE830F3704C131A681F6139(L_14, NULL);
		if (L_15)
		{
			goto IL_0053;
		}
	}
	{
		FieldInfo_t* L_16 = V_6;
		Type_t* L_17 = V_3;
		bool L_18;
		L_18 = Attribute_IsDefined_m2EB6141EC7A5855CB8FCAE554ED52458C5475B86(L_16, L_17, NULL);
		G_B4_0 = ((int32_t)(L_18));
		goto IL_0054;
	}

IL_0053:
	{
		G_B4_0 = 1;
	}

IL_0054:
	{
		V_7 = (bool)G_B4_0;
		bool L_19 = V_7;
		if (!L_19)
		{
			goto IL_0060;
		}
	}
	{
		// continue;
		goto IL_0132;
	}

IL_0060:
	{
		// if (f.FieldType.IsAssignableFrom (worldType)) {
		FieldInfo_t* L_20 = V_6;
		Type_t* L_21;
		L_21 = VirtualFuncInvoker0< Type_t* >::Invoke(16 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_20);
		Type_t* L_22 = V_1;
		bool L_23;
		L_23 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(21 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_21, L_22);
		V_8 = L_23;
		bool L_24 = V_8;
		if (!L_24)
		{
			goto IL_0083;
		}
	}
	{
		// f.SetValue (system, world);
		FieldInfo_t* L_25 = V_6;
		RuntimeObject* L_26 = ___system0;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_27 = ___world1;
		FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(L_25, L_26, L_27, NULL);
		// continue;
		goto IL_0132;
	}

IL_0083:
	{
		// if (f.FieldType == filterType) {
		FieldInfo_t* L_28 = V_6;
		Type_t* L_29;
		L_29 = VirtualFuncInvoker0< Type_t* >::Invoke(16 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_28);
		Type_t* L_30 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_29, L_30, NULL);
		V_9 = L_31;
		bool L_32 = V_9;
		if (!L_32)
		{
			goto IL_00a8;
		}
	}
	{
		// throw new Exception ($"Cant use EcsFilter type at \"{system}\" system for dependency injection, use generic version instead");
		RuntimeObject* L_33 = ___system0;
		String_t* L_34;
		L_34 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6CB6CBAEFB707D790B1CB2ED0E4DEF2AB92D4CA7)), L_33, NULL);
		Exception_t* L_35 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_35, L_34, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsSystems_InjectDataToSystem_m9618385A7688C849FDA8940B69F36FE2492A5550_RuntimeMethod_var)));
	}

IL_00a8:
	{
		// if (f.FieldType.IsSubclassOf (filterType)) {
		FieldInfo_t* L_36 = V_6;
		Type_t* L_37;
		L_37 = VirtualFuncInvoker0< Type_t* >::Invoke(16 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_36);
		Type_t* L_38 = V_2;
		bool L_39;
		L_39 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(20 /* System.Boolean System.Type::IsSubclassOf(System.Type) */, L_37, L_38);
		V_10 = L_39;
		bool L_40 = V_10;
		if (!L_40)
		{
			goto IL_00d5;
		}
	}
	{
		// f.SetValue (system, world.GetFilter (f.FieldType));
		FieldInfo_t* L_41 = V_6;
		RuntimeObject* L_42 = ___system0;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_43 = ___world1;
		FieldInfo_t* L_44 = V_6;
		Type_t* L_45;
		L_45 = VirtualFuncInvoker0< Type_t* >::Invoke(16 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_44);
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_46;
		L_46 = EcsWorld_GetFilter_m52CD6F02CE215E1CA1A2C041022F5EE4E4283A44(L_43, L_45, (bool)1, NULL);
		FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(L_41, L_42, L_46, NULL);
		// continue;
		goto IL_0132;
	}

IL_00d5:
	{
		// foreach (var pair in injections) {
		Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* L_47 = ___injections2;
		Enumerator_t54912F955AC650EB9D1184290F33662BA237EFF1 L_48;
		L_48 = Dictionary_2_GetEnumerator_mEACC35835C05B20642437541D2844FDA88378AAB(L_47, Dictionary_2_GetEnumerator_mEACC35835C05B20642437541D2844FDA88378AAB_RuntimeMethod_var);
		V_11 = L_48;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0122:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mA452FB910DA7DD11178A7DF048CD2F9F4255F382((&V_11), Enumerator_Dispose_mA452FB910DA7DD11178A7DF048CD2F9F4255F382_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0117_1;
			}

IL_00e0_1:
			{
				// foreach (var pair in injections) {
				KeyValuePair_2_tEB150CB79DEEFC9D74129B8A1EB95BF14AAF20DA L_49;
				L_49 = Enumerator_get_Current_mD550F51A6EADAA1F4604F3F610F0C7780DC8D2E8_inline((&V_11), Enumerator_get_Current_mD550F51A6EADAA1F4604F3F610F0C7780DC8D2E8_RuntimeMethod_var);
				V_12 = L_49;
				// if (f.FieldType.IsAssignableFrom (pair.Key)) {
				FieldInfo_t* L_50 = V_6;
				Type_t* L_51;
				L_51 = VirtualFuncInvoker0< Type_t* >::Invoke(16 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_50);
				Type_t* L_52;
				L_52 = KeyValuePair_2_get_Key_m94FB4DC031581990488B18A4B232F1E0661E51E6_inline((&V_12), KeyValuePair_2_get_Key_m94FB4DC031581990488B18A4B232F1E0661E51E6_RuntimeMethod_var);
				bool L_53;
				L_53 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(21 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_51, L_52);
				V_13 = L_53;
				bool L_54 = V_13;
				if (!L_54)
				{
					goto IL_0116_1;
				}
			}
			{
				// f.SetValue (system, pair.Value);
				FieldInfo_t* L_55 = V_6;
				RuntimeObject* L_56 = ___system0;
				RuntimeObject* L_57;
				L_57 = KeyValuePair_2_get_Value_m09F40736D1027FF053D1615DC80BBCCDD581870E_inline((&V_12), KeyValuePair_2_get_Value_m09F40736D1027FF053D1615DC80BBCCDD581870E_RuntimeMethod_var);
				FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(L_55, L_56, L_57, NULL);
				// break;
				goto IL_0120_1;
			}

IL_0116_1:
			{
			}

IL_0117_1:
			{
				// foreach (var pair in injections) {
				bool L_58;
				L_58 = Enumerator_MoveNext_m686E9F4F715B3E1E3530A9516FB350F32726418B((&V_11), Enumerator_MoveNext_m686E9F4F715B3E1E3530A9516FB350F32726418B_RuntimeMethod_var);
				if (L_58)
				{
					goto IL_00e0_1;
				}
			}

IL_0120_1:
			{
				goto IL_0131;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0131:
	{
	}

IL_0132:
	{
		int32_t L_59 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_59, 1));
	}

IL_0138:
	{
		// foreach (var f in systemType.GetFields (BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Instance)) {
		int32_t L_60 = V_5;
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_61 = V_4;
		if ((((int32_t)L_60) < ((int32_t)((int32_t)(((RuntimeArray*)L_61)->max_length)))))
		{
			goto IL_0038;
		}
	}
	{
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
// System.Void Leopotam.Ecs.EcsSystemsRunItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsSystemsRunItem__ctor_m5583332E82FC941C64E61B66DCA60CDBFF88674A (EcsSystemsRunItem_tC86619AF6C15024EF70C76FA34BC7C30CC6161FF* __this, const RuntimeMethod* method) 
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
// System.Void Leopotam.Ecs.EcsWorld::.ctor(Leopotam.Ecs.EcsWorldConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsWorld__ctor_m705CEBB3343D348D4838397D259190BDEB4C50E6 (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8 ___config0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m456EDDEE587F91E5D186EE848813C4CE1A380987_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t30B1449996464D018C2DF1046C38BE7B569157F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsEntityDataU5BU5D_t526CEB257B536F3BC51E7F01A338728794063469_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsGrowList_1__ctor_m30D908245D0493D452F0EF6295F2CCEE86EE1A52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsGrowList_1__ctor_m8CBC958C10AFE368670AFA75A52BDC09EAA40472_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsGrowList_1__ctor_mBEFEB97AD463DE7EF4A901D4E6BD7C3920676203_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsGrowList_1_t05BE086951C7D264D8941FC753076684714DAAC3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsGrowList_1_t6BC5FF876D381A8F076800C4F4C84DC46575D129_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7165B9E024FB6015CFDC1BD3EF5C059051D304B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC7540F0D91B566D741FCE4333F4F18F8889FDFE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8* G_B2_0 = NULL;
	EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8* G_B3_1 = NULL;
	EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8* G_B5_0 = NULL;
	EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8* G_B6_1 = NULL;
	EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8* G_B8_0 = NULL;
	EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8* G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8* G_B9_1 = NULL;
	EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8* G_B11_0 = NULL;
	EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8* G_B10_0 = NULL;
	int32_t G_B12_0 = 0;
	EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8* G_B12_1 = NULL;
	EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8* G_B14_0 = NULL;
	EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8* G_B13_0 = NULL;
	int32_t G_B15_0 = 0;
	EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8* G_B15_1 = NULL;
	{
		// internal readonly List<IEcsWorldDebugListener> DebugListeners = new List<IEcsWorldDebugListener> (4);
		List_1_tC7540F0D91B566D741FCE4333F4F18F8889FDFE3* L_0 = (List_1_tC7540F0D91B566D741FCE4333F4F18F8889FDFE3*)il2cpp_codegen_object_new(List_1_tC7540F0D91B566D741FCE4333F4F18F8889FDFE3_il2cpp_TypeInfo_var);
		List_1__ctor_m7165B9E024FB6015CFDC1BD3EF5C059051D304B0(L_0, 4, List_1__ctor_m7165B9E024FB6015CFDC1BD3EF5C059051D304B0_RuntimeMethod_var);
		__this->___DebugListeners_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DebugListeners_11), (void*)L_0);
		// readonly EcsGrowList<EcsEntity> _leakedEntities = new EcsGrowList<EcsEntity> (256);
		EcsGrowList_1_t6BC5FF876D381A8F076800C4F4C84DC46575D129* L_1 = (EcsGrowList_1_t6BC5FF876D381A8F076800C4F4C84DC46575D129*)il2cpp_codegen_object_new(EcsGrowList_1_t6BC5FF876D381A8F076800C4F4C84DC46575D129_il2cpp_TypeInfo_var);
		EcsGrowList_1__ctor_m30D908245D0493D452F0EF6295F2CCEE86EE1A52_inline(L_1, ((int32_t)256), EcsGrowList_1__ctor_m30D908245D0493D452F0EF6295F2CCEE86EE1A52_RuntimeMethod_var);
		__this->____leakedEntities_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____leakedEntities_12), (void*)L_1);
		// public EcsWorld (EcsWorldConfig config = default) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// var finalConfig = new EcsWorldConfig {
		//     EntityComponentsCacheSize = config.EntityComponentsCacheSize <= 0
		//         ? EcsWorldConfig.DefaultEntityComponentsCacheSize
		//         : config.EntityComponentsCacheSize,
		//     FilterEntitiesCacheSize = config.FilterEntitiesCacheSize <= 0
		//         ? EcsWorldConfig.DefaultFilterEntitiesCacheSize
		//         : config.FilterEntitiesCacheSize,
		//     WorldEntitiesCacheSize = config.WorldEntitiesCacheSize <= 0
		//         ? EcsWorldConfig.DefaultWorldEntitiesCacheSize
		//         : config.WorldEntitiesCacheSize,
		//     WorldFiltersCacheSize = config.WorldFiltersCacheSize <= 0
		//         ? EcsWorldConfig.DefaultWorldFiltersCacheSize
		//         : config.WorldFiltersCacheSize,
		//     WorldComponentPoolsCacheSize = config.WorldComponentPoolsCacheSize <= 0
		//         ? EcsWorldConfig.DefaultWorldComponentPoolsCacheSize
		//         : config.WorldComponentPoolsCacheSize
		// };
		il2cpp_codegen_initobj((&V_1), sizeof(EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8));
		EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8 L_2 = ___config0;
		int32_t L_3 = L_2.___EntityComponentsCacheSize_3;
		G_B1_0 = (&V_1);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			G_B2_0 = (&V_1);
			goto IL_003f;
		}
	}
	{
		EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8 L_4 = ___config0;
		int32_t L_5 = L_4.___EntityComponentsCacheSize_3;
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		goto IL_0040;
	}

IL_003f:
	{
		G_B3_0 = 8;
		G_B3_1 = G_B2_0;
	}

IL_0040:
	{
		G_B3_1->___EntityComponentsCacheSize_3 = G_B3_0;
		EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8 L_6 = ___config0;
		int32_t L_7 = L_6.___FilterEntitiesCacheSize_4;
		G_B4_0 = (&V_1);
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			G_B5_0 = (&V_1);
			goto IL_0058;
		}
	}
	{
		EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8 L_8 = ___config0;
		int32_t L_9 = L_8.___FilterEntitiesCacheSize_4;
		G_B6_0 = L_9;
		G_B6_1 = G_B4_0;
		goto IL_005d;
	}

IL_0058:
	{
		G_B6_0 = ((int32_t)256);
		G_B6_1 = G_B5_0;
	}

IL_005d:
	{
		G_B6_1->___FilterEntitiesCacheSize_4 = G_B6_0;
		EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8 L_10 = ___config0;
		int32_t L_11 = L_10.___WorldEntitiesCacheSize_0;
		G_B7_0 = (&V_1);
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			G_B8_0 = (&V_1);
			goto IL_0075;
		}
	}
	{
		EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8 L_12 = ___config0;
		int32_t L_13 = L_12.___WorldEntitiesCacheSize_0;
		G_B9_0 = L_13;
		G_B9_1 = G_B7_0;
		goto IL_007a;
	}

IL_0075:
	{
		G_B9_0 = ((int32_t)1024);
		G_B9_1 = G_B8_0;
	}

IL_007a:
	{
		G_B9_1->___WorldEntitiesCacheSize_0 = G_B9_0;
		EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8 L_14 = ___config0;
		int32_t L_15 = L_14.___WorldFiltersCacheSize_1;
		G_B10_0 = (&V_1);
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			G_B11_0 = (&V_1);
			goto IL_0092;
		}
	}
	{
		EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8 L_16 = ___config0;
		int32_t L_17 = L_16.___WorldFiltersCacheSize_1;
		G_B12_0 = L_17;
		G_B12_1 = G_B10_0;
		goto IL_0097;
	}

IL_0092:
	{
		G_B12_0 = ((int32_t)128);
		G_B12_1 = G_B11_0;
	}

IL_0097:
	{
		G_B12_1->___WorldFiltersCacheSize_1 = G_B12_0;
		EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8 L_18 = ___config0;
		int32_t L_19 = L_18.___WorldComponentPoolsCacheSize_2;
		G_B13_0 = (&V_1);
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			G_B14_0 = (&V_1);
			goto IL_00af;
		}
	}
	{
		EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8 L_20 = ___config0;
		int32_t L_21 = L_20.___WorldComponentPoolsCacheSize_2;
		G_B15_0 = L_21;
		G_B15_1 = G_B13_0;
		goto IL_00b4;
	}

IL_00af:
	{
		G_B15_0 = ((int32_t)512);
		G_B15_1 = G_B14_0;
	}

IL_00b4:
	{
		G_B15_1->___WorldComponentPoolsCacheSize_2 = G_B15_0;
		EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8 L_22 = V_1;
		V_0 = L_22;
		// Config = finalConfig;
		EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8 L_23 = V_0;
		__this->___Config_7 = L_23;
		// Entities = new EcsEntityData[Config.WorldEntitiesCacheSize];
		EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8* L_24 = (&__this->___Config_7);
		int32_t L_25 = L_24->___WorldEntitiesCacheSize_0;
		EcsEntityDataU5BU5D_t526CEB257B536F3BC51E7F01A338728794063469* L_26 = (EcsEntityDataU5BU5D_t526CEB257B536F3BC51E7F01A338728794063469*)(EcsEntityDataU5BU5D_t526CEB257B536F3BC51E7F01A338728794063469*)SZArrayNew(EcsEntityDataU5BU5D_t526CEB257B536F3BC51E7F01A338728794063469_il2cpp_TypeInfo_var, (uint32_t)L_25);
		__this->___Entities_0 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Entities_0), (void*)L_26);
		// FreeEntities = new EcsGrowList<int> (Config.WorldEntitiesCacheSize);
		EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8* L_27 = (&__this->___Config_7);
		int32_t L_28 = L_27->___WorldEntitiesCacheSize_0;
		EcsGrowList_1_t05BE086951C7D264D8941FC753076684714DAAC3* L_29 = (EcsGrowList_1_t05BE086951C7D264D8941FC753076684714DAAC3*)il2cpp_codegen_object_new(EcsGrowList_1_t05BE086951C7D264D8941FC753076684714DAAC3_il2cpp_TypeInfo_var);
		EcsGrowList_1__ctor_mBEFEB97AD463DE7EF4A901D4E6BD7C3920676203_inline(L_29, L_28, EcsGrowList_1__ctor_mBEFEB97AD463DE7EF4A901D4E6BD7C3920676203_RuntimeMethod_var);
		__this->___FreeEntities_2 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FreeEntities_2), (void*)L_29);
		// Filters = new EcsGrowList<EcsFilter> (Config.WorldFiltersCacheSize);
		EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8* L_30 = (&__this->___Config_7);
		int32_t L_31 = L_30->___WorldFiltersCacheSize_1;
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_32 = (EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B*)il2cpp_codegen_object_new(EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B_il2cpp_TypeInfo_var);
		EcsGrowList_1__ctor_m8CBC958C10AFE368670AFA75A52BDC09EAA40472_inline(L_32, L_31, EcsGrowList_1__ctor_m8CBC958C10AFE368670AFA75A52BDC09EAA40472_RuntimeMethod_var);
		__this->___Filters_3 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Filters_3), (void*)L_32);
		// FilterByIncludedComponents = new Dictionary<int, EcsGrowList<EcsFilter>> (Config.WorldFiltersCacheSize);
		EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8* L_33 = (&__this->___Config_7);
		int32_t L_34 = L_33->___WorldFiltersCacheSize_1;
		Dictionary_2_t30B1449996464D018C2DF1046C38BE7B569157F4* L_35 = (Dictionary_2_t30B1449996464D018C2DF1046C38BE7B569157F4*)il2cpp_codegen_object_new(Dictionary_2_t30B1449996464D018C2DF1046C38BE7B569157F4_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m456EDDEE587F91E5D186EE848813C4CE1A380987(L_35, L_34, Dictionary_2__ctor_m456EDDEE587F91E5D186EE848813C4CE1A380987_RuntimeMethod_var);
		__this->___FilterByIncludedComponents_4 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FilterByIncludedComponents_4), (void*)L_35);
		// FilterByExcludedComponents = new Dictionary<int, EcsGrowList<EcsFilter>> (Config.WorldFiltersCacheSize);
		EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8* L_36 = (&__this->___Config_7);
		int32_t L_37 = L_36->___WorldFiltersCacheSize_1;
		Dictionary_2_t30B1449996464D018C2DF1046C38BE7B569157F4* L_38 = (Dictionary_2_t30B1449996464D018C2DF1046C38BE7B569157F4*)il2cpp_codegen_object_new(Dictionary_2_t30B1449996464D018C2DF1046C38BE7B569157F4_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m456EDDEE587F91E5D186EE848813C4CE1A380987(L_38, L_37, Dictionary_2__ctor_m456EDDEE587F91E5D186EE848813C4CE1A380987_RuntimeMethod_var);
		__this->___FilterByExcludedComponents_5 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FilterByExcludedComponents_5), (void*)L_38);
		// ComponentPools = new IEcsComponentPool[Config.WorldComponentPoolsCacheSize];
		EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8* L_39 = (&__this->___Config_7);
		int32_t L_40 = L_39->___WorldComponentPoolsCacheSize_2;
		IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39* L_41 = (IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39*)(IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39*)SZArrayNew(IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39_il2cpp_TypeInfo_var, (uint32_t)L_40);
		__this->___ComponentPools_9 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ComponentPools_9), (void*)L_41);
		// _filterCtor = new object[] { this };
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_42 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_43 = L_42;
		ArrayElementTypeCheck (L_43, __this);
		(L_43)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)__this);
		__this->____filterCtor_8 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____filterCtor_8), (void*)L_43);
		// }
		return;
	}
}
// System.Void Leopotam.Ecs.EcsWorld::AddDebugListener(Leopotam.Ecs.IEcsWorldDebugListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsWorld_AddDebugListener_mE795D6EEE2E530128AFDAB469BBAD3AC2ABAB980 (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, RuntimeObject* ___listener0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m77111D4FD63811CF5FCDE1537EE44E2710B39AF3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (listener == null) { throw new Exception ("Listener is null."); }
		RuntimeObject* L_0 = ___listener0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// if (listener == null) { throw new Exception ("Listener is null."); }
		Exception_t* L_2 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral57D91E963C1256046C939886D4EF47C540C197E2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsWorld_AddDebugListener_mE795D6EEE2E530128AFDAB469BBAD3AC2ABAB980_RuntimeMethod_var)));
	}

IL_0015:
	{
		// DebugListeners.Add (listener);
		List_1_tC7540F0D91B566D741FCE4333F4F18F8889FDFE3* L_3 = __this->___DebugListeners_11;
		RuntimeObject* L_4 = ___listener0;
		List_1_Add_m77111D4FD63811CF5FCDE1537EE44E2710B39AF3_inline(L_3, L_4, List_1_Add_m77111D4FD63811CF5FCDE1537EE44E2710B39AF3_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Leopotam.Ecs.EcsWorld::RemoveDebugListener(Leopotam.Ecs.IEcsWorldDebugListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsWorld_RemoveDebugListener_m802C53F96C3A2BFF351D17FA78B7944EA3AAF536 (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, RuntimeObject* ___listener0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m9C7C97CB64A6A4D61A013B1368A33E92F362866A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (listener == null) { throw new Exception ("Listener is null."); }
		RuntimeObject* L_0 = ___listener0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// if (listener == null) { throw new Exception ("Listener is null."); }
		Exception_t* L_2 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral57D91E963C1256046C939886D4EF47C540C197E2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsWorld_RemoveDebugListener_m802C53F96C3A2BFF351D17FA78B7944EA3AAF536_RuntimeMethod_var)));
	}

IL_0015:
	{
		// DebugListeners.Remove (listener);
		List_1_tC7540F0D91B566D741FCE4333F4F18F8889FDFE3* L_3 = __this->___DebugListeners_11;
		RuntimeObject* L_4 = ___listener0;
		bool L_5;
		L_5 = List_1_Remove_m9C7C97CB64A6A4D61A013B1368A33E92F362866A(L_3, L_4, List_1_Remove_m9C7C97CB64A6A4D61A013B1368A33E92F362866A_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Leopotam.Ecs.EcsWorld::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsWorld_Destroy_m7B94DC862066418289EAAFFD7E33B195080AE092 (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsWorldDebugListener_t60C684525E14FB8F0C6F9310FF04E25BEB3FD717_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mBB3BC3E7006C4F216B9184956D745320C58C0E95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21961D4F8434746893C9CE71A0A1BD6322E7EA9F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5E60BFB9BB233C2EFEEE045F37B1E64647148979);
		s_Il2CppMethodInitialized = true;
	}
	EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t V_2 = 0;
	EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	bool V_8 = false;
	int32_t V_9 = 0;
	bool V_10 = false;
	int32_t G_B3_0 = 0;
	{
		// if (IsDestroyed || _inDestroying) { throw new Exception ("EcsWorld already destroyed."); }
		bool L_0 = __this->___IsDestroyed_10;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		bool L_1 = __this->____inDestroying_13;
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
	}

IL_0012:
	{
		V_1 = (bool)G_B3_0;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		// if (IsDestroyed || _inDestroying) { throw new Exception ("EcsWorld already destroyed."); }
		Exception_t* L_3 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEA8E3D47DA899F90008EA38068C06006FD0EF74F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsWorld_Destroy_m7B94DC862066418289EAAFFD7E33B195080AE092_RuntimeMethod_var)));
	}

IL_0022:
	{
		// _inDestroying = true;
		__this->____inDestroying_13 = (bool)1;
		// CheckForLeakedEntities ("Destroy");
		bool L_4;
		L_4 = EcsWorld_CheckForLeakedEntities_mA8238916A6543AD386CD024E48DF6EB802BD9988(__this, _stringLiteral5E60BFB9BB233C2EFEEE045F37B1E64647148979, NULL);
		// entity.Owner = this;
		(&V_0)->___Owner_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Owner_2), (void*)__this);
		// for (var i = EntitiesCount - 1; i >= 0; i--) {
		int32_t L_5 = __this->___EntitiesCount_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		goto IL_0089;
	}

IL_0048:
	{
		// ref var entityData = ref Entities[i];
		EcsEntityDataU5BU5D_t526CEB257B536F3BC51E7F01A338728794063469* L_6 = __this->___Entities_0;
		int32_t L_7 = V_2;
		V_3 = ((L_6)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_7)));
		// if (entityData.ComponentsCountX2 > 0) {
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_8 = V_3;
		int16_t L_9 = L_8->___ComponentsCountX2_1;
		V_4 = (bool)((((int32_t)L_9) > ((int32_t)0))? 1 : 0);
		bool L_10 = V_4;
		if (!L_10)
		{
			goto IL_0084;
		}
	}
	{
		// entity.Id = i;
		int32_t L_11 = V_2;
		(&V_0)->___Id_0 = L_11;
		// entity.Gen = entityData.Gen;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_12 = V_3;
		uint16_t L_13 = L_12->___Gen_0;
		(&V_0)->___Gen_1 = L_13;
		// entity.Destroy ();
		EcsEntityExtensions_Destroy_m6DF536AB88ADBB52F10983D339A2EF731881701B_inline((&V_0), NULL);
	}

IL_0084:
	{
		// for (var i = EntitiesCount - 1; i >= 0; i--) {
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}

IL_0089:
	{
		// for (var i = EntitiesCount - 1; i >= 0; i--) {
		int32_t L_15 = V_2;
		V_5 = (bool)((((int32_t)((((int32_t)L_15) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_5;
		if (L_16)
		{
			goto IL_0048;
		}
	}
	{
		// for (int i = 0, iMax = Filters.Count; i < iMax; i++) {
		V_6 = 0;
		// for (int i = 0, iMax = Filters.Count; i < iMax; i++) {
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_17 = __this->___Filters_3;
		int32_t L_18 = L_17->___Count_1;
		V_7 = L_18;
		goto IL_00c4;
	}

IL_00a8:
	{
		// Filters.Items[i].Destroy ();
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_19 = __this->___Filters_3;
		EcsFilterU5BU5D_t3EF9DBAB76F9FFBF2F62801A0320AABBBD53F8DA* L_20 = L_19->___Items_0;
		int32_t L_21 = V_6;
		int32_t L_22 = L_21;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_23 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		VirtualActionInvoker0::Invoke(4 /* System.Void Leopotam.Ecs.EcsFilter::Destroy() */, L_23);
		// for (int i = 0, iMax = Filters.Count; i < iMax; i++) {
		int32_t L_24 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_00c4:
	{
		// for (int i = 0, iMax = Filters.Count; i < iMax; i++) {
		int32_t L_25 = V_6;
		int32_t L_26 = V_7;
		V_8 = (bool)((((int32_t)L_25) < ((int32_t)L_26))? 1 : 0);
		bool L_27 = V_8;
		if (L_27)
		{
			goto IL_00a8;
		}
	}
	{
		// IsDestroyed = true;
		__this->___IsDestroyed_10 = (bool)1;
		// for (var i = DebugListeners.Count - 1; i >= 0; i--) {
		List_1_tC7540F0D91B566D741FCE4333F4F18F8889FDFE3* L_28 = __this->___DebugListeners_11;
		int32_t L_29;
		L_29 = List_1_get_Count_mBB3BC3E7006C4F216B9184956D745320C58C0E95_inline(L_28, List_1_get_Count_mBB3BC3E7006C4F216B9184956D745320C58C0E95_RuntimeMethod_var);
		V_9 = ((int32_t)il2cpp_codegen_subtract(L_29, 1));
		goto IL_0104;
	}

IL_00e8:
	{
		// DebugListeners[i].OnWorldDestroyed (this);
		List_1_tC7540F0D91B566D741FCE4333F4F18F8889FDFE3* L_30 = __this->___DebugListeners_11;
		int32_t L_31 = V_9;
		RuntimeObject* L_32;
		L_32 = List_1_get_Item_m21961D4F8434746893C9CE71A0A1BD6322E7EA9F(L_30, L_31, List_1_get_Item_m21961D4F8434746893C9CE71A0A1BD6322E7EA9F_RuntimeMethod_var);
		InterfaceActionInvoker1< EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* >::Invoke(4 /* System.Void Leopotam.Ecs.IEcsWorldDebugListener::OnWorldDestroyed(Leopotam.Ecs.EcsWorld) */, IEcsWorldDebugListener_t60C684525E14FB8F0C6F9310FF04E25BEB3FD717_il2cpp_TypeInfo_var, L_32, __this);
		// for (var i = DebugListeners.Count - 1; i >= 0; i--) {
		int32_t L_33 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_subtract(L_33, 1));
	}

IL_0104:
	{
		// for (var i = DebugListeners.Count - 1; i >= 0; i--) {
		int32_t L_34 = V_9;
		V_10 = (bool)((((int32_t)((((int32_t)L_34) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_35 = V_10;
		if (L_35)
		{
			goto IL_00e8;
		}
	}
	{
		// }
		return;
	}
}
// System.Boolean Leopotam.Ecs.EcsWorld::IsAlive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsWorld_IsAlive_mCBD30D99C44C9963296CBAB628A78C2423CC9155 (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return !IsDestroyed;
		bool L_0 = __this->___IsDestroyed_10;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// Leopotam.Ecs.EcsEntity Leopotam.Ecs.EcsWorld::NewEntity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E EcsWorld_NewEntity_m828FEED297F5F42E2F36D2093B694FECE4253EAD (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisEcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D_m0EF6D9B9A664FE94FC75B2B1CD78A846F1A61B63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsGrowList_1_Add_mB34B99A8A330CB3FC27634B68EA9A59A1DB729AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m153C479DE1E49B926CC87C8355FEA2E34F5C7E93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m452929CF39739875E8D0E99D3835FB1E6854195C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC044E9E00E380CF1C3A2B7E8683DAFC81C19897E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsWorldDebugListener_t60C684525E14FB8F0C6F9310FF04E25BEB3FD717_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7E1DCE1BA21C909F54440BFBD207B20711E45008_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* V_3 = NULL;
	int32_t V_4 = 0;
	EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* V_5 = NULL;
	bool V_6 = false;
	Enumerator_t22FF5D0DE3C75401D4D69F6613F2D690B7B96DF5 V_7;
	memset((&V_7), 0, sizeof(V_7));
	RuntimeObject* V_8 = NULL;
	EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E V_9;
	memset((&V_9), 0, sizeof(V_9));
	{
		// if (IsDestroyed) { throw new Exception ("EcsWorld already destroyed."); }
		bool L_0 = __this->___IsDestroyed_10;
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// if (IsDestroyed) { throw new Exception ("EcsWorld already destroyed."); }
		Exception_t* L_2 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEA8E3D47DA899F90008EA38068C06006FD0EF74F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsWorld_NewEntity_m828FEED297F5F42E2F36D2093B694FECE4253EAD_RuntimeMethod_var)));
	}

IL_0017:
	{
		// entity.Owner = this;
		(&V_0)->___Owner_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Owner_2), (void*)__this);
		// if (FreeEntities.Count > 0) {
		EcsGrowList_1_t05BE086951C7D264D8941FC753076684714DAAC3* L_3 = __this->___FreeEntities_2;
		int32_t L_4 = L_3->___Count_1;
		V_2 = (bool)((((int32_t)L_4) > ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_008a;
		}
	}
	{
		// entity.Id = FreeEntities.Items[--FreeEntities.Count];
		EcsGrowList_1_t05BE086951C7D264D8941FC753076684714DAAC3* L_6 = __this->___FreeEntities_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = L_6->___Items_0;
		EcsGrowList_1_t05BE086951C7D264D8941FC753076684714DAAC3* L_8 = __this->___FreeEntities_2;
		EcsGrowList_1_t05BE086951C7D264D8941FC753076684714DAAC3* L_9 = L_8;
		int32_t L_10 = L_9->___Count_1;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		int32_t L_11 = V_4;
		L_9->___Count_1 = L_11;
		int32_t L_12 = V_4;
		int32_t L_13 = L_12;
		int32_t L_14 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		(&V_0)->___Id_0 = L_14;
		// ref var entityData = ref Entities[entity.Id];
		EcsEntityDataU5BU5D_t526CEB257B536F3BC51E7F01A338728794063469* L_15 = __this->___Entities_0;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_16 = V_0;
		int32_t L_17 = L_16.___Id_0;
		V_3 = ((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_17)));
		// entity.Gen = entityData.Gen;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_18 = V_3;
		uint16_t L_19 = L_18->___Gen_0;
		(&V_0)->___Gen_1 = L_19;
		// entityData.ComponentsCountX2 = 0;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_20 = V_3;
		L_20->___ComponentsCountX2_1 = (int16_t)0;
		goto IL_011d;
	}

IL_008a:
	{
		// if (EntitiesCount == Entities.Length) {
		int32_t L_21 = __this->___EntitiesCount_1;
		EcsEntityDataU5BU5D_t526CEB257B536F3BC51E7F01A338728794063469* L_22 = __this->___Entities_0;
		V_6 = (bool)((((int32_t)L_21) == ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length))))? 1 : 0);
		bool L_23 = V_6;
		if (!L_23)
		{
			goto IL_00b7;
		}
	}
	{
		// Array.Resize (ref Entities, EntitiesCount << 1);
		EcsEntityDataU5BU5D_t526CEB257B536F3BC51E7F01A338728794063469** L_24 = (&__this->___Entities_0);
		int32_t L_25 = __this->___EntitiesCount_1;
		Array_Resize_TisEcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D_m0EF6D9B9A664FE94FC75B2B1CD78A846F1A61B63(L_24, ((int32_t)(L_25<<1)), Array_Resize_TisEcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D_m0EF6D9B9A664FE94FC75B2B1CD78A846F1A61B63_RuntimeMethod_var);
	}

IL_00b7:
	{
		// entity.Id = EntitiesCount++;
		int32_t L_26 = __this->___EntitiesCount_1;
		V_4 = L_26;
		int32_t L_27 = V_4;
		__this->___EntitiesCount_1 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		int32_t L_28 = V_4;
		(&V_0)->___Id_0 = L_28;
		// ref var entityData = ref Entities[entity.Id];
		EcsEntityDataU5BU5D_t526CEB257B536F3BC51E7F01A338728794063469* L_29 = __this->___Entities_0;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_30 = V_0;
		int32_t L_31 = L_30.___Id_0;
		V_5 = ((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_31)));
		// entityData.Components = new int[Config.EntityComponentsCacheSize * 2];
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_32 = V_5;
		EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8* L_33 = (&__this->___Config_7);
		int32_t L_34 = L_33->___EntityComponentsCacheSize_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_34, 2)));
		L_32->___Components_2 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&L_32->___Components_2), (void*)L_35);
		// entityData.Gen = 1;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_36 = V_5;
		L_36->___Gen_0 = (uint16_t)1;
		// entity.Gen = entityData.Gen;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_37 = V_5;
		uint16_t L_38 = L_37->___Gen_0;
		(&V_0)->___Gen_1 = L_38;
		// entityData.ComponentsCountX2 = 0;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_39 = V_5;
		L_39->___ComponentsCountX2_1 = (int16_t)0;
	}

IL_011d:
	{
		// _leakedEntities.Add (entity);
		EcsGrowList_1_t6BC5FF876D381A8F076800C4F4C84DC46575D129* L_40 = __this->____leakedEntities_12;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_41 = V_0;
		EcsGrowList_1_Add_mB34B99A8A330CB3FC27634B68EA9A59A1DB729AC_inline(L_40, L_41, EcsGrowList_1_Add_mB34B99A8A330CB3FC27634B68EA9A59A1DB729AC_RuntimeMethod_var);
		// foreach (var debugListener in DebugListeners) {
		List_1_tC7540F0D91B566D741FCE4333F4F18F8889FDFE3* L_42 = __this->___DebugListeners_11;
		Enumerator_t22FF5D0DE3C75401D4D69F6613F2D690B7B96DF5 L_43;
		L_43 = List_1_GetEnumerator_m7E1DCE1BA21C909F54440BFBD207B20711E45008(L_42, List_1_GetEnumerator_m7E1DCE1BA21C909F54440BFBD207B20711E45008_RuntimeMethod_var);
		V_7 = L_43;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0159:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m153C479DE1E49B926CC87C8355FEA2E34F5C7E93((&V_7), Enumerator_Dispose_m153C479DE1E49B926CC87C8355FEA2E34F5C7E93_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_014e_1;
			}

IL_013a_1:
			{
				// foreach (var debugListener in DebugListeners) {
				RuntimeObject* L_44;
				L_44 = Enumerator_get_Current_mC044E9E00E380CF1C3A2B7E8683DAFC81C19897E_inline((&V_7), Enumerator_get_Current_mC044E9E00E380CF1C3A2B7E8683DAFC81C19897E_RuntimeMethod_var);
				V_8 = L_44;
				// debugListener.OnEntityCreated (entity);
				RuntimeObject* L_45 = V_8;
				EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_46 = V_0;
				InterfaceActionInvoker1< EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E >::Invoke(0 /* System.Void Leopotam.Ecs.IEcsWorldDebugListener::OnEntityCreated(Leopotam.Ecs.EcsEntity) */, IEcsWorldDebugListener_t60C684525E14FB8F0C6F9310FF04E25BEB3FD717_il2cpp_TypeInfo_var, L_45, L_46);
			}

IL_014e_1:
			{
				// foreach (var debugListener in DebugListeners) {
				bool L_47;
				L_47 = Enumerator_MoveNext_m452929CF39739875E8D0E99D3835FB1E6854195C((&V_7), Enumerator_MoveNext_m452929CF39739875E8D0E99D3835FB1E6854195C_RuntimeMethod_var);
				if (L_47)
				{
					goto IL_013a_1;
				}
			}
			{
				goto IL_0168;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0168:
	{
		// return entity;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_48 = V_0;
		V_9 = L_48;
		goto IL_016d;
	}

IL_016d:
	{
		// }
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_49 = V_9;
		return L_49;
	}
}
// Leopotam.Ecs.EcsEntity Leopotam.Ecs.EcsWorld::RestoreEntityFromInternalId(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E EcsWorld_RestoreEntityFromInternalId_mED45CBC66E963C5D51717A7EF40CC0CC6BB0A51A (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, int32_t ___id0, int32_t ___gen1, const RuntimeMethod* method) 
{
	EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* V_2 = NULL;
	EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// entity.Owner = this;
		(&V_0)->___Owner_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Owner_2), (void*)__this);
		// entity.Id = id;
		int32_t L_0 = ___id0;
		(&V_0)->___Id_0 = L_0;
		// if (gen < 0) {
		int32_t L_1 = ___gen1;
		V_1 = (bool)((((int32_t)L_1) < ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_003b;
		}
	}
	{
		// entity.Gen = 0;
		(&V_0)->___Gen_1 = (uint16_t)0;
		// ref var entityData = ref GetEntityData (entity);
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_3;
		L_3 = EcsWorld_GetEntityData_m279427A5EDB9357D58A2EABDCA4D5FDBFDFE5670_inline(__this, (&V_0), NULL);
		V_2 = L_3;
		// entity.Gen = entityData.Gen;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_4 = V_2;
		uint16_t L_5 = L_4->___Gen_0;
		(&V_0)->___Gen_1 = L_5;
		goto IL_0046;
	}

IL_003b:
	{
		// entity.Gen = (ushort) gen;
		int32_t L_6 = ___gen1;
		(&V_0)->___Gen_1 = (uint16_t)((int32_t)(uint16_t)L_6);
	}

IL_0046:
	{
		// return entity;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_7 = V_0;
		V_3 = L_7;
		goto IL_004a;
	}

IL_004a:
	{
		// }
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_8 = V_3;
		return L_8;
	}
}
// Leopotam.Ecs.EcsFilter Leopotam.Ecs.EcsWorld::GetFilter(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* EcsWorld_GetFilter_m52CD6F02CE215E1CA1A2C041022F5EE4E4283A44 (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, Type_t* ___filterType0, bool ___createIfNotExists1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m48F4681691A2A706881C69C2FB59A4CFD58EB7AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m075857BE5F7ED4C4E3D32A575D6787367BEE256D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsGrowList_1_Add_m47584E78B83F59D13EC3B7812C75F97A5062E5D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsGrowList_1__ctor_m8CBC958C10AFE368670AFA75A52BDC09EAA40472_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m153C479DE1E49B926CC87C8355FEA2E34F5C7E93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m452929CF39739875E8D0E99D3835FB1E6854195C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC044E9E00E380CF1C3A2B7E8683DAFC81C19897E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsWorldDebugListener_t60C684525E14FB8F0C6F9310FF04E25BEB3FD717_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7E1DCE1BA21C909F54440BFBD207B20711E45008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* V_0 = NULL;
	EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	int32_t V_11 = 0;
	bool V_12 = false;
	bool V_13 = false;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* V_16 = NULL;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* V_22 = NULL;
	bool V_23 = false;
	bool V_24 = false;
	Enumerator_t22FF5D0DE3C75401D4D69F6613F2D690B7B96DF5 V_25;
	memset((&V_25), 0, sizeof(V_25));
	RuntimeObject* V_26 = NULL;
	int32_t V_27 = 0;
	int32_t V_28 = 0;
	EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* V_29 = NULL;
	bool V_30 = false;
	bool V_31 = false;
	int32_t G_B40_0 = 0;
	{
		// if (filterType == null) { throw new Exception ("FilterType is null."); }
		Type_t* L_0 = ___filterType0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_0, (Type_t*)NULL, NULL);
		V_2 = L_1;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// if (filterType == null) { throw new Exception ("FilterType is null."); }
		Exception_t* L_3 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9E971242C1AFFA651AB3B5655687128872AFBAF8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsWorld_GetFilter_m52CD6F02CE215E1CA1A2C041022F5EE4E4283A44_RuntimeMethod_var)));
	}

IL_0018:
	{
		// if (!filterType.IsSubclassOf (typeof (EcsFilter))) { throw new Exception ($"Invalid filter type: {filterType}."); }
		Type_t* L_4 = ___filterType0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		bool L_7;
		L_7 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(20 /* System.Boolean System.Type::IsSubclassOf(System.Type) */, L_4, L_6);
		V_3 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0041;
		}
	}
	{
		// if (!filterType.IsSubclassOf (typeof (EcsFilter))) { throw new Exception ($"Invalid filter type: {filterType}."); }
		Type_t* L_9 = ___filterType0;
		String_t* L_10;
		L_10 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9A0E9ABEC1A97A416116255237E07FACD27092A2)), L_9, NULL);
		Exception_t* L_11 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsWorld_GetFilter_m52CD6F02CE215E1CA1A2C041022F5EE4E4283A44_RuntimeMethod_var)));
	}

IL_0041:
	{
		// if (IsDestroyed) { throw new Exception ("EcsWorld already destroyed."); }
		bool L_12 = __this->___IsDestroyed_10;
		V_4 = L_12;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_0059;
		}
	}
	{
		// if (IsDestroyed) { throw new Exception ("EcsWorld already destroyed."); }
		Exception_t* L_14 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEA8E3D47DA899F90008EA38068C06006FD0EF74F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsWorld_GetFilter_m52CD6F02CE215E1CA1A2C041022F5EE4E4283A44_RuntimeMethod_var)));
	}

IL_0059:
	{
		// for (int i = 0, iMax = Filters.Count; i < iMax; i++) {
		V_5 = 0;
		// for (int i = 0, iMax = Filters.Count; i < iMax; i++) {
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_15 = __this->___Filters_3;
		int32_t L_16 = L_15->___Count_1;
		V_6 = L_16;
		goto IL_00a8;
	}

IL_006b:
	{
		// if (Filters.Items[i].GetType () == filterType) {
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_17 = __this->___Filters_3;
		EcsFilterU5BU5D_t3EF9DBAB76F9FFBF2F62801A0320AABBBD53F8DA* L_18 = L_17->___Items_0;
		int32_t L_19 = V_5;
		int32_t L_20 = L_19;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_21 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		Type_t* L_22;
		L_22 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_21, NULL);
		Type_t* L_23 = ___filterType0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_23, NULL);
		V_7 = L_24;
		bool L_25 = V_7;
		if (!L_25)
		{
			goto IL_00a1;
		}
	}
	{
		// return Filters.Items[i];
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_26 = __this->___Filters_3;
		EcsFilterU5BU5D_t3EF9DBAB76F9FFBF2F62801A0320AABBBD53F8DA* L_27 = L_26->___Items_0;
		int32_t L_28 = V_5;
		int32_t L_29 = L_28;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_30 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_29));
		V_8 = L_30;
		goto IL_02f6;
	}

IL_00a1:
	{
		// for (int i = 0, iMax = Filters.Count; i < iMax; i++) {
		int32_t L_31 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00a8:
	{
		// for (int i = 0, iMax = Filters.Count; i < iMax; i++) {
		int32_t L_32 = V_5;
		int32_t L_33 = V_6;
		V_9 = (bool)((((int32_t)L_32) < ((int32_t)L_33))? 1 : 0);
		bool L_34 = V_9;
		if (L_34)
		{
			goto IL_006b;
		}
	}
	{
		// if (!createIfNotExists) {
		bool L_35 = ___createIfNotExists1;
		V_10 = (bool)((((int32_t)L_35) == ((int32_t)0))? 1 : 0);
		bool L_36 = V_10;
		if (!L_36)
		{
			goto IL_00c7;
		}
	}
	{
		// return null;
		V_8 = (EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC*)NULL;
		goto IL_02f6;
	}

IL_00c7:
	{
		// var filter = (EcsFilter) Activator.CreateInstance (filterType, BindingFlags.NonPublic | BindingFlags.Instance, null, _filterCtor, CultureInfo.InvariantCulture);
		Type_t* L_37 = ___filterType0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = __this->____filterCtor_8;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_39;
		L_39 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		RuntimeObject* L_40;
		L_40 = Activator_CreateInstance_m0DFAA1415ABA9B28430FDC70A9915BE437C04B04(L_37, ((int32_t)36), (Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235*)NULL, L_38, L_39, NULL);
		V_0 = ((EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC*)CastclassClass((RuntimeObject*)L_40, EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC_il2cpp_TypeInfo_var));
		// for (var filterIdx = 0; filterIdx < Filters.Count; filterIdx++) {
		V_11 = 0;
		goto IL_0132;
	}

IL_00e6:
	{
		// if (filter.AreComponentsSame (Filters.Items[filterIdx])) {
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_41 = V_0;
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_42 = __this->___Filters_3;
		EcsFilterU5BU5D_t3EF9DBAB76F9FFBF2F62801A0320AABBBD53F8DA* L_43 = L_42->___Items_0;
		int32_t L_44 = V_11;
		int32_t L_45 = L_44;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_46 = (L_43)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_45));
		bool L_47;
		L_47 = EcsFilter_AreComponentsSame_mE4B2D3FDE457C24EABB6C49DBA30E922678B3663(L_41, L_46, NULL);
		V_12 = L_47;
		bool L_48 = V_12;
		if (!L_48)
		{
			goto IL_012b;
		}
	}
	{
		// throw new Exception (
		//     $"Invalid filter \"{filter.GetType ()}\": Another filter \"{Filters.Items[filterIdx].GetType ()}\" already has same components, but in different order.");
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_49 = V_0;
		Type_t* L_50;
		L_50 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_49, NULL);
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_51 = __this->___Filters_3;
		EcsFilterU5BU5D_t3EF9DBAB76F9FFBF2F62801A0320AABBBD53F8DA* L_52 = L_51->___Items_0;
		int32_t L_53 = V_11;
		int32_t L_54 = L_53;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_55 = (L_52)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_54));
		Type_t* L_56;
		L_56 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_55, NULL);
		String_t* L_57;
		L_57 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF4CE6C363FEC68EE5E06DCCDE841F049522A07A2)), L_50, L_56, NULL);
		Exception_t* L_58 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_58, L_57, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_58, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsWorld_GetFilter_m52CD6F02CE215E1CA1A2C041022F5EE4E4283A44_RuntimeMethod_var)));
	}

IL_012b:
	{
		// for (var filterIdx = 0; filterIdx < Filters.Count; filterIdx++) {
		int32_t L_59 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_59, 1));
	}

IL_0132:
	{
		// for (var filterIdx = 0; filterIdx < Filters.Count; filterIdx++) {
		int32_t L_60 = V_11;
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_61 = __this->___Filters_3;
		int32_t L_62 = L_61->___Count_1;
		V_13 = (bool)((((int32_t)L_60) < ((int32_t)L_62))? 1 : 0);
		bool L_63 = V_13;
		if (L_63)
		{
			goto IL_00e6;
		}
	}
	{
		// Filters.Add (filter);
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_64 = __this->___Filters_3;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_65 = V_0;
		EcsGrowList_1_Add_m47584E78B83F59D13EC3B7812C75F97A5062E5D5_inline(L_64, L_65, EcsGrowList_1_Add_m47584E78B83F59D13EC3B7812C75F97A5062E5D5_RuntimeMethod_var);
		// for (int i = 0, iMax = filter.IncludedTypeIndices.Length; i < iMax; i++) {
		V_14 = 0;
		// for (int i = 0, iMax = filter.IncludedTypeIndices.Length; i < iMax; i++) {
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_66 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_67 = L_66->___IncludedTypeIndices_7;
		V_15 = ((int32_t)(((RuntimeArray*)L_67)->max_length));
		goto IL_01b4;
	}

IL_0163:
	{
		// if (!FilterByIncludedComponents.TryGetValue (filter.IncludedTypeIndices[i], out var filtersList)) {
		Dictionary_2_t30B1449996464D018C2DF1046C38BE7B569157F4* L_68 = __this->___FilterByIncludedComponents_4;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_69 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_70 = L_69->___IncludedTypeIndices_7;
		int32_t L_71 = V_14;
		int32_t L_72 = L_71;
		int32_t L_73 = (L_70)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_72));
		bool L_74;
		L_74 = Dictionary_2_TryGetValue_m48F4681691A2A706881C69C2FB59A4CFD58EB7AB(L_68, L_73, (&V_16), Dictionary_2_TryGetValue_m48F4681691A2A706881C69C2FB59A4CFD58EB7AB_RuntimeMethod_var);
		V_17 = (bool)((((int32_t)L_74) == ((int32_t)0))? 1 : 0);
		bool L_75 = V_17;
		if (!L_75)
		{
			goto IL_01a4;
		}
	}
	{
		// filtersList = new EcsGrowList<EcsFilter> (8);
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_76 = (EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B*)il2cpp_codegen_object_new(EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B_il2cpp_TypeInfo_var);
		EcsGrowList_1__ctor_m8CBC958C10AFE368670AFA75A52BDC09EAA40472_inline(L_76, 8, EcsGrowList_1__ctor_m8CBC958C10AFE368670AFA75A52BDC09EAA40472_RuntimeMethod_var);
		V_16 = L_76;
		// FilterByIncludedComponents[filter.IncludedTypeIndices[i]] = filtersList;
		Dictionary_2_t30B1449996464D018C2DF1046C38BE7B569157F4* L_77 = __this->___FilterByIncludedComponents_4;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_78 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_79 = L_78->___IncludedTypeIndices_7;
		int32_t L_80 = V_14;
		int32_t L_81 = L_80;
		int32_t L_82 = (L_79)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_81));
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_83 = V_16;
		Dictionary_2_set_Item_m075857BE5F7ED4C4E3D32A575D6787367BEE256D(L_77, L_82, L_83, Dictionary_2_set_Item_m075857BE5F7ED4C4E3D32A575D6787367BEE256D_RuntimeMethod_var);
	}

IL_01a4:
	{
		// filtersList.Add (filter);
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_84 = V_16;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_85 = V_0;
		EcsGrowList_1_Add_m47584E78B83F59D13EC3B7812C75F97A5062E5D5_inline(L_84, L_85, EcsGrowList_1_Add_m47584E78B83F59D13EC3B7812C75F97A5062E5D5_RuntimeMethod_var);
		// for (int i = 0, iMax = filter.IncludedTypeIndices.Length; i < iMax; i++) {
		int32_t L_86 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_86, 1));
	}

IL_01b4:
	{
		// for (int i = 0, iMax = filter.IncludedTypeIndices.Length; i < iMax; i++) {
		int32_t L_87 = V_14;
		int32_t L_88 = V_15;
		V_18 = (bool)((((int32_t)L_87) < ((int32_t)L_88))? 1 : 0);
		bool L_89 = V_18;
		if (L_89)
		{
			goto IL_0163;
		}
	}
	{
		// if (filter.ExcludedTypeIndices != null) {
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_90 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_91 = L_90->___ExcludedTypeIndices_8;
		V_19 = (bool)((!(((RuntimeObject*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_91) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_92 = V_19;
		if (!L_92)
		{
			goto IL_023d;
		}
	}
	{
		// for (int i = 0, iMax = filter.ExcludedTypeIndices.Length; i < iMax; i++) {
		V_20 = 0;
		// for (int i = 0, iMax = filter.ExcludedTypeIndices.Length; i < iMax; i++) {
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_93 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_94 = L_93->___ExcludedTypeIndices_8;
		V_21 = ((int32_t)(((RuntimeArray*)L_94)->max_length));
		goto IL_0230;
	}

IL_01df:
	{
		// if (!FilterByExcludedComponents.TryGetValue (filter.ExcludedTypeIndices[i], out var filtersList)) {
		Dictionary_2_t30B1449996464D018C2DF1046C38BE7B569157F4* L_95 = __this->___FilterByExcludedComponents_5;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_96 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_97 = L_96->___ExcludedTypeIndices_8;
		int32_t L_98 = V_20;
		int32_t L_99 = L_98;
		int32_t L_100 = (L_97)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_99));
		bool L_101;
		L_101 = Dictionary_2_TryGetValue_m48F4681691A2A706881C69C2FB59A4CFD58EB7AB(L_95, L_100, (&V_22), Dictionary_2_TryGetValue_m48F4681691A2A706881C69C2FB59A4CFD58EB7AB_RuntimeMethod_var);
		V_23 = (bool)((((int32_t)L_101) == ((int32_t)0))? 1 : 0);
		bool L_102 = V_23;
		if (!L_102)
		{
			goto IL_0220;
		}
	}
	{
		// filtersList = new EcsGrowList<EcsFilter> (8);
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_103 = (EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B*)il2cpp_codegen_object_new(EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B_il2cpp_TypeInfo_var);
		EcsGrowList_1__ctor_m8CBC958C10AFE368670AFA75A52BDC09EAA40472_inline(L_103, 8, EcsGrowList_1__ctor_m8CBC958C10AFE368670AFA75A52BDC09EAA40472_RuntimeMethod_var);
		V_22 = L_103;
		// FilterByExcludedComponents[filter.ExcludedTypeIndices[i]] = filtersList;
		Dictionary_2_t30B1449996464D018C2DF1046C38BE7B569157F4* L_104 = __this->___FilterByExcludedComponents_5;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_105 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_106 = L_105->___ExcludedTypeIndices_8;
		int32_t L_107 = V_20;
		int32_t L_108 = L_107;
		int32_t L_109 = (L_106)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_108));
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_110 = V_22;
		Dictionary_2_set_Item_m075857BE5F7ED4C4E3D32A575D6787367BEE256D(L_104, L_109, L_110, Dictionary_2_set_Item_m075857BE5F7ED4C4E3D32A575D6787367BEE256D_RuntimeMethod_var);
	}

IL_0220:
	{
		// filtersList.Add (filter);
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_111 = V_22;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_112 = V_0;
		EcsGrowList_1_Add_m47584E78B83F59D13EC3B7812C75F97A5062E5D5_inline(L_111, L_112, EcsGrowList_1_Add_m47584E78B83F59D13EC3B7812C75F97A5062E5D5_RuntimeMethod_var);
		// for (int i = 0, iMax = filter.ExcludedTypeIndices.Length; i < iMax; i++) {
		int32_t L_113 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add(L_113, 1));
	}

IL_0230:
	{
		// for (int i = 0, iMax = filter.ExcludedTypeIndices.Length; i < iMax; i++) {
		int32_t L_114 = V_20;
		int32_t L_115 = V_21;
		V_24 = (bool)((((int32_t)L_114) < ((int32_t)L_115))? 1 : 0);
		bool L_116 = V_24;
		if (L_116)
		{
			goto IL_01df;
		}
	}
	{
	}

IL_023d:
	{
		// foreach (var debugListener in DebugListeners) {
		List_1_tC7540F0D91B566D741FCE4333F4F18F8889FDFE3* L_117 = __this->___DebugListeners_11;
		Enumerator_t22FF5D0DE3C75401D4D69F6613F2D690B7B96DF5 L_118;
		L_118 = List_1_GetEnumerator_m7E1DCE1BA21C909F54440BFBD207B20711E45008(L_117, List_1_GetEnumerator_m7E1DCE1BA21C909F54440BFBD207B20711E45008_RuntimeMethod_var);
		V_25 = L_118;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_026c:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m153C479DE1E49B926CC87C8355FEA2E34F5C7E93((&V_25), Enumerator_Dispose_m153C479DE1E49B926CC87C8355FEA2E34F5C7E93_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0261_1;
			}

IL_024d_1:
			{
				// foreach (var debugListener in DebugListeners) {
				RuntimeObject* L_119;
				L_119 = Enumerator_get_Current_mC044E9E00E380CF1C3A2B7E8683DAFC81C19897E_inline((&V_25), Enumerator_get_Current_mC044E9E00E380CF1C3A2B7E8683DAFC81C19897E_RuntimeMethod_var);
				V_26 = L_119;
				// debugListener.OnFilterCreated (filter);
				RuntimeObject* L_120 = V_26;
				EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_121 = V_0;
				InterfaceActionInvoker1< EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* >::Invoke(2 /* System.Void Leopotam.Ecs.IEcsWorldDebugListener::OnFilterCreated(Leopotam.Ecs.EcsFilter) */, IEcsWorldDebugListener_t60C684525E14FB8F0C6F9310FF04E25BEB3FD717_il2cpp_TypeInfo_var, L_120, L_121);
			}

IL_0261_1:
			{
				// foreach (var debugListener in DebugListeners) {
				bool L_122;
				L_122 = Enumerator_MoveNext_m452929CF39739875E8D0E99D3835FB1E6854195C((&V_25), Enumerator_MoveNext_m452929CF39739875E8D0E99D3835FB1E6854195C_RuntimeMethod_var);
				if (L_122)
				{
					goto IL_024d_1;
				}
			}
			{
				goto IL_027b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_027b:
	{
		// entity.Owner = this;
		(&V_1)->___Owner_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_1)->___Owner_2), (void*)__this);
		// for (int i = 0, iMax = EntitiesCount; i < iMax; i++) {
		V_27 = 0;
		// for (int i = 0, iMax = EntitiesCount; i < iMax; i++) {
		int32_t L_123 = __this->___EntitiesCount_1;
		V_28 = L_123;
		goto IL_02e5;
	}

IL_0290:
	{
		// ref var entityData = ref Entities[i];
		EcsEntityDataU5BU5D_t526CEB257B536F3BC51E7F01A338728794063469* L_124 = __this->___Entities_0;
		int32_t L_125 = V_27;
		V_29 = ((L_124)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_125)));
		// if (entityData.ComponentsCountX2 > 0 && filter.IsCompatible (entityData, 0)) {
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_126 = V_29;
		int16_t L_127 = L_126->___ComponentsCountX2_1;
		if ((((int32_t)L_127) <= ((int32_t)0)))
		{
			goto IL_02b5;
		}
	}
	{
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_128 = V_0;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_129 = V_29;
		bool L_130;
		L_130 = EcsFilter_IsCompatible_m908B473016F3D41FC338BDC440381396E28ECAA2_inline(L_128, L_129, 0, NULL);
		G_B40_0 = ((int32_t)(L_130));
		goto IL_02b6;
	}

IL_02b5:
	{
		G_B40_0 = 0;
	}

IL_02b6:
	{
		V_30 = (bool)G_B40_0;
		bool L_131 = V_30;
		if (!L_131)
		{
			goto IL_02de;
		}
	}
	{
		// entity.Id = i;
		int32_t L_132 = V_27;
		(&V_1)->___Id_0 = L_132;
		// entity.Gen = entityData.Gen;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_133 = V_29;
		uint16_t L_134 = L_133->___Gen_0;
		(&V_1)->___Gen_1 = L_134;
		// filter.OnAddEntity (entity);
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_135 = V_0;
		VirtualActionInvoker1< EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* >::Invoke(5 /* System.Void Leopotam.Ecs.EcsFilter::OnAddEntity(Leopotam.Ecs.EcsEntity& modreq(System.Runtime.InteropServices.InAttribute)) */, L_135, (&V_1));
	}

IL_02de:
	{
		// for (int i = 0, iMax = EntitiesCount; i < iMax; i++) {
		int32_t L_136 = V_27;
		V_27 = ((int32_t)il2cpp_codegen_add(L_136, 1));
	}

IL_02e5:
	{
		// for (int i = 0, iMax = EntitiesCount; i < iMax; i++) {
		int32_t L_137 = V_27;
		int32_t L_138 = V_28;
		V_31 = (bool)((((int32_t)L_137) < ((int32_t)L_138))? 1 : 0);
		bool L_139 = V_31;
		if (L_139)
		{
			goto IL_0290;
		}
	}
	{
		// return filter;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_140 = V_0;
		V_8 = L_140;
		goto IL_02f6;
	}

IL_02f6:
	{
		// }
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_141 = V_8;
		return L_141;
	}
}
// Leopotam.Ecs.EcsWorldStats Leopotam.Ecs.EcsWorld::GetStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsWorldStats_tCC6E2E5270D51D54D4B77BA4888150493B3024BD EcsWorld_GetStats_m0F6C2D1493DE58B58448EDB0243F825B170BA0BD (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, const RuntimeMethod* method) 
{
	EcsWorldStats_tCC6E2E5270D51D54D4B77BA4888150493B3024BD V_0;
	memset((&V_0), 0, sizeof(V_0));
	EcsWorldStats_tCC6E2E5270D51D54D4B77BA4888150493B3024BD V_1;
	memset((&V_1), 0, sizeof(V_1));
	EcsWorldStats_tCC6E2E5270D51D54D4B77BA4888150493B3024BD V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var stats = new EcsWorldStats () {
		//     ActiveEntities = EntitiesCount - FreeEntities.Count,
		//     ReservedEntities = FreeEntities.Count,
		//     Filters = Filters.Count,
		//     Components = _usedComponentsCount
		// };
		il2cpp_codegen_initobj((&V_1), sizeof(EcsWorldStats_tCC6E2E5270D51D54D4B77BA4888150493B3024BD));
		int32_t L_0 = __this->___EntitiesCount_1;
		EcsGrowList_1_t05BE086951C7D264D8941FC753076684714DAAC3* L_1 = __this->___FreeEntities_2;
		int32_t L_2 = L_1->___Count_1;
		(&V_1)->___ActiveEntities_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_2));
		EcsGrowList_1_t05BE086951C7D264D8941FC753076684714DAAC3* L_3 = __this->___FreeEntities_2;
		int32_t L_4 = L_3->___Count_1;
		(&V_1)->___ReservedEntities_1 = L_4;
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_5 = __this->___Filters_3;
		int32_t L_6 = L_5->___Count_1;
		(&V_1)->___Filters_2 = L_6;
		int32_t L_7 = __this->____usedComponentsCount_6;
		(&V_1)->___Components_3 = L_7;
		EcsWorldStats_tCC6E2E5270D51D54D4B77BA4888150493B3024BD L_8 = V_1;
		V_0 = L_8;
		// return stats;
		EcsWorldStats_tCC6E2E5270D51D54D4B77BA4888150493B3024BD L_9 = V_0;
		V_2 = L_9;
		goto IL_0059;
	}

IL_0059:
	{
		// }
		EcsWorldStats_tCC6E2E5270D51D54D4B77BA4888150493B3024BD L_10 = V_2;
		return L_10;
	}
}
// System.Void Leopotam.Ecs.EcsWorld::RecycleEntityData(System.Int32,Leopotam.Ecs.EcsWorld/EcsEntityData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsWorld_RecycleEntityData_mF32D0E0B4CE31E2AE7027C51DA0C54F9D53FC0D2 (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, int32_t ___id0, EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* ___entityData1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsGrowList_1_Add_m19887B8370A2040D1E9C14B4FA889A5A8BF8C199_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (entityData.ComponentsCountX2 != 0) { throw new Exception ("Cant recycle invalid entity."); }
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_0 = ___entityData1;
		int16_t L_1 = L_0->___ComponentsCountX2_1;
		V_0 = (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		// if (entityData.ComponentsCountX2 != 0) { throw new Exception ("Cant recycle invalid entity."); }
		Exception_t* L_3 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAB9E2385A9B81E000D6B67C908B888F657688F53)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsWorld_RecycleEntityData_mF32D0E0B4CE31E2AE7027C51DA0C54F9D53FC0D2_RuntimeMethod_var)));
	}

IL_001a:
	{
		// entityData.ComponentsCountX2 = -2;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_4 = ___entityData1;
		L_4->___ComponentsCountX2_1 = (int16_t)((int32_t)-2);
		// entityData.Gen++;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_5 = ___entityData1;
		uint16_t* L_6 = (&L_5->___Gen_0);
		uint16_t* L_7 = L_6;
		int32_t L_8 = *((uint16_t*)L_7);
		*((int16_t*)L_7) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_8, 1)));
		// if (entityData.Gen == 0) { entityData.Gen = 1; }
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_9 = ___entityData1;
		uint16_t L_10 = L_9->___Gen_0;
		V_1 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_0044;
		}
	}
	{
		// if (entityData.Gen == 0) { entityData.Gen = 1; }
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_12 = ___entityData1;
		L_12->___Gen_0 = (uint16_t)1;
	}

IL_0044:
	{
		// FreeEntities.Add (id);
		EcsGrowList_1_t05BE086951C7D264D8941FC753076684714DAAC3* L_13 = __this->___FreeEntities_2;
		int32_t L_14 = ___id0;
		EcsGrowList_1_Add_m19887B8370A2040D1E9C14B4FA889A5A8BF8C199_inline(L_13, L_14, EcsGrowList_1_Add_m19887B8370A2040D1E9C14B4FA889A5A8BF8C199_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean Leopotam.Ecs.EcsWorld::CheckForLeakedEntities(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsWorld_CheckForLeakedEntities_mA8238916A6543AD386CD024E48DF6EB802BD9988 (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, String_t* ___errorMsg0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	{
		// if (_leakedEntities.Count > 0) {
		EcsGrowList_1_t6BC5FF876D381A8F076800C4F4C84DC46575D129* L_0 = __this->____leakedEntities_12;
		int32_t L_1 = L_0->___Count_1;
		V_0 = (bool)((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0086;
		}
	}
	{
		// for (int i = 0, iMax = _leakedEntities.Count; i < iMax; i++) {
		V_1 = 0;
		// for (int i = 0, iMax = _leakedEntities.Count; i < iMax; i++) {
		EcsGrowList_1_t6BC5FF876D381A8F076800C4F4C84DC46575D129* L_3 = __this->____leakedEntities_12;
		int32_t L_4 = L_3->___Count_1;
		V_2 = L_4;
		goto IL_006f;
	}

IL_0024:
	{
		// if (GetEntityData (_leakedEntities.Items[i]).ComponentsCountX2 == 0) {
		EcsGrowList_1_t6BC5FF876D381A8F076800C4F4C84DC46575D129* L_5 = __this->____leakedEntities_12;
		EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C* L_6 = L_5->___Items_0;
		int32_t L_7 = V_1;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_8;
		L_8 = EcsWorld_GetEntityData_m279427A5EDB9357D58A2EABDCA4D5FDBFDFE5670_inline(__this, ((L_6)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_7))), NULL);
		int16_t L_9 = L_8->___ComponentsCountX2_1;
		V_3 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_006a;
		}
	}
	{
		// if (errorMsg != null) {
		String_t* L_11 = ___errorMsg0;
		V_4 = (bool)((!(((RuntimeObject*)(String_t*)L_11) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_0065;
		}
	}
	{
		// throw new Exception ($"{errorMsg}: Empty entity detected, possible memory leak.");
		String_t* L_13 = ___errorMsg0;
		String_t* L_14;
		L_14 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC7740996BF0E7FB3BDF5EE9BACDA3879D19B6044)), NULL);
		Exception_t* L_15 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_15, L_14, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsWorld_CheckForLeakedEntities_mA8238916A6543AD386CD024E48DF6EB802BD9988_RuntimeMethod_var)));
	}

IL_0065:
	{
		// return true;
		V_5 = (bool)1;
		goto IL_008b;
	}

IL_006a:
	{
		// for (int i = 0, iMax = _leakedEntities.Count; i < iMax; i++) {
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_006f:
	{
		// for (int i = 0, iMax = _leakedEntities.Count; i < iMax; i++) {
		int32_t L_17 = V_1;
		int32_t L_18 = V_2;
		V_6 = (bool)((((int32_t)L_17) < ((int32_t)L_18))? 1 : 0);
		bool L_19 = V_6;
		if (L_19)
		{
			goto IL_0024;
		}
	}
	{
		// _leakedEntities.Count = 0;
		EcsGrowList_1_t6BC5FF876D381A8F076800C4F4C84DC46575D129* L_20 = __this->____leakedEntities_12;
		L_20->___Count_1 = 0;
	}

IL_0086:
	{
		// return false;
		V_5 = (bool)0;
		goto IL_008b;
	}

IL_008b:
	{
		// }
		bool L_21 = V_5;
		return L_21;
	}
}
// System.Void Leopotam.Ecs.EcsWorld::UpdateFilters(System.Int32,Leopotam.Ecs.EcsEntity&,Leopotam.Ecs.EcsWorld/EcsEntityData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsWorld_UpdateFilters_mC5F1D16AB93D10EFCBCCEB9CA9982BB888A7928F (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, int32_t ___typeIdx0, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity1, EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* ___entityData2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m48F4681691A2A706881C69C2FB59A4CFD58EB7AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mAAEB730BB484D3ECA345BF704F67084E465FFBF9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	bool V_14 = false;
	int32_t V_15 = 0;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	bool V_22 = false;
	int32_t V_23 = 0;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	int32_t V_28 = 0;
	int32_t V_29 = 0;
	bool V_30 = false;
	int32_t V_31 = 0;
	bool V_32 = false;
	bool V_33 = false;
	bool V_34 = false;
	{
		// if (IsDestroyed) { throw new Exception ("EcsWorld already destroyed."); }
		bool L_0 = __this->___IsDestroyed_10;
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// if (IsDestroyed) { throw new Exception ("EcsWorld already destroyed."); }
		Exception_t* L_2 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEA8E3D47DA899F90008EA38068C06006FD0EF74F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsWorld_UpdateFilters_mC5F1D16AB93D10EFCBCCEB9CA9982BB888A7928F_RuntimeMethod_var)));
	}

IL_0017:
	{
		// if (typeIdx < 0) {
		int32_t L_3 = ___typeIdx0;
		V_2 = (bool)((((int32_t)L_3) < ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0170;
		}
	}
	{
		// if (FilterByIncludedComponents.TryGetValue (-typeIdx, out filters)) {
		Dictionary_2_t30B1449996464D018C2DF1046C38BE7B569157F4* L_5 = __this->___FilterByIncludedComponents_4;
		int32_t L_6 = ___typeIdx0;
		bool L_7;
		L_7 = Dictionary_2_TryGetValue_m48F4681691A2A706881C69C2FB59A4CFD58EB7AB(L_5, ((-L_6)), (&V_0), Dictionary_2_TryGetValue_m48F4681691A2A706881C69C2FB59A4CFD58EB7AB_RuntimeMethod_var);
		V_3 = L_7;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_00c4;
		}
	}
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		V_4 = 0;
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_9 = V_0;
		int32_t L_10 = L_9->___Count_1;
		V_5 = L_10;
		goto IL_00b7;
	}

IL_0047:
	{
		// if (filters.Items[i].IsCompatible (entityData, 0)) {
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_11 = V_0;
		EcsFilterU5BU5D_t3EF9DBAB76F9FFBF2F62801A0320AABBBD53F8DA* L_12 = L_11->___Items_0;
		int32_t L_13 = V_4;
		int32_t L_14 = L_13;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_15 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_16 = ___entityData2;
		bool L_17;
		L_17 = EcsFilter_IsCompatible_m908B473016F3D41FC338BDC440381396E28ECAA2_inline(L_15, L_16, 0, NULL);
		V_6 = L_17;
		bool L_18 = V_6;
		if (!L_18)
		{
			goto IL_00b0;
		}
	}
	{
		// if (!filters.Items[i].GetInternalEntitiesMap ().TryGetValue (entity.GetInternalId (), out var filterIdx)) { filterIdx = -1; }
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_19 = V_0;
		EcsFilterU5BU5D_t3EF9DBAB76F9FFBF2F62801A0320AABBBD53F8DA* L_20 = L_19->___Items_0;
		int32_t L_21 = V_4;
		int32_t L_22 = L_21;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_23 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_24;
		L_24 = EcsFilter_GetInternalEntitiesMap_mDF9685AB884F4391DA63B84BFADB282C965153F5(L_23, NULL);
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_25 = ___entity1;
		int32_t L_26;
		L_26 = EcsEntityExtensions_GetInternalId_mDF05CA62470626A1B47E8E3934D0CFC6432BBA09_inline(L_25, NULL);
		bool L_27;
		L_27 = Dictionary_2_TryGetValue_mAAEB730BB484D3ECA345BF704F67084E465FFBF9(L_24, L_26, (&V_7), Dictionary_2_TryGetValue_mAAEB730BB484D3ECA345BF704F67084E465FFBF9_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_27) == ((int32_t)0))? 1 : 0);
		bool L_28 = V_8;
		if (!L_28)
		{
			goto IL_0088;
		}
	}
	{
		// if (!filters.Items[i].GetInternalEntitiesMap ().TryGetValue (entity.GetInternalId (), out var filterIdx)) { filterIdx = -1; }
		V_7 = (-1);
	}

IL_0088:
	{
		// if (filterIdx < 0) { throw new Exception ("Entity not in filter."); }
		int32_t L_29 = V_7;
		V_9 = (bool)((((int32_t)L_29) < ((int32_t)0))? 1 : 0);
		bool L_30 = V_9;
		if (!L_30)
		{
			goto IL_009f;
		}
	}
	{
		// if (filterIdx < 0) { throw new Exception ("Entity not in filter."); }
		Exception_t* L_31 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_31, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6257718D2302FD68D301F831D5DD87D21396E6FC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_31, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsWorld_UpdateFilters_mC5F1D16AB93D10EFCBCCEB9CA9982BB888A7928F_RuntimeMethod_var)));
	}

IL_009f:
	{
		// filters.Items[i].OnRemoveEntity (entity);
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_32 = V_0;
		EcsFilterU5BU5D_t3EF9DBAB76F9FFBF2F62801A0320AABBBD53F8DA* L_33 = L_32->___Items_0;
		int32_t L_34 = V_4;
		int32_t L_35 = L_34;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_36 = (L_33)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_35));
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_37 = ___entity1;
		VirtualActionInvoker1< EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* >::Invoke(6 /* System.Void Leopotam.Ecs.EcsFilter::OnRemoveEntity(Leopotam.Ecs.EcsEntity& modreq(System.Runtime.InteropServices.InAttribute)) */, L_36, L_37);
	}

IL_00b0:
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		int32_t L_38 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00b7:
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		int32_t L_39 = V_4;
		int32_t L_40 = V_5;
		V_10 = (bool)((((int32_t)L_39) < ((int32_t)L_40))? 1 : 0);
		bool L_41 = V_10;
		if (L_41)
		{
			goto IL_0047;
		}
	}
	{
	}

IL_00c4:
	{
		// if (FilterByExcludedComponents.TryGetValue (-typeIdx, out filters)) {
		Dictionary_2_t30B1449996464D018C2DF1046C38BE7B569157F4* L_42 = __this->___FilterByExcludedComponents_5;
		int32_t L_43 = ___typeIdx0;
		bool L_44;
		L_44 = Dictionary_2_TryGetValue_m48F4681691A2A706881C69C2FB59A4CFD58EB7AB(L_42, ((-L_43)), (&V_0), Dictionary_2_TryGetValue_m48F4681691A2A706881C69C2FB59A4CFD58EB7AB_RuntimeMethod_var);
		V_11 = L_44;
		bool L_45 = V_11;
		if (!L_45)
		{
			goto IL_016a;
		}
	}
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		V_12 = 0;
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_46 = V_0;
		int32_t L_47 = L_46->___Count_1;
		V_13 = L_47;
		goto IL_015d;
	}

IL_00ea:
	{
		// if (filters.Items[i].IsCompatible (entityData, typeIdx)) {
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_48 = V_0;
		EcsFilterU5BU5D_t3EF9DBAB76F9FFBF2F62801A0320AABBBD53F8DA* L_49 = L_48->___Items_0;
		int32_t L_50 = V_12;
		int32_t L_51 = L_50;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_52 = (L_49)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_51));
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_53 = ___entityData2;
		int32_t L_54 = ___typeIdx0;
		bool L_55;
		L_55 = EcsFilter_IsCompatible_m908B473016F3D41FC338BDC440381396E28ECAA2_inline(L_52, L_53, L_54, NULL);
		V_14 = L_55;
		bool L_56 = V_14;
		if (!L_56)
		{
			goto IL_0156;
		}
	}
	{
		// if (!filters.Items[i].GetInternalEntitiesMap ().TryGetValue (entity.GetInternalId (), out var filterIdx)) { filterIdx = -1; }
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_57 = V_0;
		EcsFilterU5BU5D_t3EF9DBAB76F9FFBF2F62801A0320AABBBD53F8DA* L_58 = L_57->___Items_0;
		int32_t L_59 = V_12;
		int32_t L_60 = L_59;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_61 = (L_58)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_60));
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_62;
		L_62 = EcsFilter_GetInternalEntitiesMap_mDF9685AB884F4391DA63B84BFADB282C965153F5(L_61, NULL);
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_63 = ___entity1;
		int32_t L_64;
		L_64 = EcsEntityExtensions_GetInternalId_mDF05CA62470626A1B47E8E3934D0CFC6432BBA09_inline(L_63, NULL);
		bool L_65;
		L_65 = Dictionary_2_TryGetValue_mAAEB730BB484D3ECA345BF704F67084E465FFBF9(L_62, L_64, (&V_15), Dictionary_2_TryGetValue_mAAEB730BB484D3ECA345BF704F67084E465FFBF9_RuntimeMethod_var);
		V_16 = (bool)((((int32_t)L_65) == ((int32_t)0))? 1 : 0);
		bool L_66 = V_16;
		if (!L_66)
		{
			goto IL_012b;
		}
	}
	{
		// if (!filters.Items[i].GetInternalEntitiesMap ().TryGetValue (entity.GetInternalId (), out var filterIdx)) { filterIdx = -1; }
		V_15 = (-1);
	}

IL_012b:
	{
		// if (filterIdx >= 0) { throw new Exception ("Entity already in filter."); }
		int32_t L_67 = V_15;
		V_17 = (bool)((((int32_t)((((int32_t)L_67) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_68 = V_17;
		if (!L_68)
		{
			goto IL_0145;
		}
	}
	{
		// if (filterIdx >= 0) { throw new Exception ("Entity already in filter."); }
		Exception_t* L_69 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_69, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7C889CD3951CB5AE334AE0DE08667B43AAA6556)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_69, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsWorld_UpdateFilters_mC5F1D16AB93D10EFCBCCEB9CA9982BB888A7928F_RuntimeMethod_var)));
	}

IL_0145:
	{
		// filters.Items[i].OnAddEntity (entity);
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_70 = V_0;
		EcsFilterU5BU5D_t3EF9DBAB76F9FFBF2F62801A0320AABBBD53F8DA* L_71 = L_70->___Items_0;
		int32_t L_72 = V_12;
		int32_t L_73 = L_72;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_74 = (L_71)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_73));
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_75 = ___entity1;
		VirtualActionInvoker1< EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* >::Invoke(5 /* System.Void Leopotam.Ecs.EcsFilter::OnAddEntity(Leopotam.Ecs.EcsEntity& modreq(System.Runtime.InteropServices.InAttribute)) */, L_74, L_75);
	}

IL_0156:
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		int32_t L_76 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_015d:
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		int32_t L_77 = V_12;
		int32_t L_78 = V_13;
		V_18 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_18;
		if (L_79)
		{
			goto IL_00ea;
		}
	}
	{
	}

IL_016a:
	{
		goto IL_02ba;
	}

IL_0170:
	{
		// if (FilterByIncludedComponents.TryGetValue (typeIdx, out filters)) {
		Dictionary_2_t30B1449996464D018C2DF1046C38BE7B569157F4* L_80 = __this->___FilterByIncludedComponents_4;
		int32_t L_81 = ___typeIdx0;
		bool L_82;
		L_82 = Dictionary_2_TryGetValue_m48F4681691A2A706881C69C2FB59A4CFD58EB7AB(L_80, L_81, (&V_0), Dictionary_2_TryGetValue_m48F4681691A2A706881C69C2FB59A4CFD58EB7AB_RuntimeMethod_var);
		V_19 = L_82;
		bool L_83 = V_19;
		if (!L_83)
		{
			goto IL_0216;
		}
	}
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		V_20 = 0;
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_84 = V_0;
		int32_t L_85 = L_84->___Count_1;
		V_21 = L_85;
		goto IL_0209;
	}

IL_0196:
	{
		// if (filters.Items[i].IsCompatible (entityData, 0)) {
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_86 = V_0;
		EcsFilterU5BU5D_t3EF9DBAB76F9FFBF2F62801A0320AABBBD53F8DA* L_87 = L_86->___Items_0;
		int32_t L_88 = V_20;
		int32_t L_89 = L_88;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_90 = (L_87)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_89));
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_91 = ___entityData2;
		bool L_92;
		L_92 = EcsFilter_IsCompatible_m908B473016F3D41FC338BDC440381396E28ECAA2_inline(L_90, L_91, 0, NULL);
		V_22 = L_92;
		bool L_93 = V_22;
		if (!L_93)
		{
			goto IL_0202;
		}
	}
	{
		// if (!filters.Items[i].GetInternalEntitiesMap ().TryGetValue (entity.GetInternalId (), out var filterIdx)) { filterIdx = -1; }
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_94 = V_0;
		EcsFilterU5BU5D_t3EF9DBAB76F9FFBF2F62801A0320AABBBD53F8DA* L_95 = L_94->___Items_0;
		int32_t L_96 = V_20;
		int32_t L_97 = L_96;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_98 = (L_95)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_97));
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_99;
		L_99 = EcsFilter_GetInternalEntitiesMap_mDF9685AB884F4391DA63B84BFADB282C965153F5(L_98, NULL);
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_100 = ___entity1;
		int32_t L_101;
		L_101 = EcsEntityExtensions_GetInternalId_mDF05CA62470626A1B47E8E3934D0CFC6432BBA09_inline(L_100, NULL);
		bool L_102;
		L_102 = Dictionary_2_TryGetValue_mAAEB730BB484D3ECA345BF704F67084E465FFBF9(L_99, L_101, (&V_23), Dictionary_2_TryGetValue_mAAEB730BB484D3ECA345BF704F67084E465FFBF9_RuntimeMethod_var);
		V_24 = (bool)((((int32_t)L_102) == ((int32_t)0))? 1 : 0);
		bool L_103 = V_24;
		if (!L_103)
		{
			goto IL_01d7;
		}
	}
	{
		// if (!filters.Items[i].GetInternalEntitiesMap ().TryGetValue (entity.GetInternalId (), out var filterIdx)) { filterIdx = -1; }
		V_23 = (-1);
	}

IL_01d7:
	{
		// if (filterIdx >= 0) { throw new Exception ("Entity already in filter."); }
		int32_t L_104 = V_23;
		V_25 = (bool)((((int32_t)((((int32_t)L_104) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_105 = V_25;
		if (!L_105)
		{
			goto IL_01f1;
		}
	}
	{
		// if (filterIdx >= 0) { throw new Exception ("Entity already in filter."); }
		Exception_t* L_106 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_106, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7C889CD3951CB5AE334AE0DE08667B43AAA6556)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsWorld_UpdateFilters_mC5F1D16AB93D10EFCBCCEB9CA9982BB888A7928F_RuntimeMethod_var)));
	}

IL_01f1:
	{
		// filters.Items[i].OnAddEntity (entity);
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_107 = V_0;
		EcsFilterU5BU5D_t3EF9DBAB76F9FFBF2F62801A0320AABBBD53F8DA* L_108 = L_107->___Items_0;
		int32_t L_109 = V_20;
		int32_t L_110 = L_109;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_111 = (L_108)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_110));
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_112 = ___entity1;
		VirtualActionInvoker1< EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* >::Invoke(5 /* System.Void Leopotam.Ecs.EcsFilter::OnAddEntity(Leopotam.Ecs.EcsEntity& modreq(System.Runtime.InteropServices.InAttribute)) */, L_111, L_112);
	}

IL_0202:
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		int32_t L_113 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add(L_113, 1));
	}

IL_0209:
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		int32_t L_114 = V_20;
		int32_t L_115 = V_21;
		V_26 = (bool)((((int32_t)L_114) < ((int32_t)L_115))? 1 : 0);
		bool L_116 = V_26;
		if (L_116)
		{
			goto IL_0196;
		}
	}
	{
	}

IL_0216:
	{
		// if (FilterByExcludedComponents.TryGetValue (typeIdx, out filters)) {
		Dictionary_2_t30B1449996464D018C2DF1046C38BE7B569157F4* L_117 = __this->___FilterByExcludedComponents_5;
		int32_t L_118 = ___typeIdx0;
		bool L_119;
		L_119 = Dictionary_2_TryGetValue_m48F4681691A2A706881C69C2FB59A4CFD58EB7AB(L_117, L_118, (&V_0), Dictionary_2_TryGetValue_m48F4681691A2A706881C69C2FB59A4CFD58EB7AB_RuntimeMethod_var);
		V_27 = L_119;
		bool L_120 = V_27;
		if (!L_120)
		{
			goto IL_02b9;
		}
	}
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		V_28 = 0;
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_121 = V_0;
		int32_t L_122 = L_121->___Count_1;
		V_29 = L_122;
		goto IL_02ac;
	}

IL_023b:
	{
		// if (filters.Items[i].IsCompatible (entityData, -typeIdx)) {
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_123 = V_0;
		EcsFilterU5BU5D_t3EF9DBAB76F9FFBF2F62801A0320AABBBD53F8DA* L_124 = L_123->___Items_0;
		int32_t L_125 = V_28;
		int32_t L_126 = L_125;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_127 = (L_124)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_126));
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_128 = ___entityData2;
		int32_t L_129 = ___typeIdx0;
		bool L_130;
		L_130 = EcsFilter_IsCompatible_m908B473016F3D41FC338BDC440381396E28ECAA2_inline(L_127, L_128, ((-L_129)), NULL);
		V_30 = L_130;
		bool L_131 = V_30;
		if (!L_131)
		{
			goto IL_02a5;
		}
	}
	{
		// if (!filters.Items[i].GetInternalEntitiesMap ().TryGetValue (entity.GetInternalId (), out var filterIdx)) { filterIdx = -1; }
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_132 = V_0;
		EcsFilterU5BU5D_t3EF9DBAB76F9FFBF2F62801A0320AABBBD53F8DA* L_133 = L_132->___Items_0;
		int32_t L_134 = V_28;
		int32_t L_135 = L_134;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_136 = (L_133)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_135));
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_137;
		L_137 = EcsFilter_GetInternalEntitiesMap_mDF9685AB884F4391DA63B84BFADB282C965153F5(L_136, NULL);
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_138 = ___entity1;
		int32_t L_139;
		L_139 = EcsEntityExtensions_GetInternalId_mDF05CA62470626A1B47E8E3934D0CFC6432BBA09_inline(L_138, NULL);
		bool L_140;
		L_140 = Dictionary_2_TryGetValue_mAAEB730BB484D3ECA345BF704F67084E465FFBF9(L_137, L_139, (&V_31), Dictionary_2_TryGetValue_mAAEB730BB484D3ECA345BF704F67084E465FFBF9_RuntimeMethod_var);
		V_32 = (bool)((((int32_t)L_140) == ((int32_t)0))? 1 : 0);
		bool L_141 = V_32;
		if (!L_141)
		{
			goto IL_027d;
		}
	}
	{
		// if (!filters.Items[i].GetInternalEntitiesMap ().TryGetValue (entity.GetInternalId (), out var filterIdx)) { filterIdx = -1; }
		V_31 = (-1);
	}

IL_027d:
	{
		// if (filterIdx < 0) { throw new Exception ("Entity not in filter."); }
		int32_t L_142 = V_31;
		V_33 = (bool)((((int32_t)L_142) < ((int32_t)0))? 1 : 0);
		bool L_143 = V_33;
		if (!L_143)
		{
			goto IL_0294;
		}
	}
	{
		// if (filterIdx < 0) { throw new Exception ("Entity not in filter."); }
		Exception_t* L_144 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_144, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6257718D2302FD68D301F831D5DD87D21396E6FC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_144, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsWorld_UpdateFilters_mC5F1D16AB93D10EFCBCCEB9CA9982BB888A7928F_RuntimeMethod_var)));
	}

IL_0294:
	{
		// filters.Items[i].OnRemoveEntity (entity);
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_145 = V_0;
		EcsFilterU5BU5D_t3EF9DBAB76F9FFBF2F62801A0320AABBBD53F8DA* L_146 = L_145->___Items_0;
		int32_t L_147 = V_28;
		int32_t L_148 = L_147;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_149 = (L_146)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_148));
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_150 = ___entity1;
		VirtualActionInvoker1< EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* >::Invoke(6 /* System.Void Leopotam.Ecs.EcsFilter::OnRemoveEntity(Leopotam.Ecs.EcsEntity& modreq(System.Runtime.InteropServices.InAttribute)) */, L_149, L_150);
	}

IL_02a5:
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		int32_t L_151 = V_28;
		V_28 = ((int32_t)il2cpp_codegen_add(L_151, 1));
	}

IL_02ac:
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		int32_t L_152 = V_28;
		int32_t L_153 = V_29;
		V_34 = (bool)((((int32_t)L_152) < ((int32_t)L_153))? 1 : 0);
		bool L_154 = V_34;
		if (L_154)
		{
			goto IL_023b;
		}
	}
	{
	}

IL_02b9:
	{
	}

IL_02ba:
	{
		// }
		return;
	}
}
// Leopotam.Ecs.EcsWorld/EcsEntityData& Leopotam.Ecs.EcsWorld::GetEntityData(Leopotam.Ecs.EcsEntity&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* EcsWorld_GetEntityData_m279427A5EDB9357D58A2EABDCA4D5FDBFDFE5670 (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* V_2 = NULL;
	int32_t G_B5_0 = 0;
	{
		// if (IsDestroyed) { throw new Exception ("EcsWorld already destroyed."); }
		bool L_0 = __this->___IsDestroyed_10;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// if (IsDestroyed) { throw new Exception ("EcsWorld already destroyed."); }
		Exception_t* L_2 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEA8E3D47DA899F90008EA38068C06006FD0EF74F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsWorld_GetEntityData_m279427A5EDB9357D58A2EABDCA4D5FDBFDFE5670_RuntimeMethod_var)));
	}

IL_0017:
	{
		// if (entity.Id < 0 || entity.Id > EntitiesCount) { throw new Exception ($"Invalid entity {entity.Id}"); }
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_3 = ___entity0;
		int32_t L_4 = L_3->___Id_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_5 = ___entity0;
		int32_t L_6 = L_5->___Id_0;
		int32_t L_7 = __this->___EntitiesCount_1;
		G_B5_0 = ((((int32_t)L_6) > ((int32_t)L_7))? 1 : 0);
		goto IL_0031;
	}

IL_0030:
	{
		G_B5_0 = 1;
	}

IL_0031:
	{
		V_1 = (bool)G_B5_0;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		// if (entity.Id < 0 || entity.Id > EntitiesCount) { throw new Exception ($"Invalid entity {entity.Id}"); }
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_9 = ___entity0;
		int32_t L_10 = L_9->___Id_0;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_11);
		String_t* L_13;
		L_13 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD6C6C179BF2FFCA1A20E3ECDBE723A7176ED7715)), L_12, NULL);
		Exception_t* L_14 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_14, L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsWorld_GetEntityData_m279427A5EDB9357D58A2EABDCA4D5FDBFDFE5670_RuntimeMethod_var)));
	}

IL_0051:
	{
		// return ref Entities[entity.Id];
		EcsEntityDataU5BU5D_t526CEB257B536F3BC51E7F01A338728794063469* L_15 = __this->___Entities_0;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_16 = ___entity0;
		int32_t L_17 = L_16->___Id_0;
		V_2 = ((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_17)));
		goto IL_0065;
	}

IL_0065:
	{
		// }
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_18 = V_2;
		return L_18;
	}
}
// System.Int32 Leopotam.Ecs.EcsWorld::GetAllEntities(Leopotam.Ecs.EcsEntity[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EcsWorld_GetAllEntities_m1D20BAFCFA2FC526E96FE0ABAE90F22691C5E2FE (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C** ___entities0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	int32_t G_B3_0 = 0;
	{
		// var count = EntitiesCount - FreeEntities.Count;
		int32_t L_0 = __this->___EntitiesCount_1;
		EcsGrowList_1_t05BE086951C7D264D8941FC753076684714DAAC3* L_1 = __this->___FreeEntities_2;
		int32_t L_2 = L_1->___Count_1;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_2));
		// if (entities == null || entities.Length < count) {
		EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C** L_3 = ___entities0;
		EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C* L_4 = *((EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C**)L_3);
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C** L_5 = ___entities0;
		EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C* L_6 = *((EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C**)L_5);
		int32_t L_7 = V_0;
		G_B3_0 = ((((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))) < ((int32_t)L_7))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 1;
	}

IL_0022:
	{
		V_3 = (bool)G_B3_0;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0030;
		}
	}
	{
		// entities = new EcsEntity[count];
		EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C** L_9 = ___entities0;
		int32_t L_10 = V_0;
		EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C* L_11 = (EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C*)(EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C*)SZArrayNew(EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C_il2cpp_TypeInfo_var, (uint32_t)L_10);
		*((RuntimeObject**)L_9) = (RuntimeObject*)L_11;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_9, (void*)(RuntimeObject*)L_11);
	}

IL_0030:
	{
		// e.Owner = this;
		(&V_1)->___Owner_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_1)->___Owner_2), (void*)__this);
		// var id = 0;
		V_2 = 0;
		// for (int i = 0, iMax = EntitiesCount; i < iMax; i++) {
		V_4 = 0;
		// for (int i = 0, iMax = EntitiesCount; i < iMax; i++) {
		int32_t L_12 = __this->___EntitiesCount_1;
		V_5 = L_12;
		goto IL_0097;
	}

IL_0047:
	{
		// ref var entityData = ref Entities[i];
		EcsEntityDataU5BU5D_t526CEB257B536F3BC51E7F01A338728794063469* L_13 = __this->___Entities_0;
		int32_t L_14 = V_4;
		V_6 = ((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)));
		// if (entityData.ComponentsCountX2 >= 0) {
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_15 = V_6;
		int16_t L_16 = L_15->___ComponentsCountX2_1;
		V_7 = (bool)((((int32_t)((((int32_t)L_16) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_7;
		if (!L_17)
		{
			goto IL_0090;
		}
	}
	{
		// e.Id = i;
		int32_t L_18 = V_4;
		(&V_1)->___Id_0 = L_18;
		// e.Gen = entityData.Gen;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_19 = V_6;
		uint16_t L_20 = L_19->___Gen_0;
		(&V_1)->___Gen_1 = L_20;
		// entities[id++] = e;
		EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C** L_21 = ___entities0;
		EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C* L_22 = *((EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C**)L_21);
		int32_t L_23 = V_2;
		int32_t L_24 = L_23;
		V_2 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_25 = V_1;
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24), (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E)L_25);
	}

IL_0090:
	{
		// for (int i = 0, iMax = EntitiesCount; i < iMax; i++) {
		int32_t L_26 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_0097:
	{
		// for (int i = 0, iMax = EntitiesCount; i < iMax; i++) {
		int32_t L_27 = V_4;
		int32_t L_28 = V_5;
		V_8 = (bool)((((int32_t)L_27) < ((int32_t)L_28))? 1 : 0);
		bool L_29 = V_8;
		if (L_29)
		{
			goto IL_0047;
		}
	}
	{
		// return count;
		int32_t L_30 = V_0;
		V_9 = L_30;
		goto IL_00a8;
	}

IL_00a8:
	{
		// }
		int32_t L_31 = V_9;
		return L_31;
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
// Conversion methods for marshalling of: Leopotam.Ecs.EcsWorld/EcsEntityData
IL2CPP_EXTERN_C void EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D_marshal_pinvoke(const EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D& unmarshaled, EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D_marshaled_pinvoke& marshaled)
{
	marshaled.___Gen_0 = unmarshaled.___Gen_0;
	marshaled.___ComponentsCountX2_1 = unmarshaled.___ComponentsCountX2_1;
	marshaled.___Components_2 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I4, unmarshaled.___Components_2);
}
IL2CPP_EXTERN_C void EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D_marshal_pinvoke_back(const EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D_marshaled_pinvoke& marshaled, EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t unmarshaledGen_temp_0 = 0;
	unmarshaledGen_temp_0 = marshaled.___Gen_0;
	unmarshaled.___Gen_0 = unmarshaledGen_temp_0;
	int16_t unmarshaledComponentsCountX2_temp_1 = 0;
	unmarshaledComponentsCountX2_temp_1 = marshaled.___ComponentsCountX2_1;
	unmarshaled.___ComponentsCountX2_1 = unmarshaledComponentsCountX2_temp_1;
	unmarshaled.___Components_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I4, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, marshaled.___Components_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Components_2), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I4, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, marshaled.___Components_2));
}
// Conversion method for clean up from marshalling of: Leopotam.Ecs.EcsWorld/EcsEntityData
IL2CPP_EXTERN_C void EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D_marshal_pinvoke_cleanup(EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___Components_2);
	marshaled.___Components_2 = NULL;
}
// Conversion methods for marshalling of: Leopotam.Ecs.EcsWorld/EcsEntityData
IL2CPP_EXTERN_C void EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D_marshal_com(const EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D& unmarshaled, EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D_marshaled_com& marshaled)
{
	marshaled.___Gen_0 = unmarshaled.___Gen_0;
	marshaled.___ComponentsCountX2_1 = unmarshaled.___ComponentsCountX2_1;
	marshaled.___Components_2 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I4, unmarshaled.___Components_2);
}
IL2CPP_EXTERN_C void EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D_marshal_com_back(const EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D_marshaled_com& marshaled, EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t unmarshaledGen_temp_0 = 0;
	unmarshaledGen_temp_0 = marshaled.___Gen_0;
	unmarshaled.___Gen_0 = unmarshaledGen_temp_0;
	int16_t unmarshaledComponentsCountX2_temp_1 = 0;
	unmarshaledComponentsCountX2_temp_1 = marshaled.___ComponentsCountX2_1;
	unmarshaled.___ComponentsCountX2_1 = unmarshaledComponentsCountX2_temp_1;
	unmarshaled.___Components_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I4, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, marshaled.___Components_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Components_2), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I4, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, marshaled.___Components_2));
}
// Conversion method for clean up from marshalling of: Leopotam.Ecs.EcsWorld/EcsEntityData
IL2CPP_EXTERN_C void EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D_marshal_com_cleanup(EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___Components_2);
	marshaled.___Components_2 = NULL;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Il2CppSetOptionAttribute_set_Option_m8700BB2365861BAA58378A7475EA399B0332B6D4_inline (Il2CppSetOptionAttribute_tDECA43B02B571750B0BBB5936F9A9C43D0B95E56* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public Option Option { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3COptionU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Il2CppSetOptionAttribute_set_Value_mB869FDE2C07DD58952DC730E0ECB413D63AC5E78_inline (Il2CppSetOptionAttribute_tDECA43B02B571750B0BBB5936F9A9C43D0B95E56* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public object Value { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CValueU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CValueU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EcsEntityExtensions_IsAlive_mA54004DC20E6E7ACE79BC206D69697BEBACE03C3_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) 
{
	EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B5_0 = 0;
	{
		// if (!IsWorldAlive (entity)) { return false; }
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_0 = ___entity0;
		bool L_1;
		L_1 = EcsEntityExtensions_IsWorldAlive_mEA0D4AC1ED9B2D3412DAC98F1F18024A3377B913_inline(L_0, NULL);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		// if (!IsWorldAlive (entity)) { return false; }
		V_2 = (bool)0;
		goto IL_0040;
	}

IL_0013:
	{
		// ref var entityData = ref entity.Owner.GetEntityData (entity);
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_3 = ___entity0;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_4 = L_3->___Owner_2;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_5 = ___entity0;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_6;
		L_6 = EcsWorld_GetEntityData_m279427A5EDB9357D58A2EABDCA4D5FDBFDFE5670_inline(L_4, L_5, NULL);
		V_0 = L_6;
		// return entityData.Gen == entity.Gen && entityData.ComponentsCountX2 >= 0;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_7 = V_0;
		uint16_t L_8 = L_7->___Gen_0;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_9 = ___entity0;
		uint16_t L_10 = L_9->___Gen_1;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_10))))
		{
			goto IL_003c;
		}
	}
	{
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_11 = V_0;
		int16_t L_12 = L_11->___ComponentsCountX2_1;
		G_B5_0 = ((((int32_t)((((int32_t)L_12) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003d;
	}

IL_003c:
	{
		G_B5_0 = 0;
	}

IL_003d:
	{
		V_2 = (bool)G_B5_0;
		goto IL_0040;
	}

IL_0040:
	{
		// }
		bool L_13 = V_2;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EcsEntity_GetHashCode_m833E737089406173FC610597E3A93BF8C34F302D_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	{
		// var hashCode = (Id * 397) ^ Gen.GetHashCode ();
		int32_t L_0 = __this->___Id_0;
		uint16_t* L_1 = (&__this->___Gen_1);
		int32_t L_2;
		L_2 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_1, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)397)))^L_2));
		// hashCode = (hashCode * 397) ^ (Owner != null ? Owner.GetHashCode () : 0);
		int32_t L_3 = V_0;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_4 = __this->___Owner_2;
		G_B1_0 = ((int32_t)il2cpp_codegen_multiply(L_3, ((int32_t)397)));
		if (L_4)
		{
			G_B2_0 = ((int32_t)il2cpp_codegen_multiply(L_3, ((int32_t)397)));
			goto IL_002d;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0038;
	}

IL_002d:
	{
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_5 = __this->___Owner_2;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_5);
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B3_1^G_B3_0));
		// return hashCode;
		int32_t L_7 = V_0;
		V_1 = L_7;
		goto IL_003e;
	}

IL_003e:
	{
		// }
		int32_t L_8 = V_1;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EcsEntity_Equals_mEEBE85D5F0849E2944B0DDC54151EB9F46055702_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* __this, RuntimeObject* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// return other is EcsEntity otherEntity && Equals (otherEntity);
		RuntimeObject* L_0 = ___other0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_il2cpp_TypeInfo_var)))
		{
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_1 = ___other0;
		V_0 = ((*(EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E*)((EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E*)(EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E*)UnBox(L_1, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_il2cpp_TypeInfo_var))));
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_2 = V_0;
		bool L_3;
		L_3 = EcsEntity_Equals_m813ABFB67E22C48C0F57BF1AD656E48F8C6BA652(__this, L_2, NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 0;
	}

IL_001a:
	{
		V_1 = (bool)G_B3_0;
		goto IL_001d;
	}

IL_001d:
	{
		// }
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EcsEntityExtensions_IsNull_m6484A3968191361BCE21B21E90B53CBD5BADC1B7_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// return entity.Id == 0 && entity.Gen == 0;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_0 = ___entity0;
		int32_t L_1 = L_0->___Id_0;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_2 = ___entity0;
		uint16_t L_3 = L_2->___Gen_1;
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
	}

IL_0015:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0018;
	}

IL_0018:
	{
		// }
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* EcsWorld_GetEntityData_m279427A5EDB9357D58A2EABDCA4D5FDBFDFE5670_inline (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* V_2 = NULL;
	int32_t G_B5_0 = 0;
	{
		// if (IsDestroyed) { throw new Exception ("EcsWorld already destroyed."); }
		bool L_0 = __this->___IsDestroyed_10;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// if (IsDestroyed) { throw new Exception ("EcsWorld already destroyed."); }
		Exception_t* L_2 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEA8E3D47DA899F90008EA38068C06006FD0EF74F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsWorld_GetEntityData_m279427A5EDB9357D58A2EABDCA4D5FDBFDFE5670_RuntimeMethod_var)));
	}

IL_0017:
	{
		// if (entity.Id < 0 || entity.Id > EntitiesCount) { throw new Exception ($"Invalid entity {entity.Id}"); }
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_3 = ___entity0;
		int32_t L_4 = L_3->___Id_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_5 = ___entity0;
		int32_t L_6 = L_5->___Id_0;
		int32_t L_7 = __this->___EntitiesCount_1;
		G_B5_0 = ((((int32_t)L_6) > ((int32_t)L_7))? 1 : 0);
		goto IL_0031;
	}

IL_0030:
	{
		G_B5_0 = 1;
	}

IL_0031:
	{
		V_1 = (bool)G_B5_0;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		// if (entity.Id < 0 || entity.Id > EntitiesCount) { throw new Exception ($"Invalid entity {entity.Id}"); }
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_9 = ___entity0;
		int32_t L_10 = L_9->___Id_0;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_11);
		String_t* L_13;
		L_13 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD6C6C179BF2FFCA1A20E3ECDBE723A7176ED7715)), L_12, NULL);
		Exception_t* L_14 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_14, L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsWorld_GetEntityData_m279427A5EDB9357D58A2EABDCA4D5FDBFDFE5670_RuntimeMethod_var)));
	}

IL_0051:
	{
		// return ref Entities[entity.Id];
		EcsEntityDataU5BU5D_t526CEB257B536F3BC51E7F01A338728794063469* L_15 = __this->___Entities_0;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_16 = ___entity0;
		int32_t L_17 = L_16->___Id_0;
		V_2 = ((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_17)));
		goto IL_0065;
	}

IL_0065:
	{
		// }
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_18 = V_2;
		return L_18;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E EcsWorld_NewEntity_m828FEED297F5F42E2F36D2093B694FECE4253EAD_inline (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisEcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D_m0EF6D9B9A664FE94FC75B2B1CD78A846F1A61B63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsGrowList_1_Add_mB34B99A8A330CB3FC27634B68EA9A59A1DB729AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m153C479DE1E49B926CC87C8355FEA2E34F5C7E93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m452929CF39739875E8D0E99D3835FB1E6854195C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC044E9E00E380CF1C3A2B7E8683DAFC81C19897E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsWorldDebugListener_t60C684525E14FB8F0C6F9310FF04E25BEB3FD717_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7E1DCE1BA21C909F54440BFBD207B20711E45008_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* V_3 = NULL;
	int32_t V_4 = 0;
	EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* V_5 = NULL;
	bool V_6 = false;
	Enumerator_t22FF5D0DE3C75401D4D69F6613F2D690B7B96DF5 V_7;
	memset((&V_7), 0, sizeof(V_7));
	RuntimeObject* V_8 = NULL;
	EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E V_9;
	memset((&V_9), 0, sizeof(V_9));
	{
		// if (IsDestroyed) { throw new Exception ("EcsWorld already destroyed."); }
		bool L_0 = __this->___IsDestroyed_10;
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// if (IsDestroyed) { throw new Exception ("EcsWorld already destroyed."); }
		Exception_t* L_2 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEA8E3D47DA899F90008EA38068C06006FD0EF74F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsWorld_NewEntity_m828FEED297F5F42E2F36D2093B694FECE4253EAD_RuntimeMethod_var)));
	}

IL_0017:
	{
		// entity.Owner = this;
		(&V_0)->___Owner_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Owner_2), (void*)__this);
		// if (FreeEntities.Count > 0) {
		EcsGrowList_1_t05BE086951C7D264D8941FC753076684714DAAC3* L_3 = __this->___FreeEntities_2;
		int32_t L_4 = L_3->___Count_1;
		V_2 = (bool)((((int32_t)L_4) > ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_008a;
		}
	}
	{
		// entity.Id = FreeEntities.Items[--FreeEntities.Count];
		EcsGrowList_1_t05BE086951C7D264D8941FC753076684714DAAC3* L_6 = __this->___FreeEntities_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = L_6->___Items_0;
		EcsGrowList_1_t05BE086951C7D264D8941FC753076684714DAAC3* L_8 = __this->___FreeEntities_2;
		EcsGrowList_1_t05BE086951C7D264D8941FC753076684714DAAC3* L_9 = L_8;
		int32_t L_10 = L_9->___Count_1;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		int32_t L_11 = V_4;
		L_9->___Count_1 = L_11;
		int32_t L_12 = V_4;
		int32_t L_13 = L_12;
		int32_t L_14 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		(&V_0)->___Id_0 = L_14;
		// ref var entityData = ref Entities[entity.Id];
		EcsEntityDataU5BU5D_t526CEB257B536F3BC51E7F01A338728794063469* L_15 = __this->___Entities_0;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_16 = V_0;
		int32_t L_17 = L_16.___Id_0;
		V_3 = ((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_17)));
		// entity.Gen = entityData.Gen;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_18 = V_3;
		uint16_t L_19 = L_18->___Gen_0;
		(&V_0)->___Gen_1 = L_19;
		// entityData.ComponentsCountX2 = 0;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_20 = V_3;
		L_20->___ComponentsCountX2_1 = (int16_t)0;
		goto IL_011d;
	}

IL_008a:
	{
		// if (EntitiesCount == Entities.Length) {
		int32_t L_21 = __this->___EntitiesCount_1;
		EcsEntityDataU5BU5D_t526CEB257B536F3BC51E7F01A338728794063469* L_22 = __this->___Entities_0;
		V_6 = (bool)((((int32_t)L_21) == ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length))))? 1 : 0);
		bool L_23 = V_6;
		if (!L_23)
		{
			goto IL_00b7;
		}
	}
	{
		// Array.Resize (ref Entities, EntitiesCount << 1);
		EcsEntityDataU5BU5D_t526CEB257B536F3BC51E7F01A338728794063469** L_24 = (&__this->___Entities_0);
		int32_t L_25 = __this->___EntitiesCount_1;
		Array_Resize_TisEcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D_m0EF6D9B9A664FE94FC75B2B1CD78A846F1A61B63(L_24, ((int32_t)(L_25<<1)), Array_Resize_TisEcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D_m0EF6D9B9A664FE94FC75B2B1CD78A846F1A61B63_RuntimeMethod_var);
	}

IL_00b7:
	{
		// entity.Id = EntitiesCount++;
		int32_t L_26 = __this->___EntitiesCount_1;
		V_4 = L_26;
		int32_t L_27 = V_4;
		__this->___EntitiesCount_1 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		int32_t L_28 = V_4;
		(&V_0)->___Id_0 = L_28;
		// ref var entityData = ref Entities[entity.Id];
		EcsEntityDataU5BU5D_t526CEB257B536F3BC51E7F01A338728794063469* L_29 = __this->___Entities_0;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_30 = V_0;
		int32_t L_31 = L_30.___Id_0;
		V_5 = ((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_31)));
		// entityData.Components = new int[Config.EntityComponentsCacheSize * 2];
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_32 = V_5;
		EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8* L_33 = (&__this->___Config_7);
		int32_t L_34 = L_33->___EntityComponentsCacheSize_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_34, 2)));
		L_32->___Components_2 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&L_32->___Components_2), (void*)L_35);
		// entityData.Gen = 1;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_36 = V_5;
		L_36->___Gen_0 = (uint16_t)1;
		// entity.Gen = entityData.Gen;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_37 = V_5;
		uint16_t L_38 = L_37->___Gen_0;
		(&V_0)->___Gen_1 = L_38;
		// entityData.ComponentsCountX2 = 0;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_39 = V_5;
		L_39->___ComponentsCountX2_1 = (int16_t)0;
	}

IL_011d:
	{
		// _leakedEntities.Add (entity);
		EcsGrowList_1_t6BC5FF876D381A8F076800C4F4C84DC46575D129* L_40 = __this->____leakedEntities_12;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_41 = V_0;
		EcsGrowList_1_Add_mB34B99A8A330CB3FC27634B68EA9A59A1DB729AC_inline(L_40, L_41, EcsGrowList_1_Add_mB34B99A8A330CB3FC27634B68EA9A59A1DB729AC_RuntimeMethod_var);
		// foreach (var debugListener in DebugListeners) {
		List_1_tC7540F0D91B566D741FCE4333F4F18F8889FDFE3* L_42 = __this->___DebugListeners_11;
		Enumerator_t22FF5D0DE3C75401D4D69F6613F2D690B7B96DF5 L_43;
		L_43 = List_1_GetEnumerator_m7E1DCE1BA21C909F54440BFBD207B20711E45008(L_42, List_1_GetEnumerator_m7E1DCE1BA21C909F54440BFBD207B20711E45008_RuntimeMethod_var);
		V_7 = L_43;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0159:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m153C479DE1E49B926CC87C8355FEA2E34F5C7E93((&V_7), Enumerator_Dispose_m153C479DE1E49B926CC87C8355FEA2E34F5C7E93_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_014e_1;
			}

IL_013a_1:
			{
				// foreach (var debugListener in DebugListeners) {
				RuntimeObject* L_44;
				L_44 = Enumerator_get_Current_mC044E9E00E380CF1C3A2B7E8683DAFC81C19897E_inline((&V_7), Enumerator_get_Current_mC044E9E00E380CF1C3A2B7E8683DAFC81C19897E_RuntimeMethod_var);
				V_8 = L_44;
				// debugListener.OnEntityCreated (entity);
				RuntimeObject* L_45 = V_8;
				EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_46 = V_0;
				InterfaceActionInvoker1< EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E >::Invoke(0 /* System.Void Leopotam.Ecs.IEcsWorldDebugListener::OnEntityCreated(Leopotam.Ecs.EcsEntity) */, IEcsWorldDebugListener_t60C684525E14FB8F0C6F9310FF04E25BEB3FD717_il2cpp_TypeInfo_var, L_45, L_46);
			}

IL_014e_1:
			{
				// foreach (var debugListener in DebugListeners) {
				bool L_47;
				L_47 = Enumerator_MoveNext_m452929CF39739875E8D0E99D3835FB1E6854195C((&V_7), Enumerator_MoveNext_m452929CF39739875E8D0E99D3835FB1E6854195C_RuntimeMethod_var);
				if (L_47)
				{
					goto IL_013a_1;
				}
			}
			{
				goto IL_0168;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0168:
	{
		// return entity;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_48 = V_0;
		V_9 = L_48;
		goto IL_016d;
	}

IL_016d:
	{
		// }
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_49 = V_9;
		return L_49;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsWorld_UpdateFilters_mC5F1D16AB93D10EFCBCCEB9CA9982BB888A7928F_inline (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, int32_t ___typeIdx0, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity1, EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* ___entityData2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m48F4681691A2A706881C69C2FB59A4CFD58EB7AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mAAEB730BB484D3ECA345BF704F67084E465FFBF9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	bool V_14 = false;
	int32_t V_15 = 0;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	bool V_22 = false;
	int32_t V_23 = 0;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	int32_t V_28 = 0;
	int32_t V_29 = 0;
	bool V_30 = false;
	int32_t V_31 = 0;
	bool V_32 = false;
	bool V_33 = false;
	bool V_34 = false;
	{
		// if (IsDestroyed) { throw new Exception ("EcsWorld already destroyed."); }
		bool L_0 = __this->___IsDestroyed_10;
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// if (IsDestroyed) { throw new Exception ("EcsWorld already destroyed."); }
		Exception_t* L_2 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEA8E3D47DA899F90008EA38068C06006FD0EF74F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsWorld_UpdateFilters_mC5F1D16AB93D10EFCBCCEB9CA9982BB888A7928F_RuntimeMethod_var)));
	}

IL_0017:
	{
		// if (typeIdx < 0) {
		int32_t L_3 = ___typeIdx0;
		V_2 = (bool)((((int32_t)L_3) < ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0170;
		}
	}
	{
		// if (FilterByIncludedComponents.TryGetValue (-typeIdx, out filters)) {
		Dictionary_2_t30B1449996464D018C2DF1046C38BE7B569157F4* L_5 = __this->___FilterByIncludedComponents_4;
		int32_t L_6 = ___typeIdx0;
		bool L_7;
		L_7 = Dictionary_2_TryGetValue_m48F4681691A2A706881C69C2FB59A4CFD58EB7AB(L_5, ((-L_6)), (&V_0), Dictionary_2_TryGetValue_m48F4681691A2A706881C69C2FB59A4CFD58EB7AB_RuntimeMethod_var);
		V_3 = L_7;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_00c4;
		}
	}
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		V_4 = 0;
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_9 = V_0;
		int32_t L_10 = L_9->___Count_1;
		V_5 = L_10;
		goto IL_00b7;
	}

IL_0047:
	{
		// if (filters.Items[i].IsCompatible (entityData, 0)) {
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_11 = V_0;
		EcsFilterU5BU5D_t3EF9DBAB76F9FFBF2F62801A0320AABBBD53F8DA* L_12 = L_11->___Items_0;
		int32_t L_13 = V_4;
		int32_t L_14 = L_13;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_15 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_16 = ___entityData2;
		bool L_17;
		L_17 = EcsFilter_IsCompatible_m908B473016F3D41FC338BDC440381396E28ECAA2_inline(L_15, L_16, 0, NULL);
		V_6 = L_17;
		bool L_18 = V_6;
		if (!L_18)
		{
			goto IL_00b0;
		}
	}
	{
		// if (!filters.Items[i].GetInternalEntitiesMap ().TryGetValue (entity.GetInternalId (), out var filterIdx)) { filterIdx = -1; }
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_19 = V_0;
		EcsFilterU5BU5D_t3EF9DBAB76F9FFBF2F62801A0320AABBBD53F8DA* L_20 = L_19->___Items_0;
		int32_t L_21 = V_4;
		int32_t L_22 = L_21;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_23 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_24;
		L_24 = EcsFilter_GetInternalEntitiesMap_mDF9685AB884F4391DA63B84BFADB282C965153F5(L_23, NULL);
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_25 = ___entity1;
		int32_t L_26;
		L_26 = EcsEntityExtensions_GetInternalId_mDF05CA62470626A1B47E8E3934D0CFC6432BBA09_inline(L_25, NULL);
		bool L_27;
		L_27 = Dictionary_2_TryGetValue_mAAEB730BB484D3ECA345BF704F67084E465FFBF9(L_24, L_26, (&V_7), Dictionary_2_TryGetValue_mAAEB730BB484D3ECA345BF704F67084E465FFBF9_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_27) == ((int32_t)0))? 1 : 0);
		bool L_28 = V_8;
		if (!L_28)
		{
			goto IL_0088;
		}
	}
	{
		// if (!filters.Items[i].GetInternalEntitiesMap ().TryGetValue (entity.GetInternalId (), out var filterIdx)) { filterIdx = -1; }
		V_7 = (-1);
	}

IL_0088:
	{
		// if (filterIdx < 0) { throw new Exception ("Entity not in filter."); }
		int32_t L_29 = V_7;
		V_9 = (bool)((((int32_t)L_29) < ((int32_t)0))? 1 : 0);
		bool L_30 = V_9;
		if (!L_30)
		{
			goto IL_009f;
		}
	}
	{
		// if (filterIdx < 0) { throw new Exception ("Entity not in filter."); }
		Exception_t* L_31 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_31, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6257718D2302FD68D301F831D5DD87D21396E6FC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_31, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsWorld_UpdateFilters_mC5F1D16AB93D10EFCBCCEB9CA9982BB888A7928F_RuntimeMethod_var)));
	}

IL_009f:
	{
		// filters.Items[i].OnRemoveEntity (entity);
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_32 = V_0;
		EcsFilterU5BU5D_t3EF9DBAB76F9FFBF2F62801A0320AABBBD53F8DA* L_33 = L_32->___Items_0;
		int32_t L_34 = V_4;
		int32_t L_35 = L_34;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_36 = (L_33)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_35));
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_37 = ___entity1;
		VirtualActionInvoker1< EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* >::Invoke(6 /* System.Void Leopotam.Ecs.EcsFilter::OnRemoveEntity(Leopotam.Ecs.EcsEntity& modreq(System.Runtime.InteropServices.InAttribute)) */, L_36, L_37);
	}

IL_00b0:
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		int32_t L_38 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00b7:
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		int32_t L_39 = V_4;
		int32_t L_40 = V_5;
		V_10 = (bool)((((int32_t)L_39) < ((int32_t)L_40))? 1 : 0);
		bool L_41 = V_10;
		if (L_41)
		{
			goto IL_0047;
		}
	}
	{
	}

IL_00c4:
	{
		// if (FilterByExcludedComponents.TryGetValue (-typeIdx, out filters)) {
		Dictionary_2_t30B1449996464D018C2DF1046C38BE7B569157F4* L_42 = __this->___FilterByExcludedComponents_5;
		int32_t L_43 = ___typeIdx0;
		bool L_44;
		L_44 = Dictionary_2_TryGetValue_m48F4681691A2A706881C69C2FB59A4CFD58EB7AB(L_42, ((-L_43)), (&V_0), Dictionary_2_TryGetValue_m48F4681691A2A706881C69C2FB59A4CFD58EB7AB_RuntimeMethod_var);
		V_11 = L_44;
		bool L_45 = V_11;
		if (!L_45)
		{
			goto IL_016a;
		}
	}
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		V_12 = 0;
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_46 = V_0;
		int32_t L_47 = L_46->___Count_1;
		V_13 = L_47;
		goto IL_015d;
	}

IL_00ea:
	{
		// if (filters.Items[i].IsCompatible (entityData, typeIdx)) {
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_48 = V_0;
		EcsFilterU5BU5D_t3EF9DBAB76F9FFBF2F62801A0320AABBBD53F8DA* L_49 = L_48->___Items_0;
		int32_t L_50 = V_12;
		int32_t L_51 = L_50;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_52 = (L_49)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_51));
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_53 = ___entityData2;
		int32_t L_54 = ___typeIdx0;
		bool L_55;
		L_55 = EcsFilter_IsCompatible_m908B473016F3D41FC338BDC440381396E28ECAA2_inline(L_52, L_53, L_54, NULL);
		V_14 = L_55;
		bool L_56 = V_14;
		if (!L_56)
		{
			goto IL_0156;
		}
	}
	{
		// if (!filters.Items[i].GetInternalEntitiesMap ().TryGetValue (entity.GetInternalId (), out var filterIdx)) { filterIdx = -1; }
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_57 = V_0;
		EcsFilterU5BU5D_t3EF9DBAB76F9FFBF2F62801A0320AABBBD53F8DA* L_58 = L_57->___Items_0;
		int32_t L_59 = V_12;
		int32_t L_60 = L_59;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_61 = (L_58)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_60));
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_62;
		L_62 = EcsFilter_GetInternalEntitiesMap_mDF9685AB884F4391DA63B84BFADB282C965153F5(L_61, NULL);
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_63 = ___entity1;
		int32_t L_64;
		L_64 = EcsEntityExtensions_GetInternalId_mDF05CA62470626A1B47E8E3934D0CFC6432BBA09_inline(L_63, NULL);
		bool L_65;
		L_65 = Dictionary_2_TryGetValue_mAAEB730BB484D3ECA345BF704F67084E465FFBF9(L_62, L_64, (&V_15), Dictionary_2_TryGetValue_mAAEB730BB484D3ECA345BF704F67084E465FFBF9_RuntimeMethod_var);
		V_16 = (bool)((((int32_t)L_65) == ((int32_t)0))? 1 : 0);
		bool L_66 = V_16;
		if (!L_66)
		{
			goto IL_012b;
		}
	}
	{
		// if (!filters.Items[i].GetInternalEntitiesMap ().TryGetValue (entity.GetInternalId (), out var filterIdx)) { filterIdx = -1; }
		V_15 = (-1);
	}

IL_012b:
	{
		// if (filterIdx >= 0) { throw new Exception ("Entity already in filter."); }
		int32_t L_67 = V_15;
		V_17 = (bool)((((int32_t)((((int32_t)L_67) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_68 = V_17;
		if (!L_68)
		{
			goto IL_0145;
		}
	}
	{
		// if (filterIdx >= 0) { throw new Exception ("Entity already in filter."); }
		Exception_t* L_69 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_69, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7C889CD3951CB5AE334AE0DE08667B43AAA6556)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_69, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsWorld_UpdateFilters_mC5F1D16AB93D10EFCBCCEB9CA9982BB888A7928F_RuntimeMethod_var)));
	}

IL_0145:
	{
		// filters.Items[i].OnAddEntity (entity);
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_70 = V_0;
		EcsFilterU5BU5D_t3EF9DBAB76F9FFBF2F62801A0320AABBBD53F8DA* L_71 = L_70->___Items_0;
		int32_t L_72 = V_12;
		int32_t L_73 = L_72;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_74 = (L_71)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_73));
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_75 = ___entity1;
		VirtualActionInvoker1< EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* >::Invoke(5 /* System.Void Leopotam.Ecs.EcsFilter::OnAddEntity(Leopotam.Ecs.EcsEntity& modreq(System.Runtime.InteropServices.InAttribute)) */, L_74, L_75);
	}

IL_0156:
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		int32_t L_76 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_015d:
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		int32_t L_77 = V_12;
		int32_t L_78 = V_13;
		V_18 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_18;
		if (L_79)
		{
			goto IL_00ea;
		}
	}
	{
	}

IL_016a:
	{
		goto IL_02ba;
	}

IL_0170:
	{
		// if (FilterByIncludedComponents.TryGetValue (typeIdx, out filters)) {
		Dictionary_2_t30B1449996464D018C2DF1046C38BE7B569157F4* L_80 = __this->___FilterByIncludedComponents_4;
		int32_t L_81 = ___typeIdx0;
		bool L_82;
		L_82 = Dictionary_2_TryGetValue_m48F4681691A2A706881C69C2FB59A4CFD58EB7AB(L_80, L_81, (&V_0), Dictionary_2_TryGetValue_m48F4681691A2A706881C69C2FB59A4CFD58EB7AB_RuntimeMethod_var);
		V_19 = L_82;
		bool L_83 = V_19;
		if (!L_83)
		{
			goto IL_0216;
		}
	}
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		V_20 = 0;
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_84 = V_0;
		int32_t L_85 = L_84->___Count_1;
		V_21 = L_85;
		goto IL_0209;
	}

IL_0196:
	{
		// if (filters.Items[i].IsCompatible (entityData, 0)) {
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_86 = V_0;
		EcsFilterU5BU5D_t3EF9DBAB76F9FFBF2F62801A0320AABBBD53F8DA* L_87 = L_86->___Items_0;
		int32_t L_88 = V_20;
		int32_t L_89 = L_88;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_90 = (L_87)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_89));
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_91 = ___entityData2;
		bool L_92;
		L_92 = EcsFilter_IsCompatible_m908B473016F3D41FC338BDC440381396E28ECAA2_inline(L_90, L_91, 0, NULL);
		V_22 = L_92;
		bool L_93 = V_22;
		if (!L_93)
		{
			goto IL_0202;
		}
	}
	{
		// if (!filters.Items[i].GetInternalEntitiesMap ().TryGetValue (entity.GetInternalId (), out var filterIdx)) { filterIdx = -1; }
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_94 = V_0;
		EcsFilterU5BU5D_t3EF9DBAB76F9FFBF2F62801A0320AABBBD53F8DA* L_95 = L_94->___Items_0;
		int32_t L_96 = V_20;
		int32_t L_97 = L_96;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_98 = (L_95)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_97));
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_99;
		L_99 = EcsFilter_GetInternalEntitiesMap_mDF9685AB884F4391DA63B84BFADB282C965153F5(L_98, NULL);
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_100 = ___entity1;
		int32_t L_101;
		L_101 = EcsEntityExtensions_GetInternalId_mDF05CA62470626A1B47E8E3934D0CFC6432BBA09_inline(L_100, NULL);
		bool L_102;
		L_102 = Dictionary_2_TryGetValue_mAAEB730BB484D3ECA345BF704F67084E465FFBF9(L_99, L_101, (&V_23), Dictionary_2_TryGetValue_mAAEB730BB484D3ECA345BF704F67084E465FFBF9_RuntimeMethod_var);
		V_24 = (bool)((((int32_t)L_102) == ((int32_t)0))? 1 : 0);
		bool L_103 = V_24;
		if (!L_103)
		{
			goto IL_01d7;
		}
	}
	{
		// if (!filters.Items[i].GetInternalEntitiesMap ().TryGetValue (entity.GetInternalId (), out var filterIdx)) { filterIdx = -1; }
		V_23 = (-1);
	}

IL_01d7:
	{
		// if (filterIdx >= 0) { throw new Exception ("Entity already in filter."); }
		int32_t L_104 = V_23;
		V_25 = (bool)((((int32_t)((((int32_t)L_104) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_105 = V_25;
		if (!L_105)
		{
			goto IL_01f1;
		}
	}
	{
		// if (filterIdx >= 0) { throw new Exception ("Entity already in filter."); }
		Exception_t* L_106 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_106, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7C889CD3951CB5AE334AE0DE08667B43AAA6556)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsWorld_UpdateFilters_mC5F1D16AB93D10EFCBCCEB9CA9982BB888A7928F_RuntimeMethod_var)));
	}

IL_01f1:
	{
		// filters.Items[i].OnAddEntity (entity);
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_107 = V_0;
		EcsFilterU5BU5D_t3EF9DBAB76F9FFBF2F62801A0320AABBBD53F8DA* L_108 = L_107->___Items_0;
		int32_t L_109 = V_20;
		int32_t L_110 = L_109;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_111 = (L_108)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_110));
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_112 = ___entity1;
		VirtualActionInvoker1< EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* >::Invoke(5 /* System.Void Leopotam.Ecs.EcsFilter::OnAddEntity(Leopotam.Ecs.EcsEntity& modreq(System.Runtime.InteropServices.InAttribute)) */, L_111, L_112);
	}

IL_0202:
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		int32_t L_113 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add(L_113, 1));
	}

IL_0209:
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		int32_t L_114 = V_20;
		int32_t L_115 = V_21;
		V_26 = (bool)((((int32_t)L_114) < ((int32_t)L_115))? 1 : 0);
		bool L_116 = V_26;
		if (L_116)
		{
			goto IL_0196;
		}
	}
	{
	}

IL_0216:
	{
		// if (FilterByExcludedComponents.TryGetValue (typeIdx, out filters)) {
		Dictionary_2_t30B1449996464D018C2DF1046C38BE7B569157F4* L_117 = __this->___FilterByExcludedComponents_5;
		int32_t L_118 = ___typeIdx0;
		bool L_119;
		L_119 = Dictionary_2_TryGetValue_m48F4681691A2A706881C69C2FB59A4CFD58EB7AB(L_117, L_118, (&V_0), Dictionary_2_TryGetValue_m48F4681691A2A706881C69C2FB59A4CFD58EB7AB_RuntimeMethod_var);
		V_27 = L_119;
		bool L_120 = V_27;
		if (!L_120)
		{
			goto IL_02b9;
		}
	}
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		V_28 = 0;
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_121 = V_0;
		int32_t L_122 = L_121->___Count_1;
		V_29 = L_122;
		goto IL_02ac;
	}

IL_023b:
	{
		// if (filters.Items[i].IsCompatible (entityData, -typeIdx)) {
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_123 = V_0;
		EcsFilterU5BU5D_t3EF9DBAB76F9FFBF2F62801A0320AABBBD53F8DA* L_124 = L_123->___Items_0;
		int32_t L_125 = V_28;
		int32_t L_126 = L_125;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_127 = (L_124)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_126));
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_128 = ___entityData2;
		int32_t L_129 = ___typeIdx0;
		bool L_130;
		L_130 = EcsFilter_IsCompatible_m908B473016F3D41FC338BDC440381396E28ECAA2_inline(L_127, L_128, ((-L_129)), NULL);
		V_30 = L_130;
		bool L_131 = V_30;
		if (!L_131)
		{
			goto IL_02a5;
		}
	}
	{
		// if (!filters.Items[i].GetInternalEntitiesMap ().TryGetValue (entity.GetInternalId (), out var filterIdx)) { filterIdx = -1; }
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_132 = V_0;
		EcsFilterU5BU5D_t3EF9DBAB76F9FFBF2F62801A0320AABBBD53F8DA* L_133 = L_132->___Items_0;
		int32_t L_134 = V_28;
		int32_t L_135 = L_134;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_136 = (L_133)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_135));
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_137;
		L_137 = EcsFilter_GetInternalEntitiesMap_mDF9685AB884F4391DA63B84BFADB282C965153F5(L_136, NULL);
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_138 = ___entity1;
		int32_t L_139;
		L_139 = EcsEntityExtensions_GetInternalId_mDF05CA62470626A1B47E8E3934D0CFC6432BBA09_inline(L_138, NULL);
		bool L_140;
		L_140 = Dictionary_2_TryGetValue_mAAEB730BB484D3ECA345BF704F67084E465FFBF9(L_137, L_139, (&V_31), Dictionary_2_TryGetValue_mAAEB730BB484D3ECA345BF704F67084E465FFBF9_RuntimeMethod_var);
		V_32 = (bool)((((int32_t)L_140) == ((int32_t)0))? 1 : 0);
		bool L_141 = V_32;
		if (!L_141)
		{
			goto IL_027d;
		}
	}
	{
		// if (!filters.Items[i].GetInternalEntitiesMap ().TryGetValue (entity.GetInternalId (), out var filterIdx)) { filterIdx = -1; }
		V_31 = (-1);
	}

IL_027d:
	{
		// if (filterIdx < 0) { throw new Exception ("Entity not in filter."); }
		int32_t L_142 = V_31;
		V_33 = (bool)((((int32_t)L_142) < ((int32_t)0))? 1 : 0);
		bool L_143 = V_33;
		if (!L_143)
		{
			goto IL_0294;
		}
	}
	{
		// if (filterIdx < 0) { throw new Exception ("Entity not in filter."); }
		Exception_t* L_144 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_144, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6257718D2302FD68D301F831D5DD87D21396E6FC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_144, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsWorld_UpdateFilters_mC5F1D16AB93D10EFCBCCEB9CA9982BB888A7928F_RuntimeMethod_var)));
	}

IL_0294:
	{
		// filters.Items[i].OnRemoveEntity (entity);
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_145 = V_0;
		EcsFilterU5BU5D_t3EF9DBAB76F9FFBF2F62801A0320AABBBD53F8DA* L_146 = L_145->___Items_0;
		int32_t L_147 = V_28;
		int32_t L_148 = L_147;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_149 = (L_146)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_148));
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_150 = ___entity1;
		VirtualActionInvoker1< EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* >::Invoke(6 /* System.Void Leopotam.Ecs.EcsFilter::OnRemoveEntity(Leopotam.Ecs.EcsEntity& modreq(System.Runtime.InteropServices.InAttribute)) */, L_149, L_150);
	}

IL_02a5:
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		int32_t L_151 = V_28;
		V_28 = ((int32_t)il2cpp_codegen_add(L_151, 1));
	}

IL_02ac:
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		int32_t L_152 = V_28;
		int32_t L_153 = V_29;
		V_34 = (bool)((((int32_t)L_152) < ((int32_t)L_153))? 1 : 0);
		bool L_154 = V_34;
		if (L_154)
		{
			goto IL_023b;
		}
	}
	{
	}

IL_02b9:
	{
	}

IL_02ba:
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EcsEntityExtensions_AreEquals_m12E0A04AF4C515D2F92BB1F2D322C3B636627AAC_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___lhs0, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// return lhs.Id == rhs.Id && lhs.Gen == rhs.Gen;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_0 = ___lhs0;
		int32_t L_1 = L_0->___Id_0;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_2 = ___rhs1;
		int32_t L_3 = L_2->___Id_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_001f;
		}
	}
	{
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_4 = ___lhs0;
		uint16_t L_5 = L_4->___Gen_1;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_6 = ___rhs1;
		uint16_t L_7 = L_6->___Gen_1;
		G_B3_0 = ((((int32_t)L_5) == ((int32_t)L_7))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0023;
	}

IL_0023:
	{
		// }
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsEntityExtensions_Destroy_m6DF536AB88ADBB52F10983D339A2EF731881701B_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsComponentPool_t9FB24E470344947394FBDF6CA1F7221CEB0F7F44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsWorldDebugListener_t60C684525E14FB8F0C6F9310FF04E25BEB3FD717_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mBB3BC3E7006C4F216B9184956D745320C58C0E95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21961D4F8434746893C9CE71A0A1BD6322E7EA9F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* V_0 = NULL;
	EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	{
		// ref var entityData = ref entity.Owner.GetEntityData (entity);
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_0 = ___entity0;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_1 = L_0->___Owner_2;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_2 = ___entity0;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_3;
		L_3 = EcsWorld_GetEntityData_m279427A5EDB9357D58A2EABDCA4D5FDBFDFE5670_inline(L_1, L_2, NULL);
		V_0 = L_3;
		// savedEntity.Id = entity.Id;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_4 = ___entity0;
		int32_t L_5 = L_4->___Id_0;
		(&V_1)->___Id_0 = L_5;
		// savedEntity.Gen = entity.Gen;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_6 = ___entity0;
		uint16_t L_7 = L_6->___Gen_1;
		(&V_1)->___Gen_1 = L_7;
		// savedEntity.Owner = entity.Owner;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_8 = ___entity0;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_9 = L_8->___Owner_2;
		(&V_1)->___Owner_2 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_1)->___Owner_2), (void*)L_9);
		// if (entityData.Gen != entity.Gen) { throw new Exception ("Cant touch destroyed entity."); }
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_10 = V_0;
		uint16_t L_11 = L_10->___Gen_0;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_12 = ___entity0;
		uint16_t L_13 = L_12->___Gen_1;
		V_2 = (bool)((((int32_t)((((int32_t)L_11) == ((int32_t)L_13))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_2;
		if (!L_14)
		{
			goto IL_0056;
		}
	}
	{
		// if (entityData.Gen != entity.Gen) { throw new Exception ("Cant touch destroyed entity."); }
		Exception_t* L_15 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F6A0CE0FC9A511BCFFC553063AC3CBAA2D1E47D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsEntityExtensions_Destroy_m6DF536AB88ADBB52F10983D339A2EF731881701B_RuntimeMethod_var)));
	}

IL_0056:
	{
		// for (var i = entityData.ComponentsCountX2 - 2; i >= 0; i -= 2) {
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_16 = V_0;
		int16_t L_17 = L_16->___ComponentsCountX2_1;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_17, 2));
		goto IL_00f2;
	}

IL_0064:
	{
		// savedEntity.Owner.UpdateFilters (-entityData.Components[i], savedEntity, entityData);
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_18 = V_1;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_19 = L_18.___Owner_2;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_20 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = L_20->___Components_2;
		int32_t L_22 = V_3;
		int32_t L_23 = L_22;
		int32_t L_24 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_25 = V_0;
		EcsWorld_UpdateFilters_mC5F1D16AB93D10EFCBCCEB9CA9982BB888A7928F_inline(L_19, ((-L_24)), (&V_1), L_25, NULL);
		// savedEntity.Owner.ComponentPools[entityData.Components[i]].Recycle (entityData.Components[i + 1]);
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_26 = V_1;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_27 = L_26.___Owner_2;
		IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39* L_28 = L_27->___ComponentPools_9;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_29 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = L_29->___Components_2;
		int32_t L_31 = V_3;
		int32_t L_32 = L_31;
		int32_t L_33 = (L_30)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32));
		int32_t L_34 = L_33;
		RuntimeObject* L_35 = (L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34));
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_36 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = L_36->___Components_2;
		int32_t L_38 = V_3;
		int32_t L_39 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		int32_t L_40 = (L_37)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_39));
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void Leopotam.Ecs.IEcsComponentPool::Recycle(System.Int32) */, IEcsComponentPool_t9FB24E470344947394FBDF6CA1F7221CEB0F7F44_il2cpp_TypeInfo_var, L_35, L_40);
		// entityData.ComponentsCountX2 -= 2;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_41 = V_0;
		int16_t* L_42 = (&L_41->___ComponentsCountX2_1);
		int16_t* L_43 = L_42;
		int32_t L_44 = *((int16_t*)L_43);
		*((int16_t*)L_43) = (int16_t)((int16_t)((int32_t)il2cpp_codegen_subtract(L_44, 2)));
		// for (var ii = 0; ii < savedEntity.Owner.DebugListeners.Count; ii++) {
		V_4 = 0;
		goto IL_00d3;
	}

IL_00b2:
	{
		// savedEntity.Owner.DebugListeners[ii].OnComponentListChanged (savedEntity);
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_45 = V_1;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_46 = L_45.___Owner_2;
		List_1_tC7540F0D91B566D741FCE4333F4F18F8889FDFE3* L_47 = L_46->___DebugListeners_11;
		int32_t L_48 = V_4;
		RuntimeObject* L_49;
		L_49 = List_1_get_Item_m21961D4F8434746893C9CE71A0A1BD6322E7EA9F(L_47, L_48, List_1_get_Item_m21961D4F8434746893C9CE71A0A1BD6322E7EA9F_RuntimeMethod_var);
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_50 = V_1;
		InterfaceActionInvoker1< EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E >::Invoke(3 /* System.Void Leopotam.Ecs.IEcsWorldDebugListener::OnComponentListChanged(Leopotam.Ecs.EcsEntity) */, IEcsWorldDebugListener_t60C684525E14FB8F0C6F9310FF04E25BEB3FD717_il2cpp_TypeInfo_var, L_49, L_50);
		// for (var ii = 0; ii < savedEntity.Owner.DebugListeners.Count; ii++) {
		int32_t L_51 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_00d3:
	{
		// for (var ii = 0; ii < savedEntity.Owner.DebugListeners.Count; ii++) {
		int32_t L_52 = V_4;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_53 = V_1;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_54 = L_53.___Owner_2;
		List_1_tC7540F0D91B566D741FCE4333F4F18F8889FDFE3* L_55 = L_54->___DebugListeners_11;
		int32_t L_56;
		L_56 = List_1_get_Count_mBB3BC3E7006C4F216B9184956D745320C58C0E95_inline(L_55, List_1_get_Count_mBB3BC3E7006C4F216B9184956D745320C58C0E95_RuntimeMethod_var);
		V_5 = (bool)((((int32_t)L_52) < ((int32_t)L_56))? 1 : 0);
		bool L_57 = V_5;
		if (L_57)
		{
			goto IL_00b2;
		}
	}
	{
		// for (var i = entityData.ComponentsCountX2 - 2; i >= 0; i -= 2) {
		int32_t L_58 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_58, 2));
	}

IL_00f2:
	{
		// for (var i = entityData.ComponentsCountX2 - 2; i >= 0; i -= 2) {
		int32_t L_59 = V_3;
		V_6 = (bool)((((int32_t)((((int32_t)L_59) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_60 = V_6;
		if (L_60)
		{
			goto IL_0064;
		}
	}
	{
		// entityData.ComponentsCountX2 = 0;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_61 = V_0;
		L_61->___ComponentsCountX2_1 = (int16_t)0;
		// savedEntity.Owner.RecycleEntityData (savedEntity.Id, ref entityData);
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_62 = V_1;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_63 = L_62.___Owner_2;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_64 = V_1;
		int32_t L_65 = L_64.___Id_0;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_66 = V_0;
		EcsWorld_RecycleEntityData_mF32D0E0B4CE31E2AE7027C51DA0C54F9D53FC0D2(L_63, L_65, L_66, NULL);
		// for (var ii = 0; ii < savedEntity.Owner.DebugListeners.Count; ii++) {
		V_7 = 0;
		goto IL_0142;
	}

IL_0121:
	{
		// savedEntity.Owner.DebugListeners[ii].OnEntityDestroyed (savedEntity);
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_67 = V_1;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_68 = L_67.___Owner_2;
		List_1_tC7540F0D91B566D741FCE4333F4F18F8889FDFE3* L_69 = L_68->___DebugListeners_11;
		int32_t L_70 = V_7;
		RuntimeObject* L_71;
		L_71 = List_1_get_Item_m21961D4F8434746893C9CE71A0A1BD6322E7EA9F(L_69, L_70, List_1_get_Item_m21961D4F8434746893C9CE71A0A1BD6322E7EA9F_RuntimeMethod_var);
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_72 = V_1;
		InterfaceActionInvoker1< EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E >::Invoke(1 /* System.Void Leopotam.Ecs.IEcsWorldDebugListener::OnEntityDestroyed(Leopotam.Ecs.EcsEntity) */, IEcsWorldDebugListener_t60C684525E14FB8F0C6F9310FF04E25BEB3FD717_il2cpp_TypeInfo_var, L_71, L_72);
		// for (var ii = 0; ii < savedEntity.Owner.DebugListeners.Count; ii++) {
		int32_t L_73 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_73, 1));
	}

IL_0142:
	{
		// for (var ii = 0; ii < savedEntity.Owner.DebugListeners.Count; ii++) {
		int32_t L_74 = V_7;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_75 = V_1;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_76 = L_75.___Owner_2;
		List_1_tC7540F0D91B566D741FCE4333F4F18F8889FDFE3* L_77 = L_76->___DebugListeners_11;
		int32_t L_78;
		L_78 = List_1_get_Count_mBB3BC3E7006C4F216B9184956D745320C58C0E95_inline(L_77, List_1_get_Count_mBB3BC3E7006C4F216B9184956D745320C58C0E95_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_74) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_8;
		if (L_79)
		{
			goto IL_0121;
		}
	}
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EcsEntityExtensions_IsWorldAlive_mEA0D4AC1ED9B2D3412DAC98F1F18024A3377B913_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// return entity.Owner != null && entity.Owner.IsAlive ();
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_0 = ___entity0;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_1 = L_0->___Owner_2;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_2 = ___entity0;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_3 = L_2->___Owner_2;
		bool L_4;
		L_4 = EcsWorld_IsAlive_mCBD30D99C44C9963296CBAB628A78C2423CC9155_inline(L_3, NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 0;
	}

IL_0017:
	{
		V_0 = (bool)G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		// }
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EcsWorld_IsAlive_mCBD30D99C44C9963296CBAB628A78C2423CC9155_inline (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return !IsDestroyed;
		bool L_0 = __this->___IsDestroyed_10;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator__ctor_mAD2CACAE4DC96A5F987178A5C4532E38610796C2_inline (Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B* __this, EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* ___filter0, const RuntimeMethod* method) 
{
	{
		// _filter = filter;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_0 = ___filter0;
		__this->____filter_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____filter_0), (void*)L_0);
		// _count = _filter.GetEntitiesCount ();
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_1 = __this->____filter_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = EcsFilter_GetEntitiesCount_m1BDEEE64638444BB80F6331A144CE7C760ECE9C1_inline(L_1, NULL);
		__this->____count_1 = L_2;
		// _idx = -1;
		__this->____idx_2 = (-1);
		// _filter.Lock ();
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_3 = __this->____filter_0;
		NullCheck(L_3);
		EcsFilter_Lock_mA02D6F8F94E8DE65F1DC6F854EF457260AFF57F8_inline(L_3, NULL);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EcsFilter_GetEntitiesCount_m1BDEEE64638444BB80F6331A144CE7C760ECE9C1_inline (EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return EntitiesCount;
		int32_t L_0 = __this->___EntitiesCount_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsFilter_Lock_mA02D6F8F94E8DE65F1DC6F854EF457260AFF57F8_inline (EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* __this, const RuntimeMethod* method) 
{
	{
		// LockCount++;
		int32_t L_0 = __this->___LockCount_3;
		__this->___LockCount_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_m3643613B3D6014D3200CB8D0F5F50F0C6CCFFCCD_inline (Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B* __this, const RuntimeMethod* method) 
{
	{
		// get => _idx;
		int32_t L_0 = __this->____idx_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsFilter_Unlock_m194398A287AA4320005015ED2F33DB4116FF50B7_inline (EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B5_0 = 0;
	{
		// if (LockCount <= 0) {
		int32_t L_0 = __this->___LockCount_3;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		// throw new Exception ($"Invalid lock-unlock balance for \"{GetType ().Name}\".");
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42421D059AAE096C7B60839ABFEB44B5C73C66C4)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral606C771900936C652E7DC0D284530387D5ED57D1)), NULL);
		Exception_t* L_5 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsFilter_Unlock_m194398A287AA4320005015ED2F33DB4116FF50B7_RuntimeMethod_var)));
	}

IL_0032:
	{
		// LockCount--;
		int32_t L_6 = __this->___LockCount_3;
		__this->___LockCount_3 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
		// if (LockCount == 0 && _delayedOpsCount > 0) {
		int32_t L_7 = __this->___LockCount_3;
		if (L_7)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_8 = __this->____delayedOpsCount_6;
		G_B5_0 = ((((int32_t)L_8) > ((int32_t)0))? 1 : 0);
		goto IL_0054;
	}

IL_0053:
	{
		G_B5_0 = 0;
	}

IL_0054:
	{
		V_1 = (bool)G_B5_0;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_00b9;
		}
	}
	{
		// for (int i = 0, iMax = _delayedOpsCount; i < iMax; i++) {
		V_2 = 0;
		// for (int i = 0, iMax = _delayedOpsCount; i < iMax; i++) {
		int32_t L_10 = __this->____delayedOpsCount_6;
		V_3 = L_10;
		goto IL_00a7;
	}

IL_0064:
	{
		// ref var op = ref _delayedOps[i];
		DelayedOpU5BU5D_t5DE36772360B7C519979E55E5A333A3FEAF23670* L_11 = __this->____delayedOps_5;
		int32_t L_12 = V_2;
		V_4 = ((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_12)));
		// if (op.IsAdd) {
		DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643* L_13 = V_4;
		bool L_14 = L_13->___IsAdd_0;
		V_5 = L_14;
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_0092;
		}
	}
	{
		// OnAddEntity (op.Entity);
		DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643* L_16 = V_4;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_17 = (&L_16->___Entity_1);
		VirtualActionInvoker1< EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* >::Invoke(5 /* System.Void Leopotam.Ecs.EcsFilter::OnAddEntity(Leopotam.Ecs.EcsEntity& modreq(System.Runtime.InteropServices.InAttribute)) */, __this, L_17);
		goto IL_00a2;
	}

IL_0092:
	{
		// OnRemoveEntity (op.Entity);
		DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643* L_18 = V_4;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_19 = (&L_18->___Entity_1);
		VirtualActionInvoker1< EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* >::Invoke(6 /* System.Void Leopotam.Ecs.EcsFilter::OnRemoveEntity(Leopotam.Ecs.EcsEntity& modreq(System.Runtime.InteropServices.InAttribute)) */, __this, L_19);
	}

IL_00a2:
	{
		// for (int i = 0, iMax = _delayedOpsCount; i < iMax; i++) {
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_00a7:
	{
		// for (int i = 0, iMax = _delayedOpsCount; i < iMax; i++) {
		int32_t L_21 = V_2;
		int32_t L_22 = V_3;
		V_6 = (bool)((((int32_t)L_21) < ((int32_t)L_22))? 1 : 0);
		bool L_23 = V_6;
		if (L_23)
		{
			goto IL_0064;
		}
	}
	{
		// _delayedOpsCount = 0;
		__this->____delayedOpsCount_6 = 0;
	}

IL_00b9:
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_Dispose_mAB0D6EEA7028DFCB8261808853152882FC8EBBA8_inline (Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B* __this, const RuntimeMethod* method) 
{
	{
		// _filter.Unlock ();
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_0 = __this->____filter_0;
		EcsFilter_Unlock_m194398A287AA4320005015ED2F33DB4116FF50B7_inline(L_0, NULL);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mA175620871ECBCBDEA305F457591FD1A5197389E_inline (Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// return ++_idx < _count;
		int32_t L_0 = __this->____idx_2;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t L_1 = V_0;
		__this->____idx_2 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____count_1;
		V_1 = (bool)((((int32_t)L_2) < ((int32_t)L_3))? 1 : 0);
		goto IL_001d;
	}

IL_001d:
	{
		// }
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EcsFilter_IsCompatible_m908B473016F3D41FC338BDC440381396E28ECAA2_inline (EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* __this, EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* ___entityData0, int32_t ___addedRemovedTypeIndex1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B26_0 = 0;
	{
		// var incIdx = IncludedTypeIndices.Length - 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___IncludedTypeIndices_7;
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_0)->max_length)), 1));
		goto IL_0074;
	}

IL_000e:
	{
		// var typeIdx = IncludedTypeIndices[incIdx];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->___IncludedTypeIndices_7;
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		// var idx = entityData.ComponentsCountX2 - 2;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_5 = ___entityData0;
		int16_t L_6 = L_5->___ComponentsCountX2_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, 2));
		goto IL_0054;
	}

IL_0023:
	{
		// var typeIdx2 = entityData.Components[idx];
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_7 = ___entityData0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = L_7->___Components_2;
		int32_t L_9 = V_2;
		int32_t L_10 = L_9;
		int32_t L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = L_11;
		// if (typeIdx2 == -addedRemovedTypeIndex) {
		int32_t L_12 = V_3;
		int32_t L_13 = ___addedRemovedTypeIndex1;
		V_4 = (bool)((((int32_t)L_12) == ((int32_t)((-L_13))))? 1 : 0);
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_003b;
		}
	}
	{
		// continue;
		goto IL_0050;
	}

IL_003b:
	{
		// if (typeIdx2 == addedRemovedTypeIndex || typeIdx2 == typeIdx) {
		int32_t L_15 = V_3;
		int32_t L_16 = ___addedRemovedTypeIndex1;
		if ((((int32_t)L_15) == ((int32_t)L_16)))
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_17 = V_3;
		int32_t L_18 = V_1;
		G_B7_0 = ((((int32_t)L_17) == ((int32_t)L_18))? 1 : 0);
		goto IL_0046;
	}

IL_0045:
	{
		G_B7_0 = 1;
	}

IL_0046:
	{
		V_5 = (bool)G_B7_0;
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_004f;
		}
	}
	{
		// break;
		goto IL_0061;
	}

IL_004f:
	{
	}

IL_0050:
	{
		// for (; idx >= 0; idx -= 2) {
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_20, 2));
	}

IL_0054:
	{
		// for (; idx >= 0; idx -= 2) {
		int32_t L_21 = V_2;
		V_6 = (bool)((((int32_t)((((int32_t)L_21) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_6;
		if (L_22)
		{
			goto IL_0023;
		}
	}

IL_0061:
	{
		// if (idx == -2) {
		int32_t L_23 = V_2;
		V_7 = (bool)((((int32_t)L_23) == ((int32_t)((int32_t)-2)))? 1 : 0);
		bool L_24 = V_7;
		if (!L_24)
		{
			goto IL_006f;
		}
	}
	{
		// break;
		goto IL_0081;
	}

IL_006f:
	{
		// for (; incIdx >= 0; incIdx--) {
		int32_t L_25 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_25, 1));
	}

IL_0074:
	{
		// for (; incIdx >= 0; incIdx--) {
		int32_t L_26 = V_0;
		V_8 = (bool)((((int32_t)((((int32_t)L_26) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_27 = V_8;
		if (L_27)
		{
			goto IL_000e;
		}
	}

IL_0081:
	{
		// if (incIdx != -1) {
		int32_t L_28 = V_0;
		V_9 = (bool)((((int32_t)((((int32_t)L_28) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_29 = V_9;
		if (!L_29)
		{
			goto IL_0097;
		}
	}
	{
		// return false;
		V_10 = (bool)0;
		goto IL_0130;
	}

IL_0097:
	{
		// if (ExcludedTypeIndices != null) {
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->___ExcludedTypeIndices_8;
		V_11 = (bool)((!(((RuntimeObject*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_30) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_31 = V_11;
		if (!L_31)
		{
			goto IL_012b;
		}
	}
	{
		// for (var excIdx = 0; excIdx < ExcludedTypeIndices.Length; excIdx++) {
		V_12 = 0;
		goto IL_0118;
	}

IL_00af:
	{
		// var typeIdx = ExcludedTypeIndices[excIdx];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = __this->___ExcludedTypeIndices_8;
		int32_t L_33 = V_12;
		int32_t L_34 = L_33;
		int32_t L_35 = (L_32)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34));
		V_13 = L_35;
		// for (var idx = entityData.ComponentsCountX2 - 2; idx >= 0; idx -= 2) {
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_36 = ___entityData0;
		int16_t L_37 = L_36->___ComponentsCountX2_1;
		V_14 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_37, 2));
		goto IL_0103;
	}

IL_00c7:
	{
		// var typeIdx2 = entityData.Components[idx];
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_38 = ___entityData0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = L_38->___Components_2;
		int32_t L_40 = V_14;
		int32_t L_41 = L_40;
		int32_t L_42 = (L_39)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_41));
		V_15 = L_42;
		// if (typeIdx2 == -addedRemovedTypeIndex) {
		int32_t L_43 = V_15;
		int32_t L_44 = ___addedRemovedTypeIndex1;
		V_16 = (bool)((((int32_t)L_43) == ((int32_t)((-L_44))))? 1 : 0);
		bool L_45 = V_16;
		if (!L_45)
		{
			goto IL_00e2;
		}
	}
	{
		// continue;
		goto IL_00fd;
	}

IL_00e2:
	{
		// if (typeIdx2 == addedRemovedTypeIndex || typeIdx2 == typeIdx) {
		int32_t L_46 = V_15;
		int32_t L_47 = ___addedRemovedTypeIndex1;
		if ((((int32_t)L_46) == ((int32_t)L_47)))
		{
			goto IL_00ef;
		}
	}
	{
		int32_t L_48 = V_15;
		int32_t L_49 = V_13;
		G_B26_0 = ((((int32_t)L_48) == ((int32_t)L_49))? 1 : 0);
		goto IL_00f0;
	}

IL_00ef:
	{
		G_B26_0 = 1;
	}

IL_00f0:
	{
		V_17 = (bool)G_B26_0;
		bool L_50 = V_17;
		if (!L_50)
		{
			goto IL_00fc;
		}
	}
	{
		// return false;
		V_10 = (bool)0;
		goto IL_0130;
	}

IL_00fc:
	{
	}

IL_00fd:
	{
		// for (var idx = entityData.ComponentsCountX2 - 2; idx >= 0; idx -= 2) {
		int32_t L_51 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_subtract(L_51, 2));
	}

IL_0103:
	{
		// for (var idx = entityData.ComponentsCountX2 - 2; idx >= 0; idx -= 2) {
		int32_t L_52 = V_14;
		V_18 = (bool)((((int32_t)((((int32_t)L_52) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_53 = V_18;
		if (L_53)
		{
			goto IL_00c7;
		}
	}
	{
		// for (var excIdx = 0; excIdx < ExcludedTypeIndices.Length; excIdx++) {
		int32_t L_54 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_0118:
	{
		// for (var excIdx = 0; excIdx < ExcludedTypeIndices.Length; excIdx++) {
		int32_t L_55 = V_12;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = __this->___ExcludedTypeIndices_8;
		V_19 = (bool)((((int32_t)L_55) < ((int32_t)((int32_t)(((RuntimeArray*)L_56)->max_length))))? 1 : 0);
		bool L_57 = V_19;
		if (L_57)
		{
			goto IL_00af;
		}
	}
	{
	}

IL_012b:
	{
		// return true;
		V_10 = (bool)1;
		goto IL_0130;
	}

IL_0130:
	{
		// }
		bool L_58 = V_10;
		return L_58;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EcsEntityExtensions_GetInternalId_mDF05CA62470626A1B47E8E3934D0CFC6432BBA09_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return entity.Id;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_0 = ___entity0;
		int32_t L_1 = L_0->___Id_0;
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
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
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsGrowList_1__ctor_mE59E17E9B5DAD41A34225F68D4BD276D19332902_gshared_inline (EcsGrowList_1_tD2FE2DF3939E65F1327B5527C78A504B16DDFF3E* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// public EcsGrowList (int capacity) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// if (capacity <= 0) { throw new Exception ("Capacity should be greater than zero."); }
		int32_t L_0 = ___capacity0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// if (capacity <= 0) { throw new Exception ("Capacity should be greater than zero."); }
		Exception_t* L_2 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2E422EB4772F1976D4425CDE7F443C68DE946D68)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsGrowList_1__ctor_mE59E17E9B5DAD41A34225F68D4BD276D19332902_RuntimeMethod_var)));
	}

IL_001f:
	{
		// Items = new T[capacity];
		int32_t L_3 = ___capacity0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 0), (uint32_t)L_3);
		__this->___Items_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Items_0), (void*)L_4);
		// Count = 0;
		__this->___Count_1 = 0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsGrowList_1_Add_m210AFA3DF2F152B6A7B848331A7396B35C6ADF3F_gshared_inline (EcsGrowList_1_tD2FE2DF3939E65F1327B5527C78A504B16DDFF3E* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// if (Items.Length == Count) {
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->___Items_0;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)__this->___Count_1;
		V_0 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		// Array.Resize (ref Items, Items.Length << 1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918**)(&__this->___Items_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->___Items_0;
		NullCheck(L_4);
		((  void (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918**, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_3, ((int32_t)(((int32_t)(((RuntimeArray*)L_4)->max_length))<<1)), il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_002d:
	{
		// Items[Count++] = item;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->___Items_0;
		int32_t L_6 = (int32_t)__this->___Count_1;
		V_1 = L_6;
		int32_t L_7 = V_1;
		__this->___Count_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		int32_t L_8 = V_1;
		RuntimeObject* L_9 = ___item0;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (RuntimeObject*)L_9);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_0 = (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsGrowList_1__ctor_m30D908245D0493D452F0EF6295F2CCEE86EE1A52_gshared_inline (EcsGrowList_1_t6BC5FF876D381A8F076800C4F4C84DC46575D129* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// public EcsGrowList (int capacity) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// if (capacity <= 0) { throw new Exception ("Capacity should be greater than zero."); }
		int32_t L_0 = ___capacity0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// if (capacity <= 0) { throw new Exception ("Capacity should be greater than zero."); }
		Exception_t* L_2 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2E422EB4772F1976D4425CDE7F443C68DE946D68)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsGrowList_1__ctor_m30D908245D0493D452F0EF6295F2CCEE86EE1A52_RuntimeMethod_var)));
	}

IL_001f:
	{
		// Items = new T[capacity];
		int32_t L_3 = ___capacity0;
		EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C* L_4 = (EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C*)(EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 0), (uint32_t)L_3);
		__this->___Items_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Items_0), (void*)L_4);
		// Count = 0;
		__this->___Count_1 = 0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsGrowList_1__ctor_mBEFEB97AD463DE7EF4A901D4E6BD7C3920676203_gshared_inline (EcsGrowList_1_t05BE086951C7D264D8941FC753076684714DAAC3* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// public EcsGrowList (int capacity) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// if (capacity <= 0) { throw new Exception ("Capacity should be greater than zero."); }
		int32_t L_0 = ___capacity0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// if (capacity <= 0) { throw new Exception ("Capacity should be greater than zero."); }
		Exception_t* L_2 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2E422EB4772F1976D4425CDE7F443C68DE946D68)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsGrowList_1__ctor_mBEFEB97AD463DE7EF4A901D4E6BD7C3920676203_RuntimeMethod_var)));
	}

IL_001f:
	{
		// Items = new T[capacity];
		int32_t L_3 = ___capacity0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 0), (uint32_t)L_3);
		__this->___Items_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Items_0), (void*)L_4);
		// Count = 0;
		__this->___Count_1 = 0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsGrowList_1_Add_mB34B99A8A330CB3FC27634B68EA9A59A1DB729AC_gshared_inline (EcsGrowList_1_t6BC5FF876D381A8F076800C4F4C84DC46575D129* __this, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E ___item0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// if (Items.Length == Count) {
		EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C* L_0 = (EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C*)__this->___Items_0;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)__this->___Count_1;
		V_0 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		// Array.Resize (ref Items, Items.Length << 1);
		EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C** L_3 = (EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C**)(&__this->___Items_0);
		EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C* L_4 = (EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C*)__this->___Items_0;
		NullCheck(L_4);
		((  void (*) (EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C**, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_3, ((int32_t)(((int32_t)(((RuntimeArray*)L_4)->max_length))<<1)), il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_002d:
	{
		// Items[Count++] = item;
		EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C* L_5 = (EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C*)__this->___Items_0;
		int32_t L_6 = (int32_t)__this->___Count_1;
		V_1 = L_6;
		int32_t L_7 = V_1;
		__this->___Count_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		int32_t L_8 = V_1;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_9 = ___item0;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E)L_9);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsGrowList_1_Add_m19887B8370A2040D1E9C14B4FA889A5A8BF8C199_gshared_inline (EcsGrowList_1_t05BE086951C7D264D8941FC753076684714DAAC3* __this, int32_t ___item0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// if (Items.Length == Count) {
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->___Items_0;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)__this->___Count_1;
		V_0 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		// Array.Resize (ref Items, Items.Length << 1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C**)(&__this->___Items_0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->___Items_0;
		NullCheck(L_4);
		((  void (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C**, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_3, ((int32_t)(((int32_t)(((RuntimeArray*)L_4)->max_length))<<1)), il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_002d:
	{
		// Items[Count++] = item;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->___Items_0;
		int32_t L_6 = (int32_t)__this->___Count_1;
		V_1 = L_6;
		int32_t L_7 = V_1;
		__this->___Count_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		int32_t L_8 = V_1;
		int32_t L_9 = ___item0;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (int32_t)L_9);
		// }
		return;
	}
}
