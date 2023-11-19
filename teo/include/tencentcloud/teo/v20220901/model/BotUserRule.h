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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_BOTUSERRULE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_BOTUSERRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/AclCondition.h>
#include <tencentcloud/teo/v20220901/model/BotExtendAction.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Custom bot rules
                */
                class BotUserRule : public AbstractModel
                {
                public:
                    BotUserRule();
                    ~BotUserRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return RuleName 
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置
                     * @param _ruleName 
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
                     * 获取The action. Values:
<li>`drop`: Block the request</li>
<li>`monitor`: Observe</li>
<li>`trans`: Allow</li>
<li>`redirect`: Redirect the request</li>
<li>`page`: Return the specified page</li>
<li>`alg`: JavaScript challenge</li>
<li>`captcha`: Managed challenge</li>
<li>`random`: Handle the request randomly by the weight</li>
<li>`silence`: Keep the connection but do not response to the client</li>
<li>`shortdelay`: Add a short latency period</li>
<li>`longdelay`: Add a long latency period</li>
                     * @return Action The action. Values:
<li>`drop`: Block the request</li>
<li>`monitor`: Observe</li>
<li>`trans`: Allow</li>
<li>`redirect`: Redirect the request</li>
<li>`page`: Return the specified page</li>
<li>`alg`: JavaScript challenge</li>
<li>`captcha`: Managed challenge</li>
<li>`random`: Handle the request randomly by the weight</li>
<li>`silence`: Keep the connection but do not response to the client</li>
<li>`shortdelay`: Add a short latency period</li>
<li>`longdelay`: Add a long latency period</li>
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置The action. Values:
<li>`drop`: Block the request</li>
<li>`monitor`: Observe</li>
<li>`trans`: Allow</li>
<li>`redirect`: Redirect the request</li>
<li>`page`: Return the specified page</li>
<li>`alg`: JavaScript challenge</li>
<li>`captcha`: Managed challenge</li>
<li>`random`: Handle the request randomly by the weight</li>
<li>`silence`: Keep the connection but do not response to the client</li>
<li>`shortdelay`: Add a short latency period</li>
<li>`longdelay`: Add a long latency period</li>
                     * @param _action The action. Values:
<li>`drop`: Block the request</li>
<li>`monitor`: Observe</li>
<li>`trans`: Allow</li>
<li>`redirect`: Redirect the request</li>
<li>`page`: Return the specified page</li>
<li>`alg`: JavaScript challenge</li>
<li>`captcha`: Managed challenge</li>
<li>`random`: Handle the request randomly by the weight</li>
<li>`silence`: Keep the connection but do not response to the client</li>
<li>`shortdelay`: Add a short latency period</li>
<li>`longdelay`: Add a long latency period</li>
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
                     * 获取Details of the rule.
                     * @return AclConditions Details of the rule.
                     * 
                     */
                    std::vector<AclCondition> GetAclConditions() const;

                    /**
                     * 设置Details of the rule.
                     * @param _aclConditions Details of the rule.
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
                     * 获取[Currently unavailable] Specify the random action and percentage.
                     * @return ExtendActions [Currently unavailable] Specify the random action and percentage.
                     * 
                     */
                    std::vector<BotExtendAction> GetExtendActions() const;

                    /**
                     * 设置[Currently unavailable] Specify the random action and percentage.
                     * @param _extendActions [Currently unavailable] Specify the random action and percentage.
                     * 
                     */
                    void SetExtendActions(const std::vector<BotExtendAction>& _extendActions);

                    /**
                     * 判断参数 ExtendActions 是否已赋值
                     * @return ExtendActions 是否已赋值
                     * 
                     */
                    bool ExtendActionsHasBeenSet() const;

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
                     * 获取The update time, which is only used as an output parameter.
                     * @return UpdateTime The update time, which is only used as an output parameter.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置The update time, which is only used as an output parameter.
                     * @param _updateTime The update time, which is only used as an output parameter.
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
                     * 
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * The action. Values:
<li>`drop`: Block the request</li>
<li>`monitor`: Observe</li>
<li>`trans`: Allow</li>
<li>`redirect`: Redirect the request</li>
<li>`page`: Return the specified page</li>
<li>`alg`: JavaScript challenge</li>
<li>`captcha`: Managed challenge</li>
<li>`random`: Handle the request randomly by the weight</li>
<li>`silence`: Keep the connection but do not response to the client</li>
<li>`shortdelay`: Add a short latency period</li>
<li>`longdelay`: Add a long latency period</li>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * The rule status. Values:
<li>`on`: Enabled</li>
<li>`off`: Disabled</li>Default value: `on`
                     */
                    std::string m_ruleStatus;
                    bool m_ruleStatusHasBeenSet;

                    /**
                     * Details of the rule.
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
                     * [Currently unavailable] Specify the random action and percentage.
                     */
                    std::vector<BotExtendAction> m_extendActions;
                    bool m_extendActionsHasBeenSet;

                    /**
                     * The filter. Values:
<li>`sip`: Client IP</li>
This parameter is left empty by default.
                     */
                    std::vector<std::string> m_freqFields;
                    bool m_freqFieldsHasBeenSet;

                    /**
                     * The update time, which is only used as an output parameter.
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

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_BOTUSERRULE_H_
