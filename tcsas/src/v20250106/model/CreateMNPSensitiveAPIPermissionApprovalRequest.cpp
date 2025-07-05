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

#include <tencentcloud/tcsas/v20250106/model/CreateMNPSensitiveAPIPermissionApprovalRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

CreateMNPSensitiveAPIPermissionApprovalRequest::CreateMNPSensitiveAPIPermissionApprovalRequest() :
    m_aPIIdHasBeenSet(false),
    m_applyReasonHasBeenSet(false),
    m_mNPIdHasBeenSet(false),
    m_platformIdHasBeenSet(false)
{
}

string CreateMNPSensitiveAPIPermissionApprovalRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_aPIIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "APIId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_aPIId.c_str(), allocator).Move(), allocator);
    }

    if (m_applyReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyReason";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applyReason.c_str(), allocator).Move(), allocator);
    }

    if (m_mNPIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mNPId.c_str(), allocator).Move(), allocator);
    }

    if (m_platformIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlatformId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platformId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateMNPSensitiveAPIPermissionApprovalRequest::GetAPIId() const
{
    return m_aPIId;
}

void CreateMNPSensitiveAPIPermissionApprovalRequest::SetAPIId(const string& _aPIId)
{
    m_aPIId = _aPIId;
    m_aPIIdHasBeenSet = true;
}

bool CreateMNPSensitiveAPIPermissionApprovalRequest::APIIdHasBeenSet() const
{
    return m_aPIIdHasBeenSet;
}

string CreateMNPSensitiveAPIPermissionApprovalRequest::GetApplyReason() const
{
    return m_applyReason;
}

void CreateMNPSensitiveAPIPermissionApprovalRequest::SetApplyReason(const string& _applyReason)
{
    m_applyReason = _applyReason;
    m_applyReasonHasBeenSet = true;
}

bool CreateMNPSensitiveAPIPermissionApprovalRequest::ApplyReasonHasBeenSet() const
{
    return m_applyReasonHasBeenSet;
}

string CreateMNPSensitiveAPIPermissionApprovalRequest::GetMNPId() const
{
    return m_mNPId;
}

void CreateMNPSensitiveAPIPermissionApprovalRequest::SetMNPId(const string& _mNPId)
{
    m_mNPId = _mNPId;
    m_mNPIdHasBeenSet = true;
}

bool CreateMNPSensitiveAPIPermissionApprovalRequest::MNPIdHasBeenSet() const
{
    return m_mNPIdHasBeenSet;
}

string CreateMNPSensitiveAPIPermissionApprovalRequest::GetPlatformId() const
{
    return m_platformId;
}

void CreateMNPSensitiveAPIPermissionApprovalRequest::SetPlatformId(const string& _platformId)
{
    m_platformId = _platformId;
    m_platformIdHasBeenSet = true;
}

bool CreateMNPSensitiveAPIPermissionApprovalRequest::PlatformIdHasBeenSet() const
{
    return m_platformIdHasBeenSet;
}


