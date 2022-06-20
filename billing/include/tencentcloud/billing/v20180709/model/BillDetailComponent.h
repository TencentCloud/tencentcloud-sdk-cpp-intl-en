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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_BILLDETAILCOMPONENT_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_BILLDETAILCOMPONENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


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
                     * 获取Component type: type of a resource component, e.g. memory, disk, etc.
                     * @return ComponentCodeName Component type: type of a resource component, e.g. memory, disk, etc.
                     */
                    std::string GetComponentCodeName() const;

                    /**
                     * 设置Component type: type of a resource component, e.g. memory, disk, etc.
                     * @param ComponentCodeName Component type: type of a resource component, e.g. memory, disk, etc.
                     */
                    void SetComponentCodeName(const std::string& _componentCodeName);

                    /**
                     * 判断参数 ComponentCodeName 是否已赋值
                     * @return ComponentCodeName 是否已赋值
                     */
                    bool ComponentCodeNameHasBeenSet() const;

                    /**
                     * 获取Component name: name of a resource component, e.g. TencentDB for MySQL-memory
                     * @return ItemCodeName Component name: name of a resource component, e.g. TencentDB for MySQL-memory
                     */
                    std::string GetItemCodeName() const;

                    /**
                     * 设置Component name: name of a resource component, e.g. TencentDB for MySQL-memory
                     * @param ItemCodeName Component name: name of a resource component, e.g. TencentDB for MySQL-memory
                     */
                    void SetItemCodeName(const std::string& _itemCodeName);

                    /**
                     * 判断参数 ItemCodeName 是否已赋值
                     * @return ItemCodeName 是否已赋值
                     */
                    bool ItemCodeNameHasBeenSet() const;

                    /**
                     * 获取Component published price: original price of a resource component with the original granularity
                     * @return SinglePrice Component published price: original price of a resource component with the original granularity
                     */
                    std::string GetSinglePrice() const;

                    /**
                     * 设置Component published price: original price of a resource component with the original granularity
                     * @param SinglePrice Component published price: original price of a resource component with the original granularity
                     */
                    void SetSinglePrice(const std::string& _singlePrice);

                    /**
                     * 判断参数 SinglePrice 是否已赋值
                     * @return SinglePrice 是否已赋值
                     */
                    bool SinglePriceHasBeenSet() const;

                    /**
                     * 获取Specified price of the component
                     * @return SpecifiedPrice Specified price of the component
                     */
                    std::string GetSpecifiedPrice() const;

                    /**
                     * 设置Specified price of the component
                     * @param SpecifiedPrice Specified price of the component
                     */
                    void SetSpecifiedPrice(const std::string& _specifiedPrice);

                    /**
                     * 判断参数 SpecifiedPrice 是否已赋值
                     * @return SpecifiedPrice 是否已赋值
                     */
                    bool SpecifiedPriceHasBeenSet() const;

                    /**
                     * 获取Price unit
                     * @return PriceUnit Price unit
                     */
                    std::string GetPriceUnit() const;

                    /**
                     * 设置Price unit
                     * @param PriceUnit Price unit
                     */
                    void SetPriceUnit(const std::string& _priceUnit);

                    /**
                     * 判断参数 PriceUnit 是否已赋值
                     * @return PriceUnit 是否已赋值
                     */
                    bool PriceUnitHasBeenSet() const;

                    /**
                     * 获取Component usage
                     * @return UsedAmount Component usage
                     */
                    std::string GetUsedAmount() const;

                    /**
                     * 设置Component usage
                     * @param UsedAmount Component usage
                     */
                    void SetUsedAmount(const std::string& _usedAmount);

                    /**
                     * 判断参数 UsedAmount 是否已赋值
                     * @return UsedAmount 是否已赋值
                     */
                    bool UsedAmountHasBeenSet() const;

                    /**
                     * 获取Component usage unit
                     * @return UsedAmountUnit Component usage unit
                     */
                    std::string GetUsedAmountUnit() const;

                    /**
                     * 设置Component usage unit
                     * @param UsedAmountUnit Component usage unit
                     */
                    void SetUsedAmountUnit(const std::string& _usedAmountUnit);

                    /**
                     * 判断参数 UsedAmountUnit 是否已赋值
                     * @return UsedAmountUnit 是否已赋值
                     */
                    bool UsedAmountUnitHasBeenSet() const;

                    /**
                     * 获取Usage period
                     * @return TimeSpan Usage period
                     */
                    std::string GetTimeSpan() const;

                    /**
                     * 设置Usage period
                     * @param TimeSpan Usage period
                     */
                    void SetTimeSpan(const std::string& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取Time unit
                     * @return TimeUnitName Time unit
                     */
                    std::string GetTimeUnitName() const;

                    /**
                     * 设置Time unit
                     * @param TimeUnitName Time unit
                     */
                    void SetTimeUnitName(const std::string& _timeUnitName);

                    /**
                     * 判断参数 TimeUnitName 是否已赋值
                     * @return TimeUnitName 是否已赋值
                     */
                    bool TimeUnitNameHasBeenSet() const;

                    /**
                     * 获取Original price of the component
                     * @return Cost Original price of the component
                     */
                    std::string GetCost() const;

                    /**
                     * 设置Original price of the component
                     * @param Cost Original price of the component
                     */
                    void SetCost(const std::string& _cost);

                    /**
                     * 判断参数 Cost 是否已赋值
                     * @return Cost 是否已赋值
                     */
                    bool CostHasBeenSet() const;

                    /**
                     * 获取Discount rate
                     * @return Discount Discount rate
                     */
                    std::string GetDiscount() const;

                    /**
                     * 设置Discount rate
                     * @param Discount Discount rate
                     */
                    void SetDiscount(const std::string& _discount);

                    /**
                     * 判断参数 Discount 是否已赋值
                     * @return Discount 是否已赋值
                     */
                    bool DiscountHasBeenSet() const;

                    /**
                     * 获取Offer type
                     * @return ReduceType Offer type
                     */
                    std::string GetReduceType() const;

                    /**
                     * 设置Offer type
                     * @param ReduceType Offer type
                     */
                    void SetReduceType(const std::string& _reduceType);

                    /**
                     * 判断参数 ReduceType 是否已赋值
                     * @return ReduceType 是否已赋值
                     */
                    bool ReduceTypeHasBeenSet() const;

                    /**
                     * 获取Total discounted price
                     * @return RealCost Total discounted price
                     */
                    std::string GetRealCost() const;

                    /**
                     * 设置Total discounted price
                     * @param RealCost Total discounted price
                     */
                    void SetRealCost(const std::string& _realCost);

                    /**
                     * 判断参数 RealCost 是否已赋值
                     * @return RealCost 是否已赋值
                     */
                    bool RealCostHasBeenSet() const;

                    /**
                     * 获取Amount paid in voucher
                     * @return VoucherPayAmount Amount paid in voucher
                     */
                    std::string GetVoucherPayAmount() const;

                    /**
                     * 设置Amount paid in voucher
                     * @param VoucherPayAmount Amount paid in voucher
                     */
                    void SetVoucherPayAmount(const std::string& _voucherPayAmount);

                    /**
                     * 判断参数 VoucherPayAmount 是否已赋值
                     * @return VoucherPayAmount 是否已赋值
                     */
                    bool VoucherPayAmountHasBeenSet() const;

                    /**
                     * 获取Amount paid in cash
                     * @return CashPayAmount Amount paid in cash
                     */
                    std::string GetCashPayAmount() const;

                    /**
                     * 设置Amount paid in cash
                     * @param CashPayAmount Amount paid in cash
                     */
                    void SetCashPayAmount(const std::string& _cashPayAmount);

                    /**
                     * 判断参数 CashPayAmount 是否已赋值
                     * @return CashPayAmount 是否已赋值
                     */
                    bool CashPayAmountHasBeenSet() const;

                    /**
                     * 获取Amount paid in trial credit
                     * @return IncentivePayAmount Amount paid in trial credit
                     */
                    std::string GetIncentivePayAmount() const;

                    /**
                     * 设置Amount paid in trial credit
                     * @param IncentivePayAmount Amount paid in trial credit
                     */
                    void SetIncentivePayAmount(const std::string& _incentivePayAmount);

                    /**
                     * 判断参数 IncentivePayAmount 是否已赋值
                     * @return IncentivePayAmount 是否已赋值
                     */
                    bool IncentivePayAmountHasBeenSet() const;

                    /**
                     * 获取Component type code
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ItemCode Component type code
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetItemCode() const;

                    /**
                     * 设置Component type code
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param ItemCode Component type code
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetItemCode(const std::string& _itemCode);

                    /**
                     * 判断参数 ItemCode 是否已赋值
                     * @return ItemCode 是否已赋值
                     */
                    bool ItemCodeHasBeenSet() const;

                    /**
                     * 获取Component code
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ComponentCode Component code
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetComponentCode() const;

                    /**
                     * 设置Component code
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param ComponentCode Component code
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetComponentCode(const std::string& _componentCode);

                    /**
                     * 判断参数 ComponentCode 是否已赋值
                     * @return ComponentCode 是否已赋值
                     */
                    bool ComponentCodeHasBeenSet() const;

                    /**
                     * 获取Contract price
                     * @return ContractPrice Contract price
                     */
                    std::string GetContractPrice() const;

                    /**
                     * 设置Contract price
                     * @param ContractPrice Contract price
                     */
                    void SetContractPrice(const std::string& _contractPrice);

                    /**
                     * 判断参数 ContractPrice 是否已赋值
                     * @return ContractPrice 是否已赋值
                     */
                    bool ContractPriceHasBeenSet() const;

                    /**
                     * 获取The special instance (resource pack, reserved instance, savings plan, or spot instance) that is applied to deduction. Valid values:
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return InstanceType The special instance (resource pack, reserved instance, savings plan, or spot instance) that is applied to deduction. Valid values:
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置The special instance (resource pack, reserved instance, savings plan, or spot instance) that is applied to deduction. Valid values:
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param InstanceType The special instance (resource pack, reserved instance, savings plan, or spot instance) that is applied to deduction. Valid values:
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取The usage duration deducted by a reserved instance. The unit of measurement for deduction is the same as that for usage duration.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return RiTimeSpan The usage duration deducted by a reserved instance. The unit of measurement for deduction is the same as that for usage duration.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetRiTimeSpan() const;

                    /**
                     * 设置The usage duration deducted by a reserved instance. The unit of measurement for deduction is the same as that for usage duration.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param RiTimeSpan The usage duration deducted by a reserved instance. The unit of measurement for deduction is the same as that for usage duration.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetRiTimeSpan(const std::string& _riTimeSpan);

                    /**
                     * 判断参数 RiTimeSpan 是否已赋值
                     * @return RiTimeSpan 是否已赋值
                     */
                    bool RiTimeSpanHasBeenSet() const;

                    /**
                     * 获取The amount deducted by a reserved instance based on the original component cost.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return OriginalCostWithRI The amount deducted by a reserved instance based on the original component cost.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetOriginalCostWithRI() const;

                    /**
                     * 设置The amount deducted by a reserved instance based on the original component cost.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param OriginalCostWithRI The amount deducted by a reserved instance based on the original component cost.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetOriginalCostWithRI(const std::string& _originalCostWithRI);

                    /**
                     * 判断参数 OriginalCostWithRI 是否已赋值
                     * @return OriginalCostWithRI 是否已赋值
                     */
                    bool OriginalCostWithRIHasBeenSet() const;

                    /**
                     * 获取The discount multiplier that applies to the component based on the remaining commitment of the savings plan.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return SPDeductionRate The discount multiplier that applies to the component based on the remaining commitment of the savings plan.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetSPDeductionRate() const;

                    /**
                     * 设置The discount multiplier that applies to the component based on the remaining commitment of the savings plan.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param SPDeductionRate The discount multiplier that applies to the component based on the remaining commitment of the savings plan.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetSPDeductionRate(const std::string& _sPDeductionRate);

                    /**
                     * 判断参数 SPDeductionRate 是否已赋值
                     * @return SPDeductionRate 是否已赋值
                     */
                    bool SPDeductionRateHasBeenSet() const;

                    /**
                     * 获取The savings plan deduction amount.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return SPDeduction The savings plan deduction amount.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetSPDeduction() const;

                    /**
                     * 设置The savings plan deduction amount.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param SPDeduction The savings plan deduction amount.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetSPDeduction(const std::string& _sPDeduction);

                    /**
                     * 判断参数 SPDeduction 是否已赋值
                     * @return SPDeduction 是否已赋值
                     */
                    bool SPDeductionHasBeenSet() const;

                    /**
                     * 获取The amount deducted by a savings plan based on the original component cost.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return OriginalCostWithSP The amount deducted by a savings plan based on the original component cost.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetOriginalCostWithSP() const;

                    /**
                     * 设置The amount deducted by a savings plan based on the original component cost.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param OriginalCostWithSP The amount deducted by a savings plan based on the original component cost.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetOriginalCostWithSP(const std::string& _originalCostWithSP);

                    /**
                     * 判断参数 OriginalCostWithSP 是否已赋值
                     * @return OriginalCostWithSP 是否已赋值
                     */
                    bool OriginalCostWithSPHasBeenSet() const;

                    /**
                     * 获取The blended discount multiplier that combines the official website discount, reserved instance discount, and savings plan discount. If no reserved instance and savings plan discounts are available, the blended discount multiplier equals the discount multiplier.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return BlendedDiscount The blended discount multiplier that combines the official website discount, reserved instance discount, and savings plan discount. If no reserved instance and savings plan discounts are available, the blended discount multiplier equals the discount multiplier.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetBlendedDiscount() const;

                    /**
                     * 设置The blended discount multiplier that combines the official website discount, reserved instance discount, and savings plan discount. If no reserved instance and savings plan discounts are available, the blended discount multiplier equals the discount multiplier.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param BlendedDiscount The blended discount multiplier that combines the official website discount, reserved instance discount, and savings plan discount. If no reserved instance and savings plan discounts are available, the blended discount multiplier equals the discount multiplier.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetBlendedDiscount(const std::string& _blendedDiscount);

                    /**
                     * 判断参数 BlendedDiscount 是否已赋值
                     * @return BlendedDiscount 是否已赋值
                     */
                    bool BlendedDiscountHasBeenSet() const;

                private:

                    /**
                     * Component type: type of a resource component, e.g. memory, disk, etc.
                     */
                    std::string m_componentCodeName;
                    bool m_componentCodeNameHasBeenSet;

                    /**
                     * Component name: name of a resource component, e.g. TencentDB for MySQL-memory
                     */
                    std::string m_itemCodeName;
                    bool m_itemCodeNameHasBeenSet;

                    /**
                     * Component published price: original price of a resource component with the original granularity
                     */
                    std::string m_singlePrice;
                    bool m_singlePriceHasBeenSet;

                    /**
                     * Specified price of the component
                     */
                    std::string m_specifiedPrice;
                    bool m_specifiedPriceHasBeenSet;

                    /**
                     * Price unit
                     */
                    std::string m_priceUnit;
                    bool m_priceUnitHasBeenSet;

                    /**
                     * Component usage
                     */
                    std::string m_usedAmount;
                    bool m_usedAmountHasBeenSet;

                    /**
                     * Component usage unit
                     */
                    std::string m_usedAmountUnit;
                    bool m_usedAmountUnitHasBeenSet;

                    /**
                     * Usage period
                     */
                    std::string m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * Time unit
                     */
                    std::string m_timeUnitName;
                    bool m_timeUnitNameHasBeenSet;

                    /**
                     * Original price of the component
                     */
                    std::string m_cost;
                    bool m_costHasBeenSet;

                    /**
                     * Discount rate
                     */
                    std::string m_discount;
                    bool m_discountHasBeenSet;

                    /**
                     * Offer type
                     */
                    std::string m_reduceType;
                    bool m_reduceTypeHasBeenSet;

                    /**
                     * Total discounted price
                     */
                    std::string m_realCost;
                    bool m_realCostHasBeenSet;

                    /**
                     * Amount paid in voucher
                     */
                    std::string m_voucherPayAmount;
                    bool m_voucherPayAmountHasBeenSet;

                    /**
                     * Amount paid in cash
                     */
                    std::string m_cashPayAmount;
                    bool m_cashPayAmountHasBeenSet;

                    /**
                     * Amount paid in trial credit
                     */
                    std::string m_incentivePayAmount;
                    bool m_incentivePayAmountHasBeenSet;

                    /**
                     * Component type code
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_itemCode;
                    bool m_itemCodeHasBeenSet;

                    /**
                     * Component code
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_componentCode;
                    bool m_componentCodeHasBeenSet;

                    /**
                     * Contract price
                     */
                    std::string m_contractPrice;
                    bool m_contractPriceHasBeenSet;

                    /**
                     * The special instance (resource pack, reserved instance, savings plan, or spot instance) that is applied to deduction. Valid values:
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * The usage duration deducted by a reserved instance. The unit of measurement for deduction is the same as that for usage duration.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_riTimeSpan;
                    bool m_riTimeSpanHasBeenSet;

                    /**
                     * The amount deducted by a reserved instance based on the original component cost.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_originalCostWithRI;
                    bool m_originalCostWithRIHasBeenSet;

                    /**
                     * The discount multiplier that applies to the component based on the remaining commitment of the savings plan.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_sPDeductionRate;
                    bool m_sPDeductionRateHasBeenSet;

                    /**
                     * The savings plan deduction amount.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_sPDeduction;
                    bool m_sPDeductionHasBeenSet;

                    /**
                     * The amount deducted by a savings plan based on the original component cost.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_originalCostWithSP;
                    bool m_originalCostWithSPHasBeenSet;

                    /**
                     * The blended discount multiplier that combines the official website discount, reserved instance discount, and savings plan discount. If no reserved instance and savings plan discounts are available, the blended discount multiplier equals the discount multiplier.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_blendedDiscount;
                    bool m_blendedDiscountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_BILLDETAILCOMPONENT_H_
