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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_ADDCUSTOMRULEREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_ADDCUSTOMRULEREQUEST_H_

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
                * AddCustomRule request structure.
                */
                class AddCustomRuleRequest : public AbstractModel
                {
                public:
                    AddCustomRuleRequest();
                    ~AddCustomRuleRequest() = default;
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
                     * 获取Priority
                     * @return SortId Priority
                     * 
                     */
                    std::string GetSortId() const;

                    /**
                     * 设置Priority
                     * @param _sortId Priority
                     * 
                     */
                    void SetSortId(const std::string& _sortId);

                    /**
                     * 判断参数 SortId 是否已赋值
                     * @return SortId 是否已赋值
                     * 
                     */
                    bool SortIdHasBeenSet() const;

                    /**
                     * 获取Policy details
                     * @return Strategies Policy details
                     * 
                     */
                    std::vector<Strategy> GetStrategies() const;

                    /**
                     * 设置Policy details
                     * @param _strategies Policy details
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
                     * 获取Domain name for adding policy
                     * @return Domain Domain name for adding policy
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name for adding policy
                     * @param _domain Domain name for adding policy
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
                     * 获取Action type: 1 for Block, 2 captcha, 3 for Observe, 4 for Redirect
                     * @return ActionType Action type: 1 for Block, 2 captcha, 3 for Observe, 4 for Redirect
                     * 
                     */
                    std::string GetActionType() const;

                    /**
                     * 设置Action type: 1 for Block, 2 captcha, 3 for Observe, 4 for Redirect
                     * @param _actionType Action type: 1 for Block, 2 captcha, 3 for Observe, 4 for Redirect
                     * 
                     */
                    void SetActionType(const std::string& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     * 
                     */
                    bool ActionTypeHasBeenSet() const;

                    /**
                     * 获取If the action is redirect, it indicates the redirect address; otherwise, it can be left blank.
                     * @return Redirect If the action is redirect, it indicates the redirect address; otherwise, it can be left blank.
                     * 
                     */
                    std::string GetRedirect() const;

                    /**
                     * 设置If the action is redirect, it indicates the redirect address; otherwise, it can be left blank.
                     * @param _redirect If the action is redirect, it indicates the redirect address; otherwise, it can be left blank.
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
                     * 获取Expiration time: in second-level timestamp, for example, 1677254399 indicates the expiration time is 2023-02-24 23:59:59; 0 indicates it will never expire.
                     * @return ExpireTime Expiration time: in second-level timestamp, for example, 1677254399 indicates the expiration time is 2023-02-24 23:59:59; 0 indicates it will never expire.
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置Expiration time: in second-level timestamp, for example, 1677254399 indicates the expiration time is 2023-02-24 23:59:59; 0 indicates it will never expire.
                     * @param _expireTime Expiration time: in second-level timestamp, for example, 1677254399 indicates the expiration time is 2023-02-24 23:59:59; 0 indicates it will never expire.
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取WAF instance type: sparta-waf for SaaS WAF, clb-waf for CLB WAF.
                     * @return Edition WAF instance type: sparta-waf for SaaS WAF, clb-waf for CLB WAF.
                     * 
                     */
                    std::string GetEdition() const;

                    /**
                     * 设置WAF instance type: sparta-waf for SaaS WAF, clb-waf for CLB WAF.
                     * @param _edition WAF instance type: sparta-waf for SaaS WAF, clb-waf for CLB WAF.
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
                     * 获取Details of release
                     * @return Bypass Details of release
                     * 
                     */
                    std::string GetBypass() const;

                    /**
                     * 设置Details of release
                     * @param _bypass Details of release
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
                     * 获取Source of the rule addition, default is empty
                     * @return EventId Source of the rule addition, default is empty
                     * 
                     */
                    std::string GetEventId() const;

                    /**
                     * 设置Source of the rule addition, default is empty
                     * @param _eventId Source of the rule addition, default is empty
                     * 
                     */
                    void SetEventId(const std::string& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

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
                     * 获取Rule execution time
                     * @return JobDateTime Rule execution time
                     * 
                     */
                    JobDateTime GetJobDateTime() const;

                    /**
                     * 设置Rule execution time
                     * @param _jobDateTime Rule execution time
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
                     * 获取Rule source. You can determine whether a rule comes from a mini program.
                     * @return Source Rule source. You can determine whether a rule comes from a mini program.
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置Rule source. You can determine whether a rule comes from a mini program.
                     * @param _source Rule source. You can determine whether a rule comes from a mini program.
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
                     * 获取Rule tag. It is used for mini program rules and identifies whether a rule is a built-in rule or a custom rule.
                     * @return Label Rule tag. It is used for mini program rules and identifies whether a rule is a built-in rule or a custom rule.
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置Rule tag. It is used for mini program rules and identifies whether a rule is a built-in rule or a custom rule.
                     * @param _label Rule tag. It is used for mini program rules and identifies whether a rule is a built-in rule or a custom rule.
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取Switch status. This value is passed when mini program risk control rules are used.
                     * @return Status Switch status. This value is passed when mini program risk control rules are used.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Switch status. This value is passed when mini program risk control rules are used.
                     * @param _status Switch status. This value is passed when mini program risk control rules are used.
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
                     * 获取Interception page ID
                     * @return PageId Interception page ID
                     * 
                     */
                    std::string GetPageId() const;

                    /**
                     * 设置Interception page ID
                     * @param _pageId Interception page ID
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
                     * Rule name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Priority
                     */
                    std::string m_sortId;
                    bool m_sortIdHasBeenSet;

                    /**
                     * Policy details
                     */
                    std::vector<Strategy> m_strategies;
                    bool m_strategiesHasBeenSet;

                    /**
                     * Domain name for adding policy
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Action type: 1 for Block, 2 captcha, 3 for Observe, 4 for Redirect
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * If the action is redirect, it indicates the redirect address; otherwise, it can be left blank.
                     */
                    std::string m_redirect;
                    bool m_redirectHasBeenSet;

                    /**
                     * Expiration time: in second-level timestamp, for example, 1677254399 indicates the expiration time is 2023-02-24 23:59:59; 0 indicates it will never expire.
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * WAF instance type: sparta-waf for SaaS WAF, clb-waf for CLB WAF.
                     */
                    std::string m_edition;
                    bool m_editionHasBeenSet;

                    /**
                     * Details of release
                     */
                    std::string m_bypass;
                    bool m_bypassHasBeenSet;

                    /**
                     * Source of the rule addition, default is empty
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * Rule execution mode: TimedJob indicates scheduled execution. CronJob indicates periodic execution.
                     */
                    std::string m_jobType;
                    bool m_jobTypeHasBeenSet;

                    /**
                     * Rule execution time
                     */
                    JobDateTime m_jobDateTime;
                    bool m_jobDateTimeHasBeenSet;

                    /**
                     * Rule source. You can determine whether a rule comes from a mini program.
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * Rule tag. It is used for mini program rules and identifies whether a rule is a built-in rule or a custom rule.
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * Switch status. This value is passed when mini program risk control rules are used.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Interception page ID
                     */
                    std::string m_pageId;
                    bool m_pageIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_ADDCUSTOMRULEREQUEST_H_
