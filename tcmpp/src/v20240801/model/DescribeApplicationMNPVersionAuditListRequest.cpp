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

#include <tencentcloud/tcmpp/v20240801/model/DescribeApplicationMNPVersionAuditListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcmpp::V20240801::Model;
using namespace std;

DescribeApplicationMNPVersionAuditListRequest::DescribeApplicationMNPVersionAuditListRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_platformIdHasBeenSet(false),
    m_auditStatusListHasBeenSet(false),
    m_keywordHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_teamIdHasBeenSet(false)
{
}

string DescribeApplicationMNPVersionAuditListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_platformIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlatformId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platformId.c_str(), allocator).Move(), allocator);
    }

    if (m_auditStatusListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditStatusList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_auditStatusList.begin(); itr != m_auditStatusList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_teamIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TeamId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_teamId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeApplicationMNPVersionAuditListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeApplicationMNPVersionAuditListRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeApplicationMNPVersionAuditListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeApplicationMNPVersionAuditListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeApplicationMNPVersionAuditListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeApplicationMNPVersionAuditListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeApplicationMNPVersionAuditListRequest::GetPlatformId() const
{
    return m_platformId;
}

void DescribeApplicationMNPVersionAuditListRequest::SetPlatformId(const string& _platformId)
{
    m_platformId = _platformId;
    m_platformIdHasBeenSet = true;
}

bool DescribeApplicationMNPVersionAuditListRequest::PlatformIdHasBeenSet() const
{
    return m_platformIdHasBeenSet;
}

vector<int64_t> DescribeApplicationMNPVersionAuditListRequest::GetAuditStatusList() const
{
    return m_auditStatusList;
}

void DescribeApplicationMNPVersionAuditListRequest::SetAuditStatusList(const vector<int64_t>& _auditStatusList)
{
    m_auditStatusList = _auditStatusList;
    m_auditStatusListHasBeenSet = true;
}

bool DescribeApplicationMNPVersionAuditListRequest::AuditStatusListHasBeenSet() const
{
    return m_auditStatusListHasBeenSet;
}

string DescribeApplicationMNPVersionAuditListRequest::GetKeyword() const
{
    return m_keyword;
}

void DescribeApplicationMNPVersionAuditListRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool DescribeApplicationMNPVersionAuditListRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

string DescribeApplicationMNPVersionAuditListRequest::GetApplicationId() const
{
    return m_applicationId;
}

void DescribeApplicationMNPVersionAuditListRequest::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool DescribeApplicationMNPVersionAuditListRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string DescribeApplicationMNPVersionAuditListRequest::GetTeamId() const
{
    return m_teamId;
}

void DescribeApplicationMNPVersionAuditListRequest::SetTeamId(const string& _teamId)
{
    m_teamId = _teamId;
    m_teamIdHasBeenSet = true;
}

bool DescribeApplicationMNPVersionAuditListRequest::TeamIdHasBeenSet() const
{
    return m_teamIdHasBeenSet;
}


