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

#include <tencentcloud/tcmpp/v20240801/model/VersionBoardResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcmpp::V20240801::Model;
using namespace std;

VersionBoardResp::VersionBoardResp() :
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
    m_auditStatusHasBeenSet(false),
    m_auditNoHasBeenSet(false),
    m_showCaseHasBeenSet(false),
    m_scanStatusHasBeenSet(false),
    m_scanScoreHasBeenSet(false),
    m_rollbackVersionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_scanHtmlPathHasBeenSet(false),
    m_versionCurrentStatusHasBeenSet(false)
{
}

CoreInternalOutcome VersionBoardResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MNPId") && !value["MNPId"].IsNull())
    {
        if (!value["MNPId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VersionBoardResp.MNPId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPId = string(value["MNPId"].GetString());
        m_mNPIdHasBeenSet = true;
    }

    if (value.HasMember("MNPVersionId") && !value["MNPVersionId"].IsNull())
    {
        if (!value["MNPVersionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VersionBoardResp.MNPVersionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mNPVersionId = value["MNPVersionId"].GetInt64();
        m_mNPVersionIdHasBeenSet = true;
    }

    if (value.HasMember("MNPName") && !value["MNPName"].IsNull())
    {
        if (!value["MNPName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VersionBoardResp.MNPName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPName = string(value["MNPName"].GetString());
        m_mNPNameHasBeenSet = true;
    }

    if (value.HasMember("MNPIcon") && !value["MNPIcon"].IsNull())
    {
        if (!value["MNPIcon"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VersionBoardResp.MNPIcon` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPIcon = string(value["MNPIcon"].GetString());
        m_mNPIconHasBeenSet = true;
    }

    if (value.HasMember("MNPType") && !value["MNPType"].IsNull())
    {
        if (!value["MNPType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VersionBoardResp.MNPType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPType = string(value["MNPType"].GetString());
        m_mNPTypeHasBeenSet = true;
    }

    if (value.HasMember("MNPIntro") && !value["MNPIntro"].IsNull())
    {
        if (!value["MNPIntro"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VersionBoardResp.MNPIntro` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPIntro = string(value["MNPIntro"].GetString());
        m_mNPIntroHasBeenSet = true;
    }

    if (value.HasMember("MNPDesc") && !value["MNPDesc"].IsNull())
    {
        if (!value["MNPDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VersionBoardResp.MNPDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPDesc = string(value["MNPDesc"].GetString());
        m_mNPDescHasBeenSet = true;
    }

    if (value.HasMember("CreateUser") && !value["CreateUser"].IsNull())
    {
        if (!value["CreateUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VersionBoardResp.CreateUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createUser = string(value["CreateUser"].GetString());
        m_createUserHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VersionBoardResp.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("MNPVersion") && !value["MNPVersion"].IsNull())
    {
        if (!value["MNPVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VersionBoardResp.MNPVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPVersion = string(value["MNPVersion"].GetString());
        m_mNPVersionHasBeenSet = true;
    }

    if (value.HasMember("MNPVersionIntro") && !value["MNPVersionIntro"].IsNull())
    {
        if (!value["MNPVersionIntro"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VersionBoardResp.MNPVersionIntro` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPVersionIntro = string(value["MNPVersionIntro"].GetString());
        m_mNPVersionIntroHasBeenSet = true;
    }

    if (value.HasMember("Phase") && !value["Phase"].IsNull())
    {
        if (!value["Phase"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VersionBoardResp.Phase` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phase = string(value["Phase"].GetString());
        m_phaseHasBeenSet = true;
    }

    if (value.HasMember("AuditStatus") && !value["AuditStatus"].IsNull())
    {
        if (!value["AuditStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VersionBoardResp.AuditStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_auditStatus = value["AuditStatus"].GetInt64();
        m_auditStatusHasBeenSet = true;
    }

    if (value.HasMember("AuditNo") && !value["AuditNo"].IsNull())
    {
        if (!value["AuditNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VersionBoardResp.AuditNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_auditNo = string(value["AuditNo"].GetString());
        m_auditNoHasBeenSet = true;
    }

    if (value.HasMember("ShowCase") && !value["ShowCase"].IsNull())
    {
        if (!value["ShowCase"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VersionBoardResp.ShowCase` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_showCase = value["ShowCase"].GetInt64();
        m_showCaseHasBeenSet = true;
    }

    if (value.HasMember("ScanStatus") && !value["ScanStatus"].IsNull())
    {
        if (!value["ScanStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VersionBoardResp.ScanStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scanStatus = value["ScanStatus"].GetInt64();
        m_scanStatusHasBeenSet = true;
    }

    if (value.HasMember("ScanScore") && !value["ScanScore"].IsNull())
    {
        if (!value["ScanScore"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VersionBoardResp.ScanScore` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scanScore = value["ScanScore"].GetInt64();
        m_scanScoreHasBeenSet = true;
    }

    if (value.HasMember("RollbackVersion") && !value["RollbackVersion"].IsNull())
    {
        if (!value["RollbackVersion"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VersionBoardResp.RollbackVersion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rollbackVersion = value["RollbackVersion"].GetInt64();
        m_rollbackVersionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VersionBoardResp.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ScanHtmlPath") && !value["ScanHtmlPath"].IsNull())
    {
        if (!value["ScanHtmlPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VersionBoardResp.ScanHtmlPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanHtmlPath = string(value["ScanHtmlPath"].GetString());
        m_scanHtmlPathHasBeenSet = true;
    }

    if (value.HasMember("VersionCurrentStatus") && !value["VersionCurrentStatus"].IsNull())
    {
        if (!value["VersionCurrentStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VersionBoardResp.VersionCurrentStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_versionCurrentStatus = value["VersionCurrentStatus"].GetInt64();
        m_versionCurrentStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VersionBoardResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_auditStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_auditStatus, allocator);
    }

    if (m_auditNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_auditNo.c_str(), allocator).Move(), allocator);
    }

    if (m_showCaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShowCase";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_showCase, allocator);
    }

    if (m_scanStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanStatus, allocator);
    }

    if (m_scanScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanScore, allocator);
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

    if (m_scanHtmlPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanHtmlPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scanHtmlPath.c_str(), allocator).Move(), allocator);
    }

    if (m_versionCurrentStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionCurrentStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_versionCurrentStatus, allocator);
    }

}


string VersionBoardResp::GetMNPId() const
{
    return m_mNPId;
}

void VersionBoardResp::SetMNPId(const string& _mNPId)
{
    m_mNPId = _mNPId;
    m_mNPIdHasBeenSet = true;
}

bool VersionBoardResp::MNPIdHasBeenSet() const
{
    return m_mNPIdHasBeenSet;
}

int64_t VersionBoardResp::GetMNPVersionId() const
{
    return m_mNPVersionId;
}

void VersionBoardResp::SetMNPVersionId(const int64_t& _mNPVersionId)
{
    m_mNPVersionId = _mNPVersionId;
    m_mNPVersionIdHasBeenSet = true;
}

bool VersionBoardResp::MNPVersionIdHasBeenSet() const
{
    return m_mNPVersionIdHasBeenSet;
}

string VersionBoardResp::GetMNPName() const
{
    return m_mNPName;
}

void VersionBoardResp::SetMNPName(const string& _mNPName)
{
    m_mNPName = _mNPName;
    m_mNPNameHasBeenSet = true;
}

bool VersionBoardResp::MNPNameHasBeenSet() const
{
    return m_mNPNameHasBeenSet;
}

string VersionBoardResp::GetMNPIcon() const
{
    return m_mNPIcon;
}

void VersionBoardResp::SetMNPIcon(const string& _mNPIcon)
{
    m_mNPIcon = _mNPIcon;
    m_mNPIconHasBeenSet = true;
}

bool VersionBoardResp::MNPIconHasBeenSet() const
{
    return m_mNPIconHasBeenSet;
}

string VersionBoardResp::GetMNPType() const
{
    return m_mNPType;
}

void VersionBoardResp::SetMNPType(const string& _mNPType)
{
    m_mNPType = _mNPType;
    m_mNPTypeHasBeenSet = true;
}

bool VersionBoardResp::MNPTypeHasBeenSet() const
{
    return m_mNPTypeHasBeenSet;
}

string VersionBoardResp::GetMNPIntro() const
{
    return m_mNPIntro;
}

void VersionBoardResp::SetMNPIntro(const string& _mNPIntro)
{
    m_mNPIntro = _mNPIntro;
    m_mNPIntroHasBeenSet = true;
}

bool VersionBoardResp::MNPIntroHasBeenSet() const
{
    return m_mNPIntroHasBeenSet;
}

string VersionBoardResp::GetMNPDesc() const
{
    return m_mNPDesc;
}

void VersionBoardResp::SetMNPDesc(const string& _mNPDesc)
{
    m_mNPDesc = _mNPDesc;
    m_mNPDescHasBeenSet = true;
}

bool VersionBoardResp::MNPDescHasBeenSet() const
{
    return m_mNPDescHasBeenSet;
}

string VersionBoardResp::GetCreateUser() const
{
    return m_createUser;
}

void VersionBoardResp::SetCreateUser(const string& _createUser)
{
    m_createUser = _createUser;
    m_createUserHasBeenSet = true;
}

bool VersionBoardResp::CreateUserHasBeenSet() const
{
    return m_createUserHasBeenSet;
}

string VersionBoardResp::GetCreateTime() const
{
    return m_createTime;
}

void VersionBoardResp::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool VersionBoardResp::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string VersionBoardResp::GetMNPVersion() const
{
    return m_mNPVersion;
}

void VersionBoardResp::SetMNPVersion(const string& _mNPVersion)
{
    m_mNPVersion = _mNPVersion;
    m_mNPVersionHasBeenSet = true;
}

bool VersionBoardResp::MNPVersionHasBeenSet() const
{
    return m_mNPVersionHasBeenSet;
}

string VersionBoardResp::GetMNPVersionIntro() const
{
    return m_mNPVersionIntro;
}

void VersionBoardResp::SetMNPVersionIntro(const string& _mNPVersionIntro)
{
    m_mNPVersionIntro = _mNPVersionIntro;
    m_mNPVersionIntroHasBeenSet = true;
}

bool VersionBoardResp::MNPVersionIntroHasBeenSet() const
{
    return m_mNPVersionIntroHasBeenSet;
}

string VersionBoardResp::GetPhase() const
{
    return m_phase;
}

void VersionBoardResp::SetPhase(const string& _phase)
{
    m_phase = _phase;
    m_phaseHasBeenSet = true;
}

bool VersionBoardResp::PhaseHasBeenSet() const
{
    return m_phaseHasBeenSet;
}

int64_t VersionBoardResp::GetAuditStatus() const
{
    return m_auditStatus;
}

void VersionBoardResp::SetAuditStatus(const int64_t& _auditStatus)
{
    m_auditStatus = _auditStatus;
    m_auditStatusHasBeenSet = true;
}

bool VersionBoardResp::AuditStatusHasBeenSet() const
{
    return m_auditStatusHasBeenSet;
}

string VersionBoardResp::GetAuditNo() const
{
    return m_auditNo;
}

void VersionBoardResp::SetAuditNo(const string& _auditNo)
{
    m_auditNo = _auditNo;
    m_auditNoHasBeenSet = true;
}

bool VersionBoardResp::AuditNoHasBeenSet() const
{
    return m_auditNoHasBeenSet;
}

int64_t VersionBoardResp::GetShowCase() const
{
    return m_showCase;
}

void VersionBoardResp::SetShowCase(const int64_t& _showCase)
{
    m_showCase = _showCase;
    m_showCaseHasBeenSet = true;
}

bool VersionBoardResp::ShowCaseHasBeenSet() const
{
    return m_showCaseHasBeenSet;
}

int64_t VersionBoardResp::GetScanStatus() const
{
    return m_scanStatus;
}

void VersionBoardResp::SetScanStatus(const int64_t& _scanStatus)
{
    m_scanStatus = _scanStatus;
    m_scanStatusHasBeenSet = true;
}

bool VersionBoardResp::ScanStatusHasBeenSet() const
{
    return m_scanStatusHasBeenSet;
}

int64_t VersionBoardResp::GetScanScore() const
{
    return m_scanScore;
}

void VersionBoardResp::SetScanScore(const int64_t& _scanScore)
{
    m_scanScore = _scanScore;
    m_scanScoreHasBeenSet = true;
}

bool VersionBoardResp::ScanScoreHasBeenSet() const
{
    return m_scanScoreHasBeenSet;
}

int64_t VersionBoardResp::GetRollbackVersion() const
{
    return m_rollbackVersion;
}

void VersionBoardResp::SetRollbackVersion(const int64_t& _rollbackVersion)
{
    m_rollbackVersion = _rollbackVersion;
    m_rollbackVersionHasBeenSet = true;
}

bool VersionBoardResp::RollbackVersionHasBeenSet() const
{
    return m_rollbackVersionHasBeenSet;
}

int64_t VersionBoardResp::GetStatus() const
{
    return m_status;
}

void VersionBoardResp::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool VersionBoardResp::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string VersionBoardResp::GetScanHtmlPath() const
{
    return m_scanHtmlPath;
}

void VersionBoardResp::SetScanHtmlPath(const string& _scanHtmlPath)
{
    m_scanHtmlPath = _scanHtmlPath;
    m_scanHtmlPathHasBeenSet = true;
}

bool VersionBoardResp::ScanHtmlPathHasBeenSet() const
{
    return m_scanHtmlPathHasBeenSet;
}

int64_t VersionBoardResp::GetVersionCurrentStatus() const
{
    return m_versionCurrentStatus;
}

void VersionBoardResp::SetVersionCurrentStatus(const int64_t& _versionCurrentStatus)
{
    m_versionCurrentStatus = _versionCurrentStatus;
    m_versionCurrentStatusHasBeenSet = true;
}

bool VersionBoardResp::VersionCurrentStatusHasBeenSet() const
{
    return m_versionCurrentStatusHasBeenSet;
}

