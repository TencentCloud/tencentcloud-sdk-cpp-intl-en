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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEAPPLICATIONPROXYDETAILRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEAPPLICATIONPROXYDETAILRESPONSE_H_

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
                * DescribeApplicationProxyDetail response structure.
                */
                class DescribeApplicationProxyDetailResponse : public AbstractModel
                {
                public:
                    DescribeApplicationProxyDetailResponse();
                    ~DescribeApplicationProxyDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return ProxyId Instance ID
                     */
                    std::string GetProxyId() const;

                    /**
                     * 判断参数 ProxyId 是否已赋值
                     * @return ProxyId 是否已赋值
                     */
                    bool ProxyIdHasBeenSet() const;

                    /**
                     * 获取Instance name
                     * @return ProxyName Instance name
                     */
                    std::string GetProxyName() const;

                    /**
                     * 判断参数 ProxyName 是否已赋值
                     * @return ProxyName 是否已赋值
                     */
                    bool ProxyNameHasBeenSet() const;

                    /**
                     * 获取Proxy mode. Valid values:
`ip`: Anycast IP
`domain`: CNAME
                     * @return PlatType Proxy mode. Valid values:
`ip`: Anycast IP
`domain`: CNAME
                     */
                    std::string GetPlatType() const;

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
                     * 判断参数 SessionPersist 是否已赋值
                     * @return SessionPersist 是否已赋值
                     */
                    bool SessionPersistHasBeenSet() const;

                    /**
                     * 获取List of rules
                     * @return Rule List of rules
                     */
                    std::vector<ApplicationProxyRule> GetRule() const;

                    /**
                     * 判断参数 Rule 是否已赋值
                     * @return Rule 是否已赋值
                     */
                    bool RuleHasBeenSet() const;

                    /**
                     * 获取Status. Valid values:
`online`: Enable
`offline`: Disable
`progress`: Deploying
                     * @return Status Status. Valid values:
`online`: Enable
`offline`: Disable
`progress`: Deploying
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Scheduling information
                     * @return ScheduleValue Scheduling information
                     */
                    std::vector<std::string> GetScheduleValue() const;

                    /**
                     * 判断参数 ScheduleValue 是否已赋值
                     * @return ScheduleValue 是否已赋值
                     */
                    bool ScheduleValueHasBeenSet() const;

                    /**
                     * 获取Update time
                     * @return UpdateTime Update time
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Site ID
                     * @return ZoneId Site ID
                     */
                    std::string GetZoneId() const;

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
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取Session persistence time
                     * @return SessionPersistTime Session persistence time
                     */
                    uint64_t GetSessionPersistTime() const;

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
                     * 判断参数 ProxyType 是否已赋值
                     * @return ProxyType 是否已赋值
                     */
                    bool ProxyTypeHasBeenSet() const;

                    /**
                     * 获取ID of the layer-7 domain name
                     * @return HostId ID of the layer-7 domain name
                     */
                    std::string GetHostId() const;

                    /**
                     * 判断参数 HostId 是否已赋值
                     * @return HostId 是否已赋值
                     */
                    bool HostIdHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * Instance name
                     */
                    std::string m_proxyName;
                    bool m_proxyNameHasBeenSet;

                    /**
                     * Proxy mode. Valid values:
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
                     * List of rules
                     */
                    std::vector<ApplicationProxyRule> m_rule;
                    bool m_ruleHasBeenSet;

                    /**
                     * Status. Valid values:
`online`: Enable
`offline`: Disable
`progress`: Deploying
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Scheduling information
                     */
                    std::vector<std::string> m_scheduleValue;
                    bool m_scheduleValueHasBeenSet;

                    /**
                     * Update time
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

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
                     * Session persistence time
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

                    /**
                     * ID of the layer-7 domain name
                     */
                    std::string m_hostId;
                    bool m_hostIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEAPPLICATIONPROXYDETAILRESPONSE_H_
