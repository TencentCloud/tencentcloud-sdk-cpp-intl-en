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

#include <tencentcloud/tcmpp/v20240801/model/DescribeSimpleTeamListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcmpp::V20240801::Model;
using namespace std;

DescribeSimpleTeamListRequest::DescribeSimpleTeamListRequest() :
    m_platformIdHasBeenSet(false),
    m_teamRoleTypeListHasBeenSet(false)
{
}

string DescribeSimpleTeamListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_platformIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlatformId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platformId.c_str(), allocator).Move(), allocator);
    }

    if (m_teamRoleTypeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TeamRoleTypeList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_teamRoleTypeList.begin(); itr != m_teamRoleTypeList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeSimpleTeamListRequest::GetPlatformId() const
{
    return m_platformId;
}

void DescribeSimpleTeamListRequest::SetPlatformId(const string& _platformId)
{
    m_platformId = _platformId;
    m_platformIdHasBeenSet = true;
}

bool DescribeSimpleTeamListRequest::PlatformIdHasBeenSet() const
{
    return m_platformIdHasBeenSet;
}

vector<int64_t> DescribeSimpleTeamListRequest::GetTeamRoleTypeList() const
{
    return m_teamRoleTypeList;
}

void DescribeSimpleTeamListRequest::SetTeamRoleTypeList(const vector<int64_t>& _teamRoleTypeList)
{
    m_teamRoleTypeList = _teamRoleTypeList;
    m_teamRoleTypeListHasBeenSet = true;
}

bool DescribeSimpleTeamListRequest::TeamRoleTypeListHasBeenSet() const
{
    return m_teamRoleTypeListHasBeenSet;
}


