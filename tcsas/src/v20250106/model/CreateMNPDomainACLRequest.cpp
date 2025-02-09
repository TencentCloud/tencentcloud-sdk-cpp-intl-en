/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#include <tencentcloud/tcsas/v20250106/model/CreateMNPDomainACLRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

CreateMNPDomainACLRequest::CreateMNPDomainACLRequest() :
    m_mNPIdHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_platformIdHasBeenSet(false)
{
}

string CreateMNPDomainACLRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_mNPIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mNPId.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_domain.begin(); itr != m_domain.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
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


string CreateMNPDomainACLRequest::GetMNPId() const
{
    return m_mNPId;
}

void CreateMNPDomainACLRequest::SetMNPId(const string& _mNPId)
{
    m_mNPId = _mNPId;
    m_mNPIdHasBeenSet = true;
}

bool CreateMNPDomainACLRequest::MNPIdHasBeenSet() const
{
    return m_mNPIdHasBeenSet;
}

vector<CreateDomainParam> CreateMNPDomainACLRequest::GetDomain() const
{
    return m_domain;
}

void CreateMNPDomainACLRequest::SetDomain(const vector<CreateDomainParam>& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool CreateMNPDomainACLRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string CreateMNPDomainACLRequest::GetPlatformId() const
{
    return m_platformId;
}

void CreateMNPDomainACLRequest::SetPlatformId(const string& _platformId)
{
    m_platformId = _platformId;
    m_platformIdHasBeenSet = true;
}

bool CreateMNPDomainACLRequest::PlatformIdHasBeenSet() const
{
    return m_platformIdHasBeenSet;
}


