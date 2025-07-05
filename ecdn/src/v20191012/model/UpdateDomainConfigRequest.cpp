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

#include <tencentcloud/ecdn/v20191012/model/UpdateDomainConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ecdn::V20191012::Model;
using namespace std;

UpdateDomainConfigRequest::UpdateDomainConfigRequest() :
    m_domainHasBeenSet(false),
    m_originHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_ipFilterHasBeenSet(false),
    m_ipFreqLimitHasBeenSet(false),
    m_responseHeaderHasBeenSet(false),
    m_cacheKeyHasBeenSet(false),
    m_cacheHasBeenSet(false),
    m_httpsHasBeenSet(false),
    m_forceRedirectHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_webSocketHasBeenSet(false)
{
}

string UpdateDomainConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_originHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Origin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_origin.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_ipFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpFilter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ipFilter.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_ipFreqLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpFreqLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ipFreqLimit.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_responseHeaderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseHeader";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_responseHeader.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_cacheKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CacheKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cacheKey.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_cacheHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cache";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cache.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_httpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Https";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_https.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_forceRedirectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForceRedirect";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_forceRedirect.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
    }

    if (m_webSocketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebSocket";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_webSocket.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateDomainConfigRequest::GetDomain() const
{
    return m_domain;
}

void UpdateDomainConfigRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool UpdateDomainConfigRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

Origin UpdateDomainConfigRequest::GetOrigin() const
{
    return m_origin;
}

void UpdateDomainConfigRequest::SetOrigin(const Origin& _origin)
{
    m_origin = _origin;
    m_originHasBeenSet = true;
}

bool UpdateDomainConfigRequest::OriginHasBeenSet() const
{
    return m_originHasBeenSet;
}

int64_t UpdateDomainConfigRequest::GetProjectId() const
{
    return m_projectId;
}

void UpdateDomainConfigRequest::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool UpdateDomainConfigRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

IpFilter UpdateDomainConfigRequest::GetIpFilter() const
{
    return m_ipFilter;
}

void UpdateDomainConfigRequest::SetIpFilter(const IpFilter& _ipFilter)
{
    m_ipFilter = _ipFilter;
    m_ipFilterHasBeenSet = true;
}

bool UpdateDomainConfigRequest::IpFilterHasBeenSet() const
{
    return m_ipFilterHasBeenSet;
}

IpFreqLimit UpdateDomainConfigRequest::GetIpFreqLimit() const
{
    return m_ipFreqLimit;
}

void UpdateDomainConfigRequest::SetIpFreqLimit(const IpFreqLimit& _ipFreqLimit)
{
    m_ipFreqLimit = _ipFreqLimit;
    m_ipFreqLimitHasBeenSet = true;
}

bool UpdateDomainConfigRequest::IpFreqLimitHasBeenSet() const
{
    return m_ipFreqLimitHasBeenSet;
}

ResponseHeader UpdateDomainConfigRequest::GetResponseHeader() const
{
    return m_responseHeader;
}

void UpdateDomainConfigRequest::SetResponseHeader(const ResponseHeader& _responseHeader)
{
    m_responseHeader = _responseHeader;
    m_responseHeaderHasBeenSet = true;
}

bool UpdateDomainConfigRequest::ResponseHeaderHasBeenSet() const
{
    return m_responseHeaderHasBeenSet;
}

CacheKey UpdateDomainConfigRequest::GetCacheKey() const
{
    return m_cacheKey;
}

void UpdateDomainConfigRequest::SetCacheKey(const CacheKey& _cacheKey)
{
    m_cacheKey = _cacheKey;
    m_cacheKeyHasBeenSet = true;
}

bool UpdateDomainConfigRequest::CacheKeyHasBeenSet() const
{
    return m_cacheKeyHasBeenSet;
}

Cache UpdateDomainConfigRequest::GetCache() const
{
    return m_cache;
}

void UpdateDomainConfigRequest::SetCache(const Cache& _cache)
{
    m_cache = _cache;
    m_cacheHasBeenSet = true;
}

bool UpdateDomainConfigRequest::CacheHasBeenSet() const
{
    return m_cacheHasBeenSet;
}

Https UpdateDomainConfigRequest::GetHttps() const
{
    return m_https;
}

void UpdateDomainConfigRequest::SetHttps(const Https& _https)
{
    m_https = _https;
    m_httpsHasBeenSet = true;
}

bool UpdateDomainConfigRequest::HttpsHasBeenSet() const
{
    return m_httpsHasBeenSet;
}

ForceRedirect UpdateDomainConfigRequest::GetForceRedirect() const
{
    return m_forceRedirect;
}

void UpdateDomainConfigRequest::SetForceRedirect(const ForceRedirect& _forceRedirect)
{
    m_forceRedirect = _forceRedirect;
    m_forceRedirectHasBeenSet = true;
}

bool UpdateDomainConfigRequest::ForceRedirectHasBeenSet() const
{
    return m_forceRedirectHasBeenSet;
}

string UpdateDomainConfigRequest::GetArea() const
{
    return m_area;
}

void UpdateDomainConfigRequest::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool UpdateDomainConfigRequest::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

WebSocket UpdateDomainConfigRequest::GetWebSocket() const
{
    return m_webSocket;
}

void UpdateDomainConfigRequest::SetWebSocket(const WebSocket& _webSocket)
{
    m_webSocket = _webSocket;
    m_webSocketHasBeenSet = true;
}

bool UpdateDomainConfigRequest::WebSocketHasBeenSet() const
{
    return m_webSocketHasBeenSet;
}


