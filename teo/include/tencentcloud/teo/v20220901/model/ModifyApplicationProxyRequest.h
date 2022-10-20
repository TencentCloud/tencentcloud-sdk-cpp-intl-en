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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYAPPLICATIONPROXYREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYAPPLICATIONPROXYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/Ipv6.h>


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
                     * 获取The site ID.
                     * @return ZoneId The site ID.
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置The site ID.
                     * @param ZoneId The site ID.
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取The proxy ID.
                     * @return ProxyId The proxy ID.
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置The proxy ID.
                     * @param ProxyId The proxy ID.
                     */
                    void SetProxyId(const std::string& _proxyId);

                    /**
                     * 判断参数 ProxyId 是否已赋值
                     * @return ProxyId 是否已赋值
                     */
                    bool ProxyIdHasBeenSet() const;

                    /**
                     * 获取The domain name or subdomain name when `ProxyType=hostname`.
The instance name when `ProxyType=instance`.
                     * @return ProxyName The domain name or subdomain name when `ProxyType=hostname`.
The instance name when `ProxyType=instance`.
                     */
                    std::string GetProxyName() const;

                    /**
                     * 设置The domain name or subdomain name when `ProxyType=hostname`.
The instance name when `ProxyType=instance`.
                     * @param ProxyName The domain name or subdomain name when `ProxyType=hostname`.
The instance name when `ProxyType=instance`.
                     */
                    void SetProxyName(const std::string& _proxyName);

                    /**
                     * 判断参数 ProxyName 是否已赋值
                     * @return ProxyName 是否已赋值
                     */
                    bool ProxyNameHasBeenSet() const;

                    /**
                     * 获取The session persistence duration. Value range: 30-3600 (in seconds).
The original configuration will apply if this field is not specified.
                     * @return SessionPersistTime The session persistence duration. Value range: 30-3600 (in seconds).
The original configuration will apply if this field is not specified.
                     */
                    uint64_t GetSessionPersistTime() const;

                    /**
                     * 设置The session persistence duration. Value range: 30-3600 (in seconds).
The original configuration will apply if this field is not specified.
                     * @param SessionPersistTime The session persistence duration. Value range: 30-3600 (in seconds).
The original configuration will apply if this field is not specified.
                     */
                    void SetSessionPersistTime(const uint64_t& _sessionPersistTime);

                    /**
                     * 判断参数 SessionPersistTime 是否已赋值
                     * @return SessionPersistTime 是否已赋值
                     */
                    bool SessionPersistTimeHasBeenSet() const;

                    /**
                     * 获取The proxy type. Values:
<li>`hostname`: The proxy is created by subdomain name.</li>
<li>`instance`: The proxy is created by instance.</li>If not specified, this field uses the default value `instance`.
                     * @return ProxyType The proxy type. Values:
<li>`hostname`: The proxy is created by subdomain name.</li>
<li>`instance`: The proxy is created by instance.</li>If not specified, this field uses the default value `instance`.
                     */
                    std::string GetProxyType() const;

                    /**
                     * 设置The proxy type. Values:
<li>`hostname`: The proxy is created by subdomain name.</li>
<li>`instance`: The proxy is created by instance.</li>If not specified, this field uses the default value `instance`.
                     * @param ProxyType The proxy type. Values:
<li>`hostname`: The proxy is created by subdomain name.</li>
<li>`instance`: The proxy is created by instance.</li>If not specified, this field uses the default value `instance`.
                     */
                    void SetProxyType(const std::string& _proxyType);

                    /**
                     * 判断参数 ProxyType 是否已赋值
                     * @return ProxyType 是否已赋值
                     */
                    bool ProxyTypeHasBeenSet() const;

                    /**
                     * 获取The IPv6 access configuration. The original configuration will apply if this field is not specified.
                     * @return Ipv6 The IPv6 access configuration. The original configuration will apply if this field is not specified.
                     */
                    Ipv6 GetIpv6() const;

                    /**
                     * 设置The IPv6 access configuration. The original configuration will apply if this field is not specified.
                     * @param Ipv6 The IPv6 access configuration. The original configuration will apply if this field is not specified.
                     */
                    void SetIpv6(const Ipv6& _ipv6);

                    /**
                     * 判断参数 Ipv6 是否已赋值
                     * @return Ipv6 是否已赋值
                     */
                    bool Ipv6HasBeenSet() const;

                private:

                    /**
                     * The site ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

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
                     * The session persistence duration. Value range: 30-3600 (in seconds).
The original configuration will apply if this field is not specified.
                     */
                    uint64_t m_sessionPersistTime;
                    bool m_sessionPersistTimeHasBeenSet;

                    /**
                     * The proxy type. Values:
<li>`hostname`: The proxy is created by subdomain name.</li>
<li>`instance`: The proxy is created by instance.</li>If not specified, this field uses the default value `instance`.
                     */
                    std::string m_proxyType;
                    bool m_proxyTypeHasBeenSet;

                    /**
                     * The IPv6 access configuration. The original configuration will apply if this field is not specified.
                     */
                    Ipv6 m_ipv6;
                    bool m_ipv6HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYAPPLICATIONPROXYREQUEST_H_
