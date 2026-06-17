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

#include <tencentcloud/clb/v20230417/model/ConfigListItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20230417::Model;
using namespace std;

ConfigListItem::ConfigListItem() :
    m_configIdHasBeenSet(false),
    m_configTypeHasBeenSet(false),
    m_configNameHasBeenSet(false),
    m_configContentHasBeenSet(false),
    m_createTimestampHasBeenSet(false),
    m_updateTimestampHasBeenSet(false),
    m_tagHasBeenSet(false)
{
}

CoreInternalOutcome ConfigListItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConfigId") && !value["ConfigId"].IsNull())
    {
        if (!value["ConfigId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigListItem.ConfigId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configId = string(value["ConfigId"].GetString());
        m_configIdHasBeenSet = true;
    }

    if (value.HasMember("ConfigType") && !value["ConfigType"].IsNull())
    {
        if (!value["ConfigType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigListItem.ConfigType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configType = string(value["ConfigType"].GetString());
        m_configTypeHasBeenSet = true;
    }

    if (value.HasMember("ConfigName") && !value["ConfigName"].IsNull())
    {
        if (!value["ConfigName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigListItem.ConfigName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configName = string(value["ConfigName"].GetString());
        m_configNameHasBeenSet = true;
    }

    if (value.HasMember("ConfigContent") && !value["ConfigContent"].IsNull())
    {
        if (!value["ConfigContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigListItem.ConfigContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configContent = string(value["ConfigContent"].GetString());
        m_configContentHasBeenSet = true;
    }

    if (value.HasMember("CreateTimestamp") && !value["CreateTimestamp"].IsNull())
    {
        if (!value["CreateTimestamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigListItem.CreateTimestamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTimestamp = string(value["CreateTimestamp"].GetString());
        m_createTimestampHasBeenSet = true;
    }

    if (value.HasMember("UpdateTimestamp") && !value["UpdateTimestamp"].IsNull())
    {
        if (!value["UpdateTimestamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigListItem.UpdateTimestamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTimestamp = string(value["UpdateTimestamp"].GetString());
        m_updateTimestampHasBeenSet = true;
    }

    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConfigListItem.Tag` is not array type"));

        const rapidjson::Value &tmpValue = value["Tag"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tag.push_back(item);
        }
        m_tagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConfigListItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_configIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configId.c_str(), allocator).Move(), allocator);
    }

    if (m_configTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configType.c_str(), allocator).Move(), allocator);
    }

    if (m_configNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configName.c_str(), allocator).Move(), allocator);
    }

    if (m_configContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configContent.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTimestamp.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTimestamp.c_str(), allocator).Move(), allocator);
    }

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tag.begin(); itr != m_tag.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ConfigListItem::GetConfigId() const
{
    return m_configId;
}

void ConfigListItem::SetConfigId(const string& _configId)
{
    m_configId = _configId;
    m_configIdHasBeenSet = true;
}

bool ConfigListItem::ConfigIdHasBeenSet() const
{
    return m_configIdHasBeenSet;
}

string ConfigListItem::GetConfigType() const
{
    return m_configType;
}

void ConfigListItem::SetConfigType(const string& _configType)
{
    m_configType = _configType;
    m_configTypeHasBeenSet = true;
}

bool ConfigListItem::ConfigTypeHasBeenSet() const
{
    return m_configTypeHasBeenSet;
}

string ConfigListItem::GetConfigName() const
{
    return m_configName;
}

void ConfigListItem::SetConfigName(const string& _configName)
{
    m_configName = _configName;
    m_configNameHasBeenSet = true;
}

bool ConfigListItem::ConfigNameHasBeenSet() const
{
    return m_configNameHasBeenSet;
}

string ConfigListItem::GetConfigContent() const
{
    return m_configContent;
}

void ConfigListItem::SetConfigContent(const string& _configContent)
{
    m_configContent = _configContent;
    m_configContentHasBeenSet = true;
}

bool ConfigListItem::ConfigContentHasBeenSet() const
{
    return m_configContentHasBeenSet;
}

string ConfigListItem::GetCreateTimestamp() const
{
    return m_createTimestamp;
}

void ConfigListItem::SetCreateTimestamp(const string& _createTimestamp)
{
    m_createTimestamp = _createTimestamp;
    m_createTimestampHasBeenSet = true;
}

bool ConfigListItem::CreateTimestampHasBeenSet() const
{
    return m_createTimestampHasBeenSet;
}

string ConfigListItem::GetUpdateTimestamp() const
{
    return m_updateTimestamp;
}

void ConfigListItem::SetUpdateTimestamp(const string& _updateTimestamp)
{
    m_updateTimestamp = _updateTimestamp;
    m_updateTimestampHasBeenSet = true;
}

bool ConfigListItem::UpdateTimestampHasBeenSet() const
{
    return m_updateTimestampHasBeenSet;
}

vector<TagInfo> ConfigListItem::GetTag() const
{
    return m_tag;
}

void ConfigListItem::SetTag(const vector<TagInfo>& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool ConfigListItem::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

