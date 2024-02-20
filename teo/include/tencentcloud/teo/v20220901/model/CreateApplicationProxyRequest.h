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
                     * 获取Site ID.
                     * @return ZoneId Site ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Site ID.
                     * @param _zoneId Site ID.
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
                     * 获取Domain name or subdomain name when `ProxyType=hostname`; 
Instance name when `ProxyType=instance`.
                     * @return ProxyName Domain name or subdomain name when `ProxyType=hostname`; 
Instance name when `ProxyType=instance`.
                     * 
                     */
                    std::string GetProxyName() const;

                    /**
                     * 设置Domain name or subdomain name when `ProxyType=hostname`; 
Instance name when `ProxyType=instance`.
                     * @param _proxyName Domain name or subdomain name when `ProxyType=hostname`; 
Instance name when `ProxyType=instance`.
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
                     * 获取The scheduling mode. Values:
<li>`ip`: Schedule via Anycast IP.</li>
<li>`domain`: Schedule via CNAME.</li>
                     * @return PlatType The scheduling mode. Values:
<li>`ip`: Schedule via Anycast IP.</li>
<li>`domain`: Schedule via CNAME.</li>
                     * 
                     */
                    std::string GetPlatType() const;

                    /**
                     * 设置The scheduling mode. Values:
<li>`ip`: Schedule via Anycast IP.</li>
<li>`domain`: Schedule via CNAME.</li>
                     * @param _platType The scheduling mode. Values:
<li>`ip`: Schedule via Anycast IP.</li>
<li>`domain`: Schedule via CNAME.</li>
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
                     * 获取Whether to enable security protection. Values:
<li>`0`: Disable security protection.</li>
<li>`1`: Enable security protection.</li>
                     * @return SecurityType Whether to enable security protection. Values:
<li>`0`: Disable security protection.</li>
<li>`1`: Enable security protection.</li>
                     * 
                     */
                    int64_t GetSecurityType() const;

                    /**
                     * 设置Whether to enable security protection. Values:
<li>`0`: Disable security protection.</li>
<li>`1`: Enable security protection.</li>
                     * @param _securityType Whether to enable security protection. Values:
<li>`0`: Disable security protection.</li>
<li>`1`: Enable security protection.</li>
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
                     * 获取Whether to enable acceleration. Values:
<li>`0`: Disable acceleration.</li>
<li>`1`: Enable acceleration.</li>
                     * @return AccelerateType Whether to enable acceleration. Values:
<li>`0`: Disable acceleration.</li>
<li>`1`: Enable acceleration.</li>
                     * 
                     */
                    int64_t GetAccelerateType() const;

                    /**
                     * 设置Whether to enable acceleration. Values:
<li>`0`: Disable acceleration.</li>
<li>`1`: Enable acceleration.</li>
                     * @param _accelerateType Whether to enable acceleration. Values:
<li>`0`: Disable acceleration.</li>
<li>`1`: Enable acceleration.</li>
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
                     * 获取Layer 4 proxy mode, with value: <li>instance: instance mode.</li>If not specified, the default value instance will be used.
                     * @return ProxyType Layer 4 proxy mode, with value: <li>instance: instance mode.</li>If not specified, the default value instance will be used.
                     * 
                     */
                    std::string GetProxyType() const;

                    /**
                     * 设置Layer 4 proxy mode, with value: <li>instance: instance mode.</li>If not specified, the default value instance will be used.
                     * @param _proxyType Layer 4 proxy mode, with value: <li>instance: instance mode.</li>If not specified, the default value instance will be used.
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
                     * 获取The session persistence duration. Value range: 30-3600 (in seconds).
If not specified, this field uses the default value 600.
                     * @return SessionPersistTime The session persistence duration. Value range: 30-3600 (in seconds).
If not specified, this field uses the default value 600.
                     * 
                     */
                    uint64_t GetSessionPersistTime() const;

                    /**
                     * 设置The session persistence duration. Value range: 30-3600 (in seconds).
If not specified, this field uses the default value 600.
                     * @param _sessionPersistTime The session persistence duration. Value range: 30-3600 (in seconds).
If not specified, this field uses the default value 600.
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
IPv6 access is disabled if it is not specified.
                     * @return Ipv6 Ipv6 access configuration. 
IPv6 access is disabled if it is not specified.
                     * 
                     */
                    Ipv6 GetIpv6() const;

                    /**
                     * 设置Ipv6 access configuration. 
IPv6 access is disabled if it is not specified.
                     * @param _ipv6 Ipv6 access configuration. 
IPv6 access is disabled if it is not specified.
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
                     * 获取The rule details.
If this field is not specified, an application proxy rule will not be created.
                     * @return ApplicationProxyRules The rule details.
If this field is not specified, an application proxy rule will not be created.
                     * 
                     */
                    std::vector<ApplicationProxyRule> GetApplicationProxyRules() const;

                    /**
                     * 设置The rule details.
If this field is not specified, an application proxy rule will not be created.
                     * @param _applicationProxyRules The rule details.
If this field is not specified, an application proxy rule will not be created.
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
                     * 获取Cross-MLC-border acceleration. It is disabled if this parameter is not specified.
                     * @return AccelerateMainland Cross-MLC-border acceleration. It is disabled if this parameter is not specified.
                     * 
                     */
                    AccelerateMainland GetAccelerateMainland() const;

                    /**
                     * 设置Cross-MLC-border acceleration. It is disabled if this parameter is not specified.
                     * @param _accelerateMainland Cross-MLC-border acceleration. It is disabled if this parameter is not specified.
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
                     * Site ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Domain name or subdomain name when `ProxyType=hostname`; 
Instance name when `ProxyType=instance`.
                     */
                    std::string m_proxyName;
                    bool m_proxyNameHasBeenSet;

                    /**
                     * The scheduling mode. Values:
<li>`ip`: Schedule via Anycast IP.</li>
<li>`domain`: Schedule via CNAME.</li>
                     */
                    std::string m_platType;
                    bool m_platTypeHasBeenSet;

                    /**
                     * Whether to enable security protection. Values:
<li>`0`: Disable security protection.</li>
<li>`1`: Enable security protection.</li>
                     */
                    int64_t m_securityType;
                    bool m_securityTypeHasBeenSet;

                    /**
                     * Whether to enable acceleration. Values:
<li>`0`: Disable acceleration.</li>
<li>`1`: Enable acceleration.</li>
                     */
                    int64_t m_accelerateType;
                    bool m_accelerateTypeHasBeenSet;

                    /**
                     * Layer 4 proxy mode, with value: <li>instance: instance mode.</li>If not specified, the default value instance will be used.
                     */
                    std::string m_proxyType;
                    bool m_proxyTypeHasBeenSet;

                    /**
                     * The session persistence duration. Value range: 30-3600 (in seconds).
If not specified, this field uses the default value 600.
                     */
                    uint64_t m_sessionPersistTime;
                    bool m_sessionPersistTimeHasBeenSet;

                    /**
                     * Ipv6 access configuration. 
IPv6 access is disabled if it is not specified.
                     */
                    Ipv6 m_ipv6;
                    bool m_ipv6HasBeenSet;

                    /**
                     * The rule details.
If this field is not specified, an application proxy rule will not be created.
                     */
                    std::vector<ApplicationProxyRule> m_applicationProxyRules;
                    bool m_applicationProxyRulesHasBeenSet;

                    /**
                     * Cross-MLC-border acceleration. It is disabled if this parameter is not specified.
                     */
                    AccelerateMainland m_accelerateMainland;
                    bool m_accelerateMainlandHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEAPPLICATIONPROXYREQUEST_H_
