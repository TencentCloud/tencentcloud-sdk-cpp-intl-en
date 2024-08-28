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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEGENERALSTATRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEGENERALSTATRESPONSE_H_

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
                * DescribeGeneralStat response structure.
                */
                class DescribeGeneralStatResponse : public AbstractModel
                {
                public:
                    DescribeGeneralStatResponse();
                    ~DescribeGeneralStatResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of hosts
                     * @return MachinesAll Total number of hosts
                     * 
                     */
                    uint64_t GetMachinesAll() const;

                    /**
                     * 判断参数 MachinesAll 是否已赋值
                     * @return MachinesAll 是否已赋值
                     * 
                     */
                    bool MachinesAllHasBeenSet() const;

                    /**
                     * 获取Total number of hosts not installed with the CWPP client
                     * @return MachinesUninstalled Total number of hosts not installed with the CWPP client
                     * 
                     */
                    uint64_t GetMachinesUninstalled() const;

                    /**
                     * 判断参数 MachinesUninstalled 是否已赋值
                     * @return MachinesUninstalled 是否已赋值
                     * 
                     */
                    bool MachinesUninstalledHasBeenSet() const;

                    /**
                     * 获取Total number of CWPP clients
                     * @return AgentsAll Total number of CWPP clients
                     * 
                     */
                    uint64_t GetAgentsAll() const;

                    /**
                     * 判断参数 AgentsAll 是否已赋值
                     * @return AgentsAll 是否已赋值
                     * 
                     */
                    bool AgentsAllHasBeenSet() const;

                    /**
                     * 获取Total number of online CWPP clients
                     * @return AgentsOnline Total number of online CWPP clients
                     * 
                     */
                    uint64_t GetAgentsOnline() const;

                    /**
                     * 判断参数 AgentsOnline 是否已赋值
                     * @return AgentsOnline 是否已赋值
                     * 
                     */
                    bool AgentsOnlineHasBeenSet() const;

                    /**
                     * 获取Total number of CWPP clients that are offline and shut down
                     * @return AgentsOffline Total number of CWPP clients that are offline and shut down
                     * 
                     */
                    uint64_t GetAgentsOffline() const;

                    /**
                     * 判断参数 AgentsOffline 是否已赋值
                     * @return AgentsOffline 是否已赋值
                     * 
                     */
                    bool AgentsOfflineHasBeenSet() const;

                    /**
                     * 获取Total number of Pro Edition CWPP clients
                     * @return AgentsPro Total number of Pro Edition CWPP clients
                     * 
                     */
                    uint64_t GetAgentsPro() const;

                    /**
                     * 判断参数 AgentsPro 是否已赋值
                     * @return AgentsPro 是否已赋值
                     * 
                     */
                    bool AgentsProHasBeenSet() const;

                    /**
                     * 获取Total number of Basic Edition CWPP clients
                     * @return AgentsBasic Total number of Basic Edition CWPP clients
                     * 
                     */
                    uint64_t GetAgentsBasic() const;

                    /**
                     * 判断参数 AgentsBasic 是否已赋值
                     * @return AgentsBasic 是否已赋值
                     * 
                     */
                    bool AgentsBasicHasBeenSet() const;

                    /**
                     * 获取Total number of prepaid Pro Edition CWPP clients that will expire in 7 days
                     * @return AgentsProExpireWithInSevenDays Total number of prepaid Pro Edition CWPP clients that will expire in 7 days
                     * 
                     */
                    uint64_t GetAgentsProExpireWithInSevenDays() const;

                    /**
                     * 判断参数 AgentsProExpireWithInSevenDays 是否已赋值
                     * @return AgentsProExpireWithInSevenDays 是否已赋值
                     * 
                     */
                    bool AgentsProExpireWithInSevenDaysHasBeenSet() const;

                    /**
                     * 获取Total number of risky hosts
                     * @return RiskMachine Total number of risky hosts
                     * 
                     */
                    uint64_t GetRiskMachine() const;

                    /**
                     * 判断参数 RiskMachine 是否已赋值
                     * @return RiskMachine 是否已赋值
                     * 
                     */
                    bool RiskMachineHasBeenSet() const;

                    /**
                     * 获取Total number of hosts that are shut down
                     * @return Shutdown Total number of hosts that are shut down
                     * 
                     */
                    uint64_t GetShutdown() const;

                    /**
                     * 判断参数 Shutdown 是否已赋值
                     * @return Shutdown 是否已赋值
                     * 
                     */
                    bool ShutdownHasBeenSet() const;

                    /**
                     * 获取Total number of offline hosts
                     * @return Offline Total number of offline hosts
                     * 
                     */
                    uint64_t GetOffline() const;

                    /**
                     * 判断参数 Offline 是否已赋值
                     * @return Offline 是否已赋值
                     * 
                     */
                    bool OfflineHasBeenSet() const;

                    /**
                     * 获取Number of Ultimate Edition hosts
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FlagshipMachineCnt Number of Ultimate Edition hosts
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetFlagshipMachineCnt() const;

                    /**
                     * 判断参数 FlagshipMachineCnt 是否已赋值
                     * @return FlagshipMachineCnt 是否已赋值
                     * 
                     */
                    bool FlagshipMachineCntHasBeenSet() const;

                    /**
                     * 获取Protection duration, in days
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProtectDays Protection duration, in days
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetProtectDays() const;

                    /**
                     * 判断参数 ProtectDays 是否已赋值
                     * @return ProtectDays 是否已赋值
                     * 
                     */
                    bool ProtectDaysHasBeenSet() const;

                    /**
                     * 获取Number of hosts added in the last 15 days
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AddedOnTheFifteen Number of hosts added in the last 15 days
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetAddedOnTheFifteen() const;

                    /**
                     * 判断参数 AddedOnTheFifteen 是否已赋值
                     * @return AddedOnTheFifteen 是否已赋值
                     * 
                     */
                    bool AddedOnTheFifteenHasBeenSet() const;

                private:

                    /**
                     * Total number of hosts
                     */
                    uint64_t m_machinesAll;
                    bool m_machinesAllHasBeenSet;

                    /**
                     * Total number of hosts not installed with the CWPP client
                     */
                    uint64_t m_machinesUninstalled;
                    bool m_machinesUninstalledHasBeenSet;

                    /**
                     * Total number of CWPP clients
                     */
                    uint64_t m_agentsAll;
                    bool m_agentsAllHasBeenSet;

                    /**
                     * Total number of online CWPP clients
                     */
                    uint64_t m_agentsOnline;
                    bool m_agentsOnlineHasBeenSet;

                    /**
                     * Total number of CWPP clients that are offline and shut down
                     */
                    uint64_t m_agentsOffline;
                    bool m_agentsOfflineHasBeenSet;

                    /**
                     * Total number of Pro Edition CWPP clients
                     */
                    uint64_t m_agentsPro;
                    bool m_agentsProHasBeenSet;

                    /**
                     * Total number of Basic Edition CWPP clients
                     */
                    uint64_t m_agentsBasic;
                    bool m_agentsBasicHasBeenSet;

                    /**
                     * Total number of prepaid Pro Edition CWPP clients that will expire in 7 days
                     */
                    uint64_t m_agentsProExpireWithInSevenDays;
                    bool m_agentsProExpireWithInSevenDaysHasBeenSet;

                    /**
                     * Total number of risky hosts
                     */
                    uint64_t m_riskMachine;
                    bool m_riskMachineHasBeenSet;

                    /**
                     * Total number of hosts that are shut down
                     */
                    uint64_t m_shutdown;
                    bool m_shutdownHasBeenSet;

                    /**
                     * Total number of offline hosts
                     */
                    uint64_t m_offline;
                    bool m_offlineHasBeenSet;

                    /**
                     * Number of Ultimate Edition hosts
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_flagshipMachineCnt;
                    bool m_flagshipMachineCntHasBeenSet;

                    /**
                     * Protection duration, in days
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_protectDays;
                    bool m_protectDaysHasBeenSet;

                    /**
                     * Number of hosts added in the last 15 days
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_addedOnTheFifteen;
                    bool m_addedOnTheFifteenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEGENERALSTATRESPONSE_H_
