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
                * Bot custom rule
                */
                class BotUserRule : public AbstractModel
                {
                public:
                    BotUserRule();
                    ~BotUserRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rule name can only contain English characters, digits, and underscores, and cannot begin with an underscore.
                     * @return RuleName Rule name can only contain English characters, digits, and underscores, and cannot begin with an underscore.
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Rule name can only contain English characters, digits, and underscores, and cannot begin with an underscore.
                     * @param _ruleName Rule name can only contain English characters, digits, and underscores, and cannot begin with an underscore.
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
                     * 获取Disposal actions. Valid values:
<li>drop: block;</li>
<li>monitor: observation;</li>
<li>trans: pass;</li>
<li>redirect: Redirection;</li>
<li>page: Specified page;</li>
<li>alg: JavaScript challenge;</li>
<li>captcha: hosted challenge;</li>
<li>random: Random disposal;</li>
<li>silence: silence;</li>
<li>shortdelay: short-term response;</li>
<li>longdelay: long-time response.</li>
                     * @return Action Disposal actions. Valid values:
<li>drop: block;</li>
<li>monitor: observation;</li>
<li>trans: pass;</li>
<li>redirect: Redirection;</li>
<li>page: Specified page;</li>
<li>alg: JavaScript challenge;</li>
<li>captcha: hosted challenge;</li>
<li>random: Random disposal;</li>
<li>silence: silence;</li>
<li>shortdelay: short-term response;</li>
<li>longdelay: long-time response.</li>
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Disposal actions. Valid values:
<li>drop: block;</li>
<li>monitor: observation;</li>
<li>trans: pass;</li>
<li>redirect: Redirection;</li>
<li>page: Specified page;</li>
<li>alg: JavaScript challenge;</li>
<li>captcha: hosted challenge;</li>
<li>random: Random disposal;</li>
<li>silence: silence;</li>
<li>shortdelay: short-term response;</li>
<li>longdelay: long-time response.</li>
                     * @param _action Disposal actions. Valid values:
<li>drop: block;</li>
<li>monitor: observation;</li>
<li>trans: pass;</li>
<li>redirect: Redirection;</li>
<li>page: Specified page;</li>
<li>alg: JavaScript challenge;</li>
<li>captcha: hosted challenge;</li>
<li>random: Random disposal;</li>
<li>silence: silence;</li>
<li>shortdelay: short-term response;</li>
<li>longdelay: long-time response.</li>
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
                     * 获取Rule status. Valid values:
<li>`on`: Take effect;</li>
<li>off: Not effective.</li>Default on takes effect.
                     * @return RuleStatus Rule status. Valid values:
<li>`on`: Take effect;</li>
<li>off: Not effective.</li>Default on takes effect.
                     * 
                     */
                    std::string GetRuleStatus() const;

                    /**
                     * 设置Rule status. Valid values:
<li>`on`: Take effect;</li>
<li>off: Not effective.</li>Default on takes effect.
                     * @param _ruleStatus Rule status. Valid values:
<li>`on`: Take effect;</li>
<li>off: Not effective.</li>Default on takes effect.
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
                     * 获取Rule details.
                     * @return AclConditions Rule details.
                     * 
                     */
                    std::vector<AclCondition> GetAclConditions() const;

                    /**
                     * 设置Rule details.
                     * @param _aclConditions Rule details.
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
                     * 获取Rule weight. Value range: 0-100.
                     * @return RulePriority Rule weight. Value range: 0-100.
                     * 
                     */
                    int64_t GetRulePriority() const;

                    /**
                     * 设置Rule weight. Value range: 0-100.
                     * @param _rulePriority Rule weight. Value range: 0-100.
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
                     * 获取Rule Id. Output only.
                     * @return RuleID Rule Id. Output only.
                     * 
                     */
                    int64_t GetRuleID() const;

                    /**
                     * 设置Rule Id. Output only.
                     * @param _ruleID Rule Id. Output only.
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
                     * 获取Disposal method and proportion of random disposal. Optional for non-random disposal. Not currently supported.
                     * @return ExtendActions Disposal method and proportion of random disposal. Optional for non-random disposal. Not currently supported.
                     * 
                     */
                    std::vector<BotExtendAction> GetExtendActions() const;

                    /**
                     * 设置Disposal method and proportion of random disposal. Optional for non-random disposal. Not currently supported.
                     * @param _extendActions Disposal method and proportion of random disposal. Optional for non-random disposal. Not currently supported.
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
                     * 获取Filter word. Valid values:
<li>sip: Client IP.</li>
Defaults to an empty string.
                     * @return FreqFields Filter word. Valid values:
<li>sip: Client IP.</li>
Defaults to an empty string.
                     * 
                     */
                    std::vector<std::string> GetFreqFields() const;

                    /**
                     * 设置Filter word. Valid values:
<li>sip: Client IP.</li>
Defaults to an empty string.
                     * @param _freqFields Filter word. Valid values:
<li>sip: Client IP.</li>
Defaults to an empty string.
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
                     * 获取Update time. For output usage only.
                     * @return UpdateTime Update time. For output usage only.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time. For output usage only.
                     * @param _updateTime Update time. For output usage only.
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
                     * 获取Statistical scope. Valid values:
<li>source_to_eo: (Response) Origin server to EdgeOne;</li>
<li>client_to_eo: (request) Client to EdgeOne.</li>
Default value: source_to_eo.
                     * @return FreqScope Statistical scope. Valid values:
<li>source_to_eo: (Response) Origin server to EdgeOne;</li>
<li>client_to_eo: (request) Client to EdgeOne.</li>
Default value: source_to_eo.
                     * 
                     */
                    std::vector<std::string> GetFreqScope() const;

                    /**
                     * 设置Statistical scope. Valid values:
<li>source_to_eo: (Response) Origin server to EdgeOne;</li>
<li>client_to_eo: (request) Client to EdgeOne.</li>
Default value: source_to_eo.
                     * @param _freqScope Statistical scope. Valid values:
<li>source_to_eo: (Response) Origin server to EdgeOne;</li>
<li>client_to_eo: (request) Client to EdgeOne.</li>
Default value: source_to_eo.
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
                     * 获取Name of the custom return page. Required when Action is page, and cannot be empty.
                     * @return Name Name of the custom return page. Required when Action is page, and cannot be empty.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name of the custom return page. Required when Action is page, and cannot be empty.
                     * @param _name Name of the custom return page. Required when Action is page, and cannot be empty.
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
                     * 获取Custom response Id, which can be obtained through the customized error page list interface. The default value is `default`, which uses the system default page. Required and cannot be empty when Action is `page`.	
                     * @return CustomResponseId Custom response Id, which can be obtained through the customized error page list interface. The default value is `default`, which uses the system default page. Required and cannot be empty when Action is `page`.	
                     * 
                     */
                    std::string GetCustomResponseId() const;

                    /**
                     * 设置Custom response Id, which can be obtained through the customized error page list interface. The default value is `default`, which uses the system default page. Required and cannot be empty when Action is `page`.	
                     * @param _customResponseId Custom response Id, which can be obtained through the customized error page list interface. The default value is `default`, which uses the system default page. Required and cannot be empty when Action is `page`.	
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
                     * 获取Custom response code for the return to page. Required when Action is page, and cannot be empty. Value range: 100–600. 3xx response codes are not supported. Default value: 567.
                     * @return ResponseCode Custom response code for the return to page. Required when Action is page, and cannot be empty. Value range: 100–600. 3xx response codes are not supported. Default value: 567.
                     * 
                     */
                    int64_t GetResponseCode() const;

                    /**
                     * 设置Custom response code for the return to page. Required when Action is page, and cannot be empty. Value range: 100–600. 3xx response codes are not supported. Default value: 567.
                     * @param _responseCode Custom response code for the return to page. Required when Action is page, and cannot be empty. Value range: 100–600. 3xx response codes are not supported. Default value: 567.
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
                     * 获取Address for redirection. Required when Action is `redirect` and cannot be empty.
                     * @return RedirectUrl Address for redirection. Required when Action is `redirect` and cannot be empty.
                     * 
                     */
                    std::string GetRedirectUrl() const;

                    /**
                     * 设置Address for redirection. Required when Action is `redirect` and cannot be empty.
                     * @param _redirectUrl Address for redirection. Required when Action is `redirect` and cannot be empty.
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
                     * Rule name can only contain English characters, digits, and underscores, and cannot begin with an underscore.
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Disposal actions. Valid values:
<li>drop: block;</li>
<li>monitor: observation;</li>
<li>trans: pass;</li>
<li>redirect: Redirection;</li>
<li>page: Specified page;</li>
<li>alg: JavaScript challenge;</li>
<li>captcha: hosted challenge;</li>
<li>random: Random disposal;</li>
<li>silence: silence;</li>
<li>shortdelay: short-term response;</li>
<li>longdelay: long-time response.</li>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Rule status. Valid values:
<li>`on`: Take effect;</li>
<li>off: Not effective.</li>Default on takes effect.
                     */
                    std::string m_ruleStatus;
                    bool m_ruleStatusHasBeenSet;

                    /**
                     * Rule details.
                     */
                    std::vector<AclCondition> m_aclConditions;
                    bool m_aclConditionsHasBeenSet;

                    /**
                     * Rule weight. Value range: 0-100.
                     */
                    int64_t m_rulePriority;
                    bool m_rulePriorityHasBeenSet;

                    /**
                     * Rule Id. Output only.
                     */
                    int64_t m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * Disposal method and proportion of random disposal. Optional for non-random disposal. Not currently supported.
                     */
                    std::vector<BotExtendAction> m_extendActions;
                    bool m_extendActionsHasBeenSet;

                    /**
                     * Filter word. Valid values:
<li>sip: Client IP.</li>
Defaults to an empty string.
                     */
                    std::vector<std::string> m_freqFields;
                    bool m_freqFieldsHasBeenSet;

                    /**
                     * Update time. For output usage only.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Statistical scope. Valid values:
<li>source_to_eo: (Response) Origin server to EdgeOne;</li>
<li>client_to_eo: (request) Client to EdgeOne.</li>
Default value: source_to_eo.
                     */
                    std::vector<std::string> m_freqScope;
                    bool m_freqScopeHasBeenSet;

                    /**
                     * Name of the custom return page. Required when Action is page, and cannot be empty.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Custom response Id, which can be obtained through the customized error page list interface. The default value is `default`, which uses the system default page. Required and cannot be empty when Action is `page`.	
                     */
                    std::string m_customResponseId;
                    bool m_customResponseIdHasBeenSet;

                    /**
                     * Custom response code for the return to page. Required when Action is page, and cannot be empty. Value range: 100–600. 3xx response codes are not supported. Default value: 567.
                     */
                    int64_t m_responseCode;
                    bool m_responseCodeHasBeenSet;

                    /**
                     * Address for redirection. Required when Action is `redirect` and cannot be empty.
                     */
                    std::string m_redirectUrl;
                    bool m_redirectUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_BOTUSERRULE_H_
