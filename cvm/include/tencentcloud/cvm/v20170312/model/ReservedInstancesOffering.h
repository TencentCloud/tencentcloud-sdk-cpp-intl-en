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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_RESERVEDINSTANCESOFFERING_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_RESERVEDINSTANCESOFFERING_H_

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
                * The information of the Reserved Instance offering.
                */
                class ReservedInstancesOffering : public AbstractModel
                {
                public:
                    ReservedInstancesOffering();
                    ~ReservedInstancesOffering() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The availability zones in which the Reserved Instance can be purchased, such as ap-guangzhou-1.
Valid value: <a href="https://intl.cloud.tencent.com/document/product/213/6091?from_cn_redirect=1">Availability Zones</a>
                     * @return Zone The availability zones in which the Reserved Instance can be purchased, such as ap-guangzhou-1.
Valid value: <a href="https://intl.cloud.tencent.com/document/product/213/6091?from_cn_redirect=1">Availability Zones</a>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置The availability zones in which the Reserved Instance can be purchased, such as ap-guangzhou-1.
Valid value: <a href="https://intl.cloud.tencent.com/document/product/213/6091?from_cn_redirect=1">Availability Zones</a>
                     * @param _zone The availability zones in which the Reserved Instance can be purchased, such as ap-guangzhou-1.
Valid value: <a href="https://intl.cloud.tencent.com/document/product/213/6091?from_cn_redirect=1">Availability Zones</a>
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取The billing currency of the Reserved Instance you are purchasing. It's specified using ISO 4217 standard currency.
Value: USD.
                     * @return CurrencyCode The billing currency of the Reserved Instance you are purchasing. It's specified using ISO 4217 standard currency.
Value: USD.
                     * 
                     */
                    std::string GetCurrencyCode() const;

                    /**
                     * 设置The billing currency of the Reserved Instance you are purchasing. It's specified using ISO 4217 standard currency.
Value: USD.
                     * @param _currencyCode The billing currency of the Reserved Instance you are purchasing. It's specified using ISO 4217 standard currency.
Value: USD.
                     * 
                     */
                    void SetCurrencyCode(const std::string& _currencyCode);

                    /**
                     * 判断参数 CurrencyCode 是否已赋值
                     * @return CurrencyCode 是否已赋值
                     * 
                     */
                    bool CurrencyCodeHasBeenSet() const;

                    /**
                     * 获取The **validity** of the Reserved Instance in seconds, which is the purchased usage period. For example, 31536000.
Unit: second
                     * @return Duration The **validity** of the Reserved Instance in seconds, which is the purchased usage period. For example, 31536000.
Unit: second
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置The **validity** of the Reserved Instance in seconds, which is the purchased usage period. For example, 31536000.
Unit: second
                     * @param _duration The **validity** of the Reserved Instance in seconds, which is the purchased usage period. For example, 31536000.
Unit: second
                     * 
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取The purchase price of the Reserved Instance, such as 4000.0.
Unit: this field uses the currency code specified in `currencyCode`, and only supports “USD” at this time.
                     * @return FixedPrice The purchase price of the Reserved Instance, such as 4000.0.
Unit: this field uses the currency code specified in `currencyCode`, and only supports “USD” at this time.
                     * 
                     */
                    double GetFixedPrice() const;

                    /**
                     * 设置The purchase price of the Reserved Instance, such as 4000.0.
Unit: this field uses the currency code specified in `currencyCode`, and only supports “USD” at this time.
                     * @param _fixedPrice The purchase price of the Reserved Instance, such as 4000.0.
Unit: this field uses the currency code specified in `currencyCode`, and only supports “USD” at this time.
                     * 
                     */
                    void SetFixedPrice(const double& _fixedPrice);

                    /**
                     * 判断参数 FixedPrice 是否已赋值
                     * @return FixedPrice 是否已赋值
                     * 
                     */
                    bool FixedPriceHasBeenSet() const;

                    /**
                     * 获取The instance model of the Reserved Instance, such as S3.MEDIUM4.
Valid values: please see <a href="https://intl.cloud.tencent.com/document/product/213/11518">Reserved Instance Types</a>
                     * @return InstanceType The instance model of the Reserved Instance, such as S3.MEDIUM4.
Valid values: please see <a href="https://intl.cloud.tencent.com/document/product/213/11518">Reserved Instance Types</a>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置The instance model of the Reserved Instance, such as S3.MEDIUM4.
Valid values: please see <a href="https://intl.cloud.tencent.com/document/product/213/11518">Reserved Instance Types</a>
                     * @param _instanceType The instance model of the Reserved Instance, such as S3.MEDIUM4.
Valid values: please see <a href="https://intl.cloud.tencent.com/document/product/213/11518">Reserved Instance Types</a>
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取The payment term of the Reserved Instance, such as **All Upfront**.
Valid value: All Upfront.
                     * @return OfferingType The payment term of the Reserved Instance, such as **All Upfront**.
Valid value: All Upfront.
                     * 
                     */
                    std::string GetOfferingType() const;

                    /**
                     * 设置The payment term of the Reserved Instance, such as **All Upfront**.
Valid value: All Upfront.
                     * @param _offeringType The payment term of the Reserved Instance, such as **All Upfront**.
Valid value: All Upfront.
                     * 
                     */
                    void SetOfferingType(const std::string& _offeringType);

                    /**
                     * 判断参数 OfferingType 是否已赋值
                     * @return OfferingType 是否已赋值
                     * 
                     */
                    bool OfferingTypeHasBeenSet() const;

                    /**
                     * 获取The ID of the Reserved Instance offering, such as 650c138f-ae7e-4750-952a-96841d6e9fc1.
                     * @return ReservedInstancesOfferingId The ID of the Reserved Instance offering, such as 650c138f-ae7e-4750-952a-96841d6e9fc1.
                     * 
                     */
                    std::string GetReservedInstancesOfferingId() const;

                    /**
                     * 设置The ID of the Reserved Instance offering, such as 650c138f-ae7e-4750-952a-96841d6e9fc1.
                     * @param _reservedInstancesOfferingId The ID of the Reserved Instance offering, such as 650c138f-ae7e-4750-952a-96841d6e9fc1.
                     * 
                     */
                    void SetReservedInstancesOfferingId(const std::string& _reservedInstancesOfferingId);

                    /**
                     * 判断参数 ReservedInstancesOfferingId 是否已赋值
                     * @return ReservedInstancesOfferingId 是否已赋值
                     * 
                     */
                    bool ReservedInstancesOfferingIdHasBeenSet() const;

                    /**
                     * 获取The operating system of the Reserved Instance, such as **linux**.
Valid value: linux.
                     * @return ProductDescription The operating system of the Reserved Instance, such as **linux**.
Valid value: linux.
                     * 
                     */
                    std::string GetProductDescription() const;

                    /**
                     * 设置The operating system of the Reserved Instance, such as **linux**.
Valid value: linux.
                     * @param _productDescription The operating system of the Reserved Instance, such as **linux**.
Valid value: linux.
                     * 
                     */
                    void SetProductDescription(const std::string& _productDescription);

                    /**
                     * 判断参数 ProductDescription 是否已赋值
                     * @return ProductDescription 是否已赋值
                     * 
                     */
                    bool ProductDescriptionHasBeenSet() const;

                    /**
                     * 获取The hourly usage price of the Reserved Instance, such as 0.0.
Currently, the only supported payment mode is **All Upfront**, so the default value of `UsagePrice` is 0 USD/hr.
Unit: USD/hr. This field uses the currency code specified in `currencyCode`, and only supports “USD” at this time.
                     * @return UsagePrice The hourly usage price of the Reserved Instance, such as 0.0.
Currently, the only supported payment mode is **All Upfront**, so the default value of `UsagePrice` is 0 USD/hr.
Unit: USD/hr. This field uses the currency code specified in `currencyCode`, and only supports “USD” at this time.
                     * 
                     */
                    double GetUsagePrice() const;

                    /**
                     * 设置The hourly usage price of the Reserved Instance, such as 0.0.
Currently, the only supported payment mode is **All Upfront**, so the default value of `UsagePrice` is 0 USD/hr.
Unit: USD/hr. This field uses the currency code specified in `currencyCode`, and only supports “USD” at this time.
                     * @param _usagePrice The hourly usage price of the Reserved Instance, such as 0.0.
Currently, the only supported payment mode is **All Upfront**, so the default value of `UsagePrice` is 0 USD/hr.
Unit: USD/hr. This field uses the currency code specified in `currencyCode`, and only supports “USD” at this time.
                     * 
                     */
                    void SetUsagePrice(const double& _usagePrice);

                    /**
                     * 判断参数 UsagePrice 是否已赋值
                     * @return UsagePrice 是否已赋值
                     * 
                     */
                    bool UsagePriceHasBeenSet() const;

                private:

                    /**
                     * The availability zones in which the Reserved Instance can be purchased, such as ap-guangzhou-1.
Valid value: <a href="https://intl.cloud.tencent.com/document/product/213/6091?from_cn_redirect=1">Availability Zones</a>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * The billing currency of the Reserved Instance you are purchasing. It's specified using ISO 4217 standard currency.
Value: USD.
                     */
                    std::string m_currencyCode;
                    bool m_currencyCodeHasBeenSet;

                    /**
                     * The **validity** of the Reserved Instance in seconds, which is the purchased usage period. For example, 31536000.
Unit: second
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * The purchase price of the Reserved Instance, such as 4000.0.
Unit: this field uses the currency code specified in `currencyCode`, and only supports “USD” at this time.
                     */
                    double m_fixedPrice;
                    bool m_fixedPriceHasBeenSet;

                    /**
                     * The instance model of the Reserved Instance, such as S3.MEDIUM4.
Valid values: please see <a href="https://intl.cloud.tencent.com/document/product/213/11518">Reserved Instance Types</a>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * The payment term of the Reserved Instance, such as **All Upfront**.
Valid value: All Upfront.
                     */
                    std::string m_offeringType;
                    bool m_offeringTypeHasBeenSet;

                    /**
                     * The ID of the Reserved Instance offering, such as 650c138f-ae7e-4750-952a-96841d6e9fc1.
                     */
                    std::string m_reservedInstancesOfferingId;
                    bool m_reservedInstancesOfferingIdHasBeenSet;

                    /**
                     * The operating system of the Reserved Instance, such as **linux**.
Valid value: linux.
                     */
                    std::string m_productDescription;
                    bool m_productDescriptionHasBeenSet;

                    /**
                     * The hourly usage price of the Reserved Instance, such as 0.0.
Currently, the only supported payment mode is **All Upfront**, so the default value of `UsagePrice` is 0 USD/hr.
Unit: USD/hr. This field uses the currency code specified in `currencyCode`, and only supports “USD” at this time.
                     */
                    double m_usagePrice;
                    bool m_usagePriceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_RESERVEDINSTANCESOFFERING_H_
