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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_ADDSPARTAPROTECTIONREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_ADDSPARTAPROTECTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/PortItem.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * AddSpartaProtection request structure.
                */
                class AddSpartaProtectionRequest : public AbstractModel
                {
                public:
                    AddSpartaProtectionRequest();
                    ~AddSpartaProtectionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Domain requiring protection
                     * @return Domain Domain requiring protection
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain requiring protection
                     * @param _domain Domain requiring protection
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
                    int64_t GetCertType() const;

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
                    void SetCertType(const int64_t& _certType);

                    /**
                     * 判断参数 CertType 是否已赋值
                     * @return CertType 是否已赋值
                     * 
                     */
                    bool CertTypeHasBeenSet() const;

                    /**
                     * 获取Whether a layer-7 proxy service is deployed before WAF
0: No proxy service deployed
1: Proxy service deployed, and WAF will use XFF to obtain the client IP address
2: Proxy service deployed and WAF will use remote_addr to obtain the client IP address
3: Proxy service deployed, and WAF will use a custom header in ip_headers to obtain the client IP address
                     * @return IsCdn Whether a layer-7 proxy service is deployed before WAF
0: No proxy service deployed
1: Proxy service deployed, and WAF will use XFF to obtain the client IP address
2: Proxy service deployed and WAF will use remote_addr to obtain the client IP address
3: Proxy service deployed, and WAF will use a custom header in ip_headers to obtain the client IP address
                     * 
                     */
                    int64_t GetIsCdn() const;

                    /**
                     * 设置Whether a layer-7 proxy service is deployed before WAF
0: No proxy service deployed
1: Proxy service deployed, and WAF will use XFF to obtain the client IP address
2: Proxy service deployed and WAF will use remote_addr to obtain the client IP address
3: Proxy service deployed, and WAF will use a custom header in ip_headers to obtain the client IP address
                     * @param _isCdn Whether a layer-7 proxy service is deployed before WAF
0: No proxy service deployed
1: Proxy service deployed, and WAF will use XFF to obtain the client IP address
2: Proxy service deployed and WAF will use remote_addr to obtain the client IP address
3: Proxy service deployed, and WAF will use a custom header in ip_headers to obtain the client IP address
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
                     * 获取Upstream type
0: proxy to upstream by IP address
1: proxy to upstream by domain name
                     * @return UpstreamType Upstream type
0: proxy to upstream by IP address
1: proxy to upstream by domain name
                     * 
                     */
                    int64_t GetUpstreamType() const;

                    /**
                     * 设置Upstream type
0: proxy to upstream by IP address
1: proxy to upstream by domain name
                     * @param _upstreamType Upstream type
0: proxy to upstream by IP address
1: proxy to upstream by domain name
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
                     * 获取Whether to enable websocket
0: disable
1: enable
                     * @return IsWebsocket Whether to enable websocket
0: disable
1: enable
                     * 
                     */
                    int64_t GetIsWebsocket() const;

                    /**
                     * 设置Whether to enable websocket
0: disable
1: enable
                     * @param _isWebsocket Whether to enable websocket
0: disable
1: enable
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
                     * 获取Load balancing policy for upstream
0: round-robin
1: IP hash
2: weighted round-robin
                     * @return LoadBalance Load balancing policy for upstream
0: round-robin
1: IP hash
2: weighted round-robin
                     * 
                     */
                    std::string GetLoadBalance() const;

                    /**
                     * 设置Load balancing policy for upstream
0: round-robin
1: IP hash
2: weighted round-robin
                     * @param _loadBalance Load balancing policy for upstream
0: round-robin
1: IP hash
2: weighted round-robin
                     * 
                     */
                    void SetLoadBalance(const std::string& _loadBalance);

                    /**
                     * 判断参数 LoadBalance 是否已赋值
                     * @return LoadBalance 是否已赋值
                     * 
                     */
                    bool LoadBalanceHasBeenSet() const;

                    /**
                     * 获取Service port list configuration
NginxServerId: fill in '0' in this function
Port: listening port number
Protocol: port protocol
UpstreamPort: same as Port
UpstreamProtocol: same as Protocol
                     * @return Ports Service port list configuration
NginxServerId: fill in '0' in this function
Port: listening port number
Protocol: port protocol
UpstreamPort: same as Port
UpstreamProtocol: same as Protocol
                     * 
                     */
                    std::vector<PortItem> GetPorts() const;

                    /**
                     * 设置Service port list configuration
NginxServerId: fill in '0' in this function
Port: listening port number
Protocol: port protocol
UpstreamPort: same as Port
UpstreamProtocol: same as Protocol
                     * @param _ports Service port list configuration
NginxServerId: fill in '0' in this function
Port: listening port number
Protocol: port protocol
UpstreamPort: same as Port
UpstreamProtocol: same as Protocol
                     * 
                     */
                    void SetPorts(const std::vector<PortItem>& _ports);

                    /**
                     * 判断参数 Ports 是否已赋值
                     * @return Ports 是否已赋值
                     * 
                     */
                    bool PortsHasBeenSet() const;

                    /**
                     * 获取(Required) Whether to enable persistent connection
0: non-persistent connection
1: persistent connection
                     * @return IsKeepAlive (Required) Whether to enable persistent connection
0: non-persistent connection
1: persistent connection
                     * 
                     */
                    std::string GetIsKeepAlive() const;

                    /**
                     * 设置(Required) Whether to enable persistent connection
0: non-persistent connection
1: persistent connection
                     * @param _isKeepAlive (Required) Whether to enable persistent connection
0: non-persistent connection
1: persistent connection
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
                     * 获取(Required) Instance ID of the domain name
                     * @return InstanceID (Required) Instance ID of the domain name
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置(Required) Instance ID of the domain name
                     * @param _instanceID (Required) Instance ID of the domain name
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
                     * 获取To be deprecated, not required. WAF resource ID.
                     * @return ResourceId To be deprecated, not required. WAF resource ID.
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置To be deprecated, not required. WAF resource ID.
                     * @param _resourceId To be deprecated, not required. WAF resource ID.
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取When IsCdn is 3, this parameter is required, indicating a custom header.
                     * @return IpHeaders When IsCdn is 3, this parameter is required, indicating a custom header.
                     * 
                     */
                    std::vector<std::string> GetIpHeaders() const;

                    /**
                     * 设置When IsCdn is 3, this parameter is required, indicating a custom header.
                     * @param _ipHeaders When IsCdn is 3, this parameter is required, indicating a custom header.
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
                     * 获取Upstream protocol for HTTPS when the service is configured with an HTTPS port
http: Use the HTTP protocol for upstream. It is used together with HttpsUpstreamPort.
https: Use the HTTPS protocol for upstream.
                     * @return UpstreamScheme Upstream protocol for HTTPS when the service is configured with an HTTPS port
http: Use the HTTP protocol for upstream. It is used together with HttpsUpstreamPort.
https: Use the HTTPS protocol for upstream.
                     * 
                     */
                    std::string GetUpstreamScheme() const;

                    /**
                     * 设置Upstream protocol for HTTPS when the service is configured with an HTTPS port
http: Use the HTTP protocol for upstream. It is used together with HttpsUpstreamPort.
https: Use the HTTPS protocol for upstream.
                     * @param _upstreamScheme Upstream protocol for HTTPS when the service is configured with an HTTPS port
http: Use the HTTP protocol for upstream. It is used together with HttpsUpstreamPort.
https: Use the HTTPS protocol for upstream.
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
                     * 获取To be deprecated, can be left blank. Grayscale area.
                     * @return GrayAreas To be deprecated, can be left blank. Grayscale area.
                     * 
                     */
                    std::vector<std::string> GetGrayAreas() const;

                    /**
                     * 设置To be deprecated, can be left blank. Grayscale area.
                     * @param _grayAreas To be deprecated, can be left blank. Grayscale area.
                     * 
                     */
                    void SetGrayAreas(const std::vector<std::string>& _grayAreas);

                    /**
                     * 判断参数 GrayAreas 是否已赋值
                     * @return GrayAreas 是否已赋值
                     * 
                     */
                    bool GrayAreasHasBeenSet() const;

                    /**
                     * 获取(Required) Whether to enable forced redirection from HTTP to HTTPS
0: do not force redirect
1: enable forced redirect
                     * @return HttpsRewrite (Required) Whether to enable forced redirection from HTTP to HTTPS
0: do not force redirect
1: enable forced redirect
                     * 
                     */
                    int64_t GetHttpsRewrite() const;

                    /**
                     * 设置(Required) Whether to enable forced redirection from HTTP to HTTPS
0: do not force redirect
1: enable forced redirect
                     * @param _httpsRewrite (Required) Whether to enable forced redirection from HTTP to HTTPS
0: do not force redirect
1: enable forced redirect
                     * 
                     */
                    void SetHttpsRewrite(const int64_t& _httpsRewrite);

                    /**
                     * 判断参数 HttpsRewrite 是否已赋值
                     * @return HttpsRewrite 是否已赋值
                     * 
                     */
                    bool HttpsRewriteHasBeenSet() const;

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
                     * 获取Upstream IP list when IP is back to source. When UpstreamType=0, this field is required
                     * @return SrcList Upstream IP list when IP is back to source. When UpstreamType=0, this field is required
                     * 
                     */
                    std::vector<std::string> GetSrcList() const;

                    /**
                     * 设置Upstream IP list when IP is back to source. When UpstreamType=0, this field is required
                     * @param _srcList Upstream IP list when IP is back to source. When UpstreamType=0, this field is required
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
                     * 获取(Required) Whether to enable HTTP2. You should enable HTTPS as well.
0: disable
1: enable
                     * @return IsHttp2 (Required) Whether to enable HTTP2. You should enable HTTPS as well.
0: disable
1: enable
                     * 
                     */
                    int64_t GetIsHttp2() const;

                    /**
                     * 设置(Required) Whether to enable HTTP2. You should enable HTTPS as well.
0: disable
1: enable
                     * @param _isHttp2 (Required) Whether to enable HTTP2. You should enable HTTPS as well.
0: disable
1: enable
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
                     * 获取WAF instance type. This parameter will be deprecated in later versions and is not required in the current version.
sparta-waf: SaaS WAF
clb-waf: CLB WAF
cdn-waf: web protection capability on CDN
                     * @return Edition WAF instance type. This parameter will be deprecated in later versions and is not required in the current version.
sparta-waf: SaaS WAF
clb-waf: CLB WAF
cdn-waf: web protection capability on CDN
                     * 
                     */
                    std::string GetEdition() const;

                    /**
                     * 设置WAF instance type. This parameter will be deprecated in later versions and is not required in the current version.
sparta-waf: SaaS WAF
clb-waf: CLB WAF
cdn-waf: web protection capability on CDN
                     * @param _edition WAF instance type. This parameter will be deprecated in later versions and is not required in the current version.
sparta-waf: SaaS WAF
clb-waf: CLB WAF
cdn-waf: web protection capability on CDN
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
                     * 获取To be deprecated, currently just fill in 0. Anycast IP type switch: 0 Ordinary IP, 1 Anycast IP
                     * @return Anycast To be deprecated, currently just fill in 0. Anycast IP type switch: 0 Ordinary IP, 1 Anycast IP
                     * 
                     */
                    int64_t GetAnycast() const;

                    /**
                     * 设置To be deprecated, currently just fill in 0. Anycast IP type switch: 0 Ordinary IP, 1 Anycast IP
                     * @param _anycast To be deprecated, currently just fill in 0. Anycast IP type switch: 0 Ordinary IP, 1 Anycast IP
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
                     * 获取Weight of each IP in the back-to-source IP List, corresponding to SrcList. Required only when UpstreamType is 0, and SrcList contains multiple IPs, and LoadBalance is 2; otherwise, fill in [ ].
                     * @return Weights Weight of each IP in the back-to-source IP List, corresponding to SrcList. Required only when UpstreamType is 0, and SrcList contains multiple IPs, and LoadBalance is 2; otherwise, fill in [ ].
                     * 
                     */
                    std::vector<int64_t> GetWeights() const;

                    /**
                     * 设置Weight of each IP in the back-to-source IP List, corresponding to SrcList. Required only when UpstreamType is 0, and SrcList contains multiple IPs, and LoadBalance is 2; otherwise, fill in [ ].
                     * @param _weights Weight of each IP in the back-to-source IP List, corresponding to SrcList. Required only when UpstreamType is 0, and SrcList contains multiple IPs, and LoadBalance is 2; otherwise, fill in [ ].
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
                     * 获取(Required) Whether to enable active health check
0: disable
1: enable
                     * @return ActiveCheck (Required) Whether to enable active health check
0: disable
1: enable
                     * 
                     */
                    int64_t GetActiveCheck() const;

                    /**
                     * 设置(Required) Whether to enable active health check
0: disable
1: enable
                     * @param _activeCheck (Required) Whether to enable active health check
0: disable
1: enable
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
                     * 获取(Required) Cipher suite template
0: default template
1: general template
2: security template
3: custom template
                     * @return CipherTemplate (Required) Cipher suite template
0: default template
1: general template
2: security template
3: custom template
                     * 
                     */
                    int64_t GetCipherTemplate() const;

                    /**
                     * 设置(Required) Cipher suite template
0: default template
1: general template
2: security template
3: custom template
                     * @param _cipherTemplate (Required) Cipher suite template
0: default template
1: general template
2: security template
3: custom template
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
                     * 获取Custom encryption suite list. When CipherTemplate is 3, this field is required, indicating the custom encryption suite, value obtained through DescribeCiphersDetail API.
                     * @return Ciphers Custom encryption suite list. When CipherTemplate is 3, this field is required, indicating the custom encryption suite, value obtained through DescribeCiphersDetail API.
                     * 
                     */
                    std::vector<int64_t> GetCiphers() const;

                    /**
                     * 设置Custom encryption suite list. When CipherTemplate is 3, this field is required, indicating the custom encryption suite, value obtained through DescribeCiphersDetail API.
                     * @param _ciphers Custom encryption suite list. When CipherTemplate is 3, this field is required, indicating the custom encryption suite, value obtained through DescribeCiphersDetail API.
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
                     * 获取WAF and upstream server write timeout, 300s by default.
                     * @return ProxySendTimeout WAF and upstream server write timeout, 300s by default.
                     * 
                     */
                    int64_t GetProxySendTimeout() const;

                    /**
                     * 设置WAF and upstream server write timeout, 300s by default.
                     * @param _proxySendTimeout WAF and upstream server write timeout, 300s by default.
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
                     * 获取SNI type during WAF sending request to upstream
0: Disable SNI and do not configure server_name in client_hello.
1: Enable SNI. server_name in client_hello is a protected domain name.
2: Enable SNI. SNI is the origin server domain name during the domain name origin-pull.
3: Enable SNI. SNI is a custom domain name.
                     * @return SniType SNI type during WAF sending request to upstream
0: Disable SNI and do not configure server_name in client_hello.
1: Enable SNI. server_name in client_hello is a protected domain name.
2: Enable SNI. SNI is the origin server domain name during the domain name origin-pull.
3: Enable SNI. SNI is a custom domain name.
                     * 
                     */
                    int64_t GetSniType() const;

                    /**
                     * 设置SNI type during WAF sending request to upstream
0: Disable SNI and do not configure server_name in client_hello.
1: Enable SNI. server_name in client_hello is a protected domain name.
2: Enable SNI. SNI is the origin server domain name during the domain name origin-pull.
3: Enable SNI. SNI is a custom domain name.
                     * @param _sniType SNI type during WAF sending request to upstream
0: Disable SNI and do not configure server_name in client_hello.
1: Enable SNI. server_name in client_hello is a protected domain name.
2: Enable SNI. SNI is the origin server domain name during the domain name origin-pull.
3: Enable SNI. SNI is a custom domain name.
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
                     * 获取Whether to enable XFF reset
0: disable
1: enable
                     * @return XFFReset Whether to enable XFF reset
0: disable
1: enable
                     * 
                     */
                    int64_t GetXFFReset() const;

                    /**
                     * 设置Whether to enable XFF reset
0: disable
1: enable
                     * @param _xFFReset Whether to enable XFF reset
0: disable
1: enable
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
                     * 获取Custom upstream host. The default value is an empty string, indicating that  protected domain is used as the upstream host.
                     * @return UpstreamHost Custom upstream host. The default value is an empty string, indicating that  protected domain is used as the upstream host.
                     * 
                     */
                    std::string GetUpstreamHost() const;

                    /**
                     * 设置Custom upstream host. The default value is an empty string, indicating that  protected domain is used as the upstream host.
                     * @param _upstreamHost Custom upstream host. The default value is an empty string, indicating that  protected domain is used as the upstream host.
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
                     * 获取0: disable probe test; 1: enable probe test. The test is enabled by default.
                     * @return ProbeStatus 0: disable probe test; 1: enable probe test. The test is enabled by default.
                     * 
                     */
                    int64_t GetProbeStatus() const;

                    /**
                     * 设置0: disable probe test; 1: enable probe test. The test is enabled by default.
                     * @param _probeStatus 0: disable probe test; 1: enable probe test. The test is enabled by default.
                     * 
                     */
                    void SetProbeStatus(const int64_t& _probeStatus);

                    /**
                     * 判断参数 ProbeStatus 是否已赋值
                     * @return ProbeStatus 是否已赋值
                     * 
                     */
                    bool ProbeStatusHasBeenSet() const;

                private:

                    /**
                     * Domain requiring protection
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Certificate type
0: no certificate, with only the HTTP listening port configured
1: self-owned certificate
2: managed certificate
                     */
                    int64_t m_certType;
                    bool m_certTypeHasBeenSet;

                    /**
                     * Whether a layer-7 proxy service is deployed before WAF
0: No proxy service deployed
1: Proxy service deployed, and WAF will use XFF to obtain the client IP address
2: Proxy service deployed and WAF will use remote_addr to obtain the client IP address
3: Proxy service deployed, and WAF will use a custom header in ip_headers to obtain the client IP address
                     */
                    int64_t m_isCdn;
                    bool m_isCdnHasBeenSet;

                    /**
                     * Upstream type
0: proxy to upstream by IP address
1: proxy to upstream by domain name
                     */
                    int64_t m_upstreamType;
                    bool m_upstreamTypeHasBeenSet;

                    /**
                     * Whether to enable websocket
0: disable
1: enable
                     */
                    int64_t m_isWebsocket;
                    bool m_isWebsocketHasBeenSet;

                    /**
                     * Load balancing policy for upstream
0: round-robin
1: IP hash
2: weighted round-robin
                     */
                    std::string m_loadBalance;
                    bool m_loadBalanceHasBeenSet;

                    /**
                     * Service port list configuration
NginxServerId: fill in '0' in this function
Port: listening port number
Protocol: port protocol
UpstreamPort: same as Port
UpstreamProtocol: same as Protocol
                     */
                    std::vector<PortItem> m_ports;
                    bool m_portsHasBeenSet;

                    /**
                     * (Required) Whether to enable persistent connection
0: non-persistent connection
1: persistent connection
                     */
                    std::string m_isKeepAlive;
                    bool m_isKeepAliveHasBeenSet;

                    /**
                     * (Required) Instance ID of the domain name
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

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
                     * To be deprecated, not required. WAF resource ID.
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * When IsCdn is 3, this parameter is required, indicating a custom header.
                     */
                    std::vector<std::string> m_ipHeaders;
                    bool m_ipHeadersHasBeenSet;

                    /**
                     * Upstream protocol for HTTPS when the service is configured with an HTTPS port
http: Use the HTTP protocol for upstream. It is used together with HttpsUpstreamPort.
https: Use the HTTPS protocol for upstream.
                     */
                    std::string m_upstreamScheme;
                    bool m_upstreamSchemeHasBeenSet;

                    /**
                     * HTTPS upstream port, required only when UpstreamScheme is http
                     */
                    std::string m_httpsUpstreamPort;
                    bool m_httpsUpstreamPortHasBeenSet;

                    /**
                     * To be deprecated, can be left blank. Whether to enable grayscale: 0 indicates not to enable grayscale.
                     */
                    int64_t m_isGray;
                    bool m_isGrayHasBeenSet;

                    /**
                     * To be deprecated, can be left blank. Grayscale area.
                     */
                    std::vector<std::string> m_grayAreas;
                    bool m_grayAreasHasBeenSet;

                    /**
                     * (Required) Whether to enable forced redirection from HTTP to HTTPS
0: do not force redirect
1: enable forced redirect
                     */
                    int64_t m_httpsRewrite;
                    bool m_httpsRewriteHasBeenSet;

                    /**
                     * Upstream domain when proxy to upstream by domain. When UpstreamType=1, this field needs to be filled
                     */
                    std::string m_upstreamDomain;
                    bool m_upstreamDomainHasBeenSet;

                    /**
                     * Upstream IP list when IP is back to source. When UpstreamType=0, this field is required
                     */
                    std::vector<std::string> m_srcList;
                    bool m_srcListHasBeenSet;

                    /**
                     * (Required) Whether to enable HTTP2. You should enable HTTPS as well.
0: disable
1: enable
                     */
                    int64_t m_isHttp2;
                    bool m_isHttp2HasBeenSet;

                    /**
                     * WAF instance type. This parameter will be deprecated in later versions and is not required in the current version.
sparta-waf: SaaS WAF
clb-waf: CLB WAF
cdn-waf: web protection capability on CDN
                     */
                    std::string m_edition;
                    bool m_editionHasBeenSet;

                    /**
                     * To be deprecated, currently just fill in 0. Anycast IP type switch: 0 Ordinary IP, 1 Anycast IP
                     */
                    int64_t m_anycast;
                    bool m_anycastHasBeenSet;

                    /**
                     * Weight of each IP in the back-to-source IP List, corresponding to SrcList. Required only when UpstreamType is 0, and SrcList contains multiple IPs, and LoadBalance is 2; otherwise, fill in [ ].
                     */
                    std::vector<int64_t> m_weights;
                    bool m_weightsHasBeenSet;

                    /**
                     * (Required) Whether to enable active health check
0: disable
1: enable
                     */
                    int64_t m_activeCheck;
                    bool m_activeCheckHasBeenSet;

                    /**
                     * TLS version information
                     */
                    int64_t m_tLSVersion;
                    bool m_tLSVersionHasBeenSet;

                    /**
                     * (Required) Cipher suite template
0: default template
1: general template
2: security template
3: custom template
                     */
                    int64_t m_cipherTemplate;
                    bool m_cipherTemplateHasBeenSet;

                    /**
                     * Custom encryption suite list. When CipherTemplate is 3, this field is required, indicating the custom encryption suite, value obtained through DescribeCiphersDetail API.
                     */
                    std::vector<int64_t> m_ciphers;
                    bool m_ciphersHasBeenSet;

                    /**
                     * Read timeout between WAF and upstream server, 300s by default.
                     */
                    int64_t m_proxyReadTimeout;
                    bool m_proxyReadTimeoutHasBeenSet;

                    /**
                     * WAF and upstream server write timeout, 300s by default.
                     */
                    int64_t m_proxySendTimeout;
                    bool m_proxySendTimeoutHasBeenSet;

                    /**
                     * SNI type during WAF sending request to upstream
0: Disable SNI and do not configure server_name in client_hello.
1: Enable SNI. server_name in client_hello is a protected domain name.
2: Enable SNI. SNI is the origin server domain name during the domain name origin-pull.
3: Enable SNI. SNI is a custom domain name.
                     */
                    int64_t m_sniType;
                    bool m_sniTypeHasBeenSet;

                    /**
                     * When SniType=3, this parameter is required, indicating a custom SNI;
                     */
                    std::string m_sniHost;
                    bool m_sniHostHasBeenSet;

                    /**
                     * Whether to enable XFF reset
0: disable
1: enable
                     */
                    int64_t m_xFFReset;
                    bool m_xFFResetHasBeenSet;

                    /**
                     * Domain name remarks
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                    /**
                     * Custom upstream host. The default value is an empty string, indicating that  protected domain is used as the upstream host.
                     */
                    std::string m_upstreamHost;
                    bool m_upstreamHostHasBeenSet;

                    /**
                     * Whether to enable caching. 0: disable; 1: enable.
                     */
                    int64_t m_proxyBuffer;
                    bool m_proxyBufferHasBeenSet;

                    /**
                     * 0: disable probe test; 1: enable probe test. The test is enabled by default.
                     */
                    int64_t m_probeStatus;
                    bool m_probeStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_ADDSPARTAPROTECTIONREQUEST_H_
