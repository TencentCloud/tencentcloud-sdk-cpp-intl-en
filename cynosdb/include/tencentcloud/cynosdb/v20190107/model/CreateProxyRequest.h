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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATEPROXYREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATEPROXYREQUEST_H_

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
                * CreateProxy request structure.
                */
                class CreateProxyRequest : public AbstractModel
                {
                public:
                    CreateProxyRequest();
                    ~CreateProxyRequest() = default;
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
                     * 获取VPC ID. Default value: the VPC ID of the cluster.
                     * @return UniqueVpcId VPC ID. Default value: the VPC ID of the cluster.
                     * 
                     */
                    std::string GetUniqueVpcId() const;

                    /**
                     * 设置VPC ID. Default value: the VPC ID of the cluster.
                     * @param _uniqueVpcId VPC ID. Default value: the VPC ID of the cluster.
                     * 
                     */
                    void SetUniqueVpcId(const std::string& _uniqueVpcId);

                    /**
                     * 判断参数 UniqueVpcId 是否已赋值
                     * @return UniqueVpcId 是否已赋值
                     * 
                     */
                    bool UniqueVpcIdHasBeenSet() const;

                    /**
                     * 获取VPC subnet ID. Default value: the cluster subnet ID.
                     * @return UniqueSubnetId VPC subnet ID. Default value: the cluster subnet ID.
                     * 
                     */
                    std::string GetUniqueSubnetId() const;

                    /**
                     * 设置VPC subnet ID. Default value: the cluster subnet ID.
                     * @param _uniqueSubnetId VPC subnet ID. Default value: the cluster subnet ID.
                     * 
                     */
                    void SetUniqueSubnetId(const std::string& _uniqueSubnetId);

                    /**
                     * 判断参数 UniqueSubnetId 是否已赋值
                     * @return UniqueSubnetId 是否已赋值
                     * 
                     */
                    bool UniqueSubnetIdHasBeenSet() const;

                    /**
                     * 获取Number of database proxy group nodes (this parameter is no longer recommended. Use ProxyZones instead)
                     * @return ProxyCount Number of database proxy group nodes (this parameter is no longer recommended. Use ProxyZones instead)
                     * 
                     */
                    int64_t GetProxyCount() const;

                    /**
                     * 设置Number of database proxy group nodes (this parameter is no longer recommended. Use ProxyZones instead)
                     * @param _proxyCount Number of database proxy group nodes (this parameter is no longer recommended. Use ProxyZones instead)
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
                     * 获取Connection pool type: SessionConnectionPool (session-level connection pool)
                     * @return ConnectionPoolType Connection pool type: SessionConnectionPool (session-level connection pool)
                     * 
                     */
                    std::string GetConnectionPoolType() const;

                    /**
                     * 设置Connection pool type: SessionConnectionPool (session-level connection pool)
                     * @param _connectionPoolType Connection pool type: SessionConnectionPool (session-level connection pool)
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
                     * 获取Whether connection pool is enabled. yes: enabled; no: not enabled
                     * @return OpenConnectionPool Whether connection pool is enabled. yes: enabled; no: not enabled
                     * 
                     */
                    std::string GetOpenConnectionPool() const;

                    /**
                     * 设置Whether connection pool is enabled. yes: enabled; no: not enabled
                     * @param _openConnectionPool Whether connection pool is enabled. yes: enabled; no: not enabled
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
                     * 获取Connection pool threshold. Unit: second
                     * @return ConnectionPoolTimeOut Connection pool threshold. Unit: second
                     * 
                     */
                    int64_t GetConnectionPoolTimeOut() const;

                    /**
                     * 设置Connection pool threshold. Unit: second
                     * @param _connectionPoolTimeOut Connection pool threshold. Unit: second
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
                     * 获取Security group ID array
                     * @return SecurityGroupIds Security group ID array
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置Security group ID array
                     * @param _securityGroupIds Security group ID array
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

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
                     * 获取Database node information (either this parameter or ProxyCount is required)
                     * @return ProxyZones Database node information (either this parameter or ProxyCount is required)
                     * 
                     */
                    std::vector<ProxyZone> GetProxyZones() const;

                    /**
                     * 设置Database node information (either this parameter or ProxyCount is required)
                     * @param _proxyZones Database node information (either this parameter or ProxyCount is required)
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
                     * memory
                     */
                    int64_t m_mem;
                    bool m_memHasBeenSet;

                    /**
                     * VPC ID. Default value: the VPC ID of the cluster.
                     */
                    std::string m_uniqueVpcId;
                    bool m_uniqueVpcIdHasBeenSet;

                    /**
                     * VPC subnet ID. Default value: the cluster subnet ID.
                     */
                    std::string m_uniqueSubnetId;
                    bool m_uniqueSubnetIdHasBeenSet;

                    /**
                     * Number of database proxy group nodes (this parameter is no longer recommended. Use ProxyZones instead)
                     */
                    int64_t m_proxyCount;
                    bool m_proxyCountHasBeenSet;

                    /**
                     * Connection pool type: SessionConnectionPool (session-level connection pool)
                     */
                    std::string m_connectionPoolType;
                    bool m_connectionPoolTypeHasBeenSet;

                    /**
                     * Whether connection pool is enabled. yes: enabled; no: not enabled
                     */
                    std::string m_openConnectionPool;
                    bool m_openConnectionPoolHasBeenSet;

                    /**
                     * Connection pool threshold. Unit: second
                     */
                    int64_t m_connectionPoolTimeOut;
                    bool m_connectionPoolTimeOutHasBeenSet;

                    /**
                     * Security group ID array
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * Description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Database node information (either this parameter or ProxyCount is required)
                     */
                    std::vector<ProxyZone> m_proxyZones;
                    bool m_proxyZonesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATEPROXYREQUEST_H_
