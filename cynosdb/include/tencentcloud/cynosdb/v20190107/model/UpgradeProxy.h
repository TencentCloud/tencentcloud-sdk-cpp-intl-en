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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_UPGRADEPROXY_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_UPGRADEPROXY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 
                */
                class UpgradeProxy : public AbstractModel
                {
                public:
                    UpgradeProxy();
                    ~UpgradeProxy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取cpu
                     * @return Cpu cpu
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置cpu
                     * @param _cpu cpu
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
                     * 获取
                     * @return ProxyZones 
                     * 
                     */
                    std::vector<ProxyZone> GetProxyZones() const;

                    /**
                     * 设置
                     * @param _proxyZones 
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
                     * 获取
                     * @return ReloadBalance 
                     * 
                     */
                    std::string GetReloadBalance() const;

                    /**
                     * 设置
                     * @param _reloadBalance 
                     * 
                     */
                    void SetReloadBalance(const std::string& _reloadBalance);

                    /**
                     * 判断参数 ReloadBalance 是否已赋值
                     * @return ReloadBalance 是否已赋值
                     * 
                     */
                    bool ReloadBalanceHasBeenSet() const;

                private:

                    /**
                     * cpu
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * memory
                     */
                    int64_t m_mem;
                    bool m_memHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<ProxyZone> m_proxyZones;
                    bool m_proxyZonesHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_reloadBalance;
                    bool m_reloadBalanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_UPGRADEPROXY_H_
