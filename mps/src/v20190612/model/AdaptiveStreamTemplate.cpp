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

#include <tencentcloud/mps/v20190612/model/AdaptiveStreamTemplate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace rapidjson;
using namespace std;

AdaptiveStreamTemplate::AdaptiveStreamTemplate() :
    m_videoHasBeenSet(false),
    m_audioHasBeenSet(false),
    m_removeAudioHasBeenSet(false),
    m_removeVideoHasBeenSet(false)
{
}

CoreInternalOutcome AdaptiveStreamTemplate::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Video") && !value["Video"].IsNull())
    {
        if (!value["Video"].IsObject())
        {
            return CoreInternalOutcome(Error("response `AdaptiveStreamTemplate.Video` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_video.Deserialize(value["Video"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_videoHasBeenSet = true;
    }

    if (value.HasMember("Audio") && !value["Audio"].IsNull())
    {
        if (!value["Audio"].IsObject())
        {
            return CoreInternalOutcome(Error("response `AdaptiveStreamTemplate.Audio` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_audio.Deserialize(value["Audio"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_audioHasBeenSet = true;
    }

    if (value.HasMember("RemoveAudio") && !value["RemoveAudio"].IsNull())
    {
        if (!value["RemoveAudio"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `AdaptiveStreamTemplate.RemoveAudio` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_removeAudio = value["RemoveAudio"].GetUint64();
        m_removeAudioHasBeenSet = true;
    }

    if (value.HasMember("RemoveVideo") && !value["RemoveVideo"].IsNull())
    {
        if (!value["RemoveVideo"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `AdaptiveStreamTemplate.RemoveVideo` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_removeVideo = value["RemoveVideo"].GetUint64();
        m_removeVideoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AdaptiveStreamTemplate::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_videoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Video";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_video.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_audioHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Audio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_audio.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_removeAudioHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RemoveAudio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_removeAudio, allocator);
    }

    if (m_removeVideoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RemoveVideo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_removeVideo, allocator);
    }

}


VideoTemplateInfo AdaptiveStreamTemplate::GetVideo() const
{
    return m_video;
}

void AdaptiveStreamTemplate::SetVideo(const VideoTemplateInfo& _video)
{
    m_video = _video;
    m_videoHasBeenSet = true;
}

bool AdaptiveStreamTemplate::VideoHasBeenSet() const
{
    return m_videoHasBeenSet;
}

AudioTemplateInfo AdaptiveStreamTemplate::GetAudio() const
{
    return m_audio;
}

void AdaptiveStreamTemplate::SetAudio(const AudioTemplateInfo& _audio)
{
    m_audio = _audio;
    m_audioHasBeenSet = true;
}

bool AdaptiveStreamTemplate::AudioHasBeenSet() const
{
    return m_audioHasBeenSet;
}

uint64_t AdaptiveStreamTemplate::GetRemoveAudio() const
{
    return m_removeAudio;
}

void AdaptiveStreamTemplate::SetRemoveAudio(const uint64_t& _removeAudio)
{
    m_removeAudio = _removeAudio;
    m_removeAudioHasBeenSet = true;
}

bool AdaptiveStreamTemplate::RemoveAudioHasBeenSet() const
{
    return m_removeAudioHasBeenSet;
}

uint64_t AdaptiveStreamTemplate::GetRemoveVideo() const
{
    return m_removeVideo;
}

void AdaptiveStreamTemplate::SetRemoveVideo(const uint64_t& _removeVideo)
{
    m_removeVideo = _removeVideo;
    m_removeVideoHasBeenSet = true;
}

bool AdaptiveStreamTemplate::RemoveVideoHasBeenSet() const
{
    return m_removeVideoHasBeenSet;
}

