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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATEACCELERATIONDOMAINREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATEACCELERATIONDOMAINREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/OriginInfo.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * CreateAccelerationDomain request structure.
                */
                class CreateAccelerationDomainRequest : public AbstractModel
                {
                public:
                    CreateAccelerationDomainRequest();
                    ~CreateAccelerationDomainRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Zone ID of the acceleration domain name.
                     * @return ZoneId Zone ID of the acceleration domain name.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Zone ID of the acceleration domain name.
                     * @param _zoneId Zone ID of the acceleration domain name.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Acceleration domain name.
                     * @return DomainName Acceleration domain name.
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置Acceleration domain name.
                     * @param _domainName Acceleration domain name.
                     * 
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取Origin server information.
                     * @return OriginInfo Origin server information.
                     * 
                     */
                    OriginInfo GetOriginInfo() const;

                    /**
                     * 设置Origin server information.
                     * @param _originInfo Origin server information.
                     * 
                     */
                    void SetOriginInfo(const OriginInfo& _originInfo);

                    /**
                     * 判断参数 OriginInfo 是否已赋值
                     * @return OriginInfo 是否已赋值
                     * 
                     */
                    bool OriginInfoHasBeenSet() const;

                    /**
                     * 获取Origin-pull protocol. Valid values:
<li>FOLLOW: follow protocol;</li>
<li>HTTP: Origin-pull over HTTP protocol;</li>
<li>HTTPS: origin-pull over the HTTPS protocol.</li>If not specified, the default is FOLLOW.
                     * @return OriginProtocol Origin-pull protocol. Valid values:
<li>FOLLOW: follow protocol;</li>
<li>HTTP: Origin-pull over HTTP protocol;</li>
<li>HTTPS: origin-pull over the HTTPS protocol.</li>If not specified, the default is FOLLOW.
                     * 
                     */
                    std::string GetOriginProtocol() const;

                    /**
                     * 设置Origin-pull protocol. Valid values:
<li>FOLLOW: follow protocol;</li>
<li>HTTP: Origin-pull over HTTP protocol;</li>
<li>HTTPS: origin-pull over the HTTPS protocol.</li>If not specified, the default is FOLLOW.
                     * @param _originProtocol Origin-pull protocol. Valid values:
<li>FOLLOW: follow protocol;</li>
<li>HTTP: Origin-pull over HTTP protocol;</li>
<li>HTTPS: origin-pull over the HTTPS protocol.</li>If not specified, the default is FOLLOW.
                     * 
                     */
                    void SetOriginProtocol(const std::string& _originProtocol);

                    /**
                     * 判断参数 OriginProtocol 是否已赋值
                     * @return OriginProtocol 是否已赋值
                     * 
                     */
                    bool OriginProtocolHasBeenSet() const;

                    /**
                     * 获取HTTP origin-pull port. Default value: 80. Value range: 1–65535.
This parameter is valid only when OriginProtocol is FOLLOW or HTTP.
                     * @return HttpOriginPort HTTP origin-pull port. Default value: 80. Value range: 1–65535.
This parameter is valid only when OriginProtocol is FOLLOW or HTTP.
                     * 
                     */
                    uint64_t GetHttpOriginPort() const;

                    /**
                     * 设置HTTP origin-pull port. Default value: 80. Value range: 1–65535.
This parameter is valid only when OriginProtocol is FOLLOW or HTTP.
                     * @param _httpOriginPort HTTP origin-pull port. Default value: 80. Value range: 1–65535.
This parameter is valid only when OriginProtocol is FOLLOW or HTTP.
                     * 
                     */
                    void SetHttpOriginPort(const uint64_t& _httpOriginPort);

                    /**
                     * 判断参数 HttpOriginPort 是否已赋值
                     * @return HttpOriginPort 是否已赋值
                     * 
                     */
                    bool HttpOriginPortHasBeenSet() const;

                    /**
                     * 获取HTTPS origin port. Default value: 443. Value range: 1–65535.
This parameter is valid only when OriginProtocol is FOLLOW or HTTPS.
                     * @return HttpsOriginPort HTTPS origin port. Default value: 443. Value range: 1–65535.
This parameter is valid only when OriginProtocol is FOLLOW or HTTPS.
                     * 
                     */
                    uint64_t GetHttpsOriginPort() const;

                    /**
                     * 设置HTTPS origin port. Default value: 443. Value range: 1–65535.
This parameter is valid only when OriginProtocol is FOLLOW or HTTPS.
                     * @param _httpsOriginPort HTTPS origin port. Default value: 443. Value range: 1–65535.
This parameter is valid only when OriginProtocol is FOLLOW or HTTPS.
                     * 
                     */
                    void SetHttpsOriginPort(const uint64_t& _httpsOriginPort);

                    /**
                     * 判断参数 HttpsOriginPort 是否已赋值
                     * @return HttpsOriginPort 是否已赋值
                     * 
                     */
                    bool HttpsOriginPortHasBeenSet() const;

                    /**
                     * 获取IPv6 status. Valid values:
<li>follow: follow the site IPv6 configuration;</li>
<li>`on`: Enabled status;</li>
<li>off: Disabled.</li>If not specified, the default is: follow.
                     * @return IPv6Status IPv6 status. Valid values:
<li>follow: follow the site IPv6 configuration;</li>
<li>`on`: Enabled status;</li>
<li>off: Disabled.</li>If not specified, the default is: follow.
                     * 
                     */
                    std::string GetIPv6Status() const;

                    /**
                     * 设置IPv6 status. Valid values:
<li>follow: follow the site IPv6 configuration;</li>
<li>`on`: Enabled status;</li>
<li>off: Disabled.</li>If not specified, the default is: follow.
                     * @param _iPv6Status IPv6 status. Valid values:
<li>follow: follow the site IPv6 configuration;</li>
<li>`on`: Enabled status;</li>
<li>off: Disabled.</li>If not specified, the default is: follow.
                     * 
                     */
                    void SetIPv6Status(const std::string& _iPv6Status);

                    /**
                     * 判断参数 IPv6Status 是否已赋值
                     * @return IPv6Status 是否已赋值
                     * 
                     */
                    bool IPv6StatusHasBeenSet() const;

                    /**
                     * 获取Shared CNAME address bound to the specified domain. If not specified, the default CNAME is used.
Binding a shared CNAME requires the scheduling policies of all domains to be consistent. The following configurations affect the scheduling policy. When they are inconsistent, binding a shared CNAME is processed as follows:
- IPv6 access: not allowed to create a domain name. Modify IPv6Status to match the domain configuration of the rest bound to the shared CNAME.
-DDoS protection: If DDoS protection is enabled for the selected shared CNAME, DDoS protection will be enabled for the domain by default when you create the domain.
-Network optimization in the Chinese mainland (international acceleration): You are not allowed to create a domain name. Make sure the network optimization in the Chinese mainland (international acceleration) configuration of the current domain name is consistent with the rest of the domain names bound to the shared CNAME, and try again later.

Note: Shared CNAME is currently in beta test. To use it, contact us to enable it.
                     * @return SharedCNAME Shared CNAME address bound to the specified domain. If not specified, the default CNAME is used.
Binding a shared CNAME requires the scheduling policies of all domains to be consistent. The following configurations affect the scheduling policy. When they are inconsistent, binding a shared CNAME is processed as follows:
- IPv6 access: not allowed to create a domain name. Modify IPv6Status to match the domain configuration of the rest bound to the shared CNAME.
-DDoS protection: If DDoS protection is enabled for the selected shared CNAME, DDoS protection will be enabled for the domain by default when you create the domain.
-Network optimization in the Chinese mainland (international acceleration): You are not allowed to create a domain name. Make sure the network optimization in the Chinese mainland (international acceleration) configuration of the current domain name is consistent with the rest of the domain names bound to the shared CNAME, and try again later.

Note: Shared CNAME is currently in beta test. To use it, contact us to enable it.
                     * 
                     */
                    std::string GetSharedCNAME() const;

                    /**
                     * 设置Shared CNAME address bound to the specified domain. If not specified, the default CNAME is used.
Binding a shared CNAME requires the scheduling policies of all domains to be consistent. The following configurations affect the scheduling policy. When they are inconsistent, binding a shared CNAME is processed as follows:
- IPv6 access: not allowed to create a domain name. Modify IPv6Status to match the domain configuration of the rest bound to the shared CNAME.
-DDoS protection: If DDoS protection is enabled for the selected shared CNAME, DDoS protection will be enabled for the domain by default when you create the domain.
-Network optimization in the Chinese mainland (international acceleration): You are not allowed to create a domain name. Make sure the network optimization in the Chinese mainland (international acceleration) configuration of the current domain name is consistent with the rest of the domain names bound to the shared CNAME, and try again later.

Note: Shared CNAME is currently in beta test. To use it, contact us to enable it.
                     * @param _sharedCNAME Shared CNAME address bound to the specified domain. If not specified, the default CNAME is used.
Binding a shared CNAME requires the scheduling policies of all domains to be consistent. The following configurations affect the scheduling policy. When they are inconsistent, binding a shared CNAME is processed as follows:
- IPv6 access: not allowed to create a domain name. Modify IPv6Status to match the domain configuration of the rest bound to the shared CNAME.
-DDoS protection: If DDoS protection is enabled for the selected shared CNAME, DDoS protection will be enabled for the domain by default when you create the domain.
-Network optimization in the Chinese mainland (international acceleration): You are not allowed to create a domain name. Make sure the network optimization in the Chinese mainland (international acceleration) configuration of the current domain name is consistent with the rest of the domain names bound to the shared CNAME, and try again later.

Note: Shared CNAME is currently in beta test. To use it, contact us to enable it.
                     * 
                     */
                    void SetSharedCNAME(const std::string& _sharedCNAME);

                    /**
                     * 判断参数 SharedCNAME 是否已赋值
                     * @return SharedCNAME 是否已赋值
                     * 
                     */
                    bool SharedCNAMEHasBeenSet() const;

                private:

                    /**
                     * Zone ID of the acceleration domain name.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Acceleration domain name.
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * Origin server information.
                     */
                    OriginInfo m_originInfo;
                    bool m_originInfoHasBeenSet;

                    /**
                     * Origin-pull protocol. Valid values:
<li>FOLLOW: follow protocol;</li>
<li>HTTP: Origin-pull over HTTP protocol;</li>
<li>HTTPS: origin-pull over the HTTPS protocol.</li>If not specified, the default is FOLLOW.
                     */
                    std::string m_originProtocol;
                    bool m_originProtocolHasBeenSet;

                    /**
                     * HTTP origin-pull port. Default value: 80. Value range: 1–65535.
This parameter is valid only when OriginProtocol is FOLLOW or HTTP.
                     */
                    uint64_t m_httpOriginPort;
                    bool m_httpOriginPortHasBeenSet;

                    /**
                     * HTTPS origin port. Default value: 443. Value range: 1–65535.
This parameter is valid only when OriginProtocol is FOLLOW or HTTPS.
                     */
                    uint64_t m_httpsOriginPort;
                    bool m_httpsOriginPortHasBeenSet;

                    /**
                     * IPv6 status. Valid values:
<li>follow: follow the site IPv6 configuration;</li>
<li>`on`: Enabled status;</li>
<li>off: Disabled.</li>If not specified, the default is: follow.
                     */
                    std::string m_iPv6Status;
                    bool m_iPv6StatusHasBeenSet;

                    /**
                     * Shared CNAME address bound to the specified domain. If not specified, the default CNAME is used.
Binding a shared CNAME requires the scheduling policies of all domains to be consistent. The following configurations affect the scheduling policy. When they are inconsistent, binding a shared CNAME is processed as follows:
- IPv6 access: not allowed to create a domain name. Modify IPv6Status to match the domain configuration of the rest bound to the shared CNAME.
-DDoS protection: If DDoS protection is enabled for the selected shared CNAME, DDoS protection will be enabled for the domain by default when you create the domain.
-Network optimization in the Chinese mainland (international acceleration): You are not allowed to create a domain name. Make sure the network optimization in the Chinese mainland (international acceleration) configuration of the current domain name is consistent with the rest of the domain names bound to the shared CNAME, and try again later.

Note: Shared CNAME is currently in beta test. To use it, contact us to enable it.
                     */
                    std::string m_sharedCNAME;
                    bool m_sharedCNAMEHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEACCELERATIONDOMAINREQUEST_H_
