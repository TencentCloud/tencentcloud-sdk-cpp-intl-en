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
                * Custom rule configuration.
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
                     * 获取The specifics of the custom rule, must comply with the expression grammar, please refer to product documentation for details.
                     * @return Condition The specifics of the custom rule, must comply with the expression grammar, please refer to product documentation for details.
                     * 
                     */
                    std::string GetCondition() const;

                    /**
                     * 设置The specifics of the custom rule, must comply with the expression grammar, please refer to product documentation for details.
                     * @param _condition The specifics of the custom rule, must comply with the expression grammar, please refer to product documentation for details.
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
                     * 获取Action for custom rules. The Name parameter of SecurityAction supports: <li>`Deny`: block;</li> <li>`Monitor`: observe;</li> <li>`ReturnCustomPage`: block with customized page;</li> <li>`Redirect`: Redirect to URL;</li> <li>`BlockIP`: IP blocking;</li> <li>`JSChallenge`: JavaScript challenge;</li> <li>`ManagedChallenge`: managed challenge;</li> <li>`Allow`: Allow.</li>.
                     * @return Action Action for custom rules. The Name parameter of SecurityAction supports: <li>`Deny`: block;</li> <li>`Monitor`: observe;</li> <li>`ReturnCustomPage`: block with customized page;</li> <li>`Redirect`: Redirect to URL;</li> <li>`BlockIP`: IP blocking;</li> <li>`JSChallenge`: JavaScript challenge;</li> <li>`ManagedChallenge`: managed challenge;</li> <li>`Allow`: Allow.</li>.
                     * 
                     */
                    SecurityAction GetAction() const;

                    /**
                     * 设置Action for custom rules. The Name parameter of SecurityAction supports: <li>`Deny`: block;</li> <li>`Monitor`: observe;</li> <li>`ReturnCustomPage`: block with customized page;</li> <li>`Redirect`: Redirect to URL;</li> <li>`BlockIP`: IP blocking;</li> <li>`JSChallenge`: JavaScript challenge;</li> <li>`ManagedChallenge`: managed challenge;</li> <li>`Allow`: Allow.</li>.
                     * @param _action Action for custom rules. The Name parameter of SecurityAction supports: <li>`Deny`: block;</li> <li>`Monitor`: observe;</li> <li>`ReturnCustomPage`: block with customized page;</li> <li>`Redirect`: Redirect to URL;</li> <li>`BlockIP`: IP blocking;</li> <li>`JSChallenge`: JavaScript challenge;</li> <li>`ManagedChallenge`: managed challenge;</li> <li>`Allow`: Allow.</li>.
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
                     * 获取The custom rule status. Values: <li>`on`: enabled</li> <li>`off`: disabled</li>.
                     * @return Enabled The custom rule status. Values: <li>`on`: enabled</li> <li>`off`: disabled</li>.
                     * 
                     */
                    std::string GetEnabled() const;

                    /**
                     * 设置The custom rule status. Values: <li>`on`: enabled</li> <li>`off`: disabled</li>.
                     * @param _enabled The custom rule status. Values: <li>`on`: enabled</li> <li>`off`: disabled</li>.
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
                     * 获取Custom rule ID. <br>Different rule configuration operations are supported by rule ID : <br> - Add a new rule: ID is empty or the ID parameter is not specified; <br> - Modify an existing rule: specify the rule ID that needs to be updated/modified; <br> - Delete an existing rule: existing rules not included in the Rules parameter will be deleted.
                     * @return Id Custom rule ID. <br>Different rule configuration operations are supported by rule ID : <br> - Add a new rule: ID is empty or the ID parameter is not specified; <br> - Modify an existing rule: specify the rule ID that needs to be updated/modified; <br> - Delete an existing rule: existing rules not included in the Rules parameter will be deleted.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Custom rule ID. <br>Different rule configuration operations are supported by rule ID : <br> - Add a new rule: ID is empty or the ID parameter is not specified; <br> - Modify an existing rule: specify the rule ID that needs to be updated/modified; <br> - Delete an existing rule: existing rules not included in the Rules parameter will be deleted.
                     * @param _id Custom rule ID. <br>Different rule configuration operations are supported by rule ID : <br> - Add a new rule: ID is empty or the ID parameter is not specified; <br> - Modify an existing rule: specify the rule ID that needs to be updated/modified; <br> - Delete an existing rule: existing rules not included in the Rules parameter will be deleted.
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
                     * 获取Type of custom rule. Values: <li>`BasicAccessRule`: basic access control;</li> <li>`PreciseMatchRule`: exact custom rule, default;</li> <li>`ManagedAccessRule`: expert customized rule, output parameter only.</li>The default value is PreciseMatchRule.
                     * @return RuleType Type of custom rule. Values: <li>`BasicAccessRule`: basic access control;</li> <li>`PreciseMatchRule`: exact custom rule, default;</li> <li>`ManagedAccessRule`: expert customized rule, output parameter only.</li>The default value is PreciseMatchRule.
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置Type of custom rule. Values: <li>`BasicAccessRule`: basic access control;</li> <li>`PreciseMatchRule`: exact custom rule, default;</li> <li>`ManagedAccessRule`: expert customized rule, output parameter only.</li>The default value is PreciseMatchRule.
                     * @param _ruleType Type of custom rule. Values: <li>`BasicAccessRule`: basic access control;</li> <li>`PreciseMatchRule`: exact custom rule, default;</li> <li>`ManagedAccessRule`: expert customized rule, output parameter only.</li>The default value is PreciseMatchRule.
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
                     * 获取Customize the priority of custom rule. Range: 0-100, the default value is 0, this parameter only supports PreciseMatchRule.
                     * @return Priority Customize the priority of custom rule. Range: 0-100, the default value is 0, this parameter only supports PreciseMatchRule.
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置Customize the priority of custom rule. Range: 0-100, the default value is 0, this parameter only supports PreciseMatchRule.
                     * @param _priority Customize the priority of custom rule. Range: 0-100, the default value is 0, this parameter only supports PreciseMatchRule.
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
                     * The specifics of the custom rule, must comply with the expression grammar, please refer to product documentation for details.
                     */
                    std::string m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * Action for custom rules. The Name parameter of SecurityAction supports: <li>`Deny`: block;</li> <li>`Monitor`: observe;</li> <li>`ReturnCustomPage`: block with customized page;</li> <li>`Redirect`: Redirect to URL;</li> <li>`BlockIP`: IP blocking;</li> <li>`JSChallenge`: JavaScript challenge;</li> <li>`ManagedChallenge`: managed challenge;</li> <li>`Allow`: Allow.</li>.
                     */
                    SecurityAction m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * The custom rule status. Values: <li>`on`: enabled</li> <li>`off`: disabled</li>.
                     */
                    std::string m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * Custom rule ID. <br>Different rule configuration operations are supported by rule ID : <br> - Add a new rule: ID is empty or the ID parameter is not specified; <br> - Modify an existing rule: specify the rule ID that needs to be updated/modified; <br> - Delete an existing rule: existing rules not included in the Rules parameter will be deleted.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Type of custom rule. Values: <li>`BasicAccessRule`: basic access control;</li> <li>`PreciseMatchRule`: exact custom rule, default;</li> <li>`ManagedAccessRule`: expert customized rule, output parameter only.</li>The default value is PreciseMatchRule.
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * Customize the priority of custom rule. Range: 0-100, the default value is 0, this parameter only supports PreciseMatchRule.
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMRULE_H_
