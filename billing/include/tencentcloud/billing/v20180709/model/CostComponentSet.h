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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_COSTCOMPONENTSET_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_COSTCOMPONENTSET_H_

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
                * Consumption component details
                */
                class CostComponentSet : public AbstractModel
                {
                public:
                    CostComponentSet();
                    ~CostComponentSet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Component type name
                     * @return ComponentCodeName Component type name
                     * 
                     */
                    std::string GetComponentCodeName() const;

                    /**
                     * 设置Component type name
                     * @param _componentCodeName Component type name
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
                     * 获取Component name
                     * @return ItemCodeName Component name
                     * 
                     */
                    std::string GetItemCodeName() const;

                    /**
                     * 设置Component name
                     * @param _itemCodeName Component name
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
                     * 获取List price
                     * @return SinglePrice List price
                     * 
                     */
                    std::string GetSinglePrice() const;

                    /**
                     * 设置List price
                     * @param _singlePrice List price
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
                     * 获取List price unit
                     * @return PriceUnit List price unit
                     * 
                     */
                    std::string GetPriceUnit() const;

                    /**
                     * 设置List price unit
                     * @param _priceUnit List price unit
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
                     * 获取Usage
                     * @return UsedAmount Usage
                     * 
                     */
                    std::string GetUsedAmount() const;

                    /**
                     * 设置Usage
                     * @param _usedAmount Usage
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
                     * 获取Usage unit
                     * @return UsedAmountUnit Usage unit
                     * 
                     */
                    std::string GetUsedAmountUnit() const;

                    /**
                     * 设置Usage unit
                     * @param _usedAmountUnit Usage unit
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
                     * 获取Original price
                     * @return Cost Original price
                     * 
                     */
                    std::string GetCost() const;

                    /**
                     * 设置Original price
                     * @param _cost Original price
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
                     * 获取Discount
                     * @return Discount Discount
                     * 
                     */
                    std::string GetDiscount() const;

                    /**
                     * 设置Discount
                     * @param _discount Discount
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
                     * 获取Discounted price
                     * @return RealCost Discounted price
                     * 
                     */
                    std::string GetRealCost() const;

                    /**
                     * 设置Discounted price
                     * @param _realCost Discounted price
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
                     * 获取Voucher payment amount
                     * @return VoucherPayAmount Voucher payment amount
                     * 
                     */
                    std::string GetVoucherPayAmount() const;

                    /**
                     * 设置Voucher payment amount
                     * @param _voucherPayAmount Voucher payment amount
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
                     * 获取Cash payment amount
                     * @return CashPayAmount Cash payment amount
                     * 
                     */
                    std::string GetCashPayAmount() const;

                    /**
                     * 设置Cash payment amount
                     * @param _cashPayAmount Cash payment amount
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
                     * 获取Bonus payment amount
                     * @return IncentivePayAmount Bonus payment amount
                     * 
                     */
                    std::string GetIncentivePayAmount() const;

                    /**
                     * 设置Bonus payment amount
                     * @param _incentivePayAmount Bonus payment amount
                     * 
                     */
                    void SetIncentivePayAmount(const std::string& _incentivePayAmount);

                    /**
                     * 判断参数 IncentivePayAmount 是否已赋值
                     * @return IncentivePayAmount 是否已赋值
                     * 
                     */
                    bool IncentivePayAmountHasBeenSet() const;

                private:

                    /**
                     * Component type name
                     */
                    std::string m_componentCodeName;
                    bool m_componentCodeNameHasBeenSet;

                    /**
                     * Component name
                     */
                    std::string m_itemCodeName;
                    bool m_itemCodeNameHasBeenSet;

                    /**
                     * List price
                     */
                    std::string m_singlePrice;
                    bool m_singlePriceHasBeenSet;

                    /**
                     * List price unit
                     */
                    std::string m_priceUnit;
                    bool m_priceUnitHasBeenSet;

                    /**
                     * Usage
                     */
                    std::string m_usedAmount;
                    bool m_usedAmountHasBeenSet;

                    /**
                     * Usage unit
                     */
                    std::string m_usedAmountUnit;
                    bool m_usedAmountUnitHasBeenSet;

                    /**
                     * Original price
                     */
                    std::string m_cost;
                    bool m_costHasBeenSet;

                    /**
                     * Discount
                     */
                    std::string m_discount;
                    bool m_discountHasBeenSet;

                    /**
                     * Discounted price
                     */
                    std::string m_realCost;
                    bool m_realCostHasBeenSet;

                    /**
                     * Voucher payment amount
                     */
                    std::string m_voucherPayAmount;
                    bool m_voucherPayAmountHasBeenSet;

                    /**
                     * Cash payment amount
                     */
                    std::string m_cashPayAmount;
                    bool m_cashPayAmountHasBeenSet;

                    /**
                     * Bonus payment amount
                     */
                    std::string m_incentivePayAmount;
                    bool m_incentivePayAmountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_COSTCOMPONENTSET_H_
