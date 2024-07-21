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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYPROXYRWSPLITREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYPROXYRWSPLITREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/ProxyInstanceWeight.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * ModifyProxyRwSplit request structure.
                */
                class ModifyProxyRwSplitRequest : public AbstractModel
                {
                public:
                    ModifyProxyRwSplitRequest();
                    ~ModifyProxyRwSplitRequest() = default;
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
                     * 获取Database proxy group ID
                     * @return ProxyGroupId Database proxy group ID
                     * 
                     */
                    std::string GetProxyGroupId() const;

                    /**
                     * 设置Database proxy group ID
                     * @param _proxyGroupId Database proxy group ID
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
                     * 获取Consistency type. Valid values: `eventual` (eventual consistency), `session` (session consistency), `global` (global consistency).
                     * @return ConsistencyType Consistency type. Valid values: `eventual` (eventual consistency), `session` (session consistency), `global` (global consistency).
                     * 
                     */
                    std::string GetConsistencyType() const;

                    /**
                     * 设置Consistency type. Valid values: `eventual` (eventual consistency), `session` (session consistency), `global` (global consistency).
                     * @param _consistencyType Consistency type. Valid values: `eventual` (eventual consistency), `session` (session consistency), `global` (global consistency).
                     * 
                     */
                    void SetConsistencyType(const std::string& _consistencyType);

                    /**
                     * 判断参数 ConsistencyType 是否已赋值
                     * @return ConsistencyType 是否已赋值
                     * 
                     */
                    bool ConsistencyTypeHasBeenSet() const;

                    /**
                     * 获取Consistency timeout period
                     * @return ConsistencyTimeOut Consistency timeout period
                     * 
                     */
                    std::string GetConsistencyTimeOut() const;

                    /**
                     * 设置Consistency timeout period
                     * @param _consistencyTimeOut Consistency timeout period
                     * 
                     */
                    void SetConsistencyTimeOut(const std::string& _consistencyTimeOut);

                    /**
                     * 判断参数 ConsistencyTimeOut 是否已赋值
                     * @return ConsistencyTimeOut 是否已赋值
                     * 
                     */
                    bool ConsistencyTimeOutHasBeenSet() const;

                    /**
                     * 获取Assignment mode of read/write weights. Valid values: `system` (auto-assigned), `custom`
                     * @return WeightMode Assignment mode of read/write weights. Valid values: `system` (auto-assigned), `custom`
                     * 
                     */
                    std::string GetWeightMode() const;

                    /**
                     * 设置Assignment mode of read/write weights. Valid values: `system` (auto-assigned), `custom`
                     * @param _weightMode Assignment mode of read/write weights. Valid values: `system` (auto-assigned), `custom`
                     * 
                     */
                    void SetWeightMode(const std::string& _weightMode);

                    /**
                     * 判断参数 WeightMode 是否已赋值
                     * @return WeightMode 是否已赋值
                     * 
                     */
                    bool WeightModeHasBeenSet() const;

                    /**
                     * 获取Read-Only weight of an instance
                     * @return InstanceWeights Read-Only weight of an instance
                     * 
                     */
                    std::vector<ProxyInstanceWeight> GetInstanceWeights() const;

                    /**
                     * 设置Read-Only weight of an instance
                     * @param _instanceWeights Read-Only weight of an instance
                     * 
                     */
                    void SetInstanceWeights(const std::vector<ProxyInstanceWeight>& _instanceWeights);

                    /**
                     * 判断参数 InstanceWeights 是否已赋值
                     * @return InstanceWeights 是否已赋值
                     * 
                     */
                    bool InstanceWeightsHasBeenSet() const;

                    /**
                     * 获取Whether to enable failover. If it is enabled, the connection address will route requests to the source instance in case of proxy failure. Valid values: `true`, `false`.
                     * @return FailOver Whether to enable failover. If it is enabled, the connection address will route requests to the source instance in case of proxy failure. Valid values: `true`, `false`.
                     * 
                     */
                    std::string GetFailOver() const;

                    /**
                     * 设置Whether to enable failover. If it is enabled, the connection address will route requests to the source instance in case of proxy failure. Valid values: `true`, `false`.
                     * @param _failOver Whether to enable failover. If it is enabled, the connection address will route requests to the source instance in case of proxy failure. Valid values: `true`, `false`.
                     * 
                     */
                    void SetFailOver(const std::string& _failOver);

                    /**
                     * 判断参数 FailOver 是否已赋值
                     * @return FailOver 是否已赋值
                     * 
                     */
                    bool FailOverHasBeenSet() const;

                    /**
                     * 获取Whether to automatically add read-only instances. Valid values: `true`, `false`
                     * @return AutoAddRo Whether to automatically add read-only instances. Valid values: `true`, `false`
                     * 
                     */
                    std::string GetAutoAddRo() const;

                    /**
                     * 设置Whether to automatically add read-only instances. Valid values: `true`, `false`
                     * @param _autoAddRo Whether to automatically add read-only instances. Valid values: `true`, `false`
                     * 
                     */
                    void SetAutoAddRo(const std::string& _autoAddRo);

                    /**
                     * 判断参数 AutoAddRo 是否已赋值
                     * @return AutoAddRo 是否已赋值
                     * 
                     */
                    bool AutoAddRoHasBeenSet() const;

                    /**
                     * 获取Whether to enable read/write separation
                     * @return OpenRw Whether to enable read/write separation
                     * 
                     */
                    std::string GetOpenRw() const;

                    /**
                     * 设置Whether to enable read/write separation
                     * @param _openRw Whether to enable read/write separation
                     * 
                     */
                    void SetOpenRw(const std::string& _openRw);

                    /**
                     * 判断参数 OpenRw 是否已赋值
                     * @return OpenRw 是否已赋值
                     * 
                     */
                    bool OpenRwHasBeenSet() const;

                    /**
                     * 获取Read/Write type. Valid values:
`READWRITE`, `READONLY`.
                     * @return RwType Read/Write type. Valid values:
`READWRITE`, `READONLY`.
                     * 
                     */
                    std::string GetRwType() const;

                    /**
                     * 设置Read/Write type. Valid values:
`READWRITE`, `READONLY`.
                     * @param _rwType Read/Write type. Valid values:
`READWRITE`, `READONLY`.
                     * 
                     */
                    void SetRwType(const std::string& _rwType);

                    /**
                     * 判断参数 RwType 是否已赋值
                     * @return RwType 是否已赋值
                     * 
                     */
                    bool RwTypeHasBeenSet() const;

                    /**
                     * 获取Transaction split
                     * @return TransSplit Transaction split
                     * 
                     */
                    bool GetTransSplit() const;

                    /**
                     * 设置Transaction split
                     * @param _transSplit Transaction split
                     * 
                     */
                    void SetTransSplit(const bool& _transSplit);

                    /**
                     * 判断参数 TransSplit 是否已赋值
                     * @return TransSplit 是否已赋值
                     * 
                     */
                    bool TransSplitHasBeenSet() const;

                    /**
                     * 获取Connection mode. Valid values:
`nearby`, `balance`.
                     * @return AccessMode Connection mode. Valid values:
`nearby`, `balance`.
                     * 
                     */
                    std::string GetAccessMode() const;

                    /**
                     * 设置Connection mode. Valid values:
`nearby`, `balance`.
                     * @param _accessMode Connection mode. Valid values:
`nearby`, `balance`.
                     * 
                     */
                    void SetAccessMode(const std::string& _accessMode);

                    /**
                     * 判断参数 AccessMode 是否已赋值
                     * @return AccessMode 是否已赋值
                     * 
                     */
                    bool AccessModeHasBeenSet() const;

                    /**
                     * 获取Whether to enable the connection pool. Valid values: 
`yes`, `no`.
                     * @return OpenConnectionPool Whether to enable the connection pool. Valid values: 
`yes`, `no`.
                     * 
                     */
                    std::string GetOpenConnectionPool() const;

                    /**
                     * 设置Whether to enable the connection pool. Valid values: 
`yes`, `no`.
                     * @param _openConnectionPool Whether to enable the connection pool. Valid values: 
`yes`, `no`.
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
                     * 获取Connection pool type. Valid values:
`ConnectionPoolType`, `SessionConnectionPool`.
                     * @return ConnectionPoolType Connection pool type. Valid values:
`ConnectionPoolType`, `SessionConnectionPool`.
                     * 
                     */
                    std::string GetConnectionPoolType() const;

                    /**
                     * 设置Connection pool type. Valid values:
`ConnectionPoolType`, `SessionConnectionPool`.
                     * @param _connectionPoolType Connection pool type. Valid values:
`ConnectionPoolType`, `SessionConnectionPool`.
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
                     * 获取Connection persistence timeout
                     * @return ConnectionPoolTimeOut Connection persistence timeout
                     * 
                     */
                    int64_t GetConnectionPoolTimeOut() const;

                    /**
                     * 设置Connection persistence timeout
                     * @param _connectionPoolTimeOut Connection persistence timeout
                     * 
                     */
                    void SetConnectionPoolTimeOut(const int64_t& _connectionPoolTimeOut);

                    /**
                     * 判断参数 ConnectionPoolTimeOut 是否已赋值
                     * @return ConnectionPoolTimeOut 是否已赋值
                     * 
                     */
                    bool ConnectionPoolTimeOutHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Database proxy group ID
                     */
                    std::string m_proxyGroupId;
                    bool m_proxyGroupIdHasBeenSet;

                    /**
                     * Consistency type. Valid values: `eventual` (eventual consistency), `session` (session consistency), `global` (global consistency).
                     */
                    std::string m_consistencyType;
                    bool m_consistencyTypeHasBeenSet;

                    /**
                     * Consistency timeout period
                     */
                    std::string m_consistencyTimeOut;
                    bool m_consistencyTimeOutHasBeenSet;

                    /**
                     * Assignment mode of read/write weights. Valid values: `system` (auto-assigned), `custom`
                     */
                    std::string m_weightMode;
                    bool m_weightModeHasBeenSet;

                    /**
                     * Read-Only weight of an instance
                     */
                    std::vector<ProxyInstanceWeight> m_instanceWeights;
                    bool m_instanceWeightsHasBeenSet;

                    /**
                     * Whether to enable failover. If it is enabled, the connection address will route requests to the source instance in case of proxy failure. Valid values: `true`, `false`.
                     */
                    std::string m_failOver;
                    bool m_failOverHasBeenSet;

                    /**
                     * Whether to automatically add read-only instances. Valid values: `true`, `false`
                     */
                    std::string m_autoAddRo;
                    bool m_autoAddRoHasBeenSet;

                    /**
                     * Whether to enable read/write separation
                     */
                    std::string m_openRw;
                    bool m_openRwHasBeenSet;

                    /**
                     * Read/Write type. Valid values:
`READWRITE`, `READONLY`.
                     */
                    std::string m_rwType;
                    bool m_rwTypeHasBeenSet;

                    /**
                     * Transaction split
                     */
                    bool m_transSplit;
                    bool m_transSplitHasBeenSet;

                    /**
                     * Connection mode. Valid values:
`nearby`, `balance`.
                     */
                    std::string m_accessMode;
                    bool m_accessModeHasBeenSet;

                    /**
                     * Whether to enable the connection pool. Valid values: 
`yes`, `no`.
                     */
                    std::string m_openConnectionPool;
                    bool m_openConnectionPoolHasBeenSet;

                    /**
                     * Connection pool type. Valid values:
`ConnectionPoolType`, `SessionConnectionPool`.
                     */
                    std::string m_connectionPoolType;
                    bool m_connectionPoolTypeHasBeenSet;

                    /**
                     * Connection persistence timeout
                     */
                    int64_t m_connectionPoolTimeOut;
                    bool m_connectionPoolTimeOutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYPROXYRWSPLITREQUEST_H_
