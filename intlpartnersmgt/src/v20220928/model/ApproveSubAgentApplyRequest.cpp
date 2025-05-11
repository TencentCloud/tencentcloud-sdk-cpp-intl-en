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

#include <tencentcloud/intlpartnersmgt/v20220928/model/ApproveSubAgentApplyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Intlpartnersmgt::V20220928::Model;
using namespace std;

ApproveSubAgentApplyRequest::ApproveSubAgentApplyRequest() :
    m_subAgentUinHasBeenSet(false),
    m_approveTypeHasBeenSet(false),
    m_rejectReasonHasBeenSet(false)
{
}

string ApproveSubAgentApplyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_subAgentUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAgentUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAgentUin, allocator);
    }

    if (m_approveTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproveType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_approveType.c_str(), allocator).Move(), allocator);
    }

    if (m_rejectReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RejectReason";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_rejectReason.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ApproveSubAgentApplyRequest::GetSubAgentUin() const
{
    return m_subAgentUin;
}

void ApproveSubAgentApplyRequest::SetSubAgentUin(const int64_t& _subAgentUin)
{
    m_subAgentUin = _subAgentUin;
    m_subAgentUinHasBeenSet = true;
}

bool ApproveSubAgentApplyRequest::SubAgentUinHasBeenSet() const
{
    return m_subAgentUinHasBeenSet;
}

string ApproveSubAgentApplyRequest::GetApproveType() const
{
    return m_approveType;
}

void ApproveSubAgentApplyRequest::SetApproveType(const string& _approveType)
{
    m_approveType = _approveType;
    m_approveTypeHasBeenSet = true;
}

bool ApproveSubAgentApplyRequest::ApproveTypeHasBeenSet() const
{
    return m_approveTypeHasBeenSet;
}

string ApproveSubAgentApplyRequest::GetRejectReason() const
{
    return m_rejectReason;
}

void ApproveSubAgentApplyRequest::SetRejectReason(const string& _rejectReason)
{
    m_rejectReason = _rejectReason;
    m_rejectReasonHasBeenSet = true;
}

bool ApproveSubAgentApplyRequest::RejectReasonHasBeenSet() const
{
    return m_rejectReasonHasBeenSet;
}


