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

#include <tencentcloud/mdl/v20200326/model/ModifyMediaLiveChannelRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mdl::V20200326::Model;
using namespace rapidjson;
using namespace std;

ModifyMediaLiveChannelRequest::ModifyMediaLiveChannelRequest() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_attachedInputsHasBeenSet(false),
    m_outputGroupsHasBeenSet(false),
    m_audioTemplatesHasBeenSet(false),
    m_videoTemplatesHasBeenSet(false)
{
}

string ModifyMediaLiveChannelRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_attachedInputsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AttachedInputs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_attachedInputs.begin(); itr != m_attachedInputs.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_outputGroupsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OutputGroups";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_outputGroups.begin(); itr != m_outputGroups.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_audioTemplatesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AudioTemplates";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_audioTemplates.begin(); itr != m_audioTemplates.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_videoTemplatesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VideoTemplates";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_videoTemplates.begin(); itr != m_videoTemplates.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyMediaLiveChannelRequest::GetId() const
{
    return m_id;
}

void ModifyMediaLiveChannelRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyMediaLiveChannelRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ModifyMediaLiveChannelRequest::GetName() const
{
    return m_name;
}

void ModifyMediaLiveChannelRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyMediaLiveChannelRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<AttachedInputInfo> ModifyMediaLiveChannelRequest::GetAttachedInputs() const
{
    return m_attachedInputs;
}

void ModifyMediaLiveChannelRequest::SetAttachedInputs(const vector<AttachedInputInfo>& _attachedInputs)
{
    m_attachedInputs = _attachedInputs;
    m_attachedInputsHasBeenSet = true;
}

bool ModifyMediaLiveChannelRequest::AttachedInputsHasBeenSet() const
{
    return m_attachedInputsHasBeenSet;
}

vector<OutputGroupsInfo> ModifyMediaLiveChannelRequest::GetOutputGroups() const
{
    return m_outputGroups;
}

void ModifyMediaLiveChannelRequest::SetOutputGroups(const vector<OutputGroupsInfo>& _outputGroups)
{
    m_outputGroups = _outputGroups;
    m_outputGroupsHasBeenSet = true;
}

bool ModifyMediaLiveChannelRequest::OutputGroupsHasBeenSet() const
{
    return m_outputGroupsHasBeenSet;
}

vector<AudioTemplateInfo> ModifyMediaLiveChannelRequest::GetAudioTemplates() const
{
    return m_audioTemplates;
}

void ModifyMediaLiveChannelRequest::SetAudioTemplates(const vector<AudioTemplateInfo>& _audioTemplates)
{
    m_audioTemplates = _audioTemplates;
    m_audioTemplatesHasBeenSet = true;
}

bool ModifyMediaLiveChannelRequest::AudioTemplatesHasBeenSet() const
{
    return m_audioTemplatesHasBeenSet;
}

vector<VideoTemplateInfo> ModifyMediaLiveChannelRequest::GetVideoTemplates() const
{
    return m_videoTemplates;
}

void ModifyMediaLiveChannelRequest::SetVideoTemplates(const vector<VideoTemplateInfo>& _videoTemplates)
{
    m_videoTemplates = _videoTemplates;
    m_videoTemplatesHasBeenSet = true;
}

bool ModifyMediaLiveChannelRequest::VideoTemplatesHasBeenSet() const
{
    return m_videoTemplatesHasBeenSet;
}


