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

#include <tencentcloud/facefusion/v20220927/model/VideoFaceFusionOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Facefusion::V20220927::Model;
using namespace std;

VideoFaceFusionOutput::VideoFaceFusionOutput() :
    m_videoUrlHasBeenSet(false),
    m_videoMD5HasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_fPSHasBeenSet(false),
    m_durationInSecHasBeenSet(false),
    m_frameHasBeenSet(false)
{
}

CoreInternalOutcome VideoFaceFusionOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VideoUrl") && !value["VideoUrl"].IsNull())
    {
        if (!value["VideoUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoFaceFusionOutput.VideoUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_videoUrl = string(value["VideoUrl"].GetString());
        m_videoUrlHasBeenSet = true;
    }

    if (value.HasMember("VideoMD5") && !value["VideoMD5"].IsNull())
    {
        if (!value["VideoMD5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoFaceFusionOutput.VideoMD5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_videoMD5 = string(value["VideoMD5"].GetString());
        m_videoMD5HasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoFaceFusionOutput.Width` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetInt64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoFaceFusionOutput.Height` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetInt64();
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("FPS") && !value["FPS"].IsNull())
    {
        if (!value["FPS"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoFaceFusionOutput.FPS` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fPS = value["FPS"].GetInt64();
        m_fPSHasBeenSet = true;
    }

    if (value.HasMember("DurationInSec") && !value["DurationInSec"].IsNull())
    {
        if (!value["DurationInSec"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `VideoFaceFusionOutput.DurationInSec` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_durationInSec = value["DurationInSec"].GetDouble();
        m_durationInSecHasBeenSet = true;
    }

    if (value.HasMember("Frame") && !value["Frame"].IsNull())
    {
        if (!value["Frame"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoFaceFusionOutput.Frame` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_frame = value["Frame"].GetInt64();
        m_frameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VideoFaceFusionOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_videoUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_videoUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_videoMD5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoMD5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_videoMD5.c_str(), allocator).Move(), allocator);
    }

    if (m_widthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Width";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_width, allocator);
    }

    if (m_heightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Height";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_height, allocator);
    }

    if (m_fPSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FPS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fPS, allocator);
    }

    if (m_durationInSecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DurationInSec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_durationInSec, allocator);
    }

    if (m_frameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Frame";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_frame, allocator);
    }

}


string VideoFaceFusionOutput::GetVideoUrl() const
{
    return m_videoUrl;
}

void VideoFaceFusionOutput::SetVideoUrl(const string& _videoUrl)
{
    m_videoUrl = _videoUrl;
    m_videoUrlHasBeenSet = true;
}

bool VideoFaceFusionOutput::VideoUrlHasBeenSet() const
{
    return m_videoUrlHasBeenSet;
}

string VideoFaceFusionOutput::GetVideoMD5() const
{
    return m_videoMD5;
}

void VideoFaceFusionOutput::SetVideoMD5(const string& _videoMD5)
{
    m_videoMD5 = _videoMD5;
    m_videoMD5HasBeenSet = true;
}

bool VideoFaceFusionOutput::VideoMD5HasBeenSet() const
{
    return m_videoMD5HasBeenSet;
}

int64_t VideoFaceFusionOutput::GetWidth() const
{
    return m_width;
}

void VideoFaceFusionOutput::SetWidth(const int64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool VideoFaceFusionOutput::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

int64_t VideoFaceFusionOutput::GetHeight() const
{
    return m_height;
}

void VideoFaceFusionOutput::SetHeight(const int64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool VideoFaceFusionOutput::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

int64_t VideoFaceFusionOutput::GetFPS() const
{
    return m_fPS;
}

void VideoFaceFusionOutput::SetFPS(const int64_t& _fPS)
{
    m_fPS = _fPS;
    m_fPSHasBeenSet = true;
}

bool VideoFaceFusionOutput::FPSHasBeenSet() const
{
    return m_fPSHasBeenSet;
}

double VideoFaceFusionOutput::GetDurationInSec() const
{
    return m_durationInSec;
}

void VideoFaceFusionOutput::SetDurationInSec(const double& _durationInSec)
{
    m_durationInSec = _durationInSec;
    m_durationInSecHasBeenSet = true;
}

bool VideoFaceFusionOutput::DurationInSecHasBeenSet() const
{
    return m_durationInSecHasBeenSet;
}

int64_t VideoFaceFusionOutput::GetFrame() const
{
    return m_frame;
}

void VideoFaceFusionOutput::SetFrame(const int64_t& _frame)
{
    m_frame = _frame;
    m_frameHasBeenSet = true;
}

bool VideoFaceFusionOutput::FrameHasBeenSet() const
{
    return m_frameHasBeenSet;
}

