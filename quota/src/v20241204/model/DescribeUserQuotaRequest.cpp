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

#include <tencentcloud/quota/v20241204/model/DescribeUserQuotaRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Quota::V20241204::Model;
using namespace std;

DescribeUserQuotaRequest::DescribeUserQuotaRequest() :
    m_productNameHasBeenSet(false),
    m_quotaIdHasBeenSet(false),
    m_quotaInstanceIdHasBeenSet(false)
{
}

string DescribeUserQuotaRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productName.c_str(), allocator).Move(), allocator);
    }

    if (m_quotaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_quotaId.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_quotaInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_quotaInstanceId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeUserQuotaRequest::GetProductName() const
{
    return m_productName;
}

void DescribeUserQuotaRequest::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool DescribeUserQuotaRequest::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

Sort DescribeUserQuotaRequest::GetQuotaId() const
{
    return m_quotaId;
}

void DescribeUserQuotaRequest::SetQuotaId(const Sort& _quotaId)
{
    m_quotaId = _quotaId;
    m_quotaIdHasBeenSet = true;
}

bool DescribeUserQuotaRequest::QuotaIdHasBeenSet() const
{
    return m_quotaIdHasBeenSet;
}

string DescribeUserQuotaRequest::GetQuotaInstanceId() const
{
    return m_quotaInstanceId;
}

void DescribeUserQuotaRequest::SetQuotaInstanceId(const string& _quotaInstanceId)
{
    m_quotaInstanceId = _quotaInstanceId;
    m_quotaInstanceIdHasBeenSet = true;
}

bool DescribeUserQuotaRequest::QuotaInstanceIdHasBeenSet() const
{
    return m_quotaInstanceIdHasBeenSet;
}


