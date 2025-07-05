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

#include <tencentcloud/tcmpp/v20240801/model/DescribeDomainTeamListInfoResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcmpp::V20240801::Model;
using namespace std;

DescribeDomainTeamListInfoResp::DescribeDomainTeamListInfoResp() :
    m_teamIdHasBeenSet(false),
    m_teamNameHasBeenSet(false),
    m_createUserHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDomainTeamListInfoResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TeamId") && !value["TeamId"].IsNull())
    {
        if (!value["TeamId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDomainTeamListInfoResp.TeamId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_teamId = string(value["TeamId"].GetString());
        m_teamIdHasBeenSet = true;
    }

    if (value.HasMember("TeamName") && !value["TeamName"].IsNull())
    {
        if (!value["TeamName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDomainTeamListInfoResp.TeamName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_teamName = string(value["TeamName"].GetString());
        m_teamNameHasBeenSet = true;
    }

    if (value.HasMember("CreateUser") && !value["CreateUser"].IsNull())
    {
        if (!value["CreateUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDomainTeamListInfoResp.CreateUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createUser = string(value["CreateUser"].GetString());
        m_createUserHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDomainTeamListInfoResp.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeDomainTeamListInfoResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_createUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createUser.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

}


string DescribeDomainTeamListInfoResp::GetTeamId() const
{
    return m_teamId;
}

void DescribeDomainTeamListInfoResp::SetTeamId(const string& _teamId)
{
    m_teamId = _teamId;
    m_teamIdHasBeenSet = true;
}

bool DescribeDomainTeamListInfoResp::TeamIdHasBeenSet() const
{
    return m_teamIdHasBeenSet;
}

string DescribeDomainTeamListInfoResp::GetTeamName() const
{
    return m_teamName;
}

void DescribeDomainTeamListInfoResp::SetTeamName(const string& _teamName)
{
    m_teamName = _teamName;
    m_teamNameHasBeenSet = true;
}

bool DescribeDomainTeamListInfoResp::TeamNameHasBeenSet() const
{
    return m_teamNameHasBeenSet;
}

string DescribeDomainTeamListInfoResp::GetCreateUser() const
{
    return m_createUser;
}

void DescribeDomainTeamListInfoResp::SetCreateUser(const string& _createUser)
{
    m_createUser = _createUser;
    m_createUserHasBeenSet = true;
}

bool DescribeDomainTeamListInfoResp::CreateUserHasBeenSet() const
{
    return m_createUserHasBeenSet;
}

string DescribeDomainTeamListInfoResp::GetCreateTime() const
{
    return m_createTime;
}

void DescribeDomainTeamListInfoResp::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DescribeDomainTeamListInfoResp::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

