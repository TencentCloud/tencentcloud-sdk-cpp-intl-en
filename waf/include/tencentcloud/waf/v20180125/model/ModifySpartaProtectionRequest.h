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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYSPARTAPROTECTIONREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYSPARTAPROTECTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/SpartaProtectionPort.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * ModifySpartaProtection request structure.
                */
                class ModifySpartaProtectionRequest : public AbstractModel
                {
                public:
                    ModifySpartaProtectionRequest();
                    ~ModifySpartaProtectionRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Required. Unique domain name ID
                     * @return DomainId Required. Unique domain name ID
                     * 
                     */
                    std::string GetDomainId() const;

                    /**
                     * 设置Required. Unique domain name ID
                     * @param _domainId Required. Unique domain name ID
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
                     * 获取Required. Instance ID of the domain name
                     * @return InstanceID Required. Instance ID of the domain name
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置Required. Instance ID of the domain name
                     * @param _instanceID Required. Instance ID of the domain name
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取Certificate type. 0: no certificate, with only the HTTP listening port configured; 1: self-owned certificate; 2: managed certificate.
                     * @return CertType Certificate type. 0: no certificate, with only the HTTP listening port configured; 1: self-owned certificate; 2: managed certificate.
                     * 
                     */
                    int64_t GetCertType() const;

                    /**
                     * 设置Certificate type. 0: no certificate, with only the HTTP listening port configured; 1: self-owned certificate; 2: managed certificate.
                     * @param _certType Certificate type. 0: no certificate, with only the HTTP listening port configured; 1: self-owned certificate; 2: managed certificate.
                     * 
                     */
                    void SetCertType(const int64_t& _certType);

                    /**
                     * 判断参数 CertType 是否已赋值
                     * @return CertType 是否已赋值
                     * 
                     */
                    bool CertTypeHasBeenSet() const;

                    /**
                     * 获取When CertType is 1, this parameter is required, indicating the self-owned certificate chain
                     * @return Cert When CertType is 1, this parameter is required, indicating the self-owned certificate chain
                     * 
                     */
                    std::string GetCert() const;

                    /**
                     * 设置When CertType is 1, this parameter is required, indicating the self-owned certificate chain
                     * @param _cert When CertType is 1, this parameter is required, indicating the self-owned certificate chain
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
                     * 获取When CertType=1, this parameter is required, indicating the private key of the self-owned certificate.
                     * @return PrivateKey When CertType=1, this parameter is required, indicating the private key of the self-owned certificate.
                     * 
                     */
                    std::string GetPrivateKey() const;

                    /**
                     * 设置When CertType=1, this parameter is required, indicating the private key of the self-owned certificate.
                     * @param _privateKey When CertType=1, this parameter is required, indicating the private key of the self-owned certificate.
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
                     * 获取Whether a layer-7 proxy service is deployed before the WAF. 0: No proxy service is deployed; 1: The proxy service is deployed. The WAF will use XFF to obtain the client IP address; 2: The proxy service is deployed. The WAF will use remote_addr to obtain the client IP address; 3: The proxy service is deployed. The WAF will use a custom header in ip_headers to obtain the client IP address.
                     * @return IsCdn Whether a layer-7 proxy service is deployed before the WAF. 0: No proxy service is deployed; 1: The proxy service is deployed. The WAF will use XFF to obtain the client IP address; 2: The proxy service is deployed. The WAF will use remote_addr to obtain the client IP address; 3: The proxy service is deployed. The WAF will use a custom header in ip_headers to obtain the client IP address.
                     * 
                     */
                    int64_t GetIsCdn() const;

                    /**
                     * 设置Whether a layer-7 proxy service is deployed before the WAF. 0: No proxy service is deployed; 1: The proxy service is deployed. The WAF will use XFF to obtain the client IP address; 2: The proxy service is deployed. The WAF will use remote_addr to obtain the client IP address; 3: The proxy service is deployed. The WAF will use a custom header in ip_headers to obtain the client IP address.
                     * @param _isCdn Whether a layer-7 proxy service is deployed before the WAF. 0: No proxy service is deployed; 1: The proxy service is deployed. The WAF will use XFF to obtain the client IP address; 2: The proxy service is deployed. The WAF will use remote_addr to obtain the client IP address; 3: The proxy service is deployed. The WAF will use a custom header in ip_headers to obtain the client IP address.
                     * 
                     */
                    void SetIsCdn(const int64_t& _isCdn);

                    /**
                     * 判断参数 IsCdn 是否已赋值
                     * @return IsCdn 是否已赋值
                     * 
                     */
                    bool IsCdnHasBeenSet() const;

                    /**
                     * 获取Origin-pull protocol for HTTPS when the service is configured with an HTTPS port.
http: Use the HTTP protocol for origin-pull. It is used with HttpsUpstreamPort.
https: Use the HTTPS protocol for origin-pull.
                     * @return UpstreamScheme Origin-pull protocol for HTTPS when the service is configured with an HTTPS port.
http: Use the HTTP protocol for origin-pull. It is used with HttpsUpstreamPort.
https: Use the HTTPS protocol for origin-pull.
                     * 
                     */
                    std::string GetUpstreamScheme() const;

                    /**
                     * 设置Origin-pull protocol for HTTPS when the service is configured with an HTTPS port.
http: Use the HTTP protocol for origin-pull. It is used with HttpsUpstreamPort.
https: Use the HTTPS protocol for origin-pull.
                     * @param _upstreamScheme Origin-pull protocol for HTTPS when the service is configured with an HTTPS port.
http: Use the HTTP protocol for origin-pull. It is used with HttpsUpstreamPort.
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
                     * 获取HTTPS upstream port, required only when UpstreamScheme is http
                     * @return HttpsUpstreamPort HTTPS upstream port, required only when UpstreamScheme is http
                     * 
                     */
                    std::string GetHttpsUpstreamPort() const;

                    /**
                     * 设置HTTPS upstream port, required only when UpstreamScheme is http
                     * @param _httpsUpstreamPort HTTPS upstream port, required only when UpstreamScheme is http
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
                     * 获取Whether to enable forced redirection from HTTP to HTTPS. 0: disable; 1: enable
                     * @return HttpsRewrite Whether to enable forced redirection from HTTP to HTTPS. 0: disable; 1: enable
                     * 
                     */
                    uint64_t GetHttpsRewrite() const;

                    /**
                     * 设置Whether to enable forced redirection from HTTP to HTTPS. 0: disable; 1: enable
                     * @param _httpsRewrite Whether to enable forced redirection from HTTP to HTTPS. 0: disable; 1: enable
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
                     * 获取upstream type. 0: proxy to upstream by IP; 1: proxy to upstream by domain name
                     * @return UpstreamType upstream type. 0: proxy to upstream by IP; 1: proxy to upstream by domain name
                     * 
                     */
                    int64_t GetUpstreamType() const;

                    /**
                     * 设置upstream type. 0: proxy to upstream by IP; 1: proxy to upstream by domain name
                     * @param _upstreamType upstream type. 0: proxy to upstream by IP; 1: proxy to upstream by domain name
                     * 
                     */
                    void SetUpstreamType(const int64_t& _upstreamType);

                    /**
                     * 判断参数 UpstreamType 是否已赋值
                     * @return UpstreamType 是否已赋值
                     * 
                     */
                    bool UpstreamTypeHasBeenSet() const;

                    /**
                     * 获取Upstream domain when proxy to upstream by domain. When UpstreamType=1, this field needs to be filled
                     * @return UpstreamDomain Upstream domain when proxy to upstream by domain. When UpstreamType=1, this field needs to be filled
                     * 
                     */
                    std::string GetUpstreamDomain() const;

                    /**
                     * 设置Upstream domain when proxy to upstream by domain. When UpstreamType=1, this field needs to be filled
                     * @param _upstreamDomain Upstream domain when proxy to upstream by domain. When UpstreamType=1, this field needs to be filled
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
                     * 获取Upstream IP list when proxy to upstream by IP. When UpstreamType=0, this field is required
                     * @return SrcList Upstream IP list when proxy to upstream by IP. When UpstreamType=0, this field is required
                     * 
                     */
                    std::vector<std::string> GetSrcList() const;

                    /**
                     * 设置Upstream IP list when proxy to upstream by IP. When UpstreamType=0, this field is required
                     * @param _srcList Upstream IP list when proxy to upstream by IP. When UpstreamType=0, this field is required
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
                     * 获取Whether to enable HTTP2. You should enable HTTPS as well. 0: disable; 1: enable
                     * @return IsHttp2 Whether to enable HTTP2. You should enable HTTPS as well. 0: disable; 1: enable
                     * 
                     */
                    int64_t GetIsHttp2() const;

                    /**
                     * 设置Whether to enable HTTP2. You should enable HTTPS as well. 0: disable; 1: enable
                     * @param _isHttp2 Whether to enable HTTP2. You should enable HTTPS as well. 0: disable; 1: enable
                     * 
                     */
                    void SetIsHttp2(const int64_t& _isHttp2);

                    /**
                     * 判断参数 IsHttp2 是否已赋值
                     * @return IsHttp2 是否已赋值
                     * 
                     */
                    bool IsHttp2HasBeenSet() const;

                    /**
                     * 获取Whether to enable WebSocket. 0: disable; 1: enable
                     * @return IsWebsocket Whether to enable WebSocket. 0: disable; 1: enable
                     * 
                     */
                    int64_t GetIsWebsocket() const;

                    /**
                     * 设置Whether to enable WebSocket. 0: disable; 1: enable
                     * @param _isWebsocket Whether to enable WebSocket. 0: disable; 1: enable
                     * 
                     */
                    void SetIsWebsocket(const int64_t& _isWebsocket);

                    /**
                     * 判断参数 IsWebsocket 是否已赋值
                     * @return IsWebsocket 是否已赋值
                     * 
                     */
                    bool IsWebsocketHasBeenSet() const;

                    /**
                     * 获取Load balancing policy for upstream. 0: round-robin scheduling; 1: IP hash; 2: weighted round-robin scheduling
                     * @return LoadBalance Load balancing policy for upstream. 0: round-robin scheduling; 1: IP hash; 2: weighted round-robin scheduling
                     * 
                     */
                    int64_t GetLoadBalance() const;

                    /**
                     * 设置Load balancing policy for upstream. 0: round-robin scheduling; 1: IP hash; 2: weighted round-robin scheduling
                     * @param _loadBalance Load balancing policy for upstream. 0: round-robin scheduling; 1: IP hash; 2: weighted round-robin scheduling
                     * 
                     */
                    void SetLoadBalance(const int64_t& _loadBalance);

                    /**
                     * 判断参数 LoadBalance 是否已赋值
                     * @return LoadBalance 是否已赋值
                     * 
                     */
                    bool LoadBalanceHasBeenSet() const;

                    /**
                     * 获取To be deprecated, can be left blank. Whether to enable grayscale: 0 indicates not to enable grayscale.
                     * @return IsGray To be deprecated, can be left blank. Whether to enable grayscale: 0 indicates not to enable grayscale.
                     * 
                     */
                    int64_t GetIsGray() const;

                    /**
                     * 设置To be deprecated, can be left blank. Whether to enable grayscale: 0 indicates not to enable grayscale.
                     * @param _isGray To be deprecated, can be left blank. Whether to enable grayscale: 0 indicates not to enable grayscale.
                     * 
                     */
                    void SetIsGray(const int64_t& _isGray);

                    /**
                     * 判断参数 IsGray 是否已赋值
                     * @return IsGray 是否已赋值
                     * 
                     */
                    bool IsGrayHasBeenSet() const;

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
                     * 获取Port information, which can be obtained through the DescribeDomains API
                     * @return Ports Port information, which can be obtained through the DescribeDomains API
                     * 
                     */
                    std::vector<SpartaProtectionPort> GetPorts() const;

                    /**
                     * 设置Port information, which can be obtained through the DescribeDomains API
                     * @param _ports Port information, which can be obtained through the DescribeDomains API
                     * 
                     */
                    void SetPorts(const std::vector<SpartaProtectionPort>& _ports);

                    /**
                     * 判断参数 Ports 是否已赋值
                     * @return Ports 是否已赋值
                     * 
                     */
                    bool PortsHasBeenSet() const;

                    /**
                     * 获取Whether to enable persistent connection. 0: non-persistent connection; 1: persistent connection
                     * @return IsKeepAlive Whether to enable persistent connection. 0: non-persistent connection; 1: persistent connection
                     * 
                     */
                    std::string GetIsKeepAlive() const;

                    /**
                     * 设置Whether to enable persistent connection. 0: non-persistent connection; 1: persistent connection
                     * @param _isKeepAlive Whether to enable persistent connection. 0: non-persistent connection; 1: persistent connection
                     * 
                     */
                    void SetIsKeepAlive(const std::string& _isKeepAlive);

                    /**
                     * 判断参数 IsKeepAlive 是否已赋值
                     * @return IsKeepAlive 是否已赋值
                     * 
                     */
                    bool IsKeepAliveHasBeenSet() const;

                    /**
                     * 获取To be deprecated. Currently, set this parameter to 0. Anycast IP type switch. 0: common IP; 1: Anycast IP
                     * @return Anycast To be deprecated. Currently, set this parameter to 0. Anycast IP type switch. 0: common IP; 1: Anycast IP
                     * 
                     */
                    int64_t GetAnycast() const;

                    /**
                     * 设置To be deprecated. Currently, set this parameter to 0. Anycast IP type switch. 0: common IP; 1: Anycast IP
                     * @param _anycast To be deprecated. Currently, set this parameter to 0. Anycast IP type switch. 0: common IP; 1: Anycast IP
                     * 
                     */
                    void SetAnycast(const int64_t& _anycast);

                    /**
                     * 判断参数 Anycast 是否已赋值
                     * @return Anycast 是否已赋值
                     * 
                     */
                    bool AnycastHasBeenSet() const;

                    /**
                     * 获取Weight of each IP in the upstream IP List, corresponding to SrcList. Required only when UpstreamType is 0, and SrcList contains multiple IPs, and LoadBalance is 2; otherwise, fill in [ ].
                     * @return Weights Weight of each IP in the upstream IP List, corresponding to SrcList. Required only when UpstreamType is 0, and SrcList contains multiple IPs, and LoadBalance is 2; otherwise, fill in [ ].
                     * 
                     */
                    std::vector<int64_t> GetWeights() const;

                    /**
                     * 设置Weight of each IP in the upstream IP List, corresponding to SrcList. Required only when UpstreamType is 0, and SrcList contains multiple IPs, and LoadBalance is 2; otherwise, fill in [ ].
                     * @param _weights Weight of each IP in the upstream IP List, corresponding to SrcList. Required only when UpstreamType is 0, and SrcList contains multiple IPs, and LoadBalance is 2; otherwise, fill in [ ].
                     * 
                     */
                    void SetWeights(const std::vector<int64_t>& _weights);

                    /**
                     * 判断参数 Weights 是否已赋值
                     * @return Weights 是否已赋值
                     * 
                     */
                    bool WeightsHasBeenSet() const;

                    /**
                     * 获取Whether to enable proactive health detection. 0: disable; 1: enable
                     * @return ActiveCheck Whether to enable proactive health detection. 0: disable; 1: enable
                     * 
                     */
                    int64_t GetActiveCheck() const;

                    /**
                     * 设置Whether to enable proactive health detection. 0: disable; 1: enable
                     * @param _activeCheck Whether to enable proactive health detection. 0: disable; 1: enable
                     * 
                     */
                    void SetActiveCheck(const int64_t& _activeCheck);

                    /**
                     * 判断参数 ActiveCheck 是否已赋值
                     * @return ActiveCheck 是否已赋值
                     * 
                     */
                    bool ActiveCheckHasBeenSet() const;

                    /**
                     * 获取TLS version information
                     * @return TLSVersion TLS version information
                     * 
                     */
                    int64_t GetTLSVersion() const;

                    /**
                     * 设置TLS version information
                     * @param _tLSVersion TLS version information
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
                     * 获取Cipher suite information
                     * @return Ciphers Cipher suite information
                     * 
                     */
                    std::vector<int64_t> GetCiphers() const;

                    /**
                     * 设置Cipher suite information
                     * @param _ciphers Cipher suite information
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
                     * 获取Cipher suite template. 0: default template (no selection); 1: general template; 2: secure template; 3: custom template
                     * @return CipherTemplate Cipher suite template. 0: default template (no selection); 1: general template; 2: secure template; 3: custom template
                     * 
                     */
                    int64_t GetCipherTemplate() const;

                    /**
                     * 设置Cipher suite template. 0: default template (no selection); 1: general template; 2: secure template; 3: custom template
                     * @param _cipherTemplate Cipher suite template. 0: default template (no selection); 1: general template; 2: secure template; 3: custom template
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
                     * 获取Read timeout between WAF and upstream server, 300s by default.
                     * @return ProxyReadTimeout Read timeout between WAF and upstream server, 300s by default.
                     * 
                     */
                    int64_t GetProxyReadTimeout() const;

                    /**
                     * 设置Read timeout between WAF and upstream server, 300s by default.
                     * @param _proxyReadTimeout Read timeout between WAF and upstream server, 300s by default.
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
                     * @return ProxySendTimeout WAF and origin server write timeout, 300s by default.
                     * 
                     */
                    int64_t GetProxySendTimeout() const;

                    /**
                     * 设置WAF and origin server write timeout, 300s by default.
                     * @param _proxySendTimeout WAF and origin server write timeout, 300s by default.
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
                     * 获取SNI type when proxy to upstream.
0: Disable SNI and do not configure server_name in client_hello.
1: Enable SNI. server_name in client_hello is the protected domain name.
2: Enable SNI. SNI is the origin server domain name when proxy to upstream by domain.
3: Enable SNI. SNI is the custom domain name.
                     * @return SniType SNI type when proxy to upstream.
0: Disable SNI and do not configure server_name in client_hello.
1: Enable SNI. server_name in client_hello is the protected domain name.
2: Enable SNI. SNI is the origin server domain name when proxy to upstream by domain.
3: Enable SNI. SNI is the custom domain name.
                     * 
                     */
                    int64_t GetSniType() const;

                    /**
                     * 设置SNI type when proxy to upstream.
0: Disable SNI and do not configure server_name in client_hello.
1: Enable SNI. server_name in client_hello is the protected domain name.
2: Enable SNI. SNI is the origin server domain name when proxy to upstream by domain.
3: Enable SNI. SNI is the custom domain name.
                     * @param _sniType SNI type when proxy to upstream.
0: Disable SNI and do not configure server_name in client_hello.
1: Enable SNI. server_name in client_hello is the protected domain name.
2: Enable SNI. SNI is the origin server domain name when proxy to upstream by domain.
3: Enable SNI. SNI is the custom domain name.
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
                     * @return SniHost When SniType=3, this parameter is required, indicating a custom SNI;
                     * 
                     */
                    std::string GetSniHost() const;

                    /**
                     * 设置When SniType=3, this parameter is required, indicating a custom SNI;
                     * @param _sniHost When SniType=3, this parameter is required, indicating a custom SNI;
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
                     * 获取IsCdn=3 required for this parameter, indicates custom header
                     * @return IpHeaders IsCdn=3 required for this parameter, indicates custom header
                     * 
                     */
                    std::vector<std::string> GetIpHeaders() const;

                    /**
                     * 设置IsCdn=3 required for this parameter, indicates custom header
                     * @param _ipHeaders IsCdn=3 required for this parameter, indicates custom header
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
                     * 获取Whether to enable XFF reset. 0: disable; 1: enable
                     * @return XFFReset Whether to enable XFF reset. 0: disable; 1: enable
                     * 
                     */
                    int64_t GetXFFReset() const;

                    /**
                     * 设置Whether to enable XFF reset. 0: disable; 1: enable
                     * @param _xFFReset Whether to enable XFF reset. 0: disable; 1: enable
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
                     * @return Note Domain name remarks
                     * 
                     */
                    std::string GetNote() const;

                    /**
                     * 设置Domain name remarks
                     * @param _note Domain name remarks
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
                     * 获取Custom upstream host. The default value is a null string, indicating that the protected domain name is used as the upstream host.
                     * @return UpstreamHost Custom upstream host. The default value is a null string, indicating that the protected domain name is used as the upstream host.
                     * 
                     */
                    std::string GetUpstreamHost() const;

                    /**
                     * 设置Custom upstream host. The default value is a null string, indicating that the protected domain name is used as the upstream host.
                     * @param _upstreamHost Custom upstream host. The default value is a null string, indicating that the protected domain name is used as the upstream host.
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
                     * 获取Whether to enable caching. 0: disable; 1: enable.
                     * @return ProxyBuffer Whether to enable caching. 0: disable; 1: enable.
                     * 
                     */
                    int64_t GetProxyBuffer() const;

                    /**
                     * 设置Whether to enable caching. 0: disable; 1: enable.
                     * @param _proxyBuffer Whether to enable caching. 0: disable; 1: enable.
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
                     * 获取Whether to enable the test. 0: disable; 1: enable. The test is enabled by default.
                     * @return ProbeStatus Whether to enable the test. 0: disable; 1: enable. The test is enabled by default.
                     * 
                     */
                    int64_t GetProbeStatus() const;

                    /**
                     * 设置Whether to enable the test. 0: disable; 1: enable. The test is enabled by default.
                     * @param _probeStatus Whether to enable the test. 0: disable; 1: enable. The test is enabled by default.
                     * 
                     */
                    void SetProbeStatus(const int64_t& _probeStatus);

                    /**
                     * 判断参数 ProbeStatus 是否已赋值
                     * @return ProbeStatus 是否已赋值
                     * 
                     */
                    bool ProbeStatusHasBeenSet() const;

                    /**
                     * 获取SM option. 0: do not enable SM; 1: add support for SM based on the existing TLS option; 2: enable SM and support only SM client access.
                     * @return GmType SM option. 0: do not enable SM; 1: add support for SM based on the existing TLS option; 2: enable SM and support only SM client access.
                     * 
                     */
                    int64_t GetGmType() const;

                    /**
                     * 设置SM option. 0: do not enable SM; 1: add support for SM based on the existing TLS option; 2: enable SM and support only SM client access.
                     * @param _gmType SM option. 0: do not enable SM; 1: add support for SM based on the existing TLS option; 2: enable SM and support only SM client access.
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
                     * @return GmCertType SM certificate type. 0: no SM certificate is available; 1: the certificate is a self-owned SM certificate; 2: the certificate is a managed SM certificate.
                     * 
                     */
                    int64_t GetGmCertType() const;

                    /**
                     * 设置SM certificate type. 0: no SM certificate is available; 1: the certificate is a self-owned SM certificate; 2: the certificate is a managed SM certificate.
                     * @param _gmCertType SM certificate type. 0: no SM certificate is available; 1: the certificate is a self-owned SM certificate; 2: the certificate is a managed SM certificate.
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
                     * @return GmCert When GmCertType is 1, this parameter needs to be set, indicating the certificate chain of the self-owned SM certificate.
                     * 
                     */
                    std::string GetGmCert() const;

                    /**
                     * 设置When GmCertType is 1, this parameter needs to be set, indicating the certificate chain of the self-owned SM certificate.
                     * @param _gmCert When GmCertType is 1, this parameter needs to be set, indicating the certificate chain of the self-owned SM certificate.
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
                     * @return GmPrivateKey When GmCertType is 1, this parameter needs to be set, indicating the private key of the self-owned SM certificate.
                     * 
                     */
                    std::string GetGmPrivateKey() const;

                    /**
                     * 设置When GmCertType is 1, this parameter needs to be set, indicating the private key of the self-owned SM certificate.
                     * @param _gmPrivateKey When GmCertType is 1, this parameter needs to be set, indicating the private key of the self-owned SM certificate.
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
                     * @return GmEncCert When GmCertType is 1, this parameter needs to be set, indicating the encryption certificate of the self-owned SM certificate.
                     * 
                     */
                    std::string GetGmEncCert() const;

                    /**
                     * 设置When GmCertType is 1, this parameter needs to be set, indicating the encryption certificate of the self-owned SM certificate.
                     * @param _gmEncCert When GmCertType is 1, this parameter needs to be set, indicating the encryption certificate of the self-owned SM certificate.
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
                     * @return GmEncPrivateKey When GmCertType is 1, this parameter needs to be set, indicating the private key of the encryption certificate for the self-owned SM certificate.
                     * 
                     */
                    std::string GetGmEncPrivateKey() const;

                    /**
                     * 设置When GmCertType is 1, this parameter needs to be set, indicating the private key of the encryption certificate for the self-owned SM certificate.
                     * @param _gmEncPrivateKey When GmCertType is 1, this parameter needs to be set, indicating the private key of the encryption certificate for the self-owned SM certificate.
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
                     * @return GmSSLId When GmCertType is 2, this parameter needs to be set, indicating the ID of the certificate managed by the Tencent Cloud SSL platform.
                     * 
                     */
                    std::string GetGmSSLId() const;

                    /**
                     * 设置When GmCertType is 2, this parameter needs to be set, indicating the ID of the certificate managed by the Tencent Cloud SSL platform.
                     * @param _gmSSLId When GmCertType is 2, this parameter needs to be set, indicating the ID of the certificate managed by the Tencent Cloud SSL platform.
                     * 
                     */
                    void SetGmSSLId(const std::string& _gmSSLId);

                    /**
                     * 判断参数 GmSSLId 是否已赋值
                     * @return GmSSLId 是否已赋值
                     * 
                     */
                    bool GmSSLIdHasBeenSet() const;

                private:

                    /**
                     * Domain name
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Required. Unique domain name ID
                     */
                    std::string m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * Required. Instance ID of the domain name
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * Certificate type. 0: no certificate, with only the HTTP listening port configured; 1: self-owned certificate; 2: managed certificate.
                     */
                    int64_t m_certType;
                    bool m_certTypeHasBeenSet;

                    /**
                     * When CertType is 1, this parameter is required, indicating the self-owned certificate chain
                     */
                    std::string m_cert;
                    bool m_certHasBeenSet;

                    /**
                     * When CertType=1, this parameter is required, indicating the private key of the self-owned certificate.
                     */
                    std::string m_privateKey;
                    bool m_privateKeyHasBeenSet;

                    /**
                     * When CertType is 2, this parameter must be filled, indicating the certificate ID hosted on Tencent Cloud's SSL platform
                     */
                    std::string m_sSLId;
                    bool m_sSLIdHasBeenSet;

                    /**
                     * Whether a layer-7 proxy service is deployed before the WAF. 0: No proxy service is deployed; 1: The proxy service is deployed. The WAF will use XFF to obtain the client IP address; 2: The proxy service is deployed. The WAF will use remote_addr to obtain the client IP address; 3: The proxy service is deployed. The WAF will use a custom header in ip_headers to obtain the client IP address.
                     */
                    int64_t m_isCdn;
                    bool m_isCdnHasBeenSet;

                    /**
                     * Origin-pull protocol for HTTPS when the service is configured with an HTTPS port.
http: Use the HTTP protocol for origin-pull. It is used with HttpsUpstreamPort.
https: Use the HTTPS protocol for origin-pull.
                     */
                    std::string m_upstreamScheme;
                    bool m_upstreamSchemeHasBeenSet;

                    /**
                     * HTTPS upstream port, required only when UpstreamScheme is http
                     */
                    std::string m_httpsUpstreamPort;
                    bool m_httpsUpstreamPortHasBeenSet;

                    /**
                     * Whether to enable forced redirection from HTTP to HTTPS. 0: disable; 1: enable
                     */
                    uint64_t m_httpsRewrite;
                    bool m_httpsRewriteHasBeenSet;

                    /**
                     * upstream type. 0: proxy to upstream by IP; 1: proxy to upstream by domain name
                     */
                    int64_t m_upstreamType;
                    bool m_upstreamTypeHasBeenSet;

                    /**
                     * Upstream domain when proxy to upstream by domain. When UpstreamType=1, this field needs to be filled
                     */
                    std::string m_upstreamDomain;
                    bool m_upstreamDomainHasBeenSet;

                    /**
                     * Upstream IP list when proxy to upstream by IP. When UpstreamType=0, this field is required
                     */
                    std::vector<std::string> m_srcList;
                    bool m_srcListHasBeenSet;

                    /**
                     * Whether to enable HTTP2. You should enable HTTPS as well. 0: disable; 1: enable
                     */
                    int64_t m_isHttp2;
                    bool m_isHttp2HasBeenSet;

                    /**
                     * Whether to enable WebSocket. 0: disable; 1: enable
                     */
                    int64_t m_isWebsocket;
                    bool m_isWebsocketHasBeenSet;

                    /**
                     * Load balancing policy for upstream. 0: round-robin scheduling; 1: IP hash; 2: weighted round-robin scheduling
                     */
                    int64_t m_loadBalance;
                    bool m_loadBalanceHasBeenSet;

                    /**
                     * To be deprecated, can be left blank. Whether to enable grayscale: 0 indicates not to enable grayscale.
                     */
                    int64_t m_isGray;
                    bool m_isGrayHasBeenSet;

                    /**
                     * Instance type of the domain name
                     */
                    std::string m_edition;
                    bool m_editionHasBeenSet;

                    /**
                     * Port information, which can be obtained through the DescribeDomains API
                     */
                    std::vector<SpartaProtectionPort> m_ports;
                    bool m_portsHasBeenSet;

                    /**
                     * Whether to enable persistent connection. 0: non-persistent connection; 1: persistent connection
                     */
                    std::string m_isKeepAlive;
                    bool m_isKeepAliveHasBeenSet;

                    /**
                     * To be deprecated. Currently, set this parameter to 0. Anycast IP type switch. 0: common IP; 1: Anycast IP
                     */
                    int64_t m_anycast;
                    bool m_anycastHasBeenSet;

                    /**
                     * Weight of each IP in the upstream IP List, corresponding to SrcList. Required only when UpstreamType is 0, and SrcList contains multiple IPs, and LoadBalance is 2; otherwise, fill in [ ].
                     */
                    std::vector<int64_t> m_weights;
                    bool m_weightsHasBeenSet;

                    /**
                     * Whether to enable proactive health detection. 0: disable; 1: enable
                     */
                    int64_t m_activeCheck;
                    bool m_activeCheckHasBeenSet;

                    /**
                     * TLS version information
                     */
                    int64_t m_tLSVersion;
                    bool m_tLSVersionHasBeenSet;

                    /**
                     * Cipher suite information
                     */
                    std::vector<int64_t> m_ciphers;
                    bool m_ciphersHasBeenSet;

                    /**
                     * Cipher suite template. 0: default template (no selection); 1: general template; 2: secure template; 3: custom template
                     */
                    int64_t m_cipherTemplate;
                    bool m_cipherTemplateHasBeenSet;

                    /**
                     * Read timeout between WAF and upstream server, 300s by default.
                     */
                    int64_t m_proxyReadTimeout;
                    bool m_proxyReadTimeoutHasBeenSet;

                    /**
                     * WAF and origin server write timeout, 300s by default.
                     */
                    int64_t m_proxySendTimeout;
                    bool m_proxySendTimeoutHasBeenSet;

                    /**
                     * SNI type when proxy to upstream.
0: Disable SNI and do not configure server_name in client_hello.
1: Enable SNI. server_name in client_hello is the protected domain name.
2: Enable SNI. SNI is the origin server domain name when proxy to upstream by domain.
3: Enable SNI. SNI is the custom domain name.
                     */
                    int64_t m_sniType;
                    bool m_sniTypeHasBeenSet;

                    /**
                     * When SniType=3, this parameter is required, indicating a custom SNI;
                     */
                    std::string m_sniHost;
                    bool m_sniHostHasBeenSet;

                    /**
                     * IsCdn=3 required for this parameter, indicates custom header
                     */
                    std::vector<std::string> m_ipHeaders;
                    bool m_ipHeadersHasBeenSet;

                    /**
                     * Whether to enable XFF reset. 0: disable; 1: enable
                     */
                    int64_t m_xFFReset;
                    bool m_xFFResetHasBeenSet;

                    /**
                     * Domain name remarks
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                    /**
                     * Custom upstream host. The default value is a null string, indicating that the protected domain name is used as the upstream host.
                     */
                    std::string m_upstreamHost;
                    bool m_upstreamHostHasBeenSet;

                    /**
                     * Whether to enable caching. 0: disable; 1: enable.
                     */
                    int64_t m_proxyBuffer;
                    bool m_proxyBufferHasBeenSet;

                    /**
                     * Whether to enable the test. 0: disable; 1: enable. The test is enabled by default.
                     */
                    int64_t m_probeStatus;
                    bool m_probeStatusHasBeenSet;

                    /**
                     * SM option. 0: do not enable SM; 1: add support for SM based on the existing TLS option; 2: enable SM and support only SM client access.
                     */
                    int64_t m_gmType;
                    bool m_gmTypeHasBeenSet;

                    /**
                     * SM certificate type. 0: no SM certificate is available; 1: the certificate is a self-owned SM certificate; 2: the certificate is a managed SM certificate.
                     */
                    int64_t m_gmCertType;
                    bool m_gmCertTypeHasBeenSet;

                    /**
                     * When GmCertType is 1, this parameter needs to be set, indicating the certificate chain of the self-owned SM certificate.
                     */
                    std::string m_gmCert;
                    bool m_gmCertHasBeenSet;

                    /**
                     * When GmCertType is 1, this parameter needs to be set, indicating the private key of the self-owned SM certificate.
                     */
                    std::string m_gmPrivateKey;
                    bool m_gmPrivateKeyHasBeenSet;

                    /**
                     * When GmCertType is 1, this parameter needs to be set, indicating the encryption certificate of the self-owned SM certificate.
                     */
                    std::string m_gmEncCert;
                    bool m_gmEncCertHasBeenSet;

                    /**
                     * When GmCertType is 1, this parameter needs to be set, indicating the private key of the encryption certificate for the self-owned SM certificate.
                     */
                    std::string m_gmEncPrivateKey;
                    bool m_gmEncPrivateKeyHasBeenSet;

                    /**
                     * When GmCertType is 2, this parameter needs to be set, indicating the ID of the certificate managed by the Tencent Cloud SSL platform.
                     */
                    std::string m_gmSSLId;
                    bool m_gmSSLIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYSPARTAPROTECTIONREQUEST_H_
