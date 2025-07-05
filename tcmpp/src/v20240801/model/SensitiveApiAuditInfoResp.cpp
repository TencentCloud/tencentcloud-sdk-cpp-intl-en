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

#include <tencentcloud/tcmpp/v20240801/model/SensitiveApiAuditInfoResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcmpp::V20240801::Model;
using namespace std;

SensitiveApiAuditInfoResp::SensitiveApiAuditInfoResp() :
    m_auditNoHasBeenSet(false),
    m_apiIdHasBeenSet(false),
    m_apiNameHasBeenSet(false),
    m_apiMethodHasBeenSet(false),
    m_mNPIdHasBeenSet(false),
    m_mNPNameHasBeenSet(false),
    m_applyUserHasBeenSet(false),
    m_applyTimeHasBeenSet(false),
    m_applyNoteHasBeenSet(false),
    m_auditStatusHasBeenSet(false),
    m_auditUserHasBeenSet(false),
    m_auditTimeHasBeenSet(false),
    m_auditNoteHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_applicationLogoHasBeenSet(false),
    m_apiTypeHasBeenSet(false),
    m_apiDescHasBeenSet(false)
{
}

CoreInternalOutcome SensitiveApiAuditInfoResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AuditNo") && !value["AuditNo"].IsNull())
    {
        if (!value["AuditNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SensitiveApiAuditInfoResp.AuditNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_auditNo = string(value["AuditNo"].GetString());
        m_auditNoHasBeenSet = true;
    }

    if (value.HasMember("ApiId") && !value["ApiId"].IsNull())
    {
        if (!value["ApiId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SensitiveApiAuditInfoResp.ApiId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiId = string(value["ApiId"].GetString());
        m_apiIdHasBeenSet = true;
    }

    if (value.HasMember("ApiName") && !value["ApiName"].IsNull())
    {
        if (!value["ApiName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SensitiveApiAuditInfoResp.ApiName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiName = string(value["ApiName"].GetString());
        m_apiNameHasBeenSet = true;
    }

    if (value.HasMember("ApiMethod") && !value["ApiMethod"].IsNull())
    {
        if (!value["ApiMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SensitiveApiAuditInfoResp.ApiMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiMethod = string(value["ApiMethod"].GetString());
        m_apiMethodHasBeenSet = true;
    }

    if (value.HasMember("MNPId") && !value["MNPId"].IsNull())
    {
        if (!value["MNPId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SensitiveApiAuditInfoResp.MNPId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPId = string(value["MNPId"].GetString());
        m_mNPIdHasBeenSet = true;
    }

    if (value.HasMember("MNPName") && !value["MNPName"].IsNull())
    {
        if (!value["MNPName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SensitiveApiAuditInfoResp.MNPName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPName = string(value["MNPName"].GetString());
        m_mNPNameHasBeenSet = true;
    }

    if (value.HasMember("ApplyUser") && !value["ApplyUser"].IsNull())
    {
        if (!value["ApplyUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SensitiveApiAuditInfoResp.ApplyUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applyUser = string(value["ApplyUser"].GetString());
        m_applyUserHasBeenSet = true;
    }

    if (value.HasMember("ApplyTime") && !value["ApplyTime"].IsNull())
    {
        if (!value["ApplyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SensitiveApiAuditInfoResp.ApplyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applyTime = string(value["ApplyTime"].GetString());
        m_applyTimeHasBeenSet = true;
    }

    if (value.HasMember("ApplyNote") && !value["ApplyNote"].IsNull())
    {
        if (!value["ApplyNote"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SensitiveApiAuditInfoResp.ApplyNote` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applyNote = string(value["ApplyNote"].GetString());
        m_applyNoteHasBeenSet = true;
    }

    if (value.HasMember("AuditStatus") && !value["AuditStatus"].IsNull())
    {
        if (!value["AuditStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SensitiveApiAuditInfoResp.AuditStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_auditStatus = value["AuditStatus"].GetInt64();
        m_auditStatusHasBeenSet = true;
    }

    if (value.HasMember("AuditUser") && !value["AuditUser"].IsNull())
    {
        if (!value["AuditUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SensitiveApiAuditInfoResp.AuditUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_auditUser = string(value["AuditUser"].GetString());
        m_auditUserHasBeenSet = true;
    }

    if (value.HasMember("AuditTime") && !value["AuditTime"].IsNull())
    {
        if (!value["AuditTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SensitiveApiAuditInfoResp.AuditTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_auditTime = string(value["AuditTime"].GetString());
        m_auditTimeHasBeenSet = true;
    }

    if (value.HasMember("AuditNote") && !value["AuditNote"].IsNull())
    {
        if (!value["AuditNote"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SensitiveApiAuditInfoResp.AuditNote` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_auditNote = string(value["AuditNote"].GetString());
        m_auditNoteHasBeenSet = true;
    }

    if (value.HasMember("ApplicationId") && !value["ApplicationId"].IsNull())
    {
        if (!value["ApplicationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SensitiveApiAuditInfoResp.ApplicationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationId = string(value["ApplicationId"].GetString());
        m_applicationIdHasBeenSet = true;
    }

    if (value.HasMember("ApplicationName") && !value["ApplicationName"].IsNull())
    {
        if (!value["ApplicationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SensitiveApiAuditInfoResp.ApplicationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationName = string(value["ApplicationName"].GetString());
        m_applicationNameHasBeenSet = true;
    }

    if (value.HasMember("ApplicationLogo") && !value["ApplicationLogo"].IsNull())
    {
        if (!value["ApplicationLogo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SensitiveApiAuditInfoResp.ApplicationLogo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationLogo = string(value["ApplicationLogo"].GetString());
        m_applicationLogoHasBeenSet = true;
    }

    if (value.HasMember("ApiType") && !value["ApiType"].IsNull())
    {
        if (!value["ApiType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SensitiveApiAuditInfoResp.ApiType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_apiType = value["ApiType"].GetInt64();
        m_apiTypeHasBeenSet = true;
    }

    if (value.HasMember("ApiDesc") && !value["ApiDesc"].IsNull())
    {
        if (!value["ApiDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SensitiveApiAuditInfoResp.ApiDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiDesc = string(value["ApiDesc"].GetString());
        m_apiDescHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SensitiveApiAuditInfoResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_auditNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_auditNo.c_str(), allocator).Move(), allocator);
    }

    if (m_apiIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiId.c_str(), allocator).Move(), allocator);
    }

    if (m_apiNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiName.c_str(), allocator).Move(), allocator);
    }

    if (m_apiMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiMethod.c_str(), allocator).Move(), allocator);
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

    if (m_auditStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_auditStatus, allocator);
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

    if (m_apiTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_apiType, allocator);
    }

    if (m_apiDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiDesc.c_str(), allocator).Move(), allocator);
    }

}


string SensitiveApiAuditInfoResp::GetAuditNo() const
{
    return m_auditNo;
}

void SensitiveApiAuditInfoResp::SetAuditNo(const string& _auditNo)
{
    m_auditNo = _auditNo;
    m_auditNoHasBeenSet = true;
}

bool SensitiveApiAuditInfoResp::AuditNoHasBeenSet() const
{
    return m_auditNoHasBeenSet;
}

string SensitiveApiAuditInfoResp::GetApiId() const
{
    return m_apiId;
}

void SensitiveApiAuditInfoResp::SetApiId(const string& _apiId)
{
    m_apiId = _apiId;
    m_apiIdHasBeenSet = true;
}

bool SensitiveApiAuditInfoResp::ApiIdHasBeenSet() const
{
    return m_apiIdHasBeenSet;
}

string SensitiveApiAuditInfoResp::GetApiName() const
{
    return m_apiName;
}

void SensitiveApiAuditInfoResp::SetApiName(const string& _apiName)
{
    m_apiName = _apiName;
    m_apiNameHasBeenSet = true;
}

bool SensitiveApiAuditInfoResp::ApiNameHasBeenSet() const
{
    return m_apiNameHasBeenSet;
}

string SensitiveApiAuditInfoResp::GetApiMethod() const
{
    return m_apiMethod;
}

void SensitiveApiAuditInfoResp::SetApiMethod(const string& _apiMethod)
{
    m_apiMethod = _apiMethod;
    m_apiMethodHasBeenSet = true;
}

bool SensitiveApiAuditInfoResp::ApiMethodHasBeenSet() const
{
    return m_apiMethodHasBeenSet;
}

string SensitiveApiAuditInfoResp::GetMNPId() const
{
    return m_mNPId;
}

void SensitiveApiAuditInfoResp::SetMNPId(const string& _mNPId)
{
    m_mNPId = _mNPId;
    m_mNPIdHasBeenSet = true;
}

bool SensitiveApiAuditInfoResp::MNPIdHasBeenSet() const
{
    return m_mNPIdHasBeenSet;
}

string SensitiveApiAuditInfoResp::GetMNPName() const
{
    return m_mNPName;
}

void SensitiveApiAuditInfoResp::SetMNPName(const string& _mNPName)
{
    m_mNPName = _mNPName;
    m_mNPNameHasBeenSet = true;
}

bool SensitiveApiAuditInfoResp::MNPNameHasBeenSet() const
{
    return m_mNPNameHasBeenSet;
}

string SensitiveApiAuditInfoResp::GetApplyUser() const
{
    return m_applyUser;
}

void SensitiveApiAuditInfoResp::SetApplyUser(const string& _applyUser)
{
    m_applyUser = _applyUser;
    m_applyUserHasBeenSet = true;
}

bool SensitiveApiAuditInfoResp::ApplyUserHasBeenSet() const
{
    return m_applyUserHasBeenSet;
}

string SensitiveApiAuditInfoResp::GetApplyTime() const
{
    return m_applyTime;
}

void SensitiveApiAuditInfoResp::SetApplyTime(const string& _applyTime)
{
    m_applyTime = _applyTime;
    m_applyTimeHasBeenSet = true;
}

bool SensitiveApiAuditInfoResp::ApplyTimeHasBeenSet() const
{
    return m_applyTimeHasBeenSet;
}

string SensitiveApiAuditInfoResp::GetApplyNote() const
{
    return m_applyNote;
}

void SensitiveApiAuditInfoResp::SetApplyNote(const string& _applyNote)
{
    m_applyNote = _applyNote;
    m_applyNoteHasBeenSet = true;
}

bool SensitiveApiAuditInfoResp::ApplyNoteHasBeenSet() const
{
    return m_applyNoteHasBeenSet;
}

int64_t SensitiveApiAuditInfoResp::GetAuditStatus() const
{
    return m_auditStatus;
}

void SensitiveApiAuditInfoResp::SetAuditStatus(const int64_t& _auditStatus)
{
    m_auditStatus = _auditStatus;
    m_auditStatusHasBeenSet = true;
}

bool SensitiveApiAuditInfoResp::AuditStatusHasBeenSet() const
{
    return m_auditStatusHasBeenSet;
}

string SensitiveApiAuditInfoResp::GetAuditUser() const
{
    return m_auditUser;
}

void SensitiveApiAuditInfoResp::SetAuditUser(const string& _auditUser)
{
    m_auditUser = _auditUser;
    m_auditUserHasBeenSet = true;
}

bool SensitiveApiAuditInfoResp::AuditUserHasBeenSet() const
{
    return m_auditUserHasBeenSet;
}

string SensitiveApiAuditInfoResp::GetAuditTime() const
{
    return m_auditTime;
}

void SensitiveApiAuditInfoResp::SetAuditTime(const string& _auditTime)
{
    m_auditTime = _auditTime;
    m_auditTimeHasBeenSet = true;
}

bool SensitiveApiAuditInfoResp::AuditTimeHasBeenSet() const
{
    return m_auditTimeHasBeenSet;
}

string SensitiveApiAuditInfoResp::GetAuditNote() const
{
    return m_auditNote;
}

void SensitiveApiAuditInfoResp::SetAuditNote(const string& _auditNote)
{
    m_auditNote = _auditNote;
    m_auditNoteHasBeenSet = true;
}

bool SensitiveApiAuditInfoResp::AuditNoteHasBeenSet() const
{
    return m_auditNoteHasBeenSet;
}

string SensitiveApiAuditInfoResp::GetApplicationId() const
{
    return m_applicationId;
}

void SensitiveApiAuditInfoResp::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool SensitiveApiAuditInfoResp::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string SensitiveApiAuditInfoResp::GetApplicationName() const
{
    return m_applicationName;
}

void SensitiveApiAuditInfoResp::SetApplicationName(const string& _applicationName)
{
    m_applicationName = _applicationName;
    m_applicationNameHasBeenSet = true;
}

bool SensitiveApiAuditInfoResp::ApplicationNameHasBeenSet() const
{
    return m_applicationNameHasBeenSet;
}

string SensitiveApiAuditInfoResp::GetApplicationLogo() const
{
    return m_applicationLogo;
}

void SensitiveApiAuditInfoResp::SetApplicationLogo(const string& _applicationLogo)
{
    m_applicationLogo = _applicationLogo;
    m_applicationLogoHasBeenSet = true;
}

bool SensitiveApiAuditInfoResp::ApplicationLogoHasBeenSet() const
{
    return m_applicationLogoHasBeenSet;
}

int64_t SensitiveApiAuditInfoResp::GetApiType() const
{
    return m_apiType;
}

void SensitiveApiAuditInfoResp::SetApiType(const int64_t& _apiType)
{
    m_apiType = _apiType;
    m_apiTypeHasBeenSet = true;
}

bool SensitiveApiAuditInfoResp::ApiTypeHasBeenSet() const
{
    return m_apiTypeHasBeenSet;
}

string SensitiveApiAuditInfoResp::GetApiDesc() const
{
    return m_apiDesc;
}

void SensitiveApiAuditInfoResp::SetApiDesc(const string& _apiDesc)
{
    m_apiDesc = _apiDesc;
    m_apiDescHasBeenSet = true;
}

bool SensitiveApiAuditInfoResp::ApiDescHasBeenSet() const
{
    return m_apiDescHasBeenSet;
}

