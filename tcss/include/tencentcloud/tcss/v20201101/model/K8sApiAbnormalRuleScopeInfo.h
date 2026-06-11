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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_K8SAPIABNORMALRULESCOPEINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_K8SAPIABNORMALRULESCOPEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * Configuration Scope for Kubernetes API Exception Event Rules
                */
                class K8sApiAbnormalRuleScopeInfo : public AbstractModel
                {
                public:
                    K8sApiAbnormalRuleScopeInfo();
                    ~K8sApiAbnormalRuleScopeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Execution action. The blocklist rule only supports RULE_MODE_ALERT (alert) and no longer supports RULE_MODE_RELEASE/PASS (allow). To allow, use the allowlist API ModifyK8sApiAbnormalWhitelist.</p>
                     * @return Action <p>Execution action. The blocklist rule only supports RULE_MODE_ALERT (alert) and no longer supports RULE_MODE_RELEASE/PASS (allow). To allow, use the allowlist API ModifyK8sApiAbnormalWhitelist.</p>
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置<p>Execution action. The blocklist rule only supports RULE_MODE_ALERT (alert) and no longer supports RULE_MODE_RELEASE/PASS (allow). To allow, use the allowlist API ModifyK8sApiAbnormalWhitelist.</p>
                     * @param _action <p>Execution action. The blocklist rule only supports RULE_MODE_ALERT (alert) and no longer supports RULE_MODE_RELEASE/PASS (allow). To allow, use the allowlist API ModifyK8sApiAbnormalWhitelist.</p>
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取<p>Scope.<br>System events:<br>ANONYMOUS_ACCESS: anonymous access<br>ABNORMAL_UA_REQ: abnormal UA request<br>ANONYMOUS_ABNORMAL_PERMISSION: anonymous user permission change<br>GET_CREDENTIALS: credential information acquisition<br>MOUNT_SENSITIVE_PATH: sensitive path mounting<br>COMMAND_RUN: command execution<br>PRIVILEGE_CONTAINER: privileged container<br>EXCEPTION_CRONTAB_TASK: abnormal scheduled task<br>STATICS_POD: static Pod creation<br>ABNORMAL_CREATE_POD: abnormal Pod creation<br>USER_DEFINED: user-defined</p>
                     * @return Scope <p>Scope.<br>System events:<br>ANONYMOUS_ACCESS: anonymous access<br>ABNORMAL_UA_REQ: abnormal UA request<br>ANONYMOUS_ABNORMAL_PERMISSION: anonymous user permission change<br>GET_CREDENTIALS: credential information acquisition<br>MOUNT_SENSITIVE_PATH: sensitive path mounting<br>COMMAND_RUN: command execution<br>PRIVILEGE_CONTAINER: privileged container<br>EXCEPTION_CRONTAB_TASK: abnormal scheduled task<br>STATICS_POD: static Pod creation<br>ABNORMAL_CREATE_POD: abnormal Pod creation<br>USER_DEFINED: user-defined</p>
                     * 
                     */
                    std::string GetScope() const;

                    /**
                     * 设置<p>Scope.<br>System events:<br>ANONYMOUS_ACCESS: anonymous access<br>ABNORMAL_UA_REQ: abnormal UA request<br>ANONYMOUS_ABNORMAL_PERMISSION: anonymous user permission change<br>GET_CREDENTIALS: credential information acquisition<br>MOUNT_SENSITIVE_PATH: sensitive path mounting<br>COMMAND_RUN: command execution<br>PRIVILEGE_CONTAINER: privileged container<br>EXCEPTION_CRONTAB_TASK: abnormal scheduled task<br>STATICS_POD: static Pod creation<br>ABNORMAL_CREATE_POD: abnormal Pod creation<br>USER_DEFINED: user-defined</p>
                     * @param _scope <p>Scope.<br>System events:<br>ANONYMOUS_ACCESS: anonymous access<br>ABNORMAL_UA_REQ: abnormal UA request<br>ANONYMOUS_ABNORMAL_PERMISSION: anonymous user permission change<br>GET_CREDENTIALS: credential information acquisition<br>MOUNT_SENSITIVE_PATH: sensitive path mounting<br>COMMAND_RUN: command execution<br>PRIVILEGE_CONTAINER: privileged container<br>EXCEPTION_CRONTAB_TASK: abnormal scheduled task<br>STATICS_POD: static Pod creation<br>ABNORMAL_CREATE_POD: abnormal Pod creation<br>USER_DEFINED: user-defined</p>
                     * 
                     */
                    void SetScope(const std::string& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取<p>Whether it has been deleted.</p>
                     * @return IsDelete <p>Whether it has been deleted.</p>
                     * 
                     */
                    bool GetIsDelete() const;

                    /**
                     * 设置<p>Whether it has been deleted.</p>
                     * @param _isDelete <p>Whether it has been deleted.</p>
                     * 
                     */
                    void SetIsDelete(const bool& _isDelete);

                    /**
                     * 判断参数 IsDelete 是否已赋值
                     * @return IsDelete 是否已赋值
                     * 
                     */
                    bool IsDeleteHasBeenSet() const;

                    /**
                     * 获取<p>Threat level: HIGH, MIDDLE, LOW, and NOTICE.</p>
                     * @return RiskLevel <p>Threat level: HIGH, MIDDLE, LOW, and NOTICE.</p>
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置<p>Threat level: HIGH, MIDDLE, LOW, and NOTICE.</p>
                     * @param _riskLevel <p>Threat level: HIGH, MIDDLE, LOW, and NOTICE.</p>
                     * 
                     */
                    void SetRiskLevel(const std::string& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取<p>Description of the rule type.</p>
                     * @return RuleTypeZH <p>Description of the rule type.</p>
                     * 
                     */
                    std::string GetRuleTypeZH() const;

                    /**
                     * 设置<p>Description of the rule type.</p>
                     * @param _ruleTypeZH <p>Description of the rule type.</p>
                     * 
                     */
                    void SetRuleTypeZH(const std::string& _ruleTypeZH);

                    /**
                     * 判断参数 RuleTypeZH 是否已赋值
                     * @return RuleTypeZH 是否已赋值
                     * 
                     */
                    bool RuleTypeZHHasBeenSet() const;

                    /**
                     * 获取<p>Switch status (true: on, false: off) applicable to system rules.</p>
                     * @return Status <p>Switch status (true: on, false: off) applicable to system rules.</p>
                     * 
                     */
                    bool GetStatus() const;

                    /**
                     * 设置<p>Switch status (true: on, false: off) applicable to system rules.</p>
                     * @param _status <p>Switch status (true: on, false: off) applicable to system rules.</p>
                     * 
                     */
                    void SetStatus(const bool& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * <p>Execution action. The blocklist rule only supports RULE_MODE_ALERT (alert) and no longer supports RULE_MODE_RELEASE/PASS (allow). To allow, use the allowlist API ModifyK8sApiAbnormalWhitelist.</p>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * <p>Scope.<br>System events:<br>ANONYMOUS_ACCESS: anonymous access<br>ABNORMAL_UA_REQ: abnormal UA request<br>ANONYMOUS_ABNORMAL_PERMISSION: anonymous user permission change<br>GET_CREDENTIALS: credential information acquisition<br>MOUNT_SENSITIVE_PATH: sensitive path mounting<br>COMMAND_RUN: command execution<br>PRIVILEGE_CONTAINER: privileged container<br>EXCEPTION_CRONTAB_TASK: abnormal scheduled task<br>STATICS_POD: static Pod creation<br>ABNORMAL_CREATE_POD: abnormal Pod creation<br>USER_DEFINED: user-defined</p>
                     */
                    std::string m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * <p>Whether it has been deleted.</p>
                     */
                    bool m_isDelete;
                    bool m_isDeleteHasBeenSet;

                    /**
                     * <p>Threat level: HIGH, MIDDLE, LOW, and NOTICE.</p>
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * <p>Description of the rule type.</p>
                     */
                    std::string m_ruleTypeZH;
                    bool m_ruleTypeZHHasBeenSet;

                    /**
                     * <p>Switch status (true: on, false: off) applicable to system rules.</p>
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_K8SAPIABNORMALRULESCOPEINFO_H_
