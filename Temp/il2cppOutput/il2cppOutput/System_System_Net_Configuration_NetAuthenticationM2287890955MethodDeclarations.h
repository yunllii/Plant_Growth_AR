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

// System.Net.Configuration.NetAuthenticationModuleHandler
struct NetAuthenticationModuleHandler_t2287890955;
// System.Object
struct Il2CppObject;
// System.Xml.XmlNode
struct XmlNode_t616554813;
// System.Net.IAuthenticationModule
struct IAuthenticationModule_t3093891015;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_Xml_System_Xml_XmlNode616554813.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.Net.Configuration.NetAuthenticationModuleHandler::.ctor()
extern "C"  void NetAuthenticationModuleHandler__ctor_m2052728483 (NetAuthenticationModuleHandler_t2287890955 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.Configuration.NetAuthenticationModuleHandler::Create(System.Object,System.Object,System.Xml.XmlNode)
extern "C"  Il2CppObject * NetAuthenticationModuleHandler_Create_m627765887 (NetAuthenticationModuleHandler_t2287890955 * __this, Il2CppObject * ___parent0, Il2CppObject * ___configContext1, XmlNode_t616554813 * ___section2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IAuthenticationModule System.Net.Configuration.NetAuthenticationModuleHandler::CreateInstance(System.String,System.Xml.XmlNode)
extern "C"  Il2CppObject * NetAuthenticationModuleHandler_CreateInstance_m2170969279 (Il2CppObject * __this /* static, unused */, String_t* ___typeName0, XmlNode_t616554813 * ___node1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
