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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_CREATEAPPLICATIONPROXYREQUEST_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_CREATEAPPLICATIONPROXYREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateApplicationProxy request structure.
                */
                class CreateApplicationProxyRequest : public AbstractModel
                {
                public:
                    CreateApplicationProxyRequest();
                    ~CreateApplicationProxyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Site ID
                     * @return ZoneId Site ID
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Site ID
                     * @param ZoneId Site ID
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Site name
                     * @return ZoneName Site name
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置Site name
                     * @param ZoneName Site name
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取Layer-4 proxy name
                     * @return ProxyName Layer-4 proxy name
                     */
                    std::string GetProxyName() const;

                    /**
                     * 设置Layer-4 proxy name
                     * @param ProxyName Layer-4 proxy name
                     */
                    void SetProxyName(const std::string& _proxyName);

                    /**
                     * 判断参数 ProxyName 是否已赋值
                     * @return ProxyName 是否已赋值
                     */
                    bool ProxyNameHasBeenSet() const;

                    /**
                     * 获取Scheduling mode. Values:
`ip`: Anycast IP
`domain`: CNAME
                     * @return PlatType Scheduling mode. Values:
`ip`: Anycast IP
`domain`: CNAME
                     */
                    std::string GetPlatType() const;

                    /**
                     * 设置Scheduling mode. Values:
`ip`: Anycast IP
`domain`: CNAME
                     * @param PlatType Scheduling mode. Values:
`ip`: Anycast IP
`domain`: CNAME
                     */
                    void SetPlatType(const std::string& _platType);

                    /**
                     * 判断参数 PlatType 是否已赋值
                     * @return PlatType 是否已赋值
                     */
                    bool PlatTypeHasBeenSet() const;

                    /**
                     * 获取`0`: Disable security protection; `1`: Enable security protection.
                     * @return SecurityType `0`: Disable security protection; `1`: Enable security protection.
                     */
                    int64_t GetSecurityType() const;

                    /**
                     * 设置`0`: Disable security protection; `1`: Enable security protection.
                     * @param SecurityType `0`: Disable security protection; `1`: Enable security protection.
                     */
                    void SetSecurityType(const int64_t& _securityType);

                    /**
                     * 判断参数 SecurityType 是否已赋值
                     * @return SecurityType 是否已赋值
                     */
                    bool SecurityTypeHasBeenSet() const;

                    /**
                     * 获取`0`: Disable acceleration; `1`: Enable acceleration.
                     * @return AccelerateType `0`: Disable acceleration; `1`: Enable acceleration.
                     */
                    int64_t GetAccelerateType() const;

                    /**
                     * 设置`0`: Disable acceleration; `1`: Enable acceleration.
                     * @param AccelerateType `0`: Disable acceleration; `1`: Enable acceleration.
                     */
                    void SetAccelerateType(const int64_t& _accelerateType);

                    /**
                     * 判断参数 AccelerateType 是否已赋值
                     * @return AccelerateType 是否已赋值
                     */
                    bool AccelerateTypeHasBeenSet() const;

                    /**
                     * 获取This field is moved to `Rule.ForwardClientIp`.
                     * @return ForwardClientIp This field is moved to `Rule.ForwardClientIp`.
                     */
                    std::string GetForwardClientIp() const;

                    /**
                     * 设置This field is moved to `Rule.ForwardClientIp`.
                     * @param ForwardClientIp This field is moved to `Rule.ForwardClientIp`.
                     */
                    void SetForwardClientIp(const std::string& _forwardClientIp);

                    /**
                     * 判断参数 ForwardClientIp 是否已赋值
                     * @return ForwardClientIp 是否已赋值
                     */
                    bool ForwardClientIpHasBeenSet() const;

                    /**
                     * 获取This field is moved to `Rule.SessionPersist`.
                     * @return SessionPersist This field is moved to `Rule.SessionPersist`.
                     */
                    bool GetSessionPersist() const;

                    /**
                     * 设置This field is moved to `Rule.SessionPersist`.
                     * @param SessionPersist This field is moved to `Rule.SessionPersist`.
                     */
                    void SetSessionPersist(const bool& _sessionPersist);

                    /**
                     * 判断参数 SessionPersist 是否已赋值
                     * @return SessionPersist 是否已赋值
                     */
                    bool SessionPersistHasBeenSet() const;

                    /**
                     * 获取Rule details
                     * @return Rule Rule details
                     */
                    std::vector<ApplicationProxyRule> GetRule() const;

                    /**
                     * 设置Rule details
                     * @param Rule Rule details
                     */
                    void SetRule(const std::vector<ApplicationProxyRule>& _rule);

                    /**
                     * 判断参数 Rule 是否已赋值
                     * @return Rule 是否已赋值
                     */
                    bool RuleHasBeenSet() const;

                    /**
                     * 获取Session persistence duration. Value range: 30-3600 (in seconds).
                     * @return SessionPersistTime Session persistence duration. Value range: 30-3600 (in seconds).
                     */
                    uint64_t GetSessionPersistTime() const;

                    /**
                     * 设置Session persistence duration. Value range: 30-3600 (in seconds).
                     * @param SessionPersistTime Session persistence duration. Value range: 30-3600 (in seconds).
                     */
                    void SetSessionPersistTime(const uint64_t& _sessionPersistTime);

                    /**
                     * 判断参数 SessionPersistTime 是否已赋值
                     * @return SessionPersistTime 是否已赋值
                     */
                    bool SessionPersistTimeHasBeenSet() const;

                    /**
                     * 获取Specifies how a layer-4 proxy is created.
`hostname`: Subdomain name
`instance`: Instance
                     * @return ProxyType Specifies how a layer-4 proxy is created.
`hostname`: Subdomain name
`instance`: Instance
                     */
                    std::string GetProxyType() const;

                    /**
                     * 设置Specifies how a layer-4 proxy is created.
`hostname`: Subdomain name
`instance`: Instance
                     * @param ProxyType Specifies how a layer-4 proxy is created.
`hostname`: Subdomain name
`instance`: Instance
                     */
                    void SetProxyType(const std::string& _proxyType);

                    /**
                     * 判断参数 ProxyType 是否已赋值
                     * @return ProxyType 是否已赋值
                     */
                    bool ProxyTypeHasBeenSet() const;

                private:

                    /**
                     * Site ID
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Site name
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * Layer-4 proxy name
                     */
                    std::string m_proxyName;
                    bool m_proxyNameHasBeenSet;

                    /**
                     * Scheduling mode. Values:
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
                     * Rule details
                     */
                    std::vector<ApplicationProxyRule> m_rule;
                    bool m_ruleHasBeenSet;

                    /**
                     * Session persistence duration. Value range: 30-3600 (in seconds).
                     */
                    uint64_t m_sessionPersistTime;
                    bool m_sessionPersistTimeHasBeenSet;

                    /**
                     * Specifies how a layer-4 proxy is created.
`hostname`: Subdomain name
`instance`: Instance
                     */
                    std::string m_proxyType;
                    bool m_proxyTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_CREATEAPPLICATIONPROXYREQUEST_H_
