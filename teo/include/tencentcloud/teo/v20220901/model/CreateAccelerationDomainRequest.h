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
                     * 获取ID of the site related with the acceleration domain name.
                     * @return ZoneId ID of the site related with the acceleration domain name.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置ID of the site related with the acceleration domain name.
                     * @param _zoneId ID of the site related with the acceleration domain name.
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
                     * 获取Acceleration domain name
                     * @return DomainName Acceleration domain name
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置Acceleration domain name
                     * @param _domainName Acceleration domain name
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
                     * 获取Details of the origin.
                     * @return OriginInfo Details of the origin.
                     * 
                     */
                    OriginInfo GetOriginInfo() const;

                    /**
                     * 设置Details of the origin.
                     * @param _originInfo Details of the origin.
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
                     * 获取Origin-Pull protocol. valid values:.
<Li>FOLLOW: follow protocol;</li>.
<Li>HTTP: http protocol for origin-pull;</li>.
<li>HTTPS: the origin server uses the HTTPS protocol.</li>defaults to FOLLOW if left blank.
                     * @return OriginProtocol Origin-Pull protocol. valid values:.
<Li>FOLLOW: follow protocol;</li>.
<Li>HTTP: http protocol for origin-pull;</li>.
<li>HTTPS: the origin server uses the HTTPS protocol.</li>defaults to FOLLOW if left blank.
                     * 
                     */
                    std::string GetOriginProtocol() const;

                    /**
                     * 设置Origin-Pull protocol. valid values:.
<Li>FOLLOW: follow protocol;</li>.
<Li>HTTP: http protocol for origin-pull;</li>.
<li>HTTPS: the origin server uses the HTTPS protocol.</li>defaults to FOLLOW if left blank.
                     * @param _originProtocol Origin-Pull protocol. valid values:.
<Li>FOLLOW: follow protocol;</li>.
<Li>HTTP: http protocol for origin-pull;</li>.
<li>HTTPS: the origin server uses the HTTPS protocol.</li>defaults to FOLLOW if left blank.
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
                     * 获取HTTP origin port. default value 80. value range: 1–65535.
This parameter is valid only when OriginProtocol is FOLLOW or HTTP.
                     * @return HttpOriginPort HTTP origin port. default value 80. value range: 1–65535.
This parameter is valid only when OriginProtocol is FOLLOW or HTTP.
                     * 
                     */
                    uint64_t GetHttpOriginPort() const;

                    /**
                     * 设置HTTP origin port. default value 80. value range: 1–65535.
This parameter is valid only when OriginProtocol is FOLLOW or HTTP.
                     * @param _httpOriginPort HTTP origin port. default value 80. value range: 1–65535.
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
                     * 获取HTTPS origin port. default value 443. value range: 1–65535.
This parameter is valid only when OriginProtocol is FOLLOW or HTTPS.
                     * @return HttpsOriginPort HTTPS origin port. default value 443. value range: 1–65535.
This parameter is valid only when OriginProtocol is FOLLOW or HTTPS.
                     * 
                     */
                    uint64_t GetHttpsOriginPort() const;

                    /**
                     * 设置HTTPS origin port. default value 443. value range: 1–65535.
This parameter is valid only when OriginProtocol is FOLLOW or HTTPS.
                     * @param _httpsOriginPort HTTPS origin port. default value 443. value range: 1–65535.
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
                     * 获取IPv6 status. valid values:.
<li>follow: adhere to the site IPv6 configuration;</li>.
<li>on: enabled status;</li>.
<li>off: disabled.</li>if left empty, the default value is follow.
                     * @return IPv6Status IPv6 status. valid values:.
<li>follow: adhere to the site IPv6 configuration;</li>.
<li>on: enabled status;</li>.
<li>off: disabled.</li>if left empty, the default value is follow.
                     * 
                     */
                    std::string GetIPv6Status() const;

                    /**
                     * 设置IPv6 status. valid values:.
<li>follow: adhere to the site IPv6 configuration;</li>.
<li>on: enabled status;</li>.
<li>off: disabled.</li>if left empty, the default value is follow.
                     * @param _iPv6Status IPv6 status. valid values:.
<li>follow: adhere to the site IPv6 configuration;</li>.
<li>on: enabled status;</li>.
<li>off: disabled.</li>if left empty, the default value is follow.
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
                     * 获取Specify the shared CNAME address for domain binding. use the default CNAME when not specified.
Bind shared CNAME requires the scheduling policy of all domains to be consistent. the following configuration affects the scheduling policy. when inconsistent, bind shared CNAME will be processed as follows:.
-IPv6 access: not allowed to create domain name. change IPv6Status to keep it configured the same as other domain names bound to the shared CNAME.
-Anti-DDoS: if the selected shared CNAME has DDoS protection enabled, domain activation will enable DDoS protection by default.
-Network optimization in the chinese mainland (international acceleration): not allowed to create a domain name. keep the network optimization in the chinese mainland (international acceleration) configuration of the current domain name consistent with the other domain names bound to the shared CNAME and try again after.

Note: shared CNAME is currently in beta test. if you need to use it, contact us to enable it.
                     * @return SharedCNAME Specify the shared CNAME address for domain binding. use the default CNAME when not specified.
Bind shared CNAME requires the scheduling policy of all domains to be consistent. the following configuration affects the scheduling policy. when inconsistent, bind shared CNAME will be processed as follows:.
-IPv6 access: not allowed to create domain name. change IPv6Status to keep it configured the same as other domain names bound to the shared CNAME.
-Anti-DDoS: if the selected shared CNAME has DDoS protection enabled, domain activation will enable DDoS protection by default.
-Network optimization in the chinese mainland (international acceleration): not allowed to create a domain name. keep the network optimization in the chinese mainland (international acceleration) configuration of the current domain name consistent with the other domain names bound to the shared CNAME and try again after.

Note: shared CNAME is currently in beta test. if you need to use it, contact us to enable it.
                     * 
                     */
                    std::string GetSharedCNAME() const;

                    /**
                     * 设置Specify the shared CNAME address for domain binding. use the default CNAME when not specified.
Bind shared CNAME requires the scheduling policy of all domains to be consistent. the following configuration affects the scheduling policy. when inconsistent, bind shared CNAME will be processed as follows:.
-IPv6 access: not allowed to create domain name. change IPv6Status to keep it configured the same as other domain names bound to the shared CNAME.
-Anti-DDoS: if the selected shared CNAME has DDoS protection enabled, domain activation will enable DDoS protection by default.
-Network optimization in the chinese mainland (international acceleration): not allowed to create a domain name. keep the network optimization in the chinese mainland (international acceleration) configuration of the current domain name consistent with the other domain names bound to the shared CNAME and try again after.

Note: shared CNAME is currently in beta test. if you need to use it, contact us to enable it.
                     * @param _sharedCNAME Specify the shared CNAME address for domain binding. use the default CNAME when not specified.
Bind shared CNAME requires the scheduling policy of all domains to be consistent. the following configuration affects the scheduling policy. when inconsistent, bind shared CNAME will be processed as follows:.
-IPv6 access: not allowed to create domain name. change IPv6Status to keep it configured the same as other domain names bound to the shared CNAME.
-Anti-DDoS: if the selected shared CNAME has DDoS protection enabled, domain activation will enable DDoS protection by default.
-Network optimization in the chinese mainland (international acceleration): not allowed to create a domain name. keep the network optimization in the chinese mainland (international acceleration) configuration of the current domain name consistent with the other domain names bound to the shared CNAME and try again after.

Note: shared CNAME is currently in beta test. if you need to use it, contact us to enable it.
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
                     * ID of the site related with the acceleration domain name.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Acceleration domain name
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * Details of the origin.
                     */
                    OriginInfo m_originInfo;
                    bool m_originInfoHasBeenSet;

                    /**
                     * Origin-Pull protocol. valid values:.
<Li>FOLLOW: follow protocol;</li>.
<Li>HTTP: http protocol for origin-pull;</li>.
<li>HTTPS: the origin server uses the HTTPS protocol.</li>defaults to FOLLOW if left blank.
                     */
                    std::string m_originProtocol;
                    bool m_originProtocolHasBeenSet;

                    /**
                     * HTTP origin port. default value 80. value range: 1–65535.
This parameter is valid only when OriginProtocol is FOLLOW or HTTP.
                     */
                    uint64_t m_httpOriginPort;
                    bool m_httpOriginPortHasBeenSet;

                    /**
                     * HTTPS origin port. default value 443. value range: 1–65535.
This parameter is valid only when OriginProtocol is FOLLOW or HTTPS.
                     */
                    uint64_t m_httpsOriginPort;
                    bool m_httpsOriginPortHasBeenSet;

                    /**
                     * IPv6 status. valid values:.
<li>follow: adhere to the site IPv6 configuration;</li>.
<li>on: enabled status;</li>.
<li>off: disabled.</li>if left empty, the default value is follow.
                     */
                    std::string m_iPv6Status;
                    bool m_iPv6StatusHasBeenSet;

                    /**
                     * Specify the shared CNAME address for domain binding. use the default CNAME when not specified.
Bind shared CNAME requires the scheduling policy of all domains to be consistent. the following configuration affects the scheduling policy. when inconsistent, bind shared CNAME will be processed as follows:.
-IPv6 access: not allowed to create domain name. change IPv6Status to keep it configured the same as other domain names bound to the shared CNAME.
-Anti-DDoS: if the selected shared CNAME has DDoS protection enabled, domain activation will enable DDoS protection by default.
-Network optimization in the chinese mainland (international acceleration): not allowed to create a domain name. keep the network optimization in the chinese mainland (international acceleration) configuration of the current domain name consistent with the other domain names bound to the shared CNAME and try again after.

Note: shared CNAME is currently in beta test. if you need to use it, contact us to enable it.
                     */
                    std::string m_sharedCNAME;
                    bool m_sharedCNAMEHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEACCELERATIONDOMAINREQUEST_H_
