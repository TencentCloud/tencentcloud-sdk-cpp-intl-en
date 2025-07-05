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

#include <tencentcloud/tcmpp/v20240801/model/DescribeRoleDetailResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcmpp::V20240801::Model;
using namespace std;

DescribeRoleDetailResp::DescribeRoleDetailResp() :
    m_roleIdHasBeenSet(false),
    m_roleNameHasBeenSet(false),
    m_teamIdHasBeenSet(false),
    m_teamNameHasBeenSet(false),
    m_resourceIdsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeRoleDetailResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RoleId") && !value["RoleId"].IsNull())
    {
        if (!value["RoleId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeRoleDetailResp.RoleId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_roleId = value["RoleId"].GetInt64();
        m_roleIdHasBeenSet = true;
    }

    if (value.HasMember("RoleName") && !value["RoleName"].IsNull())
    {
        if (!value["RoleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeRoleDetailResp.RoleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleName = string(value["RoleName"].GetString());
        m_roleNameHasBeenSet = true;
    }

    if (value.HasMember("TeamId") && !value["TeamId"].IsNull())
    {
        if (!value["TeamId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeRoleDetailResp.TeamId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_teamId = string(value["TeamId"].GetString());
        m_teamIdHasBeenSet = true;
    }

    if (value.HasMember("TeamName") && !value["TeamName"].IsNull())
    {
        if (!value["TeamName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeRoleDetailResp.TeamName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_teamName = string(value["TeamName"].GetString());
        m_teamNameHasBeenSet = true;
    }

    if (value.HasMember("ResourceIds") && !value["ResourceIds"].IsNull())
    {
        if (!value["ResourceIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeRoleDetailResp.ResourceIds` is not array type"));

        const rapidjson::Value &tmpValue = value["ResourceIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_resourceIds.push_back((*itr).GetString());
        }
        m_resourceIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeRoleDetailResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_resourceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_resourceIds.begin(); itr != m_resourceIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


int64_t DescribeRoleDetailResp::GetRoleId() const
{
    return m_roleId;
}

void DescribeRoleDetailResp::SetRoleId(const int64_t& _roleId)
{
    m_roleId = _roleId;
    m_roleIdHasBeenSet = true;
}

bool DescribeRoleDetailResp::RoleIdHasBeenSet() const
{
    return m_roleIdHasBeenSet;
}

string DescribeRoleDetailResp::GetRoleName() const
{
    return m_roleName;
}

void DescribeRoleDetailResp::SetRoleName(const string& _roleName)
{
    m_roleName = _roleName;
    m_roleNameHasBeenSet = true;
}

bool DescribeRoleDetailResp::RoleNameHasBeenSet() const
{
    return m_roleNameHasBeenSet;
}

string DescribeRoleDetailResp::GetTeamId() const
{
    return m_teamId;
}

void DescribeRoleDetailResp::SetTeamId(const string& _teamId)
{
    m_teamId = _teamId;
    m_teamIdHasBeenSet = true;
}

bool DescribeRoleDetailResp::TeamIdHasBeenSet() const
{
    return m_teamIdHasBeenSet;
}

string DescribeRoleDetailResp::GetTeamName() const
{
    return m_teamName;
}

void DescribeRoleDetailResp::SetTeamName(const string& _teamName)
{
    m_teamName = _teamName;
    m_teamNameHasBeenSet = true;
}

bool DescribeRoleDetailResp::TeamNameHasBeenSet() const
{
    return m_teamNameHasBeenSet;
}

vector<string> DescribeRoleDetailResp::GetResourceIds() const
{
    return m_resourceIds;
}

void DescribeRoleDetailResp::SetResourceIds(const vector<string>& _resourceIds)
{
    m_resourceIds = _resourceIds;
    m_resourceIdsHasBeenSet = true;
}

bool DescribeRoleDetailResp::ResourceIdsHasBeenSet() const
{
    return m_resourceIdsHasBeenSet;
}

