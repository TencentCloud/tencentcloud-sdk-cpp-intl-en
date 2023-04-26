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

#include <tencentcloud/intlpartnersmgt/v20220928/model/DescribeBillSummaryByRegionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Intlpartnersmgt::V20220928::Model;
using namespace std;

DescribeBillSummaryByRegionRequest::DescribeBillSummaryByRegionRequest() :
    m_billMonthHasBeenSet(false),
    m_customerUinHasBeenSet(false)
{
}

string DescribeBillSummaryByRegionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_billMonthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillMonth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_billMonth.c_str(), allocator).Move(), allocator);
    }

    if (m_customerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_customerUin, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeBillSummaryByRegionRequest::GetBillMonth() const
{
    return m_billMonth;
}

void DescribeBillSummaryByRegionRequest::SetBillMonth(const string& _billMonth)
{
    m_billMonth = _billMonth;
    m_billMonthHasBeenSet = true;
}

bool DescribeBillSummaryByRegionRequest::BillMonthHasBeenSet() const
{
    return m_billMonthHasBeenSet;
}

int64_t DescribeBillSummaryByRegionRequest::GetCustomerUin() const
{
    return m_customerUin;
}

void DescribeBillSummaryByRegionRequest::SetCustomerUin(const int64_t& _customerUin)
{
    m_customerUin = _customerUin;
    m_customerUinHasBeenSet = true;
}

bool DescribeBillSummaryByRegionRequest::CustomerUinHasBeenSet() const
{
    return m_customerUinHasBeenSet;
}


