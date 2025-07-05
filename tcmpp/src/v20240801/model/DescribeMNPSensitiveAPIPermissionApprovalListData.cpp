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

#include <tencentcloud/tcmpp/v20240801/model/DescribeMNPSensitiveAPIPermissionApprovalListData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcmpp::V20240801::Model;
using namespace std;

DescribeMNPSensitiveAPIPermissionApprovalListData::DescribeMNPSensitiveAPIPermissionApprovalListData() :
    m_approvalNoHasBeenSet(false),
    m_aPIIdHasBeenSet(false),
    m_aPINameHasBeenSet(false),
    m_aPIMethodHasBeenSet(false),
    m_mNPIdHasBeenSet(false),
    m_mNPNameHasBeenSet(false),
    m_applyUserHasBeenSet(false),
    m_applyTimeHasBeenSet(false),
    m_applyNoteHasBeenSet(false),
    m_approvalStatusHasBeenSet(false),
    m_approvalUserHasBeenSet(false),
    m_approvalTimeHasBeenSet(false),
    m_approvalNoteHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_applicationLogoHasBeenSet(false),
    m_aPITypeHasBeenSet(false),
    m_aPIDescHasBeenSet(false)
{
}

CoreInternalOutcome DescribeMNPSensitiveAPIPermissionApprovalListData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApprovalNo") && !value["ApprovalNo"].IsNull())
    {
        if (!value["ApprovalNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPSensitiveAPIPermissionApprovalListData.ApprovalNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approvalNo = string(value["ApprovalNo"].GetString());
        m_approvalNoHasBeenSet = true;
    }

    if (value.HasMember("APIId") && !value["APIId"].IsNull())
    {
        if (!value["APIId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPSensitiveAPIPermissionApprovalListData.APIId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aPIId = string(value["APIId"].GetString());
        m_aPIIdHasBeenSet = true;
    }

    if (value.HasMember("APIName") && !value["APIName"].IsNull())
    {
        if (!value["APIName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPSensitiveAPIPermissionApprovalListData.APIName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aPIName = string(value["APIName"].GetString());
        m_aPINameHasBeenSet = true;
    }

    if (value.HasMember("APIMethod") && !value["APIMethod"].IsNull())
    {
        if (!value["APIMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPSensitiveAPIPermissionApprovalListData.APIMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aPIMethod = string(value["APIMethod"].GetString());
        m_aPIMethodHasBeenSet = true;
    }

    if (value.HasMember("MNPId") && !value["MNPId"].IsNull())
    {
        if (!value["MNPId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPSensitiveAPIPermissionApprovalListData.MNPId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPId = string(value["MNPId"].GetString());
        m_mNPIdHasBeenSet = true;
    }

    if (value.HasMember("MNPName") && !value["MNPName"].IsNull())
    {
        if (!value["MNPName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPSensitiveAPIPermissionApprovalListData.MNPName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPName = string(value["MNPName"].GetString());
        m_mNPNameHasBeenSet = true;
    }

    if (value.HasMember("ApplyUser") && !value["ApplyUser"].IsNull())
    {
        if (!value["ApplyUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPSensitiveAPIPermissionApprovalListData.ApplyUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applyUser = string(value["ApplyUser"].GetString());
        m_applyUserHasBeenSet = true;
    }

    if (value.HasMember("ApplyTime") && !value["ApplyTime"].IsNull())
    {
        if (!value["ApplyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPSensitiveAPIPermissionApprovalListData.ApplyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applyTime = string(value["ApplyTime"].GetString());
        m_applyTimeHasBeenSet = true;
    }

    if (value.HasMember("ApplyNote") && !value["ApplyNote"].IsNull())
    {
        if (!value["ApplyNote"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPSensitiveAPIPermissionApprovalListData.ApplyNote` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applyNote = string(value["ApplyNote"].GetString());
        m_applyNoteHasBeenSet = true;
    }

    if (value.HasMember("ApprovalStatus") && !value["ApprovalStatus"].IsNull())
    {
        if (!value["ApprovalStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPSensitiveAPIPermissionApprovalListData.ApprovalStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_approvalStatus = value["ApprovalStatus"].GetInt64();
        m_approvalStatusHasBeenSet = true;
    }

    if (value.HasMember("ApprovalUser") && !value["ApprovalUser"].IsNull())
    {
        if (!value["ApprovalUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPSensitiveAPIPermissionApprovalListData.ApprovalUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approvalUser = string(value["ApprovalUser"].GetString());
        m_approvalUserHasBeenSet = true;
    }

    if (value.HasMember("ApprovalTime") && !value["ApprovalTime"].IsNull())
    {
        if (!value["ApprovalTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPSensitiveAPIPermissionApprovalListData.ApprovalTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approvalTime = string(value["ApprovalTime"].GetString());
        m_approvalTimeHasBeenSet = true;
    }

    if (value.HasMember("ApprovalNote") && !value["ApprovalNote"].IsNull())
    {
        if (!value["ApprovalNote"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPSensitiveAPIPermissionApprovalListData.ApprovalNote` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approvalNote = string(value["ApprovalNote"].GetString());
        m_approvalNoteHasBeenSet = true;
    }

    if (value.HasMember("ApplicationId") && !value["ApplicationId"].IsNull())
    {
        if (!value["ApplicationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPSensitiveAPIPermissionApprovalListData.ApplicationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationId = string(value["ApplicationId"].GetString());
        m_applicationIdHasBeenSet = true;
    }

    if (value.HasMember("ApplicationName") && !value["ApplicationName"].IsNull())
    {
        if (!value["ApplicationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPSensitiveAPIPermissionApprovalListData.ApplicationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationName = string(value["ApplicationName"].GetString());
        m_applicationNameHasBeenSet = true;
    }

    if (value.HasMember("ApplicationLogo") && !value["ApplicationLogo"].IsNull())
    {
        if (!value["ApplicationLogo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPSensitiveAPIPermissionApprovalListData.ApplicationLogo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationLogo = string(value["ApplicationLogo"].GetString());
        m_applicationLogoHasBeenSet = true;
    }

    if (value.HasMember("APIType") && !value["APIType"].IsNull())
    {
        if (!value["APIType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPSensitiveAPIPermissionApprovalListData.APIType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_aPIType = value["APIType"].GetInt64();
        m_aPITypeHasBeenSet = true;
    }

    if (value.HasMember("APIDesc") && !value["APIDesc"].IsNull())
    {
        if (!value["APIDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPSensitiveAPIPermissionApprovalListData.APIDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aPIDesc = string(value["APIDesc"].GetString());
        m_aPIDescHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeMNPSensitiveAPIPermissionApprovalListData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_approvalNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApprovalNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approvalNo.c_str(), allocator).Move(), allocator);
    }

    if (m_aPIIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "APIId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aPIId.c_str(), allocator).Move(), allocator);
    }

    if (m_aPINameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "APIName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aPIName.c_str(), allocator).Move(), allocator);
    }

    if (m_aPIMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "APIMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aPIMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_mNPIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mNPId.c_str(), allocator).Move(), allocator);
    }

    if (m_mNPNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mNPName.c_str(), allocator).Move(), allocator);
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

    if (m_applyNoteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyNote";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applyNote.c_str(), allocator).Move(), allocator);
    }

    if (m_approvalStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApprovalStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_approvalStatus, allocator);
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

    if (m_aPITypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "APIType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_aPIType, allocator);
    }

    if (m_aPIDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "APIDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aPIDesc.c_str(), allocator).Move(), allocator);
    }

}


string DescribeMNPSensitiveAPIPermissionApprovalListData::GetApprovalNo() const
{
    return m_approvalNo;
}

void DescribeMNPSensitiveAPIPermissionApprovalListData::SetApprovalNo(const string& _approvalNo)
{
    m_approvalNo = _approvalNo;
    m_approvalNoHasBeenSet = true;
}

bool DescribeMNPSensitiveAPIPermissionApprovalListData::ApprovalNoHasBeenSet() const
{
    return m_approvalNoHasBeenSet;
}

string DescribeMNPSensitiveAPIPermissionApprovalListData::GetAPIId() const
{
    return m_aPIId;
}

void DescribeMNPSensitiveAPIPermissionApprovalListData::SetAPIId(const string& _aPIId)
{
    m_aPIId = _aPIId;
    m_aPIIdHasBeenSet = true;
}

bool DescribeMNPSensitiveAPIPermissionApprovalListData::APIIdHasBeenSet() const
{
    return m_aPIIdHasBeenSet;
}

string DescribeMNPSensitiveAPIPermissionApprovalListData::GetAPIName() const
{
    return m_aPIName;
}

void DescribeMNPSensitiveAPIPermissionApprovalListData::SetAPIName(const string& _aPIName)
{
    m_aPIName = _aPIName;
    m_aPINameHasBeenSet = true;
}

bool DescribeMNPSensitiveAPIPermissionApprovalListData::APINameHasBeenSet() const
{
    return m_aPINameHasBeenSet;
}

string DescribeMNPSensitiveAPIPermissionApprovalListData::GetAPIMethod() const
{
    return m_aPIMethod;
}

void DescribeMNPSensitiveAPIPermissionApprovalListData::SetAPIMethod(const string& _aPIMethod)
{
    m_aPIMethod = _aPIMethod;
    m_aPIMethodHasBeenSet = true;
}

bool DescribeMNPSensitiveAPIPermissionApprovalListData::APIMethodHasBeenSet() const
{
    return m_aPIMethodHasBeenSet;
}

string DescribeMNPSensitiveAPIPermissionApprovalListData::GetMNPId() const
{
    return m_mNPId;
}

void DescribeMNPSensitiveAPIPermissionApprovalListData::SetMNPId(const string& _mNPId)
{
    m_mNPId = _mNPId;
    m_mNPIdHasBeenSet = true;
}

bool DescribeMNPSensitiveAPIPermissionApprovalListData::MNPIdHasBeenSet() const
{
    return m_mNPIdHasBeenSet;
}

string DescribeMNPSensitiveAPIPermissionApprovalListData::GetMNPName() const
{
    return m_mNPName;
}

void DescribeMNPSensitiveAPIPermissionApprovalListData::SetMNPName(const string& _mNPName)
{
    m_mNPName = _mNPName;
    m_mNPNameHasBeenSet = true;
}

bool DescribeMNPSensitiveAPIPermissionApprovalListData::MNPNameHasBeenSet() const
{
    return m_mNPNameHasBeenSet;
}

string DescribeMNPSensitiveAPIPermissionApprovalListData::GetApplyUser() const
{
    return m_applyUser;
}

void DescribeMNPSensitiveAPIPermissionApprovalListData::SetApplyUser(const string& _applyUser)
{
    m_applyUser = _applyUser;
    m_applyUserHasBeenSet = true;
}

bool DescribeMNPSensitiveAPIPermissionApprovalListData::ApplyUserHasBeenSet() const
{
    return m_applyUserHasBeenSet;
}

string DescribeMNPSensitiveAPIPermissionApprovalListData::GetApplyTime() const
{
    return m_applyTime;
}

void DescribeMNPSensitiveAPIPermissionApprovalListData::SetApplyTime(const string& _applyTime)
{
    m_applyTime = _applyTime;
    m_applyTimeHasBeenSet = true;
}

bool DescribeMNPSensitiveAPIPermissionApprovalListData::ApplyTimeHasBeenSet() const
{
    return m_applyTimeHasBeenSet;
}

string DescribeMNPSensitiveAPIPermissionApprovalListData::GetApplyNote() const
{
    return m_applyNote;
}

void DescribeMNPSensitiveAPIPermissionApprovalListData::SetApplyNote(const string& _applyNote)
{
    m_applyNote = _applyNote;
    m_applyNoteHasBeenSet = true;
}

bool DescribeMNPSensitiveAPIPermissionApprovalListData::ApplyNoteHasBeenSet() const
{
    return m_applyNoteHasBeenSet;
}

int64_t DescribeMNPSensitiveAPIPermissionApprovalListData::GetApprovalStatus() const
{
    return m_approvalStatus;
}

void DescribeMNPSensitiveAPIPermissionApprovalListData::SetApprovalStatus(const int64_t& _approvalStatus)
{
    m_approvalStatus = _approvalStatus;
    m_approvalStatusHasBeenSet = true;
}

bool DescribeMNPSensitiveAPIPermissionApprovalListData::ApprovalStatusHasBeenSet() const
{
    return m_approvalStatusHasBeenSet;
}

string DescribeMNPSensitiveAPIPermissionApprovalListData::GetApprovalUser() const
{
    return m_approvalUser;
}

void DescribeMNPSensitiveAPIPermissionApprovalListData::SetApprovalUser(const string& _approvalUser)
{
    m_approvalUser = _approvalUser;
    m_approvalUserHasBeenSet = true;
}

bool DescribeMNPSensitiveAPIPermissionApprovalListData::ApprovalUserHasBeenSet() const
{
    return m_approvalUserHasBeenSet;
}

string DescribeMNPSensitiveAPIPermissionApprovalListData::GetApprovalTime() const
{
    return m_approvalTime;
}

void DescribeMNPSensitiveAPIPermissionApprovalListData::SetApprovalTime(const string& _approvalTime)
{
    m_approvalTime = _approvalTime;
    m_approvalTimeHasBeenSet = true;
}

bool DescribeMNPSensitiveAPIPermissionApprovalListData::ApprovalTimeHasBeenSet() const
{
    return m_approvalTimeHasBeenSet;
}

string DescribeMNPSensitiveAPIPermissionApprovalListData::GetApprovalNote() const
{
    return m_approvalNote;
}

void DescribeMNPSensitiveAPIPermissionApprovalListData::SetApprovalNote(const string& _approvalNote)
{
    m_approvalNote = _approvalNote;
    m_approvalNoteHasBeenSet = true;
}

bool DescribeMNPSensitiveAPIPermissionApprovalListData::ApprovalNoteHasBeenSet() const
{
    return m_approvalNoteHasBeenSet;
}

string DescribeMNPSensitiveAPIPermissionApprovalListData::GetApplicationId() const
{
    return m_applicationId;
}

void DescribeMNPSensitiveAPIPermissionApprovalListData::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool DescribeMNPSensitiveAPIPermissionApprovalListData::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string DescribeMNPSensitiveAPIPermissionApprovalListData::GetApplicationName() const
{
    return m_applicationName;
}

void DescribeMNPSensitiveAPIPermissionApprovalListData::SetApplicationName(const string& _applicationName)
{
    m_applicationName = _applicationName;
    m_applicationNameHasBeenSet = true;
}

bool DescribeMNPSensitiveAPIPermissionApprovalListData::ApplicationNameHasBeenSet() const
{
    return m_applicationNameHasBeenSet;
}

string DescribeMNPSensitiveAPIPermissionApprovalListData::GetApplicationLogo() const
{
    return m_applicationLogo;
}

void DescribeMNPSensitiveAPIPermissionApprovalListData::SetApplicationLogo(const string& _applicationLogo)
{
    m_applicationLogo = _applicationLogo;
    m_applicationLogoHasBeenSet = true;
}

bool DescribeMNPSensitiveAPIPermissionApprovalListData::ApplicationLogoHasBeenSet() const
{
    return m_applicationLogoHasBeenSet;
}

int64_t DescribeMNPSensitiveAPIPermissionApprovalListData::GetAPIType() const
{
    return m_aPIType;
}

void DescribeMNPSensitiveAPIPermissionApprovalListData::SetAPIType(const int64_t& _aPIType)
{
    m_aPIType = _aPIType;
    m_aPITypeHasBeenSet = true;
}

bool DescribeMNPSensitiveAPIPermissionApprovalListData::APITypeHasBeenSet() const
{
    return m_aPITypeHasBeenSet;
}

string DescribeMNPSensitiveAPIPermissionApprovalListData::GetAPIDesc() const
{
    return m_aPIDesc;
}

void DescribeMNPSensitiveAPIPermissionApprovalListData::SetAPIDesc(const string& _aPIDesc)
{
    m_aPIDesc = _aPIDesc;
    m_aPIDescHasBeenSet = true;
}

bool DescribeMNPSensitiveAPIPermissionApprovalListData::APIDescHasBeenSet() const
{
    return m_aPIDescHasBeenSet;
}

