/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/vod/v20180717/model/CDNDomainConfigForUpdate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

CDNDomainConfigForUpdate::CDNDomainConfigForUpdate() :
    m_areaHasBeenSet(false),
    m_originHasBeenSet(false),
    m_ipFilterHasBeenSet(false),
    m_userAgentFilterHasBeenSet(false),
    m_followRedirectHasBeenSet(false),
    m_requestHeaderHasBeenSet(false),
    m_responseHeaderHasBeenSet(false),
    m_cacheHasBeenSet(false),
    m_httpsHasBeenSet(false),
    m_authenticationHasBeenSet(false),
    m_forceRedirectHasBeenSet(false),
    m_refererHasBeenSet(false),
    m_maxAgeHasBeenSet(false),
    m_ipv6AccessHasBeenSet(false),
    m_quicHasBeenSet(false),
    m_awsPrivateAccessHasBeenSet(false),
    m_ossPrivateAccessHasBeenSet(false),
    m_hwPrivateAccessHasBeenSet(false),
    m_othersPrivateAccessHasBeenSet(false)
{
}

CoreInternalOutcome CDNDomainConfigForUpdate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Area") && !value["Area"].IsNull())
    {
        if (!value["Area"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CDNDomainConfigForUpdate.Area` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_area = string(value["Area"].GetString());
        m_areaHasBeenSet = true;
    }

    if (value.HasMember("Origin") && !value["Origin"].IsNull())
    {
        if (!value["Origin"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CDNDomainConfigForUpdate.Origin` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_origin.Deserialize(value["Origin"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_originHasBeenSet = true;
    }

    if (value.HasMember("IpFilter") && !value["IpFilter"].IsNull())
    {
        if (!value["IpFilter"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CDNDomainConfigForUpdate.IpFilter` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ipFilter.Deserialize(value["IpFilter"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ipFilterHasBeenSet = true;
    }

    if (value.HasMember("UserAgentFilter") && !value["UserAgentFilter"].IsNull())
    {
        if (!value["UserAgentFilter"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CDNDomainConfigForUpdate.UserAgentFilter` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_userAgentFilter.Deserialize(value["UserAgentFilter"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_userAgentFilterHasBeenSet = true;
    }

    if (value.HasMember("FollowRedirect") && !value["FollowRedirect"].IsNull())
    {
        if (!value["FollowRedirect"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CDNDomainConfigForUpdate.FollowRedirect` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_followRedirect.Deserialize(value["FollowRedirect"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_followRedirectHasBeenSet = true;
    }

    if (value.HasMember("RequestHeader") && !value["RequestHeader"].IsNull())
    {
        if (!value["RequestHeader"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CDNDomainConfigForUpdate.RequestHeader` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_requestHeader.Deserialize(value["RequestHeader"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_requestHeaderHasBeenSet = true;
    }

    if (value.HasMember("ResponseHeader") && !value["ResponseHeader"].IsNull())
    {
        if (!value["ResponseHeader"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CDNDomainConfigForUpdate.ResponseHeader` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_responseHeader.Deserialize(value["ResponseHeader"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_responseHeaderHasBeenSet = true;
    }

    if (value.HasMember("Cache") && !value["Cache"].IsNull())
    {
        if (!value["Cache"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CDNDomainConfigForUpdate.Cache` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cache.Deserialize(value["Cache"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cacheHasBeenSet = true;
    }

    if (value.HasMember("Https") && !value["Https"].IsNull())
    {
        if (!value["Https"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CDNDomainConfigForUpdate.Https` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_https.Deserialize(value["Https"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_httpsHasBeenSet = true;
    }

    if (value.HasMember("Authentication") && !value["Authentication"].IsNull())
    {
        if (!value["Authentication"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CDNDomainConfigForUpdate.Authentication` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_authentication.Deserialize(value["Authentication"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_authenticationHasBeenSet = true;
    }

    if (value.HasMember("ForceRedirect") && !value["ForceRedirect"].IsNull())
    {
        if (!value["ForceRedirect"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CDNDomainConfigForUpdate.ForceRedirect` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_forceRedirect.Deserialize(value["ForceRedirect"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_forceRedirectHasBeenSet = true;
    }

    if (value.HasMember("Referer") && !value["Referer"].IsNull())
    {
        if (!value["Referer"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CDNDomainConfigForUpdate.Referer` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_referer.Deserialize(value["Referer"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_refererHasBeenSet = true;
    }

    if (value.HasMember("MaxAge") && !value["MaxAge"].IsNull())
    {
        if (!value["MaxAge"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CDNDomainConfigForUpdate.MaxAge` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_maxAge.Deserialize(value["MaxAge"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_maxAgeHasBeenSet = true;
    }

    if (value.HasMember("Ipv6Access") && !value["Ipv6Access"].IsNull())
    {
        if (!value["Ipv6Access"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CDNDomainConfigForUpdate.Ipv6Access` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ipv6Access.Deserialize(value["Ipv6Access"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ipv6AccessHasBeenSet = true;
    }

    if (value.HasMember("Quic") && !value["Quic"].IsNull())
    {
        if (!value["Quic"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CDNDomainConfigForUpdate.Quic` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_quic.Deserialize(value["Quic"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_quicHasBeenSet = true;
    }

    if (value.HasMember("AwsPrivateAccess") && !value["AwsPrivateAccess"].IsNull())
    {
        if (!value["AwsPrivateAccess"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CDNDomainConfigForUpdate.AwsPrivateAccess` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_awsPrivateAccess.Deserialize(value["AwsPrivateAccess"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_awsPrivateAccessHasBeenSet = true;
    }

    if (value.HasMember("OssPrivateAccess") && !value["OssPrivateAccess"].IsNull())
    {
        if (!value["OssPrivateAccess"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CDNDomainConfigForUpdate.OssPrivateAccess` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ossPrivateAccess.Deserialize(value["OssPrivateAccess"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ossPrivateAccessHasBeenSet = true;
    }

    if (value.HasMember("HwPrivateAccess") && !value["HwPrivateAccess"].IsNull())
    {
        if (!value["HwPrivateAccess"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CDNDomainConfigForUpdate.HwPrivateAccess` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_hwPrivateAccess.Deserialize(value["HwPrivateAccess"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_hwPrivateAccessHasBeenSet = true;
    }

    if (value.HasMember("OthersPrivateAccess") && !value["OthersPrivateAccess"].IsNull())
    {
        if (!value["OthersPrivateAccess"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CDNDomainConfigForUpdate.OthersPrivateAccess` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_othersPrivateAccess.Deserialize(value["OthersPrivateAccess"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_othersPrivateAccessHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CDNDomainConfigForUpdate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
    }

    if (m_originHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Origin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_origin.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ipFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpFilter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ipFilter.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_userAgentFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserAgentFilter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_userAgentFilter.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_followRedirectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FollowRedirect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_followRedirect.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_requestHeaderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestHeader";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_requestHeader.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_responseHeaderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseHeader";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_responseHeader.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cacheHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cache";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cache.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_httpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Https";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_https.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_authenticationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Authentication";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_authentication.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_forceRedirectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForceRedirect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_forceRedirect.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_refererHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Referer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_referer.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_maxAgeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxAge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_maxAge.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ipv6AccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ipv6Access";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ipv6Access.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_quicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_quic.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_awsPrivateAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AwsPrivateAccess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_awsPrivateAccess.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ossPrivateAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OssPrivateAccess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ossPrivateAccess.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_hwPrivateAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HwPrivateAccess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hwPrivateAccess.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_othersPrivateAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OthersPrivateAccess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_othersPrivateAccess.ToJsonObject(value[key.c_str()], allocator);
    }

}


string CDNDomainConfigForUpdate::GetArea() const
{
    return m_area;
}

void CDNDomainConfigForUpdate::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool CDNDomainConfigForUpdate::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

Origin CDNDomainConfigForUpdate::GetOrigin() const
{
    return m_origin;
}

void CDNDomainConfigForUpdate::SetOrigin(const Origin& _origin)
{
    m_origin = _origin;
    m_originHasBeenSet = true;
}

bool CDNDomainConfigForUpdate::OriginHasBeenSet() const
{
    return m_originHasBeenSet;
}

IpFilter CDNDomainConfigForUpdate::GetIpFilter() const
{
    return m_ipFilter;
}

void CDNDomainConfigForUpdate::SetIpFilter(const IpFilter& _ipFilter)
{
    m_ipFilter = _ipFilter;
    m_ipFilterHasBeenSet = true;
}

bool CDNDomainConfigForUpdate::IpFilterHasBeenSet() const
{
    return m_ipFilterHasBeenSet;
}

UserAgentFilter CDNDomainConfigForUpdate::GetUserAgentFilter() const
{
    return m_userAgentFilter;
}

void CDNDomainConfigForUpdate::SetUserAgentFilter(const UserAgentFilter& _userAgentFilter)
{
    m_userAgentFilter = _userAgentFilter;
    m_userAgentFilterHasBeenSet = true;
}

bool CDNDomainConfigForUpdate::UserAgentFilterHasBeenSet() const
{
    return m_userAgentFilterHasBeenSet;
}

FollowRedirect CDNDomainConfigForUpdate::GetFollowRedirect() const
{
    return m_followRedirect;
}

void CDNDomainConfigForUpdate::SetFollowRedirect(const FollowRedirect& _followRedirect)
{
    m_followRedirect = _followRedirect;
    m_followRedirectHasBeenSet = true;
}

bool CDNDomainConfigForUpdate::FollowRedirectHasBeenSet() const
{
    return m_followRedirectHasBeenSet;
}

RequestHeader CDNDomainConfigForUpdate::GetRequestHeader() const
{
    return m_requestHeader;
}

void CDNDomainConfigForUpdate::SetRequestHeader(const RequestHeader& _requestHeader)
{
    m_requestHeader = _requestHeader;
    m_requestHeaderHasBeenSet = true;
}

bool CDNDomainConfigForUpdate::RequestHeaderHasBeenSet() const
{
    return m_requestHeaderHasBeenSet;
}

ResponseHeader CDNDomainConfigForUpdate::GetResponseHeader() const
{
    return m_responseHeader;
}

void CDNDomainConfigForUpdate::SetResponseHeader(const ResponseHeader& _responseHeader)
{
    m_responseHeader = _responseHeader;
    m_responseHeaderHasBeenSet = true;
}

bool CDNDomainConfigForUpdate::ResponseHeaderHasBeenSet() const
{
    return m_responseHeaderHasBeenSet;
}

Cache CDNDomainConfigForUpdate::GetCache() const
{
    return m_cache;
}

void CDNDomainConfigForUpdate::SetCache(const Cache& _cache)
{
    m_cache = _cache;
    m_cacheHasBeenSet = true;
}

bool CDNDomainConfigForUpdate::CacheHasBeenSet() const
{
    return m_cacheHasBeenSet;
}

Https CDNDomainConfigForUpdate::GetHttps() const
{
    return m_https;
}

void CDNDomainConfigForUpdate::SetHttps(const Https& _https)
{
    m_https = _https;
    m_httpsHasBeenSet = true;
}

bool CDNDomainConfigForUpdate::HttpsHasBeenSet() const
{
    return m_httpsHasBeenSet;
}

Authentication CDNDomainConfigForUpdate::GetAuthentication() const
{
    return m_authentication;
}

void CDNDomainConfigForUpdate::SetAuthentication(const Authentication& _authentication)
{
    m_authentication = _authentication;
    m_authenticationHasBeenSet = true;
}

bool CDNDomainConfigForUpdate::AuthenticationHasBeenSet() const
{
    return m_authenticationHasBeenSet;
}

ForceRedirect CDNDomainConfigForUpdate::GetForceRedirect() const
{
    return m_forceRedirect;
}

void CDNDomainConfigForUpdate::SetForceRedirect(const ForceRedirect& _forceRedirect)
{
    m_forceRedirect = _forceRedirect;
    m_forceRedirectHasBeenSet = true;
}

bool CDNDomainConfigForUpdate::ForceRedirectHasBeenSet() const
{
    return m_forceRedirectHasBeenSet;
}

Referer CDNDomainConfigForUpdate::GetReferer() const
{
    return m_referer;
}

void CDNDomainConfigForUpdate::SetReferer(const Referer& _referer)
{
    m_referer = _referer;
    m_refererHasBeenSet = true;
}

bool CDNDomainConfigForUpdate::RefererHasBeenSet() const
{
    return m_refererHasBeenSet;
}

MaxAge CDNDomainConfigForUpdate::GetMaxAge() const
{
    return m_maxAge;
}

void CDNDomainConfigForUpdate::SetMaxAge(const MaxAge& _maxAge)
{
    m_maxAge = _maxAge;
    m_maxAgeHasBeenSet = true;
}

bool CDNDomainConfigForUpdate::MaxAgeHasBeenSet() const
{
    return m_maxAgeHasBeenSet;
}

Ipv6Access CDNDomainConfigForUpdate::GetIpv6Access() const
{
    return m_ipv6Access;
}

void CDNDomainConfigForUpdate::SetIpv6Access(const Ipv6Access& _ipv6Access)
{
    m_ipv6Access = _ipv6Access;
    m_ipv6AccessHasBeenSet = true;
}

bool CDNDomainConfigForUpdate::Ipv6AccessHasBeenSet() const
{
    return m_ipv6AccessHasBeenSet;
}

Quic CDNDomainConfigForUpdate::GetQuic() const
{
    return m_quic;
}

void CDNDomainConfigForUpdate::SetQuic(const Quic& _quic)
{
    m_quic = _quic;
    m_quicHasBeenSet = true;
}

bool CDNDomainConfigForUpdate::QuicHasBeenSet() const
{
    return m_quicHasBeenSet;
}

AwsPrivateAccess CDNDomainConfigForUpdate::GetAwsPrivateAccess() const
{
    return m_awsPrivateAccess;
}

void CDNDomainConfigForUpdate::SetAwsPrivateAccess(const AwsPrivateAccess& _awsPrivateAccess)
{
    m_awsPrivateAccess = _awsPrivateAccess;
    m_awsPrivateAccessHasBeenSet = true;
}

bool CDNDomainConfigForUpdate::AwsPrivateAccessHasBeenSet() const
{
    return m_awsPrivateAccessHasBeenSet;
}

OssPrivateAccess CDNDomainConfigForUpdate::GetOssPrivateAccess() const
{
    return m_ossPrivateAccess;
}

void CDNDomainConfigForUpdate::SetOssPrivateAccess(const OssPrivateAccess& _ossPrivateAccess)
{
    m_ossPrivateAccess = _ossPrivateAccess;
    m_ossPrivateAccessHasBeenSet = true;
}

bool CDNDomainConfigForUpdate::OssPrivateAccessHasBeenSet() const
{
    return m_ossPrivateAccessHasBeenSet;
}

HwPrivateAccess CDNDomainConfigForUpdate::GetHwPrivateAccess() const
{
    return m_hwPrivateAccess;
}

void CDNDomainConfigForUpdate::SetHwPrivateAccess(const HwPrivateAccess& _hwPrivateAccess)
{
    m_hwPrivateAccess = _hwPrivateAccess;
    m_hwPrivateAccessHasBeenSet = true;
}

bool CDNDomainConfigForUpdate::HwPrivateAccessHasBeenSet() const
{
    return m_hwPrivateAccessHasBeenSet;
}

OthersPrivateAccess CDNDomainConfigForUpdate::GetOthersPrivateAccess() const
{
    return m_othersPrivateAccess;
}

void CDNDomainConfigForUpdate::SetOthersPrivateAccess(const OthersPrivateAccess& _othersPrivateAccess)
{
    m_othersPrivateAccess = _othersPrivateAccess;
    m_othersPrivateAccessHasBeenSet = true;
}

bool CDNDomainConfigForUpdate::OthersPrivateAccessHasBeenSet() const
{
    return m_othersPrivateAccessHasBeenSet;
}

