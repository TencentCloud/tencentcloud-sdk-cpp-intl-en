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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_BOTUSERRULE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_BOTUSERRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/AclCondition.h>
#include <tencentcloud/teo/v20220901/model/BotExtendAction.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Custom bot rules
                */
                class BotUserRule : public AbstractModel
                {
                public:
                    BotUserRule();
                    ~BotUserRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return RuleName 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置
                     * @param RuleName 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取The action. Values:
<li>`drop`: Block</li>
<li>`monitor`: Observe</li>
<li>`trans`: Allow</li>
<li>`alg`: JavaScript challenge</li>
<li>`captcha`: Managed challenge</li>
<li>`silence`: Drop w/o response</li>
<li>`shortdelay`: Add short latency</li>
<li>`longdelay`: Add long latency</li>
                     * @return Action The action. Values:
<li>`drop`: Block</li>
<li>`monitor`: Observe</li>
<li>`trans`: Allow</li>
<li>`alg`: JavaScript challenge</li>
<li>`captcha`: Managed challenge</li>
<li>`silence`: Drop w/o response</li>
<li>`shortdelay`: Add short latency</li>
<li>`longdelay`: Add long latency</li>
                     */
                    std::string GetAction() const;

                    /**
                     * 设置The action. Values:
<li>`drop`: Block</li>
<li>`monitor`: Observe</li>
<li>`trans`: Allow</li>
<li>`alg`: JavaScript challenge</li>
<li>`captcha`: Managed challenge</li>
<li>`silence`: Drop w/o response</li>
<li>`shortdelay`: Add short latency</li>
<li>`longdelay`: Add long latency</li>
                     * @param Action The action. Values:
<li>`drop`: Block</li>
<li>`monitor`: Observe</li>
<li>`trans`: Allow</li>
<li>`alg`: JavaScript challenge</li>
<li>`captcha`: Managed challenge</li>
<li>`silence`: Drop w/o response</li>
<li>`shortdelay`: Add short latency</li>
<li>`longdelay`: Add long latency</li>
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取The rule status. Values:
<li>`on`: Enabled</li>
<li>`off`: Disabled</li>Default value: `on`
                     * @return RuleStatus The rule status. Values:
<li>`on`: Enabled</li>
<li>`off`: Disabled</li>Default value: `on`
                     */
                    std::string GetRuleStatus() const;

                    /**
                     * 设置The rule status. Values:
<li>`on`: Enabled</li>
<li>`off`: Disabled</li>Default value: `on`
                     * @param RuleStatus The rule status. Values:
<li>`on`: Enabled</li>
<li>`off`: Disabled</li>Default value: `on`
                     */
                    void SetRuleStatus(const std::string& _ruleStatus);

                    /**
                     * 判断参数 RuleStatus 是否已赋值
                     * @return RuleStatus 是否已赋值
                     */
                    bool RuleStatusHasBeenSet() const;

                    /**
                     * 获取Details of the rule.
                     * @return AclConditions Details of the rule.
                     */
                    std::vector<AclCondition> GetAclConditions() const;

                    /**
                     * 设置Details of the rule.
                     * @param AclConditions Details of the rule.
                     */
                    void SetAclConditions(const std::vector<AclCondition>& _aclConditions);

                    /**
                     * 判断参数 AclConditions 是否已赋值
                     * @return AclConditions 是否已赋值
                     */
                    bool AclConditionsHasBeenSet() const;

                    /**
                     * 获取The rule weight. Value range: 0-100.
                     * @return RulePriority The rule weight. Value range: 0-100.
                     */
                    int64_t GetRulePriority() const;

                    /**
                     * 设置The rule weight. Value range: 0-100.
                     * @param RulePriority The rule weight. Value range: 0-100.
                     */
                    void SetRulePriority(const int64_t& _rulePriority);

                    /**
                     * 判断参数 RulePriority 是否已赋值
                     * @return RulePriority 是否已赋值
                     */
                    bool RulePriorityHasBeenSet() const;

                    /**
                     * 获取The rule ID, which is only used as an output parameter.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return RuleID The rule ID, which is only used as an output parameter.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetRuleID() const;

                    /**
                     * 设置The rule ID, which is only used as an output parameter.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param RuleID The rule ID, which is only used as an output parameter.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetRuleID(const int64_t& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     */
                    bool RuleIDHasBeenSet() const;

                    /**
                     * 获取[Currently unavailable] Specify the random action and percentage.
                     * @return ExtendActions [Currently unavailable] Specify the random action and percentage.
                     */
                    std::vector<BotExtendAction> GetExtendActions() const;

                    /**
                     * 设置[Currently unavailable] Specify the random action and percentage.
                     * @param ExtendActions [Currently unavailable] Specify the random action and percentage.
                     */
                    void SetExtendActions(const std::vector<BotExtendAction>& _extendActions);

                    /**
                     * 判断参数 ExtendActions 是否已赋值
                     * @return ExtendActions 是否已赋值
                     */
                    bool ExtendActionsHasBeenSet() const;

                    /**
                     * 获取The filter. Values:
<li>`sip`: Client IP</li>
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return FreqFields The filter. Values:
<li>`sip`: Client IP</li>
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetFreqFields() const;

                    /**
                     * 设置The filter. Values:
<li>`sip`: Client IP</li>
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param FreqFields The filter. Values:
<li>`sip`: Client IP</li>
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetFreqFields(const std::vector<std::string>& _freqFields);

                    /**
                     * 判断参数 FreqFields 是否已赋值
                     * @return FreqFields 是否已赋值
                     */
                    bool FreqFieldsHasBeenSet() const;

                    /**
                     * 获取Updated time
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return UpdateTime Updated time
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Updated time
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param UpdateTime Updated time
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取The statistical dimension. Values:
<li>`source_to_eo`: Responses from the origin server to EdgeOne</li>
<li>`client_to_eo`: Requests from the client to EdgeOne</li>
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return FreqScope The statistical dimension. Values:
<li>`source_to_eo`: Responses from the origin server to EdgeOne</li>
<li>`client_to_eo`: Requests from the client to EdgeOne</li>
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetFreqScope() const;

                    /**
                     * 设置The statistical dimension. Values:
<li>`source_to_eo`: Responses from the origin server to EdgeOne</li>
<li>`client_to_eo`: Requests from the client to EdgeOne</li>
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param FreqScope The statistical dimension. Values:
<li>`source_to_eo`: Responses from the origin server to EdgeOne</li>
<li>`client_to_eo`: Requests from the client to EdgeOne</li>
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetFreqScope(const std::vector<std::string>& _freqScope);

                    /**
                     * 判断参数 FreqScope 是否已赋值
                     * @return FreqScope 是否已赋值
                     */
                    bool FreqScopeHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * The action. Values:
<li>`drop`: Block</li>
<li>`monitor`: Observe</li>
<li>`trans`: Allow</li>
<li>`alg`: JavaScript challenge</li>
<li>`captcha`: Managed challenge</li>
<li>`silence`: Drop w/o response</li>
<li>`shortdelay`: Add short latency</li>
<li>`longdelay`: Add long latency</li>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * The rule status. Values:
<li>`on`: Enabled</li>
<li>`off`: Disabled</li>Default value: `on`
                     */
                    std::string m_ruleStatus;
                    bool m_ruleStatusHasBeenSet;

                    /**
                     * Details of the rule.
                     */
                    std::vector<AclCondition> m_aclConditions;
                    bool m_aclConditionsHasBeenSet;

                    /**
                     * The rule weight. Value range: 0-100.
                     */
                    int64_t m_rulePriority;
                    bool m_rulePriorityHasBeenSet;

                    /**
                     * The rule ID, which is only used as an output parameter.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * [Currently unavailable] Specify the random action and percentage.
                     */
                    std::vector<BotExtendAction> m_extendActions;
                    bool m_extendActionsHasBeenSet;

                    /**
                     * The filter. Values:
<li>`sip`: Client IP</li>
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_freqFields;
                    bool m_freqFieldsHasBeenSet;

                    /**
                     * Updated time
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * The statistical dimension. Values:
<li>`source_to_eo`: Responses from the origin server to EdgeOne</li>
<li>`client_to_eo`: Requests from the client to EdgeOne</li>
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_freqScope;
                    bool m_freqScopeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_BOTUSERRULE_H_
