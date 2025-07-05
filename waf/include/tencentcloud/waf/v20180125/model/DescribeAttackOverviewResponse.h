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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEATTACKOVERVIEWRESPONSE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEATTACKOVERVIEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeAttackOverview response structure.
                */
                class DescribeAttackOverviewResponse : public AbstractModel
                {
                public:
                    DescribeAttackOverviewResponse();
                    ~DescribeAttackOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of access requests
                     * @return AccessCount Total number of access requests
                     * 
                     */
                    uint64_t GetAccessCount() const;

                    /**
                     * 判断参数 AccessCount 是否已赋值
                     * @return AccessCount 是否已赋值
                     * 
                     */
                    bool AccessCountHasBeenSet() const;

                    /**
                     * 获取Total web attacks
                     * @return AttackCount Total web attacks
                     * 
                     */
                    uint64_t GetAttackCount() const;

                    /**
                     * 判断参数 AttackCount 是否已赋值
                     * @return AttackCount 是否已赋值
                     * 
                     */
                    bool AttackCountHasBeenSet() const;

                    /**
                     * 获取Total number of access controls
                     * @return ACLCount Total number of access controls
                     * 
                     */
                    uint64_t GetACLCount() const;

                    /**
                     * 判断参数 ACLCount 是否已赋值
                     * @return ACLCount 是否已赋值
                     * 
                     */
                    bool ACLCountHasBeenSet() const;

                    /**
                     * 获取Total CC attacks
                     * @return CCCount Total CC attacks
                     * 
                     */
                    uint64_t GetCCCount() const;

                    /**
                     * 判断参数 CCCount 是否已赋值
                     * @return CCCount 是否已赋值
                     * 
                     */
                    bool CCCountHasBeenSet() const;

                    /**
                     * 获取Total bot attack count
                     * @return BotCount Total bot attack count
                     * 
                     */
                    uint64_t GetBotCount() const;

                    /**
                     * 判断参数 BotCount 是否已赋值
                     * @return BotCount 是否已赋值
                     * 
                     */
                    bool BotCountHasBeenSet() const;

                    /**
                     * 获取Total API assets
                     * @return ApiAssetsCount Total API assets
                     * 
                     */
                    uint64_t GetApiAssetsCount() const;

                    /**
                     * 判断参数 ApiAssetsCount 是否已赋值
                     * @return ApiAssetsCount 是否已赋值
                     * 
                     */
                    bool ApiAssetsCountHasBeenSet() const;

                    /**
                     * 获取Number of API risk events

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApiRiskEventCount Number of API risk events

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetApiRiskEventCount() const;

                    /**
                     * 判断参数 ApiRiskEventCount 是否已赋值
                     * @return ApiRiskEventCount 是否已赋值
                     * 
                     */
                    bool ApiRiskEventCountHasBeenSet() const;

                    /**
                     * 获取Total number of blocklisted IP addresses.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IPBlackCount Total number of blocklisted IP addresses.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetIPBlackCount() const;

                    /**
                     * 判断参数 IPBlackCount 是否已赋值
                     * @return IPBlackCount 是否已赋值
                     * 
                     */
                    bool IPBlackCountHasBeenSet() const;

                    /**
                     * 获取Total number of tamper-proof items

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TamperCount Total number of tamper-proof items

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetTamperCount() const;

                    /**
                     * 判断参数 TamperCount 是否已赋值
                     * @return TamperCount 是否已赋值
                     * 
                     */
                    bool TamperCountHasBeenSet() const;

                    /**
                     * 获取Total number of information leaks

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LeakCount Total number of information leaks

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetLeakCount() const;

                    /**
                     * 判断参数 LeakCount 是否已赋值
                     * @return LeakCount 是否已赋值
                     * 
                     */
                    bool LeakCountHasBeenSet() const;

                    /**
                     * 获取Weekly proportion of API risk events.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApiRiskEventCircleCount Weekly proportion of API risk events.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetApiRiskEventCircleCount() const;

                    /**
                     * 判断参数 ApiRiskEventCircleCount 是否已赋值
                     * @return ApiRiskEventCircleCount 是否已赋值
                     * 
                     */
                    bool ApiRiskEventCircleCountHasBeenSet() const;

                private:

                    /**
                     * Total number of access requests
                     */
                    uint64_t m_accessCount;
                    bool m_accessCountHasBeenSet;

                    /**
                     * Total web attacks
                     */
                    uint64_t m_attackCount;
                    bool m_attackCountHasBeenSet;

                    /**
                     * Total number of access controls
                     */
                    uint64_t m_aCLCount;
                    bool m_aCLCountHasBeenSet;

                    /**
                     * Total CC attacks
                     */
                    uint64_t m_cCCount;
                    bool m_cCCountHasBeenSet;

                    /**
                     * Total bot attack count
                     */
                    uint64_t m_botCount;
                    bool m_botCountHasBeenSet;

                    /**
                     * Total API assets
                     */
                    uint64_t m_apiAssetsCount;
                    bool m_apiAssetsCountHasBeenSet;

                    /**
                     * Number of API risk events

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_apiRiskEventCount;
                    bool m_apiRiskEventCountHasBeenSet;

                    /**
                     * Total number of blocklisted IP addresses.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_iPBlackCount;
                    bool m_iPBlackCountHasBeenSet;

                    /**
                     * Total number of tamper-proof items

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_tamperCount;
                    bool m_tamperCountHasBeenSet;

                    /**
                     * Total number of information leaks

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_leakCount;
                    bool m_leakCountHasBeenSet;

                    /**
                     * Weekly proportion of API risk events.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_apiRiskEventCircleCount;
                    bool m_apiRiskEventCircleCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEATTACKOVERVIEWRESPONSE_H_
