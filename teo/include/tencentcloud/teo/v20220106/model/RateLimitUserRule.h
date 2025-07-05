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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_RATELIMITUSERRULE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_RATELIMITUSERRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/ACLCondition.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * Rate limit rule
                */
                class RateLimitUserRule : public AbstractModel
                {
                public:
                    RateLimitUserRule();
                    ~RateLimitUserRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rate threshold
                     * @return Threshold Rate threshold
                     * 
                     */
                    int64_t GetThreshold() const;

                    /**
                     * 设置Rate threshold
                     * @param _threshold Rate threshold
                     * 
                     */
                    void SetThreshold(const int64_t& _threshold);

                    /**
                     * 判断参数 Threshold 是否已赋值
                     * @return Threshold 是否已赋值
                     * 
                     */
                    bool ThresholdHasBeenSet() const;

                    /**
                     * 获取Data collection time
                     * @return Period Data collection time
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置Data collection time
                     * @param _period Data collection time
                     * 
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取Name of the rule
                     * @return RuleName Name of the rule
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Name of the rule
                     * @param _ruleName Name of the rule
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
                     * 获取Action: `monitor` (Observe), `drop` (Block)
                     * @return Action Action: `monitor` (Observe), `drop` (Block)
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Action: `monitor` (Observe), `drop` (Block)
                     * @param _action Action: `monitor` (Observe), `drop` (Block)
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取Time it takes to perform the action
                     * @return PunishTime Time it takes to perform the action
                     * 
                     */
                    int64_t GetPunishTime() const;

                    /**
                     * 设置Time it takes to perform the action
                     * @param _punishTime Time it takes to perform the action
                     * 
                     */
                    void SetPunishTime(const int64_t& _punishTime);

                    /**
                     * 判断参数 PunishTime 是否已赋值
                     * @return PunishTime 是否已赋值
                     * 
                     */
                    bool PunishTimeHasBeenSet() const;

                    /**
                     * 获取Time unit: second
                     * @return PunishTimeUnit Time unit: second
                     * 
                     */
                    std::string GetPunishTimeUnit() const;

                    /**
                     * 设置Time unit: second
                     * @param _punishTimeUnit Time unit: second
                     * 
                     */
                    void SetPunishTimeUnit(const std::string& _punishTimeUnit);

                    /**
                     * 判断参数 PunishTimeUnit 是否已赋值
                     * @return PunishTimeUnit 是否已赋值
                     * 
                     */
                    bool PunishTimeUnitHasBeenSet() const;

                    /**
                     * 获取Status of the rule
                     * @return RuleStatus Status of the rule
                     * 
                     */
                    std::string GetRuleStatus() const;

                    /**
                     * 设置Status of the rule
                     * @param _ruleStatus Status of the rule
                     * 
                     */
                    void SetRuleStatus(const std::string& _ruleStatus);

                    /**
                     * 判断参数 RuleStatus 是否已赋值
                     * @return RuleStatus 是否已赋值
                     * 
                     */
                    bool RuleStatusHasBeenSet() const;

                    /**
                     * 获取Rule
                     * @return Conditions Rule
                     * 
                     */
                    std::vector<ACLCondition> GetConditions() const;

                    /**
                     * 设置Rule
                     * @param _conditions Rule
                     * 
                     */
                    void SetConditions(const std::vector<ACLCondition>& _conditions);

                    /**
                     * 判断参数 Conditions 是否已赋值
                     * @return Conditions 是否已赋值
                     * 
                     */
                    bool ConditionsHasBeenSet() const;

                    /**
                     * 获取Priority of the rule
                     * @return RulePriority Priority of the rule
                     * 
                     */
                    int64_t GetRulePriority() const;

                    /**
                     * 设置Priority of the rule
                     * @param _rulePriority Priority of the rule
                     * 
                     */
                    void SetRulePriority(const int64_t& _rulePriority);

                    /**
                     * 判断参数 RulePriority 是否已赋值
                     * @return RulePriority 是否已赋值
                     * 
                     */
                    bool RulePriorityHasBeenSet() const;

                    /**
                     * 获取ID of the rule
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return RuleID ID of the rule
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetRuleID() const;

                    /**
                     * 设置ID of the rule
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _ruleID ID of the rule
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRuleID(const int64_t& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     * 
                     */
                    bool RuleIDHasBeenSet() const;

                    /**
                     * 获取Word filter
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return FreqFields Word filter
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetFreqFields() const;

                    /**
                     * 设置Word filter
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _freqFields Word filter
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetFreqFields(const std::vector<std::string>& _freqFields);

                    /**
                     * 判断参数 FreqFields 是否已赋值
                     * @return FreqFields 是否已赋值
                     * 
                     */
                    bool FreqFieldsHasBeenSet() const;

                    /**
                     * 获取Update time
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return UpdateTime Update time
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _updateTime Update time
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Rate threshold
                     */
                    int64_t m_threshold;
                    bool m_thresholdHasBeenSet;

                    /**
                     * Data collection time
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Name of the rule
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Action: `monitor` (Observe), `drop` (Block)
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Time it takes to perform the action
                     */
                    int64_t m_punishTime;
                    bool m_punishTimeHasBeenSet;

                    /**
                     * Time unit: second
                     */
                    std::string m_punishTimeUnit;
                    bool m_punishTimeUnitHasBeenSet;

                    /**
                     * Status of the rule
                     */
                    std::string m_ruleStatus;
                    bool m_ruleStatusHasBeenSet;

                    /**
                     * Rule
                     */
                    std::vector<ACLCondition> m_conditions;
                    bool m_conditionsHasBeenSet;

                    /**
                     * Priority of the rule
                     */
                    int64_t m_rulePriority;
                    bool m_rulePriorityHasBeenSet;

                    /**
                     * ID of the rule
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * Word filter
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_freqFields;
                    bool m_freqFieldsHasBeenSet;

                    /**
                     * Update time
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_RATELIMITUSERRULE_H_
