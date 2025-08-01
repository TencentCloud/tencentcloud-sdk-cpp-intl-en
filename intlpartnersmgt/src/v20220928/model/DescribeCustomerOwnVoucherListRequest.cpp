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

#include <tencentcloud/intlpartnersmgt/v20220928/model/DescribeCustomerOwnVoucherListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Intlpartnersmgt::V20220928::Model;
using namespace std;

DescribeCustomerOwnVoucherListRequest::DescribeCustomerOwnVoucherListRequest() :
    m_pageHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_voucherStatusHasBeenSet(false),
    m_paymentModeHasBeenSet(false),
    m_productScopeHasBeenSet(false),
    m_voucherIdHasBeenSet(false)
{
}

string DescribeCustomerOwnVoucherListRequest::ToJsonString() const
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


int64_t DescribeCustomerOwnVoucherListRequest::GetPage() const
{
    return m_page;
}

void DescribeCustomerOwnVoucherListRequest::SetPage(const int64_t& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool DescribeCustomerOwnVoucherListRequest::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

int64_t DescribeCustomerOwnVoucherListRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeCustomerOwnVoucherListRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeCustomerOwnVoucherListRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string DescribeCustomerOwnVoucherListRequest::GetVoucherStatus() const
{
    return m_voucherStatus;
}

void DescribeCustomerOwnVoucherListRequest::SetVoucherStatus(const string& _voucherStatus)
{
    m_voucherStatus = _voucherStatus;
    m_voucherStatusHasBeenSet = true;
}

bool DescribeCustomerOwnVoucherListRequest::VoucherStatusHasBeenSet() const
{
    return m_voucherStatusHasBeenSet;
}

string DescribeCustomerOwnVoucherListRequest::GetPaymentMode() const
{
    return m_paymentMode;
}

void DescribeCustomerOwnVoucherListRequest::SetPaymentMode(const string& _paymentMode)
{
    m_paymentMode = _paymentMode;
    m_paymentModeHasBeenSet = true;
}

bool DescribeCustomerOwnVoucherListRequest::PaymentModeHasBeenSet() const
{
    return m_paymentModeHasBeenSet;
}

string DescribeCustomerOwnVoucherListRequest::GetProductScope() const
{
    return m_productScope;
}

void DescribeCustomerOwnVoucherListRequest::SetProductScope(const string& _productScope)
{
    m_productScope = _productScope;
    m_productScopeHasBeenSet = true;
}

bool DescribeCustomerOwnVoucherListRequest::ProductScopeHasBeenSet() const
{
    return m_productScopeHasBeenSet;
}

int64_t DescribeCustomerOwnVoucherListRequest::GetVoucherId() const
{
    return m_voucherId;
}

void DescribeCustomerOwnVoucherListRequest::SetVoucherId(const int64_t& _voucherId)
{
    m_voucherId = _voucherId;
    m_voucherIdHasBeenSet = true;
}

bool DescribeCustomerOwnVoucherListRequest::VoucherIdHasBeenSet() const
{
    return m_voucherIdHasBeenSet;
}


