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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MANAGEDRULEGROUP_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MANAGEDRULEGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/SecurityAction.h>
#include <tencentcloud/teo/v20220901/model/ManagedRuleAction.h>
#include <tencentcloud/teo/v20220901/model/ManagedRuleGroupMeta.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Managed rule group configuration.
                */
                class ManagedRuleGroup : public AbstractModel
                {
                public:
                    ManagedRuleGroup();
                    ~ManagedRuleGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Group name of the managed rule. If no rule group is specified, the default configuration is used. For the specific value of GroupId, refer to the product documentation.
                     * @return GroupId Group name of the managed rule. If no rule group is specified, the default configuration is used. For the specific value of GroupId, refer to the product documentation.
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置Group name of the managed rule. If no rule group is specified, the default configuration is used. For the specific value of GroupId, refer to the product documentation.
                     * @param _groupId Group name of the managed rule. If no rule group is specified, the default configuration is used. For the specific value of GroupId, refer to the product documentation.
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Protection level of the managed rule group. Valid values: <li>loose: Loose. It only contains ultra-high risk rules. At this point, Action is required and RuleActions is invalid.</li><li>normal: Normal. It contains ultra-high risk and high-risk rules. At this point, Action is required and RuleActions is invalid.</li><li>strict: Strict. It contains ultra-high risk, high-risk, and medium-risk rules. At this point, Action is required and RuleActions is invalid.</li><li>extreme: Ultra-strict. It contains ultra-high risk, high-risk, medium-risk, and low-risk rules. At this point, Action is required and RuleActions is invalid.</li><li>custom: Custom. Refined strategy. Configure the disposal method for each individual rule. At this point, the Action field is invalid. Use RuleActions to configure the refined strategy for individual rules.</li>	
                     * @return SensitivityLevel Protection level of the managed rule group. Valid values: <li>loose: Loose. It only contains ultra-high risk rules. At this point, Action is required and RuleActions is invalid.</li><li>normal: Normal. It contains ultra-high risk and high-risk rules. At this point, Action is required and RuleActions is invalid.</li><li>strict: Strict. It contains ultra-high risk, high-risk, and medium-risk rules. At this point, Action is required and RuleActions is invalid.</li><li>extreme: Ultra-strict. It contains ultra-high risk, high-risk, medium-risk, and low-risk rules. At this point, Action is required and RuleActions is invalid.</li><li>custom: Custom. Refined strategy. Configure the disposal method for each individual rule. At this point, the Action field is invalid. Use RuleActions to configure the refined strategy for individual rules.</li>	
                     * 
                     */
                    std::string GetSensitivityLevel() const;

                    /**
                     * 设置Protection level of the managed rule group. Valid values: <li>loose: Loose. It only contains ultra-high risk rules. At this point, Action is required and RuleActions is invalid.</li><li>normal: Normal. It contains ultra-high risk and high-risk rules. At this point, Action is required and RuleActions is invalid.</li><li>strict: Strict. It contains ultra-high risk, high-risk, and medium-risk rules. At this point, Action is required and RuleActions is invalid.</li><li>extreme: Ultra-strict. It contains ultra-high risk, high-risk, medium-risk, and low-risk rules. At this point, Action is required and RuleActions is invalid.</li><li>custom: Custom. Refined strategy. Configure the disposal method for each individual rule. At this point, the Action field is invalid. Use RuleActions to configure the refined strategy for individual rules.</li>	
                     * @param _sensitivityLevel Protection level of the managed rule group. Valid values: <li>loose: Loose. It only contains ultra-high risk rules. At this point, Action is required and RuleActions is invalid.</li><li>normal: Normal. It contains ultra-high risk and high-risk rules. At this point, Action is required and RuleActions is invalid.</li><li>strict: Strict. It contains ultra-high risk, high-risk, and medium-risk rules. At this point, Action is required and RuleActions is invalid.</li><li>extreme: Ultra-strict. It contains ultra-high risk, high-risk, medium-risk, and low-risk rules. At this point, Action is required and RuleActions is invalid.</li><li>custom: Custom. Refined strategy. Configure the disposal method for each individual rule. At this point, the Action field is invalid. Use RuleActions to configure the refined strategy for individual rules.</li>	
                     * 
                     */
                    void SetSensitivityLevel(const std::string& _sensitivityLevel);

                    /**
                     * 判断参数 SensitivityLevel 是否已赋值
                     * @return SensitivityLevel 是否已赋值
                     * 
                     */
                    bool SensitivityLevelHasBeenSet() const;

                    /**
                     * 获取Handling action of the managed rule group. Supported values for SecurityAction Name: <li>Deny: Block. Respond with an interception page;</li><li>Monitor: Observe. Do not process requests, log security events in logs;</li><li>Disabled: Not activated. Do not scan requests, skip this rule.</li>
                     * @return Action Handling action of the managed rule group. Supported values for SecurityAction Name: <li>Deny: Block. Respond with an interception page;</li><li>Monitor: Observe. Do not process requests, log security events in logs;</li><li>Disabled: Not activated. Do not scan requests, skip this rule.</li>
                     * 
                     */
                    SecurityAction GetAction() const;

                    /**
                     * 设置Handling action of the managed rule group. Supported values for SecurityAction Name: <li>Deny: Block. Respond with an interception page;</li><li>Monitor: Observe. Do not process requests, log security events in logs;</li><li>Disabled: Not activated. Do not scan requests, skip this rule.</li>
                     * @param _action Handling action of the managed rule group. Supported values for SecurityAction Name: <li>Deny: Block. Respond with an interception page;</li><li>Monitor: Observe. Do not process requests, log security events in logs;</li><li>Disabled: Not activated. Do not scan requests, skip this rule.</li>
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
                     * 获取Specific configuration of rule items in the managed rule group. This configuration is effective only when SensitivityLevel is custom.
                     * @return RuleActions Specific configuration of rule items in the managed rule group. This configuration is effective only when SensitivityLevel is custom.
                     * 
                     */
                    std::vector<ManagedRuleAction> GetRuleActions() const;

                    /**
                     * 设置Specific configuration of rule items in the managed rule group. This configuration is effective only when SensitivityLevel is custom.
                     * @param _ruleActions Specific configuration of rule items in the managed rule group. This configuration is effective only when SensitivityLevel is custom.
                     * 
                     */
                    void SetRuleActions(const std::vector<ManagedRuleAction>& _ruleActions);

                    /**
                     * 判断参数 RuleActions 是否已赋值
                     * @return RuleActions 是否已赋值
                     * 
                     */
                    bool RuleActionsHasBeenSet() const;

                    /**
                     * 获取Managed rule group information. This is an output-only parameter.	
                     * @return MetaData Managed rule group information. This is an output-only parameter.	
                     * 
                     */
                    ManagedRuleGroupMeta GetMetaData() const;

                    /**
                     * 设置Managed rule group information. This is an output-only parameter.	
                     * @param _metaData Managed rule group information. This is an output-only parameter.	
                     * 
                     */
                    void SetMetaData(const ManagedRuleGroupMeta& _metaData);

                    /**
                     * 判断参数 MetaData 是否已赋值
                     * @return MetaData 是否已赋值
                     * 
                     */
                    bool MetaDataHasBeenSet() const;

                private:

                    /**
                     * Group name of the managed rule. If no rule group is specified, the default configuration is used. For the specific value of GroupId, refer to the product documentation.
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Protection level of the managed rule group. Valid values: <li>loose: Loose. It only contains ultra-high risk rules. At this point, Action is required and RuleActions is invalid.</li><li>normal: Normal. It contains ultra-high risk and high-risk rules. At this point, Action is required and RuleActions is invalid.</li><li>strict: Strict. It contains ultra-high risk, high-risk, and medium-risk rules. At this point, Action is required and RuleActions is invalid.</li><li>extreme: Ultra-strict. It contains ultra-high risk, high-risk, medium-risk, and low-risk rules. At this point, Action is required and RuleActions is invalid.</li><li>custom: Custom. Refined strategy. Configure the disposal method for each individual rule. At this point, the Action field is invalid. Use RuleActions to configure the refined strategy for individual rules.</li>	
                     */
                    std::string m_sensitivityLevel;
                    bool m_sensitivityLevelHasBeenSet;

                    /**
                     * Handling action of the managed rule group. Supported values for SecurityAction Name: <li>Deny: Block. Respond with an interception page;</li><li>Monitor: Observe. Do not process requests, log security events in logs;</li><li>Disabled: Not activated. Do not scan requests, skip this rule.</li>
                     */
                    SecurityAction m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Specific configuration of rule items in the managed rule group. This configuration is effective only when SensitivityLevel is custom.
                     */
                    std::vector<ManagedRuleAction> m_ruleActions;
                    bool m_ruleActionsHasBeenSet;

                    /**
                     * Managed rule group information. This is an output-only parameter.	
                     */
                    ManagedRuleGroupMeta m_metaData;
                    bool m_metaDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MANAGEDRULEGROUP_H_
