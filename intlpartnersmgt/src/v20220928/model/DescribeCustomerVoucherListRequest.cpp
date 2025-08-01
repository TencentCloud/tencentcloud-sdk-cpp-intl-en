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

#include <tencentcloud/intlpartnersmgt/v20220928/model/DescribeCustomerVoucherListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Intlpartnersmgt::V20220928::Model;
using namespace std;

DescribeCustomerVoucherListRequest::DescribeCustomerVoucherListRequest() :
    m_pageHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_customerUinHasBeenSet(false),
    m_voucherStatusHasBeenSet(false),
    m_paymentModeHasBeenSet(false),
    m_usageHasBeenSet(false),
    m_productScopeHasBeenSet(false),
    m_voucherIdHasBeenSet(false)
{
}

string DescribeCustomerVoucherListRequest::ToJsonString() const
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

    if (m_customerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_customerUin, allocator);
    }

    if (m_voucherStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoucherStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_voucherStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_paymentMode.c_str(), allocator).Move(), allocator);
    }

    if (m_usageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Usage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_usage.c_str(), allocator).Move(), allocator);
    }

    if (m_productScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductScope";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productScope.c_str(), allocator).Move(), allocator);
    }

    if (m_voucherIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoucherId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_voucherId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeCustomerVoucherListRequest::GetPage() const
{
    return m_page;
}

void DescribeCustomerVoucherListRequest::SetPage(const int64_t& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool DescribeCustomerVoucherListRequest::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

int64_t DescribeCustomerVoucherListRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeCustomerVoucherListRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeCustomerVoucherListRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

int64_t DescribeCustomerVoucherListRequest::GetCustomerUin() const
{
    return m_customerUin;
}

void DescribeCustomerVoucherListRequest::SetCustomerUin(const int64_t& _customerUin)
{
    m_customerUin = _customerUin;
    m_customerUinHasBeenSet = true;
}

bool DescribeCustomerVoucherListRequest::CustomerUinHasBeenSet() const
{
    return m_customerUinHasBeenSet;
}

string DescribeCustomerVoucherListRequest::GetVoucherStatus() const
{
    return m_voucherStatus;
}

void DescribeCustomerVoucherListRequest::SetVoucherStatus(const string& _voucherStatus)
{
    m_voucherStatus = _voucherStatus;
    m_voucherStatusHasBeenSet = true;
}

bool DescribeCustomerVoucherListRequest::VoucherStatusHasBeenSet() const
{
    return m_voucherStatusHasBeenSet;
}

string DescribeCustomerVoucherListRequest::GetPaymentMode() const
{
    return m_paymentMode;
}

void DescribeCustomerVoucherListRequest::SetPaymentMode(const string& _paymentMode)
{
    m_paymentMode = _paymentMode;
    m_paymentModeHasBeenSet = true;
}

bool DescribeCustomerVoucherListRequest::PaymentModeHasBeenSet() const
{
    return m_paymentModeHasBeenSet;
}

string DescribeCustomerVoucherListRequest::GetUsage() const
{
    return m_usage;
}

void DescribeCustomerVoucherListRequest::SetUsage(const string& _usage)
{
    m_usage = _usage;
    m_usageHasBeenSet = true;
}

bool DescribeCustomerVoucherListRequest::UsageHasBeenSet() const
{
    return m_usageHasBeenSet;
}

string DescribeCustomerVoucherListRequest::GetProductScope() const
{
    return m_productScope;
}

void DescribeCustomerVoucherListRequest::SetProductScope(const string& _productScope)
{
    m_productScope = _productScope;
    m_productScopeHasBeenSet = true;
}

bool DescribeCustomerVoucherListRequest::ProductScopeHasBeenSet() const
{
    return m_productScopeHasBeenSet;
}

int64_t DescribeCustomerVoucherListRequest::GetVoucherId() const
{
    return m_voucherId;
}

void DescribeCustomerVoucherListRequest::SetVoucherId(const int64_t& _voucherId)
{
    m_voucherId = _voucherId;
    m_voucherIdHasBeenSet = true;
}

bool DescribeCustomerVoucherListRequest::VoucherIdHasBeenSet() const
{
    return m_voucherIdHasBeenSet;
}


