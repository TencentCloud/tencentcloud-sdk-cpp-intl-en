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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATEL4PROXYRULESREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATEL4PROXYRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/L4ProxyRule.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * CreateL4ProxyRules request structure.
                */
                class CreateL4ProxyRulesRequest : public AbstractModel
                {
                public:
                    CreateL4ProxyRulesRequest();
                    ~CreateL4ProxyRulesRequest() = default;
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
                     * 获取Layer 4 proxy instance ID.
                     * @return ProxyId Layer 4 proxy instance ID.
                     * 
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置Layer 4 proxy instance ID.
                     * @param _proxyId Layer 4 proxy instance ID.
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
                     * 获取List of forwarding rules. A single request supports up to 200 forwarding rules.
Note: When L4ProxyRule is used here, Protocol, PortRange, OriginType, OriginValue, and OriginPortRange are required fields; ClientIPPassThroughMode, SessionPersist, SessionPersistTime, and RuleTag are optional fields; do not fill in RuleId and Status.
                     * @return L4ProxyRules List of forwarding rules. A single request supports up to 200 forwarding rules.
Note: When L4ProxyRule is used here, Protocol, PortRange, OriginType, OriginValue, and OriginPortRange are required fields; ClientIPPassThroughMode, SessionPersist, SessionPersistTime, and RuleTag are optional fields; do not fill in RuleId and Status.
                     * 
                     */
                    std::vector<L4ProxyRule> GetL4ProxyRules() const;

                    /**
                     * 设置List of forwarding rules. A single request supports up to 200 forwarding rules.
Note: When L4ProxyRule is used here, Protocol, PortRange, OriginType, OriginValue, and OriginPortRange are required fields; ClientIPPassThroughMode, SessionPersist, SessionPersistTime, and RuleTag are optional fields; do not fill in RuleId and Status.
                     * @param _l4ProxyRules List of forwarding rules. A single request supports up to 200 forwarding rules.
Note: When L4ProxyRule is used here, Protocol, PortRange, OriginType, OriginValue, and OriginPortRange are required fields; ClientIPPassThroughMode, SessionPersist, SessionPersistTime, and RuleTag are optional fields; do not fill in RuleId and Status.
                     * 
                     */
                    void SetL4ProxyRules(const std::vector<L4ProxyRule>& _l4ProxyRules);

                    /**
                     * 判断参数 L4ProxyRules 是否已赋值
                     * @return L4ProxyRules 是否已赋值
                     * 
                     */
                    bool L4ProxyRulesHasBeenSet() const;

                private:

                    /**
                     * Zone ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Layer 4 proxy instance ID.
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * List of forwarding rules. A single request supports up to 200 forwarding rules.
Note: When L4ProxyRule is used here, Protocol, PortRange, OriginType, OriginValue, and OriginPortRange are required fields; ClientIPPassThroughMode, SessionPersist, SessionPersistTime, and RuleTag are optional fields; do not fill in RuleId and Status.
                     */
                    std::vector<L4ProxyRule> m_l4ProxyRules;
                    bool m_l4ProxyRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEL4PROXYRULESREQUEST_H_
