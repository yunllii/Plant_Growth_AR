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

// System.Net.Configuration.ConnectionManagementData
struct ConnectionManagementData_t2657447783;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t909839986;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.Net.Configuration.ConnectionManagementData::.ctor(System.Object)
extern "C"  void ConnectionManagementData__ctor_m1289294485 (ConnectionManagementData_t2657447783 * __this, Il2CppObject * ___parent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.ConnectionManagementData::Add(System.String,System.String)
extern "C"  void ConnectionManagementData_Add_m3564237074 (ConnectionManagementData_t2657447783 * __this, String_t* ___address0, String_t* ___nconns1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.ConnectionManagementData::Add(System.String,System.Int32)
extern "C"  void ConnectionManagementData_Add_m4176616933 (ConnectionManagementData_t2657447783 * __this, String_t* ___address0, int32_t ___nconns1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.ConnectionManagementData::Remove(System.String)
extern "C"  void ConnectionManagementData_Remove_m1148122827 (ConnectionManagementData_t2657447783 * __this, String_t* ___address0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.ConnectionManagementData::Clear()
extern "C"  void ConnectionManagementData_Clear_m155691582 (ConnectionManagementData_t2657447783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Net.Configuration.ConnectionManagementData::GetMaxConnections(System.String)
extern "C"  uint32_t ConnectionManagementData_GetMaxConnections_m2603764981 (ConnectionManagementData_t2657447783 * __this, String_t* ___hostOrIP0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Net.Configuration.ConnectionManagementData::get_Data()
extern "C"  Hashtable_t909839986 * ConnectionManagementData_get_Data_m2443896325 (ConnectionManagementData_t2657447783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
