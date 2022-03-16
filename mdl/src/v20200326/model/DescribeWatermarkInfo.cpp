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

#include <tencentcloud/mdl/v20200326/model/DescribeWatermarkInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

DescribeWatermarkInfo::DescribeWatermarkInfo() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_imageSettingsHasBeenSet(false),
    m_textSettingsHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_attachedChannelsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeWatermarkInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeWatermarkInfo.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeWatermarkInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeWatermarkInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("ImageSettings") && !value["ImageSettings"].IsNull())
    {
        if (!value["ImageSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeWatermarkInfo.ImageSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_imageSettings.Deserialize(value["ImageSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_imageSettingsHasBeenSet = true;
    }

    if (value.HasMember("TextSettings") && !value["TextSettings"].IsNull())
    {
        if (!value["TextSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeWatermarkInfo.TextSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_textSettings.Deserialize(value["TextSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_textSettingsHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeWatermarkInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("AttachedChannels") && !value["AttachedChannels"].IsNull())
    {
        if (!value["AttachedChannels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeWatermarkInfo.AttachedChannels` is not array type"));

        const rapidjson::Value &tmpValue = value["AttachedChannels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_attachedChannels.push_back((*itr).GetString());
        }
        m_attachedChannelsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeWatermarkInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_imageSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_imageSettings.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_textSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TextSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_textSettings.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_attachedChannelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttachedChannels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_attachedChannels.begin(); itr != m_attachedChannels.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string DescribeWatermarkInfo::GetId() const
{
    return m_id;
}

void DescribeWatermarkInfo::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DescribeWatermarkInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DescribeWatermarkInfo::GetName() const
{
    return m_name;
}

void DescribeWatermarkInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeWatermarkInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DescribeWatermarkInfo::GetType() const
{
    return m_type;
}

void DescribeWatermarkInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DescribeWatermarkInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

DescribeImageSettings DescribeWatermarkInfo::GetImageSettings() const
{
    return m_imageSettings;
}

void DescribeWatermarkInfo::SetImageSettings(const DescribeImageSettings& _imageSettings)
{
    m_imageSettings = _imageSettings;
    m_imageSettingsHasBeenSet = true;
}

bool DescribeWatermarkInfo::ImageSettingsHasBeenSet() const
{
    return m_imageSettingsHasBeenSet;
}

DescribeTextSettings DescribeWatermarkInfo::GetTextSettings() const
{
    return m_textSettings;
}

void DescribeWatermarkInfo::SetTextSettings(const DescribeTextSettings& _textSettings)
{
    m_textSettings = _textSettings;
    m_textSettingsHasBeenSet = true;
}

bool DescribeWatermarkInfo::TextSettingsHasBeenSet() const
{
    return m_textSettingsHasBeenSet;
}

string DescribeWatermarkInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void DescribeWatermarkInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool DescribeWatermarkInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

vector<string> DescribeWatermarkInfo::GetAttachedChannels() const
{
    return m_attachedChannels;
}

void DescribeWatermarkInfo::SetAttachedChannels(const vector<string>& _attachedChannels)
{
    m_attachedChannels = _attachedChannels;
    m_attachedChannelsHasBeenSet = true;
}

bool DescribeWatermarkInfo::AttachedChannelsHasBeenSet() const
{
    return m_attachedChannelsHasBeenSet;
}

