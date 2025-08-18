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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_ITEMPRICE_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_ITEMPRICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Describes pricing information.
                */
                class ItemPrice : public AbstractModel
                {
                public:
                    ItemPrice();
                    ~ItemPrice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Original price of subsequent total costs, postpaid billing mode usage, unit: usd. <li>if other time interval items are returned, such as UnitPriceSecondStep, this item represents the time interval (0, 96) hr. if no other time interval items are returned, this item represents the full period (0, ∞) hr.
                     * @return UnitPrice Original price of subsequent total costs, postpaid billing mode usage, unit: usd. <li>if other time interval items are returned, such as UnitPriceSecondStep, this item represents the time interval (0, 96) hr. if no other time interval items are returned, this item represents the full period (0, ∞) hr.
                     * 
                     */
                    double GetUnitPrice() const;

                    /**
                     * 设置Original price of subsequent total costs, postpaid billing mode usage, unit: usd. <li>if other time interval items are returned, such as UnitPriceSecondStep, this item represents the time interval (0, 96) hr. if no other time interval items are returned, this item represents the full period (0, ∞) hr.
                     * @param _unitPrice Original price of subsequent total costs, postpaid billing mode usage, unit: usd. <li>if other time interval items are returned, such as UnitPriceSecondStep, this item represents the time interval (0, 96) hr. if no other time interval items are returned, this item represents the full period (0, ∞) hr.
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
                     * 获取Billing unit for pay-as-you-go mode. valid values: <br><li>HOUR: billed on an hourly basis. it's used for hourly POSTPAID instances (`POSTPAID_BY_HOUR`). <br><li>GB: bill BY TRAFFIC in GB. it's used for POSTPAID products that are billed BY the hourly TRAFFIC (`TRAFFIC_POSTPAID_BY_HOUR`).
                     * @return ChargeUnit Billing unit for pay-as-you-go mode. valid values: <br><li>HOUR: billed on an hourly basis. it's used for hourly POSTPAID instances (`POSTPAID_BY_HOUR`). <br><li>GB: bill BY TRAFFIC in GB. it's used for POSTPAID products that are billed BY the hourly TRAFFIC (`TRAFFIC_POSTPAID_BY_HOUR`).
                     * 
                     */
                    std::string GetChargeUnit() const;

                    /**
                     * 设置Billing unit for pay-as-you-go mode. valid values: <br><li>HOUR: billed on an hourly basis. it's used for hourly POSTPAID instances (`POSTPAID_BY_HOUR`). <br><li>GB: bill BY TRAFFIC in GB. it's used for POSTPAID products that are billed BY the hourly TRAFFIC (`TRAFFIC_POSTPAID_BY_HOUR`).
                     * @param _chargeUnit Billing unit for pay-as-you-go mode. valid values: <br><li>HOUR: billed on an hourly basis. it's used for hourly POSTPAID instances (`POSTPAID_BY_HOUR`). <br><li>GB: bill BY TRAFFIC in GB. it's used for POSTPAID products that are billed BY the hourly TRAFFIC (`TRAFFIC_POSTPAID_BY_HOUR`).
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
                     * 获取Original price of total prepaid costs. measurement unit: usd.
                     * @return OriginalPrice Original price of total prepaid costs. measurement unit: usd.
                     * 
                     */
                    double GetOriginalPrice() const;

                    /**
                     * 设置Original price of total prepaid costs. measurement unit: usd.
                     * @param _originalPrice Original price of total prepaid costs. measurement unit: usd.
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
                     * 获取Discount price of total prepaid costs. unit: usd.
                     * @return DiscountPrice Discount price of total prepaid costs. unit: usd.
                     * 
                     */
                    double GetDiscountPrice() const;

                    /**
                     * 设置Discount price of total prepaid costs. unit: usd.
                     * @param _discountPrice Discount price of total prepaid costs. unit: usd.
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
                     * 获取Discount, such as 20.0 representing 80% off.
                     * @return Discount Discount, such as 20.0 representing 80% off.
                     * 
                     */
                    double GetDiscount() const;

                    /**
                     * 设置Discount, such as 20.0 representing 80% off.
                     * @param _discount Discount, such as 20.0 representing 80% off.
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
                     * 获取Discounted price of subsequent total cost, postpaid billing mode usage, unit: usd <li>if other time interval items are returned, such as UnitPriceDiscountSecondStep, this item represents the time interval (0, 96) hr; if no other time interval items are returned, this item represents the full period (0, ∞) hr.
                     * @return UnitPriceDiscount Discounted price of subsequent total cost, postpaid billing mode usage, unit: usd <li>if other time interval items are returned, such as UnitPriceDiscountSecondStep, this item represents the time interval (0, 96) hr; if no other time interval items are returned, this item represents the full period (0, ∞) hr.
                     * 
                     */
                    double GetUnitPriceDiscount() const;

                    /**
                     * 设置Discounted price of subsequent total cost, postpaid billing mode usage, unit: usd <li>if other time interval items are returned, such as UnitPriceDiscountSecondStep, this item represents the time interval (0, 96) hr; if no other time interval items are returned, this item represents the full period (0, ∞) hr.
                     * @param _unitPriceDiscount Discounted price of subsequent total cost, postpaid billing mode usage, unit: usd <li>if other time interval items are returned, such as UnitPriceDiscountSecondStep, this item represents the time interval (0, 96) hr; if no other time interval items are returned, this item represents the full period (0, ∞) hr.
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
                     * 获取Original price of subsequent total costs for usage time range (96, 360) hr in postpaid billing mode. unit: usd.
                     * @return UnitPriceSecondStep Original price of subsequent total costs for usage time range (96, 360) hr in postpaid billing mode. unit: usd.
                     * 
                     */
                    double GetUnitPriceSecondStep() const;

                    /**
                     * 设置Original price of subsequent total costs for usage time range (96, 360) hr in postpaid billing mode. unit: usd.
                     * @param _unitPriceSecondStep Original price of subsequent total costs for usage time range (96, 360) hr in postpaid billing mode. unit: usd.
                     * 
                     */
                    void SetUnitPriceSecondStep(const double& _unitPriceSecondStep);

                    /**
                     * 判断参数 UnitPriceSecondStep 是否已赋值
                     * @return UnitPriceSecondStep 是否已赋值
                     * 
                     */
                    bool UnitPriceSecondStepHasBeenSet() const;

                    /**
                     * 获取Discounted price of subsequent total cost for usage time interval (96, 360) hr in postpaid billing mode. unit: usd.
                     * @return UnitPriceDiscountSecondStep Discounted price of subsequent total cost for usage time interval (96, 360) hr in postpaid billing mode. unit: usd.
                     * 
                     */
                    double GetUnitPriceDiscountSecondStep() const;

                    /**
                     * 设置Discounted price of subsequent total cost for usage time interval (96, 360) hr in postpaid billing mode. unit: usd.
                     * @param _unitPriceDiscountSecondStep Discounted price of subsequent total cost for usage time interval (96, 360) hr in postpaid billing mode. unit: usd.
                     * 
                     */
                    void SetUnitPriceDiscountSecondStep(const double& _unitPriceDiscountSecondStep);

                    /**
                     * 判断参数 UnitPriceDiscountSecondStep 是否已赋值
                     * @return UnitPriceDiscountSecondStep 是否已赋值
                     * 
                     */
                    bool UnitPriceDiscountSecondStepHasBeenSet() const;

                    /**
                     * 获取Specifies the original price of subsequent total costs with a usage time interval exceeding 360 hr in postpaid billing mode. measurement unit: usd.
                     * @return UnitPriceThirdStep Specifies the original price of subsequent total costs with a usage time interval exceeding 360 hr in postpaid billing mode. measurement unit: usd.
                     * 
                     */
                    double GetUnitPriceThirdStep() const;

                    /**
                     * 设置Specifies the original price of subsequent total costs with a usage time interval exceeding 360 hr in postpaid billing mode. measurement unit: usd.
                     * @param _unitPriceThirdStep Specifies the original price of subsequent total costs with a usage time interval exceeding 360 hr in postpaid billing mode. measurement unit: usd.
                     * 
                     */
                    void SetUnitPriceThirdStep(const double& _unitPriceThirdStep);

                    /**
                     * 判断参数 UnitPriceThirdStep 是否已赋值
                     * @return UnitPriceThirdStep 是否已赋值
                     * 
                     */
                    bool UnitPriceThirdStepHasBeenSet() const;

                    /**
                     * 获取Discounted price of subsequent total cost for usage time interval exceeding 360 hr in postpaid billing mode. measurement unit: usd.
                     * @return UnitPriceDiscountThirdStep Discounted price of subsequent total cost for usage time interval exceeding 360 hr in postpaid billing mode. measurement unit: usd.
                     * 
                     */
                    double GetUnitPriceDiscountThirdStep() const;

                    /**
                     * 设置Discounted price of subsequent total cost for usage time interval exceeding 360 hr in postpaid billing mode. measurement unit: usd.
                     * @param _unitPriceDiscountThirdStep Discounted price of subsequent total cost for usage time interval exceeding 360 hr in postpaid billing mode. measurement unit: usd.
                     * 
                     */
                    void SetUnitPriceDiscountThirdStep(const double& _unitPriceDiscountThirdStep);

                    /**
                     * 判断参数 UnitPriceDiscountThirdStep 是否已赋值
                     * @return UnitPriceDiscountThirdStep 是否已赋值
                     * 
                     */
                    bool UnitPriceDiscountThirdStepHasBeenSet() const;

                    /**
                     * 获取Specifies the original price of total 3-year prepaid costs in prepaid billing mode. measurement unit: usd.
Note: This field may return null, indicating that no valid value is found.
                     * @return OriginalPriceThreeYear Specifies the original price of total 3-year prepaid costs in prepaid billing mode. measurement unit: usd.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    double GetOriginalPriceThreeYear() const;

                    /**
                     * 设置Specifies the original price of total 3-year prepaid costs in prepaid billing mode. measurement unit: usd.
Note: This field may return null, indicating that no valid value is found.
                     * @param _originalPriceThreeYear Specifies the original price of total 3-year prepaid costs in prepaid billing mode. measurement unit: usd.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetOriginalPriceThreeYear(const double& _originalPriceThreeYear);

                    /**
                     * 判断参数 OriginalPriceThreeYear 是否已赋值
                     * @return OriginalPriceThreeYear 是否已赋值
                     * 
                     */
                    bool OriginalPriceThreeYearHasBeenSet() const;

                    /**
                     * 获取Specifies the discount price for an advance payment of the total fee for three years, prepaid mode usage, measurement unit: usd.
Note: This field may return null, indicating that no valid value is found.
                     * @return DiscountPriceThreeYear Specifies the discount price for an advance payment of the total fee for three years, prepaid mode usage, measurement unit: usd.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    double GetDiscountPriceThreeYear() const;

                    /**
                     * 设置Specifies the discount price for an advance payment of the total fee for three years, prepaid mode usage, measurement unit: usd.
Note: This field may return null, indicating that no valid value is found.
                     * @param _discountPriceThreeYear Specifies the discount price for an advance payment of the total fee for three years, prepaid mode usage, measurement unit: usd.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetDiscountPriceThreeYear(const double& _discountPriceThreeYear);

                    /**
                     * 判断参数 DiscountPriceThreeYear 是否已赋值
                     * @return DiscountPriceThreeYear 是否已赋值
                     * 
                     */
                    bool DiscountPriceThreeYearHasBeenSet() const;

                    /**
                     * 获取Specifies the discount for a 3-year advance payment, for example 20.0 represents 80% off.
Note: This field may return null, indicating that no valid value is found.
                     * @return DiscountThreeYear Specifies the discount for a 3-year advance payment, for example 20.0 represents 80% off.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    double GetDiscountThreeYear() const;

                    /**
                     * 设置Specifies the discount for a 3-year advance payment, for example 20.0 represents 80% off.
Note: This field may return null, indicating that no valid value is found.
                     * @param _discountThreeYear Specifies the discount for a 3-year advance payment, for example 20.0 represents 80% off.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetDiscountThreeYear(const double& _discountThreeYear);

                    /**
                     * 判断参数 DiscountThreeYear 是否已赋值
                     * @return DiscountThreeYear 是否已赋值
                     * 
                     */
                    bool DiscountThreeYearHasBeenSet() const;

                    /**
                     * 获取Specifies the original price of the 5-year total cost with advance payment, using prepaid billing mode. measurement unit: usd.
Note: This field may return null, indicating that no valid value is found.
                     * @return OriginalPriceFiveYear Specifies the original price of the 5-year total cost with advance payment, using prepaid billing mode. measurement unit: usd.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    double GetOriginalPriceFiveYear() const;

                    /**
                     * 设置Specifies the original price of the 5-year total cost with advance payment, using prepaid billing mode. measurement unit: usd.
Note: This field may return null, indicating that no valid value is found.
                     * @param _originalPriceFiveYear Specifies the original price of the 5-year total cost with advance payment, using prepaid billing mode. measurement unit: usd.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetOriginalPriceFiveYear(const double& _originalPriceFiveYear);

                    /**
                     * 判断参数 OriginalPriceFiveYear 是否已赋值
                     * @return OriginalPriceFiveYear 是否已赋值
                     * 
                     */
                    bool OriginalPriceFiveYearHasBeenSet() const;

                    /**
                     * 获取Prepaid 5-year total cost discount price, prepaid billing mode usage. unit: usd.
Note: This field may return null, indicating that no valid value is found.
                     * @return DiscountPriceFiveYear Prepaid 5-year total cost discount price, prepaid billing mode usage. unit: usd.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    double GetDiscountPriceFiveYear() const;

                    /**
                     * 设置Prepaid 5-year total cost discount price, prepaid billing mode usage. unit: usd.
Note: This field may return null, indicating that no valid value is found.
                     * @param _discountPriceFiveYear Prepaid 5-year total cost discount price, prepaid billing mode usage. unit: usd.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetDiscountPriceFiveYear(const double& _discountPriceFiveYear);

                    /**
                     * 判断参数 DiscountPriceFiveYear 是否已赋值
                     * @return DiscountPriceFiveYear 是否已赋值
                     * 
                     */
                    bool DiscountPriceFiveYearHasBeenSet() const;

                    /**
                     * 获取Specifies the discount for 5-year advance payment, such as 20.0 for 80% off.
Note: This field may return null, indicating that no valid value is found.
                     * @return DiscountFiveYear Specifies the discount for 5-year advance payment, such as 20.0 for 80% off.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    double GetDiscountFiveYear() const;

                    /**
                     * 设置Specifies the discount for 5-year advance payment, such as 20.0 for 80% off.
Note: This field may return null, indicating that no valid value is found.
                     * @param _discountFiveYear Specifies the discount for 5-year advance payment, such as 20.0 for 80% off.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetDiscountFiveYear(const double& _discountFiveYear);

                    /**
                     * 判断参数 DiscountFiveYear 是否已赋值
                     * @return DiscountFiveYear 是否已赋值
                     * 
                     */
                    bool DiscountFiveYearHasBeenSet() const;

                    /**
                     * 获取Original price of one-year advance payment total cost. prepaid mode usage. unit: usd.
Note: This field may return null, indicating that no valid value is found.
                     * @return OriginalPriceOneYear Original price of one-year advance payment total cost. prepaid mode usage. unit: usd.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    double GetOriginalPriceOneYear() const;

                    /**
                     * 设置Original price of one-year advance payment total cost. prepaid mode usage. unit: usd.
Note: This field may return null, indicating that no valid value is found.
                     * @param _originalPriceOneYear Original price of one-year advance payment total cost. prepaid mode usage. unit: usd.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetOriginalPriceOneYear(const double& _originalPriceOneYear);

                    /**
                     * 判断参数 OriginalPriceOneYear 是否已赋值
                     * @return OriginalPriceOneYear 是否已赋值
                     * 
                     */
                    bool OriginalPriceOneYearHasBeenSet() const;

                    /**
                     * 获取Discount price for total advance payment for one year. specifies prepaid mode usage. measurement unit: usd.
Note: This field may return null, indicating that no valid value is found.
                     * @return DiscountPriceOneYear Discount price for total advance payment for one year. specifies prepaid mode usage. measurement unit: usd.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    double GetDiscountPriceOneYear() const;

                    /**
                     * 设置Discount price for total advance payment for one year. specifies prepaid mode usage. measurement unit: usd.
Note: This field may return null, indicating that no valid value is found.
                     * @param _discountPriceOneYear Discount price for total advance payment for one year. specifies prepaid mode usage. measurement unit: usd.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetDiscountPriceOneYear(const double& _discountPriceOneYear);

                    /**
                     * 判断参数 DiscountPriceOneYear 是否已赋值
                     * @return DiscountPriceOneYear 是否已赋值
                     * 
                     */
                    bool DiscountPriceOneYearHasBeenSet() const;

                    /**
                     * 获取Specifies the discount for a one-year advance payment, such as 20.0 for 80% off.
Note: This field may return null, indicating that no valid value is found.
                     * @return DiscountOneYear Specifies the discount for a one-year advance payment, such as 20.0 for 80% off.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    double GetDiscountOneYear() const;

                    /**
                     * 设置Specifies the discount for a one-year advance payment, such as 20.0 for 80% off.
Note: This field may return null, indicating that no valid value is found.
                     * @param _discountOneYear Specifies the discount for a one-year advance payment, such as 20.0 for 80% off.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetDiscountOneYear(const double& _discountOneYear);

                    /**
                     * 判断参数 DiscountOneYear 是否已赋值
                     * @return DiscountOneYear 是否已赋值
                     * 
                     */
                    bool DiscountOneYearHasBeenSet() const;

                private:

                    /**
                     * Original price of subsequent total costs, postpaid billing mode usage, unit: usd. <li>if other time interval items are returned, such as UnitPriceSecondStep, this item represents the time interval (0, 96) hr. if no other time interval items are returned, this item represents the full period (0, ∞) hr.
                     */
                    double m_unitPrice;
                    bool m_unitPriceHasBeenSet;

                    /**
                     * Billing unit for pay-as-you-go mode. valid values: <br><li>HOUR: billed on an hourly basis. it's used for hourly POSTPAID instances (`POSTPAID_BY_HOUR`). <br><li>GB: bill BY TRAFFIC in GB. it's used for POSTPAID products that are billed BY the hourly TRAFFIC (`TRAFFIC_POSTPAID_BY_HOUR`).
                     */
                    std::string m_chargeUnit;
                    bool m_chargeUnitHasBeenSet;

                    /**
                     * Original price of total prepaid costs. measurement unit: usd.
                     */
                    double m_originalPrice;
                    bool m_originalPriceHasBeenSet;

                    /**
                     * Discount price of total prepaid costs. unit: usd.
                     */
                    double m_discountPrice;
                    bool m_discountPriceHasBeenSet;

                    /**
                     * Discount, such as 20.0 representing 80% off.
                     */
                    double m_discount;
                    bool m_discountHasBeenSet;

                    /**
                     * Discounted price of subsequent total cost, postpaid billing mode usage, unit: usd <li>if other time interval items are returned, such as UnitPriceDiscountSecondStep, this item represents the time interval (0, 96) hr; if no other time interval items are returned, this item represents the full period (0, ∞) hr.
                     */
                    double m_unitPriceDiscount;
                    bool m_unitPriceDiscountHasBeenSet;

                    /**
                     * Original price of subsequent total costs for usage time range (96, 360) hr in postpaid billing mode. unit: usd.
                     */
                    double m_unitPriceSecondStep;
                    bool m_unitPriceSecondStepHasBeenSet;

                    /**
                     * Discounted price of subsequent total cost for usage time interval (96, 360) hr in postpaid billing mode. unit: usd.
                     */
                    double m_unitPriceDiscountSecondStep;
                    bool m_unitPriceDiscountSecondStepHasBeenSet;

                    /**
                     * Specifies the original price of subsequent total costs with a usage time interval exceeding 360 hr in postpaid billing mode. measurement unit: usd.
                     */
                    double m_unitPriceThirdStep;
                    bool m_unitPriceThirdStepHasBeenSet;

                    /**
                     * Discounted price of subsequent total cost for usage time interval exceeding 360 hr in postpaid billing mode. measurement unit: usd.
                     */
                    double m_unitPriceDiscountThirdStep;
                    bool m_unitPriceDiscountThirdStepHasBeenSet;

                    /**
                     * Specifies the original price of total 3-year prepaid costs in prepaid billing mode. measurement unit: usd.
Note: This field may return null, indicating that no valid value is found.
                     */
                    double m_originalPriceThreeYear;
                    bool m_originalPriceThreeYearHasBeenSet;

                    /**
                     * Specifies the discount price for an advance payment of the total fee for three years, prepaid mode usage, measurement unit: usd.
Note: This field may return null, indicating that no valid value is found.
                     */
                    double m_discountPriceThreeYear;
                    bool m_discountPriceThreeYearHasBeenSet;

                    /**
                     * Specifies the discount for a 3-year advance payment, for example 20.0 represents 80% off.
Note: This field may return null, indicating that no valid value is found.
                     */
                    double m_discountThreeYear;
                    bool m_discountThreeYearHasBeenSet;

                    /**
                     * Specifies the original price of the 5-year total cost with advance payment, using prepaid billing mode. measurement unit: usd.
Note: This field may return null, indicating that no valid value is found.
                     */
                    double m_originalPriceFiveYear;
                    bool m_originalPriceFiveYearHasBeenSet;

                    /**
                     * Prepaid 5-year total cost discount price, prepaid billing mode usage. unit: usd.
Note: This field may return null, indicating that no valid value is found.
                     */
                    double m_discountPriceFiveYear;
                    bool m_discountPriceFiveYearHasBeenSet;

                    /**
                     * Specifies the discount for 5-year advance payment, such as 20.0 for 80% off.
Note: This field may return null, indicating that no valid value is found.
                     */
                    double m_discountFiveYear;
                    bool m_discountFiveYearHasBeenSet;

                    /**
                     * Original price of one-year advance payment total cost. prepaid mode usage. unit: usd.
Note: This field may return null, indicating that no valid value is found.
                     */
                    double m_originalPriceOneYear;
                    bool m_originalPriceOneYearHasBeenSet;

                    /**
                     * Discount price for total advance payment for one year. specifies prepaid mode usage. measurement unit: usd.
Note: This field may return null, indicating that no valid value is found.
                     */
                    double m_discountPriceOneYear;
                    bool m_discountPriceOneYearHasBeenSet;

                    /**
                     * Specifies the discount for a one-year advance payment, such as 20.0 for 80% off.
Note: This field may return null, indicating that no valid value is found.
                     */
                    double m_discountOneYear;
                    bool m_discountOneYearHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_ITEMPRICE_H_
