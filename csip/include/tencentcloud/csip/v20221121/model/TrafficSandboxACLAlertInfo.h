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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXACLALERTINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXACLALERTINFO_H_

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
                * Data structure of an ACL alert
                */
                class TrafficSandboxACLAlertInfo : public AbstractModel
                {
                public:
                    TrafficSandboxACLAlertInfo();
                    ~TrafficSandboxACLAlertInfo() = default;
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
                     * 获取<p>Asset type affiliation<br>Enumeration values:<br>HOST: Host<br>CONTAINER: Container</p>
                     * @return BelongAssetType <p>Asset type affiliation<br>Enumeration values:<br>HOST: Host<br>CONTAINER: Container</p>
                     * 
                     */
                    std::string GetBelongAssetType() const;

                    /**
                     * 设置<p>Asset type affiliation<br>Enumeration values:<br>HOST: Host<br>CONTAINER: Container</p>
                     * @param _belongAssetType <p>Asset type affiliation<br>Enumeration values:<br>HOST: Host<br>CONTAINER: Container</p>
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
                     * 获取<p>Hit user rule ID.</p>
                     * @return RuleID <p>Hit user rule ID.</p>
                     * 
                     */
                    int64_t GetRuleID() const;

                    /**
                     * 设置<p>Hit user rule ID.</p>
                     * @param _ruleID <p>Hit user rule ID.</p>
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
                     * 获取<p>Agent UUID</p>
                     * @return UUID <p>Agent UUID</p>
                     * 
                     */
                    std::string GetUUID() const;

                    /**
                     * 设置<p>Agent UUID</p>
                     * @param _uUID <p>Agent UUID</p>
                     * 
                     */
                    void SetUUID(const std::string& _uUID);

                    /**
                     * 判断参数 UUID 是否已赋值
                     * @return UUID 是否已赋值
                     * 
                     */
                    bool UUIDHasBeenSet() const;

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
                     * 获取<p>Process exe path</p>
                     * @return Exe <p>Process exe path</p>
                     * 
                     */
                    std::string GetExe() const;

                    /**
                     * 设置<p>Process exe path</p>
                     * @param _exe <p>Process exe path</p>
                     * 
                     */
                    void SetExe(const std::string& _exe);

                    /**
                     * 判断参数 Exe 是否已赋值
                     * @return Exe 是否已赋值
                     * 
                     */
                    bool ExeHasBeenSet() const;

                    /**
                     * 获取<p>Process command line parameters<br>Input parameter limit: maximum 4096 bytes. May be truncated if overly long</p>
                     * @return Param <p>Process command line parameters<br>Input parameter limit: maximum 4096 bytes. May be truncated if overly long</p>
                     * 
                     */
                    std::string GetParam() const;

                    /**
                     * 设置<p>Process command line parameters<br>Input parameter limit: maximum 4096 bytes. May be truncated if overly long</p>
                     * @param _param <p>Process command line parameters<br>Input parameter limit: maximum 4096 bytes. May be truncated if overly long</p>
                     * 
                     */
                    void SetParam(const std::string& _param);

                    /**
                     * 判断参数 Param 是否已赋值
                     * @return Param 是否已赋值
                     * 
                     */
                    bool ParamHasBeenSet() const;

                    /**
                     * 获取<p>Target address, such as GET http://xxxx or ip:port</p>
                     * @return Target <p>Target address, such as GET http://xxxx or ip:port</p>
                     * 
                     */
                    std::string GetTarget() const;

                    /**
                     * 设置<p>Target address, such as GET http://xxxx or ip:port</p>
                     * @param _target <p>Target address, such as GET http://xxxx or ip:port</p>
                     * 
                     */
                    void SetTarget(const std::string& _target);

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     * 
                     */
                    bool TargetHasBeenSet() const;

                    /**
                     * 获取<p>Protocol type<br>Enumeration values:<br>http<br>https</p>
                     * @return Protocol <p>Protocol type<br>Enumeration values:<br>http<br>https</p>
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置<p>Protocol type<br>Enumeration values:<br>http<br>https</p>
                     * @param _protocol <p>Protocol type<br>Enumeration values:<br>http<br>https</p>
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

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
                     * 获取<p>Processing status<br>Enumeration values:<br>PENDING: Unprocessed<br>HANDLED: Processed<br>IGNORE: Ignored<br>PASS: Allowlisted<br>BLOCK: Blocked</p>
                     * @return Status <p>Processing status<br>Enumeration values:<br>PENDING: Unprocessed<br>HANDLED: Processed<br>IGNORE: Ignored<br>PASS: Allowlisted<br>BLOCK: Blocked</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Processing status<br>Enumeration values:<br>PENDING: Unprocessed<br>HANDLED: Processed<br>IGNORE: Ignored<br>PASS: Allowlisted<br>BLOCK: Blocked</p>
                     * @param _status <p>Processing status<br>Enumeration values:<br>PENDING: Unprocessed<br>HANDLED: Processed<br>IGNORE: Ignored<br>PASS: Allowlisted<br>BLOCK: Blocked</p>
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
                     * 获取<p>Number of alarms</p>
                     * @return Count <p>Number of alarms</p>
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置<p>Number of alarms</p>
                     * @param _count <p>Number of alarms</p>
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取<p>Initial alarm time<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)</p>
                     * @return FirstAlertTime <p>Initial alarm time<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)</p>
                     * 
                     */
                    std::string GetFirstAlertTime() const;

                    /**
                     * 设置<p>Initial alarm time<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)</p>
                     * @param _firstAlertTime <p>Initial alarm time<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)</p>
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
                     * 获取<p>Last alarm time<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)</p>
                     * @return LastAlertTime <p>Last alarm time<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)</p>
                     * 
                     */
                    std::string GetLastAlertTime() const;

                    /**
                     * 设置<p>Last alarm time<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)</p>
                     * @param _lastAlertTime <p>Last alarm time<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)</p>
                     * 
                     */
                    void SetLastAlertTime(const std::string& _lastAlertTime);

                    /**
                     * 判断参数 LastAlertTime 是否已赋值
                     * @return LastAlertTime 是否已赋值
                     * 
                     */
                    bool LastAlertTimeHasBeenSet() const;

                    /**
                     * 获取<p>Hit action<br>Enumeration values:<br>PASS: Allowlist<br>BLOCK: Block and alarm<br>MONITOR: Alarm</p>
                     * @return RuleAction <p>Hit action<br>Enumeration values:<br>PASS: Allowlist<br>BLOCK: Block and alarm<br>MONITOR: Alarm</p>
                     * 
                     */
                    std::string GetRuleAction() const;

                    /**
                     * 设置<p>Hit action<br>Enumeration values:<br>PASS: Allowlist<br>BLOCK: Block and alarm<br>MONITOR: Alarm</p>
                     * @param _ruleAction <p>Hit action<br>Enumeration values:<br>PASS: Allowlist<br>BLOCK: Block and alarm<br>MONITOR: Alarm</p>
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
                     * <p>Alarm record ID</p>
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>Asset type affiliation<br>Enumeration values:<br>HOST: Host<br>CONTAINER: Container</p>
                     */
                    std::string m_belongAssetType;
                    bool m_belongAssetTypeHasBeenSet;

                    /**
                     * <p>Hit user rule ID.</p>
                     */
                    int64_t m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * <p>Name of the hit user rule</p>
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * <p>Agent UUID</p>
                     */
                    std::string m_uUID;
                    bool m_uUIDHasBeenSet;

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
                     * <p>Process exe path</p>
                     */
                    std::string m_exe;
                    bool m_exeHasBeenSet;

                    /**
                     * <p>Process command line parameters<br>Input parameter limit: maximum 4096 bytes. May be truncated if overly long</p>
                     */
                    std::string m_param;
                    bool m_paramHasBeenSet;

                    /**
                     * <p>Target address, such as GET http://xxxx or ip:port</p>
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * <p>Protocol type<br>Enumeration values:<br>http<br>https</p>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>Alarm level<br>Enumeration values:<br>INFO: notification<br>LOW: low risk<br>MEDIUM: medium risk<br>HIGH: high risk<br>CRITICAL: critical</p>
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * <p>Processing status<br>Enumeration values:<br>PENDING: Unprocessed<br>HANDLED: Processed<br>IGNORE: Ignored<br>PASS: Allowlisted<br>BLOCK: Blocked</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Number of alarms</p>
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * <p>Initial alarm time<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)</p>
                     */
                    std::string m_firstAlertTime;
                    bool m_firstAlertTimeHasBeenSet;

                    /**
                     * <p>Last alarm time<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)</p>
                     */
                    std::string m_lastAlertTime;
                    bool m_lastAlertTimeHasBeenSet;

                    /**
                     * <p>Hit action<br>Enumeration values:<br>PASS: Allowlist<br>BLOCK: Block and alarm<br>MONITOR: Alarm</p>
                     */
                    std::string m_ruleAction;
                    bool m_ruleActionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXACLALERTINFO_H_
