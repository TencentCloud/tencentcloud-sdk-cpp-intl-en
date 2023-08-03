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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_APPLICATIONPROXY_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_APPLICATIONPROXY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Application proxy instance
                */
                class ApplicationProxy : public AbstractModel
                {
                public:
                    ApplicationProxy();
                    ~ApplicationProxy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The site ID.
                     * @return ZoneId The site ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置The site ID.
                     * @param _zoneId The site ID.
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
                     * 获取The site name.
                     * @return ZoneName The site name.
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置The site name.
                     * @param _zoneName The site name.
                     * 
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     * 
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取The proxy ID.
                     * @return ProxyId The proxy ID.
                     * 
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置The proxy ID.
                     * @param _proxyId The proxy ID.
                     * 
                     */
                    void SetProxyId(const std::string& _proxyId);

                    /**
                     * 判断参数 ProxyId 是否已赋值
                     * @return ProxyId 是否已赋值
                     * 
                     */
                    bool ProxyIdHasBeenSet() const;

                    /**
                     * 获取The domain name or subdomain name when `ProxyType=hostname`.
The instance name when `ProxyType=instance`.
                     * @return ProxyName The domain name or subdomain name when `ProxyType=hostname`.
The instance name when `ProxyType=instance`.
                     * 
                     */
                    std::string GetProxyName() const;

                    /**
                     * 设置The domain name or subdomain name when `ProxyType=hostname`.
The instance name when `ProxyType=instance`.
                     * @param _proxyName The domain name or subdomain name when `ProxyType=hostname`.
The instance name when `ProxyType=instance`.
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
                     * 获取The proxy type. Values:
<li>`hostname`: The proxy is created by subdomain name.</li>
<li>`instance`: The proxy is created by instance.</li>
                     * @return ProxyType The proxy type. Values:
<li>`hostname`: The proxy is created by subdomain name.</li>
<li>`instance`: The proxy is created by instance.</li>
                     * 
                     */
                    std::string GetProxyType() const;

                    /**
                     * 设置The proxy type. Values:
<li>`hostname`: The proxy is created by subdomain name.</li>
<li>`instance`: The proxy is created by instance.</li>
                     * @param _proxyType The proxy type. Values:
<li>`hostname`: The proxy is created by subdomain name.</li>
<li>`instance`: The proxy is created by instance.</li>
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
                     * 获取Acceleration region. Values:
<li>`mainland`: Chinese mainland.</li>
<li>`overseas`: Global (outside the Chinese mainland);</li>
Default value: overseas.
                     * @return Area Acceleration region. Values:
<li>`mainland`: Chinese mainland.</li>
<li>`overseas`: Global (outside the Chinese mainland);</li>
Default value: overseas.
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Acceleration region. Values:
<li>`mainland`: Chinese mainland.</li>
<li>`overseas`: Global (outside the Chinese mainland);</li>
Default value: overseas.
                     * @param _area Acceleration region. Values:
<li>`mainland`: Chinese mainland.</li>
<li>`overseas`: Global (outside the Chinese mainland);</li>
Default value: overseas.
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

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
                     * 获取The session persistence duration.
                     * @return SessionPersistTime The session persistence duration.
                     * 
                     */
                    uint64_t GetSessionPersistTime() const;

                    /**
                     * 设置The session persistence duration.
                     * @param _sessionPersistTime The session persistence duration.
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
                     * 获取The rule status. Values:
<li>`online`: Enabled</li>
<li>`offline`: Disabled</li>
<li>`progress`: Deploying</li>
<li>`stopping`: Disabling</li>
<li>`fail`: Failed to deploy or disable</li>
                     * @return Status The rule status. Values:
<li>`online`: Enabled</li>
<li>`offline`: Disabled</li>
<li>`progress`: Deploying</li>
<li>`stopping`: Disabling</li>
<li>`fail`: Failed to deploy or disable</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置The rule status. Values:
<li>`online`: Enabled</li>
<li>`offline`: Disabled</li>
<li>`progress`: Deploying</li>
<li>`stopping`: Disabling</li>
<li>`fail`: Failed to deploy or disable</li>
                     * @param _status The rule status. Values:
<li>`online`: Enabled</li>
<li>`offline`: Disabled</li>
<li>`progress`: Deploying</li>
<li>`stopping`: Disabling</li>
<li>`fail`: Failed to deploy or disable</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取The blocking status of the proxy. Values:
<li>`banned`: Blocked</li>
<li>`banning`: Blocking</li>
<li>`recover`: Unblocked</li>
<li>`recovering`: Unblocking</li>
                     * @return BanStatus The blocking status of the proxy. Values:
<li>`banned`: Blocked</li>
<li>`banning`: Blocking</li>
<li>`recover`: Unblocked</li>
<li>`recovering`: Unblocking</li>
                     * 
                     */
                    std::string GetBanStatus() const;

                    /**
                     * 设置The blocking status of the proxy. Values:
<li>`banned`: Blocked</li>
<li>`banning`: Blocking</li>
<li>`recover`: Unblocked</li>
<li>`recovering`: Unblocking</li>
                     * @param _banStatus The blocking status of the proxy. Values:
<li>`banned`: Blocked</li>
<li>`banning`: Blocking</li>
<li>`recover`: Unblocked</li>
<li>`recovering`: Unblocking</li>
                     * 
                     */
                    void SetBanStatus(const std::string& _banStatus);

                    /**
                     * 判断参数 BanStatus 是否已赋值
                     * @return BanStatus 是否已赋值
                     * 
                     */
                    bool BanStatusHasBeenSet() const;

                    /**
                     * 获取Scheduling information.
                     * @return ScheduleValue Scheduling information.
                     * 
                     */
                    std::vector<std::string> GetScheduleValue() const;

                    /**
                     * 设置Scheduling information.
                     * @param _scheduleValue Scheduling information.
                     * 
                     */
                    void SetScheduleValue(const std::vector<std::string>& _scheduleValue);

                    /**
                     * 判断参数 ScheduleValue 是否已赋值
                     * @return ScheduleValue 是否已赋值
                     * 
                     */
                    bool ScheduleValueHasBeenSet() const;

                    /**
                     * 获取When `ProxyType=hostname`:
This field indicates the unique ID of the subdomain name.
                     * @return HostId When `ProxyType=hostname`:
This field indicates the unique ID of the subdomain name.
                     * 
                     */
                    std::string GetHostId() const;

                    /**
                     * 设置When `ProxyType=hostname`:
This field indicates the unique ID of the subdomain name.
                     * @param _hostId When `ProxyType=hostname`:
This field indicates the unique ID of the subdomain name.
                     * 
                     */
                    void SetHostId(const std::string& _hostId);

                    /**
                     * 判断参数 HostId 是否已赋值
                     * @return HostId 是否已赋值
                     * 
                     */
                    bool HostIdHasBeenSet() const;

                    /**
                     * 获取The IPv6 access configuration.
                     * @return Ipv6 The IPv6 access configuration.
                     * 
                     */
                    Ipv6 GetIpv6() const;

                    /**
                     * 设置The IPv6 access configuration.
                     * @param _ipv6 The IPv6 access configuration.
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
                     * 获取The update time.
                     * @return UpdateTime The update time.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置The update time.
                     * @param _updateTime The update time.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取List of rules.
                     * @return ApplicationProxyRules List of rules.
                     * 
                     */
                    std::vector<ApplicationProxyRule> GetApplicationProxyRules() const;

                    /**
                     * 设置List of rules.
                     * @param _applicationProxyRules List of rules.
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
                     * 获取Cross-MLC-border acceleration.
                     * @return AccelerateMainland Cross-MLC-border acceleration.
                     * 
                     */
                    AccelerateMainland GetAccelerateMainland() const;

                    /**
                     * 设置Cross-MLC-border acceleration.
                     * @param _accelerateMainland Cross-MLC-border acceleration.
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
                     * The site ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * The site name.
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * The proxy ID.
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * The domain name or subdomain name when `ProxyType=hostname`.
The instance name when `ProxyType=instance`.
                     */
                    std::string m_proxyName;
                    bool m_proxyNameHasBeenSet;

                    /**
                     * The proxy type. Values:
<li>`hostname`: The proxy is created by subdomain name.</li>
<li>`instance`: The proxy is created by instance.</li>
                     */
                    std::string m_proxyType;
                    bool m_proxyTypeHasBeenSet;

                    /**
                     * The scheduling mode. Values:
<li>`ip`: Schedule via Anycast IP.</li>
<li>`domain`: Schedule via CNAME.</li>
                     */
                    std::string m_platType;
                    bool m_platTypeHasBeenSet;

                    /**
                     * Acceleration region. Values:
<li>`mainland`: Chinese mainland.</li>
<li>`overseas`: Global (outside the Chinese mainland);</li>
Default value: overseas.
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

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
                     * The session persistence duration.
                     */
                    uint64_t m_sessionPersistTime;
                    bool m_sessionPersistTimeHasBeenSet;

                    /**
                     * The rule status. Values:
<li>`online`: Enabled</li>
<li>`offline`: Disabled</li>
<li>`progress`: Deploying</li>
<li>`stopping`: Disabling</li>
<li>`fail`: Failed to deploy or disable</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * The blocking status of the proxy. Values:
<li>`banned`: Blocked</li>
<li>`banning`: Blocking</li>
<li>`recover`: Unblocked</li>
<li>`recovering`: Unblocking</li>
                     */
                    std::string m_banStatus;
                    bool m_banStatusHasBeenSet;

                    /**
                     * Scheduling information.
                     */
                    std::vector<std::string> m_scheduleValue;
                    bool m_scheduleValueHasBeenSet;

                    /**
                     * When `ProxyType=hostname`:
This field indicates the unique ID of the subdomain name.
                     */
                    std::string m_hostId;
                    bool m_hostIdHasBeenSet;

                    /**
                     * The IPv6 access configuration.
                     */
                    Ipv6 m_ipv6;
                    bool m_ipv6HasBeenSet;

                    /**
                     * The update time.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * List of rules.
                     */
                    std::vector<ApplicationProxyRule> m_applicationProxyRules;
                    bool m_applicationProxyRulesHasBeenSet;

                    /**
                     * Cross-MLC-border acceleration.
                     */
                    AccelerateMainland m_accelerateMainland;
                    bool m_accelerateMainlandHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_APPLICATIONPROXY_H_
