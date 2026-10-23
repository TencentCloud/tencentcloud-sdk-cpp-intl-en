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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_UPGRADEPROXYREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_UPGRADEPROXYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/ProxyZone.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * UpgradeProxy request structure.
                */
                class UpgradeProxyRequest : public AbstractModel
                {
                public:
                    UpgradeProxyRequest();
                    ~UpgradeProxyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param _clusterId Cluster ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Number of CPU cores
                     * @return Cpu Number of CPU cores
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置Number of CPU cores
                     * @param _cpu Number of CPU cores
                     * 
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取memory
                     * @return Mem memory
                     * 
                     */
                    int64_t GetMem() const;

                    /**
                     * 设置memory
                     * @param _mem memory
                     * 
                     */
                    void SetMem(const int64_t& _mem);

                    /**
                     * 判断参数 Mem 是否已赋值
                     * @return Mem 是否已赋值
                     * 
                     */
                    bool MemHasBeenSet() const;

                    /**
                     * 获取Number of database proxy group nodes
                     * @return ProxyCount Number of database proxy group nodes
                     * 
                     */
                    int64_t GetProxyCount() const;

                    /**
                     * 设置Number of database proxy group nodes
                     * @param _proxyCount Number of database proxy group nodes
                     * 
                     */
                    void SetProxyCount(const int64_t& _proxyCount);

                    /**
                     * 判断参数 ProxyCount 是否已赋值
                     * @return ProxyCount 是否已赋值
                     * 
                     */
                    bool ProxyCountHasBeenSet() const;

                    /**
                     * 获取Database Proxy Group ID (abandoned)
                     * @return ProxyGroupId Database Proxy Group ID (abandoned)
                     * 
                     */
                    std::string GetProxyGroupId() const;

                    /**
                     * 设置Database Proxy Group ID (abandoned)
                     * @param _proxyGroupId Database Proxy Group ID (abandoned)
                     * 
                     */
                    void SetProxyGroupId(const std::string& _proxyGroupId);

                    /**
                     * 判断参数 ProxyGroupId 是否已赋值
                     * @return ProxyGroupId 是否已赋值
                     * 
                     */
                    bool ProxyGroupIdHasBeenSet() const;

                    /**
                     * 获取Load rebalance: auto (automatic), manual
                     * @return ReloadBalance Load rebalance: auto (automatic), manual
                     * 
                     */
                    std::string GetReloadBalance() const;

                    /**
                     * 设置Load rebalance: auto (automatic), manual
                     * @param _reloadBalance Load rebalance: auto (automatic), manual
                     * 
                     */
                    void SetReloadBalance(const std::string& _reloadBalance);

                    /**
                     * 判断参数 ReloadBalance 是否已赋值
                     * @return ReloadBalance 是否已赋值
                     * 
                     */
                    bool ReloadBalanceHasBeenSet() const;

                    /**
                     * 获取Upgrade time: no (upon upgrade completion); yes (instance maintenance time)
                     * @return IsInMaintainPeriod Upgrade time: no (upon upgrade completion); yes (instance maintenance time)
                     * 
                     */
                    std::string GetIsInMaintainPeriod() const;

                    /**
                     * 设置Upgrade time: no (upon upgrade completion); yes (instance maintenance time)
                     * @param _isInMaintainPeriod Upgrade time: no (upon upgrade completion); yes (instance maintenance time)
                     * 
                     */
                    void SetIsInMaintainPeriod(const std::string& _isInMaintainPeriod);

                    /**
                     * 判断参数 IsInMaintainPeriod 是否已赋值
                     * @return IsInMaintainPeriod 是否已赋值
                     * 
                     */
                    bool IsInMaintainPeriodHasBeenSet() const;

                    /**
                     * 获取Database proxy node information
                     * @return ProxyZones Database proxy node information
                     * 
                     */
                    std::vector<ProxyZone> GetProxyZones() const;

                    /**
                     * 设置Database proxy node information
                     * @param _proxyZones Database proxy node information
                     * 
                     */
                    void SetProxyZones(const std::vector<ProxyZone>& _proxyZones);

                    /**
                     * 判断参数 ProxyZones 是否已赋值
                     * @return ProxyZones 是否已赋值
                     * 
                     */
                    bool ProxyZonesHasBeenSet() const;

                    /**
                     * 获取Whether to perform a rolling upgrade
                     * @return IsRollUpgrade Whether to perform a rolling upgrade
                     * 
                     */
                    std::string GetIsRollUpgrade() const;

                    /**
                     * 设置Whether to perform a rolling upgrade
                     * @param _isRollUpgrade Whether to perform a rolling upgrade
                     * 
                     */
                    void SetIsRollUpgrade(const std::string& _isRollUpgrade);

                    /**
                     * 判断参数 IsRollUpgrade 是否已赋值
                     * @return IsRollUpgrade 是否已赋值
                     * 
                     */
                    bool IsRollUpgradeHasBeenSet() const;

                    /**
                     * 获取In-place rolling upgrade waiting time. Unit: seconds
                     * @return RollUpgradeWaitingTime In-place rolling upgrade waiting time. Unit: seconds
                     * 
                     */
                    int64_t GetRollUpgradeWaitingTime() const;

                    /**
                     * 设置In-place rolling upgrade waiting time. Unit: seconds
                     * @param _rollUpgradeWaitingTime In-place rolling upgrade waiting time. Unit: seconds
                     * 
                     */
                    void SetRollUpgradeWaitingTime(const int64_t& _rollUpgradeWaitingTime);

                    /**
                     * 判断参数 RollUpgradeWaitingTime 是否已赋值
                     * @return RollUpgradeWaitingTime 是否已赋值
                     * 
                     */
                    bool RollUpgradeWaitingTimeHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Number of CPU cores
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * memory
                     */
                    int64_t m_mem;
                    bool m_memHasBeenSet;

                    /**
                     * Number of database proxy group nodes
                     */
                    int64_t m_proxyCount;
                    bool m_proxyCountHasBeenSet;

                    /**
                     * Database Proxy Group ID (abandoned)
                     */
                    std::string m_proxyGroupId;
                    bool m_proxyGroupIdHasBeenSet;

                    /**
                     * Load rebalance: auto (automatic), manual
                     */
                    std::string m_reloadBalance;
                    bool m_reloadBalanceHasBeenSet;

                    /**
                     * Upgrade time: no (upon upgrade completion); yes (instance maintenance time)
                     */
                    std::string m_isInMaintainPeriod;
                    bool m_isInMaintainPeriodHasBeenSet;

                    /**
                     * Database proxy node information
                     */
                    std::vector<ProxyZone> m_proxyZones;
                    bool m_proxyZonesHasBeenSet;

                    /**
                     * Whether to perform a rolling upgrade
                     */
                    std::string m_isRollUpgrade;
                    bool m_isRollUpgradeHasBeenSet;

                    /**
                     * In-place rolling upgrade waiting time. Unit: seconds
                     */
                    int64_t m_rollUpgradeWaitingTime;
                    bool m_rollUpgradeWaitingTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_UPGRADEPROXYREQUEST_H_
