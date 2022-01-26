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

#include <tencentcloud/mdl/v20200326/model/OutputsStatistics.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

OutputsStatistics::OutputsStatistics() :
    m_pipeline0HasBeenSet(false),
    m_pipeline1HasBeenSet(false)
{
}

CoreInternalOutcome OutputsStatistics::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Pipeline0") && !value["Pipeline0"].IsNull())
    {
        if (!value["Pipeline0"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OutputsStatistics.Pipeline0` is not array type"));

        const rapidjson::Value &tmpValue = value["Pipeline0"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PipelineOutputStatistics item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_pipeline0.push_back(item);
        }
        m_pipeline0HasBeenSet = true;
    }

    if (value.HasMember("Pipeline1") && !value["Pipeline1"].IsNull())
    {
        if (!value["Pipeline1"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OutputsStatistics.Pipeline1` is not array type"));

        const rapidjson::Value &tmpValue = value["Pipeline1"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PipelineOutputStatistics item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_pipeline1.push_back(item);
        }
        m_pipeline1HasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OutputsStatistics::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pipeline0HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pipeline0";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_pipeline0.begin(); itr != m_pipeline0.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_pipeline1HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pipeline1";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_pipeline1.begin(); itr != m_pipeline1.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<PipelineOutputStatistics> OutputsStatistics::GetPipeline0() const
{
    return m_pipeline0;
}

void OutputsStatistics::SetPipeline0(const vector<PipelineOutputStatistics>& _pipeline0)
{
    m_pipeline0 = _pipeline0;
    m_pipeline0HasBeenSet = true;
}

bool OutputsStatistics::Pipeline0HasBeenSet() const
{
    return m_pipeline0HasBeenSet;
}

vector<PipelineOutputStatistics> OutputsStatistics::GetPipeline1() const
{
    return m_pipeline1;
}

void OutputsStatistics::SetPipeline1(const vector<PipelineOutputStatistics>& _pipeline1)
{
    m_pipeline1 = _pipeline1;
    m_pipeline1HasBeenSet = true;
}

bool OutputsStatistics::Pipeline1HasBeenSet() const
{
    return m_pipeline1HasBeenSet;
}

