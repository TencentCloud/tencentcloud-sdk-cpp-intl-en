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
                * Custom Bot rules for Web security.
                */
                class BotManagementCustomRule : public AbstractModel
                {
                public:
                    BotManagementCustomRule();
                    ~BotManagementCustomRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>ID of the bot custom rule.<br>Different rule configuration operations are supported via the rule ID:<br> <li> <b>Add</b> a new rule: leave the ID empty or do not specify the ID parameter;</li><li><b>Modify</b> an existing rule: specify the rule ID that needs to be updated/modified;</li><li><b>Delete</b> an existing rule: existing rules not included in the Rules list in the BotManagementCustomRules parameter will be deleted.</li></p>
                     * @return Id <p>ID of the bot custom rule.<br>Different rule configuration operations are supported via the rule ID:<br> <li> <b>Add</b> a new rule: leave the ID empty or do not specify the ID parameter;</li><li><b>Modify</b> an existing rule: specify the rule ID that needs to be updated/modified;</li><li><b>Delete</b> an existing rule: existing rules not included in the Rules list in the BotManagementCustomRules parameter will be deleted.</li></p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>ID of the bot custom rule.<br>Different rule configuration operations are supported via the rule ID:<br> <li> <b>Add</b> a new rule: leave the ID empty or do not specify the ID parameter;</li><li><b>Modify</b> an existing rule: specify the rule ID that needs to be updated/modified;</li><li><b>Delete</b> an existing rule: existing rules not included in the Rules list in the BotManagementCustomRules parameter will be deleted.</li></p>
                     * @param _id <p>ID of the bot custom rule.<br>Different rule configuration operations are supported via the rule ID:<br> <li> <b>Add</b> a new rule: leave the ID empty or do not specify the ID parameter;</li><li><b>Modify</b> an existing rule: specify the rule ID that needs to be updated/modified;</li><li><b>Delete</b> an existing rule: existing rules not included in the Rules list in the BotManagementCustomRules parameter will be deleted.</li></p>
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
                     * 获取<p>Name of the Bot custom rule.</p>
                     * @return Name <p>Name of the Bot custom rule.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Name of the Bot custom rule.</p>
                     * @param _name <p>Name of the Bot custom rule.</p>
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
                     * 获取<p>Whether the custom Bot rule is enabled. Valid values: <li>on: enable;</li><li>off: disable.</li></p>
                     * @return Enabled <p>Whether the custom Bot rule is enabled. Valid values: <li>on: enable;</li><li>off: disable.</li></p>
                     * 
                     */
                    std::string GetEnabled() const;

                    /**
                     * 设置<p>Whether the custom Bot rule is enabled. Valid values: <li>on: enable;</li><li>off: disable.</li></p>
                     * @param _enabled <p>Whether the custom Bot rule is enabled. Valid values: <li>on: enable;</li><li>off: disable.</li></p>
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
                     * 获取<p>Priority of Bot custom rules, ranging from 1 to 100, with a default value of 50.</p>
                     * @return Priority <p>Priority of Bot custom rules, ranging from 1 to 100, with a default value of 50.</p>
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置<p>Priority of Bot custom rules, ranging from 1 to 100, with a default value of 50.</p>
                     * @param _priority <p>Priority of Bot custom rules, ranging from 1 to 100, with a default value of 50.</p>
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
                     * 获取<p>For specific content of the Bot custom rule, it must comply with the expression grammar. For detailed specifications, see the product document.</p>
                     * @return Condition <p>For specific content of the Bot custom rule, it must comply with the expression grammar. For detailed specifications, see the product document.</p>
                     * 
                     */
                    std::string GetCondition() const;

                    /**
                     * 设置<p>For specific content of the Bot custom rule, it must comply with the expression grammar. For detailed specifications, see the product document.</p>
                     * @param _condition <p>For specific content of the Bot custom rule, it must comply with the expression grammar. For detailed specifications, see the product document.</p>
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
                     * 获取<p>List of safe execution actions by weight assignment.</p>
                     * @return Action <p>List of safe execution actions by weight assignment.</p>
                     * 
                     */
                    std::vector<SecurityWeightedAction> GetAction() const;

                    /**
                     * 设置<p>List of safe execution actions by weight assignment.</p>
                     * @param _action <p>List of safe execution actions by weight assignment.</p>
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
                     * <p>ID of the bot custom rule.<br>Different rule configuration operations are supported via the rule ID:<br> <li> <b>Add</b> a new rule: leave the ID empty or do not specify the ID parameter;</li><li><b>Modify</b> an existing rule: specify the rule ID that needs to be updated/modified;</li><li><b>Delete</b> an existing rule: existing rules not included in the Rules list in the BotManagementCustomRules parameter will be deleted.</li></p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>Name of the Bot custom rule.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Whether the custom Bot rule is enabled. Valid values: <li>on: enable;</li><li>off: disable.</li></p>
                     */
                    std::string m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * <p>Priority of Bot custom rules, ranging from 1 to 100, with a default value of 50.</p>
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * <p>For specific content of the Bot custom rule, it must comply with the expression grammar. For detailed specifications, see the product document.</p>
                     */
                    std::string m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * <p>List of safe execution actions by weight assignment.</p>
                     */
                    std::vector<SecurityWeightedAction> m_action;
                    bool m_actionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_BOTMANAGEMENTCUSTOMRULE_H_
