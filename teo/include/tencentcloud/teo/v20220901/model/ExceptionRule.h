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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_EXCEPTIONRULE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_EXCEPTIONRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/RequestFieldsForException.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Exception rule for Web security
                */
                class ExceptionRule : public AbstractModel
                {
                public:
                    ExceptionRule();
                    ~ExceptionRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID of the exception rule.<br>Different rule configuration operations can be performed by rule ID:<br> <li> <b>Add</b> a new rule: leave the ID empty or do not specify the ID parameter;</li><li> <b>Modify</b> an existing rule: specify the rule ID to be updated/modified;</li><li> <b>Delete</b> an existing rule: existing rules not included in the Rules list in the ExceptionRules parameter will be deleted.</li>
                     * @return Id ID of the exception rule.<br>Different rule configuration operations can be performed by rule ID:<br> <li> <b>Add</b> a new rule: leave the ID empty or do not specify the ID parameter;</li><li> <b>Modify</b> an existing rule: specify the rule ID to be updated/modified;</li><li> <b>Delete</b> an existing rule: existing rules not included in the Rules list in the ExceptionRules parameter will be deleted.</li>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置ID of the exception rule.<br>Different rule configuration operations can be performed by rule ID:<br> <li> <b>Add</b> a new rule: leave the ID empty or do not specify the ID parameter;</li><li> <b>Modify</b> an existing rule: specify the rule ID to be updated/modified;</li><li> <b>Delete</b> an existing rule: existing rules not included in the Rules list in the ExceptionRules parameter will be deleted.</li>
                     * @param _id ID of the exception rule.<br>Different rule configuration operations can be performed by rule ID:<br> <li> <b>Add</b> a new rule: leave the ID empty or do not specify the ID parameter;</li><li> <b>Modify</b> an existing rule: specify the rule ID to be updated/modified;</li><li> <b>Delete</b> an existing rule: existing rules not included in the Rules list in the ExceptionRules parameter will be deleted.</li>
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
                     * 获取Name of the exception rule.
                     * @return Name Name of the exception rule.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name of the exception rule.
                     * @param _name Name of the exception rule.
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
                     * 获取Specific content of the exception rule must comply with the expression grammar. For detailed specifications, please refer to the product document.
                     * @return Condition Specific content of the exception rule must comply with the expression grammar. For detailed specifications, please refer to the product document.
                     * 
                     */
                    std::string GetCondition() const;

                    /**
                     * 设置Specific content of the exception rule must comply with the expression grammar. For detailed specifications, please refer to the product document.
                     * @param _condition Specific content of the exception rule must comply with the expression grammar. For detailed specifications, please refer to the product document.
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
                     * 获取Exception rule execution options. Valid values: <li>WebSecurityModules: assigns the security protection module for the exception rule. Use in conjunction with WebSecurityModulesForException.</li><li>WebSecuritySubmodules: assigns the security protection submodule for the exception rule. Use in conjunction with WebSecuritySubmodulesForException.</li><li>ManagedRules: assigns the specific managed rule for the exception rule. Use in conjunction with ManagedRulesForException.</li><li>ManagedRuleGroups: assigns the managed rule group for the exception rule. Use in conjunction with ManagedRuleGroupsForException.</li>
                     * @return SkipScope Exception rule execution options. Valid values: <li>WebSecurityModules: assigns the security protection module for the exception rule. Use in conjunction with WebSecurityModulesForException.</li><li>WebSecuritySubmodules: assigns the security protection submodule for the exception rule. Use in conjunction with WebSecuritySubmodulesForException.</li><li>ManagedRules: assigns the specific managed rule for the exception rule. Use in conjunction with ManagedRulesForException.</li><li>ManagedRuleGroups: assigns the managed rule group for the exception rule. Use in conjunction with ManagedRuleGroupsForException.</li>
                     * 
                     */
                    std::string GetSkipScope() const;

                    /**
                     * 设置Exception rule execution options. Valid values: <li>WebSecurityModules: assigns the security protection module for the exception rule. Use in conjunction with WebSecurityModulesForException.</li><li>WebSecuritySubmodules: assigns the security protection submodule for the exception rule. Use in conjunction with WebSecuritySubmodulesForException.</li><li>ManagedRules: assigns the specific managed rule for the exception rule. Use in conjunction with ManagedRulesForException.</li><li>ManagedRuleGroups: assigns the managed rule group for the exception rule. Use in conjunction with ManagedRuleGroupsForException.</li>
                     * @param _skipScope Exception rule execution options. Valid values: <li>WebSecurityModules: assigns the security protection module for the exception rule. Use in conjunction with WebSecurityModulesForException.</li><li>WebSecuritySubmodules: assigns the security protection submodule for the exception rule. Use in conjunction with WebSecuritySubmodulesForException.</li><li>ManagedRules: assigns the specific managed rule for the exception rule. Use in conjunction with ManagedRulesForException.</li><li>ManagedRuleGroups: assigns the managed rule group for the exception rule. Use in conjunction with ManagedRuleGroupsForException.</li>
                     * 
                     */
                    void SetSkipScope(const std::string& _skipScope);

                    /**
                     * 判断参数 SkipScope 是否已赋值
                     * @return SkipScope 是否已赋值
                     * 
                     */
                    bool SkipScopeHasBeenSet() const;

                    /**
                     * 获取Skip the specific type of request. Valid values: <li>SkipOnAllRequestFields: skip all requests;</li><li>SkipOnSpecifiedRequestFields: skip specified request fields.</li>Valid only when SkipScope is ManagedRules or ManagedRuleGroups.
                     * @return SkipOption Skip the specific type of request. Valid values: <li>SkipOnAllRequestFields: skip all requests;</li><li>SkipOnSpecifiedRequestFields: skip specified request fields.</li>Valid only when SkipScope is ManagedRules or ManagedRuleGroups.
                     * 
                     */
                    std::string GetSkipOption() const;

                    /**
                     * 设置Skip the specific type of request. Valid values: <li>SkipOnAllRequestFields: skip all requests;</li><li>SkipOnSpecifiedRequestFields: skip specified request fields.</li>Valid only when SkipScope is ManagedRules or ManagedRuleGroups.
                     * @param _skipOption Skip the specific type of request. Valid values: <li>SkipOnAllRequestFields: skip all requests;</li><li>SkipOnSpecifiedRequestFields: skip specified request fields.</li>Valid only when SkipScope is ManagedRules or ManagedRuleGroups.
                     * 
                     */
                    void SetSkipOption(const std::string& _skipOption);

                    /**
                     * 判断参数 SkipOption 是否已赋值
                     * @return SkipOption 是否已赋值
                     * 
                     */
                    bool SkipOptionHasBeenSet() const;

                    /**
                     * 获取Security protection module for the exception rule. Valid only when SkipScope is WebSecurityModules. Valid values: <li>websec-mod-managed-rules: managed rule</li><li>websec-mod-rate-limiting: rate limit</li><li>websec-mod-custom-rules: custom rule</li><li>websec-mod-adaptive-control: adaptive frequency control, intelligent client filtering, slow attack protection, traffic theft protection</li><li>websec-mod-bot: bot management</li>
                     * @return WebSecurityModulesForException Security protection module for the exception rule. Valid only when SkipScope is WebSecurityModules. Valid values: <li>websec-mod-managed-rules: managed rule</li><li>websec-mod-rate-limiting: rate limit</li><li>websec-mod-custom-rules: custom rule</li><li>websec-mod-adaptive-control: adaptive frequency control, intelligent client filtering, slow attack protection, traffic theft protection</li><li>websec-mod-bot: bot management</li>
                     * 
                     */
                    std::vector<std::string> GetWebSecurityModulesForException() const;

                    /**
                     * 设置Security protection module for the exception rule. Valid only when SkipScope is WebSecurityModules. Valid values: <li>websec-mod-managed-rules: managed rule</li><li>websec-mod-rate-limiting: rate limit</li><li>websec-mod-custom-rules: custom rule</li><li>websec-mod-adaptive-control: adaptive frequency control, intelligent client filtering, slow attack protection, traffic theft protection</li><li>websec-mod-bot: bot management</li>
                     * @param _webSecurityModulesForException Security protection module for the exception rule. Valid only when SkipScope is WebSecurityModules. Valid values: <li>websec-mod-managed-rules: managed rule</li><li>websec-mod-rate-limiting: rate limit</li><li>websec-mod-custom-rules: custom rule</li><li>websec-mod-adaptive-control: adaptive frequency control, intelligent client filtering, slow attack protection, traffic theft protection</li><li>websec-mod-bot: bot management</li>
                     * 
                     */
                    void SetWebSecurityModulesForException(const std::vector<std::string>& _webSecurityModulesForException);

                    /**
                     * 判断参数 WebSecurityModulesForException 是否已赋值
                     * @return WebSecurityModulesForException 是否已赋值
                     * 
                     */
                    bool WebSecurityModulesForExceptionHasBeenSet() const;

                    /**
                     * 获取Specifies the security protection submodule for the exception rule. Valid only when SkipScope is WebSecuritySubmodules. Valid values: <ul><li>ManagedRules module features: <ul><li>websec-mod-managed-rules/managed-rule-groups: rule set;</li><li>websec-mod-managed-rules/frequent-scanning-protection: high frequency scan protection;</li></ul></li><li>RateLimitingRules module features: <ul><li>websec-mod-rate-limiting-rules: rate limiting rule;</li></ul></li><li>CustomRules module features: <ul><li>websec-mod-custom-rules: custom rule;</li></ul></li><li>HttpDDoSProtection module features: <ul><li>websec-mod-HTTP-DDoS-protection/adaptive-frequency-control: adaptive frequency control;</li><li>websec-mod-HTTP-DDoS-protection/client-filtering: intelligent client filtering;</li><li>websec-mod-HTTP-DDoS-protection/bandwidth-abuse-defense: traffic fraud protection;</li></ul></li><li>BotManagement module features: <ul><li>websec-mod-Bot-management/basic-feature: basic feature management;</li><li>websec-mod-Bot-management/ip-reputation: client profile analysis;</li><li>websec-mod-Bot-management/Bot-intelligence: intelligent Bot analysis;</li><li>websec-mod-Bot-management/custom-rules: custom rule;</li><li>websec-mod-Bot-management/browser-impersonation-detection: proactive feature recognition;</li><li>websec-mod-Bot-management/client-attestation-rules: client authentication;</li></ul></li><li>BotManagementLite module features: <ul><li>websec-mod-Bot-management-lite/ai-crawler-detection: ai crawler disposal;</li><li>websec-mod-Bot-management-lite/captcha-page-challenge: captcha page challenge.</li></ul></li></ul>
                     * @return WebSecuritySubmodulesForException Specifies the security protection submodule for the exception rule. Valid only when SkipScope is WebSecuritySubmodules. Valid values: <ul><li>ManagedRules module features: <ul><li>websec-mod-managed-rules/managed-rule-groups: rule set;</li><li>websec-mod-managed-rules/frequent-scanning-protection: high frequency scan protection;</li></ul></li><li>RateLimitingRules module features: <ul><li>websec-mod-rate-limiting-rules: rate limiting rule;</li></ul></li><li>CustomRules module features: <ul><li>websec-mod-custom-rules: custom rule;</li></ul></li><li>HttpDDoSProtection module features: <ul><li>websec-mod-HTTP-DDoS-protection/adaptive-frequency-control: adaptive frequency control;</li><li>websec-mod-HTTP-DDoS-protection/client-filtering: intelligent client filtering;</li><li>websec-mod-HTTP-DDoS-protection/bandwidth-abuse-defense: traffic fraud protection;</li></ul></li><li>BotManagement module features: <ul><li>websec-mod-Bot-management/basic-feature: basic feature management;</li><li>websec-mod-Bot-management/ip-reputation: client profile analysis;</li><li>websec-mod-Bot-management/Bot-intelligence: intelligent Bot analysis;</li><li>websec-mod-Bot-management/custom-rules: custom rule;</li><li>websec-mod-Bot-management/browser-impersonation-detection: proactive feature recognition;</li><li>websec-mod-Bot-management/client-attestation-rules: client authentication;</li></ul></li><li>BotManagementLite module features: <ul><li>websec-mod-Bot-management-lite/ai-crawler-detection: ai crawler disposal;</li><li>websec-mod-Bot-management-lite/captcha-page-challenge: captcha page challenge.</li></ul></li></ul>
                     * 
                     */
                    std::vector<std::string> GetWebSecuritySubmodulesForException() const;

                    /**
                     * 设置Specifies the security protection submodule for the exception rule. Valid only when SkipScope is WebSecuritySubmodules. Valid values: <ul><li>ManagedRules module features: <ul><li>websec-mod-managed-rules/managed-rule-groups: rule set;</li><li>websec-mod-managed-rules/frequent-scanning-protection: high frequency scan protection;</li></ul></li><li>RateLimitingRules module features: <ul><li>websec-mod-rate-limiting-rules: rate limiting rule;</li></ul></li><li>CustomRules module features: <ul><li>websec-mod-custom-rules: custom rule;</li></ul></li><li>HttpDDoSProtection module features: <ul><li>websec-mod-HTTP-DDoS-protection/adaptive-frequency-control: adaptive frequency control;</li><li>websec-mod-HTTP-DDoS-protection/client-filtering: intelligent client filtering;</li><li>websec-mod-HTTP-DDoS-protection/bandwidth-abuse-defense: traffic fraud protection;</li></ul></li><li>BotManagement module features: <ul><li>websec-mod-Bot-management/basic-feature: basic feature management;</li><li>websec-mod-Bot-management/ip-reputation: client profile analysis;</li><li>websec-mod-Bot-management/Bot-intelligence: intelligent Bot analysis;</li><li>websec-mod-Bot-management/custom-rules: custom rule;</li><li>websec-mod-Bot-management/browser-impersonation-detection: proactive feature recognition;</li><li>websec-mod-Bot-management/client-attestation-rules: client authentication;</li></ul></li><li>BotManagementLite module features: <ul><li>websec-mod-Bot-management-lite/ai-crawler-detection: ai crawler disposal;</li><li>websec-mod-Bot-management-lite/captcha-page-challenge: captcha page challenge.</li></ul></li></ul>
                     * @param _webSecuritySubmodulesForException Specifies the security protection submodule for the exception rule. Valid only when SkipScope is WebSecuritySubmodules. Valid values: <ul><li>ManagedRules module features: <ul><li>websec-mod-managed-rules/managed-rule-groups: rule set;</li><li>websec-mod-managed-rules/frequent-scanning-protection: high frequency scan protection;</li></ul></li><li>RateLimitingRules module features: <ul><li>websec-mod-rate-limiting-rules: rate limiting rule;</li></ul></li><li>CustomRules module features: <ul><li>websec-mod-custom-rules: custom rule;</li></ul></li><li>HttpDDoSProtection module features: <ul><li>websec-mod-HTTP-DDoS-protection/adaptive-frequency-control: adaptive frequency control;</li><li>websec-mod-HTTP-DDoS-protection/client-filtering: intelligent client filtering;</li><li>websec-mod-HTTP-DDoS-protection/bandwidth-abuse-defense: traffic fraud protection;</li></ul></li><li>BotManagement module features: <ul><li>websec-mod-Bot-management/basic-feature: basic feature management;</li><li>websec-mod-Bot-management/ip-reputation: client profile analysis;</li><li>websec-mod-Bot-management/Bot-intelligence: intelligent Bot analysis;</li><li>websec-mod-Bot-management/custom-rules: custom rule;</li><li>websec-mod-Bot-management/browser-impersonation-detection: proactive feature recognition;</li><li>websec-mod-Bot-management/client-attestation-rules: client authentication;</li></ul></li><li>BotManagementLite module features: <ul><li>websec-mod-Bot-management-lite/ai-crawler-detection: ai crawler disposal;</li><li>websec-mod-Bot-management-lite/captcha-page-challenge: captcha page challenge.</li></ul></li></ul>
                     * 
                     */
                    void SetWebSecuritySubmodulesForException(const std::vector<std::string>& _webSecuritySubmodulesForException);

                    /**
                     * 判断参数 WebSecuritySubmodulesForException 是否已赋值
                     * @return WebSecuritySubmodulesForException 是否已赋值
                     * 
                     */
                    bool WebSecuritySubmodulesForExceptionHasBeenSet() const;

                    /**
                     * 获取Specify the specific managed rule for the exception rule. This parameter is valid only when SkipScope is ManagedRules.
                     * @return ManagedRulesForException Specify the specific managed rule for the exception rule. This parameter is valid only when SkipScope is ManagedRules.
                     * 
                     */
                    std::vector<std::string> GetManagedRulesForException() const;

                    /**
                     * 设置Specify the specific managed rule for the exception rule. This parameter is valid only when SkipScope is ManagedRules.
                     * @param _managedRulesForException Specify the specific managed rule for the exception rule. This parameter is valid only when SkipScope is ManagedRules.
                     * 
                     */
                    void SetManagedRulesForException(const std::vector<std::string>& _managedRulesForException);

                    /**
                     * 判断参数 ManagedRulesForException 是否已赋值
                     * @return ManagedRulesForException 是否已赋值
                     * 
                     */
                    bool ManagedRulesForExceptionHasBeenSet() const;

                    /**
                     * 获取Managed rule group with specified exception rules. This parameter is valid only when SkipScope is ManagedRuleGroups.
                     * @return ManagedRuleGroupsForException Managed rule group with specified exception rules. This parameter is valid only when SkipScope is ManagedRuleGroups.
                     * 
                     */
                    std::vector<std::string> GetManagedRuleGroupsForException() const;

                    /**
                     * 设置Managed rule group with specified exception rules. This parameter is valid only when SkipScope is ManagedRuleGroups.
                     * @param _managedRuleGroupsForException Managed rule group with specified exception rules. This parameter is valid only when SkipScope is ManagedRuleGroups.
                     * 
                     */
                    void SetManagedRuleGroupsForException(const std::vector<std::string>& _managedRuleGroupsForException);

                    /**
                     * 判断参数 ManagedRuleGroupsForException 是否已赋值
                     * @return ManagedRuleGroupsForException 是否已赋值
                     * 
                     */
                    bool ManagedRuleGroupsForExceptionHasBeenSet() const;

                    /**
                     * 获取Configuration for specifying exception rules to skip specified request fields. This is valid only when SkipScope is ManagedRules or ManagedRuleGroups and SkipOption is SkipOnSpecifiedRequestFields.
                     * @return RequestFieldsForException Configuration for specifying exception rules to skip specified request fields. This is valid only when SkipScope is ManagedRules or ManagedRuleGroups and SkipOption is SkipOnSpecifiedRequestFields.
                     * 
                     */
                    std::vector<RequestFieldsForException> GetRequestFieldsForException() const;

                    /**
                     * 设置Configuration for specifying exception rules to skip specified request fields. This is valid only when SkipScope is ManagedRules or ManagedRuleGroups and SkipOption is SkipOnSpecifiedRequestFields.
                     * @param _requestFieldsForException Configuration for specifying exception rules to skip specified request fields. This is valid only when SkipScope is ManagedRules or ManagedRuleGroups and SkipOption is SkipOnSpecifiedRequestFields.
                     * 
                     */
                    void SetRequestFieldsForException(const std::vector<RequestFieldsForException>& _requestFieldsForException);

                    /**
                     * 判断参数 RequestFieldsForException 是否已赋值
                     * @return RequestFieldsForException 是否已赋值
                     * 
                     */
                    bool RequestFieldsForExceptionHasBeenSet() const;

                    /**
                     * 获取Whether the exception rule is enabled. Valid values: <li>on: enabled</li><li>off: disabled</li>
                     * @return Enabled Whether the exception rule is enabled. Valid values: <li>on: enabled</li><li>off: disabled</li>
                     * 
                     */
                    std::string GetEnabled() const;

                    /**
                     * 设置Whether the exception rule is enabled. Valid values: <li>on: enabled</li><li>off: disabled</li>
                     * @param _enabled Whether the exception rule is enabled. Valid values: <li>on: enabled</li><li>off: disabled</li>
                     * 
                     */
                    void SetEnabled(const std::string& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                private:

                    /**
                     * ID of the exception rule.<br>Different rule configuration operations can be performed by rule ID:<br> <li> <b>Add</b> a new rule: leave the ID empty or do not specify the ID parameter;</li><li> <b>Modify</b> an existing rule: specify the rule ID to be updated/modified;</li><li> <b>Delete</b> an existing rule: existing rules not included in the Rules list in the ExceptionRules parameter will be deleted.</li>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Name of the exception rule.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Specific content of the exception rule must comply with the expression grammar. For detailed specifications, please refer to the product document.
                     */
                    std::string m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * Exception rule execution options. Valid values: <li>WebSecurityModules: assigns the security protection module for the exception rule. Use in conjunction with WebSecurityModulesForException.</li><li>WebSecuritySubmodules: assigns the security protection submodule for the exception rule. Use in conjunction with WebSecuritySubmodulesForException.</li><li>ManagedRules: assigns the specific managed rule for the exception rule. Use in conjunction with ManagedRulesForException.</li><li>ManagedRuleGroups: assigns the managed rule group for the exception rule. Use in conjunction with ManagedRuleGroupsForException.</li>
                     */
                    std::string m_skipScope;
                    bool m_skipScopeHasBeenSet;

                    /**
                     * Skip the specific type of request. Valid values: <li>SkipOnAllRequestFields: skip all requests;</li><li>SkipOnSpecifiedRequestFields: skip specified request fields.</li>Valid only when SkipScope is ManagedRules or ManagedRuleGroups.
                     */
                    std::string m_skipOption;
                    bool m_skipOptionHasBeenSet;

                    /**
                     * Security protection module for the exception rule. Valid only when SkipScope is WebSecurityModules. Valid values: <li>websec-mod-managed-rules: managed rule</li><li>websec-mod-rate-limiting: rate limit</li><li>websec-mod-custom-rules: custom rule</li><li>websec-mod-adaptive-control: adaptive frequency control, intelligent client filtering, slow attack protection, traffic theft protection</li><li>websec-mod-bot: bot management</li>
                     */
                    std::vector<std::string> m_webSecurityModulesForException;
                    bool m_webSecurityModulesForExceptionHasBeenSet;

                    /**
                     * Specifies the security protection submodule for the exception rule. Valid only when SkipScope is WebSecuritySubmodules. Valid values: <ul><li>ManagedRules module features: <ul><li>websec-mod-managed-rules/managed-rule-groups: rule set;</li><li>websec-mod-managed-rules/frequent-scanning-protection: high frequency scan protection;</li></ul></li><li>RateLimitingRules module features: <ul><li>websec-mod-rate-limiting-rules: rate limiting rule;</li></ul></li><li>CustomRules module features: <ul><li>websec-mod-custom-rules: custom rule;</li></ul></li><li>HttpDDoSProtection module features: <ul><li>websec-mod-HTTP-DDoS-protection/adaptive-frequency-control: adaptive frequency control;</li><li>websec-mod-HTTP-DDoS-protection/client-filtering: intelligent client filtering;</li><li>websec-mod-HTTP-DDoS-protection/bandwidth-abuse-defense: traffic fraud protection;</li></ul></li><li>BotManagement module features: <ul><li>websec-mod-Bot-management/basic-feature: basic feature management;</li><li>websec-mod-Bot-management/ip-reputation: client profile analysis;</li><li>websec-mod-Bot-management/Bot-intelligence: intelligent Bot analysis;</li><li>websec-mod-Bot-management/custom-rules: custom rule;</li><li>websec-mod-Bot-management/browser-impersonation-detection: proactive feature recognition;</li><li>websec-mod-Bot-management/client-attestation-rules: client authentication;</li></ul></li><li>BotManagementLite module features: <ul><li>websec-mod-Bot-management-lite/ai-crawler-detection: ai crawler disposal;</li><li>websec-mod-Bot-management-lite/captcha-page-challenge: captcha page challenge.</li></ul></li></ul>
                     */
                    std::vector<std::string> m_webSecuritySubmodulesForException;
                    bool m_webSecuritySubmodulesForExceptionHasBeenSet;

                    /**
                     * Specify the specific managed rule for the exception rule. This parameter is valid only when SkipScope is ManagedRules.
                     */
                    std::vector<std::string> m_managedRulesForException;
                    bool m_managedRulesForExceptionHasBeenSet;

                    /**
                     * Managed rule group with specified exception rules. This parameter is valid only when SkipScope is ManagedRuleGroups.
                     */
                    std::vector<std::string> m_managedRuleGroupsForException;
                    bool m_managedRuleGroupsForExceptionHasBeenSet;

                    /**
                     * Configuration for specifying exception rules to skip specified request fields. This is valid only when SkipScope is ManagedRules or ManagedRuleGroups and SkipOption is SkipOnSpecifiedRequestFields.
                     */
                    std::vector<RequestFieldsForException> m_requestFieldsForException;
                    bool m_requestFieldsForExceptionHasBeenSet;

                    /**
                     * Whether the exception rule is enabled. Valid values: <li>on: enabled</li><li>off: disabled</li>
                     */
                    std::string m_enabled;
                    bool m_enabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_EXCEPTIONRULE_H_
