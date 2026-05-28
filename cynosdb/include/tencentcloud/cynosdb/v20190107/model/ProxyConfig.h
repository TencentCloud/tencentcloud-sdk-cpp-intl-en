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
                     * 获取<p>Number of database proxy group nodes. This parameter is no longer recommended. Recommend using ProxyZones.</p>
                     * @return ProxyCount <p>Number of database proxy group nodes. This parameter is no longer recommended. Recommend using ProxyZones.</p>
                     * @deprecated
                     */
                    int64_t GetProxyCount() const;

                    /**
                     * 设置<p>Number of database proxy group nodes. This parameter is no longer recommended. Recommend using ProxyZones.</p>
                     * @param _proxyCount <p>Number of database proxy group nodes. This parameter is no longer recommended. Recommend using ProxyZones.</p>
                     * @deprecated
                     */
                    void SetProxyCount(const int64_t& _proxyCount);

                    /**
                     * 判断参数 ProxyCount 是否已赋值
                     * @return ProxyCount 是否已赋值
                     * @deprecated
                     */
                    bool ProxyCountHasBeenSet() const;

                    /**
                     * 获取<p>cpu cores</p>
                     * @return Cpu <p>cpu cores</p>
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置<p>cpu cores</p>
                     * @param _cpu <p>cpu cores</p>
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
                     * 获取<p>Memory</p>
                     * @return Mem <p>Memory</p>
                     * 
                     */
                    int64_t GetMem() const;

                    /**
                     * 设置<p>Memory</p>
                     * @param _mem <p>Memory</p>
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
                     * 获取<p>Connection pool type: SessionConnectionPool (session-level connection pool)</p>
                     * @return ConnectionPoolType <p>Connection pool type: SessionConnectionPool (session-level connection pool)</p>
                     * 
                     */
                    std::string GetConnectionPoolType() const;

                    /**
                     * 设置<p>Connection pool type: SessionConnectionPool (session-level connection pool)</p>
                     * @param _connectionPoolType <p>Connection pool type: SessionConnectionPool (session-level connection pool)</p>
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
                     * 获取<p>Whether the connection pool is enabled, yes-enable, no-disable</p>
                     * @return OpenConnectionPool <p>Whether the connection pool is enabled, yes-enable, no-disable</p>
                     * 
                     */
                    std::string GetOpenConnectionPool() const;

                    /**
                     * 设置<p>Whether the connection pool is enabled, yes-enable, no-disable</p>
                     * @param _openConnectionPool <p>Whether the connection pool is enabled, yes-enable, no-disable</p>
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
                     * 获取<p>Connection pool threshold: Measurement unit (seconds)</p>
                     * @return ConnectionPoolTimeOut <p>Connection pool threshold: Measurement unit (seconds)</p>
                     * 
                     */
                    int64_t GetConnectionPoolTimeOut() const;

                    /**
                     * 设置<p>Connection pool threshold: Measurement unit (seconds)</p>
                     * @param _connectionPoolTimeOut <p>Connection pool threshold: Measurement unit (seconds)</p>
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
                     * 获取<p>description</p>
                     * @return Description <p>description</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>description</p>
                     * @param _description <p>description</p>
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
                     * 获取<p>Database node information (this parameter is used in combination with ProxyCount and either one must be input)</p>
                     * @return ProxyZones <p>Database node information (this parameter is used in combination with ProxyCount and either one must be input)</p>
                     * 
                     */
                    std::vector<ProxyZone> GetProxyZones() const;

                    /**
                     * 设置<p>Database node information (this parameter is used in combination with ProxyCount and either one must be input)</p>
                     * @param _proxyZones <p>Database node information (this parameter is used in combination with ProxyCount and either one must be input)</p>
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
                     * <p>Number of database proxy group nodes. This parameter is no longer recommended. Recommend using ProxyZones.</p>
                     */
                    int64_t m_proxyCount;
                    bool m_proxyCountHasBeenSet;

                    /**
                     * <p>cpu cores</p>
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>Memory</p>
                     */
                    int64_t m_mem;
                    bool m_memHasBeenSet;

                    /**
                     * <p>Connection pool type: SessionConnectionPool (session-level connection pool)</p>
                     */
                    std::string m_connectionPoolType;
                    bool m_connectionPoolTypeHasBeenSet;

                    /**
                     * <p>Whether the connection pool is enabled, yes-enable, no-disable</p>
                     */
                    std::string m_openConnectionPool;
                    bool m_openConnectionPoolHasBeenSet;

                    /**
                     * <p>Connection pool threshold: Measurement unit (seconds)</p>
                     */
                    int64_t m_connectionPoolTimeOut;
                    bool m_connectionPoolTimeOutHasBeenSet;

                    /**
                     * <p>description</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Database node information (this parameter is used in combination with ProxyCount and either one must be input)</p>
                     */
                    std::vector<ProxyZone> m_proxyZones;
                    bool m_proxyZonesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PROXYCONFIG_H_
