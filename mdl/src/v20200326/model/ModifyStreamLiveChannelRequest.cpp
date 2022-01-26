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

#include <tencentcloud/mdl/v20200326/model/ModifyStreamLiveChannelRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

ModifyStreamLiveChannelRequest::ModifyStreamLiveChannelRequest() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_attachedInputsHasBeenSet(false),
    m_outputGroupsHasBeenSet(false),
    m_audioTemplatesHasBeenSet(false),
    m_videoTemplatesHasBeenSet(false),
    m_aVTemplatesHasBeenSet(false),
    m_planSettingsHasBeenSet(false)
{
}

string ModifyStreamLiveChannelRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

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

    if (m_planSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlanSettings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_planSettings.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyStreamLiveChannelRequest::GetId() const
{
    return m_id;
}

void ModifyStreamLiveChannelRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyStreamLiveChannelRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ModifyStreamLiveChannelRequest::GetName() const
{
    return m_name;
}

void ModifyStreamLiveChannelRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyStreamLiveChannelRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<AttachedInput> ModifyStreamLiveChannelRequest::GetAttachedInputs() const
{
    return m_attachedInputs;
}

void ModifyStreamLiveChannelRequest::SetAttachedInputs(const vector<AttachedInput>& _attachedInputs)
{
    m_attachedInputs = _attachedInputs;
    m_attachedInputsHasBeenSet = true;
}

bool ModifyStreamLiveChannelRequest::AttachedInputsHasBeenSet() const
{
    return m_attachedInputsHasBeenSet;
}

vector<StreamLiveOutputGroupsInfo> ModifyStreamLiveChannelRequest::GetOutputGroups() const
{
    return m_outputGroups;
}

void ModifyStreamLiveChannelRequest::SetOutputGroups(const vector<StreamLiveOutputGroupsInfo>& _outputGroups)
{
    m_outputGroups = _outputGroups;
    m_outputGroupsHasBeenSet = true;
}

bool ModifyStreamLiveChannelRequest::OutputGroupsHasBeenSet() const
{
    return m_outputGroupsHasBeenSet;
}

vector<AudioTemplateInfo> ModifyStreamLiveChannelRequest::GetAudioTemplates() const
{
    return m_audioTemplates;
}

void ModifyStreamLiveChannelRequest::SetAudioTemplates(const vector<AudioTemplateInfo>& _audioTemplates)
{
    m_audioTemplates = _audioTemplates;
    m_audioTemplatesHasBeenSet = true;
}

bool ModifyStreamLiveChannelRequest::AudioTemplatesHasBeenSet() const
{
    return m_audioTemplatesHasBeenSet;
}

vector<VideoTemplateInfo> ModifyStreamLiveChannelRequest::GetVideoTemplates() const
{
    return m_videoTemplates;
}

void ModifyStreamLiveChannelRequest::SetVideoTemplates(const vector<VideoTemplateInfo>& _videoTemplates)
{
    m_videoTemplates = _videoTemplates;
    m_videoTemplatesHasBeenSet = true;
}

bool ModifyStreamLiveChannelRequest::VideoTemplatesHasBeenSet() const
{
    return m_videoTemplatesHasBeenSet;
}

vector<AVTemplate> ModifyStreamLiveChannelRequest::GetAVTemplates() const
{
    return m_aVTemplates;
}

void ModifyStreamLiveChannelRequest::SetAVTemplates(const vector<AVTemplate>& _aVTemplates)
{
    m_aVTemplates = _aVTemplates;
    m_aVTemplatesHasBeenSet = true;
}

bool ModifyStreamLiveChannelRequest::AVTemplatesHasBeenSet() const
{
    return m_aVTemplatesHasBeenSet;
}

PlanSettings ModifyStreamLiveChannelRequest::GetPlanSettings() const
{
    return m_planSettings;
}

void ModifyStreamLiveChannelRequest::SetPlanSettings(const PlanSettings& _planSettings)
{
    m_planSettings = _planSettings;
    m_planSettingsHasBeenSet = true;
}

bool ModifyStreamLiveChannelRequest::PlanSettingsHasBeenSet() const
{
    return m_planSettingsHasBeenSet;
}


