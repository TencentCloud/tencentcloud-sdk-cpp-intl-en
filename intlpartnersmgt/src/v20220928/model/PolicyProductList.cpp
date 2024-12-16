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

#include <tencentcloud/intlpartnersmgt/v20220928/model/PolicyProductList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Intlpartnersmgt::V20220928::Model;
using namespace std;

PolicyProductList::PolicyProductList() :
    m_policyCodeHasBeenSet(false),
    m_productCodeHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_subProductCodeHasBeenSet(false),
    m_subProductNameHasBeenSet(false),
    m_componentTypeCodeHasBeenSet(false),
    m_componentTypeNameHasBeenSet(false),
    m_componentCodeHasBeenSet(false),
    m_componentNameHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_endDateHasBeenSet(false)
{
}

CoreInternalOutcome PolicyProductList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PolicyCode") && !value["PolicyCode"].IsNull())
    {
        if (!value["PolicyCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyProductList.PolicyCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyCode = string(value["PolicyCode"].GetString());
        m_policyCodeHasBeenSet = true;
    }

    if (value.HasMember("ProductCode") && !value["ProductCode"].IsNull())
    {
        if (!value["ProductCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyProductList.ProductCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productCode = string(value["ProductCode"].GetString());
        m_productCodeHasBeenSet = true;
    }

    if (value.HasMember("ProductName") && !value["ProductName"].IsNull())
    {
        if (!value["ProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyProductList.ProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productName = string(value["ProductName"].GetString());
        m_productNameHasBeenSet = true;
    }

    if (value.HasMember("SubProductCode") && !value["SubProductCode"].IsNull())
    {
        if (!value["SubProductCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyProductList.SubProductCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subProductCode = string(value["SubProductCode"].GetString());
        m_subProductCodeHasBeenSet = true;
    }

    if (value.HasMember("SubProductName") && !value["SubProductName"].IsNull())
    {
        if (!value["SubProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyProductList.SubProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subProductName = string(value["SubProductName"].GetString());
        m_subProductNameHasBeenSet = true;
    }

    if (value.HasMember("ComponentTypeCode") && !value["ComponentTypeCode"].IsNull())
    {
        if (!value["ComponentTypeCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyProductList.ComponentTypeCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_componentTypeCode = string(value["ComponentTypeCode"].GetString());
        m_componentTypeCodeHasBeenSet = true;
    }

    if (value.HasMember("ComponentTypeName") && !value["ComponentTypeName"].IsNull())
    {
        if (!value["ComponentTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyProductList.ComponentTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_componentTypeName = string(value["ComponentTypeName"].GetString());
        m_componentTypeNameHasBeenSet = true;
    }

    if (value.HasMember("ComponentCode") && !value["ComponentCode"].IsNull())
    {
        if (!value["ComponentCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyProductList.ComponentCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_componentCode = string(value["ComponentCode"].GetString());
        m_componentCodeHasBeenSet = true;
    }

    if (value.HasMember("ComponentName") && !value["ComponentName"].IsNull())
    {
        if (!value["ComponentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyProductList.ComponentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_componentName = string(value["ComponentName"].GetString());
        m_componentNameHasBeenSet = true;
    }

    if (value.HasMember("StartDate") && !value["StartDate"].IsNull())
    {
        if (!value["StartDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyProductList.StartDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startDate = string(value["StartDate"].GetString());
        m_startDateHasBeenSet = true;
    }

    if (value.HasMember("EndDate") && !value["EndDate"].IsNull())
    {
        if (!value["EndDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyProductList.EndDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endDate = string(value["EndDate"].GetString());
        m_endDateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PolicyProductList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_policyCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyCode.c_str(), allocator).Move(), allocator);
    }

    if (m_productCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productCode.c_str(), allocator).Move(), allocator);
    }

    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productName.c_str(), allocator).Move(), allocator);
    }

    if (m_subProductCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubProductCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subProductCode.c_str(), allocator).Move(), allocator);
    }

    if (m_subProductNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubProductName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subProductName.c_str(), allocator).Move(), allocator);
    }

    if (m_componentTypeCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentTypeCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_componentTypeCode.c_str(), allocator).Move(), allocator);
    }

    if (m_componentTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_componentTypeName.c_str(), allocator).Move(), allocator);
    }

    if (m_componentCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_componentCode.c_str(), allocator).Move(), allocator);
    }

    if (m_componentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_componentName.c_str(), allocator).Move(), allocator);
    }

    if (m_startDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startDate.c_str(), allocator).Move(), allocator);
    }

    if (m_endDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endDate.c_str(), allocator).Move(), allocator);
    }

}


string PolicyProductList::GetPolicyCode() const
{
    return m_policyCode;
}

void PolicyProductList::SetPolicyCode(const string& _policyCode)
{
    m_policyCode = _policyCode;
    m_policyCodeHasBeenSet = true;
}

bool PolicyProductList::PolicyCodeHasBeenSet() const
{
    return m_policyCodeHasBeenSet;
}

string PolicyProductList::GetProductCode() const
{
    return m_productCode;
}

void PolicyProductList::SetProductCode(const string& _productCode)
{
    m_productCode = _productCode;
    m_productCodeHasBeenSet = true;
}

bool PolicyProductList::ProductCodeHasBeenSet() const
{
    return m_productCodeHasBeenSet;
}

string PolicyProductList::GetProductName() const
{
    return m_productName;
}

void PolicyProductList::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool PolicyProductList::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

string PolicyProductList::GetSubProductCode() const
{
    return m_subProductCode;
}

void PolicyProductList::SetSubProductCode(const string& _subProductCode)
{
    m_subProductCode = _subProductCode;
    m_subProductCodeHasBeenSet = true;
}

bool PolicyProductList::SubProductCodeHasBeenSet() const
{
    return m_subProductCodeHasBeenSet;
}

string PolicyProductList::GetSubProductName() const
{
    return m_subProductName;
}

void PolicyProductList::SetSubProductName(const string& _subProductName)
{
    m_subProductName = _subProductName;
    m_subProductNameHasBeenSet = true;
}

bool PolicyProductList::SubProductNameHasBeenSet() const
{
    return m_subProductNameHasBeenSet;
}

string PolicyProductList::GetComponentTypeCode() const
{
    return m_componentTypeCode;
}

void PolicyProductList::SetComponentTypeCode(const string& _componentTypeCode)
{
    m_componentTypeCode = _componentTypeCode;
    m_componentTypeCodeHasBeenSet = true;
}

bool PolicyProductList::ComponentTypeCodeHasBeenSet() const
{
    return m_componentTypeCodeHasBeenSet;
}

string PolicyProductList::GetComponentTypeName() const
{
    return m_componentTypeName;
}

void PolicyProductList::SetComponentTypeName(const string& _componentTypeName)
{
    m_componentTypeName = _componentTypeName;
    m_componentTypeNameHasBeenSet = true;
}

bool PolicyProductList::ComponentTypeNameHasBeenSet() const
{
    return m_componentTypeNameHasBeenSet;
}

string PolicyProductList::GetComponentCode() const
{
    return m_componentCode;
}

void PolicyProductList::SetComponentCode(const string& _componentCode)
{
    m_componentCode = _componentCode;
    m_componentCodeHasBeenSet = true;
}

bool PolicyProductList::ComponentCodeHasBeenSet() const
{
    return m_componentCodeHasBeenSet;
}

string PolicyProductList::GetComponentName() const
{
    return m_componentName;
}

void PolicyProductList::SetComponentName(const string& _componentName)
{
    m_componentName = _componentName;
    m_componentNameHasBeenSet = true;
}

bool PolicyProductList::ComponentNameHasBeenSet() const
{
    return m_componentNameHasBeenSet;
}

string PolicyProductList::GetStartDate() const
{
    return m_startDate;
}

void PolicyProductList::SetStartDate(const string& _startDate)
{
    m_startDate = _startDate;
    m_startDateHasBeenSet = true;
}

bool PolicyProductList::StartDateHasBeenSet() const
{
    return m_startDateHasBeenSet;
}

string PolicyProductList::GetEndDate() const
{
    return m_endDate;
}

void PolicyProductList::SetEndDate(const string& _endDate)
{
    m_endDate = _endDate;
    m_endDateHasBeenSet = true;
}

bool PolicyProductList::EndDateHasBeenSet() const
{
    return m_endDateHasBeenSet;
}

