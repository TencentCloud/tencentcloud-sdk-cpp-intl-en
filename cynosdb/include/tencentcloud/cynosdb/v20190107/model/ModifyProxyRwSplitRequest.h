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
                     * 获取<p>Cluster ID, for example, cynosdbmysql-asd123</p>
                     * @return ClusterId <p>Cluster ID, for example, cynosdbmysql-asd123</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>Cluster ID, for example, cynosdbmysql-asd123</p>
                     * @param _clusterId <p>Cluster ID, for example, cynosdbmysql-asd123</p>
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
                     * 获取<p>Database Proxy Group ID, for example, cynosdbmysql-proxy-qwe123</p>
                     * @return ProxyGroupId <p>Database Proxy Group ID, for example, cynosdbmysql-proxy-qwe123</p>
                     * 
                     */
                    std::string GetProxyGroupId() const;

                    /**
                     * 设置<p>Database Proxy Group ID, for example, cynosdbmysql-proxy-qwe123</p>
                     * @param _proxyGroupId <p>Database Proxy Group ID, for example, cynosdbmysql-proxy-qwe123</p>
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
                     * 获取<p>Consistency type; "eventual"-final consistency, "session"-session consistency, "global"-global consistency</p>
                     * @return ConsistencyType <p>Consistency type; "eventual"-final consistency, "session"-session consistency, "global"-global consistency</p>
                     * 
                     */
                    std::string GetConsistencyType() const;

                    /**
                     * 设置<p>Consistency type; "eventual"-final consistency, "session"-session consistency, "global"-global consistency</p>
                     * @param _consistencyType <p>Consistency type; "eventual"-final consistency, "session"-session consistency, "global"-global consistency</p>
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
                     * 获取<p>Consistency timeout.<br>Value range: 0–1000000 (µs). Setting it to 0 means that if a read-only instance has a delay, causing the consistency policy to fail, the request will wait indefinitely.</p>
                     * @return ConsistencyTimeOut <p>Consistency timeout.<br>Value range: 0–1000000 (µs). Setting it to 0 means that if a read-only instance has a delay, causing the consistency policy to fail, the request will wait indefinitely.</p>
                     * 
                     */
                    std::string GetConsistencyTimeOut() const;

                    /**
                     * 设置<p>Consistency timeout.<br>Value range: 0–1000000 (µs). Setting it to 0 means that if a read-only instance has a delay, causing the consistency policy to fail, the request will wait indefinitely.</p>
                     * @param _consistencyTimeOut <p>Consistency timeout.<br>Value range: 0–1000000 (µs). Setting it to 0 means that if a read-only instance has a delay, causing the consistency policy to fail, the request will wait indefinitely.</p>
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
                     * 获取<p>Read-write weight allocation mode; system auto-assignment: "system", custom: "custom"</p>
                     * @return WeightMode <p>Read-write weight allocation mode; system auto-assignment: "system", custom: "custom"</p>
                     * 
                     */
                    std::string GetWeightMode() const;

                    /**
                     * 设置<p>Read-write weight allocation mode; system auto-assignment: "system", custom: "custom"</p>
                     * @param _weightMode <p>Read-write weight allocation mode; system auto-assignment: "system", custom: "custom"</p>
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
                     * 获取<p>Instance Read-Only Weight.</p>
                     * @return InstanceWeights <p>Instance Read-Only Weight.</p>
                     * 
                     */
                    std::vector<ProxyInstanceWeight> GetInstanceWeights() const;

                    /**
                     * 设置<p>Instance Read-Only Weight.</p>
                     * @param _instanceWeights <p>Instance Read-Only Weight.</p>
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
                     * 获取<p>Whether failover is enabled. After a fault occurs on the proxy, the connection address will be routed to the primary instance. Value: "yes", "no"</p>
                     * @return FailOver <p>Whether failover is enabled. After a fault occurs on the proxy, the connection address will be routed to the primary instance. Value: "yes", "no"</p>
                     * 
                     */
                    std::string GetFailOver() const;

                    /**
                     * 设置<p>Whether failover is enabled. After a fault occurs on the proxy, the connection address will be routed to the primary instance. Value: "yes", "no"</p>
                     * @param _failOver <p>Whether failover is enabled. After a fault occurs on the proxy, the connection address will be routed to the primary instance. Value: "yes", "no"</p>
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
                     * 获取<p>Whether to automatically add read-only instance. Parameter Value: "yes", "no"</p>
                     * @return AutoAddRo <p>Whether to automatically add read-only instance. Parameter Value: "yes", "no"</p>
                     * 
                     */
                    std::string GetAutoAddRo() const;

                    /**
                     * 设置<p>Whether to automatically add read-only instance. Parameter Value: "yes", "no"</p>
                     * @param _autoAddRo <p>Whether to automatically add read-only instance. Parameter Value: "yes", "no"</p>
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
                     * 获取<p>Whether to enable read-write separation.<br>This parameter is deprecated. Set the read-write attribute through RwType.</p>
                     * @return OpenRw <p>Whether to enable read-write separation.<br>This parameter is deprecated. Set the read-write attribute through RwType.</p>
                     * 
                     */
                    std::string GetOpenRw() const;

                    /**
                     * 设置<p>Whether to enable read-write separation.<br>This parameter is deprecated. Set the read-write attribute through RwType.</p>
                     * @param _openRw <p>Whether to enable read-write separation.<br>This parameter is deprecated. Set the read-write attribute through RwType.</p>
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
                     * 获取<p>Read-write type:<br>READWRITE,READONLY</p>
                     * @return RwType <p>Read-write type:<br>READWRITE,READONLY</p>
                     * 
                     */
                    std::string GetRwType() const;

                    /**
                     * 设置<p>Read-write type:<br>READWRITE,READONLY</p>
                     * @param _rwType <p>Read-write type:<br>READWRITE,READONLY</p>
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
                     * 获取<p>Transaction split.<br>Split reads and writes in a transaction to different instances for execution.</p>
                     * @return TransSplit <p>Transaction split.<br>Split reads and writes in a transaction to different instances for execution.</p>
                     * 
                     */
                    bool GetTransSplit() const;

                    /**
                     * 设置<p>Transaction split.<br>Split reads and writes in a transaction to different instances for execution.</p>
                     * @param _transSplit <p>Transaction split.<br>Split reads and writes in a transaction to different instances for execution.</p>
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
                     * 获取<p>Connection mode: <br>nearby, balance</p>
                     * @return AccessMode <p>Connection mode: <br>nearby, balance</p>
                     * 
                     */
                    std::string GetAccessMode() const;

                    /**
                     * 设置<p>Connection mode: <br>nearby, balance</p>
                     * @param _accessMode <p>Connection mode: <br>nearby, balance</p>
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
                     * 获取<p>Whether to enable connection pool: <br>yes,no</p>
                     * @return OpenConnectionPool <p>Whether to enable connection pool: <br>yes,no</p>
                     * 
                     */
                    std::string GetOpenConnectionPool() const;

                    /**
                     * 设置<p>Whether to enable connection pool: <br>yes,no</p>
                     * @param _openConnectionPool <p>Whether to enable connection pool: <br>yes,no</p>
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
                     * 获取<p>Connection pool type: <br>SessionConnectionPool</p>
                     * @return ConnectionPoolType <p>Connection pool type: <br>SessionConnectionPool</p>
                     * 
                     */
                    std::string GetConnectionPoolType() const;

                    /**
                     * 设置<p>Connection pool type: <br>SessionConnectionPool</p>
                     * @param _connectionPoolType <p>Connection pool type: <br>SessionConnectionPool</p>
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
                     * 获取<p>Connection pool time.<br>Optional range: 0–300 (seconds)</p>
                     * @return ConnectionPoolTimeOut <p>Connection pool time.<br>Optional range: 0–300 (seconds)</p>
                     * 
                     */
                    int64_t GetConnectionPoolTimeOut() const;

                    /**
                     * 设置<p>Connection pool time.<br>Optional range: 0–300 (seconds)</p>
                     * @param _connectionPoolTimeOut <p>Connection pool time.<br>Optional range: 0–300 (seconds)</p>
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
                     * 获取<p>Whether to treat the libra node as an ordinary RO node</p>
                     * @return ApNodeAsRoNode <p>Whether to treat the libra node as an ordinary RO node</p>
                     * 
                     */
                    bool GetApNodeAsRoNode() const;

                    /**
                     * 设置<p>Whether to treat the libra node as an ordinary RO node</p>
                     * @param _apNodeAsRoNode <p>Whether to treat the libra node as an ordinary RO node</p>
                     * 
                     */
                    void SetApNodeAsRoNode(const bool& _apNodeAsRoNode);

                    /**
                     * 判断参数 ApNodeAsRoNode 是否已赋值
                     * @return ApNodeAsRoNode 是否已赋值
                     * 
                     */
                    bool ApNodeAsRoNodeHasBeenSet() const;

                    /**
                     * 获取<p>Whether to forward to other nodes when a libra node fault occurs</p>
                     * @return ApQueryToOtherNode <p>Whether to forward to other nodes when a libra node fault occurs</p>
                     * 
                     */
                    bool GetApQueryToOtherNode() const;

                    /**
                     * 设置<p>Whether to forward to other nodes when a libra node fault occurs</p>
                     * @param _apQueryToOtherNode <p>Whether to forward to other nodes when a libra node fault occurs</p>
                     * 
                     */
                    void SetApQueryToOtherNode(const bool& _apQueryToOtherNode);

                    /**
                     * 判断参数 ApQueryToOtherNode 是否已赋值
                     * @return ApQueryToOtherNode 是否已赋值
                     * 
                     */
                    bool ApQueryToOtherNodeHasBeenSet() const;

                    /**
                     * 获取<p>Load balancing mode</p><p>Enumeration values:</p><ul><li>static: Static load</li><li>dynamic: Dynamic load</li></ul>
                     * @return LoadBalanceMode <p>Load balancing mode</p><p>Enumeration values:</p><ul><li>static: Static load</li><li>dynamic: Dynamic load</li></ul>
                     * 
                     */
                    std::string GetLoadBalanceMode() const;

                    /**
                     * 设置<p>Load balancing mode</p><p>Enumeration values:</p><ul><li>static: Static load</li><li>dynamic: Dynamic load</li></ul>
                     * @param _loadBalanceMode <p>Load balancing mode</p><p>Enumeration values:</p><ul><li>static: Static load</li><li>dynamic: Dynamic load</li></ul>
                     * 
                     */
                    void SetLoadBalanceMode(const std::string& _loadBalanceMode);

                    /**
                     * 判断参数 LoadBalanceMode 是否已赋值
                     * @return LoadBalanceMode 是否已赋值
                     * 
                     */
                    bool LoadBalanceModeHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable full transactional split. In a transaction, split the reads before and after the write to different instances for execution.</p>
                     * @return TransAllSplit <p>Whether to enable full transactional split. In a transaction, split the reads before and after the write to different instances for execution.</p>
                     * 
                     */
                    bool GetTransAllSplit() const;

                    /**
                     * 设置<p>Whether to enable full transactional split. In a transaction, split the reads before and after the write to different instances for execution.</p>
                     * @param _transAllSplit <p>Whether to enable full transactional split. In a transaction, split the reads before and after the write to different instances for execution.</p>
                     * 
                     */
                    void SetTransAllSplit(const bool& _transAllSplit);

                    /**
                     * 判断参数 TransAllSplit 是否已赋值
                     * @return TransAllSplit 是否已赋值
                     * 
                     */
                    bool TransAllSplitHasBeenSet() const;

                private:

                    /**
                     * <p>Cluster ID, for example, cynosdbmysql-asd123</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>Database Proxy Group ID, for example, cynosdbmysql-proxy-qwe123</p>
                     */
                    std::string m_proxyGroupId;
                    bool m_proxyGroupIdHasBeenSet;

                    /**
                     * <p>Consistency type; "eventual"-final consistency, "session"-session consistency, "global"-global consistency</p>
                     */
                    std::string m_consistencyType;
                    bool m_consistencyTypeHasBeenSet;

                    /**
                     * <p>Consistency timeout.<br>Value range: 0–1000000 (µs). Setting it to 0 means that if a read-only instance has a delay, causing the consistency policy to fail, the request will wait indefinitely.</p>
                     */
                    std::string m_consistencyTimeOut;
                    bool m_consistencyTimeOutHasBeenSet;

                    /**
                     * <p>Read-write weight allocation mode; system auto-assignment: "system", custom: "custom"</p>
                     */
                    std::string m_weightMode;
                    bool m_weightModeHasBeenSet;

                    /**
                     * <p>Instance Read-Only Weight.</p>
                     */
                    std::vector<ProxyInstanceWeight> m_instanceWeights;
                    bool m_instanceWeightsHasBeenSet;

                    /**
                     * <p>Whether failover is enabled. After a fault occurs on the proxy, the connection address will be routed to the primary instance. Value: "yes", "no"</p>
                     */
                    std::string m_failOver;
                    bool m_failOverHasBeenSet;

                    /**
                     * <p>Whether to automatically add read-only instance. Parameter Value: "yes", "no"</p>
                     */
                    std::string m_autoAddRo;
                    bool m_autoAddRoHasBeenSet;

                    /**
                     * <p>Whether to enable read-write separation.<br>This parameter is deprecated. Set the read-write attribute through RwType.</p>
                     */
                    std::string m_openRw;
                    bool m_openRwHasBeenSet;

                    /**
                     * <p>Read-write type:<br>READWRITE,READONLY</p>
                     */
                    std::string m_rwType;
                    bool m_rwTypeHasBeenSet;

                    /**
                     * <p>Transaction split.<br>Split reads and writes in a transaction to different instances for execution.</p>
                     */
                    bool m_transSplit;
                    bool m_transSplitHasBeenSet;

                    /**
                     * <p>Connection mode: <br>nearby, balance</p>
                     */
                    std::string m_accessMode;
                    bool m_accessModeHasBeenSet;

                    /**
                     * <p>Whether to enable connection pool: <br>yes,no</p>
                     */
                    std::string m_openConnectionPool;
                    bool m_openConnectionPoolHasBeenSet;

                    /**
                     * <p>Connection pool type: <br>SessionConnectionPool</p>
                     */
                    std::string m_connectionPoolType;
                    bool m_connectionPoolTypeHasBeenSet;

                    /**
                     * <p>Connection pool time.<br>Optional range: 0–300 (seconds)</p>
                     */
                    int64_t m_connectionPoolTimeOut;
                    bool m_connectionPoolTimeOutHasBeenSet;

                    /**
                     * <p>Whether to treat the libra node as an ordinary RO node</p>
                     */
                    bool m_apNodeAsRoNode;
                    bool m_apNodeAsRoNodeHasBeenSet;

                    /**
                     * <p>Whether to forward to other nodes when a libra node fault occurs</p>
                     */
                    bool m_apQueryToOtherNode;
                    bool m_apQueryToOtherNodeHasBeenSet;

                    /**
                     * <p>Load balancing mode</p><p>Enumeration values:</p><ul><li>static: Static load</li><li>dynamic: Dynamic load</li></ul>
                     */
                    std::string m_loadBalanceMode;
                    bool m_loadBalanceModeHasBeenSet;

                    /**
                     * <p>Whether to enable full transactional split. In a transaction, split the reads before and after the write to different instances for execution.</p>
                     */
                    bool m_transAllSplit;
                    bool m_transAllSplitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYPROXYRWSPLITREQUEST_H_
