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

#include <tencentcloud/mdl/v20200326/model/ChannelInputStatistics.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace rapidjson;
using namespace std;

ChannelInputStatistics::ChannelInputStatistics() :
    m_inputIdHasBeenSet(false),
    m_statisticsHasBeenSet(false)
{
}

CoreInternalOutcome ChannelInputStatistics::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("InputId") && !value["InputId"].IsNull())
    {
        if (!value["InputId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ChannelInputStatistics.InputId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputId = string(value["InputId"].GetString());
        m_inputIdHasBeenSet = true;
    }

    if (value.HasMember("Statistics") && !value["Statistics"].IsNull())
    {
        if (!value["Statistics"].IsObject())
        {
            return CoreInternalOutcome(Error("response `ChannelInputStatistics.Statistics` is not object type").SetRequestId(requestId));
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

void ChannelInputStatistics::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_inputIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InputId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_inputId.c_str(), allocator).Move(), allocator);
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


string ChannelInputStatistics::GetInputId() const
{
    return m_inputId;
}

void ChannelInputStatistics::SetInputId(const string& _inputId)
{
    m_inputId = _inputId;
    m_inputIdHasBeenSet = true;
}

bool ChannelInputStatistics::InputIdHasBeenSet() const
{
    return m_inputIdHasBeenSet;
}

InputStatistics ChannelInputStatistics::GetStatistics() const
{
    return m_statistics;
}

void ChannelInputStatistics::SetStatistics(const InputStatistics& _statistics)
{
    m_statistics = _statistics;
    m_statisticsHasBeenSet = true;
}

bool ChannelInputStatistics::StatisticsHasBeenSet() const
{
    return m_statisticsHasBeenSet;
}

