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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_ABNORMALPROCESSRULEEXTSETITEM_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_ABNORMALPROCESSRULEEXTSETITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/AbnormalProcessChildRuleInfo.h>
#include <tencentcloud/tcss/v20201101/model/AbnormalProcessSystemChildRuleInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * Abnormal process policy list extension (standalone flat structure with rule content and execution action)
                */
                class AbnormalProcessRuleExtSetItem : public AbstractModel
                {
                public:
                    AbnormalProcessRuleExtSetItem();
                    ~AbnormalProcessRuleExtSetItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Sub-rule list of the user-defined policy. Has a value when IsDefault=false.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ChildRules Sub-rule list of the user-defined policy. Has a value when IsDefault=false.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AbnormalProcessChildRuleInfo> GetChildRules() const;

                    /**
                     * 设置Sub-rule list of the user-defined policy. Has a value when IsDefault=false.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _childRules Sub-rule list of the user-defined policy. Has a value when IsDefault=false.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetChildRules(const std::vector<AbnormalProcessChildRuleInfo>& _childRules);

                    /**
                     * 判断参数 ChildRules 是否已赋值
                     * @return ChildRules 是否已赋值
                     * 
                     */
                    bool ChildRulesHasBeenSet() const;

                    /**
                     * 获取Edit username
                     * @return EditUserName Edit username
                     * 
                     */
                    std::string GetEditUserName() const;

                    /**
                     * 设置Edit username
                     * @param _editUserName Edit username
                     * 
                     */
                    void SetEditUserName(const std::string& _editUserName);

                    /**
                     * 判断参数 EditUserName 是否已赋值
                     * @return EditUserName 是否已赋值
                     * 
                     */
                    bool EditUserNameHasBeenSet() const;

                    /**
                     * 获取Policy enforcement image count
                     * @return EffectImageCount Policy enforcement image count
                     * 
                     */
                    uint64_t GetEffectImageCount() const;

                    /**
                     * 设置Policy enforcement image count
                     * @param _effectImageCount Policy enforcement image count
                     * 
                     */
                    void SetEffectImageCount(const uint64_t& _effectImageCount);

                    /**
                     * 判断参数 EffectImageCount 是否已赋值
                     * @return EffectImageCount 是否已赋值
                     * 
                     */
                    bool EffectImageCountHasBeenSet() const;

                    /**
                     * 获取true: default policy, false: custom policy
                     * @return IsDefault true: default policy, false: custom policy
                     * 
                     */
                    bool GetIsDefault() const;

                    /**
                     * 设置true: default policy, false: custom policy
                     * @param _isDefault true: default policy, false: custom policy
                     * 
                     */
                    void SetIsDefault(const bool& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                    /**
                     * 获取Whether the rule applies to all images. true indicates it takes effect on all images.
                     * @return IsGlobal Whether the rule applies to all images. true indicates it takes effect on all images.
                     * 
                     */
                    bool GetIsGlobal() const;

                    /**
                     * 设置Whether the rule applies to all images. true indicates it takes effect on all images.
                     * @param _isGlobal Whether the rule applies to all images. true indicates it takes effect on all images.
                     * 
                     */
                    void SetIsGlobal(const bool& _isGlobal);

                    /**
                     * 判断参数 IsGlobal 是否已赋值
                     * @return IsGlobal 是否已赋值
                     * 
                     */
                    bool IsGlobalHasBeenSet() const;

                    /**
                     * 获取true: Policy activation, false: Policy deactivation
                     * @return IsEnable true: Policy activation, false: Policy deactivation
                     * 
                     */
                    bool GetIsEnable() const;

                    /**
                     * 设置true: Policy activation, false: Policy deactivation
                     * @param _isEnable true: Policy activation, false: Policy deactivation
                     * 
                     */
                    void SetIsEnable(const bool& _isEnable);

                    /**
                     * 判断参数 IsEnable 是否已赋值
                     * @return IsEnable 是否已赋值
                     * 
                     */
                    bool IsEnableHasBeenSet() const;

                    /**
                     * 获取Deduplicated list of ALL execution actions in the rule group. RULE_MODE_ALERT: Alert RULE_MODE_HOLDUP: Block
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RuleActions Deduplicated list of ALL execution actions in the rule group. RULE_MODE_ALERT: Alert RULE_MODE_HOLDUP: Block
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetRuleActions() const;

                    /**
                     * 设置Deduplicated list of ALL execution actions in the rule group. RULE_MODE_ALERT: Alert RULE_MODE_HOLDUP: Block
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ruleActions Deduplicated list of ALL execution actions in the rule group. RULE_MODE_ALERT: Alert RULE_MODE_HOLDUP: Block
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRuleActions(const std::vector<std::string>& _ruleActions);

                    /**
                     * 判断参数 RuleActions 是否已赋值
                     * @return RuleActions 是否已赋值
                     * 
                     */
                    bool RuleActionsHasBeenSet() const;

                    /**
                     * 获取Policy ID
                     * @return RuleId Policy ID
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置Policy ID
                     * @param _ruleId Policy ID
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
                     * 获取Policy name
                     * @return RuleName Policy name
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Policy name
                     * @param _ruleName Policy name
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取Sub-rule list of system policy. Has value when IsDefault=true.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SystemChildRules Sub-rule list of system policy. Has value when IsDefault=true.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AbnormalProcessSystemChildRuleInfo> GetSystemChildRules() const;

                    /**
                     * 设置Sub-rule list of system policy. Has value when IsDefault=true.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _systemChildRules Sub-rule list of system policy. Has value when IsDefault=true.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSystemChildRules(const std::vector<AbnormalProcessSystemChildRuleInfo>& _systemChildRules);

                    /**
                     * 判断参数 SystemChildRules 是否已赋值
                     * @return SystemChildRules 是否已赋值
                     * 
                     */
                    bool SystemChildRulesHasBeenSet() const;

                    /**
                     * 获取Policy update time. May be empty.
                     * @return UpdateTime Policy update time. May be empty.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Policy update time. May be empty.
                     * @param _updateTime Policy update time. May be empty.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Sub-rule list of the user-defined policy. Has a value when IsDefault=false.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AbnormalProcessChildRuleInfo> m_childRules;
                    bool m_childRulesHasBeenSet;

                    /**
                     * Edit username
                     */
                    std::string m_editUserName;
                    bool m_editUserNameHasBeenSet;

                    /**
                     * Policy enforcement image count
                     */
                    uint64_t m_effectImageCount;
                    bool m_effectImageCountHasBeenSet;

                    /**
                     * true: default policy, false: custom policy
                     */
                    bool m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * Whether the rule applies to all images. true indicates it takes effect on all images.
                     */
                    bool m_isGlobal;
                    bool m_isGlobalHasBeenSet;

                    /**
                     * true: Policy activation, false: Policy deactivation
                     */
                    bool m_isEnable;
                    bool m_isEnableHasBeenSet;

                    /**
                     * Deduplicated list of ALL execution actions in the rule group. RULE_MODE_ALERT: Alert RULE_MODE_HOLDUP: Block
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_ruleActions;
                    bool m_ruleActionsHasBeenSet;

                    /**
                     * Policy ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Policy name
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Sub-rule list of system policy. Has value when IsDefault=true.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AbnormalProcessSystemChildRuleInfo> m_systemChildRules;
                    bool m_systemChildRulesHasBeenSet;

                    /**
                     * Policy update time. May be empty.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_ABNORMALPROCESSRULEEXTSETITEM_H_
