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
                     * 获取Name of the managed rule group, if the configuration for the rule group is not specified, it will be processed by default, refer to product documentation for the specific value of GroupId.
                     * @return GroupId Name of the managed rule group, if the configuration for the rule group is not specified, it will be processed by default, refer to product documentation for the specific value of GroupId.
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置Name of the managed rule group, if the configuration for the rule group is not specified, it will be processed by default, refer to product documentation for the specific value of GroupId.
                     * @param _groupId Name of the managed rule group, if the configuration for the rule group is not specified, it will be processed by default, refer to product documentation for the specific value of GroupId.
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
                     * 获取Protection level of the managed rule group. Values: <li>`loose`: lenient, only contain ultra-high risk rules, at this point, Action parameter needs configured instead of RuleActions parameter;</li> <li>`normal`: normal, contain ultra-high risk and high-risk rules, at this point,Action parameter needs configured instead of RuleActions parameter;</li> <li>`strict`: strict, contains ultra-high risk, high-risk and medium-risk rules, at this point, Action parameter needs configured instead of RuleActions parameter;</li> <li>`extreme`: super strict, contains ultra-high risk, high-risk, medium-risk and low-risk rules, at this point, Action parameter needs configured instead of RuleActions parameter;</li> <li>`custom`: custom, refined strategy, configure the RuleActions parameter for each individual rule, at this point, the Action field is invalid, use RuleActions to configure the refined strategy for each individual rule.</li>.
                     * @return SensitivityLevel Protection level of the managed rule group. Values: <li>`loose`: lenient, only contain ultra-high risk rules, at this point, Action parameter needs configured instead of RuleActions parameter;</li> <li>`normal`: normal, contain ultra-high risk and high-risk rules, at this point,Action parameter needs configured instead of RuleActions parameter;</li> <li>`strict`: strict, contains ultra-high risk, high-risk and medium-risk rules, at this point, Action parameter needs configured instead of RuleActions parameter;</li> <li>`extreme`: super strict, contains ultra-high risk, high-risk, medium-risk and low-risk rules, at this point, Action parameter needs configured instead of RuleActions parameter;</li> <li>`custom`: custom, refined strategy, configure the RuleActions parameter for each individual rule, at this point, the Action field is invalid, use RuleActions to configure the refined strategy for each individual rule.</li>.
                     * 
                     */
                    std::string GetSensitivityLevel() const;

                    /**
                     * 设置Protection level of the managed rule group. Values: <li>`loose`: lenient, only contain ultra-high risk rules, at this point, Action parameter needs configured instead of RuleActions parameter;</li> <li>`normal`: normal, contain ultra-high risk and high-risk rules, at this point,Action parameter needs configured instead of RuleActions parameter;</li> <li>`strict`: strict, contains ultra-high risk, high-risk and medium-risk rules, at this point, Action parameter needs configured instead of RuleActions parameter;</li> <li>`extreme`: super strict, contains ultra-high risk, high-risk, medium-risk and low-risk rules, at this point, Action parameter needs configured instead of RuleActions parameter;</li> <li>`custom`: custom, refined strategy, configure the RuleActions parameter for each individual rule, at this point, the Action field is invalid, use RuleActions to configure the refined strategy for each individual rule.</li>.
                     * @param _sensitivityLevel Protection level of the managed rule group. Values: <li>`loose`: lenient, only contain ultra-high risk rules, at this point, Action parameter needs configured instead of RuleActions parameter;</li> <li>`normal`: normal, contain ultra-high risk and high-risk rules, at this point,Action parameter needs configured instead of RuleActions parameter;</li> <li>`strict`: strict, contains ultra-high risk, high-risk and medium-risk rules, at this point, Action parameter needs configured instead of RuleActions parameter;</li> <li>`extreme`: super strict, contains ultra-high risk, high-risk, medium-risk and low-risk rules, at this point, Action parameter needs configured instead of RuleActions parameter;</li> <li>`custom`: custom, refined strategy, configure the RuleActions parameter for each individual rule, at this point, the Action field is invalid, use RuleActions to configure the refined strategy for each individual rule.</li>.
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
                     * 获取Action for ManagedRuleGroup. the Name parameter value of SecurityAction supports: <li>`Deny`: block and respond with a block page;</li> <li>`Monitor`: observe, do not process requests and record security events in logs;</li> <li>`Disabled`: not enabled, do not scan requests and skip this rule.</li>.
                     * @return Action Action for ManagedRuleGroup. the Name parameter value of SecurityAction supports: <li>`Deny`: block and respond with a block page;</li> <li>`Monitor`: observe, do not process requests and record security events in logs;</li> <li>`Disabled`: not enabled, do not scan requests and skip this rule.</li>.
                     * 
                     */
                    SecurityAction GetAction() const;

                    /**
                     * 设置Action for ManagedRuleGroup. the Name parameter value of SecurityAction supports: <li>`Deny`: block and respond with a block page;</li> <li>`Monitor`: observe, do not process requests and record security events in logs;</li> <li>`Disabled`: not enabled, do not scan requests and skip this rule.</li>.
                     * @param _action Action for ManagedRuleGroup. the Name parameter value of SecurityAction supports: <li>`Deny`: block and respond with a block page;</li> <li>`Monitor`: observe, do not process requests and record security events in logs;</li> <li>`Disabled`: not enabled, do not scan requests and skip this rule.</li>.
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
                     * 获取Specific configuration of rule items under the managed rule group, valid only when SensitivityLevel is custom.
                     * @return RuleActions Specific configuration of rule items under the managed rule group, valid only when SensitivityLevel is custom.
                     * 
                     */
                    std::vector<ManagedRuleAction> GetRuleActions() const;

                    /**
                     * 设置Specific configuration of rule items under the managed rule group, valid only when SensitivityLevel is custom.
                     * @param _ruleActions Specific configuration of rule items under the managed rule group, valid only when SensitivityLevel is custom.
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
                     * 获取ManagedRuleGroup detailed information, output parameter only.
                     * @return MetaData ManagedRuleGroup detailed information, output parameter only.
                     * 
                     */
                    ManagedRuleGroupMeta GetMetaData() const;

                    /**
                     * 设置ManagedRuleGroup detailed information, output parameter only.
                     * @param _metaData ManagedRuleGroup detailed information, output parameter only.
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
                     * Name of the managed rule group, if the configuration for the rule group is not specified, it will be processed by default, refer to product documentation for the specific value of GroupId.
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Protection level of the managed rule group. Values: <li>`loose`: lenient, only contain ultra-high risk rules, at this point, Action parameter needs configured instead of RuleActions parameter;</li> <li>`normal`: normal, contain ultra-high risk and high-risk rules, at this point,Action parameter needs configured instead of RuleActions parameter;</li> <li>`strict`: strict, contains ultra-high risk, high-risk and medium-risk rules, at this point, Action parameter needs configured instead of RuleActions parameter;</li> <li>`extreme`: super strict, contains ultra-high risk, high-risk, medium-risk and low-risk rules, at this point, Action parameter needs configured instead of RuleActions parameter;</li> <li>`custom`: custom, refined strategy, configure the RuleActions parameter for each individual rule, at this point, the Action field is invalid, use RuleActions to configure the refined strategy for each individual rule.</li>.
                     */
                    std::string m_sensitivityLevel;
                    bool m_sensitivityLevelHasBeenSet;

                    /**
                     * Action for ManagedRuleGroup. the Name parameter value of SecurityAction supports: <li>`Deny`: block and respond with a block page;</li> <li>`Monitor`: observe, do not process requests and record security events in logs;</li> <li>`Disabled`: not enabled, do not scan requests and skip this rule.</li>.
                     */
                    SecurityAction m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Specific configuration of rule items under the managed rule group, valid only when SensitivityLevel is custom.
                     */
                    std::vector<ManagedRuleAction> m_ruleActions;
                    bool m_ruleActionsHasBeenSet;

                    /**
                     * ManagedRuleGroup detailed information, output parameter only.
                     */
                    ManagedRuleGroupMeta m_metaData;
                    bool m_metaDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MANAGEDRULEGROUP_H_
