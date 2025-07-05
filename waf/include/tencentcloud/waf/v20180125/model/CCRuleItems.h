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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_CCRULEITEMS_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_CCRULEITEMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * CC rule details
                */
                class CCRuleItems : public AbstractModel
                {
                public:
                    CCRuleItems();
                    ~CCRuleItems() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                    uint64_t GetStatus() const;

                    /**
                     * 设置Status
                     * @param _status Status
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Mode
                     * @return Advance Mode
                     * 
                     */
                    uint64_t GetAdvance() const;

                    /**
                     * 设置Mode
                     * @param _advance Mode
                     * 
                     */
                    void SetAdvance(const uint64_t& _advance);

                    /**
                     * 判断参数 Advance 是否已赋值
                     * @return Advance 是否已赋值
                     * 
                     */
                    bool AdvanceHasBeenSet() const;

                    /**
                     * 获取Limit
                     * @return Limit Limit
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Limit
                     * @param _limit Limit
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Detection interval
                     * @return Interval Detection interval
                     * 
                     */
                    uint64_t GetInterval() const;

                    /**
                     * 设置Detection interval
                     * @param _interval Detection interval
                     * 
                     */
                    void SetInterval(const uint64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取URL
                     * @return Url URL
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置URL
                     * @param _url URL
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
                     * 获取Type to match
                     * @return MatchFunc Type to match
                     * 
                     */
                    uint64_t GetMatchFunc() const;

                    /**
                     * 设置Type to match
                     * @param _matchFunc Type to match
                     * 
                     */
                    void SetMatchFunc(const uint64_t& _matchFunc);

                    /**
                     * 判断参数 MatchFunc 是否已赋值
                     * @return MatchFunc 是否已赋值
                     * 
                     */
                    bool MatchFuncHasBeenSet() const;

                    /**
                     * 获取Action
                     * @return ActionType Action
                     * 
                     */
                    uint64_t GetActionType() const;

                    /**
                     * 设置Action
                     * @param _actionType Action
                     * 
                     */
                    void SetActionType(const uint64_t& _actionType);

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
                    uint64_t GetPriority() const;

                    /**
                     * 设置Priority
                     * @param _priority Priority
                     * 
                     */
                    void SetPriority(const uint64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取Expiration time
                     * @return ValidTime Expiration time
                     * 
                     */
                    uint64_t GetValidTime() const;

                    /**
                     * 设置Expiration time
                     * @param _validTime Expiration time
                     * 
                     */
                    void SetValidTime(const uint64_t& _validTime);

                    /**
                     * 判断参数 ValidTime 是否已赋值
                     * @return ValidTime 是否已赋值
                     * 
                     */
                    bool ValidTimeHasBeenSet() const;

                    /**
                     * 获取Version
                     * @return TsVersion Version
                     * 
                     */
                    uint64_t GetTsVersion() const;

                    /**
                     * 设置Version
                     * @param _tsVersion Version
                     * 
                     */
                    void SetTsVersion(const uint64_t& _tsVersion);

                    /**
                     * 判断参数 TsVersion 是否已赋值
                     * @return TsVersion 是否已赋值
                     * 
                     */
                    bool TsVersionHasBeenSet() const;

                    /**
                     * 获取Rule details
                     * @return Options Rule details
                     * 
                     */
                    std::string GetOptions() const;

                    /**
                     * 设置Rule details
                     * @param _options Rule details
                     * 
                     */
                    void SetOptions(const std::string& _options);

                    /**
                     * 判断参数 Options 是否已赋值
                     * @return Options 是否已赋值
                     * 
                     */
                    bool OptionsHasBeenSet() const;

                    /**
                     * 获取Rule ID
                     * @return RuleId Rule ID
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置Rule ID
                     * @param _ruleId Rule ID
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
                     * 获取Associated session rules

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SessionApplied Associated session rules

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<int64_t> GetSessionApplied() const;

                    /**
                     * 设置Associated session rules

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sessionApplied Associated session rules

Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Creation time

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Creation time

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置Creation time

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Creation time

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * Name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Status
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Mode
                     */
                    uint64_t m_advance;
                    bool m_advanceHasBeenSet;

                    /**
                     * Limit
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Detection interval
                     */
                    uint64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * URL
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Type to match
                     */
                    uint64_t m_matchFunc;
                    bool m_matchFuncHasBeenSet;

                    /**
                     * Action
                     */
                    uint64_t m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * Priority
                     */
                    uint64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * Expiration time
                     */
                    uint64_t m_validTime;
                    bool m_validTimeHasBeenSet;

                    /**
                     * Version
                     */
                    uint64_t m_tsVersion;
                    bool m_tsVersionHasBeenSet;

                    /**
                     * Rule details
                     */
                    std::string m_options;
                    bool m_optionsHasBeenSet;

                    /**
                     * Rule ID
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Event ID

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * Associated session rules

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> m_sessionApplied;
                    bool m_sessionAppliedHasBeenSet;

                    /**
                     * Creation time

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_CCRULEITEMS_H_
