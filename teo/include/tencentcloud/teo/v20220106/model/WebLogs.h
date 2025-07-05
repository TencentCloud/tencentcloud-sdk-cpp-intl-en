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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_WEBLOGS_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_WEBLOGS_H_

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
                * Web attack log
                */
                class WebLogs : public AbstractModel
                {
                public:
                    WebLogs();
                    ~WebLogs() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Attack content
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AttackContent Attack content
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAttackContent() const;

                    /**
                     * 设置Attack content
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _attackContent Attack content
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAttackContent(const std::string& _attackContent);

                    /**
                     * 判断参数 AttackContent 是否已赋值
                     * @return AttackContent 是否已赋值
                     * 
                     */
                    bool AttackContentHasBeenSet() const;

                    /**
                     * 获取Attack IP
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AttackIp Attack IP
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAttackIp() const;

                    /**
                     * 设置Attack IP
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _attackIp Attack IP
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAttackIp(const std::string& _attackIp);

                    /**
                     * 判断参数 AttackIp 是否已赋值
                     * @return AttackIp 是否已赋值
                     * 
                     */
                    bool AttackIpHasBeenSet() const;

                    /**
                     * 获取Attack type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AttackType Attack type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAttackType() const;

                    /**
                     * 设置Attack type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _attackType Attack type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAttackType(const std::string& _attackType);

                    /**
                     * 判断参数 AttackType 是否已赋值
                     * @return AttackType 是否已赋值
                     * 
                     */
                    bool AttackTypeHasBeenSet() const;

                    /**
                     * 获取Domain name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Domain Domain name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _domain Domain name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取uuid
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Msuuid uuid
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMsuuid() const;

                    /**
                     * 设置uuid
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _msuuid uuid
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMsuuid(const std::string& _msuuid);

                    /**
                     * 判断参数 Msuuid 是否已赋值
                     * @return Msuuid 是否已赋值
                     * 
                     */
                    bool MsuuidHasBeenSet() const;

                    /**
                     * 获取Request method
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RequestMethod Request method
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRequestMethod() const;

                    /**
                     * 设置Request method
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _requestMethod Request method
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRequestMethod(const std::string& _requestMethod);

                    /**
                     * 判断参数 RequestMethod 是否已赋值
                     * @return RequestMethod 是否已赋值
                     * 
                     */
                    bool RequestMethodHasBeenSet() const;

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

                    /**
                     * 获取Rule ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RuleId Rule ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置Rule ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ruleId Rule ID
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
                     * 获取user agent
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Ua user agent
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUa() const;

                    /**
                     * 设置user agent
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ua user agent
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUa(const std::string& _ua);

                    /**
                     * 判断参数 Ua 是否已赋值
                     * @return Ua 是否已赋值
                     * 
                     */
                    bool UaHasBeenSet() const;

                    /**
                     * 获取Attack time. For consistency considerations, the original parameter `time` was renamed `AttackTime`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AttackTime Attack time. For consistency considerations, the original parameter `time` was renamed `AttackTime`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetAttackTime() const;

                    /**
                     * 设置Attack time. For consistency considerations, the original parameter `time` was renamed `AttackTime`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _attackTime Attack time. For consistency considerations, the original parameter `time` was renamed `AttackTime`.
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

                private:

                    /**
                     * Attack content
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_attackContent;
                    bool m_attackContentHasBeenSet;

                    /**
                     * Attack IP
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_attackIp;
                    bool m_attackIpHasBeenSet;

                    /**
                     * Attack type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_attackType;
                    bool m_attackTypeHasBeenSet;

                    /**
                     * Domain name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * uuid
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_msuuid;
                    bool m_msuuidHasBeenSet;

                    /**
                     * Request method
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_requestMethod;
                    bool m_requestMethodHasBeenSet;

                    /**
                     * Request URI
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_requestUri;
                    bool m_requestUriHasBeenSet;

                    /**
                     * Risk grade
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * Rule ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

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
                     * user agent
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_ua;
                    bool m_uaHasBeenSet;

                    /**
                     * Attack time. For consistency considerations, the original parameter `time` was renamed `AttackTime`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_attackTime;
                    bool m_attackTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_WEBLOGS_H_
