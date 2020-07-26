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

#include <tencentcloud/mdl/v20200326/model/ChannelOutputsStatistics.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace rapidjson;
using namespace std;

ChannelOutputsStatistics::ChannelOutputsStatistics() :
    m_outputGroupNameHasBeenSet(false),
    m_statisticsHasBeenSet(false)
{
}

CoreInternalOutcome ChannelOutputsStatistics::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("OutputGroupName") && !value["OutputGroupName"].IsNull())
    {
        if (!value["OutputGroupName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ChannelOutputsStatistics.OutputGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputGroupName = string(value["OutputGroupName"].GetString());
        m_outputGroupNameHasBeenSet = true;
    }

    if (value.HasMember("Statistics") && !value["Statistics"].IsNull())
    {
        if (!value["Statistics"].IsObject())
        {
            return CoreInternalOutcome(Error("response `ChannelOutputsStatistics.Statistics` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_statistics.Deserialize(value["Statistics"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_statisticsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ChannelOutputsStatistics::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_outputGroupNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OutputGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_outputGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_statisticsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Statistics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_statistics.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ChannelOutputsStatistics::GetOutputGroupName() const
{
    return m_outputGroupName;
}

void ChannelOutputsStatistics::SetOutputGroupName(const string& _outputGroupName)
{
    m_outputGroupName = _outputGroupName;
    m_outputGroupNameHasBeenSet = true;
}

bool ChannelOutputsStatistics::OutputGroupNameHasBeenSet() const
{
    return m_outputGroupNameHasBeenSet;
}

OutputsStatistics ChannelOutputsStatistics::GetStatistics() const
{
    return m_statistics;
}

void ChannelOutputsStatistics::SetStatistics(const OutputsStatistics& _statistics)
{
    m_statistics = _statistics;
    m_statisticsHasBeenSet = true;
}

bool ChannelOutputsStatistics::StatisticsHasBeenSet() const
{
    return m_statisticsHasBeenSet;
}

