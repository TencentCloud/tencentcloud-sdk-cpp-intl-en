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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_RULEMODIFY_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_RULEMODIFY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/RuleAction.h>
#include <tencentcloud/alb/v20251030/model/RuleCondition.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * Forwarding rule modification information
                */
                class RuleModify : public AbstractModel
                {
                public:
                    RuleModify();
                    ~RuleModify() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Action list of the forwarding rule.
                     * @return Actions Action list of the forwarding rule.
                     * 
                     */
                    std::vector<RuleAction> GetActions() const;

                    /**
                     * 设置Action list of the forwarding rule.
                     * @param _actions Action list of the forwarding rule.
                     * 
                     */
                    void SetActions(const std::vector<RuleAction>& _actions);

                    /**
                     * 判断参数 Actions 是否已赋值
                     * @return Actions 是否已赋值
                     * 
                     */
                    bool ActionsHasBeenSet() const;

                    /**
                     * 获取List of forward rule conditions.
                     * @return Conditions List of forward rule conditions.
                     * 
                     */
                    std::vector<RuleCondition> GetConditions() const;

                    /**
                     * 设置List of forward rule conditions.
                     * @param _conditions List of forward rule conditions.
                     * 
                     */
                    void SetConditions(const std::vector<RuleCondition>& _conditions);

                    /**
                     * 判断参数 Conditions 是否已赋值
                     * @return Conditions 是否已赋值
                     * 
                     */
                    bool ConditionsHasBeenSet() const;

                    /**
                     * 获取Priority. A smaller value indicates higher priority. Value range: 1-10000.
                     * @return Priority Priority. A smaller value indicates higher priority. Value range: 1-10000.
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置Priority. A smaller value indicates higher priority. Value range: 1-10000.
                     * @param _priority Priority. A smaller value indicates higher priority. Value range: 1-10000.
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
                     * 获取Forwarding rule ID in the format of `rule-` followed by 8 alphanumeric characters.
                     * @return RuleId Forwarding rule ID in the format of `rule-` followed by 8 alphanumeric characters.
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置Forwarding rule ID in the format of `rule-` followed by 8 alphanumeric characters.
                     * @param _ruleId Forwarding rule ID in the format of `rule-` followed by 8 alphanumeric characters.
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取Forwarding rule name.
                     * @return RuleName Forwarding rule name.
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Forwarding rule name.
                     * @param _ruleName Forwarding rule name.
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                private:

                    /**
                     * Action list of the forwarding rule.
                     */
                    std::vector<RuleAction> m_actions;
                    bool m_actionsHasBeenSet;

                    /**
                     * List of forward rule conditions.
                     */
                    std::vector<RuleCondition> m_conditions;
                    bool m_conditionsHasBeenSet;

                    /**
                     * Priority. A smaller value indicates higher priority. Value range: 1-10000.
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * Forwarding rule ID in the format of `rule-` followed by 8 alphanumeric characters.
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Forwarding rule name.
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_RULEMODIFY_H_
