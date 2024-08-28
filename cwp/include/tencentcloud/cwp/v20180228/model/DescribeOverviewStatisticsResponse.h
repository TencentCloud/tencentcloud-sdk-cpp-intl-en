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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEOVERVIEWSTATISTICSRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEOVERVIEWSTATISTICSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeOverviewStatistics response structure.
                */
                class DescribeOverviewStatisticsResponse : public AbstractModel
                {
                public:
                    DescribeOverviewStatisticsResponse();
                    ~DescribeOverviewStatisticsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of servers online
                     * @return OnlineMachineNum Number of servers online
                     * 
                     */
                    uint64_t GetOnlineMachineNum() const;

                    /**
                     * 判断参数 OnlineMachineNum 是否已赋值
                     * @return OnlineMachineNum 是否已赋值
                     * 
                     */
                    bool OnlineMachineNumHasBeenSet() const;

                    /**
                     * 获取Number of professional servers
                     * @return ProVersionMachineNum Number of professional servers
                     * 
                     */
                    uint64_t GetProVersionMachineNum() const;

                    /**
                     * 判断参数 ProVersionMachineNum 是否已赋值
                     * @return ProVersionMachineNum 是否已赋值
                     * 
                     */
                    bool ProVersionMachineNumHasBeenSet() const;

                    /**
                     * 获取Number of Trojan files
                     * @return MalwareNum Number of Trojan files
                     * 
                     */
                    uint64_t GetMalwareNum() const;

                    /**
                     * 判断参数 MalwareNum 是否已赋值
                     * @return MalwareNum 是否已赋值
                     * 
                     */
                    bool MalwareNumHasBeenSet() const;

                    /**
                     * 获取Number of cross-region log-in
                     * @return NonlocalLoginNum Number of cross-region log-in
                     * 
                     */
                    uint64_t GetNonlocalLoginNum() const;

                    /**
                     * 判断参数 NonlocalLoginNum 是否已赋值
                     * @return NonlocalLoginNum 是否已赋值
                     * 
                     */
                    bool NonlocalLoginNumHasBeenSet() const;

                    /**
                     * 获取Number of successful brute force cracking
                     * @return BruteAttackSuccessNum Number of successful brute force cracking
                     * 
                     */
                    uint64_t GetBruteAttackSuccessNum() const;

                    /**
                     * 判断参数 BruteAttackSuccessNum 是否已赋值
                     * @return BruteAttackSuccessNum 是否已赋值
                     * 
                     */
                    bool BruteAttackSuccessNumHasBeenSet() const;

                    /**
                     * 获取Number of vulnerabilities
                     * @return VulNum Number of vulnerabilities
                     * 
                     */
                    uint64_t GetVulNum() const;

                    /**
                     * 判断参数 VulNum 是否已赋值
                     * @return VulNum 是否已赋值
                     * 
                     */
                    bool VulNumHasBeenSet() const;

                    /**
                     * 获取Number of security baselines
                     * @return BaseLineNum Number of security baselines
                     * 
                     */
                    uint64_t GetBaseLineNum() const;

                    /**
                     * 判断参数 BaseLineNum 是否已赋值
                     * @return BaseLineNum 是否已赋值
                     * 
                     */
                    bool BaseLineNumHasBeenSet() const;

                private:

                    /**
                     * Number of servers online
                     */
                    uint64_t m_onlineMachineNum;
                    bool m_onlineMachineNumHasBeenSet;

                    /**
                     * Number of professional servers
                     */
                    uint64_t m_proVersionMachineNum;
                    bool m_proVersionMachineNumHasBeenSet;

                    /**
                     * Number of Trojan files
                     */
                    uint64_t m_malwareNum;
                    bool m_malwareNumHasBeenSet;

                    /**
                     * Number of cross-region log-in
                     */
                    uint64_t m_nonlocalLoginNum;
                    bool m_nonlocalLoginNumHasBeenSet;

                    /**
                     * Number of successful brute force cracking
                     */
                    uint64_t m_bruteAttackSuccessNum;
                    bool m_bruteAttackSuccessNumHasBeenSet;

                    /**
                     * Number of vulnerabilities
                     */
                    uint64_t m_vulNum;
                    bool m_vulNumHasBeenSet;

                    /**
                     * Number of security baselines
                     */
                    uint64_t m_baseLineNum;
                    bool m_baseLineNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEOVERVIEWSTATISTICSRESPONSE_H_
