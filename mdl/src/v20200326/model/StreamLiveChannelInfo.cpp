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

#include <tencentcloud/mdl/v20200326/model/StreamLiveChannelInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

StreamLiveChannelInfo::StreamLiveChannelInfo() :
    m_idHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_attachedInputsHasBeenSet(false),
    m_outputGroupsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_audioTemplatesHasBeenSet(false),
    m_videoTemplatesHasBeenSet(false),
    m_aVTemplatesHasBeenSet(false),
    m_planSettingsHasBeenSet(false),
    m_eventNotifySettingsHasBeenSet(false),
    m_inputLossBehaviorHasBeenSet(false)
{
}

CoreInternalOutcome StreamLiveChannelInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StreamLiveChannelInfo.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StreamLiveChannelInfo.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("AttachedInputs") && !value["AttachedInputs"].IsNull())
    {
        if (!value["AttachedInputs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StreamLiveChannelInfo.AttachedInputs` is not array type"));

        const rapidjson::Value &tmpValue = value["AttachedInputs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AttachedInput item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_attachedInputs.push_back(item);
        }
        m_attachedInputsHasBeenSet = true;
    }

    if (value.HasMember("OutputGroups") && !value["OutputGroups"].IsNull())
    {
        if (!value["OutputGroups"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StreamLiveChannelInfo.OutputGroups` is not array type"));

        const rapidjson::Value &tmpValue = value["OutputGroups"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StreamLiveOutputGroupsInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_outputGroups.push_back(item);
        }
        m_outputGroupsHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StreamLiveChannelInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("AudioTemplates") && !value["AudioTemplates"].IsNull())
    {
        if (!value["AudioTemplates"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StreamLiveChannelInfo.AudioTemplates` is not array type"));

        const rapidjson::Value &tmpValue = value["AudioTemplates"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AudioTemplateInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_audioTemplates.push_back(item);
        }
        m_audioTemplatesHasBeenSet = true;
    }

    if (value.HasMember("VideoTemplates") && !value["VideoTemplates"].IsNull())
    {
        if (!value["VideoTemplates"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StreamLiveChannelInfo.VideoTemplates` is not array type"));

        const rapidjson::Value &tmpValue = value["VideoTemplates"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VideoTemplateInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_videoTemplates.push_back(item);
        }
        m_videoTemplatesHasBeenSet = true;
    }

    if (value.HasMember("AVTemplates") && !value["AVTemplates"].IsNull())
    {
        if (!value["AVTemplates"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StreamLiveChannelInfo.AVTemplates` is not array type"));

        const rapidjson::Value &tmpValue = value["AVTemplates"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AVTemplate item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_aVTemplates.push_back(item);
        }
        m_aVTemplatesHasBeenSet = true;
    }

    if (value.HasMember("PlanSettings") && !value["PlanSettings"].IsNull())
    {
        if (!value["PlanSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `StreamLiveChannelInfo.PlanSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_planSettings.Deserialize(value["PlanSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_planSettingsHasBeenSet = true;
    }

    if (value.HasMember("EventNotifySettings") && !value["EventNotifySettings"].IsNull())
    {
        if (!value["EventNotifySettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `StreamLiveChannelInfo.EventNotifySettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_eventNotifySettings.Deserialize(value["EventNotifySettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_eventNotifySettingsHasBeenSet = true;
    }

    if (value.HasMember("InputLossBehavior") && !value["InputLossBehavior"].IsNull())
    {
        if (!value["InputLossBehavior"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `StreamLiveChannelInfo.InputLossBehavior` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_inputLossBehavior.Deserialize(value["InputLossBehavior"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_inputLossBehaviorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StreamLiveChannelInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_attachedInputsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttachedInputs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_attachedInputs.begin(); itr != m_attachedInputs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_outputGroupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputGroups";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_outputGroups.begin(); itr != m_outputGroups.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_audioTemplatesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioTemplates";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_audioTemplates.begin(); itr != m_audioTemplates.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_videoTemplatesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoTemplates";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_videoTemplates.begin(); itr != m_videoTemplates.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_aVTemplatesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AVTemplates";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_aVTemplates.begin(); itr != m_aVTemplates.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_planSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlanSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_planSettings.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_eventNotifySettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventNotifySettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_eventNotifySettings.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_inputLossBehaviorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputLossBehavior";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_inputLossBehavior.ToJsonObject(value[key.c_str()], allocator);
    }

}


string StreamLiveChannelInfo::GetId() const
{
    return m_id;
}

void StreamLiveChannelInfo::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool StreamLiveChannelInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string StreamLiveChannelInfo::GetState() const
{
    return m_state;
}

void StreamLiveChannelInfo::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool StreamLiveChannelInfo::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

vector<AttachedInput> StreamLiveChannelInfo::GetAttachedInputs() const
{
    return m_attachedInputs;
}

void StreamLiveChannelInfo::SetAttachedInputs(const vector<AttachedInput>& _attachedInputs)
{
    m_attachedInputs = _attachedInputs;
    m_attachedInputsHasBeenSet = true;
}

bool StreamLiveChannelInfo::AttachedInputsHasBeenSet() const
{
    return m_attachedInputsHasBeenSet;
}

vector<StreamLiveOutputGroupsInfo> StreamLiveChannelInfo::GetOutputGroups() const
{
    return m_outputGroups;
}

void StreamLiveChannelInfo::SetOutputGroups(const vector<StreamLiveOutputGroupsInfo>& _outputGroups)
{
    m_outputGroups = _outputGroups;
    m_outputGroupsHasBeenSet = true;
}

bool StreamLiveChannelInfo::OutputGroupsHasBeenSet() const
{
    return m_outputGroupsHasBeenSet;
}

string StreamLiveChannelInfo::GetName() const
{
    return m_name;
}

void StreamLiveChannelInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool StreamLiveChannelInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<AudioTemplateInfo> StreamLiveChannelInfo::GetAudioTemplates() const
{
    return m_audioTemplates;
}

void StreamLiveChannelInfo::SetAudioTemplates(const vector<AudioTemplateInfo>& _audioTemplates)
{
    m_audioTemplates = _audioTemplates;
    m_audioTemplatesHasBeenSet = true;
}

bool StreamLiveChannelInfo::AudioTemplatesHasBeenSet() const
{
    return m_audioTemplatesHasBeenSet;
}

vector<VideoTemplateInfo> StreamLiveChannelInfo::GetVideoTemplates() const
{
    return m_videoTemplates;
}

void StreamLiveChannelInfo::SetVideoTemplates(const vector<VideoTemplateInfo>& _videoTemplates)
{
    m_videoTemplates = _videoTemplates;
    m_videoTemplatesHasBeenSet = true;
}

bool StreamLiveChannelInfo::VideoTemplatesHasBeenSet() const
{
    return m_videoTemplatesHasBeenSet;
}

vector<AVTemplate> StreamLiveChannelInfo::GetAVTemplates() const
{
    return m_aVTemplates;
}

void StreamLiveChannelInfo::SetAVTemplates(const vector<AVTemplate>& _aVTemplates)
{
    m_aVTemplates = _aVTemplates;
    m_aVTemplatesHasBeenSet = true;
}

bool StreamLiveChannelInfo::AVTemplatesHasBeenSet() const
{
    return m_aVTemplatesHasBeenSet;
}

PlanSettings StreamLiveChannelInfo::GetPlanSettings() const
{
    return m_planSettings;
}

void StreamLiveChannelInfo::SetPlanSettings(const PlanSettings& _planSettings)
{
    m_planSettings = _planSettings;
    m_planSettingsHasBeenSet = true;
}

bool StreamLiveChannelInfo::PlanSettingsHasBeenSet() const
{
    return m_planSettingsHasBeenSet;
}

EventNotifySetting StreamLiveChannelInfo::GetEventNotifySettings() const
{
    return m_eventNotifySettings;
}

void StreamLiveChannelInfo::SetEventNotifySettings(const EventNotifySetting& _eventNotifySettings)
{
    m_eventNotifySettings = _eventNotifySettings;
    m_eventNotifySettingsHasBeenSet = true;
}

bool StreamLiveChannelInfo::EventNotifySettingsHasBeenSet() const
{
    return m_eventNotifySettingsHasBeenSet;
}

InputLossBehaviorInfo StreamLiveChannelInfo::GetInputLossBehavior() const
{
    return m_inputLossBehavior;
}

void StreamLiveChannelInfo::SetInputLossBehavior(const InputLossBehaviorInfo& _inputLossBehavior)
{
    m_inputLossBehavior = _inputLossBehavior;
    m_inputLossBehaviorHasBeenSet = true;
}

bool StreamLiveChannelInfo::InputLossBehaviorHasBeenSet() const
{
    return m_inputLossBehaviorHasBeenSet;
}

