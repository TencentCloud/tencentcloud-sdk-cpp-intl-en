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

#include <tencentcloud/mdl/v20200326/model/InputSettingInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

InputSettingInfo::InputSettingInfo() :
    m_appNameHasBeenSet(false),
    m_streamNameHasBeenSet(false),
    m_sourceUrlHasBeenSet(false),
    m_inputAddressHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_delayTimeHasBeenSet(false),
    m_inputDomainHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_contentTypeHasBeenSet(false)
{
}

CoreInternalOutcome InputSettingInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppName") && !value["AppName"].IsNull())
    {
        if (!value["AppName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputSettingInfo.AppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appName = string(value["AppName"].GetString());
        m_appNameHasBeenSet = true;
    }

    if (value.HasMember("StreamName") && !value["StreamName"].IsNull())
    {
        if (!value["StreamName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputSettingInfo.StreamName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_streamName = string(value["StreamName"].GetString());
        m_streamNameHasBeenSet = true;
    }

    if (value.HasMember("SourceUrl") && !value["SourceUrl"].IsNull())
    {
        if (!value["SourceUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputSettingInfo.SourceUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceUrl = string(value["SourceUrl"].GetString());
        m_sourceUrlHasBeenSet = true;
    }

    if (value.HasMember("InputAddress") && !value["InputAddress"].IsNull())
    {
        if (!value["InputAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputSettingInfo.InputAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputAddress = string(value["InputAddress"].GetString());
        m_inputAddressHasBeenSet = true;
    }

    if (value.HasMember("SourceType") && !value["SourceType"].IsNull())
    {
        if (!value["SourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputSettingInfo.SourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceType = string(value["SourceType"].GetString());
        m_sourceTypeHasBeenSet = true;
    }

    if (value.HasMember("DelayTime") && !value["DelayTime"].IsNull())
    {
        if (!value["DelayTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InputSettingInfo.DelayTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_delayTime = value["DelayTime"].GetInt64();
        m_delayTimeHasBeenSet = true;
    }

    if (value.HasMember("InputDomain") && !value["InputDomain"].IsNull())
    {
        if (!value["InputDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputSettingInfo.InputDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputDomain = string(value["InputDomain"].GetString());
        m_inputDomainHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputSettingInfo.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("Password") && !value["Password"].IsNull())
    {
        if (!value["Password"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputSettingInfo.Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(value["Password"].GetString());
        m_passwordHasBeenSet = true;
    }

    if (value.HasMember("ContentType") && !value["ContentType"].IsNull())
    {
        if (!value["ContentType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputSettingInfo.ContentType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contentType = string(value["ContentType"].GetString());
        m_contentTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InputSettingInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_streamNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_streamName.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_inputAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_delayTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DelayTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_delayTime, allocator);
    }

    if (m_inputDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_contentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contentType.c_str(), allocator).Move(), allocator);
    }

}


string InputSettingInfo::GetAppName() const
{
    return m_appName;
}

void InputSettingInfo::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool InputSettingInfo::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string InputSettingInfo::GetStreamName() const
{
    return m_streamName;
}

void InputSettingInfo::SetStreamName(const string& _streamName)
{
    m_streamName = _streamName;
    m_streamNameHasBeenSet = true;
}

bool InputSettingInfo::StreamNameHasBeenSet() const
{
    return m_streamNameHasBeenSet;
}

string InputSettingInfo::GetSourceUrl() const
{
    return m_sourceUrl;
}

void InputSettingInfo::SetSourceUrl(const string& _sourceUrl)
{
    m_sourceUrl = _sourceUrl;
    m_sourceUrlHasBeenSet = true;
}

bool InputSettingInfo::SourceUrlHasBeenSet() const
{
    return m_sourceUrlHasBeenSet;
}

string InputSettingInfo::GetInputAddress() const
{
    return m_inputAddress;
}

void InputSettingInfo::SetInputAddress(const string& _inputAddress)
{
    m_inputAddress = _inputAddress;
    m_inputAddressHasBeenSet = true;
}

bool InputSettingInfo::InputAddressHasBeenSet() const
{
    return m_inputAddressHasBeenSet;
}

string InputSettingInfo::GetSourceType() const
{
    return m_sourceType;
}

void InputSettingInfo::SetSourceType(const string& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool InputSettingInfo::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

int64_t InputSettingInfo::GetDelayTime() const
{
    return m_delayTime;
}

void InputSettingInfo::SetDelayTime(const int64_t& _delayTime)
{
    m_delayTime = _delayTime;
    m_delayTimeHasBeenSet = true;
}

bool InputSettingInfo::DelayTimeHasBeenSet() const
{
    return m_delayTimeHasBeenSet;
}

string InputSettingInfo::GetInputDomain() const
{
    return m_inputDomain;
}

void InputSettingInfo::SetInputDomain(const string& _inputDomain)
{
    m_inputDomain = _inputDomain;
    m_inputDomainHasBeenSet = true;
}

bool InputSettingInfo::InputDomainHasBeenSet() const
{
    return m_inputDomainHasBeenSet;
}

string InputSettingInfo::GetUserName() const
{
    return m_userName;
}

void InputSettingInfo::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool InputSettingInfo::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string InputSettingInfo::GetPassword() const
{
    return m_password;
}

void InputSettingInfo::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool InputSettingInfo::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

string InputSettingInfo::GetContentType() const
{
    return m_contentType;
}

void InputSettingInfo::SetContentType(const string& _contentType)
{
    m_contentType = _contentType;
    m_contentTypeHasBeenSet = true;
}

bool InputSettingInfo::ContentTypeHasBeenSet() const
{
    return m_contentTypeHasBeenSet;
}

