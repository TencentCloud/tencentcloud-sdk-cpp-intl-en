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

#include <tencentcloud/apigateway/v20180808/model/DescribeServiceSubDomainMappingsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace rapidjson;
using namespace std;

DescribeServiceSubDomainMappingsRequest::DescribeServiceSubDomainMappingsRequest() :
    m_serviceIdHasBeenSet(false),
    m_subDomainHasBeenSet(false)
{
}

string DescribeServiceSubDomainMappingsRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_serviceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_serviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_subDomainHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubDomain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_subDomain.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeServiceSubDomainMappingsRequest::GetServiceId() const
{
    return m_serviceId;
}

void DescribeServiceSubDomainMappingsRequest::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool DescribeServiceSubDomainMappingsRequest::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

string DescribeServiceSubDomainMappingsRequest::GetSubDomain() const
{
    return m_subDomain;
}

void DescribeServiceSubDomainMappingsRequest::SetSubDomain(const string& _subDomain)
{
    m_subDomain = _subDomain;
    m_subDomainHasBeenSet = true;
}

bool DescribeServiceSubDomainMappingsRequest::SubDomainHasBeenSet() const
{
    return m_subDomainHasBeenSet;
}


