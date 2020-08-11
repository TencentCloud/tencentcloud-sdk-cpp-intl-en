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

#include <tencentcloud/vod/v20180717/model/AdaptiveDynamicStreamingTaskInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace rapidjson;
using namespace std;

AdaptiveDynamicStreamingTaskInput::AdaptiveDynamicStreamingTaskInput() :
    m_definitionHasBeenSet(false),
    m_watermarkSetHasBeenSet(false)
{
}

CoreInternalOutcome AdaptiveDynamicStreamingTaskInput::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `AdaptiveDynamicStreamingTaskInput.Definition` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_definition = value["Definition"].GetUint64();
        m_definitionHasBeenSet = true;
    }

    if (value.HasMember("WatermarkSet") && !value["WatermarkSet"].IsNull())
    {
        if (!value["WatermarkSet"].IsArray())
            return CoreInternalOutcome(Error("response `AdaptiveDynamicStreamingTaskInput.WatermarkSet` is not array type"));

        const Value &tmpValue = value["WatermarkSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WatermarkInput item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_watermarkSet.push_back(item);
        }
        m_watermarkSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AdaptiveDynamicStreamingTaskInput::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_definitionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_definition, allocator);
    }

    if (m_watermarkSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "WatermarkSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_watermarkSet.begin(); itr != m_watermarkSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t AdaptiveDynamicStreamingTaskInput::GetDefinition() const
{
    return m_definition;
}

void AdaptiveDynamicStreamingTaskInput::SetDefinition(const uint64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool AdaptiveDynamicStreamingTaskInput::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

vector<WatermarkInput> AdaptiveDynamicStreamingTaskInput::GetWatermarkSet() const
{
    return m_watermarkSet;
}

void AdaptiveDynamicStreamingTaskInput::SetWatermarkSet(const vector<WatermarkInput>& _watermarkSet)
{
    m_watermarkSet = _watermarkSet;
    m_watermarkSetHasBeenSet = true;
}

bool AdaptiveDynamicStreamingTaskInput::WatermarkSetHasBeenSet() const
{
    return m_watermarkSetHasBeenSet;
}
