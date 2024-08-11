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

#include <tencentcloud/tcmpp/v20240801/model/ModifyPlatformAuditStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcmpp::V20240801::Model;
using namespace std;

ModifyPlatformAuditStatusRequest::ModifyPlatformAuditStatusRequest() :
    m_auditNoHasBeenSet(false),
    m_auditResultHasBeenSet(false),
    m_platformIdHasBeenSet(false),
    m_auditNoteHasBeenSet(false),
    m_auditItemsHasBeenSet(false)
{
}

string ModifyPlatformAuditStatusRequest::ToJsonString() const
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

    if (m_auditResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditResult";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_auditResult, allocator);
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

    if (m_auditItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditItems";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_auditItems.begin(); itr != m_auditItems.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyPlatformAuditStatusRequest::GetAuditNo() const
{
    return m_auditNo;
}

void ModifyPlatformAuditStatusRequest::SetAuditNo(const string& _auditNo)
{
    m_auditNo = _auditNo;
    m_auditNoHasBeenSet = true;
}

bool ModifyPlatformAuditStatusRequest::AuditNoHasBeenSet() const
{
    return m_auditNoHasBeenSet;
}

int64_t ModifyPlatformAuditStatusRequest::GetAuditResult() const
{
    return m_auditResult;
}

void ModifyPlatformAuditStatusRequest::SetAuditResult(const int64_t& _auditResult)
{
    m_auditResult = _auditResult;
    m_auditResultHasBeenSet = true;
}

bool ModifyPlatformAuditStatusRequest::AuditResultHasBeenSet() const
{
    return m_auditResultHasBeenSet;
}

string ModifyPlatformAuditStatusRequest::GetPlatformId() const
{
    return m_platformId;
}

void ModifyPlatformAuditStatusRequest::SetPlatformId(const string& _platformId)
{
    m_platformId = _platformId;
    m_platformIdHasBeenSet = true;
}

bool ModifyPlatformAuditStatusRequest::PlatformIdHasBeenSet() const
{
    return m_platformIdHasBeenSet;
}

string ModifyPlatformAuditStatusRequest::GetAuditNote() const
{
    return m_auditNote;
}

void ModifyPlatformAuditStatusRequest::SetAuditNote(const string& _auditNote)
{
    m_auditNote = _auditNote;
    m_auditNoteHasBeenSet = true;
}

bool ModifyPlatformAuditStatusRequest::AuditNoteHasBeenSet() const
{
    return m_auditNoteHasBeenSet;
}

vector<AuditInfoReq> ModifyPlatformAuditStatusRequest::GetAuditItems() const
{
    return m_auditItems;
}

void ModifyPlatformAuditStatusRequest::SetAuditItems(const vector<AuditInfoReq>& _auditItems)
{
    m_auditItems = _auditItems;
    m_auditItemsHasBeenSet = true;
}

bool ModifyPlatformAuditStatusRequest::AuditItemsHasBeenSet() const
{
    return m_auditItemsHasBeenSet;
}


