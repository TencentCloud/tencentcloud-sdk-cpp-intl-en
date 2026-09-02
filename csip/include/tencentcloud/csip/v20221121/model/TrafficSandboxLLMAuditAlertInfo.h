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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXLLMAUDITALERTINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXLLMAUDITALERTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * LLM audit alarm data structure
                */
                class TrafficSandboxLLMAuditAlertInfo : public AbstractModel
                {
                public:
                    TrafficSandboxLLMAuditAlertInfo();
                    ~TrafficSandboxLLMAuditAlertInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Alarm record ID</p>
                     * @return ID <p>Alarm record ID</p>
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置<p>Alarm record ID</p>
                     * @param _iD <p>Alarm record ID</p>
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
                     * 获取<p>Affiliated asset type<br>Enumeration values:<br>HOST: Host<br>CONTAINER: Container</p>
                     * @return BelongAssetType <p>Affiliated asset type<br>Enumeration values:<br>HOST: Host<br>CONTAINER: Container</p>
                     * 
                     */
                    std::string GetBelongAssetType() const;

                    /**
                     * 设置<p>Affiliated asset type<br>Enumeration values:<br>HOST: Host<br>CONTAINER: Container</p>
                     * @param _belongAssetType <p>Affiliated asset type<br>Enumeration values:<br>HOST: Host<br>CONTAINER: Container</p>
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
                     * 获取<p>ID of the hit user rule</p>
                     * @return RuleID <p>ID of the hit user rule</p>
                     * 
                     */
                    int64_t GetRuleID() const;

                    /**
                     * 设置<p>ID of the hit user rule</p>
                     * @param _ruleID <p>ID of the hit user rule</p>
                     * 
                     */
                    void SetRuleID(const int64_t& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     * 
                     */
                    bool RuleIDHasBeenSet() const;

                    /**
                     * 获取<p>Name of the hit user rule</p>
                     * @return RuleName <p>Name of the hit user rule</p>
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置<p>Name of the hit user rule</p>
                     * @param _ruleName <p>Name of the hit user rule</p>
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
                     * 获取<p>Name of the hit LLM audit system rule</p>
                     * @return SystemRuleName <p>Name of the hit LLM audit system rule</p>
                     * 
                     */
                    std::string GetSystemRuleName() const;

                    /**
                     * 设置<p>Name of the hit LLM audit system rule</p>
                     * @param _systemRuleName <p>Name of the hit LLM audit system rule</p>
                     * 
                     */
                    void SetSystemRuleName(const std::string& _systemRuleName);

                    /**
                     * 判断参数 SystemRuleName 是否已赋值
                     * @return SystemRuleName 是否已赋值
                     * 
                     */
                    bool SystemRuleNameHasBeenSet() const;

                    /**
                     * 获取<p>Instance ID</p>
                     * @return InstanceId <p>Instance ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance ID</p>
                     * @param _instanceId <p>Instance ID</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>Instance name.</p>
                     * @return InstanceName <p>Instance name.</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>Instance name.</p>
                     * @param _instanceName <p>Instance name.</p>
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取<p>Cluster ID.</p>
                     * @return ClusterId <p>Cluster ID.</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>Cluster ID.</p>
                     * @param _clusterId <p>Cluster ID.</p>
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>Container ID</p>
                     * @return ContainerId <p>Container ID</p>
                     * 
                     */
                    std::string GetContainerId() const;

                    /**
                     * 设置<p>Container ID</p>
                     * @param _containerId <p>Container ID</p>
                     * 
                     */
                    void SetContainerId(const std::string& _containerId);

                    /**
                     * 判断参数 ContainerId 是否已赋值
                     * @return ContainerId 是否已赋值
                     * 
                     */
                    bool ContainerIdHasBeenSet() const;

                    /**
                     * 获取<p>Container name</p>
                     * @return ContainerName <p>Container name</p>
                     * 
                     */
                    std::string GetContainerName() const;

                    /**
                     * 设置<p>Container name</p>
                     * @param _containerName <p>Container name</p>
                     * 
                     */
                    void SetContainerName(const std::string& _containerName);

                    /**
                     * 判断参数 ContainerName 是否已赋值
                     * @return ContainerName 是否已赋值
                     * 
                     */
                    bool ContainerNameHasBeenSet() const;

                    /**
                     * 获取<p>Risk description of the hit</p>
                     * @return HitPayload <p>Risk description of the hit</p>
                     * 
                     */
                    std::string GetHitPayload() const;

                    /**
                     * 设置<p>Risk description of the hit</p>
                     * @param _hitPayload <p>Risk description of the hit</p>
                     * 
                     */
                    void SetHitPayload(const std::string& _hitPayload);

                    /**
                     * 判断参数 HitPayload 是否已赋值
                     * @return HitPayload 是否已赋值
                     * 
                     */
                    bool HitPayloadHasBeenSet() const;

                    /**
                     * 获取<p>Hit action<br>Enumeration values:<br>PASS: allowlist<br>BLOCK: block and alarm<br>MONITOR: alarm</p>
                     * @return RuleAction <p>Hit action<br>Enumeration values:<br>PASS: allowlist<br>BLOCK: block and alarm<br>MONITOR: alarm</p>
                     * 
                     */
                    std::string GetRuleAction() const;

                    /**
                     * 设置<p>Hit action<br>Enumeration values:<br>PASS: allowlist<br>BLOCK: block and alarm<br>MONITOR: alarm</p>
                     * @param _ruleAction <p>Hit action<br>Enumeration values:<br>PASS: allowlist<br>BLOCK: block and alarm<br>MONITOR: alarm</p>
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
                     * 获取<p>Alarm level<br>Enumeration values:<br>INFO: notification<br>LOW: low risk<br>MEDIUM: medium risk<br>HIGH: high risk<br>CRITICAL: critical</p>
                     * @return Level <p>Alarm level<br>Enumeration values:<br>INFO: notification<br>LOW: low risk<br>MEDIUM: medium risk<br>HIGH: high risk<br>CRITICAL: critical</p>
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置<p>Alarm level<br>Enumeration values:<br>INFO: notification<br>LOW: low risk<br>MEDIUM: medium risk<br>HIGH: high risk<br>CRITICAL: critical</p>
                     * @param _level <p>Alarm level<br>Enumeration values:<br>INFO: notification<br>LOW: low risk<br>MEDIUM: medium risk<br>HIGH: high risk<br>CRITICAL: critical</p>
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
                     * 获取<p>Processing status<br>Enumeration values:<br>PENDING: unprocessed<br>HANDLED: processed<br>IGNORE: ignored<br>PASS: allowlisted<br>BLOCK: blocked</p>
                     * @return Status <p>Processing status<br>Enumeration values:<br>PENDING: unprocessed<br>HANDLED: processed<br>IGNORE: ignored<br>PASS: allowlisted<br>BLOCK: blocked</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Processing status<br>Enumeration values:<br>PENDING: unprocessed<br>HANDLED: processed<br>IGNORE: ignored<br>PASS: allowlisted<br>BLOCK: blocked</p>
                     * @param _status <p>Processing status<br>Enumeration values:<br>PENDING: unprocessed<br>HANDLED: processed<br>IGNORE: ignored<br>PASS: allowlisted<br>BLOCK: blocked</p>
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
                     * 获取<p>First alarm time</p>
                     * @return FirstAlertTime <p>First alarm time</p>
                     * 
                     */
                    std::string GetFirstAlertTime() const;

                    /**
                     * 设置<p>First alarm time</p>
                     * @param _firstAlertTime <p>First alarm time</p>
                     * 
                     */
                    void SetFirstAlertTime(const std::string& _firstAlertTime);

                    /**
                     * 判断参数 FirstAlertTime 是否已赋值
                     * @return FirstAlertTime 是否已赋值
                     * 
                     */
                    bool FirstAlertTimeHasBeenSet() const;

                    /**
                     * 获取<p>Last alarm time</p>
                     * @return LastAlertTime <p>Last alarm time</p>
                     * 
                     */
                    std::string GetLastAlertTime() const;

                    /**
                     * 设置<p>Last alarm time</p>
                     * @param _lastAlertTime <p>Last alarm time</p>
                     * 
                     */
                    void SetLastAlertTime(const std::string& _lastAlertTime);

                    /**
                     * 判断参数 LastAlertTime 是否已赋值
                     * @return LastAlertTime 是否已赋值
                     * 
                     */
                    bool LastAlertTimeHasBeenSet() const;

                private:

                    /**
                     * <p>Alarm record ID</p>
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>Affiliated asset type<br>Enumeration values:<br>HOST: Host<br>CONTAINER: Container</p>
                     */
                    std::string m_belongAssetType;
                    bool m_belongAssetTypeHasBeenSet;

                    /**
                     * <p>ID of the hit user rule</p>
                     */
                    int64_t m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * <p>Name of the hit user rule</p>
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * <p>Name of the hit LLM audit system rule</p>
                     */
                    std::string m_systemRuleName;
                    bool m_systemRuleNameHasBeenSet;

                    /**
                     * <p>Instance ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Instance name.</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>Cluster ID.</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>Container ID</p>
                     */
                    std::string m_containerId;
                    bool m_containerIdHasBeenSet;

                    /**
                     * <p>Container name</p>
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

                    /**
                     * <p>Risk description of the hit</p>
                     */
                    std::string m_hitPayload;
                    bool m_hitPayloadHasBeenSet;

                    /**
                     * <p>Hit action<br>Enumeration values:<br>PASS: allowlist<br>BLOCK: block and alarm<br>MONITOR: alarm</p>
                     */
                    std::string m_ruleAction;
                    bool m_ruleActionHasBeenSet;

                    /**
                     * <p>Alarm level<br>Enumeration values:<br>INFO: notification<br>LOW: low risk<br>MEDIUM: medium risk<br>HIGH: high risk<br>CRITICAL: critical</p>
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * <p>Processing status<br>Enumeration values:<br>PENDING: unprocessed<br>HANDLED: processed<br>IGNORE: ignored<br>PASS: allowlisted<br>BLOCK: blocked</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>First alarm time</p>
                     */
                    std::string m_firstAlertTime;
                    bool m_firstAlertTimeHasBeenSet;

                    /**
                     * <p>Last alarm time</p>
                     */
                    std::string m_lastAlertTime;
                    bool m_lastAlertTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXLLMAUDITALERTINFO_H_
