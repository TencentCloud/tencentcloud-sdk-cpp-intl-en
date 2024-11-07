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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_TRADEPRICE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_TRADEPRICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Billing details
                */
                class TradePrice : public AbstractModel
                {
                public:
                    TradePrice();
                    ~TradePrice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The non-discounted total price of monthly subscribed resources (unit: 0.000001 cent)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TotalPrice The non-discounted total price of monthly subscribed resources (unit: 0.000001 cent)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTotalPrice() const;

                    /**
                     * 设置The non-discounted total price of monthly subscribed resources (unit: 0.000001 cent)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _totalPrice The non-discounted total price of monthly subscribed resources (unit: 0.000001 cent)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTotalPrice(const int64_t& _totalPrice);

                    /**
                     * 判断参数 TotalPrice 是否已赋值
                     * @return TotalPrice 是否已赋值
                     * 
                     */
                    bool TotalPriceHasBeenSet() const;

                    /**
                     * 获取Total discount. `100` means no discount.
                     * @return Discount Total discount. `100` means no discount.
                     * 
                     */
                    double GetDiscount() const;

                    /**
                     * 设置Total discount. `100` means no discount.
                     * @param _discount Total discount. `100` means no discount.
                     * 
                     */
                    void SetDiscount(const double& _discount);

                    /**
                     * 判断参数 Discount 是否已赋值
                     * @return Discount 是否已赋值
                     * 
                     */
                    bool DiscountHasBeenSet() const;

                    /**
                     * 获取The discounted total price of monthly subscribed resources (unit: 0.000001 cent). If a discount is applied, `TotalPriceDiscount` will be the product of `TotalPrice` and `Discount`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TotalPriceDiscount The discounted total price of monthly subscribed resources (unit: 0.000001 cent). If a discount is applied, `TotalPriceDiscount` will be the product of `TotalPrice` and `Discount`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTotalPriceDiscount() const;

                    /**
                     * 设置The discounted total price of monthly subscribed resources (unit: 0.000001 cent). If a discount is applied, `TotalPriceDiscount` will be the product of `TotalPrice` and `Discount`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _totalPriceDiscount The discounted total price of monthly subscribed resources (unit: 0.000001 cent). If a discount is applied, `TotalPriceDiscount` will be the product of `TotalPrice` and `Discount`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTotalPriceDiscount(const int64_t& _totalPriceDiscount);

                    /**
                     * 判断参数 TotalPriceDiscount 是否已赋值
                     * @return TotalPriceDiscount 是否已赋值
                     * 
                     */
                    bool TotalPriceDiscountHasBeenSet() const;

                    /**
                     * 获取The non-discounted unit price of pay-as-you-go resources (unit: 0.000001 cent)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UnitPrice The non-discounted unit price of pay-as-you-go resources (unit: 0.000001 cent)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetUnitPrice() const;

                    /**
                     * 设置The non-discounted unit price of pay-as-you-go resources (unit: 0.000001 cent)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _unitPrice The non-discounted unit price of pay-as-you-go resources (unit: 0.000001 cent)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUnitPrice(const int64_t& _unitPrice);

                    /**
                     * 判断参数 UnitPrice 是否已赋值
                     * @return UnitPrice 是否已赋值
                     * 
                     */
                    bool UnitPriceHasBeenSet() const;

                    /**
                     * 获取The discounted unit price of pay-as-you-go resources (unit: 0.000001 cent). If a discount is applied, `UnitPriceDiscount` will be the product of `UnitPrice` and `Discount`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UnitPriceDiscount The discounted unit price of pay-as-you-go resources (unit: 0.000001 cent). If a discount is applied, `UnitPriceDiscount` will be the product of `UnitPrice` and `Discount`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetUnitPriceDiscount() const;

                    /**
                     * 设置The discounted unit price of pay-as-you-go resources (unit: 0.000001 cent). If a discount is applied, `UnitPriceDiscount` will be the product of `UnitPrice` and `Discount`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _unitPriceDiscount The discounted unit price of pay-as-you-go resources (unit: 0.000001 cent). If a discount is applied, `UnitPriceDiscount` will be the product of `UnitPrice` and `Discount`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUnitPriceDiscount(const int64_t& _unitPriceDiscount);

                    /**
                     * 判断参数 UnitPriceDiscount 是否已赋值
                     * @return UnitPriceDiscount 是否已赋值
                     * 
                     */
                    bool UnitPriceDiscountHasBeenSet() const;

                    /**
                     * 获取Price unit
                     * @return ChargeUnit Price unit
                     * 
                     */
                    std::string GetChargeUnit() const;

                    /**
                     * 设置Price unit
                     * @param _chargeUnit Price unit
                     * 
                     */
                    void SetChargeUnit(const std::string& _chargeUnit);

                    /**
                     * 判断参数 ChargeUnit 是否已赋值
                     * @return ChargeUnit 是否已赋值
                     * 
                     */
                    bool ChargeUnitHasBeenSet() const;

                private:

                    /**
                     * The non-discounted total price of monthly subscribed resources (unit: 0.000001 cent)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_totalPrice;
                    bool m_totalPriceHasBeenSet;

                    /**
                     * Total discount. `100` means no discount.
                     */
                    double m_discount;
                    bool m_discountHasBeenSet;

                    /**
                     * The discounted total price of monthly subscribed resources (unit: 0.000001 cent). If a discount is applied, `TotalPriceDiscount` will be the product of `TotalPrice` and `Discount`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_totalPriceDiscount;
                    bool m_totalPriceDiscountHasBeenSet;

                    /**
                     * The non-discounted unit price of pay-as-you-go resources (unit: 0.000001 cent)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_unitPrice;
                    bool m_unitPriceHasBeenSet;

                    /**
                     * The discounted unit price of pay-as-you-go resources (unit: 0.000001 cent). If a discount is applied, `UnitPriceDiscount` will be the product of `UnitPrice` and `Discount`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_unitPriceDiscount;
                    bool m_unitPriceDiscountHasBeenSet;

                    /**
                     * Price unit
                     */
                    std::string m_chargeUnit;
                    bool m_chargeUnitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_TRADEPRICE_H_
