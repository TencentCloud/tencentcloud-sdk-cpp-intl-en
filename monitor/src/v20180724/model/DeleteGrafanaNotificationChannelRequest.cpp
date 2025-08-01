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

#include <tencentcloud/monitor/v20180724/model/DeleteGrafanaNotificationChannelRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

DeleteGrafanaNotificationChannelRequest::DeleteGrafanaNotificationChannelRequest() :
    m_channelIDsHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
}

string DeleteGrafanaNotificationChannelRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_channelIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelIDs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_channelIDs.begin(); itr != m_channelIDs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DeleteGrafanaNotificationChannelRequest::GetChannelIDs() const
{
    return m_channelIDs;
}

void DeleteGrafanaNotificationChannelRequest::SetChannelIDs(const vector<string>& _channelIDs)
{
    m_channelIDs = _channelIDs;
    m_channelIDsHasBeenSet = true;
}

bool DeleteGrafanaNotificationChannelRequest::ChannelIDsHasBeenSet() const
{
    return m_channelIDsHasBeenSet;
}

string DeleteGrafanaNotificationChannelRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DeleteGrafanaNotificationChannelRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DeleteGrafanaNotificationChannelRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}


