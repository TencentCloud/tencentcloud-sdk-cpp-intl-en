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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_EXCEPTUSERRULE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_EXCEPTUSERRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/ExceptUserRuleCondition.h>
#include <tencentcloud/teo/v20220901/model/ExceptUserRuleScope.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * The settings of the exception rule
                */
                class ExceptUserRule : public AbstractModel
                {
                public:
                    ExceptUserRule();
                    ~ExceptUserRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The rule name.
                     * @return RuleName The rule name.
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置The rule name.
                     * @param _ruleName The rule name.
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取The rule action. It only supports the value `skip`, which indicates skipping all managed rules.
                     * @return Action The rule action. It only supports the value `skip`, which indicates skipping all managed rules.
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置The rule action. It only supports the value `skip`, which indicates skipping all managed rules.
                     * @param _action The rule action. It only supports the value `skip`, which indicates skipping all managed rules.
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取The rule status. Values:
<li>`on`: Enabled</li>
<li>`off`: Disabled</li>
                     * @return RuleStatus The rule status. Values:
<li>`on`: Enabled</li>
<li>`off`: Disabled</li>
                     * 
                     */
                    std::string GetRuleStatus() const;

                    /**
                     * 设置The rule status. Values:
<li>`on`: Enabled</li>
<li>`off`: Disabled</li>
                     * @param _ruleStatus The rule status. Values:
<li>`on`: Enabled</li>
<li>`off`: Disabled</li>
                     * 
                     */
                    void SetRuleStatus(const std::string& _ruleStatus);

                    /**
                     * 判断参数 RuleStatus 是否已赋值
                     * @return RuleStatus 是否已赋值
                     * 
                     */
                    bool RuleStatusHasBeenSet() const;

                    /**
                     * 获取The rule ID, which is automatically created and only used as an output parameter.
                     * @return RuleID The rule ID, which is automatically created and only used as an output parameter.
                     * 
                     */
                    int64_t GetRuleID() const;

                    /**
                     * 设置The rule ID, which is automatically created and only used as an output parameter.
                     * @param _ruleID The rule ID, which is automatically created and only used as an output parameter.
                     * 
                     */
                    void SetRuleID(const int64_t& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     * 
                     */
                    bool RuleIDHasBeenSet() const;

                    /**
                     * 获取The update time. If it is null, the current date and time is recorded.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return UpdateTime The update time. If it is null, the current date and time is recorded.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置The update time. If it is null, the current date and time is recorded.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _updateTime The update time. If it is null, the current date and time is recorded.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取The matching condition.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExceptUserRuleConditions The matching condition.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ExceptUserRuleCondition> GetExceptUserRuleConditions() const;

                    /**
                     * 设置The matching condition.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _exceptUserRuleConditions The matching condition.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExceptUserRuleConditions(const std::vector<ExceptUserRuleCondition>& _exceptUserRuleConditions);

                    /**
                     * 判断参数 ExceptUserRuleConditions 是否已赋值
                     * @return ExceptUserRuleConditions 是否已赋值
                     * 
                     */
                    bool ExceptUserRuleConditionsHasBeenSet() const;

                    /**
                     * 获取The scope to which the exception rule applies.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExceptUserRuleScope The scope to which the exception rule applies.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ExceptUserRuleScope GetExceptUserRuleScope() const;

                    /**
                     * 设置The scope to which the exception rule applies.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _exceptUserRuleScope The scope to which the exception rule applies.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExceptUserRuleScope(const ExceptUserRuleScope& _exceptUserRuleScope);

                    /**
                     * 判断参数 ExceptUserRuleScope 是否已赋值
                     * @return ExceptUserRuleScope 是否已赋值
                     * 
                     */
                    bool ExceptUserRuleScopeHasBeenSet() const;

                    /**
                     * 获取The rule priority. Value range: 0-100. If it is null, it defaults to 0.
                     * @return RulePriority The rule priority. Value range: 0-100. If it is null, it defaults to 0.
                     * 
                     */
                    int64_t GetRulePriority() const;

                    /**
                     * 设置The rule priority. Value range: 0-100. If it is null, it defaults to 0.
                     * @param _rulePriority The rule priority. Value range: 0-100. If it is null, it defaults to 0.
                     * 
                     */
                    void SetRulePriority(const int64_t& _rulePriority);

                    /**
                     * 判断参数 RulePriority 是否已赋值
                     * @return RulePriority 是否已赋值
                     * 
                     */
                    bool RulePriorityHasBeenSet() const;

                private:

                    /**
                     * The rule name.
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * The rule action. It only supports the value `skip`, which indicates skipping all managed rules.
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * The rule status. Values:
<li>`on`: Enabled</li>
<li>`off`: Disabled</li>
                     */
                    std::string m_ruleStatus;
                    bool m_ruleStatusHasBeenSet;

                    /**
                     * The rule ID, which is automatically created and only used as an output parameter.
                     */
                    int64_t m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * The update time. If it is null, the current date and time is recorded.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * The matching condition.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ExceptUserRuleCondition> m_exceptUserRuleConditions;
                    bool m_exceptUserRuleConditionsHasBeenSet;

                    /**
                     * The scope to which the exception rule applies.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ExceptUserRuleScope m_exceptUserRuleScope;
                    bool m_exceptUserRuleScopeHasBeenSet;

                    /**
                     * The rule priority. Value range: 0-100. If it is null, it defaults to 0.
                     */
                    int64_t m_rulePriority;
                    bool m_rulePriorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_EXCEPTUSERRULE_H_
