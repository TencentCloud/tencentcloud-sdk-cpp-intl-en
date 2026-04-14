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

#include <tencentcloud/vclm/v20240523/model/SubmitImageToVideoViduJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vclm::V20240523::Model;
using namespace std;

SubmitImageToVideoViduJobRequest::SubmitImageToVideoViduJobRequest() :
    m_isRecHasBeenSet(false),
    m_voiceIdHasBeenSet(false),
    m_movementAmplitudeHasBeenSet(false),
    m_bgmHasBeenSet(false),
    m_audioTypeHasBeenSet(false),
    m_metaDataHasBeenSet(false),
    m_callbackUrlHasBeenSet(false),
    m_payloadHasBeenSet(false),
    m_offPeakHasBeenSet(false)
{
}

string SubmitImageToVideoViduJobRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_isRecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRec";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isRec, allocator);
    }

    if (m_voiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_voiceId.c_str(), allocator).Move(), allocator);
    }

    if (m_movementAmplitudeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MovementAmplitude";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_movementAmplitude.c_str(), allocator).Move(), allocator);
    }

    if (m_bgmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bgm";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bgm, allocator);
    }

    if (m_audioTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_audioType.c_str(), allocator).Move(), allocator);
    }

    if (m_metaDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_metaData.c_str(), allocator).Move(), allocator);
    }

    if (m_callbackUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_callbackUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_payloadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Payload";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payload.c_str(), allocator).Move(), allocator);
    }

    if (m_offPeakHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OffPeak";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offPeak, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


bool SubmitImageToVideoViduJobRequest::GetIsRec() const
{
    return m_isRec;
}

void SubmitImageToVideoViduJobRequest::SetIsRec(const bool& _isRec)
{
    m_isRec = _isRec;
    m_isRecHasBeenSet = true;
}

bool SubmitImageToVideoViduJobRequest::IsRecHasBeenSet() const
{
    return m_isRecHasBeenSet;
}

string SubmitImageToVideoViduJobRequest::GetVoiceId() const
{
    return m_voiceId;
}

void SubmitImageToVideoViduJobRequest::SetVoiceId(const string& _voiceId)
{
    m_voiceId = _voiceId;
    m_voiceIdHasBeenSet = true;
}

bool SubmitImageToVideoViduJobRequest::VoiceIdHasBeenSet() const
{
    return m_voiceIdHasBeenSet;
}

string SubmitImageToVideoViduJobRequest::GetMovementAmplitude() const
{
    return m_movementAmplitude;
}

void SubmitImageToVideoViduJobRequest::SetMovementAmplitude(const string& _movementAmplitude)
{
    m_movementAmplitude = _movementAmplitude;
    m_movementAmplitudeHasBeenSet = true;
}

bool SubmitImageToVideoViduJobRequest::MovementAmplitudeHasBeenSet() const
{
    return m_movementAmplitudeHasBeenSet;
}

bool SubmitImageToVideoViduJobRequest::GetBgm() const
{
    return m_bgm;
}

void SubmitImageToVideoViduJobRequest::SetBgm(const bool& _bgm)
{
    m_bgm = _bgm;
    m_bgmHasBeenSet = true;
}

bool SubmitImageToVideoViduJobRequest::BgmHasBeenSet() const
{
    return m_bgmHasBeenSet;
}

string SubmitImageToVideoViduJobRequest::GetAudioType() const
{
    return m_audioType;
}

void SubmitImageToVideoViduJobRequest::SetAudioType(const string& _audioType)
{
    m_audioType = _audioType;
    m_audioTypeHasBeenSet = true;
}

bool SubmitImageToVideoViduJobRequest::AudioTypeHasBeenSet() const
{
    return m_audioTypeHasBeenSet;
}

string SubmitImageToVideoViduJobRequest::GetMetaData() const
{
    return m_metaData;
}

void SubmitImageToVideoViduJobRequest::SetMetaData(const string& _metaData)
{
    m_metaData = _metaData;
    m_metaDataHasBeenSet = true;
}

bool SubmitImageToVideoViduJobRequest::MetaDataHasBeenSet() const
{
    return m_metaDataHasBeenSet;
}

string SubmitImageToVideoViduJobRequest::GetCallbackUrl() const
{
    return m_callbackUrl;
}

void SubmitImageToVideoViduJobRequest::SetCallbackUrl(const string& _callbackUrl)
{
    m_callbackUrl = _callbackUrl;
    m_callbackUrlHasBeenSet = true;
}

bool SubmitImageToVideoViduJobRequest::CallbackUrlHasBeenSet() const
{
    return m_callbackUrlHasBeenSet;
}

string SubmitImageToVideoViduJobRequest::GetPayload() const
{
    return m_payload;
}

void SubmitImageToVideoViduJobRequest::SetPayload(const string& _payload)
{
    m_payload = _payload;
    m_payloadHasBeenSet = true;
}

bool SubmitImageToVideoViduJobRequest::PayloadHasBeenSet() const
{
    return m_payloadHasBeenSet;
}

bool SubmitImageToVideoViduJobRequest::GetOffPeak() const
{
    return m_offPeak;
}

void SubmitImageToVideoViduJobRequest::SetOffPeak(const bool& _offPeak)
{
    m_offPeak = _offPeak;
    m_offPeakHasBeenSet = true;
}

bool SubmitImageToVideoViduJobRequest::OffPeakHasBeenSet() const
{
    return m_offPeakHasBeenSet;
}


