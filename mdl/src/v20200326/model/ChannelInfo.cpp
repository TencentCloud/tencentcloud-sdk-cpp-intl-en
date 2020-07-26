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

#include <tencentcloud/mdl/v20200326/model/ChannelInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace rapidjson;
using namespace std;

ChannelInfo::ChannelInfo() :
    m_idHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_attachedInputsHasBeenSet(false),
    m_outputGroupsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_audioTemplatesHasBeenSet(false),
    m_videoTemplatesHasBeenSet(false)
{
}

CoreInternalOutcome ChannelInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Error("response `ChannelInfo.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Error("response `ChannelInfo.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("AttachedInputs") && !value["AttachedInputs"].IsNull())
    {
        if (!value["AttachedInputs"].IsArray())
            return CoreInternalOutcome(Error("response `ChannelInfo.AttachedInputs` is not array type"));

        const Value &tmpValue = value["AttachedInputs"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AttachedInputInfo item;
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
            return CoreInternalOutcome(Error("response `ChannelInfo.OutputGroups` is not array type"));

        const Value &tmpValue = value["OutputGroups"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OutputGroupsInfo item;
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
            return CoreInternalOutcome(Error("response `ChannelInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("AudioTemplates") && !value["AudioTemplates"].IsNull())
    {
        if (!value["AudioTemplates"].IsArray())
            return CoreInternalOutcome(Error("response `ChannelInfo.AudioTemplates` is not array type"));

        const Value &tmpValue = value["AudioTemplates"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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
            return CoreInternalOutcome(Error("response `ChannelInfo.VideoTemplates` is not array type"));

        const Value &tmpValue = value["VideoTemplates"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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


    return CoreInternalOutcome(true);
}

void ChannelInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_attachedInputsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AttachedInputs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_attachedInputs.begin(); itr != m_attachedInputs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_outputGroupsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OutputGroups";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_outputGroups.begin(); itr != m_outputGroups.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_audioTemplatesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AudioTemplates";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_audioTemplates.begin(); itr != m_audioTemplates.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_videoTemplatesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VideoTemplates";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_videoTemplates.begin(); itr != m_videoTemplates.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ChannelInfo::GetId() const
{
    return m_id;
}

void ChannelInfo::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ChannelInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ChannelInfo::GetState() const
{
    return m_state;
}

void ChannelInfo::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool ChannelInfo::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

vector<AttachedInputInfo> ChannelInfo::GetAttachedInputs() const
{
    return m_attachedInputs;
}

void ChannelInfo::SetAttachedInputs(const vector<AttachedInputInfo>& _attachedInputs)
{
    m_attachedInputs = _attachedInputs;
    m_attachedInputsHasBeenSet = true;
}

bool ChannelInfo::AttachedInputsHasBeenSet() const
{
    return m_attachedInputsHasBeenSet;
}

vector<OutputGroupsInfo> ChannelInfo::GetOutputGroups() const
{
    return m_outputGroups;
}

void ChannelInfo::SetOutputGroups(const vector<OutputGroupsInfo>& _outputGroups)
{
    m_outputGroups = _outputGroups;
    m_outputGroupsHasBeenSet = true;
}

bool ChannelInfo::OutputGroupsHasBeenSet() const
{
    return m_outputGroupsHasBeenSet;
}

string ChannelInfo::GetName() const
{
    return m_name;
}

void ChannelInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ChannelInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<AudioTemplateInfo> ChannelInfo::GetAudioTemplates() const
{
    return m_audioTemplates;
}

void ChannelInfo::SetAudioTemplates(const vector<AudioTemplateInfo>& _audioTemplates)
{
    m_audioTemplates = _audioTemplates;
    m_audioTemplatesHasBeenSet = true;
}

bool ChannelInfo::AudioTemplatesHasBeenSet() const
{
    return m_audioTemplatesHasBeenSet;
}

vector<VideoTemplateInfo> ChannelInfo::GetVideoTemplates() const
{
    return m_videoTemplates;
}

void ChannelInfo::SetVideoTemplates(const vector<VideoTemplateInfo>& _videoTemplates)
{
    m_videoTemplates = _videoTemplates;
    m_videoTemplatesHasBeenSet = true;
}

bool ChannelInfo::VideoTemplatesHasBeenSet() const
{
    return m_videoTemplatesHasBeenSet;
}

