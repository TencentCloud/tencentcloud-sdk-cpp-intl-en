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

#include <tencentcloud/tcsas/v20250106/model/DeleteTeamMemberRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

DeleteTeamMemberRequest::DeleteTeamMemberRequest() :
    m_teamIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_platformIdHasBeenSet(false)
{
}

string DeleteTeamMemberRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_teamIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TeamId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_teamId.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
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


string DeleteTeamMemberRequest::GetTeamId() const
{
    return m_teamId;
}

void DeleteTeamMemberRequest::SetTeamId(const string& _teamId)
{
    m_teamId = _teamId;
    m_teamIdHasBeenSet = true;
}

bool DeleteTeamMemberRequest::TeamIdHasBeenSet() const
{
    return m_teamIdHasBeenSet;
}

string DeleteTeamMemberRequest::GetUserId() const
{
    return m_userId;
}

void DeleteTeamMemberRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool DeleteTeamMemberRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string DeleteTeamMemberRequest::GetPlatformId() const
{
    return m_platformId;
}

void DeleteTeamMemberRequest::SetPlatformId(const string& _platformId)
{
    m_platformId = _platformId;
    m_platformIdHasBeenSet = true;
}

bool DeleteTeamMemberRequest::PlatformIdHasBeenSet() const
{
    return m_platformIdHasBeenSet;
}


