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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYCUSTOMWHITERULEREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYCUSTOMWHITERULEREQUEST_H_

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
                * ModifyCustomWhiteRule request structure.
                */
                class ModifyCustomWhiteRuleRequest : public AbstractModel
                {
                public:
                    ModifyCustomWhiteRuleRequest();
                    ~ModifyCustomWhiteRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Edited domain
                     * @return Domain Edited domain
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Edited domain
                     * @param _domain Edited domain
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
                     * 获取Edited rule ID
                     * @return RuleId Edited rule ID
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置Edited rule ID
                     * @param _ruleId Edited rule ID
                     * 
                     */
                    void SetRuleId(const uint64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取Edited rule name
                     * @return RuleName Edited rule name
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Edited rule name
                     * @param _ruleName Edited rule name
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
                     * 获取Whether to continue executing other check logics when bypassing, continue executing regional ban protection - geoip; continue executing CC policy protection - cc; continue executing WEB application protection: owasp; continue executing AI engine protection - ai; continue executing information leakage protection - antileakage. If multiple items are selected, concatenate with commas (,).
                     * @return Bypass Whether to continue executing other check logics when bypassing, continue executing regional ban protection - geoip; continue executing CC policy protection - cc; continue executing WEB application protection: owasp; continue executing AI engine protection - ai; continue executing information leakage protection - antileakage. If multiple items are selected, concatenate with commas (,).
                     * 
                     */
                    std::string GetBypass() const;

                    /**
                     * 设置Whether to continue executing other check logics when bypassing, continue executing regional ban protection - geoip; continue executing CC policy protection - cc; continue executing WEB application protection: owasp; continue executing AI engine protection - ai; continue executing information leakage protection - antileakage. If multiple items are selected, concatenate with commas (,).
                     * @param _bypass Whether to continue executing other check logics when bypassing, continue executing regional ban protection - geoip; continue executing CC policy protection - cc; continue executing WEB application protection: owasp; continue executing AI engine protection - ai; continue executing information leakage protection - antileakage. If multiple items are selected, concatenate with commas (,).
                     * 
                     */
                    void SetBypass(const std::string& _bypass);

                    /**
                     * 判断参数 Bypass 是否已赋值
                     * @return Bypass 是否已赋值
                     * 
                     */
                    bool BypassHasBeenSet() const;

                    /**
                     * 获取Priority, an integer from 1 to 100. The smaller the number, the higher the execution priority of this rule.
                     * @return SortId Priority, an integer from 1 to 100. The smaller the number, the higher the execution priority of this rule.
                     * 
                     */
                    uint64_t GetSortId() const;

                    /**
                     * 设置Priority, an integer from 1 to 100. The smaller the number, the higher the execution priority of this rule.
                     * @param _sortId Priority, an integer from 1 to 100. The smaller the number, the higher the execution priority of this rule.
                     * 
                     */
                    void SetSortId(const uint64_t& _sortId);

                    /**
                     * 判断参数 SortId 是否已赋值
                     * @return SortId 是否已赋值
                     * 
                     */
                    bool SortIdHasBeenSet() const;

                    /**
                     * 获取Rule expiration deadline: 0 - permanently effective; other values correspond to the timestamp of the specified time.
                     * @return ExpireTime Rule expiration deadline: 0 - permanently effective; other values correspond to the timestamp of the specified time.
                     * 
                     */
                    uint64_t GetExpireTime() const;

                    /**
                     * 设置Rule expiration deadline: 0 - permanently effective; other values correspond to the timestamp of the specified time.
                     * @param _expireTime Rule expiration deadline: 0 - permanently effective; other values correspond to the timestamp of the specified time.
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
                     * 获取Matching condition array
                     * @return Strategies Matching condition array
                     * 
                     */
                    std::vector<Strategy> GetStrategies() const;

                    /**
                     * 设置Matching condition array
                     * @param _strategies Matching condition array
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
                     * 获取Scheduled task type
                     * @return JobType Scheduled task type
                     * 
                     */
                    std::string GetJobType() const;

                    /**
                     * 设置Scheduled task type
                     * @param _jobType Scheduled task type
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

                private:

                    /**
                     * Edited domain
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Edited rule ID
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Edited rule name
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Whether to continue executing other check logics when bypassing, continue executing regional ban protection - geoip; continue executing CC policy protection - cc; continue executing WEB application protection: owasp; continue executing AI engine protection - ai; continue executing information leakage protection - antileakage. If multiple items are selected, concatenate with commas (,).
                     */
                    std::string m_bypass;
                    bool m_bypassHasBeenSet;

                    /**
                     * Priority, an integer from 1 to 100. The smaller the number, the higher the execution priority of this rule.
                     */
                    uint64_t m_sortId;
                    bool m_sortIdHasBeenSet;

                    /**
                     * Rule expiration deadline: 0 - permanently effective; other values correspond to the timestamp of the specified time.
                     */
                    uint64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Matching condition array
                     */
                    std::vector<Strategy> m_strategies;
                    bool m_strategiesHasBeenSet;

                    /**
                     * Scheduled task type
                     */
                    std::string m_jobType;
                    bool m_jobTypeHasBeenSet;

                    /**
                     * Scheduled task configuration
                     */
                    JobDateTime m_jobDateTime;
                    bool m_jobDateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYCUSTOMWHITERULEREQUEST_H_
