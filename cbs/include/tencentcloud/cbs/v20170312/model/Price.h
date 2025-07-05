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
                     * 获取Original price of a monthly-subscribed cloud disk, in USD.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return OriginalPrice Original price of a monthly-subscribed cloud disk, in USD.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetOriginalPrice() const;

                    /**
                     * 设置Original price of a monthly-subscribed cloud disk, in USD.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _originalPrice Original price of a monthly-subscribed cloud disk, in USD.
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Discounted price of a monthly-subscribed cloud disk, in USD.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return DiscountPrice Discounted price of a monthly-subscribed cloud disk, in USD.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetDiscountPrice() const;

                    /**
                     * 设置Discounted price of a monthly-subscribed cloud disk, in USD.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _discountPrice Discounted price of a monthly-subscribed cloud disk, in USD.
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Original unit price of a pay-as-you-go cloud disk, in USD.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return UnitPrice Original unit price of a pay-as-you-go cloud disk, in USD.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetUnitPrice() const;

                    /**
                     * 设置Original unit price of a pay-as-you-go cloud disk, in USD.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _unitPrice Original unit price of a pay-as-you-go cloud disk, in USD.
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Billing unit of a postpaid cloud disk. Value range: <br><li>HOUR: Billed by hour.
Note: This field may return null, indicating that no valid value was found.
                     * @return ChargeUnit Billing unit of a postpaid cloud disk. Value range: <br><li>HOUR: Billed by hour.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::string GetChargeUnit() const;

                    /**
                     * 设置Billing unit of a postpaid cloud disk. Value range: <br><li>HOUR: Billed by hour.
Note: This field may return null, indicating that no valid value was found.
                     * @param _chargeUnit Billing unit of a postpaid cloud disk. Value range: <br><li>HOUR: Billed by hour.
Note: This field may return null, indicating that no valid value was found.
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
                     * 获取Discount unit price of a pay-as-you-go cloud disk, in USD.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return UnitPriceDiscount Discount unit price of a pay-as-you-go cloud disk, in USD.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetUnitPriceDiscount() const;

                    /**
                     * 设置Discount unit price of a pay-as-you-go cloud disk, in USD.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _unitPriceDiscount Discount unit price of a pay-as-you-go cloud disk, in USD.
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Original payment of a monthly-subscribed cloud disk, in USD, with six decimal places.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return OriginalPriceHigh Original payment of a monthly-subscribed cloud disk, in USD, with six decimal places.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOriginalPriceHigh() const;

                    /**
                     * 设置Original payment of a monthly-subscribed cloud disk, in USD, with six decimal places.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _originalPriceHigh Original payment of a monthly-subscribed cloud disk, in USD, with six decimal places.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOriginalPriceHigh(const std::string& _originalPriceHigh);

                    /**
                     * 判断参数 OriginalPriceHigh 是否已赋值
                     * @return OriginalPriceHigh 是否已赋值
                     * 
                     */
                    bool OriginalPriceHighHasBeenSet() const;

                    /**
                     * 获取Discounted payment price of a monthly-subscribed cloud disk, in USD, with six decimal places.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return DiscountPriceHigh Discounted payment price of a monthly-subscribed cloud disk, in USD, with six decimal places.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDiscountPriceHigh() const;

                    /**
                     * 设置Discounted payment price of a monthly-subscribed cloud disk, in USD, with six decimal places.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _discountPriceHigh Discounted payment price of a monthly-subscribed cloud disk, in USD, with six decimal places.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDiscountPriceHigh(const std::string& _discountPriceHigh);

                    /**
                     * 判断参数 DiscountPriceHigh 是否已赋值
                     * @return DiscountPriceHigh 是否已赋值
                     * 
                     */
                    bool DiscountPriceHighHasBeenSet() const;

                    /**
                     * 获取Original unit price of a pay-as-you-go cloud disk, in USD, with six decimal places.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return UnitPriceHigh Original unit price of a pay-as-you-go cloud disk, in USD, with six decimal places.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUnitPriceHigh() const;

                    /**
                     * 设置Original unit price of a pay-as-you-go cloud disk, in USD, with six decimal places.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _unitPriceHigh Original unit price of a pay-as-you-go cloud disk, in USD, with six decimal places.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUnitPriceHigh(const std::string& _unitPriceHigh);

                    /**
                     * 判断参数 UnitPriceHigh 是否已赋值
                     * @return UnitPriceHigh 是否已赋值
                     * 
                     */
                    bool UnitPriceHighHasBeenSet() const;

                    /**
                     * 获取Discounted unit price of a pay-as-you-go cloud disk, in USD, with six decimal places.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return UnitPriceDiscountHigh Discounted unit price of a pay-as-you-go cloud disk, in USD, with six decimal places.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUnitPriceDiscountHigh() const;

                    /**
                     * 设置Discounted unit price of a pay-as-you-go cloud disk, in USD, with six decimal places.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _unitPriceDiscountHigh Discounted unit price of a pay-as-you-go cloud disk, in USD, with six decimal places.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUnitPriceDiscountHigh(const std::string& _unitPriceDiscountHigh);

                    /**
                     * 判断参数 UnitPriceDiscountHigh 是否已赋值
                     * @return UnitPriceDiscountHigh 是否已赋值
                     * 
                     */
                    bool UnitPriceDiscountHighHasBeenSet() const;

                private:

                    /**
                     * Original price of a monthly-subscribed cloud disk, in USD.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    double m_originalPrice;
                    bool m_originalPriceHasBeenSet;

                    /**
                     * Discounted price of a monthly-subscribed cloud disk, in USD.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    double m_discountPrice;
                    bool m_discountPriceHasBeenSet;

                    /**
                     * Original unit price of a pay-as-you-go cloud disk, in USD.
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * Discount unit price of a pay-as-you-go cloud disk, in USD.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    double m_unitPriceDiscount;
                    bool m_unitPriceDiscountHasBeenSet;

                    /**
                     * Original payment of a monthly-subscribed cloud disk, in USD, with six decimal places.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_originalPriceHigh;
                    bool m_originalPriceHighHasBeenSet;

                    /**
                     * Discounted payment price of a monthly-subscribed cloud disk, in USD, with six decimal places.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_discountPriceHigh;
                    bool m_discountPriceHighHasBeenSet;

                    /**
                     * Original unit price of a pay-as-you-go cloud disk, in USD, with six decimal places.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_unitPriceHigh;
                    bool m_unitPriceHighHasBeenSet;

                    /**
                     * Discounted unit price of a pay-as-you-go cloud disk, in USD, with six decimal places.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_unitPriceDiscountHigh;
                    bool m_unitPriceDiscountHighHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_PRICE_H_
