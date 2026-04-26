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

#include <tencentcloud/billing/v20180709/model/DescribeCPQBillingMappingRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

DescribeCPQBillingMappingRequest::DescribeCPQBillingMappingRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_spuNameHasBeenSet(false),
    m_categoryNameHasBeenSet(false),
    m_businessNameHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_componentNameHasBeenSet(false),
    m_itemNameHasBeenSet(false),
    m_businessCodeHasBeenSet(false),
    m_productCodeHasBeenSet(false),
    m_componentCodeHasBeenSet(false),
    m_itemCodeHasBeenSet(false)
{
}

string DescribeCPQBillingMappingRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_offset.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_limit.c_str(), allocator).Move(), allocator);
    }

    if (m_spuNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpuName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_spuName.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_categoryName.c_str(), allocator).Move(), allocator);
    }

    if (m_businessNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_businessName.c_str(), allocator).Move(), allocator);
    }

    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productName.c_str(), allocator).Move(), allocator);
    }

    if (m_componentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_componentName.c_str(), allocator).Move(), allocator);
    }

    if (m_itemNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_itemName.c_str(), allocator).Move(), allocator);
    }

    if (m_businessCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_businessCode.c_str(), allocator).Move(), allocator);
    }

    if (m_productCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productCode.c_str(), allocator).Move(), allocator);
    }

    if (m_componentCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_componentCode.c_str(), allocator).Move(), allocator);
    }

    if (m_itemCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_itemCode.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCPQBillingMappingRequest::GetOffset() const
{
    return m_offset;
}

void DescribeCPQBillingMappingRequest::SetOffset(const string& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeCPQBillingMappingRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeCPQBillingMappingRequest::GetLimit() const
{
    return m_limit;
}

void DescribeCPQBillingMappingRequest::SetLimit(const string& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeCPQBillingMappingRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeCPQBillingMappingRequest::GetSpuName() const
{
    return m_spuName;
}

void DescribeCPQBillingMappingRequest::SetSpuName(const string& _spuName)
{
    m_spuName = _spuName;
    m_spuNameHasBeenSet = true;
}

bool DescribeCPQBillingMappingRequest::SpuNameHasBeenSet() const
{
    return m_spuNameHasBeenSet;
}

string DescribeCPQBillingMappingRequest::GetCategoryName() const
{
    return m_categoryName;
}

void DescribeCPQBillingMappingRequest::SetCategoryName(const string& _categoryName)
{
    m_categoryName = _categoryName;
    m_categoryNameHasBeenSet = true;
}

bool DescribeCPQBillingMappingRequest::CategoryNameHasBeenSet() const
{
    return m_categoryNameHasBeenSet;
}

string DescribeCPQBillingMappingRequest::GetBusinessName() const
{
    return m_businessName;
}

void DescribeCPQBillingMappingRequest::SetBusinessName(const string& _businessName)
{
    m_businessName = _businessName;
    m_businessNameHasBeenSet = true;
}

bool DescribeCPQBillingMappingRequest::BusinessNameHasBeenSet() const
{
    return m_businessNameHasBeenSet;
}

string DescribeCPQBillingMappingRequest::GetProductName() const
{
    return m_productName;
}

void DescribeCPQBillingMappingRequest::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool DescribeCPQBillingMappingRequest::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

string DescribeCPQBillingMappingRequest::GetComponentName() const
{
    return m_componentName;
}

void DescribeCPQBillingMappingRequest::SetComponentName(const string& _componentName)
{
    m_componentName = _componentName;
    m_componentNameHasBeenSet = true;
}

bool DescribeCPQBillingMappingRequest::ComponentNameHasBeenSet() const
{
    return m_componentNameHasBeenSet;
}

string DescribeCPQBillingMappingRequest::GetItemName() const
{
    return m_itemName;
}

void DescribeCPQBillingMappingRequest::SetItemName(const string& _itemName)
{
    m_itemName = _itemName;
    m_itemNameHasBeenSet = true;
}

bool DescribeCPQBillingMappingRequest::ItemNameHasBeenSet() const
{
    return m_itemNameHasBeenSet;
}

string DescribeCPQBillingMappingRequest::GetBusinessCode() const
{
    return m_businessCode;
}

void DescribeCPQBillingMappingRequest::SetBusinessCode(const string& _businessCode)
{
    m_businessCode = _businessCode;
    m_businessCodeHasBeenSet = true;
}

bool DescribeCPQBillingMappingRequest::BusinessCodeHasBeenSet() const
{
    return m_businessCodeHasBeenSet;
}

string DescribeCPQBillingMappingRequest::GetProductCode() const
{
    return m_productCode;
}

void DescribeCPQBillingMappingRequest::SetProductCode(const string& _productCode)
{
    m_productCode = _productCode;
    m_productCodeHasBeenSet = true;
}

bool DescribeCPQBillingMappingRequest::ProductCodeHasBeenSet() const
{
    return m_productCodeHasBeenSet;
}

string DescribeCPQBillingMappingRequest::GetComponentCode() const
{
    return m_componentCode;
}

void DescribeCPQBillingMappingRequest::SetComponentCode(const string& _componentCode)
{
    m_componentCode = _componentCode;
    m_componentCodeHasBeenSet = true;
}

bool DescribeCPQBillingMappingRequest::ComponentCodeHasBeenSet() const
{
    return m_componentCodeHasBeenSet;
}

string DescribeCPQBillingMappingRequest::GetItemCode() const
{
    return m_itemCode;
}

void DescribeCPQBillingMappingRequest::SetItemCode(const string& _itemCode)
{
    m_itemCode = _itemCode;
    m_itemCodeHasBeenSet = true;
}

bool DescribeCPQBillingMappingRequest::ItemCodeHasBeenSet() const
{
    return m_itemCodeHasBeenSet;
}


