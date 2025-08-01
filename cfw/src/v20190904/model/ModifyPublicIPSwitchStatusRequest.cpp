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

#include <tencentcloud/cfw/v20190904/model/ModifyPublicIPSwitchStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

ModifyPublicIPSwitchStatusRequest::ModifyPublicIPSwitchStatusRequest() :
    m_fireWallPublicIPHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

string ModifyPublicIPSwitchStatusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fireWallPublicIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FireWallPublicIP";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fireWallPublicIP.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyPublicIPSwitchStatusRequest::GetFireWallPublicIP() const
{
    return m_fireWallPublicIP;
}

void ModifyPublicIPSwitchStatusRequest::SetFireWallPublicIP(const string& _fireWallPublicIP)
{
    m_fireWallPublicIP = _fireWallPublicIP;
    m_fireWallPublicIPHasBeenSet = true;
}

bool ModifyPublicIPSwitchStatusRequest::FireWallPublicIPHasBeenSet() const
{
    return m_fireWallPublicIPHasBeenSet;
}

int64_t ModifyPublicIPSwitchStatusRequest::GetStatus() const
{
    return m_status;
}

void ModifyPublicIPSwitchStatusRequest::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyPublicIPSwitchStatusRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}


