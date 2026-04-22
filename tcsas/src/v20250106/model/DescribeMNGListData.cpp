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

#include <tencentcloud/tcsas/v20250106/model/DescribeMNGListData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

DescribeMNGListData::DescribeMNGListData() :
    m_mNPIdHasBeenSet(false),
    m_mNPIconHasBeenSet(false),
    m_mNPNameHasBeenSet(false),
    m_teamNameHasBeenSet(false),
    m_mNPTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_mNPIntroHasBeenSet(false),
    m_createUserHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateUserHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_effectStatusHasBeenSet(false),
    m_effectMNPVersionIdHasBeenSet(false),
    m_effectMNPVersionHasBeenSet(false)
{
}

CoreInternalOutcome DescribeMNGListData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MNPId") && !value["MNPId"].IsNull())
    {
        if (!value["MNPId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGListData.MNPId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPId = string(value["MNPId"].GetString());
        m_mNPIdHasBeenSet = true;
    }

    if (value.HasMember("MNPIcon") && !value["MNPIcon"].IsNull())
    {
        if (!value["MNPIcon"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGListData.MNPIcon` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPIcon = string(value["MNPIcon"].GetString());
        m_mNPIconHasBeenSet = true;
    }

    if (value.HasMember("MNPName") && !value["MNPName"].IsNull())
    {
        if (!value["MNPName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGListData.MNPName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPName = string(value["MNPName"].GetString());
        m_mNPNameHasBeenSet = true;
    }

    if (value.HasMember("TeamName") && !value["TeamName"].IsNull())
    {
        if (!value["TeamName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGListData.TeamName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_teamName = string(value["TeamName"].GetString());
        m_teamNameHasBeenSet = true;
    }

    if (value.HasMember("MNPType") && !value["MNPType"].IsNull())
    {
        if (!value["MNPType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGListData.MNPType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPType = string(value["MNPType"].GetString());
        m_mNPTypeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGListData.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("MNPIntro") && !value["MNPIntro"].IsNull())
    {
        if (!value["MNPIntro"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGListData.MNPIntro` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPIntro = string(value["MNPIntro"].GetString());
        m_mNPIntroHasBeenSet = true;
    }

    if (value.HasMember("CreateUser") && !value["CreateUser"].IsNull())
    {
        if (!value["CreateUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGListData.CreateUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createUser = string(value["CreateUser"].GetString());
        m_createUserHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGListData.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateUser") && !value["UpdateUser"].IsNull())
    {
        if (!value["UpdateUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGListData.UpdateUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateUser = string(value["UpdateUser"].GetString());
        m_updateUserHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGListData.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("ApplicationName") && !value["ApplicationName"].IsNull())
    {
        if (!value["ApplicationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGListData.ApplicationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationName = string(value["ApplicationName"].GetString());
        m_applicationNameHasBeenSet = true;
    }

    if (value.HasMember("EffectStatus") && !value["EffectStatus"].IsNull())
    {
        if (!value["EffectStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGListData.EffectStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_effectStatus = value["EffectStatus"].GetInt64();
        m_effectStatusHasBeenSet = true;
    }

    if (value.HasMember("EffectMNPVersionId") && !value["EffectMNPVersionId"].IsNull())
    {
        if (!value["EffectMNPVersionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGListData.EffectMNPVersionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_effectMNPVersionId = value["EffectMNPVersionId"].GetInt64();
        m_effectMNPVersionIdHasBeenSet = true;
    }

    if (value.HasMember("EffectMNPVersion") && !value["EffectMNPVersion"].IsNull())
    {
        if (!value["EffectMNPVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGListData.EffectMNPVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_effectMNPVersion = string(value["EffectMNPVersion"].GetString());
        m_effectMNPVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeMNGListData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_mNPIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mNPId.c_str(), allocator).Move(), allocator);
    }

    if (m_mNPIconHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPIcon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mNPIcon.c_str(), allocator).Move(), allocator);
    }

    if (m_mNPNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mNPName.c_str(), allocator).Move(), allocator);
    }

    if (m_teamNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TeamName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_teamName.c_str(), allocator).Move(), allocator);
    }

    if (m_mNPTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mNPType.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_mNPIntroHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPIntro";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mNPIntro.c_str(), allocator).Move(), allocator);
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

    if (m_updateUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateUser.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationName.c_str(), allocator).Move(), allocator);
    }

    if (m_effectStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_effectStatus, allocator);
    }

    if (m_effectMNPVersionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectMNPVersionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_effectMNPVersionId, allocator);
    }

    if (m_effectMNPVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectMNPVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_effectMNPVersion.c_str(), allocator).Move(), allocator);
    }

}


string DescribeMNGListData::GetMNPId() const
{
    return m_mNPId;
}

void DescribeMNGListData::SetMNPId(const string& _mNPId)
{
    m_mNPId = _mNPId;
    m_mNPIdHasBeenSet = true;
}

bool DescribeMNGListData::MNPIdHasBeenSet() const
{
    return m_mNPIdHasBeenSet;
}

string DescribeMNGListData::GetMNPIcon() const
{
    return m_mNPIcon;
}

void DescribeMNGListData::SetMNPIcon(const string& _mNPIcon)
{
    m_mNPIcon = _mNPIcon;
    m_mNPIconHasBeenSet = true;
}

bool DescribeMNGListData::MNPIconHasBeenSet() const
{
    return m_mNPIconHasBeenSet;
}

string DescribeMNGListData::GetMNPName() const
{
    return m_mNPName;
}

void DescribeMNGListData::SetMNPName(const string& _mNPName)
{
    m_mNPName = _mNPName;
    m_mNPNameHasBeenSet = true;
}

bool DescribeMNGListData::MNPNameHasBeenSet() const
{
    return m_mNPNameHasBeenSet;
}

string DescribeMNGListData::GetTeamName() const
{
    return m_teamName;
}

void DescribeMNGListData::SetTeamName(const string& _teamName)
{
    m_teamName = _teamName;
    m_teamNameHasBeenSet = true;
}

bool DescribeMNGListData::TeamNameHasBeenSet() const
{
    return m_teamNameHasBeenSet;
}

string DescribeMNGListData::GetMNPType() const
{
    return m_mNPType;
}

void DescribeMNGListData::SetMNPType(const string& _mNPType)
{
    m_mNPType = _mNPType;
    m_mNPTypeHasBeenSet = true;
}

bool DescribeMNGListData::MNPTypeHasBeenSet() const
{
    return m_mNPTypeHasBeenSet;
}

int64_t DescribeMNGListData::GetStatus() const
{
    return m_status;
}

void DescribeMNGListData::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeMNGListData::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeMNGListData::GetMNPIntro() const
{
    return m_mNPIntro;
}

void DescribeMNGListData::SetMNPIntro(const string& _mNPIntro)
{
    m_mNPIntro = _mNPIntro;
    m_mNPIntroHasBeenSet = true;
}

bool DescribeMNGListData::MNPIntroHasBeenSet() const
{
    return m_mNPIntroHasBeenSet;
}

string DescribeMNGListData::GetCreateUser() const
{
    return m_createUser;
}

void DescribeMNGListData::SetCreateUser(const string& _createUser)
{
    m_createUser = _createUser;
    m_createUserHasBeenSet = true;
}

bool DescribeMNGListData::CreateUserHasBeenSet() const
{
    return m_createUserHasBeenSet;
}

string DescribeMNGListData::GetCreateTime() const
{
    return m_createTime;
}

void DescribeMNGListData::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DescribeMNGListData::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DescribeMNGListData::GetUpdateUser() const
{
    return m_updateUser;
}

void DescribeMNGListData::SetUpdateUser(const string& _updateUser)
{
    m_updateUser = _updateUser;
    m_updateUserHasBeenSet = true;
}

bool DescribeMNGListData::UpdateUserHasBeenSet() const
{
    return m_updateUserHasBeenSet;
}

string DescribeMNGListData::GetUpdateTime() const
{
    return m_updateTime;
}

void DescribeMNGListData::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool DescribeMNGListData::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string DescribeMNGListData::GetApplicationName() const
{
    return m_applicationName;
}

void DescribeMNGListData::SetApplicationName(const string& _applicationName)
{
    m_applicationName = _applicationName;
    m_applicationNameHasBeenSet = true;
}

bool DescribeMNGListData::ApplicationNameHasBeenSet() const
{
    return m_applicationNameHasBeenSet;
}

int64_t DescribeMNGListData::GetEffectStatus() const
{
    return m_effectStatus;
}

void DescribeMNGListData::SetEffectStatus(const int64_t& _effectStatus)
{
    m_effectStatus = _effectStatus;
    m_effectStatusHasBeenSet = true;
}

bool DescribeMNGListData::EffectStatusHasBeenSet() const
{
    return m_effectStatusHasBeenSet;
}

int64_t DescribeMNGListData::GetEffectMNPVersionId() const
{
    return m_effectMNPVersionId;
}

void DescribeMNGListData::SetEffectMNPVersionId(const int64_t& _effectMNPVersionId)
{
    m_effectMNPVersionId = _effectMNPVersionId;
    m_effectMNPVersionIdHasBeenSet = true;
}

bool DescribeMNGListData::EffectMNPVersionIdHasBeenSet() const
{
    return m_effectMNPVersionIdHasBeenSet;
}

string DescribeMNGListData::GetEffectMNPVersion() const
{
    return m_effectMNPVersion;
}

void DescribeMNGListData::SetEffectMNPVersion(const string& _effectMNPVersion)
{
    m_effectMNPVersion = _effectMNPVersion;
    m_effectMNPVersionHasBeenSet = true;
}

bool DescribeMNGListData::EffectMNPVersionHasBeenSet() const
{
    return m_effectMNPVersionHasBeenSet;
}

