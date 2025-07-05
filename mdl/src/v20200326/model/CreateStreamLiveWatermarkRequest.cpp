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

#include <tencentcloud/mdl/v20200326/model/CreateStreamLiveWatermarkRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

CreateStreamLiveWatermarkRequest::CreateStreamLiveWatermarkRequest() :
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_imageSettingsHasBeenSet(false),
    m_textSettingsHasBeenSet(false)
{
}

string CreateStreamLiveWatermarkRequest::ToJsonString() const
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

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
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


string CreateStreamLiveWatermarkRequest::GetName() const
{
    return m_name;
}

void CreateStreamLiveWatermarkRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateStreamLiveWatermarkRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateStreamLiveWatermarkRequest::GetType() const
{
    return m_type;
}

void CreateStreamLiveWatermarkRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateStreamLiveWatermarkRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

CreateImageSettings CreateStreamLiveWatermarkRequest::GetImageSettings() const
{
    return m_imageSettings;
}

void CreateStreamLiveWatermarkRequest::SetImageSettings(const CreateImageSettings& _imageSettings)
{
    m_imageSettings = _imageSettings;
    m_imageSettingsHasBeenSet = true;
}

bool CreateStreamLiveWatermarkRequest::ImageSettingsHasBeenSet() const
{
    return m_imageSettingsHasBeenSet;
}

CreateTextSettings CreateStreamLiveWatermarkRequest::GetTextSettings() const
{
    return m_textSettings;
}

void CreateStreamLiveWatermarkRequest::SetTextSettings(const CreateTextSettings& _textSettings)
{
    m_textSettings = _textSettings;
    m_textSettingsHasBeenSet = true;
}

bool CreateStreamLiveWatermarkRequest::TextSettingsHasBeenSet() const
{
    return m_textSettingsHasBeenSet;
}


