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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_WEBLOGS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_WEBLOGS_H_

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
                     * 获取The HTTP log content.
                     * @return HttpLog The HTTP log content.
                     */
                    std::string GetHttpLog() const;

                    /**
                     * 设置The HTTP log content.
                     * @param HttpLog The HTTP log content.
                     */
                    void SetHttpLog(const std::string& _httpLog);

                    /**
                     * 判断参数 HttpLog 是否已赋值
                     * @return HttpLog 是否已赋值
                     */
                    bool HttpLogHasBeenSet() const;

                    /**
                     * 获取The attacked subdomain name.
                     * @return Domain The attacked subdomain name.
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置The attacked subdomain name.
                     * @param Domain The attacked subdomain name.
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

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
                     * 获取
                     * @return RealClientIp 
                     */
                    std::string GetRealClientIp() const;

                    /**
                     * 设置
                     * @param RealClientIp 
                     */
                    void SetRealClientIp(const std::string& _realClientIp);

                    /**
                     * 判断参数 RealClientIp 是否已赋值
                     * @return RealClientIp 是否已赋值
                     */
                    bool RealClientIpHasBeenSet() const;

                    /**
                     * 获取
                     * @return RealClientIpCountryCode 
                     */
                    std::string GetRealClientIpCountryCode() const;

                    /**
                     * 设置
                     * @param RealClientIpCountryCode 
                     */
                    void SetRealClientIpCountryCode(const std::string& _realClientIpCountryCode);

                    /**
                     * 判断参数 RealClientIpCountryCode 是否已赋值
                     * @return RealClientIpCountryCode 是否已赋值
                     */
                    bool RealClientIpCountryCodeHasBeenSet() const;

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
                     * 获取The request address.
                     * @return RequestUri The request address.
                     */
                    std::string GetRequestUri() const;

                    /**
                     * 设置The request address.
                     * @param RequestUri The request address.
                     */
                    void SetRequestUri(const std::string& _requestUri);

                    /**
                     * 判断参数 RequestUri 是否已赋值
                     * @return RequestUri 是否已赋值
                     */
                    bool RequestUriHasBeenSet() const;

                    /**
                     * 获取The request type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ReqMethod The request type.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetReqMethod() const;

                    /**
                     * 设置The request type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ReqMethod The request type.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetReqMethod(const std::string& _reqMethod);

                    /**
                     * 判断参数 ReqMethod 是否已赋值
                     * @return ReqMethod 是否已赋值
                     */
                    bool ReqMethodHasBeenSet() const;

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
                     * 获取The attack content.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AttackContent The attack content.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetAttackContent() const;

                    /**
                     * 设置The attack content.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param AttackContent The attack content.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAttackContent(const std::string& _attackContent);

                    /**
                     * 判断参数 AttackContent 是否已赋值
                     * @return AttackContent 是否已赋值
                     */
                    bool AttackContentHasBeenSet() const;

                    /**
                     * 获取Log region
Note: This field may return `null`, indicating that no valid value was found.
                     * @return Area Log region
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Log region
Note: This field may return `null`, indicating that no valid value was found.
                     * @param Area Log region
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     */
                    bool AreaHasBeenSet() const;

                private:

                    /**
                     * The attack event ID.
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * The HTTP log content.
                     */
                    std::string m_httpLog;
                    bool m_httpLogHasBeenSet;

                    /**
                     * The attacked subdomain name.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * The attacker IP.
                     */
                    std::string m_attackIp;
                    bool m_attackIpHasBeenSet;

                    /**
                     * The country code of the attacker IP, which is defined in ISO-3166 alpha-2. For the list of country codes, see [ISO-3166](https://git.woa.com/edgeone/iso-3166/blob/master/all/all.json).
                     */
                    std::string m_sipCountryCode;
                    bool m_sipCountryCodeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_realClientIp;
                    bool m_realClientIpHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_realClientIpCountryCode;
                    bool m_realClientIpCountryCodeHasBeenSet;

                    /**
                     * The attack time recorded in seconds using UNIX timestamp.
                     */
                    uint64_t m_attackTime;
                    bool m_attackTimeHasBeenSet;

                    /**
                     * The request address.
                     */
                    std::string m_requestUri;
                    bool m_requestUriHasBeenSet;

                    /**
                     * The request type.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_reqMethod;
                    bool m_reqMethodHasBeenSet;

                    /**
                     * The security rule information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<SecRuleRelatedInfo> m_ruleDetailList;
                    bool m_ruleDetailListHasBeenSet;

                    /**
                     * The attack content.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_attackContent;
                    bool m_attackContentHasBeenSet;

                    /**
                     * Log region
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_WEBLOGS_H_
