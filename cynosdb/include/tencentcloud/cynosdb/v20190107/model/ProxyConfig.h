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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PROXYCONFIG_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PROXYCONFIG_H_

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
                * Access proxy configuration.
                */
                class ProxyConfig : public AbstractModel
                {
                public:
                    ProxyConfig();
                    ~ProxyConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of database proxy group nodes. this parameter is no longer recommended. recommend using ProxyZones.
                     * @return ProxyCount Number of database proxy group nodes. this parameter is no longer recommended. recommend using ProxyZones.
                     * 
                     */
                    int64_t GetProxyCount() const;

                    /**
                     * 设置Number of database proxy group nodes. this parameter is no longer recommended. recommend using ProxyZones.
                     * @param _proxyCount Number of database proxy group nodes. this parameter is no longer recommended. recommend using ProxyZones.
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
                     * 获取Memory.
                     * @return Mem Memory.
                     * 
                     */
                    int64_t GetMem() const;

                    /**
                     * 设置Memory.
                     * @param _mem Memory.
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
                     * 获取Connection pool type: SessionConnectionPool (session-level connection pool).
                     * @return ConnectionPoolType Connection pool type: SessionConnectionPool (session-level connection pool).
                     * 
                     */
                    std::string GetConnectionPoolType() const;

                    /**
                     * 设置Connection pool type: SessionConnectionPool (session-level connection pool).
                     * @param _connectionPoolType Connection pool type: SessionConnectionPool (session-level connection pool).
                     * 
                     */
                    void SetConnectionPoolType(const std::string& _connectionPoolType);

                    /**
                     * 判断参数 ConnectionPoolType 是否已赋值
                     * @return ConnectionPoolType 是否已赋值
                     * 
                     */
                    bool ConnectionPoolTypeHasBeenSet() const;

                    /**
                     * 获取Whether to enable the connection pool. valid values: yes (enable), no (not enabled).
                     * @return OpenConnectionPool Whether to enable the connection pool. valid values: yes (enable), no (not enabled).
                     * 
                     */
                    std::string GetOpenConnectionPool() const;

                    /**
                     * 设置Whether to enable the connection pool. valid values: yes (enable), no (not enabled).
                     * @param _openConnectionPool Whether to enable the connection pool. valid values: yes (enable), no (not enabled).
                     * 
                     */
                    void SetOpenConnectionPool(const std::string& _openConnectionPool);

                    /**
                     * 判断参数 OpenConnectionPool 是否已赋值
                     * @return OpenConnectionPool 是否已赋值
                     * 
                     */
                    bool OpenConnectionPoolHasBeenSet() const;

                    /**
                     * 获取Connection pool threshold. measurement unit (seconds).
                     * @return ConnectionPoolTimeOut Connection pool threshold. measurement unit (seconds).
                     * 
                     */
                    int64_t GetConnectionPoolTimeOut() const;

                    /**
                     * 设置Connection pool threshold. measurement unit (seconds).
                     * @param _connectionPoolTimeOut Connection pool threshold. measurement unit (seconds).
                     * 
                     */
                    void SetConnectionPoolTimeOut(const int64_t& _connectionPoolTimeOut);

                    /**
                     * 判断参数 ConnectionPoolTimeOut 是否已赋值
                     * @return ConnectionPoolTimeOut 是否已赋值
                     * 
                     */
                    bool ConnectionPoolTimeOutHasBeenSet() const;

                    /**
                     * 获取Description.
                     * @return Description Description.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description.
                     * @param _description Description.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Database node information (this parameter is used in combination with ProxyCount, either one must be manually input).
                     * @return ProxyZones Database node information (this parameter is used in combination with ProxyCount, either one must be manually input).
                     * 
                     */
                    std::vector<ProxyZone> GetProxyZones() const;

                    /**
                     * 设置Database node information (this parameter is used in combination with ProxyCount, either one must be manually input).
                     * @param _proxyZones Database node information (this parameter is used in combination with ProxyCount, either one must be manually input).
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
                     * Number of database proxy group nodes. this parameter is no longer recommended. recommend using ProxyZones.
                     */
                    int64_t m_proxyCount;
                    bool m_proxyCountHasBeenSet;

                    /**
                     * Number of CPU cores
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Memory.
                     */
                    int64_t m_mem;
                    bool m_memHasBeenSet;

                    /**
                     * Connection pool type: SessionConnectionPool (session-level connection pool).
                     */
                    std::string m_connectionPoolType;
                    bool m_connectionPoolTypeHasBeenSet;

                    /**
                     * Whether to enable the connection pool. valid values: yes (enable), no (not enabled).
                     */
                    std::string m_openConnectionPool;
                    bool m_openConnectionPoolHasBeenSet;

                    /**
                     * Connection pool threshold. measurement unit (seconds).
                     */
                    int64_t m_connectionPoolTimeOut;
                    bool m_connectionPoolTimeOutHasBeenSet;

                    /**
                     * Description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Database node information (this parameter is used in combination with ProxyCount, either one must be manually input).
                     */
                    std::vector<ProxyZone> m_proxyZones;
                    bool m_proxyZonesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PROXYCONFIG_H_
