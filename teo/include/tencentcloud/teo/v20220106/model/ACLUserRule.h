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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_ACLUSERRULE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_ACLUSERRULE_H_

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
                * Custom ACL rule
                */
                class ACLUserRule : public AbstractModel
                {
                public:
                    ACLUserRule();
                    ~ACLUserRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Action
                     * @return Action Action
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Action
                     * @param _action Action
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
                     * 获取ACL rule
                     * @return Conditions ACL rule
                     * 
                     */
                    std::vector<ACLCondition> GetConditions() const;

                    /**
                     * 设置ACL rule
                     * @param _conditions ACL rule
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

                    /**
                     * 获取IP blocking time
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return PunishTime IP blocking time
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetPunishTime() const;

                    /**
                     * 设置IP blocking time
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _punishTime IP blocking time
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取IP blocking time unit
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return PunishTimeUnit IP blocking time unit
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetPunishTimeUnit() const;

                    /**
                     * 设置IP blocking time unit
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _punishTimeUnit IP blocking time unit
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Name of the custom block page
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Name Name of the custom block page
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name of the custom block page
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _name Name of the custom block page
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取ID of the custom block page
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return PageId ID of the custom block page
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetPageId() const;

                    /**
                     * 设置ID of the custom block page
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _pageId ID of the custom block page
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Redirection URL, which must be a subdomain name of the site
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return RedirectUrl Redirection URL, which must be a subdomain name of the site
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetRedirectUrl() const;

                    /**
                     * 设置Redirection URL, which must be a subdomain name of the site
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _redirectUrl Redirection URL, which must be a subdomain name of the site
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRedirectUrl(const std::string& _redirectUrl);

                    /**
                     * 判断参数 RedirectUrl 是否已赋值
                     * @return RedirectUrl 是否已赋值
                     * 
                     */
                    bool RedirectUrlHasBeenSet() const;

                    /**
                     * 获取Return code configured on the custom block page
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return ResponseCode Return code configured on the custom block page
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetResponseCode() const;

                    /**
                     * 设置Return code configured on the custom block page
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _responseCode Return code configured on the custom block page
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetResponseCode(const int64_t& _responseCode);

                    /**
                     * 判断参数 ResponseCode 是否已赋值
                     * @return ResponseCode 是否已赋值
                     * 
                     */
                    bool ResponseCodeHasBeenSet() const;

                private:

                    /**
                     * Name of the rule
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Action
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Status of the rule
                     */
                    std::string m_ruleStatus;
                    bool m_ruleStatusHasBeenSet;

                    /**
                     * ACL rule
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
                     * Update time
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * IP blocking time
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t m_punishTime;
                    bool m_punishTimeHasBeenSet;

                    /**
                     * IP blocking time unit
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_punishTimeUnit;
                    bool m_punishTimeUnitHasBeenSet;

                    /**
                     * Name of the custom block page
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * ID of the custom block page
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t m_pageId;
                    bool m_pageIdHasBeenSet;

                    /**
                     * Redirection URL, which must be a subdomain name of the site
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_redirectUrl;
                    bool m_redirectUrlHasBeenSet;

                    /**
                     * Return code configured on the custom block page
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t m_responseCode;
                    bool m_responseCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_ACLUSERRULE_H_
