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

#include <tencentcloud/tcmpp/v20240801/model/CreateGlobalDomainACLRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcmpp::V20240801::Model;
using namespace std;

CreateGlobalDomainACLRequest::CreateGlobalDomainACLRequest() :
    m_domainUrlListHasBeenSet(false),
    m_domainTypeHasBeenSet(false),
    m_platformIdHasBeenSet(false)
{
}

string CreateGlobalDomainACLRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainUrlListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainUrlList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_domainUrlList.begin(); itr != m_domainUrlList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_domainTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_domainType, allocator);
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


vector<string> CreateGlobalDomainACLRequest::GetDomainUrlList() const
{
    return m_domainUrlList;
}

void CreateGlobalDomainACLRequest::SetDomainUrlList(const vector<string>& _domainUrlList)
{
    m_domainUrlList = _domainUrlList;
    m_domainUrlListHasBeenSet = true;
}

bool CreateGlobalDomainACLRequest::DomainUrlListHasBeenSet() const
{
    return m_domainUrlListHasBeenSet;
}

int64_t CreateGlobalDomainACLRequest::GetDomainType() const
{
    return m_domainType;
}

void CreateGlobalDomainACLRequest::SetDomainType(const int64_t& _domainType)
{
    m_domainType = _domainType;
    m_domainTypeHasBeenSet = true;
}

bool CreateGlobalDomainACLRequest::DomainTypeHasBeenSet() const
{
    return m_domainTypeHasBeenSet;
}

string CreateGlobalDomainACLRequest::GetPlatformId() const
{
    return m_platformId;
}

void CreateGlobalDomainACLRequest::SetPlatformId(const string& _platformId)
{
    m_platformId = _platformId;
    m_platformIdHasBeenSet = true;
}

bool CreateGlobalDomainACLRequest::PlatformIdHasBeenSet() const
{
    return m_platformIdHasBeenSet;
}


