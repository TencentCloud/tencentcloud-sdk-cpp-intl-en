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
                     * 获取The original unit price for pay-as-you-go mode in USD. <br><li>When a billing tier is returned, it indicates the price fo the returned billing tier. For example, if `UnitPriceSecondStep` is returned, it refers to the unit price for the usage between 0 to 96 hours. Otherwise, it refers to that the unit price for unlimited usage.
Note: this field may return null, indicating that no valid value is obtained.
                     * @return UnitPrice The original unit price for pay-as-you-go mode in USD. <br><li>When a billing tier is returned, it indicates the price fo the returned billing tier. For example, if `UnitPriceSecondStep` is returned, it refers to the unit price for the usage between 0 to 96 hours. Otherwise, it refers to that the unit price for unlimited usage.
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    double GetUnitPrice() const;

                    /**
                     * 设置The original unit price for pay-as-you-go mode in USD. <br><li>When a billing tier is returned, it indicates the price fo the returned billing tier. For example, if `UnitPriceSecondStep` is returned, it refers to the unit price for the usage between 0 to 96 hours. Otherwise, it refers to that the unit price for unlimited usage.
Note: this field may return null, indicating that no valid value is obtained.
                     * @param UnitPrice The original unit price for pay-as-you-go mode in USD. <br><li>When a billing tier is returned, it indicates the price fo the returned billing tier. For example, if `UnitPriceSecondStep` is returned, it refers to the unit price for the usage between 0 to 96 hours. Otherwise, it refers to that the unit price for unlimited usage.
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    void SetUnitPrice(const double& _unitPrice);

                    /**
                     * 判断参数 UnitPrice 是否已赋值
                     * @return UnitPrice 是否已赋值
                     */
                    bool UnitPriceHasBeenSet() const;

                    /**
                     * 获取Billing unit for pay-as-you-go mode. Valid values: <br><li>HOUR: billed on an hourly basis. It's used for hourly postpaid instances (`POSTPAID_BY_HOUR`). <br><li>GB: bill by traffic in GB. It's used for postpaid products that are billed by the hourly traffic (`TRAFFIC_POSTPAID_BY_HOUR`).
Note: this field may return null, indicating that no valid value is obtained.
                     * @return ChargeUnit Billing unit for pay-as-you-go mode. Valid values: <br><li>HOUR: billed on an hourly basis. It's used for hourly postpaid instances (`POSTPAID_BY_HOUR`). <br><li>GB: bill by traffic in GB. It's used for postpaid products that are billed by the hourly traffic (`TRAFFIC_POSTPAID_BY_HOUR`).
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    std::string GetChargeUnit() const;

                    /**
                     * 设置Billing unit for pay-as-you-go mode. Valid values: <br><li>HOUR: billed on an hourly basis. It's used for hourly postpaid instances (`POSTPAID_BY_HOUR`). <br><li>GB: bill by traffic in GB. It's used for postpaid products that are billed by the hourly traffic (`TRAFFIC_POSTPAID_BY_HOUR`).
Note: this field may return null, indicating that no valid value is obtained.
                     * @param ChargeUnit Billing unit for pay-as-you-go mode. Valid values: <br><li>HOUR: billed on an hourly basis. It's used for hourly postpaid instances (`POSTPAID_BY_HOUR`). <br><li>GB: bill by traffic in GB. It's used for postpaid products that are billed by the hourly traffic (`TRAFFIC_POSTPAID_BY_HOUR`).
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    void SetChargeUnit(const std::string& _chargeUnit);

                    /**
                     * 判断参数 ChargeUnit 是否已赋值
                     * @return ChargeUnit 是否已赋值
                     */
                    bool ChargeUnitHasBeenSet() const;

                    /**
                     * 获取The original price of a pay-in-advance instance, in USD.
Note: this field may return null, indicating that no valid value is obtained.
                     * @return OriginalPrice The original price of a pay-in-advance instance, in USD.
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    double GetOriginalPrice() const;

                    /**
                     * 设置The original price of a pay-in-advance instance, in USD.
Note: this field may return null, indicating that no valid value is obtained.
                     * @param OriginalPrice The original price of a pay-in-advance instance, in USD.
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    void SetOriginalPrice(const double& _originalPrice);

                    /**
                     * 判断参数 OriginalPrice 是否已赋值
                     * @return OriginalPrice 是否已赋值
                     */
                    bool OriginalPriceHasBeenSet() const;

                    /**
                     * 获取Discount price of a prepaid instance, in USD.
Note: this field may return null, indicating that no valid value is obtained.
                     * @return DiscountPrice Discount price of a prepaid instance, in USD.
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    double GetDiscountPrice() const;

                    /**
                     * 设置Discount price of a prepaid instance, in USD.
Note: this field may return null, indicating that no valid value is obtained.
                     * @param DiscountPrice Discount price of a prepaid instance, in USD.
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    void SetDiscountPrice(const double& _discountPrice);

                    /**
                     * 判断参数 DiscountPrice 是否已赋值
                     * @return DiscountPrice 是否已赋值
                     */
                    bool DiscountPriceHasBeenSet() const;

                    /**
                     * 获取Percentage of the original price. For example, if you enter "20.0", the discounted price will be 20% of the original price.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Discount Percentage of the original price. For example, if you enter "20.0", the discounted price will be 20% of the original price.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    double GetDiscount() const;

                    /**
                     * 设置Percentage of the original price. For example, if you enter "20.0", the discounted price will be 20% of the original price.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Discount Percentage of the original price. For example, if you enter "20.0", the discounted price will be 20% of the original price.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDiscount(const double& _discount);

                    /**
                     * 判断参数 Discount 是否已赋值
                     * @return Discount 是否已赋值
                     */
                    bool DiscountHasBeenSet() const;

                    /**
                     * 获取The discounted unit price for pay-as-you-go mode in USD. <br><li>When a billing tier is returned, it indicates the price fo the returned billing tier. For example, if `UnitPriceSecondStep` is returned, it refers to the unit price for the usage between 0 to 96 hours. Otherwise, it refers to that the unit price for unlimited usage.
Note: this field may return null, indicating that no valid value is obtained.
                     * @return UnitPriceDiscount The discounted unit price for pay-as-you-go mode in USD. <br><li>When a billing tier is returned, it indicates the price fo the returned billing tier. For example, if `UnitPriceSecondStep` is returned, it refers to the unit price for the usage between 0 to 96 hours. Otherwise, it refers to that the unit price for unlimited usage.
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    double GetUnitPriceDiscount() const;

                    /**
                     * 设置The discounted unit price for pay-as-you-go mode in USD. <br><li>When a billing tier is returned, it indicates the price fo the returned billing tier. For example, if `UnitPriceSecondStep` is returned, it refers to the unit price for the usage between 0 to 96 hours. Otherwise, it refers to that the unit price for unlimited usage.
Note: this field may return null, indicating that no valid value is obtained.
                     * @param UnitPriceDiscount The discounted unit price for pay-as-you-go mode in USD. <br><li>When a billing tier is returned, it indicates the price fo the returned billing tier. For example, if `UnitPriceSecondStep` is returned, it refers to the unit price for the usage between 0 to 96 hours. Otherwise, it refers to that the unit price for unlimited usage.
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    void SetUnitPriceDiscount(const double& _unitPriceDiscount);

                    /**
                     * 判断参数 UnitPriceDiscount 是否已赋值
                     * @return UnitPriceDiscount 是否已赋值
                     */
                    bool UnitPriceDiscountHasBeenSet() const;

                    /**
                     * 获取Original unit price for the usage between 96 to 360 hours in USD. It's applicable to pay-as-you-go mode.
Note: this field may return null, indicating that no valid value is obtained.
                     * @return UnitPriceSecondStep Original unit price for the usage between 96 to 360 hours in USD. It's applicable to pay-as-you-go mode.
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    double GetUnitPriceSecondStep() const;

                    /**
                     * 设置Original unit price for the usage between 96 to 360 hours in USD. It's applicable to pay-as-you-go mode.
Note: this field may return null, indicating that no valid value is obtained.
                     * @param UnitPriceSecondStep Original unit price for the usage between 96 to 360 hours in USD. It's applicable to pay-as-you-go mode.
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    void SetUnitPriceSecondStep(const double& _unitPriceSecondStep);

                    /**
                     * 判断参数 UnitPriceSecondStep 是否已赋值
                     * @return UnitPriceSecondStep 是否已赋值
                     */
                    bool UnitPriceSecondStepHasBeenSet() const;

                    /**
                     * 获取Discounted unit price for the usage between 96 to 360 hours in USD. It's applicable to pay-as-you-go mode.
Note: this field may return null, indicating that no valid value is obtained.
                     * @return UnitPriceDiscountSecondStep Discounted unit price for the usage between 96 to 360 hours in USD. It's applicable to pay-as-you-go mode.
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    double GetUnitPriceDiscountSecondStep() const;

                    /**
                     * 设置Discounted unit price for the usage between 96 to 360 hours in USD. It's applicable to pay-as-you-go mode.
Note: this field may return null, indicating that no valid value is obtained.
                     * @param UnitPriceDiscountSecondStep Discounted unit price for the usage between 96 to 360 hours in USD. It's applicable to pay-as-you-go mode.
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    void SetUnitPriceDiscountSecondStep(const double& _unitPriceDiscountSecondStep);

                    /**
                     * 判断参数 UnitPriceDiscountSecondStep 是否已赋值
                     * @return UnitPriceDiscountSecondStep 是否已赋值
                     */
                    bool UnitPriceDiscountSecondStepHasBeenSet() const;

                    /**
                     * 获取Original unit price for the usage after 360 hours in USD. It's applicable to pay-as-you-go mode.
Note: this field may return null, indicating that no valid value is obtained.
                     * @return UnitPriceThirdStep Original unit price for the usage after 360 hours in USD. It's applicable to pay-as-you-go mode.
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    double GetUnitPriceThirdStep() const;

                    /**
                     * 设置Original unit price for the usage after 360 hours in USD. It's applicable to pay-as-you-go mode.
Note: this field may return null, indicating that no valid value is obtained.
                     * @param UnitPriceThirdStep Original unit price for the usage after 360 hours in USD. It's applicable to pay-as-you-go mode.
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    void SetUnitPriceThirdStep(const double& _unitPriceThirdStep);

                    /**
                     * 判断参数 UnitPriceThirdStep 是否已赋值
                     * @return UnitPriceThirdStep 是否已赋值
                     */
                    bool UnitPriceThirdStepHasBeenSet() const;

                    /**
                     * 获取Discounted unit price for the usage after 360 hours in USD. It's applicable to pay-as-you-go mode.
Note: this field may return null, indicating that no valid value is obtained.
                     * @return UnitPriceDiscountThirdStep Discounted unit price for the usage after 360 hours in USD. It's applicable to pay-as-you-go mode.
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    double GetUnitPriceDiscountThirdStep() const;

                    /**
                     * 设置Discounted unit price for the usage after 360 hours in USD. It's applicable to pay-as-you-go mode.
Note: this field may return null, indicating that no valid value is obtained.
                     * @param UnitPriceDiscountThirdStep Discounted unit price for the usage after 360 hours in USD. It's applicable to pay-as-you-go mode.
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    void SetUnitPriceDiscountThirdStep(const double& _unitPriceDiscountThirdStep);

                    /**
                     * 判断参数 UnitPriceDiscountThirdStep 是否已赋值
                     * @return UnitPriceDiscountThirdStep 是否已赋值
                     */
                    bool UnitPriceDiscountThirdStepHasBeenSet() const;

                    /**
                     * 获取Original 3-year payment, in USD. This parameter is only available to upfront payment mode.
Note: this field may return `null`, indicating that no valid value was found.
Note: this field may return `null`, indicating that no valid value was found.
                     * @return OriginalPriceThreeYear Original 3-year payment, in USD. This parameter is only available to upfront payment mode.
Note: this field may return `null`, indicating that no valid value was found.
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    double GetOriginalPriceThreeYear() const;

                    /**
                     * 设置Original 3-year payment, in USD. This parameter is only available to upfront payment mode.
Note: this field may return `null`, indicating that no valid value was found.
Note: this field may return `null`, indicating that no valid value was found.
                     * @param OriginalPriceThreeYear Original 3-year payment, in USD. This parameter is only available to upfront payment mode.
Note: this field may return `null`, indicating that no valid value was found.
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    void SetOriginalPriceThreeYear(const double& _originalPriceThreeYear);

                    /**
                     * 判断参数 OriginalPriceThreeYear 是否已赋值
                     * @return OriginalPriceThreeYear 是否已赋值
                     */
                    bool OriginalPriceThreeYearHasBeenSet() const;

                    /**
                     * 获取Discounted 3-year upfront payment, in USD. This parameter is only available to upfront payment mode.
Note: this field may return `null`, indicating that no valid value was found.
Note: this field may return `null`, indicating that no valid value was found.
                     * @return DiscountPriceThreeYear Discounted 3-year upfront payment, in USD. This parameter is only available to upfront payment mode.
Note: this field may return `null`, indicating that no valid value was found.
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    double GetDiscountPriceThreeYear() const;

                    /**
                     * 设置Discounted 3-year upfront payment, in USD. This parameter is only available to upfront payment mode.
Note: this field may return `null`, indicating that no valid value was found.
Note: this field may return `null`, indicating that no valid value was found.
                     * @param DiscountPriceThreeYear Discounted 3-year upfront payment, in USD. This parameter is only available to upfront payment mode.
Note: this field may return `null`, indicating that no valid value was found.
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    void SetDiscountPriceThreeYear(const double& _discountPriceThreeYear);

                    /**
                     * 判断参数 DiscountPriceThreeYear 是否已赋值
                     * @return DiscountPriceThreeYear 是否已赋值
                     */
                    bool DiscountPriceThreeYearHasBeenSet() const;

                    /**
                     * 获取Discount for 3-year upfront payment. For example, 20.0 indicates 80% off.
Note: this field may return `null`, indicating that no valid value was found.
Note: this field may return `null`, indicating that no valid value was found.
                     * @return DiscountThreeYear Discount for 3-year upfront payment. For example, 20.0 indicates 80% off.
Note: this field may return `null`, indicating that no valid value was found.
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    double GetDiscountThreeYear() const;

                    /**
                     * 设置Discount for 3-year upfront payment. For example, 20.0 indicates 80% off.
Note: this field may return `null`, indicating that no valid value was found.
Note: this field may return `null`, indicating that no valid value was found.
                     * @param DiscountThreeYear Discount for 3-year upfront payment. For example, 20.0 indicates 80% off.
Note: this field may return `null`, indicating that no valid value was found.
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    void SetDiscountThreeYear(const double& _discountThreeYear);

                    /**
                     * 判断参数 DiscountThreeYear 是否已赋值
                     * @return DiscountThreeYear 是否已赋值
                     */
                    bool DiscountThreeYearHasBeenSet() const;

                    /**
                     * 获取Original 5-year payment, in USD. This parameter is only available to upfront payment mode.
Note: this field may return `null`, indicating that no valid value was found.
Note: this field may return `null`, indicating that no valid value was found.
                     * @return OriginalPriceFiveYear Original 5-year payment, in USD. This parameter is only available to upfront payment mode.
Note: this field may return `null`, indicating that no valid value was found.
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    double GetOriginalPriceFiveYear() const;

                    /**
                     * 设置Original 5-year payment, in USD. This parameter is only available to upfront payment mode.
Note: this field may return `null`, indicating that no valid value was found.
Note: this field may return `null`, indicating that no valid value was found.
                     * @param OriginalPriceFiveYear Original 5-year payment, in USD. This parameter is only available to upfront payment mode.
Note: this field may return `null`, indicating that no valid value was found.
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    void SetOriginalPriceFiveYear(const double& _originalPriceFiveYear);

                    /**
                     * 判断参数 OriginalPriceFiveYear 是否已赋值
                     * @return OriginalPriceFiveYear 是否已赋值
                     */
                    bool OriginalPriceFiveYearHasBeenSet() const;

                    /**
                     * 获取Discounted 5-year upfront payment, in USD. This parameter is only available to upfront payment mode.
Note: this field may return `null`, indicating that no valid value was found.
Note: this field may return `null`, indicating that no valid value was found.
                     * @return DiscountPriceFiveYear Discounted 5-year upfront payment, in USD. This parameter is only available to upfront payment mode.
Note: this field may return `null`, indicating that no valid value was found.
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    double GetDiscountPriceFiveYear() const;

                    /**
                     * 设置Discounted 5-year upfront payment, in USD. This parameter is only available to upfront payment mode.
Note: this field may return `null`, indicating that no valid value was found.
Note: this field may return `null`, indicating that no valid value was found.
                     * @param DiscountPriceFiveYear Discounted 5-year upfront payment, in USD. This parameter is only available to upfront payment mode.
Note: this field may return `null`, indicating that no valid value was found.
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    void SetDiscountPriceFiveYear(const double& _discountPriceFiveYear);

                    /**
                     * 判断参数 DiscountPriceFiveYear 是否已赋值
                     * @return DiscountPriceFiveYear 是否已赋值
                     */
                    bool DiscountPriceFiveYearHasBeenSet() const;

                    /**
                     * 获取Discount for 5-year upfront payment. For example, 20.0 indicates 80% off.
Note: this field may return `null`, indicating that no valid value was found.
Note: this field may return `null`, indicating that no valid value was found.
                     * @return DiscountFiveYear Discount for 5-year upfront payment. For example, 20.0 indicates 80% off.
Note: this field may return `null`, indicating that no valid value was found.
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    double GetDiscountFiveYear() const;

                    /**
                     * 设置Discount for 5-year upfront payment. For example, 20.0 indicates 80% off.
Note: this field may return `null`, indicating that no valid value was found.
Note: this field may return `null`, indicating that no valid value was found.
                     * @param DiscountFiveYear Discount for 5-year upfront payment. For example, 20.0 indicates 80% off.
Note: this field may return `null`, indicating that no valid value was found.
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    void SetDiscountFiveYear(const double& _discountFiveYear);

                    /**
                     * 判断参数 DiscountFiveYear 是否已赋值
                     * @return DiscountFiveYear 是否已赋值
                     */
                    bool DiscountFiveYearHasBeenSet() const;

                    /**
                     * 获取Original 1-year payment, in USD. This parameter is only available to upfront payment mode.
Note: this field may return `null`, indicating that no valid value was found.
Note: this field may return `null`, indicating that no valid value was found.
                     * @return OriginalPriceOneYear Original 1-year payment, in USD. This parameter is only available to upfront payment mode.
Note: this field may return `null`, indicating that no valid value was found.
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    double GetOriginalPriceOneYear() const;

                    /**
                     * 设置Original 1-year payment, in USD. This parameter is only available to upfront payment mode.
Note: this field may return `null`, indicating that no valid value was found.
Note: this field may return `null`, indicating that no valid value was found.
                     * @param OriginalPriceOneYear Original 1-year payment, in USD. This parameter is only available to upfront payment mode.
Note: this field may return `null`, indicating that no valid value was found.
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    void SetOriginalPriceOneYear(const double& _originalPriceOneYear);

                    /**
                     * 判断参数 OriginalPriceOneYear 是否已赋值
                     * @return OriginalPriceOneYear 是否已赋值
                     */
                    bool OriginalPriceOneYearHasBeenSet() const;

                    /**
                     * 获取Discounted 1-year payment, in USD. This parameter is only available to upfront payment mode.
Note: this field may return `null`, indicating that no valid value was found.
Note: this field may return `null`, indicating that no valid value was found.
                     * @return DiscountPriceOneYear Discounted 1-year payment, in USD. This parameter is only available to upfront payment mode.
Note: this field may return `null`, indicating that no valid value was found.
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    double GetDiscountPriceOneYear() const;

                    /**
                     * 设置Discounted 1-year payment, in USD. This parameter is only available to upfront payment mode.
Note: this field may return `null`, indicating that no valid value was found.
Note: this field may return `null`, indicating that no valid value was found.
                     * @param DiscountPriceOneYear Discounted 1-year payment, in USD. This parameter is only available to upfront payment mode.
Note: this field may return `null`, indicating that no valid value was found.
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    void SetDiscountPriceOneYear(const double& _discountPriceOneYear);

                    /**
                     * 判断参数 DiscountPriceOneYear 是否已赋值
                     * @return DiscountPriceOneYear 是否已赋值
                     */
                    bool DiscountPriceOneYearHasBeenSet() const;

                    /**
                     * 获取Discount for 1-year upfront payment. For example, 20.0 indicates 80% off.
Note: this field may return `null`, indicating that no valid value was found.
Note: this field may return `null`, indicating that no valid value was found.
                     * @return DiscountOneYear Discount for 1-year upfront payment. For example, 20.0 indicates 80% off.
Note: this field may return `null`, indicating that no valid value was found.
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    double GetDiscountOneYear() const;

                    /**
                     * 设置Discount for 1-year upfront payment. For example, 20.0 indicates 80% off.
Note: this field may return `null`, indicating that no valid value was found.
Note: this field may return `null`, indicating that no valid value was found.
                     * @param DiscountOneYear Discount for 1-year upfront payment. For example, 20.0 indicates 80% off.
Note: this field may return `null`, indicating that no valid value was found.
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    void SetDiscountOneYear(const double& _discountOneYear);

                    /**
                     * 判断参数 DiscountOneYear 是否已赋值
                     * @return DiscountOneYear 是否已赋值
                     */
                    bool DiscountOneYearHasBeenSet() const;

                private:

                    /**
                     * The original unit price for pay-as-you-go mode in USD. <br><li>When a billing tier is returned, it indicates the price fo the returned billing tier. For example, if `UnitPriceSecondStep` is returned, it refers to the unit price for the usage between 0 to 96 hours. Otherwise, it refers to that the unit price for unlimited usage.
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    double m_unitPrice;
                    bool m_unitPriceHasBeenSet;

                    /**
                     * Billing unit for pay-as-you-go mode. Valid values: <br><li>HOUR: billed on an hourly basis. It's used for hourly postpaid instances (`POSTPAID_BY_HOUR`). <br><li>GB: bill by traffic in GB. It's used for postpaid products that are billed by the hourly traffic (`TRAFFIC_POSTPAID_BY_HOUR`).
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    std::string m_chargeUnit;
                    bool m_chargeUnitHasBeenSet;

                    /**
                     * The original price of a pay-in-advance instance, in USD.
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    double m_originalPrice;
                    bool m_originalPriceHasBeenSet;

                    /**
                     * Discount price of a prepaid instance, in USD.
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    double m_discountPrice;
                    bool m_discountPriceHasBeenSet;

                    /**
                     * Percentage of the original price. For example, if you enter "20.0", the discounted price will be 20% of the original price.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    double m_discount;
                    bool m_discountHasBeenSet;

                    /**
                     * The discounted unit price for pay-as-you-go mode in USD. <br><li>When a billing tier is returned, it indicates the price fo the returned billing tier. For example, if `UnitPriceSecondStep` is returned, it refers to the unit price for the usage between 0 to 96 hours. Otherwise, it refers to that the unit price for unlimited usage.
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    double m_unitPriceDiscount;
                    bool m_unitPriceDiscountHasBeenSet;

                    /**
                     * Original unit price for the usage between 96 to 360 hours in USD. It's applicable to pay-as-you-go mode.
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    double m_unitPriceSecondStep;
                    bool m_unitPriceSecondStepHasBeenSet;

                    /**
                     * Discounted unit price for the usage between 96 to 360 hours in USD. It's applicable to pay-as-you-go mode.
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    double m_unitPriceDiscountSecondStep;
                    bool m_unitPriceDiscountSecondStepHasBeenSet;

                    /**
                     * Original unit price for the usage after 360 hours in USD. It's applicable to pay-as-you-go mode.
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    double m_unitPriceThirdStep;
                    bool m_unitPriceThirdStepHasBeenSet;

                    /**
                     * Discounted unit price for the usage after 360 hours in USD. It's applicable to pay-as-you-go mode.
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    double m_unitPriceDiscountThirdStep;
                    bool m_unitPriceDiscountThirdStepHasBeenSet;

                    /**
                     * Original 3-year payment, in USD. This parameter is only available to upfront payment mode.
Note: this field may return `null`, indicating that no valid value was found.
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    double m_originalPriceThreeYear;
                    bool m_originalPriceThreeYearHasBeenSet;

                    /**
                     * Discounted 3-year upfront payment, in USD. This parameter is only available to upfront payment mode.
Note: this field may return `null`, indicating that no valid value was found.
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    double m_discountPriceThreeYear;
                    bool m_discountPriceThreeYearHasBeenSet;

                    /**
                     * Discount for 3-year upfront payment. For example, 20.0 indicates 80% off.
Note: this field may return `null`, indicating that no valid value was found.
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    double m_discountThreeYear;
                    bool m_discountThreeYearHasBeenSet;

                    /**
                     * Original 5-year payment, in USD. This parameter is only available to upfront payment mode.
Note: this field may return `null`, indicating that no valid value was found.
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    double m_originalPriceFiveYear;
                    bool m_originalPriceFiveYearHasBeenSet;

                    /**
                     * Discounted 5-year upfront payment, in USD. This parameter is only available to upfront payment mode.
Note: this field may return `null`, indicating that no valid value was found.
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    double m_discountPriceFiveYear;
                    bool m_discountPriceFiveYearHasBeenSet;

                    /**
                     * Discount for 5-year upfront payment. For example, 20.0 indicates 80% off.
Note: this field may return `null`, indicating that no valid value was found.
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    double m_discountFiveYear;
                    bool m_discountFiveYearHasBeenSet;

                    /**
                     * Original 1-year payment, in USD. This parameter is only available to upfront payment mode.
Note: this field may return `null`, indicating that no valid value was found.
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    double m_originalPriceOneYear;
                    bool m_originalPriceOneYearHasBeenSet;

                    /**
                     * Discounted 1-year payment, in USD. This parameter is only available to upfront payment mode.
Note: this field may return `null`, indicating that no valid value was found.
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    double m_discountPriceOneYear;
                    bool m_discountPriceOneYearHasBeenSet;

                    /**
                     * Discount for 1-year upfront payment. For example, 20.0 indicates 80% off.
Note: this field may return `null`, indicating that no valid value was found.
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    double m_discountOneYear;
                    bool m_discountOneYearHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_ITEMPRICE_H_
