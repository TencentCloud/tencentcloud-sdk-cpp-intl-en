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

#include <tencentcloud/teo/v20220106/model/ModifyOriginGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

ModifyOriginGroupRequest::ModifyOriginGroupRequest() :
    m_originIdHasBeenSet(false),
    m_originNameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_recordHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_originTypeHasBeenSet(false)
{
}

string ModifyOriginGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_originIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_originId.c_str(), allocator).Move(), allocator);
    }

    if (m_originNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_originName.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_recordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Record";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_record.begin(); itr != m_record.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_originTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_originType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyOriginGroupRequest::GetOriginId() const
{
    return m_originId;
}

void ModifyOriginGroupRequest::SetOriginId(const string& _originId)
{
    m_originId = _originId;
    m_originIdHasBeenSet = true;
}

bool ModifyOriginGroupRequest::OriginIdHasBeenSet() const
{
    return m_originIdHasBeenSet;
}

string ModifyOriginGroupRequest::GetOriginName() const
{
    return m_originName;
}

void ModifyOriginGroupRequest::SetOriginName(const string& _originName)
{
    m_originName = _originName;
    m_originNameHasBeenSet = true;
}

bool ModifyOriginGroupRequest::OriginNameHasBeenSet() const
{
    return m_originNameHasBeenSet;
}

string ModifyOriginGroupRequest::GetType() const
{
    return m_type;
}

void ModifyOriginGroupRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ModifyOriginGroupRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<OriginRecord> ModifyOriginGroupRequest::GetRecord() const
{
    return m_record;
}

void ModifyOriginGroupRequest::SetRecord(const vector<OriginRecord>& _record)
{
    m_record = _record;
    m_recordHasBeenSet = true;
}

bool ModifyOriginGroupRequest::RecordHasBeenSet() const
{
    return m_recordHasBeenSet;
}

string ModifyOriginGroupRequest::GetZoneId() const
{
    return m_zoneId;
}

void ModifyOriginGroupRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ModifyOriginGroupRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string ModifyOriginGroupRequest::GetOriginType() const
{
    return m_originType;
}

void ModifyOriginGroupRequest::SetOriginType(const string& _originType)
{
    m_originType = _originType;
    m_originTypeHasBeenSet = true;
}

bool ModifyOriginGroupRequest::OriginTypeHasBeenSet() const
{
    return m_originTypeHasBeenSet;
}


