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

#include <tencentcloud/trabbit/v20230418/model/DeleteRabbitMQServerlessQueueRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trabbit::V20230418::Model;
using namespace std;

DeleteRabbitMQServerlessQueueRequest::DeleteRabbitMQServerlessQueueRequest() :
    m_instanceIdHasBeenSet(false),
    m_virtualHostHasBeenSet(false),
    m_queueNameHasBeenSet(false)
{
}

string DeleteRabbitMQServerlessQueueRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_virtualHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirtualHost";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_virtualHost.c_str(), allocator).Move(), allocator);
    }

    if (m_queueNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_queueName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteRabbitMQServerlessQueueRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DeleteRabbitMQServerlessQueueRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DeleteRabbitMQServerlessQueueRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DeleteRabbitMQServerlessQueueRequest::GetVirtualHost() const
{
    return m_virtualHost;
}

void DeleteRabbitMQServerlessQueueRequest::SetVirtualHost(const string& _virtualHost)
{
    m_virtualHost = _virtualHost;
    m_virtualHostHasBeenSet = true;
}

bool DeleteRabbitMQServerlessQueueRequest::VirtualHostHasBeenSet() const
{
    return m_virtualHostHasBeenSet;
}

string DeleteRabbitMQServerlessQueueRequest::GetQueueName() const
{
    return m_queueName;
}

void DeleteRabbitMQServerlessQueueRequest::SetQueueName(const string& _queueName)
{
    m_queueName = _queueName;
    m_queueNameHasBeenSet = true;
}

bool DeleteRabbitMQServerlessQueueRequest::QueueNameHasBeenSet() const
{
    return m_queueNameHasBeenSet;
}


