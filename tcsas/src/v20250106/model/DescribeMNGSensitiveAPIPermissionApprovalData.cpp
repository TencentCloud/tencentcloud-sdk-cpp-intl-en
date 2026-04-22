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

#include <tencentcloud/tcsas/v20250106/model/DescribeMNGSensitiveAPIPermissionApprovalData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

DescribeMNGSensitiveAPIPermissionApprovalData::DescribeMNGSensitiveAPIPermissionApprovalData() :
    m_aPIIdHasBeenSet(false),
    m_aPIMethodHasBeenSet(false),
    m_applyReasonHasBeenSet(false),
    m_rejectReasonHasBeenSet(false),
    m_approvalStatusHasBeenSet(false),
    m_aPIDescHasBeenSet(false),
    m_aPITypeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeMNGSensitiveAPIPermissionApprovalData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("APIId") && !value["APIId"].IsNull())
    {
        if (!value["APIId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGSensitiveAPIPermissionApprovalData.APIId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aPIId = string(value["APIId"].GetString());
        m_aPIIdHasBeenSet = true;
    }

    if (value.HasMember("APIMethod") && !value["APIMethod"].IsNull())
    {
        if (!value["APIMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGSensitiveAPIPermissionApprovalData.APIMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aPIMethod = string(value["APIMethod"].GetString());
        m_aPIMethodHasBeenSet = true;
    }

    if (value.HasMember("ApplyReason") && !value["ApplyReason"].IsNull())
    {
        if (!value["ApplyReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGSensitiveAPIPermissionApprovalData.ApplyReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applyReason = string(value["ApplyReason"].GetString());
        m_applyReasonHasBeenSet = true;
    }

    if (value.HasMember("RejectReason") && !value["RejectReason"].IsNull())
    {
        if (!value["RejectReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGSensitiveAPIPermissionApprovalData.RejectReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rejectReason = string(value["RejectReason"].GetString());
        m_rejectReasonHasBeenSet = true;
    }

    if (value.HasMember("ApprovalStatus") && !value["ApprovalStatus"].IsNull())
    {
        if (!value["ApprovalStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGSensitiveAPIPermissionApprovalData.ApprovalStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_approvalStatus = value["ApprovalStatus"].GetInt64();
        m_approvalStatusHasBeenSet = true;
    }

    if (value.HasMember("APIDesc") && !value["APIDesc"].IsNull())
    {
        if (!value["APIDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGSensitiveAPIPermissionApprovalData.APIDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aPIDesc = string(value["APIDesc"].GetString());
        m_aPIDescHasBeenSet = true;
    }

    if (value.HasMember("APIType") && !value["APIType"].IsNull())
    {
        if (!value["APIType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGSensitiveAPIPermissionApprovalData.APIType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_aPIType = value["APIType"].GetInt64();
        m_aPITypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeMNGSensitiveAPIPermissionApprovalData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_aPIIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "APIId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aPIId.c_str(), allocator).Move(), allocator);
    }

    if (m_aPIMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "APIMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aPIMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_applyReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applyReason.c_str(), allocator).Move(), allocator);
    }

    if (m_rejectReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RejectReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rejectReason.c_str(), allocator).Move(), allocator);
    }

    if (m_approvalStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApprovalStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_approvalStatus, allocator);
    }

    if (m_aPIDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "APIDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aPIDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_aPITypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "APIType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_aPIType, allocator);
    }

}


string DescribeMNGSensitiveAPIPermissionApprovalData::GetAPIId() const
{
    return m_aPIId;
}

void DescribeMNGSensitiveAPIPermissionApprovalData::SetAPIId(const string& _aPIId)
{
    m_aPIId = _aPIId;
    m_aPIIdHasBeenSet = true;
}

bool DescribeMNGSensitiveAPIPermissionApprovalData::APIIdHasBeenSet() const
{
    return m_aPIIdHasBeenSet;
}

string DescribeMNGSensitiveAPIPermissionApprovalData::GetAPIMethod() const
{
    return m_aPIMethod;
}

void DescribeMNGSensitiveAPIPermissionApprovalData::SetAPIMethod(const string& _aPIMethod)
{
    m_aPIMethod = _aPIMethod;
    m_aPIMethodHasBeenSet = true;
}

bool DescribeMNGSensitiveAPIPermissionApprovalData::APIMethodHasBeenSet() const
{
    return m_aPIMethodHasBeenSet;
}

string DescribeMNGSensitiveAPIPermissionApprovalData::GetApplyReason() const
{
    return m_applyReason;
}

void DescribeMNGSensitiveAPIPermissionApprovalData::SetApplyReason(const string& _applyReason)
{
    m_applyReason = _applyReason;
    m_applyReasonHasBeenSet = true;
}

bool DescribeMNGSensitiveAPIPermissionApprovalData::ApplyReasonHasBeenSet() const
{
    return m_applyReasonHasBeenSet;
}

string DescribeMNGSensitiveAPIPermissionApprovalData::GetRejectReason() const
{
    return m_rejectReason;
}

void DescribeMNGSensitiveAPIPermissionApprovalData::SetRejectReason(const string& _rejectReason)
{
    m_rejectReason = _rejectReason;
    m_rejectReasonHasBeenSet = true;
}

bool DescribeMNGSensitiveAPIPermissionApprovalData::RejectReasonHasBeenSet() const
{
    return m_rejectReasonHasBeenSet;
}

int64_t DescribeMNGSensitiveAPIPermissionApprovalData::GetApprovalStatus() const
{
    return m_approvalStatus;
}

void DescribeMNGSensitiveAPIPermissionApprovalData::SetApprovalStatus(const int64_t& _approvalStatus)
{
    m_approvalStatus = _approvalStatus;
    m_approvalStatusHasBeenSet = true;
}

bool DescribeMNGSensitiveAPIPermissionApprovalData::ApprovalStatusHasBeenSet() const
{
    return m_approvalStatusHasBeenSet;
}

string DescribeMNGSensitiveAPIPermissionApprovalData::GetAPIDesc() const
{
    return m_aPIDesc;
}

void DescribeMNGSensitiveAPIPermissionApprovalData::SetAPIDesc(const string& _aPIDesc)
{
    m_aPIDesc = _aPIDesc;
    m_aPIDescHasBeenSet = true;
}

bool DescribeMNGSensitiveAPIPermissionApprovalData::APIDescHasBeenSet() const
{
    return m_aPIDescHasBeenSet;
}

int64_t DescribeMNGSensitiveAPIPermissionApprovalData::GetAPIType() const
{
    return m_aPIType;
}

void DescribeMNGSensitiveAPIPermissionApprovalData::SetAPIType(const int64_t& _aPIType)
{
    m_aPIType = _aPIType;
    m_aPITypeHasBeenSet = true;
}

bool DescribeMNGSensitiveAPIPermissionApprovalData::APITypeHasBeenSet() const
{
    return m_aPITypeHasBeenSet;
}

