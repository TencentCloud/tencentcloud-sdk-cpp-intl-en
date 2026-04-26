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

#include <tencentcloud/billing/v20180709/model/ResourceSpuSet.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

ResourceSpuSet::ResourceSpuSet() :
    m_spuNameZhHasBeenSet(false),
    m_spuNameEnHasBeenSet(false),
    m_categoryNameZhHasBeenSet(false),
    m_categoryNameEnHasBeenSet(false),
    m_businessCodeHasBeenSet(false),
    m_businessNameZhHasBeenSet(false),
    m_businessNameEnHasBeenSet(false),
    m_productCodeHasBeenSet(false),
    m_productNameZhHasBeenSet(false),
    m_productNameEnHasBeenSet(false),
    m_componentCodeHasBeenSet(false),
    m_componentNameZhHasBeenSet(false),
    m_componentNameEnHasBeenSet(false),
    m_itemCodeHasBeenSet(false),
    m_itemNameZhHasBeenSet(false),
    m_itemNameEnHasBeenSet(false)
{
}

CoreInternalOutcome ResourceSpuSet::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SpuNameZh") && !value["SpuNameZh"].IsNull())
    {
        if (!value["SpuNameZh"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceSpuSet.SpuNameZh` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spuNameZh = string(value["SpuNameZh"].GetString());
        m_spuNameZhHasBeenSet = true;
    }

    if (value.HasMember("SpuNameEn") && !value["SpuNameEn"].IsNull())
    {
        if (!value["SpuNameEn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceSpuSet.SpuNameEn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spuNameEn = string(value["SpuNameEn"].GetString());
        m_spuNameEnHasBeenSet = true;
    }

    if (value.HasMember("CategoryNameZh") && !value["CategoryNameZh"].IsNull())
    {
        if (!value["CategoryNameZh"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceSpuSet.CategoryNameZh` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_categoryNameZh = string(value["CategoryNameZh"].GetString());
        m_categoryNameZhHasBeenSet = true;
    }

    if (value.HasMember("CategoryNameEn") && !value["CategoryNameEn"].IsNull())
    {
        if (!value["CategoryNameEn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceSpuSet.CategoryNameEn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_categoryNameEn = string(value["CategoryNameEn"].GetString());
        m_categoryNameEnHasBeenSet = true;
    }

    if (value.HasMember("BusinessCode") && !value["BusinessCode"].IsNull())
    {
        if (!value["BusinessCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceSpuSet.BusinessCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessCode = string(value["BusinessCode"].GetString());
        m_businessCodeHasBeenSet = true;
    }

    if (value.HasMember("BusinessNameZh") && !value["BusinessNameZh"].IsNull())
    {
        if (!value["BusinessNameZh"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceSpuSet.BusinessNameZh` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessNameZh = string(value["BusinessNameZh"].GetString());
        m_businessNameZhHasBeenSet = true;
    }

    if (value.HasMember("BusinessNameEn") && !value["BusinessNameEn"].IsNull())
    {
        if (!value["BusinessNameEn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceSpuSet.BusinessNameEn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessNameEn = string(value["BusinessNameEn"].GetString());
        m_businessNameEnHasBeenSet = true;
    }

    if (value.HasMember("ProductCode") && !value["ProductCode"].IsNull())
    {
        if (!value["ProductCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceSpuSet.ProductCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productCode = string(value["ProductCode"].GetString());
        m_productCodeHasBeenSet = true;
    }

    if (value.HasMember("ProductNameZh") && !value["ProductNameZh"].IsNull())
    {
        if (!value["ProductNameZh"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceSpuSet.ProductNameZh` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productNameZh = string(value["ProductNameZh"].GetString());
        m_productNameZhHasBeenSet = true;
    }

    if (value.HasMember("ProductNameEn") && !value["ProductNameEn"].IsNull())
    {
        if (!value["ProductNameEn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceSpuSet.ProductNameEn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productNameEn = string(value["ProductNameEn"].GetString());
        m_productNameEnHasBeenSet = true;
    }

    if (value.HasMember("ComponentCode") && !value["ComponentCode"].IsNull())
    {
        if (!value["ComponentCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceSpuSet.ComponentCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_componentCode = string(value["ComponentCode"].GetString());
        m_componentCodeHasBeenSet = true;
    }

    if (value.HasMember("ComponentNameZh") && !value["ComponentNameZh"].IsNull())
    {
        if (!value["ComponentNameZh"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceSpuSet.ComponentNameZh` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_componentNameZh = string(value["ComponentNameZh"].GetString());
        m_componentNameZhHasBeenSet = true;
    }

    if (value.HasMember("ComponentNameEn") && !value["ComponentNameEn"].IsNull())
    {
        if (!value["ComponentNameEn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceSpuSet.ComponentNameEn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_componentNameEn = string(value["ComponentNameEn"].GetString());
        m_componentNameEnHasBeenSet = true;
    }

    if (value.HasMember("ItemCode") && !value["ItemCode"].IsNull())
    {
        if (!value["ItemCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceSpuSet.ItemCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itemCode = string(value["ItemCode"].GetString());
        m_itemCodeHasBeenSet = true;
    }

    if (value.HasMember("ItemNameZh") && !value["ItemNameZh"].IsNull())
    {
        if (!value["ItemNameZh"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceSpuSet.ItemNameZh` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itemNameZh = string(value["ItemNameZh"].GetString());
        m_itemNameZhHasBeenSet = true;
    }

    if (value.HasMember("ItemNameEn") && !value["ItemNameEn"].IsNull())
    {
        if (!value["ItemNameEn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceSpuSet.ItemNameEn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itemNameEn = string(value["ItemNameEn"].GetString());
        m_itemNameEnHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceSpuSet::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_spuNameZhHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpuNameZh";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spuNameZh.c_str(), allocator).Move(), allocator);
    }

    if (m_spuNameEnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpuNameEn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spuNameEn.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryNameZhHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryNameZh";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_categoryNameZh.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryNameEnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryNameEn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_categoryNameEn.c_str(), allocator).Move(), allocator);
    }

    if (m_businessCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessCode.c_str(), allocator).Move(), allocator);
    }

    if (m_businessNameZhHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessNameZh";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessNameZh.c_str(), allocator).Move(), allocator);
    }

    if (m_businessNameEnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessNameEn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessNameEn.c_str(), allocator).Move(), allocator);
    }

    if (m_productCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productCode.c_str(), allocator).Move(), allocator);
    }

    if (m_productNameZhHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductNameZh";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productNameZh.c_str(), allocator).Move(), allocator);
    }

    if (m_productNameEnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductNameEn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productNameEn.c_str(), allocator).Move(), allocator);
    }

    if (m_componentCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_componentCode.c_str(), allocator).Move(), allocator);
    }

    if (m_componentNameZhHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentNameZh";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_componentNameZh.c_str(), allocator).Move(), allocator);
    }

    if (m_componentNameEnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentNameEn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_componentNameEn.c_str(), allocator).Move(), allocator);
    }

    if (m_itemCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_itemCode.c_str(), allocator).Move(), allocator);
    }

    if (m_itemNameZhHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemNameZh";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_itemNameZh.c_str(), allocator).Move(), allocator);
    }

    if (m_itemNameEnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemNameEn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_itemNameEn.c_str(), allocator).Move(), allocator);
    }

}


string ResourceSpuSet::GetSpuNameZh() const
{
    return m_spuNameZh;
}

void ResourceSpuSet::SetSpuNameZh(const string& _spuNameZh)
{
    m_spuNameZh = _spuNameZh;
    m_spuNameZhHasBeenSet = true;
}

bool ResourceSpuSet::SpuNameZhHasBeenSet() const
{
    return m_spuNameZhHasBeenSet;
}

string ResourceSpuSet::GetSpuNameEn() const
{
    return m_spuNameEn;
}

void ResourceSpuSet::SetSpuNameEn(const string& _spuNameEn)
{
    m_spuNameEn = _spuNameEn;
    m_spuNameEnHasBeenSet = true;
}

bool ResourceSpuSet::SpuNameEnHasBeenSet() const
{
    return m_spuNameEnHasBeenSet;
}

string ResourceSpuSet::GetCategoryNameZh() const
{
    return m_categoryNameZh;
}

void ResourceSpuSet::SetCategoryNameZh(const string& _categoryNameZh)
{
    m_categoryNameZh = _categoryNameZh;
    m_categoryNameZhHasBeenSet = true;
}

bool ResourceSpuSet::CategoryNameZhHasBeenSet() const
{
    return m_categoryNameZhHasBeenSet;
}

string ResourceSpuSet::GetCategoryNameEn() const
{
    return m_categoryNameEn;
}

void ResourceSpuSet::SetCategoryNameEn(const string& _categoryNameEn)
{
    m_categoryNameEn = _categoryNameEn;
    m_categoryNameEnHasBeenSet = true;
}

bool ResourceSpuSet::CategoryNameEnHasBeenSet() const
{
    return m_categoryNameEnHasBeenSet;
}

string ResourceSpuSet::GetBusinessCode() const
{
    return m_businessCode;
}

void ResourceSpuSet::SetBusinessCode(const string& _businessCode)
{
    m_businessCode = _businessCode;
    m_businessCodeHasBeenSet = true;
}

bool ResourceSpuSet::BusinessCodeHasBeenSet() const
{
    return m_businessCodeHasBeenSet;
}

string ResourceSpuSet::GetBusinessNameZh() const
{
    return m_businessNameZh;
}

void ResourceSpuSet::SetBusinessNameZh(const string& _businessNameZh)
{
    m_businessNameZh = _businessNameZh;
    m_businessNameZhHasBeenSet = true;
}

bool ResourceSpuSet::BusinessNameZhHasBeenSet() const
{
    return m_businessNameZhHasBeenSet;
}

string ResourceSpuSet::GetBusinessNameEn() const
{
    return m_businessNameEn;
}

void ResourceSpuSet::SetBusinessNameEn(const string& _businessNameEn)
{
    m_businessNameEn = _businessNameEn;
    m_businessNameEnHasBeenSet = true;
}

bool ResourceSpuSet::BusinessNameEnHasBeenSet() const
{
    return m_businessNameEnHasBeenSet;
}

string ResourceSpuSet::GetProductCode() const
{
    return m_productCode;
}

void ResourceSpuSet::SetProductCode(const string& _productCode)
{
    m_productCode = _productCode;
    m_productCodeHasBeenSet = true;
}

bool ResourceSpuSet::ProductCodeHasBeenSet() const
{
    return m_productCodeHasBeenSet;
}

string ResourceSpuSet::GetProductNameZh() const
{
    return m_productNameZh;
}

void ResourceSpuSet::SetProductNameZh(const string& _productNameZh)
{
    m_productNameZh = _productNameZh;
    m_productNameZhHasBeenSet = true;
}

bool ResourceSpuSet::ProductNameZhHasBeenSet() const
{
    return m_productNameZhHasBeenSet;
}

string ResourceSpuSet::GetProductNameEn() const
{
    return m_productNameEn;
}

void ResourceSpuSet::SetProductNameEn(const string& _productNameEn)
{
    m_productNameEn = _productNameEn;
    m_productNameEnHasBeenSet = true;
}

bool ResourceSpuSet::ProductNameEnHasBeenSet() const
{
    return m_productNameEnHasBeenSet;
}

string ResourceSpuSet::GetComponentCode() const
{
    return m_componentCode;
}

void ResourceSpuSet::SetComponentCode(const string& _componentCode)
{
    m_componentCode = _componentCode;
    m_componentCodeHasBeenSet = true;
}

bool ResourceSpuSet::ComponentCodeHasBeenSet() const
{
    return m_componentCodeHasBeenSet;
}

string ResourceSpuSet::GetComponentNameZh() const
{
    return m_componentNameZh;
}

void ResourceSpuSet::SetComponentNameZh(const string& _componentNameZh)
{
    m_componentNameZh = _componentNameZh;
    m_componentNameZhHasBeenSet = true;
}

bool ResourceSpuSet::ComponentNameZhHasBeenSet() const
{
    return m_componentNameZhHasBeenSet;
}

string ResourceSpuSet::GetComponentNameEn() const
{
    return m_componentNameEn;
}

void ResourceSpuSet::SetComponentNameEn(const string& _componentNameEn)
{
    m_componentNameEn = _componentNameEn;
    m_componentNameEnHasBeenSet = true;
}

bool ResourceSpuSet::ComponentNameEnHasBeenSet() const
{
    return m_componentNameEnHasBeenSet;
}

string ResourceSpuSet::GetItemCode() const
{
    return m_itemCode;
}

void ResourceSpuSet::SetItemCode(const string& _itemCode)
{
    m_itemCode = _itemCode;
    m_itemCodeHasBeenSet = true;
}

bool ResourceSpuSet::ItemCodeHasBeenSet() const
{
    return m_itemCodeHasBeenSet;
}

string ResourceSpuSet::GetItemNameZh() const
{
    return m_itemNameZh;
}

void ResourceSpuSet::SetItemNameZh(const string& _itemNameZh)
{
    m_itemNameZh = _itemNameZh;
    m_itemNameZhHasBeenSet = true;
}

bool ResourceSpuSet::ItemNameZhHasBeenSet() const
{
    return m_itemNameZhHasBeenSet;
}

string ResourceSpuSet::GetItemNameEn() const
{
    return m_itemNameEn;
}

void ResourceSpuSet::SetItemNameEn(const string& _itemNameEn)
{
    m_itemNameEn = _itemNameEn;
    m_itemNameEnHasBeenSet = true;
}

bool ResourceSpuSet::ItemNameEnHasBeenSet() const
{
    return m_itemNameEnHasBeenSet;
}

