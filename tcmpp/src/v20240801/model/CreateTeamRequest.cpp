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

#include <tencentcloud/tcmpp/v20240801/model/CreateTeamRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcmpp::V20240801::Model;
using namespace std;

CreateTeamRequest::CreateTeamRequest() :
    m_teamNameHasBeenSet(false),
    m_adminUserIdHasBeenSet(false),
    m_teamRoleTypeListHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_platformIdHasBeenSet(false),
    m_relatedTeamIdHasBeenSet(false)
{
}

string CreateTeamRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_teamNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TeamName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_teamName.c_str(), allocator).Move(), allocator);
    }

    if (m_adminUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminUserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_adminUserId.c_str(), allocator).Move(), allocator);
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

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_platformIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlatformId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platformId.c_str(), allocator).Move(), allocator);
    }

    if (m_relatedTeamIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelatedTeamId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_relatedTeamId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateTeamRequest::GetTeamName() const
{
    return m_teamName;
}

void CreateTeamRequest::SetTeamName(const string& _teamName)
{
    m_teamName = _teamName;
    m_teamNameHasBeenSet = true;
}

bool CreateTeamRequest::TeamNameHasBeenSet() const
{
    return m_teamNameHasBeenSet;
}

string CreateTeamRequest::GetAdminUserId() const
{
    return m_adminUserId;
}

void CreateTeamRequest::SetAdminUserId(const string& _adminUserId)
{
    m_adminUserId = _adminUserId;
    m_adminUserIdHasBeenSet = true;
}

bool CreateTeamRequest::AdminUserIdHasBeenSet() const
{
    return m_adminUserIdHasBeenSet;
}

vector<int64_t> CreateTeamRequest::GetTeamRoleTypeList() const
{
    return m_teamRoleTypeList;
}

void CreateTeamRequest::SetTeamRoleTypeList(const vector<int64_t>& _teamRoleTypeList)
{
    m_teamRoleTypeList = _teamRoleTypeList;
    m_teamRoleTypeListHasBeenSet = true;
}

bool CreateTeamRequest::TeamRoleTypeListHasBeenSet() const
{
    return m_teamRoleTypeListHasBeenSet;
}

string CreateTeamRequest::GetRemark() const
{
    return m_remark;
}

void CreateTeamRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateTeamRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string CreateTeamRequest::GetPlatformId() const
{
    return m_platformId;
}

void CreateTeamRequest::SetPlatformId(const string& _platformId)
{
    m_platformId = _platformId;
    m_platformIdHasBeenSet = true;
}

bool CreateTeamRequest::PlatformIdHasBeenSet() const
{
    return m_platformIdHasBeenSet;
}

string CreateTeamRequest::GetRelatedTeamId() const
{
    return m_relatedTeamId;
}

void CreateTeamRequest::SetRelatedTeamId(const string& _relatedTeamId)
{
    m_relatedTeamId = _relatedTeamId;
    m_relatedTeamIdHasBeenSet = true;
}

bool CreateTeamRequest::RelatedTeamIdHasBeenSet() const
{
    return m_relatedTeamIdHasBeenSet;
}


