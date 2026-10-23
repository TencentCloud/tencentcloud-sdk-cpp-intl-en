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
                * Billing inquiry result
                */
                class TradePrice : public AbstractModel
                {
                public:
                    TradePrice();
                    ~TradePrice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Resource total price under prepaid mode, excluding discounts. Unit: cent.
                     * @return TotalPrice Resource total price under prepaid mode, excluding discounts. Unit: cent.
                     * 
                     */
                    int64_t GetTotalPrice() const;

                    /**
                     * 设置Resource total price under prepaid mode, excluding discounts. Unit: cent.
                     * @param _totalPrice Resource total price under prepaid mode, excluding discounts. Unit: cent.
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
                     * 获取Total discount. 100 means 100% no discount.
                     * @return Discount Total discount. 100 means 100% no discount.
                     * 
                     */
                    double GetDiscount() const;

                    /**
                     * 设置Total discount. 100 means 100% no discount.
                     * @param _discount Total discount. 100 means 100% no discount.
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
                     * 获取Discounted total price under prepaid mode, unit: cent. For example, if a user enjoys a discount, it is TotalPrice × Discount.
                     * @return TotalPriceDiscount Discounted total price under prepaid mode, unit: cent. For example, if a user enjoys a discount, it is TotalPrice × Discount.
                     * 
                     */
                    int64_t GetTotalPriceDiscount() const;

                    /**
                     * 设置Discounted total price under prepaid mode, unit: cent. For example, if a user enjoys a discount, it is TotalPrice × Discount.
                     * @param _totalPriceDiscount Discounted total price under prepaid mode, unit: cent. For example, if a user enjoys a discount, it is TotalPrice × Discount.
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
                     * 获取Unit resource price in postpaid mode, excluding discounts. Unit: cent
                     * @return UnitPrice Unit resource price in postpaid mode, excluding discounts. Unit: cent
                     * 
                     */
                    int64_t GetUnitPrice() const;

                    /**
                     * 设置Unit resource price in postpaid mode, excluding discounts. Unit: cent
                     * @param _unitPrice Unit resource price in postpaid mode, excluding discounts. Unit: cent
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
                     * 获取Unit resource price under postpaid mode after Discount, unit: cent. For example, if a user enjoys a Discount, it is UnitPrice × Discount.
                     * @return UnitPriceDiscount Unit resource price under postpaid mode after Discount, unit: cent. For example, if a user enjoys a Discount, it is UnitPrice × Discount.
                     * 
                     */
                    int64_t GetUnitPriceDiscount() const;

                    /**
                     * 设置Unit resource price under postpaid mode after Discount, unit: cent. For example, if a user enjoys a Discount, it is UnitPrice × Discount.
                     * @param _unitPriceDiscount Unit resource price under postpaid mode after Discount, unit: cent. For example, if a user enjoys a Discount, it is UnitPrice × Discount.
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
                     * 获取Billing price unit
                     * @return ChargeUnit Billing price unit
                     * 
                     */
                    std::string GetChargeUnit() const;

                    /**
                     * 设置Billing price unit
                     * @param _chargeUnit Billing price unit
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
                     * 获取High-precision price excluding discounts
                     * @return UnitPriceHighPrecision High-precision price excluding discounts
                     * 
                     */
                    std::string GetUnitPriceHighPrecision() const;

                    /**
                     * 设置High-precision price excluding discounts
                     * @param _unitPriceHighPrecision High-precision price excluding discounts
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
                     * 获取Discounted price at high precision
                     * @return UnitPriceDiscountHighPrecision Discounted price at high precision
                     * 
                     */
                    std::string GetUnitPriceDiscountHighPrecision() const;

                    /**
                     * 设置Discounted price at high precision
                     * @param _unitPriceDiscountHighPrecision Discounted price at high precision
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
                     * Resource total price under prepaid mode, excluding discounts. Unit: cent.
                     */
                    int64_t m_totalPrice;
                    bool m_totalPriceHasBeenSet;

                    /**
                     * Total discount. 100 means 100% no discount.
                     */
                    double m_discount;
                    bool m_discountHasBeenSet;

                    /**
                     * Discounted total price under prepaid mode, unit: cent. For example, if a user enjoys a discount, it is TotalPrice × Discount.
                     */
                    int64_t m_totalPriceDiscount;
                    bool m_totalPriceDiscountHasBeenSet;

                    /**
                     * Unit resource price in postpaid mode, excluding discounts. Unit: cent
                     */
                    int64_t m_unitPrice;
                    bool m_unitPriceHasBeenSet;

                    /**
                     * Unit resource price under postpaid mode after Discount, unit: cent. For example, if a user enjoys a Discount, it is UnitPrice × Discount.
                     */
                    int64_t m_unitPriceDiscount;
                    bool m_unitPriceDiscountHasBeenSet;

                    /**
                     * Billing price unit
                     */
                    std::string m_chargeUnit;
                    bool m_chargeUnitHasBeenSet;

                    /**
                     * High-precision price excluding discounts
                     */
                    std::string m_unitPriceHighPrecision;
                    bool m_unitPriceHighPrecisionHasBeenSet;

                    /**
                     * Discounted price at high precision
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
