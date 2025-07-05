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

#include <tencentcloud/tcmpp/v20240801/model/DescribeSensitiveApiAuthListParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcmpp::V20240801::Model;
using namespace std;

DescribeSensitiveApiAuthListParam::DescribeSensitiveApiAuthListParam() :
    m_aPIIdHasBeenSet(false),
    m_aPINameHasBeenSet(false),
    m_aPIMethodHasBeenSet(false),
    m_aPIStatusHasBeenSet(false),
    m_aPIApplyStatusHasBeenSet(false),
    m_rejectReasonHasBeenSet(false),
    m_auditNoHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_applicationIconHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_aPITypeHasBeenSet(false),
    m_aPIDescHasBeenSet(false)
{
}

CoreInternalOutcome DescribeSensitiveApiAuthListParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("APIId") && !value["APIId"].IsNull())
    {
        if (!value["APIId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSensitiveApiAuthListParam.APIId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aPIId = string(value["APIId"].GetString());
        m_aPIIdHasBeenSet = true;
    }

    if (value.HasMember("APIName") && !value["APIName"].IsNull())
    {
        if (!value["APIName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSensitiveApiAuthListParam.APIName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aPIName = string(value["APIName"].GetString());
        m_aPINameHasBeenSet = true;
    }

    if (value.HasMember("APIMethod") && !value["APIMethod"].IsNull())
    {
        if (!value["APIMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSensitiveApiAuthListParam.APIMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aPIMethod = string(value["APIMethod"].GetString());
        m_aPIMethodHasBeenSet = true;
    }

    if (value.HasMember("APIStatus") && !value["APIStatus"].IsNull())
    {
        if (!value["APIStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSensitiveApiAuthListParam.APIStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_aPIStatus = value["APIStatus"].GetInt64();
        m_aPIStatusHasBeenSet = true;
    }

    if (value.HasMember("APIApplyStatus") && !value["APIApplyStatus"].IsNull())
    {
        if (!value["APIApplyStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSensitiveApiAuthListParam.APIApplyStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_aPIApplyStatus = value["APIApplyStatus"].GetInt64();
        m_aPIApplyStatusHasBeenSet = true;
    }

    if (value.HasMember("RejectReason") && !value["RejectReason"].IsNull())
    {
        if (!value["RejectReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSensitiveApiAuthListParam.RejectReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rejectReason = string(value["RejectReason"].GetString());
        m_rejectReasonHasBeenSet = true;
    }

    if (value.HasMember("AuditNo") && !value["AuditNo"].IsNull())
    {
        if (!value["AuditNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSensitiveApiAuthListParam.AuditNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_auditNo = string(value["AuditNo"].GetString());
        m_auditNoHasBeenSet = true;
    }

    if (value.HasMember("ApplicationId") && !value["ApplicationId"].IsNull())
    {
        if (!value["ApplicationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSensitiveApiAuthListParam.ApplicationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationId = string(value["ApplicationId"].GetString());
        m_applicationIdHasBeenSet = true;
    }

    if (value.HasMember("ApplicationIcon") && !value["ApplicationIcon"].IsNull())
    {
        if (!value["ApplicationIcon"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSensitiveApiAuthListParam.ApplicationIcon` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationIcon = string(value["ApplicationIcon"].GetString());
        m_applicationIconHasBeenSet = true;
    }

    if (value.HasMember("ApplicationName") && !value["ApplicationName"].IsNull())
    {
        if (!value["ApplicationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSensitiveApiAuthListParam.ApplicationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationName = string(value["ApplicationName"].GetString());
        m_applicationNameHasBeenSet = true;
    }

    if (value.HasMember("APIType") && !value["APIType"].IsNull())
    {
        if (!value["APIType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSensitiveApiAuthListParam.APIType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_aPIType = value["APIType"].GetInt64();
        m_aPITypeHasBeenSet = true;
    }

    if (value.HasMember("APIDesc") && !value["APIDesc"].IsNull())
    {
        if (!value["APIDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSensitiveApiAuthListParam.APIDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aPIDesc = string(value["APIDesc"].GetString());
        m_aPIDescHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeSensitiveApiAuthListParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_aPIStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "APIStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_aPIStatus, allocator);
    }

    if (m_aPIApplyStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "APIApplyStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_aPIApplyStatus, allocator);
    }

    if (m_rejectReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RejectReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rejectReason.c_str(), allocator).Move(), allocator);
    }

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

    if (m_applicationIconHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationIcon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationIcon.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationName.c_str(), allocator).Move(), allocator);
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


string DescribeSensitiveApiAuthListParam::GetAPIId() const
{
    return m_aPIId;
}

void DescribeSensitiveApiAuthListParam::SetAPIId(const string& _aPIId)
{
    m_aPIId = _aPIId;
    m_aPIIdHasBeenSet = true;
}

bool DescribeSensitiveApiAuthListParam::APIIdHasBeenSet() const
{
    return m_aPIIdHasBeenSet;
}

string DescribeSensitiveApiAuthListParam::GetAPIName() const
{
    return m_aPIName;
}

void DescribeSensitiveApiAuthListParam::SetAPIName(const string& _aPIName)
{
    m_aPIName = _aPIName;
    m_aPINameHasBeenSet = true;
}

bool DescribeSensitiveApiAuthListParam::APINameHasBeenSet() const
{
    return m_aPINameHasBeenSet;
}

string DescribeSensitiveApiAuthListParam::GetAPIMethod() const
{
    return m_aPIMethod;
}

void DescribeSensitiveApiAuthListParam::SetAPIMethod(const string& _aPIMethod)
{
    m_aPIMethod = _aPIMethod;
    m_aPIMethodHasBeenSet = true;
}

bool DescribeSensitiveApiAuthListParam::APIMethodHasBeenSet() const
{
    return m_aPIMethodHasBeenSet;
}

int64_t DescribeSensitiveApiAuthListParam::GetAPIStatus() const
{
    return m_aPIStatus;
}

void DescribeSensitiveApiAuthListParam::SetAPIStatus(const int64_t& _aPIStatus)
{
    m_aPIStatus = _aPIStatus;
    m_aPIStatusHasBeenSet = true;
}

bool DescribeSensitiveApiAuthListParam::APIStatusHasBeenSet() const
{
    return m_aPIStatusHasBeenSet;
}

int64_t DescribeSensitiveApiAuthListParam::GetAPIApplyStatus() const
{
    return m_aPIApplyStatus;
}

void DescribeSensitiveApiAuthListParam::SetAPIApplyStatus(const int64_t& _aPIApplyStatus)
{
    m_aPIApplyStatus = _aPIApplyStatus;
    m_aPIApplyStatusHasBeenSet = true;
}

bool DescribeSensitiveApiAuthListParam::APIApplyStatusHasBeenSet() const
{
    return m_aPIApplyStatusHasBeenSet;
}

string DescribeSensitiveApiAuthListParam::GetRejectReason() const
{
    return m_rejectReason;
}

void DescribeSensitiveApiAuthListParam::SetRejectReason(const string& _rejectReason)
{
    m_rejectReason = _rejectReason;
    m_rejectReasonHasBeenSet = true;
}

bool DescribeSensitiveApiAuthListParam::RejectReasonHasBeenSet() const
{
    return m_rejectReasonHasBeenSet;
}

string DescribeSensitiveApiAuthListParam::GetAuditNo() const
{
    return m_auditNo;
}

void DescribeSensitiveApiAuthListParam::SetAuditNo(const string& _auditNo)
{
    m_auditNo = _auditNo;
    m_auditNoHasBeenSet = true;
}

bool DescribeSensitiveApiAuthListParam::AuditNoHasBeenSet() const
{
    return m_auditNoHasBeenSet;
}

string DescribeSensitiveApiAuthListParam::GetApplicationId() const
{
    return m_applicationId;
}

void DescribeSensitiveApiAuthListParam::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool DescribeSensitiveApiAuthListParam::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string DescribeSensitiveApiAuthListParam::GetApplicationIcon() const
{
    return m_applicationIcon;
}

void DescribeSensitiveApiAuthListParam::SetApplicationIcon(const string& _applicationIcon)
{
    m_applicationIcon = _applicationIcon;
    m_applicationIconHasBeenSet = true;
}

bool DescribeSensitiveApiAuthListParam::ApplicationIconHasBeenSet() const
{
    return m_applicationIconHasBeenSet;
}

string DescribeSensitiveApiAuthListParam::GetApplicationName() const
{
    return m_applicationName;
}

void DescribeSensitiveApiAuthListParam::SetApplicationName(const string& _applicationName)
{
    m_applicationName = _applicationName;
    m_applicationNameHasBeenSet = true;
}

bool DescribeSensitiveApiAuthListParam::ApplicationNameHasBeenSet() const
{
    return m_applicationNameHasBeenSet;
}

int64_t DescribeSensitiveApiAuthListParam::GetAPIType() const
{
    return m_aPIType;
}

void DescribeSensitiveApiAuthListParam::SetAPIType(const int64_t& _aPIType)
{
    m_aPIType = _aPIType;
    m_aPITypeHasBeenSet = true;
}

bool DescribeSensitiveApiAuthListParam::APITypeHasBeenSet() const
{
    return m_aPITypeHasBeenSet;
}

string DescribeSensitiveApiAuthListParam::GetAPIDesc() const
{
    return m_aPIDesc;
}

void DescribeSensitiveApiAuthListParam::SetAPIDesc(const string& _aPIDesc)
{
    m_aPIDesc = _aPIDesc;
    m_aPIDescHasBeenSet = true;
}

bool DescribeSensitiveApiAuthListParam::APIDescHasBeenSet() const
{
    return m_aPIDescHasBeenSet;
}

