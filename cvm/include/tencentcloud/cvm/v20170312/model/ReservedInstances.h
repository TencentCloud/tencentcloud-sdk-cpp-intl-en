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
                * Information on reserved instances purchased by the user.
                */
                class ReservedInstances : public AbstractModel
                {
                public:
                    ReservedInstances();
                    ~ReservedInstances() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取(This field has been deprecated. ReservedInstanceId is recommended.) IDs of purchased reserved instances. For example, ri-rtbh4han.
                     * @return ReservedInstancesId (This field has been deprecated. ReservedInstanceId is recommended.) IDs of purchased reserved instances. For example, ri-rtbh4han.
                     * @deprecated
                     */
                    std::string GetReservedInstancesId() const;

                    /**
                     * 设置(This field has been deprecated. ReservedInstanceId is recommended.) IDs of purchased reserved instances. For example, ri-rtbh4han.
                     * @param _reservedInstancesId (This field has been deprecated. ReservedInstanceId is recommended.) IDs of purchased reserved instances. For example, ri-rtbh4han.
                     * @deprecated
                     */
                    void SetReservedInstancesId(const std::string& _reservedInstancesId);

                    /**
                     * 判断参数 ReservedInstancesId 是否已赋值
                     * @return ReservedInstancesId 是否已赋值
                     * @deprecated
                     */
                    bool ReservedInstancesIdHasBeenSet() const;

                    /**
                     * 获取Specifications of reserved instances. For example, S3.MEDIUM4.
Return values: <a href="https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1">Reserved instance specification list.</a>
                     * @return InstanceType Specifications of reserved instances. For example, S3.MEDIUM4.
Return values: <a href="https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1">Reserved instance specification list.</a>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Specifications of reserved instances. For example, S3.MEDIUM4.
Return values: <a href="https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1">Reserved instance specification list.</a>
                     * @param _instanceType Specifications of reserved instances. For example, S3.MEDIUM4.
Return values: <a href="https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1">Reserved instance specification list.</a>
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
                     * 获取Availability zones in which reserved instances can be purchased. For example, ap-guangzhou-1.
Return values: <a href="https://intl.cloud.tencent.com/document/product/213/6091?from_cn_redirect=1">Availability zone list.</a>
                     * @return Zone Availability zones in which reserved instances can be purchased. For example, ap-guangzhou-1.
Return values: <a href="https://intl.cloud.tencent.com/document/product/213/6091?from_cn_redirect=1">Availability zone list.</a>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Availability zones in which reserved instances can be purchased. For example, ap-guangzhou-1.
Return values: <a href="https://intl.cloud.tencent.com/document/product/213/6091?from_cn_redirect=1">Availability zone list.</a>
                     * @param _zone Availability zones in which reserved instances can be purchased. For example, ap-guangzhou-1.
Return values: <a href="https://intl.cloud.tencent.com/document/product/213/6091?from_cn_redirect=1">Availability zone list.</a>
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
                     * 获取Billing start time of reserved instances. For example, 1949-10-01 00:00:00.
                     * @return StartTime Billing start time of reserved instances. For example, 1949-10-01 00:00:00.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Billing start time of reserved instances. For example, 1949-10-01 00:00:00.
                     * @param _startTime Billing start time of reserved instances. For example, 1949-10-01 00:00:00.
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Billing end time of reserved instances. For example, 1949-10-01 00:00:00.
                     * @return EndTime Billing end time of reserved instances. For example, 1949-10-01 00:00:00.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Billing end time of reserved instances. For example, 1949-10-01 00:00:00.
                     * @param _endTime Billing end time of reserved instances. For example, 1949-10-01 00:00:00.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Validity periods of reserved instances, which is the purchase duration of reserved instances. For example, 31536000.
Unit: second.
                     * @return Duration Validity periods of reserved instances, which is the purchase duration of reserved instances. For example, 31536000.
Unit: second.
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置Validity periods of reserved instances, which is the purchase duration of reserved instances. For example, 31536000.
Unit: second.
                     * @param _duration Validity periods of reserved instances, which is the purchase duration of reserved instances. For example, 31536000.
Unit: second.
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
                     * 获取Number of purchased reserved instances. For example, 10.
                     * @return InstanceCount Number of purchased reserved instances. For example, 10.
                     * 
                     */
                    int64_t GetInstanceCount() const;

                    /**
                     * 设置Number of purchased reserved instances. For example, 10.
                     * @param _instanceCount Number of purchased reserved instances. For example, 10.
                     * 
                     */
                    void SetInstanceCount(const int64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     * 
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取Platform descriptions (operating systems) of reserved instances. For example, linux.
Return value: linux.
                     * @return ProductDescription Platform descriptions (operating systems) of reserved instances. For example, linux.
Return value: linux.
                     * 
                     */
                    std::string GetProductDescription() const;

                    /**
                     * 设置Platform descriptions (operating systems) of reserved instances. For example, linux.
Return value: linux.
                     * @param _productDescription Platform descriptions (operating systems) of reserved instances. For example, linux.
Return value: linux.
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
                     * 获取Statuses of purchased reserved instances. For example: active.
Return values: active (created) | pending (waiting to be created) | retired (expired).
                     * @return State Statuses of purchased reserved instances. For example: active.
Return values: active (created) | pending (waiting to be created) | retired (expired).
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置Statuses of purchased reserved instances. For example: active.
Return values: active (created) | pending (waiting to be created) | retired (expired).
                     * @param _state Statuses of purchased reserved instances. For example: active.
Return values: active (created) | pending (waiting to be created) | retired (expired).
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取Billing currencies of purchasable reserved instances. Use standard currency codes defined in ISO 4217. For example, USD.
Return value: USD.
                     * @return CurrencyCode Billing currencies of purchasable reserved instances. Use standard currency codes defined in ISO 4217. For example, USD.
Return value: USD.
                     * 
                     */
                    std::string GetCurrencyCode() const;

                    /**
                     * 设置Billing currencies of purchasable reserved instances. Use standard currency codes defined in ISO 4217. For example, USD.
Return value: USD.
                     * @param _currencyCode Billing currencies of purchasable reserved instances. Use standard currency codes defined in ISO 4217. For example, USD.
Return value: USD.
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
                     * 获取Payment types of reserved instances. For example, All Upfront.
Return value: All Upfront (fully prepaid).
                     * @return OfferingType Payment types of reserved instances. For example, All Upfront.
Return value: All Upfront (fully prepaid).
                     * 
                     */
                    std::string GetOfferingType() const;

                    /**
                     * 设置Payment types of reserved instances. For example, All Upfront.
Return value: All Upfront (fully prepaid).
                     * @param _offeringType Payment types of reserved instances. For example, All Upfront.
Return value: All Upfront (fully prepaid).
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
                     * 获取Types of reserved instances. For example, S3.
Return values: <a href="https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1">Reserved instance type list.</a>
                     * @return InstanceFamily Types of reserved instances. For example, S3.
Return values: <a href="https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1">Reserved instance type list.</a>
                     * 
                     */
                    std::string GetInstanceFamily() const;

                    /**
                     * 设置Types of reserved instances. For example, S3.
Return values: <a href="https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1">Reserved instance type list.</a>
                     * @param _instanceFamily Types of reserved instances. For example, S3.
Return values: <a href="https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1">Reserved instance type list.</a>
                     * 
                     */
                    void SetInstanceFamily(const std::string& _instanceFamily);

                    /**
                     * 判断参数 InstanceFamily 是否已赋值
                     * @return InstanceFamily 是否已赋值
                     * 
                     */
                    bool InstanceFamilyHasBeenSet() const;

                    /**
                     * 获取IDs of purchased reserved instances. For example, ri-rtbh4han.
                     * @return ReservedInstanceId IDs of purchased reserved instances. For example, ri-rtbh4han.
                     * 
                     */
                    std::string GetReservedInstanceId() const;

                    /**
                     * 设置IDs of purchased reserved instances. For example, ri-rtbh4han.
                     * @param _reservedInstanceId IDs of purchased reserved instances. For example, ri-rtbh4han.
                     * 
                     */
                    void SetReservedInstanceId(const std::string& _reservedInstanceId);

                    /**
                     * 判断参数 ReservedInstanceId 是否已赋值
                     * @return ReservedInstanceId 是否已赋值
                     * 
                     */
                    bool ReservedInstanceIdHasBeenSet() const;

                    /**
                     * 获取Display names of reserved instances. For example, riname-01.
                     * @return ReservedInstanceName Display names of reserved instances. For example, riname-01.
                     * 
                     */
                    std::string GetReservedInstanceName() const;

                    /**
                     * 设置Display names of reserved instances. For example, riname-01.
                     * @param _reservedInstanceName Display names of reserved instances. For example, riname-01.
                     * 
                     */
                    void SetReservedInstanceName(const std::string& _reservedInstanceName);

                    /**
                     * 判断参数 ReservedInstanceName 是否已赋值
                     * @return ReservedInstanceName 是否已赋值
                     * 
                     */
                    bool ReservedInstanceNameHasBeenSet() const;

                private:

                    /**
                     * (This field has been deprecated. ReservedInstanceId is recommended.) IDs of purchased reserved instances. For example, ri-rtbh4han.
                     */
                    std::string m_reservedInstancesId;
                    bool m_reservedInstancesIdHasBeenSet;

                    /**
                     * Specifications of reserved instances. For example, S3.MEDIUM4.
Return values: <a href="https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1">Reserved instance specification list.</a>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Availability zones in which reserved instances can be purchased. For example, ap-guangzhou-1.
Return values: <a href="https://intl.cloud.tencent.com/document/product/213/6091?from_cn_redirect=1">Availability zone list.</a>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Billing start time of reserved instances. For example, 1949-10-01 00:00:00.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Billing end time of reserved instances. For example, 1949-10-01 00:00:00.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Validity periods of reserved instances, which is the purchase duration of reserved instances. For example, 31536000.
Unit: second.
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * Number of purchased reserved instances. For example, 10.
                     */
                    int64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * Platform descriptions (operating systems) of reserved instances. For example, linux.
Return value: linux.
                     */
                    std::string m_productDescription;
                    bool m_productDescriptionHasBeenSet;

                    /**
                     * Statuses of purchased reserved instances. For example: active.
Return values: active (created) | pending (waiting to be created) | retired (expired).
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Billing currencies of purchasable reserved instances. Use standard currency codes defined in ISO 4217. For example, USD.
Return value: USD.
                     */
                    std::string m_currencyCode;
                    bool m_currencyCodeHasBeenSet;

                    /**
                     * Payment types of reserved instances. For example, All Upfront.
Return value: All Upfront (fully prepaid).
                     */
                    std::string m_offeringType;
                    bool m_offeringTypeHasBeenSet;

                    /**
                     * Types of reserved instances. For example, S3.
Return values: <a href="https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1">Reserved instance type list.</a>
                     */
                    std::string m_instanceFamily;
                    bool m_instanceFamilyHasBeenSet;

                    /**
                     * IDs of purchased reserved instances. For example, ri-rtbh4han.
                     */
                    std::string m_reservedInstanceId;
                    bool m_reservedInstanceIdHasBeenSet;

                    /**
                     * Display names of reserved instances. For example, riname-01.
                     */
                    std::string m_reservedInstanceName;
                    bool m_reservedInstanceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_RESERVEDINSTANCES_H_
