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

#include <tencentcloud/mdl/v20200326/model/CreateStreamLiveChannelRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

CreateStreamLiveChannelRequest::CreateStreamLiveChannelRequest() :
    m_nameHasBeenSet(false),
    m_attachedInputsHasBeenSet(false),
    m_outputGroupsHasBeenSet(false),
    m_audioTemplatesHasBeenSet(false),
    m_videoTemplatesHasBeenSet(false),
    m_aVTemplatesHasBeenSet(false),
    m_captionTemplatesHasBeenSet(false),
    m_planSettingsHasBeenSet(false),
    m_eventNotifySettingsHasBeenSet(false),
    m_inputLossBehaviorHasBeenSet(false),
    m_pipelineInputSettingsHasBeenSet(false),
    m_inputAnalysisSettingsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_frameCaptureTemplatesHasBeenSet(false),
    m_generalSettingsHasBeenSet(false)
{
}

string CreateStreamLiveChannelRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_attachedInputsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttachedInputs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_attachedInputs.begin(); itr != m_attachedInputs.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_outputGroupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputGroups";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_outputGroups.begin(); itr != m_outputGroups.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_audioTemplatesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioTemplates";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_audioTemplates.begin(); itr != m_audioTemplates.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_videoTemplatesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoTemplates";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_videoTemplates.begin(); itr != m_videoTemplates.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_aVTemplatesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AVTemplates";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_aVTemplates.begin(); itr != m_aVTemplates.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_captionTemplatesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CaptionTemplates";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_captionTemplates.begin(); itr != m_captionTemplates.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_planSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlanSettings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_planSettings.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_eventNotifySettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventNotifySettings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_eventNotifySettings.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_inputLossBehaviorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputLossBehavior";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_inputLossBehavior.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_pipelineInputSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PipelineInputSettings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pipelineInputSettings.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_inputAnalysisSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputAnalysisSettings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_inputAnalysisSettings.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_frameCaptureTemplatesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrameCaptureTemplates";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_frameCaptureTemplates.begin(); itr != m_frameCaptureTemplates.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_generalSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GeneralSettings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_generalSettings.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateStreamLiveChannelRequest::GetName() const
{
    return m_name;
}

void CreateStreamLiveChannelRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateStreamLiveChannelRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<AttachedInput> CreateStreamLiveChannelRequest::GetAttachedInputs() const
{
    return m_attachedInputs;
}

void CreateStreamLiveChannelRequest::SetAttachedInputs(const vector<AttachedInput>& _attachedInputs)
{
    m_attachedInputs = _attachedInputs;
    m_attachedInputsHasBeenSet = true;
}

bool CreateStreamLiveChannelRequest::AttachedInputsHasBeenSet() const
{
    return m_attachedInputsHasBeenSet;
}

vector<StreamLiveOutputGroupsInfo> CreateStreamLiveChannelRequest::GetOutputGroups() const
{
    return m_outputGroups;
}

void CreateStreamLiveChannelRequest::SetOutputGroups(const vector<StreamLiveOutputGroupsInfo>& _outputGroups)
{
    m_outputGroups = _outputGroups;
    m_outputGroupsHasBeenSet = true;
}

bool CreateStreamLiveChannelRequest::OutputGroupsHasBeenSet() const
{
    return m_outputGroupsHasBeenSet;
}

vector<AudioTemplateInfo> CreateStreamLiveChannelRequest::GetAudioTemplates() const
{
    return m_audioTemplates;
}

void CreateStreamLiveChannelRequest::SetAudioTemplates(const vector<AudioTemplateInfo>& _audioTemplates)
{
    m_audioTemplates = _audioTemplates;
    m_audioTemplatesHasBeenSet = true;
}

bool CreateStreamLiveChannelRequest::AudioTemplatesHasBeenSet() const
{
    return m_audioTemplatesHasBeenSet;
}

vector<VideoTemplateInfo> CreateStreamLiveChannelRequest::GetVideoTemplates() const
{
    return m_videoTemplates;
}

void CreateStreamLiveChannelRequest::SetVideoTemplates(const vector<VideoTemplateInfo>& _videoTemplates)
{
    m_videoTemplates = _videoTemplates;
    m_videoTemplatesHasBeenSet = true;
}

bool CreateStreamLiveChannelRequest::VideoTemplatesHasBeenSet() const
{
    return m_videoTemplatesHasBeenSet;
}

vector<AVTemplate> CreateStreamLiveChannelRequest::GetAVTemplates() const
{
    return m_aVTemplates;
}

void CreateStreamLiveChannelRequest::SetAVTemplates(const vector<AVTemplate>& _aVTemplates)
{
    m_aVTemplates = _aVTemplates;
    m_aVTemplatesHasBeenSet = true;
}

bool CreateStreamLiveChannelRequest::AVTemplatesHasBeenSet() const
{
    return m_aVTemplatesHasBeenSet;
}

vector<SubtitleConf> CreateStreamLiveChannelRequest::GetCaptionTemplates() const
{
    return m_captionTemplates;
}

void CreateStreamLiveChannelRequest::SetCaptionTemplates(const vector<SubtitleConf>& _captionTemplates)
{
    m_captionTemplates = _captionTemplates;
    m_captionTemplatesHasBeenSet = true;
}

bool CreateStreamLiveChannelRequest::CaptionTemplatesHasBeenSet() const
{
    return m_captionTemplatesHasBeenSet;
}

PlanSettings CreateStreamLiveChannelRequest::GetPlanSettings() const
{
    return m_planSettings;
}

void CreateStreamLiveChannelRequest::SetPlanSettings(const PlanSettings& _planSettings)
{
    m_planSettings = _planSettings;
    m_planSettingsHasBeenSet = true;
}

bool CreateStreamLiveChannelRequest::PlanSettingsHasBeenSet() const
{
    return m_planSettingsHasBeenSet;
}

EventNotifySetting CreateStreamLiveChannelRequest::GetEventNotifySettings() const
{
    return m_eventNotifySettings;
}

void CreateStreamLiveChannelRequest::SetEventNotifySettings(const EventNotifySetting& _eventNotifySettings)
{
    m_eventNotifySettings = _eventNotifySettings;
    m_eventNotifySettingsHasBeenSet = true;
}

bool CreateStreamLiveChannelRequest::EventNotifySettingsHasBeenSet() const
{
    return m_eventNotifySettingsHasBeenSet;
}

InputLossBehaviorInfo CreateStreamLiveChannelRequest::GetInputLossBehavior() const
{
    return m_inputLossBehavior;
}

void CreateStreamLiveChannelRequest::SetInputLossBehavior(const InputLossBehaviorInfo& _inputLossBehavior)
{
    m_inputLossBehavior = _inputLossBehavior;
    m_inputLossBehaviorHasBeenSet = true;
}

bool CreateStreamLiveChannelRequest::InputLossBehaviorHasBeenSet() const
{
    return m_inputLossBehaviorHasBeenSet;
}

PipelineInputSettingsInfo CreateStreamLiveChannelRequest::GetPipelineInputSettings() const
{
    return m_pipelineInputSettings;
}

void CreateStreamLiveChannelRequest::SetPipelineInputSettings(const PipelineInputSettingsInfo& _pipelineInputSettings)
{
    m_pipelineInputSettings = _pipelineInputSettings;
    m_pipelineInputSettingsHasBeenSet = true;
}

bool CreateStreamLiveChannelRequest::PipelineInputSettingsHasBeenSet() const
{
    return m_pipelineInputSettingsHasBeenSet;
}

InputAnalysisInfo CreateStreamLiveChannelRequest::GetInputAnalysisSettings() const
{
    return m_inputAnalysisSettings;
}

void CreateStreamLiveChannelRequest::SetInputAnalysisSettings(const InputAnalysisInfo& _inputAnalysisSettings)
{
    m_inputAnalysisSettings = _inputAnalysisSettings;
    m_inputAnalysisSettingsHasBeenSet = true;
}

bool CreateStreamLiveChannelRequest::InputAnalysisSettingsHasBeenSet() const
{
    return m_inputAnalysisSettingsHasBeenSet;
}

vector<Tag> CreateStreamLiveChannelRequest::GetTags() const
{
    return m_tags;
}

void CreateStreamLiveChannelRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateStreamLiveChannelRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

vector<FrameCaptureTemplate> CreateStreamLiveChannelRequest::GetFrameCaptureTemplates() const
{
    return m_frameCaptureTemplates;
}

void CreateStreamLiveChannelRequest::SetFrameCaptureTemplates(const vector<FrameCaptureTemplate>& _frameCaptureTemplates)
{
    m_frameCaptureTemplates = _frameCaptureTemplates;
    m_frameCaptureTemplatesHasBeenSet = true;
}

bool CreateStreamLiveChannelRequest::FrameCaptureTemplatesHasBeenSet() const
{
    return m_frameCaptureTemplatesHasBeenSet;
}

GeneralSetting CreateStreamLiveChannelRequest::GetGeneralSettings() const
{
    return m_generalSettings;
}

void CreateStreamLiveChannelRequest::SetGeneralSettings(const GeneralSetting& _generalSettings)
{
    m_generalSettings = _generalSettings;
    m_generalSettingsHasBeenSet = true;
}

bool CreateStreamLiveChannelRequest::GeneralSettingsHasBeenSet() const
{
    return m_generalSettingsHasBeenSet;
}


