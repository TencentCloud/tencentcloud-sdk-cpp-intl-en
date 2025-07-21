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
                * Web security exception rule.
                */
                class ExceptionRule : public AbstractModel
                {
                public:
                    ExceptionRule();
                    ~ExceptionRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The ID of the exception rule. different rule configuration operations are supported by rule ID: <li> <b>add</b> a new rule: leave the ID empty or do not specify the ID parameter.</li> <li> <b>modify</b> an existing rule: specify the rule ID that needs to be updated/modified.</li> <li> <b>delete</b> an existing rule: existing Rules not included in the Rules list under the ExceptionRules parameter will be deleted.</li>.
                     * @return Id The ID of the exception rule. different rule configuration operations are supported by rule ID: <li> <b>add</b> a new rule: leave the ID empty or do not specify the ID parameter.</li> <li> <b>modify</b> an existing rule: specify the rule ID that needs to be updated/modified.</li> <li> <b>delete</b> an existing rule: existing Rules not included in the Rules list under the ExceptionRules parameter will be deleted.</li>.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置The ID of the exception rule. different rule configuration operations are supported by rule ID: <li> <b>add</b> a new rule: leave the ID empty or do not specify the ID parameter.</li> <li> <b>modify</b> an existing rule: specify the rule ID that needs to be updated/modified.</li> <li> <b>delete</b> an existing rule: existing Rules not included in the Rules list under the ExceptionRules parameter will be deleted.</li>.
                     * @param _id The ID of the exception rule. different rule configuration operations are supported by rule ID: <li> <b>add</b> a new rule: leave the ID empty or do not specify the ID parameter.</li> <li> <b>modify</b> an existing rule: specify the rule ID that needs to be updated/modified.</li> <li> <b>delete</b> an existing rule: existing Rules not included in the Rules list under the ExceptionRules parameter will be deleted.</li>.
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
                     * 获取The name of the exception rule.
                     * @return Name The name of the exception rule.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置The name of the exception rule.
                     * @param _name The name of the exception rule.
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
                     * 获取Describes the specific content of the exception rule, which must comply with the expression grammar. for details, please refer to the product document.
                     * @return Condition Describes the specific content of the exception rule, which must comply with the expression grammar. for details, please refer to the product document.
                     * 
                     */
                    std::string GetCondition() const;

                    /**
                     * 设置Describes the specific content of the exception rule, which must comply with the expression grammar. for details, please refer to the product document.
                     * @param _condition Describes the specific content of the exception rule, which must comply with the expression grammar. for details, please refer to the product document.
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
                     * 获取Exception rule execution options, valid values: <li>WebSecurityModules: designate the security protection module for the exception rule.</li> <li>ManagedRules: designate the managed rule.</li>.
                     * @return SkipScope Exception rule execution options, valid values: <li>WebSecurityModules: designate the security protection module for the exception rule.</li> <li>ManagedRules: designate the managed rule.</li>.
                     * 
                     */
                    std::string GetSkipScope() const;

                    /**
                     * 设置Exception rule execution options, valid values: <li>WebSecurityModules: designate the security protection module for the exception rule.</li> <li>ManagedRules: designate the managed rule.</li>.
                     * @param _skipScope Exception rule execution options, valid values: <li>WebSecurityModules: designate the security protection module for the exception rule.</li> <li>ManagedRules: designate the managed rule.</li>.
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
                     * 获取Skip the specific type of request. valid values: <li>SkipOnAllRequestFields: skip all requests;</li> <li>SkipOnSpecifiedRequestFields: skip specified request fields.</li> valid only when SkipScope is ManagedRules.
                     * @return SkipOption Skip the specific type of request. valid values: <li>SkipOnAllRequestFields: skip all requests;</li> <li>SkipOnSpecifiedRequestFields: skip specified request fields.</li> valid only when SkipScope is ManagedRules.
                     * 
                     */
                    std::string GetSkipOption() const;

                    /**
                     * 设置Skip the specific type of request. valid values: <li>SkipOnAllRequestFields: skip all requests;</li> <li>SkipOnSpecifiedRequestFields: skip specified request fields.</li> valid only when SkipScope is ManagedRules.
                     * @param _skipOption Skip the specific type of request. valid values: <li>SkipOnAllRequestFields: skip all requests;</li> <li>SkipOnSpecifiedRequestFields: skip specified request fields.</li> valid only when SkipScope is ManagedRules.
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
                     * 获取Specifies the security protection module for exception rules. valid only when SkipScope is WebSecurityModules. valid values: <li>websec-mod-managed-rules: managed rule.</li><li>websec-mod-rate-limiting: rate limit.</li><li>websec-mod-custom-rules: custom rule.</li><li>websec-mod-adaptive-control: adaptive frequency control, intelligent client filtering, slow attack protection, traffic theft protection.</li><li>websec-mod-bot: bot management.</li>.
                     * @return WebSecurityModulesForException Specifies the security protection module for exception rules. valid only when SkipScope is WebSecurityModules. valid values: <li>websec-mod-managed-rules: managed rule.</li><li>websec-mod-rate-limiting: rate limit.</li><li>websec-mod-custom-rules: custom rule.</li><li>websec-mod-adaptive-control: adaptive frequency control, intelligent client filtering, slow attack protection, traffic theft protection.</li><li>websec-mod-bot: bot management.</li>.
                     * 
                     */
                    std::vector<std::string> GetWebSecurityModulesForException() const;

                    /**
                     * 设置Specifies the security protection module for exception rules. valid only when SkipScope is WebSecurityModules. valid values: <li>websec-mod-managed-rules: managed rule.</li><li>websec-mod-rate-limiting: rate limit.</li><li>websec-mod-custom-rules: custom rule.</li><li>websec-mod-adaptive-control: adaptive frequency control, intelligent client filtering, slow attack protection, traffic theft protection.</li><li>websec-mod-bot: bot management.</li>.
                     * @param _webSecurityModulesForException Specifies the security protection module for exception rules. valid only when SkipScope is WebSecurityModules. valid values: <li>websec-mod-managed-rules: managed rule.</li><li>websec-mod-rate-limiting: rate limit.</li><li>websec-mod-custom-rules: custom rule.</li><li>websec-mod-adaptive-control: adaptive frequency control, intelligent client filtering, slow attack protection, traffic theft protection.</li><li>websec-mod-bot: bot management.</li>.
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
                     * 获取Specifies the managed rule for the exception rule. valid only when SkipScope is ManagedRules. cannot specify ManagedRuleGroupsForException at this time.
                     * @return ManagedRulesForException Specifies the managed rule for the exception rule. valid only when SkipScope is ManagedRules. cannot specify ManagedRuleGroupsForException at this time.
                     * 
                     */
                    std::vector<std::string> GetManagedRulesForException() const;

                    /**
                     * 设置Specifies the managed rule for the exception rule. valid only when SkipScope is ManagedRules. cannot specify ManagedRuleGroupsForException at this time.
                     * @param _managedRulesForException Specifies the managed rule for the exception rule. valid only when SkipScope is ManagedRules. cannot specify ManagedRuleGroupsForException at this time.
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
                     * 获取A managed rule group with designated exception rules is valid only when SkipScope is ManagedRules, and at this point you cannot specify ManagedRulesForException.
                     * @return ManagedRuleGroupsForException A managed rule group with designated exception rules is valid only when SkipScope is ManagedRules, and at this point you cannot specify ManagedRulesForException.
                     * 
                     */
                    std::vector<std::string> GetManagedRuleGroupsForException() const;

                    /**
                     * 设置A managed rule group with designated exception rules is valid only when SkipScope is ManagedRules, and at this point you cannot specify ManagedRulesForException.
                     * @param _managedRuleGroupsForException A managed rule group with designated exception rules is valid only when SkipScope is ManagedRules, and at this point you cannot specify ManagedRulesForException.
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
                     * 获取Specify exception rules to skip request fields. valid only when SkipScope is ManagedRules and SkipOption is SkipOnSpecifiedRequestFields.
                     * @return RequestFieldsForException Specify exception rules to skip request fields. valid only when SkipScope is ManagedRules and SkipOption is SkipOnSpecifiedRequestFields.
                     * 
                     */
                    std::vector<RequestFieldsForException> GetRequestFieldsForException() const;

                    /**
                     * 设置Specify exception rules to skip request fields. valid only when SkipScope is ManagedRules and SkipOption is SkipOnSpecifiedRequestFields.
                     * @param _requestFieldsForException Specify exception rules to skip request fields. valid only when SkipScope is ManagedRules and SkipOption is SkipOnSpecifiedRequestFields.
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
                     * 获取Whether the exception rule is enabled. valid values: <li>`on`: enable</li> <li>`off`: disable</li>.
                     * @return Enabled Whether the exception rule is enabled. valid values: <li>`on`: enable</li> <li>`off`: disable</li>.
                     * 
                     */
                    std::string GetEnabled() const;

                    /**
                     * 设置Whether the exception rule is enabled. valid values: <li>`on`: enable</li> <li>`off`: disable</li>.
                     * @param _enabled Whether the exception rule is enabled. valid values: <li>`on`: enable</li> <li>`off`: disable</li>.
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
                     * The ID of the exception rule. different rule configuration operations are supported by rule ID: <li> <b>add</b> a new rule: leave the ID empty or do not specify the ID parameter.</li> <li> <b>modify</b> an existing rule: specify the rule ID that needs to be updated/modified.</li> <li> <b>delete</b> an existing rule: existing Rules not included in the Rules list under the ExceptionRules parameter will be deleted.</li>.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * The name of the exception rule.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Describes the specific content of the exception rule, which must comply with the expression grammar. for details, please refer to the product document.
                     */
                    std::string m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * Exception rule execution options, valid values: <li>WebSecurityModules: designate the security protection module for the exception rule.</li> <li>ManagedRules: designate the managed rule.</li>.
                     */
                    std::string m_skipScope;
                    bool m_skipScopeHasBeenSet;

                    /**
                     * Skip the specific type of request. valid values: <li>SkipOnAllRequestFields: skip all requests;</li> <li>SkipOnSpecifiedRequestFields: skip specified request fields.</li> valid only when SkipScope is ManagedRules.
                     */
                    std::string m_skipOption;
                    bool m_skipOptionHasBeenSet;

                    /**
                     * Specifies the security protection module for exception rules. valid only when SkipScope is WebSecurityModules. valid values: <li>websec-mod-managed-rules: managed rule.</li><li>websec-mod-rate-limiting: rate limit.</li><li>websec-mod-custom-rules: custom rule.</li><li>websec-mod-adaptive-control: adaptive frequency control, intelligent client filtering, slow attack protection, traffic theft protection.</li><li>websec-mod-bot: bot management.</li>.
                     */
                    std::vector<std::string> m_webSecurityModulesForException;
                    bool m_webSecurityModulesForExceptionHasBeenSet;

                    /**
                     * Specifies the managed rule for the exception rule. valid only when SkipScope is ManagedRules. cannot specify ManagedRuleGroupsForException at this time.
                     */
                    std::vector<std::string> m_managedRulesForException;
                    bool m_managedRulesForExceptionHasBeenSet;

                    /**
                     * A managed rule group with designated exception rules is valid only when SkipScope is ManagedRules, and at this point you cannot specify ManagedRulesForException.
                     */
                    std::vector<std::string> m_managedRuleGroupsForException;
                    bool m_managedRuleGroupsForExceptionHasBeenSet;

                    /**
                     * Specify exception rules to skip request fields. valid only when SkipScope is ManagedRules and SkipOption is SkipOnSpecifiedRequestFields.
                     */
                    std::vector<RequestFieldsForException> m_requestFieldsForException;
                    bool m_requestFieldsForExceptionHasBeenSet;

                    /**
                     * Whether the exception rule is enabled. valid values: <li>`on`: enable</li> <li>`off`: disable</li>.
                     */
                    std::string m_enabled;
                    bool m_enabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_EXCEPTIONRULE_H_
