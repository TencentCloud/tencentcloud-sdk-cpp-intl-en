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

#include <tencentcloud/mdl/v20200326/model/InputSettingInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace rapidjson;
using namespace std;

InputSettingInfo::InputSettingInfo() :
    m_appNameHasBeenSet(false),
    m_streamNameHasBeenSet(false),
    m_sourceUrlHasBeenSet(false),
    m_inputAddressHasBeenSet(false)
{
}

CoreInternalOutcome InputSettingInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("AppName") && !value["AppName"].IsNull())
    {
        if (!value["AppName"].IsString())
        {
            return CoreInternalOutcome(Error("response `InputSettingInfo.AppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appName = string(value["AppName"].GetString());
        m_appNameHasBeenSet = true;
    }

    if (value.HasMember("StreamName") && !value["StreamName"].IsNull())
    {
        if (!value["StreamName"].IsString())
        {
            return CoreInternalOutcome(Error("response `InputSettingInfo.StreamName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_streamName = string(value["StreamName"].GetString());
        m_streamNameHasBeenSet = true;
    }

    if (value.HasMember("SourceUrl") && !value["SourceUrl"].IsNull())
    {
        if (!value["SourceUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `InputSettingInfo.SourceUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceUrl = string(value["SourceUrl"].GetString());
        m_sourceUrlHasBeenSet = true;
    }

    if (value.HasMember("InputAddress") && !value["InputAddress"].IsNull())
    {
        if (!value["InputAddress"].IsString())
        {
            return CoreInternalOutcome(Error("response `InputSettingInfo.InputAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputAddress = string(value["InputAddress"].GetString());
        m_inputAddressHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InputSettingInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_appNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_streamNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StreamName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_streamName.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceUrlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SourceUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_sourceUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_inputAddressHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InputAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_inputAddress.c_str(), allocator).Move(), allocator);
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

