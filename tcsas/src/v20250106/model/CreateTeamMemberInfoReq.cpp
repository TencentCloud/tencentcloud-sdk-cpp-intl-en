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

#include <tencentcloud/tcsas/v20250106/model/CreateTeamMemberInfoReq.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

CreateTeamMemberInfoReq::CreateTeamMemberInfoReq() :
    m_userIdHasBeenSet(false),
    m_userRoleIdHasBeenSet(false)
{
}

CoreInternalOutcome CreateTeamMemberInfoReq::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTeamMemberInfoReq.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("UserRoleId") && !value["UserRoleId"].IsNull())
    {
        if (!value["UserRoleId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTeamMemberInfoReq.UserRoleId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_userRoleId = value["UserRoleId"].GetInt64();
        m_userRoleIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateTeamMemberInfoReq::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_userRoleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserRoleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_userRoleId, allocator);
    }

}


string CreateTeamMemberInfoReq::GetUserId() const
{
    return m_userId;
}

void CreateTeamMemberInfoReq::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool CreateTeamMemberInfoReq::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

int64_t CreateTeamMemberInfoReq::GetUserRoleId() const
{
    return m_userRoleId;
}

void CreateTeamMemberInfoReq::SetUserRoleId(const int64_t& _userRoleId)
{
    m_userRoleId = _userRoleId;
    m_userRoleIdHasBeenSet = true;
}

bool CreateTeamMemberInfoReq::UserRoleIdHasBeenSet() const
{
    return m_userRoleIdHasBeenSet;
}

