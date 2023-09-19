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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_RATELIMITUSERRULE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_RATELIMITUSERRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/AclCondition.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
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
                     * 获取The request threshold. Value range: 0-4294967294.
                     * @return Threshold The request threshold. Value range: 0-4294967294.
                     * 
                     */
                    int64_t GetThreshold() const;

                    /**
                     * 设置The request threshold. Value range: 0-4294967294.
                     * @param _threshold The request threshold. Value range: 0-4294967294.
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
                     * 获取The statistical period. The value can be 10, 20, 30, 40, 50, or 60 seconds.
                     * @return Period The statistical period. The value can be 10, 20, 30, 40, 50, or 60 seconds.
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置The statistical period. The value can be 10, 20, 30, 40, 50, or 60 seconds.
                     * @param _period The statistical period. The value can be 10, 20, 30, 40, 50, or 60 seconds.
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
                     * 获取The rule name, which consists of only letters, digits, and underscores and cannot start with an underscore.
                     * @return RuleName The rule name, which consists of only letters, digits, and underscores and cannot start with an underscore.
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置The rule name, which consists of only letters, digits, and underscores and cannot start with an underscore.
                     * @param _ruleName The rule name, which consists of only letters, digits, and underscores and cannot start with an underscore.
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
                     * 获取Action. Valid values: <li>`monitor`: Observe;</li>`<li>drop`: Block;</li> <li>`alg`: JavaScript challenge. </li>	
                     * @return Action Action. Valid values: <li>`monitor`: Observe;</li>`<li>drop`: Block;</li> <li>`alg`: JavaScript challenge. </li>	
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Action. Valid values: <li>`monitor`: Observe;</li>`<li>drop`: Block;</li> <li>`alg`: JavaScript challenge. </li>	
                     * @param _action Action. Valid values: <li>`monitor`: Observe;</li>`<li>drop`: Block;</li> <li>`alg`: JavaScript challenge. </li>	
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
                     * 获取The amount of time taken to perform the action. Value range: 0 seconds - 2 days.
                     * @return PunishTime The amount of time taken to perform the action. Value range: 0 seconds - 2 days.
                     * 
                     */
                    int64_t GetPunishTime() const;

                    /**
                     * 设置The amount of time taken to perform the action. Value range: 0 seconds - 2 days.
                     * @param _punishTime The amount of time taken to perform the action. Value range: 0 seconds - 2 days.
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
                     * 获取The time unit. Values:
<li>`second`: Second</li>
<li>`minutes`: Minute</li>
<li>`hour`: Hour</li>
                     * @return PunishTimeUnit The time unit. Values:
<li>`second`: Second</li>
<li>`minutes`: Minute</li>
<li>`hour`: Hour</li>
                     * 
                     */
                    std::string GetPunishTimeUnit() const;

                    /**
                     * 设置The time unit. Values:
<li>`second`: Second</li>
<li>`minutes`: Minute</li>
<li>`hour`: Hour</li>
                     * @param _punishTimeUnit The time unit. Values:
<li>`second`: Second</li>
<li>`minutes`: Minute</li>
<li>`hour`: Hour</li>
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
                     * 获取The rule status. Values:
<li>`on`: Enabled</li>
<li>`off`: Disabled</li>Default value: on
                     * @return RuleStatus The rule status. Values:
<li>`on`: Enabled</li>
<li>`off`: Disabled</li>Default value: on
                     * 
                     */
                    std::string GetRuleStatus() const;

                    /**
                     * 设置The rule status. Values:
<li>`on`: Enabled</li>
<li>`off`: Disabled</li>Default value: on
                     * @param _ruleStatus The rule status. Values:
<li>`on`: Enabled</li>
<li>`off`: Disabled</li>Default value: on
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
                     * 获取The rule details.
                     * @return AclConditions The rule details.
                     * 
                     */
                    std::vector<AclCondition> GetAclConditions() const;

                    /**
                     * 设置The rule details.
                     * @param _aclConditions The rule details.
                     * 
                     */
                    void SetAclConditions(const std::vector<AclCondition>& _aclConditions);

                    /**
                     * 判断参数 AclConditions 是否已赋值
                     * @return AclConditions 是否已赋值
                     * 
                     */
                    bool AclConditionsHasBeenSet() const;

                    /**
                     * 获取The rule weight. Value range: 0-100.
                     * @return RulePriority The rule weight. Value range: 0-100.
                     * 
                     */
                    int64_t GetRulePriority() const;

                    /**
                     * 设置The rule weight. Value range: 0-100.
                     * @param _rulePriority The rule weight. Value range: 0-100.
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
                     * 获取Rule ID, which is only used as an output parameter.
Note: This field may return·`null`, indicating that no valid values can be obtained.
                     * @return RuleID Rule ID, which is only used as an output parameter.
Note: This field may return·`null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRuleID() const;

                    /**
                     * 设置Rule ID, which is only used as an output parameter.
Note: This field may return·`null`, indicating that no valid values can be obtained.
                     * @param _ruleID Rule ID, which is only used as an output parameter.
Note: This field may return·`null`, indicating that no valid values can be obtained.
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
                     * 获取The filter. Values:
<li>`sip`: Client IP</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FreqFields The filter. Values:
<li>`sip`: Client IP</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetFreqFields() const;

                    /**
                     * 设置The filter. Values:
<li>`sip`: Client IP</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _freqFields The filter. Values:
<li>`sip`: Client IP</li>
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdateTime Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _updateTime Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Statistical dimension. `source_to_eo` is entered by default when this parameter is not specified. Valid values:
<li>`source_to_eo`: (Response) Traffic going from the origin to EdgeOne. </li>
<li>`client_to_eo`: (Request) Traffic going from the client to EdgeOne.</li>
Note: This field may return·`null`, indicating that no valid values can be obtained.
                     * @return FreqScope Statistical dimension. `source_to_eo` is entered by default when this parameter is not specified. Valid values:
<li>`source_to_eo`: (Response) Traffic going from the origin to EdgeOne. </li>
<li>`client_to_eo`: (Request) Traffic going from the client to EdgeOne.</li>
Note: This field may return·`null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetFreqScope() const;

                    /**
                     * 设置Statistical dimension. `source_to_eo` is entered by default when this parameter is not specified. Valid values:
<li>`source_to_eo`: (Response) Traffic going from the origin to EdgeOne. </li>
<li>`client_to_eo`: (Request) Traffic going from the client to EdgeOne.</li>
Note: This field may return·`null`, indicating that no valid values can be obtained.
                     * @param _freqScope Statistical dimension. `source_to_eo` is entered by default when this parameter is not specified. Valid values:
<li>`source_to_eo`: (Response) Traffic going from the origin to EdgeOne. </li>
<li>`client_to_eo`: (Request) Traffic going from the client to EdgeOne.</li>
Note: This field may return·`null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFreqScope(const std::vector<std::string>& _freqScope);

                    /**
                     * 判断参数 FreqScope 是否已赋值
                     * @return FreqScope 是否已赋值
                     * 
                     */
                    bool FreqScopeHasBeenSet() const;

                private:

                    /**
                     * The request threshold. Value range: 0-4294967294.
                     */
                    int64_t m_threshold;
                    bool m_thresholdHasBeenSet;

                    /**
                     * The statistical period. The value can be 10, 20, 30, 40, 50, or 60 seconds.
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * The rule name, which consists of only letters, digits, and underscores and cannot start with an underscore.
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Action. Valid values: <li>`monitor`: Observe;</li>`<li>drop`: Block;</li> <li>`alg`: JavaScript challenge. </li>	
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * The amount of time taken to perform the action. Value range: 0 seconds - 2 days.
                     */
                    int64_t m_punishTime;
                    bool m_punishTimeHasBeenSet;

                    /**
                     * The time unit. Values:
<li>`second`: Second</li>
<li>`minutes`: Minute</li>
<li>`hour`: Hour</li>
                     */
                    std::string m_punishTimeUnit;
                    bool m_punishTimeUnitHasBeenSet;

                    /**
                     * The rule status. Values:
<li>`on`: Enabled</li>
<li>`off`: Disabled</li>Default value: on
                     */
                    std::string m_ruleStatus;
                    bool m_ruleStatusHasBeenSet;

                    /**
                     * The rule details.
                     */
                    std::vector<AclCondition> m_aclConditions;
                    bool m_aclConditionsHasBeenSet;

                    /**
                     * The rule weight. Value range: 0-100.
                     */
                    int64_t m_rulePriority;
                    bool m_rulePriorityHasBeenSet;

                    /**
                     * Rule ID, which is only used as an output parameter.
Note: This field may return·`null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * The filter. Values:
<li>`sip`: Client IP</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_freqFields;
                    bool m_freqFieldsHasBeenSet;

                    /**
                     * Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Statistical dimension. `source_to_eo` is entered by default when this parameter is not specified. Valid values:
<li>`source_to_eo`: (Response) Traffic going from the origin to EdgeOne. </li>
<li>`client_to_eo`: (Request) Traffic going from the client to EdgeOne.</li>
Note: This field may return·`null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_freqScope;
                    bool m_freqScopeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_RATELIMITUSERRULE_H_
