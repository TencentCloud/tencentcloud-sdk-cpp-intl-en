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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DOMAINSPARTINFO_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DOMAINSPARTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/PortInfo.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * Details of domain names protected by SaaS WAF
                */
                class DomainsPartInfo : public AbstractModel
                {
                public:
                    DomainsPartInfo();
                    ~DomainsPartInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Domain name
                     * @return Domain Domain name
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name
                     * @param _domain Domain name
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
                     * 获取Unique domain name ID
                     * @return DomainId Unique domain name ID
                     * 
                     */
                    std::string GetDomainId() const;

                    /**
                     * 设置Unique domain name ID
                     * @param _domainId Unique domain name ID
                     * 
                     */
                    void SetDomainId(const std::string& _domainId);

                    /**
                     * 判断参数 DomainId 是否已赋值
                     * @return DomainId 是否已赋值
                     * 
                     */
                    bool DomainIdHasBeenSet() const;

                    /**
                     * 获取Unique instance ID of the domain name
                     * @return InstanceId Unique instance ID of the domain name
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Unique instance ID of the domain name
                     * @param _instanceId Unique instance ID of the domain name
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Instance type of the domain name
                     * @return Edition Instance type of the domain name
                     * 
                     */
                    std::string GetEdition() const;

                    /**
                     * 设置Instance type of the domain name
                     * @param _edition Instance type of the domain name
                     * 
                     */
                    void SetEdition(const std::string& _edition);

                    /**
                     * 判断参数 Edition 是否已赋值
                     * @return Edition 是否已赋值
                     * 
                     */
                    bool EditionHasBeenSet() const;

                    /**
                     * 获取Instance name of the domain name
                     * @return InstanceName Instance name of the domain name
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name of the domain name
                     * @param _instanceName Instance name of the domain name
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Certificate
                     * @return Cert Certificate
                     * 
                     */
                    std::string GetCert() const;

                    /**
                     * 设置Certificate
                     * @param _cert Certificate
                     * 
                     */
                    void SetCert(const std::string& _cert);

                    /**
                     * 判断参数 Cert 是否已赋值
                     * @return Cert 是否已赋值
                     * 
                     */
                    bool CertHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateTime Creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param _createTime Creation time
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Status of the rule engine and AI engine
1: initial status. Interception for the rule engine and disabled for the AI engine.
10: observation for the rule engine and disabled for the AI engine
11: observation for both the rule engine and AI engine
12: observation for the rule engine and interception for the AI engine
20: interception for the rule engine and disabled for the AI engine
21: interception for the rule engine and observation for the AI engine
22: interception for both the rule engine and AI engine
                     * @return Engine Status of the rule engine and AI engine
1: initial status. Interception for the rule engine and disabled for the AI engine.
10: observation for the rule engine and disabled for the AI engine
11: observation for both the rule engine and AI engine
12: observation for the rule engine and interception for the AI engine
20: interception for the rule engine and disabled for the AI engine
21: interception for the rule engine and observation for the AI engine
22: interception for both the rule engine and AI engine
                     * 
                     */
                    uint64_t GetEngine() const;

                    /**
                     * 设置Status of the rule engine and AI engine
1: initial status. Interception for the rule engine and disabled for the AI engine.
10: observation for the rule engine and disabled for the AI engine
11: observation for both the rule engine and AI engine
12: observation for the rule engine and interception for the AI engine
20: interception for the rule engine and disabled for the AI engine
21: interception for the rule engine and observation for the AI engine
22: interception for both the rule engine and AI engine
                     * @param _engine Status of the rule engine and AI engine
1: initial status. Interception for the rule engine and disabled for the AI engine.
10: observation for the rule engine and disabled for the AI engine
11: observation for both the rule engine and AI engine
12: observation for the rule engine and interception for the AI engine
20: interception for the rule engine and disabled for the AI engine
21: interception for the rule engine and observation for the AI engine
22: interception for both the rule engine and AI engine
                     * 
                     */
                    void SetEngine(const uint64_t& _engine);

                    /**
                     * 判断参数 Engine 是否已赋值
                     * @return Engine 是否已赋值
                     * 
                     */
                    bool EngineHasBeenSet() const;

                    /**
                     * 获取Whether to enable forced redirection from HTTP to HTTPS
0: do not force redirection
1: enable forced redirection
                     * @return HttpsRewrite Whether to enable forced redirection from HTTP to HTTPS
0: do not force redirection
1: enable forced redirection
                     * 
                     */
                    uint64_t GetHttpsRewrite() const;

                    /**
                     * 设置Whether to enable forced redirection from HTTP to HTTPS
0: do not force redirection
1: enable forced redirection
                     * @param _httpsRewrite Whether to enable forced redirection from HTTP to HTTPS
0: do not force redirection
1: enable forced redirection
                     * 
                     */
                    void SetHttpsRewrite(const uint64_t& _httpsRewrite);

                    /**
                     * 判断参数 HttpsRewrite 是否已赋值
                     * @return HttpsRewrite 是否已赋值
                     * 
                     */
                    bool HttpsRewriteHasBeenSet() const;

                    /**
                     * 获取HTTPS origin-pull port
                     * @return HttpsUpstreamPort HTTPS origin-pull port
                     * 
                     */
                    std::string GetHttpsUpstreamPort() const;

                    /**
                     * 设置HTTPS origin-pull port
                     * @param _httpsUpstreamPort HTTPS origin-pull port
                     * 
                     */
                    void SetHttpsUpstreamPort(const std::string& _httpsUpstreamPort);

                    /**
                     * 判断参数 HttpsUpstreamPort 是否已赋值
                     * @return HttpsUpstreamPort 是否已赋值
                     * 
                     */
                    bool HttpsUpstreamPortHasBeenSet() const;

                    /**
                     * 获取Whether a layer-7 proxy service is deployed before WAF
0: No proxy service deployed
1: Proxy service deployed, and WAF will use XFF to obtain the client IP address
2: Proxy service deployed and WAF will use remote_addr to obtain the client IP address
3: Proxy service deployed and WAF will use the custom header in ip_headers to obtain the client IP address
                     * @return IsCdn Whether a layer-7 proxy service is deployed before WAF
0: No proxy service deployed
1: Proxy service deployed, and WAF will use XFF to obtain the client IP address
2: Proxy service deployed and WAF will use remote_addr to obtain the client IP address
3: Proxy service deployed and WAF will use the custom header in ip_headers to obtain the client IP address
                     * 
                     */
                    uint64_t GetIsCdn() const;

                    /**
                     * 设置Whether a layer-7 proxy service is deployed before WAF
0: No proxy service deployed
1: Proxy service deployed, and WAF will use XFF to obtain the client IP address
2: Proxy service deployed and WAF will use remote_addr to obtain the client IP address
3: Proxy service deployed and WAF will use the custom header in ip_headers to obtain the client IP address
                     * @param _isCdn Whether a layer-7 proxy service is deployed before WAF
0: No proxy service deployed
1: Proxy service deployed, and WAF will use XFF to obtain the client IP address
2: Proxy service deployed and WAF will use remote_addr to obtain the client IP address
3: Proxy service deployed and WAF will use the custom header in ip_headers to obtain the client IP address
                     * 
                     */
                    void SetIsCdn(const uint64_t& _isCdn);

                    /**
                     * 判断参数 IsCdn 是否已赋值
                     * @return IsCdn 是否已赋值
                     * 
                     */
                    bool IsCdnHasBeenSet() const;

                    /**
                     * 获取This parameter has been deprecated.
                     * @return IsGray This parameter has been deprecated.
                     * 
                     */
                    uint64_t GetIsGray() const;

                    /**
                     * 设置This parameter has been deprecated.
                     * @param _isGray This parameter has been deprecated.
                     * 
                     */
                    void SetIsGray(const uint64_t& _isGray);

                    /**
                     * 判断参数 IsGray 是否已赋值
                     * @return IsGray 是否已赋值
                     * 
                     */
                    bool IsGrayHasBeenSet() const;

                    /**
                     * 获取Whether to enable HTTP2. You should enable HTTPS as well.
0: disable
1: enable
                     * @return IsHttp2 Whether to enable HTTP2. You should enable HTTPS as well.
0: disable
1: enable
                     * 
                     */
                    uint64_t GetIsHttp2() const;

                    /**
                     * 设置Whether to enable HTTP2. You should enable HTTPS as well.
0: disable
1: enable
                     * @param _isHttp2 Whether to enable HTTP2. You should enable HTTPS as well.
0: disable
1: enable
                     * 
                     */
                    void SetIsHttp2(const uint64_t& _isHttp2);

                    /**
                     * 判断参数 IsHttp2 是否已赋值
                     * @return IsHttp2 是否已赋值
                     * 
                     */
                    bool IsHttp2HasBeenSet() const;

                    /**
                     * 获取Whether to enable support for WebSocket
0: disable
1: enable
                     * @return IsWebsocket Whether to enable support for WebSocket
0: disable
1: enable
                     * 
                     */
                    uint64_t GetIsWebsocket() const;

                    /**
                     * 设置Whether to enable support for WebSocket
0: disable
1: enable
                     * @param _isWebsocket Whether to enable support for WebSocket
0: disable
1: enable
                     * 
                     */
                    void SetIsWebsocket(const uint64_t& _isWebsocket);

                    /**
                     * 判断参数 IsWebsocket 是否已赋值
                     * @return IsWebsocket 是否已赋值
                     * 
                     */
                    bool IsWebsocketHasBeenSet() const;

                    /**
                     * 获取Load balancing policy for origin-pull
0: round-robin
1: IP hash
2: weighted round-robin
                     * @return LoadBalance Load balancing policy for origin-pull
0: round-robin
1: IP hash
2: weighted round-robin
                     * 
                     */
                    uint64_t GetLoadBalance() const;

                    /**
                     * 设置Load balancing policy for origin-pull
0: round-robin
1: IP hash
2: weighted round-robin
                     * @param _loadBalance Load balancing policy for origin-pull
0: round-robin
1: IP hash
2: weighted round-robin
                     * 
                     */
                    void SetLoadBalance(const uint64_t& _loadBalance);

                    /**
                     * 判断参数 LoadBalance 是否已赋值
                     * @return LoadBalance 是否已赋值
                     * 
                     */
                    bool LoadBalanceHasBeenSet() const;

                    /**
                     * 获取Protection mode
0: observation mode
1: interception mode
                     * @return Mode Protection mode
0: observation mode
1: interception mode
                     * 
                     */
                    uint64_t GetMode() const;

                    /**
                     * 设置Protection mode
0: observation mode
1: interception mode
                     * @param _mode Protection mode
0: observation mode
1: interception mode
                     * 
                     */
                    void SetMode(const uint64_t& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取Private key of the self-owned certificate
                     * @return PrivateKey Private key of the self-owned certificate
                     * 
                     */
                    std::string GetPrivateKey() const;

                    /**
                     * 设置Private key of the self-owned certificate
                     * @param _privateKey Private key of the self-owned certificate
                     * 
                     */
                    void SetPrivateKey(const std::string& _privateKey);

                    /**
                     * 判断参数 PrivateKey 是否已赋值
                     * @return PrivateKey 是否已赋值
                     * 
                     */
                    bool PrivateKeyHasBeenSet() const;

                    /**
                     * 获取When CertType is 2, this parameter must be filled, indicating the certificate ID hosted on Tencent Cloud's SSL platform
                     * @return SSLId When CertType is 2, this parameter must be filled, indicating the certificate ID hosted on Tencent Cloud's SSL platform
                     * 
                     */
                    std::string GetSSLId() const;

                    /**
                     * 设置When CertType is 2, this parameter must be filled, indicating the certificate ID hosted on Tencent Cloud's SSL platform
                     * @param _sSLId When CertType is 2, this parameter must be filled, indicating the certificate ID hosted on Tencent Cloud's SSL platform
                     * 
                     */
                    void SetSSLId(const std::string& _sSLId);

                    /**
                     * 判断参数 SSLId 是否已赋值
                     * @return SSLId 是否已赋值
                     * 
                     */
                    bool SSLIdHasBeenSet() const;

                    /**
                     * 获取Origin domain when domain is back to source. When UpstreamType=1, this field needs to be filled
                     * @return UpstreamDomain Origin domain when domain is back to source. When UpstreamType=1, this field needs to be filled
                     * 
                     */
                    std::string GetUpstreamDomain() const;

                    /**
                     * 设置Origin domain when domain is back to source. When UpstreamType=1, this field needs to be filled
                     * @param _upstreamDomain Origin domain when domain is back to source. When UpstreamType=1, this field needs to be filled
                     * 
                     */
                    void SetUpstreamDomain(const std::string& _upstreamDomain);

                    /**
                     * 判断参数 UpstreamDomain 是否已赋值
                     * @return UpstreamDomain 是否已赋值
                     * 
                     */
                    bool UpstreamDomainHasBeenSet() const;

                    /**
                     * 获取Origin-pull type
0: origin-pull via IP address
1: origin-pull via domain name
                     * @return UpstreamType Origin-pull type
0: origin-pull via IP address
1: origin-pull via domain name
                     * 
                     */
                    uint64_t GetUpstreamType() const;

                    /**
                     * 设置Origin-pull type
0: origin-pull via IP address
1: origin-pull via domain name
                     * @param _upstreamType Origin-pull type
0: origin-pull via IP address
1: origin-pull via domain name
                     * 
                     */
                    void SetUpstreamType(const uint64_t& _upstreamType);

                    /**
                     * 判断参数 UpstreamType 是否已赋值
                     * @return UpstreamType 是否已赋值
                     * 
                     */
                    bool UpstreamTypeHasBeenSet() const;

                    /**
                     * 获取Origin IP list when IP is back to source. When UpstreamType=0, this field is required
                     * @return SrcList Origin IP list when IP is back to source. When UpstreamType=0, this field is required
                     * 
                     */
                    std::vector<std::string> GetSrcList() const;

                    /**
                     * 设置Origin IP list when IP is back to source. When UpstreamType=0, this field is required
                     * @param _srcList Origin IP list when IP is back to source. When UpstreamType=0, this field is required
                     * 
                     */
                    void SetSrcList(const std::vector<std::string>& _srcList);

                    /**
                     * 判断参数 SrcList 是否已赋值
                     * @return SrcList 是否已赋值
                     * 
                     */
                    bool SrcListHasBeenSet() const;

                    /**
                     * 获取 Domain name port configuration
                     * @return Ports  Domain name port configuration
                     * 
                     */
                    std::vector<PortInfo> GetPorts() const;

                    /**
                     * 设置 Domain name port configuration
                     * @param _ports  Domain name port configuration
                     * 
                     */
                    void SetPorts(const std::vector<PortInfo>& _ports);

                    /**
                     * 判断参数 Ports 是否已赋值
                     * @return Ports 是否已赋值
                     * 
                     */
                    bool PortsHasBeenSet() const;

                    /**
                     * 获取Certificate type
0: no certificate, with only the HTTP listening port configured
1: self-owned certificate
2: managed certificate
                     * @return CertType Certificate type
0: no certificate, with only the HTTP listening port configured
1: self-owned certificate
2: managed certificate
                     * 
                     */
                    uint64_t GetCertType() const;

                    /**
                     * 设置Certificate type
0: no certificate, with only the HTTP listening port configured
1: self-owned certificate
2: managed certificate
                     * @param _certType Certificate type
0: no certificate, with only the HTTP listening port configured
1: self-owned certificate
2: managed certificate
                     * 
                     */
                    void SetCertType(const uint64_t& _certType);

                    /**
                     * 判断参数 CertType 是否已赋值
                     * @return CertType 是否已赋值
                     * 
                     */
                    bool CertTypeHasBeenSet() const;

                    /**
                     * 获取Origin-pull protocol for HTTPS when the service is configured with an HTTPS port
http: Use the HTTP protocol for origin-pull. It is used together with HttpsUpstreamPort.
https: Use the HTTPS protocol for origin-pull.
                     * @return UpstreamScheme Origin-pull protocol for HTTPS when the service is configured with an HTTPS port
http: Use the HTTP protocol for origin-pull. It is used together with HttpsUpstreamPort.
https: Use the HTTPS protocol for origin-pull.
                     * 
                     */
                    std::string GetUpstreamScheme() const;

                    /**
                     * 设置Origin-pull protocol for HTTPS when the service is configured with an HTTPS port
http: Use the HTTP protocol for origin-pull. It is used together with HttpsUpstreamPort.
https: Use the HTTPS protocol for origin-pull.
                     * @param _upstreamScheme Origin-pull protocol for HTTPS when the service is configured with an HTTPS port
http: Use the HTTP protocol for origin-pull. It is used together with HttpsUpstreamPort.
https: Use the HTTPS protocol for origin-pull.
                     * 
                     */
                    void SetUpstreamScheme(const std::string& _upstreamScheme);

                    /**
                     * 判断参数 UpstreamScheme 是否已赋值
                     * @return UpstreamScheme 是否已赋值
                     * 
                     */
                    bool UpstreamSchemeHasBeenSet() const;

                    /**
                     * 获取Whether to enable access logging
0: disable
1: enable
                     * @return Cls Whether to enable access logging
0: disable
1: enable
                     * 
                     */
                    uint64_t GetCls() const;

                    /**
                     * 设置Whether to enable access logging
0: disable
1: enable
                     * @param _cls Whether to enable access logging
0: disable
1: enable
                     * 
                     */
                    void SetCls(const uint64_t& _cls);

                    /**
                     * 判断参数 Cls 是否已赋值
                     * @return Cls 是否已赋值
                     * 
                     */
                    bool ClsHasBeenSet() const;

                    /**
                     * 获取CNAME record for accessing a domain name protected by SaaS WAF
                     * @return Cname CNAME record for accessing a domain name protected by SaaS WAF
                     * 
                     */
                    std::string GetCname() const;

                    /**
                     * 设置CNAME record for accessing a domain name protected by SaaS WAF
                     * @param _cname CNAME record for accessing a domain name protected by SaaS WAF
                     * 
                     */
                    void SetCname(const std::string& _cname);

                    /**
                     * 判断参数 Cname 是否已赋值
                     * @return Cname 是否已赋值
                     * 
                     */
                    bool CnameHasBeenSet() const;

                    /**
                     * 获取Whether to enable persistent connection
0: non-persistent connection
1: persistent connection
                     * @return IsKeepAlive Whether to enable persistent connection
0: non-persistent connection
1: persistent connection
                     * 
                     */
                    uint64_t GetIsKeepAlive() const;

                    /**
                     * 设置Whether to enable persistent connection
0: non-persistent connection
1: persistent connection
                     * @param _isKeepAlive Whether to enable persistent connection
0: non-persistent connection
1: persistent connection
                     * 
                     */
                    void SetIsKeepAlive(const uint64_t& _isKeepAlive);

                    /**
                     * 判断参数 IsKeepAlive 是否已赋值
                     * @return IsKeepAlive 是否已赋值
                     * 
                     */
                    bool IsKeepAliveHasBeenSet() const;

                    /**
                     * 获取Whether to enable proactive health check
0: disable
1: enable
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ActiveCheck Whether to enable proactive health check
0: disable
1: enable
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetActiveCheck() const;

                    /**
                     * 设置Whether to enable proactive health check
0: disable
1: enable
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _activeCheck Whether to enable proactive health check
0: disable
1: enable
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetActiveCheck(const uint64_t& _activeCheck);

                    /**
                     * 判断参数 ActiveCheck 是否已赋值
                     * @return ActiveCheck 是否已赋值
                     * 
                     */
                    bool ActiveCheckHasBeenSet() const;

                    /**
                     * 获取TLS version information

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TLSVersion TLS version information

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTLSVersion() const;

                    /**
                     * 设置TLS version information

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tLSVersion TLS version information

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTLSVersion(const int64_t& _tLSVersion);

                    /**
                     * 判断参数 TLSVersion 是否已赋值
                     * @return TLSVersion 是否已赋值
                     * 
                     */
                    bool TLSVersionHasBeenSet() const;

                    /**
                     * 获取Custom encryption suite list. When CipherTemplate is 3, this field is required, indicating the custom encryption suite, value obtained through DescribeCiphersDetail API.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Ciphers Custom encryption suite list. When CipherTemplate is 3, this field is required, indicating the custom encryption suite, value obtained through DescribeCiphersDetail API.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<int64_t> GetCiphers() const;

                    /**
                     * 设置Custom encryption suite list. When CipherTemplate is 3, this field is required, indicating the custom encryption suite, value obtained through DescribeCiphersDetail API.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ciphers Custom encryption suite list. When CipherTemplate is 3, this field is required, indicating the custom encryption suite, value obtained through DescribeCiphersDetail API.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCiphers(const std::vector<int64_t>& _ciphers);

                    /**
                     * 判断参数 Ciphers 是否已赋值
                     * @return Ciphers 是否已赋值
                     * 
                     */
                    bool CiphersHasBeenSet() const;

                    /**
                     * 获取Cipher suite template
0: default template
1: general template
2: security template
3: custom template
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CipherTemplate Cipher suite template
0: default template
1: general template
2: security template
3: custom template
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetCipherTemplate() const;

                    /**
                     * 设置Cipher suite template
0: default template
1: general template
2: security template
3: custom template
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cipherTemplate Cipher suite template
0: default template
1: general template
2: security template
3: custom template
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCipherTemplate(const int64_t& _cipherTemplate);

                    /**
                     * 判断参数 CipherTemplate 是否已赋值
                     * @return CipherTemplate 是否已赋值
                     * 
                     */
                    bool CipherTemplateHasBeenSet() const;

                    /**
                     * 获取Read timeout between WAF and origin server, 300s by default.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProxyReadTimeout Read timeout between WAF and origin server, 300s by default.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetProxyReadTimeout() const;

                    /**
                     * 设置Read timeout between WAF and origin server, 300s by default.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _proxyReadTimeout Read timeout between WAF and origin server, 300s by default.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProxyReadTimeout(const int64_t& _proxyReadTimeout);

                    /**
                     * 判断参数 ProxyReadTimeout 是否已赋值
                     * @return ProxyReadTimeout 是否已赋值
                     * 
                     */
                    bool ProxyReadTimeoutHasBeenSet() const;

                    /**
                     * 获取WAF and origin server write timeout, 300s by default.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProxySendTimeout WAF and origin server write timeout, 300s by default.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetProxySendTimeout() const;

                    /**
                     * 设置WAF and origin server write timeout, 300s by default.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _proxySendTimeout WAF and origin server write timeout, 300s by default.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProxySendTimeout(const int64_t& _proxySendTimeout);

                    /**
                     * 判断参数 ProxySendTimeout 是否已赋值
                     * @return ProxySendTimeout 是否已赋值
                     * 
                     */
                    bool ProxySendTimeoutHasBeenSet() const;

                    /**
                     * 获取SNI type during WAF origin-pull
0: Disable SNI and do not configure server_name in client_hello.
1: Enable SNI. server_name in client_hello is a protected domain name.
2: Enable SNI. SNI is the origin server domain name during the domain name origin-pull.
3: Enable SNI. SNI is a custom domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SniType SNI type during WAF origin-pull
0: Disable SNI and do not configure server_name in client_hello.
1: Enable SNI. server_name in client_hello is a protected domain name.
2: Enable SNI. SNI is the origin server domain name during the domain name origin-pull.
3: Enable SNI. SNI is a custom domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetSniType() const;

                    /**
                     * 设置SNI type during WAF origin-pull
0: Disable SNI and do not configure server_name in client_hello.
1: Enable SNI. server_name in client_hello is a protected domain name.
2: Enable SNI. SNI is the origin server domain name during the domain name origin-pull.
3: Enable SNI. SNI is a custom domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sniType SNI type during WAF origin-pull
0: Disable SNI and do not configure server_name in client_hello.
1: Enable SNI. server_name in client_hello is a protected domain name.
2: Enable SNI. SNI is the origin server domain name during the domain name origin-pull.
3: Enable SNI. SNI is a custom domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSniType(const int64_t& _sniType);

                    /**
                     * 判断参数 SniType 是否已赋值
                     * @return SniType 是否已赋值
                     * 
                     */
                    bool SniTypeHasBeenSet() const;

                    /**
                     * 获取When SniType=3, this parameter is required, indicating a custom SNI;

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SniHost When SniType=3, this parameter is required, indicating a custom SNI;

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSniHost() const;

                    /**
                     * 设置When SniType=3, this parameter is required, indicating a custom SNI;

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sniHost When SniType=3, this parameter is required, indicating a custom SNI;

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSniHost(const std::string& _sniHost);

                    /**
                     * 判断参数 SniHost 是否已赋值
                     * @return SniHost 是否已赋值
                     * 
                     */
                    bool SniHostHasBeenSet() const;

                    /**
                     * 获取Weight of the IP address for origin-pull
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Weights Weight of the IP address for origin-pull
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetWeights() const;

                    /**
                     * 设置Weight of the IP address for origin-pull
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _weights Weight of the IP address for origin-pull
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWeights(const std::vector<std::string>& _weights);

                    /**
                     * 判断参数 Weights 是否已赋值
                     * @return Weights 是否已赋值
                     * 
                     */
                    bool WeightsHasBeenSet() const;

                    /**
                     * 获取IsCdn=3 indicates custom header

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IpHeaders IsCdn=3 indicates custom header

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetIpHeaders() const;

                    /**
                     * 设置IsCdn=3 indicates custom header

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ipHeaders IsCdn=3 indicates custom header

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIpHeaders(const std::vector<std::string>& _ipHeaders);

                    /**
                     * 判断参数 IpHeaders 是否已赋值
                     * @return IpHeaders 是否已赋值
                     * 
                     */
                    bool IpHeadersHasBeenSet() const;

                    /**
                     * 获取Whether to enable XFF reset
0: disable
1: enable
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return XFFReset Whether to enable XFF reset
0: disable
1: enable
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetXFFReset() const;

                    /**
                     * 设置Whether to enable XFF reset
0: disable
1: enable
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _xFFReset Whether to enable XFF reset
0: disable
1: enable
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetXFFReset(const int64_t& _xFFReset);

                    /**
                     * 判断参数 XFFReset 是否已赋值
                     * @return XFFReset 是否已赋值
                     * 
                     */
                    bool XFFResetHasBeenSet() const;

                    /**
                     * 获取Domain name remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Note Domain name remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNote() const;

                    /**
                     * 设置Domain name remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _note Domain name remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNote(const std::string& _note);

                    /**
                     * 判断参数 Note 是否已赋值
                     * @return Note 是否已赋值
                     * 
                     */
                    bool NoteHasBeenSet() const;

                    /**
                     * 获取Custom origin-pull host. The default value is a null string, indicating that a protected domain name is used as the origin-pull host.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpstreamHost Custom origin-pull host. The default value is a null string, indicating that a protected domain name is used as the origin-pull host.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpstreamHost() const;

                    /**
                     * 设置Custom origin-pull host. The default value is a null string, indicating that a protected domain name is used as the origin-pull host.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _upstreamHost Custom origin-pull host. The default value is a null string, indicating that a protected domain name is used as the origin-pull host.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUpstreamHost(const std::string& _upstreamHost);

                    /**
                     * 判断参数 UpstreamHost 是否已赋值
                     * @return UpstreamHost 是否已赋值
                     * 
                     */
                    bool UpstreamHostHasBeenSet() const;

                    /**
                     * 获取Protection rule
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Level Protection rule
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置Protection rule
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _level Protection rule
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取Whether to enable caching. 0: disable; 1: enable.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProxyBuffer Whether to enable caching. 0: disable; 1: enable.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetProxyBuffer() const;

                    /**
                     * 设置Whether to enable caching. 0: disable; 1: enable.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _proxyBuffer Whether to enable caching. 0: disable; 1: enable.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProxyBuffer(const int64_t& _proxyBuffer);

                    /**
                     * 判断参数 ProxyBuffer 是否已赋值
                     * @return ProxyBuffer 是否已赋值
                     * 
                     */
                    bool ProxyBufferHasBeenSet() const;

                    /**
                     * 获取Whether to enable SM. 0: do not enable SM; 1: add support for SM based on the existing TLS option; 2: enable SM and support only SM client access.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GmType Whether to enable SM. 0: do not enable SM; 1: add support for SM based on the existing TLS option; 2: enable SM and support only SM client access.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetGmType() const;

                    /**
                     * 设置Whether to enable SM. 0: do not enable SM; 1: add support for SM based on the existing TLS option; 2: enable SM and support only SM client access.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _gmType Whether to enable SM. 0: do not enable SM; 1: add support for SM based on the existing TLS option; 2: enable SM and support only SM client access.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetGmType(const int64_t& _gmType);

                    /**
                     * 判断参数 GmType 是否已赋值
                     * @return GmType 是否已赋值
                     * 
                     */
                    bool GmTypeHasBeenSet() const;

                    /**
                     * 获取SM certificate type. 0: no SM certificate is available; 1: the certificate is a self-owned SM certificate; 2: the certificate is a managed SM certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GmCertType SM certificate type. 0: no SM certificate is available; 1: the certificate is a self-owned SM certificate; 2: the certificate is a managed SM certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetGmCertType() const;

                    /**
                     * 设置SM certificate type. 0: no SM certificate is available; 1: the certificate is a self-owned SM certificate; 2: the certificate is a managed SM certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _gmCertType SM certificate type. 0: no SM certificate is available; 1: the certificate is a self-owned SM certificate; 2: the certificate is a managed SM certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetGmCertType(const int64_t& _gmCertType);

                    /**
                     * 判断参数 GmCertType 是否已赋值
                     * @return GmCertType 是否已赋值
                     * 
                     */
                    bool GmCertTypeHasBeenSet() const;

                    /**
                     * 获取When GmCertType is 1, this parameter needs to be set, indicating the certificate chain of the self-owned SM certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GmCert When GmCertType is 1, this parameter needs to be set, indicating the certificate chain of the self-owned SM certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetGmCert() const;

                    /**
                     * 设置When GmCertType is 1, this parameter needs to be set, indicating the certificate chain of the self-owned SM certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _gmCert When GmCertType is 1, this parameter needs to be set, indicating the certificate chain of the self-owned SM certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetGmCert(const std::string& _gmCert);

                    /**
                     * 判断参数 GmCert 是否已赋值
                     * @return GmCert 是否已赋值
                     * 
                     */
                    bool GmCertHasBeenSet() const;

                    /**
                     * 获取When GmCertType is 1, this parameter needs to be set, indicating the private key of the self-owned SM certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GmPrivateKey When GmCertType is 1, this parameter needs to be set, indicating the private key of the self-owned SM certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetGmPrivateKey() const;

                    /**
                     * 设置When GmCertType is 1, this parameter needs to be set, indicating the private key of the self-owned SM certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _gmPrivateKey When GmCertType is 1, this parameter needs to be set, indicating the private key of the self-owned SM certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetGmPrivateKey(const std::string& _gmPrivateKey);

                    /**
                     * 判断参数 GmPrivateKey 是否已赋值
                     * @return GmPrivateKey 是否已赋值
                     * 
                     */
                    bool GmPrivateKeyHasBeenSet() const;

                    /**
                     * 获取When GmCertType is 1, this parameter needs to be set, indicating the encryption certificate of the self-owned SM certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GmEncCert When GmCertType is 1, this parameter needs to be set, indicating the encryption certificate of the self-owned SM certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetGmEncCert() const;

                    /**
                     * 设置When GmCertType is 1, this parameter needs to be set, indicating the encryption certificate of the self-owned SM certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _gmEncCert When GmCertType is 1, this parameter needs to be set, indicating the encryption certificate of the self-owned SM certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetGmEncCert(const std::string& _gmEncCert);

                    /**
                     * 判断参数 GmEncCert 是否已赋值
                     * @return GmEncCert 是否已赋值
                     * 
                     */
                    bool GmEncCertHasBeenSet() const;

                    /**
                     * 获取When GmCertType is 1, this parameter needs to be set, indicating the private key of the encryption certificate for the self-owned SM certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GmEncPrivateKey When GmCertType is 1, this parameter needs to be set, indicating the private key of the encryption certificate for the self-owned SM certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetGmEncPrivateKey() const;

                    /**
                     * 设置When GmCertType is 1, this parameter needs to be set, indicating the private key of the encryption certificate for the self-owned SM certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _gmEncPrivateKey When GmCertType is 1, this parameter needs to be set, indicating the private key of the encryption certificate for the self-owned SM certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetGmEncPrivateKey(const std::string& _gmEncPrivateKey);

                    /**
                     * 判断参数 GmEncPrivateKey 是否已赋值
                     * @return GmEncPrivateKey 是否已赋值
                     * 
                     */
                    bool GmEncPrivateKeyHasBeenSet() const;

                    /**
                     * 获取When GmCertType is 2, this parameter needs to be set, indicating the ID of the certificate managed by the Tencent Cloud SSL platform.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GmSSLId When GmCertType is 2, this parameter needs to be set, indicating the ID of the certificate managed by the Tencent Cloud SSL platform.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetGmSSLId() const;

                    /**
                     * 设置When GmCertType is 2, this parameter needs to be set, indicating the ID of the certificate managed by the Tencent Cloud SSL platform.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _gmSSLId When GmCertType is 2, this parameter needs to be set, indicating the ID of the certificate managed by the Tencent Cloud SSL platform.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetGmSSLId(const std::string& _gmSSLId);

                    /**
                     * 判断参数 GmSSLId 是否已赋值
                     * @return GmSSLId 是否已赋值
                     * 
                     */
                    bool GmSSLIdHasBeenSet() const;

                    /**
                     * 获取Domain name tag.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Labels Domain name tag.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetLabels() const;

                    /**
                     * 设置Domain name tag.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _labels Domain name tag.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLabels(const std::vector<std::string>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                private:

                    /**
                     * Domain name
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Unique domain name ID
                     */
                    std::string m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * Unique instance ID of the domain name
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance type of the domain name
                     */
                    std::string m_edition;
                    bool m_editionHasBeenSet;

                    /**
                     * Instance name of the domain name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Certificate
                     */
                    std::string m_cert;
                    bool m_certHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Status of the rule engine and AI engine
1: initial status. Interception for the rule engine and disabled for the AI engine.
10: observation for the rule engine and disabled for the AI engine
11: observation for both the rule engine and AI engine
12: observation for the rule engine and interception for the AI engine
20: interception for the rule engine and disabled for the AI engine
21: interception for the rule engine and observation for the AI engine
22: interception for both the rule engine and AI engine
                     */
                    uint64_t m_engine;
                    bool m_engineHasBeenSet;

                    /**
                     * Whether to enable forced redirection from HTTP to HTTPS
0: do not force redirection
1: enable forced redirection
                     */
                    uint64_t m_httpsRewrite;
                    bool m_httpsRewriteHasBeenSet;

                    /**
                     * HTTPS origin-pull port
                     */
                    std::string m_httpsUpstreamPort;
                    bool m_httpsUpstreamPortHasBeenSet;

                    /**
                     * Whether a layer-7 proxy service is deployed before WAF
0: No proxy service deployed
1: Proxy service deployed, and WAF will use XFF to obtain the client IP address
2: Proxy service deployed and WAF will use remote_addr to obtain the client IP address
3: Proxy service deployed and WAF will use the custom header in ip_headers to obtain the client IP address
                     */
                    uint64_t m_isCdn;
                    bool m_isCdnHasBeenSet;

                    /**
                     * This parameter has been deprecated.
                     */
                    uint64_t m_isGray;
                    bool m_isGrayHasBeenSet;

                    /**
                     * Whether to enable HTTP2. You should enable HTTPS as well.
0: disable
1: enable
                     */
                    uint64_t m_isHttp2;
                    bool m_isHttp2HasBeenSet;

                    /**
                     * Whether to enable support for WebSocket
0: disable
1: enable
                     */
                    uint64_t m_isWebsocket;
                    bool m_isWebsocketHasBeenSet;

                    /**
                     * Load balancing policy for origin-pull
0: round-robin
1: IP hash
2: weighted round-robin
                     */
                    uint64_t m_loadBalance;
                    bool m_loadBalanceHasBeenSet;

                    /**
                     * Protection mode
0: observation mode
1: interception mode
                     */
                    uint64_t m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * Private key of the self-owned certificate
                     */
                    std::string m_privateKey;
                    bool m_privateKeyHasBeenSet;

                    /**
                     * When CertType is 2, this parameter must be filled, indicating the certificate ID hosted on Tencent Cloud's SSL platform
                     */
                    std::string m_sSLId;
                    bool m_sSLIdHasBeenSet;

                    /**
                     * Origin domain when domain is back to source. When UpstreamType=1, this field needs to be filled
                     */
                    std::string m_upstreamDomain;
                    bool m_upstreamDomainHasBeenSet;

                    /**
                     * Origin-pull type
0: origin-pull via IP address
1: origin-pull via domain name
                     */
                    uint64_t m_upstreamType;
                    bool m_upstreamTypeHasBeenSet;

                    /**
                     * Origin IP list when IP is back to source. When UpstreamType=0, this field is required
                     */
                    std::vector<std::string> m_srcList;
                    bool m_srcListHasBeenSet;

                    /**
                     *  Domain name port configuration
                     */
                    std::vector<PortInfo> m_ports;
                    bool m_portsHasBeenSet;

                    /**
                     * Certificate type
0: no certificate, with only the HTTP listening port configured
1: self-owned certificate
2: managed certificate
                     */
                    uint64_t m_certType;
                    bool m_certTypeHasBeenSet;

                    /**
                     * Origin-pull protocol for HTTPS when the service is configured with an HTTPS port
http: Use the HTTP protocol for origin-pull. It is used together with HttpsUpstreamPort.
https: Use the HTTPS protocol for origin-pull.
                     */
                    std::string m_upstreamScheme;
                    bool m_upstreamSchemeHasBeenSet;

                    /**
                     * Whether to enable access logging
0: disable
1: enable
                     */
                    uint64_t m_cls;
                    bool m_clsHasBeenSet;

                    /**
                     * CNAME record for accessing a domain name protected by SaaS WAF
                     */
                    std::string m_cname;
                    bool m_cnameHasBeenSet;

                    /**
                     * Whether to enable persistent connection
0: non-persistent connection
1: persistent connection
                     */
                    uint64_t m_isKeepAlive;
                    bool m_isKeepAliveHasBeenSet;

                    /**
                     * Whether to enable proactive health check
0: disable
1: enable
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_activeCheck;
                    bool m_activeCheckHasBeenSet;

                    /**
                     * TLS version information

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_tLSVersion;
                    bool m_tLSVersionHasBeenSet;

                    /**
                     * Custom encryption suite list. When CipherTemplate is 3, this field is required, indicating the custom encryption suite, value obtained through DescribeCiphersDetail API.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> m_ciphers;
                    bool m_ciphersHasBeenSet;

                    /**
                     * Cipher suite template
0: default template
1: general template
2: security template
3: custom template
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_cipherTemplate;
                    bool m_cipherTemplateHasBeenSet;

                    /**
                     * Read timeout between WAF and origin server, 300s by default.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_proxyReadTimeout;
                    bool m_proxyReadTimeoutHasBeenSet;

                    /**
                     * WAF and origin server write timeout, 300s by default.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_proxySendTimeout;
                    bool m_proxySendTimeoutHasBeenSet;

                    /**
                     * SNI type during WAF origin-pull
0: Disable SNI and do not configure server_name in client_hello.
1: Enable SNI. server_name in client_hello is a protected domain name.
2: Enable SNI. SNI is the origin server domain name during the domain name origin-pull.
3: Enable SNI. SNI is a custom domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_sniType;
                    bool m_sniTypeHasBeenSet;

                    /**
                     * When SniType=3, this parameter is required, indicating a custom SNI;

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sniHost;
                    bool m_sniHostHasBeenSet;

                    /**
                     * Weight of the IP address for origin-pull
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_weights;
                    bool m_weightsHasBeenSet;

                    /**
                     * IsCdn=3 indicates custom header

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_ipHeaders;
                    bool m_ipHeadersHasBeenSet;

                    /**
                     * Whether to enable XFF reset
0: disable
1: enable
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_xFFReset;
                    bool m_xFFResetHasBeenSet;

                    /**
                     * Domain name remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                    /**
                     * Custom origin-pull host. The default value is a null string, indicating that a protected domain name is used as the origin-pull host.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_upstreamHost;
                    bool m_upstreamHostHasBeenSet;

                    /**
                     * Protection rule
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Whether to enable caching. 0: disable; 1: enable.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_proxyBuffer;
                    bool m_proxyBufferHasBeenSet;

                    /**
                     * Whether to enable SM. 0: do not enable SM; 1: add support for SM based on the existing TLS option; 2: enable SM and support only SM client access.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_gmType;
                    bool m_gmTypeHasBeenSet;

                    /**
                     * SM certificate type. 0: no SM certificate is available; 1: the certificate is a self-owned SM certificate; 2: the certificate is a managed SM certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_gmCertType;
                    bool m_gmCertTypeHasBeenSet;

                    /**
                     * When GmCertType is 1, this parameter needs to be set, indicating the certificate chain of the self-owned SM certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_gmCert;
                    bool m_gmCertHasBeenSet;

                    /**
                     * When GmCertType is 1, this parameter needs to be set, indicating the private key of the self-owned SM certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_gmPrivateKey;
                    bool m_gmPrivateKeyHasBeenSet;

                    /**
                     * When GmCertType is 1, this parameter needs to be set, indicating the encryption certificate of the self-owned SM certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_gmEncCert;
                    bool m_gmEncCertHasBeenSet;

                    /**
                     * When GmCertType is 1, this parameter needs to be set, indicating the private key of the encryption certificate for the self-owned SM certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_gmEncPrivateKey;
                    bool m_gmEncPrivateKeyHasBeenSet;

                    /**
                     * When GmCertType is 2, this parameter needs to be set, indicating the ID of the certificate managed by the Tencent Cloud SSL platform.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_gmSSLId;
                    bool m_gmSSLIdHasBeenSet;

                    /**
                     * Domain name tag.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_labels;
                    bool m_labelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DOMAINSPARTINFO_H_
