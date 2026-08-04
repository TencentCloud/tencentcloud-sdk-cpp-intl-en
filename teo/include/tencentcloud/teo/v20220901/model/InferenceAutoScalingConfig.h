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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCEAUTOSCALINGCONFIG_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCEAUTOSCALINGCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/InferenceScalingPolicy.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Inference service auto scaling configuration.
                */
                class InferenceAutoScalingConfig : public AbstractModel
                {
                public:
                    InferenceAutoScalingConfig();
                    ~InferenceAutoScalingConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Minimum number of instances. When a scaling policy is configured and the policy is in the valid period, it will not take effect.</p>
                     * @return MinInstanceCount <p>Minimum number of instances. When a scaling policy is configured and the policy is in the valid period, it will not take effect.</p>
                     * 
                     */
                    int64_t GetMinInstanceCount() const;

                    /**
                     * 设置<p>Minimum number of instances. When a scaling policy is configured and the policy is in the valid period, it will not take effect.</p>
                     * @param _minInstanceCount <p>Minimum number of instances. When a scaling policy is configured and the policy is in the valid period, it will not take effect.</p>
                     * 
                     */
                    void SetMinInstanceCount(const int64_t& _minInstanceCount);

                    /**
                     * 判断参数 MinInstanceCount 是否已赋值
                     * @return MinInstanceCount 是否已赋值
                     * 
                     */
                    bool MinInstanceCountHasBeenSet() const;

                    /**
                     * 获取<p>Auto Scaling policy list. Supports up to 5 policies.</p>
                     * @return ScalingPolicies <p>Auto Scaling policy list. Supports up to 5 policies.</p>
                     * 
                     */
                    std::vector<InferenceScalingPolicy> GetScalingPolicies() const;

                    /**
                     * 设置<p>Auto Scaling policy list. Supports up to 5 policies.</p>
                     * @param _scalingPolicies <p>Auto Scaling policy list. Supports up to 5 policies.</p>
                     * 
                     */
                    void SetScalingPolicies(const std::vector<InferenceScalingPolicy>& _scalingPolicies);

                    /**
                     * 判断参数 ScalingPolicies 是否已赋值
                     * @return ScalingPolicies 是否已赋值
                     * 
                     */
                    bool ScalingPoliciesHasBeenSet() const;

                private:

                    /**
                     * <p>Minimum number of instances. When a scaling policy is configured and the policy is in the valid period, it will not take effect.</p>
                     */
                    int64_t m_minInstanceCount;
                    bool m_minInstanceCountHasBeenSet;

                    /**
                     * <p>Auto Scaling policy list. Supports up to 5 policies.</p>
                     */
                    std::vector<InferenceScalingPolicy> m_scalingPolicies;
                    bool m_scalingPoliciesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCEAUTOSCALINGCONFIG_H_
