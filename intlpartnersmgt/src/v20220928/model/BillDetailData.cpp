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

#include <tencentcloud/intlpartnersmgt/v20220928/model/BillDetailData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Intlpartnersmgt::V20220928::Model;
using namespace std;

BillDetailData::BillDetailData() :
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
    m_discountRateHasBeenSet(false),
    m_currencyHasBeenSet(false),
    m_totalAmountAfterDiscountHasBeenSet(false),
    m_voucherDeductionHasBeenSet(false),
    m_totalCostHasBeenSet(false),
    m_idHasBeenSet(false),
    m_customerDiscountRateHasBeenSet(false)
{
}

CoreInternalOutcome BillDetailData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PayerAccountId") && !value["PayerAccountId"].IsNull())
    {
        if (!value["PayerAccountId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailData.PayerAccountId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_payerAccountId = value["PayerAccountId"].GetInt64();
        m_payerAccountIdHasBeenSet = true;
    }

    if (value.HasMember("OwnerAccountId") && !value["OwnerAccountId"].IsNull())
    {
        if (!value["OwnerAccountId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailData.OwnerAccountId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ownerAccountId = value["OwnerAccountId"].GetInt64();
        m_ownerAccountIdHasBeenSet = true;
    }

    if (value.HasMember("OperatorAccountId") && !value["OperatorAccountId"].IsNull())
    {
        if (!value["OperatorAccountId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailData.OperatorAccountId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_operatorAccountId = value["OperatorAccountId"].GetInt64();
        m_operatorAccountIdHasBeenSet = true;
    }

    if (value.HasMember("ProductName") && !value["ProductName"].IsNull())
    {
        if (!value["ProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailData.ProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productName = string(value["ProductName"].GetString());
        m_productNameHasBeenSet = true;
    }

    if (value.HasMember("BillingMode") && !value["BillingMode"].IsNull())
    {
        if (!value["BillingMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailData.BillingMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billingMode = string(value["BillingMode"].GetString());
        m_billingModeHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailData.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailData.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("AvailabilityZone") && !value["AvailabilityZone"].IsNull())
    {
        if (!value["AvailabilityZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailData.AvailabilityZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_availabilityZone = string(value["AvailabilityZone"].GetString());
        m_availabilityZoneHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailData.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailData.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("SubProductName") && !value["SubProductName"].IsNull())
    {
        if (!value["SubProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailData.SubProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subProductName = string(value["SubProductName"].GetString());
        m_subProductNameHasBeenSet = true;
    }

    if (value.HasMember("TransactionType") && !value["TransactionType"].IsNull())
    {
        if (!value["TransactionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailData.TransactionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transactionType = string(value["TransactionType"].GetString());
        m_transactionTypeHasBeenSet = true;
    }

    if (value.HasMember("TransactionId") && !value["TransactionId"].IsNull())
    {
        if (!value["TransactionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailData.TransactionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transactionId = string(value["TransactionId"].GetString());
        m_transactionIdHasBeenSet = true;
    }

    if (value.HasMember("TransactionTime") && !value["TransactionTime"].IsNull())
    {
        if (!value["TransactionTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailData.TransactionTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transactionTime = string(value["TransactionTime"].GetString());
        m_transactionTimeHasBeenSet = true;
    }

    if (value.HasMember("UsageStartTime") && !value["UsageStartTime"].IsNull())
    {
        if (!value["UsageStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailData.UsageStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_usageStartTime = string(value["UsageStartTime"].GetString());
        m_usageStartTimeHasBeenSet = true;
    }

    if (value.HasMember("UsageEndTime") && !value["UsageEndTime"].IsNull())
    {
        if (!value["UsageEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailData.UsageEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_usageEndTime = string(value["UsageEndTime"].GetString());
        m_usageEndTimeHasBeenSet = true;
    }

    if (value.HasMember("ComponentType") && !value["ComponentType"].IsNull())
    {
        if (!value["ComponentType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailData.ComponentType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_componentType = string(value["ComponentType"].GetString());
        m_componentTypeHasBeenSet = true;
    }

    if (value.HasMember("ComponentName") && !value["ComponentName"].IsNull())
    {
        if (!value["ComponentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailData.ComponentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_componentName = string(value["ComponentName"].GetString());
        m_componentNameHasBeenSet = true;
    }

    if (value.HasMember("ComponentListPrice") && !value["ComponentListPrice"].IsNull())
    {
        if (!value["ComponentListPrice"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailData.ComponentListPrice` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_componentListPrice = string(value["ComponentListPrice"].GetString());
        m_componentListPriceHasBeenSet = true;
    }

    if (value.HasMember("ComponentPriceMeasurementUnit") && !value["ComponentPriceMeasurementUnit"].IsNull())
    {
        if (!value["ComponentPriceMeasurementUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailData.ComponentPriceMeasurementUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_componentPriceMeasurementUnit = string(value["ComponentPriceMeasurementUnit"].GetString());
        m_componentPriceMeasurementUnitHasBeenSet = true;
    }

    if (value.HasMember("ComponentUsage") && !value["ComponentUsage"].IsNull())
    {
        if (!value["ComponentUsage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailData.ComponentUsage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_componentUsage = string(value["ComponentUsage"].GetString());
        m_componentUsageHasBeenSet = true;
    }

    if (value.HasMember("ComponentUsageUnit") && !value["ComponentUsageUnit"].IsNull())
    {
        if (!value["ComponentUsageUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailData.ComponentUsageUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_componentUsageUnit = string(value["ComponentUsageUnit"].GetString());
        m_componentUsageUnitHasBeenSet = true;
    }

    if (value.HasMember("UsageDuration") && !value["UsageDuration"].IsNull())
    {
        if (!value["UsageDuration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailData.UsageDuration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_usageDuration = string(value["UsageDuration"].GetString());
        m_usageDurationHasBeenSet = true;
    }

    if (value.HasMember("DurationUnit") && !value["DurationUnit"].IsNull())
    {
        if (!value["DurationUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailData.DurationUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_durationUnit = string(value["DurationUnit"].GetString());
        m_durationUnitHasBeenSet = true;
    }

    if (value.HasMember("OriginalCost") && !value["OriginalCost"].IsNull())
    {
        if (!value["OriginalCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailData.OriginalCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originalCost = string(value["OriginalCost"].GetString());
        m_originalCostHasBeenSet = true;
    }

    if (value.HasMember("DiscountRate") && !value["DiscountRate"].IsNull())
    {
        if (!value["DiscountRate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailData.DiscountRate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_discountRate = string(value["DiscountRate"].GetString());
        m_discountRateHasBeenSet = true;
    }

    if (value.HasMember("Currency") && !value["Currency"].IsNull())
    {
        if (!value["Currency"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailData.Currency` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currency = string(value["Currency"].GetString());
        m_currencyHasBeenSet = true;
    }

    if (value.HasMember("TotalAmountAfterDiscount") && !value["TotalAmountAfterDiscount"].IsNull())
    {
        if (!value["TotalAmountAfterDiscount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailData.TotalAmountAfterDiscount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalAmountAfterDiscount = string(value["TotalAmountAfterDiscount"].GetString());
        m_totalAmountAfterDiscountHasBeenSet = true;
    }

    if (value.HasMember("VoucherDeduction") && !value["VoucherDeduction"].IsNull())
    {
        if (!value["VoucherDeduction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailData.VoucherDeduction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_voucherDeduction = string(value["VoucherDeduction"].GetString());
        m_voucherDeductionHasBeenSet = true;
    }

    if (value.HasMember("TotalCost") && !value["TotalCost"].IsNull())
    {
        if (!value["TotalCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailData.TotalCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalCost = string(value["TotalCost"].GetString());
        m_totalCostHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailData.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("CustomerDiscountRate") && !value["CustomerDiscountRate"].IsNull())
    {
        if (!value["CustomerDiscountRate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailData.CustomerDiscountRate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customerDiscountRate = string(value["CustomerDiscountRate"].GetString());
        m_customerDiscountRateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BillDetailData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_discountRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiscountRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_discountRate.c_str(), allocator).Move(), allocator);
    }

    if (m_currencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Currency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currency.c_str(), allocator).Move(), allocator);
    }

    if (m_totalAmountAfterDiscountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalAmountAfterDiscount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalAmountAfterDiscount.c_str(), allocator).Move(), allocator);
    }

    if (m_voucherDeductionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoucherDeduction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_voucherDeduction.c_str(), allocator).Move(), allocator);
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

    if (m_customerDiscountRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerDiscountRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customerDiscountRate.c_str(), allocator).Move(), allocator);
    }

}


int64_t BillDetailData::GetPayerAccountId() const
{
    return m_payerAccountId;
}

void BillDetailData::SetPayerAccountId(const int64_t& _payerAccountId)
{
    m_payerAccountId = _payerAccountId;
    m_payerAccountIdHasBeenSet = true;
}

bool BillDetailData::PayerAccountIdHasBeenSet() const
{
    return m_payerAccountIdHasBeenSet;
}

int64_t BillDetailData::GetOwnerAccountId() const
{
    return m_ownerAccountId;
}

void BillDetailData::SetOwnerAccountId(const int64_t& _ownerAccountId)
{
    m_ownerAccountId = _ownerAccountId;
    m_ownerAccountIdHasBeenSet = true;
}

bool BillDetailData::OwnerAccountIdHasBeenSet() const
{
    return m_ownerAccountIdHasBeenSet;
}

int64_t BillDetailData::GetOperatorAccountId() const
{
    return m_operatorAccountId;
}

void BillDetailData::SetOperatorAccountId(const int64_t& _operatorAccountId)
{
    m_operatorAccountId = _operatorAccountId;
    m_operatorAccountIdHasBeenSet = true;
}

bool BillDetailData::OperatorAccountIdHasBeenSet() const
{
    return m_operatorAccountIdHasBeenSet;
}

string BillDetailData::GetProductName() const
{
    return m_productName;
}

void BillDetailData::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool BillDetailData::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

string BillDetailData::GetBillingMode() const
{
    return m_billingMode;
}

void BillDetailData::SetBillingMode(const string& _billingMode)
{
    m_billingMode = _billingMode;
    m_billingModeHasBeenSet = true;
}

bool BillDetailData::BillingModeHasBeenSet() const
{
    return m_billingModeHasBeenSet;
}

string BillDetailData::GetProjectName() const
{
    return m_projectName;
}

void BillDetailData::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool BillDetailData::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

string BillDetailData::GetRegion() const
{
    return m_region;
}

void BillDetailData::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool BillDetailData::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string BillDetailData::GetAvailabilityZone() const
{
    return m_availabilityZone;
}

void BillDetailData::SetAvailabilityZone(const string& _availabilityZone)
{
    m_availabilityZone = _availabilityZone;
    m_availabilityZoneHasBeenSet = true;
}

bool BillDetailData::AvailabilityZoneHasBeenSet() const
{
    return m_availabilityZoneHasBeenSet;
}

string BillDetailData::GetInstanceId() const
{
    return m_instanceId;
}

void BillDetailData::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool BillDetailData::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string BillDetailData::GetInstanceName() const
{
    return m_instanceName;
}

void BillDetailData::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool BillDetailData::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string BillDetailData::GetSubProductName() const
{
    return m_subProductName;
}

void BillDetailData::SetSubProductName(const string& _subProductName)
{
    m_subProductName = _subProductName;
    m_subProductNameHasBeenSet = true;
}

bool BillDetailData::SubProductNameHasBeenSet() const
{
    return m_subProductNameHasBeenSet;
}

string BillDetailData::GetTransactionType() const
{
    return m_transactionType;
}

void BillDetailData::SetTransactionType(const string& _transactionType)
{
    m_transactionType = _transactionType;
    m_transactionTypeHasBeenSet = true;
}

bool BillDetailData::TransactionTypeHasBeenSet() const
{
    return m_transactionTypeHasBeenSet;
}

string BillDetailData::GetTransactionId() const
{
    return m_transactionId;
}

void BillDetailData::SetTransactionId(const string& _transactionId)
{
    m_transactionId = _transactionId;
    m_transactionIdHasBeenSet = true;
}

bool BillDetailData::TransactionIdHasBeenSet() const
{
    return m_transactionIdHasBeenSet;
}

string BillDetailData::GetTransactionTime() const
{
    return m_transactionTime;
}

void BillDetailData::SetTransactionTime(const string& _transactionTime)
{
    m_transactionTime = _transactionTime;
    m_transactionTimeHasBeenSet = true;
}

bool BillDetailData::TransactionTimeHasBeenSet() const
{
    return m_transactionTimeHasBeenSet;
}

string BillDetailData::GetUsageStartTime() const
{
    return m_usageStartTime;
}

void BillDetailData::SetUsageStartTime(const string& _usageStartTime)
{
    m_usageStartTime = _usageStartTime;
    m_usageStartTimeHasBeenSet = true;
}

bool BillDetailData::UsageStartTimeHasBeenSet() const
{
    return m_usageStartTimeHasBeenSet;
}

string BillDetailData::GetUsageEndTime() const
{
    return m_usageEndTime;
}

void BillDetailData::SetUsageEndTime(const string& _usageEndTime)
{
    m_usageEndTime = _usageEndTime;
    m_usageEndTimeHasBeenSet = true;
}

bool BillDetailData::UsageEndTimeHasBeenSet() const
{
    return m_usageEndTimeHasBeenSet;
}

string BillDetailData::GetComponentType() const
{
    return m_componentType;
}

void BillDetailData::SetComponentType(const string& _componentType)
{
    m_componentType = _componentType;
    m_componentTypeHasBeenSet = true;
}

bool BillDetailData::ComponentTypeHasBeenSet() const
{
    return m_componentTypeHasBeenSet;
}

string BillDetailData::GetComponentName() const
{
    return m_componentName;
}

void BillDetailData::SetComponentName(const string& _componentName)
{
    m_componentName = _componentName;
    m_componentNameHasBeenSet = true;
}

bool BillDetailData::ComponentNameHasBeenSet() const
{
    return m_componentNameHasBeenSet;
}

string BillDetailData::GetComponentListPrice() const
{
    return m_componentListPrice;
}

void BillDetailData::SetComponentListPrice(const string& _componentListPrice)
{
    m_componentListPrice = _componentListPrice;
    m_componentListPriceHasBeenSet = true;
}

bool BillDetailData::ComponentListPriceHasBeenSet() const
{
    return m_componentListPriceHasBeenSet;
}

string BillDetailData::GetComponentPriceMeasurementUnit() const
{
    return m_componentPriceMeasurementUnit;
}

void BillDetailData::SetComponentPriceMeasurementUnit(const string& _componentPriceMeasurementUnit)
{
    m_componentPriceMeasurementUnit = _componentPriceMeasurementUnit;
    m_componentPriceMeasurementUnitHasBeenSet = true;
}

bool BillDetailData::ComponentPriceMeasurementUnitHasBeenSet() const
{
    return m_componentPriceMeasurementUnitHasBeenSet;
}

string BillDetailData::GetComponentUsage() const
{
    return m_componentUsage;
}

void BillDetailData::SetComponentUsage(const string& _componentUsage)
{
    m_componentUsage = _componentUsage;
    m_componentUsageHasBeenSet = true;
}

bool BillDetailData::ComponentUsageHasBeenSet() const
{
    return m_componentUsageHasBeenSet;
}

string BillDetailData::GetComponentUsageUnit() const
{
    return m_componentUsageUnit;
}

void BillDetailData::SetComponentUsageUnit(const string& _componentUsageUnit)
{
    m_componentUsageUnit = _componentUsageUnit;
    m_componentUsageUnitHasBeenSet = true;
}

bool BillDetailData::ComponentUsageUnitHasBeenSet() const
{
    return m_componentUsageUnitHasBeenSet;
}

string BillDetailData::GetUsageDuration() const
{
    return m_usageDuration;
}

void BillDetailData::SetUsageDuration(const string& _usageDuration)
{
    m_usageDuration = _usageDuration;
    m_usageDurationHasBeenSet = true;
}

bool BillDetailData::UsageDurationHasBeenSet() const
{
    return m_usageDurationHasBeenSet;
}

string BillDetailData::GetDurationUnit() const
{
    return m_durationUnit;
}

void BillDetailData::SetDurationUnit(const string& _durationUnit)
{
    m_durationUnit = _durationUnit;
    m_durationUnitHasBeenSet = true;
}

bool BillDetailData::DurationUnitHasBeenSet() const
{
    return m_durationUnitHasBeenSet;
}

string BillDetailData::GetOriginalCost() const
{
    return m_originalCost;
}

void BillDetailData::SetOriginalCost(const string& _originalCost)
{
    m_originalCost = _originalCost;
    m_originalCostHasBeenSet = true;
}

bool BillDetailData::OriginalCostHasBeenSet() const
{
    return m_originalCostHasBeenSet;
}

string BillDetailData::GetDiscountRate() const
{
    return m_discountRate;
}

void BillDetailData::SetDiscountRate(const string& _discountRate)
{
    m_discountRate = _discountRate;
    m_discountRateHasBeenSet = true;
}

bool BillDetailData::DiscountRateHasBeenSet() const
{
    return m_discountRateHasBeenSet;
}

string BillDetailData::GetCurrency() const
{
    return m_currency;
}

void BillDetailData::SetCurrency(const string& _currency)
{
    m_currency = _currency;
    m_currencyHasBeenSet = true;
}

bool BillDetailData::CurrencyHasBeenSet() const
{
    return m_currencyHasBeenSet;
}

string BillDetailData::GetTotalAmountAfterDiscount() const
{
    return m_totalAmountAfterDiscount;
}

void BillDetailData::SetTotalAmountAfterDiscount(const string& _totalAmountAfterDiscount)
{
    m_totalAmountAfterDiscount = _totalAmountAfterDiscount;
    m_totalAmountAfterDiscountHasBeenSet = true;
}

bool BillDetailData::TotalAmountAfterDiscountHasBeenSet() const
{
    return m_totalAmountAfterDiscountHasBeenSet;
}

string BillDetailData::GetVoucherDeduction() const
{
    return m_voucherDeduction;
}

void BillDetailData::SetVoucherDeduction(const string& _voucherDeduction)
{
    m_voucherDeduction = _voucherDeduction;
    m_voucherDeductionHasBeenSet = true;
}

bool BillDetailData::VoucherDeductionHasBeenSet() const
{
    return m_voucherDeductionHasBeenSet;
}

string BillDetailData::GetTotalCost() const
{
    return m_totalCost;
}

void BillDetailData::SetTotalCost(const string& _totalCost)
{
    m_totalCost = _totalCost;
    m_totalCostHasBeenSet = true;
}

bool BillDetailData::TotalCostHasBeenSet() const
{
    return m_totalCostHasBeenSet;
}

string BillDetailData::GetId() const
{
    return m_id;
}

void BillDetailData::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool BillDetailData::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string BillDetailData::GetCustomerDiscountRate() const
{
    return m_customerDiscountRate;
}

void BillDetailData::SetCustomerDiscountRate(const string& _customerDiscountRate)
{
    m_customerDiscountRate = _customerDiscountRate;
    m_customerDiscountRateHasBeenSet = true;
}

bool BillDetailData::CustomerDiscountRateHasBeenSet() const
{
    return m_customerDiscountRateHasBeenSet;
}

