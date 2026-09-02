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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATESANDBOXACLRULEREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATESANDBOXACLRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/TrafficSandboxEffectScope.h>
#include <tencentcloud/csip/v20221121/model/TrafficSandboxACLRuleContentItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * CreateSandboxACLRule request structure.
                */
                class CreateSandboxACLRuleRequest : public AbstractModel
                {
                public:
                    CreateSandboxACLRuleRequest();
                    ~CreateSandboxACLRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Rule name
Input parameter limit: length 1-128
                     * @return RuleName Rule name
Input parameter limit: length 1-128
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Rule name
Input parameter limit: length 1-128
                     * @param _ruleName Rule name
Input parameter limit: length 1-128
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
INFO: Notification.
LOW: low-risk
MEDIUM: Medium risk
HIGH: HIGH risk
CRITICAL: Critical
                     * @return Level Rule level
Enumeration values:
INFO: Notification.
LOW: low-risk
MEDIUM: Medium risk
HIGH: HIGH risk
CRITICAL: Critical
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置Rule level
Enumeration values:
INFO: Notification.
LOW: low-risk
MEDIUM: Medium risk
HIGH: HIGH risk
CRITICAL: Critical
                     * @param _level Rule level
Enumeration values:
INFO: Notification.
LOW: low-risk
MEDIUM: Medium risk
HIGH: HIGH risk
CRITICAL: Critical
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
                     * 获取Asset type to which it belongs
Enumeration values:
HOST: HOST
CONTAINER: Container
                     * @return BelongAssetType Asset type to which it belongs
Enumeration values:
HOST: HOST
CONTAINER: Container
                     * 
                     */
                    std::string GetBelongAssetType() const;

                    /**
                     * 设置Asset type to which it belongs
Enumeration values:
HOST: HOST
CONTAINER: Container
                     * @param _belongAssetType Asset type to which it belongs
Enumeration values:
HOST: HOST
CONTAINER: Container
                     * 
                     */
                    void SetBelongAssetType(const std::string& _belongAssetType);

                    /**
                     * 判断参数 BelongAssetType 是否已赋值
                     * @return BelongAssetType 是否已赋值
                     * 
                     */
                    bool BelongAssetTypeHasBeenSet() const;

                    /**
                     * 获取Effective scope
Input limitation: if EffectScope.EffectType is INCLUDE, EffectAssets must be non-empty.
                     * @return EffectScope Effective scope
Input limitation: if EffectScope.EffectType is INCLUDE, EffectAssets must be non-empty.
                     * 
                     */
                    TrafficSandboxEffectScope GetEffectScope() const;

                    /**
                     * 设置Effective scope
Input limitation: if EffectScope.EffectType is INCLUDE, EffectAssets must be non-empty.
                     * @param _effectScope Effective scope
Input limitation: if EffectScope.EffectType is INCLUDE, EffectAssets must be non-empty.
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
                     * 获取Initial status
Enumeration values:
ON: enable
OFF: disabled.
                     * @return Status Initial status
Enumeration values:
ON: enable
OFF: disabled.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Initial status
Enumeration values:
ON: enable
OFF: disabled.
                     * @param _status Initial status
Enumeration values:
ON: enable
OFF: disabled.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Rule action
Enumeration values:
PASS: allowlist
BLOCK: Block and alarm
MONITOR: Alarm
                     * @return RuleAction Rule action
Enumeration values:
PASS: allowlist
BLOCK: Block and alarm
MONITOR: Alarm
                     * 
                     */
                    std::string GetRuleAction() const;

                    /**
                     * 设置Rule action
Enumeration values:
PASS: allowlist
BLOCK: Block and alarm
MONITOR: Alarm
                     * @param _ruleAction Rule action
Enumeration values:
PASS: allowlist
BLOCK: Block and alarm
MONITOR: Alarm
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
                     * 获取List of referenced system rule IDs
Input limit: up to 100; provide at least one of this parameter and UserRuleContent
                     * @return SystemRuleIDList List of referenced system rule IDs
Input limit: up to 100; provide at least one of this parameter and UserRuleContent
                     * 
                     */
                    std::vector<int64_t> GetSystemRuleIDList() const;

                    /**
                     * 设置List of referenced system rule IDs
Input limit: up to 100; provide at least one of this parameter and UserRuleContent
                     * @param _systemRuleIDList List of referenced system rule IDs
Input limit: up to 100; provide at least one of this parameter and UserRuleContent
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
Input parameter limit: up to 100 sub-rules; provide at least one of this parameter or SystemRuleIDList.
                     * @return UserRuleContent Content of user-defined rules
Input parameter limit: up to 100 sub-rules; provide at least one of this parameter or SystemRuleIDList.
                     * 
                     */
                    std::vector<TrafficSandboxACLRuleContentItem> GetUserRuleContent() const;

                    /**
                     * 设置Content of user-defined rules
Input parameter limit: up to 100 sub-rules; provide at least one of this parameter or SystemRuleIDList.
                     * @param _userRuleContent Content of user-defined rules
Input parameter limit: up to 100 sub-rules; provide at least one of this parameter or SystemRuleIDList.
                     * 
                     */
                    void SetUserRuleContent(const std::vector<TrafficSandboxACLRuleContentItem>& _userRuleContent);

                    /**
                     * 判断参数 UserRuleContent 是否已赋值
                     * @return UserRuleContent 是否已赋值
                     * 
                     */
                    bool UserRuleContentHasBeenSet() const;

                private:

                    /**
                     * Rule name
Input parameter limit: length 1-128
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Rule level
Enumeration values:
INFO: Notification.
LOW: low-risk
MEDIUM: Medium risk
HIGH: HIGH risk
CRITICAL: Critical
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Asset type to which it belongs
Enumeration values:
HOST: HOST
CONTAINER: Container
                     */
                    std::string m_belongAssetType;
                    bool m_belongAssetTypeHasBeenSet;

                    /**
                     * Effective scope
Input limitation: if EffectScope.EffectType is INCLUDE, EffectAssets must be non-empty.
                     */
                    TrafficSandboxEffectScope m_effectScope;
                    bool m_effectScopeHasBeenSet;

                    /**
                     * Initial status
Enumeration values:
ON: enable
OFF: disabled.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Rule action
Enumeration values:
PASS: allowlist
BLOCK: Block and alarm
MONITOR: Alarm
                     */
                    std::string m_ruleAction;
                    bool m_ruleActionHasBeenSet;

                    /**
                     * List of referenced system rule IDs
Input limit: up to 100; provide at least one of this parameter and UserRuleContent
                     */
                    std::vector<int64_t> m_systemRuleIDList;
                    bool m_systemRuleIDListHasBeenSet;

                    /**
                     * Content of user-defined rules
Input parameter limit: up to 100 sub-rules; provide at least one of this parameter or SystemRuleIDList.
                     */
                    std::vector<TrafficSandboxACLRuleContentItem> m_userRuleContent;
                    bool m_userRuleContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATESANDBOXACLRULEREQUEST_H_
