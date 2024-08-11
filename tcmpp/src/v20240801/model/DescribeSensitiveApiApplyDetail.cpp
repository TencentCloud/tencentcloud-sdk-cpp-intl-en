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

#include <tencentcloud/tcmpp/v20240801/model/DescribeSensitiveApiApplyDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcmpp::V20240801::Model;
using namespace std;

DescribeSensitiveApiApplyDetail::DescribeSensitiveApiApplyDetail() :
    m_aPIIdHasBeenSet(false),
    m_aPIMethodHasBeenSet(false),
    m_applyReasonHasBeenSet(false),
    m_rejectReasonHasBeenSet(false),
    m_auditStatusHasBeenSet(false),
    m_aPIDescHasBeenSet(false),
    m_aPITypeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeSensitiveApiApplyDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("APIId") && !value["APIId"].IsNull())
    {
        if (!value["APIId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSensitiveApiApplyDetail.APIId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aPIId = string(value["APIId"].GetString());
        m_aPIIdHasBeenSet = true;
    }

    if (value.HasMember("APIMethod") && !value["APIMethod"].IsNull())
    {
        if (!value["APIMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSensitiveApiApplyDetail.APIMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aPIMethod = string(value["APIMethod"].GetString());
        m_aPIMethodHasBeenSet = true;
    }

    if (value.HasMember("ApplyReason") && !value["ApplyReason"].IsNull())
    {
        if (!value["ApplyReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSensitiveApiApplyDetail.ApplyReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applyReason = string(value["ApplyReason"].GetString());
        m_applyReasonHasBeenSet = true;
    }

    if (value.HasMember("RejectReason") && !value["RejectReason"].IsNull())
    {
        if (!value["RejectReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSensitiveApiApplyDetail.RejectReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rejectReason = string(value["RejectReason"].GetString());
        m_rejectReasonHasBeenSet = true;
    }

    if (value.HasMember("AuditStatus") && !value["AuditStatus"].IsNull())
    {
        if (!value["AuditStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSensitiveApiApplyDetail.AuditStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_auditStatus = value["AuditStatus"].GetInt64();
        m_auditStatusHasBeenSet = true;
    }

    if (value.HasMember("APIDesc") && !value["APIDesc"].IsNull())
    {
        if (!value["APIDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSensitiveApiApplyDetail.APIDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aPIDesc = string(value["APIDesc"].GetString());
        m_aPIDescHasBeenSet = true;
    }

    if (value.HasMember("APIType") && !value["APIType"].IsNull())
    {
        if (!value["APIType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSensitiveApiApplyDetail.APIType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_aPIType = value["APIType"].GetInt64();
        m_aPITypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeSensitiveApiApplyDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_auditStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_auditStatus, allocator);
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


string DescribeSensitiveApiApplyDetail::GetAPIId() const
{
    return m_aPIId;
}

void DescribeSensitiveApiApplyDetail::SetAPIId(const string& _aPIId)
{
    m_aPIId = _aPIId;
    m_aPIIdHasBeenSet = true;
}

bool DescribeSensitiveApiApplyDetail::APIIdHasBeenSet() const
{
    return m_aPIIdHasBeenSet;
}

string DescribeSensitiveApiApplyDetail::GetAPIMethod() const
{
    return m_aPIMethod;
}

void DescribeSensitiveApiApplyDetail::SetAPIMethod(const string& _aPIMethod)
{
    m_aPIMethod = _aPIMethod;
    m_aPIMethodHasBeenSet = true;
}

bool DescribeSensitiveApiApplyDetail::APIMethodHasBeenSet() const
{
    return m_aPIMethodHasBeenSet;
}

string DescribeSensitiveApiApplyDetail::GetApplyReason() const
{
    return m_applyReason;
}

void DescribeSensitiveApiApplyDetail::SetApplyReason(const string& _applyReason)
{
    m_applyReason = _applyReason;
    m_applyReasonHasBeenSet = true;
}

bool DescribeSensitiveApiApplyDetail::ApplyReasonHasBeenSet() const
{
    return m_applyReasonHasBeenSet;
}

string DescribeSensitiveApiApplyDetail::GetRejectReason() const
{
    return m_rejectReason;
}

void DescribeSensitiveApiApplyDetail::SetRejectReason(const string& _rejectReason)
{
    m_rejectReason = _rejectReason;
    m_rejectReasonHasBeenSet = true;
}

bool DescribeSensitiveApiApplyDetail::RejectReasonHasBeenSet() const
{
    return m_rejectReasonHasBeenSet;
}

int64_t DescribeSensitiveApiApplyDetail::GetAuditStatus() const
{
    return m_auditStatus;
}

void DescribeSensitiveApiApplyDetail::SetAuditStatus(const int64_t& _auditStatus)
{
    m_auditStatus = _auditStatus;
    m_auditStatusHasBeenSet = true;
}

bool DescribeSensitiveApiApplyDetail::AuditStatusHasBeenSet() const
{
    return m_auditStatusHasBeenSet;
}

string DescribeSensitiveApiApplyDetail::GetAPIDesc() const
{
    return m_aPIDesc;
}

void DescribeSensitiveApiApplyDetail::SetAPIDesc(const string& _aPIDesc)
{
    m_aPIDesc = _aPIDesc;
    m_aPIDescHasBeenSet = true;
}

bool DescribeSensitiveApiApplyDetail::APIDescHasBeenSet() const
{
    return m_aPIDescHasBeenSet;
}

int64_t DescribeSensitiveApiApplyDetail::GetAPIType() const
{
    return m_aPIType;
}

void DescribeSensitiveApiApplyDetail::SetAPIType(const int64_t& _aPIType)
{
    m_aPIType = _aPIType;
    m_aPITypeHasBeenSet = true;
}

bool DescribeSensitiveApiApplyDetail::APITypeHasBeenSet() const
{
    return m_aPITypeHasBeenSet;
}

