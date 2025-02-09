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

#include <tencentcloud/tcsas/v20250106/model/CreateMNPApprovalRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

CreateMNPApprovalRequest::CreateMNPApprovalRequest() :
    m_mNPVersionIdHasBeenSet(false),
    m_applyActionHasBeenSet(false),
    m_platformIdHasBeenSet(false)
{
}

string CreateMNPApprovalRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_mNPVersionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPVersionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mNPVersionId, allocator);
    }

    if (m_applyActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyAction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applyAction.c_str(), allocator).Move(), allocator);
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


int64_t CreateMNPApprovalRequest::GetMNPVersionId() const
{
    return m_mNPVersionId;
}

void CreateMNPApprovalRequest::SetMNPVersionId(const int64_t& _mNPVersionId)
{
    m_mNPVersionId = _mNPVersionId;
    m_mNPVersionIdHasBeenSet = true;
}

bool CreateMNPApprovalRequest::MNPVersionIdHasBeenSet() const
{
    return m_mNPVersionIdHasBeenSet;
}

string CreateMNPApprovalRequest::GetApplyAction() const
{
    return m_applyAction;
}

void CreateMNPApprovalRequest::SetApplyAction(const string& _applyAction)
{
    m_applyAction = _applyAction;
    m_applyActionHasBeenSet = true;
}

bool CreateMNPApprovalRequest::ApplyActionHasBeenSet() const
{
    return m_applyActionHasBeenSet;
}

string CreateMNPApprovalRequest::GetPlatformId() const
{
    return m_platformId;
}

void CreateMNPApprovalRequest::SetPlatformId(const string& _platformId)
{
    m_platformId = _platformId;
    m_platformIdHasBeenSet = true;
}

bool CreateMNPApprovalRequest::PlatformIdHasBeenSet() const
{
    return m_platformIdHasBeenSet;
}


