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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEWEEKLYREPORTINFORESPONSE_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEWEEKLYREPORTINFORESPONSE_H_

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
                * DescribeWeeklyReportInfo response structure.
                */
                class DescribeWeeklyReportInfoResponse : public AbstractModel
                {
                public:
                    DescribeWeeklyReportInfoResponse();
                    ~DescribeWeeklyReportInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Account owner name.
                     * @return CompanyName Account owner name.
                     * 
                     */
                    std::string GetCompanyName() const;

                    /**
                     * 判断参数 CompanyName 是否已赋值
                     * @return CompanyName 是否已赋值
                     * 
                     */
                    bool CompanyNameHasBeenSet() const;

                    /**
                     * 获取Total number of servers.
                     * @return MachineNum Total number of servers.
                     * 
                     */
                    uint64_t GetMachineNum() const;

                    /**
                     * 判断参数 MachineNum 是否已赋值
                     * @return MachineNum 是否已赋值
                     * 
                     */
                    bool MachineNumHasBeenSet() const;

                    /**
                     * 获取Number of online CWP agents
                     * @return OnlineMachineNum Number of online CWP agents
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
                     * 获取Number of offline CWP agents.
                     * @return OfflineMachineNum Number of offline CWP agents.
                     * 
                     */
                    uint64_t GetOfflineMachineNum() const;

                    /**
                     * 判断参数 OfflineMachineNum 是否已赋值
                     * @return OfflineMachineNum 是否已赋值
                     * 
                     */
                    bool OfflineMachineNumHasBeenSet() const;

                    /**
                     * 获取Number of servers on CWP Pro.
                     * @return ProVersionMachineNum Number of servers on CWP Pro.
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
                     * 获取Weekly report start time
                     * @return BeginDate Weekly report start time
                     * 
                     */
                    std::string GetBeginDate() const;

                    /**
                     * 判断参数 BeginDate 是否已赋值
                     * @return BeginDate 是否已赋值
                     * 
                     */
                    bool BeginDateHasBeenSet() const;

                    /**
                     * 获取Weekly report end time
                     * @return EndDate Weekly report end time
                     * 
                     */
                    std::string GetEndDate() const;

                    /**
                     * 判断参数 EndDate 是否已赋值
                     * @return EndDate 是否已赋值
                     * 
                     */
                    bool EndDateHasBeenSet() const;

                    /**
                     * 获取Security level
<li>HIGH: high</li>
<li>MIDDLE: medium</li>
<li>LOW: low</li>
                     * @return Level Security level
<li>HIGH: high</li>
<li>MIDDLE: medium</li>
<li>LOW: low</li>
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取Number of trojan records.
                     * @return MalwareNum Number of trojan records.
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
                     * 获取Download address for exported file.
                     * @return DownloadUrl Download address for exported file.
                     * 
                     */
                    std::string GetDownloadUrl() const;

                    /**
                     * 判断参数 DownloadUrl 是否已赋值
                     * @return DownloadUrl 是否已赋值
                     * 
                     */
                    bool DownloadUrlHasBeenSet() const;

                private:

                    /**
                     * Account owner name.
                     */
                    std::string m_companyName;
                    bool m_companyNameHasBeenSet;

                    /**
                     * Total number of servers.
                     */
                    uint64_t m_machineNum;
                    bool m_machineNumHasBeenSet;

                    /**
                     * Number of online CWP agents
                     */
                    uint64_t m_onlineMachineNum;
                    bool m_onlineMachineNumHasBeenSet;

                    /**
                     * Number of offline CWP agents.
                     */
                    uint64_t m_offlineMachineNum;
                    bool m_offlineMachineNumHasBeenSet;

                    /**
                     * Number of servers on CWP Pro.
                     */
                    uint64_t m_proVersionMachineNum;
                    bool m_proVersionMachineNumHasBeenSet;

                    /**
                     * Weekly report start time
                     */
                    std::string m_beginDate;
                    bool m_beginDateHasBeenSet;

                    /**
                     * Weekly report end time
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                    /**
                     * Security level
<li>HIGH: high</li>
<li>MIDDLE: medium</li>
<li>LOW: low</li>
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Number of trojan records.
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
                     * Download address for exported file.
                     */
                    std::string m_downloadUrl;
                    bool m_downloadUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEWEEKLYREPORTINFORESPONSE_H_
