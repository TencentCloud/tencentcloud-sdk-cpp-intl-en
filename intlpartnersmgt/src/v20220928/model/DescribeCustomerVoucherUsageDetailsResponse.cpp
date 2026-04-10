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

#include <tencentcloud/intlpartnersmgt/v20220928/model/DescribeCustomerVoucherUsageDetailsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Intlpartnersmgt::V20220928::Model;
using namespace std;

DescribeCustomerVoucherUsageDetailsResponse::DescribeCustomerVoucherUsageDetailsResponse() :
    m_dataHasBeenSet(false),
    m_customerUinHasBeenSet(false),
    m_voucherIdHasBeenSet(false),
    m_totalAmountHasBeenSet(false),
    m_remainAmountHasBeenSet(false),
    m_totalRecordsCountHasBeenSet(false),
    m_monthHasBeenSet(false),
    m_recordsCountByMonthHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCustomerVoucherUsageDetailsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Data") && !rsp["Data"].IsNull())
    {
        if (!rsp["Data"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Data` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Data"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            UsageDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_data.push_back(item);
        }
        m_dataHasBeenSet = true;
    }

    if (rsp.HasMember("CustomerUin") && !rsp["CustomerUin"].IsNull())
    {
        if (!rsp["CustomerUin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerUin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_customerUin = rsp["CustomerUin"].GetInt64();
        m_customerUinHasBeenSet = true;
    }

    if (rsp.HasMember("VoucherId") && !rsp["VoucherId"].IsNull())
    {
        if (!rsp["VoucherId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VoucherId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_voucherId = rsp["VoucherId"].GetInt64();
        m_voucherIdHasBeenSet = true;
    }

    if (rsp.HasMember("TotalAmount") && !rsp["TotalAmount"].IsNull())
    {
        if (!rsp["TotalAmount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TotalAmount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_totalAmount = rsp["TotalAmount"].GetDouble();
        m_totalAmountHasBeenSet = true;
    }

    if (rsp.HasMember("RemainAmount") && !rsp["RemainAmount"].IsNull())
    {
        if (!rsp["RemainAmount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RemainAmount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_remainAmount = rsp["RemainAmount"].GetDouble();
        m_remainAmountHasBeenSet = true;
    }

    if (rsp.HasMember("TotalRecordsCount") && !rsp["TotalRecordsCount"].IsNull())
    {
        if (!rsp["TotalRecordsCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalRecordsCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalRecordsCount = rsp["TotalRecordsCount"].GetInt64();
        m_totalRecordsCountHasBeenSet = true;
    }

    if (rsp.HasMember("Month") && !rsp["Month"].IsNull())
    {
        if (!rsp["Month"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Month` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_month = string(rsp["Month"].GetString());
        m_monthHasBeenSet = true;
    }

    if (rsp.HasMember("RecordsCountByMonth") && !rsp["RecordsCountByMonth"].IsNull())
    {
        if (!rsp["RecordsCountByMonth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordsCountByMonth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_recordsCountByMonth = rsp["RecordsCountByMonth"].GetInt64();
        m_recordsCountByMonthHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeCustomerVoucherUsageDetailsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_dataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Data";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_data.begin(); itr != m_data.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_customerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_customerUin, allocator);
    }

    if (m_voucherIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoucherId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_voucherId, allocator);
    }

    if (m_totalAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalAmount, allocator);
    }

    if (m_remainAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemainAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remainAmount, allocator);
    }

    if (m_totalRecordsCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalRecordsCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalRecordsCount, allocator);
    }

    if (m_monthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Month";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_month.c_str(), allocator).Move(), allocator);
    }

    if (m_recordsCountByMonthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordsCountByMonth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recordsCountByMonth, allocator);
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


vector<UsageDetail> DescribeCustomerVoucherUsageDetailsResponse::GetData() const
{
    return m_data;
}

bool DescribeCustomerVoucherUsageDetailsResponse::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

int64_t DescribeCustomerVoucherUsageDetailsResponse::GetCustomerUin() const
{
    return m_customerUin;
}

bool DescribeCustomerVoucherUsageDetailsResponse::CustomerUinHasBeenSet() const
{
    return m_customerUinHasBeenSet;
}

int64_t DescribeCustomerVoucherUsageDetailsResponse::GetVoucherId() const
{
    return m_voucherId;
}

bool DescribeCustomerVoucherUsageDetailsResponse::VoucherIdHasBeenSet() const
{
    return m_voucherIdHasBeenSet;
}

double DescribeCustomerVoucherUsageDetailsResponse::GetTotalAmount() const
{
    return m_totalAmount;
}

bool DescribeCustomerVoucherUsageDetailsResponse::TotalAmountHasBeenSet() const
{
    return m_totalAmountHasBeenSet;
}

double DescribeCustomerVoucherUsageDetailsResponse::GetRemainAmount() const
{
    return m_remainAmount;
}

bool DescribeCustomerVoucherUsageDetailsResponse::RemainAmountHasBeenSet() const
{
    return m_remainAmountHasBeenSet;
}

int64_t DescribeCustomerVoucherUsageDetailsResponse::GetTotalRecordsCount() const
{
    return m_totalRecordsCount;
}

bool DescribeCustomerVoucherUsageDetailsResponse::TotalRecordsCountHasBeenSet() const
{
    return m_totalRecordsCountHasBeenSet;
}

string DescribeCustomerVoucherUsageDetailsResponse::GetMonth() const
{
    return m_month;
}

bool DescribeCustomerVoucherUsageDetailsResponse::MonthHasBeenSet() const
{
    return m_monthHasBeenSet;
}

int64_t DescribeCustomerVoucherUsageDetailsResponse::GetRecordsCountByMonth() const
{
    return m_recordsCountByMonth;
}

bool DescribeCustomerVoucherUsageDetailsResponse::RecordsCountByMonthHasBeenSet() const
{
    return m_recordsCountByMonthHasBeenSet;
}


