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

#include <tencentcloud/tcsas/v20250106/model/ApproveMNPPaymentEnableRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

ApproveMNPPaymentEnableRequest::ApproveMNPPaymentEnableRequest() :
    m_platformIdHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_approvalNoHasBeenSet(false),
    m_approvalTypeHasBeenSet(false),
    m_approvalNoteHasBeenSet(false)
{
}

string ApproveMNPPaymentEnableRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_platformIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlatformId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platformId.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_approvalNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApprovalNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_approvalNo.c_str(), allocator).Move(), allocator);
    }

    if (m_approvalTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApprovalType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_approvalType, allocator);
    }

    if (m_approvalNoteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApprovalNote";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_approvalNote.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ApproveMNPPaymentEnableRequest::GetPlatformId() const
{
    return m_platformId;
}

void ApproveMNPPaymentEnableRequest::SetPlatformId(const string& _platformId)
{
    m_platformId = _platformId;
    m_platformIdHasBeenSet = true;
}

bool ApproveMNPPaymentEnableRequest::PlatformIdHasBeenSet() const
{
    return m_platformIdHasBeenSet;
}

string ApproveMNPPaymentEnableRequest::GetApplicationId() const
{
    return m_applicationId;
}

void ApproveMNPPaymentEnableRequest::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool ApproveMNPPaymentEnableRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string ApproveMNPPaymentEnableRequest::GetApprovalNo() const
{
    return m_approvalNo;
}

void ApproveMNPPaymentEnableRequest::SetApprovalNo(const string& _approvalNo)
{
    m_approvalNo = _approvalNo;
    m_approvalNoHasBeenSet = true;
}

bool ApproveMNPPaymentEnableRequest::ApprovalNoHasBeenSet() const
{
    return m_approvalNoHasBeenSet;
}

int64_t ApproveMNPPaymentEnableRequest::GetApprovalType() const
{
    return m_approvalType;
}

void ApproveMNPPaymentEnableRequest::SetApprovalType(const int64_t& _approvalType)
{
    m_approvalType = _approvalType;
    m_approvalTypeHasBeenSet = true;
}

bool ApproveMNPPaymentEnableRequest::ApprovalTypeHasBeenSet() const
{
    return m_approvalTypeHasBeenSet;
}

string ApproveMNPPaymentEnableRequest::GetApprovalNote() const
{
    return m_approvalNote;
}

void ApproveMNPPaymentEnableRequest::SetApprovalNote(const string& _approvalNote)
{
    m_approvalNote = _approvalNote;
    m_approvalNoteHasBeenSet = true;
}

bool ApproveMNPPaymentEnableRequest::ApprovalNoteHasBeenSet() const
{
    return m_approvalNoteHasBeenSet;
}


