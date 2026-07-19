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

#include <tencentcloud/tcsas/v20250106/model/ApplyPaymentOpenDetailRes.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

ApplyPaymentOpenDetailRes::ApplyPaymentOpenDetailRes() :
    m_approvalStatusHasBeenSet(false),
    m_applyTimeHasBeenSet(false),
    m_approvalTimeHasBeenSet(false),
    m_approvalNoteHasBeenSet(false),
    m_approvalShowHasBeenSet(false),
    m_applyShowHasBeenSet(false)
{
}

CoreInternalOutcome ApplyPaymentOpenDetailRes::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApprovalStatus") && !value["ApprovalStatus"].IsNull())
    {
        if (!value["ApprovalStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApplyPaymentOpenDetailRes.ApprovalStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_approvalStatus = value["ApprovalStatus"].GetInt64();
        m_approvalStatusHasBeenSet = true;
    }

    if (value.HasMember("ApplyTime") && !value["ApplyTime"].IsNull())
    {
        if (!value["ApplyTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApplyPaymentOpenDetailRes.ApplyTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_applyTime = value["ApplyTime"].GetInt64();
        m_applyTimeHasBeenSet = true;
    }

    if (value.HasMember("ApprovalTime") && !value["ApprovalTime"].IsNull())
    {
        if (!value["ApprovalTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApplyPaymentOpenDetailRes.ApprovalTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_approvalTime = value["ApprovalTime"].GetInt64();
        m_approvalTimeHasBeenSet = true;
    }

    if (value.HasMember("ApprovalNote") && !value["ApprovalNote"].IsNull())
    {
        if (!value["ApprovalNote"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplyPaymentOpenDetailRes.ApprovalNote` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approvalNote = string(value["ApprovalNote"].GetString());
        m_approvalNoteHasBeenSet = true;
    }

    if (value.HasMember("ApprovalShow") && !value["ApprovalShow"].IsNull())
    {
        if (!value["ApprovalShow"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApplyPaymentOpenDetailRes.ApprovalShow` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_approvalShow = value["ApprovalShow"].GetInt64();
        m_approvalShowHasBeenSet = true;
    }

    if (value.HasMember("ApplyShow") && !value["ApplyShow"].IsNull())
    {
        if (!value["ApplyShow"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApplyPaymentOpenDetailRes.ApplyShow` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_applyShow = value["ApplyShow"].GetInt64();
        m_applyShowHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApplyPaymentOpenDetailRes::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_approvalStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApprovalStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_approvalStatus, allocator);
    }

    if (m_applyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_applyTime, allocator);
    }

    if (m_approvalTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApprovalTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_approvalTime, allocator);
    }

    if (m_approvalNoteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApprovalNote";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approvalNote.c_str(), allocator).Move(), allocator);
    }

    if (m_approvalShowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApprovalShow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_approvalShow, allocator);
    }

    if (m_applyShowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyShow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_applyShow, allocator);
    }

}


int64_t ApplyPaymentOpenDetailRes::GetApprovalStatus() const
{
    return m_approvalStatus;
}

void ApplyPaymentOpenDetailRes::SetApprovalStatus(const int64_t& _approvalStatus)
{
    m_approvalStatus = _approvalStatus;
    m_approvalStatusHasBeenSet = true;
}

bool ApplyPaymentOpenDetailRes::ApprovalStatusHasBeenSet() const
{
    return m_approvalStatusHasBeenSet;
}

int64_t ApplyPaymentOpenDetailRes::GetApplyTime() const
{
    return m_applyTime;
}

void ApplyPaymentOpenDetailRes::SetApplyTime(const int64_t& _applyTime)
{
    m_applyTime = _applyTime;
    m_applyTimeHasBeenSet = true;
}

bool ApplyPaymentOpenDetailRes::ApplyTimeHasBeenSet() const
{
    return m_applyTimeHasBeenSet;
}

int64_t ApplyPaymentOpenDetailRes::GetApprovalTime() const
{
    return m_approvalTime;
}

void ApplyPaymentOpenDetailRes::SetApprovalTime(const int64_t& _approvalTime)
{
    m_approvalTime = _approvalTime;
    m_approvalTimeHasBeenSet = true;
}

bool ApplyPaymentOpenDetailRes::ApprovalTimeHasBeenSet() const
{
    return m_approvalTimeHasBeenSet;
}

string ApplyPaymentOpenDetailRes::GetApprovalNote() const
{
    return m_approvalNote;
}

void ApplyPaymentOpenDetailRes::SetApprovalNote(const string& _approvalNote)
{
    m_approvalNote = _approvalNote;
    m_approvalNoteHasBeenSet = true;
}

bool ApplyPaymentOpenDetailRes::ApprovalNoteHasBeenSet() const
{
    return m_approvalNoteHasBeenSet;
}

int64_t ApplyPaymentOpenDetailRes::GetApprovalShow() const
{
    return m_approvalShow;
}

void ApplyPaymentOpenDetailRes::SetApprovalShow(const int64_t& _approvalShow)
{
    m_approvalShow = _approvalShow;
    m_approvalShowHasBeenSet = true;
}

bool ApplyPaymentOpenDetailRes::ApprovalShowHasBeenSet() const
{
    return m_approvalShowHasBeenSet;
}

int64_t ApplyPaymentOpenDetailRes::GetApplyShow() const
{
    return m_applyShow;
}

void ApplyPaymentOpenDetailRes::SetApplyShow(const int64_t& _applyShow)
{
    m_applyShow = _applyShow;
    m_applyShowHasBeenSet = true;
}

bool ApplyPaymentOpenDetailRes::ApplyShowHasBeenSet() const
{
    return m_applyShowHasBeenSet;
}

