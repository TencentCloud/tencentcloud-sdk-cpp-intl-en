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
                * Configuration range of K8sApi abnormal event rules 
                */
                class K8sApiAbnormalRuleScopeInfo : public AbstractModel
                {
                public:
                    K8sApiAbnormalRuleScopeInfo();
                    ~K8sApiAbnormalRuleScopeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Range
System event:
ANONYMOUS_ACCESS: Anonymous access
ABNORMAL_UA_REQ: Abnormal UA request
ANONYMOUS_ABNORMAL_PERMISSION: Abnormal changes on permissions of an anonymous user
GET_CREDENTIALS: Credential information acquisition
MOUNT_SENSITIVE_PATH: Sensitive path mounting
COMMAND_RUN: Command execution
PRIVILEGE_CONTAINER: Privilege container
EXCEPTION_CRONTAB_TASK: Aabnormal scheduled task
STATICS_POD: Static pod creation
ABNORMAL_CREATE_POD: Abnormal pod creation
USER_DEFINED: User defined
                     * @return Scope Range
System event:
ANONYMOUS_ACCESS: Anonymous access
ABNORMAL_UA_REQ: Abnormal UA request
ANONYMOUS_ABNORMAL_PERMISSION: Abnormal changes on permissions of an anonymous user
GET_CREDENTIALS: Credential information acquisition
MOUNT_SENSITIVE_PATH: Sensitive path mounting
COMMAND_RUN: Command execution
PRIVILEGE_CONTAINER: Privilege container
EXCEPTION_CRONTAB_TASK: Aabnormal scheduled task
STATICS_POD: Static pod creation
ABNORMAL_CREATE_POD: Abnormal pod creation
USER_DEFINED: User defined
                     * 
                     */
                    std::string GetScope() const;

                    /**
                     * 设置Range
System event:
ANONYMOUS_ACCESS: Anonymous access
ABNORMAL_UA_REQ: Abnormal UA request
ANONYMOUS_ABNORMAL_PERMISSION: Abnormal changes on permissions of an anonymous user
GET_CREDENTIALS: Credential information acquisition
MOUNT_SENSITIVE_PATH: Sensitive path mounting
COMMAND_RUN: Command execution
PRIVILEGE_CONTAINER: Privilege container
EXCEPTION_CRONTAB_TASK: Aabnormal scheduled task
STATICS_POD: Static pod creation
ABNORMAL_CREATE_POD: Abnormal pod creation
USER_DEFINED: User defined
                     * @param _scope Range
System event:
ANONYMOUS_ACCESS: Anonymous access
ABNORMAL_UA_REQ: Abnormal UA request
ANONYMOUS_ABNORMAL_PERMISSION: Abnormal changes on permissions of an anonymous user
GET_CREDENTIALS: Credential information acquisition
MOUNT_SENSITIVE_PATH: Sensitive path mounting
COMMAND_RUN: Command execution
PRIVILEGE_CONTAINER: Privilege container
EXCEPTION_CRONTAB_TASK: Aabnormal scheduled task
STATICS_POD: Static pod creation
ABNORMAL_CREATE_POD: Abnormal pod creation
USER_DEFINED: User defined
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
                     * 获取Action (RULE_MODE_ALERT: Alarm RULE_MODE_RELEASE: Release)
                     * @return Action Action (RULE_MODE_ALERT: Alarm RULE_MODE_RELEASE: Release)
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Action (RULE_MODE_ALERT: Alarm RULE_MODE_RELEASE: Release)
                     * @param _action Action (RULE_MODE_ALERT: Alarm RULE_MODE_RELEASE: Release)
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
                     * 获取Threat level: "HIGH": High-risk level; "MIDDLE": Middle-risk level; "LOW": Low-risk level; "NOTICE": Notice level
Note: This field may return `null`, indicating that no valid value was found.
                     * @return RiskLevel Threat level: "HIGH": High-risk level; "MIDDLE": Middle-risk level; "LOW": Low-risk level; "NOTICE": Notice level
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置Threat level: "HIGH": High-risk level; "MIDDLE": Middle-risk level; "LOW": Low-risk level; "NOTICE": Notice level
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _riskLevel Threat level: "HIGH": High-risk level; "MIDDLE": Middle-risk level; "LOW": Low-risk level; "NOTICE": Notice level
Note: This field may return `null`, indicating that no valid value was found.
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
                     * 获取Switch status (true: On; false: Off): applicable to system rules.
Note: This field may return `null`, indicating that no valid value was found.
                     * @return Status Switch status (true: On; false: Off): applicable to system rules.
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    bool GetStatus() const;

                    /**
                     * 设置Switch status (true: On; false: Off): applicable to system rules.
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _status Switch status (true: On; false: Off): applicable to system rules.
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetStatus(const bool& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Whether to delete: applicable to custom rule input parameters.
Note: This field may return `null`, indicating that no valid value was found.
                     * @return IsDelete Whether to delete: applicable to custom rule input parameters.
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    bool GetIsDelete() const;

                    /**
                     * 设置Whether to delete: applicable to custom rule input parameters.
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _isDelete Whether to delete: applicable to custom rule input parameters.
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetIsDelete(const bool& _isDelete);

                    /**
                     * 判断参数 IsDelete 是否已赋值
                     * @return IsDelete 是否已赋值
                     * 
                     */
                    bool IsDeleteHasBeenSet() const;

                private:

                    /**
                     * Range
System event:
ANONYMOUS_ACCESS: Anonymous access
ABNORMAL_UA_REQ: Abnormal UA request
ANONYMOUS_ABNORMAL_PERMISSION: Abnormal changes on permissions of an anonymous user
GET_CREDENTIALS: Credential information acquisition
MOUNT_SENSITIVE_PATH: Sensitive path mounting
COMMAND_RUN: Command execution
PRIVILEGE_CONTAINER: Privilege container
EXCEPTION_CRONTAB_TASK: Aabnormal scheduled task
STATICS_POD: Static pod creation
ABNORMAL_CREATE_POD: Abnormal pod creation
USER_DEFINED: User defined
                     */
                    std::string m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * Action (RULE_MODE_ALERT: Alarm RULE_MODE_RELEASE: Release)
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Threat level: "HIGH": High-risk level; "MIDDLE": Middle-risk level; "LOW": Low-risk level; "NOTICE": Notice level
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * Switch status (true: On; false: Off): applicable to system rules.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Whether to delete: applicable to custom rule input parameters.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    bool m_isDelete;
                    bool m_isDeleteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_K8SAPIABNORMALRULESCOPEINFO_H_
