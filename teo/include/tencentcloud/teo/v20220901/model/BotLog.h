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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_BOTLOG_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_BOTLOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/SecRuleRelatedInfo.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Bot attack log
                */
                class BotLog : public AbstractModel
                {
                public:
                    BotLog();
                    ~BotLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The attack time recorded in seconds using UNIX timestamp.
                     * @return AttackTime The attack time recorded in seconds using UNIX timestamp.
                     */
                    uint64_t GetAttackTime() const;

                    /**
                     * 设置The attack time recorded in seconds using UNIX timestamp.
                     * @param AttackTime The attack time recorded in seconds using UNIX timestamp.
                     */
                    void SetAttackTime(const uint64_t& _attackTime);

                    /**
                     * 判断参数 AttackTime 是否已赋值
                     * @return AttackTime 是否已赋值
                     */
                    bool AttackTimeHasBeenSet() const;

                    /**
                     * 获取The attacker IP.
                     * @return AttackIp The attacker IP.
                     */
                    std::string GetAttackIp() const;

                    /**
                     * 设置The attacker IP.
                     * @param AttackIp The attacker IP.
                     */
                    void SetAttackIp(const std::string& _attackIp);

                    /**
                     * 判断参数 AttackIp 是否已赋值
                     * @return AttackIp 是否已赋值
                     */
                    bool AttackIpHasBeenSet() const;

                    /**
                     * 获取The attacked domain name.
                     * @return Domain The attacked domain name.
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置The attacked domain name.
                     * @param Domain The attacked domain name.
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取The URI.
                     * @return RequestUri The URI.
                     */
                    std::string GetRequestUri() const;

                    /**
                     * 设置The URI.
                     * @param RequestUri The URI.
                     */
                    void SetRequestUri(const std::string& _requestUri);

                    /**
                     * 判断参数 RequestUri 是否已赋值
                     * @return RequestUri 是否已赋值
                     */
                    bool RequestUriHasBeenSet() const;

                    /**
                     * 获取Attack type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AttackType Attack type.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetAttackType() const;

                    /**
                     * 设置Attack type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param AttackType Attack type.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAttackType(const std::string& _attackType);

                    /**
                     * 判断参数 AttackType 是否已赋值
                     * @return AttackType 是否已赋值
                     */
                    bool AttackTypeHasBeenSet() const;

                    /**
                     * 获取Request method.
                     * @return RequestMethod Request method.
                     */
                    std::string GetRequestMethod() const;

                    /**
                     * 设置Request method.
                     * @param RequestMethod Request method.
                     */
                    void SetRequestMethod(const std::string& _requestMethod);

                    /**
                     * 判断参数 RequestMethod 是否已赋值
                     * @return RequestMethod 是否已赋值
                     */
                    bool RequestMethodHasBeenSet() const;

                    /**
                     * 获取The attack content.
                     * @return AttackContent The attack content.
                     */
                    std::string GetAttackContent() const;

                    /**
                     * 设置The attack content.
                     * @param AttackContent The attack content.
                     */
                    void SetAttackContent(const std::string& _attackContent);

                    /**
                     * 判断参数 AttackContent 是否已赋值
                     * @return AttackContent 是否已赋值
                     */
                    bool AttackContentHasBeenSet() const;

                    /**
                     * 获取The attack level.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RiskLevel The attack level.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置The attack level.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param RiskLevel The attack level.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRiskLevel(const std::string& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取The rule ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RuleId The rule ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置The rule ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param RuleId The rule ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRuleId(const uint64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取The country code of the attacker IP, which is defined in ISO-3166 alpha-2. For the list of country codes, see [ISO-3166](https://git.woa.com/edgeone/iso-3166/blob/master/all/all.json).
                     * @return SipCountryCode The country code of the attacker IP, which is defined in ISO-3166 alpha-2. For the list of country codes, see [ISO-3166](https://git.woa.com/edgeone/iso-3166/blob/master/all/all.json).
                     */
                    std::string GetSipCountryCode() const;

                    /**
                     * 设置The country code of the attacker IP, which is defined in ISO-3166 alpha-2. For the list of country codes, see [ISO-3166](https://git.woa.com/edgeone/iso-3166/blob/master/all/all.json).
                     * @param SipCountryCode The country code of the attacker IP, which is defined in ISO-3166 alpha-2. For the list of country codes, see [ISO-3166](https://git.woa.com/edgeone/iso-3166/blob/master/all/all.json).
                     */
                    void SetSipCountryCode(const std::string& _sipCountryCode);

                    /**
                     * 判断参数 SipCountryCode 是否已赋值
                     * @return SipCountryCode 是否已赋值
                     */
                    bool SipCountryCodeHasBeenSet() const;

                    /**
                     * 获取The attack event ID.
                     * @return EventId The attack event ID.
                     */
                    std::string GetEventId() const;

                    /**
                     * 设置The attack event ID.
                     * @param EventId The attack event ID.
                     */
                    void SetEventId(const std::string& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取The processing method.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DisposalMethod The processing method.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetDisposalMethod() const;

                    /**
                     * 设置The processing method.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param DisposalMethod The processing method.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDisposalMethod(const std::string& _disposalMethod);

                    /**
                     * 判断参数 DisposalMethod 是否已赋值
                     * @return DisposalMethod 是否已赋值
                     */
                    bool DisposalMethodHasBeenSet() const;

                    /**
                     * 获取The HTTP log.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HttpLog The HTTP log.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetHttpLog() const;

                    /**
                     * 设置The HTTP log.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param HttpLog The HTTP log.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetHttpLog(const std::string& _httpLog);

                    /**
                     * 判断参数 HttpLog 是否已赋值
                     * @return HttpLog 是否已赋值
                     */
                    bool HttpLogHasBeenSet() const;

                    /**
                     * 获取The user agent.
                     * @return Ua The user agent.
                     */
                    std::string GetUa() const;

                    /**
                     * 设置The user agent.
                     * @param Ua The user agent.
                     */
                    void SetUa(const std::string& _ua);

                    /**
                     * 判断参数 Ua 是否已赋值
                     * @return Ua 是否已赋值
                     */
                    bool UaHasBeenSet() const;

                    /**
                     * 获取The detection method.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DetectionMethod The detection method.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetDetectionMethod() const;

                    /**
                     * 设置The detection method.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param DetectionMethod The detection method.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDetectionMethod(const std::string& _detectionMethod);

                    /**
                     * 判断参数 DetectionMethod 是否已赋值
                     * @return DetectionMethod 是否已赋值
                     */
                    bool DetectionMethodHasBeenSet() const;

                    /**
                     * 获取The credibility level.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Confidence The credibility level.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetConfidence() const;

                    /**
                     * 设置The credibility level.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Confidence The credibility level.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetConfidence(const std::string& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取Maliciousness
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Maliciousness Maliciousness
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetMaliciousness() const;

                    /**
                     * 设置Maliciousness
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Maliciousness Maliciousness
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMaliciousness(const std::string& _maliciousness);

                    /**
                     * 判断参数 Maliciousness 是否已赋值
                     * @return Maliciousness 是否已赋值
                     */
                    bool MaliciousnessHasBeenSet() const;

                    /**
                     * 获取The security rule information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RuleDetailList The security rule information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<SecRuleRelatedInfo> GetRuleDetailList() const;

                    /**
                     * 设置The security rule information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param RuleDetailList The security rule information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRuleDetailList(const std::vector<SecRuleRelatedInfo>& _ruleDetailList);

                    /**
                     * 判断参数 RuleDetailList 是否已赋值
                     * @return RuleDetailList 是否已赋值
                     */
                    bool RuleDetailListHasBeenSet() const;

                    /**
                     * 获取The bot tag.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Label The bot tag.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置The bot tag.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Label The bot tag.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     */
                    bool LabelHasBeenSet() const;

                private:

                    /**
                     * The attack time recorded in seconds using UNIX timestamp.
                     */
                    uint64_t m_attackTime;
                    bool m_attackTimeHasBeenSet;

                    /**
                     * The attacker IP.
                     */
                    std::string m_attackIp;
                    bool m_attackIpHasBeenSet;

                    /**
                     * The attacked domain name.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * The URI.
                     */
                    std::string m_requestUri;
                    bool m_requestUriHasBeenSet;

                    /**
                     * Attack type.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_attackType;
                    bool m_attackTypeHasBeenSet;

                    /**
                     * Request method.
                     */
                    std::string m_requestMethod;
                    bool m_requestMethodHasBeenSet;

                    /**
                     * The attack content.
                     */
                    std::string m_attackContent;
                    bool m_attackContentHasBeenSet;

                    /**
                     * The attack level.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * The rule ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * The country code of the attacker IP, which is defined in ISO-3166 alpha-2. For the list of country codes, see [ISO-3166](https://git.woa.com/edgeone/iso-3166/blob/master/all/all.json).
                     */
                    std::string m_sipCountryCode;
                    bool m_sipCountryCodeHasBeenSet;

                    /**
                     * The attack event ID.
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * The processing method.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_disposalMethod;
                    bool m_disposalMethodHasBeenSet;

                    /**
                     * The HTTP log.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_httpLog;
                    bool m_httpLogHasBeenSet;

                    /**
                     * The user agent.
                     */
                    std::string m_ua;
                    bool m_uaHasBeenSet;

                    /**
                     * The detection method.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_detectionMethod;
                    bool m_detectionMethodHasBeenSet;

                    /**
                     * The credibility level.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * Maliciousness
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_maliciousness;
                    bool m_maliciousnessHasBeenSet;

                    /**
                     * The security rule information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<SecRuleRelatedInfo> m_ruleDetailList;
                    bool m_ruleDetailListHasBeenSet;

                    /**
                     * The bot tag.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_BOTLOG_H_
