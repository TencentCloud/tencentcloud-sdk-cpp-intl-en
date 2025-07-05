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

#include <tencentcloud/tcsas/v20250106/model/ProcessMNPSensitiveAPIPermissionApprovalRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

ProcessMNPSensitiveAPIPermissionApprovalRequest::ProcessMNPSensitiveAPIPermissionApprovalRequest() :
    m_approvalNoHasBeenSet(false),
    m_approvalStatusHasBeenSet(false),
    m_platformIdHasBeenSet(false),
    m_approvalNoteHasBeenSet(false)
{
}

string ProcessMNPSensitiveAPIPermissionApprovalRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_approvalNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApprovalNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_approvalNo.c_str(), allocator).Move(), allocator);
    }

    if (m_approvalStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApprovalStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_approvalStatus, allocator);
    }

    if (m_platformIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlatformId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platformId.c_str(), allocator).Move(), allocator);
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


string ProcessMNPSensitiveAPIPermissionApprovalRequest::GetApprovalNo() const
{
    return m_approvalNo;
}

void ProcessMNPSensitiveAPIPermissionApprovalRequest::SetApprovalNo(const string& _approvalNo)
{
    m_approvalNo = _approvalNo;
    m_approvalNoHasBeenSet = true;
}

bool ProcessMNPSensitiveAPIPermissionApprovalRequest::ApprovalNoHasBeenSet() const
{
    return m_approvalNoHasBeenSet;
}

int64_t ProcessMNPSensitiveAPIPermissionApprovalRequest::GetApprovalStatus() const
{
    return m_approvalStatus;
}

void ProcessMNPSensitiveAPIPermissionApprovalRequest::SetApprovalStatus(const int64_t& _approvalStatus)
{
    m_approvalStatus = _approvalStatus;
    m_approvalStatusHasBeenSet = true;
}

bool ProcessMNPSensitiveAPIPermissionApprovalRequest::ApprovalStatusHasBeenSet() const
{
    return m_approvalStatusHasBeenSet;
}

string ProcessMNPSensitiveAPIPermissionApprovalRequest::GetPlatformId() const
{
    return m_platformId;
}

void ProcessMNPSensitiveAPIPermissionApprovalRequest::SetPlatformId(const string& _platformId)
{
    m_platformId = _platformId;
    m_platformIdHasBeenSet = true;
}

bool ProcessMNPSensitiveAPIPermissionApprovalRequest::PlatformIdHasBeenSet() const
{
    return m_platformIdHasBeenSet;
}

string ProcessMNPSensitiveAPIPermissionApprovalRequest::GetApprovalNote() const
{
    return m_approvalNote;
}

void ProcessMNPSensitiveAPIPermissionApprovalRequest::SetApprovalNote(const string& _approvalNote)
{
    m_approvalNote = _approvalNote;
    m_approvalNoteHasBeenSet = true;
}

bool ProcessMNPSensitiveAPIPermissionApprovalRequest::ApprovalNoteHasBeenSet() const
{
    return m_approvalNoteHasBeenSet;
}


