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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYCUSTOMRULEREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYCUSTOMRULEREQUEST_H_

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
                * ModifyCustomRule request structure.
                */
                class ModifyCustomRuleRequest : public AbstractModel
                {
                public:
                    ModifyCustomRuleRequest();
                    ~ModifyCustomRuleRequest() = default;
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
                     * 获取Executed actions: 0-allow, 1-block, 2-CAPTCHA, 3-observe, 4-redirect
                     * @return RuleAction Executed actions: 0-allow, 1-block, 2-CAPTCHA, 3-observe, 4-redirect
                     * 
                     */
                    std::string GetRuleAction() const;

                    /**
                     * 设置Executed actions: 0-allow, 1-block, 2-CAPTCHA, 3-observe, 4-redirect
                     * @param _ruleAction Executed actions: 0-allow, 1-block, 2-CAPTCHA, 3-observe, 4-redirect
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
                     * 获取Version of WAF. clb-waf indicates CLB WAF; sparta-waf indicates SaaS WAF. sparta-waf by default.
                     * @return Edition Version of WAF. clb-waf indicates CLB WAF; sparta-waf indicates SaaS WAF. sparta-waf by default.
                     * 
                     */
                    std::string GetEdition() const;

                    /**
                     * 设置Version of WAF. clb-waf indicates CLB WAF; sparta-waf indicates SaaS WAF. sparta-waf by default.
                     * @param _edition Version of WAF. clb-waf indicates CLB WAF; sparta-waf indicates SaaS WAF. sparta-waf by default.
                     * 
                     */
                    void SetEdition(const std::string& _edition);

                    /**
                     * 判断参数 Edition 是否已赋值
                     * @return Edition 是否已赋值
                     * 
                     */
                    bool EditionHasBeenSet() const;

                    /**
                     * 获取Redirected URL when action is set to redirect, / by default
                     * @return Redirect Redirected URL when action is set to redirect, / by default
                     * 
                     */
                    std::string GetRedirect() const;

                    /**
                     * 设置Redirected URL when action is set to redirect, / by default
                     * @param _redirect Redirected URL when action is set to redirect, / by default
                     * 
                     */
                    void SetRedirect(const std::string& _redirect);

                    /**
                     * 判断参数 Redirect 是否已赋值
                     * @return Redirect 是否已赋值
                     * 
                     */
                    bool RedirectHasBeenSet() const;

                    /**
                     * 获取Whether to continue executing other check logic upon allowing. geoip: continue region blocking protection; cc: continue CC policy protection; owasp: continue web application protection; ai: continue AI engine protection; antileakage: continue information leakage prevention. If multiple values are entered, separate them with commas (,).
The default value is "geoip,cc,owasp,ai,antileakage".
                     * @return Bypass Whether to continue executing other check logic upon allowing. geoip: continue region blocking protection; cc: continue CC policy protection; owasp: continue web application protection; ai: continue AI engine protection; antileakage: continue information leakage prevention. If multiple values are entered, separate them with commas (,).
The default value is "geoip,cc,owasp,ai,antileakage".
                     * 
                     */
                    std::string GetBypass() const;

                    /**
                     * 设置Whether to continue executing other check logic upon allowing. geoip: continue region blocking protection; cc: continue CC policy protection; owasp: continue web application protection; ai: continue AI engine protection; antileakage: continue information leakage prevention. If multiple values are entered, separate them with commas (,).
The default value is "geoip,cc,owasp,ai,antileakage".
                     * @param _bypass Whether to continue executing other check logic upon allowing. geoip: continue region blocking protection; cc: continue CC policy protection; owasp: continue web application protection; ai: continue AI engine protection; antileakage: continue information leakage prevention. If multiple values are entered, separate them with commas (,).
The default value is "geoip,cc,owasp,ai,antileakage".
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

The default value is 100.
                     * @return SortId Priority, an integer from 1 to 100. The smaller the number, the higher the execution priority of this rule.

The default value is 100.
                     * 
                     */
                    uint64_t GetSortId() const;

                    /**
                     * 设置Priority, an integer from 1 to 100. The smaller the number, the higher the execution priority of this rule.

The default value is 100.
                     * @param _sortId Priority, an integer from 1 to 100. The smaller the number, the higher the execution priority of this rule.

The default value is 100.
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

The default value is 0.
                     * @return ExpireTime Rule expiration deadline: 0 - permanently effective; other values correspond to the timestamp of the specified time.

The default value is 0.
                     * 
                     */
                    uint64_t GetExpireTime() const;

                    /**
                     * 设置Rule expiration deadline: 0 - permanently effective; other values correspond to the timestamp of the specified time.

The default value is 0.
                     * @param _expireTime Rule expiration deadline: 0 - permanently effective; other values correspond to the timestamp of the specified time.

The default value is 0.
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

                    /**
                     * 获取Rule source. This parameter checks whether the rule source is mini program.
                     * @return Source Rule source. This parameter checks whether the rule source is mini program.
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置Rule source. This parameter checks whether the rule source is mini program.
                     * @param _source Rule source. This parameter checks whether the rule source is mini program.
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取Enabling status. Pass the value for rules of mini program risk control.
                     * @return Status Enabling status. Pass the value for rules of mini program risk control.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Enabling status. Pass the value for rules of mini program risk control.
                     * @param _status Enabling status. Pass the value for rules of mini program risk control.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取ID of the blocked page
                     * @return PageId ID of the blocked page
                     * 
                     */
                    std::string GetPageId() const;

                    /**
                     * 设置ID of the blocked page
                     * @param _pageId ID of the blocked page
                     * 
                     */
                    void SetPageId(const std::string& _pageId);

                    /**
                     * 判断参数 PageId 是否已赋值
                     * @return PageId 是否已赋值
                     * 
                     */
                    bool PageIdHasBeenSet() const;

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
                     * Executed actions: 0-allow, 1-block, 2-CAPTCHA, 3-observe, 4-redirect
                     */
                    std::string m_ruleAction;
                    bool m_ruleActionHasBeenSet;

                    /**
                     * Matching condition array
                     */
                    std::vector<Strategy> m_strategies;
                    bool m_strategiesHasBeenSet;

                    /**
                     * Version of WAF. clb-waf indicates CLB WAF; sparta-waf indicates SaaS WAF. sparta-waf by default.
                     */
                    std::string m_edition;
                    bool m_editionHasBeenSet;

                    /**
                     * Redirected URL when action is set to redirect, / by default
                     */
                    std::string m_redirect;
                    bool m_redirectHasBeenSet;

                    /**
                     * Whether to continue executing other check logic upon allowing. geoip: continue region blocking protection; cc: continue CC policy protection; owasp: continue web application protection; ai: continue AI engine protection; antileakage: continue information leakage prevention. If multiple values are entered, separate them with commas (,).
The default value is "geoip,cc,owasp,ai,antileakage".
                     */
                    std::string m_bypass;
                    bool m_bypassHasBeenSet;

                    /**
                     * Priority, an integer from 1 to 100. The smaller the number, the higher the execution priority of this rule.

The default value is 100.
                     */
                    uint64_t m_sortId;
                    bool m_sortIdHasBeenSet;

                    /**
                     * Rule expiration deadline: 0 - permanently effective; other values correspond to the timestamp of the specified time.

The default value is 0.
                     */
                    uint64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

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

                    /**
                     * Rule source. This parameter checks whether the rule source is mini program.
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * Enabling status. Pass the value for rules of mini program risk control.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * ID of the blocked page
                     */
                    std::string m_pageId;
                    bool m_pageIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYCUSTOMRULEREQUEST_H_
