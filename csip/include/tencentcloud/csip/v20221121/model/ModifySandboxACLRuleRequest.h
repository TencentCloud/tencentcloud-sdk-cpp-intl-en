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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYSANDBOXACLRULEREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYSANDBOXACLRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/TrafficSandboxACLRuleContentItem.h>
#include <tencentcloud/csip/v20221121/model/TrafficSandboxEffectScope.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifySandboxACLRule request structure.
                */
                class ModifySandboxACLRuleRequest : public AbstractModel
                {
                public:
                    ModifySandboxACLRuleRequest();
                    ~ModifySandboxACLRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Rule ID
                     * @return ID Rule ID
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置Rule ID
                     * @param _iD Rule ID
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取Rule name
Input parameter limits: 1-128 in length
Default value: No modification if not specified.
                     * @return RuleName Rule name
Input parameter limits: 1-128 in length
Default value: No modification if not specified.
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Rule name
Input parameter limits: 1-128 in length
Default value: No modification if not specified.
                     * @param _ruleName Rule name
Input parameter limits: 1-128 in length
Default value: No modification if not specified.
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
                     * 获取Rule level
Enumeration values:
INFO: Notification
LOW: low-risk
MEDIUM: Medium risk
HIGH: high risk
CRITICAL: Critical
Default value: No modification if not specified.
                     * @return Level Rule level
Enumeration values:
INFO: Notification
LOW: low-risk
MEDIUM: Medium risk
HIGH: high risk
CRITICAL: Critical
Default value: No modification if not specified.
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置Rule level
Enumeration values:
INFO: Notification
LOW: low-risk
MEDIUM: Medium risk
HIGH: high risk
CRITICAL: Critical
Default value: No modification if not specified.
                     * @param _level Rule level
Enumeration values:
INFO: Notification
LOW: low-risk
MEDIUM: Medium risk
HIGH: high risk
CRITICAL: Critical
Default value: No modification if not specified.
                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取List of referenced system rule IDs.
Input parameter limits: pass an empty array to clear; omit it to skip modification.
                     * @return SystemRuleIDList List of referenced system rule IDs.
Input parameter limits: pass an empty array to clear; omit it to skip modification.
                     * 
                     */
                    std::vector<int64_t> GetSystemRuleIDList() const;

                    /**
                     * 设置List of referenced system rule IDs.
Input parameter limits: pass an empty array to clear; omit it to skip modification.
                     * @param _systemRuleIDList List of referenced system rule IDs.
Input parameter limits: pass an empty array to clear; omit it to skip modification.
                     * 
                     */
                    void SetSystemRuleIDList(const std::vector<int64_t>& _systemRuleIDList);

                    /**
                     * 判断参数 SystemRuleIDList 是否已赋值
                     * @return SystemRuleIDList 是否已赋值
                     * 
                     */
                    bool SystemRuleIDListHasBeenSet() const;

                    /**
                     * 获取Content of user-defined rules
Input parameter limits: pass an empty array to clear; omit it to skip modification.
                     * @return UserRuleContent Content of user-defined rules
Input parameter limits: pass an empty array to clear; omit it to skip modification.
                     * 
                     */
                    std::vector<TrafficSandboxACLRuleContentItem> GetUserRuleContent() const;

                    /**
                     * 设置Content of user-defined rules
Input parameter limits: pass an empty array to clear; omit it to skip modification.
                     * @param _userRuleContent Content of user-defined rules
Input parameter limits: pass an empty array to clear; omit it to skip modification.
                     * 
                     */
                    void SetUserRuleContent(const std::vector<TrafficSandboxACLRuleContentItem>& _userRuleContent);

                    /**
                     * 判断参数 UserRuleContent 是否已赋值
                     * @return UserRuleContent 是否已赋值
                     * 
                     */
                    bool UserRuleContentHasBeenSet() const;

                    /**
                     * 获取Effective scope
Default value: No modification if not specified.
                     * @return EffectScope Effective scope
Default value: No modification if not specified.
                     * 
                     */
                    TrafficSandboxEffectScope GetEffectScope() const;

                    /**
                     * 设置Effective scope
Default value: No modification if not specified.
                     * @param _effectScope Effective scope
Default value: No modification if not specified.
                     * 
                     */
                    void SetEffectScope(const TrafficSandboxEffectScope& _effectScope);

                    /**
                     * 判断参数 EffectScope 是否已赋值
                     * @return EffectScope 是否已赋值
                     * 
                     */
                    bool EffectScopeHasBeenSet() const;

                    /**
                     * 获取Rule action
Enumeration values:
PASS: allowlist
BLOCK: Block and alarm
MONITOR: alarm
Default value: No modification if not specified.
                     * @return RuleAction Rule action
Enumeration values:
PASS: allowlist
BLOCK: Block and alarm
MONITOR: alarm
Default value: No modification if not specified.
                     * 
                     */
                    std::string GetRuleAction() const;

                    /**
                     * 设置Rule action
Enumeration values:
PASS: allowlist
BLOCK: Block and alarm
MONITOR: alarm
Default value: No modification if not specified.
                     * @param _ruleAction Rule action
Enumeration values:
PASS: allowlist
BLOCK: Block and alarm
MONITOR: alarm
Default value: No modification if not specified.
                     * 
                     */
                    void SetRuleAction(const std::string& _ruleAction);

                    /**
                     * 判断参数 RuleAction 是否已赋值
                     * @return RuleAction 是否已赋值
                     * 
                     */
                    bool RuleActionHasBeenSet() const;

                    /**
                     * 获取Target Status
Enumeration values:
ON: enable
OFF: disabled.
Default value: No modification if not specified.
                     * @return Status Target Status
Enumeration values:
ON: enable
OFF: disabled.
Default value: No modification if not specified.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Target Status
Enumeration values:
ON: enable
OFF: disabled.
Default value: No modification if not specified.
                     * @param _status Target Status
Enumeration values:
ON: enable
OFF: disabled.
Default value: No modification if not specified.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Rule ID
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * Rule name
Input parameter limits: 1-128 in length
Default value: No modification if not specified.
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Rule level
Enumeration values:
INFO: Notification
LOW: low-risk
MEDIUM: Medium risk
HIGH: high risk
CRITICAL: Critical
Default value: No modification if not specified.
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * List of referenced system rule IDs.
Input parameter limits: pass an empty array to clear; omit it to skip modification.
                     */
                    std::vector<int64_t> m_systemRuleIDList;
                    bool m_systemRuleIDListHasBeenSet;

                    /**
                     * Content of user-defined rules
Input parameter limits: pass an empty array to clear; omit it to skip modification.
                     */
                    std::vector<TrafficSandboxACLRuleContentItem> m_userRuleContent;
                    bool m_userRuleContentHasBeenSet;

                    /**
                     * Effective scope
Default value: No modification if not specified.
                     */
                    TrafficSandboxEffectScope m_effectScope;
                    bool m_effectScopeHasBeenSet;

                    /**
                     * Rule action
Enumeration values:
PASS: allowlist
BLOCK: Block and alarm
MONITOR: alarm
Default value: No modification if not specified.
                     */
                    std::string m_ruleAction;
                    bool m_ruleActionHasBeenSet;

                    /**
                     * Target Status
Enumeration values:
ON: enable
OFF: disabled.
Default value: No modification if not specified.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYSANDBOXACLRULEREQUEST_H_
