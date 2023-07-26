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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_CUSTOMERBILLDETAILDATA_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_CUSTOMERBILLDETAILDATA_H_

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
                class CustomerBillDetailData : public AbstractModel
                {
                public:
                    CustomerBillDetailData();
                    ~CustomerBillDetailData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Reseller account
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PayerAccountId Reseller account
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetPayerAccountId() const;

                    /**
                     * 设置Reseller account
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _payerAccountId Reseller account
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Customer account
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OwnerAccountId Customer account
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetOwnerAccountId() const;

                    /**
                     * 设置Customer account
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ownerAccountId Customer account
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Operator account
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OperatorAccountId Operator account
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetOperatorAccountId() const;

                    /**
                     * 设置Operator account
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _operatorAccountId Operator account
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Product name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProductName Product name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置Product name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _productName Product name
Note: This field may return null, indicating that no valid values can be obtained.
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
`Monthly subscription` (Monthly subscription)
`Pay-As-You-Go resources` (Pay-as-you-go)
`Standard RI` (Reserved instance)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BillingMode Billing mode
`Monthly subscription` (Monthly subscription)
`Pay-As-You-Go resources` (Pay-as-you-go)
`Standard RI` (Reserved instance)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBillingMode() const;

                    /**
                     * 设置Billing mode
`Monthly subscription` (Monthly subscription)
`Pay-As-You-Go resources` (Pay-as-you-go)
`Standard RI` (Reserved instance)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _billingMode Billing mode
`Monthly subscription` (Monthly subscription)
`Pay-As-You-Go resources` (Pay-as-you-go)
`Standard RI` (Reserved instance)
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Project name

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProjectName Project name

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置Project name

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _projectName Project name

Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Resource region
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Region Resource region
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Resource region
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _region Resource region
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Resource AZ
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AvailabilityZone Resource AZ
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAvailabilityZone() const;

                    /**
                     * 设置Resource AZ
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _availabilityZone Resource AZ
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceId Instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceId Instance ID
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Instance name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceName Instance name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceName Instance name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Subproduct name

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubProductName Subproduct name

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSubProductName() const;

                    /**
                     * 设置Subproduct name

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _subProductName Subproduct name

Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Settlement type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TransactionType Settlement type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTransactionType() const;

                    /**
                     * 设置Settlement type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _transactionType Settlement type
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Transaction ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TransactionId Transaction ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTransactionId() const;

                    /**
                     * 设置Transaction ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _transactionId Transaction ID
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Settlement time

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TransactionTime Settlement time

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTransactionTime() const;

                    /**
                     * 设置Settlement time

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _transactionTime Settlement time

Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Start time of resource use
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UsageStartTime Start time of resource use
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUsageStartTime() const;

                    /**
                     * 设置Start time of resource use
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _usageStartTime Start time of resource use
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取End time of resource use
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UsageEndTime End time of resource use
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUsageEndTime() const;

                    /**
                     * 设置End time of resource use
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _usageEndTime End time of resource use
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Component
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ComponentType Component
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetComponentType() const;

                    /**
                     * 设置Component
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _componentType Component
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Component name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ComponentName Component name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetComponentName() const;

                    /**
                     * 设置Component name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _componentName Component name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Component list price
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ComponentListPrice Component list price
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetComponentListPrice() const;

                    /**
                     * 设置Component list price
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _componentListPrice Component list price
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Price unit
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ComponentPriceMeasurementUnit Price unit
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetComponentPriceMeasurementUnit() const;

                    /**
                     * 设置Price unit
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _componentPriceMeasurementUnit Price unit
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Component usage
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ComponentUsage Component usage
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetComponentUsage() const;

                    /**
                     * 设置Component usage
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _componentUsage Component usage
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Component usage unit
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ComponentUsageUnit Component usage unit
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetComponentUsageUnit() const;

                    /**
                     * 设置Component usage unit
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _componentUsageUnit Component usage unit
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Resource usage duration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UsageDuration Resource usage duration
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUsageDuration() const;

                    /**
                     * 设置Resource usage duration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _usageDuration Resource usage duration
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Duration unit
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DurationUnit Duration unit
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDurationUnit() const;

                    /**
                     * 设置Duration unit
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _durationUnit Duration unit
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Original cost
Original cost = component list price * component usage * usage duration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OriginalCost Original cost
Original cost = component list price * component usage * usage duration
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOriginalCost() const;

                    /**
                     * 设置Original cost
Original cost = component list price * component usage * usage duration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _originalCost Original cost
Original cost = component list price * component usage * usage duration
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Currency
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Currency Currency
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCurrency() const;

                    /**
                     * 设置Currency
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _currency Currency
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Total cost = discounted total - voucher deduction
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TotalCost Total cost = discounted total - voucher deduction
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTotalCost() const;

                    /**
                     * 设置Total cost = discounted total - voucher deduction
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _totalCost Total cost = discounted total - voucher deduction
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTotalCost(const std::string& _totalCost);

                    /**
                     * 判断参数 TotalCost 是否已赋值
                     * @return TotalCost 是否已赋值
                     * 
                     */
                    bool TotalCostHasBeenSet() const;

                private:

                    /**
                     * Reseller account
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_payerAccountId;
                    bool m_payerAccountIdHasBeenSet;

                    /**
                     * Customer account
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_ownerAccountId;
                    bool m_ownerAccountIdHasBeenSet;

                    /**
                     * Operator account
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_operatorAccountId;
                    bool m_operatorAccountIdHasBeenSet;

                    /**
                     * Product name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * Billing mode
`Monthly subscription` (Monthly subscription)
`Pay-As-You-Go resources` (Pay-as-you-go)
`Standard RI` (Reserved instance)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_billingMode;
                    bool m_billingModeHasBeenSet;

                    /**
                     * Project name

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * Resource region
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Resource AZ
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_availabilityZone;
                    bool m_availabilityZoneHasBeenSet;

                    /**
                     * Instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Subproduct name

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subProductName;
                    bool m_subProductNameHasBeenSet;

                    /**
                     * Settlement type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_transactionType;
                    bool m_transactionTypeHasBeenSet;

                    /**
                     * Transaction ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_transactionId;
                    bool m_transactionIdHasBeenSet;

                    /**
                     * Settlement time

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_transactionTime;
                    bool m_transactionTimeHasBeenSet;

                    /**
                     * Start time of resource use
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_usageStartTime;
                    bool m_usageStartTimeHasBeenSet;

                    /**
                     * End time of resource use
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_usageEndTime;
                    bool m_usageEndTimeHasBeenSet;

                    /**
                     * Component
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_componentType;
                    bool m_componentTypeHasBeenSet;

                    /**
                     * Component name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_componentName;
                    bool m_componentNameHasBeenSet;

                    /**
                     * Component list price
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_componentListPrice;
                    bool m_componentListPriceHasBeenSet;

                    /**
                     * Price unit
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_componentPriceMeasurementUnit;
                    bool m_componentPriceMeasurementUnitHasBeenSet;

                    /**
                     * Component usage
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_componentUsage;
                    bool m_componentUsageHasBeenSet;

                    /**
                     * Component usage unit
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_componentUsageUnit;
                    bool m_componentUsageUnitHasBeenSet;

                    /**
                     * Resource usage duration
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_usageDuration;
                    bool m_usageDurationHasBeenSet;

                    /**
                     * Duration unit
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_durationUnit;
                    bool m_durationUnitHasBeenSet;

                    /**
                     * Original cost
Original cost = component list price * component usage * usage duration
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_originalCost;
                    bool m_originalCostHasBeenSet;

                    /**
                     * Currency
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_currency;
                    bool m_currencyHasBeenSet;

                    /**
                     * Total cost = discounted total - voucher deduction
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_totalCost;
                    bool m_totalCostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_CUSTOMERBILLDETAILDATA_H_
