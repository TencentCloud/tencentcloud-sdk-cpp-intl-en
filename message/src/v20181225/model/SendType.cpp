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

#include <tencentcloud/message/v20181225/model/SendType.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Message::V20181225::Model;
using namespace std;

SendType::SendType() :
    m_msgTypeHasBeenSet(false),
    m_sendChannelHasBeenSet(false)
{
}

CoreInternalOutcome SendType::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MsgType") && !value["MsgType"].IsNull())
    {
        if (!value["MsgType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SendType.MsgType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_msgType = value["MsgType"].GetUint64();
        m_msgTypeHasBeenSet = true;
    }

    if (value.HasMember("SendChannel") && !value["SendChannel"].IsNull())
    {
        if (!value["SendChannel"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SendType.SendChannel` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sendChannel = value["SendChannel"].GetUint64();
        m_sendChannelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SendType::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_msgTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_msgType, allocator);
    }

    if (m_sendChannelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SendChannel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sendChannel, allocator);
    }

}


uint64_t SendType::GetMsgType() const
{
    return m_msgType;
}

void SendType::SetMsgType(const uint64_t& _msgType)
{
    m_msgType = _msgType;
    m_msgTypeHasBeenSet = true;
}

bool SendType::MsgTypeHasBeenSet() const
{
    return m_msgTypeHasBeenSet;
}

uint64_t SendType::GetSendChannel() const
{
    return m_sendChannel;
}

void SendType::SetSendChannel(const uint64_t& _sendChannel)
{
    m_sendChannel = _sendChannel;
    m_sendChannelHasBeenSet = true;
}

bool SendType::SendChannelHasBeenSet() const
{
    return m_sendChannelHasBeenSet;
}

