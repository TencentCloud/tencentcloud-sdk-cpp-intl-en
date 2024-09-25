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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_CCRULEITEM_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_CCRULEITEM_H_

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
                * CC rules
                */
                class CCRuleItem : public AbstractModel
                {
                public:
                    CCRuleItem();
                    ~CCRuleItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Advanced mode
                     * @return Advance Advanced mode
                     * 
                     */
                    uint64_t GetAdvance() const;

                    /**
                     * 设置Advanced mode
                     * @param _advance Advanced mode
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
                     * 获取Time period
                     * @return Interval Time period
                     * 
                     */
                    uint64_t GetInterval() const;

                    /**
                     * 设置Time period
                     * @param _interval Time period
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
                     * 获取Limit Attempts
                     * @return Limit Limit Attempts
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Limit Attempts
                     * @param _limit Limit Attempts
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
                     * 获取Matching Method
                     * @return MatchFunc Matching Method
                     * 
                     */
                    uint64_t GetMatchFunc() const;

                    /**
                     * 设置Matching Method
                     * @param _matchFunc Matching Method
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
                     * 获取Update Timestamp
                     * @return TsVersion Update Timestamp
                     * 
                     */
                    uint64_t GetTsVersion() const;

                    /**
                     * 设置Update Timestamp
                     * @param _tsVersion Update Timestamp
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
                     * 获取Matching URL
                     * @return Url Matching URL
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Matching URL
                     * @param _url Matching URL
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
                     * 获取Policy Action Validity Period
                     * @return ValidTime Policy Action Validity Period
                     * 
                     */
                    uint64_t GetValidTime() const;

                    /**
                     * 设置Policy Action Validity Period
                     * @param _validTime Policy Action Validity Period
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
                     * 获取Advanced Parameters

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OptionsArr Advanced Parameters

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOptionsArr() const;

                    /**
                     * 设置Advanced Parameters

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _optionsArr Advanced Parameters

Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取URL length
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Length URL length
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetLength() const;

                    /**
                     * 设置URL length
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _length URL length
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLength(const uint64_t& _length);

                    /**
                     * 判断参数 Length 是否已赋值
                     * @return Length 是否已赋值
                     * 
                     */
                    bool LengthHasBeenSet() const;

                    /**
                     * 获取Rule ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RuleId Rule ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRuleId() const;

                    /**
                     * 设置Rule ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ruleId Rule ID

Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Action
                     */
                    uint64_t m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * Advanced mode
                     */
                    uint64_t m_advance;
                    bool m_advanceHasBeenSet;

                    /**
                     * Time period
                     */
                    uint64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * Limit Attempts
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Matching Method
                     */
                    uint64_t m_matchFunc;
                    bool m_matchFuncHasBeenSet;

                    /**
                     * Name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Priority
                     */
                    uint64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * Status
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Update Timestamp
                     */
                    uint64_t m_tsVersion;
                    bool m_tsVersionHasBeenSet;

                    /**
                     * Matching URL
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Policy Action Validity Period
                     */
                    uint64_t m_validTime;
                    bool m_validTimeHasBeenSet;

                    /**
                     * Advanced Parameters

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_optionsArr;
                    bool m_optionsArrHasBeenSet;

                    /**
                     * URL length
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_length;
                    bool m_lengthHasBeenSet;

                    /**
                     * Rule ID

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_ruleId;
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

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_CCRULEITEM_H_
