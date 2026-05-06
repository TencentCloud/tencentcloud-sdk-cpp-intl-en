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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_AUTOSCALERRULES_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_AUTOSCALERRULES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/AutoScalerPolicy.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * Metric scaling rule
                */
                class AutoScalerRules : public AbstractModel
                {
                public:
                    AutoScalerRules();
                    ~AutoScalerRules() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Stability window time. Default is 0 during scaling and 300 during descaling.
                     * @return StabilizationWindowSeconds Stability window time. Default is 0 during scaling and 300 during descaling.
                     * 
                     */
                    int64_t GetStabilizationWindowSeconds() const;

                    /**
                     * 设置Stability window time. Default is 0 during scaling and 300 during descaling.
                     * @param _stabilizationWindowSeconds Stability window time. Default is 0 during scaling and 300 during descaling.
                     * 
                     */
                    void SetStabilizationWindowSeconds(const int64_t& _stabilizationWindowSeconds);

                    /**
                     * 判断参数 StabilizationWindowSeconds 是否已赋值
                     * @return StabilizationWindowSeconds 是否已赋值
                     * 
                     */
                    bool StabilizationWindowSecondsHasBeenSet() const;

                    /**
                     * 获取Selection policy basis
                     * @return SelectPolicy Selection policy basis
                     * 
                     */
                    std::string GetSelectPolicy() const;

                    /**
                     * 设置Selection policy basis
                     * @param _selectPolicy Selection policy basis
                     * 
                     */
                    void SetSelectPolicy(const std::string& _selectPolicy);

                    /**
                     * 判断参数 SelectPolicy 是否已赋值
                     * @return SelectPolicy 是否已赋值
                     * 
                     */
                    bool SelectPolicyHasBeenSet() const;

                    /**
                     * 获取Scaling policy
                     * @return Policies Scaling policy
                     * 
                     */
                    std::vector<AutoScalerPolicy> GetPolicies() const;

                    /**
                     * 设置Scaling policy
                     * @param _policies Scaling policy
                     * 
                     */
                    void SetPolicies(const std::vector<AutoScalerPolicy>& _policies);

                    /**
                     * 判断参数 Policies 是否已赋值
                     * @return Policies 是否已赋值
                     * 
                     */
                    bool PoliciesHasBeenSet() const;

                private:

                    /**
                     * Stability window time. Default is 0 during scaling and 300 during descaling.
                     */
                    int64_t m_stabilizationWindowSeconds;
                    bool m_stabilizationWindowSecondsHasBeenSet;

                    /**
                     * Selection policy basis
                     */
                    std::string m_selectPolicy;
                    bool m_selectPolicyHasBeenSet;

                    /**
                     * Scaling policy
                     */
                    std::vector<AutoScalerPolicy> m_policies;
                    bool m_policiesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_AUTOSCALERRULES_H_
