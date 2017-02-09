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

// WebRpcResponse
struct WebRpcResponse_t2303421426;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t3648537128;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t309261261;

#include "codegen/il2cpp-codegen.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_OperationRe3648537128.h"
#include "mscorlib_System_String2029220233.h"

// System.Void WebRpcResponse::.ctor(ExitGames.Client.Photon.OperationResponse)
extern "C"  void WebRpcResponse__ctor_m3792427727 (WebRpcResponse_t2303421426 * __this, OperationResponse_t3648537128 * ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebRpcResponse::get_Name()
extern "C"  String_t* WebRpcResponse_get_Name_m3941051470 (WebRpcResponse_t2303421426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebRpcResponse::set_Name(System.String)
extern "C"  void WebRpcResponse_set_Name_m796339125 (WebRpcResponse_t2303421426 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebRpcResponse::get_ReturnCode()
extern "C"  int32_t WebRpcResponse_get_ReturnCode_m4188114077 (WebRpcResponse_t2303421426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebRpcResponse::set_ReturnCode(System.Int32)
extern "C"  void WebRpcResponse_set_ReturnCode_m2512738074 (WebRpcResponse_t2303421426 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebRpcResponse::get_DebugMessage()
extern "C"  String_t* WebRpcResponse_get_DebugMessage_m1686605019 (WebRpcResponse_t2303421426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebRpcResponse::set_DebugMessage(System.String)
extern "C"  void WebRpcResponse_set_DebugMessage_m2225270100 (WebRpcResponse_t2303421426 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> WebRpcResponse::get_Parameters()
extern "C"  Dictionary_2_t309261261 * WebRpcResponse_get_Parameters_m2674885332 (WebRpcResponse_t2303421426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebRpcResponse::set_Parameters(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void WebRpcResponse_set_Parameters_m863198317 (WebRpcResponse_t2303421426 * __this, Dictionary_2_t309261261 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebRpcResponse::ToStringFull()
extern "C"  String_t* WebRpcResponse_ToStringFull_m1896116073 (WebRpcResponse_t2303421426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
