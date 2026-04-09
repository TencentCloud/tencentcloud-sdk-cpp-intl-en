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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYINSTANCECHARGETYPEREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYINSTANCECHARGETYPEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * ModifyInstanceChargeType request structure.
                */
                class ModifyInstanceChargeTypeRequest : public AbstractModel
                {
                public:
                    ModifyInstanceChargeTypeRequest();
                    ~ModifyInstanceChargeTypeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Instance ID Array</p><p>Input parameter limitation: Length of batch operation array not exceeding 20</p>
                     * @return InstanceIds <p>Instance ID Array</p><p>Input parameter limitation: Length of batch operation array not exceeding 20</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置<p>Instance ID Array</p><p>Input parameter limitation: Length of batch operation array not exceeding 20</p>
                     * @param _instanceIds <p>Instance ID Array</p><p>Input parameter limitation: Length of batch operation array not exceeding 20</p>
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取<p>Operation type for billing mode change</p><p>Enumeration value:</p><ul><li>PREPAID: Transition from pay-as-you-go to monthly subscription</li><li>POSTPAID: Monthly subscription to pay-as-you-go</li></ul>
                     * @return InstanceChargeType <p>Operation type for billing mode change</p><p>Enumeration value:</p><ul><li>PREPAID: Transition from pay-as-you-go to monthly subscription</li><li>POSTPAID: Monthly subscription to pay-as-you-go</li></ul>
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置<p>Operation type for billing mode change</p><p>Enumeration value:</p><ul><li>PREPAID: Transition from pay-as-you-go to monthly subscription</li><li>POSTPAID: Monthly subscription to pay-as-you-go</li></ul>
                     * @param _instanceChargeType <p>Operation type for billing mode change</p><p>Enumeration value:</p><ul><li>PREPAID: Transition from pay-as-you-go to monthly subscription</li><li>POSTPAID: Monthly subscription to pay-as-you-go</li></ul>
                     * 
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     * 
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取<p>Purchase duration is required only when InstanceChargeType=PREPAID.</p><p>Valid values: 1 to 36.</p><p>Unit: months.</p>
                     * @return Period <p>Purchase duration is required only when InstanceChargeType=PREPAID.</p><p>Valid values: 1 to 36.</p><p>Unit: months.</p>
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置<p>Purchase duration is required only when InstanceChargeType=PREPAID.</p><p>Valid values: 1 to 36.</p><p>Unit: months.</p>
                     * @param _period <p>Purchase duration is required only when InstanceChargeType=PREPAID.</p><p>Valid values: 1 to 36.</p><p>Unit: months.</p>
                     * 
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                private:

                    /**
                     * <p>Instance ID Array</p><p>Input parameter limitation: Length of batch operation array not exceeding 20</p>
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * <p>Operation type for billing mode change</p><p>Enumeration value:</p><ul><li>PREPAID: Transition from pay-as-you-go to monthly subscription</li><li>POSTPAID: Monthly subscription to pay-as-you-go</li></ul>
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * <p>Purchase duration is required only when InstanceChargeType=PREPAID.</p><p>Valid values: 1 to 36.</p><p>Unit: months.</p>
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYINSTANCECHARGETYPEREQUEST_H_
