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

#include <tencentcloud/message/v20181225/model/ModifySendChannelOnMsgTypesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Message::V20181225::Model;
using namespace std;

ModifySendChannelOnMsgTypesRequest::ModifySendChannelOnMsgTypesRequest() :
    m_sendTypesHasBeenSet(false)
{
}

string ModifySendChannelOnMsgTypesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sendTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SendTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sendTypes.begin(); itr != m_sendTypes.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<SendType> ModifySendChannelOnMsgTypesRequest::GetSendTypes() const
{
    return m_sendTypes;
}

void ModifySendChannelOnMsgTypesRequest::SetSendTypes(const vector<SendType>& _sendTypes)
{
    m_sendTypes = _sendTypes;
    m_sendTypesHasBeenSet = true;
}

bool ModifySendChannelOnMsgTypesRequest::SendTypesHasBeenSet() const
{
    return m_sendTypesHasBeenSet;
}


