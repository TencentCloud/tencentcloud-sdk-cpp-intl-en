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

#include <tencentcloud/tcsas/v20250106/model/RequestPaymentMerchantBindingRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

RequestPaymentMerchantBindingRequest::RequestPaymentMerchantBindingRequest() :
    m_platformIdHasBeenSet(false),
    m_teamIdHasBeenSet(false),
    m_merchantIDHasBeenSet(false),
    m_merchantNameHasBeenSet(false)
{
}

string RequestPaymentMerchantBindingRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_platformIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlatformId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platformId.c_str(), allocator).Move(), allocator);
    }

    if (m_teamIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TeamId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_teamId.c_str(), allocator).Move(), allocator);
    }

    if (m_merchantIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_merchantID.c_str(), allocator).Move(), allocator);
    }

    if (m_merchantNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_merchantName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RequestPaymentMerchantBindingRequest::GetPlatformId() const
{
    return m_platformId;
}

void RequestPaymentMerchantBindingRequest::SetPlatformId(const string& _platformId)
{
    m_platformId = _platformId;
    m_platformIdHasBeenSet = true;
}

bool RequestPaymentMerchantBindingRequest::PlatformIdHasBeenSet() const
{
    return m_platformIdHasBeenSet;
}

string RequestPaymentMerchantBindingRequest::GetTeamId() const
{
    return m_teamId;
}

void RequestPaymentMerchantBindingRequest::SetTeamId(const string& _teamId)
{
    m_teamId = _teamId;
    m_teamIdHasBeenSet = true;
}

bool RequestPaymentMerchantBindingRequest::TeamIdHasBeenSet() const
{
    return m_teamIdHasBeenSet;
}

string RequestPaymentMerchantBindingRequest::GetMerchantID() const
{
    return m_merchantID;
}

void RequestPaymentMerchantBindingRequest::SetMerchantID(const string& _merchantID)
{
    m_merchantID = _merchantID;
    m_merchantIDHasBeenSet = true;
}

bool RequestPaymentMerchantBindingRequest::MerchantIDHasBeenSet() const
{
    return m_merchantIDHasBeenSet;
}

string RequestPaymentMerchantBindingRequest::GetMerchantName() const
{
    return m_merchantName;
}

void RequestPaymentMerchantBindingRequest::SetMerchantName(const string& _merchantName)
{
    m_merchantName = _merchantName;
    m_merchantNameHasBeenSet = true;
}

bool RequestPaymentMerchantBindingRequest::MerchantNameHasBeenSet() const
{
    return m_merchantNameHasBeenSet;
}


