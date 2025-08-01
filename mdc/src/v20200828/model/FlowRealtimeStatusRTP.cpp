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

#include <tencentcloud/mdc/v20200828/model/FlowRealtimeStatusRTP.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdc::V20200828::Model;
using namespace std;

FlowRealtimeStatusRTP::FlowRealtimeStatusRTP() :
    m_packetsHasBeenSet(false)
{
}

CoreInternalOutcome FlowRealtimeStatusRTP::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Packets") && !value["Packets"].IsNull())
    {
        if (!value["Packets"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowRealtimeStatusRTP.Packets` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_packets = value["Packets"].GetInt64();
        m_packetsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlowRealtimeStatusRTP::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_packetsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Packets";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_packets, allocator);
    }

}


int64_t FlowRealtimeStatusRTP::GetPackets() const
{
    return m_packets;
}

void FlowRealtimeStatusRTP::SetPackets(const int64_t& _packets)
{
    m_packets = _packets;
    m_packetsHasBeenSet = true;
}

bool FlowRealtimeStatusRTP::PacketsHasBeenSet() const
{
    return m_packetsHasBeenSet;
}

