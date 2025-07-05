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
                     * 获取Memory
                     * @return Mem Memory
                     * 
                     */
                    int64_t GetMem() const;

                    /**
                     * 设置Memory
                     * @param _mem Memory
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
                     * 获取Number of nodes in the proxy group
                     * @return ProxyCount Number of nodes in the proxy group
                     * 
                     */
                    int64_t GetProxyCount() const;

                    /**
                     * 设置Number of nodes in the proxy group
                     * @param _proxyCount Number of nodes in the proxy group
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
                     * 获取ID of the database proxy group (disused)
                     * @return ProxyGroupId ID of the database proxy group (disused)
                     * 
                     */
                    std::string GetProxyGroupId() const;

                    /**
                     * 设置ID of the database proxy group (disused)
                     * @param _proxyGroupId ID of the database proxy group (disused)
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
                     * 获取Load rebalance mode. Valid values: `auto`, `manual`
                     * @return ReloadBalance Load rebalance mode. Valid values: `auto`, `manual`
                     * 
                     */
                    std::string GetReloadBalance() const;

                    /**
                     * 设置Load rebalance mode. Valid values: `auto`, `manual`
                     * @param _reloadBalance Load rebalance mode. Valid values: `auto`, `manual`
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
                     * 获取Upgrade time. Valid values: `no` (upon upgrade completion), `timeWindow` (upgrade during instance maintenance time)
                     * @return IsInMaintainPeriod Upgrade time. Valid values: `no` (upon upgrade completion), `timeWindow` (upgrade during instance maintenance time)
                     * 
                     */
                    std::string GetIsInMaintainPeriod() const;

                    /**
                     * 设置Upgrade time. Valid values: `no` (upon upgrade completion), `timeWindow` (upgrade during instance maintenance time)
                     * @param _isInMaintainPeriod Upgrade time. Valid values: `no` (upon upgrade completion), `timeWindow` (upgrade during instance maintenance time)
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
                     * 获取Node information of the atabase proxy
                     * @return ProxyZones Node information of the atabase proxy
                     * 
                     */
                    std::vector<ProxyZone> GetProxyZones() const;

                    /**
                     * 设置Node information of the atabase proxy
                     * @param _proxyZones Node information of the atabase proxy
                     * 
                     */
                    void SetProxyZones(const std::vector<ProxyZone>& _proxyZones);

                    /**
                     * 判断参数 ProxyZones 是否已赋值
                     * @return ProxyZones 是否已赋值
                     * 
                     */
                    bool ProxyZonesHasBeenSet() const;

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
                     * Memory
                     */
                    int64_t m_mem;
                    bool m_memHasBeenSet;

                    /**
                     * Number of nodes in the proxy group
                     */
                    int64_t m_proxyCount;
                    bool m_proxyCountHasBeenSet;

                    /**
                     * ID of the database proxy group (disused)
                     */
                    std::string m_proxyGroupId;
                    bool m_proxyGroupIdHasBeenSet;

                    /**
                     * Load rebalance mode. Valid values: `auto`, `manual`
                     */
                    std::string m_reloadBalance;
                    bool m_reloadBalanceHasBeenSet;

                    /**
                     * Upgrade time. Valid values: `no` (upon upgrade completion), `timeWindow` (upgrade during instance maintenance time)
                     */
                    std::string m_isInMaintainPeriod;
                    bool m_isInMaintainPeriodHasBeenSet;

                    /**
                     * Node information of the atabase proxy
                     */
                    std::vector<ProxyZone> m_proxyZones;
                    bool m_proxyZonesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_UPGRADEPROXYREQUEST_H_
