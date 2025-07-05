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

#include <tencentcloud/mdl/v20200326/model/StreamInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

StreamInfo::StreamInfo() :
    m_clientIpHasBeenSet(false),
    m_videoHasBeenSet(false),
    m_audioHasBeenSet(false),
    m_scte35HasBeenSet(false)
{
}

CoreInternalOutcome StreamInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClientIp") && !value["ClientIp"].IsNull())
    {
        if (!value["ClientIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StreamInfo.ClientIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientIp = string(value["ClientIp"].GetString());
        m_clientIpHasBeenSet = true;
    }

    if (value.HasMember("Video") && !value["Video"].IsNull())
    {
        if (!value["Video"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StreamInfo.Video` is not array type"));

        const rapidjson::Value &tmpValue = value["Video"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StreamVideoInfo item;
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
            return CoreInternalOutcome(Core::Error("response `StreamInfo.Audio` is not array type"));

        const rapidjson::Value &tmpValue = value["Audio"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StreamAudioInfo item;
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

    if (value.HasMember("Scte35") && !value["Scte35"].IsNull())
    {
        if (!value["Scte35"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StreamInfo.Scte35` is not array type"));

        const rapidjson::Value &tmpValue = value["Scte35"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StreamScte35Info item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_scte35.push_back(item);
        }
        m_scte35HasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StreamInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clientIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientIp.c_str(), allocator).Move(), allocator);
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

    if (m_scte35HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scte35";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_scte35.begin(); itr != m_scte35.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string StreamInfo::GetClientIp() const
{
    return m_clientIp;
}

void StreamInfo::SetClientIp(const string& _clientIp)
{
    m_clientIp = _clientIp;
    m_clientIpHasBeenSet = true;
}

bool StreamInfo::ClientIpHasBeenSet() const
{
    return m_clientIpHasBeenSet;
}

vector<StreamVideoInfo> StreamInfo::GetVideo() const
{
    return m_video;
}

void StreamInfo::SetVideo(const vector<StreamVideoInfo>& _video)
{
    m_video = _video;
    m_videoHasBeenSet = true;
}

bool StreamInfo::VideoHasBeenSet() const
{
    return m_videoHasBeenSet;
}

vector<StreamAudioInfo> StreamInfo::GetAudio() const
{
    return m_audio;
}

void StreamInfo::SetAudio(const vector<StreamAudioInfo>& _audio)
{
    m_audio = _audio;
    m_audioHasBeenSet = true;
}

bool StreamInfo::AudioHasBeenSet() const
{
    return m_audioHasBeenSet;
}

vector<StreamScte35Info> StreamInfo::GetScte35() const
{
    return m_scte35;
}

void StreamInfo::SetScte35(const vector<StreamScte35Info>& _scte35)
{
    m_scte35 = _scte35;
    m_scte35HasBeenSet = true;
}

bool StreamInfo::Scte35HasBeenSet() const
{
    return m_scte35HasBeenSet;
}

