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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEOVERVIEWSTATISTICSRESPONSE_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEOVERVIEWSTATISTICSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yunjing
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
                     * 获取Number of online servers.
                     * @return OnlineMachineNum Number of online servers.
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
                     * 获取Number of servers activated CWP Pro.
                     * @return ProVersionMachineNum Number of servers activated CWP Pro.
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
                     * 获取Number of trojan files.
                     * @return MalwareNum Number of trojan files.
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
                     * 获取Number of unusual login locations.
                     * @return NonlocalLoginNum Number of unusual login locations.
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
                     * 获取Number of successful brute force attacks.
                     * @return BruteAttackSuccessNum Number of successful brute force attacks.
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
                     * 获取Number of vulnerabilities.
                     * @return VulNum Number of vulnerabilities.
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
                     * 获取Security baseline number
                     * @return BaseLineNum Security baseline number
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
                     * Number of online servers.
                     */
                    uint64_t m_onlineMachineNum;
                    bool m_onlineMachineNumHasBeenSet;

                    /**
                     * Number of servers activated CWP Pro.
                     */
                    uint64_t m_proVersionMachineNum;
                    bool m_proVersionMachineNumHasBeenSet;

                    /**
                     * Number of trojan files.
                     */
                    uint64_t m_malwareNum;
                    bool m_malwareNumHasBeenSet;

                    /**
                     * Number of unusual login locations.
                     */
                    uint64_t m_nonlocalLoginNum;
                    bool m_nonlocalLoginNumHasBeenSet;

                    /**
                     * Number of successful brute force attacks.
                     */
                    uint64_t m_bruteAttackSuccessNum;
                    bool m_bruteAttackSuccessNumHasBeenSet;

                    /**
                     * Number of vulnerabilities.
                     */
                    uint64_t m_vulNum;
                    bool m_vulNumHasBeenSet;

                    /**
                     * Security baseline number
                     */
                    uint64_t m_baseLineNum;
                    bool m_baseLineNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEOVERVIEWSTATISTICSRESPONSE_H_
