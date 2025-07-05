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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_CCLOG_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_CCLOG_H_

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
        namespace V20220106
        {
            namespace Model
            {
                /**
                * Block log in rate-limiting policy
                */
                class CCLog : public AbstractModel
                {
                public:
                    CCLog();
                    ~CCLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Attack time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AttackTime Attack time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetAttackTime() const;

                    /**
                     * 设置Attack time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _attackTime Attack time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAttackTime(const uint64_t& _attackTime);

                    /**
                     * 判断参数 AttackTime 是否已赋值
                     * @return AttackTime 是否已赋值
                     * 
                     */
                    bool AttackTimeHasBeenSet() const;

                    /**
                     * 获取Attack source IP
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AttackSip Attack source IP
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAttackSip() const;

                    /**
                     * 设置Attack source IP
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _attackSip Attack source IP
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAttackSip(const std::string& _attackSip);

                    /**
                     * 判断参数 AttackSip 是否已赋值
                     * @return AttackSip 是否已赋值
                     * 
                     */
                    bool AttackSipHasBeenSet() const;

                    /**
                     * 获取Attack domain name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AttackDomain Attack domain name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAttackDomain() const;

                    /**
                     * 设置Attack domain name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _attackDomain Attack domain name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAttackDomain(const std::string& _attackDomain);

                    /**
                     * 判断参数 AttackDomain 是否已赋值
                     * @return AttackDomain 是否已赋值
                     * 
                     */
                    bool AttackDomainHasBeenSet() const;

                    /**
                     * 获取Request URI
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RequestUri Request URI
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRequestUri() const;

                    /**
                     * 设置Request URI
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _requestUri Request URI
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRequestUri(const std::string& _requestUri);

                    /**
                     * 判断参数 RequestUri 是否已赋值
                     * @return RequestUri 是否已赋值
                     * 
                     */
                    bool RequestUriHasBeenSet() const;

                    /**
                     * 获取Number of hits
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HitCount Number of hits
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetHitCount() const;

                    /**
                     * 设置Number of hits
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hitCount Number of hits
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHitCount(const uint64_t& _hitCount);

                    /**
                     * 判断参数 HitCount 是否已赋值
                     * @return HitCount 是否已赋值
                     * 
                     */
                    bool HitCountHasBeenSet() const;

                    /**
                     * 获取IP country/region
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SipCountryCode IP country/region
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSipCountryCode() const;

                    /**
                     * 设置IP country/region
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sipCountryCode IP country/region
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSipCountryCode(const std::string& _sipCountryCode);

                    /**
                     * 判断参数 SipCountryCode 是否已赋值
                     * @return SipCountryCode 是否已赋值
                     * 
                     */
                    bool SipCountryCodeHasBeenSet() const;

                    /**
                     * 获取Event ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EventId Event ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEventId() const;

                    /**
                     * 设置Event ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _eventId Event ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEventId(const std::string& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取Processing method
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DisposalMethod Processing method
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDisposalMethod() const;

                    /**
                     * 设置Processing method
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _disposalMethod Processing method
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDisposalMethod(const std::string& _disposalMethod);

                    /**
                     * 判断参数 DisposalMethod 是否已赋值
                     * @return DisposalMethod 是否已赋值
                     * 
                     */
                    bool DisposalMethodHasBeenSet() const;

                    /**
                     * 获取http_log
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HttpLog http_log
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHttpLog() const;

                    /**
                     * 设置http_log
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _httpLog http_log
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHttpLog(const std::string& _httpLog);

                    /**
                     * 判断参数 HttpLog 是否已赋值
                     * @return HttpLog 是否已赋值
                     * 
                     */
                    bool HttpLogHasBeenSet() const;

                    /**
                     * 获取Rule number
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RuleId Rule number
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置Rule number
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ruleId Rule number
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRuleId(const uint64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取Risk grade
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RiskLevel Risk grade
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置Risk grade
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _riskLevel Risk grade
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRiskLevel(const std::string& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                private:

                    /**
                     * Attack time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_attackTime;
                    bool m_attackTimeHasBeenSet;

                    /**
                     * Attack source IP
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_attackSip;
                    bool m_attackSipHasBeenSet;

                    /**
                     * Attack domain name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_attackDomain;
                    bool m_attackDomainHasBeenSet;

                    /**
                     * Request URI
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_requestUri;
                    bool m_requestUriHasBeenSet;

                    /**
                     * Number of hits
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_hitCount;
                    bool m_hitCountHasBeenSet;

                    /**
                     * IP country/region
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sipCountryCode;
                    bool m_sipCountryCodeHasBeenSet;

                    /**
                     * Event ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * Processing method
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_disposalMethod;
                    bool m_disposalMethodHasBeenSet;

                    /**
                     * http_log
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_httpLog;
                    bool m_httpLogHasBeenSet;

                    /**
                     * Rule number
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Risk grade
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_CCLOG_H_
