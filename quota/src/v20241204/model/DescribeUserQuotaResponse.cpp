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

#include <tencentcloud/quota/v20241204/model/DescribeUserQuotaResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Quota::V20241204::Model;
using namespace std;

DescribeUserQuotaResponse::DescribeUserQuotaResponse() :
    m_quotaIdHasBeenSet(false),
    m_quotaNameHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_quotaUnitHasBeenSet(false),
    m_totalQuotaHasBeenSet(false),
    m_totalUsageHasBeenSet(false),
    m_quotaDescriptionHasBeenSet(false)
{
}

CoreInternalOutcome DescribeUserQuotaResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("QuotaId") && !rsp["QuotaId"].IsNull())
    {
        if (!rsp["QuotaId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QuotaId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_quotaId = rsp["QuotaId"].GetInt64();
        m_quotaIdHasBeenSet = true;
    }

    if (rsp.HasMember("QuotaName") && !rsp["QuotaName"].IsNull())
    {
        if (!rsp["QuotaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QuotaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quotaName = string(rsp["QuotaName"].GetString());
        m_quotaNameHasBeenSet = true;
    }

    if (rsp.HasMember("ProductName") && !rsp["ProductName"].IsNull())
    {
        if (!rsp["ProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productName = string(rsp["ProductName"].GetString());
        m_productNameHasBeenSet = true;
    }

    if (rsp.HasMember("QuotaUnit") && !rsp["QuotaUnit"].IsNull())
    {
        if (!rsp["QuotaUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QuotaUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quotaUnit = string(rsp["QuotaUnit"].GetString());
        m_quotaUnitHasBeenSet = true;
    }

    if (rsp.HasMember("TotalQuota") && !rsp["TotalQuota"].IsNull())
    {
        if (!rsp["TotalQuota"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalQuota` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalQuota = rsp["TotalQuota"].GetInt64();
        m_totalQuotaHasBeenSet = true;
    }

    if (rsp.HasMember("TotalUsage") && !rsp["TotalUsage"].IsNull())
    {
        if (!rsp["TotalUsage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalUsage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalUsage = rsp["TotalUsage"].GetInt64();
        m_totalUsageHasBeenSet = true;
    }

    if (rsp.HasMember("QuotaDescription") && !rsp["QuotaDescription"].IsNull())
    {
        if (!rsp["QuotaDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QuotaDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quotaDescription = string(rsp["QuotaDescription"].GetString());
        m_quotaDescriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeUserQuotaResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_quotaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_quotaId, allocator);
    }

    if (m_quotaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quotaName.c_str(), allocator).Move(), allocator);
    }

    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productName.c_str(), allocator).Move(), allocator);
    }

    if (m_quotaUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quotaUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_totalQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalQuota, allocator);
    }

    if (m_totalUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalUsage, allocator);
    }

    if (m_quotaDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quotaDescription.c_str(), allocator).Move(), allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeUserQuotaResponse::GetQuotaId() const
{
    return m_quotaId;
}

bool DescribeUserQuotaResponse::QuotaIdHasBeenSet() const
{
    return m_quotaIdHasBeenSet;
}

string DescribeUserQuotaResponse::GetQuotaName() const
{
    return m_quotaName;
}

bool DescribeUserQuotaResponse::QuotaNameHasBeenSet() const
{
    return m_quotaNameHasBeenSet;
}

string DescribeUserQuotaResponse::GetProductName() const
{
    return m_productName;
}

bool DescribeUserQuotaResponse::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

string DescribeUserQuotaResponse::GetQuotaUnit() const
{
    return m_quotaUnit;
}

bool DescribeUserQuotaResponse::QuotaUnitHasBeenSet() const
{
    return m_quotaUnitHasBeenSet;
}

int64_t DescribeUserQuotaResponse::GetTotalQuota() const
{
    return m_totalQuota;
}

bool DescribeUserQuotaResponse::TotalQuotaHasBeenSet() const
{
    return m_totalQuotaHasBeenSet;
}

int64_t DescribeUserQuotaResponse::GetTotalUsage() const
{
    return m_totalUsage;
}

bool DescribeUserQuotaResponse::TotalUsageHasBeenSet() const
{
    return m_totalUsageHasBeenSet;
}

string DescribeUserQuotaResponse::GetQuotaDescription() const
{
    return m_quotaDescription;
}

bool DescribeUserQuotaResponse::QuotaDescriptionHasBeenSet() const
{
    return m_quotaDescriptionHasBeenSet;
}


