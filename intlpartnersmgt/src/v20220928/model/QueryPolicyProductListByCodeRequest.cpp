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

#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryPolicyProductListByCodeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Intlpartnersmgt::V20220928::Model;
using namespace std;

QueryPolicyProductListByCodeRequest::QueryPolicyProductListByCodeRequest() :
    m_policyCodeHasBeenSet(false),
    m_productCodeHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_subProductCodeHasBeenSet(false),
    m_subProductNameHasBeenSet(false),
    m_pageHasBeenSet(false),
    m_pageSizeHasBeenSet(false)
{
}

string QueryPolicyProductListByCodeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_policyCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_policyCode.c_str(), allocator).Move(), allocator);
    }

    if (m_productCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productCode.c_str(), allocator).Move(), allocator);
    }

    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productName.c_str(), allocator).Move(), allocator);
    }

    if (m_subProductCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubProductCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subProductCode.c_str(), allocator).Move(), allocator);
    }

    if (m_subProductNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubProductName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subProductName.c_str(), allocator).Move(), allocator);
    }

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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string QueryPolicyProductListByCodeRequest::GetPolicyCode() const
{
    return m_policyCode;
}

void QueryPolicyProductListByCodeRequest::SetPolicyCode(const string& _policyCode)
{
    m_policyCode = _policyCode;
    m_policyCodeHasBeenSet = true;
}

bool QueryPolicyProductListByCodeRequest::PolicyCodeHasBeenSet() const
{
    return m_policyCodeHasBeenSet;
}

string QueryPolicyProductListByCodeRequest::GetProductCode() const
{
    return m_productCode;
}

void QueryPolicyProductListByCodeRequest::SetProductCode(const string& _productCode)
{
    m_productCode = _productCode;
    m_productCodeHasBeenSet = true;
}

bool QueryPolicyProductListByCodeRequest::ProductCodeHasBeenSet() const
{
    return m_productCodeHasBeenSet;
}

string QueryPolicyProductListByCodeRequest::GetProductName() const
{
    return m_productName;
}

void QueryPolicyProductListByCodeRequest::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool QueryPolicyProductListByCodeRequest::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

string QueryPolicyProductListByCodeRequest::GetSubProductCode() const
{
    return m_subProductCode;
}

void QueryPolicyProductListByCodeRequest::SetSubProductCode(const string& _subProductCode)
{
    m_subProductCode = _subProductCode;
    m_subProductCodeHasBeenSet = true;
}

bool QueryPolicyProductListByCodeRequest::SubProductCodeHasBeenSet() const
{
    return m_subProductCodeHasBeenSet;
}

string QueryPolicyProductListByCodeRequest::GetSubProductName() const
{
    return m_subProductName;
}

void QueryPolicyProductListByCodeRequest::SetSubProductName(const string& _subProductName)
{
    m_subProductName = _subProductName;
    m_subProductNameHasBeenSet = true;
}

bool QueryPolicyProductListByCodeRequest::SubProductNameHasBeenSet() const
{
    return m_subProductNameHasBeenSet;
}

uint64_t QueryPolicyProductListByCodeRequest::GetPage() const
{
    return m_page;
}

void QueryPolicyProductListByCodeRequest::SetPage(const uint64_t& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool QueryPolicyProductListByCodeRequest::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

uint64_t QueryPolicyProductListByCodeRequest::GetPageSize() const
{
    return m_pageSize;
}

void QueryPolicyProductListByCodeRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool QueryPolicyProductListByCodeRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}


