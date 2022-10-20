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
                * The custom rule
                */
                class AclUserRule : public AbstractModel
                {
                public:
                    AclUserRule();
                    ~AclUserRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The rule name.
                     * @return RuleName The rule name.
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置The rule name.
                     * @param RuleName The rule name.
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取The rule action. Values:
<li>`trans`: Allow the request.</li>
<li>`drop`: Block the request.</li>
<li>`monitor`: Observe the request.</li>
<li>`ban`: Block the IP.</li>
<li>`redirect`: Redirect the request.</li>
<li>`page`: Return the specified page.</li>
<li>`alg`: Verify the request by Javascript challenge.</li>
                     * @return Action The rule action. Values:
<li>`trans`: Allow the request.</li>
<li>`drop`: Block the request.</li>
<li>`monitor`: Observe the request.</li>
<li>`ban`: Block the IP.</li>
<li>`redirect`: Redirect the request.</li>
<li>`page`: Return the specified page.</li>
<li>`alg`: Verify the request by Javascript challenge.</li>
                     */
                    std::string GetAction() const;

                    /**
                     * 设置The rule action. Values:
<li>`trans`: Allow the request.</li>
<li>`drop`: Block the request.</li>
<li>`monitor`: Observe the request.</li>
<li>`ban`: Block the IP.</li>
<li>`redirect`: Redirect the request.</li>
<li>`page`: Return the specified page.</li>
<li>`alg`: Verify the request by Javascript challenge.</li>
                     * @param Action The rule action. Values:
<li>`trans`: Allow the request.</li>
<li>`drop`: Block the request.</li>
<li>`monitor`: Observe the request.</li>
<li>`ban`: Block the IP.</li>
<li>`redirect`: Redirect the request.</li>
<li>`page`: Return the specified page.</li>
<li>`alg`: Verify the request by Javascript challenge.</li>
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取The rule status. Values:
<li>`on`: Enabled</li>
<li>`off`: Disabled</li>
                     * @return RuleStatus The rule status. Values:
<li>`on`: Enabled</li>
<li>`off`: Disabled</li>
                     */
                    std::string GetRuleStatus() const;

                    /**
                     * 设置The rule status. Values:
<li>`on`: Enabled</li>
<li>`off`: Disabled</li>
                     * @param RuleStatus The rule status. Values:
<li>`on`: Enabled</li>
<li>`off`: Disabled</li>
                     */
                    void SetRuleStatus(const std::string& _ruleStatus);

                    /**
                     * 判断参数 RuleStatus 是否已赋值
                     * @return RuleStatus 是否已赋值
                     */
                    bool RuleStatusHasBeenSet() const;

                    /**
                     * 获取The custom rule.
                     * @return AclConditions The custom rule.
                     */
                    std::vector<AclCondition> GetAclConditions() const;

                    /**
                     * 设置The custom rule.
                     * @param AclConditions The custom rule.
                     */
                    void SetAclConditions(const std::vector<AclCondition>& _aclConditions);

                    /**
                     * 判断参数 AclConditions 是否已赋值
                     * @return AclConditions 是否已赋值
                     */
                    bool AclConditionsHasBeenSet() const;

                    /**
                     * 获取The rule priority. Value range: 0-100.
                     * @return RulePriority The rule priority. Value range: 0-100.
                     */
                    int64_t GetRulePriority() const;

                    /**
                     * 设置The rule priority. Value range: 0-100.
                     * @param RulePriority The rule priority. Value range: 0-100.
                     */
                    void SetRulePriority(const int64_t& _rulePriority);

                    /**
                     * 判断参数 RulePriority 是否已赋值
                     * @return RulePriority 是否已赋值
                     */
                    bool RulePriorityHasBeenSet() const;

                    /**
                     * 获取The rule ID, which is only used as an output parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RuleID The rule ID, which is only used as an output parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetRuleID() const;

                    /**
                     * 设置The rule ID, which is only used as an output parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param RuleID The rule ID, which is only used as an output parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRuleID(const int64_t& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     */
                    bool RuleIDHasBeenSet() const;

                    /**
                     * 获取The update time, which is only used as an output parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdateTime The update time, which is only used as an output parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置The update time, which is only used as an output parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param UpdateTime The update time, which is only used as an output parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取The IP blocking duration. Value range: 0 seconds - 2 days. Default value: 0 seconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PunishTime The IP blocking duration. Value range: 0 seconds - 2 days. Default value: 0 seconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetPunishTime() const;

                    /**
                     * 设置The IP blocking duration. Value range: 0 seconds - 2 days. Default value: 0 seconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param PunishTime The IP blocking duration. Value range: 0 seconds - 2 days. Default value: 0 seconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPunishTime(const int64_t& _punishTime);

                    /**
                     * 判断参数 PunishTime 是否已赋值
                     * @return PunishTime 是否已赋值
                     */
                    bool PunishTimeHasBeenSet() const;

                    /**
                     * 获取The unit of the IP blocking duration. Values:
<li>`second`: Second</li>
<li>`minutes`: Minute</li>
<li>`hour`: Hour</li>Default value: second.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PunishTimeUnit The unit of the IP blocking duration. Values:
<li>`second`: Second</li>
<li>`minutes`: Minute</li>
<li>`hour`: Hour</li>Default value: second.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetPunishTimeUnit() const;

                    /**
                     * 设置The unit of the IP blocking duration. Values:
<li>`second`: Second</li>
<li>`minutes`: Minute</li>
<li>`hour`: Hour</li>Default value: second.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param PunishTimeUnit The unit of the IP blocking duration. Values:
<li>`second`: Second</li>
<li>`minutes`: Minute</li>
<li>`hour`: Hour</li>Default value: second.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPunishTimeUnit(const std::string& _punishTimeUnit);

                    /**
                     * 判断参数 PunishTimeUnit 是否已赋值
                     * @return PunishTimeUnit 是否已赋值
                     */
                    bool PunishTimeUnitHasBeenSet() const;

                    /**
                     * 获取The name of the custom page, which defaults to an empty string.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name The name of the custom page, which defaults to an empty string.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetName() const;

                    /**
                     * 设置The name of the custom page, which defaults to an empty string.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Name The name of the custom page, which defaults to an empty string.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取The ID of the custom page, which defaults to 0.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PageId The ID of the custom page, which defaults to 0.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetPageId() const;

                    /**
                     * 设置The ID of the custom page, which defaults to 0.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param PageId The ID of the custom page, which defaults to 0.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPageId(const int64_t& _pageId);

                    /**
                     * 判断参数 PageId 是否已赋值
                     * @return PageId 是否已赋值
                     */
                    bool PageIdHasBeenSet() const;

                    /**
                     * 获取The redirection URL, which must be a subdomain name of the site. It defaults to an empty string.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RedirectUrl The redirection URL, which must be a subdomain name of the site. It defaults to an empty string.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetRedirectUrl() const;

                    /**
                     * 设置The redirection URL, which must be a subdomain name of the site. It defaults to an empty string.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param RedirectUrl The redirection URL, which must be a subdomain name of the site. It defaults to an empty string.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRedirectUrl(const std::string& _redirectUrl);

                    /**
                     * 判断参数 RedirectUrl 是否已赋值
                     * @return RedirectUrl 是否已赋值
                     */
                    bool RedirectUrlHasBeenSet() const;

                    /**
                     * 获取The response code returned after redirection, which defaults to 0.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ResponseCode The response code returned after redirection, which defaults to 0.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetResponseCode() const;

                    /**
                     * 设置The response code returned after redirection, which defaults to 0.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ResponseCode The response code returned after redirection, which defaults to 0.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetResponseCode(const int64_t& _responseCode);

                    /**
                     * 判断参数 ResponseCode 是否已赋值
                     * @return ResponseCode 是否已赋值
                     */
                    bool ResponseCodeHasBeenSet() const;

                private:

                    /**
                     * The rule name.
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * The rule action. Values:
<li>`trans`: Allow the request.</li>
<li>`drop`: Block the request.</li>
<li>`monitor`: Observe the request.</li>
<li>`ban`: Block the IP.</li>
<li>`redirect`: Redirect the request.</li>
<li>`page`: Return the specified page.</li>
<li>`alg`: Verify the request by Javascript challenge.</li>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * The rule status. Values:
<li>`on`: Enabled</li>
<li>`off`: Disabled</li>
                     */
                    std::string m_ruleStatus;
                    bool m_ruleStatusHasBeenSet;

                    /**
                     * The custom rule.
                     */
                    std::vector<AclCondition> m_aclConditions;
                    bool m_aclConditionsHasBeenSet;

                    /**
                     * The rule priority. Value range: 0-100.
                     */
                    int64_t m_rulePriority;
                    bool m_rulePriorityHasBeenSet;

                    /**
                     * The rule ID, which is only used as an output parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * The update time, which is only used as an output parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * The IP blocking duration. Value range: 0 seconds - 2 days. Default value: 0 seconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_punishTime;
                    bool m_punishTimeHasBeenSet;

                    /**
                     * The unit of the IP blocking duration. Values:
<li>`second`: Second</li>
<li>`minutes`: Minute</li>
<li>`hour`: Hour</li>Default value: second.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_punishTimeUnit;
                    bool m_punishTimeUnitHasBeenSet;

                    /**
                     * The name of the custom page, which defaults to an empty string.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * The ID of the custom page, which defaults to 0.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_pageId;
                    bool m_pageIdHasBeenSet;

                    /**
                     * The redirection URL, which must be a subdomain name of the site. It defaults to an empty string.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_redirectUrl;
                    bool m_redirectUrlHasBeenSet;

                    /**
                     * The response code returned after redirection, which defaults to 0.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_responseCode;
                    bool m_responseCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ACLUSERRULE_H_
