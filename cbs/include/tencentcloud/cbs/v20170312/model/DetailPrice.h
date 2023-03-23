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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_DETAILPRICE_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_DETAILPRICE_H_

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
                * Pricing details for the cloud disk.
                */
                class DetailPrice : public AbstractModel
                {
                public:
                    DetailPrice();
                    ~DetailPrice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Name of the billable item.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PriceTitle Name of the billable item.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetPriceTitle() const;

                    /**
                     * 设置Name of the billable item.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param PriceTitle Name of the billable item.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPriceTitle(const std::string& _priceTitle);

                    /**
                     * 判断参数 PriceTitle 是否已赋值
                     * @return PriceTitle 是否已赋值
                     */
                    bool PriceTitleHasBeenSet() const;

                    /**
                     * 获取Name of the billable item displayed in the console.
                     * @return PriceName Name of the billable item displayed in the console.
                     */
                    std::string GetPriceName() const;

                    /**
                     * 设置Name of the billable item displayed in the console.
                     * @param PriceName Name of the billable item displayed in the console.
                     */
                    void SetPriceName(const std::string& _priceName);

                    /**
                     * 判断参数 PriceName 是否已赋值
                     * @return PriceName 是否已赋值
                     */
                    bool PriceNameHasBeenSet() const;

                    /**
                     * 获取Original price of a monthly subscribed cloud disk, in USD.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OriginalPrice Original price of a monthly subscribed cloud disk, in USD.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double GetOriginalPrice() const;

                    /**
                     * 设置Original price of a monthly subscribed cloud disk, in USD.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param OriginalPrice Original price of a monthly subscribed cloud disk, in USD.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetOriginalPrice(const double& _originalPrice);

                    /**
                     * 判断参数 OriginalPrice 是否已赋值
                     * @return OriginalPrice 是否已赋值
                     */
                    bool OriginalPriceHasBeenSet() const;

                    /**
                     * 获取Discounted price of a monthly subscribed cloud disk, in USD.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DiscountPrice Discounted price of a monthly subscribed cloud disk, in USD.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double GetDiscountPrice() const;

                    /**
                     * 设置Discounted price of a monthly subscribed cloud disk, in USD.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param DiscountPrice Discounted price of a monthly subscribed cloud disk, in USD.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDiscountPrice(const double& _discountPrice);

                    /**
                     * 判断参数 DiscountPrice 是否已赋值
                     * @return DiscountPrice 是否已赋值
                     */
                    bool DiscountPriceHasBeenSet() const;

                    /**
                     * 获取Original unit price of a pay-as-you-go cloud disk, in USD.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UnitPrice Original unit price of a pay-as-you-go cloud disk, in USD.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double GetUnitPrice() const;

                    /**
                     * 设置Original unit price of a pay-as-you-go cloud disk, in USD.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param UnitPrice Original unit price of a pay-as-you-go cloud disk, in USD.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetUnitPrice(const double& _unitPrice);

                    /**
                     * 判断参数 UnitPrice 是否已赋值
                     * @return UnitPrice 是否已赋值
                     */
                    bool UnitPriceHasBeenSet() const;

                    /**
                     * 获取Discount unit price of a pay-as-you-go cloud disk, in USD.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UnitPriceDiscount Discount unit price of a pay-as-you-go cloud disk, in USD.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double GetUnitPriceDiscount() const;

                    /**
                     * 设置Discount unit price of a pay-as-you-go cloud disk, in USD.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param UnitPriceDiscount Discount unit price of a pay-as-you-go cloud disk, in USD.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetUnitPriceDiscount(const double& _unitPriceDiscount);

                    /**
                     * 判断参数 UnitPriceDiscount 是否已赋值
                     * @return UnitPriceDiscount 是否已赋值
                     */
                    bool UnitPriceDiscountHasBeenSet() const;

                    /**
                     * 获取Billing unit for pay-as-you-go cloud disks. Valid value: `HOUR` (billed hourly).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ChargeUnit Billing unit for pay-as-you-go cloud disks. Valid value: `HOUR` (billed hourly).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetChargeUnit() const;

                    /**
                     * 设置Billing unit for pay-as-you-go cloud disks. Valid value: `HOUR` (billed hourly).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ChargeUnit Billing unit for pay-as-you-go cloud disks. Valid value: `HOUR` (billed hourly).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetChargeUnit(const std::string& _chargeUnit);

                    /**
                     * 判断参数 ChargeUnit 是否已赋值
                     * @return ChargeUnit 是否已赋值
                     */
                    bool ChargeUnitHasBeenSet() const;

                    /**
                     * 获取Original highly-precise price of a monthly subscribed cloud disk, in USD.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OriginalPriceHigh Original highly-precise price of a monthly subscribed cloud disk, in USD.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetOriginalPriceHigh() const;

                    /**
                     * 设置Original highly-precise price of a monthly subscribed cloud disk, in USD.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param OriginalPriceHigh Original highly-precise price of a monthly subscribed cloud disk, in USD.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetOriginalPriceHigh(const std::string& _originalPriceHigh);

                    /**
                     * 判断参数 OriginalPriceHigh 是否已赋值
                     * @return OriginalPriceHigh 是否已赋值
                     */
                    bool OriginalPriceHighHasBeenSet() const;

                    /**
                     * 获取Discounted highly-precise price of a monthly subscribed cloud disk, in USD.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DiscountPriceHigh Discounted highly-precise price of a monthly subscribed cloud disk, in USD.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetDiscountPriceHigh() const;

                    /**
                     * 设置Discounted highly-precise price of a monthly subscribed cloud disk, in USD.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param DiscountPriceHigh Discounted highly-precise price of a monthly subscribed cloud disk, in USD.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDiscountPriceHigh(const std::string& _discountPriceHigh);

                    /**
                     * 判断参数 DiscountPriceHigh 是否已赋值
                     * @return DiscountPriceHigh 是否已赋值
                     */
                    bool DiscountPriceHighHasBeenSet() const;

                    /**
                     * 获取Original highly-precise unit price of a pay-as-you-go cloud disk, in USD.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UnitPriceHigh Original highly-precise unit price of a pay-as-you-go cloud disk, in USD.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetUnitPriceHigh() const;

                    /**
                     * 设置Original highly-precise unit price of a pay-as-you-go cloud disk, in USD.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param UnitPriceHigh Original highly-precise unit price of a pay-as-you-go cloud disk, in USD.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetUnitPriceHigh(const std::string& _unitPriceHigh);

                    /**
                     * 判断参数 UnitPriceHigh 是否已赋值
                     * @return UnitPriceHigh 是否已赋值
                     */
                    bool UnitPriceHighHasBeenSet() const;

                    /**
                     * 获取Discounted highly-precise unit price of a pay-as-you-go cloud disk, in USD.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UnitPriceDiscountHigh Discounted highly-precise unit price of a pay-as-you-go cloud disk, in USD.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetUnitPriceDiscountHigh() const;

                    /**
                     * 设置Discounted highly-precise unit price of a pay-as-you-go cloud disk, in USD.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param UnitPriceDiscountHigh Discounted highly-precise unit price of a pay-as-you-go cloud disk, in USD.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetUnitPriceDiscountHigh(const std::string& _unitPriceDiscountHigh);

                    /**
                     * 判断参数 UnitPriceDiscountHigh 是否已赋值
                     * @return UnitPriceDiscountHigh 是否已赋值
                     */
                    bool UnitPriceDiscountHighHasBeenSet() const;

                private:

                    /**
                     * Name of the billable item.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_priceTitle;
                    bool m_priceTitleHasBeenSet;

                    /**
                     * Name of the billable item displayed in the console.
                     */
                    std::string m_priceName;
                    bool m_priceNameHasBeenSet;

                    /**
                     * Original price of a monthly subscribed cloud disk, in USD.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_originalPrice;
                    bool m_originalPriceHasBeenSet;

                    /**
                     * Discounted price of a monthly subscribed cloud disk, in USD.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_discountPrice;
                    bool m_discountPriceHasBeenSet;

                    /**
                     * Original unit price of a pay-as-you-go cloud disk, in USD.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_unitPrice;
                    bool m_unitPriceHasBeenSet;

                    /**
                     * Discount unit price of a pay-as-you-go cloud disk, in USD.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_unitPriceDiscount;
                    bool m_unitPriceDiscountHasBeenSet;

                    /**
                     * Billing unit for pay-as-you-go cloud disks. Valid value: `HOUR` (billed hourly).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_chargeUnit;
                    bool m_chargeUnitHasBeenSet;

                    /**
                     * Original highly-precise price of a monthly subscribed cloud disk, in USD.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_originalPriceHigh;
                    bool m_originalPriceHighHasBeenSet;

                    /**
                     * Discounted highly-precise price of a monthly subscribed cloud disk, in USD.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_discountPriceHigh;
                    bool m_discountPriceHighHasBeenSet;

                    /**
                     * Original highly-precise unit price of a pay-as-you-go cloud disk, in USD.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_unitPriceHigh;
                    bool m_unitPriceHighHasBeenSet;

                    /**
                     * Discounted highly-precise unit price of a pay-as-you-go cloud disk, in USD.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_unitPriceDiscountHigh;
                    bool m_unitPriceDiscountHighHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_DETAILPRICE_H_
