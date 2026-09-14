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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_RULECONDITION_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_RULECONDITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ga2
    {
        namespace V20250115
        {
            namespace Model
            {
                /**
                * Conditional information of Layer 7 forwarding rules
                */
                class RuleCondition : public AbstractModel
                {
                public:
                    RuleCondition();
                    ~RuleCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Condition type of Layer 7 forwarding rule</p><p>Enumeration values:</p><ul><li>Path: Path</li></ul>
                     * @return RuleConditionType <p>Condition type of Layer 7 forwarding rule</p><p>Enumeration values:</p><ul><li>Path: Path</li></ul>
                     * 
                     */
                    std::string GetRuleConditionType() const;

                    /**
                     * 设置<p>Condition type of Layer 7 forwarding rule</p><p>Enumeration values:</p><ul><li>Path: Path</li></ul>
                     * @param _ruleConditionType <p>Condition type of Layer 7 forwarding rule</p><p>Enumeration values:</p><ul><li>Path: Path</li></ul>
                     * 
                     */
                    void SetRuleConditionType(const std::string& _ruleConditionType);

                    /**
                     * 判断参数 RuleConditionType 是否已赋值
                     * @return RuleConditionType 是否已赋值
                     * 
                     */
                    bool RuleConditionTypeHasBeenSet() const;

                    /**
                     * 获取<p>Layer 7 forwarding rule condition value</p><p>Parameter format: The format must match the regular expression: ^[a-zA-Z0-9_.-/]{1,80}$</p><p>The array length cannot exceed 1.</p>
                     * @return RuleConditionValue <p>Layer 7 forwarding rule condition value</p><p>Parameter format: The format must match the regular expression: ^[a-zA-Z0-9_.-/]{1,80}$</p><p>The array length cannot exceed 1.</p>
                     * 
                     */
                    std::vector<std::string> GetRuleConditionValue() const;

                    /**
                     * 设置<p>Layer 7 forwarding rule condition value</p><p>Parameter format: The format must match the regular expression: ^[a-zA-Z0-9_.-/]{1,80}$</p><p>The array length cannot exceed 1.</p>
                     * @param _ruleConditionValue <p>Layer 7 forwarding rule condition value</p><p>Parameter format: The format must match the regular expression: ^[a-zA-Z0-9_.-/]{1,80}$</p><p>The array length cannot exceed 1.</p>
                     * 
                     */
                    void SetRuleConditionValue(const std::vector<std::string>& _ruleConditionValue);

                    /**
                     * 判断参数 RuleConditionValue 是否已赋值
                     * @return RuleConditionValue 是否已赋值
                     * 
                     */
                    bool RuleConditionValueHasBeenSet() const;

                private:

                    /**
                     * <p>Condition type of Layer 7 forwarding rule</p><p>Enumeration values:</p><ul><li>Path: Path</li></ul>
                     */
                    std::string m_ruleConditionType;
                    bool m_ruleConditionTypeHasBeenSet;

                    /**
                     * <p>Layer 7 forwarding rule condition value</p><p>Parameter format: The format must match the regular expression: ^[a-zA-Z0-9_.-/]{1,80}$</p><p>The array length cannot exceed 1.</p>
                     */
                    std::vector<std::string> m_ruleConditionValue;
                    bool m_ruleConditionValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_RULECONDITION_H_
