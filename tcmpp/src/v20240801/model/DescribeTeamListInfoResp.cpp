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

#include <tencentcloud/tcmpp/v20240801/model/DescribeTeamListInfoResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcmpp::V20240801::Model;
using namespace std;

DescribeTeamListInfoResp::DescribeTeamListInfoResp() :
    m_teamIdHasBeenSet(false),
    m_teamNameHasBeenSet(false),
    m_adminUserIdHasBeenSet(false),
    m_adminUserAccountHasBeenSet(false),
    m_adminUserNameHasBeenSet(false),
    m_memberCountHasBeenSet(false),
    m_registerLinkHasBeenSet(false),
    m_teamRoleTypeListHasBeenSet(false),
    m_relatedTeamIdHasBeenSet(false)
{
}

CoreInternalOutcome DescribeTeamListInfoResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TeamId") && !value["TeamId"].IsNull())
    {
        if (!value["TeamId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeTeamListInfoResp.TeamId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_teamId = string(value["TeamId"].GetString());
        m_teamIdHasBeenSet = true;
    }

    if (value.HasMember("TeamName") && !value["TeamName"].IsNull())
    {
        if (!value["TeamName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeTeamListInfoResp.TeamName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_teamName = string(value["TeamName"].GetString());
        m_teamNameHasBeenSet = true;
    }

    if (value.HasMember("AdminUserId") && !value["AdminUserId"].IsNull())
    {
        if (!value["AdminUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeTeamListInfoResp.AdminUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_adminUserId = string(value["AdminUserId"].GetString());
        m_adminUserIdHasBeenSet = true;
    }

    if (value.HasMember("AdminUserAccount") && !value["AdminUserAccount"].IsNull())
    {
        if (!value["AdminUserAccount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeTeamListInfoResp.AdminUserAccount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_adminUserAccount = string(value["AdminUserAccount"].GetString());
        m_adminUserAccountHasBeenSet = true;
    }

    if (value.HasMember("AdminUserName") && !value["AdminUserName"].IsNull())
    {
        if (!value["AdminUserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeTeamListInfoResp.AdminUserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_adminUserName = string(value["AdminUserName"].GetString());
        m_adminUserNameHasBeenSet = true;
    }

    if (value.HasMember("MemberCount") && !value["MemberCount"].IsNull())
    {
        if (!value["MemberCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeTeamListInfoResp.MemberCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memberCount = value["MemberCount"].GetInt64();
        m_memberCountHasBeenSet = true;
    }

    if (value.HasMember("RegisterLink") && !value["RegisterLink"].IsNull())
    {
        if (!value["RegisterLink"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeTeamListInfoResp.RegisterLink` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registerLink = string(value["RegisterLink"].GetString());
        m_registerLinkHasBeenSet = true;
    }

    if (value.HasMember("TeamRoleTypeList") && !value["TeamRoleTypeList"].IsNull())
    {
        if (!value["TeamRoleTypeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeTeamListInfoResp.TeamRoleTypeList` is not array type"));

        const rapidjson::Value &tmpValue = value["TeamRoleTypeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_teamRoleTypeList.push_back((*itr).GetInt64());
        }
        m_teamRoleTypeListHasBeenSet = true;
    }

    if (value.HasMember("RelatedTeamId") && !value["RelatedTeamId"].IsNull())
    {
        if (!value["RelatedTeamId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeTeamListInfoResp.RelatedTeamId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_relatedTeamId = value["RelatedTeamId"].GetInt64();
        m_relatedTeamIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeTeamListInfoResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_teamIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TeamId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_teamId.c_str(), allocator).Move(), allocator);
    }

    if (m_teamNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TeamName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_teamName.c_str(), allocator).Move(), allocator);
    }

    if (m_adminUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_adminUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_adminUserAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminUserAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_adminUserAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_adminUserNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminUserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_adminUserName.c_str(), allocator).Move(), allocator);
    }

    if (m_memberCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memberCount, allocator);
    }

    if (m_registerLinkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegisterLink";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registerLink.c_str(), allocator).Move(), allocator);
    }

    if (m_teamRoleTypeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TeamRoleTypeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_teamRoleTypeList.begin(); itr != m_teamRoleTypeList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_relatedTeamIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelatedTeamId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_relatedTeamId, allocator);
    }

}


string DescribeTeamListInfoResp::GetTeamId() const
{
    return m_teamId;
}

void DescribeTeamListInfoResp::SetTeamId(const string& _teamId)
{
    m_teamId = _teamId;
    m_teamIdHasBeenSet = true;
}

bool DescribeTeamListInfoResp::TeamIdHasBeenSet() const
{
    return m_teamIdHasBeenSet;
}

string DescribeTeamListInfoResp::GetTeamName() const
{
    return m_teamName;
}

void DescribeTeamListInfoResp::SetTeamName(const string& _teamName)
{
    m_teamName = _teamName;
    m_teamNameHasBeenSet = true;
}

bool DescribeTeamListInfoResp::TeamNameHasBeenSet() const
{
    return m_teamNameHasBeenSet;
}

string DescribeTeamListInfoResp::GetAdminUserId() const
{
    return m_adminUserId;
}

void DescribeTeamListInfoResp::SetAdminUserId(const string& _adminUserId)
{
    m_adminUserId = _adminUserId;
    m_adminUserIdHasBeenSet = true;
}

bool DescribeTeamListInfoResp::AdminUserIdHasBeenSet() const
{
    return m_adminUserIdHasBeenSet;
}

string DescribeTeamListInfoResp::GetAdminUserAccount() const
{
    return m_adminUserAccount;
}

void DescribeTeamListInfoResp::SetAdminUserAccount(const string& _adminUserAccount)
{
    m_adminUserAccount = _adminUserAccount;
    m_adminUserAccountHasBeenSet = true;
}

bool DescribeTeamListInfoResp::AdminUserAccountHasBeenSet() const
{
    return m_adminUserAccountHasBeenSet;
}

string DescribeTeamListInfoResp::GetAdminUserName() const
{
    return m_adminUserName;
}

void DescribeTeamListInfoResp::SetAdminUserName(const string& _adminUserName)
{
    m_adminUserName = _adminUserName;
    m_adminUserNameHasBeenSet = true;
}

bool DescribeTeamListInfoResp::AdminUserNameHasBeenSet() const
{
    return m_adminUserNameHasBeenSet;
}

int64_t DescribeTeamListInfoResp::GetMemberCount() const
{
    return m_memberCount;
}

void DescribeTeamListInfoResp::SetMemberCount(const int64_t& _memberCount)
{
    m_memberCount = _memberCount;
    m_memberCountHasBeenSet = true;
}

bool DescribeTeamListInfoResp::MemberCountHasBeenSet() const
{
    return m_memberCountHasBeenSet;
}

string DescribeTeamListInfoResp::GetRegisterLink() const
{
    return m_registerLink;
}

void DescribeTeamListInfoResp::SetRegisterLink(const string& _registerLink)
{
    m_registerLink = _registerLink;
    m_registerLinkHasBeenSet = true;
}

bool DescribeTeamListInfoResp::RegisterLinkHasBeenSet() const
{
    return m_registerLinkHasBeenSet;
}

vector<int64_t> DescribeTeamListInfoResp::GetTeamRoleTypeList() const
{
    return m_teamRoleTypeList;
}

void DescribeTeamListInfoResp::SetTeamRoleTypeList(const vector<int64_t>& _teamRoleTypeList)
{
    m_teamRoleTypeList = _teamRoleTypeList;
    m_teamRoleTypeListHasBeenSet = true;
}

bool DescribeTeamListInfoResp::TeamRoleTypeListHasBeenSet() const
{
    return m_teamRoleTypeListHasBeenSet;
}

int64_t DescribeTeamListInfoResp::GetRelatedTeamId() const
{
    return m_relatedTeamId;
}

void DescribeTeamListInfoResp::SetRelatedTeamId(const int64_t& _relatedTeamId)
{
    m_relatedTeamId = _relatedTeamId;
    m_relatedTeamIdHasBeenSet = true;
}

bool DescribeTeamListInfoResp::RelatedTeamIdHasBeenSet() const
{
    return m_relatedTeamIdHasBeenSet;
}

