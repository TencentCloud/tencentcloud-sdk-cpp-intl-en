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

#include <tencentcloud/intlpartnersmgt/v20220928/model/CustomerBillDetailData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Intlpartnersmgt::V20220928::Model;
using namespace std;

CustomerBillDetailData::CustomerBillDetailData() :
    m_payerAccountIdHasBeenSet(false),
    m_ownerAccountIdHasBeenSet(false),
    m_operatorAccountIdHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_billingModeHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_subProductNameHasBeenSet(false),
    m_transactionTypeHasBeenSet(false),
    m_transactionIdHasBeenSet(false),
    m_transactionTimeHasBeenSet(false),
    m_usageStartTimeHasBeenSet(false),
    m_usageEndTimeHasBeenSet(false),
    m_componentTypeHasBeenSet(false),
    m_componentNameHasBeenSet(false),
    m_componentListPriceHasBeenSet(false),
    m_componentPriceMeasurementUnitHasBeenSet(false),
    m_componentUsageHasBeenSet(false),
    m_componentUsageUnitHasBeenSet(false),
    m_usageDurationHasBeenSet(false),
    m_durationUnitHasBeenSet(false),
    m_originalCostHasBeenSet(false),
    m_currencyHasBeenSet(false),
    m_totalCostHasBeenSet(false),
    m_idHasBeenSet(false)
{
}

CoreInternalOutcome CustomerBillDetailData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PayerAccountId") && !value["PayerAccountId"].IsNull())
    {
        if (!value["PayerAccountId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerBillDetailData.PayerAccountId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_payerAccountId = value["PayerAccountId"].GetInt64();
        m_payerAccountIdHasBeenSet = true;
    }

    if (value.HasMember("OwnerAccountId") && !value["OwnerAccountId"].IsNull())
    {
        if (!value["OwnerAccountId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerBillDetailData.OwnerAccountId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ownerAccountId = value["OwnerAccountId"].GetInt64();
        m_ownerAccountIdHasBeenSet = true;
    }

    if (value.HasMember("OperatorAccountId") && !value["OperatorAccountId"].IsNull())
    {
        if (!value["OperatorAccountId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerBillDetailData.OperatorAccountId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_operatorAccountId = value["OperatorAccountId"].GetInt64();
        m_operatorAccountIdHasBeenSet = true;
    }

    if (value.HasMember("ProductName") && !value["ProductName"].IsNull())
    {
        if (!value["ProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerBillDetailData.ProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productName = string(value["ProductName"].GetString());
        m_productNameHasBeenSet = true;
    }

    if (value.HasMember("BillingMode") && !value["BillingMode"].IsNull())
    {
        if (!value["BillingMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerBillDetailData.BillingMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billingMode = string(value["BillingMode"].GetString());
        m_billingModeHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerBillDetailData.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerBillDetailData.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("AvailabilityZone") && !value["AvailabilityZone"].IsNull())
    {
        if (!value["AvailabilityZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerBillDetailData.AvailabilityZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_availabilityZone = string(value["AvailabilityZone"].GetString());
        m_availabilityZoneHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerBillDetailData.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerBillDetailData.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("SubProductName") && !value["SubProductName"].IsNull())
    {
        if (!value["SubProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerBillDetailData.SubProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subProductName = string(value["SubProductName"].GetString());
        m_subProductNameHasBeenSet = true;
    }

    if (value.HasMember("TransactionType") && !value["TransactionType"].IsNull())
    {
        if (!value["TransactionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerBillDetailData.TransactionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transactionType = string(value["TransactionType"].GetString());
        m_transactionTypeHasBeenSet = true;
    }

    if (value.HasMember("TransactionId") && !value["TransactionId"].IsNull())
    {
        if (!value["TransactionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerBillDetailData.TransactionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transactionId = string(value["TransactionId"].GetString());
        m_transactionIdHasBeenSet = true;
    }

    if (value.HasMember("TransactionTime") && !value["TransactionTime"].IsNull())
    {
        if (!value["TransactionTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerBillDetailData.TransactionTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transactionTime = string(value["TransactionTime"].GetString());
        m_transactionTimeHasBeenSet = true;
    }

    if (value.HasMember("UsageStartTime") && !value["UsageStartTime"].IsNull())
    {
        if (!value["UsageStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerBillDetailData.UsageStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_usageStartTime = string(value["UsageStartTime"].GetString());
        m_usageStartTimeHasBeenSet = true;
    }

    if (value.HasMember("UsageEndTime") && !value["UsageEndTime"].IsNull())
    {
        if (!value["UsageEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerBillDetailData.UsageEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_usageEndTime = string(value["UsageEndTime"].GetString());
        m_usageEndTimeHasBeenSet = true;
    }

    if (value.HasMember("ComponentType") && !value["ComponentType"].IsNull())
    {
        if (!value["ComponentType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerBillDetailData.ComponentType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_componentType = string(value["ComponentType"].GetString());
        m_componentTypeHasBeenSet = true;
    }

    if (value.HasMember("ComponentName") && !value["ComponentName"].IsNull())
    {
        if (!value["ComponentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerBillDetailData.ComponentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_componentName = string(value["ComponentName"].GetString());
        m_componentNameHasBeenSet = true;
    }

    if (value.HasMember("ComponentListPrice") && !value["ComponentListPrice"].IsNull())
    {
        if (!value["ComponentListPrice"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerBillDetailData.ComponentListPrice` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_componentListPrice = string(value["ComponentListPrice"].GetString());
        m_componentListPriceHasBeenSet = true;
    }

    if (value.HasMember("ComponentPriceMeasurementUnit") && !value["ComponentPriceMeasurementUnit"].IsNull())
    {
        if (!value["ComponentPriceMeasurementUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerBillDetailData.ComponentPriceMeasurementUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_componentPriceMeasurementUnit = string(value["ComponentPriceMeasurementUnit"].GetString());
        m_componentPriceMeasurementUnitHasBeenSet = true;
    }

    if (value.HasMember("ComponentUsage") && !value["ComponentUsage"].IsNull())
    {
        if (!value["ComponentUsage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerBillDetailData.ComponentUsage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_componentUsage = string(value["ComponentUsage"].GetString());
        m_componentUsageHasBeenSet = true;
    }

    if (value.HasMember("ComponentUsageUnit") && !value["ComponentUsageUnit"].IsNull())
    {
        if (!value["ComponentUsageUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerBillDetailData.ComponentUsageUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_componentUsageUnit = string(value["ComponentUsageUnit"].GetString());
        m_componentUsageUnitHasBeenSet = true;
    }

    if (value.HasMember("UsageDuration") && !value["UsageDuration"].IsNull())
    {
        if (!value["UsageDuration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerBillDetailData.UsageDuration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_usageDuration = string(value["UsageDuration"].GetString());
        m_usageDurationHasBeenSet = true;
    }

    if (value.HasMember("DurationUnit") && !value["DurationUnit"].IsNull())
    {
        if (!value["DurationUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerBillDetailData.DurationUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_durationUnit = string(value["DurationUnit"].GetString());
        m_durationUnitHasBeenSet = true;
    }

    if (value.HasMember("OriginalCost") && !value["OriginalCost"].IsNull())
    {
        if (!value["OriginalCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerBillDetailData.OriginalCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originalCost = string(value["OriginalCost"].GetString());
        m_originalCostHasBeenSet = true;
    }

    if (value.HasMember("Currency") && !value["Currency"].IsNull())
    {
        if (!value["Currency"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerBillDetailData.Currency` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currency = string(value["Currency"].GetString());
        m_currencyHasBeenSet = true;
    }

    if (value.HasMember("TotalCost") && !value["TotalCost"].IsNull())
    {
        if (!value["TotalCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerBillDetailData.TotalCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalCost = string(value["TotalCost"].GetString());
        m_totalCostHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerBillDetailData.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomerBillDetailData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_payerAccountIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayerAccountId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payerAccountId, allocator);
    }

    if (m_ownerAccountIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerAccountId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ownerAccountId, allocator);
    }

    if (m_operatorAccountIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatorAccountId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_operatorAccountId, allocator);
    }

    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productName.c_str(), allocator).Move(), allocator);
    }

    if (m_billingModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_billingMode.c_str(), allocator).Move(), allocator);
    }

    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_availabilityZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailabilityZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_availabilityZone.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_subProductNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubProductName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subProductName.c_str(), allocator).Move(), allocator);
    }

    if (m_transactionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransactionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transactionType.c_str(), allocator).Move(), allocator);
    }

    if (m_transactionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransactionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transactionId.c_str(), allocator).Move(), allocator);
    }

    if (m_transactionTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransactionTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transactionTime.c_str(), allocator).Move(), allocator);
    }

    if (m_usageStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsageStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_usageStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_usageEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsageEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_usageEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_componentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_componentType.c_str(), allocator).Move(), allocator);
    }

    if (m_componentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_componentName.c_str(), allocator).Move(), allocator);
    }

    if (m_componentListPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentListPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_componentListPrice.c_str(), allocator).Move(), allocator);
    }

    if (m_componentPriceMeasurementUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentPriceMeasurementUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_componentPriceMeasurementUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_componentUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_componentUsage.c_str(), allocator).Move(), allocator);
    }

    if (m_componentUsageUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentUsageUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_componentUsageUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_usageDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsageDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_usageDuration.c_str(), allocator).Move(), allocator);
    }

    if (m_durationUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DurationUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_durationUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_originalCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originalCost.c_str(), allocator).Move(), allocator);
    }

    if (m_currencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Currency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currency.c_str(), allocator).Move(), allocator);
    }

    if (m_totalCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalCost.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

}


int64_t CustomerBillDetailData::GetPayerAccountId() const
{
    return m_payerAccountId;
}

void CustomerBillDetailData::SetPayerAccountId(const int64_t& _payerAccountId)
{
    m_payerAccountId = _payerAccountId;
    m_payerAccountIdHasBeenSet = true;
}

bool CustomerBillDetailData::PayerAccountIdHasBeenSet() const
{
    return m_payerAccountIdHasBeenSet;
}

int64_t CustomerBillDetailData::GetOwnerAccountId() const
{
    return m_ownerAccountId;
}

void CustomerBillDetailData::SetOwnerAccountId(const int64_t& _ownerAccountId)
{
    m_ownerAccountId = _ownerAccountId;
    m_ownerAccountIdHasBeenSet = true;
}

bool CustomerBillDetailData::OwnerAccountIdHasBeenSet() const
{
    return m_ownerAccountIdHasBeenSet;
}

int64_t CustomerBillDetailData::GetOperatorAccountId() const
{
    return m_operatorAccountId;
}

void CustomerBillDetailData::SetOperatorAccountId(const int64_t& _operatorAccountId)
{
    m_operatorAccountId = _operatorAccountId;
    m_operatorAccountIdHasBeenSet = true;
}

bool CustomerBillDetailData::OperatorAccountIdHasBeenSet() const
{
    return m_operatorAccountIdHasBeenSet;
}

string CustomerBillDetailData::GetProductName() const
{
    return m_productName;
}

void CustomerBillDetailData::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool CustomerBillDetailData::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

string CustomerBillDetailData::GetBillingMode() const
{
    return m_billingMode;
}

void CustomerBillDetailData::SetBillingMode(const string& _billingMode)
{
    m_billingMode = _billingMode;
    m_billingModeHasBeenSet = true;
}

bool CustomerBillDetailData::BillingModeHasBeenSet() const
{
    return m_billingModeHasBeenSet;
}

string CustomerBillDetailData::GetProjectName() const
{
    return m_projectName;
}

void CustomerBillDetailData::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool CustomerBillDetailData::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

string CustomerBillDetailData::GetRegion() const
{
    return m_region;
}

void CustomerBillDetailData::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool CustomerBillDetailData::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string CustomerBillDetailData::GetAvailabilityZone() const
{
    return m_availabilityZone;
}

void CustomerBillDetailData::SetAvailabilityZone(const string& _availabilityZone)
{
    m_availabilityZone = _availabilityZone;
    m_availabilityZoneHasBeenSet = true;
}

bool CustomerBillDetailData::AvailabilityZoneHasBeenSet() const
{
    return m_availabilityZoneHasBeenSet;
}

string CustomerBillDetailData::GetInstanceId() const
{
    return m_instanceId;
}

void CustomerBillDetailData::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CustomerBillDetailData::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CustomerBillDetailData::GetInstanceName() const
{
    return m_instanceName;
}

void CustomerBillDetailData::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool CustomerBillDetailData::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string CustomerBillDetailData::GetSubProductName() const
{
    return m_subProductName;
}

void CustomerBillDetailData::SetSubProductName(const string& _subProductName)
{
    m_subProductName = _subProductName;
    m_subProductNameHasBeenSet = true;
}

bool CustomerBillDetailData::SubProductNameHasBeenSet() const
{
    return m_subProductNameHasBeenSet;
}

string CustomerBillDetailData::GetTransactionType() const
{
    return m_transactionType;
}

void CustomerBillDetailData::SetTransactionType(const string& _transactionType)
{
    m_transactionType = _transactionType;
    m_transactionTypeHasBeenSet = true;
}

bool CustomerBillDetailData::TransactionTypeHasBeenSet() const
{
    return m_transactionTypeHasBeenSet;
}

string CustomerBillDetailData::GetTransactionId() const
{
    return m_transactionId;
}

void CustomerBillDetailData::SetTransactionId(const string& _transactionId)
{
    m_transactionId = _transactionId;
    m_transactionIdHasBeenSet = true;
}

bool CustomerBillDetailData::TransactionIdHasBeenSet() const
{
    return m_transactionIdHasBeenSet;
}

string CustomerBillDetailData::GetTransactionTime() const
{
    return m_transactionTime;
}

void CustomerBillDetailData::SetTransactionTime(const string& _transactionTime)
{
    m_transactionTime = _transactionTime;
    m_transactionTimeHasBeenSet = true;
}

bool CustomerBillDetailData::TransactionTimeHasBeenSet() const
{
    return m_transactionTimeHasBeenSet;
}

string CustomerBillDetailData::GetUsageStartTime() const
{
    return m_usageStartTime;
}

void CustomerBillDetailData::SetUsageStartTime(const string& _usageStartTime)
{
    m_usageStartTime = _usageStartTime;
    m_usageStartTimeHasBeenSet = true;
}

bool CustomerBillDetailData::UsageStartTimeHasBeenSet() const
{
    return m_usageStartTimeHasBeenSet;
}

string CustomerBillDetailData::GetUsageEndTime() const
{
    return m_usageEndTime;
}

void CustomerBillDetailData::SetUsageEndTime(const string& _usageEndTime)
{
    m_usageEndTime = _usageEndTime;
    m_usageEndTimeHasBeenSet = true;
}

bool CustomerBillDetailData::UsageEndTimeHasBeenSet() const
{
    return m_usageEndTimeHasBeenSet;
}

string CustomerBillDetailData::GetComponentType() const
{
    return m_componentType;
}

void CustomerBillDetailData::SetComponentType(const string& _componentType)
{
    m_componentType = _componentType;
    m_componentTypeHasBeenSet = true;
}

bool CustomerBillDetailData::ComponentTypeHasBeenSet() const
{
    return m_componentTypeHasBeenSet;
}

string CustomerBillDetailData::GetComponentName() const
{
    return m_componentName;
}

void CustomerBillDetailData::SetComponentName(const string& _componentName)
{
    m_componentName = _componentName;
    m_componentNameHasBeenSet = true;
}

bool CustomerBillDetailData::ComponentNameHasBeenSet() const
{
    return m_componentNameHasBeenSet;
}

string CustomerBillDetailData::GetComponentListPrice() const
{
    return m_componentListPrice;
}

void CustomerBillDetailData::SetComponentListPrice(const string& _componentListPrice)
{
    m_componentListPrice = _componentListPrice;
    m_componentListPriceHasBeenSet = true;
}

bool CustomerBillDetailData::ComponentListPriceHasBeenSet() const
{
    return m_componentListPriceHasBeenSet;
}

string CustomerBillDetailData::GetComponentPriceMeasurementUnit() const
{
    return m_componentPriceMeasurementUnit;
}

void CustomerBillDetailData::SetComponentPriceMeasurementUnit(const string& _componentPriceMeasurementUnit)
{
    m_componentPriceMeasurementUnit = _componentPriceMeasurementUnit;
    m_componentPriceMeasurementUnitHasBeenSet = true;
}

bool CustomerBillDetailData::ComponentPriceMeasurementUnitHasBeenSet() const
{
    return m_componentPriceMeasurementUnitHasBeenSet;
}

string CustomerBillDetailData::GetComponentUsage() const
{
    return m_componentUsage;
}

void CustomerBillDetailData::SetComponentUsage(const string& _componentUsage)
{
    m_componentUsage = _componentUsage;
    m_componentUsageHasBeenSet = true;
}

bool CustomerBillDetailData::ComponentUsageHasBeenSet() const
{
    return m_componentUsageHasBeenSet;
}

string CustomerBillDetailData::GetComponentUsageUnit() const
{
    return m_componentUsageUnit;
}

void CustomerBillDetailData::SetComponentUsageUnit(const string& _componentUsageUnit)
{
    m_componentUsageUnit = _componentUsageUnit;
    m_componentUsageUnitHasBeenSet = true;
}

bool CustomerBillDetailData::ComponentUsageUnitHasBeenSet() const
{
    return m_componentUsageUnitHasBeenSet;
}

string CustomerBillDetailData::GetUsageDuration() const
{
    return m_usageDuration;
}

void CustomerBillDetailData::SetUsageDuration(const string& _usageDuration)
{
    m_usageDuration = _usageDuration;
    m_usageDurationHasBeenSet = true;
}

bool CustomerBillDetailData::UsageDurationHasBeenSet() const
{
    return m_usageDurationHasBeenSet;
}

string CustomerBillDetailData::GetDurationUnit() const
{
    return m_durationUnit;
}

void CustomerBillDetailData::SetDurationUnit(const string& _durationUnit)
{
    m_durationUnit = _durationUnit;
    m_durationUnitHasBeenSet = true;
}

bool CustomerBillDetailData::DurationUnitHasBeenSet() const
{
    return m_durationUnitHasBeenSet;
}

string CustomerBillDetailData::GetOriginalCost() const
{
    return m_originalCost;
}

void CustomerBillDetailData::SetOriginalCost(const string& _originalCost)
{
    m_originalCost = _originalCost;
    m_originalCostHasBeenSet = true;
}

bool CustomerBillDetailData::OriginalCostHasBeenSet() const
{
    return m_originalCostHasBeenSet;
}

string CustomerBillDetailData::GetCurrency() const
{
    return m_currency;
}

void CustomerBillDetailData::SetCurrency(const string& _currency)
{
    m_currency = _currency;
    m_currencyHasBeenSet = true;
}

bool CustomerBillDetailData::CurrencyHasBeenSet() const
{
    return m_currencyHasBeenSet;
}

string CustomerBillDetailData::GetTotalCost() const
{
    return m_totalCost;
}

void CustomerBillDetailData::SetTotalCost(const string& _totalCost)
{
    m_totalCost = _totalCost;
    m_totalCostHasBeenSet = true;
}

bool CustomerBillDetailData::TotalCostHasBeenSet() const
{
    return m_totalCostHasBeenSet;
}

string CustomerBillDetailData::GetId() const
{
    return m_id;
}

void CustomerBillDetailData::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool CustomerBillDetailData::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

