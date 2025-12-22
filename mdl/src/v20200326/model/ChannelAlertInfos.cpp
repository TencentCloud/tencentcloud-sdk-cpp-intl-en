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

#include <tencentcloud/mdl/v20200326/model/ChannelAlertInfos.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

ChannelAlertInfos::ChannelAlertInfos() :
    m_pipeline0HasBeenSet(false),
    m_pipeline1HasBeenSet(false),
    m_pipelineAActiveAlertsHasBeenSet(false),
    m_pipelineBActiveAlertsHasBeenSet(false)
{
}

CoreInternalOutcome ChannelAlertInfos::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Pipeline0") && !value["Pipeline0"].IsNull())
    {
        if (!value["Pipeline0"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ChannelAlertInfos.Pipeline0` is not array type"));

        const rapidjson::Value &tmpValue = value["Pipeline0"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ChannelPipelineAlerts item;
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
            return CoreInternalOutcome(Core::Error("response `ChannelAlertInfos.Pipeline1` is not array type"));

        const rapidjson::Value &tmpValue = value["Pipeline1"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ChannelPipelineAlerts item;
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

    if (value.HasMember("PipelineAActiveAlerts") && !value["PipelineAActiveAlerts"].IsNull())
    {
        if (!value["PipelineAActiveAlerts"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelAlertInfos.PipelineAActiveAlerts` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pipelineAActiveAlerts = value["PipelineAActiveAlerts"].GetInt64();
        m_pipelineAActiveAlertsHasBeenSet = true;
    }

    if (value.HasMember("PipelineBActiveAlerts") && !value["PipelineBActiveAlerts"].IsNull())
    {
        if (!value["PipelineBActiveAlerts"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelAlertInfos.PipelineBActiveAlerts` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pipelineBActiveAlerts = value["PipelineBActiveAlerts"].GetInt64();
        m_pipelineBActiveAlertsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ChannelAlertInfos::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_pipelineAActiveAlertsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PipelineAActiveAlerts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pipelineAActiveAlerts, allocator);
    }

    if (m_pipelineBActiveAlertsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PipelineBActiveAlerts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pipelineBActiveAlerts, allocator);
    }

}


vector<ChannelPipelineAlerts> ChannelAlertInfos::GetPipeline0() const
{
    return m_pipeline0;
}

void ChannelAlertInfos::SetPipeline0(const vector<ChannelPipelineAlerts>& _pipeline0)
{
    m_pipeline0 = _pipeline0;
    m_pipeline0HasBeenSet = true;
}

bool ChannelAlertInfos::Pipeline0HasBeenSet() const
{
    return m_pipeline0HasBeenSet;
}

vector<ChannelPipelineAlerts> ChannelAlertInfos::GetPipeline1() const
{
    return m_pipeline1;
}

void ChannelAlertInfos::SetPipeline1(const vector<ChannelPipelineAlerts>& _pipeline1)
{
    m_pipeline1 = _pipeline1;
    m_pipeline1HasBeenSet = true;
}

bool ChannelAlertInfos::Pipeline1HasBeenSet() const
{
    return m_pipeline1HasBeenSet;
}

int64_t ChannelAlertInfos::GetPipelineAActiveAlerts() const
{
    return m_pipelineAActiveAlerts;
}

void ChannelAlertInfos::SetPipelineAActiveAlerts(const int64_t& _pipelineAActiveAlerts)
{
    m_pipelineAActiveAlerts = _pipelineAActiveAlerts;
    m_pipelineAActiveAlertsHasBeenSet = true;
}

bool ChannelAlertInfos::PipelineAActiveAlertsHasBeenSet() const
{
    return m_pipelineAActiveAlertsHasBeenSet;
}

int64_t ChannelAlertInfos::GetPipelineBActiveAlerts() const
{
    return m_pipelineBActiveAlerts;
}

void ChannelAlertInfos::SetPipelineBActiveAlerts(const int64_t& _pipelineBActiveAlerts)
{
    m_pipelineBActiveAlerts = _pipelineBActiveAlerts;
    m_pipelineBActiveAlertsHasBeenSet = true;
}

bool ChannelAlertInfos::PipelineBActiveAlertsHasBeenSet() const
{
    return m_pipelineBActiveAlertsHasBeenSet;
}

