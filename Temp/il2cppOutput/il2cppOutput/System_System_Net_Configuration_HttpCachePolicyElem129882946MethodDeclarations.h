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

// System.Net.Configuration.HttpCachePolicyElement
struct HttpCachePolicyElement_t129882946;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t3473514151;
// System.Xml.XmlReader
struct XmlReader_t3675626668;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t1776195828;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan3430258949.h"
#include "System_System_Net_Cache_HttpRequestCacheLevel1019742321.h"
#include "System_Xml_System_Xml_XmlReader3675626668.h"
#include "System_Configuration_System_Configuration_Configur1776195828.h"

// System.Void System.Net.Configuration.HttpCachePolicyElement::.ctor()
extern "C"  void HttpCachePolicyElement__ctor_m1124763002 (HttpCachePolicyElement_t129882946 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.HttpCachePolicyElement::.cctor()
extern "C"  void HttpCachePolicyElement__cctor_m3370385835 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Net.Configuration.HttpCachePolicyElement::get_MaximumAge()
extern "C"  TimeSpan_t3430258949  HttpCachePolicyElement_get_MaximumAge_m527036391 (HttpCachePolicyElement_t129882946 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.HttpCachePolicyElement::set_MaximumAge(System.TimeSpan)
extern "C"  void HttpCachePolicyElement_set_MaximumAge_m4047825318 (HttpCachePolicyElement_t129882946 * __this, TimeSpan_t3430258949  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Net.Configuration.HttpCachePolicyElement::get_MaximumStale()
extern "C"  TimeSpan_t3430258949  HttpCachePolicyElement_get_MaximumStale_m928189135 (HttpCachePolicyElement_t129882946 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.HttpCachePolicyElement::set_MaximumStale(System.TimeSpan)
extern "C"  void HttpCachePolicyElement_set_MaximumStale_m3598702016 (HttpCachePolicyElement_t129882946 * __this, TimeSpan_t3430258949  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Net.Configuration.HttpCachePolicyElement::get_MinimumFresh()
extern "C"  TimeSpan_t3430258949  HttpCachePolicyElement_get_MinimumFresh_m192379646 (HttpCachePolicyElement_t129882946 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.HttpCachePolicyElement::set_MinimumFresh(System.TimeSpan)
extern "C"  void HttpCachePolicyElement_set_MinimumFresh_m3501252851 (HttpCachePolicyElement_t129882946 * __this, TimeSpan_t3430258949  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Cache.HttpRequestCacheLevel System.Net.Configuration.HttpCachePolicyElement::get_PolicyLevel()
extern "C"  int32_t HttpCachePolicyElement_get_PolicyLevel_m2295787175 (HttpCachePolicyElement_t129882946 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.HttpCachePolicyElement::set_PolicyLevel(System.Net.Cache.HttpRequestCacheLevel)
extern "C"  void HttpCachePolicyElement_set_PolicyLevel_m2794266068 (HttpCachePolicyElement_t129882946 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.HttpCachePolicyElement::get_Properties()
extern "C"  ConfigurationPropertyCollection_t3473514151 * HttpCachePolicyElement_get_Properties_m2004762551 (HttpCachePolicyElement_t129882946 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.HttpCachePolicyElement::DeserializeElement(System.Xml.XmlReader,System.Boolean)
extern "C"  void HttpCachePolicyElement_DeserializeElement_m1015240658 (HttpCachePolicyElement_t129882946 * __this, XmlReader_t3675626668 * ___reader0, bool ___serializeCollectionKey1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.HttpCachePolicyElement::Reset(System.Configuration.ConfigurationElement)
extern "C"  void HttpCachePolicyElement_Reset_m1601856924 (HttpCachePolicyElement_t129882946 * __this, ConfigurationElement_t1776195828 * ___parentElement0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
