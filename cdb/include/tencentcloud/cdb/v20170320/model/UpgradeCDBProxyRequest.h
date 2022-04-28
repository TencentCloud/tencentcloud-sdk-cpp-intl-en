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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_UPGRADECDBPROXYREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_UPGRADECDBPROXYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * UpgradeCDBProxy request structure.
                */
                class UpgradeCDBProxyRequest : public AbstractModel
                {
                public:
                    UpgradeCDBProxyRequest();
                    ~UpgradeCDBProxyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param InstanceId Instance ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Database proxy ID
                     * @return ProxyGroupId Database proxy ID
                     */
                    std::string GetProxyGroupId() const;

                    /**
                     * 设置Database proxy ID
                     * @param ProxyGroupId Database proxy ID
                     */
                    void SetProxyGroupId(const std::string& _proxyGroupId);

                    /**
                     * 判断参数 ProxyGroupId 是否已赋值
                     * @return ProxyGroupId 是否已赋值
                     */
                    bool ProxyGroupIdHasBeenSet() const;

                    /**
                     * 获取The number of proxy nodes
                     * @return ProxyCount The number of proxy nodes
                     */
                    int64_t GetProxyCount() const;

                    /**
                     * 设置The number of proxy nodes
                     * @param ProxyCount The number of proxy nodes
                     */
                    void SetProxyCount(const int64_t& _proxyCount);

                    /**
                     * 判断参数 ProxyCount 是否已赋值
                     * @return ProxyCount 是否已赋值
                     */
                    bool ProxyCountHasBeenSet() const;

                    /**
                     * 获取The number of CPU cores per proxy node
                     * @return Cpu The number of CPU cores per proxy node
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置The number of CPU cores per proxy node
                     * @param Cpu The number of CPU cores per proxy node
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取Memory per proxy node
                     * @return Mem Memory per proxy node
                     */
                    int64_t GetMem() const;

                    /**
                     * 设置Memory per proxy node
                     * @param Mem Memory per proxy node
                     */
                    void SetMem(const int64_t& _mem);

                    /**
                     * 判断参数 Mem 是否已赋值
                     * @return Mem 是否已赋值
                     */
                    bool MemHasBeenSet() const;

                    /**
                     * 获取Load rebalance mode. Valid values: `auto`, `manual`
                     * @return ReloadBalance Load rebalance mode. Valid values: `auto`, `manual`
                     */
                    std::string GetReloadBalance() const;

                    /**
                     * 设置Load rebalance mode. Valid values: `auto`, `manual`
                     * @param ReloadBalance Load rebalance mode. Valid values: `auto`, `manual`
                     */
                    void SetReloadBalance(const std::string& _reloadBalance);

                    /**
                     * 判断参数 ReloadBalance 是否已赋值
                     * @return ReloadBalance 是否已赋值
                     */
                    bool ReloadBalanceHasBeenSet() const;

                    /**
                     * 获取Upgrade time. Valid values: `nowTime` (upgrade immediately), `timeWindow` (upgrade during instance maintenance time)
                     * @return UpgradeTime Upgrade time. Valid values: `nowTime` (upgrade immediately), `timeWindow` (upgrade during instance maintenance time)
                     */
                    std::string GetUpgradeTime() const;

                    /**
                     * 设置Upgrade time. Valid values: `nowTime` (upgrade immediately), `timeWindow` (upgrade during instance maintenance time)
                     * @param UpgradeTime Upgrade time. Valid values: `nowTime` (upgrade immediately), `timeWindow` (upgrade during instance maintenance time)
                     */
                    void SetUpgradeTime(const std::string& _upgradeTime);

                    /**
                     * 判断参数 UpgradeTime 是否已赋值
                     * @return UpgradeTime 是否已赋值
                     */
                    bool UpgradeTimeHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Database proxy ID
                     */
                    std::string m_proxyGroupId;
                    bool m_proxyGroupIdHasBeenSet;

                    /**
                     * The number of proxy nodes
                     */
                    int64_t m_proxyCount;
                    bool m_proxyCountHasBeenSet;

                    /**
                     * The number of CPU cores per proxy node
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Memory per proxy node
                     */
                    int64_t m_mem;
                    bool m_memHasBeenSet;

                    /**
                     * Load rebalance mode. Valid values: `auto`, `manual`
                     */
                    std::string m_reloadBalance;
                    bool m_reloadBalanceHasBeenSet;

                    /**
                     * Upgrade time. Valid values: `nowTime` (upgrade immediately), `timeWindow` (upgrade during instance maintenance time)
                     */
                    std::string m_upgradeTime;
                    bool m_upgradeTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_UPGRADECDBPROXYREQUEST_H_
