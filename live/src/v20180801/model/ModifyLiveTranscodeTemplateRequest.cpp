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

#include <tencentcloud/live/v20180801/model/ModifyLiveTranscodeTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

ModifyLiveTranscodeTemplateRequest::ModifyLiveTranscodeTemplateRequest() :
    m_templateIdHasBeenSet(false),
    m_vcodecHasBeenSet(false),
    m_acodecHasBeenSet(false),
    m_audioBitrateHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_videoBitrateHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_needVideoHasBeenSet(false),
    m_needAudioHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_fpsHasBeenSet(false),
    m_gopHasBeenSet(false),
    m_rotateHasBeenSet(false),
    m_profileHasBeenSet(false),
    m_bitrateToOrigHasBeenSet(false),
    m_heightToOrigHasBeenSet(false),
    m_fpsToOrigHasBeenSet(false),
    m_adaptBitratePercentHasBeenSet(false),
    m_shortEdgeAsHeightHasBeenSet(false),
    m_dRMTypeHasBeenSet(false),
    m_dRMTracksHasBeenSet(false)
{
}

string ModifyLiveTranscodeTemplateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_templateId, allocator);
    }

    if (m_vcodecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vcodec";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vcodec.c_str(), allocator).Move(), allocator);
    }

    if (m_acodecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Acodec";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_acodec.c_str(), allocator).Move(), allocator);
    }

    if (m_audioBitrateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioBitrate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_audioBitrate, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_videoBitrateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoBitrate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_videoBitrate, allocator);
    }

    if (m_widthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Width";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_width, allocator);
    }

    if (m_needVideoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedVideo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needVideo, allocator);
    }

    if (m_needAudioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedAudio";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needAudio, allocator);
    }

    if (m_heightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Height";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_height, allocator);
    }

    if (m_fpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fps";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fps, allocator);
    }

    if (m_gopHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Gop";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_gop, allocator);
    }

    if (m_rotateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rotate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_rotate, allocator);
    }

    if (m_profileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Profile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_profile.c_str(), allocator).Move(), allocator);
    }

    if (m_bitrateToOrigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BitrateToOrig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bitrateToOrig, allocator);
    }

    if (m_heightToOrigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeightToOrig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_heightToOrig, allocator);
    }

    if (m_fpsToOrigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FpsToOrig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fpsToOrig, allocator);
    }

    if (m_adaptBitratePercentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdaptBitratePercent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_adaptBitratePercent, allocator);
    }

    if (m_shortEdgeAsHeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShortEdgeAsHeight";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_shortEdgeAsHeight, allocator);
    }

    if (m_dRMTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DRMType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dRMType.c_str(), allocator).Move(), allocator);
    }

    if (m_dRMTracksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DRMTracks";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dRMTracks.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifyLiveTranscodeTemplateRequest::GetTemplateId() const
{
    return m_templateId;
}

void ModifyLiveTranscodeTemplateRequest::SetTemplateId(const int64_t& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool ModifyLiveTranscodeTemplateRequest::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string ModifyLiveTranscodeTemplateRequest::GetVcodec() const
{
    return m_vcodec;
}

void ModifyLiveTranscodeTemplateRequest::SetVcodec(const string& _vcodec)
{
    m_vcodec = _vcodec;
    m_vcodecHasBeenSet = true;
}

bool ModifyLiveTranscodeTemplateRequest::VcodecHasBeenSet() const
{
    return m_vcodecHasBeenSet;
}

string ModifyLiveTranscodeTemplateRequest::GetAcodec() const
{
    return m_acodec;
}

void ModifyLiveTranscodeTemplateRequest::SetAcodec(const string& _acodec)
{
    m_acodec = _acodec;
    m_acodecHasBeenSet = true;
}

bool ModifyLiveTranscodeTemplateRequest::AcodecHasBeenSet() const
{
    return m_acodecHasBeenSet;
}

int64_t ModifyLiveTranscodeTemplateRequest::GetAudioBitrate() const
{
    return m_audioBitrate;
}

void ModifyLiveTranscodeTemplateRequest::SetAudioBitrate(const int64_t& _audioBitrate)
{
    m_audioBitrate = _audioBitrate;
    m_audioBitrateHasBeenSet = true;
}

bool ModifyLiveTranscodeTemplateRequest::AudioBitrateHasBeenSet() const
{
    return m_audioBitrateHasBeenSet;
}

string ModifyLiveTranscodeTemplateRequest::GetDescription() const
{
    return m_description;
}

void ModifyLiveTranscodeTemplateRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyLiveTranscodeTemplateRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t ModifyLiveTranscodeTemplateRequest::GetVideoBitrate() const
{
    return m_videoBitrate;
}

void ModifyLiveTranscodeTemplateRequest::SetVideoBitrate(const int64_t& _videoBitrate)
{
    m_videoBitrate = _videoBitrate;
    m_videoBitrateHasBeenSet = true;
}

bool ModifyLiveTranscodeTemplateRequest::VideoBitrateHasBeenSet() const
{
    return m_videoBitrateHasBeenSet;
}

int64_t ModifyLiveTranscodeTemplateRequest::GetWidth() const
{
    return m_width;
}

void ModifyLiveTranscodeTemplateRequest::SetWidth(const int64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool ModifyLiveTranscodeTemplateRequest::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

int64_t ModifyLiveTranscodeTemplateRequest::GetNeedVideo() const
{
    return m_needVideo;
}

void ModifyLiveTranscodeTemplateRequest::SetNeedVideo(const int64_t& _needVideo)
{
    m_needVideo = _needVideo;
    m_needVideoHasBeenSet = true;
}

bool ModifyLiveTranscodeTemplateRequest::NeedVideoHasBeenSet() const
{
    return m_needVideoHasBeenSet;
}

int64_t ModifyLiveTranscodeTemplateRequest::GetNeedAudio() const
{
    return m_needAudio;
}

void ModifyLiveTranscodeTemplateRequest::SetNeedAudio(const int64_t& _needAudio)
{
    m_needAudio = _needAudio;
    m_needAudioHasBeenSet = true;
}

bool ModifyLiveTranscodeTemplateRequest::NeedAudioHasBeenSet() const
{
    return m_needAudioHasBeenSet;
}

int64_t ModifyLiveTranscodeTemplateRequest::GetHeight() const
{
    return m_height;
}

void ModifyLiveTranscodeTemplateRequest::SetHeight(const int64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool ModifyLiveTranscodeTemplateRequest::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

int64_t ModifyLiveTranscodeTemplateRequest::GetFps() const
{
    return m_fps;
}

void ModifyLiveTranscodeTemplateRequest::SetFps(const int64_t& _fps)
{
    m_fps = _fps;
    m_fpsHasBeenSet = true;
}

bool ModifyLiveTranscodeTemplateRequest::FpsHasBeenSet() const
{
    return m_fpsHasBeenSet;
}

int64_t ModifyLiveTranscodeTemplateRequest::GetGop() const
{
    return m_gop;
}

void ModifyLiveTranscodeTemplateRequest::SetGop(const int64_t& _gop)
{
    m_gop = _gop;
    m_gopHasBeenSet = true;
}

bool ModifyLiveTranscodeTemplateRequest::GopHasBeenSet() const
{
    return m_gopHasBeenSet;
}

int64_t ModifyLiveTranscodeTemplateRequest::GetRotate() const
{
    return m_rotate;
}

void ModifyLiveTranscodeTemplateRequest::SetRotate(const int64_t& _rotate)
{
    m_rotate = _rotate;
    m_rotateHasBeenSet = true;
}

bool ModifyLiveTranscodeTemplateRequest::RotateHasBeenSet() const
{
    return m_rotateHasBeenSet;
}

string ModifyLiveTranscodeTemplateRequest::GetProfile() const
{
    return m_profile;
}

void ModifyLiveTranscodeTemplateRequest::SetProfile(const string& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool ModifyLiveTranscodeTemplateRequest::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}

int64_t ModifyLiveTranscodeTemplateRequest::GetBitrateToOrig() const
{
    return m_bitrateToOrig;
}

void ModifyLiveTranscodeTemplateRequest::SetBitrateToOrig(const int64_t& _bitrateToOrig)
{
    m_bitrateToOrig = _bitrateToOrig;
    m_bitrateToOrigHasBeenSet = true;
}

bool ModifyLiveTranscodeTemplateRequest::BitrateToOrigHasBeenSet() const
{
    return m_bitrateToOrigHasBeenSet;
}

int64_t ModifyLiveTranscodeTemplateRequest::GetHeightToOrig() const
{
    return m_heightToOrig;
}

void ModifyLiveTranscodeTemplateRequest::SetHeightToOrig(const int64_t& _heightToOrig)
{
    m_heightToOrig = _heightToOrig;
    m_heightToOrigHasBeenSet = true;
}

bool ModifyLiveTranscodeTemplateRequest::HeightToOrigHasBeenSet() const
{
    return m_heightToOrigHasBeenSet;
}

int64_t ModifyLiveTranscodeTemplateRequest::GetFpsToOrig() const
{
    return m_fpsToOrig;
}

void ModifyLiveTranscodeTemplateRequest::SetFpsToOrig(const int64_t& _fpsToOrig)
{
    m_fpsToOrig = _fpsToOrig;
    m_fpsToOrigHasBeenSet = true;
}

bool ModifyLiveTranscodeTemplateRequest::FpsToOrigHasBeenSet() const
{
    return m_fpsToOrigHasBeenSet;
}

double ModifyLiveTranscodeTemplateRequest::GetAdaptBitratePercent() const
{
    return m_adaptBitratePercent;
}

void ModifyLiveTranscodeTemplateRequest::SetAdaptBitratePercent(const double& _adaptBitratePercent)
{
    m_adaptBitratePercent = _adaptBitratePercent;
    m_adaptBitratePercentHasBeenSet = true;
}

bool ModifyLiveTranscodeTemplateRequest::AdaptBitratePercentHasBeenSet() const
{
    return m_adaptBitratePercentHasBeenSet;
}

int64_t ModifyLiveTranscodeTemplateRequest::GetShortEdgeAsHeight() const
{
    return m_shortEdgeAsHeight;
}

void ModifyLiveTranscodeTemplateRequest::SetShortEdgeAsHeight(const int64_t& _shortEdgeAsHeight)
{
    m_shortEdgeAsHeight = _shortEdgeAsHeight;
    m_shortEdgeAsHeightHasBeenSet = true;
}

bool ModifyLiveTranscodeTemplateRequest::ShortEdgeAsHeightHasBeenSet() const
{
    return m_shortEdgeAsHeightHasBeenSet;
}

string ModifyLiveTranscodeTemplateRequest::GetDRMType() const
{
    return m_dRMType;
}

void ModifyLiveTranscodeTemplateRequest::SetDRMType(const string& _dRMType)
{
    m_dRMType = _dRMType;
    m_dRMTypeHasBeenSet = true;
}

bool ModifyLiveTranscodeTemplateRequest::DRMTypeHasBeenSet() const
{
    return m_dRMTypeHasBeenSet;
}

string ModifyLiveTranscodeTemplateRequest::GetDRMTracks() const
{
    return m_dRMTracks;
}

void ModifyLiveTranscodeTemplateRequest::SetDRMTracks(const string& _dRMTracks)
{
    m_dRMTracks = _dRMTracks;
    m_dRMTracksHasBeenSet = true;
}

bool ModifyLiveTranscodeTemplateRequest::DRMTracksHasBeenSet() const
{
    return m_dRMTracksHasBeenSet;
}


