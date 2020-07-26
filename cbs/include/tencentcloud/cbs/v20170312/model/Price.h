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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_PRICE_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_PRICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Describes the prepaid or postpaid price for the cloud disk.
                */
                class Price : public AbstractModel
                {
                public:
                    Price();
                    ~Price() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Original price of the advanced payment for a prepaid cloud disk (in CNY).
Note: This field may return null, indicating that no valid value was found.
                     * @return OriginalPrice Original price of the advanced payment for a prepaid cloud disk (in CNY).
Note: This field may return null, indicating that no valid value was found.
                     */
                    double GetOriginalPrice() const;

                    /**
                     * 设置Original price of the advanced payment for a prepaid cloud disk (in CNY).
Note: This field may return null, indicating that no valid value was found.
                     * @param OriginalPrice Original price of the advanced payment for a prepaid cloud disk (in CNY).
Note: This field may return null, indicating that no valid value was found.
                     */
                    void SetOriginalPrice(const double& _originalPrice);

                    /**
                     * 判断参数 OriginalPrice 是否已赋值
                     * @return OriginalPrice 是否已赋值
                     */
                    bool OriginalPriceHasBeenSet() const;

                    /**
                     * 获取Discount price of the advanced payment for a prepaid cloud disk (in CNY).
Note: This field may return null, indicating that no valid value was found.
                     * @return DiscountPrice Discount price of the advanced payment for a prepaid cloud disk (in CNY).
Note: This field may return null, indicating that no valid value was found.
                     */
                    double GetDiscountPrice() const;

                    /**
                     * 设置Discount price of the advanced payment for a prepaid cloud disk (in CNY).
Note: This field may return null, indicating that no valid value was found.
                     * @param DiscountPrice Discount price of the advanced payment for a prepaid cloud disk (in CNY).
Note: This field may return null, indicating that no valid value was found.
                     */
                    void SetDiscountPrice(const double& _discountPrice);

                    /**
                     * 判断参数 DiscountPrice 是否已赋值
                     * @return DiscountPrice 是否已赋值
                     */
                    bool DiscountPriceHasBeenSet() const;

                    /**
                     * 获取Original unit price of a postpaid cloud disk (in CNY).
Note: This field may return null, indicating that no valid value was found.
                     * @return UnitPrice Original unit price of a postpaid cloud disk (in CNY).
Note: This field may return null, indicating that no valid value was found.
                     */
                    double GetUnitPrice() const;

                    /**
                     * 设置Original unit price of a postpaid cloud disk (in CNY).
Note: This field may return null, indicating that no valid value was found.
                     * @param UnitPrice Original unit price of a postpaid cloud disk (in CNY).
Note: This field may return null, indicating that no valid value was found.
                     */
                    void SetUnitPrice(const double& _unitPrice);

                    /**
                     * 判断参数 UnitPrice 是否已赋值
                     * @return UnitPrice 是否已赋值
                     */
                    bool UnitPriceHasBeenSet() const;

                    /**
                     * 获取Billing unit of a postpaid cloud disk. Value range: <br><li>HOUR: Billed by hour.
Note: This field may return null, indicating that no valid value was found.
                     * @return ChargeUnit Billing unit of a postpaid cloud disk. Value range: <br><li>HOUR: Billed by hour.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string GetChargeUnit() const;

                    /**
                     * 设置Billing unit of a postpaid cloud disk. Value range: <br><li>HOUR: Billed by hour.
Note: This field may return null, indicating that no valid value was found.
                     * @param ChargeUnit Billing unit of a postpaid cloud disk. Value range: <br><li>HOUR: Billed by hour.
Note: This field may return null, indicating that no valid value was found.
                     */
                    void SetChargeUnit(const std::string& _chargeUnit);

                    /**
                     * 判断参数 ChargeUnit 是否已赋值
                     * @return ChargeUnit 是否已赋值
                     */
                    bool ChargeUnitHasBeenSet() const;

                    /**
                     * 获取Postpaid cloud disk discount price. Unit: CNY.
Note: This field may return null, indicating that no valid value was found.
                     * @return UnitPriceDiscount Postpaid cloud disk discount price. Unit: CNY.
Note: This field may return null, indicating that no valid value was found.
                     */
                    double GetUnitPriceDiscount() const;

                    /**
                     * 设置Postpaid cloud disk discount price. Unit: CNY.
Note: This field may return null, indicating that no valid value was found.
                     * @param UnitPriceDiscount Postpaid cloud disk discount price. Unit: CNY.
Note: This field may return null, indicating that no valid value was found.
                     */
                    void SetUnitPriceDiscount(const double& _unitPriceDiscount);

                    /**
                     * 判断参数 UnitPriceDiscount 是否已赋值
                     * @return UnitPriceDiscount 是否已赋值
                     */
                    bool UnitPriceDiscountHasBeenSet() const;

                private:

                    /**
                     * Original price of the advanced payment for a prepaid cloud disk (in CNY).
Note: This field may return null, indicating that no valid value was found.
                     */
                    double m_originalPrice;
                    bool m_originalPriceHasBeenSet;

                    /**
                     * Discount price of the advanced payment for a prepaid cloud disk (in CNY).
Note: This field may return null, indicating that no valid value was found.
                     */
                    double m_discountPrice;
                    bool m_discountPriceHasBeenSet;

                    /**
                     * Original unit price of a postpaid cloud disk (in CNY).
Note: This field may return null, indicating that no valid value was found.
                     */
                    double m_unitPrice;
                    bool m_unitPriceHasBeenSet;

                    /**
                     * Billing unit of a postpaid cloud disk. Value range: <br><li>HOUR: Billed by hour.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_chargeUnit;
                    bool m_chargeUnitHasBeenSet;

                    /**
                     * Postpaid cloud disk discount price. Unit: CNY.
Note: This field may return null, indicating that no valid value was found.
                     */
                    double m_unitPriceDiscount;
                    bool m_unitPriceDiscountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_PRICE_H_
