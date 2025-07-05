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

#include <tencentcloud/tcmpp/v20240801/model/CreatePlatformAuditRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcmpp::V20240801::Model;
using namespace std;

CreatePlatformAuditRequest::CreatePlatformAuditRequest() :
    m_mNPVersionIdHasBeenSet(false),
    m_applyActionHasBeenSet(false),
    m_platformIdHasBeenSet(false)
{
}

string CreatePlatformAuditRequest::ToJsonString() const
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


int64_t CreatePlatformAuditRequest::GetMNPVersionId() const
{
    return m_mNPVersionId;
}

void CreatePlatformAuditRequest::SetMNPVersionId(const int64_t& _mNPVersionId)
{
    m_mNPVersionId = _mNPVersionId;
    m_mNPVersionIdHasBeenSet = true;
}

bool CreatePlatformAuditRequest::MNPVersionIdHasBeenSet() const
{
    return m_mNPVersionIdHasBeenSet;
}

string CreatePlatformAuditRequest::GetApplyAction() const
{
    return m_applyAction;
}

void CreatePlatformAuditRequest::SetApplyAction(const string& _applyAction)
{
    m_applyAction = _applyAction;
    m_applyActionHasBeenSet = true;
}

bool CreatePlatformAuditRequest::ApplyActionHasBeenSet() const
{
    return m_applyActionHasBeenSet;
}

string CreatePlatformAuditRequest::GetPlatformId() const
{
    return m_platformId;
}

void CreatePlatformAuditRequest::SetPlatformId(const string& _platformId)
{
    m_platformId = _platformId;
    m_platformIdHasBeenSet = true;
}

bool CreatePlatformAuditRequest::PlatformIdHasBeenSet() const
{
    return m_platformIdHasBeenSet;
}


