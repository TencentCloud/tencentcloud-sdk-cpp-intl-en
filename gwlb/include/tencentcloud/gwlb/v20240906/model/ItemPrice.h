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

#ifndef TENCENTCLOUD_GWLB_V20240906_MODEL_ITEMPRICE_H_
#define TENCENTCLOUD_GWLB_V20240906_MODEL_ITEMPRICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gwlb
    {
        namespace V20240906
        {
            namespace Model
            {
                /**
                * It describes the price information of a single item.
                */
                class ItemPrice : public AbstractModel
                {
                public:
                    ItemPrice();
                    ~ItemPrice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Postpaid unit price. Unit: CNY.

Note: This field may return null, indicating that no valid value can be obtained.
                     * @return UnitPrice Postpaid unit price. Unit: CNY.

Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    double GetUnitPrice() const;

                    /**
                     * 设置Postpaid unit price. Unit: CNY.

Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _unitPrice Postpaid unit price. Unit: CNY.

Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetUnitPrice(const double& _unitPrice);

                    /**
                     * 判断参数 UnitPrice 是否已赋值
                     * @return UnitPrice 是否已赋值
                     * 
                     */
                    bool UnitPriceHasBeenSet() const;

                    /**
                     * 获取Pay-as-you-go billing unit. Valid values: HOUR: indicates that the billing unit is calculated by hour. Current scenarios involving this billing unit include: postpaid by hour for instances (POSTPAID_BY_HOUR).Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ChargeUnit Pay-as-you-go billing unit. Valid values: HOUR: indicates that the billing unit is calculated by hour. Current scenarios involving this billing unit include: postpaid by hour for instances (POSTPAID_BY_HOUR).Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetChargeUnit() const;

                    /**
                     * 设置Pay-as-you-go billing unit. Valid values: HOUR: indicates that the billing unit is calculated by hour. Current scenarios involving this billing unit include: postpaid by hour for instances (POSTPAID_BY_HOUR).Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _chargeUnit Pay-as-you-go billing unit. Valid values: HOUR: indicates that the billing unit is calculated by hour. Current scenarios involving this billing unit include: postpaid by hour for instances (POSTPAID_BY_HOUR).Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Original price of pre-payment (in CNY).

Note: This field may return null, indicating that no valid value can be obtained.
                     * @return OriginalPrice Original price of pre-payment (in CNY).

Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    double GetOriginalPrice() const;

                    /**
                     * 设置Original price of pre-payment (in CNY).

Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _originalPrice Original price of pre-payment (in CNY).

Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetOriginalPrice(const double& _originalPrice);

                    /**
                     * 判断参数 OriginalPrice 是否已赋值
                     * @return OriginalPrice 是否已赋值
                     * 
                     */
                    bool OriginalPriceHasBeenSet() const;

                    /**
                     * 获取Discount price of prepaid costs, unit: CNY.

Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DiscountPrice Discount price of prepaid costs, unit: CNY.

Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    double GetDiscountPrice() const;

                    /**
                     * 设置Discount price of prepaid costs, unit: CNY.

Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _discountPrice Discount price of prepaid costs, unit: CNY.

Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDiscountPrice(const double& _discountPrice);

                    /**
                     * 判断参数 DiscountPrice 是否已赋值
                     * @return DiscountPrice 是否已赋值
                     * 
                     */
                    bool DiscountPriceHasBeenSet() const;

                    /**
                     * 获取Discounted unit price for pay-as-you-go. Unit: CNY.Note: This field may return null, indicating that no valid value can be obtained.
                     * @return UnitPriceDiscount Discounted unit price for pay-as-you-go. Unit: CNY.Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    double GetUnitPriceDiscount() const;

                    /**
                     * 设置Discounted unit price for pay-as-you-go. Unit: CNY.Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _unitPriceDiscount Discounted unit price for pay-as-you-go. Unit: CNY.Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetUnitPriceDiscount(const double& _unitPriceDiscount);

                    /**
                     * 判断参数 UnitPriceDiscount 是否已赋值
                     * @return UnitPriceDiscount 是否已赋值
                     * 
                     */
                    bool UnitPriceDiscountHasBeenSet() const;

                    /**
                     * 获取Discount, such as 20.0 representing 80% off.

Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Discount Discount, such as 20.0 representing 80% off.

Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    double GetDiscount() const;

                    /**
                     * 设置Discount, such as 20.0 representing 80% off.

Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _discount Discount, such as 20.0 representing 80% off.

Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDiscount(const double& _discount);

                    /**
                     * 判断参数 Discount 是否已赋值
                     * @return Discount 是否已赋值
                     * 
                     */
                    bool DiscountHasBeenSet() const;

                private:

                    /**
                     * Postpaid unit price. Unit: CNY.

Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    double m_unitPrice;
                    bool m_unitPriceHasBeenSet;

                    /**
                     * Pay-as-you-go billing unit. Valid values: HOUR: indicates that the billing unit is calculated by hour. Current scenarios involving this billing unit include: postpaid by hour for instances (POSTPAID_BY_HOUR).Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_chargeUnit;
                    bool m_chargeUnitHasBeenSet;

                    /**
                     * Original price of pre-payment (in CNY).

Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    double m_originalPrice;
                    bool m_originalPriceHasBeenSet;

                    /**
                     * Discount price of prepaid costs, unit: CNY.

Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    double m_discountPrice;
                    bool m_discountPriceHasBeenSet;

                    /**
                     * Discounted unit price for pay-as-you-go. Unit: CNY.Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    double m_unitPriceDiscount;
                    bool m_unitPriceDiscountHasBeenSet;

                    /**
                     * Discount, such as 20.0 representing 80% off.

Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    double m_discount;
                    bool m_discountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GWLB_V20240906_MODEL_ITEMPRICE_H_
