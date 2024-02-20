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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYL4PROXYRULESSTATUSREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYL4PROXYRULESSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ModifyL4ProxyRulesStatus request structure.
                */
                class ModifyL4ProxyRulesStatusRequest : public AbstractModel
                {
                public:
                    ModifyL4ProxyRulesStatusRequest();
                    ~ModifyL4ProxyRulesStatusRequest() = default;
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
                     * 获取List of forwarding rule IDs. It supports up to 200 forwarding rules at a time.
                     * @return RuleIds List of forwarding rule IDs. It supports up to 200 forwarding rules at a time.
                     * 
                     */
                    std::vector<std::string> GetRuleIds() const;

                    /**
                     * 设置List of forwarding rule IDs. It supports up to 200 forwarding rules at a time.
                     * @param _ruleIds List of forwarding rule IDs. It supports up to 200 forwarding rules at a time.
                     * 
                     */
                    void SetRuleIds(const std::vector<std::string>& _ruleIds);

                    /**
                     * 判断参数 RuleIds 是否已赋值
                     * @return RuleIds 是否已赋值
                     * 
                     */
                    bool RuleIdsHasBeenSet() const;

                    /**
                     * 获取Status of forwarding rules. Valid values:
<li>online: Enabled;</li>
<li>offline: Disabled.</li>
                     * @return Status Status of forwarding rules. Valid values:
<li>online: Enabled;</li>
<li>offline: Disabled.</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status of forwarding rules. Valid values:
<li>online: Enabled;</li>
<li>offline: Disabled.</li>
                     * @param _status Status of forwarding rules. Valid values:
<li>online: Enabled;</li>
<li>offline: Disabled.</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

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
                     * List of forwarding rule IDs. It supports up to 200 forwarding rules at a time.
                     */
                    std::vector<std::string> m_ruleIds;
                    bool m_ruleIdsHasBeenSet;

                    /**
                     * Status of forwarding rules. Valid values:
<li>online: Enabled;</li>
<li>offline: Disabled.</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYL4PROXYRULESSTATUSREQUEST_H_
