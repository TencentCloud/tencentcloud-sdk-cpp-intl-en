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

#include <tencentcloud/tcmpp/v20240801/model/DescribeApplicationMNPVersionAuditListInfoResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcmpp::V20240801::Model;
using namespace std;

DescribeApplicationMNPVersionAuditListInfoResp::DescribeApplicationMNPVersionAuditListInfoResp() :
    m_auditNoHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_auditStatusHasBeenSet(false),
    m_mNPIdHasBeenSet(false),
    m_mNPVersionHasBeenSet(false),
    m_mNPVersionIdHasBeenSet(false),
    m_applyUserHasBeenSet(false),
    m_applyTimeHasBeenSet(false),
    m_mNPNameHasBeenSet(false),
    m_mNPIconHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_applicationLogoHasBeenSet(false),
    m_teamIdHasBeenSet(false),
    m_teamNameHasBeenSet(false),
    m_applicationAndUrlHasBeenSet(false),
    m_applicationIOSUrlHasBeenSet(false),
    m_mNPQrCodeUrlHasBeenSet(false),
    m_mNPTypeHasBeenSet(false),
    m_auditUserHasBeenSet(false),
    m_auditTimeHasBeenSet(false),
    m_auditNoteHasBeenSet(false),
    m_scanStatusHasBeenSet(false),
    m_scanScoreHasBeenSet(false),
    m_scanHtmlPathHasBeenSet(false)
{
}

CoreInternalOutcome DescribeApplicationMNPVersionAuditListInfoResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AuditNo") && !value["AuditNo"].IsNull())
    {
        if (!value["AuditNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeApplicationMNPVersionAuditListInfoResp.AuditNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_auditNo = string(value["AuditNo"].GetString());
        m_auditNoHasBeenSet = true;
    }

    if (value.HasMember("ApplicationId") && !value["ApplicationId"].IsNull())
    {
        if (!value["ApplicationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeApplicationMNPVersionAuditListInfoResp.ApplicationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationId = string(value["ApplicationId"].GetString());
        m_applicationIdHasBeenSet = true;
    }

    if (value.HasMember("AuditStatus") && !value["AuditStatus"].IsNull())
    {
        if (!value["AuditStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeApplicationMNPVersionAuditListInfoResp.AuditStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_auditStatus = value["AuditStatus"].GetInt64();
        m_auditStatusHasBeenSet = true;
    }

    if (value.HasMember("MNPId") && !value["MNPId"].IsNull())
    {
        if (!value["MNPId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeApplicationMNPVersionAuditListInfoResp.MNPId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPId = string(value["MNPId"].GetString());
        m_mNPIdHasBeenSet = true;
    }

    if (value.HasMember("MNPVersion") && !value["MNPVersion"].IsNull())
    {
        if (!value["MNPVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeApplicationMNPVersionAuditListInfoResp.MNPVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPVersion = string(value["MNPVersion"].GetString());
        m_mNPVersionHasBeenSet = true;
    }

    if (value.HasMember("MNPVersionId") && !value["MNPVersionId"].IsNull())
    {
        if (!value["MNPVersionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeApplicationMNPVersionAuditListInfoResp.MNPVersionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mNPVersionId = value["MNPVersionId"].GetInt64();
        m_mNPVersionIdHasBeenSet = true;
    }

    if (value.HasMember("ApplyUser") && !value["ApplyUser"].IsNull())
    {
        if (!value["ApplyUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeApplicationMNPVersionAuditListInfoResp.ApplyUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applyUser = string(value["ApplyUser"].GetString());
        m_applyUserHasBeenSet = true;
    }

    if (value.HasMember("ApplyTime") && !value["ApplyTime"].IsNull())
    {
        if (!value["ApplyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeApplicationMNPVersionAuditListInfoResp.ApplyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applyTime = string(value["ApplyTime"].GetString());
        m_applyTimeHasBeenSet = true;
    }

    if (value.HasMember("MNPName") && !value["MNPName"].IsNull())
    {
        if (!value["MNPName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeApplicationMNPVersionAuditListInfoResp.MNPName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPName = string(value["MNPName"].GetString());
        m_mNPNameHasBeenSet = true;
    }

    if (value.HasMember("MNPIcon") && !value["MNPIcon"].IsNull())
    {
        if (!value["MNPIcon"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeApplicationMNPVersionAuditListInfoResp.MNPIcon` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPIcon = string(value["MNPIcon"].GetString());
        m_mNPIconHasBeenSet = true;
    }

    if (value.HasMember("ApplicationName") && !value["ApplicationName"].IsNull())
    {
        if (!value["ApplicationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeApplicationMNPVersionAuditListInfoResp.ApplicationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationName = string(value["ApplicationName"].GetString());
        m_applicationNameHasBeenSet = true;
    }

    if (value.HasMember("ApplicationLogo") && !value["ApplicationLogo"].IsNull())
    {
        if (!value["ApplicationLogo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeApplicationMNPVersionAuditListInfoResp.ApplicationLogo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationLogo = string(value["ApplicationLogo"].GetString());
        m_applicationLogoHasBeenSet = true;
    }

    if (value.HasMember("TeamId") && !value["TeamId"].IsNull())
    {
        if (!value["TeamId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeApplicationMNPVersionAuditListInfoResp.TeamId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_teamId = string(value["TeamId"].GetString());
        m_teamIdHasBeenSet = true;
    }

    if (value.HasMember("TeamName") && !value["TeamName"].IsNull())
    {
        if (!value["TeamName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeApplicationMNPVersionAuditListInfoResp.TeamName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_teamName = string(value["TeamName"].GetString());
        m_teamNameHasBeenSet = true;
    }

    if (value.HasMember("ApplicationAndUrl") && !value["ApplicationAndUrl"].IsNull())
    {
        if (!value["ApplicationAndUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeApplicationMNPVersionAuditListInfoResp.ApplicationAndUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationAndUrl = string(value["ApplicationAndUrl"].GetString());
        m_applicationAndUrlHasBeenSet = true;
    }

    if (value.HasMember("ApplicationIOSUrl") && !value["ApplicationIOSUrl"].IsNull())
    {
        if (!value["ApplicationIOSUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeApplicationMNPVersionAuditListInfoResp.ApplicationIOSUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationIOSUrl = string(value["ApplicationIOSUrl"].GetString());
        m_applicationIOSUrlHasBeenSet = true;
    }

    if (value.HasMember("MNPQrCodeUrl") && !value["MNPQrCodeUrl"].IsNull())
    {
        if (!value["MNPQrCodeUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeApplicationMNPVersionAuditListInfoResp.MNPQrCodeUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPQrCodeUrl = string(value["MNPQrCodeUrl"].GetString());
        m_mNPQrCodeUrlHasBeenSet = true;
    }

    if (value.HasMember("MNPType") && !value["MNPType"].IsNull())
    {
        if (!value["MNPType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeApplicationMNPVersionAuditListInfoResp.MNPType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPType = string(value["MNPType"].GetString());
        m_mNPTypeHasBeenSet = true;
    }

    if (value.HasMember("AuditUser") && !value["AuditUser"].IsNull())
    {
        if (!value["AuditUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeApplicationMNPVersionAuditListInfoResp.AuditUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_auditUser = string(value["AuditUser"].GetString());
        m_auditUserHasBeenSet = true;
    }

    if (value.HasMember("AuditTime") && !value["AuditTime"].IsNull())
    {
        if (!value["AuditTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeApplicationMNPVersionAuditListInfoResp.AuditTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_auditTime = string(value["AuditTime"].GetString());
        m_auditTimeHasBeenSet = true;
    }

    if (value.HasMember("AuditNote") && !value["AuditNote"].IsNull())
    {
        if (!value["AuditNote"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeApplicationMNPVersionAuditListInfoResp.AuditNote` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_auditNote = string(value["AuditNote"].GetString());
        m_auditNoteHasBeenSet = true;
    }

    if (value.HasMember("ScanStatus") && !value["ScanStatus"].IsNull())
    {
        if (!value["ScanStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeApplicationMNPVersionAuditListInfoResp.ScanStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scanStatus = value["ScanStatus"].GetInt64();
        m_scanStatusHasBeenSet = true;
    }

    if (value.HasMember("ScanScore") && !value["ScanScore"].IsNull())
    {
        if (!value["ScanScore"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeApplicationMNPVersionAuditListInfoResp.ScanScore` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scanScore = value["ScanScore"].GetInt64();
        m_scanScoreHasBeenSet = true;
    }

    if (value.HasMember("ScanHtmlPath") && !value["ScanHtmlPath"].IsNull())
    {
        if (!value["ScanHtmlPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeApplicationMNPVersionAuditListInfoResp.ScanHtmlPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanHtmlPath = string(value["ScanHtmlPath"].GetString());
        m_scanHtmlPathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeApplicationMNPVersionAuditListInfoResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_auditStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_auditStatus, allocator);
    }

    if (m_mNPIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mNPId.c_str(), allocator).Move(), allocator);
    }

    if (m_mNPVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mNPVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_mNPVersionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPVersionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mNPVersionId, allocator);
    }

    if (m_applyUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applyUser.c_str(), allocator).Move(), allocator);
    }

    if (m_applyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applyTime.c_str(), allocator).Move(), allocator);
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

    if (m_applicationAndUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationAndUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationAndUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationIOSUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationIOSUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationIOSUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_mNPQrCodeUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPQrCodeUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mNPQrCodeUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_mNPTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mNPType.c_str(), allocator).Move(), allocator);
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

    if (m_auditNoteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditNote";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_auditNote.c_str(), allocator).Move(), allocator);
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

    if (m_scanHtmlPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanHtmlPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scanHtmlPath.c_str(), allocator).Move(), allocator);
    }

}


string DescribeApplicationMNPVersionAuditListInfoResp::GetAuditNo() const
{
    return m_auditNo;
}

void DescribeApplicationMNPVersionAuditListInfoResp::SetAuditNo(const string& _auditNo)
{
    m_auditNo = _auditNo;
    m_auditNoHasBeenSet = true;
}

bool DescribeApplicationMNPVersionAuditListInfoResp::AuditNoHasBeenSet() const
{
    return m_auditNoHasBeenSet;
}

string DescribeApplicationMNPVersionAuditListInfoResp::GetApplicationId() const
{
    return m_applicationId;
}

void DescribeApplicationMNPVersionAuditListInfoResp::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool DescribeApplicationMNPVersionAuditListInfoResp::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

int64_t DescribeApplicationMNPVersionAuditListInfoResp::GetAuditStatus() const
{
    return m_auditStatus;
}

void DescribeApplicationMNPVersionAuditListInfoResp::SetAuditStatus(const int64_t& _auditStatus)
{
    m_auditStatus = _auditStatus;
    m_auditStatusHasBeenSet = true;
}

bool DescribeApplicationMNPVersionAuditListInfoResp::AuditStatusHasBeenSet() const
{
    return m_auditStatusHasBeenSet;
}

string DescribeApplicationMNPVersionAuditListInfoResp::GetMNPId() const
{
    return m_mNPId;
}

void DescribeApplicationMNPVersionAuditListInfoResp::SetMNPId(const string& _mNPId)
{
    m_mNPId = _mNPId;
    m_mNPIdHasBeenSet = true;
}

bool DescribeApplicationMNPVersionAuditListInfoResp::MNPIdHasBeenSet() const
{
    return m_mNPIdHasBeenSet;
}

string DescribeApplicationMNPVersionAuditListInfoResp::GetMNPVersion() const
{
    return m_mNPVersion;
}

void DescribeApplicationMNPVersionAuditListInfoResp::SetMNPVersion(const string& _mNPVersion)
{
    m_mNPVersion = _mNPVersion;
    m_mNPVersionHasBeenSet = true;
}

bool DescribeApplicationMNPVersionAuditListInfoResp::MNPVersionHasBeenSet() const
{
    return m_mNPVersionHasBeenSet;
}

int64_t DescribeApplicationMNPVersionAuditListInfoResp::GetMNPVersionId() const
{
    return m_mNPVersionId;
}

void DescribeApplicationMNPVersionAuditListInfoResp::SetMNPVersionId(const int64_t& _mNPVersionId)
{
    m_mNPVersionId = _mNPVersionId;
    m_mNPVersionIdHasBeenSet = true;
}

bool DescribeApplicationMNPVersionAuditListInfoResp::MNPVersionIdHasBeenSet() const
{
    return m_mNPVersionIdHasBeenSet;
}

string DescribeApplicationMNPVersionAuditListInfoResp::GetApplyUser() const
{
    return m_applyUser;
}

void DescribeApplicationMNPVersionAuditListInfoResp::SetApplyUser(const string& _applyUser)
{
    m_applyUser = _applyUser;
    m_applyUserHasBeenSet = true;
}

bool DescribeApplicationMNPVersionAuditListInfoResp::ApplyUserHasBeenSet() const
{
    return m_applyUserHasBeenSet;
}

string DescribeApplicationMNPVersionAuditListInfoResp::GetApplyTime() const
{
    return m_applyTime;
}

void DescribeApplicationMNPVersionAuditListInfoResp::SetApplyTime(const string& _applyTime)
{
    m_applyTime = _applyTime;
    m_applyTimeHasBeenSet = true;
}

bool DescribeApplicationMNPVersionAuditListInfoResp::ApplyTimeHasBeenSet() const
{
    return m_applyTimeHasBeenSet;
}

string DescribeApplicationMNPVersionAuditListInfoResp::GetMNPName() const
{
    return m_mNPName;
}

void DescribeApplicationMNPVersionAuditListInfoResp::SetMNPName(const string& _mNPName)
{
    m_mNPName = _mNPName;
    m_mNPNameHasBeenSet = true;
}

bool DescribeApplicationMNPVersionAuditListInfoResp::MNPNameHasBeenSet() const
{
    return m_mNPNameHasBeenSet;
}

string DescribeApplicationMNPVersionAuditListInfoResp::GetMNPIcon() const
{
    return m_mNPIcon;
}

void DescribeApplicationMNPVersionAuditListInfoResp::SetMNPIcon(const string& _mNPIcon)
{
    m_mNPIcon = _mNPIcon;
    m_mNPIconHasBeenSet = true;
}

bool DescribeApplicationMNPVersionAuditListInfoResp::MNPIconHasBeenSet() const
{
    return m_mNPIconHasBeenSet;
}

string DescribeApplicationMNPVersionAuditListInfoResp::GetApplicationName() const
{
    return m_applicationName;
}

void DescribeApplicationMNPVersionAuditListInfoResp::SetApplicationName(const string& _applicationName)
{
    m_applicationName = _applicationName;
    m_applicationNameHasBeenSet = true;
}

bool DescribeApplicationMNPVersionAuditListInfoResp::ApplicationNameHasBeenSet() const
{
    return m_applicationNameHasBeenSet;
}

string DescribeApplicationMNPVersionAuditListInfoResp::GetApplicationLogo() const
{
    return m_applicationLogo;
}

void DescribeApplicationMNPVersionAuditListInfoResp::SetApplicationLogo(const string& _applicationLogo)
{
    m_applicationLogo = _applicationLogo;
    m_applicationLogoHasBeenSet = true;
}

bool DescribeApplicationMNPVersionAuditListInfoResp::ApplicationLogoHasBeenSet() const
{
    return m_applicationLogoHasBeenSet;
}

string DescribeApplicationMNPVersionAuditListInfoResp::GetTeamId() const
{
    return m_teamId;
}

void DescribeApplicationMNPVersionAuditListInfoResp::SetTeamId(const string& _teamId)
{
    m_teamId = _teamId;
    m_teamIdHasBeenSet = true;
}

bool DescribeApplicationMNPVersionAuditListInfoResp::TeamIdHasBeenSet() const
{
    return m_teamIdHasBeenSet;
}

string DescribeApplicationMNPVersionAuditListInfoResp::GetTeamName() const
{
    return m_teamName;
}

void DescribeApplicationMNPVersionAuditListInfoResp::SetTeamName(const string& _teamName)
{
    m_teamName = _teamName;
    m_teamNameHasBeenSet = true;
}

bool DescribeApplicationMNPVersionAuditListInfoResp::TeamNameHasBeenSet() const
{
    return m_teamNameHasBeenSet;
}

string DescribeApplicationMNPVersionAuditListInfoResp::GetApplicationAndUrl() const
{
    return m_applicationAndUrl;
}

void DescribeApplicationMNPVersionAuditListInfoResp::SetApplicationAndUrl(const string& _applicationAndUrl)
{
    m_applicationAndUrl = _applicationAndUrl;
    m_applicationAndUrlHasBeenSet = true;
}

bool DescribeApplicationMNPVersionAuditListInfoResp::ApplicationAndUrlHasBeenSet() const
{
    return m_applicationAndUrlHasBeenSet;
}

string DescribeApplicationMNPVersionAuditListInfoResp::GetApplicationIOSUrl() const
{
    return m_applicationIOSUrl;
}

void DescribeApplicationMNPVersionAuditListInfoResp::SetApplicationIOSUrl(const string& _applicationIOSUrl)
{
    m_applicationIOSUrl = _applicationIOSUrl;
    m_applicationIOSUrlHasBeenSet = true;
}

bool DescribeApplicationMNPVersionAuditListInfoResp::ApplicationIOSUrlHasBeenSet() const
{
    return m_applicationIOSUrlHasBeenSet;
}

string DescribeApplicationMNPVersionAuditListInfoResp::GetMNPQrCodeUrl() const
{
    return m_mNPQrCodeUrl;
}

void DescribeApplicationMNPVersionAuditListInfoResp::SetMNPQrCodeUrl(const string& _mNPQrCodeUrl)
{
    m_mNPQrCodeUrl = _mNPQrCodeUrl;
    m_mNPQrCodeUrlHasBeenSet = true;
}

bool DescribeApplicationMNPVersionAuditListInfoResp::MNPQrCodeUrlHasBeenSet() const
{
    return m_mNPQrCodeUrlHasBeenSet;
}

string DescribeApplicationMNPVersionAuditListInfoResp::GetMNPType() const
{
    return m_mNPType;
}

void DescribeApplicationMNPVersionAuditListInfoResp::SetMNPType(const string& _mNPType)
{
    m_mNPType = _mNPType;
    m_mNPTypeHasBeenSet = true;
}

bool DescribeApplicationMNPVersionAuditListInfoResp::MNPTypeHasBeenSet() const
{
    return m_mNPTypeHasBeenSet;
}

string DescribeApplicationMNPVersionAuditListInfoResp::GetAuditUser() const
{
    return m_auditUser;
}

void DescribeApplicationMNPVersionAuditListInfoResp::SetAuditUser(const string& _auditUser)
{
    m_auditUser = _auditUser;
    m_auditUserHasBeenSet = true;
}

bool DescribeApplicationMNPVersionAuditListInfoResp::AuditUserHasBeenSet() const
{
    return m_auditUserHasBeenSet;
}

string DescribeApplicationMNPVersionAuditListInfoResp::GetAuditTime() const
{
    return m_auditTime;
}

void DescribeApplicationMNPVersionAuditListInfoResp::SetAuditTime(const string& _auditTime)
{
    m_auditTime = _auditTime;
    m_auditTimeHasBeenSet = true;
}

bool DescribeApplicationMNPVersionAuditListInfoResp::AuditTimeHasBeenSet() const
{
    return m_auditTimeHasBeenSet;
}

string DescribeApplicationMNPVersionAuditListInfoResp::GetAuditNote() const
{
    return m_auditNote;
}

void DescribeApplicationMNPVersionAuditListInfoResp::SetAuditNote(const string& _auditNote)
{
    m_auditNote = _auditNote;
    m_auditNoteHasBeenSet = true;
}

bool DescribeApplicationMNPVersionAuditListInfoResp::AuditNoteHasBeenSet() const
{
    return m_auditNoteHasBeenSet;
}

int64_t DescribeApplicationMNPVersionAuditListInfoResp::GetScanStatus() const
{
    return m_scanStatus;
}

void DescribeApplicationMNPVersionAuditListInfoResp::SetScanStatus(const int64_t& _scanStatus)
{
    m_scanStatus = _scanStatus;
    m_scanStatusHasBeenSet = true;
}

bool DescribeApplicationMNPVersionAuditListInfoResp::ScanStatusHasBeenSet() const
{
    return m_scanStatusHasBeenSet;
}

int64_t DescribeApplicationMNPVersionAuditListInfoResp::GetScanScore() const
{
    return m_scanScore;
}

void DescribeApplicationMNPVersionAuditListInfoResp::SetScanScore(const int64_t& _scanScore)
{
    m_scanScore = _scanScore;
    m_scanScoreHasBeenSet = true;
}

bool DescribeApplicationMNPVersionAuditListInfoResp::ScanScoreHasBeenSet() const
{
    return m_scanScoreHasBeenSet;
}

string DescribeApplicationMNPVersionAuditListInfoResp::GetScanHtmlPath() const
{
    return m_scanHtmlPath;
}

void DescribeApplicationMNPVersionAuditListInfoResp::SetScanHtmlPath(const string& _scanHtmlPath)
{
    m_scanHtmlPath = _scanHtmlPath;
    m_scanHtmlPathHasBeenSet = true;
}

bool DescribeApplicationMNPVersionAuditListInfoResp::ScanHtmlPathHasBeenSet() const
{
    return m_scanHtmlPathHasBeenSet;
}

