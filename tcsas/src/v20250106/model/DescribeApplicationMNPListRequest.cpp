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

#include <tencentcloud/tcsas/v20250106/model/DescribeApplicationMNPListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

DescribeApplicationMNPListRequest::DescribeApplicationMNPListRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_platformIdHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_onlineStatusHasBeenSet(false),
    m_engineTypeListHasBeenSet(false),
    m_subCategoryHasBeenSet(false),
    m_primaryCategoryHasBeenSet(false),
    m_keywordHasBeenSet(false)
{
}

string DescribeApplicationMNPListRequest::ToJsonString() const
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

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_onlineStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnlineStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_onlineStatus, allocator);
    }

    if (m_engineTypeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineTypeList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_engineTypeList.begin(); itr != m_engineTypeList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_subCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubCategory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subCategory.c_str(), allocator).Move(), allocator);
    }

    if (m_primaryCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrimaryCategory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_primaryCategory.c_str(), allocator).Move(), allocator);
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


int64_t DescribeApplicationMNPListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeApplicationMNPListRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeApplicationMNPListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeApplicationMNPListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeApplicationMNPListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeApplicationMNPListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeApplicationMNPListRequest::GetPlatformId() const
{
    return m_platformId;
}

void DescribeApplicationMNPListRequest::SetPlatformId(const string& _platformId)
{
    m_platformId = _platformId;
    m_platformIdHasBeenSet = true;
}

bool DescribeApplicationMNPListRequest::PlatformIdHasBeenSet() const
{
    return m_platformIdHasBeenSet;
}

string DescribeApplicationMNPListRequest::GetApplicationId() const
{
    return m_applicationId;
}

void DescribeApplicationMNPListRequest::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool DescribeApplicationMNPListRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

int64_t DescribeApplicationMNPListRequest::GetOnlineStatus() const
{
    return m_onlineStatus;
}

void DescribeApplicationMNPListRequest::SetOnlineStatus(const int64_t& _onlineStatus)
{
    m_onlineStatus = _onlineStatus;
    m_onlineStatusHasBeenSet = true;
}

bool DescribeApplicationMNPListRequest::OnlineStatusHasBeenSet() const
{
    return m_onlineStatusHasBeenSet;
}

vector<int64_t> DescribeApplicationMNPListRequest::GetEngineTypeList() const
{
    return m_engineTypeList;
}

void DescribeApplicationMNPListRequest::SetEngineTypeList(const vector<int64_t>& _engineTypeList)
{
    m_engineTypeList = _engineTypeList;
    m_engineTypeListHasBeenSet = true;
}

bool DescribeApplicationMNPListRequest::EngineTypeListHasBeenSet() const
{
    return m_engineTypeListHasBeenSet;
}

string DescribeApplicationMNPListRequest::GetSubCategory() const
{
    return m_subCategory;
}

void DescribeApplicationMNPListRequest::SetSubCategory(const string& _subCategory)
{
    m_subCategory = _subCategory;
    m_subCategoryHasBeenSet = true;
}

bool DescribeApplicationMNPListRequest::SubCategoryHasBeenSet() const
{
    return m_subCategoryHasBeenSet;
}

string DescribeApplicationMNPListRequest::GetPrimaryCategory() const
{
    return m_primaryCategory;
}

void DescribeApplicationMNPListRequest::SetPrimaryCategory(const string& _primaryCategory)
{
    m_primaryCategory = _primaryCategory;
    m_primaryCategoryHasBeenSet = true;
}

bool DescribeApplicationMNPListRequest::PrimaryCategoryHasBeenSet() const
{
    return m_primaryCategoryHasBeenSet;
}

string DescribeApplicationMNPListRequest::GetKeyword() const
{
    return m_keyword;
}

void DescribeApplicationMNPListRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool DescribeApplicationMNPListRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}


