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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXLLMAUDITRULEINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXLLMAUDITRULEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/TrafficSandboxLLMAuditRuleRef.h>
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
                * LLM audit user rule data structure
                */
                class TrafficSandboxLLMAuditRuleInfo : public AbstractModel
                {
                public:
                    TrafficSandboxLLMAuditRuleInfo();
                    ~TrafficSandboxLLMAuditRuleInfo() = default;
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
Enumeration value:
INFO: Notification
LOW: low-risk
MEDIUM: Medium risk
HIGH: high risk
CRITICAL: Critical
                     * @return Level Rule level
Enumeration value:
INFO: Notification
LOW: low-risk
MEDIUM: Medium risk
HIGH: high risk
CRITICAL: Critical
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置Rule level
Enumeration value:
INFO: Notification
LOW: low-risk
MEDIUM: Medium risk
HIGH: high risk
CRITICAL: Critical
                     * @param _level Rule level
Enumeration value:
INFO: Notification
LOW: low-risk
MEDIUM: Medium risk
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
Enumeration value:
ON: enabled.
OFF: disabled.
                     * @return Status Rule status
Enumeration value:
ON: enabled.
OFF: disabled.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Rule status
Enumeration value:
ON: enabled.
OFF: disabled.
                     * @param _status Rule status
Enumeration value:
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
                     * 获取Asset type of the affiliation
Enumeration value:
HOST: host
CONTAINER: container
                     * @return BelongAssetType Asset type of the affiliation
Enumeration value:
HOST: host
CONTAINER: container
                     * 
                     */
                    std::string GetBelongAssetType() const;

                    /**
                     * 设置Asset type of the affiliation
Enumeration value:
HOST: host
CONTAINER: container
                     * @param _belongAssetType Asset type of the affiliation
Enumeration value:
HOST: host
CONTAINER: container
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
                     * 获取List of referenced system rules (including system rule names)
                     * @return SystemRuleRefs List of referenced system rules (including system rule names)
                     * 
                     */
                    std::vector<TrafficSandboxLLMAuditRuleRef> GetSystemRuleRefs() const;

                    /**
                     * 设置List of referenced system rules (including system rule names)
                     * @param _systemRuleRefs List of referenced system rules (including system rule names)
                     * 
                     */
                    void SetSystemRuleRefs(const std::vector<TrafficSandboxLLMAuditRuleRef>& _systemRuleRefs);

                    /**
                     * 判断参数 SystemRuleRefs 是否已赋值
                     * @return SystemRuleRefs 是否已赋值
                     * 
                     */
                    bool SystemRuleRefsHasBeenSet() const;

                    /**
                     * 获取Effective scope of the rule
                     * @return EffectScope Effective scope of the rule
                     * 
                     */
                    TrafficSandboxEffectScope GetEffectScope() const;

                    /**
                     * 设置Effective scope of the rule
                     * @param _effectScope Effective scope of the rule
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
                     * 获取List of ineffective assets: AI Agent assets in the policy association targets' effective assets where the traffic sandbox plug-in is not installed (TrafficPluginState.InstallStatus is not INSTALLED). Returns the InstanceId / ContainerId and TrafficPluginState of the machines. Returns an empty array if there are no ineffective assets.
                     * @return InactiveAssets List of ineffective assets: AI Agent assets in the policy association targets' effective assets where the traffic sandbox plug-in is not installed (TrafficPluginState.InstallStatus is not INSTALLED). Returns the InstanceId / ContainerId and TrafficPluginState of the machines. Returns an empty array if there are no ineffective assets.
                     * 
                     */
                    std::vector<TrafficSandboxInactiveAsset> GetInactiveAssets() const;

                    /**
                     * 设置List of ineffective assets: AI Agent assets in the policy association targets' effective assets where the traffic sandbox plug-in is not installed (TrafficPluginState.InstallStatus is not INSTALLED). Returns the InstanceId / ContainerId and TrafficPluginState of the machines. Returns an empty array if there are no ineffective assets.
                     * @param _inactiveAssets List of ineffective assets: AI Agent assets in the policy association targets' effective assets where the traffic sandbox plug-in is not installed (TrafficPluginState.InstallStatus is not INSTALLED). Returns the InstanceId / ContainerId and TrafficPluginState of the machines. Returns an empty array if there are no ineffective assets.
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
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO 8601 format)
                     * @return InsertTime Creation time.
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO 8601 format)
                     * 
                     */
                    std::string GetInsertTime() const;

                    /**
                     * 设置Creation time.
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO 8601 format)
                     * @param _insertTime Creation time.
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO 8601 format)
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
Enumeration value:
PASS: allowlist
BLOCK: Block and alarm
MONITOR: alarm
                     * @return RuleAction Rule Action
Enumeration value:
PASS: allowlist
BLOCK: Block and alarm
MONITOR: alarm
                     * 
                     */
                    std::string GetRuleAction() const;

                    /**
                     * 设置Rule Action
Enumeration value:
PASS: allowlist
BLOCK: Block and alarm
MONITOR: alarm
                     * @param _ruleAction Rule Action
Enumeration value:
PASS: allowlist
BLOCK: Block and alarm
MONITOR: alarm
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
Enumeration value:
INFO: Notification
LOW: low-risk
MEDIUM: Medium risk
HIGH: high risk
CRITICAL: Critical
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Rule status
Enumeration value:
ON: enabled.
OFF: disabled.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Asset type of the affiliation
Enumeration value:
HOST: host
CONTAINER: container
                     */
                    std::string m_belongAssetType;
                    bool m_belongAssetTypeHasBeenSet;

                    /**
                     * List of referenced system rules (including system rule names)
                     */
                    std::vector<TrafficSandboxLLMAuditRuleRef> m_systemRuleRefs;
                    bool m_systemRuleRefsHasBeenSet;

                    /**
                     * Effective scope of the rule
                     */
                    TrafficSandboxEffectScope m_effectScope;
                    bool m_effectScopeHasBeenSet;

                    /**
                     * List of ineffective assets: AI Agent assets in the policy association targets' effective assets where the traffic sandbox plug-in is not installed (TrafficPluginState.InstallStatus is not INSTALLED). Returns the InstanceId / ContainerId and TrafficPluginState of the machines. Returns an empty array if there are no ineffective assets.
                     */
                    std::vector<TrafficSandboxInactiveAsset> m_inactiveAssets;
                    bool m_inactiveAssetsHasBeenSet;

                    /**
                     * Creation time.
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO 8601 format)
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
Enumeration value:
PASS: allowlist
BLOCK: Block and alarm
MONITOR: alarm
                     */
                    std::string m_ruleAction;
                    bool m_ruleActionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXLLMAUDITRULEINFO_H_
