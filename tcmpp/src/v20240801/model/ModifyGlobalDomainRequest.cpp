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

#include <tencentcloud/tcmpp/v20240801/model/ModifyGlobalDomainRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcmpp::V20240801::Model;
using namespace std;

ModifyGlobalDomainRequest::ModifyGlobalDomainRequest() :
    m_domainIdHasBeenSet(false),
    m_domainUrlHasBeenSet(false),
    m_platformIdHasBeenSet(false)
{
}

string ModifyGlobalDomainRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_domainId, allocator);
    }

    if (m_domainUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domainUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_platformIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlatformId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platformId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifyGlobalDomainRequest::GetDomainId() const
{
    return m_domainId;
}

void ModifyGlobalDomainRequest::SetDomainId(const int64_t& _domainId)
{
    m_domainId = _domainId;
    m_domainIdHasBeenSet = true;
}

bool ModifyGlobalDomainRequest::DomainIdHasBeenSet() const
{
    return m_domainIdHasBeenSet;
}

string ModifyGlobalDomainRequest::GetDomainUrl() const
{
    return m_domainUrl;
}

void ModifyGlobalDomainRequest::SetDomainUrl(const string& _domainUrl)
{
    m_domainUrl = _domainUrl;
    m_domainUrlHasBeenSet = true;
}

bool ModifyGlobalDomainRequest::DomainUrlHasBeenSet() const
{
    return m_domainUrlHasBeenSet;
}

string ModifyGlobalDomainRequest::GetPlatformId() const
{
    return m_platformId;
}

void ModifyGlobalDomainRequest::SetPlatformId(const string& _platformId)
{
    m_platformId = _platformId;
    m_platformIdHasBeenSet = true;
}

bool ModifyGlobalDomainRequest::PlatformIdHasBeenSet() const
{
    return m_platformIdHasBeenSet;
}


