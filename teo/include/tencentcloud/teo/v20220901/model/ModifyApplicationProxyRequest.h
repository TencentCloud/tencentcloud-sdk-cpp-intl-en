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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYAPPLICATIONPROXYREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYAPPLICATIONPROXYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/Ipv6.h>
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
                * ModifyApplicationProxy request structure.
                */
                class ModifyApplicationProxyRequest : public AbstractModel
                {
                public:
                    ModifyApplicationProxyRequest();
                    ~ModifyApplicationProxyRequest() = default;
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
                     * 获取The session persistence duration. Value range: 30-3600 (in seconds).
The original configuration will apply if this field is not specified.
                     * @return SessionPersistTime The session persistence duration. Value range: 30-3600 (in seconds).
The original configuration will apply if this field is not specified.
                     * 
                     */
                    uint64_t GetSessionPersistTime() const;

                    /**
                     * 设置The session persistence duration. Value range: 30-3600 (in seconds).
The original configuration will apply if this field is not specified.
                     * @param _sessionPersistTime The session persistence duration. Value range: 30-3600 (in seconds).
The original configuration will apply if this field is not specified.
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
                     * 获取L4 proxy mode. Valid values: 
<li>instance: Instance mode. </li>If it is not specified, instance is used by default.
                     * @return ProxyType L4 proxy mode. Valid values: 
<li>instance: Instance mode. </li>If it is not specified, instance is used by default.
                     * 
                     */
                    std::string GetProxyType() const;

                    /**
                     * 设置L4 proxy mode. Valid values: 
<li>instance: Instance mode. </li>If it is not specified, instance is used by default.
                     * @param _proxyType L4 proxy mode. Valid values: 
<li>instance: Instance mode. </li>If it is not specified, instance is used by default.
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
                     * 获取IPv6 access configuration. The original configuration will apply if it is not specified.
                     * @return Ipv6 IPv6 access configuration. The original configuration will apply if it is not specified.
                     * 
                     */
                    Ipv6 GetIpv6() const;

                    /**
                     * 设置IPv6 access configuration. The original configuration will apply if it is not specified.
                     * @param _ipv6 IPv6 access configuration. The original configuration will apply if it is not specified.
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
                     * 获取Cross-MLC-border acceleration. The original configuration will apply if it is not specified.
                     * @return AccelerateMainland Cross-MLC-border acceleration. The original configuration will apply if it is not specified.
                     * 
                     */
                    AccelerateMainland GetAccelerateMainland() const;

                    /**
                     * 设置Cross-MLC-border acceleration. The original configuration will apply if it is not specified.
                     * @param _accelerateMainland Cross-MLC-border acceleration. The original configuration will apply if it is not specified.
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
                     * Proxy ID.
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * Domain name or subdomain name when `ProxyType=hostname`; 
Instance name when `ProxyType=instance`.
                     */
                    std::string m_proxyName;
                    bool m_proxyNameHasBeenSet;

                    /**
                     * The session persistence duration. Value range: 30-3600 (in seconds).
The original configuration will apply if this field is not specified.
                     */
                    uint64_t m_sessionPersistTime;
                    bool m_sessionPersistTimeHasBeenSet;

                    /**
                     * L4 proxy mode. Valid values: 
<li>instance: Instance mode. </li>If it is not specified, instance is used by default.
                     */
                    std::string m_proxyType;
                    bool m_proxyTypeHasBeenSet;

                    /**
                     * IPv6 access configuration. The original configuration will apply if it is not specified.
                     */
                    Ipv6 m_ipv6;
                    bool m_ipv6HasBeenSet;

                    /**
                     * Cross-MLC-border acceleration. The original configuration will apply if it is not specified.
                     */
                    AccelerateMainland m_accelerateMainland;
                    bool m_accelerateMainlandHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYAPPLICATIONPROXYREQUEST_H_
