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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ACLUSERRULE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ACLUSERRULE_H_

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
                * User-defined rules
                */
                class AclUserRule : public AbstractModel
                {
                public:
                    AclUserRule();
                    ~AclUserRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rule name.
                     * @return RuleName Rule name.
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Rule name.
                     * @param _ruleName Rule name.
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
                     * 获取Penalty action. Valid values:
<li>trans: pass;</li>
<li>drop: block;</li>
<li>monitor: observation;</li>
<li>ban: IP block;</li>
<li>redirect: Redirection;</li>
<li>page: Specified page;</li>
<li>alg: JavaScript challenge.</li>
                     * @return Action Penalty action. Valid values:
<li>trans: pass;</li>
<li>drop: block;</li>
<li>monitor: observation;</li>
<li>ban: IP block;</li>
<li>redirect: Redirection;</li>
<li>page: Specified page;</li>
<li>alg: JavaScript challenge.</li>
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Penalty action. Valid values:
<li>trans: pass;</li>
<li>drop: block;</li>
<li>monitor: observation;</li>
<li>ban: IP block;</li>
<li>redirect: Redirection;</li>
<li>page: Specified page;</li>
<li>alg: JavaScript challenge.</li>
                     * @param _action Penalty action. Valid values:
<li>trans: pass;</li>
<li>drop: block;</li>
<li>monitor: observation;</li>
<li>ban: IP block;</li>
<li>redirect: Redirection;</li>
<li>page: Specified page;</li>
<li>alg: JavaScript challenge.</li>
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
<li>off: Disable.</li>
                     * @return RuleStatus Rule status. Valid values:
<li>`on`: Take effect;</li>
<li>off: Disable.</li>
                     * 
                     */
                    std::string GetRuleStatus() const;

                    /**
                     * 设置Rule status. Valid values:
<li>`on`: Take effect;</li>
<li>off: Disable.</li>
                     * @param _ruleStatus Rule status. Valid values:
<li>`on`: Take effect;</li>
<li>off: Disable.</li>
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
                     * 获取Custom rule.
                     * @return AclConditions Custom rule.
                     * 
                     */
                    std::vector<AclCondition> GetAclConditions() const;

                    /**
                     * 设置Custom rule.
                     * @param _aclConditions Custom rule.
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
                     * 获取Rule priority. Value range: 0-100.
                     * @return RulePriority Rule priority. Value range: 0-100.
                     * 
                     */
                    int64_t GetRulePriority() const;

                    /**
                     * 设置Rule priority. Value range: 0-100.
                     * @param _rulePriority Rule priority. Value range: 0-100.
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
                     * 获取Penalty duration for ip blocking. Required when Action is ban. It cannot be empty and the value ranges from 0 to 2 days.
                     * @return PunishTime Penalty duration for ip blocking. Required when Action is ban. It cannot be empty and the value ranges from 0 to 2 days.
                     * 
                     */
                    int64_t GetPunishTime() const;

                    /**
                     * 设置Penalty duration for ip blocking. Required when Action is ban. It cannot be empty and the value ranges from 0 to 2 days.
                     * @param _punishTime Penalty duration for ip blocking. Required when Action is ban. It cannot be empty and the value ranges from 0 to 2 days.
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
                     * 获取Penalty time unit for ip blocking. Valid values:
<li>second: second;</li>
<li>minutes: minute;</li>
<li>hour: hour.</li>Default: second.
                     * @return PunishTimeUnit Penalty time unit for ip blocking. Valid values:
<li>second: second;</li>
<li>minutes: minute;</li>
<li>hour: hour.</li>Default: second.
                     * 
                     */
                    std::string GetPunishTimeUnit() const;

                    /**
                     * 设置Penalty time unit for ip blocking. Valid values:
<li>second: second;</li>
<li>minutes: minute;</li>
<li>hour: hour.</li>Default: second.
                     * @param _punishTimeUnit Penalty time unit for ip blocking. Valid values:
<li>second: second;</li>
<li>minutes: minute;</li>
<li>hour: hour.</li>Default: second.
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
                     * 获取Instance Id for the custom return page. Default value: 0, which means the system default blocking page is used. This parameter is deprecated.
                     * @return PageId Instance Id for the custom return page. Default value: 0, which means the system default blocking page is used. This parameter is deprecated.
                     * 
                     */
                    int64_t GetPageId() const;

                    /**
                     * 设置Instance Id for the custom return page. Default value: 0, which means the system default blocking page is used. This parameter is deprecated.
                     * @param _pageId Instance Id for the custom return page. Default value: 0, which means the system default blocking page is used. This parameter is deprecated.
                     * 
                     */
                    void SetPageId(const int64_t& _pageId);

                    /**
                     * 判断参数 PageId 是否已赋值
                     * @return PageId 是否已赋值
                     * 
                     */
                    bool PageIdHasBeenSet() const;

                    /**
                     * 获取Custom response Id, which can be obtained through the API for querying the custom error page list. The default value is default, which uses the system default page. Required and cannot be empty when Action is page.	
                     * @return CustomResponseId Custom response Id, which can be obtained through the API for querying the custom error page list. The default value is default, which uses the system default page. Required and cannot be empty when Action is page.	
                     * 
                     */
                    std::string GetCustomResponseId() const;

                    /**
                     * 设置Custom response Id, which can be obtained through the API for querying the custom error page list. The default value is default, which uses the system default page. Required and cannot be empty when Action is page.	
                     * @param _customResponseId Custom response Id, which can be obtained through the API for querying the custom error page list. The default value is default, which uses the system default page. Required and cannot be empty when Action is page.	
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
                     * 获取code of the custom return page. Required when Action is page. The value cannot be empty. Value range: 100-600. 3xx response codes are unsupported. Default value: 567.
                     * @return ResponseCode code of the custom return page. Required when Action is page. The value cannot be empty. Value range: 100-600. 3xx response codes are unsupported. Default value: 567.
                     * 
                     */
                    int64_t GetResponseCode() const;

                    /**
                     * 设置code of the custom return page. Required when Action is page. The value cannot be empty. Value range: 100-600. 3xx response codes are unsupported. Default value: 567.
                     * @param _responseCode code of the custom return page. Required when Action is page. The value cannot be empty. Value range: 100-600. 3xx response codes are unsupported. Default value: 567.
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
                     * Rule name.
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Penalty action. Valid values:
<li>trans: pass;</li>
<li>drop: block;</li>
<li>monitor: observation;</li>
<li>ban: IP block;</li>
<li>redirect: Redirection;</li>
<li>page: Specified page;</li>
<li>alg: JavaScript challenge.</li>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Rule status. Valid values:
<li>`on`: Take effect;</li>
<li>off: Disable.</li>
                     */
                    std::string m_ruleStatus;
                    bool m_ruleStatusHasBeenSet;

                    /**
                     * Custom rule.
                     */
                    std::vector<AclCondition> m_aclConditions;
                    bool m_aclConditionsHasBeenSet;

                    /**
                     * Rule priority. Value range: 0-100.
                     */
                    int64_t m_rulePriority;
                    bool m_rulePriorityHasBeenSet;

                    /**
                     * Rule Id. Output only.
                     */
                    int64_t m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * Update time. For output usage only.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Penalty duration for ip blocking. Required when Action is ban. It cannot be empty and the value ranges from 0 to 2 days.
                     */
                    int64_t m_punishTime;
                    bool m_punishTimeHasBeenSet;

                    /**
                     * Penalty time unit for ip blocking. Valid values:
<li>second: second;</li>
<li>minutes: minute;</li>
<li>hour: hour.</li>Default: second.
                     */
                    std::string m_punishTimeUnit;
                    bool m_punishTimeUnitHasBeenSet;

                    /**
                     * Name of the custom return page. Required when Action is page, and cannot be empty.	
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Instance Id for the custom return page. Default value: 0, which means the system default blocking page is used. This parameter is deprecated.
                     */
                    int64_t m_pageId;
                    bool m_pageIdHasBeenSet;

                    /**
                     * Custom response Id, which can be obtained through the API for querying the custom error page list. The default value is default, which uses the system default page. Required and cannot be empty when Action is page.	
                     */
                    std::string m_customResponseId;
                    bool m_customResponseIdHasBeenSet;

                    /**
                     * code of the custom return page. Required when Action is page. The value cannot be empty. Value range: 100-600. 3xx response codes are unsupported. Default value: 567.
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

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ACLUSERRULE_H_
