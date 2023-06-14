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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_OPENAUDITSERVICEREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_OPENAUDITSERVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/AuditRuleFilters.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
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
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
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
                     * 获取Log retention period
                     * @return LogExpireDay Log retention period
                     * 
                     */
                    uint64_t GetLogExpireDay() const;

                    /**
                     * 设置Log retention period
                     * @param _logExpireDay Log retention period
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
                     * 获取Frequent log retention period
                     * @return HighLogExpireDay Frequent log retention period
                     * 
                     */
                    uint64_t GetHighLogExpireDay() const;

                    /**
                     * 设置Frequent log retention period
                     * @param _highLogExpireDay Frequent log retention period
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
                     * 获取Audit rule. If both this parameter and `RuleTemplateIds` are left empty, full audit will be applied.
                     * @return AuditRuleFilters Audit rule. If both this parameter and `RuleTemplateIds` are left empty, full audit will be applied.
                     * 
                     */
                    std::vector<AuditRuleFilters> GetAuditRuleFilters() const;

                    /**
                     * 设置Audit rule. If both this parameter and `RuleTemplateIds` are left empty, full audit will be applied.
                     * @param _auditRuleFilters Audit rule. If both this parameter and `RuleTemplateIds` are left empty, full audit will be applied.
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
                     * 获取Rule template ID. If both this parameter and `AuditRuleFilters` are left empty, full audit will be applied.
                     * @return RuleTemplateIds Rule template ID. If both this parameter and `AuditRuleFilters` are left empty, full audit will be applied.
                     * 
                     */
                    std::vector<std::string> GetRuleTemplateIds() const;

                    /**
                     * 设置Rule template ID. If both this parameter and `AuditRuleFilters` are left empty, full audit will be applied.
                     * @param _ruleTemplateIds Rule template ID. If both this parameter and `AuditRuleFilters` are left empty, full audit will be applied.
                     * 
                     */
                    void SetRuleTemplateIds(const std::vector<std::string>& _ruleTemplateIds);

                    /**
                     * 判断参数 RuleTemplateIds 是否已赋值
                     * @return RuleTemplateIds 是否已赋值
                     * 
                     */
                    bool RuleTemplateIdsHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Log retention period
                     */
                    uint64_t m_logExpireDay;
                    bool m_logExpireDayHasBeenSet;

                    /**
                     * Frequent log retention period
                     */
                    uint64_t m_highLogExpireDay;
                    bool m_highLogExpireDayHasBeenSet;

                    /**
                     * Audit rule. If both this parameter and `RuleTemplateIds` are left empty, full audit will be applied.
                     */
                    std::vector<AuditRuleFilters> m_auditRuleFilters;
                    bool m_auditRuleFiltersHasBeenSet;

                    /**
                     * Rule template ID. If both this parameter and `AuditRuleFilters` are left empty, full audit will be applied.
                     */
                    std::vector<std::string> m_ruleTemplateIds;
                    bool m_ruleTemplateIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_OPENAUDITSERVICEREQUEST_H_
