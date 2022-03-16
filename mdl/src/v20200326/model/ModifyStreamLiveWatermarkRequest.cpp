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

#include <tencentcloud/mdl/v20200326/model/ModifyStreamLiveWatermarkRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

ModifyStreamLiveWatermarkRequest::ModifyStreamLiveWatermarkRequest() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_imageSettingsHasBeenSet(false),
    m_textSettingsHasBeenSet(false)
{
}

string ModifyStreamLiveWatermarkRequest::ToJsonString() const
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

    if (m_imageSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageSettings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_imageSettings.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_textSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TextSettings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_textSettings.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyStreamLiveWatermarkRequest::GetId() const
{
    return m_id;
}

void ModifyStreamLiveWatermarkRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyStreamLiveWatermarkRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ModifyStreamLiveWatermarkRequest::GetName() const
{
    return m_name;
}

void ModifyStreamLiveWatermarkRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyStreamLiveWatermarkRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

CreateImageSettings ModifyStreamLiveWatermarkRequest::GetImageSettings() const
{
    return m_imageSettings;
}

void ModifyStreamLiveWatermarkRequest::SetImageSettings(const CreateImageSettings& _imageSettings)
{
    m_imageSettings = _imageSettings;
    m_imageSettingsHasBeenSet = true;
}

bool ModifyStreamLiveWatermarkRequest::ImageSettingsHasBeenSet() const
{
    return m_imageSettingsHasBeenSet;
}

CreateTextSettings ModifyStreamLiveWatermarkRequest::GetTextSettings() const
{
    return m_textSettings;
}

void ModifyStreamLiveWatermarkRequest::SetTextSettings(const CreateTextSettings& _textSettings)
{
    m_textSettings = _textSettings;
    m_textSettingsHasBeenSet = true;
}

bool ModifyStreamLiveWatermarkRequest::TextSettingsHasBeenSet() const
{
    return m_textSettingsHasBeenSet;
}


