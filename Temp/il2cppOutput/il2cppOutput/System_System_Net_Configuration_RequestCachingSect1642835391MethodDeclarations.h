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

// System.Net.Configuration.RequestCachingSection
struct RequestCachingSection_t1642835391;
// System.Net.Configuration.FtpCachePolicyElement
struct FtpCachePolicyElement_t919314008;
// System.Net.Configuration.HttpCachePolicyElement
struct HttpCachePolicyElement_t129882946;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t3473514151;
// System.Xml.XmlReader
struct XmlReader_t3675626668;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Cache_RequestCacheLevel2979444753.h"
#include "mscorlib_System_TimeSpan3430258949.h"
#include "System_Xml_System_Xml_XmlReader3675626668.h"

// System.Void System.Net.Configuration.RequestCachingSection::.ctor()
extern "C"  void RequestCachingSection__ctor_m1032985743 (RequestCachingSection_t1642835391 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.RequestCachingSection::.cctor()
extern "C"  void RequestCachingSection__cctor_m1125821374 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Configuration.FtpCachePolicyElement System.Net.Configuration.RequestCachingSection::get_DefaultFtpCachePolicy()
extern "C"  FtpCachePolicyElement_t919314008 * RequestCachingSection_get_DefaultFtpCachePolicy_m979561288 (RequestCachingSection_t1642835391 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Configuration.HttpCachePolicyElement System.Net.Configuration.RequestCachingSection::get_DefaultHttpCachePolicy()
extern "C"  HttpCachePolicyElement_t129882946 * RequestCachingSection_get_DefaultHttpCachePolicy_m2314741362 (RequestCachingSection_t1642835391 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Cache.RequestCacheLevel System.Net.Configuration.RequestCachingSection::get_DefaultPolicyLevel()
extern "C"  int32_t RequestCachingSection_get_DefaultPolicyLevel_m1519980351 (RequestCachingSection_t1642835391 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.RequestCachingSection::set_DefaultPolicyLevel(System.Net.Cache.RequestCacheLevel)
extern "C"  void RequestCachingSection_set_DefaultPolicyLevel_m1498405344 (RequestCachingSection_t1642835391 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Configuration.RequestCachingSection::get_DisableAllCaching()
extern "C"  bool RequestCachingSection_get_DisableAllCaching_m4022062996 (RequestCachingSection_t1642835391 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.RequestCachingSection::set_DisableAllCaching(System.Boolean)
extern "C"  void RequestCachingSection_set_DisableAllCaching_m398189957 (RequestCachingSection_t1642835391 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Configuration.RequestCachingSection::get_IsPrivateCache()
extern "C"  bool RequestCachingSection_get_IsPrivateCache_m35778609 (RequestCachingSection_t1642835391 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.RequestCachingSection::set_IsPrivateCache(System.Boolean)
extern "C"  void RequestCachingSection_set_IsPrivateCache_m2125262632 (RequestCachingSection_t1642835391 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Net.Configuration.RequestCachingSection::get_UnspecifiedMaximumAge()
extern "C"  TimeSpan_t3430258949  RequestCachingSection_get_UnspecifiedMaximumAge_m2035571949 (RequestCachingSection_t1642835391 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.RequestCachingSection::set_UnspecifiedMaximumAge(System.TimeSpan)
extern "C"  void RequestCachingSection_set_UnspecifiedMaximumAge_m1083438796 (RequestCachingSection_t1642835391 * __this, TimeSpan_t3430258949  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.RequestCachingSection::get_Properties()
extern "C"  ConfigurationPropertyCollection_t3473514151 * RequestCachingSection_get_Properties_m850314794 (RequestCachingSection_t1642835391 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.RequestCachingSection::PostDeserialize()
extern "C"  void RequestCachingSection_PostDeserialize_m2488452934 (RequestCachingSection_t1642835391 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.RequestCachingSection::DeserializeElement(System.Xml.XmlReader,System.Boolean)
extern "C"  void RequestCachingSection_DeserializeElement_m3395805077 (RequestCachingSection_t1642835391 * __this, XmlReader_t3675626668 * ___reader0, bool ___serializeCollectionKey1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
