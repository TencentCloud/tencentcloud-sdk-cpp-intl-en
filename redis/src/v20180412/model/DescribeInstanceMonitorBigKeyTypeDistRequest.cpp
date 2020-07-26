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

#include <tencentcloud/redis/v20180412/model/DescribeInstanceMonitorBigKeyTypeDistRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Redis::V20180412::Model;
using namespace rapidjson;
using namespace std;

DescribeInstanceMonitorBigKeyTypeDistRequest::DescribeInstanceMonitorBigKeyTypeDistRequest() :
    m_instanceIdHasBeenSet(false),
    m_dateHasBeenSet(false)
{
}

string DescribeInstanceMonitorBigKeyTypeDistRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_dateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_date.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeInstanceMonitorBigKeyTypeDistRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeInstanceMonitorBigKeyTypeDistRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeInstanceMonitorBigKeyTypeDistRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeInstanceMonitorBigKeyTypeDistRequest::GetDate() const
{
    return m_date;
}

void DescribeInstanceMonitorBigKeyTypeDistRequest::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool DescribeInstanceMonitorBigKeyTypeDistRequest::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}


