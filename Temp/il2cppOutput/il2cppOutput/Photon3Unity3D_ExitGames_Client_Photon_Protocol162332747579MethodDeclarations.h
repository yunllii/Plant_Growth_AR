#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// ExitGames.Client.Photon.Protocol16
struct Protocol16_t2332747579;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// ExitGames.Client.Photon.StreamBuffer
struct StreamBuffer_t3747118964;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.Array
struct Il2CppArray;
// ExitGames.Client.Photon.OperationRequest
struct OperationRequest_t3015313336;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t2064209302;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t3648537128;
// ExitGames.Client.Photon.EventData
struct EventData_t126381822;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t995404622;
// System.Collections.IDictionary
struct IDictionary_t596158605;
// System.String[]
struct StringU5BU5D_t1642385972;

#include "codegen/il2cpp-codegen.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_StreamBuffe3747118964.h"
#include "mscorlib_System_Object2689449295.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_Protocol16_4193807259.h"
#include "mscorlib_System_Type1303803226.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_OperationRe3015313336.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_OperationRe3648537128.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_EventData126381822.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Array3829468939.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_Hashtable995404622.h"

// System.String ExitGames.Client.Photon.Protocol16::get_protocolType()
extern "C"  String_t* Protocol16_get_protocolType_m1671728361 (Protocol16_t2332747579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ExitGames.Client.Photon.Protocol16::get_VersionBytes()
extern "C"  ByteU5BU5D_t3397334013* Protocol16_get_VersionBytes_m3758827389 (Protocol16_t2332747579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Protocol16::SerializeCustom(ExitGames.Client.Photon.StreamBuffer,System.Object)
extern "C"  bool Protocol16_SerializeCustom_m3252847044 (Protocol16_t2332747579 * __this, StreamBuffer_t3747118964 * ___dout0, Il2CppObject * ___serObject1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ExitGames.Client.Photon.Protocol16::DeserializeCustom(ExitGames.Client.Photon.StreamBuffer,System.Byte)
extern "C"  Il2CppObject * Protocol16_DeserializeCustom_m2745959943 (Protocol16_t2332747579 * __this, StreamBuffer_t3747118964 * ___din0, uint8_t ___customTypeCode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ExitGames.Client.Photon.Protocol16::GetTypeOfCode(System.Byte)
extern "C"  Type_t * Protocol16_GetTypeOfCode_m3625152220 (Protocol16_t2332747579 * __this, uint8_t ___typeCode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Protocol16/GpType ExitGames.Client.Photon.Protocol16::GetCodeOfType(System.Type)
extern "C"  uint8_t Protocol16_GetCodeOfType_m1284583014 (Protocol16_t2332747579 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array ExitGames.Client.Photon.Protocol16::CreateArrayByType(System.Byte,System.Int16)
extern "C"  Il2CppArray * Protocol16_CreateArrayByType_m2765439746 (Protocol16_t2332747579 * __this, uint8_t ___arrayType0, int16_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeOperationRequest(ExitGames.Client.Photon.StreamBuffer,ExitGames.Client.Photon.OperationRequest,System.Boolean)
extern "C"  void Protocol16_SerializeOperationRequest_m1781868614 (Protocol16_t2332747579 * __this, StreamBuffer_t3747118964 * ___stream0, OperationRequest_t3015313336 * ___serObject1, bool ___setType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeOperationRequest(ExitGames.Client.Photon.StreamBuffer,System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Boolean)
extern "C"  void Protocol16_SerializeOperationRequest_m153376899 (Protocol16_t2332747579 * __this, StreamBuffer_t3747118964 * ___stream0, uint8_t ___operationCode1, Dictionary_2_t2064209302 * ___parameters2, bool ___setType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.OperationRequest ExitGames.Client.Photon.Protocol16::DeserializeOperationRequest(ExitGames.Client.Photon.StreamBuffer)
extern "C"  OperationRequest_t3015313336 * Protocol16_DeserializeOperationRequest_m1823254383 (Protocol16_t2332747579 * __this, StreamBuffer_t3747118964 * ___din0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeOperationResponse(ExitGames.Client.Photon.StreamBuffer,ExitGames.Client.Photon.OperationResponse,System.Boolean)
extern "C"  void Protocol16_SerializeOperationResponse_m1761641710 (Protocol16_t2332747579 * __this, StreamBuffer_t3747118964 * ___stream0, OperationResponse_t3648537128 * ___serObject1, bool ___setType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.OperationResponse ExitGames.Client.Photon.Protocol16::DeserializeOperationResponse(ExitGames.Client.Photon.StreamBuffer)
extern "C"  OperationResponse_t3648537128 * Protocol16_DeserializeOperationResponse_m2716116271 (Protocol16_t2332747579 * __this, StreamBuffer_t3747118964 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeEventData(ExitGames.Client.Photon.StreamBuffer,ExitGames.Client.Photon.EventData,System.Boolean)
extern "C"  void Protocol16_SerializeEventData_m3734907350 (Protocol16_t2332747579 * __this, StreamBuffer_t3747118964 * ___stream0, EventData_t126381822 * ___serObject1, bool ___setType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.EventData ExitGames.Client.Photon.Protocol16::DeserializeEventData(ExitGames.Client.Photon.StreamBuffer)
extern "C"  EventData_t126381822 * Protocol16_DeserializeEventData_m3567196759 (Protocol16_t2332747579 * __this, StreamBuffer_t3747118964 * ___din0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeParameterTable(ExitGames.Client.Photon.StreamBuffer,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>)
extern "C"  void Protocol16_SerializeParameterTable_m2648341854 (Protocol16_t2332747579 * __this, StreamBuffer_t3747118964 * ___stream0, Dictionary_2_t2064209302 * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object> ExitGames.Client.Photon.Protocol16::DeserializeParameterTable(ExitGames.Client.Photon.StreamBuffer)
extern "C"  Dictionary_2_t2064209302 * Protocol16_DeserializeParameterTable_m1162071974 (Protocol16_t2332747579 * __this, StreamBuffer_t3747118964 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::Serialize(ExitGames.Client.Photon.StreamBuffer,System.Object,System.Boolean)
extern "C"  void Protocol16_Serialize_m911246082 (Protocol16_t2332747579 * __this, StreamBuffer_t3747118964 * ___dout0, Il2CppObject * ___serObject1, bool ___setType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeByte(ExitGames.Client.Photon.StreamBuffer,System.Byte,System.Boolean)
extern "C"  void Protocol16_SerializeByte_m3806643293 (Protocol16_t2332747579 * __this, StreamBuffer_t3747118964 * ___dout0, uint8_t ___serObject1, bool ___setType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeBoolean(ExitGames.Client.Photon.StreamBuffer,System.Boolean,System.Boolean)
extern "C"  void Protocol16_SerializeBoolean_m508139385 (Protocol16_t2332747579 * __this, StreamBuffer_t3747118964 * ___dout0, bool ___serObject1, bool ___setType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeShort(ExitGames.Client.Photon.StreamBuffer,System.Int16,System.Boolean)
extern "C"  void Protocol16_SerializeShort_m1552294895 (Protocol16_t2332747579 * __this, StreamBuffer_t3747118964 * ___dout0, int16_t ___serObject1, bool ___setType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeInteger(ExitGames.Client.Photon.StreamBuffer,System.Int32,System.Boolean)
extern "C"  void Protocol16_SerializeInteger_m2152831165 (Protocol16_t2332747579 * __this, StreamBuffer_t3747118964 * ___dout0, int32_t ___serObject1, bool ___setType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeLong(ExitGames.Client.Photon.StreamBuffer,System.Int64,System.Boolean)
extern "C"  void Protocol16_SerializeLong_m1280343086 (Protocol16_t2332747579 * __this, StreamBuffer_t3747118964 * ___dout0, int64_t ___serObject1, bool ___setType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeFloat(ExitGames.Client.Photon.StreamBuffer,System.Single,System.Boolean)
extern "C"  void Protocol16_SerializeFloat_m2705632767 (Protocol16_t2332747579 * __this, StreamBuffer_t3747118964 * ___dout0, float ___serObject1, bool ___setType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeDouble(ExitGames.Client.Photon.StreamBuffer,System.Double,System.Boolean)
extern "C"  void Protocol16_SerializeDouble_m3450844957 (Protocol16_t2332747579 * __this, StreamBuffer_t3747118964 * ___dout0, double ___serObject1, bool ___setType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeString(ExitGames.Client.Photon.StreamBuffer,System.String,System.Boolean)
extern "C"  void Protocol16_SerializeString_m2311751069 (Protocol16_t2332747579 * __this, StreamBuffer_t3747118964 * ___dout0, String_t* ___serObject1, bool ___setType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeArray(ExitGames.Client.Photon.StreamBuffer,System.Array,System.Boolean)
extern "C"  void Protocol16_SerializeArray_m3172120185 (Protocol16_t2332747579 * __this, StreamBuffer_t3747118964 * ___dout0, Il2CppArray * ___serObject1, bool ___setType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeByteArray(ExitGames.Client.Photon.StreamBuffer,System.Byte[],System.Boolean)
extern "C"  void Protocol16_SerializeByteArray_m3168804002 (Protocol16_t2332747579 * __this, StreamBuffer_t3747118964 * ___dout0, ByteU5BU5D_t3397334013* ___serObject1, bool ___setType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeByteArraySegment(ExitGames.Client.Photon.StreamBuffer,System.Byte[],System.Int32,System.Int32,System.Boolean)
extern "C"  void Protocol16_SerializeByteArraySegment_m7806753 (Protocol16_t2332747579 * __this, StreamBuffer_t3747118964 * ___dout0, ByteU5BU5D_t3397334013* ___serObject1, int32_t ___offset2, int32_t ___count3, bool ___setType4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeIntArrayOptimized(ExitGames.Client.Photon.StreamBuffer,System.Int32[],System.Boolean)
extern "C"  void Protocol16_SerializeIntArrayOptimized_m3571386820 (Protocol16_t2332747579 * __this, StreamBuffer_t3747118964 * ___inWriter0, Int32U5BU5D_t3030399641* ___serObject1, bool ___setType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeObjectArray(ExitGames.Client.Photon.StreamBuffer,System.Object[],System.Boolean)
extern "C"  void Protocol16_SerializeObjectArray_m516479458 (Protocol16_t2332747579 * __this, StreamBuffer_t3747118964 * ___dout0, ObjectU5BU5D_t3614634134* ___objects1, bool ___setType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeHashTable(ExitGames.Client.Photon.StreamBuffer,ExitGames.Client.Photon.Hashtable,System.Boolean)
extern "C"  void Protocol16_SerializeHashTable_m3786286166 (Protocol16_t2332747579 * __this, StreamBuffer_t3747118964 * ___dout0, Hashtable_t995404622 * ___serObject1, bool ___setType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeDictionary(ExitGames.Client.Photon.StreamBuffer,System.Collections.IDictionary,System.Boolean)
extern "C"  void Protocol16_SerializeDictionary_m3485022351 (Protocol16_t2332747579 * __this, StreamBuffer_t3747118964 * ___dout0, Il2CppObject * ___serObject1, bool ___setType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeDictionaryHeader(ExitGames.Client.Photon.StreamBuffer,System.Type)
extern "C"  void Protocol16_SerializeDictionaryHeader_m3116446121 (Protocol16_t2332747579 * __this, StreamBuffer_t3747118964 * ___writer0, Type_t * ___dictType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeDictionaryHeader(ExitGames.Client.Photon.StreamBuffer,System.Object,System.Boolean&,System.Boolean&)
extern "C"  void Protocol16_SerializeDictionaryHeader_m2691056978 (Protocol16_t2332747579 * __this, StreamBuffer_t3747118964 * ___writer0, Il2CppObject * ___dict1, bool* ___setKeyType2, bool* ___setValueType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeDictionaryElements(ExitGames.Client.Photon.StreamBuffer,System.Object,System.Boolean,System.Boolean)
extern "C"  void Protocol16_SerializeDictionaryElements_m3257066772 (Protocol16_t2332747579 * __this, StreamBuffer_t3747118964 * ___writer0, Il2CppObject * ___dict1, bool ___setKeyType2, bool ___setValueType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ExitGames.Client.Photon.Protocol16::Deserialize(ExitGames.Client.Photon.StreamBuffer,System.Byte)
extern "C"  Il2CppObject * Protocol16_Deserialize_m2385786036 (Protocol16_t2332747579 * __this, StreamBuffer_t3747118964 * ___din0, uint8_t ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte ExitGames.Client.Photon.Protocol16::DeserializeByte(ExitGames.Client.Photon.StreamBuffer)
extern "C"  uint8_t Protocol16_DeserializeByte_m1884151330 (Protocol16_t2332747579 * __this, StreamBuffer_t3747118964 * ___din0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Protocol16::DeserializeBoolean(ExitGames.Client.Photon.StreamBuffer)
extern "C"  bool Protocol16_DeserializeBoolean_m3574531406 (Protocol16_t2332747579 * __this, StreamBuffer_t3747118964 * ___din0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 ExitGames.Client.Photon.Protocol16::DeserializeShort(ExitGames.Client.Photon.StreamBuffer)
extern "C"  int16_t Protocol16_DeserializeShort_m917162138 (Protocol16_t2332747579 * __this, StreamBuffer_t3747118964 * ___din0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.Protocol16::DeserializeInteger(ExitGames.Client.Photon.StreamBuffer)
extern "C"  int32_t Protocol16_DeserializeInteger_m4052347156 (Protocol16_t2332747579 * __this, StreamBuffer_t3747118964 * ___din0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ExitGames.Client.Photon.Protocol16::DeserializeLong(ExitGames.Client.Photon.StreamBuffer)
extern "C"  int64_t Protocol16_DeserializeLong_m2086387527 (Protocol16_t2332747579 * __this, StreamBuffer_t3747118964 * ___din0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ExitGames.Client.Photon.Protocol16::DeserializeFloat(ExitGames.Client.Photon.StreamBuffer)
extern "C"  float Protocol16_DeserializeFloat_m126202622 (Protocol16_t2332747579 * __this, StreamBuffer_t3747118964 * ___din0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double ExitGames.Client.Photon.Protocol16::DeserializeDouble(ExitGames.Client.Photon.StreamBuffer)
extern "C"  double Protocol16_DeserializeDouble_m2755199362 (Protocol16_t2332747579 * __this, StreamBuffer_t3747118964 * ___din0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Protocol16::DeserializeString(ExitGames.Client.Photon.StreamBuffer)
extern "C"  String_t* Protocol16_DeserializeString_m1376427906 (Protocol16_t2332747579 * __this, StreamBuffer_t3747118964 * ___din0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array ExitGames.Client.Photon.Protocol16::DeserializeArray(ExitGames.Client.Photon.StreamBuffer)
extern "C"  Il2CppArray * Protocol16_DeserializeArray_m1554584312 (Protocol16_t2332747579 * __this, StreamBuffer_t3747118964 * ___din0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ExitGames.Client.Photon.Protocol16::DeserializeByteArray(ExitGames.Client.Photon.StreamBuffer)
extern "C"  ByteU5BU5D_t3397334013* Protocol16_DeserializeByteArray_m2512869051 (Protocol16_t2332747579 * __this, StreamBuffer_t3747118964 * ___din0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ExitGames.Client.Photon.Protocol16::DeserializeIntArray(ExitGames.Client.Photon.StreamBuffer)
extern "C"  Int32U5BU5D_t3030399641* Protocol16_DeserializeIntArray_m2687330122 (Protocol16_t2332747579 * __this, StreamBuffer_t3747118964 * ___din0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] ExitGames.Client.Photon.Protocol16::DeserializeStringArray(ExitGames.Client.Photon.StreamBuffer)
extern "C"  StringU5BU5D_t1642385972* Protocol16_DeserializeStringArray_m2226284283 (Protocol16_t2332747579 * __this, StreamBuffer_t3747118964 * ___din0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] ExitGames.Client.Photon.Protocol16::DeserializeObjectArray(ExitGames.Client.Photon.StreamBuffer)
extern "C"  ObjectU5BU5D_t3614634134* Protocol16_DeserializeObjectArray_m1514583867 (Protocol16_t2332747579 * __this, StreamBuffer_t3747118964 * ___din0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable ExitGames.Client.Photon.Protocol16::DeserializeHashTable(ExitGames.Client.Photon.StreamBuffer)
extern "C"  Hashtable_t995404622 * Protocol16_DeserializeHashTable_m838531575 (Protocol16_t2332747579 * __this, StreamBuffer_t3747118964 * ___din0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary ExitGames.Client.Photon.Protocol16::DeserializeDictionary(ExitGames.Client.Photon.StreamBuffer)
extern "C"  Il2CppObject * Protocol16_DeserializeDictionary_m3159094764 (Protocol16_t2332747579 * __this, StreamBuffer_t3747118964 * ___din0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Protocol16::DeserializeDictionaryArray(ExitGames.Client.Photon.StreamBuffer,System.Int16,System.Array&)
extern "C"  bool Protocol16_DeserializeDictionaryArray_m3425715984 (Protocol16_t2332747579 * __this, StreamBuffer_t3747118964 * ___din0, int16_t ___size1, Il2CppArray ** ___arrayResult2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ExitGames.Client.Photon.Protocol16::DeserializeDictionaryType(ExitGames.Client.Photon.StreamBuffer,System.Byte&,System.Byte&)
extern "C"  Type_t * Protocol16_DeserializeDictionaryType_m455082180 (Protocol16_t2332747579 * __this, StreamBuffer_t3747118964 * ___reader0, uint8_t* ___keyTypeCode1, uint8_t* ___valTypeCode2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::.ctor()
extern "C"  void Protocol16__ctor_m397772775 (Protocol16_t2332747579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::.cctor()
extern "C"  void Protocol16__cctor_m637668098 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
