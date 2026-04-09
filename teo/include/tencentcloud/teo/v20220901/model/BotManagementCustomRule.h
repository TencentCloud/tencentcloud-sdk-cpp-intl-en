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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_BOTMANAGEMENTCUSTOMRULE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_BOTMANAGEMENTCUSTOMRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/SecurityWeightedAction.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Web security Bot custom rule.
                */
                class BotManagementCustomRule : public AbstractModel
                {
                public:
                    BotManagementCustomRule();
                    ~BotManagementCustomRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The ID of a Bot custom rule. different rule configuration operations are supported by rule ID: <li><b>add</b> a new rule: leave the ID empty or do not specify the ID parameter.</li> <li><b>modify</b> an existing rule: specify the rule ID that needs to be updated/modified.</li> <li><b>delete</b> an existing rule: existing Rules not included in the Rules list under the BotManagementCustomRules parameter will be deleted.</li>.
                     * @return Id The ID of a Bot custom rule. different rule configuration operations are supported by rule ID: <li><b>add</b> a new rule: leave the ID empty or do not specify the ID parameter.</li> <li><b>modify</b> an existing rule: specify the rule ID that needs to be updated/modified.</li> <li><b>delete</b> an existing rule: existing Rules not included in the Rules list under the BotManagementCustomRules parameter will be deleted.</li>.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置The ID of a Bot custom rule. different rule configuration operations are supported by rule ID: <li><b>add</b> a new rule: leave the ID empty or do not specify the ID parameter.</li> <li><b>modify</b> an existing rule: specify the rule ID that needs to be updated/modified.</li> <li><b>delete</b> an existing rule: existing Rules not included in the Rules list under the BotManagementCustomRules parameter will be deleted.</li>.
                     * @param _id The ID of a Bot custom rule. different rule configuration operations are supported by rule ID: <li><b>add</b> a new rule: leave the ID empty or do not specify the ID parameter.</li> <li><b>modify</b> an existing rule: specify the rule ID that needs to be updated/modified.</li> <li><b>delete</b> an existing rule: existing Rules not included in the Rules list under the BotManagementCustomRules parameter will be deleted.</li>.
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
                     * 获取Specifies the name of the Bot custom rule.
                     * @return Name Specifies the name of the Bot custom rule.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Specifies the name of the Bot custom rule.
                     * @param _name Specifies the name of the Bot custom rule.
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
                     * 获取Whether the custom Bot rule is enabled. valid values: <li>on: enabled;</li><li>off: disabled.</li>.
                     * @return Enabled Whether the custom Bot rule is enabled. valid values: <li>on: enabled;</li><li>off: disabled.</li>.
                     * 
                     */
                    std::string GetEnabled() const;

                    /**
                     * 设置Whether the custom Bot rule is enabled. valid values: <li>on: enabled;</li><li>off: disabled.</li>.
                     * @param _enabled Whether the custom Bot rule is enabled. valid values: <li>on: enabled;</li><li>off: disabled.</li>.
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
                     * 获取Priority of custom Bot rules. value range: 1–100. default value is 50.
                     * @return Priority Priority of custom Bot rules. value range: 1–100. default value is 50.
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置Priority of custom Bot rules. value range: 1–100. default value is 50.
                     * @param _priority Priority of custom Bot rules. value range: 1–100. default value is 50.
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
                     * 获取Specifies the specific content of the Bot custom rule, which must comply with expression grammar. for detailed specifications, refer to the product document.
                     * @return Condition Specifies the specific content of the Bot custom rule, which must comply with expression grammar. for detailed specifications, refer to the product document.
                     * 
                     */
                    std::string GetCondition() const;

                    /**
                     * 设置Specifies the specific content of the Bot custom rule, which must comply with expression grammar. for detailed specifications, refer to the product document.
                     * @param _condition Specifies the specific content of the Bot custom rule, which must comply with expression grammar. for detailed specifications, refer to the product document.
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
                     * 获取The handling method for Bot custom rules. valid values: <li>Monitor: observation;</li><li>Deny: block, where DenyActionParameters.Name supports Deny and ReturnCustomPage;</li><li>Challenge: Challenge, where ChallengeActionParameters.Name supports JSChallenge and ManagedChallenge;</li><li>Redirect: Redirect to URL.</li>.
                     * @return Action The handling method for Bot custom rules. valid values: <li>Monitor: observation;</li><li>Deny: block, where DenyActionParameters.Name supports Deny and ReturnCustomPage;</li><li>Challenge: Challenge, where ChallengeActionParameters.Name supports JSChallenge and ManagedChallenge;</li><li>Redirect: Redirect to URL.</li>.
                     * 
                     */
                    std::vector<SecurityWeightedAction> GetAction() const;

                    /**
                     * 设置The handling method for Bot custom rules. valid values: <li>Monitor: observation;</li><li>Deny: block, where DenyActionParameters.Name supports Deny and ReturnCustomPage;</li><li>Challenge: Challenge, where ChallengeActionParameters.Name supports JSChallenge and ManagedChallenge;</li><li>Redirect: Redirect to URL.</li>.
                     * @param _action The handling method for Bot custom rules. valid values: <li>Monitor: observation;</li><li>Deny: block, where DenyActionParameters.Name supports Deny and ReturnCustomPage;</li><li>Challenge: Challenge, where ChallengeActionParameters.Name supports JSChallenge and ManagedChallenge;</li><li>Redirect: Redirect to URL.</li>.
                     * 
                     */
                    void SetAction(const std::vector<SecurityWeightedAction>& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                private:

                    /**
                     * The ID of a Bot custom rule. different rule configuration operations are supported by rule ID: <li><b>add</b> a new rule: leave the ID empty or do not specify the ID parameter.</li> <li><b>modify</b> an existing rule: specify the rule ID that needs to be updated/modified.</li> <li><b>delete</b> an existing rule: existing Rules not included in the Rules list under the BotManagementCustomRules parameter will be deleted.</li>.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Specifies the name of the Bot custom rule.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Whether the custom Bot rule is enabled. valid values: <li>on: enabled;</li><li>off: disabled.</li>.
                     */
                    std::string m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * Priority of custom Bot rules. value range: 1–100. default value is 50.
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * Specifies the specific content of the Bot custom rule, which must comply with expression grammar. for detailed specifications, refer to the product document.
                     */
                    std::string m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * The handling method for Bot custom rules. valid values: <li>Monitor: observation;</li><li>Deny: block, where DenyActionParameters.Name supports Deny and ReturnCustomPage;</li><li>Challenge: Challenge, where ChallengeActionParameters.Name supports JSChallenge and ManagedChallenge;</li><li>Redirect: Redirect to URL.</li>.
                     */
                    std::vector<SecurityWeightedAction> m_action;
                    bool m_actionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_BOTMANAGEMENTCUSTOMRULE_H_
