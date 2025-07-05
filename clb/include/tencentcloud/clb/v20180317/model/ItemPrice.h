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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_ITEMPRICE_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_ITEMPRICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * Pricing information of an item
                */
                class ItemPrice : public AbstractModel
                {
                public:
                    ItemPrice();
                    ~ItemPrice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取PAYG unit price, in USD.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return UnitPrice PAYG unit price, in USD.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetUnitPrice() const;

                    /**
                     * 设置PAYG unit price, in USD.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _unitPrice PAYG unit price, in USD.
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Subsequent billing unit. Value Range: 
`HOUR`: Calculate the cost by hour. It's available when "InternetChargeType=POSTPAID_BY_HOUR".
`GB`: Calculate the cost by traffic in GB. It's available when "InternetChargeType=TRAFFIC_POSTPAID_BY_HOUR".
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return ChargeUnit Subsequent billing unit. Value Range: 
`HOUR`: Calculate the cost by hour. It's available when "InternetChargeType=POSTPAID_BY_HOUR".
`GB`: Calculate the cost by traffic in GB. It's available when "InternetChargeType=TRAFFIC_POSTPAID_BY_HOUR".
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetChargeUnit() const;

                    /**
                     * 设置Subsequent billing unit. Value Range: 
`HOUR`: Calculate the cost by hour. It's available when "InternetChargeType=POSTPAID_BY_HOUR".
`GB`: Calculate the cost by traffic in GB. It's available when "InternetChargeType=TRAFFIC_POSTPAID_BY_HOUR".
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _chargeUnit Subsequent billing unit. Value Range: 
`HOUR`: Calculate the cost by hour. It's available when "InternetChargeType=POSTPAID_BY_HOUR".
`GB`: Calculate the cost by traffic in GB. It's available when "InternetChargeType=TRAFFIC_POSTPAID_BY_HOUR".
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Reserved field
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return OriginalPrice Reserved field
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetOriginalPrice() const;

                    /**
                     * 设置Reserved field
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _originalPrice Reserved field
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Reserved field
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return DiscountPrice Reserved field
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetDiscountPrice() const;

                    /**
                     * 设置Reserved field
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _discountPrice Reserved field
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Discount unit price of a pay-as-you-go instance, in USD.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return UnitPriceDiscount Discount unit price of a pay-as-you-go instance, in USD.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetUnitPriceDiscount() const;

                    /**
                     * 设置Discount unit price of a pay-as-you-go instance, in USD.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _unitPriceDiscount Discount unit price of a pay-as-you-go instance, in USD.
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Discount. For example, 20.0 indicates 80% off.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Discount Discount. For example, 20.0 indicates 80% off.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetDiscount() const;

                    /**
                     * 设置Discount. For example, 20.0 indicates 80% off.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _discount Discount. For example, 20.0 indicates 80% off.
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * PAYG unit price, in USD.
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    double m_unitPrice;
                    bool m_unitPriceHasBeenSet;

                    /**
                     * Subsequent billing unit. Value Range: 
`HOUR`: Calculate the cost by hour. It's available when "InternetChargeType=POSTPAID_BY_HOUR".
`GB`: Calculate the cost by traffic in GB. It's available when "InternetChargeType=TRAFFIC_POSTPAID_BY_HOUR".
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_chargeUnit;
                    bool m_chargeUnitHasBeenSet;

                    /**
                     * Reserved field
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    double m_originalPrice;
                    bool m_originalPriceHasBeenSet;

                    /**
                     * Reserved field
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    double m_discountPrice;
                    bool m_discountPriceHasBeenSet;

                    /**
                     * Discount unit price of a pay-as-you-go instance, in USD.
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    double m_unitPriceDiscount;
                    bool m_unitPriceDiscountHasBeenSet;

                    /**
                     * Discount. For example, 20.0 indicates 80% off.
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    double m_discount;
                    bool m_discountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_ITEMPRICE_H_
