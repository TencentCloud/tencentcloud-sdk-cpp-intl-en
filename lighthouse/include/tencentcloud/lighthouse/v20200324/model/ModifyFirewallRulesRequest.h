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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MODIFYFIREWALLRULESREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MODIFYFIREWALLRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/FirewallRule.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * ModifyFirewallRules request structure.
                */
                class ModifyFirewallRulesRequest : public AbstractModel
                {
                public:
                    ModifyFirewallRulesRequest();
                    ~ModifyFirewallRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceId Instance ID.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Firewall rule list.
                     * @return FirewallRules Firewall rule list.
                     * 
                     */
                    std::vector<FirewallRule> GetFirewallRules() const;

                    /**
                     * 设置Firewall rule list.
                     * @param _firewallRules Firewall rule list.
                     * 
                     */
                    void SetFirewallRules(const std::vector<FirewallRule>& _firewallRules);

                    /**
                     * 判断参数 FirewallRules 是否已赋值
                     * @return FirewallRules 是否已赋值
                     * 
                     */
                    bool FirewallRulesHasBeenSet() const;

                    /**
                     * 获取Current firewall version number. Every time you update the firewall rule version, it will be automatically increased by 1 to prevent the rule from expiring. If it is left empty, conflicts will not be considered.
                     * @return FirewallVersion Current firewall version number. Every time you update the firewall rule version, it will be automatically increased by 1 to prevent the rule from expiring. If it is left empty, conflicts will not be considered.
                     * 
                     */
                    uint64_t GetFirewallVersion() const;

                    /**
                     * 设置Current firewall version number. Every time you update the firewall rule version, it will be automatically increased by 1 to prevent the rule from expiring. If it is left empty, conflicts will not be considered.
                     * @param _firewallVersion Current firewall version number. Every time you update the firewall rule version, it will be automatically increased by 1 to prevent the rule from expiring. If it is left empty, conflicts will not be considered.
                     * 
                     */
                    void SetFirewallVersion(const uint64_t& _firewallVersion);

                    /**
                     * 判断参数 FirewallVersion 是否已赋值
                     * @return FirewallVersion 是否已赋值
                     * 
                     */
                    bool FirewallVersionHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Firewall rule list.
                     */
                    std::vector<FirewallRule> m_firewallRules;
                    bool m_firewallRulesHasBeenSet;

                    /**
                     * Current firewall version number. Every time you update the firewall rule version, it will be automatically increased by 1 to prevent the rule from expiring. If it is left empty, conflicts will not be considered.
                     */
                    uint64_t m_firewallVersion;
                    bool m_firewallVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MODIFYFIREWALLRULESREQUEST_H_
