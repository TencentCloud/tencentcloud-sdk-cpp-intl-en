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

#include <tencentcloud/clb/v20180317/model/InquiryPriceRenewLoadBalancerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

InquiryPriceRenewLoadBalancerRequest::InquiryPriceRenewLoadBalancerRequest() :
    m_loadBalancerIdHasBeenSet(false),
    m_loadBalancerChargePrepaidHasBeenSet(false)
{
}

string InquiryPriceRenewLoadBalancerRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_loadBalancerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loadBalancerId.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancerChargePrepaidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerChargePrepaid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_loadBalancerChargePrepaid.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string InquiryPriceRenewLoadBalancerRequest::GetLoadBalancerId() const
{
    return m_loadBalancerId;
}

void InquiryPriceRenewLoadBalancerRequest::SetLoadBalancerId(const string& _loadBalancerId)
{
    m_loadBalancerId = _loadBalancerId;
    m_loadBalancerIdHasBeenSet = true;
}

bool InquiryPriceRenewLoadBalancerRequest::LoadBalancerIdHasBeenSet() const
{
    return m_loadBalancerIdHasBeenSet;
}

LBChargePrepaid InquiryPriceRenewLoadBalancerRequest::GetLoadBalancerChargePrepaid() const
{
    return m_loadBalancerChargePrepaid;
}

void InquiryPriceRenewLoadBalancerRequest::SetLoadBalancerChargePrepaid(const LBChargePrepaid& _loadBalancerChargePrepaid)
{
    m_loadBalancerChargePrepaid = _loadBalancerChargePrepaid;
    m_loadBalancerChargePrepaidHasBeenSet = true;
}

bool InquiryPriceRenewLoadBalancerRequest::LoadBalancerChargePrepaidHasBeenSet() const
{
    return m_loadBalancerChargePrepaidHasBeenSet;
}


