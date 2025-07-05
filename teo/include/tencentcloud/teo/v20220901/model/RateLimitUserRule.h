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
                     * 获取Action. Values:<li>`monitor`: Observe;</li><li>`drop`: Block;</li><li>`redirect`: Redirect;</li><li>`page`: Return a specific page;</li><li>`alg`: JavaScript challenge. </li>	
                     * @return Action Action. Values:<li>`monitor`: Observe;</li><li>`drop`: Block;</li><li>`redirect`: Redirect;</li><li>`page`: Return a specific page;</li><li>`alg`: JavaScript challenge. </li>	
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Action. Values:<li>`monitor`: Observe;</li><li>`drop`: Block;</li><li>`redirect`: Redirect;</li><li>`page`: Return a specific page;</li><li>`alg`: JavaScript challenge. </li>	
                     * @param _action Action. Values:<li>`monitor`: Observe;</li><li>`drop`: Block;</li><li>`redirect`: Redirect;</li><li>`page`: Return a specific page;</li><li>`alg`: JavaScript challenge. </li>	
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
<li>`off`: Disabled</li>Default value: `on`
                     * @return RuleStatus The rule status. Values:
<li>`on`: Enabled</li>
<li>`off`: Disabled</li>Default value: `on`
                     * 
                     */
                    std::string GetRuleStatus() const;

                    /**
                     * 设置The rule status. Values:
<li>`on`: Enabled</li>
<li>`off`: Disabled</li>Default value: `on`
                     * @param _ruleStatus The rule status. Values:
<li>`on`: Enabled</li>
<li>`off`: Disabled</li>Default value: `on`
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
                     * @return RuleID Rule ID, which is only used as an output parameter.
                     * 
                     */
                    int64_t GetRuleID() const;

                    /**
                     * 设置Rule ID, which is only used as an output parameter.
                     * @param _ruleID Rule ID, which is only used as an output parameter.
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
This parameter is left empty by default.
                     * @return FreqFields The filter. Values:
<li>`sip`: Client IP</li>
This parameter is left empty by default.
                     * 
                     */
                    std::vector<std::string> GetFreqFields() const;

                    /**
                     * 设置The filter. Values:
<li>`sip`: Client IP</li>
This parameter is left empty by default.
                     * @param _freqFields The filter. Values:
<li>`sip`: Client IP</li>
This parameter is left empty by default.
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
                     * 获取Update time. It is only used as a response parameter, and defaults to the current time. 
                     * @return UpdateTime Update time. It is only used as a response parameter, and defaults to the current time. 
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time. It is only used as a response parameter, and defaults to the current time. 
                     * @param _updateTime Update time. It is only used as a response parameter, and defaults to the current time. 
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
                     * 获取Query scope. Values:
<li>`source_to_eo`: (Response) Traffic going from the origin to EdgeOne.</li>
<li>`client_to_eo`: (Request) Traffic going from the client to EdgeOne.</li>
Default: `source_to_eo`.
                     * @return FreqScope Query scope. Values:
<li>`source_to_eo`: (Response) Traffic going from the origin to EdgeOne.</li>
<li>`client_to_eo`: (Request) Traffic going from the client to EdgeOne.</li>
Default: `source_to_eo`.
                     * 
                     */
                    std::vector<std::string> GetFreqScope() const;

                    /**
                     * 设置Query scope. Values:
<li>`source_to_eo`: (Response) Traffic going from the origin to EdgeOne.</li>
<li>`client_to_eo`: (Request) Traffic going from the client to EdgeOne.</li>
Default: `source_to_eo`.
                     * @param _freqScope Query scope. Values:
<li>`source_to_eo`: (Response) Traffic going from the origin to EdgeOne.</li>
<li>`client_to_eo`: (Request) Traffic going from the client to EdgeOne.</li>
Default: `source_to_eo`.
                     * 
                     */
                    void SetFreqScope(const std::vector<std::string>& _freqScope);

                    /**
                     * 判断参数 FreqScope 是否已赋值
                     * @return FreqScope 是否已赋值
                     * 
                     */
                    bool FreqScopeHasBeenSet() const;

                    /**
                     * 获取Name of the custom return page. It's required when `Action=page`.
                     * @return Name Name of the custom return page. It's required when `Action=page`.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name of the custom return page. It's required when `Action=page`.
                     * @param _name Name of the custom return page. It's required when `Action=page`.
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
                     * 获取ID of custom response. The ID can be obtained via the `DescribeCustomErrorPages` API. It's required when `Action=page`.	
                     * @return CustomResponseId ID of custom response. The ID can be obtained via the `DescribeCustomErrorPages` API. It's required when `Action=page`.	
                     * 
                     */
                    std::string GetCustomResponseId() const;

                    /**
                     * 设置ID of custom response. The ID can be obtained via the `DescribeCustomErrorPages` API. It's required when `Action=page`.	
                     * @param _customResponseId ID of custom response. The ID can be obtained via the `DescribeCustomErrorPages` API. It's required when `Action=page`.	
                     * 
                     */
                    void SetCustomResponseId(const std::string& _customResponseId);

                    /**
                     * 判断参数 CustomResponseId 是否已赋值
                     * @return CustomResponseId 是否已赋值
                     * 
                     */
                    bool CustomResponseIdHasBeenSet() const;

                    /**
                     * 获取The response code to trigger the return page. It's required when `Action=page`. Value: 100-600. 3xx response codes are not supported. Default value: 567.
                     * @return ResponseCode The response code to trigger the return page. It's required when `Action=page`. Value: 100-600. 3xx response codes are not supported. Default value: 567.
                     * 
                     */
                    int64_t GetResponseCode() const;

                    /**
                     * 设置The response code to trigger the return page. It's required when `Action=page`. Value: 100-600. 3xx response codes are not supported. Default value: 567.
                     * @param _responseCode The response code to trigger the return page. It's required when `Action=page`. Value: 100-600. 3xx response codes are not supported. Default value: 567.
                     * 
                     */
                    void SetResponseCode(const int64_t& _responseCode);

                    /**
                     * 判断参数 ResponseCode 是否已赋值
                     * @return ResponseCode 是否已赋值
                     * 
                     */
                    bool ResponseCodeHasBeenSet() const;

                    /**
                     * 获取The redirection URL. It's required when `Action=redirect`.
                     * @return RedirectUrl The redirection URL. It's required when `Action=redirect`.
                     * 
                     */
                    std::string GetRedirectUrl() const;

                    /**
                     * 设置The redirection URL. It's required when `Action=redirect`.
                     * @param _redirectUrl The redirection URL. It's required when `Action=redirect`.
                     * 
                     */
                    void SetRedirectUrl(const std::string& _redirectUrl);

                    /**
                     * 判断参数 RedirectUrl 是否已赋值
                     * @return RedirectUrl 是否已赋值
                     * 
                     */
                    bool RedirectUrlHasBeenSet() const;

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
                     * Action. Values:<li>`monitor`: Observe;</li><li>`drop`: Block;</li><li>`redirect`: Redirect;</li><li>`page`: Return a specific page;</li><li>`alg`: JavaScript challenge. </li>	
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
<li>`off`: Disabled</li>Default value: `on`
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
                     */
                    int64_t m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * The filter. Values:
<li>`sip`: Client IP</li>
This parameter is left empty by default.
                     */
                    std::vector<std::string> m_freqFields;
                    bool m_freqFieldsHasBeenSet;

                    /**
                     * Update time. It is only used as a response parameter, and defaults to the current time. 
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Query scope. Values:
<li>`source_to_eo`: (Response) Traffic going from the origin to EdgeOne.</li>
<li>`client_to_eo`: (Request) Traffic going from the client to EdgeOne.</li>
Default: `source_to_eo`.
                     */
                    std::vector<std::string> m_freqScope;
                    bool m_freqScopeHasBeenSet;

                    /**
                     * Name of the custom return page. It's required when `Action=page`.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * ID of custom response. The ID can be obtained via the `DescribeCustomErrorPages` API. It's required when `Action=page`.	
                     */
                    std::string m_customResponseId;
                    bool m_customResponseIdHasBeenSet;

                    /**
                     * The response code to trigger the return page. It's required when `Action=page`. Value: 100-600. 3xx response codes are not supported. Default value: 567.
                     */
                    int64_t m_responseCode;
                    bool m_responseCodeHasBeenSet;

                    /**
                     * The redirection URL. It's required when `Action=redirect`.
                     */
                    std::string m_redirectUrl;
                    bool m_redirectUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_RATELIMITUSERRULE_H_
