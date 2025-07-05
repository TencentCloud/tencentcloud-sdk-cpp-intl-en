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

#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryCustomerBillingQuotaRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Intlpartnersmgt::V20220928::Model;
using namespace std;

QueryCustomerBillingQuotaRequest::QueryCustomerBillingQuotaRequest() :
    m_eventIdHasBeenSet(false),
    m_componentNameHasBeenSet(false)
{
}

string QueryCustomerBillingQuotaRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_eventIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_eventId, allocator);
    }

    if (m_componentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_componentName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t QueryCustomerBillingQuotaRequest::GetEventId() const
{
    return m_eventId;
}

void QueryCustomerBillingQuotaRequest::SetEventId(const int64_t& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool QueryCustomerBillingQuotaRequest::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

string QueryCustomerBillingQuotaRequest::GetComponentName() const
{
    return m_componentName;
}

void QueryCustomerBillingQuotaRequest::SetComponentName(const string& _componentName)
{
    m_componentName = _componentName;
    m_componentNameHasBeenSet = true;
}

bool QueryCustomerBillingQuotaRequest::ComponentNameHasBeenSet() const
{
    return m_componentNameHasBeenSet;
}


