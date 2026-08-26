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
                * Customer Bill Details
                */
                class BillDetailData : public AbstractModel
                {
                public:
                    BillDetailData();
                    ~BillDetailData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p> Distributor account</p>
                     * @return PayerAccountId <p> Distributor account</p>
                     * 
                     */
                    int64_t GetPayerAccountId() const;

                    /**
                     * 设置<p> Distributor account</p>
                     * @param _payerAccountId <p> Distributor account</p>
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
                     * 获取<p>Sub-Customer account</p>
                     * @return OwnerAccountId <p>Sub-Customer account</p>
                     * 
                     */
                    int64_t GetOwnerAccountId() const;

                    /**
                     * 设置<p>Sub-Customer account</p>
                     * @param _ownerAccountId <p>Sub-Customer account</p>
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
                     * 获取<p>Operator account</p>
                     * @return OperatorAccountId <p>Operator account</p>
                     * 
                     */
                    int64_t GetOperatorAccountId() const;

                    /**
                     * 设置<p>Operator account</p>
                     * @param _operatorAccountId <p>Operator account</p>
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
                     * 获取<p>Product name.</p>
                     * @return ProductName <p>Product name.</p>
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置<p>Product name.</p>
                     * @param _productName <p>Product name.</p>
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
                     * 获取<p>Billing mode</p><p>Enumeration values:</p><ul><li>yearly/monthly subscription</li><li>Pay-As-You-Go resources</li></ul>
                     * @return BillingMode <p>Billing mode</p><p>Enumeration values:</p><ul><li>yearly/monthly subscription</li><li>Pay-As-You-Go resources</li></ul>
                     * 
                     */
                    std::string GetBillingMode() const;

                    /**
                     * 设置<p>Billing mode</p><p>Enumeration values:</p><ul><li>yearly/monthly subscription</li><li>Pay-As-You-Go resources</li></ul>
                     * @param _billingMode <p>Billing mode</p><p>Enumeration values:</p><ul><li>yearly/monthly subscription</li><li>Pay-As-You-Go resources</li></ul>
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
                     * 获取<p>Project name.</p>
                     * @return ProjectName <p>Project name.</p>
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置<p>Project name.</p>
                     * @param _projectName <p>Project name.</p>
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
                     * 获取<p>Associated region of the resource</p>
                     * @return Region <p>Associated region of the resource</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>Associated region of the resource</p>
                     * @param _region <p>Associated region of the resource</p>
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
                     * 获取<p>Availability zone of resource</p>
                     * @return AvailabilityZone <p>Availability zone of resource</p>
                     * 
                     */
                    std::string GetAvailabilityZone() const;

                    /**
                     * 设置<p>Availability zone of resource</p>
                     * @param _availabilityZone <p>Availability zone of resource</p>
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
                     * 获取<p>Instance ID.</p>
                     * @return InstanceId <p>Instance ID.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance ID.</p>
                     * @param _instanceId <p>Instance ID.</p>
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
                     * 获取<p>Instance name.</p>
                     * @return InstanceName <p>Instance name.</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>Instance name.</p>
                     * @param _instanceName <p>Instance name.</p>
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
                     * 获取<p>Sub-product name</p>
                     * @return SubProductName <p>Sub-product name</p>
                     * 
                     */
                    std::string GetSubProductName() const;

                    /**
                     * 设置<p>Sub-product name</p>
                     * @param _subProductName <p>Sub-product name</p>
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
                     * 获取<p>Settlement type</p>
                     * @return TransactionType <p>Settlement type</p>
                     * 
                     */
                    std::string GetTransactionType() const;

                    /**
                     * 设置<p>Settlement type</p>
                     * @param _transactionType <p>Settlement type</p>
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
                     * 获取<p>Transaction log ID</p>
                     * @return TransactionId <p>Transaction log ID</p>
                     * 
                     */
                    std::string GetTransactionId() const;

                    /**
                     * 设置<p>Transaction log ID</p>
                     * @param _transactionId <p>Transaction log ID</p>
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
                     * 获取<p>Time of settlement</p>
                     * @return TransactionTime <p>Time of settlement</p>
                     * 
                     */
                    std::string GetTransactionTime() const;

                    /**
                     * 设置<p>Time of settlement</p>
                     * @param _transactionTime <p>Time of settlement</p>
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
                     * 获取<p>Resource usage start time</p>
                     * @return UsageStartTime <p>Resource usage start time</p>
                     * 
                     */
                    std::string GetUsageStartTime() const;

                    /**
                     * 设置<p>Resource usage start time</p>
                     * @param _usageStartTime <p>Resource usage start time</p>
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
                     * 获取<p>Resource usage end time</p>
                     * @return UsageEndTime <p>Resource usage end time</p>
                     * 
                     */
                    std::string GetUsageEndTime() const;

                    /**
                     * 设置<p>Resource usage end time</p>
                     * @param _usageEndTime <p>Resource usage end time</p>
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
                     * 获取<p>Component</p>
                     * @return ComponentType <p>Component</p>
                     * 
                     */
                    std::string GetComponentType() const;

                    /**
                     * 设置<p>Component</p>
                     * @param _componentType <p>Component</p>
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
                     * 获取<p>Component name</p>
                     * @return ComponentName <p>Component name</p>
                     * 
                     */
                    std::string GetComponentName() const;

                    /**
                     * 设置<p>Component name</p>
                     * @param _componentName <p>Component name</p>
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
                     * 获取<p>Component list price</p>
                     * @return ComponentListPrice <p>Component list price</p>
                     * 
                     */
                    std::string GetComponentListPrice() const;

                    /**
                     * 设置<p>Component list price</p>
                     * @param _componentListPrice <p>Component list price</p>
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
                     * 获取<p>Price unit</p>
                     * @return ComponentPriceMeasurementUnit <p>Price unit</p>
                     * 
                     */
                    std::string GetComponentPriceMeasurementUnit() const;

                    /**
                     * 设置<p>Price unit</p>
                     * @param _componentPriceMeasurementUnit <p>Price unit</p>
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
                     * 获取<p>Component usage</p>
                     * @return ComponentUsage <p>Component usage</p>
                     * 
                     */
                    std::string GetComponentUsage() const;

                    /**
                     * 设置<p>Component usage</p>
                     * @param _componentUsage <p>Component usage</p>
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
                     * 获取<p>Component usage unit</p>
                     * @return ComponentUsageUnit <p>Component usage unit</p>
                     * 
                     */
                    std::string GetComponentUsageUnit() const;

                    /**
                     * 设置<p>Component usage unit</p>
                     * @param _componentUsageUnit <p>Component usage unit</p>
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
                     * 获取<p>Resource usage duration</p>
                     * @return UsageDuration <p>Resource usage duration</p>
                     * 
                     */
                    std::string GetUsageDuration() const;

                    /**
                     * 设置<p>Resource usage duration</p>
                     * @param _usageDuration <p>Resource usage duration</p>
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
                     * 获取<p>Duration unit</p>
                     * @return DurationUnit <p>Duration unit</p>
                     * 
                     */
                    std::string GetDurationUnit() const;

                    /**
                     * 设置<p>Duration unit</p>
                     * @param _durationUnit <p>Duration unit</p>
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
                     * 获取<p>Original total price<br>Original Cost = Component List Price * Component Usage * Usage Duration</p>
                     * @return OriginalCost <p>Original total price<br>Original Cost = Component List Price * Component Usage * Usage Duration</p>
                     * 
                     */
                    std::string GetOriginalCost() const;

                    /**
                     * 设置<p>Original total price<br>Original Cost = Component List Price * Component Usage * Usage Duration</p>
                     * @param _originalCost <p>Original total price<br>Original Cost = Component List Price * Component Usage * Usage Duration</p>
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
                     * 获取<p>Discount (default: 1) - abandoned</p>
                     * @return DiscountRate <p>Discount (default: 1) - abandoned</p>
                     * 
                     */
                    std::string GetDiscountRate() const;

                    /**
                     * 设置<p>Discount (default: 1) - abandoned</p>
                     * @param _discountRate <p>Discount (default: 1) - abandoned</p>
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
                     * 获取<p>Currency.</p>
                     * @return Currency <p>Currency.</p>
                     * 
                     */
                    std::string GetCurrency() const;

                    /**
                     * 设置<p>Currency.</p>
                     * @param _currency <p>Currency.</p>
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
                     * 获取<p>Total cost after discount</p>
                     * @return TotalAmountAfterDiscount <p>Total cost after discount</p>
                     * 
                     */
                    std::string GetTotalAmountAfterDiscount() const;

                    /**
                     * 设置<p>Total cost after discount</p>
                     * @param _totalAmountAfterDiscount <p>Total cost after discount</p>
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
                     * 获取<p>Voucher deducted amount</p>
                     * @return VoucherDeduction <p>Voucher deducted amount</p>
                     * 
                     */
                    std::string GetVoucherDeduction() const;

                    /**
                     * 设置<p>Voucher deducted amount</p>
                     * @param _voucherDeduction <p>Voucher deducted amount</p>
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
                     * 获取<p>= Total Amount After Discount - Voucher Deduction</p>
                     * @return TotalCost <p>= Total Amount After Discount - Voucher Deduction</p>
                     * 
                     */
                    std::string GetTotalCost() const;

                    /**
                     * 设置<p>= Total Amount After Discount - Voucher Deduction</p>
                     * @param _totalCost <p>= Total Amount After Discount - Voucher Deduction</p>
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
                     * 获取<p>id</p>
                     * @return Id <p>id</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>id</p>
                     * @param _id <p>id</p>
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
                     * 获取<p>customer discount rate. The discount rate for customers of resellers, set by the reseller. The default value is 1.</p>
                     * @return CustomerDiscountRate <p>customer discount rate. The discount rate for customers of resellers, set by the reseller. The default value is 1.</p>
                     * 
                     */
                    std::string GetCustomerDiscountRate() const;

                    /**
                     * 设置<p>customer discount rate. The discount rate for customers of resellers, set by the reseller. The default value is 1.</p>
                     * @param _customerDiscountRate <p>customer discount rate. The discount rate for customers of resellers, set by the reseller. The default value is 1.</p>
                     * 
                     */
                    void SetCustomerDiscountRate(const std::string& _customerDiscountRate);

                    /**
                     * 判断参数 CustomerDiscountRate 是否已赋值
                     * @return CustomerDiscountRate 是否已赋值
                     * 
                     */
                    bool CustomerDiscountRateHasBeenSet() const;

                    /**
                     * 获取<p>Product code</p>
                     * @return BusinessCode <p>Product code</p>
                     * 
                     */
                    std::string GetBusinessCode() const;

                    /**
                     * 设置<p>Product code</p>
                     * @param _businessCode <p>Product code</p>
                     * 
                     */
                    void SetBusinessCode(const std::string& _businessCode);

                    /**
                     * 判断参数 BusinessCode 是否已赋值
                     * @return BusinessCode 是否已赋值
                     * 
                     */
                    bool BusinessCodeHasBeenSet() const;

                    /**
                     * 获取<p>Sub-product code</p>
                     * @return ProductCode <p>Sub-product code</p>
                     * 
                     */
                    std::string GetProductCode() const;

                    /**
                     * 设置<p>Sub-product code</p>
                     * @param _productCode <p>Sub-product code</p>
                     * 
                     */
                    void SetProductCode(const std::string& _productCode);

                    /**
                     * 判断参数 ProductCode 是否已赋值
                     * @return ProductCode 是否已赋值
                     * 
                     */
                    bool ProductCodeHasBeenSet() const;

                    /**
                     * 获取<p>Component type code</p>
                     * @return ComponentCode <p>Component type code</p>
                     * 
                     */
                    std::string GetComponentCode() const;

                    /**
                     * 设置<p>Component type code</p>
                     * @param _componentCode <p>Component type code</p>
                     * 
                     */
                    void SetComponentCode(const std::string& _componentCode);

                    /**
                     * 判断参数 ComponentCode 是否已赋值
                     * @return ComponentCode 是否已赋值
                     * 
                     */
                    bool ComponentCodeHasBeenSet() const;

                    /**
                     * 获取<p>Component code</p>
                     * @return ItemCode <p>Component code</p>
                     * 
                     */
                    std::string GetItemCode() const;

                    /**
                     * 设置<p>Component code</p>
                     * @param _itemCode <p>Component code</p>
                     * 
                     */
                    void SetItemCode(const std::string& _itemCode);

                    /**
                     * 判断参数 ItemCode 是否已赋值
                     * @return ItemCode 是否已赋值
                     * 
                     */
                    bool ItemCodeHasBeenSet() const;

                private:

                    /**
                     * <p> Distributor account</p>
                     */
                    int64_t m_payerAccountId;
                    bool m_payerAccountIdHasBeenSet;

                    /**
                     * <p>Sub-Customer account</p>
                     */
                    int64_t m_ownerAccountId;
                    bool m_ownerAccountIdHasBeenSet;

                    /**
                     * <p>Operator account</p>
                     */
                    int64_t m_operatorAccountId;
                    bool m_operatorAccountIdHasBeenSet;

                    /**
                     * <p>Product name.</p>
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * <p>Billing mode</p><p>Enumeration values:</p><ul><li>yearly/monthly subscription</li><li>Pay-As-You-Go resources</li></ul>
                     */
                    std::string m_billingMode;
                    bool m_billingModeHasBeenSet;

                    /**
                     * <p>Project name.</p>
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * <p>Associated region of the resource</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>Availability zone of resource</p>
                     */
                    std::string m_availabilityZone;
                    bool m_availabilityZoneHasBeenSet;

                    /**
                     * <p>Instance ID.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Instance name.</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>Sub-product name</p>
                     */
                    std::string m_subProductName;
                    bool m_subProductNameHasBeenSet;

                    /**
                     * <p>Settlement type</p>
                     */
                    std::string m_transactionType;
                    bool m_transactionTypeHasBeenSet;

                    /**
                     * <p>Transaction log ID</p>
                     */
                    std::string m_transactionId;
                    bool m_transactionIdHasBeenSet;

                    /**
                     * <p>Time of settlement</p>
                     */
                    std::string m_transactionTime;
                    bool m_transactionTimeHasBeenSet;

                    /**
                     * <p>Resource usage start time</p>
                     */
                    std::string m_usageStartTime;
                    bool m_usageStartTimeHasBeenSet;

                    /**
                     * <p>Resource usage end time</p>
                     */
                    std::string m_usageEndTime;
                    bool m_usageEndTimeHasBeenSet;

                    /**
                     * <p>Component</p>
                     */
                    std::string m_componentType;
                    bool m_componentTypeHasBeenSet;

                    /**
                     * <p>Component name</p>
                     */
                    std::string m_componentName;
                    bool m_componentNameHasBeenSet;

                    /**
                     * <p>Component list price</p>
                     */
                    std::string m_componentListPrice;
                    bool m_componentListPriceHasBeenSet;

                    /**
                     * <p>Price unit</p>
                     */
                    std::string m_componentPriceMeasurementUnit;
                    bool m_componentPriceMeasurementUnitHasBeenSet;

                    /**
                     * <p>Component usage</p>
                     */
                    std::string m_componentUsage;
                    bool m_componentUsageHasBeenSet;

                    /**
                     * <p>Component usage unit</p>
                     */
                    std::string m_componentUsageUnit;
                    bool m_componentUsageUnitHasBeenSet;

                    /**
                     * <p>Resource usage duration</p>
                     */
                    std::string m_usageDuration;
                    bool m_usageDurationHasBeenSet;

                    /**
                     * <p>Duration unit</p>
                     */
                    std::string m_durationUnit;
                    bool m_durationUnitHasBeenSet;

                    /**
                     * <p>Original total price<br>Original Cost = Component List Price * Component Usage * Usage Duration</p>
                     */
                    std::string m_originalCost;
                    bool m_originalCostHasBeenSet;

                    /**
                     * <p>Discount (default: 1) - abandoned</p>
                     */
                    std::string m_discountRate;
                    bool m_discountRateHasBeenSet;

                    /**
                     * <p>Currency.</p>
                     */
                    std::string m_currency;
                    bool m_currencyHasBeenSet;

                    /**
                     * <p>Total cost after discount</p>
                     */
                    std::string m_totalAmountAfterDiscount;
                    bool m_totalAmountAfterDiscountHasBeenSet;

                    /**
                     * <p>Voucher deducted amount</p>
                     */
                    std::string m_voucherDeduction;
                    bool m_voucherDeductionHasBeenSet;

                    /**
                     * <p>= Total Amount After Discount - Voucher Deduction</p>
                     */
                    std::string m_totalCost;
                    bool m_totalCostHasBeenSet;

                    /**
                     * <p>id</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>customer discount rate. The discount rate for customers of resellers, set by the reseller. The default value is 1.</p>
                     */
                    std::string m_customerDiscountRate;
                    bool m_customerDiscountRateHasBeenSet;

                    /**
                     * <p>Product code</p>
                     */
                    std::string m_businessCode;
                    bool m_businessCodeHasBeenSet;

                    /**
                     * <p>Sub-product code</p>
                     */
                    std::string m_productCode;
                    bool m_productCodeHasBeenSet;

                    /**
                     * <p>Component type code</p>
                     */
                    std::string m_componentCode;
                    bool m_componentCodeHasBeenSet;

                    /**
                     * <p>Component code</p>
                     */
                    std::string m_itemCode;
                    bool m_itemCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_BILLDETAILDATA_H_
