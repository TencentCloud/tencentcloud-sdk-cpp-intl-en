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

#include <tencentcloud/mdl/v20200326/model/ChannelPipelineAlerts.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

ChannelPipelineAlerts::ChannelPipelineAlerts() :
    m_setTimeHasBeenSet(false),
    m_clearTimeHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

CoreInternalOutcome ChannelPipelineAlerts::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SetTime") && !value["SetTime"].IsNull())
    {
        if (!value["SetTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelPipelineAlerts.SetTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_setTime = string(value["SetTime"].GetString());
        m_setTimeHasBeenSet = true;
    }

    if (value.HasMember("ClearTime") && !value["ClearTime"].IsNull())
    {
        if (!value["ClearTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelPipelineAlerts.ClearTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clearTime = string(value["ClearTime"].GetString());
        m_clearTimeHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelPipelineAlerts.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelPipelineAlerts.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ChannelPipelineAlerts::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_setTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SetTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_setTime.c_str(), allocator).Move(), allocator);
    }

    if (m_clearTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClearTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clearTime.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

}


string ChannelPipelineAlerts::GetSetTime() const
{
    return m_setTime;
}

void ChannelPipelineAlerts::SetSetTime(const string& _setTime)
{
    m_setTime = _setTime;
    m_setTimeHasBeenSet = true;
}

bool ChannelPipelineAlerts::SetTimeHasBeenSet() const
{
    return m_setTimeHasBeenSet;
}

string ChannelPipelineAlerts::GetClearTime() const
{
    return m_clearTime;
}

void ChannelPipelineAlerts::SetClearTime(const string& _clearTime)
{
    m_clearTime = _clearTime;
    m_clearTimeHasBeenSet = true;
}

bool ChannelPipelineAlerts::ClearTimeHasBeenSet() const
{
    return m_clearTimeHasBeenSet;
}

string ChannelPipelineAlerts::GetType() const
{
    return m_type;
}

void ChannelPipelineAlerts::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ChannelPipelineAlerts::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ChannelPipelineAlerts::GetMessage() const
{
    return m_message;
}

void ChannelPipelineAlerts::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool ChannelPipelineAlerts::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

