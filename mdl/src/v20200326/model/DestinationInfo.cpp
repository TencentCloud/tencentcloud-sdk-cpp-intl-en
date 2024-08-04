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

#include <tencentcloud/mdl/v20200326/model/DestinationInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

DestinationInfo::DestinationInfo() :
    m_outputUrlHasBeenSet(false),
    m_authKeyHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_destinationTypeHasBeenSet(false),
    m_amazonS3SettingsHasBeenSet(false),
    m_cosSettingsHasBeenSet(false)
{
}

CoreInternalOutcome DestinationInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OutputUrl") && !value["OutputUrl"].IsNull())
    {
        if (!value["OutputUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DestinationInfo.OutputUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputUrl = string(value["OutputUrl"].GetString());
        m_outputUrlHasBeenSet = true;
    }

    if (value.HasMember("AuthKey") && !value["AuthKey"].IsNull())
    {
        if (!value["AuthKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DestinationInfo.AuthKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authKey = string(value["AuthKey"].GetString());
        m_authKeyHasBeenSet = true;
    }

    if (value.HasMember("Username") && !value["Username"].IsNull())
    {
        if (!value["Username"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DestinationInfo.Username` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_username = string(value["Username"].GetString());
        m_usernameHasBeenSet = true;
    }

    if (value.HasMember("Password") && !value["Password"].IsNull())
    {
        if (!value["Password"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DestinationInfo.Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(value["Password"].GetString());
        m_passwordHasBeenSet = true;
    }

    if (value.HasMember("DestinationType") && !value["DestinationType"].IsNull())
    {
        if (!value["DestinationType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DestinationInfo.DestinationType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destinationType = string(value["DestinationType"].GetString());
        m_destinationTypeHasBeenSet = true;
    }

    if (value.HasMember("AmazonS3Settings") && !value["AmazonS3Settings"].IsNull())
    {
        if (!value["AmazonS3Settings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DestinationInfo.AmazonS3Settings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_amazonS3Settings.Deserialize(value["AmazonS3Settings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_amazonS3SettingsHasBeenSet = true;
    }

    if (value.HasMember("CosSettings") && !value["CosSettings"].IsNull())
    {
        if (!value["CosSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DestinationInfo.CosSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cosSettings.Deserialize(value["CosSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cosSettingsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DestinationInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_outputUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_authKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authKey.c_str(), allocator).Move(), allocator);
    }

    if (m_usernameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Username";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_username.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_destinationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_destinationType.c_str(), allocator).Move(), allocator);
    }

    if (m_amazonS3SettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AmazonS3Settings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_amazonS3Settings.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cosSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cosSettings.ToJsonObject(value[key.c_str()], allocator);
    }

}


string DestinationInfo::GetOutputUrl() const
{
    return m_outputUrl;
}

void DestinationInfo::SetOutputUrl(const string& _outputUrl)
{
    m_outputUrl = _outputUrl;
    m_outputUrlHasBeenSet = true;
}

bool DestinationInfo::OutputUrlHasBeenSet() const
{
    return m_outputUrlHasBeenSet;
}

string DestinationInfo::GetAuthKey() const
{
    return m_authKey;
}

void DestinationInfo::SetAuthKey(const string& _authKey)
{
    m_authKey = _authKey;
    m_authKeyHasBeenSet = true;
}

bool DestinationInfo::AuthKeyHasBeenSet() const
{
    return m_authKeyHasBeenSet;
}

string DestinationInfo::GetUsername() const
{
    return m_username;
}

void DestinationInfo::SetUsername(const string& _username)
{
    m_username = _username;
    m_usernameHasBeenSet = true;
}

bool DestinationInfo::UsernameHasBeenSet() const
{
    return m_usernameHasBeenSet;
}

string DestinationInfo::GetPassword() const
{
    return m_password;
}

void DestinationInfo::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool DestinationInfo::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

string DestinationInfo::GetDestinationType() const
{
    return m_destinationType;
}

void DestinationInfo::SetDestinationType(const string& _destinationType)
{
    m_destinationType = _destinationType;
    m_destinationTypeHasBeenSet = true;
}

bool DestinationInfo::DestinationTypeHasBeenSet() const
{
    return m_destinationTypeHasBeenSet;
}

AmazonS3Settings DestinationInfo::GetAmazonS3Settings() const
{
    return m_amazonS3Settings;
}

void DestinationInfo::SetAmazonS3Settings(const AmazonS3Settings& _amazonS3Settings)
{
    m_amazonS3Settings = _amazonS3Settings;
    m_amazonS3SettingsHasBeenSet = true;
}

bool DestinationInfo::AmazonS3SettingsHasBeenSet() const
{
    return m_amazonS3SettingsHasBeenSet;
}

CosSettings DestinationInfo::GetCosSettings() const
{
    return m_cosSettings;
}

void DestinationInfo::SetCosSettings(const CosSettings& _cosSettings)
{
    m_cosSettings = _cosSettings;
    m_cosSettingsHasBeenSet = true;
}

bool DestinationInfo::CosSettingsHasBeenSet() const
{
    return m_cosSettingsHasBeenSet;
}

