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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_UPSERTCCRULEREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_UPSERTCCRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * UpsertCCRule request structure.
                */
                class UpsertCCRuleRequest : public AbstractModel
                {
                public:
                    UpsertCCRuleRequest();
                    ~UpsertCCRuleRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Name
                     * @return Name Name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name
                     * @param _name Name
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
                     * 获取Status
                     * @return Status Status
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Status
                     * @param _status Status
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
                     * 获取Advanced mode (whether to use session detection). 0: disabled; 1: enabled
                     * @return Advance Advanced mode (whether to use session detection). 0: disabled; 1: enabled
                     * 
                     */
                    std::string GetAdvance() const;

                    /**
                     * 设置Advanced mode (whether to use session detection). 0: disabled; 1: enabled
                     * @param _advance Advanced mode (whether to use session detection). 0: disabled; 1: enabled
                     * 
                     */
                    void SetAdvance(const std::string& _advance);

                    /**
                     * 判断参数 Advance 是否已赋值
                     * @return Advance 是否已赋值
                     * 
                     */
                    bool AdvanceHasBeenSet() const;

                    /**
                     * 获取CC detection threshold
                     * @return Limit CC detection threshold
                     * 
                     */
                    std::string GetLimit() const;

                    /**
                     * 设置CC detection threshold
                     * @param _limit CC detection threshold
                     * 
                     */
                    void SetLimit(const std::string& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取CC detection cycle
                     * @return Interval CC detection cycle
                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置CC detection cycle
                     * @param _interval CC detection cycle
                     * 
                     */
                    void SetInterval(const std::string& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取Detection URL
                     * @return Url Detection URL
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Detection URL
                     * @param _url Detection URL
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取Matching method. 0: equal to; 1: prefix matching; 2: included
                     * @return MatchFunc Matching method. 0: equal to; 1: prefix matching; 2: included
                     * 
                     */
                    int64_t GetMatchFunc() const;

                    /**
                     * 设置Matching method. 0: equal to; 1: prefix matching; 2: included
                     * @param _matchFunc Matching method. 0: equal to; 1: prefix matching; 2: included
                     * 
                     */
                    void SetMatchFunc(const int64_t& _matchFunc);

                    /**
                     * 判断参数 MatchFunc 是否已赋值
                     * @return MatchFunc 是否已赋值
                     * 
                     */
                    bool MatchFuncHasBeenSet() const;

                    /**
                     * 获取Action. 20: observation; 21: CAPTCHA; 22: interception; 23: precise interception
                     * @return ActionType Action. 20: observation; 21: CAPTCHA; 22: interception; 23: precise interception
                     * 
                     */
                    std::string GetActionType() const;

                    /**
                     * 设置Action. 20: observation; 21: CAPTCHA; 22: interception; 23: precise interception
                     * @param _actionType Action. 20: observation; 21: CAPTCHA; 22: interception; 23: precise interception
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
                     * 获取Priority
                     * @return Priority Priority
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置Priority
                     * @param _priority Priority
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取Valid time for action
                     * @return ValidTime Valid time for action
                     * 
                     */
                    int64_t GetValidTime() const;

                    /**
                     * 设置Valid time for action
                     * @param _validTime Valid time for action
                     * 
                     */
                    void SetValidTime(const int64_t& _validTime);

                    /**
                     * 判断参数 ValidTime 是否已赋值
                     * @return ValidTime 是否已赋值
                     * 
                     */
                    bool ValidTimeHasBeenSet() const;

                    /**
                     * 获取Additional Parameters
                     * @return OptionsArr Additional Parameters
                     * 
                     */
                    std::string GetOptionsArr() const;

                    /**
                     * 设置Additional Parameters
                     * @param _optionsArr Additional Parameters
                     * 
                     */
                    void SetOptionsArr(const std::string& _optionsArr);

                    /**
                     * 判断参数 OptionsArr 是否已赋值
                     * @return OptionsArr 是否已赋值
                     * 
                     */
                    bool OptionsArrHasBeenSet() const;

                    /**
                     * 获取WAF version. The value can be sparta-waf or clb-waf.
                     * @return Edition WAF version. The value can be sparta-waf or clb-waf.
                     * 
                     */
                    std::string GetEdition() const;

                    /**
                     * 设置WAF version. The value can be sparta-waf or clb-waf.
                     * @param _edition WAF version. The value can be sparta-waf or clb-waf.
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
                     * 获取Operation type
                     * @return Type Operation type
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置Operation type
                     * @param _type Operation type
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
                     * 获取Source event ID for adding rules
                     * @return EventId Source event ID for adding rules
                     * 
                     */
                    std::string GetEventId() const;

                    /**
                     * 设置Source event ID for adding rules
                     * @param _eventId Source event ID for adding rules
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
                     * 获取Session ID that needs to be enabled for the rule
                     * @return SessionApplied Session ID that needs to be enabled for the rule
                     * 
                     */
                    std::vector<int64_t> GetSessionApplied() const;

                    /**
                     * 设置Session ID that needs to be enabled for the rule
                     * @param _sessionApplied Session ID that needs to be enabled for the rule
                     * 
                     */
                    void SetSessionApplied(const std::vector<int64_t>& _sessionApplied);

                    /**
                     * 判断参数 SessionApplied 是否已赋值
                     * @return SessionApplied 是否已赋值
                     * 
                     */
                    bool SessionAppliedHasBeenSet() const;

                    /**
                     * 获取Rule ID: fill in 0 when adding
                     * @return RuleId Rule ID: fill in 0 when adding
                     * 
                     */
                    int64_t GetRuleId() const;

                    /**
                     * 设置Rule ID: fill in 0 when adding
                     * @param _ruleId Rule ID: fill in 0 when adding
                     * 
                     */
                    void SetRuleId(const int64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取Rule creation time
                     * @return CreateTime Rule creation time
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置Rule creation time
                     * @param _createTime Rule creation time
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取URL length
                     * @return Length URL length
                     * 
                     */
                    uint64_t GetLength() const;

                    /**
                     * 设置URL length
                     * @param _length URL length
                     * 
                     */
                    void SetLength(const uint64_t& _length);

                    /**
                     * 判断参数 Length 是否已赋值
                     * @return Length 是否已赋值
                     * 
                     */
                    bool LengthHasBeenSet() const;

                private:

                    /**
                     * Domain name
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Status
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Advanced mode (whether to use session detection). 0: disabled; 1: enabled
                     */
                    std::string m_advance;
                    bool m_advanceHasBeenSet;

                    /**
                     * CC detection threshold
                     */
                    std::string m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * CC detection cycle
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * Detection URL
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Matching method. 0: equal to; 1: prefix matching; 2: included
                     */
                    int64_t m_matchFunc;
                    bool m_matchFuncHasBeenSet;

                    /**
                     * Action. 20: observation; 21: CAPTCHA; 22: interception; 23: precise interception
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * Priority
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * Valid time for action
                     */
                    int64_t m_validTime;
                    bool m_validTimeHasBeenSet;

                    /**
                     * Additional Parameters
                     */
                    std::string m_optionsArr;
                    bool m_optionsArrHasBeenSet;

                    /**
                     * WAF version. The value can be sparta-waf or clb-waf.
                     */
                    std::string m_edition;
                    bool m_editionHasBeenSet;

                    /**
                     * Operation type
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Source event ID for adding rules
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * Session ID that needs to be enabled for the rule
                     */
                    std::vector<int64_t> m_sessionApplied;
                    bool m_sessionAppliedHasBeenSet;

                    /**
                     * Rule ID: fill in 0 when adding
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Rule creation time
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * URL length
                     */
                    uint64_t m_length;
                    bool m_lengthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_UPSERTCCRULEREQUEST_H_
