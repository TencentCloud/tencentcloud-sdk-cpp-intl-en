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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBECUSTOMRULESRSPRULELISTITEM_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBECUSTOMRULESRSPRULELISTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Complex type in the DescribeCustomRules interface response packet
                */
                class DescribeCustomRulesRspRuleListItem : public AbstractModel
                {
                public:
                    DescribeCustomRulesRspRuleListItem();
                    ~DescribeCustomRulesRspRuleListItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Action type
                     * @return ActionType Action type
                     * 
                     */
                    std::string GetActionType() const;

                    /**
                     * 设置Action type
                     * @param _actionType Action type
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
                     * 获取Skipped Policy
                     * @return Bypass Skipped Policy
                     * 
                     */
                    std::string GetBypass() const;

                    /**
                     * 设置Skipped Policy
                     * @param _bypass Skipped Policy
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
                     * 获取Creation time
                     * @return CreateTime Creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param _createTime Creation time
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
                     * 获取Expiration time
                     * @return ExpireTime Expiration time
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置Expiration time
                     * @param _expireTime Expiration time
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
                     * 获取Policy name
                     * @return Name Policy name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Policy name
                     * @param _name Policy name
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
                     * 获取URL for redirection
                     * @return Redirect URL for redirection
                     * 
                     */
                    std::string GetRedirect() const;

                    /**
                     * 设置URL for redirection
                     * @param _redirect URL for redirection
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
                     * 获取Policy ID
                     * @return RuleId Policy ID
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置Policy ID
                     * @param _ruleId Policy ID
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
                     * 获取Status
                     * @return Status Status
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status
                     * @param _status Status
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
                     * 获取Event ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EventId Event ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEventId() const;

                    /**
                     * 设置Event ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _eventId Event ID

Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Modification time

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ModifyTime Modification time

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Modification time

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _modifyTime Modification time

Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Effective status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ValidStatus Effective status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetValidStatus() const;

                    /**
                     * 设置Effective status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _validStatus Effective status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetValidStatus(const int64_t& _validStatus);

                    /**
                     * 判断参数 ValidStatus 是否已赋值
                     * @return ValidStatus 是否已赋值
                     * 
                     */
                    bool ValidStatusHasBeenSet() const;

                    /**
                     * 获取Source
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Source Source
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置Source
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _source Source
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Scheduled task type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return JobType Scheduled task type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetJobType() const;

                    /**
                     * 设置Scheduled task type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _jobType Scheduled task type
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return JobDateTime Scheduled task configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    JobDateTime GetJobDateTime() const;

                    /**
                     * 设置Scheduled task configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _jobDateTime Scheduled task configuration
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Periodic task granularity
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CronType Periodic task granularity
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCronType() const;

                    /**
                     * 设置Periodic task granularity
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cronType Periodic task granularity
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCronType(const std::string& _cronType);

                    /**
                     * 判断参数 CronType 是否已赋值
                     * @return CronType 是否已赋值
                     * 
                     */
                    bool CronTypeHasBeenSet() const;

                    /**
                     * 获取Custom tag in risk control rules, indicating whether a rule is built-in or user-defined
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Label Custom tag in risk control rules, indicating whether a rule is built-in or user-defined
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置Custom tag in risk control rules, indicating whether a rule is built-in or user-defined
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _label Custom tag in risk control rules, indicating whether a rule is built-in or user-defined
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取ID of the blocked page
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PageId ID of the blocked page
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPageId() const;

                    /**
                     * 设置ID of the blocked page
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _pageId ID of the blocked page
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPageId(const std::string& _pageId);

                    /**
                     * 判断参数 PageId 是否已赋值
                     * @return PageId 是否已赋值
                     * 
                     */
                    bool PageIdHasBeenSet() const;

                    /**
                     * 获取Domain name

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Domain Domain name

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _domain Domain name

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                private:

                    /**
                     * Action type
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * Skipped Policy
                     */
                    std::string m_bypass;
                    bool m_bypassHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Expiration time
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Policy name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * URL for redirection
                     */
                    std::string m_redirect;
                    bool m_redirectHasBeenSet;

                    /**
                     * Policy ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Priority
                     */
                    std::string m_sortId;
                    bool m_sortIdHasBeenSet;

                    /**
                     * Status
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Policy details
                     */
                    std::vector<Strategy> m_strategies;
                    bool m_strategiesHasBeenSet;

                    /**
                     * Event ID

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * Modification time

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Effective status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_validStatus;
                    bool m_validStatusHasBeenSet;

                    /**
                     * Source
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * Scheduled task type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_jobType;
                    bool m_jobTypeHasBeenSet;

                    /**
                     * Scheduled task configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    JobDateTime m_jobDateTime;
                    bool m_jobDateTimeHasBeenSet;

                    /**
                     * Periodic task granularity
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cronType;
                    bool m_cronTypeHasBeenSet;

                    /**
                     * Custom tag in risk control rules, indicating whether a rule is built-in or user-defined
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * ID of the blocked page
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_pageId;
                    bool m_pageIdHasBeenSet;

                    /**
                     * Domain name

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBECUSTOMRULESRSPRULELISTITEM_H_
