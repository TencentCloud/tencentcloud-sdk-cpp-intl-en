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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_BILLDETAILCOMPONENT_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_BILLDETAILCOMPONENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/BillDetailComponentConfig.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * Information about components charged in the bill
                */
                class BillDetailComponent : public AbstractModel
                {
                public:
                    BillDetailComponent();
                    ~BillDetailComponent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Component type: The component type of a product or service purchased, such as CVM instance components including CPU and memory.
                     * @return ComponentCodeName Component type: The component type of a product or service purchased, such as CVM instance components including CPU and memory.
                     * 
                     */
                    std::string GetComponentCodeName() const;

                    /**
                     * 设置Component type: The component type of a product or service purchased, such as CVM instance components including CPU and memory.
                     * @param _componentCodeName Component type: The component type of a product or service purchased, such as CVM instance components including CPU and memory.
                     * 
                     */
                    void SetComponentCodeName(const std::string& _componentCodeName);

                    /**
                     * 判断参数 ComponentCodeName 是否已赋值
                     * @return ComponentCodeName 是否已赋值
                     * 
                     */
                    bool ComponentCodeNameHasBeenSet() const;

                    /**
                     * 获取Component name: The specific component of a product or service purchased
                     * @return ItemCodeName Component name: The specific component of a product or service purchased
                     * 
                     */
                    std::string GetItemCodeName() const;

                    /**
                     * 设置Component name: The specific component of a product or service purchased
                     * @param _itemCodeName Component name: The specific component of a product or service purchased
                     * 
                     */
                    void SetItemCodeName(const std::string& _itemCodeName);

                    /**
                     * 判断参数 ItemCodeName 是否已赋值
                     * @return ItemCodeName 是否已赋值
                     * 
                     */
                    bool ItemCodeNameHasBeenSet() const;

                    /**
                     * 获取Component list price: The listed unit price of a component. If a customer has applied for a fixed preferential price or contract price, this parameter will not be displayed by default.
                     * @return SinglePrice Component list price: The listed unit price of a component. If a customer has applied for a fixed preferential price or contract price, this parameter will not be displayed by default.
                     * 
                     */
                    std::string GetSinglePrice() const;

                    /**
                     * 设置Component list price: The listed unit price of a component. If a customer has applied for a fixed preferential price or contract price, this parameter will not be displayed by default.
                     * @param _singlePrice Component list price: The listed unit price of a component. If a customer has applied for a fixed preferential price or contract price, this parameter will not be displayed by default.
                     * 
                     */
                    void SetSinglePrice(const std::string& _singlePrice);

                    /**
                     * 判断参数 SinglePrice 是否已赋值
                     * @return SinglePrice 是否已赋值
                     * 
                     */
                    bool SinglePriceHasBeenSet() const;

                    /**
                     * 获取Specified price of a component. This parameter has been deprecated.
                     * @return SpecifiedPrice Specified price of a component. This parameter has been deprecated.
                     * @deprecated
                     */
                    std::string GetSpecifiedPrice() const;

                    /**
                     * 设置Specified price of a component. This parameter has been deprecated.
                     * @param _specifiedPrice Specified price of a component. This parameter has been deprecated.
                     * @deprecated
                     */
                    void SetSpecifiedPrice(const std::string& _specifiedPrice);

                    /**
                     * 判断参数 SpecifiedPrice 是否已赋值
                     * @return SpecifiedPrice 是否已赋值
                     * @deprecated
                     */
                    bool SpecifiedPriceHasBeenSet() const;

                    /**
                     * 获取Component price measurement unit: The unit of measurement for a component price, which is composed of USD, usage unit, and duration unit.
                     * @return PriceUnit Component price measurement unit: The unit of measurement for a component price, which is composed of USD, usage unit, and duration unit.
                     * 
                     */
                    std::string GetPriceUnit() const;

                    /**
                     * 设置Component price measurement unit: The unit of measurement for a component price, which is composed of USD, usage unit, and duration unit.
                     * @param _priceUnit Component price measurement unit: The unit of measurement for a component price, which is composed of USD, usage unit, and duration unit.
                     * 
                     */
                    void SetPriceUnit(const std::string& _priceUnit);

                    /**
                     * 判断参数 PriceUnit 是否已赋值
                     * @return PriceUnit 是否已赋值
                     * 
                     */
                    bool PriceUnitHasBeenSet() const;

                    /**
                     * 获取Component usage: The actually settled usage of a component, which is "Raw usage - Deducted usage (including packages)".
                     * @return UsedAmount Component usage: The actually settled usage of a component, which is "Raw usage - Deducted usage (including packages)".
                     * 
                     */
                    std::string GetUsedAmount() const;

                    /**
                     * 设置Component usage: The actually settled usage of a component, which is "Raw usage - Deducted usage (including packages)".
                     * @param _usedAmount Component usage: The actually settled usage of a component, which is "Raw usage - Deducted usage (including packages)".
                     * 
                     */
                    void SetUsedAmount(const std::string& _usedAmount);

                    /**
                     * 判断参数 UsedAmount 是否已赋值
                     * @return UsedAmount 是否已赋值
                     * 
                     */
                    bool UsedAmountHasBeenSet() const;

                    /**
                     * 获取Component usage unit: The unit of measurement for component usage
                     * @return UsedAmountUnit Component usage unit: The unit of measurement for component usage
                     * 
                     */
                    std::string GetUsedAmountUnit() const;

                    /**
                     * 设置Component usage unit: The unit of measurement for component usage
                     * @param _usedAmountUnit Component usage unit: The unit of measurement for component usage
                     * 
                     */
                    void SetUsedAmountUnit(const std::string& _usedAmountUnit);

                    /**
                     * 判断参数 UsedAmountUnit 是否已赋值
                     * @return UsedAmountUnit 是否已赋值
                     * 
                     */
                    bool UsedAmountUnitHasBeenSet() const;

                    /**
                     * 获取Original usage/duration: The original usage of the component before deduction by resource packages.
                     * @return RealTotalMeasure Original usage/duration: The original usage of the component before deduction by resource packages.
                     * 
                     */
                    std::string GetRealTotalMeasure() const;

                    /**
                     * 设置Original usage/duration: The original usage of the component before deduction by resource packages.
                     * @param _realTotalMeasure Original usage/duration: The original usage of the component before deduction by resource packages.
                     * 
                     */
                    void SetRealTotalMeasure(const std::string& _realTotalMeasure);

                    /**
                     * 判断参数 RealTotalMeasure 是否已赋值
                     * @return RealTotalMeasure 是否已赋值
                     * 
                     */
                    bool RealTotalMeasureHasBeenSet() const;

                    /**
                     * 获取Deduction of usage/duration (including resource packages): The amount of usage/duration deducted by resource packages
                     * @return DeductedMeasure Deduction of usage/duration (including resource packages): The amount of usage/duration deducted by resource packages
                     * 
                     */
                    std::string GetDeductedMeasure() const;

                    /**
                     * 设置Deduction of usage/duration (including resource packages): The amount of usage/duration deducted by resource packages
                     * @param _deductedMeasure Deduction of usage/duration (including resource packages): The amount of usage/duration deducted by resource packages
                     * 
                     */
                    void SetDeductedMeasure(const std::string& _deductedMeasure);

                    /**
                     * 判断参数 DeductedMeasure 是否已赋值
                     * @return DeductedMeasure 是否已赋值
                     * 
                     */
                    bool DeductedMeasureHasBeenSet() const;

                    /**
                     * 获取Usage duration: The resource usage duration
                     * @return TimeSpan Usage duration: The resource usage duration
                     * 
                     */
                    std::string GetTimeSpan() const;

                    /**
                     * 设置Usage duration: The resource usage duration
                     * @param _timeSpan Usage duration: The resource usage duration
                     * 
                     */
                    void SetTimeSpan(const std::string& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取Duration unit: The unit of measurement for usage duration
                     * @return TimeUnitName Duration unit: The unit of measurement for usage duration
                     * 
                     */
                    std::string GetTimeUnitName() const;

                    /**
                     * 设置Duration unit: The unit of measurement for usage duration
                     * @param _timeUnitName Duration unit: The unit of measurement for usage duration
                     * 
                     */
                    void SetTimeUnitName(const std::string& _timeUnitName);

                    /**
                     * 判断参数 TimeUnitName 是否已赋值
                     * @return TimeUnitName 是否已赋值
                     * 
                     */
                    bool TimeUnitNameHasBeenSet() const;

                    /**
                     * 获取Original cost: The original cost of a resource, which is "List price x Usage x Usage duration". If a customer has applied for a fixed preferential price or contract price or is in a refund scenario, this parameter will not be displayed by default.
                     * @return Cost Original cost: The original cost of a resource, which is "List price x Usage x Usage duration". If a customer has applied for a fixed preferential price or contract price or is in a refund scenario, this parameter will not be displayed by default.
                     * 
                     */
                    std::string GetCost() const;

                    /**
                     * 设置Original cost: The original cost of a resource, which is "List price x Usage x Usage duration". If a customer has applied for a fixed preferential price or contract price or is in a refund scenario, this parameter will not be displayed by default.
                     * @param _cost Original cost: The original cost of a resource, which is "List price x Usage x Usage duration". If a customer has applied for a fixed preferential price or contract price or is in a refund scenario, this parameter will not be displayed by default.
                     * 
                     */
                    void SetCost(const std::string& _cost);

                    /**
                     * 判断参数 Cost 是否已赋值
                     * @return Cost 是否已赋值
                     * 
                     */
                    bool CostHasBeenSet() const;

                    /**
                     * 获取Discount multiplier: The discount multiplier applied to the cost of the resource. If a customer has applied for a fixed preferential price or contract price or is in a refund scenario, this parameter will not be displayed by default.
                     * @return Discount Discount multiplier: The discount multiplier applied to the cost of the resource. If a customer has applied for a fixed preferential price or contract price or is in a refund scenario, this parameter will not be displayed by default.
                     * 
                     */
                    std::string GetDiscount() const;

                    /**
                     * 设置Discount multiplier: The discount multiplier applied to the cost of the resource. If a customer has applied for a fixed preferential price or contract price or is in a refund scenario, this parameter will not be displayed by default.
                     * @param _discount Discount multiplier: The discount multiplier applied to the cost of the resource. If a customer has applied for a fixed preferential price or contract price or is in a refund scenario, this parameter will not be displayed by default.
                     * 
                     */
                    void SetDiscount(const std::string& _discount);

                    /**
                     * 判断参数 Discount 是否已赋值
                     * @return Discount 是否已赋值
                     * 
                     */
                    bool DiscountHasBeenSet() const;

                    /**
                     * 获取Offer type
                     * @return ReduceType Offer type
                     * 
                     */
                    std::string GetReduceType() const;

                    /**
                     * 设置Offer type
                     * @param _reduceType Offer type
                     * 
                     */
                    void SetReduceType(const std::string& _reduceType);

                    /**
                     * 判断参数 ReduceType 是否已赋值
                     * @return ReduceType 是否已赋值
                     * 
                     */
                    bool ReduceTypeHasBeenSet() const;

                    /**
                     * 获取Total amount after discount: Total amount after discount = (Original cost - RI deduction (cost) - SP deduction (cost)) x Discount multiplier
                     * @return RealCost Total amount after discount: Total amount after discount = (Original cost - RI deduction (cost) - SP deduction (cost)) x Discount multiplier
                     * 
                     */
                    std::string GetRealCost() const;

                    /**
                     * 设置Total amount after discount: Total amount after discount = (Original cost - RI deduction (cost) - SP deduction (cost)) x Discount multiplier
                     * @param _realCost Total amount after discount: Total amount after discount = (Original cost - RI deduction (cost) - SP deduction (cost)) x Discount multiplier
                     * 
                     */
                    void SetRealCost(const std::string& _realCost);

                    /**
                     * 判断参数 RealCost 是否已赋值
                     * @return RealCost 是否已赋值
                     * 
                     */
                    bool RealCostHasBeenSet() const;

                    /**
                     * 获取Voucher payment: The voucher deduction amount
                     * @return VoucherPayAmount Voucher payment: The voucher deduction amount
                     * 
                     */
                    std::string GetVoucherPayAmount() const;

                    /**
                     * 设置Voucher payment: The voucher deduction amount
                     * @param _voucherPayAmount Voucher payment: The voucher deduction amount
                     * 
                     */
                    void SetVoucherPayAmount(const std::string& _voucherPayAmount);

                    /**
                     * 判断参数 VoucherPayAmount 是否已赋值
                     * @return VoucherPayAmount 是否已赋值
                     * 
                     */
                    bool VoucherPayAmountHasBeenSet() const;

                    /**
                     * 获取Cash credit: The amount paid from the user's cash account

                     * @return CashPayAmount Cash credit: The amount paid from the user's cash account

                     * 
                     */
                    std::string GetCashPayAmount() const;

                    /**
                     * 设置Cash credit: The amount paid from the user's cash account

                     * @param _cashPayAmount Cash credit: The amount paid from the user's cash account

                     * 
                     */
                    void SetCashPayAmount(const std::string& _cashPayAmount);

                    /**
                     * 判断参数 CashPayAmount 是否已赋值
                     * @return CashPayAmount 是否已赋值
                     * 
                     */
                    bool CashPayAmountHasBeenSet() const;

                    /**
                     * 获取Free credit: The amount paid with the user's free credit

                     * @return IncentivePayAmount Free credit: The amount paid with the user's free credit

                     * 
                     */
                    std::string GetIncentivePayAmount() const;

                    /**
                     * 设置Free credit: The amount paid with the user's free credit

                     * @param _incentivePayAmount Free credit: The amount paid with the user's free credit

                     * 
                     */
                    void SetIncentivePayAmount(const std::string& _incentivePayAmount);

                    /**
                     * 判断参数 IncentivePayAmount 是否已赋值
                     * @return IncentivePayAmount 是否已赋值
                     * 
                     */
                    bool IncentivePayAmountHasBeenSet() const;

                    /**
                     * 获取Royalty account expenditure: The amount paid through the royalty account
                     * @return TransferPayAmount Royalty account expenditure: The amount paid through the royalty account
                     * 
                     */
                    std::string GetTransferPayAmount() const;

                    /**
                     * 设置Royalty account expenditure: The amount paid through the royalty account
                     * @param _transferPayAmount Royalty account expenditure: The amount paid through the royalty account
                     * 
                     */
                    void SetTransferPayAmount(const std::string& _transferPayAmount);

                    /**
                     * 判断参数 TransferPayAmount 是否已赋值
                     * @return TransferPayAmount 是否已赋值
                     * 
                     */
                    bool TransferPayAmountHasBeenSet() const;

                    /**
                     * 获取Component type code
                     * @return ItemCode Component type code
                     * 
                     */
                    std::string GetItemCode() const;

                    /**
                     * 设置Component type code
                     * @param _itemCode Component type code
                     * 
                     */
                    void SetItemCode(const std::string& _itemCode);

                    /**
                     * 判断参数 ItemCode 是否已赋值
                     * @return ItemCode 是否已赋值
                     * 
                     */
                    bool ItemCodeHasBeenSet() const;

                    /**
                     * 获取Component name code
                     * @return ComponentCode Component name code
                     * 
                     */
                    std::string GetComponentCode() const;

                    /**
                     * 设置Component name code
                     * @param _componentCode Component name code
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
                     * 获取Component unit price: Discounted unit price of the component. Component unit price = list price * discount.
                     * @return ContractPrice Component unit price: Discounted unit price of the component. Component unit price = list price * discount.
                     * 
                     */
                    std::string GetContractPrice() const;

                    /**
                     * 设置Component unit price: Discounted unit price of the component. Component unit price = list price * discount.
                     * @param _contractPrice Component unit price: Discounted unit price of the component. Component unit price = list price * discount.
                     * 
                     */
                    void SetContractPrice(const std::string& _contractPrice);

                    /**
                     * 判断参数 ContractPrice 是否已赋值
                     * @return ContractPrice 是否已赋值
                     * 
                     */
                    bool ContractPriceHasBeenSet() const;

                    /**
                     * 获取Instance type: The type of an instance corresponding to the product service purchased, including resource packages, RI, SP, and spot instances. Normal instance display is not displayed by default.
                     * @return InstanceType Instance type: The type of an instance corresponding to the product service purchased, including resource packages, RI, SP, and spot instances. Normal instance display is not displayed by default.
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Instance type: The type of an instance corresponding to the product service purchased, including resource packages, RI, SP, and spot instances. Normal instance display is not displayed by default.
                     * @param _instanceType Instance type: The type of an instance corresponding to the product service purchased, including resource packages, RI, SP, and spot instances. Normal instance display is not displayed by default.
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取RI deduction duration: The duration of use deducted by reserved instances for this product or service.
                     * @return RiTimeSpan RI deduction duration: The duration of use deducted by reserved instances for this product or service.
                     * 
                     */
                    std::string GetRiTimeSpan() const;

                    /**
                     * 设置RI deduction duration: The duration of use deducted by reserved instances for this product or service.
                     * @param _riTimeSpan RI deduction duration: The duration of use deducted by reserved instances for this product or service.
                     * 
                     */
                    void SetRiTimeSpan(const std::string& _riTimeSpan);

                    /**
                     * 判断参数 RiTimeSpan 是否已赋值
                     * @return RiTimeSpan 是否已赋值
                     * 
                     */
                    bool RiTimeSpanHasBeenSet() const;

                    /**
                     * 获取Reserved Instance Deduction Component Original Price: The original price of a component deducted by reserved instances for this product or service
                     * @return OriginalCostWithRI Reserved Instance Deduction Component Original Price: The original price of a component deducted by reserved instances for this product or service
                     * 
                     */
                    std::string GetOriginalCostWithRI() const;

                    /**
                     * 设置Reserved Instance Deduction Component Original Price: The original price of a component deducted by reserved instances for this product or service
                     * @param _originalCostWithRI Reserved Instance Deduction Component Original Price: The original price of a component deducted by reserved instances for this product or service
                     * 
                     */
                    void SetOriginalCostWithRI(const std::string& _originalCostWithRI);

                    /**
                     * 判断参数 OriginalCostWithRI 是否已赋值
                     * @return OriginalCostWithRI 是否已赋值
                     * 
                     */
                    bool OriginalCostWithRIHasBeenSet() const;

                    /**
                     * 获取Savings plan deduction rate: The discount rate for this component within the available balance limit of the savings plan
                     * @return SPDeductionRate Savings plan deduction rate: The discount rate for this component within the available balance limit of the savings plan
                     * 
                     */
                    std::string GetSPDeductionRate() const;

                    /**
                     * 设置Savings plan deduction rate: The discount rate for this component within the available balance limit of the savings plan
                     * @param _sPDeductionRate Savings plan deduction rate: The discount rate for this component within the available balance limit of the savings plan
                     * 
                     */
                    void SetSPDeductionRate(const std::string& _sPDeductionRate);

                    /**
                     * 判断参数 SPDeductionRate 是否已赋值
                     * @return SPDeductionRate 是否已赋值
                     * 
                     */
                    bool SPDeductionRateHasBeenSet() const;

                    /**
                     * 获取Cost deduction by SP. This parameter has been deprecated. Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SPDeduction Cost deduction by SP. This parameter has been deprecated. Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    std::string GetSPDeduction() const;

                    /**
                     * 设置Cost deduction by SP. This parameter has been deprecated. Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sPDeduction Cost deduction by SP. This parameter has been deprecated. Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    void SetSPDeduction(const std::string& _sPDeduction);

                    /**
                     * 判断参数 SPDeduction 是否已赋值
                     * @return SPDeduction 是否已赋值
                     * @deprecated
                     */
                    bool SPDeductionHasBeenSet() const;

                    /**
                     * 获取Original Price of Savings Plan Deduction Component: Savings Plan Deduction from Original Price = Deduction Amount of Savings Plan Package / Savings Plan Deduction Rate
                     * @return OriginalCostWithSP Original Price of Savings Plan Deduction Component: Savings Plan Deduction from Original Price = Deduction Amount of Savings Plan Package / Savings Plan Deduction Rate
                     * 
                     */
                    std::string GetOriginalCostWithSP() const;

                    /**
                     * 设置Original Price of Savings Plan Deduction Component: Savings Plan Deduction from Original Price = Deduction Amount of Savings Plan Package / Savings Plan Deduction Rate
                     * @param _originalCostWithSP Original Price of Savings Plan Deduction Component: Savings Plan Deduction from Original Price = Deduction Amount of Savings Plan Package / Savings Plan Deduction Rate
                     * 
                     */
                    void SetOriginalCostWithSP(const std::string& _originalCostWithSP);

                    /**
                     * 判断参数 OriginalCostWithSP 是否已赋值
                     * @return OriginalCostWithSP 是否已赋值
                     * 
                     */
                    bool OriginalCostWithSPHasBeenSet() const;

                    /**
                     * 获取Mixed discount rate: The final discount rate after integrating various discount deductions. Mixed Discount Rate = Discounted total price/Component original price.
                     * @return BlendedDiscount Mixed discount rate: The final discount rate after integrating various discount deductions. Mixed Discount Rate = Discounted total price/Component original price.
                     * 
                     */
                    std::string GetBlendedDiscount() const;

                    /**
                     * 设置Mixed discount rate: The final discount rate after integrating various discount deductions. Mixed Discount Rate = Discounted total price/Component original price.
                     * @param _blendedDiscount Mixed discount rate: The final discount rate after integrating various discount deductions. Mixed Discount Rate = Discounted total price/Component original price.
                     * 
                     */
                    void SetBlendedDiscount(const std::string& _blendedDiscount);

                    /**
                     * 判断参数 BlendedDiscount 是否已赋值
                     * @return BlendedDiscount 是否已赋值
                     * 
                     */
                    bool BlendedDiscountHasBeenSet() const;

                    /**
                     * 获取Configuration description: Information on specification of resource configuration
                     * @return ComponentConfig Configuration description: Information on specification of resource configuration
                     * 
                     */
                    std::vector<BillDetailComponentConfig> GetComponentConfig() const;

                    /**
                     * 设置Configuration description: Information on specification of resource configuration
                     * @param _componentConfig Configuration description: Information on specification of resource configuration
                     * 
                     */
                    void SetComponentConfig(const std::vector<BillDetailComponentConfig>& _componentConfig);

                    /**
                     * 判断参数 ComponentConfig 是否已赋值
                     * @return ComponentConfig 是否已赋值
                     * 
                     */
                    bool ComponentConfigHasBeenSet() const;

                    /**
                     * 获取tax rate
                     * @return TaxRate tax rate
                     * 
                     */
                    std::string GetTaxRate() const;

                    /**
                     * 设置tax rate
                     * @param _taxRate tax rate
                     * 
                     */
                    void SetTaxRate(const std::string& _taxRate);

                    /**
                     * 判断参数 TaxRate 是否已赋值
                     * @return TaxRate 是否已赋值
                     * 
                     */
                    bool TaxRateHasBeenSet() const;

                    /**
                     * 获取Tax.
                     * @return TaxAmount Tax.
                     * 
                     */
                    std::string GetTaxAmount() const;

                    /**
                     * 设置Tax.
                     * @param _taxAmount Tax.
                     * 
                     */
                    void SetTaxAmount(const std::string& _taxAmount);

                    /**
                     * 判断参数 TaxAmount 是否已赋值
                     * @return TaxAmount 是否已赋值
                     * 
                     */
                    bool TaxAmountHasBeenSet() const;

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

                private:

                    /**
                     * Component type: The component type of a product or service purchased, such as CVM instance components including CPU and memory.
                     */
                    std::string m_componentCodeName;
                    bool m_componentCodeNameHasBeenSet;

                    /**
                     * Component name: The specific component of a product or service purchased
                     */
                    std::string m_itemCodeName;
                    bool m_itemCodeNameHasBeenSet;

                    /**
                     * Component list price: The listed unit price of a component. If a customer has applied for a fixed preferential price or contract price, this parameter will not be displayed by default.
                     */
                    std::string m_singlePrice;
                    bool m_singlePriceHasBeenSet;

                    /**
                     * Specified price of a component. This parameter has been deprecated.
                     */
                    std::string m_specifiedPrice;
                    bool m_specifiedPriceHasBeenSet;

                    /**
                     * Component price measurement unit: The unit of measurement for a component price, which is composed of USD, usage unit, and duration unit.
                     */
                    std::string m_priceUnit;
                    bool m_priceUnitHasBeenSet;

                    /**
                     * Component usage: The actually settled usage of a component, which is "Raw usage - Deducted usage (including packages)".
                     */
                    std::string m_usedAmount;
                    bool m_usedAmountHasBeenSet;

                    /**
                     * Component usage unit: The unit of measurement for component usage
                     */
                    std::string m_usedAmountUnit;
                    bool m_usedAmountUnitHasBeenSet;

                    /**
                     * Original usage/duration: The original usage of the component before deduction by resource packages.
                     */
                    std::string m_realTotalMeasure;
                    bool m_realTotalMeasureHasBeenSet;

                    /**
                     * Deduction of usage/duration (including resource packages): The amount of usage/duration deducted by resource packages
                     */
                    std::string m_deductedMeasure;
                    bool m_deductedMeasureHasBeenSet;

                    /**
                     * Usage duration: The resource usage duration
                     */
                    std::string m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * Duration unit: The unit of measurement for usage duration
                     */
                    std::string m_timeUnitName;
                    bool m_timeUnitNameHasBeenSet;

                    /**
                     * Original cost: The original cost of a resource, which is "List price x Usage x Usage duration". If a customer has applied for a fixed preferential price or contract price or is in a refund scenario, this parameter will not be displayed by default.
                     */
                    std::string m_cost;
                    bool m_costHasBeenSet;

                    /**
                     * Discount multiplier: The discount multiplier applied to the cost of the resource. If a customer has applied for a fixed preferential price or contract price or is in a refund scenario, this parameter will not be displayed by default.
                     */
                    std::string m_discount;
                    bool m_discountHasBeenSet;

                    /**
                     * Offer type
                     */
                    std::string m_reduceType;
                    bool m_reduceTypeHasBeenSet;

                    /**
                     * Total amount after discount: Total amount after discount = (Original cost - RI deduction (cost) - SP deduction (cost)) x Discount multiplier
                     */
                    std::string m_realCost;
                    bool m_realCostHasBeenSet;

                    /**
                     * Voucher payment: The voucher deduction amount
                     */
                    std::string m_voucherPayAmount;
                    bool m_voucherPayAmountHasBeenSet;

                    /**
                     * Cash credit: The amount paid from the user's cash account

                     */
                    std::string m_cashPayAmount;
                    bool m_cashPayAmountHasBeenSet;

                    /**
                     * Free credit: The amount paid with the user's free credit

                     */
                    std::string m_incentivePayAmount;
                    bool m_incentivePayAmountHasBeenSet;

                    /**
                     * Royalty account expenditure: The amount paid through the royalty account
                     */
                    std::string m_transferPayAmount;
                    bool m_transferPayAmountHasBeenSet;

                    /**
                     * Component type code
                     */
                    std::string m_itemCode;
                    bool m_itemCodeHasBeenSet;

                    /**
                     * Component name code
                     */
                    std::string m_componentCode;
                    bool m_componentCodeHasBeenSet;

                    /**
                     * Component unit price: Discounted unit price of the component. Component unit price = list price * discount.
                     */
                    std::string m_contractPrice;
                    bool m_contractPriceHasBeenSet;

                    /**
                     * Instance type: The type of an instance corresponding to the product service purchased, including resource packages, RI, SP, and spot instances. Normal instance display is not displayed by default.
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * RI deduction duration: The duration of use deducted by reserved instances for this product or service.
                     */
                    std::string m_riTimeSpan;
                    bool m_riTimeSpanHasBeenSet;

                    /**
                     * Reserved Instance Deduction Component Original Price: The original price of a component deducted by reserved instances for this product or service
                     */
                    std::string m_originalCostWithRI;
                    bool m_originalCostWithRIHasBeenSet;

                    /**
                     * Savings plan deduction rate: The discount rate for this component within the available balance limit of the savings plan
                     */
                    std::string m_sPDeductionRate;
                    bool m_sPDeductionRateHasBeenSet;

                    /**
                     * Cost deduction by SP. This parameter has been deprecated. Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sPDeduction;
                    bool m_sPDeductionHasBeenSet;

                    /**
                     * Original Price of Savings Plan Deduction Component: Savings Plan Deduction from Original Price = Deduction Amount of Savings Plan Package / Savings Plan Deduction Rate
                     */
                    std::string m_originalCostWithSP;
                    bool m_originalCostWithSPHasBeenSet;

                    /**
                     * Mixed discount rate: The final discount rate after integrating various discount deductions. Mixed Discount Rate = Discounted total price/Component original price.
                     */
                    std::string m_blendedDiscount;
                    bool m_blendedDiscountHasBeenSet;

                    /**
                     * Configuration description: Information on specification of resource configuration
                     */
                    std::vector<BillDetailComponentConfig> m_componentConfig;
                    bool m_componentConfigHasBeenSet;

                    /**
                     * tax rate
                     */
                    std::string m_taxRate;
                    bool m_taxRateHasBeenSet;

                    /**
                     * Tax.
                     */
                    std::string m_taxAmount;
                    bool m_taxAmountHasBeenSet;

                    /**
                     * Currency.
                     */
                    std::string m_currency;
                    bool m_currencyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_BILLDETAILCOMPONENT_H_
