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

#include <tencentcloud/tcsas/v20250106/model/DescribeMNPSensitiveAPIPermissionApprovalData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

DescribeMNPSensitiveAPIPermissionApprovalData::DescribeMNPSensitiveAPIPermissionApprovalData() :
    m_aPIIdHasBeenSet(false),
    m_aPIMethodHasBeenSet(false),
    m_applyReasonHasBeenSet(false),
    m_rejectReasonHasBeenSet(false),
    m_approvalStatusHasBeenSet(false),
    m_aPIDescHasBeenSet(false),
    m_aPITypeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeMNPSensitiveAPIPermissionApprovalData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("APIId") && !value["APIId"].IsNull())
    {
        if (!value["APIId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPSensitiveAPIPermissionApprovalData.APIId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aPIId = string(value["APIId"].GetString());
        m_aPIIdHasBeenSet = true;
    }

    if (value.HasMember("APIMethod") && !value["APIMethod"].IsNull())
    {
        if (!value["APIMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPSensitiveAPIPermissionApprovalData.APIMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aPIMethod = string(value["APIMethod"].GetString());
        m_aPIMethodHasBeenSet = true;
    }

    if (value.HasMember("ApplyReason") && !value["ApplyReason"].IsNull())
    {
        if (!value["ApplyReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPSensitiveAPIPermissionApprovalData.ApplyReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applyReason = string(value["ApplyReason"].GetString());
        m_applyReasonHasBeenSet = true;
    }

    if (value.HasMember("RejectReason") && !value["RejectReason"].IsNull())
    {
        if (!value["RejectReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPSensitiveAPIPermissionApprovalData.RejectReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rejectReason = string(value["RejectReason"].GetString());
        m_rejectReasonHasBeenSet = true;
    }

    if (value.HasMember("ApprovalStatus") && !value["ApprovalStatus"].IsNull())
    {
        if (!value["ApprovalStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPSensitiveAPIPermissionApprovalData.ApprovalStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_approvalStatus = value["ApprovalStatus"].GetInt64();
        m_approvalStatusHasBeenSet = true;
    }

    if (value.HasMember("APIDesc") && !value["APIDesc"].IsNull())
    {
        if (!value["APIDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPSensitiveAPIPermissionApprovalData.APIDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aPIDesc = string(value["APIDesc"].GetString());
        m_aPIDescHasBeenSet = true;
    }

    if (value.HasMember("APIType") && !value["APIType"].IsNull())
    {
        if (!value["APIType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPSensitiveAPIPermissionApprovalData.APIType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_aPIType = value["APIType"].GetInt64();
        m_aPITypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeMNPSensitiveAPIPermissionApprovalData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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


string DescribeMNPSensitiveAPIPermissionApprovalData::GetAPIId() const
{
    return m_aPIId;
}

void DescribeMNPSensitiveAPIPermissionApprovalData::SetAPIId(const string& _aPIId)
{
    m_aPIId = _aPIId;
    m_aPIIdHasBeenSet = true;
}

bool DescribeMNPSensitiveAPIPermissionApprovalData::APIIdHasBeenSet() const
{
    return m_aPIIdHasBeenSet;
}

string DescribeMNPSensitiveAPIPermissionApprovalData::GetAPIMethod() const
{
    return m_aPIMethod;
}

void DescribeMNPSensitiveAPIPermissionApprovalData::SetAPIMethod(const string& _aPIMethod)
{
    m_aPIMethod = _aPIMethod;
    m_aPIMethodHasBeenSet = true;
}

bool DescribeMNPSensitiveAPIPermissionApprovalData::APIMethodHasBeenSet() const
{
    return m_aPIMethodHasBeenSet;
}

string DescribeMNPSensitiveAPIPermissionApprovalData::GetApplyReason() const
{
    return m_applyReason;
}

void DescribeMNPSensitiveAPIPermissionApprovalData::SetApplyReason(const string& _applyReason)
{
    m_applyReason = _applyReason;
    m_applyReasonHasBeenSet = true;
}

bool DescribeMNPSensitiveAPIPermissionApprovalData::ApplyReasonHasBeenSet() const
{
    return m_applyReasonHasBeenSet;
}

string DescribeMNPSensitiveAPIPermissionApprovalData::GetRejectReason() const
{
    return m_rejectReason;
}

void DescribeMNPSensitiveAPIPermissionApprovalData::SetRejectReason(const string& _rejectReason)
{
    m_rejectReason = _rejectReason;
    m_rejectReasonHasBeenSet = true;
}

bool DescribeMNPSensitiveAPIPermissionApprovalData::RejectReasonHasBeenSet() const
{
    return m_rejectReasonHasBeenSet;
}

int64_t DescribeMNPSensitiveAPIPermissionApprovalData::GetApprovalStatus() const
{
    return m_approvalStatus;
}

void DescribeMNPSensitiveAPIPermissionApprovalData::SetApprovalStatus(const int64_t& _approvalStatus)
{
    m_approvalStatus = _approvalStatus;
    m_approvalStatusHasBeenSet = true;
}

bool DescribeMNPSensitiveAPIPermissionApprovalData::ApprovalStatusHasBeenSet() const
{
    return m_approvalStatusHasBeenSet;
}

string DescribeMNPSensitiveAPIPermissionApprovalData::GetAPIDesc() const
{
    return m_aPIDesc;
}

void DescribeMNPSensitiveAPIPermissionApprovalData::SetAPIDesc(const string& _aPIDesc)
{
    m_aPIDesc = _aPIDesc;
    m_aPIDescHasBeenSet = true;
}

bool DescribeMNPSensitiveAPIPermissionApprovalData::APIDescHasBeenSet() const
{
    return m_aPIDescHasBeenSet;
}

int64_t DescribeMNPSensitiveAPIPermissionApprovalData::GetAPIType() const
{
    return m_aPIType;
}

void DescribeMNPSensitiveAPIPermissionApprovalData::SetAPIType(const int64_t& _aPIType)
{
    m_aPIType = _aPIType;
    m_aPITypeHasBeenSet = true;
}

bool DescribeMNPSensitiveAPIPermissionApprovalData::APITypeHasBeenSet() const
{
    return m_aPITypeHasBeenSet;
}

