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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_AUDITPOLICY_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_AUDITPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * Audit Policy
                */
                class AuditPolicy : public AbstractModel
                {
                public:
                    AuditPolicy();
                    ~AuditPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Audit policy ID.
                     * @return PolicyId Audit policy ID.
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置Audit policy ID.
                     * @param _policyId Audit policy ID.
                     * 
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取Audit policy status. Valid values:
`creating`;
`running`,
`paused`;
`failed`.
                     * @return Status Audit policy status. Valid values:
`creating`;
`running`,
`paused`;
`failed`.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Audit policy status. Valid values:
`creating`;
`running`,
`paused`;
`failed`.
                     * @param _status Audit policy status. Valid values:
`creating`;
`running`,
`paused`;
`failed`.
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
                     * 获取Database instance ID
                     * @return InstanceId Database instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Database instance ID
                     * @param _instanceId Database instance ID
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
                     * 获取Creation time of audit policy in the format of 2019-03-20 17:09:13
                     * @return CreateTime Creation time of audit policy in the format of 2019-03-20 17:09:13
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time of audit policy in the format of 2019-03-20 17:09:13
                     * @param _createTime Creation time of audit policy in the format of 2019-03-20 17:09:13
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Last modified time of audit policy in the format of 2019-03-20 17:09:13
                     * @return ModifyTime Last modified time of audit policy in the format of 2019-03-20 17:09:13
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Last modified time of audit policy in the format of 2019-03-20 17:09:13
                     * @param _modifyTime Last modified time of audit policy in the format of 2019-03-20 17:09:13
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取Audit policy name
                     * @return PolicyName Audit policy name
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置Audit policy name
                     * @param _policyName Audit policy name
                     * 
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     * 
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取Audit rule ID
                     * @return RuleId Audit rule ID
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置Audit rule ID
                     * @param _ruleId Audit rule ID
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
                     * 获取Audit rule name
Note: This field may return `null`, indicating that no valid value was found.
                     * @return RuleName Audit rule name
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Audit rule name
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _ruleName Audit rule name
Note: This field may return `null`, indicating that no valid value was found.
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
                     * 获取Database instance name
Note: This field may return `null`, indicating that no valid value was found.
                     * @return InstanceName Database instance name
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Database instance name
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _instanceName Database instance name
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                private:

                    /**
                     * Audit policy ID.
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * Audit policy status. Valid values:
`creating`;
`running`,
`paused`;
`failed`.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Database instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Creation time of audit policy in the format of 2019-03-20 17:09:13
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last modified time of audit policy in the format of 2019-03-20 17:09:13
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Audit policy name
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * Audit rule ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Audit rule name
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Database instance name
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_AUDITPOLICY_H_
