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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBESPARTAPROTECTIONINFORESPONSE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBESPARTAPROTECTIONINFORESPONSE_H_

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
                * DescribeSpartaProtectionInfo response structure.
                */
                class DescribeSpartaProtectionInfoResponse : public AbstractModel
                {
                public:
                    DescribeSpartaProtectionInfoResponse();
                    ~DescribeSpartaProtectionInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Domain name
                     * @return Domain Domain name
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Domain ID
                     * @return DomainId Domain ID
                     * 
                     */
                    std::string GetDomainId() const;

                    /**
                     * 判断参数 DomainId 是否已赋值
                     * @return DomainId 是否已赋值
                     * 
                     */
                    bool DomainIdHasBeenSet() const;

                    /**
                     * 获取CNAME value
                     * @return Cname CNAME value
                     * 
                     */
                    std::string GetCname() const;

                    /**
                     * 判断参数 Cname 是否已赋值
                     * @return Cname 是否已赋值
                     * 
                     */
                    bool CnameHasBeenSet() const;

                    /**
                     * 获取Status
                     * @return Status Status
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Source IP address list
                     * @return SrcList Source IP address list
                     * 
                     */
                    std::vector<std::string> GetSrcList() const;

                    /**
                     * 判断参数 SrcList 是否已赋值
                     * @return SrcList 是否已赋值
                     * 
                     */
                    bool SrcListHasBeenSet() const;

                    /**
                     * 获取Certificate type
                     * @return CertType Certificate type
                     * 
                     */
                    std::string GetCertType() const;

                    /**
                     * 判断参数 CertType 是否已赋值
                     * @return CertType 是否已赋值
                     * 
                     */
                    bool CertTypeHasBeenSet() const;

                    /**
                     * 获取Certificate
                     * @return Cert Certificate
                     * 
                     */
                    std::string GetCert() const;

                    /**
                     * 判断参数 Cert 是否已赋值
                     * @return Cert 是否已赋值
                     * 
                     */
                    bool CertHasBeenSet() const;

                    /**
                     * 获取Private key
                     * @return PrivateKey Private key
                     * 
                     */
                    std::string GetPrivateKey() const;

                    /**
                     * 判断参数 PrivateKey 是否已赋值
                     * @return PrivateKey 是否已赋值
                     * 
                     */
                    bool PrivateKeyHasBeenSet() const;

                    /**
                     * 获取SSL ID
                     * @return Sslid SSL ID
                     * 
                     */
                    std::string GetSslid() const;

                    /**
                     * 判断参数 Sslid 是否已赋值
                     * @return Sslid 是否已赋值
                     * 
                     */
                    bool SslidHasBeenSet() const;

                    /**
                     * 获取Whether it is a CDN
                     * @return IsCdn Whether it is a CDN
                     * 
                     */
                    std::string GetIsCdn() const;

                    /**
                     * 判断参数 IsCdn 是否已赋值
                     * @return IsCdn 是否已赋值
                     * 
                     */
                    bool IsCdnHasBeenSet() const;

                    /**
                     * 获取Grayscale area list
                     * @return GrayAreas Grayscale area list
                     * 
                     */
                    std::vector<std::string> GetGrayAreas() const;

                    /**
                     * 判断参数 GrayAreas 是否已赋值
                     * @return GrayAreas 是否已赋值
                     * 
                     */
                    bool GrayAreasHasBeenSet() const;

                    /**
                     * 获取Engine
                     * @return Engine Engine
                     * 
                     */
                    std::string GetEngine() const;

                    /**
                     * 判断参数 Engine 是否已赋值
                     * @return Engine 是否已赋值
                     * 
                     */
                    bool EngineHasBeenSet() const;

                    /**
                     * 获取HTTPS rewriting
                     * @return HttpsRewrite HTTPS rewriting
                     * 
                     */
                    std::string GetHttpsRewrite() const;

                    /**
                     * 判断参数 HttpsRewrite 是否已赋值
                     * @return HttpsRewrite 是否已赋值
                     * 
                     */
                    bool HttpsRewriteHasBeenSet() const;

                    /**
                     * 获取upstreamType value
                     * @return UpstreamType upstreamType value
                     * 
                     */
                    std::string GetUpstreamType() const;

                    /**
                     * 判断参数 UpstreamType 是否已赋值
                     * @return UpstreamType 是否已赋值
                     * 
                     */
                    bool UpstreamTypeHasBeenSet() const;

                    /**
                     * 获取Value of upstreamDomain
                     * @return UpstreamDomain Value of upstreamDomain
                     * 
                     */
                    std::string GetUpstreamDomain() const;

                    /**
                     * 判断参数 UpstreamDomain 是否已赋值
                     * @return UpstreamDomain 是否已赋值
                     * 
                     */
                    bool UpstreamDomainHasBeenSet() const;

                    /**
                     * 获取Value of upstreamScheme
                     * @return UpstreamScheme Value of upstreamScheme
                     * 
                     */
                    std::string GetUpstreamScheme() const;

                    /**
                     * 判断参数 UpstreamScheme 是否已赋值
                     * @return UpstreamScheme 是否已赋值
                     * 
                     */
                    bool UpstreamSchemeHasBeenSet() const;

                    /**
                     * 获取Whether it is HTTP2.
                     * @return IsHttp2 Whether it is HTTP2.
                     * 
                     */
                    std::string GetIsHttp2() const;

                    /**
                     * 判断参数 IsHttp2 是否已赋值
                     * @return IsHttp2 是否已赋值
                     * 
                     */
                    bool IsHttp2HasBeenSet() const;

                    /**
                     * 获取Whether it includes WebSocket
                     * @return IsWebsocket Whether it includes WebSocket
                     * 
                     */
                    std::string GetIsWebsocket() const;

                    /**
                     * 判断参数 IsWebsocket 是否已赋值
                     * @return IsWebsocket 是否已赋值
                     * 
                     */
                    bool IsWebsocketHasBeenSet() const;

                    /**
                     * 获取LoadBalance information
                     * @return LoadBalance LoadBalance information
                     * 
                     */
                    std::string GetLoadBalance() const;

                    /**
                     * 判断参数 LoadBalance 是否已赋值
                     * @return LoadBalance 是否已赋值
                     * 
                     */
                    bool LoadBalanceHasBeenSet() const;

                    /**
                     * 获取Value of httpsUpstreamPort
                     * @return HttpsUpstreamPort Value of httpsUpstreamPort
                     * 
                     */
                    std::string GetHttpsUpstreamPort() const;

                    /**
                     * 判断参数 HttpsUpstreamPort 是否已赋值
                     * @return HttpsUpstreamPort 是否已赋值
                     * 
                     */
                    bool HttpsUpstreamPortHasBeenSet() const;

                    /**
                     * 获取Port information
                     * @return Ports Port information
                     * 
                     */
                    std::vector<PortItem> GetPorts() const;

                    /**
                     * 判断参数 Ports 是否已赋值
                     * @return Ports 是否已赋值
                     * 
                     */
                    bool PortsHasBeenSet() const;

                    /**
                     * 获取Whether it is grayscale
                     * @return IsGray Whether it is grayscale
                     * 
                     */
                    std::string GetIsGray() const;

                    /**
                     * 判断参数 IsGray 是否已赋值
                     * @return IsGray 是否已赋值
                     * 
                     */
                    bool IsGrayHasBeenSet() const;

                    /**
                     * 获取Mode
                     * @return Mode Mode
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取Defense level: 100, 200, 300
                     * @return Level Defense level: 100, 200, 300
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取Whether to maintain a long connection with the origin server
                     * @return IsKeepAlive Whether to maintain a long connection with the origin server
                     * 
                     */
                    std::string GetIsKeepAlive() const;

                    /**
                     * 判断参数 IsKeepAlive 是否已赋值
                     * @return IsKeepAlive 是否已赋值
                     * 
                     */
                    bool IsKeepAliveHasBeenSet() const;

                    /**
                     * 获取0: BGP; 1: Anycast.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Anycast 0: BGP; 1: Anycast.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAnycast() const;

                    /**
                     * 判断参数 Anycast 是否已赋值
                     * @return Anycast 是否已赋值
                     * 
                     */
                    bool AnycastHasBeenSet() const;

                private:

                    /**
                     * Domain name
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Domain ID
                     */
                    std::string m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * CNAME value
                     */
                    std::string m_cname;
                    bool m_cnameHasBeenSet;

                    /**
                     * Status
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Source IP address list
                     */
                    std::vector<std::string> m_srcList;
                    bool m_srcListHasBeenSet;

                    /**
                     * Certificate type
                     */
                    std::string m_certType;
                    bool m_certTypeHasBeenSet;

                    /**
                     * Certificate
                     */
                    std::string m_cert;
                    bool m_certHasBeenSet;

                    /**
                     * Private key
                     */
                    std::string m_privateKey;
                    bool m_privateKeyHasBeenSet;

                    /**
                     * SSL ID
                     */
                    std::string m_sslid;
                    bool m_sslidHasBeenSet;

                    /**
                     * Whether it is a CDN
                     */
                    std::string m_isCdn;
                    bool m_isCdnHasBeenSet;

                    /**
                     * Grayscale area list
                     */
                    std::vector<std::string> m_grayAreas;
                    bool m_grayAreasHasBeenSet;

                    /**
                     * Engine
                     */
                    std::string m_engine;
                    bool m_engineHasBeenSet;

                    /**
                     * HTTPS rewriting
                     */
                    std::string m_httpsRewrite;
                    bool m_httpsRewriteHasBeenSet;

                    /**
                     * upstreamType value
                     */
                    std::string m_upstreamType;
                    bool m_upstreamTypeHasBeenSet;

                    /**
                     * Value of upstreamDomain
                     */
                    std::string m_upstreamDomain;
                    bool m_upstreamDomainHasBeenSet;

                    /**
                     * Value of upstreamScheme
                     */
                    std::string m_upstreamScheme;
                    bool m_upstreamSchemeHasBeenSet;

                    /**
                     * Whether it is HTTP2.
                     */
                    std::string m_isHttp2;
                    bool m_isHttp2HasBeenSet;

                    /**
                     * Whether it includes WebSocket
                     */
                    std::string m_isWebsocket;
                    bool m_isWebsocketHasBeenSet;

                    /**
                     * LoadBalance information
                     */
                    std::string m_loadBalance;
                    bool m_loadBalanceHasBeenSet;

                    /**
                     * Value of httpsUpstreamPort
                     */
                    std::string m_httpsUpstreamPort;
                    bool m_httpsUpstreamPortHasBeenSet;

                    /**
                     * Port information
                     */
                    std::vector<PortItem> m_ports;
                    bool m_portsHasBeenSet;

                    /**
                     * Whether it is grayscale
                     */
                    std::string m_isGray;
                    bool m_isGrayHasBeenSet;

                    /**
                     * Mode
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * Defense level: 100, 200, 300
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Whether to maintain a long connection with the origin server
                     */
                    std::string m_isKeepAlive;
                    bool m_isKeepAliveHasBeenSet;

                    /**
                     * 0: BGP; 1: Anycast.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_anycast;
                    bool m_anycastHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBESPARTAPROTECTIONINFORESPONSE_H_
