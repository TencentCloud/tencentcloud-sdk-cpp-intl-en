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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEFIREWALLRULESRESPONSE_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEFIREWALLRULESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/FirewallRuleInfo.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * DescribeFirewallRules response structure.
                */
                class DescribeFirewallRulesResponse : public AbstractModel
                {
                public:
                    DescribeFirewallRulesResponse();
                    ~DescribeFirewallRulesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of eligible firewall rules.
                     * @return TotalCount Number of eligible firewall rules.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Firewall rule details list.
                     * @return FirewallRuleSet Firewall rule details list.
                     * 
                     */
                    std::vector<FirewallRuleInfo> GetFirewallRuleSet() const;

                    /**
                     * 判断参数 FirewallRuleSet 是否已赋值
                     * @return FirewallRuleSet 是否已赋值
                     * 
                     */
                    bool FirewallRuleSetHasBeenSet() const;

                    /**
                     * 获取Firewall version number.
                     * @return FirewallVersion Firewall version number.
                     * 
                     */
                    uint64_t GetFirewallVersion() const;

                    /**
                     * 判断参数 FirewallVersion 是否已赋值
                     * @return FirewallVersion 是否已赋值
                     * 
                     */
                    bool FirewallVersionHasBeenSet() const;

                private:

                    /**
                     * Number of eligible firewall rules.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Firewall rule details list.
                     */
                    std::vector<FirewallRuleInfo> m_firewallRuleSet;
                    bool m_firewallRuleSetHasBeenSet;

                    /**
                     * Firewall version number.
                     */
                    uint64_t m_firewallVersion;
                    bool m_firewallVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEFIREWALLRULESRESPONSE_H_
