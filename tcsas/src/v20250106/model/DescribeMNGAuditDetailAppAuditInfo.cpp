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

#include <tencentcloud/tcsas/v20250106/model/DescribeMNGAuditDetailAppAuditInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

DescribeMNGAuditDetailAppAuditInfo::DescribeMNGAuditDetailAppAuditInfo() :
    m_auditNoHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_applicationLogoHasBeenSet(false),
    m_auditUserHasBeenSet(false),
    m_auditTimeHasBeenSet(false),
    m_auditStatusHasBeenSet(false),
    m_auditNoteHasBeenSet(false),
    m_teamIdHasBeenSet(false),
    m_teamNameHasBeenSet(false)
{
}

CoreInternalOutcome DescribeMNGAuditDetailAppAuditInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AuditNo") && !value["AuditNo"].IsNull())
    {
        if (!value["AuditNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGAuditDetailAppAuditInfo.AuditNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_auditNo = string(value["AuditNo"].GetString());
        m_auditNoHasBeenSet = true;
    }

    if (value.HasMember("ApplicationId") && !value["ApplicationId"].IsNull())
    {
        if (!value["ApplicationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGAuditDetailAppAuditInfo.ApplicationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationId = string(value["ApplicationId"].GetString());
        m_applicationIdHasBeenSet = true;
    }

    if (value.HasMember("ApplicationName") && !value["ApplicationName"].IsNull())
    {
        if (!value["ApplicationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGAuditDetailAppAuditInfo.ApplicationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationName = string(value["ApplicationName"].GetString());
        m_applicationNameHasBeenSet = true;
    }

    if (value.HasMember("ApplicationLogo") && !value["ApplicationLogo"].IsNull())
    {
        if (!value["ApplicationLogo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGAuditDetailAppAuditInfo.ApplicationLogo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationLogo = string(value["ApplicationLogo"].GetString());
        m_applicationLogoHasBeenSet = true;
    }

    if (value.HasMember("AuditUser") && !value["AuditUser"].IsNull())
    {
        if (!value["AuditUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGAuditDetailAppAuditInfo.AuditUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_auditUser = string(value["AuditUser"].GetString());
        m_auditUserHasBeenSet = true;
    }

    if (value.HasMember("AuditTime") && !value["AuditTime"].IsNull())
    {
        if (!value["AuditTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGAuditDetailAppAuditInfo.AuditTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_auditTime = string(value["AuditTime"].GetString());
        m_auditTimeHasBeenSet = true;
    }

    if (value.HasMember("AuditStatus") && !value["AuditStatus"].IsNull())
    {
        if (!value["AuditStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGAuditDetailAppAuditInfo.AuditStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_auditStatus = value["AuditStatus"].GetInt64();
        m_auditStatusHasBeenSet = true;
    }

    if (value.HasMember("AuditNote") && !value["AuditNote"].IsNull())
    {
        if (!value["AuditNote"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGAuditDetailAppAuditInfo.AuditNote` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_auditNote = string(value["AuditNote"].GetString());
        m_auditNoteHasBeenSet = true;
    }

    if (value.HasMember("TeamId") && !value["TeamId"].IsNull())
    {
        if (!value["TeamId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGAuditDetailAppAuditInfo.TeamId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_teamId = string(value["TeamId"].GetString());
        m_teamIdHasBeenSet = true;
    }

    if (value.HasMember("TeamName") && !value["TeamName"].IsNull())
    {
        if (!value["TeamName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGAuditDetailAppAuditInfo.TeamName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_teamName = string(value["TeamName"].GetString());
        m_teamNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeMNGAuditDetailAppAuditInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_auditNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_auditNo.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationName.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationLogoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationLogo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationLogo.c_str(), allocator).Move(), allocator);
    }

    if (m_auditUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_auditUser.c_str(), allocator).Move(), allocator);
    }

    if (m_auditTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_auditTime.c_str(), allocator).Move(), allocator);
    }

    if (m_auditStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_auditStatus, allocator);
    }

    if (m_auditNoteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditNote";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_auditNote.c_str(), allocator).Move(), allocator);
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

}


string DescribeMNGAuditDetailAppAuditInfo::GetAuditNo() const
{
    return m_auditNo;
}

void DescribeMNGAuditDetailAppAuditInfo::SetAuditNo(const string& _auditNo)
{
    m_auditNo = _auditNo;
    m_auditNoHasBeenSet = true;
}

bool DescribeMNGAuditDetailAppAuditInfo::AuditNoHasBeenSet() const
{
    return m_auditNoHasBeenSet;
}

string DescribeMNGAuditDetailAppAuditInfo::GetApplicationId() const
{
    return m_applicationId;
}

void DescribeMNGAuditDetailAppAuditInfo::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool DescribeMNGAuditDetailAppAuditInfo::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string DescribeMNGAuditDetailAppAuditInfo::GetApplicationName() const
{
    return m_applicationName;
}

void DescribeMNGAuditDetailAppAuditInfo::SetApplicationName(const string& _applicationName)
{
    m_applicationName = _applicationName;
    m_applicationNameHasBeenSet = true;
}

bool DescribeMNGAuditDetailAppAuditInfo::ApplicationNameHasBeenSet() const
{
    return m_applicationNameHasBeenSet;
}

string DescribeMNGAuditDetailAppAuditInfo::GetApplicationLogo() const
{
    return m_applicationLogo;
}

void DescribeMNGAuditDetailAppAuditInfo::SetApplicationLogo(const string& _applicationLogo)
{
    m_applicationLogo = _applicationLogo;
    m_applicationLogoHasBeenSet = true;
}

bool DescribeMNGAuditDetailAppAuditInfo::ApplicationLogoHasBeenSet() const
{
    return m_applicationLogoHasBeenSet;
}

string DescribeMNGAuditDetailAppAuditInfo::GetAuditUser() const
{
    return m_auditUser;
}

void DescribeMNGAuditDetailAppAuditInfo::SetAuditUser(const string& _auditUser)
{
    m_auditUser = _auditUser;
    m_auditUserHasBeenSet = true;
}

bool DescribeMNGAuditDetailAppAuditInfo::AuditUserHasBeenSet() const
{
    return m_auditUserHasBeenSet;
}

string DescribeMNGAuditDetailAppAuditInfo::GetAuditTime() const
{
    return m_auditTime;
}

void DescribeMNGAuditDetailAppAuditInfo::SetAuditTime(const string& _auditTime)
{
    m_auditTime = _auditTime;
    m_auditTimeHasBeenSet = true;
}

bool DescribeMNGAuditDetailAppAuditInfo::AuditTimeHasBeenSet() const
{
    return m_auditTimeHasBeenSet;
}

int64_t DescribeMNGAuditDetailAppAuditInfo::GetAuditStatus() const
{
    return m_auditStatus;
}

void DescribeMNGAuditDetailAppAuditInfo::SetAuditStatus(const int64_t& _auditStatus)
{
    m_auditStatus = _auditStatus;
    m_auditStatusHasBeenSet = true;
}

bool DescribeMNGAuditDetailAppAuditInfo::AuditStatusHasBeenSet() const
{
    return m_auditStatusHasBeenSet;
}

string DescribeMNGAuditDetailAppAuditInfo::GetAuditNote() const
{
    return m_auditNote;
}

void DescribeMNGAuditDetailAppAuditInfo::SetAuditNote(const string& _auditNote)
{
    m_auditNote = _auditNote;
    m_auditNoteHasBeenSet = true;
}

bool DescribeMNGAuditDetailAppAuditInfo::AuditNoteHasBeenSet() const
{
    return m_auditNoteHasBeenSet;
}

string DescribeMNGAuditDetailAppAuditInfo::GetTeamId() const
{
    return m_teamId;
}

void DescribeMNGAuditDetailAppAuditInfo::SetTeamId(const string& _teamId)
{
    m_teamId = _teamId;
    m_teamIdHasBeenSet = true;
}

bool DescribeMNGAuditDetailAppAuditInfo::TeamIdHasBeenSet() const
{
    return m_teamIdHasBeenSet;
}

string DescribeMNGAuditDetailAppAuditInfo::GetTeamName() const
{
    return m_teamName;
}

void DescribeMNGAuditDetailAppAuditInfo::SetTeamName(const string& _teamName)
{
    m_teamName = _teamName;
    m_teamNameHasBeenSet = true;
}

bool DescribeMNGAuditDetailAppAuditInfo::TeamNameHasBeenSet() const
{
    return m_teamNameHasBeenSet;
}

