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

#include <tencentcloud/lke/v20231130/model/ConversationAppArtifact.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

ConversationAppArtifact::ConversationAppArtifact() :
    m_appAvatarHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_appPatternHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_spaceIdHasBeenSet(false)
{
}

CoreInternalOutcome ConversationAppArtifact::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppAvatar") && !value["AppAvatar"].IsNull())
    {
        if (!value["AppAvatar"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationAppArtifact.AppAvatar` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appAvatar = string(value["AppAvatar"].GetString());
        m_appAvatarHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationAppArtifact.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("AppPattern") && !value["AppPattern"].IsNull())
    {
        if (!value["AppPattern"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationAppArtifact.AppPattern` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appPattern = value["AppPattern"].GetInt64();
        m_appPatternHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationAppArtifact.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("SpaceId") && !value["SpaceId"].IsNull())
    {
        if (!value["SpaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationAppArtifact.SpaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spaceId = string(value["SpaceId"].GetString());
        m_spaceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConversationAppArtifact::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appAvatarHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppAvatar";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appAvatar.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_appPatternHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppPattern";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appPattern, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_spaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spaceId.c_str(), allocator).Move(), allocator);
    }

}


string ConversationAppArtifact::GetAppAvatar() const
{
    return m_appAvatar;
}

void ConversationAppArtifact::SetAppAvatar(const string& _appAvatar)
{
    m_appAvatar = _appAvatar;
    m_appAvatarHasBeenSet = true;
}

bool ConversationAppArtifact::AppAvatarHasBeenSet() const
{
    return m_appAvatarHasBeenSet;
}

string ConversationAppArtifact::GetAppId() const
{
    return m_appId;
}

void ConversationAppArtifact::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool ConversationAppArtifact::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

int64_t ConversationAppArtifact::GetAppPattern() const
{
    return m_appPattern;
}

void ConversationAppArtifact::SetAppPattern(const int64_t& _appPattern)
{
    m_appPattern = _appPattern;
    m_appPatternHasBeenSet = true;
}

bool ConversationAppArtifact::AppPatternHasBeenSet() const
{
    return m_appPatternHasBeenSet;
}

string ConversationAppArtifact::GetName() const
{
    return m_name;
}

void ConversationAppArtifact::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ConversationAppArtifact::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ConversationAppArtifact::GetSpaceId() const
{
    return m_spaceId;
}

void ConversationAppArtifact::SetSpaceId(const string& _spaceId)
{
    m_spaceId = _spaceId;
    m_spaceIdHasBeenSet = true;
}

bool ConversationAppArtifact::SpaceIdHasBeenSet() const
{
    return m_spaceIdHasBeenSet;
}

