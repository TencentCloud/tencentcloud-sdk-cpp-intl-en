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

#include <tencentcloud/mdc/v20200828/model/DescribeFlow.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdc::V20200828::Model;
using namespace std;

DescribeFlow::DescribeFlow() :
    m_flowIdHasBeenSet(false),
    m_flowNameHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_maxBandwidthHasBeenSet(false),
    m_inputGroupHasBeenSet(false),
    m_outputGroupHasBeenSet(false),
    m_eventIdHasBeenSet(false)
{
}

CoreInternalOutcome DescribeFlow::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FlowId") && !value["FlowId"].IsNull())
    {
        if (!value["FlowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeFlow.FlowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowId = string(value["FlowId"].GetString());
        m_flowIdHasBeenSet = true;
    }

    if (value.HasMember("FlowName") && !value["FlowName"].IsNull())
    {
        if (!value["FlowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeFlow.FlowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowName = string(value["FlowName"].GetString());
        m_flowNameHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeFlow.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("MaxBandwidth") && !value["MaxBandwidth"].IsNull())
    {
        if (!value["MaxBandwidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeFlow.MaxBandwidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxBandwidth = value["MaxBandwidth"].GetInt64();
        m_maxBandwidthHasBeenSet = true;
    }

    if (value.HasMember("InputGroup") && !value["InputGroup"].IsNull())
    {
        if (!value["InputGroup"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeFlow.InputGroup` is not array type"));

        const rapidjson::Value &tmpValue = value["InputGroup"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DescribeInput item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_inputGroup.push_back(item);
        }
        m_inputGroupHasBeenSet = true;
    }

    if (value.HasMember("OutputGroup") && !value["OutputGroup"].IsNull())
    {
        if (!value["OutputGroup"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeFlow.OutputGroup` is not array type"));

        const rapidjson::Value &tmpValue = value["OutputGroup"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DescribeOutput item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_outputGroup.push_back(item);
        }
        m_outputGroupHasBeenSet = true;
    }

    if (value.HasMember("EventId") && !value["EventId"].IsNull())
    {
        if (!value["EventId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeFlow.EventId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventId = string(value["EventId"].GetString());
        m_eventIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeFlow::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_flowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowId.c_str(), allocator).Move(), allocator);
    }

    if (m_flowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowName.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_maxBandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxBandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxBandwidth, allocator);
    }

    if (m_inputGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_inputGroup.begin(); itr != m_inputGroup.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_outputGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_outputGroup.begin(); itr != m_outputGroup.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_eventIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventId.c_str(), allocator).Move(), allocator);
    }

}


string DescribeFlow::GetFlowId() const
{
    return m_flowId;
}

void DescribeFlow::SetFlowId(const string& _flowId)
{
    m_flowId = _flowId;
    m_flowIdHasBeenSet = true;
}

bool DescribeFlow::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}

string DescribeFlow::GetFlowName() const
{
    return m_flowName;
}

void DescribeFlow::SetFlowName(const string& _flowName)
{
    m_flowName = _flowName;
    m_flowNameHasBeenSet = true;
}

bool DescribeFlow::FlowNameHasBeenSet() const
{
    return m_flowNameHasBeenSet;
}

string DescribeFlow::GetState() const
{
    return m_state;
}

void DescribeFlow::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool DescribeFlow::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

int64_t DescribeFlow::GetMaxBandwidth() const
{
    return m_maxBandwidth;
}

void DescribeFlow::SetMaxBandwidth(const int64_t& _maxBandwidth)
{
    m_maxBandwidth = _maxBandwidth;
    m_maxBandwidthHasBeenSet = true;
}

bool DescribeFlow::MaxBandwidthHasBeenSet() const
{
    return m_maxBandwidthHasBeenSet;
}

vector<DescribeInput> DescribeFlow::GetInputGroup() const
{
    return m_inputGroup;
}

void DescribeFlow::SetInputGroup(const vector<DescribeInput>& _inputGroup)
{
    m_inputGroup = _inputGroup;
    m_inputGroupHasBeenSet = true;
}

bool DescribeFlow::InputGroupHasBeenSet() const
{
    return m_inputGroupHasBeenSet;
}

vector<DescribeOutput> DescribeFlow::GetOutputGroup() const
{
    return m_outputGroup;
}

void DescribeFlow::SetOutputGroup(const vector<DescribeOutput>& _outputGroup)
{
    m_outputGroup = _outputGroup;
    m_outputGroupHasBeenSet = true;
}

bool DescribeFlow::OutputGroupHasBeenSet() const
{
    return m_outputGroupHasBeenSet;
}

string DescribeFlow::GetEventId() const
{
    return m_eventId;
}

void DescribeFlow::SetEventId(const string& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool DescribeFlow::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

