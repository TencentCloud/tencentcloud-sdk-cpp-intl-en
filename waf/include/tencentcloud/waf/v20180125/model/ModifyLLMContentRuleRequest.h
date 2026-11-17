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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYLLMCONTENTRULEREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYLLMCONTENTRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/RuleItem.h>
#include <tencentcloud/waf/v20180125/model/LLMOptionsItem.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * ModifyLLMContentRule request structure.
                */
                class ModifyLLMContentRuleRequest : public AbstractModel
                {
                public:
                    ModifyLLMContentRuleRequest();
                    ~ModifyLLMContentRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Name.</p>
                     * @return Name <p>Name.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Name.</p>
                     * @param _name <p>Name.</p>
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
                     * 获取<p>Priority.</p>
                     * @return Priority <p>Priority.</p>
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置<p>Priority.</p>
                     * @param _priority <p>Priority.</p>
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
                     * 获取<p>Rule switch.</p>
                     * @return Status <p>Rule switch.</p>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>Rule switch.</p>
                     * @param _status <p>Rule switch.</p>
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Detection scope. 1: Inbound. 2: Outbound. 3: Inbound and outbound.</p>
                     * @return CheckType <p>Detection scope. 1: Inbound. 2: Outbound. 3: Inbound and outbound.</p>
                     * 
                     */
                    uint64_t GetCheckType() const;

                    /**
                     * 设置<p>Detection scope. 1: Inbound. 2: Outbound. 3: Inbound and outbound.</p>
                     * @param _checkType <p>Detection scope. 1: Inbound. 2: Outbound. 3: Inbound and outbound.</p>
                     * 
                     */
                    void SetCheckType(const uint64_t& _checkType);

                    /**
                     * 判断参数 CheckType 是否已赋值
                     * @return CheckType 是否已赋值
                     * 
                     */
                    bool CheckTypeHasBeenSet() const;

                    /**
                     * 获取<p>Detection content matching.</p>
                     * @return RuleItem <p>Detection content matching.</p>
                     * 
                     */
                    std::vector<RuleItem> GetRuleItem() const;

                    /**
                     * 设置<p>Detection content matching.</p>
                     * @param _ruleItem <p>Detection content matching.</p>
                     * 
                     */
                    void SetRuleItem(const std::vector<RuleItem>& _ruleItem);

                    /**
                     * 判断参数 RuleItem 是否已赋值
                     * @return RuleItem 是否已赋值
                     * 
                     */
                    bool RuleItemHasBeenSet() const;

                    /**
                     * 获取<p>Matching condition.</p>
                     * @return Options <p>Matching condition.</p>
                     * 
                     */
                    std::vector<LLMOptionsItem> GetOptions() const;

                    /**
                     * 设置<p>Matching condition.</p>
                     * @param _options <p>Matching condition.</p>
                     * 
                     */
                    void SetOptions(const std::vector<LLMOptionsItem>& _options);

                    /**
                     * 判断参数 Options 是否已赋值
                     * @return Options 是否已赋值
                     * 
                     */
                    bool OptionsHasBeenSet() const;

                    /**
                     * 获取<p>Domain name.</p>
                     * @return Domain <p>Domain name.</p>
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>Domain name.</p>
                     * @param _domain <p>Domain name.</p>
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取<p>Action. monitor: Observe. Intercept: Intercept.</p>
                     * @return ActionType <p>Action. monitor: Observe. Intercept: Intercept.</p>
                     * 
                     */
                    std::string GetActionType() const;

                    /**
                     * 设置<p>Action. monitor: Observe. Intercept: Intercept.</p>
                     * @param _actionType <p>Action. monitor: Observe. Intercept: Intercept.</p>
                     * 
                     */
                    void SetActionType(const std::string& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     * 
                     */
                    bool ActionTypeHasBeenSet() const;

                    /**
                     * 获取<p>Response prompt content.</p>
                     * @return ResponseText <p>Response prompt content.</p>
                     * 
                     */
                    std::string GetResponseText() const;

                    /**
                     * 设置<p>Response prompt content.</p>
                     * @param _responseText <p>Response prompt content.</p>
                     * 
                     */
                    void SetResponseText(const std::string& _responseText);

                    /**
                     * 判断参数 ResponseText 是否已赋值
                     * @return ResponseText 是否已赋值
                     * 
                     */
                    bool ResponseTextHasBeenSet() const;

                    /**
                     * 获取<p>Session ID for which the rule is to be enabled.</p>
                     * @return SessionApplied <p>Session ID for which the rule is to be enabled.</p>
                     * 
                     */
                    std::vector<std::string> GetSessionApplied() const;

                    /**
                     * 设置<p>Session ID for which the rule is to be enabled.</p>
                     * @param _sessionApplied <p>Session ID for which the rule is to be enabled.</p>
                     * 
                     */
                    void SetSessionApplied(const std::vector<std::string>& _sessionApplied);

                    /**
                     * 判断参数 SessionApplied 是否已赋值
                     * @return SessionApplied 是否已赋值
                     * 
                     */
                    bool SessionAppliedHasBeenSet() const;

                    /**
                     * 获取<p>Rule ID. Enter 0 when adding a rule.</p>
                     * @return RuleId <p>Rule ID. Enter 0 when adding a rule.</p>
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置<p>Rule ID. Enter 0 when adding a rule.</p>
                     * @param _ruleId <p>Rule ID. Enter 0 when adding a rule.</p>
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
                     * 获取<p>Interception page id.</p>
                     * @return PageId <p>Interception page id.</p>
                     * 
                     */
                    uint64_t GetPageId() const;

                    /**
                     * 设置<p>Interception page id.</p>
                     * @param _pageId <p>Interception page id.</p>
                     * 
                     */
                    void SetPageId(const uint64_t& _pageId);

                    /**
                     * 判断参数 PageId 是否已赋值
                     * @return PageId 是否已赋值
                     * 
                     */
                    bool PageIdHasBeenSet() const;

                    /**
                     * 获取<p>Detection content and/or expression. Defaults to and.</p>
                     * @return ContentLogicalOp <p>Detection content and/or expression. Defaults to and.</p>
                     * 
                     */
                    std::string GetContentLogicalOp() const;

                    /**
                     * 设置<p>Detection content and/or expression. Defaults to and.</p>
                     * @param _contentLogicalOp <p>Detection content and/or expression. Defaults to and.</p>
                     * 
                     */
                    void SetContentLogicalOp(const std::string& _contentLogicalOp);

                    /**
                     * 判断参数 ContentLogicalOp 是否已赋值
                     * @return ContentLogicalOp 是否已赋值
                     * 
                     */
                    bool ContentLogicalOpHasBeenSet() const;

                    /**
                     * 获取<p>Instance id. Required.</p>
                     * @return InstanceId <p>Instance id. Required.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance id. Required.</p>
                     * @param _instanceId <p>Instance id. Required.</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>Response type. 1: Built-in trusted model security response. 2: Custom response, which takes effect when ActionType=reply.</p><p>Valid values:</p><ul><li>1: Built-in trusted model security response</li><li>2: Custom response, which takes effect when ActionType=reply</li></ul>
                     * @return ReplyType <p>Response type. 1: Built-in trusted model security response. 2: Custom response, which takes effect when ActionType=reply.</p><p>Valid values:</p><ul><li>1: Built-in trusted model security response</li><li>2: Custom response, which takes effect when ActionType=reply</li></ul>
                     * 
                     */
                    uint64_t GetReplyType() const;

                    /**
                     * 设置<p>Response type. 1: Built-in trusted model security response. 2: Custom response, which takes effect when ActionType=reply.</p><p>Valid values:</p><ul><li>1: Built-in trusted model security response</li><li>2: Custom response, which takes effect when ActionType=reply</li></ul>
                     * @param _replyType <p>Response type. 1: Built-in trusted model security response. 2: Custom response, which takes effect when ActionType=reply.</p><p>Valid values:</p><ul><li>1: Built-in trusted model security response</li><li>2: Custom response, which takes effect when ActionType=reply</li></ul>
                     * 
                     */
                    void SetReplyType(const uint64_t& _replyType);

                    /**
                     * 判断参数 ReplyType 是否已赋值
                     * @return ReplyType 是否已赋值
                     * 
                     */
                    bool ReplyTypeHasBeenSet() const;

                    /**
                     * 获取<p>Custom response template.</p>
                     * @return CustomReplyRuleId <p>Custom response template.</p>
                     * 
                     */
                    std::string GetCustomReplyRuleId() const;

                    /**
                     * 设置<p>Custom response template.</p>
                     * @param _customReplyRuleId <p>Custom response template.</p>
                     * 
                     */
                    void SetCustomReplyRuleId(const std::string& _customReplyRuleId);

                    /**
                     * 判断参数 CustomReplyRuleId 是否已赋值
                     * @return CustomReplyRuleId 是否已赋值
                     * 
                     */
                    bool CustomReplyRuleIdHasBeenSet() const;

                    /**
                     * 获取<p>Modality type. 0: Text (default). 1: Image.</p><p>Valid values:</p><ul><li>0: Text</li><li>1: Image</li></ul>
                     * @return ModalType <p>Modality type. 0: Text (default). 1: Image.</p><p>Valid values:</p><ul><li>0: Text</li><li>1: Image</li></ul>
                     * 
                     */
                    uint64_t GetModalType() const;

                    /**
                     * 设置<p>Modality type. 0: Text (default). 1: Image.</p><p>Valid values:</p><ul><li>0: Text</li><li>1: Image</li></ul>
                     * @param _modalType <p>Modality type. 0: Text (default). 1: Image.</p><p>Valid values:</p><ul><li>0: Text</li><li>1: Image</li></ul>
                     * 
                     */
                    void SetModalType(const uint64_t& _modalType);

                    /**
                     * 判断参数 ModalType 是否已赋值
                     * @return ModalType 是否已赋值
                     * 
                     */
                    bool ModalTypeHasBeenSet() const;

                    /**
                     * 获取<p>Rule category. black: Regular rule (default). white: Allowlist rule. If this parameter is left empty, the black category is used. When this parameter is set to white, ActionType can only be set to pass, and RuleItem supports allowlist matching fields (Key: ip/geo/type/content/chat_id/user_id/tool_name/tool_args/keyword_whitelist; Op: belong/not_belong/equal/not_equal/contain/not_contain/prefix/suffix/wildcard).</p>
                     * @return Category <p>Rule category. black: Regular rule (default). white: Allowlist rule. If this parameter is left empty, the black category is used. When this parameter is set to white, ActionType can only be set to pass, and RuleItem supports allowlist matching fields (Key: ip/geo/type/content/chat_id/user_id/tool_name/tool_args/keyword_whitelist; Op: belong/not_belong/equal/not_equal/contain/not_contain/prefix/suffix/wildcard).</p>
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置<p>Rule category. black: Regular rule (default). white: Allowlist rule. If this parameter is left empty, the black category is used. When this parameter is set to white, ActionType can only be set to pass, and RuleItem supports allowlist matching fields (Key: ip/geo/type/content/chat_id/user_id/tool_name/tool_args/keyword_whitelist; Op: belong/not_belong/equal/not_equal/contain/not_contain/prefix/suffix/wildcard).</p>
                     * @param _category <p>Rule category. black: Regular rule (default). white: Allowlist rule. If this parameter is left empty, the black category is used. When this parameter is set to white, ActionType can only be set to pass, and RuleItem supports allowlist matching fields (Key: ip/geo/type/content/chat_id/user_id/tool_name/tool_args/keyword_whitelist; Op: belong/not_belong/equal/not_equal/contain/not_contain/prefix/suffix/wildcard).</p>
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取<p>Effective scope of the allowlist rule: a list of multiple serviceId/domain values (used when Category=white), indicating the domains/serviceIds to which the allowlist rule applies. This field is not used for blocklist rules.</p>
                     * @return Domains <p>Effective scope of the allowlist rule: a list of multiple serviceId/domain values (used when Category=white), indicating the domains/serviceIds to which the allowlist rule applies. This field is not used for blocklist rules.</p>
                     * 
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置<p>Effective scope of the allowlist rule: a list of multiple serviceId/domain values (used when Category=white), indicating the domains/serviceIds to which the allowlist rule applies. This field is not used for blocklist rules.</p>
                     * @param _domains <p>Effective scope of the allowlist rule: a list of multiple serviceId/domain values (used when Category=white), indicating the domains/serviceIds to which the allowlist rule applies. This field is not used for blocklist rules.</p>
                     * 
                     */
                    void SetDomains(const std::vector<std::string>& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     * 
                     */
                    bool DomainsHasBeenSet() const;

                    /**
                     * 获取<p>List of module types for which the allowlist takes effect (used when Category=white), indicating the protection modules to which the allowlist rule applies (pass) after a match. Valid values: 2: Compute resource consumption rule; 3: Custom protection rule; 4: ToolCall protection; 5: Prompt attack protection; 6: Content compliance detection; 7: Sensitive data detection.</p>
                     * @return AppliedModules <p>List of module types for which the allowlist takes effect (used when Category=white), indicating the protection modules to which the allowlist rule applies (pass) after a match. Valid values: 2: Compute resource consumption rule; 3: Custom protection rule; 4: ToolCall protection; 5: Prompt attack protection; 6: Content compliance detection; 7: Sensitive data detection.</p>
                     * 
                     */
                    std::vector<uint64_t> GetAppliedModules() const;

                    /**
                     * 设置<p>List of module types for which the allowlist takes effect (used when Category=white), indicating the protection modules to which the allowlist rule applies (pass) after a match. Valid values: 2: Compute resource consumption rule; 3: Custom protection rule; 4: ToolCall protection; 5: Prompt attack protection; 6: Content compliance detection; 7: Sensitive data detection.</p>
                     * @param _appliedModules <p>List of module types for which the allowlist takes effect (used when Category=white), indicating the protection modules to which the allowlist rule applies (pass) after a match. Valid values: 2: Compute resource consumption rule; 3: Custom protection rule; 4: ToolCall protection; 5: Prompt attack protection; 6: Content compliance detection; 7: Sensitive data detection.</p>
                     * 
                     */
                    void SetAppliedModules(const std::vector<uint64_t>& _appliedModules);

                    /**
                     * 判断参数 AppliedModules 是否已赋值
                     * @return AppliedModules 是否已赋值
                     * 
                     */
                    bool AppliedModulesHasBeenSet() const;

                    /**
                     * 获取<p>Severity. critical: Critical. high: High. medium: Medium (default). low: Low. When this rule is matched, the risk level is displayed in attack logs based on this parameter. If this parameter is not passed or is left empty, the medium severity is used.</p><p>Valid values:</p><ul><li>critical: Critical</li><li>high: High</li><li>medium: Medium (default)</li><li>low: Low</li></ul>
                     * @return RiskLevel <p>Severity. critical: Critical. high: High. medium: Medium (default). low: Low. When this rule is matched, the risk level is displayed in attack logs based on this parameter. If this parameter is not passed or is left empty, the medium severity is used.</p><p>Valid values:</p><ul><li>critical: Critical</li><li>high: High</li><li>medium: Medium (default)</li><li>low: Low</li></ul>
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置<p>Severity. critical: Critical. high: High. medium: Medium (default). low: Low. When this rule is matched, the risk level is displayed in attack logs based on this parameter. If this parameter is not passed or is left empty, the medium severity is used.</p><p>Valid values:</p><ul><li>critical: Critical</li><li>high: High</li><li>medium: Medium (default)</li><li>low: Low</li></ul>
                     * @param _riskLevel <p>Severity. critical: Critical. high: High. medium: Medium (default). low: Low. When this rule is matched, the risk level is displayed in attack logs based on this parameter. If this parameter is not passed or is left empty, the medium severity is used.</p><p>Valid values:</p><ul><li>critical: Critical</li><li>high: High</li><li>medium: Medium (default)</li><li>low: Low</li></ul>
                     * 
                     */
                    void SetRiskLevel(const std::string& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                private:

                    /**
                     * <p>Name.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Priority.</p>
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * <p>Rule switch.</p>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Detection scope. 1: Inbound. 2: Outbound. 3: Inbound and outbound.</p>
                     */
                    uint64_t m_checkType;
                    bool m_checkTypeHasBeenSet;

                    /**
                     * <p>Detection content matching.</p>
                     */
                    std::vector<RuleItem> m_ruleItem;
                    bool m_ruleItemHasBeenSet;

                    /**
                     * <p>Matching condition.</p>
                     */
                    std::vector<LLMOptionsItem> m_options;
                    bool m_optionsHasBeenSet;

                    /**
                     * <p>Domain name.</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>Action. monitor: Observe. Intercept: Intercept.</p>
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * <p>Response prompt content.</p>
                     */
                    std::string m_responseText;
                    bool m_responseTextHasBeenSet;

                    /**
                     * <p>Session ID for which the rule is to be enabled.</p>
                     */
                    std::vector<std::string> m_sessionApplied;
                    bool m_sessionAppliedHasBeenSet;

                    /**
                     * <p>Rule ID. Enter 0 when adding a rule.</p>
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * <p>Interception page id.</p>
                     */
                    uint64_t m_pageId;
                    bool m_pageIdHasBeenSet;

                    /**
                     * <p>Detection content and/or expression. Defaults to and.</p>
                     */
                    std::string m_contentLogicalOp;
                    bool m_contentLogicalOpHasBeenSet;

                    /**
                     * <p>Instance id. Required.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Response type. 1: Built-in trusted model security response. 2: Custom response, which takes effect when ActionType=reply.</p><p>Valid values:</p><ul><li>1: Built-in trusted model security response</li><li>2: Custom response, which takes effect when ActionType=reply</li></ul>
                     */
                    uint64_t m_replyType;
                    bool m_replyTypeHasBeenSet;

                    /**
                     * <p>Custom response template.</p>
                     */
                    std::string m_customReplyRuleId;
                    bool m_customReplyRuleIdHasBeenSet;

                    /**
                     * <p>Modality type. 0: Text (default). 1: Image.</p><p>Valid values:</p><ul><li>0: Text</li><li>1: Image</li></ul>
                     */
                    uint64_t m_modalType;
                    bool m_modalTypeHasBeenSet;

                    /**
                     * <p>Rule category. black: Regular rule (default). white: Allowlist rule. If this parameter is left empty, the black category is used. When this parameter is set to white, ActionType can only be set to pass, and RuleItem supports allowlist matching fields (Key: ip/geo/type/content/chat_id/user_id/tool_name/tool_args/keyword_whitelist; Op: belong/not_belong/equal/not_equal/contain/not_contain/prefix/suffix/wildcard).</p>
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * <p>Effective scope of the allowlist rule: a list of multiple serviceId/domain values (used when Category=white), indicating the domains/serviceIds to which the allowlist rule applies. This field is not used for blocklist rules.</p>
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * <p>List of module types for which the allowlist takes effect (used when Category=white), indicating the protection modules to which the allowlist rule applies (pass) after a match. Valid values: 2: Compute resource consumption rule; 3: Custom protection rule; 4: ToolCall protection; 5: Prompt attack protection; 6: Content compliance detection; 7: Sensitive data detection.</p>
                     */
                    std::vector<uint64_t> m_appliedModules;
                    bool m_appliedModulesHasBeenSet;

                    /**
                     * <p>Severity. critical: Critical. high: High. medium: Medium (default). low: Low. When this rule is matched, the risk level is displayed in attack logs based on this parameter. If this parameter is not passed or is left empty, the medium severity is used.</p><p>Valid values:</p><ul><li>critical: Critical</li><li>high: High</li><li>medium: Medium (default)</li><li>low: Low</li></ul>
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYLLMCONTENTRULEREQUEST_H_
