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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_SECHITRULEINFO_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_SECHITRULEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * The hit rule information
                */
                class SecHitRuleInfo : public AbstractModel
                {
                public:
                    SecHitRuleInfo();
                    ~SecHitRuleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The site ID.
                     * @return ZoneId The site ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置The site ID.
                     * @param _zoneId The site ID.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取The rule ID.
                     * @return RuleId The rule ID.
                     * 
                     */
                    int64_t GetRuleId() const;

                    /**
                     * 设置The rule ID.
                     * @param _ruleId The rule ID.
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
                     * 获取The rule type.
                     * @return RuleTypeName The rule type.
                     * 
                     */
                    std::string GetRuleTypeName() const;

                    /**
                     * 设置The rule type.
                     * @param _ruleTypeName The rule type.
                     * 
                     */
                    void SetRuleTypeName(const std::string& _ruleTypeName);

                    /**
                     * 判断参数 RuleTypeName 是否已赋值
                     * @return RuleTypeName 是否已赋值
                     * 
                     */
                    bool RuleTypeNameHasBeenSet() const;

                    /**
                     * 获取The hit time recorded in seconds using UNIX timestamp.
                     * @return HitTime The hit time recorded in seconds using UNIX timestamp.
                     * 
                     */
                    int64_t GetHitTime() const;

                    /**
                     * 设置The hit time recorded in seconds using UNIX timestamp.
                     * @param _hitTime The hit time recorded in seconds using UNIX timestamp.
                     * 
                     */
                    void SetHitTime(const int64_t& _hitTime);

                    /**
                     * 判断参数 HitTime 是否已赋值
                     * @return HitTime 是否已赋值
                     * 
                     */
                    bool HitTimeHasBeenSet() const;

                    /**
                     * 获取The number of requests.
                     * @return RequestNum The number of requests.
                     * 
                     */
                    int64_t GetRequestNum() const;

                    /**
                     * 设置The number of requests.
                     * @param _requestNum The number of requests.
                     * 
                     */
                    void SetRequestNum(const int64_t& _requestNum);

                    /**
                     * 判断参数 RequestNum 是否已赋值
                     * @return RequestNum 是否已赋值
                     * 
                     */
                    bool RequestNumHasBeenSet() const;

                    /**
                     * 获取The rule description.
                     * @return Description The rule description.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置The rule description.
                     * @param _description The rule description.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取The subdomain name.
                     * @return Domain The subdomain name.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置The subdomain name.
                     * @param _domain The subdomain name.
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Action. Values:
<li>`trans`: Allow;</li>
<li>`alg`: Algorithm challenge;</li>
<li>`drop`: Discard;</li>
<li>`ban`: Block the source IP;</li>
<li>`redirect`: Redirect;</li>
<li>`page`: Return to the specified page;</li>
<li>`monitor`: Observe.</li>
                     * @return Action Action. Values:
<li>`trans`: Allow;</li>
<li>`alg`: Algorithm challenge;</li>
<li>`drop`: Discard;</li>
<li>`ban`: Block the source IP;</li>
<li>`redirect`: Redirect;</li>
<li>`page`: Return to the specified page;</li>
<li>`monitor`: Observe.</li>
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Action. Values:
<li>`trans`: Allow;</li>
<li>`alg`: Algorithm challenge;</li>
<li>`drop`: Discard;</li>
<li>`ban`: Block the source IP;</li>
<li>`redirect`: Redirect;</li>
<li>`page`: Return to the specified page;</li>
<li>`monitor`: Observe.</li>
                     * @param _action Action. Values:
<li>`trans`: Allow;</li>
<li>`alg`: Algorithm challenge;</li>
<li>`drop`: Discard;</li>
<li>`ban`: Block the source IP;</li>
<li>`redirect`: Redirect;</li>
<li>`page`: Return to the specified page;</li>
<li>`monitor`: Observe.</li>
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
                     * 获取The bot tag. Values:
<li>`evil_bot`: Malicious bot</li>
<li>`suspect_bot`: Suspected bot</li>
<li>`good_bot`: Good bot</li>
<li>`normal`: Normal request</li>
<li>`none`: Uncategorized</li>
                     * @return BotLabel The bot tag. Values:
<li>`evil_bot`: Malicious bot</li>
<li>`suspect_bot`: Suspected bot</li>
<li>`good_bot`: Good bot</li>
<li>`normal`: Normal request</li>
<li>`none`: Uncategorized</li>
                     * 
                     */
                    std::string GetBotLabel() const;

                    /**
                     * 设置The bot tag. Values:
<li>`evil_bot`: Malicious bot</li>
<li>`suspect_bot`: Suspected bot</li>
<li>`good_bot`: Good bot</li>
<li>`normal`: Normal request</li>
<li>`none`: Uncategorized</li>
                     * @param _botLabel The bot tag. Values:
<li>`evil_bot`: Malicious bot</li>
<li>`suspect_bot`: Suspected bot</li>
<li>`good_bot`: Good bot</li>
<li>`normal`: Normal request</li>
<li>`none`: Uncategorized</li>
                     * 
                     */
                    void SetBotLabel(const std::string& _botLabel);

                    /**
                     * 判断参数 BotLabel 是否已赋值
                     * @return BotLabel 是否已赋值
                     * 
                     */
                    bool BotLabelHasBeenSet() const;

                    /**
                     * 获取Whether to enable the rule
                     * @return RuleEnabled Whether to enable the rule
                     * 
                     */
                    bool GetRuleEnabled() const;

                    /**
                     * 设置Whether to enable the rule
                     * @param _ruleEnabled Whether to enable the rule
                     * 
                     */
                    void SetRuleEnabled(const bool& _ruleEnabled);

                    /**
                     * 判断参数 RuleEnabled 是否已赋值
                     * @return RuleEnabled 是否已赋值
                     * 
                     */
                    bool RuleEnabledHasBeenSet() const;

                    /**
                     * 获取Whether to enable alerting for this rule
                     * @return AlarmEnabled Whether to enable alerting for this rule
                     * 
                     */
                    bool GetAlarmEnabled() const;

                    /**
                     * 设置Whether to enable alerting for this rule
                     * @param _alarmEnabled Whether to enable alerting for this rule
                     * 
                     */
                    void SetAlarmEnabled(const bool& _alarmEnabled);

                    /**
                     * 判断参数 AlarmEnabled 是否已赋值
                     * @return AlarmEnabled 是否已赋值
                     * 
                     */
                    bool AlarmEnabledHasBeenSet() const;

                    /**
                     * 获取Whether the rule is deleted. Values: 
<li>`true`: The rule has been deleted (does not exist).</li>
<li>`false`: The rule is not deleted (exists).</li>
                     * @return RuleDeleted Whether the rule is deleted. Values: 
<li>`true`: The rule has been deleted (does not exist).</li>
<li>`false`: The rule is not deleted (exists).</li>
                     * 
                     */
                    bool GetRuleDeleted() const;

                    /**
                     * 设置Whether the rule is deleted. Values: 
<li>`true`: The rule has been deleted (does not exist).</li>
<li>`false`: The rule is not deleted (exists).</li>
                     * @param _ruleDeleted Whether the rule is deleted. Values: 
<li>`true`: The rule has been deleted (does not exist).</li>
<li>`false`: The rule is not deleted (exists).</li>
                     * 
                     */
                    void SetRuleDeleted(const bool& _ruleDeleted);

                    /**
                     * 判断参数 RuleDeleted 是否已赋值
                     * @return RuleDeleted 是否已赋值
                     * 
                     */
                    bool RuleDeletedHasBeenSet() const;

                private:

                    /**
                     * The site ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * The rule ID.
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * The rule type.
                     */
                    std::string m_ruleTypeName;
                    bool m_ruleTypeNameHasBeenSet;

                    /**
                     * The hit time recorded in seconds using UNIX timestamp.
                     */
                    int64_t m_hitTime;
                    bool m_hitTimeHasBeenSet;

                    /**
                     * The number of requests.
                     */
                    int64_t m_requestNum;
                    bool m_requestNumHasBeenSet;

                    /**
                     * The rule description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * The subdomain name.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Action. Values:
<li>`trans`: Allow;</li>
<li>`alg`: Algorithm challenge;</li>
<li>`drop`: Discard;</li>
<li>`ban`: Block the source IP;</li>
<li>`redirect`: Redirect;</li>
<li>`page`: Return to the specified page;</li>
<li>`monitor`: Observe.</li>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * The bot tag. Values:
<li>`evil_bot`: Malicious bot</li>
<li>`suspect_bot`: Suspected bot</li>
<li>`good_bot`: Good bot</li>
<li>`normal`: Normal request</li>
<li>`none`: Uncategorized</li>
                     */
                    std::string m_botLabel;
                    bool m_botLabelHasBeenSet;

                    /**
                     * Whether to enable the rule
                     */
                    bool m_ruleEnabled;
                    bool m_ruleEnabledHasBeenSet;

                    /**
                     * Whether to enable alerting for this rule
                     */
                    bool m_alarmEnabled;
                    bool m_alarmEnabledHasBeenSet;

                    /**
                     * Whether the rule is deleted. Values: 
<li>`true`: The rule has been deleted (does not exist).</li>
<li>`false`: The rule is not deleted (exists).</li>
                     */
                    bool m_ruleDeleted;
                    bool m_ruleDeletedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SECHITRULEINFO_H_
