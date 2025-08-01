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

#include <tencentcloud/cfw/v20190904/model/ModifyAllVPCSwitchStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

ModifyAllVPCSwitchStatusRequest::ModifyAllVPCSwitchStatusRequest() :
    m_statusHasBeenSet(false),
    m_fireWallVpcIdsHasBeenSet(false)
{
}

string ModifyAllVPCSwitchStatusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_fireWallVpcIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FireWallVpcIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fireWallVpcIds.begin(); itr != m_fireWallVpcIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifyAllVPCSwitchStatusRequest::GetStatus() const
{
    return m_status;
}

void ModifyAllVPCSwitchStatusRequest::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyAllVPCSwitchStatusRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> ModifyAllVPCSwitchStatusRequest::GetFireWallVpcIds() const
{
    return m_fireWallVpcIds;
}

void ModifyAllVPCSwitchStatusRequest::SetFireWallVpcIds(const vector<string>& _fireWallVpcIds)
{
    m_fireWallVpcIds = _fireWallVpcIds;
    m_fireWallVpcIdsHasBeenSet = true;
}

bool ModifyAllVPCSwitchStatusRequest::FireWallVpcIdsHasBeenSet() const
{
    return m_fireWallVpcIdsHasBeenSet;
}


