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

#include <tencentcloud/tcsas/v20250106/model/DescribeRoleListData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

DescribeRoleListData::DescribeRoleListData() :
    m_roleIdHasBeenSet(false),
    m_roleNameHasBeenSet(false),
    m_teamNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_roleTypeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeRoleListData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RoleId") && !value["RoleId"].IsNull())
    {
        if (!value["RoleId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeRoleListData.RoleId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_roleId = value["RoleId"].GetInt64();
        m_roleIdHasBeenSet = true;
    }

    if (value.HasMember("RoleName") && !value["RoleName"].IsNull())
    {
        if (!value["RoleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeRoleListData.RoleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleName = string(value["RoleName"].GetString());
        m_roleNameHasBeenSet = true;
    }

    if (value.HasMember("TeamName") && !value["TeamName"].IsNull())
    {
        if (!value["TeamName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeRoleListData.TeamName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_teamName = string(value["TeamName"].GetString());
        m_teamNameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeRoleListData.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("RoleType") && !value["RoleType"].IsNull())
    {
        if (!value["RoleType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeRoleListData.RoleType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_roleType = value["RoleType"].GetInt64();
        m_roleTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeRoleListData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_roleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_roleId, allocator);
    }

    if (m_roleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleName.c_str(), allocator).Move(), allocator);
    }

    if (m_teamNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TeamName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_teamName.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_roleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_roleType, allocator);
    }

}


int64_t DescribeRoleListData::GetRoleId() const
{
    return m_roleId;
}

void DescribeRoleListData::SetRoleId(const int64_t& _roleId)
{
    m_roleId = _roleId;
    m_roleIdHasBeenSet = true;
}

bool DescribeRoleListData::RoleIdHasBeenSet() const
{
    return m_roleIdHasBeenSet;
}

string DescribeRoleListData::GetRoleName() const
{
    return m_roleName;
}

void DescribeRoleListData::SetRoleName(const string& _roleName)
{
    m_roleName = _roleName;
    m_roleNameHasBeenSet = true;
}

bool DescribeRoleListData::RoleNameHasBeenSet() const
{
    return m_roleNameHasBeenSet;
}

string DescribeRoleListData::GetTeamName() const
{
    return m_teamName;
}

void DescribeRoleListData::SetTeamName(const string& _teamName)
{
    m_teamName = _teamName;
    m_teamNameHasBeenSet = true;
}

bool DescribeRoleListData::TeamNameHasBeenSet() const
{
    return m_teamNameHasBeenSet;
}

string DescribeRoleListData::GetCreateTime() const
{
    return m_createTime;
}

void DescribeRoleListData::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DescribeRoleListData::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t DescribeRoleListData::GetRoleType() const
{
    return m_roleType;
}

void DescribeRoleListData::SetRoleType(const int64_t& _roleType)
{
    m_roleType = _roleType;
    m_roleTypeHasBeenSet = true;
}

bool DescribeRoleListData::RoleTypeHasBeenSet() const
{
    return m_roleTypeHasBeenSet;
}

