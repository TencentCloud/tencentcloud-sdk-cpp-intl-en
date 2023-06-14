/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_CREATEAUDITPOLICYREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_CREATEAUDITPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateAuditPolicy request structure.
                */
                class CreateAuditPolicyRequest : public AbstractModel
                {
                public:
                    CreateAuditPolicyRequest();
                    ~CreateAuditPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Audit policy name.
                     * @return Name Audit policy name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Audit policy name.
                     * @param _name Audit policy name.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Audit rule ID.
                     * @return RuleId Audit rule ID.
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置Audit rule ID.
                     * @param _ruleId Audit rule ID.
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
                     * 获取Instance ID in the format of cdb-c1nl9rpv or cdbro-c1nl9rpv. It is the same as the instance ID displayed in the TencentDB console.
                     * @return InstanceId Instance ID in the format of cdb-c1nl9rpv or cdbro-c1nl9rpv. It is the same as the instance ID displayed in the TencentDB console.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID in the format of cdb-c1nl9rpv or cdbro-c1nl9rpv. It is the same as the instance ID displayed in the TencentDB console.
                     * @param _instanceId Instance ID in the format of cdb-c1nl9rpv or cdbro-c1nl9rpv. It is the same as the instance ID displayed in the TencentDB console.
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
                     * 获取Retention period of audit logs. Valid values:
7: seven days (a week);
30: 30 days (a month);
180: 180 days (six months);
365: 365 days (a year);
1095: 1095 days (three years);
1825: 1825 days (five years).
This parameter specifies the retention period (30 days by default) of audit logs, which is valid when you create the first audit policy for an instance. If the instance already has audit policies, this parameter is invalid, but you can use the `ModifyAuditConfig` API to modify the retention period.
                     * @return LogExpireDay Retention period of audit logs. Valid values:
7: seven days (a week);
30: 30 days (a month);
180: 180 days (six months);
365: 365 days (a year);
1095: 1095 days (three years);
1825: 1825 days (five years).
This parameter specifies the retention period (30 days by default) of audit logs, which is valid when you create the first audit policy for an instance. If the instance already has audit policies, this parameter is invalid, but you can use the `ModifyAuditConfig` API to modify the retention period.
                     * 
                     */
                    int64_t GetLogExpireDay() const;

                    /**
                     * 设置Retention period of audit logs. Valid values:
7: seven days (a week);
30: 30 days (a month);
180: 180 days (six months);
365: 365 days (a year);
1095: 1095 days (three years);
1825: 1825 days (five years).
This parameter specifies the retention period (30 days by default) of audit logs, which is valid when you create the first audit policy for an instance. If the instance already has audit policies, this parameter is invalid, but you can use the `ModifyAuditConfig` API to modify the retention period.
                     * @param _logExpireDay Retention period of audit logs. Valid values:
7: seven days (a week);
30: 30 days (a month);
180: 180 days (six months);
365: 365 days (a year);
1095: 1095 days (three years);
1825: 1825 days (five years).
This parameter specifies the retention period (30 days by default) of audit logs, which is valid when you create the first audit policy for an instance. If the instance already has audit policies, this parameter is invalid, but you can use the `ModifyAuditConfig` API to modify the retention period.
                     * 
                     */
                    void SetLogExpireDay(const int64_t& _logExpireDay);

                    /**
                     * 判断参数 LogExpireDay 是否已赋值
                     * @return LogExpireDay 是否已赋值
                     * 
                     */
                    bool LogExpireDayHasBeenSet() const;

                private:

                    /**
                     * Audit policy name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Audit rule ID.
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Instance ID in the format of cdb-c1nl9rpv or cdbro-c1nl9rpv. It is the same as the instance ID displayed in the TencentDB console.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Retention period of audit logs. Valid values:
7: seven days (a week);
30: 30 days (a month);
180: 180 days (six months);
365: 365 days (a year);
1095: 1095 days (three years);
1825: 1825 days (five years).
This parameter specifies the retention period (30 days by default) of audit logs, which is valid when you create the first audit policy for an instance. If the instance already has audit policies, this parameter is invalid, but you can use the `ModifyAuditConfig` API to modify the retention period.
                     */
                    int64_t m_logExpireDay;
                    bool m_logExpireDayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_CREATEAUDITPOLICYREQUEST_H_
