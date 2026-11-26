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
                     * 获取Site name.
                     * @return ZoneName Site name.
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置Site name.
                     * @param _zoneName Site name.
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
                     * 获取Proxy ID.
                     * @return ProxyId Proxy ID.
                     * 
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置Proxy ID.
                     * @param _proxyId Proxy ID.
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
                     * 获取L4 proxy mode. Valid values:
<li>`hostname`: Create by subdomain name;</li>
<li>`instance`: Create by instance.</li>
                     * @return ProxyType L4 proxy mode. Valid values:
<li>`hostname`: Create by subdomain name;</li>
<li>`instance`: Create by instance.</li>
                     * 
                     */
                    std::string GetProxyType() const;

                    /**
                     * 设置L4 proxy mode. Valid values:
<li>`hostname`: Create by subdomain name;</li>
<li>`instance`: Create by instance.</li>
                     * @param _proxyType L4 proxy mode. Valid values:
<li>`hostname`: Create by subdomain name;</li>
<li>`instance`: Create by instance.</li>
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
                     * 获取Acceleration region. Valid values:
<li>mainland: within the Chinese mainland;</li>
<li>overseas: global (excluding the Chinese mainland).</li>
Default value: overseas
                     * @return Area Acceleration region. Valid values:
<li>mainland: within the Chinese mainland;</li>
<li>overseas: global (excluding the Chinese mainland).</li>
Default value: overseas
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Acceleration region. Valid values:
<li>mainland: within the Chinese mainland;</li>
<li>overseas: global (excluding the Chinese mainland).</li>
Default value: overseas
                     * @param _area Acceleration region. Valid values:
<li>mainland: within the Chinese mainland;</li>
<li>overseas: global (excluding the Chinese mainland).</li>
Default value: overseas
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
                     * 获取Whether security is enabled. Valid values:
<li>0: Disable security;</li>
<li>1: Enable security.</li>
                     * @return SecurityType Whether security is enabled. Valid values:
<li>0: Disable security;</li>
<li>1: Enable security.</li>
                     * 
                     */
                    int64_t GetSecurityType() const;

                    /**
                     * 设置Whether security is enabled. Valid values:
<li>0: Disable security;</li>
<li>1: Enable security.</li>
                     * @param _securityType Whether security is enabled. Valid values:
<li>0: Disable security;</li>
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
                     * 获取Session hold time, in seconds.
                     * @return SessionPersistTime Session hold time, in seconds.
                     * 
                     */
                    uint64_t GetSessionPersistTime() const;

                    /**
                     * 设置Session hold time, in seconds.
                     * @param _sessionPersistTime Session hold time, in seconds.
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
                     * 获取Status. Valid values:
<li>`online`: Enable;</li>
<li>`offline`: Disable;</li>
<li>progress: deploying;</li>
<li>stopping: disabling;</li>
<li>fail: deployment or disabling failed.</li>
                     * @return Status Status. Valid values:
<li>`online`: Enable;</li>
<li>`offline`: Disable;</li>
<li>progress: deploying;</li>
<li>stopping: disabling;</li>
<li>fail: deployment or disabling failed.</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status. Valid values:
<li>`online`: Enable;</li>
<li>`offline`: Disable;</li>
<li>progress: deploying;</li>
<li>stopping: disabling;</li>
<li>fail: deployment or disabling failed.</li>
                     * @param _status Status. Valid values:
<li>`online`: Enable;</li>
<li>`offline`: Disable;</li>
<li>progress: deploying;</li>
<li>stopping: disabling;</li>
<li>fail: deployment or disabling failed.</li>
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
                     * 获取Blocking status. Valid values:
<li>banned: blocked;</li>
<li>banning: Being banned;</li>
<li>recover: unblocked;</li>
<li>`recovering`: The name server is being unblocked.</li>
                     * @return BanStatus Blocking status. Valid values:
<li>banned: blocked;</li>
<li>banning: Being banned;</li>
<li>recover: unblocked;</li>
<li>`recovering`: The name server is being unblocked.</li>
                     * 
                     */
                    std::string GetBanStatus() const;

                    /**
                     * 设置Blocking status. Valid values:
<li>banned: blocked;</li>
<li>banning: Being banned;</li>
<li>recover: unblocked;</li>
<li>`recovering`: The name server is being unblocked.</li>
                     * @param _banStatus Blocking status. Valid values:
<li>banned: blocked;</li>
<li>banning: Being banned;</li>
<li>recover: unblocked;</li>
<li>`recovering`: The name server is being unblocked.</li>
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
                     * 获取When ProxyType=hostname:
Indicates the unique ID of the proxy acceleration.
                     * @return HostId When ProxyType=hostname:
Indicates the unique ID of the proxy acceleration.
                     * 
                     */
                    std::string GetHostId() const;

                    /**
                     * 设置When ProxyType=hostname:
Indicates the unique ID of the proxy acceleration.
                     * @param _hostId When ProxyType=hostname:
Indicates the unique ID of the proxy acceleration.
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
                     * 获取Ipv6 access configuration.
                     * @return Ipv6 Ipv6 access configuration.
                     * 
                     */
                    Ipv6 GetIpv6() const;

                    /**
                     * 设置Ipv6 access configuration.
                     * @param _ipv6 Ipv6 access configuration.
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
                     * 获取Update time.
                     * @return UpdateTime Update time.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time.
                     * @param _updateTime Update time.
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
                     * 获取Rule list.
                     * @return ApplicationProxyRules Rule list.
                     * 
                     */
                    std::vector<ApplicationProxyRule> GetApplicationProxyRules() const;

                    /**
                     * 设置Rule list.
                     * @param _applicationProxyRules Rule list.
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
                     * 获取Acceleration optimization configuration for the Chinese mainland.
                     * @return AccelerateMainland Acceleration optimization configuration for the Chinese mainland.
                     * 
                     */
                    AccelerateMainland GetAccelerateMainland() const;

                    /**
                     * 设置Acceleration optimization configuration for the Chinese mainland.
                     * @param _accelerateMainland Acceleration optimization configuration for the Chinese mainland.
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
                     * Site name.
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * Proxy ID.
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * When ProxyType=hostname, it indicates a domain name or subdomain.
When ProxyType=instance, it indicates the proxy name.
                     */
                    std::string m_proxyName;
                    bool m_proxyNameHasBeenSet;

                    /**
                     * L4 proxy mode. Valid values:
<li>`hostname`: Create by subdomain name;</li>
<li>`instance`: Create by instance.</li>
                     */
                    std::string m_proxyType;
                    bool m_proxyTypeHasBeenSet;

                    /**
                     * Scheduling mode. Valid values:
<li>`ip`: Anycast IP;</li>
<li>`domain`: CNAME.</li>
                     */
                    std::string m_platType;
                    bool m_platTypeHasBeenSet;

                    /**
                     * Acceleration region. Valid values:
<li>mainland: within the Chinese mainland;</li>
<li>overseas: global (excluding the Chinese mainland).</li>
Default value: overseas
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Whether security is enabled. Valid values:
<li>0: Disable security;</li>
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
                     * Session hold time, in seconds.
                     */
                    uint64_t m_sessionPersistTime;
                    bool m_sessionPersistTimeHasBeenSet;

                    /**
                     * Status. Valid values:
<li>`online`: Enable;</li>
<li>`offline`: Disable;</li>
<li>progress: deploying;</li>
<li>stopping: disabling;</li>
<li>fail: deployment or disabling failed.</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Blocking status. Valid values:
<li>banned: blocked;</li>
<li>banning: Being banned;</li>
<li>recover: unblocked;</li>
<li>`recovering`: The name server is being unblocked.</li>
                     */
                    std::string m_banStatus;
                    bool m_banStatusHasBeenSet;

                    /**
                     * Scheduling information.
                     */
                    std::vector<std::string> m_scheduleValue;
                    bool m_scheduleValueHasBeenSet;

                    /**
                     * When ProxyType=hostname:
Indicates the unique ID of the proxy acceleration.
                     */
                    std::string m_hostId;
                    bool m_hostIdHasBeenSet;

                    /**
                     * Ipv6 access configuration.
                     */
                    Ipv6 m_ipv6;
                    bool m_ipv6HasBeenSet;

                    /**
                     * Update time.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Rule list.
                     */
                    std::vector<ApplicationProxyRule> m_applicationProxyRules;
                    bool m_applicationProxyRulesHasBeenSet;

                    /**
                     * Acceleration optimization configuration for the Chinese mainland.
                     */
                    AccelerateMainland m_accelerateMainland;
                    bool m_accelerateMainlandHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_APPLICATIONPROXY_H_
