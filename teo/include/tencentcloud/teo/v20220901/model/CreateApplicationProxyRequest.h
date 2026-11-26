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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATEAPPLICATIONPROXYREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATEAPPLICATIONPROXYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/Ipv6.h>
#include <tencentcloud/teo/v20220901/model/ApplicationProxyRule.h>
#include <tencentcloud/teo/v20220901/model/AccelerateMainland.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * CreateApplicationProxy request structure.
                */
                class CreateApplicationProxyRequest : public AbstractModel
                {
                public:
                    CreateApplicationProxyRequest();
                    ~CreateApplicationProxyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Zone ID.
                     * @return ZoneId Zone ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Zone ID.
                     * @param _zoneId Zone ID.
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
                     * 获取When ProxyType=hostname, it indicates a domain name or subdomain.
When ProxyType=instance, it indicates the proxy name.
                     * @return ProxyName When ProxyType=hostname, it indicates a domain name or subdomain.
When ProxyType=instance, it indicates the proxy name.
                     * 
                     */
                    std::string GetProxyName() const;

                    /**
                     * 设置When ProxyType=hostname, it indicates a domain name or subdomain.
When ProxyType=instance, it indicates the proxy name.
                     * @param _proxyName When ProxyType=hostname, it indicates a domain name or subdomain.
When ProxyType=instance, it indicates the proxy name.
                     * 
                     */
                    void SetProxyName(const std::string& _proxyName);

                    /**
                     * 判断参数 ProxyName 是否已赋值
                     * @return ProxyName 是否已赋值
                     * 
                     */
                    bool ProxyNameHasBeenSet() const;

                    /**
                     * 获取Scheduling mode. Valid values:
<li>`ip`: Anycast IP;</li>
<li>`domain`: CNAME.</li>
                     * @return PlatType Scheduling mode. Valid values:
<li>`ip`: Anycast IP;</li>
<li>`domain`: CNAME.</li>
                     * 
                     */
                    std::string GetPlatType() const;

                    /**
                     * 设置Scheduling mode. Valid values:
<li>`ip`: Anycast IP;</li>
<li>`domain`: CNAME.</li>
                     * @param _platType Scheduling mode. Valid values:
<li>`ip`: Anycast IP;</li>
<li>`domain`: CNAME.</li>
                     * 
                     */
                    void SetPlatType(const std::string& _platType);

                    /**
                     * 判断参数 PlatType 是否已赋值
                     * @return PlatType 是否已赋值
                     * 
                     */
                    bool PlatTypeHasBeenSet() const;

                    /**
                     * 获取Whether security is enabled. Valid values:
<li>0: security off;</li>
<li>1: Enable security.</li>
                     * @return SecurityType Whether security is enabled. Valid values:
<li>0: security off;</li>
<li>1: Enable security.</li>
                     * 
                     */
                    int64_t GetSecurityType() const;

                    /**
                     * 设置Whether security is enabled. Valid values:
<li>0: security off;</li>
<li>1: Enable security.</li>
                     * @param _securityType Whether security is enabled. Valid values:
<li>0: security off;</li>
<li>1: Enable security.</li>
                     * 
                     */
                    void SetSecurityType(const int64_t& _securityType);

                    /**
                     * 判断参数 SecurityType 是否已赋值
                     * @return SecurityType 是否已赋值
                     * 
                     */
                    bool SecurityTypeHasBeenSet() const;

                    /**
                     * 获取Whether to enable acceleration. Valid values:
<li>0: disable acceleration;</li>
<li>1: Enable acceleration.</li>
                     * @return AccelerateType Whether to enable acceleration. Valid values:
<li>0: disable acceleration;</li>
<li>1: Enable acceleration.</li>
                     * 
                     */
                    int64_t GetAccelerateType() const;

                    /**
                     * 设置Whether to enable acceleration. Valid values:
<li>0: disable acceleration;</li>
<li>1: Enable acceleration.</li>
                     * @param _accelerateType Whether to enable acceleration. Valid values:
<li>0: disable acceleration;</li>
<li>1: Enable acceleration.</li>
                     * 
                     */
                    void SetAccelerateType(const int64_t& _accelerateType);

                    /**
                     * 判断参数 AccelerateType 是否已赋值
                     * @return AccelerateType 是否已赋值
                     * 
                     */
                    bool AccelerateTypeHasBeenSet() const;

                    /**
                     * 获取Layer 4 proxy mode. Valid values: <li>instance: instance mode.</li>Use default value instance if not specified.
                     * @return ProxyType Layer 4 proxy mode. Valid values: <li>instance: instance mode.</li>Use default value instance if not specified.
                     * 
                     */
                    std::string GetProxyType() const;

                    /**
                     * 设置Layer 4 proxy mode. Valid values: <li>instance: instance mode.</li>Use default value instance if not specified.
                     * @param _proxyType Layer 4 proxy mode. Valid values: <li>instance: instance mode.</li>Use default value instance if not specified.
                     * 
                     */
                    void SetProxyType(const std::string& _proxyType);

                    /**
                     * 判断参数 ProxyType 是否已赋值
                     * @return ProxyType 是否已赋值
                     * 
                     */
                    bool ProxyTypeHasBeenSet() const;

                    /**
                     * 获取Session persistence duration. Value range: 30-3600. Unit: second.
If this field is not specified, the default value '600' will be used.
                     * @return SessionPersistTime Session persistence duration. Value range: 30-3600. Unit: second.
If this field is not specified, the default value '600' will be used.
                     * 
                     */
                    uint64_t GetSessionPersistTime() const;

                    /**
                     * 设置Session persistence duration. Value range: 30-3600. Unit: second.
If this field is not specified, the default value '600' will be used.
                     * @param _sessionPersistTime Session persistence duration. Value range: 30-3600. Unit: second.
If this field is not specified, the default value '600' will be used.
                     * 
                     */
                    void SetSessionPersistTime(const uint64_t& _sessionPersistTime);

                    /**
                     * 判断参数 SessionPersistTime 是否已赋值
                     * @return SessionPersistTime 是否已赋值
                     * 
                     */
                    bool SessionPersistTimeHasBeenSet() const;

                    /**
                     * 获取Ipv6 access configuration.
Not specified means disabling Ipv6 access.
                     * @return Ipv6 Ipv6 access configuration.
Not specified means disabling Ipv6 access.
                     * 
                     */
                    Ipv6 GetIpv6() const;

                    /**
                     * 设置Ipv6 access configuration.
Not specified means disabling Ipv6 access.
                     * @param _ipv6 Ipv6 access configuration.
Not specified means disabling Ipv6 access.
                     * 
                     */
                    void SetIpv6(const Ipv6& _ipv6);

                    /**
                     * 判断参数 Ipv6 是否已赋值
                     * @return Ipv6 是否已赋值
                     * 
                     */
                    bool Ipv6HasBeenSet() const;

                    /**
                     * 获取Rule details.
If not specified, no rules are created.
                     * @return ApplicationProxyRules Rule details.
If not specified, no rules are created.
                     * 
                     */
                    std::vector<ApplicationProxyRule> GetApplicationProxyRules() const;

                    /**
                     * 设置Rule details.
If not specified, no rules are created.
                     * @param _applicationProxyRules Rule details.
If not specified, no rules are created.
                     * 
                     */
                    void SetApplicationProxyRules(const std::vector<ApplicationProxyRule>& _applicationProxyRules);

                    /**
                     * 判断参数 ApplicationProxyRules 是否已赋值
                     * @return ApplicationProxyRules 是否已赋值
                     * 
                     */
                    bool ApplicationProxyRulesHasBeenSet() const;

                    /**
                     * 获取Acceleration optimization configuration for the Chinese mainland. Not specified means disabling acceleration optimization for the Chinese mainland.
                     * @return AccelerateMainland Acceleration optimization configuration for the Chinese mainland. Not specified means disabling acceleration optimization for the Chinese mainland.
                     * 
                     */
                    AccelerateMainland GetAccelerateMainland() const;

                    /**
                     * 设置Acceleration optimization configuration for the Chinese mainland. Not specified means disabling acceleration optimization for the Chinese mainland.
                     * @param _accelerateMainland Acceleration optimization configuration for the Chinese mainland. Not specified means disabling acceleration optimization for the Chinese mainland.
                     * 
                     */
                    void SetAccelerateMainland(const AccelerateMainland& _accelerateMainland);

                    /**
                     * 判断参数 AccelerateMainland 是否已赋值
                     * @return AccelerateMainland 是否已赋值
                     * 
                     */
                    bool AccelerateMainlandHasBeenSet() const;

                private:

                    /**
                     * Zone ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * When ProxyType=hostname, it indicates a domain name or subdomain.
When ProxyType=instance, it indicates the proxy name.
                     */
                    std::string m_proxyName;
                    bool m_proxyNameHasBeenSet;

                    /**
                     * Scheduling mode. Valid values:
<li>`ip`: Anycast IP;</li>
<li>`domain`: CNAME.</li>
                     */
                    std::string m_platType;
                    bool m_platTypeHasBeenSet;

                    /**
                     * Whether security is enabled. Valid values:
<li>0: security off;</li>
<li>1: Enable security.</li>
                     */
                    int64_t m_securityType;
                    bool m_securityTypeHasBeenSet;

                    /**
                     * Whether to enable acceleration. Valid values:
<li>0: disable acceleration;</li>
<li>1: Enable acceleration.</li>
                     */
                    int64_t m_accelerateType;
                    bool m_accelerateTypeHasBeenSet;

                    /**
                     * Layer 4 proxy mode. Valid values: <li>instance: instance mode.</li>Use default value instance if not specified.
                     */
                    std::string m_proxyType;
                    bool m_proxyTypeHasBeenSet;

                    /**
                     * Session persistence duration. Value range: 30-3600. Unit: second.
If this field is not specified, the default value '600' will be used.
                     */
                    uint64_t m_sessionPersistTime;
                    bool m_sessionPersistTimeHasBeenSet;

                    /**
                     * Ipv6 access configuration.
Not specified means disabling Ipv6 access.
                     */
                    Ipv6 m_ipv6;
                    bool m_ipv6HasBeenSet;

                    /**
                     * Rule details.
If not specified, no rules are created.
                     */
                    std::vector<ApplicationProxyRule> m_applicationProxyRules;
                    bool m_applicationProxyRulesHasBeenSet;

                    /**
                     * Acceleration optimization configuration for the Chinese mainland. Not specified means disabling acceleration optimization for the Chinese mainland.
                     */
                    AccelerateMainland m_accelerateMainland;
                    bool m_accelerateMainlandHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEAPPLICATIONPROXYREQUEST_H_
