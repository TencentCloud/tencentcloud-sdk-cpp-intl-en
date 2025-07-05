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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DOMAINRULESET_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DOMAINRULESET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/RuleInfo.h>
#include <tencentcloud/gaap/v20180529/model/CertificateAliasInfo.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * Forwarding rule information of Layer-7 listeners classified by domain name
                */
                class DomainRuleSet : public AbstractModel
                {
                public:
                    DomainRuleSet();
                    ~DomainRuleSet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Forwarding rule domain name.
                     * @return Domain Forwarding rule domain name.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Forwarding rule domain name.
                     * @param _domain Forwarding rule domain name.
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
                     * 获取Forwarding rule list of the domain name.
                     * @return RuleSet Forwarding rule list of the domain name.
                     * 
                     */
                    std::vector<RuleInfo> GetRuleSet() const;

                    /**
                     * 设置Forwarding rule list of the domain name.
                     * @param _ruleSet Forwarding rule list of the domain name.
                     * 
                     */
                    void SetRuleSet(const std::vector<RuleInfo>& _ruleSet);

                    /**
                     * 判断参数 RuleSet 是否已赋值
                     * @return RuleSet 是否已赋值
                     * 
                     */
                    bool RuleSetHasBeenSet() const;

                    /**
                     * 获取Server certificate ID of the domain. When it is `default`, it indicates that the default certificate will be used (i.e., the certificate configured for the listener).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CertificateId Server certificate ID of the domain. When it is `default`, it indicates that the default certificate will be used (i.e., the certificate configured for the listener).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 设置Server certificate ID of the domain. When it is `default`, it indicates that the default certificate will be used (i.e., the certificate configured for the listener).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _certificateId Server certificate ID of the domain. When it is `default`, it indicates that the default certificate will be used (i.e., the certificate configured for the listener).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCertificateId(const std::string& _certificateId);

                    /**
                     * 判断参数 CertificateId 是否已赋值
                     * @return CertificateId 是否已赋值
                     * 
                     */
                    bool CertificateIdHasBeenSet() const;

                    /**
                     * 获取Server certificate name of the domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CertificateAlias Server certificate name of the domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCertificateAlias() const;

                    /**
                     * 设置Server certificate name of the domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _certificateAlias Server certificate name of the domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCertificateAlias(const std::string& _certificateAlias);

                    /**
                     * 判断参数 CertificateAlias 是否已赋值
                     * @return CertificateAlias 是否已赋值
                     * 
                     */
                    bool CertificateAliasHasBeenSet() const;

                    /**
                     * 获取Client certificate ID of the domain. When it is `default`, it indicates that the default certificate will be used (i.e., the certificate configured for the listener).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ClientCertificateId Client certificate ID of the domain. When it is `default`, it indicates that the default certificate will be used (i.e., the certificate configured for the listener).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetClientCertificateId() const;

                    /**
                     * 设置Client certificate ID of the domain. When it is `default`, it indicates that the default certificate will be used (i.e., the certificate configured for the listener).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _clientCertificateId Client certificate ID of the domain. When it is `default`, it indicates that the default certificate will be used (i.e., the certificate configured for the listener).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetClientCertificateId(const std::string& _clientCertificateId);

                    /**
                     * 判断参数 ClientCertificateId 是否已赋值
                     * @return ClientCertificateId 是否已赋值
                     * 
                     */
                    bool ClientCertificateIdHasBeenSet() const;

                    /**
                     * 获取Client certificate name of the domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ClientCertificateAlias Client certificate name of the domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetClientCertificateAlias() const;

                    /**
                     * 设置Client certificate name of the domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _clientCertificateAlias Client certificate name of the domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetClientCertificateAlias(const std::string& _clientCertificateAlias);

                    /**
                     * 判断参数 ClientCertificateAlias 是否已赋值
                     * @return ClientCertificateAlias 是否已赋值
                     * 
                     */
                    bool ClientCertificateAliasHasBeenSet() const;

                    /**
                     * 获取Basic authentication configuration ID of the domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BasicAuthConfId Basic authentication configuration ID of the domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBasicAuthConfId() const;

                    /**
                     * 设置Basic authentication configuration ID of the domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _basicAuthConfId Basic authentication configuration ID of the domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBasicAuthConfId(const std::string& _basicAuthConfId);

                    /**
                     * 判断参数 BasicAuthConfId 是否已赋值
                     * @return BasicAuthConfId 是否已赋值
                     * 
                     */
                    bool BasicAuthConfIdHasBeenSet() const;

                    /**
                     * 获取Basic authentication status:
0: disabled;
1: enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BasicAuth Basic authentication status:
0: disabled;
1: enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetBasicAuth() const;

                    /**
                     * 设置Basic authentication status:
0: disabled;
1: enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _basicAuth Basic authentication status:
0: disabled;
1: enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBasicAuth(const int64_t& _basicAuth);

                    /**
                     * 判断参数 BasicAuth 是否已赋值
                     * @return BasicAuth 是否已赋值
                     * 
                     */
                    bool BasicAuthHasBeenSet() const;

                    /**
                     * 获取Basic authentication configuration name of the domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BasicAuthConfAlias Basic authentication configuration name of the domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBasicAuthConfAlias() const;

                    /**
                     * 设置Basic authentication configuration name of the domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _basicAuthConfAlias Basic authentication configuration name of the domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBasicAuthConfAlias(const std::string& _basicAuthConfAlias);

                    /**
                     * 判断参数 BasicAuthConfAlias 是否已赋值
                     * @return BasicAuthConfAlias 是否已赋值
                     * 
                     */
                    bool BasicAuthConfAliasHasBeenSet() const;

                    /**
                     * 获取Origin server authentication certificate ID of the domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RealServerCertificateId Origin server authentication certificate ID of the domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRealServerCertificateId() const;

                    /**
                     * 设置Origin server authentication certificate ID of the domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _realServerCertificateId Origin server authentication certificate ID of the domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRealServerCertificateId(const std::string& _realServerCertificateId);

                    /**
                     * 判断参数 RealServerCertificateId 是否已赋值
                     * @return RealServerCertificateId 是否已赋值
                     * 
                     */
                    bool RealServerCertificateIdHasBeenSet() const;

                    /**
                     * 获取Origin server authentication status:
0: disabled;
1: enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RealServerAuth Origin server authentication status:
0: disabled;
1: enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRealServerAuth() const;

                    /**
                     * 设置Origin server authentication status:
0: disabled;
1: enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _realServerAuth Origin server authentication status:
0: disabled;
1: enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRealServerAuth(const int64_t& _realServerAuth);

                    /**
                     * 判断参数 RealServerAuth 是否已赋值
                     * @return RealServerAuth 是否已赋值
                     * 
                     */
                    bool RealServerAuthHasBeenSet() const;

                    /**
                     * 获取Origin server authentication certificate name of the domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RealServerCertificateAlias Origin server authentication certificate name of the domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRealServerCertificateAlias() const;

                    /**
                     * 设置Origin server authentication certificate name of the domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _realServerCertificateAlias Origin server authentication certificate name of the domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRealServerCertificateAlias(const std::string& _realServerCertificateAlias);

                    /**
                     * 判断参数 RealServerCertificateAlias 是否已赋值
                     * @return RealServerCertificateAlias 是否已赋值
                     * 
                     */
                    bool RealServerCertificateAliasHasBeenSet() const;

                    /**
                     * 获取Connection authentication certificate ID of the domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GaapCertificateId Connection authentication certificate ID of the domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetGaapCertificateId() const;

                    /**
                     * 设置Connection authentication certificate ID of the domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _gaapCertificateId Connection authentication certificate ID of the domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetGaapCertificateId(const std::string& _gaapCertificateId);

                    /**
                     * 判断参数 GaapCertificateId 是否已赋值
                     * @return GaapCertificateId 是否已赋值
                     * 
                     */
                    bool GaapCertificateIdHasBeenSet() const;

                    /**
                     * 获取Connection authentication status:
0: disabled;
1: enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GaapAuth Connection authentication status:
0: disabled;
1: enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetGaapAuth() const;

                    /**
                     * 设置Connection authentication status:
0: disabled;
1: enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _gaapAuth Connection authentication status:
0: disabled;
1: enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetGaapAuth(const int64_t& _gaapAuth);

                    /**
                     * 判断参数 GaapAuth 是否已赋值
                     * @return GaapAuth 是否已赋值
                     * 
                     */
                    bool GaapAuthHasBeenSet() const;

                    /**
                     * 获取Connection authentication certificate name of the domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GaapCertificateAlias Connection authentication certificate name of the domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetGaapCertificateAlias() const;

                    /**
                     * 设置Connection authentication certificate name of the domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _gaapCertificateAlias Connection authentication certificate name of the domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetGaapCertificateAlias(const std::string& _gaapCertificateAlias);

                    /**
                     * 判断参数 GaapCertificateAlias 是否已赋值
                     * @return GaapCertificateAlias 是否已赋值
                     * 
                     */
                    bool GaapCertificateAliasHasBeenSet() const;

                    /**
                     * 获取Origin server authentication domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RealServerCertificateDomain Origin server authentication domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRealServerCertificateDomain() const;

                    /**
                     * 设置Origin server authentication domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _realServerCertificateDomain Origin server authentication domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRealServerCertificateDomain(const std::string& _realServerCertificateDomain);

                    /**
                     * 判断参数 RealServerCertificateDomain 是否已赋值
                     * @return RealServerCertificateDomain 是否已赋值
                     * 
                     */
                    bool RealServerCertificateDomainHasBeenSet() const;

                    /**
                     * 获取Returns IDs and aliases of multiple certificates when there are multiple client certificates.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PolyClientCertificateAliasInfo Returns IDs and aliases of multiple certificates when there are multiple client certificates.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<CertificateAliasInfo> GetPolyClientCertificateAliasInfo() const;

                    /**
                     * 设置Returns IDs and aliases of multiple certificates when there are multiple client certificates.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _polyClientCertificateAliasInfo Returns IDs and aliases of multiple certificates when there are multiple client certificates.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPolyClientCertificateAliasInfo(const std::vector<CertificateAliasInfo>& _polyClientCertificateAliasInfo);

                    /**
                     * 判断参数 PolyClientCertificateAliasInfo 是否已赋值
                     * @return PolyClientCertificateAliasInfo 是否已赋值
                     * 
                     */
                    bool PolyClientCertificateAliasInfoHasBeenSet() const;

                    /**
                     * 获取Returns IDs and aliases of multiple certificates when there are multiple origin certificates.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PolyRealServerCertificateAliasInfo Returns IDs and aliases of multiple certificates when there are multiple origin certificates.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<CertificateAliasInfo> GetPolyRealServerCertificateAliasInfo() const;

                    /**
                     * 设置Returns IDs and aliases of multiple certificates when there are multiple origin certificates.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _polyRealServerCertificateAliasInfo Returns IDs and aliases of multiple certificates when there are multiple origin certificates.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPolyRealServerCertificateAliasInfo(const std::vector<CertificateAliasInfo>& _polyRealServerCertificateAliasInfo);

                    /**
                     * 判断参数 PolyRealServerCertificateAliasInfo 是否已赋值
                     * @return PolyRealServerCertificateAliasInfo 是否已赋值
                     * 
                     */
                    bool PolyRealServerCertificateAliasInfoHasBeenSet() const;

                    /**
                     * 获取Domain name status.
0: running;
1: changing;
2: deleting.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return DomainStatus Domain name status.
0: running;
1: changing;
2: deleting.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetDomainStatus() const;

                    /**
                     * 设置Domain name status.
0: running;
1: changing;
2: deleting.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _domainStatus Domain name status.
0: running;
1: changing;
2: deleting.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDomainStatus(const uint64_t& _domainStatus);

                    /**
                     * 判断参数 DomainStatus 是否已赋值
                     * @return DomainStatus 是否已赋值
                     * 
                     */
                    bool DomainStatusHasBeenSet() const;

                    /**
                     * 获取Blocking-related status of the domain name. `BANNED`: the domain name is blocked; `RECOVER`: the domain name is unblocked or normal; `BANNING`: the domain name is being blocked; `RECOVERING`: the domain name is being unblocked; `BAN_FAILED`: the blocking fails; RECOVER_FAILED: the unblocking fails.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return BanStatus Blocking-related status of the domain name. `BANNED`: the domain name is blocked; `RECOVER`: the domain name is unblocked or normal; `BANNING`: the domain name is being blocked; `RECOVERING`: the domain name is being unblocked; `BAN_FAILED`: the blocking fails; RECOVER_FAILED: the unblocking fails.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBanStatus() const;

                    /**
                     * 设置Blocking-related status of the domain name. `BANNED`: the domain name is blocked; `RECOVER`: the domain name is unblocked or normal; `BANNING`: the domain name is being blocked; `RECOVERING`: the domain name is being unblocked; `BAN_FAILED`: the blocking fails; RECOVER_FAILED: the unblocking fails.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _banStatus Blocking-related status of the domain name. `BANNED`: the domain name is blocked; `RECOVER`: the domain name is unblocked or normal; `BANNING`: the domain name is being blocked; `RECOVERING`: the domain name is being unblocked; `BAN_FAILED`: the blocking fails; RECOVER_FAILED: the unblocking fails.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBanStatus(const std::string& _banStatus);

                    /**
                     * 判断参数 BanStatus 是否已赋值
                     * @return BanStatus 是否已赋值
                     * 
                     */
                    bool BanStatusHasBeenSet() const;

                    /**
                     * 获取Specifies whether to enable HTTP3. Valid values:
`0`: disable HTTP3;
`1`: enable HTTP3.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Http3Supported Specifies whether to enable HTTP3. Valid values:
`0`: disable HTTP3;
`1`: enable HTTP3.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetHttp3Supported() const;

                    /**
                     * 设置Specifies whether to enable HTTP3. Valid values:
`0`: disable HTTP3;
`1`: enable HTTP3.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _http3Supported Specifies whether to enable HTTP3. Valid values:
`0`: disable HTTP3;
`1`: enable HTTP3.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHttp3Supported(const int64_t& _http3Supported);

                    /**
                     * 判断参数 Http3Supported 是否已赋值
                     * @return Http3Supported 是否已赋值
                     * 
                     */
                    bool Http3SupportedHasBeenSet() const;

                private:

                    /**
                     * Forwarding rule domain name.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Forwarding rule list of the domain name.
                     */
                    std::vector<RuleInfo> m_ruleSet;
                    bool m_ruleSetHasBeenSet;

                    /**
                     * Server certificate ID of the domain. When it is `default`, it indicates that the default certificate will be used (i.e., the certificate configured for the listener).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                    /**
                     * Server certificate name of the domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_certificateAlias;
                    bool m_certificateAliasHasBeenSet;

                    /**
                     * Client certificate ID of the domain. When it is `default`, it indicates that the default certificate will be used (i.e., the certificate configured for the listener).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_clientCertificateId;
                    bool m_clientCertificateIdHasBeenSet;

                    /**
                     * Client certificate name of the domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_clientCertificateAlias;
                    bool m_clientCertificateAliasHasBeenSet;

                    /**
                     * Basic authentication configuration ID of the domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_basicAuthConfId;
                    bool m_basicAuthConfIdHasBeenSet;

                    /**
                     * Basic authentication status:
0: disabled;
1: enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_basicAuth;
                    bool m_basicAuthHasBeenSet;

                    /**
                     * Basic authentication configuration name of the domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_basicAuthConfAlias;
                    bool m_basicAuthConfAliasHasBeenSet;

                    /**
                     * Origin server authentication certificate ID of the domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_realServerCertificateId;
                    bool m_realServerCertificateIdHasBeenSet;

                    /**
                     * Origin server authentication status:
0: disabled;
1: enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_realServerAuth;
                    bool m_realServerAuthHasBeenSet;

                    /**
                     * Origin server authentication certificate name of the domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_realServerCertificateAlias;
                    bool m_realServerCertificateAliasHasBeenSet;

                    /**
                     * Connection authentication certificate ID of the domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_gaapCertificateId;
                    bool m_gaapCertificateIdHasBeenSet;

                    /**
                     * Connection authentication status:
0: disabled;
1: enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_gaapAuth;
                    bool m_gaapAuthHasBeenSet;

                    /**
                     * Connection authentication certificate name of the domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_gaapCertificateAlias;
                    bool m_gaapCertificateAliasHasBeenSet;

                    /**
                     * Origin server authentication domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_realServerCertificateDomain;
                    bool m_realServerCertificateDomainHasBeenSet;

                    /**
                     * Returns IDs and aliases of multiple certificates when there are multiple client certificates.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<CertificateAliasInfo> m_polyClientCertificateAliasInfo;
                    bool m_polyClientCertificateAliasInfoHasBeenSet;

                    /**
                     * Returns IDs and aliases of multiple certificates when there are multiple origin certificates.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<CertificateAliasInfo> m_polyRealServerCertificateAliasInfo;
                    bool m_polyRealServerCertificateAliasInfoHasBeenSet;

                    /**
                     * Domain name status.
0: running;
1: changing;
2: deleting.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t m_domainStatus;
                    bool m_domainStatusHasBeenSet;

                    /**
                     * Blocking-related status of the domain name. `BANNED`: the domain name is blocked; `RECOVER`: the domain name is unblocked or normal; `BANNING`: the domain name is being blocked; `RECOVERING`: the domain name is being unblocked; `BAN_FAILED`: the blocking fails; RECOVER_FAILED: the unblocking fails.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_banStatus;
                    bool m_banStatusHasBeenSet;

                    /**
                     * Specifies whether to enable HTTP3. Valid values:
`0`: disable HTTP3;
`1`: enable HTTP3.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_http3Supported;
                    bool m_http3SupportedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DOMAINRULESET_H_
