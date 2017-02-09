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

// System.Net.Configuration.DefaultProxyHandler
struct DefaultProxyHandler_t3089782925;
// System.Object
struct Il2CppObject;
// System.Xml.XmlNode
struct XmlNode_t616554813;
// System.Net.WebProxy
struct WebProxy_t1169192840;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_Xml_System_Xml_XmlNode616554813.h"
#include "System_System_Net_WebProxy1169192840.h"

// System.Void System.Net.Configuration.DefaultProxyHandler::.ctor()
extern "C"  void DefaultProxyHandler__ctor_m817866805 (DefaultProxyHandler_t3089782925 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.Configuration.DefaultProxyHandler::Create(System.Object,System.Object,System.Xml.XmlNode)
extern "C"  Il2CppObject * DefaultProxyHandler_Create_m1217261893 (DefaultProxyHandler_t3089782925 * __this, Il2CppObject * ___parent0, Il2CppObject * ___configContext1, XmlNode_t616554813 * ___section2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.DefaultProxyHandler::FillByPassList(System.Xml.XmlNode,System.Net.WebProxy)
extern "C"  void DefaultProxyHandler_FillByPassList_m464077969 (Il2CppObject * __this /* static, unused */, XmlNode_t616554813 * ___node0, WebProxy_t1169192840 * ___proxy1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
