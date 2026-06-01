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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_PROXYNODE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_PROXYNODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Proxy node
                */
                class ProxyNode : public AbstractModel
                {
                public:
                    ProxyNode();
                    ~ProxyNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Proxy node ID
                     * @return ProxyId Proxy node ID
                     * 
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置Proxy node ID
                     * @param _proxyId Proxy node ID
                     * 
                     */
                    void SetProxyId(const std::string& _proxyId);

                    /**
                     * 判断参数 ProxyId 是否已赋值
                     * @return ProxyId 是否已赋值
                     * 
                     */
                    bool ProxyIdHasBeenSet() const;

                    /**
                     * 获取Number of CPU cores.
                     * @return Cpu Number of CPU cores.
                     * 
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置Number of CPU cores.
                     * @param _cpu Number of CPU cores.
                     * 
                     */
                    void SetCpu(const uint64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取Memory size, measured in MB.
                     * @return Mem Memory size, measured in MB.
                     * 
                     */
                    uint64_t GetMem() const;

                    /**
                     * 设置Memory size, measured in MB.
                     * @param _mem Memory size, measured in MB.
                     * 
                     */
                    void SetMem(const uint64_t& _mem);

                    /**
                     * 判断参数 Mem 是否已赋值
                     * @return Mem 是否已赋值
                     * 
                     */
                    bool MemHasBeenSet() const;

                    /**
                     * 获取Node status: 0 - Initializing, 1 - Online, 2 - Offline, 3 - Being destroyed, 4 - Recovering, 5 - Node fault, 6 - Switching.
                     * @return Status Node status: 0 - Initializing, 1 - Online, 2 - Offline, 3 - Being destroyed, 4 - Recovering, 5 - Node fault, 6 - Switching.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Node status: 0 - Initializing, 1 - Online, 2 - Offline, 3 - Being destroyed, 4 - Recovering, 5 - Node fault, 6 - Switching.
                     * @param _status Node status: 0 - Initializing, 1 - Online, 2 - Offline, 3 - Being destroyed, 4 - Recovering, 5 - Node fault, 6 - Switching.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Proxy node availability zone
                     * @return Zone Proxy node availability zone
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Proxy node availability zone
                     * @param _zone Proxy node availability zone
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Proxy Node Region
                     * @return Region Proxy Node Region
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Proxy Node Region
                     * @param _region Proxy Node Region
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Number of connections
                     * @return Connection Number of connections
                     * 
                     */
                    uint64_t GetConnection() const;

                    /**
                     * 设置Number of connections
                     * @param _connection Number of connections
                     * 
                     */
                    void SetConnection(const uint64_t& _connection);

                    /**
                     * 判断参数 Connection 是否已赋值
                     * @return Connection 是否已赋值
                     * 
                     */
                    bool ConnectionHasBeenSet() const;

                private:

                    /**
                     * Proxy node ID
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * Number of CPU cores.
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Memory size, measured in MB.
                     */
                    uint64_t m_mem;
                    bool m_memHasBeenSet;

                    /**
                     * Node status: 0 - Initializing, 1 - Online, 2 - Offline, 3 - Being destroyed, 4 - Recovering, 5 - Node fault, 6 - Switching.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Proxy node availability zone
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Proxy Node Region
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Number of connections
                     */
                    uint64_t m_connection;
                    bool m_connectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_PROXYNODE_H_
