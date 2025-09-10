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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_CREATEOWASPWHITERULEREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_CREATEOWASPWHITERULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/Strategy.h>
#include <tencentcloud/waf/v20180125/model/JobDateTime.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * CreateOwaspWhiteRule request structure.
                */
                class CreateOwaspWhiteRuleRequest : public AbstractModel
                {
                public:
                    CreateOwaspWhiteRuleRequest();
                    ~CreateOwaspWhiteRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Rule name
                     * @return Name Rule name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Rule name
                     * @param _name Rule name
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
                     * 获取Domain name
                     * @return Domain Domain name
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name
                     * @param _domain Domain name
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Rule-Based matching policy list.
                     * @return Strategies Rule-Based matching policy list.
                     * 
                     */
                    std::vector<Strategy> GetStrategies() const;

                    /**
                     * 设置Rule-Based matching policy list.
                     * @param _strategies Rule-Based matching policy list.
                     * 
                     */
                    void SetStrategies(const std::vector<Strategy>& _strategies);

                    /**
                     * 判断参数 Strategies 是否已赋值
                     * @return Strategies 是否已赋值
                     * 
                     */
                    bool StrategiesHasBeenSet() const;

                    /**
                     * 获取ID list of allowlisted rules.
                     * @return Ids ID list of allowlisted rules.
                     * 
                     */
                    std::vector<uint64_t> GetIds() const;

                    /**
                     * 设置ID list of allowlisted rules.
                     * @param _ids ID list of allowlisted rules.
                     * 
                     */
                    void SetIds(const std::vector<uint64_t>& _ids);

                    /**
                     * 判断参数 Ids 是否已赋值
                     * @return Ids 是否已赋值
                     * 
                     */
                    bool IdsHasBeenSet() const;

                    /**
                     * 获取Allowlist type. valid values: 0 (allowlisting by specific rule ID), 1 (allowlisting by rule type).
                     * @return Type Allowlist type. valid values: 0 (allowlisting by specific rule ID), 1 (allowlisting by rule type).
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置Allowlist type. valid values: 0 (allowlisting by specific rule ID), 1 (allowlisting by rule type).
                     * @param _type Allowlist type. valid values: 0 (allowlisting by specific rule ID), 1 (allowlisting by rule type).
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Rule execution mode: TimedJob indicates scheduled execution. CronJob indicates periodic execution.
                     * @return JobType Rule execution mode: TimedJob indicates scheduled execution. CronJob indicates periodic execution.
                     * 
                     */
                    std::string GetJobType() const;

                    /**
                     * 设置Rule execution mode: TimedJob indicates scheduled execution. CronJob indicates periodic execution.
                     * @param _jobType Rule execution mode: TimedJob indicates scheduled execution. CronJob indicates periodic execution.
                     * 
                     */
                    void SetJobType(const std::string& _jobType);

                    /**
                     * 判断参数 JobType 是否已赋值
                     * @return JobType 是否已赋值
                     * 
                     */
                    bool JobTypeHasBeenSet() const;

                    /**
                     * 获取Scheduled task configuration
                     * @return JobDateTime Scheduled task configuration
                     * 
                     */
                    JobDateTime GetJobDateTime() const;

                    /**
                     * 设置Scheduled task configuration
                     * @param _jobDateTime Scheduled task configuration
                     * 
                     */
                    void SetJobDateTime(const JobDateTime& _jobDateTime);

                    /**
                     * 判断参数 JobDateTime 是否已赋值
                     * @return JobDateTime 是否已赋值
                     * 
                     */
                    bool JobDateTimeHasBeenSet() const;

                    /**
                     * 获取If the JobDateTime field is not set, this field is used. 0 means permanent, other values indicate the cutoff time for scheduled effect (unit: seconds).
                     * @return ExpireTime If the JobDateTime field is not set, this field is used. 0 means permanent, other values indicate the cutoff time for scheduled effect (unit: seconds).
                     * 
                     */
                    uint64_t GetExpireTime() const;

                    /**
                     * 设置If the JobDateTime field is not set, this field is used. 0 means permanent, other values indicate the cutoff time for scheduled effect (unit: seconds).
                     * @param _expireTime If the JobDateTime field is not set, this field is used. 0 means permanent, other values indicate the cutoff time for scheduled effect (unit: seconds).
                     * 
                     */
                    void SetExpireTime(const uint64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取Rule status. valid values: 0 (disabled), 1 (enabled). enabled by default.
                     * @return Status Rule status. valid values: 0 (disabled), 1 (enabled). enabled by default.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Rule status. valid values: 0 (disabled), 1 (enabled). enabled by default.
                     * @param _status Rule status. valid values: 0 (disabled), 1 (enabled). enabled by default.
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Rule name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Domain name
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Rule-Based matching policy list.
                     */
                    std::vector<Strategy> m_strategies;
                    bool m_strategiesHasBeenSet;

                    /**
                     * ID list of allowlisted rules.
                     */
                    std::vector<uint64_t> m_ids;
                    bool m_idsHasBeenSet;

                    /**
                     * Allowlist type. valid values: 0 (allowlisting by specific rule ID), 1 (allowlisting by rule type).
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Rule execution mode: TimedJob indicates scheduled execution. CronJob indicates periodic execution.
                     */
                    std::string m_jobType;
                    bool m_jobTypeHasBeenSet;

                    /**
                     * Scheduled task configuration
                     */
                    JobDateTime m_jobDateTime;
                    bool m_jobDateTimeHasBeenSet;

                    /**
                     * If the JobDateTime field is not set, this field is used. 0 means permanent, other values indicate the cutoff time for scheduled effect (unit: seconds).
                     */
                    uint64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Rule status. valid values: 0 (disabled), 1 (enabled). enabled by default.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_CREATEOWASPWHITERULEREQUEST_H_
