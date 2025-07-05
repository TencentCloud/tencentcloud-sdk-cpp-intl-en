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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_RULECONFIG_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_RULECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Rule Configuration
                */
                class RuleConfig : public AbstractModel
                {
                public:
                    RuleConfig();
                    ~RuleConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rule IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @return RuleId Rule IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置Rule IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _ruleId Rule IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRuleId(const uint64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取Rule Detection Range Type 1. Whole Table  2. Conditional Scan
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ConditionType Rule Detection Range Type 1. Whole Table  2. Conditional Scan
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetConditionType() const;

                    /**
                     * 设置Rule Detection Range Type 1. Whole Table  2. Conditional Scan
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _conditionType Rule Detection Range Type 1. Whole Table  2. Conditional Scan
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetConditionType(const uint64_t& _conditionType);

                    /**
                     * 判断参数 ConditionType 是否已赋值
                     * @return ConditionType 是否已赋值
                     * 
                     */
                    bool ConditionTypeHasBeenSet() const;

                    /**
                     * 获取Detection Range Expression
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Condition Detection Range Expression
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCondition() const;

                    /**
                     * 设置Detection Range Expression
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _condition Detection Range Expression
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCondition(const std::string& _condition);

                    /**
                     * 判断参数 Condition 是否已赋值
                     * @return Condition 是否已赋值
                     * 
                     */
                    bool ConditionHasBeenSet() const;

                    /**
                     * 获取Target Detection Range Expression
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TargetCondition Target Detection Range Expression
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTargetCondition() const;

                    /**
                     * 设置Target Detection Range Expression
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _targetCondition Target Detection Range Expression
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTargetCondition(const std::string& _targetCondition);

                    /**
                     * 判断参数 TargetCondition 是否已赋值
                     * @return TargetCondition 是否已赋值
                     * 
                     */
                    bool TargetConditionHasBeenSet() const;

                private:

                    /**
                     * Rule IDNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Rule Detection Range Type 1. Whole Table  2. Conditional Scan
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_conditionType;
                    bool m_conditionTypeHasBeenSet;

                    /**
                     * Detection Range Expression
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * Target Detection Range Expression
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_targetCondition;
                    bool m_targetConditionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_RULECONFIG_H_
