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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXACLRULEINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXACLRULEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/TrafficSandboxACLRuleContentItem.h>
#include <tencentcloud/csip/v20221121/model/TrafficSandboxEffectScope.h>
#include <tencentcloud/csip/v20221121/model/TrafficSandboxInactiveAsset.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ACL user rule data structure
                */
                class TrafficSandboxACLRuleInfo : public AbstractModel
                {
                public:
                    TrafficSandboxACLRuleInfo();
                    ~TrafficSandboxACLRuleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * @return RuleName Rule name
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Rule name
                     * @param _ruleName Rule name
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
MEDIUM: Medium-risk
HIGH: high risk
CRITICAL: Critical
                     * @return Level Rule level
Enumeration values:
INFO: Notification.
LOW: low-risk
MEDIUM: Medium-risk
HIGH: high risk
CRITICAL: Critical
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置Rule level
Enumeration values:
INFO: Notification.
LOW: low-risk
MEDIUM: Medium-risk
HIGH: high risk
CRITICAL: Critical
                     * @param _level Rule level
Enumeration values:
INFO: Notification.
LOW: low-risk
MEDIUM: Medium-risk
HIGH: high risk
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
                     * 获取Rule status
Enumeration values:
ON: enabled.
OFF: disabled.
                     * @return Status Rule status
Enumeration values:
ON: enabled.
OFF: disabled.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Rule status
Enumeration values:
ON: enabled.
OFF: disabled.
                     * @param _status Rule status
Enumeration values:
ON: enabled.
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
                     * 获取Asset type to which it belongs
Enumeration values:
HOST: host
CONTAINER: Container
                     * @return BelongAssetType Asset type to which it belongs
Enumeration values:
HOST: host
CONTAINER: Container
                     * 
                     */
                    std::string GetBelongAssetType() const;

                    /**
                     * 设置Asset type to which it belongs
Enumeration values:
HOST: host
CONTAINER: Container
                     * @param _belongAssetType Asset type to which it belongs
Enumeration values:
HOST: host
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
                     * 获取Snapshot of the referenced system rule content
                     * @return SystemRuleContent Snapshot of the referenced system rule content
                     * 
                     */
                    std::vector<TrafficSandboxACLRuleContentItem> GetSystemRuleContent() const;

                    /**
                     * 设置Snapshot of the referenced system rule content
                     * @param _systemRuleContent Snapshot of the referenced system rule content
                     * 
                     */
                    void SetSystemRuleContent(const std::vector<TrafficSandboxACLRuleContentItem>& _systemRuleContent);

                    /**
                     * 判断参数 SystemRuleContent 是否已赋值
                     * @return SystemRuleContent 是否已赋值
                     * 
                     */
                    bool SystemRuleContentHasBeenSet() const;

                    /**
                     * 获取Content of the user-defined rule
                     * @return UserRuleContent Content of the user-defined rule
                     * 
                     */
                    std::vector<TrafficSandboxACLRuleContentItem> GetUserRuleContent() const;

                    /**
                     * 设置Content of the user-defined rule
                     * @param _userRuleContent Content of the user-defined rule
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
                     * 获取Rule effective scope
                     * @return EffectScope Rule effective scope
                     * 
                     */
                    TrafficSandboxEffectScope GetEffectScope() const;

                    /**
                     * 设置Rule effective scope
                     * @param _effectScope Rule effective scope
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
                     * 获取List of ineffective assets: AI Agent assets in the policy association targets' effective assets where the traffic sandbox plug-in is not installed (TrafficPluginState.InstallStatus is not INSTALLED). Return the InstanceId / ContainerId and TrafficPluginState of the machines. If there are no ineffective assets, return an empty array.
                     * @return InactiveAssets List of ineffective assets: AI Agent assets in the policy association targets' effective assets where the traffic sandbox plug-in is not installed (TrafficPluginState.InstallStatus is not INSTALLED). Return the InstanceId / ContainerId and TrafficPluginState of the machines. If there are no ineffective assets, return an empty array.
                     * 
                     */
                    std::vector<TrafficSandboxInactiveAsset> GetInactiveAssets() const;

                    /**
                     * 设置List of ineffective assets: AI Agent assets in the policy association targets' effective assets where the traffic sandbox plug-in is not installed (TrafficPluginState.InstallStatus is not INSTALLED). Return the InstanceId / ContainerId and TrafficPluginState of the machines. If there are no ineffective assets, return an empty array.
                     * @param _inactiveAssets List of ineffective assets: AI Agent assets in the policy association targets' effective assets where the traffic sandbox plug-in is not installed (TrafficPluginState.InstallStatus is not INSTALLED). Return the InstanceId / ContainerId and TrafficPluginState of the machines. If there are no ineffective assets, return an empty array.
                     * 
                     */
                    void SetInactiveAssets(const std::vector<TrafficSandboxInactiveAsset>& _inactiveAssets);

                    /**
                     * 判断参数 InactiveAssets 是否已赋值
                     * @return InactiveAssets 是否已赋值
                     * 
                     */
                    bool InactiveAssetsHasBeenSet() const;

                    /**
                     * 获取Creation time.
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)
                     * @return InsertTime Creation time.
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)
                     * 
                     */
                    std::string GetInsertTime() const;

                    /**
                     * 设置Creation time.
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)
                     * @param _insertTime Creation time.
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)
                     * 
                     */
                    void SetInsertTime(const std::string& _insertTime);

                    /**
                     * 判断参数 InsertTime 是否已赋值
                     * @return InsertTime 是否已赋值
                     * 
                     */
                    bool InsertTimeHasBeenSet() const;

                    /**
                     * 获取Update time
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)
                     * @return UpdateTime Update time
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)
                     * @param _updateTime Update time
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Rule Action
Enumeration values:
PASS: allowlist
BLOCK: Block and alarm
MONITOR: Alarm records
                     * @return RuleAction Rule Action
Enumeration values:
PASS: allowlist
BLOCK: Block and alarm
MONITOR: Alarm records
                     * 
                     */
                    std::string GetRuleAction() const;

                    /**
                     * 设置Rule Action
Enumeration values:
PASS: allowlist
BLOCK: Block and alarm
MONITOR: Alarm records
                     * @param _ruleAction Rule Action
Enumeration values:
PASS: allowlist
BLOCK: Block and alarm
MONITOR: Alarm records
                     * 
                     */
                    void SetRuleAction(const std::string& _ruleAction);

                    /**
                     * 判断参数 RuleAction 是否已赋值
                     * @return RuleAction 是否已赋值
                     * 
                     */
                    bool RuleActionHasBeenSet() const;

                private:

                    /**
                     * Rule ID
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * Rule name
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Rule level
Enumeration values:
INFO: Notification.
LOW: low-risk
MEDIUM: Medium-risk
HIGH: high risk
CRITICAL: Critical
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Rule status
Enumeration values:
ON: enabled.
OFF: disabled.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Asset type to which it belongs
Enumeration values:
HOST: host
CONTAINER: Container
                     */
                    std::string m_belongAssetType;
                    bool m_belongAssetTypeHasBeenSet;

                    /**
                     * Snapshot of the referenced system rule content
                     */
                    std::vector<TrafficSandboxACLRuleContentItem> m_systemRuleContent;
                    bool m_systemRuleContentHasBeenSet;

                    /**
                     * Content of the user-defined rule
                     */
                    std::vector<TrafficSandboxACLRuleContentItem> m_userRuleContent;
                    bool m_userRuleContentHasBeenSet;

                    /**
                     * Rule effective scope
                     */
                    TrafficSandboxEffectScope m_effectScope;
                    bool m_effectScopeHasBeenSet;

                    /**
                     * List of ineffective assets: AI Agent assets in the policy association targets' effective assets where the traffic sandbox plug-in is not installed (TrafficPluginState.InstallStatus is not INSTALLED). Return the InstanceId / ContainerId and TrafficPluginState of the machines. If there are no ineffective assets, return an empty array.
                     */
                    std::vector<TrafficSandboxInactiveAsset> m_inactiveAssets;
                    bool m_inactiveAssetsHasBeenSet;

                    /**
                     * Creation time.
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)
                     */
                    std::string m_insertTime;
                    bool m_insertTimeHasBeenSet;

                    /**
                     * Update time
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Rule Action
Enumeration values:
PASS: allowlist
BLOCK: Block and alarm
MONITOR: Alarm records
                     */
                    std::string m_ruleAction;
                    bool m_ruleActionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXACLRULEINFO_H_
