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
                     * 获取The custom rule name.
                     * @return Name The custom rule name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置The custom rule name.
                     * @param _name The custom rule name.
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
                     * 获取The specific content of custom rules must comply with expression grammar. For detailed specifications, please refer to the product document (https://www.tencentcloud.com/document/product/1552/125343?from_cn_redirect=1).
                     * @return Condition The specific content of custom rules must comply with expression grammar. For detailed specifications, please refer to the product document (https://www.tencentcloud.com/document/product/1552/125343?from_cn_redirect=1).
                     * 
                     */
                    std::string GetCondition() const;

                    /**
                     * 设置The specific content of custom rules must comply with expression grammar. For detailed specifications, please refer to the product document (https://www.tencentcloud.com/document/product/1552/125343?from_cn_redirect=1).
                     * @param _condition The specific content of custom rules must comply with expression grammar. For detailed specifications, please refer to the product document (https://www.tencentcloud.com/document/product/1552/125343?from_cn_redirect=1).
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
                     * 获取The handling action of custom rules. The value range of SecurityAction.Name is as follows:<ul><li>Deny: blocking;</li><li>Monitor: observation;</li><li>ReturnCustomPage: use specified page to block;</li><li>Redirect: redirect to URL;</li><li>BlockIP: IP blocking;</li><li>JSChallenge: JavaScript challenge;</li><li>ManagedChallenge: managed challenge;</li><li>Allow: allowing.</li></ul>
                     * @return Action The handling action of custom rules. The value range of SecurityAction.Name is as follows:<ul><li>Deny: blocking;</li><li>Monitor: observation;</li><li>ReturnCustomPage: use specified page to block;</li><li>Redirect: redirect to URL;</li><li>BlockIP: IP blocking;</li><li>JSChallenge: JavaScript challenge;</li><li>ManagedChallenge: managed challenge;</li><li>Allow: allowing.</li></ul>
                     * 
                     */
                    SecurityAction GetAction() const;

                    /**
                     * 设置The handling action of custom rules. The value range of SecurityAction.Name is as follows:<ul><li>Deny: blocking;</li><li>Monitor: observation;</li><li>ReturnCustomPage: use specified page to block;</li><li>Redirect: redirect to URL;</li><li>BlockIP: IP blocking;</li><li>JSChallenge: JavaScript challenge;</li><li>ManagedChallenge: managed challenge;</li><li>Allow: allowing.</li></ul>
                     * @param _action The handling action of custom rules. The value range of SecurityAction.Name is as follows:<ul><li>Deny: blocking;</li><li>Monitor: observation;</li><li>ReturnCustomPage: use specified page to block;</li><li>Redirect: redirect to URL;</li><li>BlockIP: IP blocking;</li><li>JSChallenge: JavaScript challenge;</li><li>ManagedChallenge: managed challenge;</li><li>Allow: allowing.</li></ul>
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
                     * 获取Whether the custom rule is enabled. Valid values: <ul><li>on: enable</li><li>off: disable</li></ul>
                     * @return Enabled Whether the custom rule is enabled. Valid values: <ul><li>on: enable</li><li>off: disable</li></ul>
                     * 
                     */
                    std::string GetEnabled() const;

                    /**
                     * 设置Whether the custom rule is enabled. Valid values: <ul><li>on: enable</li><li>off: disable</li></ul>
                     * @param _enabled Whether the custom rule is enabled. Valid values: <ul><li>on: enable</li><li>off: disable</li></ul>
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
                     * 获取ID of the custom rule. Different rule configuration operations are supported by rule ID:<ul><li>Add a new rule: The ID is empty or the ID parameter is not specified.</li><li>Modify an existing rule: Specify the rule ID that needs to be updated or modified.</li><li>Delete an existing rule: Existing rules not included in the Rules list in the CustomRules parameter will be deleted.</li></ul>
                     * @return Id ID of the custom rule. Different rule configuration operations are supported by rule ID:<ul><li>Add a new rule: The ID is empty or the ID parameter is not specified.</li><li>Modify an existing rule: Specify the rule ID that needs to be updated or modified.</li><li>Delete an existing rule: Existing rules not included in the Rules list in the CustomRules parameter will be deleted.</li></ul>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置ID of the custom rule. Different rule configuration operations are supported by rule ID:<ul><li>Add a new rule: The ID is empty or the ID parameter is not specified.</li><li>Modify an existing rule: Specify the rule ID that needs to be updated or modified.</li><li>Delete an existing rule: Existing rules not included in the Rules list in the CustomRules parameter will be deleted.</li></ul>
                     * @param _id ID of the custom rule. Different rule configuration operations are supported by rule ID:<ul><li>Add a new rule: The ID is empty or the ID parameter is not specified.</li><li>Modify an existing rule: Specify the rule ID that needs to be updated or modified.</li><li>Delete an existing rule: Existing rules not included in the Rules list in the CustomRules parameter will be deleted.</li></ul>
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
                     * 获取Type of custom rule. Valid values: <ul><li>BasicAccessRule: basic access control;</li><li>PreciseMatchRule: exact matching rule;</li><li>ManagedAccessRule: expert customized rule, only supported in output parameters.</li></ul>Description: When RuleType is not specified, it defaults to `PreciseMatchRule`.
                     * @return RuleType Type of custom rule. Valid values: <ul><li>BasicAccessRule: basic access control;</li><li>PreciseMatchRule: exact matching rule;</li><li>ManagedAccessRule: expert customized rule, only supported in output parameters.</li></ul>Description: When RuleType is not specified, it defaults to `PreciseMatchRule`.
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置Type of custom rule. Valid values: <ul><li>BasicAccessRule: basic access control;</li><li>PreciseMatchRule: exact matching rule;</li><li>ManagedAccessRule: expert customized rule, only supported in output parameters.</li></ul>Description: When RuleType is not specified, it defaults to `PreciseMatchRule`.
                     * @param _ruleType Type of custom rule. Valid values: <ul><li>BasicAccessRule: basic access control;</li><li>PreciseMatchRule: exact matching rule;</li><li>ManagedAccessRule: expert customized rule, only supported in output parameters.</li></ul>Description: When RuleType is not specified, it defaults to `PreciseMatchRule`.
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
                     * 获取Priority of custom rules, ranging from 0 to 100, defaults to 0, and only supports exact matching rules (`PreciseMatchRule`).
                     * @return Priority Priority of custom rules, ranging from 0 to 100, defaults to 0, and only supports exact matching rules (`PreciseMatchRule`).
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置Priority of custom rules, ranging from 0 to 100, defaults to 0, and only supports exact matching rules (`PreciseMatchRule`).
                     * @param _priority Priority of custom rules, ranging from 0 to 100, defaults to 0, and only supports exact matching rules (`PreciseMatchRule`).
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
                     * The custom rule name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * The specific content of custom rules must comply with expression grammar. For detailed specifications, please refer to the product document (https://www.tencentcloud.com/document/product/1552/125343?from_cn_redirect=1).
                     */
                    std::string m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * The handling action of custom rules. The value range of SecurityAction.Name is as follows:<ul><li>Deny: blocking;</li><li>Monitor: observation;</li><li>ReturnCustomPage: use specified page to block;</li><li>Redirect: redirect to URL;</li><li>BlockIP: IP blocking;</li><li>JSChallenge: JavaScript challenge;</li><li>ManagedChallenge: managed challenge;</li><li>Allow: allowing.</li></ul>
                     */
                    SecurityAction m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Whether the custom rule is enabled. Valid values: <ul><li>on: enable</li><li>off: disable</li></ul>
                     */
                    std::string m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * ID of the custom rule. Different rule configuration operations are supported by rule ID:<ul><li>Add a new rule: The ID is empty or the ID parameter is not specified.</li><li>Modify an existing rule: Specify the rule ID that needs to be updated or modified.</li><li>Delete an existing rule: Existing rules not included in the Rules list in the CustomRules parameter will be deleted.</li></ul>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Type of custom rule. Valid values: <ul><li>BasicAccessRule: basic access control;</li><li>PreciseMatchRule: exact matching rule;</li><li>ManagedAccessRule: expert customized rule, only supported in output parameters.</li></ul>Description: When RuleType is not specified, it defaults to `PreciseMatchRule`.
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * Priority of custom rules, ranging from 0 to 100, defaults to 0, and only supports exact matching rules (`PreciseMatchRule`).
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMRULE_H_
