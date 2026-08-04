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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCESCALINGPOLICY_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCESCALINGPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/InferenceScheduledScalingPolicy.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Edge reasoning auto scaling policy.
                */
                class InferenceScalingPolicy : public AbstractModel
                {
                public:
                    InferenceScalingPolicy();
                    ~InferenceScalingPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Policy Name. Length limit is 1-30 characters. Policy name must be unique within the same service.
                     * @return PolicyName Policy Name. Length limit is 1-30 characters. Policy name must be unique within the same service.
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置Policy Name. Length limit is 1-30 characters. Policy name must be unique within the same service.
                     * @param _policyName Policy Name. Length limit is 1-30 characters. Policy name must be unique within the same service.
                     * 
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     * 
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取Policy type, cannot be modified after creation. Value: <li>ScheduledScaling: scheduled scaling.</li>
                     * @return PolicyType Policy type, cannot be modified after creation. Value: <li>ScheduledScaling: scheduled scaling.</li>
                     * 
                     */
                    std::string GetPolicyType() const;

                    /**
                     * 设置Policy type, cannot be modified after creation. Value: <li>ScheduledScaling: scheduled scaling.</li>
                     * @param _policyType Policy type, cannot be modified after creation. Value: <li>ScheduledScaling: scheduled scaling.</li>
                     * 
                     */
                    void SetPolicyType(const std::string& _policyType);

                    /**
                     * 判断参数 PolicyType 是否已赋值
                     * @return PolicyType 是否已赋值
                     * 
                     */
                    bool PolicyTypeHasBeenSet() const;

                    /**
                     * 获取Scheduled scaling configuration. This field is required when the PolicyType value is ScheduledScaling.
                     * @return ScheduledScalingPolicy Scheduled scaling configuration. This field is required when the PolicyType value is ScheduledScaling.
                     * 
                     */
                    InferenceScheduledScalingPolicy GetScheduledScalingPolicy() const;

                    /**
                     * 设置Scheduled scaling configuration. This field is required when the PolicyType value is ScheduledScaling.
                     * @param _scheduledScalingPolicy Scheduled scaling configuration. This field is required when the PolicyType value is ScheduledScaling.
                     * 
                     */
                    void SetScheduledScalingPolicy(const InferenceScheduledScalingPolicy& _scheduledScalingPolicy);

                    /**
                     * 判断参数 ScheduledScalingPolicy 是否已赋值
                     * @return ScheduledScalingPolicy 是否已赋值
                     * 
                     */
                    bool ScheduledScalingPolicyHasBeenSet() const;

                private:

                    /**
                     * Policy Name. Length limit is 1-30 characters. Policy name must be unique within the same service.
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * Policy type, cannot be modified after creation. Value: <li>ScheduledScaling: scheduled scaling.</li>
                     */
                    std::string m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * Scheduled scaling configuration. This field is required when the PolicyType value is ScheduledScaling.
                     */
                    InferenceScheduledScalingPolicy m_scheduledScalingPolicy;
                    bool m_scheduledScalingPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCESCALINGPOLICY_H_
