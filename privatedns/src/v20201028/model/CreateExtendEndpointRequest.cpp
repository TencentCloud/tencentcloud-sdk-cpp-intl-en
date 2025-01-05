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

#include <tencentcloud/privatedns/v20201028/model/CreateExtendEndpointRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Privatedns::V20201028::Model;
using namespace std;

CreateExtendEndpointRequest::CreateExtendEndpointRequest() :
    m_endpointNameHasBeenSet(false),
    m_endpointRegionHasBeenSet(false),
    m_forwardIpHasBeenSet(false)
{
}

string CreateExtendEndpointRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_endpointNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndpointName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endpointName.c_str(), allocator).Move(), allocator);
    }

    if (m_endpointRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndpointRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endpointRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_forwardIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForwardIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_forwardIp.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateExtendEndpointRequest::GetEndpointName() const
{
    return m_endpointName;
}

void CreateExtendEndpointRequest::SetEndpointName(const string& _endpointName)
{
    m_endpointName = _endpointName;
    m_endpointNameHasBeenSet = true;
}

bool CreateExtendEndpointRequest::EndpointNameHasBeenSet() const
{
    return m_endpointNameHasBeenSet;
}

string CreateExtendEndpointRequest::GetEndpointRegion() const
{
    return m_endpointRegion;
}

void CreateExtendEndpointRequest::SetEndpointRegion(const string& _endpointRegion)
{
    m_endpointRegion = _endpointRegion;
    m_endpointRegionHasBeenSet = true;
}

bool CreateExtendEndpointRequest::EndpointRegionHasBeenSet() const
{
    return m_endpointRegionHasBeenSet;
}

ForwardIp CreateExtendEndpointRequest::GetForwardIp() const
{
    return m_forwardIp;
}

void CreateExtendEndpointRequest::SetForwardIp(const ForwardIp& _forwardIp)
{
    m_forwardIp = _forwardIp;
    m_forwardIpHasBeenSet = true;
}

bool CreateExtendEndpointRequest::ForwardIpHasBeenSet() const
{
    return m_forwardIpHasBeenSet;
}


