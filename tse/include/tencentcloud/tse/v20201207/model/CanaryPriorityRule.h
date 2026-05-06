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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CANARYPRIORITYRULE_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CANARYPRIORITYRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/CloudNativeAPIGatewayCanaryRule.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * Grayscale Rule Priority - Rule
                */
                class CanaryPriorityRule : public AbstractModel
                {
                public:
                    CanaryPriorityRule();
                    ~CanaryPriorityRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Priority
                     * @return Priority Priority
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置Priority
                     * @param _priority Priority
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取Grayscale rule configuration
                     * @return CanaryRule Grayscale rule configuration
                     * 
                     */
                    CloudNativeAPIGatewayCanaryRule GetCanaryRule() const;

                    /**
                     * 设置Grayscale rule configuration
                     * @param _canaryRule Grayscale rule configuration
                     * 
                     */
                    void SetCanaryRule(const CloudNativeAPIGatewayCanaryRule& _canaryRule);

                    /**
                     * 判断参数 CanaryRule 是否已赋值
                     * @return CanaryRule 是否已赋值
                     * 
                     */
                    bool CanaryRuleHasBeenSet() const;

                private:

                    /**
                     * Priority
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * Grayscale rule configuration
                     */
                    CloudNativeAPIGatewayCanaryRule m_canaryRule;
                    bool m_canaryRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CANARYPRIORITYRULE_H_
