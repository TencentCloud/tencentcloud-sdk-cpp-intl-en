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

#include <tencentcloud/tcsas/v20250106/model/DescribeMNPApprovalListData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

DescribeMNPApprovalListData::DescribeMNPApprovalListData() :
    m_approvalNoHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_approvalStatusHasBeenSet(false),
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
    m_mNPQrCodeUrlHasBeenSet(false),
    m_mNPTypeHasBeenSet(false),
    m_approvalUserHasBeenSet(false),
    m_approvalTimeHasBeenSet(false),
    m_approvalNoteHasBeenSet(false)
{
}

CoreInternalOutcome DescribeMNPApprovalListData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApprovalNo") && !value["ApprovalNo"].IsNull())
    {
        if (!value["ApprovalNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPApprovalListData.ApprovalNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approvalNo = string(value["ApprovalNo"].GetString());
        m_approvalNoHasBeenSet = true;
    }

    if (value.HasMember("ApplicationId") && !value["ApplicationId"].IsNull())
    {
        if (!value["ApplicationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPApprovalListData.ApplicationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationId = string(value["ApplicationId"].GetString());
        m_applicationIdHasBeenSet = true;
    }

    if (value.HasMember("ApprovalStatus") && !value["ApprovalStatus"].IsNull())
    {
        if (!value["ApprovalStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPApprovalListData.ApprovalStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_approvalStatus = value["ApprovalStatus"].GetInt64();
        m_approvalStatusHasBeenSet = true;
    }

    if (value.HasMember("MNPId") && !value["MNPId"].IsNull())
    {
        if (!value["MNPId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPApprovalListData.MNPId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPId = string(value["MNPId"].GetString());
        m_mNPIdHasBeenSet = true;
    }

    if (value.HasMember("MNPVersion") && !value["MNPVersion"].IsNull())
    {
        if (!value["MNPVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPApprovalListData.MNPVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPVersion = string(value["MNPVersion"].GetString());
        m_mNPVersionHasBeenSet = true;
    }

    if (value.HasMember("MNPVersionId") && !value["MNPVersionId"].IsNull())
    {
        if (!value["MNPVersionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPApprovalListData.MNPVersionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mNPVersionId = value["MNPVersionId"].GetInt64();
        m_mNPVersionIdHasBeenSet = true;
    }

    if (value.HasMember("ApplyUser") && !value["ApplyUser"].IsNull())
    {
        if (!value["ApplyUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPApprovalListData.ApplyUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applyUser = string(value["ApplyUser"].GetString());
        m_applyUserHasBeenSet = true;
    }

    if (value.HasMember("ApplyTime") && !value["ApplyTime"].IsNull())
    {
        if (!value["ApplyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPApprovalListData.ApplyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applyTime = string(value["ApplyTime"].GetString());
        m_applyTimeHasBeenSet = true;
    }

    if (value.HasMember("MNPName") && !value["MNPName"].IsNull())
    {
        if (!value["MNPName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPApprovalListData.MNPName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPName = string(value["MNPName"].GetString());
        m_mNPNameHasBeenSet = true;
    }

    if (value.HasMember("MNPIcon") && !value["MNPIcon"].IsNull())
    {
        if (!value["MNPIcon"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPApprovalListData.MNPIcon` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPIcon = string(value["MNPIcon"].GetString());
        m_mNPIconHasBeenSet = true;
    }

    if (value.HasMember("ApplicationName") && !value["ApplicationName"].IsNull())
    {
        if (!value["ApplicationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPApprovalListData.ApplicationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationName = string(value["ApplicationName"].GetString());
        m_applicationNameHasBeenSet = true;
    }

    if (value.HasMember("ApplicationLogo") && !value["ApplicationLogo"].IsNull())
    {
        if (!value["ApplicationLogo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPApprovalListData.ApplicationLogo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationLogo = string(value["ApplicationLogo"].GetString());
        m_applicationLogoHasBeenSet = true;
    }

    if (value.HasMember("TeamId") && !value["TeamId"].IsNull())
    {
        if (!value["TeamId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPApprovalListData.TeamId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_teamId = string(value["TeamId"].GetString());
        m_teamIdHasBeenSet = true;
    }

    if (value.HasMember("TeamName") && !value["TeamName"].IsNull())
    {
        if (!value["TeamName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPApprovalListData.TeamName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_teamName = string(value["TeamName"].GetString());
        m_teamNameHasBeenSet = true;
    }

    if (value.HasMember("MNPQrCodeUrl") && !value["MNPQrCodeUrl"].IsNull())
    {
        if (!value["MNPQrCodeUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPApprovalListData.MNPQrCodeUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPQrCodeUrl = string(value["MNPQrCodeUrl"].GetString());
        m_mNPQrCodeUrlHasBeenSet = true;
    }

    if (value.HasMember("MNPType") && !value["MNPType"].IsNull())
    {
        if (!value["MNPType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPApprovalListData.MNPType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPType = string(value["MNPType"].GetString());
        m_mNPTypeHasBeenSet = true;
    }

    if (value.HasMember("ApprovalUser") && !value["ApprovalUser"].IsNull())
    {
        if (!value["ApprovalUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPApprovalListData.ApprovalUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approvalUser = string(value["ApprovalUser"].GetString());
        m_approvalUserHasBeenSet = true;
    }

    if (value.HasMember("ApprovalTime") && !value["ApprovalTime"].IsNull())
    {
        if (!value["ApprovalTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPApprovalListData.ApprovalTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approvalTime = string(value["ApprovalTime"].GetString());
        m_approvalTimeHasBeenSet = true;
    }

    if (value.HasMember("ApprovalNote") && !value["ApprovalNote"].IsNull())
    {
        if (!value["ApprovalNote"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPApprovalListData.ApprovalNote` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approvalNote = string(value["ApprovalNote"].GetString());
        m_approvalNoteHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeMNPApprovalListData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_approvalNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApprovalNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approvalNo.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_approvalStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApprovalStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_approvalStatus, allocator);
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

    if (m_approvalUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApprovalUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approvalUser.c_str(), allocator).Move(), allocator);
    }

    if (m_approvalTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApprovalTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approvalTime.c_str(), allocator).Move(), allocator);
    }

    if (m_approvalNoteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApprovalNote";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approvalNote.c_str(), allocator).Move(), allocator);
    }

}


string DescribeMNPApprovalListData::GetApprovalNo() const
{
    return m_approvalNo;
}

void DescribeMNPApprovalListData::SetApprovalNo(const string& _approvalNo)
{
    m_approvalNo = _approvalNo;
    m_approvalNoHasBeenSet = true;
}

bool DescribeMNPApprovalListData::ApprovalNoHasBeenSet() const
{
    return m_approvalNoHasBeenSet;
}

string DescribeMNPApprovalListData::GetApplicationId() const
{
    return m_applicationId;
}

void DescribeMNPApprovalListData::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool DescribeMNPApprovalListData::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

int64_t DescribeMNPApprovalListData::GetApprovalStatus() const
{
    return m_approvalStatus;
}

void DescribeMNPApprovalListData::SetApprovalStatus(const int64_t& _approvalStatus)
{
    m_approvalStatus = _approvalStatus;
    m_approvalStatusHasBeenSet = true;
}

bool DescribeMNPApprovalListData::ApprovalStatusHasBeenSet() const
{
    return m_approvalStatusHasBeenSet;
}

string DescribeMNPApprovalListData::GetMNPId() const
{
    return m_mNPId;
}

void DescribeMNPApprovalListData::SetMNPId(const string& _mNPId)
{
    m_mNPId = _mNPId;
    m_mNPIdHasBeenSet = true;
}

bool DescribeMNPApprovalListData::MNPIdHasBeenSet() const
{
    return m_mNPIdHasBeenSet;
}

string DescribeMNPApprovalListData::GetMNPVersion() const
{
    return m_mNPVersion;
}

void DescribeMNPApprovalListData::SetMNPVersion(const string& _mNPVersion)
{
    m_mNPVersion = _mNPVersion;
    m_mNPVersionHasBeenSet = true;
}

bool DescribeMNPApprovalListData::MNPVersionHasBeenSet() const
{
    return m_mNPVersionHasBeenSet;
}

int64_t DescribeMNPApprovalListData::GetMNPVersionId() const
{
    return m_mNPVersionId;
}

void DescribeMNPApprovalListData::SetMNPVersionId(const int64_t& _mNPVersionId)
{
    m_mNPVersionId = _mNPVersionId;
    m_mNPVersionIdHasBeenSet = true;
}

bool DescribeMNPApprovalListData::MNPVersionIdHasBeenSet() const
{
    return m_mNPVersionIdHasBeenSet;
}

string DescribeMNPApprovalListData::GetApplyUser() const
{
    return m_applyUser;
}

void DescribeMNPApprovalListData::SetApplyUser(const string& _applyUser)
{
    m_applyUser = _applyUser;
    m_applyUserHasBeenSet = true;
}

bool DescribeMNPApprovalListData::ApplyUserHasBeenSet() const
{
    return m_applyUserHasBeenSet;
}

string DescribeMNPApprovalListData::GetApplyTime() const
{
    return m_applyTime;
}

void DescribeMNPApprovalListData::SetApplyTime(const string& _applyTime)
{
    m_applyTime = _applyTime;
    m_applyTimeHasBeenSet = true;
}

bool DescribeMNPApprovalListData::ApplyTimeHasBeenSet() const
{
    return m_applyTimeHasBeenSet;
}

string DescribeMNPApprovalListData::GetMNPName() const
{
    return m_mNPName;
}

void DescribeMNPApprovalListData::SetMNPName(const string& _mNPName)
{
    m_mNPName = _mNPName;
    m_mNPNameHasBeenSet = true;
}

bool DescribeMNPApprovalListData::MNPNameHasBeenSet() const
{
    return m_mNPNameHasBeenSet;
}

string DescribeMNPApprovalListData::GetMNPIcon() const
{
    return m_mNPIcon;
}

void DescribeMNPApprovalListData::SetMNPIcon(const string& _mNPIcon)
{
    m_mNPIcon = _mNPIcon;
    m_mNPIconHasBeenSet = true;
}

bool DescribeMNPApprovalListData::MNPIconHasBeenSet() const
{
    return m_mNPIconHasBeenSet;
}

string DescribeMNPApprovalListData::GetApplicationName() const
{
    return m_applicationName;
}

void DescribeMNPApprovalListData::SetApplicationName(const string& _applicationName)
{
    m_applicationName = _applicationName;
    m_applicationNameHasBeenSet = true;
}

bool DescribeMNPApprovalListData::ApplicationNameHasBeenSet() const
{
    return m_applicationNameHasBeenSet;
}

string DescribeMNPApprovalListData::GetApplicationLogo() const
{
    return m_applicationLogo;
}

void DescribeMNPApprovalListData::SetApplicationLogo(const string& _applicationLogo)
{
    m_applicationLogo = _applicationLogo;
    m_applicationLogoHasBeenSet = true;
}

bool DescribeMNPApprovalListData::ApplicationLogoHasBeenSet() const
{
    return m_applicationLogoHasBeenSet;
}

string DescribeMNPApprovalListData::GetTeamId() const
{
    return m_teamId;
}

void DescribeMNPApprovalListData::SetTeamId(const string& _teamId)
{
    m_teamId = _teamId;
    m_teamIdHasBeenSet = true;
}

bool DescribeMNPApprovalListData::TeamIdHasBeenSet() const
{
    return m_teamIdHasBeenSet;
}

string DescribeMNPApprovalListData::GetTeamName() const
{
    return m_teamName;
}

void DescribeMNPApprovalListData::SetTeamName(const string& _teamName)
{
    m_teamName = _teamName;
    m_teamNameHasBeenSet = true;
}

bool DescribeMNPApprovalListData::TeamNameHasBeenSet() const
{
    return m_teamNameHasBeenSet;
}

string DescribeMNPApprovalListData::GetMNPQrCodeUrl() const
{
    return m_mNPQrCodeUrl;
}

void DescribeMNPApprovalListData::SetMNPQrCodeUrl(const string& _mNPQrCodeUrl)
{
    m_mNPQrCodeUrl = _mNPQrCodeUrl;
    m_mNPQrCodeUrlHasBeenSet = true;
}

bool DescribeMNPApprovalListData::MNPQrCodeUrlHasBeenSet() const
{
    return m_mNPQrCodeUrlHasBeenSet;
}

string DescribeMNPApprovalListData::GetMNPType() const
{
    return m_mNPType;
}

void DescribeMNPApprovalListData::SetMNPType(const string& _mNPType)
{
    m_mNPType = _mNPType;
    m_mNPTypeHasBeenSet = true;
}

bool DescribeMNPApprovalListData::MNPTypeHasBeenSet() const
{
    return m_mNPTypeHasBeenSet;
}

string DescribeMNPApprovalListData::GetApprovalUser() const
{
    return m_approvalUser;
}

void DescribeMNPApprovalListData::SetApprovalUser(const string& _approvalUser)
{
    m_approvalUser = _approvalUser;
    m_approvalUserHasBeenSet = true;
}

bool DescribeMNPApprovalListData::ApprovalUserHasBeenSet() const
{
    return m_approvalUserHasBeenSet;
}

string DescribeMNPApprovalListData::GetApprovalTime() const
{
    return m_approvalTime;
}

void DescribeMNPApprovalListData::SetApprovalTime(const string& _approvalTime)
{
    m_approvalTime = _approvalTime;
    m_approvalTimeHasBeenSet = true;
}

bool DescribeMNPApprovalListData::ApprovalTimeHasBeenSet() const
{
    return m_approvalTimeHasBeenSet;
}

string DescribeMNPApprovalListData::GetApprovalNote() const
{
    return m_approvalNote;
}

void DescribeMNPApprovalListData::SetApprovalNote(const string& _approvalNote)
{
    m_approvalNote = _approvalNote;
    m_approvalNoteHasBeenSet = true;
}

bool DescribeMNPApprovalListData::ApprovalNoteHasBeenSet() const
{
    return m_approvalNoteHasBeenSet;
}

