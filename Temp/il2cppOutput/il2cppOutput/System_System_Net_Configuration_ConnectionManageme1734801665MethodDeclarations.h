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

// System.Net.Configuration.ConnectionManagementElement
struct ConnectionManagementElement_t1734801665;
// System.String
struct String_t;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t3473514151;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.Net.Configuration.ConnectionManagementElement::.ctor()
extern "C"  void ConnectionManagementElement__ctor_m3149898649 (ConnectionManagementElement_t1734801665 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.ConnectionManagementElement::.ctor(System.String,System.Int32)
extern "C"  void ConnectionManagementElement__ctor_m2963702742 (ConnectionManagementElement_t1734801665 * __this, String_t* ___address0, int32_t ___maxConnection1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.ConnectionManagementElement::.cctor()
extern "C"  void ConnectionManagementElement__cctor_m1268714222 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Configuration.ConnectionManagementElement::get_Address()
extern "C"  String_t* ConnectionManagementElement_get_Address_m1023933839 (ConnectionManagementElement_t1734801665 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.ConnectionManagementElement::set_Address(System.String)
extern "C"  void ConnectionManagementElement_set_Address_m3144272186 (ConnectionManagementElement_t1734801665 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Configuration.ConnectionManagementElement::get_MaxConnection()
extern "C"  int32_t ConnectionManagementElement_get_MaxConnection_m2805449122 (ConnectionManagementElement_t1734801665 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.ConnectionManagementElement::set_MaxConnection(System.Int32)
extern "C"  void ConnectionManagementElement_set_MaxConnection_m4147725863 (ConnectionManagementElement_t1734801665 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ConnectionManagementElement::get_Properties()
extern "C"  ConfigurationPropertyCollection_t3473514151 * ConnectionManagementElement_get_Properties_m1679342970 (ConnectionManagementElement_t1734801665 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
