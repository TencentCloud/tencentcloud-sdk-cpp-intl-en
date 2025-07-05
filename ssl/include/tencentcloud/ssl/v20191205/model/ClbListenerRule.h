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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_CLBLISTENERRULE_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_CLBLISTENERRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/Certificate.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * Details of a CLB listener rule
                */
                class ClbListenerRule : public AbstractModel
                {
                public:
                    ClbListenerRule();
                    ~ClbListenerRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The rule ID.
                     * @return LocationId The rule ID.
                     * 
                     */
                    std::string GetLocationId() const;

                    /**
                     * 设置The rule ID.
                     * @param _locationId The rule ID.
                     * 
                     */
                    void SetLocationId(const std::string& _locationId);

                    /**
                     * 判断参数 LocationId 是否已赋值
                     * @return LocationId 是否已赋值
                     * 
                     */
                    bool LocationIdHasBeenSet() const;

                    /**
                     * 获取The domains bound.
                     * @return Domain The domains bound.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置The domains bound.
                     * @param _domain The domains bound.
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
                     * 获取Whether the rule matches the domains to be associated with a certificate.
                     * @return IsMatch Whether the rule matches the domains to be associated with a certificate.
                     * 
                     */
                    bool GetIsMatch() const;

                    /**
                     * 设置Whether the rule matches the domains to be associated with a certificate.
                     * @param _isMatch Whether the rule matches the domains to be associated with a certificate.
                     * 
                     */
                    void SetIsMatch(const bool& _isMatch);

                    /**
                     * 判断参数 IsMatch 是否已赋值
                     * @return IsMatch 是否已赋值
                     * 
                     */
                    bool IsMatchHasBeenSet() const;

                    /**
                     * 获取Certificate data bound to the rule.
                     * @return Certificate Certificate data bound to the rule.
                     * 
                     */
                    Certificate GetCertificate() const;

                    /**
                     * 设置Certificate data bound to the rule.
                     * @param _certificate Certificate data bound to the rule.
                     * 
                     */
                    void SetCertificate(const Certificate& _certificate);

                    /**
                     * 判断参数 Certificate 是否已赋值
                     * @return Certificate 是否已赋值
                     * 
                     */
                    bool CertificateHasBeenSet() const;

                    /**
                     * 获取Domain list not matched.
                     * @return NoMatchDomains Domain list not matched.
                     * 
                     */
                    std::vector<std::string> GetNoMatchDomains() const;

                    /**
                     * 设置Domain list not matched.
                     * @param _noMatchDomains Domain list not matched.
                     * 
                     */
                    void SetNoMatchDomains(const std::vector<std::string>& _noMatchDomains);

                    /**
                     * 判断参数 NoMatchDomains 是否已赋值
                     * @return NoMatchDomains 是否已赋值
                     * 
                     */
                    bool NoMatchDomainsHasBeenSet() const;

                    /**
                     * 获取Rule binding path.
                     * @return Url Rule binding path.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Rule binding path.
                     * @param _url Rule binding path.
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                private:

                    /**
                     * The rule ID.
                     */
                    std::string m_locationId;
                    bool m_locationIdHasBeenSet;

                    /**
                     * The domains bound.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Whether the rule matches the domains to be associated with a certificate.
                     */
                    bool m_isMatch;
                    bool m_isMatchHasBeenSet;

                    /**
                     * Certificate data bound to the rule.
                     */
                    Certificate m_certificate;
                    bool m_certificateHasBeenSet;

                    /**
                     * Domain list not matched.
                     */
                    std::vector<std::string> m_noMatchDomains;
                    bool m_noMatchDomainsHasBeenSet;

                    /**
                     * Rule binding path.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_CLBLISTENERRULE_H_
