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

#include <tencentcloud/tcsas/v20250106/model/DescribeMNPSensitiveAPIPermissionApprovalListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

DescribeMNPSensitiveAPIPermissionApprovalListRequest::DescribeMNPSensitiveAPIPermissionApprovalListRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_platformIdHasBeenSet(false),
    m_approvalStatusListHasBeenSet(false),
    m_keywordHasBeenSet(false)
{
}

string DescribeMNPSensitiveAPIPermissionApprovalListRequest::ToJsonString() const
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

    if (m_approvalStatusListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApprovalStatusList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_approvalStatusList.begin(); itr != m_approvalStatusList.end(); ++itr)
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeMNPSensitiveAPIPermissionApprovalListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeMNPSensitiveAPIPermissionApprovalListRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeMNPSensitiveAPIPermissionApprovalListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeMNPSensitiveAPIPermissionApprovalListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeMNPSensitiveAPIPermissionApprovalListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeMNPSensitiveAPIPermissionApprovalListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeMNPSensitiveAPIPermissionApprovalListRequest::GetPlatformId() const
{
    return m_platformId;
}

void DescribeMNPSensitiveAPIPermissionApprovalListRequest::SetPlatformId(const string& _platformId)
{
    m_platformId = _platformId;
    m_platformIdHasBeenSet = true;
}

bool DescribeMNPSensitiveAPIPermissionApprovalListRequest::PlatformIdHasBeenSet() const
{
    return m_platformIdHasBeenSet;
}

vector<int64_t> DescribeMNPSensitiveAPIPermissionApprovalListRequest::GetApprovalStatusList() const
{
    return m_approvalStatusList;
}

void DescribeMNPSensitiveAPIPermissionApprovalListRequest::SetApprovalStatusList(const vector<int64_t>& _approvalStatusList)
{
    m_approvalStatusList = _approvalStatusList;
    m_approvalStatusListHasBeenSet = true;
}

bool DescribeMNPSensitiveAPIPermissionApprovalListRequest::ApprovalStatusListHasBeenSet() const
{
    return m_approvalStatusListHasBeenSet;
}

string DescribeMNPSensitiveAPIPermissionApprovalListRequest::GetKeyword() const
{
    return m_keyword;
}

void DescribeMNPSensitiveAPIPermissionApprovalListRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool DescribeMNPSensitiveAPIPermissionApprovalListRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}


