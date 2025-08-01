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

#include <tencentcloud/vpc/v20170312/model/ModifyNetworkAclQuintupleEntriesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

ModifyNetworkAclQuintupleEntriesRequest::ModifyNetworkAclQuintupleEntriesRequest() :
    m_networkAclIdHasBeenSet(false),
    m_networkAclQuintupleSetHasBeenSet(false)
{
}

string ModifyNetworkAclQuintupleEntriesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_networkAclIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkAclId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_networkAclId.c_str(), allocator).Move(), allocator);
    }

    if (m_networkAclQuintupleSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkAclQuintupleSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_networkAclQuintupleSet.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyNetworkAclQuintupleEntriesRequest::GetNetworkAclId() const
{
    return m_networkAclId;
}

void ModifyNetworkAclQuintupleEntriesRequest::SetNetworkAclId(const string& _networkAclId)
{
    m_networkAclId = _networkAclId;
    m_networkAclIdHasBeenSet = true;
}

bool ModifyNetworkAclQuintupleEntriesRequest::NetworkAclIdHasBeenSet() const
{
    return m_networkAclIdHasBeenSet;
}

NetworkAclQuintupleEntries ModifyNetworkAclQuintupleEntriesRequest::GetNetworkAclQuintupleSet() const
{
    return m_networkAclQuintupleSet;
}

void ModifyNetworkAclQuintupleEntriesRequest::SetNetworkAclQuintupleSet(const NetworkAclQuintupleEntries& _networkAclQuintupleSet)
{
    m_networkAclQuintupleSet = _networkAclQuintupleSet;
    m_networkAclQuintupleSetHasBeenSet = true;
}

bool ModifyNetworkAclQuintupleEntriesRequest::NetworkAclQuintupleSetHasBeenSet() const
{
    return m_networkAclQuintupleSetHasBeenSet;
}


