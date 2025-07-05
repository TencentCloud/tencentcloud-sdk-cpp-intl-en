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

#include <tencentcloud/ciam/v20210420/model/ListUserGroupsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ciam::V20210420::Model;
using namespace std;

ListUserGroupsRequest::ListUserGroupsRequest() :
    m_userStoreIdHasBeenSet(false),
    m_pageHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_conditionHasBeenSet(false)
{
}

string ListUserGroupsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_userStoreIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserStoreId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userStoreId.c_str(), allocator).Move(), allocator);
    }

    if (m_pageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Page";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_page, allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_size, allocator);
    }

    if (m_conditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Condition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_condition.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ListUserGroupsRequest::GetUserStoreId() const
{
    return m_userStoreId;
}

void ListUserGroupsRequest::SetUserStoreId(const string& _userStoreId)
{
    m_userStoreId = _userStoreId;
    m_userStoreIdHasBeenSet = true;
}

bool ListUserGroupsRequest::UserStoreIdHasBeenSet() const
{
    return m_userStoreIdHasBeenSet;
}

int64_t ListUserGroupsRequest::GetPage() const
{
    return m_page;
}

void ListUserGroupsRequest::SetPage(const int64_t& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool ListUserGroupsRequest::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

int64_t ListUserGroupsRequest::GetSize() const
{
    return m_size;
}

void ListUserGroupsRequest::SetSize(const int64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool ListUserGroupsRequest::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

string ListUserGroupsRequest::GetCondition() const
{
    return m_condition;
}

void ListUserGroupsRequest::SetCondition(const string& _condition)
{
    m_condition = _condition;
    m_conditionHasBeenSet = true;
}

bool ListUserGroupsRequest::ConditionHasBeenSet() const
{
    return m_conditionHasBeenSet;
}


