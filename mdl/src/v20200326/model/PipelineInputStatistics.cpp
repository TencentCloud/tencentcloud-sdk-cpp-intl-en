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

#include <tencentcloud/mdl/v20200326/model/PipelineInputStatistics.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

PipelineInputStatistics::PipelineInputStatistics() :
    m_timestampHasBeenSet(false),
    m_networkInHasBeenSet(false),
    m_videoHasBeenSet(false),
    m_audioHasBeenSet(false)
{
}

CoreInternalOutcome PipelineInputStatistics::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PipelineInputStatistics.Timestamp` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = value["Timestamp"].GetUint64();
        m_timestampHasBeenSet = true;
    }

    if (value.HasMember("NetworkIn") && !value["NetworkIn"].IsNull())
    {
        if (!value["NetworkIn"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PipelineInputStatistics.NetworkIn` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_networkIn = value["NetworkIn"].GetUint64();
        m_networkInHasBeenSet = true;
    }

    if (value.HasMember("Video") && !value["Video"].IsNull())
    {
        if (!value["Video"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PipelineInputStatistics.Video` is not array type"));

        const rapidjson::Value &tmpValue = value["Video"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VideoPipelineInputStatistics item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_video.push_back(item);
        }
        m_videoHasBeenSet = true;
    }

    if (value.HasMember("Audio") && !value["Audio"].IsNull())
    {
        if (!value["Audio"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PipelineInputStatistics.Audio` is not array type"));

        const rapidjson::Value &tmpValue = value["Audio"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AudioPipelineInputStatistics item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_audio.push_back(item);
        }
        m_audioHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PipelineInputStatistics::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timestamp, allocator);
    }

    if (m_networkInHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkIn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_networkIn, allocator);
    }

    if (m_videoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Video";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_video.begin(); itr != m_video.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_audioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Audio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_audio.begin(); itr != m_audio.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t PipelineInputStatistics::GetTimestamp() const
{
    return m_timestamp;
}

void PipelineInputStatistics::SetTimestamp(const uint64_t& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool PipelineInputStatistics::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

uint64_t PipelineInputStatistics::GetNetworkIn() const
{
    return m_networkIn;
}

void PipelineInputStatistics::SetNetworkIn(const uint64_t& _networkIn)
{
    m_networkIn = _networkIn;
    m_networkInHasBeenSet = true;
}

bool PipelineInputStatistics::NetworkInHasBeenSet() const
{
    return m_networkInHasBeenSet;
}

vector<VideoPipelineInputStatistics> PipelineInputStatistics::GetVideo() const
{
    return m_video;
}

void PipelineInputStatistics::SetVideo(const vector<VideoPipelineInputStatistics>& _video)
{
    m_video = _video;
    m_videoHasBeenSet = true;
}

bool PipelineInputStatistics::VideoHasBeenSet() const
{
    return m_videoHasBeenSet;
}

vector<AudioPipelineInputStatistics> PipelineInputStatistics::GetAudio() const
{
    return m_audio;
}

void PipelineInputStatistics::SetAudio(const vector<AudioPipelineInputStatistics>& _audio)
{
    m_audio = _audio;
    m_audioHasBeenSet = true;
}

bool PipelineInputStatistics::AudioHasBeenSet() const
{
    return m_audioHasBeenSet;
}

