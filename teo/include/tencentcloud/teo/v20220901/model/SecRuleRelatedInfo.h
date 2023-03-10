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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_SECRULERELATEDINFO_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_SECRULERELATEDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * CC/WAF/Bot security rule information
                */
                class SecRuleRelatedInfo : public AbstractModel
                {
                public:
                    SecRuleRelatedInfo();
                    ~SecRuleRelatedInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The rule ID.
                     * @return RuleId The rule ID.
                     */
                    int64_t GetRuleId() const;

                    /**
                     * 设置The rule ID.
                     * @param RuleId The rule ID.
                     */
                    void SetRuleId(const int64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取Action. Values:
<li>`trans`: Allow;</li>
<li>`alg`: Algorithm challenge;</li>
<li>`drop`: Discard;</li>
<li>`ban`: Block the source IP;</li>
<li>`redirect`: Redirect;</li>
<li>`page`: Return to the specified page;</li>
<li>`monitor`: Observe.</li>
                     * @return Action Action. Values:
<li>`trans`: Allow;</li>
<li>`alg`: Algorithm challenge;</li>
<li>`drop`: Discard;</li>
<li>`ban`: Block the source IP;</li>
<li>`redirect`: Redirect;</li>
<li>`page`: Return to the specified page;</li>
<li>`monitor`: Observe.</li>
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Action. Values:
<li>`trans`: Allow;</li>
<li>`alg`: Algorithm challenge;</li>
<li>`drop`: Discard;</li>
<li>`ban`: Block the source IP;</li>
<li>`redirect`: Redirect;</li>
<li>`page`: Return to the specified page;</li>
<li>`monitor`: Observe.</li>
                     * @param Action Action. Values:
<li>`trans`: Allow;</li>
<li>`alg`: Algorithm challenge;</li>
<li>`drop`: Discard;</li>
<li>`ban`: Block the source IP;</li>
<li>`redirect`: Redirect;</li>
<li>`page`: Return to the specified page;</li>
<li>`monitor`: Observe.</li>
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取Risk level (only found in WAF logs). Values:
<li>`high risk`: High risk;</li>
<li>`middle risk`: Middle risk;</li>
<li>`low risk`: Low risk;</li>
<li>`unkonw`: Unknown.</li>
                     * @return RiskLevel Risk level (only found in WAF logs). Values:
<li>`high risk`: High risk;</li>
<li>`middle risk`: Middle risk;</li>
<li>`low risk`: Low risk;</li>
<li>`unkonw`: Unknown.</li>
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置Risk level (only found in WAF logs). Values:
<li>`high risk`: High risk;</li>
<li>`middle risk`: Middle risk;</li>
<li>`low risk`: Low risk;</li>
<li>`unkonw`: Unknown.</li>
                     * @param RiskLevel Risk level (only found in WAF logs). Values:
<li>`high risk`: High risk;</li>
<li>`middle risk`: Middle risk;</li>
<li>`low risk`: Low risk;</li>
<li>`unkonw`: Unknown.</li>
                     */
                    void SetRiskLevel(const std::string& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取Rule level. Values:
<li>`normal`: Moderate.</li>
                     * @return RuleLevel Rule level. Values:
<li>`normal`: Moderate.</li>
                     */
                    std::string GetRuleLevel() const;

                    /**
                     * 设置Rule level. Values:
<li>`normal`: Moderate.</li>
                     * @param RuleLevel Rule level. Values:
<li>`normal`: Moderate.</li>
                     */
                    void SetRuleLevel(const std::string& _ruleLevel);

                    /**
                     * 判断参数 RuleLevel 是否已赋值
                     * @return RuleLevel 是否已赋值
                     */
                    bool RuleLevelHasBeenSet() const;

                    /**
                     * 获取Rule description.
                     * @return Description Rule description.
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Rule description.
                     * @param Description Rule description.
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取The rule type.
                     * @return RuleTypeName The rule type.
                     */
                    std::string GetRuleTypeName() const;

                    /**
                     * 设置The rule type.
                     * @param RuleTypeName The rule type.
                     */
                    void SetRuleTypeName(const std::string& _ruleTypeName);

                    /**
                     * 判断参数 RuleTypeName 是否已赋值
                     * @return RuleTypeName 是否已赋值
                     */
                    bool RuleTypeNameHasBeenSet() const;

                    /**
                     * 获取The attack content.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AttackContent The attack content.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetAttackContent() const;

                    /**
                     * 设置The attack content.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param AttackContent The attack content.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAttackContent(const std::string& _attackContent);

                    /**
                     * 判断参数 AttackContent 是否已赋值
                     * @return AttackContent 是否已赋值
                     */
                    bool AttackContentHasBeenSet() const;

                    /**
                     * 获取The rule type. Values:
<li>`waf`: Tencent Cloud-managed rule</li>
<li>`acl`: Custom rule</li>
<li>`rate`: Rate limiting rule</li>
<li>`bot`: Bot rule</li>
                     * @return RuleType The rule type. Values:
<li>`waf`: Tencent Cloud-managed rule</li>
<li>`acl`: Custom rule</li>
<li>`rate`: Rate limiting rule</li>
<li>`bot`: Bot rule</li>
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置The rule type. Values:
<li>`waf`: Tencent Cloud-managed rule</li>
<li>`acl`: Custom rule</li>
<li>`rate`: Rate limiting rule</li>
<li>`bot`: Bot rule</li>
                     * @param RuleType The rule type. Values:
<li>`waf`: Tencent Cloud-managed rule</li>
<li>`acl`: Custom rule</li>
<li>`rate`: Rate limiting rule</li>
<li>`bot`: Bot rule</li>
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取Whether to enable the rule
                     * @return RuleEnabled Whether to enable the rule
                     */
                    bool GetRuleEnabled() const;

                    /**
                     * 设置Whether to enable the rule
                     * @param RuleEnabled Whether to enable the rule
                     */
                    void SetRuleEnabled(const bool& _ruleEnabled);

                    /**
                     * 判断参数 RuleEnabled 是否已赋值
                     * @return RuleEnabled 是否已赋值
                     */
                    bool RuleEnabledHasBeenSet() const;

                    /**
                     * 获取Whether the rule is deleted. Values: 
<li>`true`: The rule has been deleted (does not exist).</li>
<li>`false`: The rule is not deleted (exists).</li>
                     * @return RuleDeleted Whether the rule is deleted. Values: 
<li>`true`: The rule has been deleted (does not exist).</li>
<li>`false`: The rule is not deleted (exists).</li>
                     */
                    bool GetRuleDeleted() const;

                    /**
                     * 设置Whether the rule is deleted. Values: 
<li>`true`: The rule has been deleted (does not exist).</li>
<li>`false`: The rule is not deleted (exists).</li>
                     * @param RuleDeleted Whether the rule is deleted. Values: 
<li>`true`: The rule has been deleted (does not exist).</li>
<li>`false`: The rule is not deleted (exists).</li>
                     */
                    void SetRuleDeleted(const bool& _ruleDeleted);

                    /**
                     * 判断参数 RuleDeleted 是否已赋值
                     * @return RuleDeleted 是否已赋值
                     */
                    bool RuleDeletedHasBeenSet() const;

                    /**
                     * 获取Whether to enable alerting for this rule
                     * @return AlarmEnabled Whether to enable alerting for this rule
                     */
                    bool GetAlarmEnabled() const;

                    /**
                     * 设置Whether to enable alerting for this rule
                     * @param AlarmEnabled Whether to enable alerting for this rule
                     */
                    void SetAlarmEnabled(const bool& _alarmEnabled);

                    /**
                     * 判断参数 AlarmEnabled 是否已赋值
                     * @return AlarmEnabled 是否已赋值
                     */
                    bool AlarmEnabledHasBeenSet() const;

                private:

                    /**
                     * The rule ID.
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Action. Values:
<li>`trans`: Allow;</li>
<li>`alg`: Algorithm challenge;</li>
<li>`drop`: Discard;</li>
<li>`ban`: Block the source IP;</li>
<li>`redirect`: Redirect;</li>
<li>`page`: Return to the specified page;</li>
<li>`monitor`: Observe.</li>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Risk level (only found in WAF logs). Values:
<li>`high risk`: High risk;</li>
<li>`middle risk`: Middle risk;</li>
<li>`low risk`: Low risk;</li>
<li>`unkonw`: Unknown.</li>
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * Rule level. Values:
<li>`normal`: Moderate.</li>
                     */
                    std::string m_ruleLevel;
                    bool m_ruleLevelHasBeenSet;

                    /**
                     * Rule description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * The rule type.
                     */
                    std::string m_ruleTypeName;
                    bool m_ruleTypeNameHasBeenSet;

                    /**
                     * The attack content.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_attackContent;
                    bool m_attackContentHasBeenSet;

                    /**
                     * The rule type. Values:
<li>`waf`: Tencent Cloud-managed rule</li>
<li>`acl`: Custom rule</li>
<li>`rate`: Rate limiting rule</li>
<li>`bot`: Bot rule</li>
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * Whether to enable the rule
                     */
                    bool m_ruleEnabled;
                    bool m_ruleEnabledHasBeenSet;

                    /**
                     * Whether the rule is deleted. Values: 
<li>`true`: The rule has been deleted (does not exist).</li>
<li>`false`: The rule is not deleted (exists).</li>
                     */
                    bool m_ruleDeleted;
                    bool m_ruleDeletedHasBeenSet;

                    /**
                     * Whether to enable alerting for this rule
                     */
                    bool m_alarmEnabled;
                    bool m_alarmEnabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SECRULERELATEDINFO_H_
