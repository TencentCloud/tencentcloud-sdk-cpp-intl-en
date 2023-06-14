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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_RESERVEDINSTANCEPRICEITEM_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_RESERVEDINSTANCEPRICEITEM_H_

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
                * Price information of the reserved instance based on the payment method. Currently, RIs are only offered to beta users.
                */
                class ReservedInstancePriceItem : public AbstractModel
                {
                public:
                    ReservedInstancePriceItem();
                    ~ReservedInstancePriceItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Payment method. Valid values: All Upfront, Partial Upfront, and No Upfront.
                     * @return OfferingType Payment method. Valid values: All Upfront, Partial Upfront, and No Upfront.
                     * 
                     */
                    std::string GetOfferingType() const;

                    /**
                     * 设置Payment method. Valid values: All Upfront, Partial Upfront, and No Upfront.
                     * @param _offeringType Payment method. Valid values: All Upfront, Partial Upfront, and No Upfront.
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
                     * 获取Upfront payment, in USD.
                     * @return FixedPrice Upfront payment, in USD.
                     * 
                     */
                    double GetFixedPrice() const;

                    /**
                     * 设置Upfront payment, in USD.
                     * @param _fixedPrice Upfront payment, in USD.
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
                     * 获取Subsequent unit price, in USD/hr.
                     * @return UsagePrice Subsequent unit price, in USD/hr.
                     * 
                     */
                    double GetUsagePrice() const;

                    /**
                     * 设置Subsequent unit price, in USD/hr.
                     * @param _usagePrice Subsequent unit price, in USD/hr.
                     * 
                     */
                    void SetUsagePrice(const double& _usagePrice);

                    /**
                     * 判断参数 UsagePrice 是否已赋值
                     * @return UsagePrice 是否已赋值
                     * 
                     */
                    bool UsagePriceHasBeenSet() const;

                    /**
                     * 获取The ID of the reserved instance offering.
                     * @return ReservedInstancesOfferingId The ID of the reserved instance offering.
                     * 
                     */
                    std::string GetReservedInstancesOfferingId() const;

                    /**
                     * 设置The ID of the reserved instance offering.
                     * @param _reservedInstancesOfferingId The ID of the reserved instance offering.
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
                     * 获取The availability zone in which the reserved instance can be purchased.
                     * @return Zone The availability zone in which the reserved instance can be purchased.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置The availability zone in which the reserved instance can be purchased.
                     * @param _zone The availability zone in which the reserved instance can be purchased.
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
                     * 获取The **validity** of the reserved instance in seconds, which is the purchased usage period. For example, `31536000`.
Unit: second
                     * @return Duration The **validity** of the reserved instance in seconds, which is the purchased usage period. For example, `31536000`.
Unit: second
                     * 
                     */
                    uint64_t GetDuration() const;

                    /**
                     * 设置The **validity** of the reserved instance in seconds, which is the purchased usage period. For example, `31536000`.
Unit: second
                     * @param _duration The **validity** of the reserved instance in seconds, which is the purchased usage period. For example, `31536000`.
Unit: second
                     * 
                     */
                    void SetDuration(const uint64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取The operating system of the reserved instance, such as `Linux`.
Valid value: `Linux`.
                     * @return ProductDescription The operating system of the reserved instance, such as `Linux`.
Valid value: `Linux`.
                     * 
                     */
                    std::string GetProductDescription() const;

                    /**
                     * 设置The operating system of the reserved instance, such as `Linux`.
Valid value: `Linux`.
                     * @param _productDescription The operating system of the reserved instance, such as `Linux`.
Valid value: `Linux`.
                     * 
                     */
                    void SetProductDescription(const std::string& _productDescription);

                    /**
                     * 判断参数 ProductDescription 是否已赋值
                     * @return ProductDescription 是否已赋值
                     * 
                     */
                    bool ProductDescriptionHasBeenSet() const;

                private:

                    /**
                     * Payment method. Valid values: All Upfront, Partial Upfront, and No Upfront.
                     */
                    std::string m_offeringType;
                    bool m_offeringTypeHasBeenSet;

                    /**
                     * Upfront payment, in USD.
                     */
                    double m_fixedPrice;
                    bool m_fixedPriceHasBeenSet;

                    /**
                     * Subsequent unit price, in USD/hr.
                     */
                    double m_usagePrice;
                    bool m_usagePriceHasBeenSet;

                    /**
                     * The ID of the reserved instance offering.
                     */
                    std::string m_reservedInstancesOfferingId;
                    bool m_reservedInstancesOfferingIdHasBeenSet;

                    /**
                     * The availability zone in which the reserved instance can be purchased.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * The **validity** of the reserved instance in seconds, which is the purchased usage period. For example, `31536000`.
Unit: second
                     */
                    uint64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * The operating system of the reserved instance, such as `Linux`.
Valid value: `Linux`.
                     */
                    std::string m_productDescription;
                    bool m_productDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_RESERVEDINSTANCEPRICEITEM_H_
