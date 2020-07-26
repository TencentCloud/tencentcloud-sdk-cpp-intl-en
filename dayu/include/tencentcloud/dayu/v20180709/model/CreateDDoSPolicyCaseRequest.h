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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_CREATEDDOSPOLICYCASEREQUEST_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_CREATEDDOSPOLICYCASEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * CreateDDoSPolicyCase request structure.
                */
                class CreateDDoSPolicyCaseRequest : public AbstractModel
                {
                public:
                    CreateDDoSPolicyCaseRequest();
                    ~CreateDDoSPolicyCaseRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `bgp`: Anti-DDoS Pro (single IP); `bgp-multip`: Anti-DDoS Pro (multi-IP), `net`: Anti-DDoS Ultimate
                     * @return Business Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `bgp`: Anti-DDoS Pro (single IP); `bgp-multip`: Anti-DDoS Pro (multi-IP), `net`: Anti-DDoS Ultimate
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `bgp`: Anti-DDoS Pro (single IP); `bgp-multip`: Anti-DDoS Pro (multi-IP), `net`: Anti-DDoS Ultimate
                     * @param Business Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `bgp`: Anti-DDoS Pro (single IP); `bgp-multip`: Anti-DDoS Pro (multi-IP), `net`: Anti-DDoS Ultimate
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取Policy scenario name string. Length limit: 64
                     * @return CaseName Policy scenario name string. Length limit: 64
                     */
                    std::string GetCaseName() const;

                    /**
                     * 设置Policy scenario name string. Length limit: 64
                     * @param CaseName Policy scenario name string. Length limit: 64
                     */
                    void SetCaseName(const std::string& _caseName);

                    /**
                     * 判断参数 CaseName 是否已赋值
                     * @return CaseName 是否已赋值
                     */
                    bool CaseNameHasBeenSet() const;

                    /**
                     * 获取Development platform. Valid values: [PC (PC client), MOBILE (mobile device), TV (TV), SERVER (server)]
                     * @return PlatformTypes Development platform. Valid values: [PC (PC client), MOBILE (mobile device), TV (TV), SERVER (server)]
                     */
                    std::vector<std::string> GetPlatformTypes() const;

                    /**
                     * 设置Development platform. Valid values: [PC (PC client), MOBILE (mobile device), TV (TV), SERVER (server)]
                     * @param PlatformTypes Development platform. Valid values: [PC (PC client), MOBILE (mobile device), TV (TV), SERVER (server)]
                     */
                    void SetPlatformTypes(const std::vector<std::string>& _platformTypes);

                    /**
                     * 判断参数 PlatformTypes 是否已赋值
                     * @return PlatformTypes 是否已赋值
                     */
                    bool PlatformTypesHasBeenSet() const;

                    /**
                     * 获取Category. Valid values: [WEB (website), GAME (game), APP (application), OTHER (other)]
                     * @return AppType Category. Valid values: [WEB (website), GAME (game), APP (application), OTHER (other)]
                     */
                    std::string GetAppType() const;

                    /**
                     * 设置Category. Valid values: [WEB (website), GAME (game), APP (application), OTHER (other)]
                     * @param AppType Category. Valid values: [WEB (website), GAME (game), APP (application), OTHER (other)]
                     */
                    void SetAppType(const std::string& _appType);

                    /**
                     * 判断参数 AppType 是否已赋值
                     * @return AppType 是否已赋值
                     */
                    bool AppTypeHasBeenSet() const;

                    /**
                     * 获取Application protocol. Valid values: [tcp (TCP protocol), udp (UDP protocol), icmp (ICMP protocol), all (other protocols)]
                     * @return AppProtocols Application protocol. Valid values: [tcp (TCP protocol), udp (UDP protocol), icmp (ICMP protocol), all (other protocols)]
                     */
                    std::vector<std::string> GetAppProtocols() const;

                    /**
                     * 设置Application protocol. Valid values: [tcp (TCP protocol), udp (UDP protocol), icmp (ICMP protocol), all (other protocols)]
                     * @param AppProtocols Application protocol. Valid values: [tcp (TCP protocol), udp (UDP protocol), icmp (ICMP protocol), all (other protocols)]
                     */
                    void SetAppProtocols(const std::vector<std::string>& _appProtocols);

                    /**
                     * 判断参数 AppProtocols 是否已赋值
                     * @return AppProtocols 是否已赋值
                     */
                    bool AppProtocolsHasBeenSet() const;

                    /**
                     * 获取TCP start port. Value range: (0, 65535]
                     * @return TcpSportStart TCP start port. Value range: (0, 65535]
                     */
                    std::string GetTcpSportStart() const;

                    /**
                     * 设置TCP start port. Value range: (0, 65535]
                     * @param TcpSportStart TCP start port. Value range: (0, 65535]
                     */
                    void SetTcpSportStart(const std::string& _tcpSportStart);

                    /**
                     * 判断参数 TcpSportStart 是否已赋值
                     * @return TcpSportStart 是否已赋值
                     */
                    bool TcpSportStartHasBeenSet() const;

                    /**
                     * 获取TCP end port. Value range: (0, 65535). It must be greater than or equal to the TCP start port.
                     * @return TcpSportEnd TCP end port. Value range: (0, 65535). It must be greater than or equal to the TCP start port.
                     */
                    std::string GetTcpSportEnd() const;

                    /**
                     * 设置TCP end port. Value range: (0, 65535). It must be greater than or equal to the TCP start port.
                     * @param TcpSportEnd TCP end port. Value range: (0, 65535). It must be greater than or equal to the TCP start port.
                     */
                    void SetTcpSportEnd(const std::string& _tcpSportEnd);

                    /**
                     * 判断参数 TcpSportEnd 是否已赋值
                     * @return TcpSportEnd 是否已赋值
                     */
                    bool TcpSportEndHasBeenSet() const;

                    /**
                     * 获取UDP start port. Value range: (0, 65535]
                     * @return UdpSportStart UDP start port. Value range: (0, 65535]
                     */
                    std::string GetUdpSportStart() const;

                    /**
                     * 设置UDP start port. Value range: (0, 65535]
                     * @param UdpSportStart UDP start port. Value range: (0, 65535]
                     */
                    void SetUdpSportStart(const std::string& _udpSportStart);

                    /**
                     * 判断参数 UdpSportStart 是否已赋值
                     * @return UdpSportStart 是否已赋值
                     */
                    bool UdpSportStartHasBeenSet() const;

                    /**
                     * 获取UDP end port. Value range: (0, 65535). It must be greater than or equal to the UDP start port.
                     * @return UdpSportEnd UDP end port. Value range: (0, 65535). It must be greater than or equal to the UDP start port.
                     */
                    std::string GetUdpSportEnd() const;

                    /**
                     * 设置UDP end port. Value range: (0, 65535). It must be greater than or equal to the UDP start port.
                     * @param UdpSportEnd UDP end port. Value range: (0, 65535). It must be greater than or equal to the UDP start port.
                     */
                    void SetUdpSportEnd(const std::string& _udpSportEnd);

                    /**
                     * 判断参数 UdpSportEnd 是否已赋值
                     * @return UdpSportEnd 是否已赋值
                     */
                    bool UdpSportEndHasBeenSet() const;

                    /**
                     * 获取Whether there are customers outside China. Valid values: [no, yes]
                     * @return HasAbroad Whether there are customers outside China. Valid values: [no, yes]
                     */
                    std::string GetHasAbroad() const;

                    /**
                     * 设置Whether there are customers outside China. Valid values: [no, yes]
                     * @param HasAbroad Whether there are customers outside China. Valid values: [no, yes]
                     */
                    void SetHasAbroad(const std::string& _hasAbroad);

                    /**
                     * 判断参数 HasAbroad 是否已赋值
                     * @return HasAbroad 是否已赋值
                     */
                    bool HasAbroadHasBeenSet() const;

                    /**
                     * 获取Whether to actively initiate outbound TCP requests. Valid values: [no, yes]
                     * @return HasInitiateTcp Whether to actively initiate outbound TCP requests. Valid values: [no, yes]
                     */
                    std::string GetHasInitiateTcp() const;

                    /**
                     * 设置Whether to actively initiate outbound TCP requests. Valid values: [no, yes]
                     * @param HasInitiateTcp Whether to actively initiate outbound TCP requests. Valid values: [no, yes]
                     */
                    void SetHasInitiateTcp(const std::string& _hasInitiateTcp);

                    /**
                     * 判断参数 HasInitiateTcp 是否已赋值
                     * @return HasInitiateTcp 是否已赋值
                     */
                    bool HasInitiateTcpHasBeenSet() const;

                    /**
                     * 获取Whether to actively initiate outbound UDP requests. Valid values: [no, yes]
                     * @return HasInitiateUdp Whether to actively initiate outbound UDP requests. Valid values: [no, yes]
                     */
                    std::string GetHasInitiateUdp() const;

                    /**
                     * 设置Whether to actively initiate outbound UDP requests. Valid values: [no, yes]
                     * @param HasInitiateUdp Whether to actively initiate outbound UDP requests. Valid values: [no, yes]
                     */
                    void SetHasInitiateUdp(const std::string& _hasInitiateUdp);

                    /**
                     * 判断参数 HasInitiateUdp 是否已赋值
                     * @return HasInitiateUdp 是否已赋值
                     */
                    bool HasInitiateUdpHasBeenSet() const;

                    /**
                     * 获取Port that actively initiates TCP requests. Value range: (0, 65535]
                     * @return PeerTcpPort Port that actively initiates TCP requests. Value range: (0, 65535]
                     */
                    std::string GetPeerTcpPort() const;

                    /**
                     * 设置Port that actively initiates TCP requests. Value range: (0, 65535]
                     * @param PeerTcpPort Port that actively initiates TCP requests. Value range: (0, 65535]
                     */
                    void SetPeerTcpPort(const std::string& _peerTcpPort);

                    /**
                     * 判断参数 PeerTcpPort 是否已赋值
                     * @return PeerTcpPort 是否已赋值
                     */
                    bool PeerTcpPortHasBeenSet() const;

                    /**
                     * 获取Port that actively initiates UDP requests. Value range: (0, 65535]
                     * @return PeerUdpPort Port that actively initiates UDP requests. Value range: (0, 65535]
                     */
                    std::string GetPeerUdpPort() const;

                    /**
                     * 设置Port that actively initiates UDP requests. Value range: (0, 65535]
                     * @param PeerUdpPort Port that actively initiates UDP requests. Value range: (0, 65535]
                     */
                    void SetPeerUdpPort(const std::string& _peerUdpPort);

                    /**
                     * 判断参数 PeerUdpPort 是否已赋值
                     * @return PeerUdpPort 是否已赋值
                     */
                    bool PeerUdpPortHasBeenSet() const;

                    /**
                     * 获取Fixed feature code of TCP payload. Max string length: 512
                     * @return TcpFootprint Fixed feature code of TCP payload. Max string length: 512
                     */
                    std::string GetTcpFootprint() const;

                    /**
                     * 设置Fixed feature code of TCP payload. Max string length: 512
                     * @param TcpFootprint Fixed feature code of TCP payload. Max string length: 512
                     */
                    void SetTcpFootprint(const std::string& _tcpFootprint);

                    /**
                     * 判断参数 TcpFootprint 是否已赋值
                     * @return TcpFootprint 是否已赋值
                     */
                    bool TcpFootprintHasBeenSet() const;

                    /**
                     * 获取Fixed feature code of UDP payload. Max string length: 512
                     * @return UdpFootprint Fixed feature code of UDP payload. Max string length: 512
                     */
                    std::string GetUdpFootprint() const;

                    /**
                     * 设置Fixed feature code of UDP payload. Max string length: 512
                     * @param UdpFootprint Fixed feature code of UDP payload. Max string length: 512
                     */
                    void SetUdpFootprint(const std::string& _udpFootprint);

                    /**
                     * 判断参数 UdpFootprint 是否已赋值
                     * @return UdpFootprint 是否已赋值
                     */
                    bool UdpFootprintHasBeenSet() const;

                    /**
                     * 获取Web application API URL
                     * @return WebApiUrl Web application API URL
                     */
                    std::vector<std::string> GetWebApiUrl() const;

                    /**
                     * 设置Web application API URL
                     * @param WebApiUrl Web application API URL
                     */
                    void SetWebApiUrl(const std::vector<std::string>& _webApiUrl);

                    /**
                     * 判断参数 WebApiUrl 是否已赋值
                     * @return WebApiUrl 是否已赋值
                     */
                    bool WebApiUrlHasBeenSet() const;

                    /**
                     * 获取Minimum length of TCP packet. Value range: (0, 1500)
                     * @return MinTcpPackageLen Minimum length of TCP packet. Value range: (0, 1500)
                     */
                    std::string GetMinTcpPackageLen() const;

                    /**
                     * 设置Minimum length of TCP packet. Value range: (0, 1500)
                     * @param MinTcpPackageLen Minimum length of TCP packet. Value range: (0, 1500)
                     */
                    void SetMinTcpPackageLen(const std::string& _minTcpPackageLen);

                    /**
                     * 判断参数 MinTcpPackageLen 是否已赋值
                     * @return MinTcpPackageLen 是否已赋值
                     */
                    bool MinTcpPackageLenHasBeenSet() const;

                    /**
                     * 获取Maximum length of TCP packet. Value range: (0, 1500). It must be greater than or equal to the minimum length of TCP packet
                     * @return MaxTcpPackageLen Maximum length of TCP packet. Value range: (0, 1500). It must be greater than or equal to the minimum length of TCP packet
                     */
                    std::string GetMaxTcpPackageLen() const;

                    /**
                     * 设置Maximum length of TCP packet. Value range: (0, 1500). It must be greater than or equal to the minimum length of TCP packet
                     * @param MaxTcpPackageLen Maximum length of TCP packet. Value range: (0, 1500). It must be greater than or equal to the minimum length of TCP packet
                     */
                    void SetMaxTcpPackageLen(const std::string& _maxTcpPackageLen);

                    /**
                     * 判断参数 MaxTcpPackageLen 是否已赋值
                     * @return MaxTcpPackageLen 是否已赋值
                     */
                    bool MaxTcpPackageLenHasBeenSet() const;

                    /**
                     * 获取Minimum length of UDP packet. Value range: (0, 1500)
                     * @return MinUdpPackageLen Minimum length of UDP packet. Value range: (0, 1500)
                     */
                    std::string GetMinUdpPackageLen() const;

                    /**
                     * 设置Minimum length of UDP packet. Value range: (0, 1500)
                     * @param MinUdpPackageLen Minimum length of UDP packet. Value range: (0, 1500)
                     */
                    void SetMinUdpPackageLen(const std::string& _minUdpPackageLen);

                    /**
                     * 判断参数 MinUdpPackageLen 是否已赋值
                     * @return MinUdpPackageLen 是否已赋值
                     */
                    bool MinUdpPackageLenHasBeenSet() const;

                    /**
                     * 获取Maximum length of UDP packet. Value range: (0, 1500). It must be greater than or equal to the minimum length of UDP packet
                     * @return MaxUdpPackageLen Maximum length of UDP packet. Value range: (0, 1500). It must be greater than or equal to the minimum length of UDP packet
                     */
                    std::string GetMaxUdpPackageLen() const;

                    /**
                     * 设置Maximum length of UDP packet. Value range: (0, 1500). It must be greater than or equal to the minimum length of UDP packet
                     * @param MaxUdpPackageLen Maximum length of UDP packet. Value range: (0, 1500). It must be greater than or equal to the minimum length of UDP packet
                     */
                    void SetMaxUdpPackageLen(const std::string& _maxUdpPackageLen);

                    /**
                     * 判断参数 MaxUdpPackageLen 是否已赋值
                     * @return MaxUdpPackageLen 是否已赋值
                     */
                    bool MaxUdpPackageLenHasBeenSet() const;

                    /**
                     * 获取Whether there are applications using VPN. Valid values: [no, yes]
                     * @return HasVPN Whether there are applications using VPN. Valid values: [no, yes]
                     */
                    std::string GetHasVPN() const;

                    /**
                     * 设置Whether there are applications using VPN. Valid values: [no, yes]
                     * @param HasVPN Whether there are applications using VPN. Valid values: [no, yes]
                     */
                    void SetHasVPN(const std::string& _hasVPN);

                    /**
                     * 判断参数 HasVPN 是否已赋值
                     * @return HasVPN 是否已赋值
                     */
                    bool HasVPNHasBeenSet() const;

                    /**
                     * 获取TCP port list. You can enter a single port, or a port range. Format: 80,443,700-800,53,1000-3000.
                     * @return TcpPortList TCP port list. You can enter a single port, or a port range. Format: 80,443,700-800,53,1000-3000.
                     */
                    std::string GetTcpPortList() const;

                    /**
                     * 设置TCP port list. You can enter a single port, or a port range. Format: 80,443,700-800,53,1000-3000.
                     * @param TcpPortList TCP port list. You can enter a single port, or a port range. Format: 80,443,700-800,53,1000-3000.
                     */
                    void SetTcpPortList(const std::string& _tcpPortList);

                    /**
                     * 判断参数 TcpPortList 是否已赋值
                     * @return TcpPortList 是否已赋值
                     */
                    bool TcpPortListHasBeenSet() const;

                    /**
                     * 获取UDP port list. You can enter a single port, or a port range. Format: 80,443,700-800,53,1000-3000.
                     * @return UdpPortList UDP port list. You can enter a single port, or a port range. Format: 80,443,700-800,53,1000-3000.
                     */
                    std::string GetUdpPortList() const;

                    /**
                     * 设置UDP port list. You can enter a single port, or a port range. Format: 80,443,700-800,53,1000-3000.
                     * @param UdpPortList UDP port list. You can enter a single port, or a port range. Format: 80,443,700-800,53,1000-3000.
                     */
                    void SetUdpPortList(const std::string& _udpPortList);

                    /**
                     * 判断参数 UdpPortList 是否已赋值
                     * @return UdpPortList 是否已赋值
                     */
                    bool UdpPortListHasBeenSet() const;

                private:

                    /**
                     * Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `bgp`: Anti-DDoS Pro (single IP); `bgp-multip`: Anti-DDoS Pro (multi-IP), `net`: Anti-DDoS Ultimate
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * Policy scenario name string. Length limit: 64
                     */
                    std::string m_caseName;
                    bool m_caseNameHasBeenSet;

                    /**
                     * Development platform. Valid values: [PC (PC client), MOBILE (mobile device), TV (TV), SERVER (server)]
                     */
                    std::vector<std::string> m_platformTypes;
                    bool m_platformTypesHasBeenSet;

                    /**
                     * Category. Valid values: [WEB (website), GAME (game), APP (application), OTHER (other)]
                     */
                    std::string m_appType;
                    bool m_appTypeHasBeenSet;

                    /**
                     * Application protocol. Valid values: [tcp (TCP protocol), udp (UDP protocol), icmp (ICMP protocol), all (other protocols)]
                     */
                    std::vector<std::string> m_appProtocols;
                    bool m_appProtocolsHasBeenSet;

                    /**
                     * TCP start port. Value range: (0, 65535]
                     */
                    std::string m_tcpSportStart;
                    bool m_tcpSportStartHasBeenSet;

                    /**
                     * TCP end port. Value range: (0, 65535). It must be greater than or equal to the TCP start port.
                     */
                    std::string m_tcpSportEnd;
                    bool m_tcpSportEndHasBeenSet;

                    /**
                     * UDP start port. Value range: (0, 65535]
                     */
                    std::string m_udpSportStart;
                    bool m_udpSportStartHasBeenSet;

                    /**
                     * UDP end port. Value range: (0, 65535). It must be greater than or equal to the UDP start port.
                     */
                    std::string m_udpSportEnd;
                    bool m_udpSportEndHasBeenSet;

                    /**
                     * Whether there are customers outside China. Valid values: [no, yes]
                     */
                    std::string m_hasAbroad;
                    bool m_hasAbroadHasBeenSet;

                    /**
                     * Whether to actively initiate outbound TCP requests. Valid values: [no, yes]
                     */
                    std::string m_hasInitiateTcp;
                    bool m_hasInitiateTcpHasBeenSet;

                    /**
                     * Whether to actively initiate outbound UDP requests. Valid values: [no, yes]
                     */
                    std::string m_hasInitiateUdp;
                    bool m_hasInitiateUdpHasBeenSet;

                    /**
                     * Port that actively initiates TCP requests. Value range: (0, 65535]
                     */
                    std::string m_peerTcpPort;
                    bool m_peerTcpPortHasBeenSet;

                    /**
                     * Port that actively initiates UDP requests. Value range: (0, 65535]
                     */
                    std::string m_peerUdpPort;
                    bool m_peerUdpPortHasBeenSet;

                    /**
                     * Fixed feature code of TCP payload. Max string length: 512
                     */
                    std::string m_tcpFootprint;
                    bool m_tcpFootprintHasBeenSet;

                    /**
                     * Fixed feature code of UDP payload. Max string length: 512
                     */
                    std::string m_udpFootprint;
                    bool m_udpFootprintHasBeenSet;

                    /**
                     * Web application API URL
                     */
                    std::vector<std::string> m_webApiUrl;
                    bool m_webApiUrlHasBeenSet;

                    /**
                     * Minimum length of TCP packet. Value range: (0, 1500)
                     */
                    std::string m_minTcpPackageLen;
                    bool m_minTcpPackageLenHasBeenSet;

                    /**
                     * Maximum length of TCP packet. Value range: (0, 1500). It must be greater than or equal to the minimum length of TCP packet
                     */
                    std::string m_maxTcpPackageLen;
                    bool m_maxTcpPackageLenHasBeenSet;

                    /**
                     * Minimum length of UDP packet. Value range: (0, 1500)
                     */
                    std::string m_minUdpPackageLen;
                    bool m_minUdpPackageLenHasBeenSet;

                    /**
                     * Maximum length of UDP packet. Value range: (0, 1500). It must be greater than or equal to the minimum length of UDP packet
                     */
                    std::string m_maxUdpPackageLen;
                    bool m_maxUdpPackageLenHasBeenSet;

                    /**
                     * Whether there are applications using VPN. Valid values: [no, yes]
                     */
                    std::string m_hasVPN;
                    bool m_hasVPNHasBeenSet;

                    /**
                     * TCP port list. You can enter a single port, or a port range. Format: 80,443,700-800,53,1000-3000.
                     */
                    std::string m_tcpPortList;
                    bool m_tcpPortListHasBeenSet;

                    /**
                     * UDP port list. You can enter a single port, or a port range. Format: 80,443,700-800,53,1000-3000.
                     */
                    std::string m_udpPortList;
                    bool m_udpPortListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_CREATEDDOSPOLICYCASEREQUEST_H_
