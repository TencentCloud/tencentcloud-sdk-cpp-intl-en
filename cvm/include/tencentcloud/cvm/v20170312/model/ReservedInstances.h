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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_RESERVEDINSTANCES_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_RESERVEDINSTANCES_H_

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
                * Describes the information of the reserved instances the user has purchased
                */
                class ReservedInstances : public AbstractModel
                {
                public:
                    ReservedInstances();
                    ~ReservedInstances() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The ID of the purchased reserved instance, taking the form 650c138f-ae7e-4750-952a-96841d6e9fc1.
                     * @return ReservedInstancesId The ID of the purchased reserved instance, taking the form 650c138f-ae7e-4750-952a-96841d6e9fc1.
                     */
                    std::string GetReservedInstancesId() const;

                    /**
                     * 设置The ID of the purchased reserved instance, taking the form 650c138f-ae7e-4750-952a-96841d6e9fc1.
                     * @param ReservedInstancesId The ID of the purchased reserved instance, taking the form 650c138f-ae7e-4750-952a-96841d6e9fc1.
                     */
                    void SetReservedInstancesId(const std::string& _reservedInstancesId);

                    /**
                     * 判断参数 ReservedInstancesId 是否已赋值
                     * @return ReservedInstancesId 是否已赋值
                     */
                    bool ReservedInstancesIdHasBeenSet() const;

                    /**
                     * 获取Reserved instance specification, such as `S3.MEDIUM4`.
Valid values: please see <a href="https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1">Reserved Instance Specifications</a>
                     * @return InstanceType Reserved instance specification, such as `S3.MEDIUM4`.
Valid values: please see <a href="https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1">Reserved Instance Specifications</a>
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Reserved instance specification, such as `S3.MEDIUM4`.
Valid values: please see <a href="https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1">Reserved Instance Specifications</a>
                     * @param InstanceType Reserved instance specification, such as `S3.MEDIUM4`.
Valid values: please see <a href="https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1">Reserved Instance Specifications</a>
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取Availability zones in which the reserved instance can be purchased. For example, "ap-guangzhou-1".
Returned values: <a href="https://intl.cloud.tencent.com/document/product/213/6091?from_cn_redirect=1">list of availability zones</a>
                     * @return Zone Availability zones in which the reserved instance can be purchased. For example, "ap-guangzhou-1".
Returned values: <a href="https://intl.cloud.tencent.com/document/product/213/6091?from_cn_redirect=1">list of availability zones</a>
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Availability zones in which the reserved instance can be purchased. For example, "ap-guangzhou-1".
Returned values: <a href="https://intl.cloud.tencent.com/document/product/213/6091?from_cn_redirect=1">list of availability zones</a>
                     * @param Zone Availability zones in which the reserved instance can be purchased. For example, "ap-guangzhou-1".
Returned values: <a href="https://intl.cloud.tencent.com/document/product/213/6091?from_cn_redirect=1">list of availability zones</a>
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Start time of the reserved instance billing, taking the form of 2019-10-23 00:00:00.
                     * @return StartTime Start time of the reserved instance billing, taking the form of 2019-10-23 00:00:00.
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time of the reserved instance billing, taking the form of 2019-10-23 00:00:00.
                     * @param StartTime Start time of the reserved instance billing, taking the form of 2019-10-23 00:00:00.
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time of the reserved instance, taking the form of 2019-10-23 00:00:00
                     * @return EndTime End time of the reserved instance, taking the form of 2019-10-23 00:00:00
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time of the reserved instance, taking the form of 2019-10-23 00:00:00
                     * @param EndTime End time of the reserved instance, taking the form of 2019-10-23 00:00:00
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取The **validity** of the reserved instance in seconds, which is the purchased usage period. For example, 31536000.
Measurement unit: second.
                     * @return Duration The **validity** of the reserved instance in seconds, which is the purchased usage period. For example, 31536000.
Measurement unit: second.
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置The **validity** of the reserved instance in seconds, which is the purchased usage period. For example, 31536000.
Measurement unit: second.
                     * @param Duration The **validity** of the reserved instance in seconds, which is the purchased usage period. For example, 31536000.
Measurement unit: second.
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取The number of reserved instances that have been purchased. For example, 10.
                     * @return InstanceCount The number of reserved instances that have been purchased. For example, 10.
                     */
                    int64_t GetInstanceCount() const;

                    /**
                     * 设置The number of reserved instances that have been purchased. For example, 10.
                     * @param InstanceCount The number of reserved instances that have been purchased. For example, 10.
                     */
                    void SetInstanceCount(const int64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取The operating system of the reserved instance. For example, "linux".
Returned value: linux.
                     * @return ProductDescription The operating system of the reserved instance. For example, "linux".
Returned value: linux.
                     */
                    std::string GetProductDescription() const;

                    /**
                     * 设置The operating system of the reserved instance. For example, "linux".
Returned value: linux.
                     * @param ProductDescription The operating system of the reserved instance. For example, "linux".
Returned value: linux.
                     */
                    void SetProductDescription(const std::string& _productDescription);

                    /**
                     * 判断参数 ProductDescription 是否已赋值
                     * @return ProductDescription 是否已赋值
                     */
                    bool ProductDescriptionHasBeenSet() const;

                    /**
                     * 获取The status of the reserved instance. For example, "active".
Returned value: "active" (created) | "pending" (waiting to be created) | "retired" (expired).
                     * @return State The status of the reserved instance. For example, "active".
Returned value: "active" (created) | "pending" (waiting to be created) | "retired" (expired).
                     */
                    std::string GetState() const;

                    /**
                     * 设置The status of the reserved instance. For example, "active".
Returned value: "active" (created) | "pending" (waiting to be created) | "retired" (expired).
                     * @param State The status of the reserved instance. For example, "active".
Returned value: "active" (created) | "pending" (waiting to be created) | "retired" (expired).
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取The currency in which the reserved instance is billed. The ISO 4217 standard currency codes are used. For example, USD.
Returned value: USD.
                     * @return CurrencyCode The currency in which the reserved instance is billed. The ISO 4217 standard currency codes are used. For example, USD.
Returned value: USD.
                     */
                    std::string GetCurrencyCode() const;

                    /**
                     * 设置The currency in which the reserved instance is billed. The ISO 4217 standard currency codes are used. For example, USD.
Returned value: USD.
                     * @param CurrencyCode The currency in which the reserved instance is billed. The ISO 4217 standard currency codes are used. For example, USD.
Returned value: USD.
                     */
                    void SetCurrencyCode(const std::string& _currencyCode);

                    /**
                     * 判断参数 CurrencyCode 是否已赋值
                     * @return CurrencyCode 是否已赋值
                     */
                    bool CurrencyCodeHasBeenSet() const;

                    /**
                     * 获取The payment method of the reserved instance. For example, "All Upfront".
Returned value: All Upfront.
                     * @return OfferingType The payment method of the reserved instance. For example, "All Upfront".
Returned value: All Upfront.
                     */
                    std::string GetOfferingType() const;

                    /**
                     * 设置The payment method of the reserved instance. For example, "All Upfront".
Returned value: All Upfront.
                     * @param OfferingType The payment method of the reserved instance. For example, "All Upfront".
Returned value: All Upfront.
                     */
                    void SetOfferingType(const std::string& _offeringType);

                    /**
                     * 判断参数 OfferingType 是否已赋值
                     * @return OfferingType 是否已赋值
                     */
                    bool OfferingTypeHasBeenSet() const;

                    /**
                     * 获取Reserved instance type, such as `S3`.
Valid values: please see <a href="https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1">Reserved Instance Types</a>
                     * @return InstanceFamily Reserved instance type, such as `S3`.
Valid values: please see <a href="https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1">Reserved Instance Types</a>
                     */
                    std::string GetInstanceFamily() const;

                    /**
                     * 设置Reserved instance type, such as `S3`.
Valid values: please see <a href="https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1">Reserved Instance Types</a>
                     * @param InstanceFamily Reserved instance type, such as `S3`.
Valid values: please see <a href="https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1">Reserved Instance Types</a>
                     */
                    void SetInstanceFamily(const std::string& _instanceFamily);

                    /**
                     * 判断参数 InstanceFamily 是否已赋值
                     * @return InstanceFamily 是否已赋值
                     */
                    bool InstanceFamilyHasBeenSet() const;

                private:

                    /**
                     * The ID of the purchased reserved instance, taking the form 650c138f-ae7e-4750-952a-96841d6e9fc1.
                     */
                    std::string m_reservedInstancesId;
                    bool m_reservedInstancesIdHasBeenSet;

                    /**
                     * Reserved instance specification, such as `S3.MEDIUM4`.
Valid values: please see <a href="https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1">Reserved Instance Specifications</a>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Availability zones in which the reserved instance can be purchased. For example, "ap-guangzhou-1".
Returned values: <a href="https://intl.cloud.tencent.com/document/product/213/6091?from_cn_redirect=1">list of availability zones</a>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Start time of the reserved instance billing, taking the form of 2019-10-23 00:00:00.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time of the reserved instance, taking the form of 2019-10-23 00:00:00
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * The **validity** of the reserved instance in seconds, which is the purchased usage period. For example, 31536000.
Measurement unit: second.
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * The number of reserved instances that have been purchased. For example, 10.
                     */
                    int64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * The operating system of the reserved instance. For example, "linux".
Returned value: linux.
                     */
                    std::string m_productDescription;
                    bool m_productDescriptionHasBeenSet;

                    /**
                     * The status of the reserved instance. For example, "active".
Returned value: "active" (created) | "pending" (waiting to be created) | "retired" (expired).
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * The currency in which the reserved instance is billed. The ISO 4217 standard currency codes are used. For example, USD.
Returned value: USD.
                     */
                    std::string m_currencyCode;
                    bool m_currencyCodeHasBeenSet;

                    /**
                     * The payment method of the reserved instance. For example, "All Upfront".
Returned value: All Upfront.
                     */
                    std::string m_offeringType;
                    bool m_offeringTypeHasBeenSet;

                    /**
                     * Reserved instance type, such as `S3`.
Valid values: please see <a href="https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1">Reserved Instance Types</a>
                     */
                    std::string m_instanceFamily;
                    bool m_instanceFamilyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_RESERVEDINSTANCES_H_
