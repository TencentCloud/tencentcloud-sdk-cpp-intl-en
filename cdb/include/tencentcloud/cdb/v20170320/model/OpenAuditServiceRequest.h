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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_OPENAUDITSERVICEREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_OPENAUDITSERVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/AuditRuleFilters.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * OpenAuditService request structure.
                */
                class OpenAuditServiceRequest : public AbstractModel
                {
                public:
                    OpenAuditServiceRequest();
                    ~OpenAuditServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取TencentDB for MySQL instance ID
                     * @return InstanceId TencentDB for MySQL instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置TencentDB for MySQL instance ID
                     * @param _instanceId TencentDB for MySQL instance ID
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
                     * 获取Retention period of the audit log. Valid values:  `7` (one week), `30` (one month), `90` (three months), `180` (six months), `365` (one year), `1095` (three years), `1825` (five years).
                     * @return LogExpireDay Retention period of the audit log. Valid values:  `7` (one week), `30` (one month), `90` (three months), `180` (six months), `365` (one year), `1095` (three years), `1825` (five years).
                     * 
                     */
                    uint64_t GetLogExpireDay() const;

                    /**
                     * 设置Retention period of the audit log. Valid values:  `7` (one week), `30` (one month), `90` (three months), `180` (six months), `365` (one year), `1095` (three years), `1825` (five years).
                     * @param _logExpireDay Retention period of the audit log. Valid values:  `7` (one week), `30` (one month), `90` (three months), `180` (six months), `365` (one year), `1095` (three years), `1825` (five years).
                     * 
                     */
                    void SetLogExpireDay(const uint64_t& _logExpireDay);

                    /**
                     * 判断参数 LogExpireDay 是否已赋值
                     * @return LogExpireDay 是否已赋值
                     * 
                     */
                    bool LogExpireDayHasBeenSet() const;

                    /**
                     * 获取Retention period of high-frequency audit logs. Valid values:  `7` (one week), `30` (one month).
                     * @return HighLogExpireDay Retention period of high-frequency audit logs. Valid values:  `7` (one week), `30` (one month).
                     * 
                     */
                    uint64_t GetHighLogExpireDay() const;

                    /**
                     * 设置Retention period of high-frequency audit logs. Valid values:  `7` (one week), `30` (one month).
                     * @param _highLogExpireDay Retention period of high-frequency audit logs. Valid values:  `7` (one week), `30` (one month).
                     * 
                     */
                    void SetHighLogExpireDay(const uint64_t& _highLogExpireDay);

                    /**
                     * 判断参数 HighLogExpireDay 是否已赋值
                     * @return HighLogExpireDay 是否已赋值
                     * 
                     */
                    bool HighLogExpireDayHasBeenSet() const;

                    /**
                     * 获取Audit rule If both this parameter and `RuleTemplateIds` are left empty, full audit will be applied.
                     * @return AuditRuleFilters Audit rule If both this parameter and `RuleTemplateIds` are left empty, full audit will be applied.
                     * 
                     */
                    std::vector<AuditRuleFilters> GetAuditRuleFilters() const;

                    /**
                     * 设置Audit rule If both this parameter and `RuleTemplateIds` are left empty, full audit will be applied.
                     * @param _auditRuleFilters Audit rule If both this parameter and `RuleTemplateIds` are left empty, full audit will be applied.
                     * 
                     */
                    void SetAuditRuleFilters(const std::vector<AuditRuleFilters>& _auditRuleFilters);

                    /**
                     * 判断参数 AuditRuleFilters 是否已赋值
                     * @return AuditRuleFilters 是否已赋值
                     * 
                     */
                    bool AuditRuleFiltersHasBeenSet() const;

                    /**
                     * 获取Rule template ID. If both this parameter and AuditRuleFilters are not specified, all SQL statements will be recorded.
                     * @return RuleTemplateIds Rule template ID. If both this parameter and AuditRuleFilters are not specified, all SQL statements will be recorded.
                     * 
                     */
                    std::vector<std::string> GetRuleTemplateIds() const;

                    /**
                     * 设置Rule template ID. If both this parameter and AuditRuleFilters are not specified, all SQL statements will be recorded.
                     * @param _ruleTemplateIds Rule template ID. If both this parameter and AuditRuleFilters are not specified, all SQL statements will be recorded.
                     * 
                     */
                    void SetRuleTemplateIds(const std::vector<std::string>& _ruleTemplateIds);

                    /**
                     * 判断参数 RuleTemplateIds 是否已赋值
                     * @return RuleTemplateIds 是否已赋值
                     * 
                     */
                    bool RuleTemplateIdsHasBeenSet() const;

                    /**
                     * 获取Audit type. Valid values: true: Record all; false: Record by rules (default value).
                     * @return AuditAll Audit type. Valid values: true: Record all; false: Record by rules (default value).
                     * 
                     */
                    bool GetAuditAll() const;

                    /**
                     * 设置Audit type. Valid values: true: Record all; false: Record by rules (default value).
                     * @param _auditAll Audit type. Valid values: true: Record all; false: Record by rules (default value).
                     * 
                     */
                    void SetAuditAll(const bool& _auditAll);

                    /**
                     * 判断参数 AuditAll 是否已赋值
                     * @return AuditAll 是否已赋值
                     * 
                     */
                    bool AuditAllHasBeenSet() const;

                private:

                    /**
                     * TencentDB for MySQL instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Retention period of the audit log. Valid values:  `7` (one week), `30` (one month), `90` (three months), `180` (six months), `365` (one year), `1095` (three years), `1825` (five years).
                     */
                    uint64_t m_logExpireDay;
                    bool m_logExpireDayHasBeenSet;

                    /**
                     * Retention period of high-frequency audit logs. Valid values:  `7` (one week), `30` (one month).
                     */
                    uint64_t m_highLogExpireDay;
                    bool m_highLogExpireDayHasBeenSet;

                    /**
                     * Audit rule If both this parameter and `RuleTemplateIds` are left empty, full audit will be applied.
                     */
                    std::vector<AuditRuleFilters> m_auditRuleFilters;
                    bool m_auditRuleFiltersHasBeenSet;

                    /**
                     * Rule template ID. If both this parameter and AuditRuleFilters are not specified, all SQL statements will be recorded.
                     */
                    std::vector<std::string> m_ruleTemplateIds;
                    bool m_ruleTemplateIdsHasBeenSet;

                    /**
                     * Audit type. Valid values: true: Record all; false: Record by rules (default value).
                     */
                    bool m_auditAll;
                    bool m_auditAllHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_OPENAUDITSERVICEREQUEST_H_
