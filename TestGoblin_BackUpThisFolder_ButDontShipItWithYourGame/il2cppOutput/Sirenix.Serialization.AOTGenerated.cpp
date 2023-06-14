#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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

// Sirenix.Serialization.ArrayFormatter`1<Data.EnemyObject>
struct ArrayFormatter_1_tE67C8DE5F352340971A71BE18D1601BED7AAD611;
// Sirenix.Serialization.ArrayFormatter`1<Data.LevelObject>
struct ArrayFormatter_1_t6C0775D88C1137FE1F0C545C8A7E0191BAB39923;
// Sirenix.Serialization.ComplexTypeSerializer`1<Data.EnemyObject[]>
struct ComplexTypeSerializer_1_t2AA055505F5C203A4DEB8F926A8BA67A99024A23;
// Sirenix.Serialization.ComplexTypeSerializer`1<Data.LevelObject[]>
struct ComplexTypeSerializer_1_tEBD0199F535C864695F28443251D316C8CFB56D1;
// Sirenix.Serialization.ComplexTypeSerializer`1<Data.EnemyObject>
struct ComplexTypeSerializer_1_t70CE5B3C966E43CA00DA5D2EE9E28A83138A7E6F;
// Sirenix.Serialization.ComplexTypeSerializer`1<Data.LevelObject>
struct ComplexTypeSerializer_1_tA17ACDB40D998D4BEB917BB9FA96747FDF7B8278;
// Sirenix.Serialization.ComplexTypeSerializer`1<System.Object>
struct ComplexTypeSerializer_1_tCFADED5CEF4AAA38D0FB34727CB6436B605B38A8;
// Sirenix.Serialization.ComplexTypeSerializer`1<UnityEngine.Quaternion>
struct ComplexTypeSerializer_1_t3B21732159CF234599BF7904F626C0A27105C38D;
// Sirenix.Serialization.ComplexTypeSerializer`1<System.String>
struct ComplexTypeSerializer_1_t17C1BEBA4D19A69B433AE527B454984508603CD8;
// Sirenix.Serialization.ComplexTypeSerializer`1<UnityEngine.Vector3>
struct ComplexTypeSerializer_1_tFCD53A450183F1A2C4AB437643C71E7A88E45FC7;
// System.Collections.Generic.Dictionary`2<Sirenix.Serialization.ISerializationPolicy,Sirenix.Serialization.IFormatter`1<Data.EnemyObject[]>>
struct Dictionary_2_tEE702CB713AE4FBE2D39BAD696788DEAF90F47DF;
// System.Collections.Generic.Dictionary`2<Sirenix.Serialization.ISerializationPolicy,Sirenix.Serialization.IFormatter`1<Data.LevelObject[]>>
struct Dictionary_2_tAF77F47D2E2980C89DBA30DFAC22ECFFCB32AE05;
// System.Collections.Generic.Dictionary`2<Sirenix.Serialization.ISerializationPolicy,Sirenix.Serialization.IFormatter`1<Data.EnemyObject>>
struct Dictionary_2_t40F62EE7FD552B2F609208F8FD5208D57C827240;
// System.Collections.Generic.Dictionary`2<Sirenix.Serialization.ISerializationPolicy,Sirenix.Serialization.IFormatter`1<Data.LevelObject>>
struct Dictionary_2_t0B910A2EDACD634BF67A0953BB872DC566881E05;
// System.Collections.Generic.Dictionary`2<Sirenix.Serialization.ISerializationPolicy,Sirenix.Serialization.IFormatter`1<UnityEngine.Quaternion>>
struct Dictionary_2_t1C06259935E1417A6AA41BCBAD92BA281E0965F3;
// System.Collections.Generic.Dictionary`2<Sirenix.Serialization.ISerializationPolicy,Sirenix.Serialization.IFormatter`1<System.String>>
struct Dictionary_2_t94F48EFE328BC7301E1B5F2EBEF635A1A12D6695;
// System.Collections.Generic.Dictionary`2<Sirenix.Serialization.ISerializationPolicy,Sirenix.Serialization.IFormatter`1<UnityEngine.Vector3>>
struct Dictionary_2_t51BB77408C944D2593817E42CE71CB0B1B6F5156;
// System.Collections.Generic.Dictionary`2<System.Type,Sirenix.Serialization.Serializer>
struct Dictionary_2_tFC542F52AF721FEF237136A160FE0EBB15A771CA;
// System.Collections.Generic.Dictionary`2<System.Type,System.Type>
struct Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0;
// Sirenix.Serialization.IFormatter`1<Data.EnemyObject[]>
struct IFormatter_1_tC86104CB8687F7B03DEA114190C2F4ED2E3E7FEA;
// Sirenix.Serialization.IFormatter`1<Data.LevelObject[]>
struct IFormatter_1_t0C53FE3FB78B449CB779C61D38DAC06045BE14DD;
// Sirenix.Serialization.IFormatter`1<Data.EnemyObject>
struct IFormatter_1_t84AE79E0C2490739DDF118ED007A7EB186650A9A;
// Sirenix.Serialization.IFormatter`1<Data.LevelObject>
struct IFormatter_1_t30C8B43D647976442AAB1334BD2E8E4A7EF6E5CC;
// Sirenix.Serialization.IFormatter`1<UnityEngine.Quaternion>
struct IFormatter_1_t1D44600651699AE948A46BF877C74F3DCC0D020C;
// Sirenix.Serialization.IFormatter`1<System.String>
struct IFormatter_1_t0DD7B13C6F431C73CF0E1F3E5BD29A7EC96C4AB9;
// Sirenix.Serialization.IFormatter`1<UnityEngine.Vector3>
struct IFormatter_1_t3A23191C125AD960ECED423827B967072E65F8B3;
// Sirenix.Serialization.ReflectionFormatter`1<Data.EnemyObject[]>
struct ReflectionFormatter_1_t7854E40E12837C2A4781D1A2BA48B147CDF6F8AC;
// Sirenix.Serialization.ReflectionFormatter`1<Data.LevelObject[]>
struct ReflectionFormatter_1_t497D7AA31494D464D38C7E18F079095381443519;
// Sirenix.Serialization.ReflectionFormatter`1<Data.EnemyObject>
struct ReflectionFormatter_1_t9BBE023AFFE2C7F0CE8881D8ACF1AA2D755547D7;
// Sirenix.Serialization.ReflectionFormatter`1<Data.LevelObject>
struct ReflectionFormatter_1_t504EEC4ABA215B04B29A4DE6984D983D2D43DEFF;
// Sirenix.Serialization.ReflectionFormatter`1<System.Object>
struct ReflectionFormatter_1_tB6DAF53F6F410C9664F5960209ABDD85E507E2D8;
// Sirenix.Serialization.ReflectionFormatter`1<UnityEngine.Quaternion>
struct ReflectionFormatter_1_t1CBB7CC3A5E5ABA3CD026873A98161186DF50DE7;
// Sirenix.Serialization.ReflectionFormatter`1<UnityEngine.Vector3>
struct ReflectionFormatter_1_tB7B52889277A1BD4932DC8B6AFE9AECF33A6EB8D;
// Sirenix.Serialization.Serializer`1<Data.EnemyObject>
struct Serializer_1_t71AF6AB9A218228A8A216A2A3D91258547A4ABA2;
// Sirenix.Serialization.Serializer`1<Data.LevelObject>
struct Serializer_1_tE019A646CBA95E3AF32B98B2CADB7B357BDAF329;
// Sirenix.Serialization.Serializer`1<System.Single>
struct Serializer_1_t21A2F748C075C7B3B5ED1023BB5F3EDF2A2D95F5;
// Sirenix.Serialization.BaseFormatter`1/SerializationCallback<Data.EnemyObject[]>[]
struct SerializationCallbackU5BU5D_tE84C52E4E2810D8859F94D9788A9A3A3C455FE5E;
// Sirenix.Serialization.BaseFormatter`1/SerializationCallback<Data.LevelObject[]>[]
struct SerializationCallbackU5BU5D_tE9CB49FFD092DF6A47169B947270DC4A0B914BE7;
// Sirenix.Serialization.BaseFormatter`1/SerializationCallback<Data.EnemyObject>[]
struct SerializationCallbackU5BU5D_tA0833800C63AD8A50D2ADC172B98CBB01A054C33;
// Sirenix.Serialization.BaseFormatter`1/SerializationCallback<Data.LevelObject>[]
struct SerializationCallbackU5BU5D_tC9DF5FCAE17E1476E74D1341BBE73E41C269AFFA;
// Sirenix.Serialization.BaseFormatter`1/SerializationCallback<UnityEngine.Quaternion>[]
struct SerializationCallbackU5BU5D_tCD7EE944AB308E959198AEB3F1CA52C438FA01E3;
// Sirenix.Serialization.BaseFormatter`1/SerializationCallback<UnityEngine.Vector3>[]
struct SerializationCallbackU5BU5D_t0F296A2C8192B95552CA287AF7456A4AAEC3D717;
// Sirenix.Serialization.ISerializationPolicy
struct ISerializationPolicy_t0C47BF78FD9B96AE6371585EAE63593988C2FA43;
// Sirenix.Serialization.QuaternionFormatter
struct QuaternionFormatter_t5D7FC41EDE27912EFB5105E5DB614AC7603B0900;
// Sirenix.Serialization.SingleSerializer
struct SingleSerializer_t73348AC149C370F26845BA4025414C15BEF0526B;
// System.String
struct String_t;
// System.Type
struct Type_t;
// Sirenix.Serialization.Vector3Formatter
struct Vector3Formatter_tF9F8AA8AC321722C78FBA4D0148F6DB4D3DC5CC3;

IL2CPP_EXTERN_C RuntimeClass* ArrayFormatter_1_t6C0775D88C1137FE1F0C545C8A7E0191BAB39923_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayFormatter_1_tE67C8DE5F352340971A71BE18D1601BED7AAD611_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ComplexTypeSerializer_1_t17C1BEBA4D19A69B433AE527B454984508603CD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ComplexTypeSerializer_1_t2AA055505F5C203A4DEB8F926A8BA67A99024A23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ComplexTypeSerializer_1_t3B21732159CF234599BF7904F626C0A27105C38D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ComplexTypeSerializer_1_t70CE5B3C966E43CA00DA5D2EE9E28A83138A7E6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ComplexTypeSerializer_1_tA17ACDB40D998D4BEB917BB9FA96747FDF7B8278_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ComplexTypeSerializer_1_tEBD0199F535C864695F28443251D316C8CFB56D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ComplexTypeSerializer_1_tFCD53A450183F1A2C4AB437643C71E7A88E45FC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QuaternionFormatter_t5D7FC41EDE27912EFB5105E5DB614AC7603B0900_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReflectionFormatter_1_t1CBB7CC3A5E5ABA3CD026873A98161186DF50DE7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReflectionFormatter_1_t497D7AA31494D464D38C7E18F079095381443519_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReflectionFormatter_1_t504EEC4ABA215B04B29A4DE6984D983D2D43DEFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReflectionFormatter_1_t7854E40E12837C2A4781D1A2BA48B147CDF6F8AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReflectionFormatter_1_t9BBE023AFFE2C7F0CE8881D8ACF1AA2D755547D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReflectionFormatter_1_tB7B52889277A1BD4932DC8B6AFE9AECF33A6EB8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleSerializer_t73348AC149C370F26845BA4025414C15BEF0526B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3Formatter_tF9F8AA8AC321722C78FBA4D0148F6DB4D3DC5CC3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayFormatter_1__ctor_m3CD22FF3DDDA11FD9BECED8671C8731011A0C517_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayFormatter_1__ctor_mF7280B432DC2558CD34E6DC4B452473464C1FA0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComplexTypeSerializer_1__ctor_m2610A45697EEF5B6178A5B230D056A21122CF18F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComplexTypeSerializer_1__ctor_m36A7F11181D62C3A99BDC8FD80E06382462316C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComplexTypeSerializer_1__ctor_m3FCDF6D232BCB0AF18BC5C121F37CA9FA7F1F369_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComplexTypeSerializer_1__ctor_m5D31A59242385651C9F11450C1C42E7FC36F8B71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComplexTypeSerializer_1__ctor_m8CE3997E304BB0FDB068ECE94A1E9B30EC8DDBAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComplexTypeSerializer_1__ctor_mA9D3A5DCAF1D6F36EBC3E3C3BDE11F673D6E218C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComplexTypeSerializer_1__ctor_mD8AE6C2E4E317F637E31BD16103F5461BEF297BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionFormatter_1__ctor_m54724919DD1AC28D2DAFCBD1D075E12E932EC9FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionFormatter_1__ctor_m66364545675355AA3725C38E6DBFB70401E6570C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionFormatter_1__ctor_m86A6239832EA134E5D6FE8B53A63C9AB4725F55D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionFormatter_1__ctor_mAB978AE79396029B512C1F13D4178DE7921FA5B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionFormatter_1__ctor_mAFCDDFBECA1B0685BA2AB84C5AA7C72FA99E8FB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionFormatter_1__ctor_mD5AE5A4D76748B37FDB1297A25334A0ECAEDB977_RuntimeMethod_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t173B7B51E1BD4E21DB527508DCEFDA1073158A81 
{
};

// Sirenix.Serialization.BaseFormatter`1<Data.EnemyObject[]>
struct BaseFormatter_1_t5459D5C50F31A15AF9765385FDF54CCB11023103  : public RuntimeObject
{
};

struct BaseFormatter_1_t5459D5C50F31A15AF9765385FDF54CCB11023103_StaticFields
{
	// Sirenix.Serialization.BaseFormatter`1/SerializationCallback<T>[] Sirenix.Serialization.BaseFormatter`1::OnSerializingCallbacks
	SerializationCallbackU5BU5D_tE84C52E4E2810D8859F94D9788A9A3A3C455FE5E* ___OnSerializingCallbacks_0;
	// Sirenix.Serialization.BaseFormatter`1/SerializationCallback<T>[] Sirenix.Serialization.BaseFormatter`1::OnSerializedCallbacks
	SerializationCallbackU5BU5D_tE84C52E4E2810D8859F94D9788A9A3A3C455FE5E* ___OnSerializedCallbacks_1;
	// Sirenix.Serialization.BaseFormatter`1/SerializationCallback<T>[] Sirenix.Serialization.BaseFormatter`1::OnDeserializingCallbacks
	SerializationCallbackU5BU5D_tE84C52E4E2810D8859F94D9788A9A3A3C455FE5E* ___OnDeserializingCallbacks_2;
	// Sirenix.Serialization.BaseFormatter`1/SerializationCallback<T>[] Sirenix.Serialization.BaseFormatter`1::OnDeserializedCallbacks
	SerializationCallbackU5BU5D_tE84C52E4E2810D8859F94D9788A9A3A3C455FE5E* ___OnDeserializedCallbacks_3;
	// System.Boolean Sirenix.Serialization.BaseFormatter`1::IsValueType
	bool ___IsValueType_4;
	// System.Boolean Sirenix.Serialization.BaseFormatter`1::ImplementsISerializationCallbackReceiver
	bool ___ImplementsISerializationCallbackReceiver_5;
	// System.Boolean Sirenix.Serialization.BaseFormatter`1::ImplementsIDeserializationCallback
	bool ___ImplementsIDeserializationCallback_6;
	// System.Boolean Sirenix.Serialization.BaseFormatter`1::ImplementsIObjectReference
	bool ___ImplementsIObjectReference_7;
};

// Sirenix.Serialization.BaseFormatter`1<Data.LevelObject[]>
struct BaseFormatter_1_t31F7785A5F3F2C5B17106944AEC748BC3F59C68C  : public RuntimeObject
{
};

struct BaseFormatter_1_t31F7785A5F3F2C5B17106944AEC748BC3F59C68C_StaticFields
{
	// Sirenix.Serialization.BaseFormatter`1/SerializationCallback<T>[] Sirenix.Serialization.BaseFormatter`1::OnSerializingCallbacks
	SerializationCallbackU5BU5D_tE9CB49FFD092DF6A47169B947270DC4A0B914BE7* ___OnSerializingCallbacks_0;
	// Sirenix.Serialization.BaseFormatter`1/SerializationCallback<T>[] Sirenix.Serialization.BaseFormatter`1::OnSerializedCallbacks
	SerializationCallbackU5BU5D_tE9CB49FFD092DF6A47169B947270DC4A0B914BE7* ___OnSerializedCallbacks_1;
	// Sirenix.Serialization.BaseFormatter`1/SerializationCallback<T>[] Sirenix.Serialization.BaseFormatter`1::OnDeserializingCallbacks
	SerializationCallbackU5BU5D_tE9CB49FFD092DF6A47169B947270DC4A0B914BE7* ___OnDeserializingCallbacks_2;
	// Sirenix.Serialization.BaseFormatter`1/SerializationCallback<T>[] Sirenix.Serialization.BaseFormatter`1::OnDeserializedCallbacks
	SerializationCallbackU5BU5D_tE9CB49FFD092DF6A47169B947270DC4A0B914BE7* ___OnDeserializedCallbacks_3;
	// System.Boolean Sirenix.Serialization.BaseFormatter`1::IsValueType
	bool ___IsValueType_4;
	// System.Boolean Sirenix.Serialization.BaseFormatter`1::ImplementsISerializationCallbackReceiver
	bool ___ImplementsISerializationCallbackReceiver_5;
	// System.Boolean Sirenix.Serialization.BaseFormatter`1::ImplementsIDeserializationCallback
	bool ___ImplementsIDeserializationCallback_6;
	// System.Boolean Sirenix.Serialization.BaseFormatter`1::ImplementsIObjectReference
	bool ___ImplementsIObjectReference_7;
};

// Sirenix.Serialization.BaseFormatter`1<Data.EnemyObject>
struct BaseFormatter_1_tBD2A3109F1A6469D3BF2A1C72BD308D60ADF825B  : public RuntimeObject
{
};

struct BaseFormatter_1_tBD2A3109F1A6469D3BF2A1C72BD308D60ADF825B_StaticFields
{
	// Sirenix.Serialization.BaseFormatter`1/SerializationCallback<T>[] Sirenix.Serialization.BaseFormatter`1::OnSerializingCallbacks
	SerializationCallbackU5BU5D_tA0833800C63AD8A50D2ADC172B98CBB01A054C33* ___OnSerializingCallbacks_0;
	// Sirenix.Serialization.BaseFormatter`1/SerializationCallback<T>[] Sirenix.Serialization.BaseFormatter`1::OnSerializedCallbacks
	SerializationCallbackU5BU5D_tA0833800C63AD8A50D2ADC172B98CBB01A054C33* ___OnSerializedCallbacks_1;
	// Sirenix.Serialization.BaseFormatter`1/SerializationCallback<T>[] Sirenix.Serialization.BaseFormatter`1::OnDeserializingCallbacks
	SerializationCallbackU5BU5D_tA0833800C63AD8A50D2ADC172B98CBB01A054C33* ___OnDeserializingCallbacks_2;
	// Sirenix.Serialization.BaseFormatter`1/SerializationCallback<T>[] Sirenix.Serialization.BaseFormatter`1::OnDeserializedCallbacks
	SerializationCallbackU5BU5D_tA0833800C63AD8A50D2ADC172B98CBB01A054C33* ___OnDeserializedCallbacks_3;
	// System.Boolean Sirenix.Serialization.BaseFormatter`1::IsValueType
	bool ___IsValueType_4;
	// System.Boolean Sirenix.Serialization.BaseFormatter`1::ImplementsISerializationCallbackReceiver
	bool ___ImplementsISerializationCallbackReceiver_5;
	// System.Boolean Sirenix.Serialization.BaseFormatter`1::ImplementsIDeserializationCallback
	bool ___ImplementsIDeserializationCallback_6;
	// System.Boolean Sirenix.Serialization.BaseFormatter`1::ImplementsIObjectReference
	bool ___ImplementsIObjectReference_7;
};

// Sirenix.Serialization.BaseFormatter`1<Data.LevelObject>
struct BaseFormatter_1_t30CEBD48900942E10886CB82231254E6C6596902  : public RuntimeObject
{
};

struct BaseFormatter_1_t30CEBD48900942E10886CB82231254E6C6596902_StaticFields
{
	// Sirenix.Serialization.BaseFormatter`1/SerializationCallback<T>[] Sirenix.Serialization.BaseFormatter`1::OnSerializingCallbacks
	SerializationCallbackU5BU5D_tC9DF5FCAE17E1476E74D1341BBE73E41C269AFFA* ___OnSerializingCallbacks_0;
	// Sirenix.Serialization.BaseFormatter`1/SerializationCallback<T>[] Sirenix.Serialization.BaseFormatter`1::OnSerializedCallbacks
	SerializationCallbackU5BU5D_tC9DF5FCAE17E1476E74D1341BBE73E41C269AFFA* ___OnSerializedCallbacks_1;
	// Sirenix.Serialization.BaseFormatter`1/SerializationCallback<T>[] Sirenix.Serialization.BaseFormatter`1::OnDeserializingCallbacks
	SerializationCallbackU5BU5D_tC9DF5FCAE17E1476E74D1341BBE73E41C269AFFA* ___OnDeserializingCallbacks_2;
	// Sirenix.Serialization.BaseFormatter`1/SerializationCallback<T>[] Sirenix.Serialization.BaseFormatter`1::OnDeserializedCallbacks
	SerializationCallbackU5BU5D_tC9DF5FCAE17E1476E74D1341BBE73E41C269AFFA* ___OnDeserializedCallbacks_3;
	// System.Boolean Sirenix.Serialization.BaseFormatter`1::IsValueType
	bool ___IsValueType_4;
	// System.Boolean Sirenix.Serialization.BaseFormatter`1::ImplementsISerializationCallbackReceiver
	bool ___ImplementsISerializationCallbackReceiver_5;
	// System.Boolean Sirenix.Serialization.BaseFormatter`1::ImplementsIDeserializationCallback
	bool ___ImplementsIDeserializationCallback_6;
	// System.Boolean Sirenix.Serialization.BaseFormatter`1::ImplementsIObjectReference
	bool ___ImplementsIObjectReference_7;
};

// Sirenix.Serialization.BaseFormatter`1<UnityEngine.Quaternion>
struct BaseFormatter_1_t7B808D17BF17BFC2B8CA476D706F972222C79425  : public RuntimeObject
{
};

struct BaseFormatter_1_t7B808D17BF17BFC2B8CA476D706F972222C79425_StaticFields
{
	// Sirenix.Serialization.BaseFormatter`1/SerializationCallback<T>[] Sirenix.Serialization.BaseFormatter`1::OnSerializingCallbacks
	SerializationCallbackU5BU5D_tCD7EE944AB308E959198AEB3F1CA52C438FA01E3* ___OnSerializingCallbacks_0;
	// Sirenix.Serialization.BaseFormatter`1/SerializationCallback<T>[] Sirenix.Serialization.BaseFormatter`1::OnSerializedCallbacks
	SerializationCallbackU5BU5D_tCD7EE944AB308E959198AEB3F1CA52C438FA01E3* ___OnSerializedCallbacks_1;
	// Sirenix.Serialization.BaseFormatter`1/SerializationCallback<T>[] Sirenix.Serialization.BaseFormatter`1::OnDeserializingCallbacks
	SerializationCallbackU5BU5D_tCD7EE944AB308E959198AEB3F1CA52C438FA01E3* ___OnDeserializingCallbacks_2;
	// Sirenix.Serialization.BaseFormatter`1/SerializationCallback<T>[] Sirenix.Serialization.BaseFormatter`1::OnDeserializedCallbacks
	SerializationCallbackU5BU5D_tCD7EE944AB308E959198AEB3F1CA52C438FA01E3* ___OnDeserializedCallbacks_3;
	// System.Boolean Sirenix.Serialization.BaseFormatter`1::IsValueType
	bool ___IsValueType_4;
	// System.Boolean Sirenix.Serialization.BaseFormatter`1::ImplementsISerializationCallbackReceiver
	bool ___ImplementsISerializationCallbackReceiver_5;
	// System.Boolean Sirenix.Serialization.BaseFormatter`1::ImplementsIDeserializationCallback
	bool ___ImplementsIDeserializationCallback_6;
	// System.Boolean Sirenix.Serialization.BaseFormatter`1::ImplementsIObjectReference
	bool ___ImplementsIObjectReference_7;
};

// Sirenix.Serialization.BaseFormatter`1<UnityEngine.Vector3>
struct BaseFormatter_1_t86B3F191F45B1CCCCC9322B32293BDB05AE110E1  : public RuntimeObject
{
};

struct BaseFormatter_1_t86B3F191F45B1CCCCC9322B32293BDB05AE110E1_StaticFields
{
	// Sirenix.Serialization.BaseFormatter`1/SerializationCallback<T>[] Sirenix.Serialization.BaseFormatter`1::OnSerializingCallbacks
	SerializationCallbackU5BU5D_t0F296A2C8192B95552CA287AF7456A4AAEC3D717* ___OnSerializingCallbacks_0;
	// Sirenix.Serialization.BaseFormatter`1/SerializationCallback<T>[] Sirenix.Serialization.BaseFormatter`1::OnSerializedCallbacks
	SerializationCallbackU5BU5D_t0F296A2C8192B95552CA287AF7456A4AAEC3D717* ___OnSerializedCallbacks_1;
	// Sirenix.Serialization.BaseFormatter`1/SerializationCallback<T>[] Sirenix.Serialization.BaseFormatter`1::OnDeserializingCallbacks
	SerializationCallbackU5BU5D_t0F296A2C8192B95552CA287AF7456A4AAEC3D717* ___OnDeserializingCallbacks_2;
	// Sirenix.Serialization.BaseFormatter`1/SerializationCallback<T>[] Sirenix.Serialization.BaseFormatter`1::OnDeserializedCallbacks
	SerializationCallbackU5BU5D_t0F296A2C8192B95552CA287AF7456A4AAEC3D717* ___OnDeserializedCallbacks_3;
	// System.Boolean Sirenix.Serialization.BaseFormatter`1::IsValueType
	bool ___IsValueType_4;
	// System.Boolean Sirenix.Serialization.BaseFormatter`1::ImplementsISerializationCallbackReceiver
	bool ___ImplementsISerializationCallbackReceiver_5;
	// System.Boolean Sirenix.Serialization.BaseFormatter`1::ImplementsIDeserializationCallback
	bool ___ImplementsIDeserializationCallback_6;
	// System.Boolean Sirenix.Serialization.BaseFormatter`1::ImplementsIObjectReference
	bool ___ImplementsIObjectReference_7;
};

// Sirenix.Serialization.MinimalBaseFormatter`1<UnityEngine.Quaternion>
struct MinimalBaseFormatter_1_tFAE853E154F8303C658BCFAE97B48297699F494F  : public RuntimeObject
{
};

struct MinimalBaseFormatter_1_tFAE853E154F8303C658BCFAE97B48297699F494F_StaticFields
{
	// System.Boolean Sirenix.Serialization.MinimalBaseFormatter`1::IsValueType
	bool ___IsValueType_0;
};

// Sirenix.Serialization.MinimalBaseFormatter`1<UnityEngine.Vector3>
struct MinimalBaseFormatter_1_t9CF3FDCEC0FD5BA57299D577573C3409ABD50C45  : public RuntimeObject
{
};

struct MinimalBaseFormatter_1_t9CF3FDCEC0FD5BA57299D577573C3409ABD50C45_StaticFields
{
	// System.Boolean Sirenix.Serialization.MinimalBaseFormatter`1::IsValueType
	bool ___IsValueType_0;
};
struct Il2CppArrayBounds;

// Sirenix.Serialization.AOTGenerated.PreventCodeStrippingViaReferences
struct PreventCodeStrippingViaReferences_t73A6D17CC562E67E2D540453D45099F37AB84BCD  : public RuntimeObject
{
};

// Sirenix.Serialization.Serializer
struct Serializer_t6C6FF0C071058921A25F0197AEBE808891C78EDA  : public RuntimeObject
{
};

struct Serializer_t6C6FF0C071058921A25F0197AEBE808891C78EDA_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Type,System.Type> Sirenix.Serialization.Serializer::PrimitiveReaderWriterTypes
	Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0* ___PrimitiveReaderWriterTypes_0;
	// System.Object Sirenix.Serialization.Serializer::LOCK
	RuntimeObject* ___LOCK_1;
	// System.Collections.Generic.Dictionary`2<System.Type,Sirenix.Serialization.Serializer> Sirenix.Serialization.Serializer::ReaderWriterCache
	Dictionary_2_tFC542F52AF721FEF237136A160FE0EBB15A771CA* ___ReaderWriterCache_2;
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

// Sirenix.Serialization.ArrayFormatter`1<Data.EnemyObject>
struct ArrayFormatter_1_tE67C8DE5F352340971A71BE18D1601BED7AAD611  : public BaseFormatter_1_t5459D5C50F31A15AF9765385FDF54CCB11023103
{
};

struct ArrayFormatter_1_tE67C8DE5F352340971A71BE18D1601BED7AAD611_StaticFields
{
	// Sirenix.Serialization.Serializer`1<T> Sirenix.Serialization.ArrayFormatter`1::valueReaderWriter
	Serializer_1_t71AF6AB9A218228A8A216A2A3D91258547A4ABA2* ___valueReaderWriter_8;
};

// Sirenix.Serialization.ArrayFormatter`1<Data.LevelObject>
struct ArrayFormatter_1_t6C0775D88C1137FE1F0C545C8A7E0191BAB39923  : public BaseFormatter_1_t31F7785A5F3F2C5B17106944AEC748BC3F59C68C
{
};

struct ArrayFormatter_1_t6C0775D88C1137FE1F0C545C8A7E0191BAB39923_StaticFields
{
	// Sirenix.Serialization.Serializer`1<T> Sirenix.Serialization.ArrayFormatter`1::valueReaderWriter
	Serializer_1_tE019A646CBA95E3AF32B98B2CADB7B357BDAF329* ___valueReaderWriter_8;
};

// Sirenix.Serialization.ReflectionFormatter`1<Data.EnemyObject[]>
struct ReflectionFormatter_1_t7854E40E12837C2A4781D1A2BA48B147CDF6F8AC  : public BaseFormatter_1_t5459D5C50F31A15AF9765385FDF54CCB11023103
{
	// Sirenix.Serialization.ISerializationPolicy Sirenix.Serialization.ReflectionFormatter`1::<OverridePolicy>k__BackingField
	RuntimeObject* ___U3COverridePolicyU3Ek__BackingField_8;
};

// Sirenix.Serialization.ReflectionFormatter`1<Data.LevelObject[]>
struct ReflectionFormatter_1_t497D7AA31494D464D38C7E18F079095381443519  : public BaseFormatter_1_t31F7785A5F3F2C5B17106944AEC748BC3F59C68C
{
	// Sirenix.Serialization.ISerializationPolicy Sirenix.Serialization.ReflectionFormatter`1::<OverridePolicy>k__BackingField
	RuntimeObject* ___U3COverridePolicyU3Ek__BackingField_8;
};

// Sirenix.Serialization.ReflectionFormatter`1<Data.EnemyObject>
struct ReflectionFormatter_1_t9BBE023AFFE2C7F0CE8881D8ACF1AA2D755547D7  : public BaseFormatter_1_tBD2A3109F1A6469D3BF2A1C72BD308D60ADF825B
{
	// Sirenix.Serialization.ISerializationPolicy Sirenix.Serialization.ReflectionFormatter`1::<OverridePolicy>k__BackingField
	RuntimeObject* ___U3COverridePolicyU3Ek__BackingField_8;
};

// Sirenix.Serialization.ReflectionFormatter`1<Data.LevelObject>
struct ReflectionFormatter_1_t504EEC4ABA215B04B29A4DE6984D983D2D43DEFF  : public BaseFormatter_1_t30CEBD48900942E10886CB82231254E6C6596902
{
	// Sirenix.Serialization.ISerializationPolicy Sirenix.Serialization.ReflectionFormatter`1::<OverridePolicy>k__BackingField
	RuntimeObject* ___U3COverridePolicyU3Ek__BackingField_8;
};

// Sirenix.Serialization.ReflectionFormatter`1<UnityEngine.Quaternion>
struct ReflectionFormatter_1_t1CBB7CC3A5E5ABA3CD026873A98161186DF50DE7  : public BaseFormatter_1_t7B808D17BF17BFC2B8CA476D706F972222C79425
{
	// Sirenix.Serialization.ISerializationPolicy Sirenix.Serialization.ReflectionFormatter`1::<OverridePolicy>k__BackingField
	RuntimeObject* ___U3COverridePolicyU3Ek__BackingField_8;
};

// Sirenix.Serialization.ReflectionFormatter`1<UnityEngine.Vector3>
struct ReflectionFormatter_1_tB7B52889277A1BD4932DC8B6AFE9AECF33A6EB8D  : public BaseFormatter_1_t86B3F191F45B1CCCCC9322B32293BDB05AE110E1
{
	// Sirenix.Serialization.ISerializationPolicy Sirenix.Serialization.ReflectionFormatter`1::<OverridePolicy>k__BackingField
	RuntimeObject* ___U3COverridePolicyU3Ek__BackingField_8;
};

// Sirenix.Serialization.Serializer`1<Data.EnemyObject[]>
struct Serializer_1_tE1AFFF4B7CB4C8CDA345D66F88F9FBF0FE5CBF98  : public Serializer_t6C6FF0C071058921A25F0197AEBE808891C78EDA
{
};

// Sirenix.Serialization.Serializer`1<Data.LevelObject[]>
struct Serializer_1_t0E9D32F342334162927B434CC83ED2431698A39A  : public Serializer_t6C6FF0C071058921A25F0197AEBE808891C78EDA
{
};

// Sirenix.Serialization.Serializer`1<Data.EnemyObject>
struct Serializer_1_t71AF6AB9A218228A8A216A2A3D91258547A4ABA2  : public Serializer_t6C6FF0C071058921A25F0197AEBE808891C78EDA
{
};

// Sirenix.Serialization.Serializer`1<Data.LevelObject>
struct Serializer_1_tE019A646CBA95E3AF32B98B2CADB7B357BDAF329  : public Serializer_t6C6FF0C071058921A25F0197AEBE808891C78EDA
{
};

// Sirenix.Serialization.Serializer`1<UnityEngine.Quaternion>
struct Serializer_1_t81AAA879493118C0DB5D3096F180A692B4952965  : public Serializer_t6C6FF0C071058921A25F0197AEBE808891C78EDA
{
};

// Sirenix.Serialization.Serializer`1<System.Single>
struct Serializer_1_t21A2F748C075C7B3B5ED1023BB5F3EDF2A2D95F5  : public Serializer_t6C6FF0C071058921A25F0197AEBE808891C78EDA
{
};

// Sirenix.Serialization.Serializer`1<System.String>
struct Serializer_1_t9854C0179F50900A646768F185F6E029A9121EE0  : public Serializer_t6C6FF0C071058921A25F0197AEBE808891C78EDA
{
};

// Sirenix.Serialization.Serializer`1<UnityEngine.Vector3>
struct Serializer_1_tDDFF38C009A627D53DAB1EE7BB473700C2C7FF45  : public Serializer_t6C6FF0C071058921A25F0197AEBE808891C78EDA
{
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

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// Sirenix.Serialization.QuaternionFormatter
struct QuaternionFormatter_t5D7FC41EDE27912EFB5105E5DB614AC7603B0900  : public MinimalBaseFormatter_1_tFAE853E154F8303C658BCFAE97B48297699F494F
{
};

struct QuaternionFormatter_t5D7FC41EDE27912EFB5105E5DB614AC7603B0900_StaticFields
{
	// Sirenix.Serialization.Serializer`1<System.Single> Sirenix.Serialization.QuaternionFormatter::FloatSerializer
	Serializer_1_t21A2F748C075C7B3B5ED1023BB5F3EDF2A2D95F5* ___FloatSerializer_1;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// Sirenix.Serialization.Vector3Formatter
struct Vector3Formatter_tF9F8AA8AC321722C78FBA4D0148F6DB4D3DC5CC3  : public MinimalBaseFormatter_1_t9CF3FDCEC0FD5BA57299D577573C3409ABD50C45
{
};

struct Vector3Formatter_tF9F8AA8AC321722C78FBA4D0148F6DB4D3DC5CC3_StaticFields
{
	// Sirenix.Serialization.Serializer`1<System.Single> Sirenix.Serialization.Vector3Formatter::FloatSerializer
	Serializer_1_t21A2F748C075C7B3B5ED1023BB5F3EDF2A2D95F5* ___FloatSerializer_1;
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

// Sirenix.Serialization.ComplexTypeSerializer`1<Data.EnemyObject[]>
struct ComplexTypeSerializer_1_t2AA055505F5C203A4DEB8F926A8BA67A99024A23  : public Serializer_1_tE1AFFF4B7CB4C8CDA345D66F88F9FBF0FE5CBF98
{
};

struct ComplexTypeSerializer_1_t2AA055505F5C203A4DEB8F926A8BA67A99024A23_StaticFields
{
	// System.Boolean Sirenix.Serialization.ComplexTypeSerializer`1::ComplexTypeMayBeBoxedValueType
	bool ___ComplexTypeMayBeBoxedValueType_3;
	// System.Boolean Sirenix.Serialization.ComplexTypeSerializer`1::ComplexTypeIsAbstract
	bool ___ComplexTypeIsAbstract_4;
	// System.Boolean Sirenix.Serialization.ComplexTypeSerializer`1::ComplexTypeIsNullable
	bool ___ComplexTypeIsNullable_5;
	// System.Boolean Sirenix.Serialization.ComplexTypeSerializer`1::ComplexTypeIsValueType
	bool ___ComplexTypeIsValueType_6;
	// System.Type Sirenix.Serialization.ComplexTypeSerializer`1::TypeOf_T
	Type_t* ___TypeOf_T_7;
	// System.Boolean Sirenix.Serialization.ComplexTypeSerializer`1::AllowDeserializeInvalidDataForT
	bool ___AllowDeserializeInvalidDataForT_8;
	// System.Collections.Generic.Dictionary`2<Sirenix.Serialization.ISerializationPolicy,Sirenix.Serialization.IFormatter`1<T>> Sirenix.Serialization.ComplexTypeSerializer`1::FormattersByPolicy
	Dictionary_2_tEE702CB713AE4FBE2D39BAD696788DEAF90F47DF* ___FormattersByPolicy_9;
	// System.Object Sirenix.Serialization.ComplexTypeSerializer`1::FormattersByPolicy_LOCK
	RuntimeObject* ___FormattersByPolicy_LOCK_10;
	// Sirenix.Serialization.ISerializationPolicy Sirenix.Serialization.ComplexTypeSerializer`1::UnityPolicy
	RuntimeObject* ___UnityPolicy_11;
	// Sirenix.Serialization.ISerializationPolicy Sirenix.Serialization.ComplexTypeSerializer`1::StrictPolicy
	RuntimeObject* ___StrictPolicy_12;
	// Sirenix.Serialization.ISerializationPolicy Sirenix.Serialization.ComplexTypeSerializer`1::EverythingPolicy
	RuntimeObject* ___EverythingPolicy_13;
	// Sirenix.Serialization.IFormatter`1<T> Sirenix.Serialization.ComplexTypeSerializer`1::UnityPolicyFormatter
	RuntimeObject* ___UnityPolicyFormatter_14;
	// Sirenix.Serialization.IFormatter`1<T> Sirenix.Serialization.ComplexTypeSerializer`1::StrictPolicyFormatter
	RuntimeObject* ___StrictPolicyFormatter_15;
	// Sirenix.Serialization.IFormatter`1<T> Sirenix.Serialization.ComplexTypeSerializer`1::EverythingPolicyFormatter
	RuntimeObject* ___EverythingPolicyFormatter_16;
};

// Sirenix.Serialization.ComplexTypeSerializer`1<Data.LevelObject[]>
struct ComplexTypeSerializer_1_tEBD0199F535C864695F28443251D316C8CFB56D1  : public Serializer_1_t0E9D32F342334162927B434CC83ED2431698A39A
{
};

struct ComplexTypeSerializer_1_tEBD0199F535C864695F28443251D316C8CFB56D1_StaticFields
{
	// System.Boolean Sirenix.Serialization.ComplexTypeSerializer`1::ComplexTypeMayBeBoxedValueType
	bool ___ComplexTypeMayBeBoxedValueType_3;
	// System.Boolean Sirenix.Serialization.ComplexTypeSerializer`1::ComplexTypeIsAbstract
	bool ___ComplexTypeIsAbstract_4;
	// System.Boolean Sirenix.Serialization.ComplexTypeSerializer`1::ComplexTypeIsNullable
	bool ___ComplexTypeIsNullable_5;
	// System.Boolean Sirenix.Serialization.ComplexTypeSerializer`1::ComplexTypeIsValueType
	bool ___ComplexTypeIsValueType_6;
	// System.Type Sirenix.Serialization.ComplexTypeSerializer`1::TypeOf_T
	Type_t* ___TypeOf_T_7;
	// System.Boolean Sirenix.Serialization.ComplexTypeSerializer`1::AllowDeserializeInvalidDataForT
	bool ___AllowDeserializeInvalidDataForT_8;
	// System.Collections.Generic.Dictionary`2<Sirenix.Serialization.ISerializationPolicy,Sirenix.Serialization.IFormatter`1<T>> Sirenix.Serialization.ComplexTypeSerializer`1::FormattersByPolicy
	Dictionary_2_tAF77F47D2E2980C89DBA30DFAC22ECFFCB32AE05* ___FormattersByPolicy_9;
	// System.Object Sirenix.Serialization.ComplexTypeSerializer`1::FormattersByPolicy_LOCK
	RuntimeObject* ___FormattersByPolicy_LOCK_10;
	// Sirenix.Serialization.ISerializationPolicy Sirenix.Serialization.ComplexTypeSerializer`1::UnityPolicy
	RuntimeObject* ___UnityPolicy_11;
	// Sirenix.Serialization.ISerializationPolicy Sirenix.Serialization.ComplexTypeSerializer`1::StrictPolicy
	RuntimeObject* ___StrictPolicy_12;
	// Sirenix.Serialization.ISerializationPolicy Sirenix.Serialization.ComplexTypeSerializer`1::EverythingPolicy
	RuntimeObject* ___EverythingPolicy_13;
	// Sirenix.Serialization.IFormatter`1<T> Sirenix.Serialization.ComplexTypeSerializer`1::UnityPolicyFormatter
	RuntimeObject* ___UnityPolicyFormatter_14;
	// Sirenix.Serialization.IFormatter`1<T> Sirenix.Serialization.ComplexTypeSerializer`1::StrictPolicyFormatter
	RuntimeObject* ___StrictPolicyFormatter_15;
	// Sirenix.Serialization.IFormatter`1<T> Sirenix.Serialization.ComplexTypeSerializer`1::EverythingPolicyFormatter
	RuntimeObject* ___EverythingPolicyFormatter_16;
};

// Sirenix.Serialization.ComplexTypeSerializer`1<Data.EnemyObject>
struct ComplexTypeSerializer_1_t70CE5B3C966E43CA00DA5D2EE9E28A83138A7E6F  : public Serializer_1_t71AF6AB9A218228A8A216A2A3D91258547A4ABA2
{
};

struct ComplexTypeSerializer_1_t70CE5B3C966E43CA00DA5D2EE9E28A83138A7E6F_StaticFields
{
	// System.Boolean Sirenix.Serialization.ComplexTypeSerializer`1::ComplexTypeMayBeBoxedValueType
	bool ___ComplexTypeMayBeBoxedValueType_3;
	// System.Boolean Sirenix.Serialization.ComplexTypeSerializer`1::ComplexTypeIsAbstract
	bool ___ComplexTypeIsAbstract_4;
	// System.Boolean Sirenix.Serialization.ComplexTypeSerializer`1::ComplexTypeIsNullable
	bool ___ComplexTypeIsNullable_5;
	// System.Boolean Sirenix.Serialization.ComplexTypeSerializer`1::ComplexTypeIsValueType
	bool ___ComplexTypeIsValueType_6;
	// System.Type Sirenix.Serialization.ComplexTypeSerializer`1::TypeOf_T
	Type_t* ___TypeOf_T_7;
	// System.Boolean Sirenix.Serialization.ComplexTypeSerializer`1::AllowDeserializeInvalidDataForT
	bool ___AllowDeserializeInvalidDataForT_8;
	// System.Collections.Generic.Dictionary`2<Sirenix.Serialization.ISerializationPolicy,Sirenix.Serialization.IFormatter`1<T>> Sirenix.Serialization.ComplexTypeSerializer`1::FormattersByPolicy
	Dictionary_2_t40F62EE7FD552B2F609208F8FD5208D57C827240* ___FormattersByPolicy_9;
	// System.Object Sirenix.Serialization.ComplexTypeSerializer`1::FormattersByPolicy_LOCK
	RuntimeObject* ___FormattersByPolicy_LOCK_10;
	// Sirenix.Serialization.ISerializationPolicy Sirenix.Serialization.ComplexTypeSerializer`1::UnityPolicy
	RuntimeObject* ___UnityPolicy_11;
	// Sirenix.Serialization.ISerializationPolicy Sirenix.Serialization.ComplexTypeSerializer`1::StrictPolicy
	RuntimeObject* ___StrictPolicy_12;
	// Sirenix.Serialization.ISerializationPolicy Sirenix.Serialization.ComplexTypeSerializer`1::EverythingPolicy
	RuntimeObject* ___EverythingPolicy_13;
	// Sirenix.Serialization.IFormatter`1<T> Sirenix.Serialization.ComplexTypeSerializer`1::UnityPolicyFormatter
	RuntimeObject* ___UnityPolicyFormatter_14;
	// Sirenix.Serialization.IFormatter`1<T> Sirenix.Serialization.ComplexTypeSerializer`1::StrictPolicyFormatter
	RuntimeObject* ___StrictPolicyFormatter_15;
	// Sirenix.Serialization.IFormatter`1<T> Sirenix.Serialization.ComplexTypeSerializer`1::EverythingPolicyFormatter
	RuntimeObject* ___EverythingPolicyFormatter_16;
};

// Sirenix.Serialization.ComplexTypeSerializer`1<Data.LevelObject>
struct ComplexTypeSerializer_1_tA17ACDB40D998D4BEB917BB9FA96747FDF7B8278  : public Serializer_1_tE019A646CBA95E3AF32B98B2CADB7B357BDAF329
{
};

struct ComplexTypeSerializer_1_tA17ACDB40D998D4BEB917BB9FA96747FDF7B8278_StaticFields
{
	// System.Boolean Sirenix.Serialization.ComplexTypeSerializer`1::ComplexTypeMayBeBoxedValueType
	bool ___ComplexTypeMayBeBoxedValueType_3;
	// System.Boolean Sirenix.Serialization.ComplexTypeSerializer`1::ComplexTypeIsAbstract
	bool ___ComplexTypeIsAbstract_4;
	// System.Boolean Sirenix.Serialization.ComplexTypeSerializer`1::ComplexTypeIsNullable
	bool ___ComplexTypeIsNullable_5;
	// System.Boolean Sirenix.Serialization.ComplexTypeSerializer`1::ComplexTypeIsValueType
	bool ___ComplexTypeIsValueType_6;
	// System.Type Sirenix.Serialization.ComplexTypeSerializer`1::TypeOf_T
	Type_t* ___TypeOf_T_7;
	// System.Boolean Sirenix.Serialization.ComplexTypeSerializer`1::AllowDeserializeInvalidDataForT
	bool ___AllowDeserializeInvalidDataForT_8;
	// System.Collections.Generic.Dictionary`2<Sirenix.Serialization.ISerializationPolicy,Sirenix.Serialization.IFormatter`1<T>> Sirenix.Serialization.ComplexTypeSerializer`1::FormattersByPolicy
	Dictionary_2_t0B910A2EDACD634BF67A0953BB872DC566881E05* ___FormattersByPolicy_9;
	// System.Object Sirenix.Serialization.ComplexTypeSerializer`1::FormattersByPolicy_LOCK
	RuntimeObject* ___FormattersByPolicy_LOCK_10;
	// Sirenix.Serialization.ISerializationPolicy Sirenix.Serialization.ComplexTypeSerializer`1::UnityPolicy
	RuntimeObject* ___UnityPolicy_11;
	// Sirenix.Serialization.ISerializationPolicy Sirenix.Serialization.ComplexTypeSerializer`1::StrictPolicy
	RuntimeObject* ___StrictPolicy_12;
	// Sirenix.Serialization.ISerializationPolicy Sirenix.Serialization.ComplexTypeSerializer`1::EverythingPolicy
	RuntimeObject* ___EverythingPolicy_13;
	// Sirenix.Serialization.IFormatter`1<T> Sirenix.Serialization.ComplexTypeSerializer`1::UnityPolicyFormatter
	RuntimeObject* ___UnityPolicyFormatter_14;
	// Sirenix.Serialization.IFormatter`1<T> Sirenix.Serialization.ComplexTypeSerializer`1::StrictPolicyFormatter
	RuntimeObject* ___StrictPolicyFormatter_15;
	// Sirenix.Serialization.IFormatter`1<T> Sirenix.Serialization.ComplexTypeSerializer`1::EverythingPolicyFormatter
	RuntimeObject* ___EverythingPolicyFormatter_16;
};

// Sirenix.Serialization.ComplexTypeSerializer`1<UnityEngine.Quaternion>
struct ComplexTypeSerializer_1_t3B21732159CF234599BF7904F626C0A27105C38D  : public Serializer_1_t81AAA879493118C0DB5D3096F180A692B4952965
{
};

struct ComplexTypeSerializer_1_t3B21732159CF234599BF7904F626C0A27105C38D_StaticFields
{
	// System.Boolean Sirenix.Serialization.ComplexTypeSerializer`1::ComplexTypeMayBeBoxedValueType
	bool ___ComplexTypeMayBeBoxedValueType_3;
	// System.Boolean Sirenix.Serialization.ComplexTypeSerializer`1::ComplexTypeIsAbstract
	bool ___ComplexTypeIsAbstract_4;
	// System.Boolean Sirenix.Serialization.ComplexTypeSerializer`1::ComplexTypeIsNullable
	bool ___ComplexTypeIsNullable_5;
	// System.Boolean Sirenix.Serialization.ComplexTypeSerializer`1::ComplexTypeIsValueType
	bool ___ComplexTypeIsValueType_6;
	// System.Type Sirenix.Serialization.ComplexTypeSerializer`1::TypeOf_T
	Type_t* ___TypeOf_T_7;
	// System.Boolean Sirenix.Serialization.ComplexTypeSerializer`1::AllowDeserializeInvalidDataForT
	bool ___AllowDeserializeInvalidDataForT_8;
	// System.Collections.Generic.Dictionary`2<Sirenix.Serialization.ISerializationPolicy,Sirenix.Serialization.IFormatter`1<T>> Sirenix.Serialization.ComplexTypeSerializer`1::FormattersByPolicy
	Dictionary_2_t1C06259935E1417A6AA41BCBAD92BA281E0965F3* ___FormattersByPolicy_9;
	// System.Object Sirenix.Serialization.ComplexTypeSerializer`1::FormattersByPolicy_LOCK
	RuntimeObject* ___FormattersByPolicy_LOCK_10;
	// Sirenix.Serialization.ISerializationPolicy Sirenix.Serialization.ComplexTypeSerializer`1::UnityPolicy
	RuntimeObject* ___UnityPolicy_11;
	// Sirenix.Serialization.ISerializationPolicy Sirenix.Serialization.ComplexTypeSerializer`1::StrictPolicy
	RuntimeObject* ___StrictPolicy_12;
	// Sirenix.Serialization.ISerializationPolicy Sirenix.Serialization.ComplexTypeSerializer`1::EverythingPolicy
	RuntimeObject* ___EverythingPolicy_13;
	// Sirenix.Serialization.IFormatter`1<T> Sirenix.Serialization.ComplexTypeSerializer`1::UnityPolicyFormatter
	RuntimeObject* ___UnityPolicyFormatter_14;
	// Sirenix.Serialization.IFormatter`1<T> Sirenix.Serialization.ComplexTypeSerializer`1::StrictPolicyFormatter
	RuntimeObject* ___StrictPolicyFormatter_15;
	// Sirenix.Serialization.IFormatter`1<T> Sirenix.Serialization.ComplexTypeSerializer`1::EverythingPolicyFormatter
	RuntimeObject* ___EverythingPolicyFormatter_16;
};

// Sirenix.Serialization.ComplexTypeSerializer`1<System.String>
struct ComplexTypeSerializer_1_t17C1BEBA4D19A69B433AE527B454984508603CD8  : public Serializer_1_t9854C0179F50900A646768F185F6E029A9121EE0
{
};

struct ComplexTypeSerializer_1_t17C1BEBA4D19A69B433AE527B454984508603CD8_StaticFields
{
	// System.Boolean Sirenix.Serialization.ComplexTypeSerializer`1::ComplexTypeMayBeBoxedValueType
	bool ___ComplexTypeMayBeBoxedValueType_3;
	// System.Boolean Sirenix.Serialization.ComplexTypeSerializer`1::ComplexTypeIsAbstract
	bool ___ComplexTypeIsAbstract_4;
	// System.Boolean Sirenix.Serialization.ComplexTypeSerializer`1::ComplexTypeIsNullable
	bool ___ComplexTypeIsNullable_5;
	// System.Boolean Sirenix.Serialization.ComplexTypeSerializer`1::ComplexTypeIsValueType
	bool ___ComplexTypeIsValueType_6;
	// System.Type Sirenix.Serialization.ComplexTypeSerializer`1::TypeOf_T
	Type_t* ___TypeOf_T_7;
	// System.Boolean Sirenix.Serialization.ComplexTypeSerializer`1::AllowDeserializeInvalidDataForT
	bool ___AllowDeserializeInvalidDataForT_8;
	// System.Collections.Generic.Dictionary`2<Sirenix.Serialization.ISerializationPolicy,Sirenix.Serialization.IFormatter`1<T>> Sirenix.Serialization.ComplexTypeSerializer`1::FormattersByPolicy
	Dictionary_2_t94F48EFE328BC7301E1B5F2EBEF635A1A12D6695* ___FormattersByPolicy_9;
	// System.Object Sirenix.Serialization.ComplexTypeSerializer`1::FormattersByPolicy_LOCK
	RuntimeObject* ___FormattersByPolicy_LOCK_10;
	// Sirenix.Serialization.ISerializationPolicy Sirenix.Serialization.ComplexTypeSerializer`1::UnityPolicy
	RuntimeObject* ___UnityPolicy_11;
	// Sirenix.Serialization.ISerializationPolicy Sirenix.Serialization.ComplexTypeSerializer`1::StrictPolicy
	RuntimeObject* ___StrictPolicy_12;
	// Sirenix.Serialization.ISerializationPolicy Sirenix.Serialization.ComplexTypeSerializer`1::EverythingPolicy
	RuntimeObject* ___EverythingPolicy_13;
	// Sirenix.Serialization.IFormatter`1<T> Sirenix.Serialization.ComplexTypeSerializer`1::UnityPolicyFormatter
	RuntimeObject* ___UnityPolicyFormatter_14;
	// Sirenix.Serialization.IFormatter`1<T> Sirenix.Serialization.ComplexTypeSerializer`1::StrictPolicyFormatter
	RuntimeObject* ___StrictPolicyFormatter_15;
	// Sirenix.Serialization.IFormatter`1<T> Sirenix.Serialization.ComplexTypeSerializer`1::EverythingPolicyFormatter
	RuntimeObject* ___EverythingPolicyFormatter_16;
};

// Sirenix.Serialization.ComplexTypeSerializer`1<UnityEngine.Vector3>
struct ComplexTypeSerializer_1_tFCD53A450183F1A2C4AB437643C71E7A88E45FC7  : public Serializer_1_tDDFF38C009A627D53DAB1EE7BB473700C2C7FF45
{
};

struct ComplexTypeSerializer_1_tFCD53A450183F1A2C4AB437643C71E7A88E45FC7_StaticFields
{
	// System.Boolean Sirenix.Serialization.ComplexTypeSerializer`1::ComplexTypeMayBeBoxedValueType
	bool ___ComplexTypeMayBeBoxedValueType_3;
	// System.Boolean Sirenix.Serialization.ComplexTypeSerializer`1::ComplexTypeIsAbstract
	bool ___ComplexTypeIsAbstract_4;
	// System.Boolean Sirenix.Serialization.ComplexTypeSerializer`1::ComplexTypeIsNullable
	bool ___ComplexTypeIsNullable_5;
	// System.Boolean Sirenix.Serialization.ComplexTypeSerializer`1::ComplexTypeIsValueType
	bool ___ComplexTypeIsValueType_6;
	// System.Type Sirenix.Serialization.ComplexTypeSerializer`1::TypeOf_T
	Type_t* ___TypeOf_T_7;
	// System.Boolean Sirenix.Serialization.ComplexTypeSerializer`1::AllowDeserializeInvalidDataForT
	bool ___AllowDeserializeInvalidDataForT_8;
	// System.Collections.Generic.Dictionary`2<Sirenix.Serialization.ISerializationPolicy,Sirenix.Serialization.IFormatter`1<T>> Sirenix.Serialization.ComplexTypeSerializer`1::FormattersByPolicy
	Dictionary_2_t51BB77408C944D2593817E42CE71CB0B1B6F5156* ___FormattersByPolicy_9;
	// System.Object Sirenix.Serialization.ComplexTypeSerializer`1::FormattersByPolicy_LOCK
	RuntimeObject* ___FormattersByPolicy_LOCK_10;
	// Sirenix.Serialization.ISerializationPolicy Sirenix.Serialization.ComplexTypeSerializer`1::UnityPolicy
	RuntimeObject* ___UnityPolicy_11;
	// Sirenix.Serialization.ISerializationPolicy Sirenix.Serialization.ComplexTypeSerializer`1::StrictPolicy
	RuntimeObject* ___StrictPolicy_12;
	// Sirenix.Serialization.ISerializationPolicy Sirenix.Serialization.ComplexTypeSerializer`1::EverythingPolicy
	RuntimeObject* ___EverythingPolicy_13;
	// Sirenix.Serialization.IFormatter`1<T> Sirenix.Serialization.ComplexTypeSerializer`1::UnityPolicyFormatter
	RuntimeObject* ___UnityPolicyFormatter_14;
	// Sirenix.Serialization.IFormatter`1<T> Sirenix.Serialization.ComplexTypeSerializer`1::StrictPolicyFormatter
	RuntimeObject* ___StrictPolicyFormatter_15;
	// Sirenix.Serialization.IFormatter`1<T> Sirenix.Serialization.ComplexTypeSerializer`1::EverythingPolicyFormatter
	RuntimeObject* ___EverythingPolicyFormatter_16;
};

// Data.EnemyObject
struct EnemyObject_tED05D4E33D53805942BB80E2035210AE4A4CE284 
{
	// UnityEngine.Vector3 Data.EnemyObject::Position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Position_0;
	// UnityEngine.Quaternion Data.EnemyObject::Rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___Rotation_1;
	// System.String Data.EnemyObject::EnemyId
	String_t* ___EnemyId_2;
};
// Native definition for P/Invoke marshalling of Data.EnemyObject
struct EnemyObject_tED05D4E33D53805942BB80E2035210AE4A4CE284_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Position_0;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___Rotation_1;
	char* ___EnemyId_2;
};
// Native definition for COM marshalling of Data.EnemyObject
struct EnemyObject_tED05D4E33D53805942BB80E2035210AE4A4CE284_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Position_0;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___Rotation_1;
	Il2CppChar* ___EnemyId_2;
};

// Data.LevelObject
struct LevelObject_tFFCFA93E21A4612ED53F2A04DCD40E420AE915AF 
{
	// UnityEngine.Vector3 Data.LevelObject::Position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Position_0;
	// UnityEngine.Quaternion Data.LevelObject::Rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___Rotation_1;
	// System.String Data.LevelObject::PrefabPath
	String_t* ___PrefabPath_2;
};
// Native definition for P/Invoke marshalling of Data.LevelObject
struct LevelObject_tFFCFA93E21A4612ED53F2A04DCD40E420AE915AF_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Position_0;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___Rotation_1;
	char* ___PrefabPath_2;
};
// Native definition for COM marshalling of Data.LevelObject
struct LevelObject_tFFCFA93E21A4612ED53F2A04DCD40E420AE915AF_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Position_0;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___Rotation_1;
	Il2CppChar* ___PrefabPath_2;
};

// Sirenix.Serialization.SingleSerializer
struct SingleSerializer_t73348AC149C370F26845BA4025414C15BEF0526B  : public Serializer_1_t21A2F748C075C7B3B5ED1023BB5F3EDF2A2D95F5
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void Sirenix.Serialization.ReflectionFormatter`1<Data.EnemyObject>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionFormatter_1__ctor_mAB978AE79396029B512C1F13D4178DE7921FA5B8_gshared (ReflectionFormatter_1_t9BBE023AFFE2C7F0CE8881D8ACF1AA2D755547D7* __this, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.ComplexTypeSerializer`1<Data.EnemyObject>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComplexTypeSerializer_1__ctor_m3FCDF6D232BCB0AF18BC5C121F37CA9FA7F1F369_gshared (ComplexTypeSerializer_1_t70CE5B3C966E43CA00DA5D2EE9E28A83138A7E6F* __this, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.ArrayFormatter`1<Data.EnemyObject>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayFormatter_1__ctor_mF7280B432DC2558CD34E6DC4B452473464C1FA0F_gshared (ArrayFormatter_1_tE67C8DE5F352340971A71BE18D1601BED7AAD611* __this, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.ReflectionFormatter`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionFormatter_1__ctor_mBEB4F353923A667045D79ACE70460FF2968B5EDE_gshared (ReflectionFormatter_1_tB6DAF53F6F410C9664F5960209ABDD85E507E2D8* __this, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.ComplexTypeSerializer`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComplexTypeSerializer_1__ctor_mAA16309B355AE0A4CA59971202DA063826030EBA_gshared (ComplexTypeSerializer_1_tCFADED5CEF4AAA38D0FB34727CB6436B605B38A8* __this, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.ReflectionFormatter`1<Data.LevelObject>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionFormatter_1__ctor_m66364545675355AA3725C38E6DBFB70401E6570C_gshared (ReflectionFormatter_1_t504EEC4ABA215B04B29A4DE6984D983D2D43DEFF* __this, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.ComplexTypeSerializer`1<Data.LevelObject>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComplexTypeSerializer_1__ctor_m2610A45697EEF5B6178A5B230D056A21122CF18F_gshared (ComplexTypeSerializer_1_tA17ACDB40D998D4BEB917BB9FA96747FDF7B8278* __this, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.ArrayFormatter`1<Data.LevelObject>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayFormatter_1__ctor_m3CD22FF3DDDA11FD9BECED8671C8731011A0C517_gshared (ArrayFormatter_1_t6C0775D88C1137FE1F0C545C8A7E0191BAB39923* __this, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.ReflectionFormatter`1<UnityEngine.Quaternion>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionFormatter_1__ctor_m86A6239832EA134E5D6FE8B53A63C9AB4725F55D_gshared (ReflectionFormatter_1_t1CBB7CC3A5E5ABA3CD026873A98161186DF50DE7* __this, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.ComplexTypeSerializer`1<UnityEngine.Quaternion>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComplexTypeSerializer_1__ctor_m5D31A59242385651C9F11450C1C42E7FC36F8B71_gshared (ComplexTypeSerializer_1_t3B21732159CF234599BF7904F626C0A27105C38D* __this, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.ReflectionFormatter`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionFormatter_1__ctor_m54724919DD1AC28D2DAFCBD1D075E12E932EC9FB_gshared (ReflectionFormatter_1_tB7B52889277A1BD4932DC8B6AFE9AECF33A6EB8D* __this, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.ComplexTypeSerializer`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComplexTypeSerializer_1__ctor_m8CE3997E304BB0FDB068ECE94A1E9B30EC8DDBAD_gshared (ComplexTypeSerializer_1_tFCD53A450183F1A2C4AB437643C71E7A88E45FC7* __this, const RuntimeMethod* method) ;

// System.Void Sirenix.Serialization.ReflectionFormatter`1<Data.EnemyObject>::.ctor()
inline void ReflectionFormatter_1__ctor_mAB978AE79396029B512C1F13D4178DE7921FA5B8 (ReflectionFormatter_1_t9BBE023AFFE2C7F0CE8881D8ACF1AA2D755547D7* __this, const RuntimeMethod* method)
{
	((  void (*) (ReflectionFormatter_1_t9BBE023AFFE2C7F0CE8881D8ACF1AA2D755547D7*, const RuntimeMethod*))ReflectionFormatter_1__ctor_mAB978AE79396029B512C1F13D4178DE7921FA5B8_gshared)(__this, method);
}
// System.Void Sirenix.Serialization.ComplexTypeSerializer`1<Data.EnemyObject>::.ctor()
inline void ComplexTypeSerializer_1__ctor_m3FCDF6D232BCB0AF18BC5C121F37CA9FA7F1F369 (ComplexTypeSerializer_1_t70CE5B3C966E43CA00DA5D2EE9E28A83138A7E6F* __this, const RuntimeMethod* method)
{
	((  void (*) (ComplexTypeSerializer_1_t70CE5B3C966E43CA00DA5D2EE9E28A83138A7E6F*, const RuntimeMethod*))ComplexTypeSerializer_1__ctor_m3FCDF6D232BCB0AF18BC5C121F37CA9FA7F1F369_gshared)(__this, method);
}
// System.Void Sirenix.Serialization.ArrayFormatter`1<Data.EnemyObject>::.ctor()
inline void ArrayFormatter_1__ctor_mF7280B432DC2558CD34E6DC4B452473464C1FA0F (ArrayFormatter_1_tE67C8DE5F352340971A71BE18D1601BED7AAD611* __this, const RuntimeMethod* method)
{
	((  void (*) (ArrayFormatter_1_tE67C8DE5F352340971A71BE18D1601BED7AAD611*, const RuntimeMethod*))ArrayFormatter_1__ctor_mF7280B432DC2558CD34E6DC4B452473464C1FA0F_gshared)(__this, method);
}
// System.Void Sirenix.Serialization.ReflectionFormatter`1<Data.EnemyObject[]>::.ctor()
inline void ReflectionFormatter_1__ctor_mD5AE5A4D76748B37FDB1297A25334A0ECAEDB977 (ReflectionFormatter_1_t7854E40E12837C2A4781D1A2BA48B147CDF6F8AC* __this, const RuntimeMethod* method)
{
	((  void (*) (ReflectionFormatter_1_t7854E40E12837C2A4781D1A2BA48B147CDF6F8AC*, const RuntimeMethod*))ReflectionFormatter_1__ctor_mBEB4F353923A667045D79ACE70460FF2968B5EDE_gshared)(__this, method);
}
// System.Void Sirenix.Serialization.ComplexTypeSerializer`1<Data.EnemyObject[]>::.ctor()
inline void ComplexTypeSerializer_1__ctor_mD8AE6C2E4E317F637E31BD16103F5461BEF297BB (ComplexTypeSerializer_1_t2AA055505F5C203A4DEB8F926A8BA67A99024A23* __this, const RuntimeMethod* method)
{
	((  void (*) (ComplexTypeSerializer_1_t2AA055505F5C203A4DEB8F926A8BA67A99024A23*, const RuntimeMethod*))ComplexTypeSerializer_1__ctor_mAA16309B355AE0A4CA59971202DA063826030EBA_gshared)(__this, method);
}
// System.Void Sirenix.Serialization.SingleSerializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleSerializer__ctor_m62CF53A863CFAA4F170111C220B4F2356ACB1BD9 (SingleSerializer_t73348AC149C370F26845BA4025414C15BEF0526B* __this, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.ReflectionFormatter`1<Data.LevelObject>::.ctor()
inline void ReflectionFormatter_1__ctor_m66364545675355AA3725C38E6DBFB70401E6570C (ReflectionFormatter_1_t504EEC4ABA215B04B29A4DE6984D983D2D43DEFF* __this, const RuntimeMethod* method)
{
	((  void (*) (ReflectionFormatter_1_t504EEC4ABA215B04B29A4DE6984D983D2D43DEFF*, const RuntimeMethod*))ReflectionFormatter_1__ctor_m66364545675355AA3725C38E6DBFB70401E6570C_gshared)(__this, method);
}
// System.Void Sirenix.Serialization.ComplexTypeSerializer`1<Data.LevelObject>::.ctor()
inline void ComplexTypeSerializer_1__ctor_m2610A45697EEF5B6178A5B230D056A21122CF18F (ComplexTypeSerializer_1_tA17ACDB40D998D4BEB917BB9FA96747FDF7B8278* __this, const RuntimeMethod* method)
{
	((  void (*) (ComplexTypeSerializer_1_tA17ACDB40D998D4BEB917BB9FA96747FDF7B8278*, const RuntimeMethod*))ComplexTypeSerializer_1__ctor_m2610A45697EEF5B6178A5B230D056A21122CF18F_gshared)(__this, method);
}
// System.Void Sirenix.Serialization.ArrayFormatter`1<Data.LevelObject>::.ctor()
inline void ArrayFormatter_1__ctor_m3CD22FF3DDDA11FD9BECED8671C8731011A0C517 (ArrayFormatter_1_t6C0775D88C1137FE1F0C545C8A7E0191BAB39923* __this, const RuntimeMethod* method)
{
	((  void (*) (ArrayFormatter_1_t6C0775D88C1137FE1F0C545C8A7E0191BAB39923*, const RuntimeMethod*))ArrayFormatter_1__ctor_m3CD22FF3DDDA11FD9BECED8671C8731011A0C517_gshared)(__this, method);
}
// System.Void Sirenix.Serialization.ReflectionFormatter`1<Data.LevelObject[]>::.ctor()
inline void ReflectionFormatter_1__ctor_mAFCDDFBECA1B0685BA2AB84C5AA7C72FA99E8FB1 (ReflectionFormatter_1_t497D7AA31494D464D38C7E18F079095381443519* __this, const RuntimeMethod* method)
{
	((  void (*) (ReflectionFormatter_1_t497D7AA31494D464D38C7E18F079095381443519*, const RuntimeMethod*))ReflectionFormatter_1__ctor_mBEB4F353923A667045D79ACE70460FF2968B5EDE_gshared)(__this, method);
}
// System.Void Sirenix.Serialization.ComplexTypeSerializer`1<Data.LevelObject[]>::.ctor()
inline void ComplexTypeSerializer_1__ctor_mA9D3A5DCAF1D6F36EBC3E3C3BDE11F673D6E218C (ComplexTypeSerializer_1_tEBD0199F535C864695F28443251D316C8CFB56D1* __this, const RuntimeMethod* method)
{
	((  void (*) (ComplexTypeSerializer_1_tEBD0199F535C864695F28443251D316C8CFB56D1*, const RuntimeMethod*))ComplexTypeSerializer_1__ctor_mAA16309B355AE0A4CA59971202DA063826030EBA_gshared)(__this, method);
}
// System.Void Sirenix.Serialization.QuaternionFormatter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuaternionFormatter__ctor_m6026335E379C26AEB65A45E94A3D51681D116002 (QuaternionFormatter_t5D7FC41EDE27912EFB5105E5DB614AC7603B0900* __this, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.ReflectionFormatter`1<UnityEngine.Quaternion>::.ctor()
inline void ReflectionFormatter_1__ctor_m86A6239832EA134E5D6FE8B53A63C9AB4725F55D (ReflectionFormatter_1_t1CBB7CC3A5E5ABA3CD026873A98161186DF50DE7* __this, const RuntimeMethod* method)
{
	((  void (*) (ReflectionFormatter_1_t1CBB7CC3A5E5ABA3CD026873A98161186DF50DE7*, const RuntimeMethod*))ReflectionFormatter_1__ctor_m86A6239832EA134E5D6FE8B53A63C9AB4725F55D_gshared)(__this, method);
}
// System.Void Sirenix.Serialization.ComplexTypeSerializer`1<UnityEngine.Quaternion>::.ctor()
inline void ComplexTypeSerializer_1__ctor_m5D31A59242385651C9F11450C1C42E7FC36F8B71 (ComplexTypeSerializer_1_t3B21732159CF234599BF7904F626C0A27105C38D* __this, const RuntimeMethod* method)
{
	((  void (*) (ComplexTypeSerializer_1_t3B21732159CF234599BF7904F626C0A27105C38D*, const RuntimeMethod*))ComplexTypeSerializer_1__ctor_m5D31A59242385651C9F11450C1C42E7FC36F8B71_gshared)(__this, method);
}
// System.Void Sirenix.Serialization.ComplexTypeSerializer`1<System.String>::.ctor()
inline void ComplexTypeSerializer_1__ctor_m36A7F11181D62C3A99BDC8FD80E06382462316C0 (ComplexTypeSerializer_1_t17C1BEBA4D19A69B433AE527B454984508603CD8* __this, const RuntimeMethod* method)
{
	((  void (*) (ComplexTypeSerializer_1_t17C1BEBA4D19A69B433AE527B454984508603CD8*, const RuntimeMethod*))ComplexTypeSerializer_1__ctor_mAA16309B355AE0A4CA59971202DA063826030EBA_gshared)(__this, method);
}
// System.Void Sirenix.Serialization.Vector3Formatter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Formatter__ctor_mA419C61871035BB1A14B9AE978938A712ABE8A20 (Vector3Formatter_tF9F8AA8AC321722C78FBA4D0148F6DB4D3DC5CC3* __this, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.ReflectionFormatter`1<UnityEngine.Vector3>::.ctor()
inline void ReflectionFormatter_1__ctor_m54724919DD1AC28D2DAFCBD1D075E12E932EC9FB (ReflectionFormatter_1_tB7B52889277A1BD4932DC8B6AFE9AECF33A6EB8D* __this, const RuntimeMethod* method)
{
	((  void (*) (ReflectionFormatter_1_tB7B52889277A1BD4932DC8B6AFE9AECF33A6EB8D*, const RuntimeMethod*))ReflectionFormatter_1__ctor_m54724919DD1AC28D2DAFCBD1D075E12E932EC9FB_gshared)(__this, method);
}
// System.Void Sirenix.Serialization.ComplexTypeSerializer`1<UnityEngine.Vector3>::.ctor()
inline void ComplexTypeSerializer_1__ctor_m8CE3997E304BB0FDB068ECE94A1E9B30EC8DDBAD (ComplexTypeSerializer_1_tFCD53A450183F1A2C4AB437643C71E7A88E45FC7* __this, const RuntimeMethod* method)
{
	((  void (*) (ComplexTypeSerializer_1_tFCD53A450183F1A2C4AB437643C71E7A88E45FC7*, const RuntimeMethod*))ComplexTypeSerializer_1__ctor_m8CE3997E304BB0FDB068ECE94A1E9B30EC8DDBAD_gshared)(__this, method);
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
// System.Void Sirenix.Serialization.AOTGenerated.PreventCodeStrippingViaReferences::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreventCodeStrippingViaReferences__cctor_m2299EBFF5769500E8639CDB151322A7B2C673EB6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayFormatter_1__ctor_m3CD22FF3DDDA11FD9BECED8671C8731011A0C517_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayFormatter_1__ctor_mF7280B432DC2558CD34E6DC4B452473464C1FA0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayFormatter_1_t6C0775D88C1137FE1F0C545C8A7E0191BAB39923_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayFormatter_1_tE67C8DE5F352340971A71BE18D1601BED7AAD611_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComplexTypeSerializer_1__ctor_m2610A45697EEF5B6178A5B230D056A21122CF18F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComplexTypeSerializer_1__ctor_m36A7F11181D62C3A99BDC8FD80E06382462316C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComplexTypeSerializer_1__ctor_m3FCDF6D232BCB0AF18BC5C121F37CA9FA7F1F369_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComplexTypeSerializer_1__ctor_m5D31A59242385651C9F11450C1C42E7FC36F8B71_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComplexTypeSerializer_1__ctor_m8CE3997E304BB0FDB068ECE94A1E9B30EC8DDBAD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComplexTypeSerializer_1__ctor_mA9D3A5DCAF1D6F36EBC3E3C3BDE11F673D6E218C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComplexTypeSerializer_1__ctor_mD8AE6C2E4E317F637E31BD16103F5461BEF297BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComplexTypeSerializer_1_t17C1BEBA4D19A69B433AE527B454984508603CD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComplexTypeSerializer_1_t2AA055505F5C203A4DEB8F926A8BA67A99024A23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComplexTypeSerializer_1_t3B21732159CF234599BF7904F626C0A27105C38D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComplexTypeSerializer_1_t70CE5B3C966E43CA00DA5D2EE9E28A83138A7E6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComplexTypeSerializer_1_tA17ACDB40D998D4BEB917BB9FA96747FDF7B8278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComplexTypeSerializer_1_tEBD0199F535C864695F28443251D316C8CFB56D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComplexTypeSerializer_1_tFCD53A450183F1A2C4AB437643C71E7A88E45FC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuaternionFormatter_t5D7FC41EDE27912EFB5105E5DB614AC7603B0900_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionFormatter_1__ctor_m54724919DD1AC28D2DAFCBD1D075E12E932EC9FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionFormatter_1__ctor_m66364545675355AA3725C38E6DBFB70401E6570C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionFormatter_1__ctor_m86A6239832EA134E5D6FE8B53A63C9AB4725F55D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionFormatter_1__ctor_mAB978AE79396029B512C1F13D4178DE7921FA5B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionFormatter_1__ctor_mAFCDDFBECA1B0685BA2AB84C5AA7C72FA99E8FB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionFormatter_1__ctor_mD5AE5A4D76748B37FDB1297A25334A0ECAEDB977_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionFormatter_1_t1CBB7CC3A5E5ABA3CD026873A98161186DF50DE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionFormatter_1_t497D7AA31494D464D38C7E18F079095381443519_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionFormatter_1_t504EEC4ABA215B04B29A4DE6984D983D2D43DEFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionFormatter_1_t7854E40E12837C2A4781D1A2BA48B147CDF6F8AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionFormatter_1_t9BBE023AFFE2C7F0CE8881D8ACF1AA2D755547D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionFormatter_1_tB7B52889277A1BD4932DC8B6AFE9AECF33A6EB8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleSerializer_t73348AC149C370F26845BA4025414C15BEF0526B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3Formatter_tF9F8AA8AC321722C78FBA4D0148F6DB4D3DC5CC3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	EnemyObject_tED05D4E33D53805942BB80E2035210AE4A4CE284 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	LevelObject_tFFCFA93E21A4612ED53F2A04DCD40E420AE915AF V_3;
	memset((&V_3), 0, sizeof(V_3));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	ComplexTypeSerializer_1_t70CE5B3C966E43CA00DA5D2EE9E28A83138A7E6F* G_B2_0 = NULL;
	ComplexTypeSerializer_1_t70CE5B3C966E43CA00DA5D2EE9E28A83138A7E6F* G_B1_0 = NULL;
	SingleSerializer_t73348AC149C370F26845BA4025414C15BEF0526B* G_B4_0 = NULL;
	SingleSerializer_t73348AC149C370F26845BA4025414C15BEF0526B* G_B3_0 = NULL;
	ComplexTypeSerializer_1_tA17ACDB40D998D4BEB917BB9FA96747FDF7B8278* G_B6_0 = NULL;
	ComplexTypeSerializer_1_tA17ACDB40D998D4BEB917BB9FA96747FDF7B8278* G_B5_0 = NULL;
	ComplexTypeSerializer_1_t3B21732159CF234599BF7904F626C0A27105C38D* G_B8_0 = NULL;
	ComplexTypeSerializer_1_t3B21732159CF234599BF7904F626C0A27105C38D* G_B7_0 = NULL;
	ComplexTypeSerializer_1_tFCD53A450183F1A2C4AB437643C71E7A88E45FC7* G_B10_0 = NULL;
	ComplexTypeSerializer_1_tFCD53A450183F1A2C4AB437643C71E7A88E45FC7* G_B9_0 = NULL;
	{
		V_0 = (bool)0;
		il2cpp_codegen_initobj((&V_1), sizeof(EnemyObject_tED05D4E33D53805942BB80E2035210AE4A4CE284));
		ReflectionFormatter_1_t9BBE023AFFE2C7F0CE8881D8ACF1AA2D755547D7* L_0 = (ReflectionFormatter_1_t9BBE023AFFE2C7F0CE8881D8ACF1AA2D755547D7*)il2cpp_codegen_object_new(ReflectionFormatter_1_t9BBE023AFFE2C7F0CE8881D8ACF1AA2D755547D7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ReflectionFormatter_1__ctor_mAB978AE79396029B512C1F13D4178DE7921FA5B8(L_0, ReflectionFormatter_1__ctor_mAB978AE79396029B512C1F13D4178DE7921FA5B8_RuntimeMethod_var);
		ComplexTypeSerializer_1_t70CE5B3C966E43CA00DA5D2EE9E28A83138A7E6F* L_1 = (ComplexTypeSerializer_1_t70CE5B3C966E43CA00DA5D2EE9E28A83138A7E6F*)il2cpp_codegen_object_new(ComplexTypeSerializer_1_t70CE5B3C966E43CA00DA5D2EE9E28A83138A7E6F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ComplexTypeSerializer_1__ctor_m3FCDF6D232BCB0AF18BC5C121F37CA9FA7F1F369(L_1, ComplexTypeSerializer_1__ctor_m3FCDF6D232BCB0AF18BC5C121F37CA9FA7F1F369_RuntimeMethod_var);
		bool L_2 = V_0;
		G_B1_0 = L_1;
		if (!L_2)
		{
			G_B2_0 = L_1;
			goto IL_002c;
		}
	}
	{
		ComplexTypeSerializer_1_t70CE5B3C966E43CA00DA5D2EE9E28A83138A7E6F* L_3 = G_B1_0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(4 /* System.Object Sirenix.Serialization.Serializer`1<Data.EnemyObject>::ReadValueWeak(Sirenix.Serialization.IDataReader) */, L_3, (RuntimeObject*)NULL);
		ComplexTypeSerializer_1_t70CE5B3C966E43CA00DA5D2EE9E28A83138A7E6F* L_5 = L_3;
		NullCheck(L_5);
		VirtualActionInvoker3< String_t*, RuntimeObject*, RuntimeObject* >::Invoke(5 /* System.Void Sirenix.Serialization.Serializer`1<Data.EnemyObject>::WriteValueWeak(System.String,System.Object,Sirenix.Serialization.IDataWriter) */, L_5, (String_t*)NULL, NULL, (RuntimeObject*)NULL);
		G_B2_0 = L_5;
	}

IL_002c:
	{
		ArrayFormatter_1_tE67C8DE5F352340971A71BE18D1601BED7AAD611* L_6 = (ArrayFormatter_1_tE67C8DE5F352340971A71BE18D1601BED7AAD611*)il2cpp_codegen_object_new(ArrayFormatter_1_tE67C8DE5F352340971A71BE18D1601BED7AAD611_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		ArrayFormatter_1__ctor_mF7280B432DC2558CD34E6DC4B452473464C1FA0F(L_6, ArrayFormatter_1__ctor_mF7280B432DC2558CD34E6DC4B452473464C1FA0F_RuntimeMethod_var);
		ArrayFormatter_1_tE67C8DE5F352340971A71BE18D1601BED7AAD611* L_7 = (ArrayFormatter_1_tE67C8DE5F352340971A71BE18D1601BED7AAD611*)il2cpp_codegen_object_new(ArrayFormatter_1_tE67C8DE5F352340971A71BE18D1601BED7AAD611_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		ArrayFormatter_1__ctor_mF7280B432DC2558CD34E6DC4B452473464C1FA0F(L_7, ArrayFormatter_1__ctor_mF7280B432DC2558CD34E6DC4B452473464C1FA0F_RuntimeMethod_var);
		ReflectionFormatter_1_t7854E40E12837C2A4781D1A2BA48B147CDF6F8AC* L_8 = (ReflectionFormatter_1_t7854E40E12837C2A4781D1A2BA48B147CDF6F8AC*)il2cpp_codegen_object_new(ReflectionFormatter_1_t7854E40E12837C2A4781D1A2BA48B147CDF6F8AC_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		ReflectionFormatter_1__ctor_mD5AE5A4D76748B37FDB1297A25334A0ECAEDB977(L_8, ReflectionFormatter_1__ctor_mD5AE5A4D76748B37FDB1297A25334A0ECAEDB977_RuntimeMethod_var);
		ComplexTypeSerializer_1_t2AA055505F5C203A4DEB8F926A8BA67A99024A23* L_9 = (ComplexTypeSerializer_1_t2AA055505F5C203A4DEB8F926A8BA67A99024A23*)il2cpp_codegen_object_new(ComplexTypeSerializer_1_t2AA055505F5C203A4DEB8F926A8BA67A99024A23_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		ComplexTypeSerializer_1__ctor_mD8AE6C2E4E317F637E31BD16103F5461BEF297BB(L_9, ComplexTypeSerializer_1__ctor_mD8AE6C2E4E317F637E31BD16103F5461BEF297BB_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_2), sizeof(float));
		SingleSerializer_t73348AC149C370F26845BA4025414C15BEF0526B* L_10 = (SingleSerializer_t73348AC149C370F26845BA4025414C15BEF0526B*)il2cpp_codegen_object_new(SingleSerializer_t73348AC149C370F26845BA4025414C15BEF0526B_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		SingleSerializer__ctor_m62CF53A863CFAA4F170111C220B4F2356ACB1BD9(L_10, NULL);
		bool L_11 = V_0;
		G_B3_0 = L_10;
		if (!L_11)
		{
			G_B4_0 = L_10;
			goto IL_0069;
		}
	}
	{
		SingleSerializer_t73348AC149C370F26845BA4025414C15BEF0526B* L_12 = G_B3_0;
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(4 /* System.Object Sirenix.Serialization.Serializer`1<System.Single>::ReadValueWeak(Sirenix.Serialization.IDataReader) */, L_12, (RuntimeObject*)NULL);
		SingleSerializer_t73348AC149C370F26845BA4025414C15BEF0526B* L_14 = L_12;
		NullCheck(L_14);
		VirtualActionInvoker3< String_t*, RuntimeObject*, RuntimeObject* >::Invoke(5 /* System.Void Sirenix.Serialization.Serializer`1<System.Single>::WriteValueWeak(System.String,System.Object,Sirenix.Serialization.IDataWriter) */, L_14, (String_t*)NULL, NULL, (RuntimeObject*)NULL);
		G_B4_0 = L_14;
	}

IL_0069:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(LevelObject_tFFCFA93E21A4612ED53F2A04DCD40E420AE915AF));
		ReflectionFormatter_1_t504EEC4ABA215B04B29A4DE6984D983D2D43DEFF* L_15 = (ReflectionFormatter_1_t504EEC4ABA215B04B29A4DE6984D983D2D43DEFF*)il2cpp_codegen_object_new(ReflectionFormatter_1_t504EEC4ABA215B04B29A4DE6984D983D2D43DEFF_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		ReflectionFormatter_1__ctor_m66364545675355AA3725C38E6DBFB70401E6570C(L_15, ReflectionFormatter_1__ctor_m66364545675355AA3725C38E6DBFB70401E6570C_RuntimeMethod_var);
		ComplexTypeSerializer_1_tA17ACDB40D998D4BEB917BB9FA96747FDF7B8278* L_16 = (ComplexTypeSerializer_1_tA17ACDB40D998D4BEB917BB9FA96747FDF7B8278*)il2cpp_codegen_object_new(ComplexTypeSerializer_1_tA17ACDB40D998D4BEB917BB9FA96747FDF7B8278_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		ComplexTypeSerializer_1__ctor_m2610A45697EEF5B6178A5B230D056A21122CF18F(L_16, ComplexTypeSerializer_1__ctor_m2610A45697EEF5B6178A5B230D056A21122CF18F_RuntimeMethod_var);
		bool L_17 = V_0;
		G_B5_0 = L_16;
		if (!L_17)
		{
			G_B6_0 = L_16;
			goto IL_0094;
		}
	}
	{
		ComplexTypeSerializer_1_tA17ACDB40D998D4BEB917BB9FA96747FDF7B8278* L_18 = G_B5_0;
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(4 /* System.Object Sirenix.Serialization.Serializer`1<Data.LevelObject>::ReadValueWeak(Sirenix.Serialization.IDataReader) */, L_18, (RuntimeObject*)NULL);
		ComplexTypeSerializer_1_tA17ACDB40D998D4BEB917BB9FA96747FDF7B8278* L_20 = L_18;
		NullCheck(L_20);
		VirtualActionInvoker3< String_t*, RuntimeObject*, RuntimeObject* >::Invoke(5 /* System.Void Sirenix.Serialization.Serializer`1<Data.LevelObject>::WriteValueWeak(System.String,System.Object,Sirenix.Serialization.IDataWriter) */, L_20, (String_t*)NULL, NULL, (RuntimeObject*)NULL);
		G_B6_0 = L_20;
	}

IL_0094:
	{
		ArrayFormatter_1_t6C0775D88C1137FE1F0C545C8A7E0191BAB39923* L_21 = (ArrayFormatter_1_t6C0775D88C1137FE1F0C545C8A7E0191BAB39923*)il2cpp_codegen_object_new(ArrayFormatter_1_t6C0775D88C1137FE1F0C545C8A7E0191BAB39923_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		ArrayFormatter_1__ctor_m3CD22FF3DDDA11FD9BECED8671C8731011A0C517(L_21, ArrayFormatter_1__ctor_m3CD22FF3DDDA11FD9BECED8671C8731011A0C517_RuntimeMethod_var);
		ArrayFormatter_1_t6C0775D88C1137FE1F0C545C8A7E0191BAB39923* L_22 = (ArrayFormatter_1_t6C0775D88C1137FE1F0C545C8A7E0191BAB39923*)il2cpp_codegen_object_new(ArrayFormatter_1_t6C0775D88C1137FE1F0C545C8A7E0191BAB39923_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		ArrayFormatter_1__ctor_m3CD22FF3DDDA11FD9BECED8671C8731011A0C517(L_22, ArrayFormatter_1__ctor_m3CD22FF3DDDA11FD9BECED8671C8731011A0C517_RuntimeMethod_var);
		ReflectionFormatter_1_t497D7AA31494D464D38C7E18F079095381443519* L_23 = (ReflectionFormatter_1_t497D7AA31494D464D38C7E18F079095381443519*)il2cpp_codegen_object_new(ReflectionFormatter_1_t497D7AA31494D464D38C7E18F079095381443519_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		ReflectionFormatter_1__ctor_mAFCDDFBECA1B0685BA2AB84C5AA7C72FA99E8FB1(L_23, ReflectionFormatter_1__ctor_mAFCDDFBECA1B0685BA2AB84C5AA7C72FA99E8FB1_RuntimeMethod_var);
		ComplexTypeSerializer_1_tEBD0199F535C864695F28443251D316C8CFB56D1* L_24 = (ComplexTypeSerializer_1_tEBD0199F535C864695F28443251D316C8CFB56D1*)il2cpp_codegen_object_new(ComplexTypeSerializer_1_tEBD0199F535C864695F28443251D316C8CFB56D1_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		ComplexTypeSerializer_1__ctor_mA9D3A5DCAF1D6F36EBC3E3C3BDE11F673D6E218C(L_24, ComplexTypeSerializer_1__ctor_mA9D3A5DCAF1D6F36EBC3E3C3BDE11F673D6E218C_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_4), sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		QuaternionFormatter_t5D7FC41EDE27912EFB5105E5DB614AC7603B0900* L_25 = (QuaternionFormatter_t5D7FC41EDE27912EFB5105E5DB614AC7603B0900*)il2cpp_codegen_object_new(QuaternionFormatter_t5D7FC41EDE27912EFB5105E5DB614AC7603B0900_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		QuaternionFormatter__ctor_m6026335E379C26AEB65A45E94A3D51681D116002(L_25, NULL);
		ReflectionFormatter_1_t1CBB7CC3A5E5ABA3CD026873A98161186DF50DE7* L_26 = (ReflectionFormatter_1_t1CBB7CC3A5E5ABA3CD026873A98161186DF50DE7*)il2cpp_codegen_object_new(ReflectionFormatter_1_t1CBB7CC3A5E5ABA3CD026873A98161186DF50DE7_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		ReflectionFormatter_1__ctor_m86A6239832EA134E5D6FE8B53A63C9AB4725F55D(L_26, ReflectionFormatter_1__ctor_m86A6239832EA134E5D6FE8B53A63C9AB4725F55D_RuntimeMethod_var);
		ComplexTypeSerializer_1_t3B21732159CF234599BF7904F626C0A27105C38D* L_27 = (ComplexTypeSerializer_1_t3B21732159CF234599BF7904F626C0A27105C38D*)il2cpp_codegen_object_new(ComplexTypeSerializer_1_t3B21732159CF234599BF7904F626C0A27105C38D_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		ComplexTypeSerializer_1__ctor_m5D31A59242385651C9F11450C1C42E7FC36F8B71(L_27, ComplexTypeSerializer_1__ctor_m5D31A59242385651C9F11450C1C42E7FC36F8B71_RuntimeMethod_var);
		bool L_28 = V_0;
		G_B7_0 = L_27;
		if (!L_28)
		{
			G_B8_0 = L_27;
			goto IL_00dd;
		}
	}
	{
		ComplexTypeSerializer_1_t3B21732159CF234599BF7904F626C0A27105C38D* L_29 = G_B7_0;
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(4 /* System.Object Sirenix.Serialization.Serializer`1<UnityEngine.Quaternion>::ReadValueWeak(Sirenix.Serialization.IDataReader) */, L_29, (RuntimeObject*)NULL);
		ComplexTypeSerializer_1_t3B21732159CF234599BF7904F626C0A27105C38D* L_31 = L_29;
		NullCheck(L_31);
		VirtualActionInvoker3< String_t*, RuntimeObject*, RuntimeObject* >::Invoke(5 /* System.Void Sirenix.Serialization.Serializer`1<UnityEngine.Quaternion>::WriteValueWeak(System.String,System.Object,Sirenix.Serialization.IDataWriter) */, L_31, (String_t*)NULL, NULL, (RuntimeObject*)NULL);
		G_B8_0 = L_31;
	}

IL_00dd:
	{
		ComplexTypeSerializer_1_t17C1BEBA4D19A69B433AE527B454984508603CD8* L_32 = (ComplexTypeSerializer_1_t17C1BEBA4D19A69B433AE527B454984508603CD8*)il2cpp_codegen_object_new(ComplexTypeSerializer_1_t17C1BEBA4D19A69B433AE527B454984508603CD8_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		ComplexTypeSerializer_1__ctor_m36A7F11181D62C3A99BDC8FD80E06382462316C0(L_32, ComplexTypeSerializer_1__ctor_m36A7F11181D62C3A99BDC8FD80E06382462316C0_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_5), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3Formatter_tF9F8AA8AC321722C78FBA4D0148F6DB4D3DC5CC3* L_33 = (Vector3Formatter_tF9F8AA8AC321722C78FBA4D0148F6DB4D3DC5CC3*)il2cpp_codegen_object_new(Vector3Formatter_tF9F8AA8AC321722C78FBA4D0148F6DB4D3DC5CC3_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		Vector3Formatter__ctor_mA419C61871035BB1A14B9AE978938A712ABE8A20(L_33, NULL);
		ReflectionFormatter_1_tB7B52889277A1BD4932DC8B6AFE9AECF33A6EB8D* L_34 = (ReflectionFormatter_1_tB7B52889277A1BD4932DC8B6AFE9AECF33A6EB8D*)il2cpp_codegen_object_new(ReflectionFormatter_1_tB7B52889277A1BD4932DC8B6AFE9AECF33A6EB8D_il2cpp_TypeInfo_var);
		NullCheck(L_34);
		ReflectionFormatter_1__ctor_m54724919DD1AC28D2DAFCBD1D075E12E932EC9FB(L_34, ReflectionFormatter_1__ctor_m54724919DD1AC28D2DAFCBD1D075E12E932EC9FB_RuntimeMethod_var);
		ComplexTypeSerializer_1_tFCD53A450183F1A2C4AB437643C71E7A88E45FC7* L_35 = (ComplexTypeSerializer_1_tFCD53A450183F1A2C4AB437643C71E7A88E45FC7*)il2cpp_codegen_object_new(ComplexTypeSerializer_1_tFCD53A450183F1A2C4AB437643C71E7A88E45FC7_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		ComplexTypeSerializer_1__ctor_m8CE3997E304BB0FDB068ECE94A1E9B30EC8DDBAD(L_35, ComplexTypeSerializer_1__ctor_m8CE3997E304BB0FDB068ECE94A1E9B30EC8DDBAD_RuntimeMethod_var);
		bool L_36 = V_0;
		G_B9_0 = L_35;
		if (!L_36)
		{
			G_B10_0 = L_35;
			goto IL_0114;
		}
	}
	{
		ComplexTypeSerializer_1_tFCD53A450183F1A2C4AB437643C71E7A88E45FC7* L_37 = G_B9_0;
		NullCheck(L_37);
		RuntimeObject* L_38;
		L_38 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(4 /* System.Object Sirenix.Serialization.Serializer`1<UnityEngine.Vector3>::ReadValueWeak(Sirenix.Serialization.IDataReader) */, L_37, (RuntimeObject*)NULL);
		ComplexTypeSerializer_1_tFCD53A450183F1A2C4AB437643C71E7A88E45FC7* L_39 = L_37;
		NullCheck(L_39);
		VirtualActionInvoker3< String_t*, RuntimeObject*, RuntimeObject* >::Invoke(5 /* System.Void Sirenix.Serialization.Serializer`1<UnityEngine.Vector3>::WriteValueWeak(System.String,System.Object,Sirenix.Serialization.IDataWriter) */, L_39, (String_t*)NULL, NULL, (RuntimeObject*)NULL);
		G_B10_0 = L_39;
	}

IL_0114:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
