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

#include <tencentcloud/tcmpp/v20240801/model/DescribeMPAllStageVersionsResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcmpp::V20240801::Model;
using namespace std;

DescribeMPAllStageVersionsResp::DescribeMPAllStageVersionsResp() :
    m_mNPIdHasBeenSet(false),
    m_mNPVersionIdHasBeenSet(false),
    m_mNPNameHasBeenSet(false),
    m_mNPIconHasBeenSet(false),
    m_mNPTypeHasBeenSet(false),
    m_mNPIntroHasBeenSet(false),
    m_mNPDescHasBeenSet(false),
    m_createUserHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_mNPVersionHasBeenSet(false),
    m_mNPVersionIntroHasBeenSet(false),
    m_phaseHasBeenSet(false),
    m_approvalStatusHasBeenSet(false),
    m_approvalNoHasBeenSet(false),
    m_showCaseHasBeenSet(false),
    m_rollbackVersionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_versionCurrentStatusHasBeenSet(false)
{
}

CoreInternalOutcome DescribeMPAllStageVersionsResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MNPId") && !value["MNPId"].IsNull())
    {
        if (!value["MNPId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMPAllStageVersionsResp.MNPId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPId = string(value["MNPId"].GetString());
        m_mNPIdHasBeenSet = true;
    }

    if (value.HasMember("MNPVersionId") && !value["MNPVersionId"].IsNull())
    {
        if (!value["MNPVersionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMPAllStageVersionsResp.MNPVersionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mNPVersionId = value["MNPVersionId"].GetInt64();
        m_mNPVersionIdHasBeenSet = true;
    }

    if (value.HasMember("MNPName") && !value["MNPName"].IsNull())
    {
        if (!value["MNPName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMPAllStageVersionsResp.MNPName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPName = string(value["MNPName"].GetString());
        m_mNPNameHasBeenSet = true;
    }

    if (value.HasMember("MNPIcon") && !value["MNPIcon"].IsNull())
    {
        if (!value["MNPIcon"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMPAllStageVersionsResp.MNPIcon` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPIcon = string(value["MNPIcon"].GetString());
        m_mNPIconHasBeenSet = true;
    }

    if (value.HasMember("MNPType") && !value["MNPType"].IsNull())
    {
        if (!value["MNPType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMPAllStageVersionsResp.MNPType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPType = string(value["MNPType"].GetString());
        m_mNPTypeHasBeenSet = true;
    }

    if (value.HasMember("MNPIntro") && !value["MNPIntro"].IsNull())
    {
        if (!value["MNPIntro"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMPAllStageVersionsResp.MNPIntro` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPIntro = string(value["MNPIntro"].GetString());
        m_mNPIntroHasBeenSet = true;
    }

    if (value.HasMember("MNPDesc") && !value["MNPDesc"].IsNull())
    {
        if (!value["MNPDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMPAllStageVersionsResp.MNPDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPDesc = string(value["MNPDesc"].GetString());
        m_mNPDescHasBeenSet = true;
    }

    if (value.HasMember("CreateUser") && !value["CreateUser"].IsNull())
    {
        if (!value["CreateUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMPAllStageVersionsResp.CreateUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createUser = string(value["CreateUser"].GetString());
        m_createUserHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMPAllStageVersionsResp.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("MNPVersion") && !value["MNPVersion"].IsNull())
    {
        if (!value["MNPVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMPAllStageVersionsResp.MNPVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPVersion = string(value["MNPVersion"].GetString());
        m_mNPVersionHasBeenSet = true;
    }

    if (value.HasMember("MNPVersionIntro") && !value["MNPVersionIntro"].IsNull())
    {
        if (!value["MNPVersionIntro"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMPAllStageVersionsResp.MNPVersionIntro` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPVersionIntro = string(value["MNPVersionIntro"].GetString());
        m_mNPVersionIntroHasBeenSet = true;
    }

    if (value.HasMember("Phase") && !value["Phase"].IsNull())
    {
        if (!value["Phase"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMPAllStageVersionsResp.Phase` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phase = string(value["Phase"].GetString());
        m_phaseHasBeenSet = true;
    }

    if (value.HasMember("ApprovalStatus") && !value["ApprovalStatus"].IsNull())
    {
        if (!value["ApprovalStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMPAllStageVersionsResp.ApprovalStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_approvalStatus = value["ApprovalStatus"].GetInt64();
        m_approvalStatusHasBeenSet = true;
    }

    if (value.HasMember("ApprovalNo") && !value["ApprovalNo"].IsNull())
    {
        if (!value["ApprovalNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMPAllStageVersionsResp.ApprovalNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approvalNo = string(value["ApprovalNo"].GetString());
        m_approvalNoHasBeenSet = true;
    }

    if (value.HasMember("ShowCase") && !value["ShowCase"].IsNull())
    {
        if (!value["ShowCase"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMPAllStageVersionsResp.ShowCase` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_showCase = value["ShowCase"].GetInt64();
        m_showCaseHasBeenSet = true;
    }

    if (value.HasMember("RollbackVersion") && !value["RollbackVersion"].IsNull())
    {
        if (!value["RollbackVersion"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMPAllStageVersionsResp.RollbackVersion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rollbackVersion = value["RollbackVersion"].GetInt64();
        m_rollbackVersionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMPAllStageVersionsResp.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("VersionCurrentStatus") && !value["VersionCurrentStatus"].IsNull())
    {
        if (!value["VersionCurrentStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMPAllStageVersionsResp.VersionCurrentStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_versionCurrentStatus = value["VersionCurrentStatus"].GetInt64();
        m_versionCurrentStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeMPAllStageVersionsResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_mNPIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mNPId.c_str(), allocator).Move(), allocator);
    }

    if (m_mNPVersionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPVersionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mNPVersionId, allocator);
    }

    if (m_mNPNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mNPName.c_str(), allocator).Move(), allocator);
    }

    if (m_mNPIconHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPIcon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mNPIcon.c_str(), allocator).Move(), allocator);
    }

    if (m_mNPTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mNPType.c_str(), allocator).Move(), allocator);
    }

    if (m_mNPIntroHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPIntro";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mNPIntro.c_str(), allocator).Move(), allocator);
    }

    if (m_mNPDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mNPDesc.c_str(), allocator).Move(), allocator);
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

    if (m_mNPVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mNPVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_mNPVersionIntroHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPVersionIntro";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mNPVersionIntro.c_str(), allocator).Move(), allocator);
    }

    if (m_phaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Phase";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phase.c_str(), allocator).Move(), allocator);
    }

    if (m_approvalStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApprovalStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_approvalStatus, allocator);
    }

    if (m_approvalNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApprovalNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approvalNo.c_str(), allocator).Move(), allocator);
    }

    if (m_showCaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShowCase";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_showCase, allocator);
    }

    if (m_rollbackVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RollbackVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rollbackVersion, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_versionCurrentStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionCurrentStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_versionCurrentStatus, allocator);
    }

}


string DescribeMPAllStageVersionsResp::GetMNPId() const
{
    return m_mNPId;
}

void DescribeMPAllStageVersionsResp::SetMNPId(const string& _mNPId)
{
    m_mNPId = _mNPId;
    m_mNPIdHasBeenSet = true;
}

bool DescribeMPAllStageVersionsResp::MNPIdHasBeenSet() const
{
    return m_mNPIdHasBeenSet;
}

int64_t DescribeMPAllStageVersionsResp::GetMNPVersionId() const
{
    return m_mNPVersionId;
}

void DescribeMPAllStageVersionsResp::SetMNPVersionId(const int64_t& _mNPVersionId)
{
    m_mNPVersionId = _mNPVersionId;
    m_mNPVersionIdHasBeenSet = true;
}

bool DescribeMPAllStageVersionsResp::MNPVersionIdHasBeenSet() const
{
    return m_mNPVersionIdHasBeenSet;
}

string DescribeMPAllStageVersionsResp::GetMNPName() const
{
    return m_mNPName;
}

void DescribeMPAllStageVersionsResp::SetMNPName(const string& _mNPName)
{
    m_mNPName = _mNPName;
    m_mNPNameHasBeenSet = true;
}

bool DescribeMPAllStageVersionsResp::MNPNameHasBeenSet() const
{
    return m_mNPNameHasBeenSet;
}

string DescribeMPAllStageVersionsResp::GetMNPIcon() const
{
    return m_mNPIcon;
}

void DescribeMPAllStageVersionsResp::SetMNPIcon(const string& _mNPIcon)
{
    m_mNPIcon = _mNPIcon;
    m_mNPIconHasBeenSet = true;
}

bool DescribeMPAllStageVersionsResp::MNPIconHasBeenSet() const
{
    return m_mNPIconHasBeenSet;
}

string DescribeMPAllStageVersionsResp::GetMNPType() const
{
    return m_mNPType;
}

void DescribeMPAllStageVersionsResp::SetMNPType(const string& _mNPType)
{
    m_mNPType = _mNPType;
    m_mNPTypeHasBeenSet = true;
}

bool DescribeMPAllStageVersionsResp::MNPTypeHasBeenSet() const
{
    return m_mNPTypeHasBeenSet;
}

string DescribeMPAllStageVersionsResp::GetMNPIntro() const
{
    return m_mNPIntro;
}

void DescribeMPAllStageVersionsResp::SetMNPIntro(const string& _mNPIntro)
{
    m_mNPIntro = _mNPIntro;
    m_mNPIntroHasBeenSet = true;
}

bool DescribeMPAllStageVersionsResp::MNPIntroHasBeenSet() const
{
    return m_mNPIntroHasBeenSet;
}

string DescribeMPAllStageVersionsResp::GetMNPDesc() const
{
    return m_mNPDesc;
}

void DescribeMPAllStageVersionsResp::SetMNPDesc(const string& _mNPDesc)
{
    m_mNPDesc = _mNPDesc;
    m_mNPDescHasBeenSet = true;
}

bool DescribeMPAllStageVersionsResp::MNPDescHasBeenSet() const
{
    return m_mNPDescHasBeenSet;
}

string DescribeMPAllStageVersionsResp::GetCreateUser() const
{
    return m_createUser;
}

void DescribeMPAllStageVersionsResp::SetCreateUser(const string& _createUser)
{
    m_createUser = _createUser;
    m_createUserHasBeenSet = true;
}

bool DescribeMPAllStageVersionsResp::CreateUserHasBeenSet() const
{
    return m_createUserHasBeenSet;
}

string DescribeMPAllStageVersionsResp::GetCreateTime() const
{
    return m_createTime;
}

void DescribeMPAllStageVersionsResp::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DescribeMPAllStageVersionsResp::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DescribeMPAllStageVersionsResp::GetMNPVersion() const
{
    return m_mNPVersion;
}

void DescribeMPAllStageVersionsResp::SetMNPVersion(const string& _mNPVersion)
{
    m_mNPVersion = _mNPVersion;
    m_mNPVersionHasBeenSet = true;
}

bool DescribeMPAllStageVersionsResp::MNPVersionHasBeenSet() const
{
    return m_mNPVersionHasBeenSet;
}

string DescribeMPAllStageVersionsResp::GetMNPVersionIntro() const
{
    return m_mNPVersionIntro;
}

void DescribeMPAllStageVersionsResp::SetMNPVersionIntro(const string& _mNPVersionIntro)
{
    m_mNPVersionIntro = _mNPVersionIntro;
    m_mNPVersionIntroHasBeenSet = true;
}

bool DescribeMPAllStageVersionsResp::MNPVersionIntroHasBeenSet() const
{
    return m_mNPVersionIntroHasBeenSet;
}

string DescribeMPAllStageVersionsResp::GetPhase() const
{
    return m_phase;
}

void DescribeMPAllStageVersionsResp::SetPhase(const string& _phase)
{
    m_phase = _phase;
    m_phaseHasBeenSet = true;
}

bool DescribeMPAllStageVersionsResp::PhaseHasBeenSet() const
{
    return m_phaseHasBeenSet;
}

int64_t DescribeMPAllStageVersionsResp::GetApprovalStatus() const
{
    return m_approvalStatus;
}

void DescribeMPAllStageVersionsResp::SetApprovalStatus(const int64_t& _approvalStatus)
{
    m_approvalStatus = _approvalStatus;
    m_approvalStatusHasBeenSet = true;
}

bool DescribeMPAllStageVersionsResp::ApprovalStatusHasBeenSet() const
{
    return m_approvalStatusHasBeenSet;
}

string DescribeMPAllStageVersionsResp::GetApprovalNo() const
{
    return m_approvalNo;
}

void DescribeMPAllStageVersionsResp::SetApprovalNo(const string& _approvalNo)
{
    m_approvalNo = _approvalNo;
    m_approvalNoHasBeenSet = true;
}

bool DescribeMPAllStageVersionsResp::ApprovalNoHasBeenSet() const
{
    return m_approvalNoHasBeenSet;
}

int64_t DescribeMPAllStageVersionsResp::GetShowCase() const
{
    return m_showCase;
}

void DescribeMPAllStageVersionsResp::SetShowCase(const int64_t& _showCase)
{
    m_showCase = _showCase;
    m_showCaseHasBeenSet = true;
}

bool DescribeMPAllStageVersionsResp::ShowCaseHasBeenSet() const
{
    return m_showCaseHasBeenSet;
}

int64_t DescribeMPAllStageVersionsResp::GetRollbackVersion() const
{
    return m_rollbackVersion;
}

void DescribeMPAllStageVersionsResp::SetRollbackVersion(const int64_t& _rollbackVersion)
{
    m_rollbackVersion = _rollbackVersion;
    m_rollbackVersionHasBeenSet = true;
}

bool DescribeMPAllStageVersionsResp::RollbackVersionHasBeenSet() const
{
    return m_rollbackVersionHasBeenSet;
}

int64_t DescribeMPAllStageVersionsResp::GetStatus() const
{
    return m_status;
}

void DescribeMPAllStageVersionsResp::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeMPAllStageVersionsResp::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t DescribeMPAllStageVersionsResp::GetVersionCurrentStatus() const
{
    return m_versionCurrentStatus;
}

void DescribeMPAllStageVersionsResp::SetVersionCurrentStatus(const int64_t& _versionCurrentStatus)
{
    m_versionCurrentStatus = _versionCurrentStatus;
    m_versionCurrentStatusHasBeenSet = true;
}

bool DescribeMPAllStageVersionsResp::VersionCurrentStatusHasBeenSet() const
{
    return m_versionCurrentStatusHasBeenSet;
}

