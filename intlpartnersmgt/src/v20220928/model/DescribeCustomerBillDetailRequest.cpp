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

#include <tencentcloud/intlpartnersmgt/v20220928/model/DescribeCustomerBillDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Intlpartnersmgt::V20220928::Model;
using namespace std;

DescribeCustomerBillDetailRequest::DescribeCustomerBillDetailRequest() :
    m_customerUinHasBeenSet(false),
    m_monthHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_pageHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_actionTypeHasBeenSet(false),
    m_isConfirmedHasBeenSet(false)
{
}

string DescribeCustomerBillDetailRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_customerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_customerUin, allocator);
    }

    if (m_monthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Month";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_month.c_str(), allocator).Move(), allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_pageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Page";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_page, allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payMode.c_str(), allocator).Move(), allocator);
    }

    if (m_actionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_actionType.c_str(), allocator).Move(), allocator);
    }

    if (m_isConfirmedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsConfirmed";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_isConfirmed.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeCustomerBillDetailRequest::GetCustomerUin() const
{
    return m_customerUin;
}

void DescribeCustomerBillDetailRequest::SetCustomerUin(const uint64_t& _customerUin)
{
    m_customerUin = _customerUin;
    m_customerUinHasBeenSet = true;
}

bool DescribeCustomerBillDetailRequest::CustomerUinHasBeenSet() const
{
    return m_customerUinHasBeenSet;
}

string DescribeCustomerBillDetailRequest::GetMonth() const
{
    return m_month;
}

void DescribeCustomerBillDetailRequest::SetMonth(const string& _month)
{
    m_month = _month;
    m_monthHasBeenSet = true;
}

bool DescribeCustomerBillDetailRequest::MonthHasBeenSet() const
{
    return m_monthHasBeenSet;
}

int64_t DescribeCustomerBillDetailRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeCustomerBillDetailRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeCustomerBillDetailRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

int64_t DescribeCustomerBillDetailRequest::GetPage() const
{
    return m_page;
}

void DescribeCustomerBillDetailRequest::SetPage(const int64_t& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool DescribeCustomerBillDetailRequest::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

string DescribeCustomerBillDetailRequest::GetPayMode() const
{
    return m_payMode;
}

void DescribeCustomerBillDetailRequest::SetPayMode(const string& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool DescribeCustomerBillDetailRequest::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string DescribeCustomerBillDetailRequest::GetActionType() const
{
    return m_actionType;
}

void DescribeCustomerBillDetailRequest::SetActionType(const string& _actionType)
{
    m_actionType = _actionType;
    m_actionTypeHasBeenSet = true;
}

bool DescribeCustomerBillDetailRequest::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}

string DescribeCustomerBillDetailRequest::GetIsConfirmed() const
{
    return m_isConfirmed;
}

void DescribeCustomerBillDetailRequest::SetIsConfirmed(const string& _isConfirmed)
{
    m_isConfirmed = _isConfirmed;
    m_isConfirmedHasBeenSet = true;
}

bool DescribeCustomerBillDetailRequest::IsConfirmedHasBeenSet() const
{
    return m_isConfirmedHasBeenSet;
}


