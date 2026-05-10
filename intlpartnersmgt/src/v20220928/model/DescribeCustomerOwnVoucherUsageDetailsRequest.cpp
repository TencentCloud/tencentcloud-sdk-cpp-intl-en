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

#include <tencentcloud/intlpartnersmgt/v20220928/model/DescribeCustomerOwnVoucherUsageDetailsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Intlpartnersmgt::V20220928::Model;
using namespace std;

DescribeCustomerOwnVoucherUsageDetailsRequest::DescribeCustomerOwnVoucherUsageDetailsRequest() :
    m_pageHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_voucherIdHasBeenSet(false),
    m_monthHasBeenSet(false)
{
}

string DescribeCustomerOwnVoucherUsageDetailsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_pageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Page";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_page, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_voucherIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoucherId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_voucherId, allocator);
    }

    if (m_monthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Month";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_month.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeCustomerOwnVoucherUsageDetailsRequest::GetPage() const
{
    return m_page;
}

void DescribeCustomerOwnVoucherUsageDetailsRequest::SetPage(const int64_t& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool DescribeCustomerOwnVoucherUsageDetailsRequest::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

int64_t DescribeCustomerOwnVoucherUsageDetailsRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeCustomerOwnVoucherUsageDetailsRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeCustomerOwnVoucherUsageDetailsRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

int64_t DescribeCustomerOwnVoucherUsageDetailsRequest::GetVoucherId() const
{
    return m_voucherId;
}

void DescribeCustomerOwnVoucherUsageDetailsRequest::SetVoucherId(const int64_t& _voucherId)
{
    m_voucherId = _voucherId;
    m_voucherIdHasBeenSet = true;
}

bool DescribeCustomerOwnVoucherUsageDetailsRequest::VoucherIdHasBeenSet() const
{
    return m_voucherIdHasBeenSet;
}

string DescribeCustomerOwnVoucherUsageDetailsRequest::GetMonth() const
{
    return m_month;
}

void DescribeCustomerOwnVoucherUsageDetailsRequest::SetMonth(const string& _month)
{
    m_month = _month;
    m_monthHasBeenSet = true;
}

bool DescribeCustomerOwnVoucherUsageDetailsRequest::MonthHasBeenSet() const
{
    return m_monthHasBeenSet;
}


