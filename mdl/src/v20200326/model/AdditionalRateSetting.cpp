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

#include <tencentcloud/mdl/v20200326/model/AdditionalRateSetting.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

AdditionalRateSetting::AdditionalRateSetting() :
    m_videoMaxBitrateHasBeenSet(false),
    m_bufferSizeHasBeenSet(false),
    m_qualityLevelHasBeenSet(false)
{
}

CoreInternalOutcome AdditionalRateSetting::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VideoMaxBitrate") && !value["VideoMaxBitrate"].IsNull())
    {
        if (!value["VideoMaxBitrate"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AdditionalRateSetting.VideoMaxBitrate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_videoMaxBitrate = value["VideoMaxBitrate"].GetUint64();
        m_videoMaxBitrateHasBeenSet = true;
    }

    if (value.HasMember("BufferSize") && !value["BufferSize"].IsNull())
    {
        if (!value["BufferSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AdditionalRateSetting.BufferSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bufferSize = value["BufferSize"].GetUint64();
        m_bufferSizeHasBeenSet = true;
    }

    if (value.HasMember("QualityLevel") && !value["QualityLevel"].IsNull())
    {
        if (!value["QualityLevel"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AdditionalRateSetting.QualityLevel` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_qualityLevel = value["QualityLevel"].GetUint64();
        m_qualityLevelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AdditionalRateSetting::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_videoMaxBitrateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoMaxBitrate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_videoMaxBitrate, allocator);
    }

    if (m_bufferSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BufferSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bufferSize, allocator);
    }

    if (m_qualityLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QualityLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qualityLevel, allocator);
    }

}


uint64_t AdditionalRateSetting::GetVideoMaxBitrate() const
{
    return m_videoMaxBitrate;
}

void AdditionalRateSetting::SetVideoMaxBitrate(const uint64_t& _videoMaxBitrate)
{
    m_videoMaxBitrate = _videoMaxBitrate;
    m_videoMaxBitrateHasBeenSet = true;
}

bool AdditionalRateSetting::VideoMaxBitrateHasBeenSet() const
{
    return m_videoMaxBitrateHasBeenSet;
}

uint64_t AdditionalRateSetting::GetBufferSize() const
{
    return m_bufferSize;
}

void AdditionalRateSetting::SetBufferSize(const uint64_t& _bufferSize)
{
    m_bufferSize = _bufferSize;
    m_bufferSizeHasBeenSet = true;
}

bool AdditionalRateSetting::BufferSizeHasBeenSet() const
{
    return m_bufferSizeHasBeenSet;
}

uint64_t AdditionalRateSetting::GetQualityLevel() const
{
    return m_qualityLevel;
}

void AdditionalRateSetting::SetQualityLevel(const uint64_t& _qualityLevel)
{
    m_qualityLevel = _qualityLevel;
    m_qualityLevelHasBeenSet = true;
}

bool AdditionalRateSetting::QualityLevelHasBeenSet() const
{
    return m_qualityLevelHasBeenSet;
}

