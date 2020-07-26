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

#include <tencentcloud/mdl/v20200326/model/PipelineOutputStatistics.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace rapidjson;
using namespace std;

PipelineOutputStatistics::PipelineOutputStatistics() :
    m_timestampHasBeenSet(false),
    m_networkOutHasBeenSet(false)
{
}

CoreInternalOutcome PipelineOutputStatistics::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `PipelineOutputStatistics.Timestamp` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = value["Timestamp"].GetUint64();
        m_timestampHasBeenSet = true;
    }

    if (value.HasMember("NetworkOut") && !value["NetworkOut"].IsNull())
    {
        if (!value["NetworkOut"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `PipelineOutputStatistics.NetworkOut` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_networkOut = value["NetworkOut"].GetUint64();
        m_networkOutHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PipelineOutputStatistics::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_timestampHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timestamp, allocator);
    }

    if (m_networkOutHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NetworkOut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_networkOut, allocator);
    }

}


uint64_t PipelineOutputStatistics::GetTimestamp() const
{
    return m_timestamp;
}

void PipelineOutputStatistics::SetTimestamp(const uint64_t& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool PipelineOutputStatistics::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

uint64_t PipelineOutputStatistics::GetNetworkOut() const
{
    return m_networkOut;
}

void PipelineOutputStatistics::SetNetworkOut(const uint64_t& _networkOut)
{
    m_networkOut = _networkOut;
    m_networkOutHasBeenSet = true;
}

bool PipelineOutputStatistics::NetworkOutHasBeenSet() const
{
    return m_networkOutHasBeenSet;
}

