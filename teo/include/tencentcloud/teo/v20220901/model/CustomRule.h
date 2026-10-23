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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMRULE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/SecurityAction.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Custom rule under Web protection feature.
                */
                class CustomRule : public AbstractModel
                {
                public:
                    CustomRule();
                    ~CustomRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Custom rule name.</p>
                     * @return Name <p>Custom rule name.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Custom rule name.</p>
                     * @param _name <p>Custom rule name.</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>The specific content of a custom rule must comply with the expression syntax. For detailed specifications, refer to the <a href="https://www.tencentcloud.com/document/product/1552/125343?from_cn_redirect=1">product document</a>.</p>
                     * @return Condition <p>The specific content of a custom rule must comply with the expression syntax. For detailed specifications, refer to the <a href="https://www.tencentcloud.com/document/product/1552/125343?from_cn_redirect=1">product document</a>.</p>
                     * 
                     */
                    std::string GetCondition() const;

                    /**
                     * 设置<p>The specific content of a custom rule must comply with the expression syntax. For detailed specifications, refer to the <a href="https://www.tencentcloud.com/document/product/1552/125343?from_cn_redirect=1">product document</a>.</p>
                     * @param _condition <p>The specific content of a custom rule must comply with the expression syntax. For detailed specifications, refer to the <a href="https://www.tencentcloud.com/document/product/1552/125343?from_cn_redirect=1">product document</a>.</p>
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
                     * 获取<p>Handling action of the custom rule. SecurityAction.Name value range is as follows:</p><ul><li>Allow: allow, where AllowActionParameters supports MinDelayTime and MaxDelayTime configuration;</li><li>Deny: block, where DenyActionParameters supports BlockIp, ReturnCustomPage, and Stall configuration;</li><li>Monitor: observe;</li><li>Challenge: challenge, where ChallengeActionParameters.ChallengeOption supports JSChallenge and ManagedChallenge;</li><li>Redirect: redirect to a URL.</li></ul>
                     * @return Action <p>Handling action of the custom rule. SecurityAction.Name value range is as follows:</p><ul><li>Allow: allow, where AllowActionParameters supports MinDelayTime and MaxDelayTime configuration;</li><li>Deny: block, where DenyActionParameters supports BlockIp, ReturnCustomPage, and Stall configuration;</li><li>Monitor: observe;</li><li>Challenge: challenge, where ChallengeActionParameters.ChallengeOption supports JSChallenge and ManagedChallenge;</li><li>Redirect: redirect to a URL.</li></ul>
                     * 
                     */
                    SecurityAction GetAction() const;

                    /**
                     * 设置<p>Handling action of the custom rule. SecurityAction.Name value range is as follows:</p><ul><li>Allow: allow, where AllowActionParameters supports MinDelayTime and MaxDelayTime configuration;</li><li>Deny: block, where DenyActionParameters supports BlockIp, ReturnCustomPage, and Stall configuration;</li><li>Monitor: observe;</li><li>Challenge: challenge, where ChallengeActionParameters.ChallengeOption supports JSChallenge and ManagedChallenge;</li><li>Redirect: redirect to a URL.</li></ul>
                     * @param _action <p>Handling action of the custom rule. SecurityAction.Name value range is as follows:</p><ul><li>Allow: allow, where AllowActionParameters supports MinDelayTime and MaxDelayTime configuration;</li><li>Deny: block, where DenyActionParameters supports BlockIp, ReturnCustomPage, and Stall configuration;</li><li>Monitor: observe;</li><li>Challenge: challenge, where ChallengeActionParameters.ChallengeOption supports JSChallenge and ManagedChallenge;</li><li>Redirect: redirect to a URL.</li></ul>
                     * 
                     */
                    void SetAction(const SecurityAction& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取<p>Whether the custom rule is enabled. Valid values: <ul><li>on: enabled;</li><li>off: disabled.</li></ul></p>
                     * @return Enabled <p>Whether the custom rule is enabled. Valid values: <ul><li>on: enabled;</li><li>off: disabled.</li></ul></p>
                     * 
                     */
                    std::string GetEnabled() const;

                    /**
                     * 设置<p>Whether the custom rule is enabled. Valid values: <ul><li>on: enabled;</li><li>off: disabled.</li></ul></p>
                     * @param _enabled <p>Whether the custom rule is enabled. Valid values: <ul><li>on: enabled;</li><li>off: disabled.</li></ul></p>
                     * 
                     */
                    void SetEnabled(const std::string& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取<p>ID of the custom rule. The rule ID supports different rule configuration operations: <ul><li>Add a new rule: leave the ID empty or do not specify the ID parameter;</li><li>Modify an existing rule: specify the rule ID that needs to be updated/modified;</li><li>Delete an existing rule: existing rules not included in the Rules list in the CustomRules parameter will be deleted.</li></ul></p>
                     * @return Id <p>ID of the custom rule. The rule ID supports different rule configuration operations: <ul><li>Add a new rule: leave the ID empty or do not specify the ID parameter;</li><li>Modify an existing rule: specify the rule ID that needs to be updated/modified;</li><li>Delete an existing rule: existing rules not included in the Rules list in the CustomRules parameter will be deleted.</li></ul></p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>ID of the custom rule. The rule ID supports different rule configuration operations: <ul><li>Add a new rule: leave the ID empty or do not specify the ID parameter;</li><li>Modify an existing rule: specify the rule ID that needs to be updated/modified;</li><li>Delete an existing rule: existing rules not included in the Rules list in the CustomRules parameter will be deleted.</li></ul></p>
                     * @param _id <p>ID of the custom rule. The rule ID supports different rule configuration operations: <ul><li>Add a new rule: leave the ID empty or do not specify the ID parameter;</li><li>Modify an existing rule: specify the rule ID that needs to be updated/modified;</li><li>Delete an existing rule: existing rules not included in the Rules list in the CustomRules parameter will be deleted.</li></ul></p>
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>Type of the custom rule. Valid values: <ul><li>BasicAccessRule: basic access control;</li><li>PreciseMatchRule: exact matching rule;</li><li>ManagedAccessRule: expert customized rule, supported only for output parameters.</li></ul>Note: If RuleType is not specified, it defaults to <code>PreciseMatchRule</code>.</p>
                     * @return RuleType <p>Type of the custom rule. Valid values: <ul><li>BasicAccessRule: basic access control;</li><li>PreciseMatchRule: exact matching rule;</li><li>ManagedAccessRule: expert customized rule, supported only for output parameters.</li></ul>Note: If RuleType is not specified, it defaults to <code>PreciseMatchRule</code>.</p>
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置<p>Type of the custom rule. Valid values: <ul><li>BasicAccessRule: basic access control;</li><li>PreciseMatchRule: exact matching rule;</li><li>ManagedAccessRule: expert customized rule, supported only for output parameters.</li></ul>Note: If RuleType is not specified, it defaults to <code>PreciseMatchRule</code>.</p>
                     * @param _ruleType <p>Type of the custom rule. Valid values: <ul><li>BasicAccessRule: basic access control;</li><li>PreciseMatchRule: exact matching rule;</li><li>ManagedAccessRule: expert customized rule, supported only for output parameters.</li></ul>Note: If RuleType is not specified, it defaults to <code>PreciseMatchRule</code>.</p>
                     * 
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取<p>Priority of custom rules. Value range: 0-100. Default value: 0. Only exact matching rules (<code>PreciseMatchRule</code>) are supported.</p>
                     * @return Priority <p>Priority of custom rules. Value range: 0-100. Default value: 0. Only exact matching rules (<code>PreciseMatchRule</code>) are supported.</p>
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置<p>Priority of custom rules. Value range: 0-100. Default value: 0. Only exact matching rules (<code>PreciseMatchRule</code>) are supported.</p>
                     * @param _priority <p>Priority of custom rules. Value range: 0-100. Default value: 0. Only exact matching rules (<code>PreciseMatchRule</code>) are supported.</p>
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                private:

                    /**
                     * <p>Custom rule name.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>The specific content of a custom rule must comply with the expression syntax. For detailed specifications, refer to the <a href="https://www.tencentcloud.com/document/product/1552/125343?from_cn_redirect=1">product document</a>.</p>
                     */
                    std::string m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * <p>Handling action of the custom rule. SecurityAction.Name value range is as follows:</p><ul><li>Allow: allow, where AllowActionParameters supports MinDelayTime and MaxDelayTime configuration;</li><li>Deny: block, where DenyActionParameters supports BlockIp, ReturnCustomPage, and Stall configuration;</li><li>Monitor: observe;</li><li>Challenge: challenge, where ChallengeActionParameters.ChallengeOption supports JSChallenge and ManagedChallenge;</li><li>Redirect: redirect to a URL.</li></ul>
                     */
                    SecurityAction m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * <p>Whether the custom rule is enabled. Valid values: <ul><li>on: enabled;</li><li>off: disabled.</li></ul></p>
                     */
                    std::string m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * <p>ID of the custom rule. The rule ID supports different rule configuration operations: <ul><li>Add a new rule: leave the ID empty or do not specify the ID parameter;</li><li>Modify an existing rule: specify the rule ID that needs to be updated/modified;</li><li>Delete an existing rule: existing rules not included in the Rules list in the CustomRules parameter will be deleted.</li></ul></p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>Type of the custom rule. Valid values: <ul><li>BasicAccessRule: basic access control;</li><li>PreciseMatchRule: exact matching rule;</li><li>ManagedAccessRule: expert customized rule, supported only for output parameters.</li></ul>Note: If RuleType is not specified, it defaults to <code>PreciseMatchRule</code>.</p>
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * <p>Priority of custom rules. Value range: 0-100. Default value: 0. Only exact matching rules (<code>PreciseMatchRule</code>) are supported.</p>
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMRULE_H_
