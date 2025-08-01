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

#include <tencentcloud/cwp/v20180228/model/ModifyJavaMemShellPluginSwitchRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

ModifyJavaMemShellPluginSwitchRequest::ModifyJavaMemShellPluginSwitchRequest() :
    m_quuidsHasBeenSet(false),
    m_javaShellStatusHasBeenSet(false)
{
}

string ModifyJavaMemShellPluginSwitchRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_quuidsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuids";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_quuids.begin(); itr != m_quuids.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_javaShellStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JavaShellStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_javaShellStatus, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> ModifyJavaMemShellPluginSwitchRequest::GetQuuids() const
{
    return m_quuids;
}

void ModifyJavaMemShellPluginSwitchRequest::SetQuuids(const vector<string>& _quuids)
{
    m_quuids = _quuids;
    m_quuidsHasBeenSet = true;
}

bool ModifyJavaMemShellPluginSwitchRequest::QuuidsHasBeenSet() const
{
    return m_quuidsHasBeenSet;
}

uint64_t ModifyJavaMemShellPluginSwitchRequest::GetJavaShellStatus() const
{
    return m_javaShellStatus;
}

void ModifyJavaMemShellPluginSwitchRequest::SetJavaShellStatus(const uint64_t& _javaShellStatus)
{
    m_javaShellStatus = _javaShellStatus;
    m_javaShellStatusHasBeenSet = true;
}

bool ModifyJavaMemShellPluginSwitchRequest::JavaShellStatusHasBeenSet() const
{
    return m_javaShellStatusHasBeenSet;
}


