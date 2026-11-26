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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYACCELERATIONDOMAINREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYACCELERATIONDOMAINREQUEST_H_

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
                * ModifyAccelerationDomain request structure.
                */
                class ModifyAccelerationDomainRequest : public AbstractModel
                {
                public:
                    ModifyAccelerationDomainRequest();
                    ~ModifyAccelerationDomainRequest() = default;
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
<li>HTTP: Origin-pull over HTTP;</li>
<li>HTTPS: Origin-pull over HTTPS protocol.</li>
<li>Leave blank to retain the original configuration.</li>
                     * @return OriginProtocol Origin-pull protocol. Valid values:
<li>FOLLOW: follow protocol;</li>
<li>HTTP: Origin-pull over HTTP;</li>
<li>HTTPS: Origin-pull over HTTPS protocol.</li>
<li>Leave blank to retain the original configuration.</li>
                     * 
                     */
                    std::string GetOriginProtocol() const;

                    /**
                     * 设置Origin-pull protocol. Valid values:
<li>FOLLOW: follow protocol;</li>
<li>HTTP: Origin-pull over HTTP;</li>
<li>HTTPS: Origin-pull over HTTPS protocol.</li>
<li>Leave blank to retain the original configuration.</li>
                     * @param _originProtocol Origin-pull protocol. Valid values:
<li>FOLLOW: follow protocol;</li>
<li>HTTP: Origin-pull over HTTP;</li>
<li>HTTPS: Origin-pull over HTTPS protocol.</li>
<li>Leave blank to retain the original configuration.</li>
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
                     * 获取HTTP origin-pull port. Value range: 1–65535. This parameter is valid only when OriginProtocol is FOLLOW or HTTP. If not specified, the original configuration is retained.
                     * @return HttpOriginPort HTTP origin-pull port. Value range: 1–65535. This parameter is valid only when OriginProtocol is FOLLOW or HTTP. If not specified, the original configuration is retained.
                     * 
                     */
                    uint64_t GetHttpOriginPort() const;

                    /**
                     * 设置HTTP origin-pull port. Value range: 1–65535. This parameter is valid only when OriginProtocol is FOLLOW or HTTP. If not specified, the original configuration is retained.
                     * @param _httpOriginPort HTTP origin-pull port. Value range: 1–65535. This parameter is valid only when OriginProtocol is FOLLOW or HTTP. If not specified, the original configuration is retained.
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
                     * 获取HTTPS origin-pull port. Value range: 1-65535. This parameter is valid only when OriginProtocol is FOLLOW or HTTPS. If not specified, the original configuration is retained.
                     * @return HttpsOriginPort HTTPS origin-pull port. Value range: 1-65535. This parameter is valid only when OriginProtocol is FOLLOW or HTTPS. If not specified, the original configuration is retained.
                     * 
                     */
                    uint64_t GetHttpsOriginPort() const;

                    /**
                     * 设置HTTPS origin-pull port. Value range: 1-65535. This parameter is valid only when OriginProtocol is FOLLOW or HTTPS. If not specified, the original configuration is retained.
                     * @param _httpsOriginPort HTTPS origin-pull port. Value range: 1-65535. This parameter is valid only when OriginProtocol is FOLLOW or HTTPS. If not specified, the original configuration is retained.
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
<li>on: enabled;</li>
<li>off: Disabled.</li>
<li>Leave blank to retain the original configuration.</li>
                     * @return IPv6Status IPv6 status. Valid values:
<li>follow: follow the site IPv6 configuration;</li>
<li>on: enabled;</li>
<li>off: Disabled.</li>
<li>Leave blank to retain the original configuration.</li>
                     * 
                     */
                    std::string GetIPv6Status() const;

                    /**
                     * 设置IPv6 status. Valid values:
<li>follow: follow the site IPv6 configuration;</li>
<li>on: enabled;</li>
<li>off: Disabled.</li>
<li>Leave blank to retain the original configuration.</li>
                     * @param _iPv6Status IPv6 status. Valid values:
<li>follow: follow the site IPv6 configuration;</li>
<li>on: enabled;</li>
<li>off: Disabled.</li>
<li>Leave blank to retain the original configuration.</li>
                     * 
                     */
                    void SetIPv6Status(const std::string& _iPv6Status);

                    /**
                     * 判断参数 IPv6Status 是否已赋值
                     * @return IPv6Status 是否已赋值
                     * 
                     */
                    bool IPv6StatusHasBeenSet() const;

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
<li>HTTP: Origin-pull over HTTP;</li>
<li>HTTPS: Origin-pull over HTTPS protocol.</li>
<li>Leave blank to retain the original configuration.</li>
                     */
                    std::string m_originProtocol;
                    bool m_originProtocolHasBeenSet;

                    /**
                     * HTTP origin-pull port. Value range: 1–65535. This parameter is valid only when OriginProtocol is FOLLOW or HTTP. If not specified, the original configuration is retained.
                     */
                    uint64_t m_httpOriginPort;
                    bool m_httpOriginPortHasBeenSet;

                    /**
                     * HTTPS origin-pull port. Value range: 1-65535. This parameter is valid only when OriginProtocol is FOLLOW or HTTPS. If not specified, the original configuration is retained.
                     */
                    uint64_t m_httpsOriginPort;
                    bool m_httpsOriginPortHasBeenSet;

                    /**
                     * IPv6 status. Valid values:
<li>follow: follow the site IPv6 configuration;</li>
<li>on: enabled;</li>
<li>off: Disabled.</li>
<li>Leave blank to retain the original configuration.</li>
                     */
                    std::string m_iPv6Status;
                    bool m_iPv6StatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYACCELERATIONDOMAINREQUEST_H_
