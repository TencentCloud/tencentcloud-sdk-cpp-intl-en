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
                     * 获取Resource total price under prepaid mode, excluding discounts. unit: microCent. 1 US dollar equals 1e8 microCents.
                     * @return TotalPrice Resource total price under prepaid mode, excluding discounts. unit: microCent. 1 US dollar equals 1e8 microCents.
                     * 
                     */
                    int64_t GetTotalPrice() const;

                    /**
                     * 设置Resource total price under prepaid mode, excluding discounts. unit: microCent. 1 US dollar equals 1e8 microCents.
                     * @param _totalPrice Resource total price under prepaid mode, excluding discounts. unit: microCent. 1 US dollar equals 1e8 microCents.
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
                     * 获取Discounted total price under prepaid mode, unit: cent. 1 US dollar equals 1e8 microCents. for example, the user enjoys a Discount = TotalPrice * Discount.
                     * @return TotalPriceDiscount Discounted total price under prepaid mode, unit: cent. 1 US dollar equals 1e8 microCents. for example, the user enjoys a Discount = TotalPrice * Discount.
                     * 
                     */
                    int64_t GetTotalPriceDiscount() const;

                    /**
                     * 设置Discounted total price under prepaid mode, unit: cent. 1 US dollar equals 1e8 microCents. for example, the user enjoys a Discount = TotalPrice * Discount.
                     * @param _totalPriceDiscount Discounted total price under prepaid mode, unit: cent. 1 US dollar equals 1e8 microCents. for example, the user enjoys a Discount = TotalPrice * Discount.
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
                     * 获取Unit resource price in postpaid mode, excluding discounts. unit: cent. 1 US dollar equals 1e2 cents
                     * @return UnitPrice Unit resource price in postpaid mode, excluding discounts. unit: cent. 1 US dollar equals 1e2 cents
                     * 
                     */
                    int64_t GetUnitPrice() const;

                    /**
                     * 设置Unit resource price in postpaid mode, excluding discounts. unit: cent. 1 US dollar equals 1e2 cents
                     * @param _unitPrice Unit resource price in postpaid mode, excluding discounts. unit: cent. 1 US dollar equals 1e2 cents
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
                     * 获取Unit resource price in postpaid mode after Discount, unit: cent. 1 US dollar equals 1e2 cents. for example, the user enjoys a Discount = unitprice * Discount.
                     * @return UnitPriceDiscount Unit resource price in postpaid mode after Discount, unit: cent. 1 US dollar equals 1e2 cents. for example, the user enjoys a Discount = unitprice * Discount.
                     * 
                     */
                    int64_t GetUnitPriceDiscount() const;

                    /**
                     * 设置Unit resource price in postpaid mode after Discount, unit: cent. 1 US dollar equals 1e2 cents. for example, the user enjoys a Discount = unitprice * Discount.
                     * @param _unitPriceDiscount Unit resource price in postpaid mode after Discount, unit: cent. 1 US dollar equals 1e2 cents. for example, the user enjoys a Discount = unitprice * Discount.
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

                    /**
                     * 获取Excludes discounted rates under high precision.
                     * @return UnitPriceHighPrecision Excludes discounted rates under high precision.
                     * 
                     */
                    std::string GetUnitPriceHighPrecision() const;

                    /**
                     * 设置Excludes discounted rates under high precision.
                     * @param _unitPriceHighPrecision Excludes discounted rates under high precision.
                     * 
                     */
                    void SetUnitPriceHighPrecision(const std::string& _unitPriceHighPrecision);

                    /**
                     * 判断参数 UnitPriceHighPrecision 是否已赋值
                     * @return UnitPriceHighPrecision 是否已赋值
                     * 
                     */
                    bool UnitPriceHighPrecisionHasBeenSet() const;

                    /**
                     * 获取Discounted price under high precision.
                     * @return UnitPriceDiscountHighPrecision Discounted price under high precision.
                     * 
                     */
                    std::string GetUnitPriceDiscountHighPrecision() const;

                    /**
                     * 设置Discounted price under high precision.
                     * @param _unitPriceDiscountHighPrecision Discounted price under high precision.
                     * 
                     */
                    void SetUnitPriceDiscountHighPrecision(const std::string& _unitPriceDiscountHighPrecision);

                    /**
                     * 判断参数 UnitPriceDiscountHighPrecision 是否已赋值
                     * @return UnitPriceDiscountHighPrecision 是否已赋值
                     * 
                     */
                    bool UnitPriceDiscountHighPrecisionHasBeenSet() const;

                    /**
                     * 获取Currency unit.
                     * @return AmountUnit Currency unit.
                     * 
                     */
                    std::string GetAmountUnit() const;

                    /**
                     * 设置Currency unit.
                     * @param _amountUnit Currency unit.
                     * 
                     */
                    void SetAmountUnit(const std::string& _amountUnit);

                    /**
                     * 判断参数 AmountUnit 是否已赋值
                     * @return AmountUnit 是否已赋值
                     * 
                     */
                    bool AmountUnitHasBeenSet() const;

                private:

                    /**
                     * Resource total price under prepaid mode, excluding discounts. unit: microCent. 1 US dollar equals 1e8 microCents.
                     */
                    int64_t m_totalPrice;
                    bool m_totalPriceHasBeenSet;

                    /**
                     * Total discount. `100` means no discount.
                     */
                    double m_discount;
                    bool m_discountHasBeenSet;

                    /**
                     * Discounted total price under prepaid mode, unit: cent. 1 US dollar equals 1e8 microCents. for example, the user enjoys a Discount = TotalPrice * Discount.
                     */
                    int64_t m_totalPriceDiscount;
                    bool m_totalPriceDiscountHasBeenSet;

                    /**
                     * Unit resource price in postpaid mode, excluding discounts. unit: cent. 1 US dollar equals 1e2 cents
                     */
                    int64_t m_unitPrice;
                    bool m_unitPriceHasBeenSet;

                    /**
                     * Unit resource price in postpaid mode after Discount, unit: cent. 1 US dollar equals 1e2 cents. for example, the user enjoys a Discount = unitprice * Discount.
                     */
                    int64_t m_unitPriceDiscount;
                    bool m_unitPriceDiscountHasBeenSet;

                    /**
                     * Price unit
                     */
                    std::string m_chargeUnit;
                    bool m_chargeUnitHasBeenSet;

                    /**
                     * Excludes discounted rates under high precision.
                     */
                    std::string m_unitPriceHighPrecision;
                    bool m_unitPriceHighPrecisionHasBeenSet;

                    /**
                     * Discounted price under high precision.
                     */
                    std::string m_unitPriceDiscountHighPrecision;
                    bool m_unitPriceDiscountHighPrecisionHasBeenSet;

                    /**
                     * Currency unit.
                     */
                    std::string m_amountUnit;
                    bool m_amountUnitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_TRADEPRICE_H_
