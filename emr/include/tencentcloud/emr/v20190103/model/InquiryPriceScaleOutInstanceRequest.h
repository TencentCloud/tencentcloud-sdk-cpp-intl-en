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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_INQUIRYPRICESCALEOUTINSTANCEREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_INQUIRYPRICESCALEOUTINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * InquiryPriceScaleOutInstance request structure.
                */
                class InquiryPriceScaleOutInstanceRequest : public AbstractModel
                {
                public:
                    InquiryPriceScaleOutInstanceRequest();
                    ~InquiryPriceScaleOutInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Time unit of scale-out. Valid value:
<li>s: Second. When `PayMode` is 0, `TimeUnit` can only be `s`.</li>
                     * @return TimeUnit Time unit of scale-out. Valid value:
<li>s: Second. When `PayMode` is 0, `TimeUnit` can only be `s`.</li>
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置Time unit of scale-out. Valid value:
<li>s: Second. When `PayMode` is 0, `TimeUnit` can only be `s`.</li>
                     * @param _timeUnit Time unit of scale-out. Valid value:
<li>s: Second. When `PayMode` is 0, `TimeUnit` can only be `s`.</li>
                     * 
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     * 
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取Time span of scale-out, which needs to be used together with `TimeUnit`.
<li>When `PayMode` is 0, `TimeSpan` can only be 3,600.</li>
                     * @return TimeSpan Time span of scale-out, which needs to be used together with `TimeUnit`.
<li>When `PayMode` is 0, `TimeSpan` can only be 3,600.</li>
                     * 
                     */
                    uint64_t GetTimeSpan() const;

                    /**
                     * 设置Time span of scale-out, which needs to be used together with `TimeUnit`.
<li>When `PayMode` is 0, `TimeSpan` can only be 3,600.</li>
                     * @param _timeSpan Time span of scale-out, which needs to be used together with `TimeUnit`.
<li>When `PayMode` is 0, `TimeSpan` can only be 3,600.</li>
                     * 
                     */
                    void SetTimeSpan(const uint64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取ID of the AZ where an instance resides.
                     * @return ZoneId ID of the AZ where an instance resides.
                     * 
                     */
                    uint64_t GetZoneId() const;

                    /**
                     * 设置ID of the AZ where an instance resides.
                     * @param _zoneId ID of the AZ where an instance resides.
                     * 
                     */
                    void SetZoneId(const uint64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Instance billing mode. Valid value:
<li>0: Pay-as-you-go.</li>
                     * @return PayMode Instance billing mode. Valid value:
<li>0: Pay-as-you-go.</li>
                     * 
                     */
                    uint64_t GetPayMode() const;

                    /**
                     * 设置Instance billing mode. Valid value:
<li>0: Pay-as-you-go.</li>
                     * @param _payMode Instance billing mode. Valid value:
<li>0: Pay-as-you-go.</li>
                     * 
                     */
                    void SetPayMode(const uint64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceId Instance ID.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Number of core nodes to be added.
                     * @return CoreCount Number of core nodes to be added.
                     * 
                     */
                    uint64_t GetCoreCount() const;

                    /**
                     * 设置Number of core nodes to be added.
                     * @param _coreCount Number of core nodes to be added.
                     * 
                     */
                    void SetCoreCount(const uint64_t& _coreCount);

                    /**
                     * 判断参数 CoreCount 是否已赋值
                     * @return CoreCount 是否已赋值
                     * 
                     */
                    bool CoreCountHasBeenSet() const;

                    /**
                     * 获取Number of task nodes to be added.
                     * @return TaskCount Number of task nodes to be added.
                     * 
                     */
                    uint64_t GetTaskCount() const;

                    /**
                     * 设置Number of task nodes to be added.
                     * @param _taskCount Number of task nodes to be added.
                     * 
                     */
                    void SetTaskCount(const uint64_t& _taskCount);

                    /**
                     * 判断参数 TaskCount 是否已赋值
                     * @return TaskCount 是否已赋值
                     * 
                     */
                    bool TaskCountHasBeenSet() const;

                    /**
                     * 获取Currency.
                     * @return Currency Currency.
                     * 
                     */
                    std::string GetCurrency() const;

                    /**
                     * 设置Currency.
                     * @param _currency Currency.
                     * 
                     */
                    void SetCurrency(const std::string& _currency);

                    /**
                     * 判断参数 Currency 是否已赋值
                     * @return Currency 是否已赋值
                     * 
                     */
                    bool CurrencyHasBeenSet() const;

                    /**
                     * 获取Number of router nodes to be added.
                     * @return RouterCount Number of router nodes to be added.
                     * 
                     */
                    uint64_t GetRouterCount() const;

                    /**
                     * 设置Number of router nodes to be added.
                     * @param _routerCount Number of router nodes to be added.
                     * 
                     */
                    void SetRouterCount(const uint64_t& _routerCount);

                    /**
                     * 判断参数 RouterCount 是否已赋值
                     * @return RouterCount 是否已赋值
                     * 
                     */
                    bool RouterCountHasBeenSet() const;

                    /**
                     * 获取Number of master nodes to be added.
                     * @return MasterCount Number of master nodes to be added.
                     * 
                     */
                    uint64_t GetMasterCount() const;

                    /**
                     * 设置Number of master nodes to be added.
                     * @param _masterCount Number of master nodes to be added.
                     * 
                     */
                    void SetMasterCount(const uint64_t& _masterCount);

                    /**
                     * 判断参数 MasterCount 是否已赋值
                     * @return MasterCount 是否已赋值
                     * 
                     */
                    bool MasterCountHasBeenSet() const;

                    /**
                     * 获取The type can be ComputeResource, EMR, or a default value. The default value is EMR.
                     * @return ResourceBaseType The type can be ComputeResource, EMR, or a default value. The default value is EMR.
                     * 
                     */
                    std::string GetResourceBaseType() const;

                    /**
                     * 设置The type can be ComputeResource, EMR, or a default value. The default value is EMR.
                     * @param _resourceBaseType The type can be ComputeResource, EMR, or a default value. The default value is EMR.
                     * 
                     */
                    void SetResourceBaseType(const std::string& _resourceBaseType);

                    /**
                     * 判断参数 ResourceBaseType 是否已赋值
                     * @return ResourceBaseType 是否已赋值
                     * 
                     */
                    bool ResourceBaseTypeHasBeenSet() const;

                    /**
                     * 获取Computing resource ID.
                     * @return ComputeResourceId Computing resource ID.
                     * 
                     */
                    std::string GetComputeResourceId() const;

                    /**
                     * 设置Computing resource ID.
                     * @param _computeResourceId Computing resource ID.
                     * 
                     */
                    void SetComputeResourceId(const std::string& _computeResourceId);

                    /**
                     * 判断参数 ComputeResourceId 是否已赋值
                     * @return ComputeResourceId 是否已赋值
                     * 
                     */
                    bool ComputeResourceIdHasBeenSet() const;

                    /**
                     * 获取Scale-out resource type.
                     * @return HardwareResourceType Scale-out resource type.
                     * 
                     */
                    std::string GetHardwareResourceType() const;

                    /**
                     * 设置Scale-out resource type.
                     * @param _hardwareResourceType Scale-out resource type.
                     * 
                     */
                    void SetHardwareResourceType(const std::string& _hardwareResourceType);

                    /**
                     * 判断参数 HardwareResourceType 是否已赋值
                     * @return HardwareResourceType 是否已赋值
                     * 
                     */
                    bool HardwareResourceTypeHasBeenSet() const;

                private:

                    /**
                     * Time unit of scale-out. Valid value:
<li>s: Second. When `PayMode` is 0, `TimeUnit` can only be `s`.</li>
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * Time span of scale-out, which needs to be used together with `TimeUnit`.
<li>When `PayMode` is 0, `TimeSpan` can only be 3,600.</li>
                     */
                    uint64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * ID of the AZ where an instance resides.
                     */
                    uint64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Instance billing mode. Valid value:
<li>0: Pay-as-you-go.</li>
                     */
                    uint64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Number of core nodes to be added.
                     */
                    uint64_t m_coreCount;
                    bool m_coreCountHasBeenSet;

                    /**
                     * Number of task nodes to be added.
                     */
                    uint64_t m_taskCount;
                    bool m_taskCountHasBeenSet;

                    /**
                     * Currency.
                     */
                    std::string m_currency;
                    bool m_currencyHasBeenSet;

                    /**
                     * Number of router nodes to be added.
                     */
                    uint64_t m_routerCount;
                    bool m_routerCountHasBeenSet;

                    /**
                     * Number of master nodes to be added.
                     */
                    uint64_t m_masterCount;
                    bool m_masterCountHasBeenSet;

                    /**
                     * The type can be ComputeResource, EMR, or a default value. The default value is EMR.
                     */
                    std::string m_resourceBaseType;
                    bool m_resourceBaseTypeHasBeenSet;

                    /**
                     * Computing resource ID.
                     */
                    std::string m_computeResourceId;
                    bool m_computeResourceIdHasBeenSet;

                    /**
                     * Scale-out resource type.
                     */
                    std::string m_hardwareResourceType;
                    bool m_hardwareResourceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_INQUIRYPRICESCALEOUTINSTANCEREQUEST_H_
