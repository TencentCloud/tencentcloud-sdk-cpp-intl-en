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

#include <tencentcloud/cdb/v20170320/model/ModifyInstanceParamRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

ModifyInstanceParamRequest::ModifyInstanceParamRequest() :
    m_instanceIdsHasBeenSet(false),
    m_paramListHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_waitSwitchHasBeenSet(false),
    m_notSyncRoHasBeenSet(false),
    m_notSyncDrHasBeenSet(false)
{
}

string ModifyInstanceParamRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIds.begin(); itr != m_instanceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_paramListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_paramList.begin(); itr != m_paramList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_templateId, allocator);
    }

    if (m_waitSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WaitSwitch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_waitSwitch, allocator);
    }

    if (m_notSyncRoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotSyncRo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_notSyncRo, allocator);
    }

    if (m_notSyncDrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotSyncDr";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_notSyncDr, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> ModifyInstanceParamRequest::GetInstanceIds() const
{
    return m_instanceIds;
}

void ModifyInstanceParamRequest::SetInstanceIds(const vector<string>& _instanceIds)
{
    m_instanceIds = _instanceIds;
    m_instanceIdsHasBeenSet = true;
}

bool ModifyInstanceParamRequest::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}

vector<Parameter> ModifyInstanceParamRequest::GetParamList() const
{
    return m_paramList;
}

void ModifyInstanceParamRequest::SetParamList(const vector<Parameter>& _paramList)
{
    m_paramList = _paramList;
    m_paramListHasBeenSet = true;
}

bool ModifyInstanceParamRequest::ParamListHasBeenSet() const
{
    return m_paramListHasBeenSet;
}

int64_t ModifyInstanceParamRequest::GetTemplateId() const
{
    return m_templateId;
}

void ModifyInstanceParamRequest::SetTemplateId(const int64_t& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool ModifyInstanceParamRequest::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

int64_t ModifyInstanceParamRequest::GetWaitSwitch() const
{
    return m_waitSwitch;
}

void ModifyInstanceParamRequest::SetWaitSwitch(const int64_t& _waitSwitch)
{
    m_waitSwitch = _waitSwitch;
    m_waitSwitchHasBeenSet = true;
}

bool ModifyInstanceParamRequest::WaitSwitchHasBeenSet() const
{
    return m_waitSwitchHasBeenSet;
}

bool ModifyInstanceParamRequest::GetNotSyncRo() const
{
    return m_notSyncRo;
}

void ModifyInstanceParamRequest::SetNotSyncRo(const bool& _notSyncRo)
{
    m_notSyncRo = _notSyncRo;
    m_notSyncRoHasBeenSet = true;
}

bool ModifyInstanceParamRequest::NotSyncRoHasBeenSet() const
{
    return m_notSyncRoHasBeenSet;
}

bool ModifyInstanceParamRequest::GetNotSyncDr() const
{
    return m_notSyncDr;
}

void ModifyInstanceParamRequest::SetNotSyncDr(const bool& _notSyncDr)
{
    m_notSyncDr = _notSyncDr;
    m_notSyncDrHasBeenSet = true;
}

bool ModifyInstanceParamRequest::NotSyncDrHasBeenSet() const
{
    return m_notSyncDrHasBeenSet;
}


