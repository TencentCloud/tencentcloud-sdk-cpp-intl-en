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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_BILLDETAILDATA_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_BILLDETAILDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Intlpartnersmgt
    {
        namespace V20220928
        {
            namespace Model
            {
                /**
                * Customer bill details
                */
                class BillDetailData : public AbstractModel
                {
                public:
                    BillDetailData();
                    ~BillDetailData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取reseller account.
                     * @return PayerAccountId reseller account.
                     * 
                     */
                    int64_t GetPayerAccountId() const;

                    /**
                     * 设置reseller account.
                     * @param _payerAccountId reseller account.
                     * 
                     */
                    void SetPayerAccountId(const int64_t& _payerAccountId);

                    /**
                     * 判断参数 PayerAccountId 是否已赋值
                     * @return PayerAccountId 是否已赋值
                     * 
                     */
                    bool PayerAccountIdHasBeenSet() const;

                    /**
                     * 获取Subaccount.
                     * @return OwnerAccountId Subaccount.
                     * 
                     */
                    int64_t GetOwnerAccountId() const;

                    /**
                     * 设置Subaccount.
                     * @param _ownerAccountId Subaccount.
                     * 
                     */
                    void SetOwnerAccountId(const int64_t& _ownerAccountId);

                    /**
                     * 判断参数 OwnerAccountId 是否已赋值
                     * @return OwnerAccountId 是否已赋值
                     * 
                     */
                    bool OwnerAccountIdHasBeenSet() const;

                    /**
                     * 获取Operator account.
                     * @return OperatorAccountId Operator account.
                     * 
                     */
                    int64_t GetOperatorAccountId() const;

                    /**
                     * 设置Operator account.
                     * @param _operatorAccountId Operator account.
                     * 
                     */
                    void SetOperatorAccountId(const int64_t& _operatorAccountId);

                    /**
                     * 判断参数 OperatorAccountId 是否已赋值
                     * @return OperatorAccountId 是否已赋值
                     * 
                     */
                    bool OperatorAccountIdHasBeenSet() const;

                    /**
                     * 获取Product name.
                     * @return ProductName Product name.
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置Product name.
                     * @param _productName Product name.
                     * 
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取Billing mode
.
Monthly subscription (annual and monthly).
Pay-As-You-Go resources.
Standard ri reserved instance.
                     * @return BillingMode Billing mode
.
Monthly subscription (annual and monthly).
Pay-As-You-Go resources.
Standard ri reserved instance.
                     * 
                     */
                    std::string GetBillingMode() const;

                    /**
                     * 设置Billing mode
.
Monthly subscription (annual and monthly).
Pay-As-You-Go resources.
Standard ri reserved instance.
                     * @param _billingMode Billing mode
.
Monthly subscription (annual and monthly).
Pay-As-You-Go resources.
Standard ri reserved instance.
                     * 
                     */
                    void SetBillingMode(const std::string& _billingMode);

                    /**
                     * 判断参数 BillingMode 是否已赋值
                     * @return BillingMode 是否已赋值
                     * 
                     */
                    bool BillingModeHasBeenSet() const;

                    /**
                     * 获取Project name.

                     * @return ProjectName Project name.

                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置Project name.

                     * @param _projectName Project name.

                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取Resource region.
                     * @return Region Resource region.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Resource region.
                     * @param _region Resource region.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Resource available zone.
                     * @return AvailabilityZone Resource available zone.
                     * 
                     */
                    std::string GetAvailabilityZone() const;

                    /**
                     * 设置Resource available zone.
                     * @param _availabilityZone Resource available zone.
                     * 
                     */
                    void SetAvailabilityZone(const std::string& _availabilityZone);

                    /**
                     * 判断参数 AvailabilityZone 是否已赋值
                     * @return AvailabilityZone 是否已赋值
                     * 
                     */
                    bool AvailabilityZoneHasBeenSet() const;

                    /**
                     * 获取Instance id.
                     * @return InstanceId Instance id.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance id.
                     * @param _instanceId Instance id.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Instance name.
                     * @return InstanceName Instance name.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name.
                     * @param _instanceName Instance name.
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Sub-Product name
.

                     * @return SubProductName Sub-Product name
.

                     * 
                     */
                    std::string GetSubProductName() const;

                    /**
                     * 设置Sub-Product name
.

                     * @param _subProductName Sub-Product name
.

                     * 
                     */
                    void SetSubProductName(const std::string& _subProductName);

                    /**
                     * 判断参数 SubProductName 是否已赋值
                     * @return SubProductName 是否已赋值
                     * 
                     */
                    bool SubProductNameHasBeenSet() const;

                    /**
                     * 获取Settlement type.
                     * @return TransactionType Settlement type.
                     * 
                     */
                    std::string GetTransactionType() const;

                    /**
                     * 设置Settlement type.
                     * @param _transactionType Settlement type.
                     * 
                     */
                    void SetTransactionType(const std::string& _transactionType);

                    /**
                     * 判断参数 TransactionType 是否已赋值
                     * @return TransactionType 是否已赋值
                     * 
                     */
                    bool TransactionTypeHasBeenSet() const;

                    /**
                     * 获取<Transaction id>.
                     * @return TransactionId <Transaction id>.
                     * 
                     */
                    std::string GetTransactionId() const;

                    /**
                     * 设置<Transaction id>.
                     * @param _transactionId <Transaction id>.
                     * 
                     */
                    void SetTransactionId(const std::string& _transactionId);

                    /**
                     * 判断参数 TransactionId 是否已赋值
                     * @return TransactionId 是否已赋值
                     * 
                     */
                    bool TransactionIdHasBeenSet() const;

                    /**
                     * 获取Settlement time.

                     * @return TransactionTime Settlement time.

                     * 
                     */
                    std::string GetTransactionTime() const;

                    /**
                     * 设置Settlement time.

                     * @param _transactionTime Settlement time.

                     * 
                     */
                    void SetTransactionTime(const std::string& _transactionTime);

                    /**
                     * 判断参数 TransactionTime 是否已赋值
                     * @return TransactionTime 是否已赋值
                     * 
                     */
                    bool TransactionTimeHasBeenSet() const;

                    /**
                     * 获取<Resource start time>.
                     * @return UsageStartTime <Resource start time>.
                     * 
                     */
                    std::string GetUsageStartTime() const;

                    /**
                     * 设置<Resource start time>.
                     * @param _usageStartTime <Resource start time>.
                     * 
                     */
                    void SetUsageStartTime(const std::string& _usageStartTime);

                    /**
                     * 判断参数 UsageStartTime 是否已赋值
                     * @return UsageStartTime 是否已赋值
                     * 
                     */
                    bool UsageStartTimeHasBeenSet() const;

                    /**
                     * 获取<Resource end usage time>.
                     * @return UsageEndTime <Resource end usage time>.
                     * 
                     */
                    std::string GetUsageEndTime() const;

                    /**
                     * 设置<Resource end usage time>.
                     * @param _usageEndTime <Resource end usage time>.
                     * 
                     */
                    void SetUsageEndTime(const std::string& _usageEndTime);

                    /**
                     * 判断参数 UsageEndTime 是否已赋值
                     * @return UsageEndTime 是否已赋值
                     * 
                     */
                    bool UsageEndTimeHasBeenSet() const;

                    /**
                     * 获取Component.
                     * @return ComponentType Component.
                     * 
                     */
                    std::string GetComponentType() const;

                    /**
                     * 设置Component.
                     * @param _componentType Component.
                     * 
                     */
                    void SetComponentType(const std::string& _componentType);

                    /**
                     * 判断参数 ComponentType 是否已赋值
                     * @return ComponentType 是否已赋值
                     * 
                     */
                    bool ComponentTypeHasBeenSet() const;

                    /**
                     * 获取Component name.
                     * @return ComponentName Component name.
                     * 
                     */
                    std::string GetComponentName() const;

                    /**
                     * 设置Component name.
                     * @param _componentName Component name.
                     * 
                     */
                    void SetComponentName(const std::string& _componentName);

                    /**
                     * 判断参数 ComponentName 是否已赋值
                     * @return ComponentName 是否已赋值
                     * 
                     */
                    bool ComponentNameHasBeenSet() const;

                    /**
                     * 获取Component list price.
                     * @return ComponentListPrice Component list price.
                     * 
                     */
                    std::string GetComponentListPrice() const;

                    /**
                     * 设置Component list price.
                     * @param _componentListPrice Component list price.
                     * 
                     */
                    void SetComponentListPrice(const std::string& _componentListPrice);

                    /**
                     * 判断参数 ComponentListPrice 是否已赋值
                     * @return ComponentListPrice 是否已赋值
                     * 
                     */
                    bool ComponentListPriceHasBeenSet() const;

                    /**
                     * 获取Price unit.
                     * @return ComponentPriceMeasurementUnit Price unit.
                     * 
                     */
                    std::string GetComponentPriceMeasurementUnit() const;

                    /**
                     * 设置Price unit.
                     * @param _componentPriceMeasurementUnit Price unit.
                     * 
                     */
                    void SetComponentPriceMeasurementUnit(const std::string& _componentPriceMeasurementUnit);

                    /**
                     * 判断参数 ComponentPriceMeasurementUnit 是否已赋值
                     * @return ComponentPriceMeasurementUnit 是否已赋值
                     * 
                     */
                    bool ComponentPriceMeasurementUnitHasBeenSet() const;

                    /**
                     * 获取Component usage.
                     * @return ComponentUsage Component usage.
                     * 
                     */
                    std::string GetComponentUsage() const;

                    /**
                     * 设置Component usage.
                     * @param _componentUsage Component usage.
                     * 
                     */
                    void SetComponentUsage(const std::string& _componentUsage);

                    /**
                     * 判断参数 ComponentUsage 是否已赋值
                     * @return ComponentUsage 是否已赋值
                     * 
                     */
                    bool ComponentUsageHasBeenSet() const;

                    /**
                     * 获取Component usage unit.
                     * @return ComponentUsageUnit Component usage unit.
                     * 
                     */
                    std::string GetComponentUsageUnit() const;

                    /**
                     * 设置Component usage unit.
                     * @param _componentUsageUnit Component usage unit.
                     * 
                     */
                    void SetComponentUsageUnit(const std::string& _componentUsageUnit);

                    /**
                     * 判断参数 ComponentUsageUnit 是否已赋值
                     * @return ComponentUsageUnit 是否已赋值
                     * 
                     */
                    bool ComponentUsageUnitHasBeenSet() const;

                    /**
                     * 获取Resource usage duration.
                     * @return UsageDuration Resource usage duration.
                     * 
                     */
                    std::string GetUsageDuration() const;

                    /**
                     * 设置Resource usage duration.
                     * @param _usageDuration Resource usage duration.
                     * 
                     */
                    void SetUsageDuration(const std::string& _usageDuration);

                    /**
                     * 判断参数 UsageDuration 是否已赋值
                     * @return UsageDuration 是否已赋值
                     * 
                     */
                    bool UsageDurationHasBeenSet() const;

                    /**
                     * 获取duration unit.
                     * @return DurationUnit duration unit.
                     * 
                     */
                    std::string GetDurationUnit() const;

                    /**
                     * 设置duration unit.
                     * @param _durationUnit duration unit.
                     * 
                     */
                    void SetDurationUnit(const std::string& _durationUnit);

                    /**
                     * 判断参数 DurationUnit 是否已赋值
                     * @return DurationUnit 是否已赋值
                     * 
                     */
                    bool DurationUnitHasBeenSet() const;

                    /**
                     * 获取Total original price.
Original cost = component list price * component usage * usage duration.
                     * @return OriginalCost Total original price.
Original cost = component list price * component usage * usage duration.
                     * 
                     */
                    std::string GetOriginalCost() const;

                    /**
                     * 设置Total original price.
Original cost = component list price * component usage * usage duration.
                     * @param _originalCost Total original price.
Original cost = component list price * component usage * usage duration.
                     * 
                     */
                    void SetOriginalCost(const std::string& _originalCost);

                    /**
                     * 判断参数 OriginalCost 是否已赋值
                     * @return OriginalCost 是否已赋值
                     * 
                     */
                    bool OriginalCostHasBeenSet() const;

                    /**
                     * 获取Discount (default is 1) - abandoned.
                     * @return DiscountRate Discount (default is 1) - abandoned.
                     * 
                     */
                    std::string GetDiscountRate() const;

                    /**
                     * 设置Discount (default is 1) - abandoned.
                     * @param _discountRate Discount (default is 1) - abandoned.
                     * 
                     */
                    void SetDiscountRate(const std::string& _discountRate);

                    /**
                     * 判断参数 DiscountRate 是否已赋值
                     * @return DiscountRate 是否已赋值
                     * 
                     */
                    bool DiscountRateHasBeenSet() const;

                    /**
                     * 获取Currency.
                     * @return Currency Currency.
                     * 
                     */
                    std::string GetCurrency() const;

                    /**
                     * 设置Currency.
                     * @param _currency Currency.
                     * 
                     */
                    void SetCurrency(const std::string& _currency);

                    /**
                     * 判断参数 Currency 是否已赋值
                     * @return Currency 是否已赋值
                     * 
                     */
                    bool CurrencyHasBeenSet() const;

                    /**
                     * 获取Total cost after discount.
                     * @return TotalAmountAfterDiscount Total cost after discount.
                     * 
                     */
                    std::string GetTotalAmountAfterDiscount() const;

                    /**
                     * 设置Total cost after discount.
                     * @param _totalAmountAfterDiscount Total cost after discount.
                     * 
                     */
                    void SetTotalAmountAfterDiscount(const std::string& _totalAmountAfterDiscount);

                    /**
                     * 判断参数 TotalAmountAfterDiscount 是否已赋值
                     * @return TotalAmountAfterDiscount 是否已赋值
                     * 
                     */
                    bool TotalAmountAfterDiscountHasBeenSet() const;

                    /**
                     * 获取Voucher deduction amount.
                     * @return VoucherDeduction Voucher deduction amount.
                     * 
                     */
                    std::string GetVoucherDeduction() const;

                    /**
                     * 设置Voucher deduction amount.
                     * @param _voucherDeduction Voucher deduction amount.
                     * 
                     */
                    void SetVoucherDeduction(const std::string& _voucherDeduction);

                    /**
                     * 判断参数 VoucherDeduction 是否已赋值
                     * @return VoucherDeduction 是否已赋值
                     * 
                     */
                    bool VoucherDeductionHasBeenSet() const;

                    /**
                     * 获取= Total Amount After Discount - Voucher Deduction
                     * @return TotalCost = Total Amount After Discount - Voucher Deduction
                     * 
                     */
                    std::string GetTotalCost() const;

                    /**
                     * 设置= Total Amount After Discount - Voucher Deduction
                     * @param _totalCost = Total Amount After Discount - Voucher Deduction
                     * 
                     */
                    void SetTotalCost(const std::string& _totalCost);

                    /**
                     * 判断参数 TotalCost 是否已赋值
                     * @return TotalCost 是否已赋值
                     * 
                     */
                    bool TotalCostHasBeenSet() const;

                    /**
                     * 获取Identifier (id).
                     * @return Id Identifier (id).
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Identifier (id).
                     * @param _id Identifier (id).
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取customer discount rate. The discount rate applied to the reseller's customer, which set by reseller, default value equal to 1.
                     * @return CustomerDiscountRate customer discount rate. The discount rate applied to the reseller's customer, which set by reseller, default value equal to 1.
                     * 
                     */
                    std::string GetCustomerDiscountRate() const;

                    /**
                     * 设置customer discount rate. The discount rate applied to the reseller's customer, which set by reseller, default value equal to 1.
                     * @param _customerDiscountRate customer discount rate. The discount rate applied to the reseller's customer, which set by reseller, default value equal to 1.
                     * 
                     */
                    void SetCustomerDiscountRate(const std::string& _customerDiscountRate);

                    /**
                     * 判断参数 CustomerDiscountRate 是否已赋值
                     * @return CustomerDiscountRate 是否已赋值
                     * 
                     */
                    bool CustomerDiscountRateHasBeenSet() const;

                private:

                    /**
                     * reseller account.
                     */
                    int64_t m_payerAccountId;
                    bool m_payerAccountIdHasBeenSet;

                    /**
                     * Subaccount.
                     */
                    int64_t m_ownerAccountId;
                    bool m_ownerAccountIdHasBeenSet;

                    /**
                     * Operator account.
                     */
                    int64_t m_operatorAccountId;
                    bool m_operatorAccountIdHasBeenSet;

                    /**
                     * Product name.
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * Billing mode
.
Monthly subscription (annual and monthly).
Pay-As-You-Go resources.
Standard ri reserved instance.
                     */
                    std::string m_billingMode;
                    bool m_billingModeHasBeenSet;

                    /**
                     * Project name.

                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * Resource region.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Resource available zone.
                     */
                    std::string m_availabilityZone;
                    bool m_availabilityZoneHasBeenSet;

                    /**
                     * Instance id.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance name.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Sub-Product name
.

                     */
                    std::string m_subProductName;
                    bool m_subProductNameHasBeenSet;

                    /**
                     * Settlement type.
                     */
                    std::string m_transactionType;
                    bool m_transactionTypeHasBeenSet;

                    /**
                     * <Transaction id>.
                     */
                    std::string m_transactionId;
                    bool m_transactionIdHasBeenSet;

                    /**
                     * Settlement time.

                     */
                    std::string m_transactionTime;
                    bool m_transactionTimeHasBeenSet;

                    /**
                     * <Resource start time>.
                     */
                    std::string m_usageStartTime;
                    bool m_usageStartTimeHasBeenSet;

                    /**
                     * <Resource end usage time>.
                     */
                    std::string m_usageEndTime;
                    bool m_usageEndTimeHasBeenSet;

                    /**
                     * Component.
                     */
                    std::string m_componentType;
                    bool m_componentTypeHasBeenSet;

                    /**
                     * Component name.
                     */
                    std::string m_componentName;
                    bool m_componentNameHasBeenSet;

                    /**
                     * Component list price.
                     */
                    std::string m_componentListPrice;
                    bool m_componentListPriceHasBeenSet;

                    /**
                     * Price unit.
                     */
                    std::string m_componentPriceMeasurementUnit;
                    bool m_componentPriceMeasurementUnitHasBeenSet;

                    /**
                     * Component usage.
                     */
                    std::string m_componentUsage;
                    bool m_componentUsageHasBeenSet;

                    /**
                     * Component usage unit.
                     */
                    std::string m_componentUsageUnit;
                    bool m_componentUsageUnitHasBeenSet;

                    /**
                     * Resource usage duration.
                     */
                    std::string m_usageDuration;
                    bool m_usageDurationHasBeenSet;

                    /**
                     * duration unit.
                     */
                    std::string m_durationUnit;
                    bool m_durationUnitHasBeenSet;

                    /**
                     * Total original price.
Original cost = component list price * component usage * usage duration.
                     */
                    std::string m_originalCost;
                    bool m_originalCostHasBeenSet;

                    /**
                     * Discount (default is 1) - abandoned.
                     */
                    std::string m_discountRate;
                    bool m_discountRateHasBeenSet;

                    /**
                     * Currency.
                     */
                    std::string m_currency;
                    bool m_currencyHasBeenSet;

                    /**
                     * Total cost after discount.
                     */
                    std::string m_totalAmountAfterDiscount;
                    bool m_totalAmountAfterDiscountHasBeenSet;

                    /**
                     * Voucher deduction amount.
                     */
                    std::string m_voucherDeduction;
                    bool m_voucherDeductionHasBeenSet;

                    /**
                     * = Total Amount After Discount - Voucher Deduction
                     */
                    std::string m_totalCost;
                    bool m_totalCostHasBeenSet;

                    /**
                     * Identifier (id).
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * customer discount rate. The discount rate applied to the reseller's customer, which set by reseller, default value equal to 1.
                     */
                    std::string m_customerDiscountRate;
                    bool m_customerDiscountRateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_BILLDETAILDATA_H_
