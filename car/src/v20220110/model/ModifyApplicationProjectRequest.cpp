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

#include <tencentcloud/car/v20220110/model/ModifyApplicationProjectRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Car::V20220110::Model;
using namespace std;

ModifyApplicationProjectRequest::ModifyApplicationProjectRequest() :
    m_projectIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_isPreloadHasBeenSet(false),
    m_applicationParamsHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_resolutionHasBeenSet(false),
    m_fPSHasBeenSet(false),
    m_preloadDurationHasBeenSet(false),
    m_reconnectTimeoutHasBeenSet(false),
    m_minBitrateHasBeenSet(false),
    m_maxBitrateHasBeenSet(false),
    m_upstreamAudioOptionHasBeenSet(false),
    m_videoEncodeConfigHasBeenSet(false),
    m_xRMaxWidthHasBeenSet(false),
    m_backgroundImageCOSFileIdHasBeenSet(false),
    m_disableVideoCodecsHasBeenSet(false)
{
}

string ModifyApplicationProjectRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_isPreloadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPreload";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isPreload, allocator);
    }

    if (m_applicationParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationParams.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_resolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resolution";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resolution.c_str(), allocator).Move(), allocator);
    }

    if (m_fPSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FPS";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fPS, allocator);
    }

    if (m_preloadDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreloadDuration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_preloadDuration.c_str(), allocator).Move(), allocator);
    }

    if (m_reconnectTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReconnectTimeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_reconnectTimeout.c_str(), allocator).Move(), allocator);
    }

    if (m_minBitrateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinBitrate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_minBitrate, allocator);
    }

    if (m_maxBitrateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxBitrate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxBitrate, allocator);
    }

    if (m_upstreamAudioOptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamAudioOption";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_upstreamAudioOption.c_str(), allocator).Move(), allocator);
    }

    if (m_videoEncodeConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoEncodeConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_videoEncodeConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_xRMaxWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "XRMaxWidth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_xRMaxWidth, allocator);
    }

    if (m_backgroundImageCOSFileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackgroundImageCOSFileId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_backgroundImageCOSFileId.c_str(), allocator).Move(), allocator);
    }

    if (m_disableVideoCodecsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisableVideoCodecs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_disableVideoCodecs.begin(); itr != m_disableVideoCodecs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyApplicationProjectRequest::GetProjectId() const
{
    return m_projectId;
}

void ModifyApplicationProjectRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ModifyApplicationProjectRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ModifyApplicationProjectRequest::GetName() const
{
    return m_name;
}

void ModifyApplicationProjectRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyApplicationProjectRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyApplicationProjectRequest::GetType() const
{
    return m_type;
}

void ModifyApplicationProjectRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ModifyApplicationProjectRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

bool ModifyApplicationProjectRequest::GetIsPreload() const
{
    return m_isPreload;
}

void ModifyApplicationProjectRequest::SetIsPreload(const bool& _isPreload)
{
    m_isPreload = _isPreload;
    m_isPreloadHasBeenSet = true;
}

bool ModifyApplicationProjectRequest::IsPreloadHasBeenSet() const
{
    return m_isPreloadHasBeenSet;
}

string ModifyApplicationProjectRequest::GetApplicationParams() const
{
    return m_applicationParams;
}

void ModifyApplicationProjectRequest::SetApplicationParams(const string& _applicationParams)
{
    m_applicationParams = _applicationParams;
    m_applicationParamsHasBeenSet = true;
}

bool ModifyApplicationProjectRequest::ApplicationParamsHasBeenSet() const
{
    return m_applicationParamsHasBeenSet;
}

string ModifyApplicationProjectRequest::GetDescription() const
{
    return m_description;
}

void ModifyApplicationProjectRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyApplicationProjectRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ModifyApplicationProjectRequest::GetResolution() const
{
    return m_resolution;
}

void ModifyApplicationProjectRequest::SetResolution(const string& _resolution)
{
    m_resolution = _resolution;
    m_resolutionHasBeenSet = true;
}

bool ModifyApplicationProjectRequest::ResolutionHasBeenSet() const
{
    return m_resolutionHasBeenSet;
}

int64_t ModifyApplicationProjectRequest::GetFPS() const
{
    return m_fPS;
}

void ModifyApplicationProjectRequest::SetFPS(const int64_t& _fPS)
{
    m_fPS = _fPS;
    m_fPSHasBeenSet = true;
}

bool ModifyApplicationProjectRequest::FPSHasBeenSet() const
{
    return m_fPSHasBeenSet;
}

string ModifyApplicationProjectRequest::GetPreloadDuration() const
{
    return m_preloadDuration;
}

void ModifyApplicationProjectRequest::SetPreloadDuration(const string& _preloadDuration)
{
    m_preloadDuration = _preloadDuration;
    m_preloadDurationHasBeenSet = true;
}

bool ModifyApplicationProjectRequest::PreloadDurationHasBeenSet() const
{
    return m_preloadDurationHasBeenSet;
}

string ModifyApplicationProjectRequest::GetReconnectTimeout() const
{
    return m_reconnectTimeout;
}

void ModifyApplicationProjectRequest::SetReconnectTimeout(const string& _reconnectTimeout)
{
    m_reconnectTimeout = _reconnectTimeout;
    m_reconnectTimeoutHasBeenSet = true;
}

bool ModifyApplicationProjectRequest::ReconnectTimeoutHasBeenSet() const
{
    return m_reconnectTimeoutHasBeenSet;
}

int64_t ModifyApplicationProjectRequest::GetMinBitrate() const
{
    return m_minBitrate;
}

void ModifyApplicationProjectRequest::SetMinBitrate(const int64_t& _minBitrate)
{
    m_minBitrate = _minBitrate;
    m_minBitrateHasBeenSet = true;
}

bool ModifyApplicationProjectRequest::MinBitrateHasBeenSet() const
{
    return m_minBitrateHasBeenSet;
}

int64_t ModifyApplicationProjectRequest::GetMaxBitrate() const
{
    return m_maxBitrate;
}

void ModifyApplicationProjectRequest::SetMaxBitrate(const int64_t& _maxBitrate)
{
    m_maxBitrate = _maxBitrate;
    m_maxBitrateHasBeenSet = true;
}

bool ModifyApplicationProjectRequest::MaxBitrateHasBeenSet() const
{
    return m_maxBitrateHasBeenSet;
}

string ModifyApplicationProjectRequest::GetUpstreamAudioOption() const
{
    return m_upstreamAudioOption;
}

void ModifyApplicationProjectRequest::SetUpstreamAudioOption(const string& _upstreamAudioOption)
{
    m_upstreamAudioOption = _upstreamAudioOption;
    m_upstreamAudioOptionHasBeenSet = true;
}

bool ModifyApplicationProjectRequest::UpstreamAudioOptionHasBeenSet() const
{
    return m_upstreamAudioOptionHasBeenSet;
}

VideoEncodeConfig ModifyApplicationProjectRequest::GetVideoEncodeConfig() const
{
    return m_videoEncodeConfig;
}

void ModifyApplicationProjectRequest::SetVideoEncodeConfig(const VideoEncodeConfig& _videoEncodeConfig)
{
    m_videoEncodeConfig = _videoEncodeConfig;
    m_videoEncodeConfigHasBeenSet = true;
}

bool ModifyApplicationProjectRequest::VideoEncodeConfigHasBeenSet() const
{
    return m_videoEncodeConfigHasBeenSet;
}

uint64_t ModifyApplicationProjectRequest::GetXRMaxWidth() const
{
    return m_xRMaxWidth;
}

void ModifyApplicationProjectRequest::SetXRMaxWidth(const uint64_t& _xRMaxWidth)
{
    m_xRMaxWidth = _xRMaxWidth;
    m_xRMaxWidthHasBeenSet = true;
}

bool ModifyApplicationProjectRequest::XRMaxWidthHasBeenSet() const
{
    return m_xRMaxWidthHasBeenSet;
}

string ModifyApplicationProjectRequest::GetBackgroundImageCOSFileId() const
{
    return m_backgroundImageCOSFileId;
}

void ModifyApplicationProjectRequest::SetBackgroundImageCOSFileId(const string& _backgroundImageCOSFileId)
{
    m_backgroundImageCOSFileId = _backgroundImageCOSFileId;
    m_backgroundImageCOSFileIdHasBeenSet = true;
}

bool ModifyApplicationProjectRequest::BackgroundImageCOSFileIdHasBeenSet() const
{
    return m_backgroundImageCOSFileIdHasBeenSet;
}

vector<string> ModifyApplicationProjectRequest::GetDisableVideoCodecs() const
{
    return m_disableVideoCodecs;
}

void ModifyApplicationProjectRequest::SetDisableVideoCodecs(const vector<string>& _disableVideoCodecs)
{
    m_disableVideoCodecs = _disableVideoCodecs;
    m_disableVideoCodecsHasBeenSet = true;
}

bool ModifyApplicationProjectRequest::DisableVideoCodecsHasBeenSet() const
{
    return m_disableVideoCodecsHasBeenSet;
}


