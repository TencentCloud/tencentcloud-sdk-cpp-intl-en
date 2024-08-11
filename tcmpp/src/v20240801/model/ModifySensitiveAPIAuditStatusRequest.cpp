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

#include <tencentcloud/tcmpp/v20240801/model/ModifySensitiveAPIAuditStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcmpp::V20240801::Model;
using namespace std;

ModifySensitiveAPIAuditStatusRequest::ModifySensitiveAPIAuditStatusRequest() :
    m_auditNoHasBeenSet(false),
    m_auditStatusHasBeenSet(false),
    m_platformIdHasBeenSet(false),
    m_auditNoteHasBeenSet(false)
{
}

string ModifySensitiveAPIAuditStatusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_auditNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_auditNo.c_str(), allocator).Move(), allocator);
    }

    if (m_auditStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_auditStatus, allocator);
    }

    if (m_platformIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlatformId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platformId.c_str(), allocator).Move(), allocator);
    }

    if (m_auditNoteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditNote";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_auditNote.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifySensitiveAPIAuditStatusRequest::GetAuditNo() const
{
    return m_auditNo;
}

void ModifySensitiveAPIAuditStatusRequest::SetAuditNo(const string& _auditNo)
{
    m_auditNo = _auditNo;
    m_auditNoHasBeenSet = true;
}

bool ModifySensitiveAPIAuditStatusRequest::AuditNoHasBeenSet() const
{
    return m_auditNoHasBeenSet;
}

int64_t ModifySensitiveAPIAuditStatusRequest::GetAuditStatus() const
{
    return m_auditStatus;
}

void ModifySensitiveAPIAuditStatusRequest::SetAuditStatus(const int64_t& _auditStatus)
{
    m_auditStatus = _auditStatus;
    m_auditStatusHasBeenSet = true;
}

bool ModifySensitiveAPIAuditStatusRequest::AuditStatusHasBeenSet() const
{
    return m_auditStatusHasBeenSet;
}

string ModifySensitiveAPIAuditStatusRequest::GetPlatformId() const
{
    return m_platformId;
}

void ModifySensitiveAPIAuditStatusRequest::SetPlatformId(const string& _platformId)
{
    m_platformId = _platformId;
    m_platformIdHasBeenSet = true;
}

bool ModifySensitiveAPIAuditStatusRequest::PlatformIdHasBeenSet() const
{
    return m_platformIdHasBeenSet;
}

string ModifySensitiveAPIAuditStatusRequest::GetAuditNote() const
{
    return m_auditNote;
}

void ModifySensitiveAPIAuditStatusRequest::SetAuditNote(const string& _auditNote)
{
    m_auditNote = _auditNote;
    m_auditNoteHasBeenSet = true;
}

bool ModifySensitiveAPIAuditStatusRequest::AuditNoteHasBeenSet() const
{
    return m_auditNoteHasBeenSet;
}


