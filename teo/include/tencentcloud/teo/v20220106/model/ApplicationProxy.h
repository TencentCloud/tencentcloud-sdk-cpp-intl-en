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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_APPLICATIONPROXY_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_APPLICATIONPROXY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/ApplicationProxyRule.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
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
                     * 获取ID of the proxy
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return ProxyId ID of the proxy
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置ID of the proxy
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _proxyId ID of the proxy
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Name of the proxy:
Domain name or subdomain name when `ProxyType=hostname`
Instance name when `ProxyType=instance`
                     * @return ProxyName Name of the proxy:
Domain name or subdomain name when `ProxyType=hostname`
Instance name when `ProxyType=instance`
                     * 
                     */
                    std::string GetProxyName() const;

                    /**
                     * 设置Name of the proxy:
Domain name or subdomain name when `ProxyType=hostname`
Instance name when `ProxyType=instance`
                     * @param _proxyName Name of the proxy:
Domain name or subdomain name when `ProxyType=hostname`
Instance name when `ProxyType=instance`
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
                     * 获取Scheduling mode:
`ip`: Anycast IP
`domain`: CNAME
                     * @return PlatType Scheduling mode:
`ip`: Anycast IP
`domain`: CNAME
                     * 
                     */
                    std::string GetPlatType() const;

                    /**
                     * 设置Scheduling mode:
`ip`: Anycast IP
`domain`: CNAME
                     * @param _platType Scheduling mode:
`ip`: Anycast IP
`domain`: CNAME
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
                     * 获取`0`: Disable security protection; `1`: Enable security protection.
                     * @return SecurityType `0`: Disable security protection; `1`: Enable security protection.
                     * 
                     */
                    int64_t GetSecurityType() const;

                    /**
                     * 设置`0`: Disable security protection; `1`: Enable security protection.
                     * @param _securityType `0`: Disable security protection; `1`: Enable security protection.
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
                     * 获取`0`: Disable acceleration; `1`: Enable acceleration.
                     * @return AccelerateType `0`: Disable acceleration; `1`: Enable acceleration.
                     * 
                     */
                    int64_t GetAccelerateType() const;

                    /**
                     * 设置`0`: Disable acceleration; `1`: Enable acceleration.
                     * @param _accelerateType `0`: Disable acceleration; `1`: Enable acceleration.
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
                     * 获取This field is moved to `Rule.ForwardClientIp`.
                     * @return ForwardClientIp This field is moved to `Rule.ForwardClientIp`.
                     * 
                     */
                    std::string GetForwardClientIp() const;

                    /**
                     * 设置This field is moved to `Rule.ForwardClientIp`.
                     * @param _forwardClientIp This field is moved to `Rule.ForwardClientIp`.
                     * 
                     */
                    void SetForwardClientIp(const std::string& _forwardClientIp);

                    /**
                     * 判断参数 ForwardClientIp 是否已赋值
                     * @return ForwardClientIp 是否已赋值
                     * 
                     */
                    bool ForwardClientIpHasBeenSet() const;

                    /**
                     * 获取This field is moved to `Rule.SessionPersist`.
                     * @return SessionPersist This field is moved to `Rule.SessionPersist`.
                     * 
                     */
                    bool GetSessionPersist() const;

                    /**
                     * 设置This field is moved to `Rule.SessionPersist`.
                     * @param _sessionPersist This field is moved to `Rule.SessionPersist`.
                     * 
                     */
                    void SetSessionPersist(const bool& _sessionPersist);

                    /**
                     * 判断参数 SessionPersist 是否已赋值
                     * @return SessionPersist 是否已赋值
                     * 
                     */
                    bool SessionPersistHasBeenSet() const;

                    /**
                     * 获取Rule list
                     * @return Rule Rule list
                     * 
                     */
                    std::vector<ApplicationProxyRule> GetRule() const;

                    /**
                     * 设置Rule list
                     * @param _rule Rule list
                     * 
                     */
                    void SetRule(const std::vector<ApplicationProxyRule>& _rule);

                    /**
                     * 判断参数 Rule 是否已赋值
                     * @return Rule 是否已赋值
                     * 
                     */
                    bool RuleHasBeenSet() const;

                    /**
                     * 获取Status:
`online`: Enable
`offline`: Disable
`progress`: Deploying
`stopping`: Disabling
`fail`: Deployment/Disabling failed
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Status Status:
`online`: Enable
`offline`: Disable
`progress`: Deploying
`stopping`: Disabling
`fail`: Deployment/Disabling failed
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status:
`online`: Enable
`offline`: Disable
`progress`: Deploying
`stopping`: Disabling
`fail`: Deployment/Disabling failed
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _status Status:
`online`: Enable
`offline`: Disable
`progress`: Deploying
`stopping`: Disabling
`fail`: Deployment/Disabling failed
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Scheduling information
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return ScheduleValue Scheduling information
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetScheduleValue() const;

                    /**
                     * 设置Scheduling information
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _scheduleValue Scheduling information
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Update time
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return UpdateTime Update time
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _updateTime Update time
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Site ID
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return ZoneId Site ID
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Site ID
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _zoneId Site ID
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Site name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return ZoneName Site name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置Site name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _zoneName Site name
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Session persistence duration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return SessionPersistTime Session persistence duration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetSessionPersistTime() const;

                    /**
                     * 设置Session persistence duration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _sessionPersistTime Session persistence duration
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Specifies how a layer-4 proxy is created.
`hostname`: Create by subdomain name
`instance`: Create by instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProxyType Specifies how a layer-4 proxy is created.
`hostname`: Create by subdomain name
`instance`: Create by instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProxyType() const;

                    /**
                     * 设置Specifies how a layer-4 proxy is created.
`hostname`: Create by subdomain name
`instance`: Create by instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _proxyType Specifies how a layer-4 proxy is created.
`hostname`: Create by subdomain name
`instance`: Create by instance
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取When `ProxyType=hostname`:
`ProxyName` indicates a specified domain name;
`HostId` indicates a unique ID of the domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HostId When `ProxyType=hostname`:
`ProxyName` indicates a specified domain name;
`HostId` indicates a unique ID of the domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHostId() const;

                    /**
                     * 设置When `ProxyType=hostname`:
`ProxyName` indicates a specified domain name;
`HostId` indicates a unique ID of the domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hostId When `ProxyType=hostname`:
`ProxyName` indicates a specified domain name;
`HostId` indicates a unique ID of the domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHostId(const std::string& _hostId);

                    /**
                     * 判断参数 HostId 是否已赋值
                     * @return HostId 是否已赋值
                     * 
                     */
                    bool HostIdHasBeenSet() const;

                private:

                    /**
                     * ID of the proxy
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * Name of the proxy:
Domain name or subdomain name when `ProxyType=hostname`
Instance name when `ProxyType=instance`
                     */
                    std::string m_proxyName;
                    bool m_proxyNameHasBeenSet;

                    /**
                     * Scheduling mode:
`ip`: Anycast IP
`domain`: CNAME
                     */
                    std::string m_platType;
                    bool m_platTypeHasBeenSet;

                    /**
                     * `0`: Disable security protection; `1`: Enable security protection.
                     */
                    int64_t m_securityType;
                    bool m_securityTypeHasBeenSet;

                    /**
                     * `0`: Disable acceleration; `1`: Enable acceleration.
                     */
                    int64_t m_accelerateType;
                    bool m_accelerateTypeHasBeenSet;

                    /**
                     * This field is moved to `Rule.ForwardClientIp`.
                     */
                    std::string m_forwardClientIp;
                    bool m_forwardClientIpHasBeenSet;

                    /**
                     * This field is moved to `Rule.SessionPersist`.
                     */
                    bool m_sessionPersist;
                    bool m_sessionPersistHasBeenSet;

                    /**
                     * Rule list
                     */
                    std::vector<ApplicationProxyRule> m_rule;
                    bool m_ruleHasBeenSet;

                    /**
                     * Status:
`online`: Enable
`offline`: Disable
`progress`: Deploying
`stopping`: Disabling
`fail`: Deployment/Disabling failed
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Scheduling information
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_scheduleValue;
                    bool m_scheduleValueHasBeenSet;

                    /**
                     * Update time
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Site ID
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Site name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * Session persistence duration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    uint64_t m_sessionPersistTime;
                    bool m_sessionPersistTimeHasBeenSet;

                    /**
                     * Specifies how a layer-4 proxy is created.
`hostname`: Create by subdomain name
`instance`: Create by instance
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_proxyType;
                    bool m_proxyTypeHasBeenSet;

                    /**
                     * When `ProxyType=hostname`:
`ProxyName` indicates a specified domain name;
`HostId` indicates a unique ID of the domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_hostId;
                    bool m_hostIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_APPLICATIONPROXY_H_
