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

// System.Collections.Generic.Dictionary`2/Transform`1<ExitGames.Client.Photon.ConnectionProtocol,System.Object,System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>>
struct Transform_1_t179696435;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_906614654.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionP3211808698.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<ExitGames.Client.Photon.ConnectionProtocol,System.Object,System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m3998421008_gshared (Transform_1_t179696435 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m3998421008(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t179696435 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m3998421008_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<ExitGames.Client.Photon.ConnectionProtocol,System.Object,System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t906614654  Transform_1_Invoke_m5904144_gshared (Transform_1_t179696435 * __this, uint8_t ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m5904144(__this, ___key0, ___value1, method) ((  KeyValuePair_2_t906614654  (*) (Transform_1_t179696435 *, uint8_t, Il2CppObject *, const MethodInfo*))Transform_1_Invoke_m5904144_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<ExitGames.Client.Photon.ConnectionProtocol,System.Object,System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m168592827_gshared (Transform_1_t179696435 * __this, uint8_t ___key0, Il2CppObject * ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m168592827(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t179696435 *, uint8_t, Il2CppObject *, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m168592827_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<ExitGames.Client.Photon.ConnectionProtocol,System.Object,System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t906614654  Transform_1_EndInvoke_m3143212646_gshared (Transform_1_t179696435 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m3143212646(__this, ___result0, method) ((  KeyValuePair_2_t906614654  (*) (Transform_1_t179696435 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m3143212646_gshared)(__this, ___result0, method)
