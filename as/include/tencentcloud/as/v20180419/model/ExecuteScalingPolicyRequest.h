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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_EXECUTESCALINGPOLICYREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_EXECUTESCALINGPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * ExecuteScalingPolicy request structure.
                */
                class ExecuteScalingPolicyRequest : public AbstractModel
                {
                public:
                    ExecuteScalingPolicyRequest();
                    ~ExecuteScalingPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Auto-scaling policy ID. This parameter is not available to a target tracking policy.
                     * @return AutoScalingPolicyId Auto-scaling policy ID. This parameter is not available to a target tracking policy.
                     */
                    std::string GetAutoScalingPolicyId() const;

                    /**
                     * 设置Auto-scaling policy ID. This parameter is not available to a target tracking policy.
                     * @param AutoScalingPolicyId Auto-scaling policy ID. This parameter is not available to a target tracking policy.
                     */
                    void SetAutoScalingPolicyId(const std::string& _autoScalingPolicyId);

                    /**
                     * 判断参数 AutoScalingPolicyId 是否已赋值
                     * @return AutoScalingPolicyId 是否已赋值
                     */
                    bool AutoScalingPolicyIdHasBeenSet() const;

                    /**
                     * 获取Whether to check if the auto scaling group is in the cooldown period. Default value: false
                     * @return HonorCooldown Whether to check if the auto scaling group is in the cooldown period. Default value: false
                     */
                    bool GetHonorCooldown() const;

                    /**
                     * 设置Whether to check if the auto scaling group is in the cooldown period. Default value: false
                     * @param HonorCooldown Whether to check if the auto scaling group is in the cooldown period. Default value: false
                     */
                    void SetHonorCooldown(const bool& _honorCooldown);

                    /**
                     * 判断参数 HonorCooldown 是否已赋值
                     * @return HonorCooldown 是否已赋值
                     */
                    bool HonorCooldownHasBeenSet() const;

                    /**
                     * 获取Source that triggers the scaling policy. Valid values: API and CLOUD_MONITOR. Default value: API. The value `CLOUD_MONITOR` is specific to the Cloud Monitor service.
                     * @return TriggerSource Source that triggers the scaling policy. Valid values: API and CLOUD_MONITOR. Default value: API. The value `CLOUD_MONITOR` is specific to the Cloud Monitor service.
                     */
                    std::string GetTriggerSource() const;

                    /**
                     * 设置Source that triggers the scaling policy. Valid values: API and CLOUD_MONITOR. Default value: API. The value `CLOUD_MONITOR` is specific to the Cloud Monitor service.
                     * @param TriggerSource Source that triggers the scaling policy. Valid values: API and CLOUD_MONITOR. Default value: API. The value `CLOUD_MONITOR` is specific to the Cloud Monitor service.
                     */
                    void SetTriggerSource(const std::string& _triggerSource);

                    /**
                     * 判断参数 TriggerSource 是否已赋值
                     * @return TriggerSource 是否已赋值
                     */
                    bool TriggerSourceHasBeenSet() const;

                private:

                    /**
                     * Auto-scaling policy ID. This parameter is not available to a target tracking policy.
                     */
                    std::string m_autoScalingPolicyId;
                    bool m_autoScalingPolicyIdHasBeenSet;

                    /**
                     * Whether to check if the auto scaling group is in the cooldown period. Default value: false
                     */
                    bool m_honorCooldown;
                    bool m_honorCooldownHasBeenSet;

                    /**
                     * Source that triggers the scaling policy. Valid values: API and CLOUD_MONITOR. Default value: API. The value `CLOUD_MONITOR` is specific to the Cloud Monitor service.
                     */
                    std::string m_triggerSource;
                    bool m_triggerSourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_EXECUTESCALINGPOLICYREQUEST_H_
