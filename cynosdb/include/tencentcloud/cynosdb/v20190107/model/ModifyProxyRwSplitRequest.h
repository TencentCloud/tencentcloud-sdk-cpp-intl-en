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
                     * 获取<p>Database Proxy Group ID, such as cynosdbmysql-proxy-qwe123</p>
                     * @return ProxyGroupId <p>Database Proxy Group ID, such as cynosdbmysql-proxy-qwe123</p>
                     * 
                     */
                    std::string GetProxyGroupId() const;

                    /**
                     * 设置<p>Database Proxy Group ID, such as cynosdbmysql-proxy-qwe123</p>
                     * @param _proxyGroupId <p>Database Proxy Group ID, such as cynosdbmysql-proxy-qwe123</p>
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
                     * 获取<p>Consistency Type "eventual"-final consistency, "session"-session consistency, "global"-global consistency</p>
                     * @return ConsistencyType <p>Consistency Type "eventual"-final consistency, "session"-session consistency, "global"-global consistency</p>
                     * 
                     */
                    std::string GetConsistencyType() const;

                    /**
                     * 设置<p>Consistency Type "eventual"-final consistency, "session"-session consistency, "global"-global consistency</p>
                     * @param _consistencyType <p>Consistency Type "eventual"-final consistency, "session"-session consistency, "global"-global consistency</p>
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
                     * 获取<p>Consistency timeout.<br>Value ranges from 0 to 1000000 (microseconds). When set to 0, it means the request will wait if the read-only instance fails to satisfy the consistency policy due to delay.</p>
                     * @return ConsistencyTimeOut <p>Consistency timeout.<br>Value ranges from 0 to 1000000 (microseconds). When set to 0, it means the request will wait if the read-only instance fails to satisfy the consistency policy due to delay.</p>
                     * 
                     */
                    std::string GetConsistencyTimeOut() const;

                    /**
                     * 设置<p>Consistency timeout.<br>Value ranges from 0 to 1000000 (microseconds). When set to 0, it means the request will wait if the read-only instance fails to satisfy the consistency policy due to delay.</p>
                     * @param _consistencyTimeOut <p>Consistency timeout.<br>Value ranges from 0 to 1000000 (microseconds). When set to 0, it means the request will wait if the read-only instance fails to satisfy the consistency policy due to delay.</p>
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
                     * 获取<p>Read-write weight allocation mode; system Auto-Assignment: "system", custom: "custom"</p>
                     * @return WeightMode <p>Read-write weight allocation mode; system Auto-Assignment: "system", custom: "custom"</p>
                     * 
                     */
                    std::string GetWeightMode() const;

                    /**
                     * 设置<p>Read-write weight allocation mode; system Auto-Assignment: "system", custom: "custom"</p>
                     * @param _weightMode <p>Read-write weight allocation mode; system Auto-Assignment: "system", custom: "custom"</p>
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
                     * 获取<p>Instance read-only weight.</p>
                     * @return InstanceWeights <p>Instance read-only weight.</p>
                     * 
                     */
                    std::vector<ProxyInstanceWeight> GetInstanceWeights() const;

                    /**
                     * 设置<p>Instance read-only weight.</p>
                     * @param _instanceWeights <p>Instance read-only weight.</p>
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
                     * 获取<p>Whether fault migration is enabled. After a failure occurs, the connection address will be routed to primary instance. Value: "yes", "no"</p>
                     * @return FailOver <p>Whether fault migration is enabled. After a failure occurs, the connection address will be routed to primary instance. Value: "yes", "no"</p>
                     * 
                     */
                    std::string GetFailOver() const;

                    /**
                     * 设置<p>Whether fault migration is enabled. After a failure occurs, the connection address will be routed to primary instance. Value: "yes", "no"</p>
                     * @param _failOver <p>Whether fault migration is enabled. After a failure occurs, the connection address will be routed to primary instance. Value: "yes", "no"</p>
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
                     * 获取<p>Automatically add read-only instance, value: "yes", "no"</p>
                     * @return AutoAddRo <p>Automatically add read-only instance, value: "yes", "no"</p>
                     * 
                     */
                    std::string GetAutoAddRo() const;

                    /**
                     * 设置<p>Automatically add read-only instance, value: "yes", "no"</p>
                     * @param _autoAddRo <p>Automatically add read-only instance, value: "yes", "no"</p>
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
                     * 获取<p>Read-write type:<br>READWRITE, READONLY</p>
                     * @return RwType <p>Read-write type:<br>READWRITE, READONLY</p>
                     * 
                     */
                    std::string GetRwType() const;

                    /**
                     * 设置<p>Read-write type:<br>READWRITE, READONLY</p>
                     * @param _rwType <p>Read-write type:<br>READWRITE, READONLY</p>
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
                     * 获取<p>Transaction split.<br>Read and write operations in a transaction are split and executed on different instances.</p>
                     * @return TransSplit <p>Transaction split.<br>Read and write operations in a transaction are split and executed on different instances.</p>
                     * 
                     */
                    bool GetTransSplit() const;

                    /**
                     * 设置<p>Transaction split.<br>Read and write operations in a transaction are split and executed on different instances.</p>
                     * @param _transSplit <p>Transaction split.<br>Read and write operations in a transaction are split and executed on different instances.</p>
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
                     * 获取<p>Connection mode:<br>nearby, balance</p>
                     * @return AccessMode <p>Connection mode:<br>nearby, balance</p>
                     * 
                     */
                    std::string GetAccessMode() const;

                    /**
                     * 设置<p>Connection mode:<br>nearby, balance</p>
                     * @param _accessMode <p>Connection mode:<br>nearby, balance</p>
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
                     * 获取<p>Whether to enable the connection pool:<br>yes, no</p>
                     * @return OpenConnectionPool <p>Whether to enable the connection pool:<br>yes, no</p>
                     * 
                     */
                    std::string GetOpenConnectionPool() const;

                    /**
                     * 设置<p>Whether to enable the connection pool:<br>yes, no</p>
                     * @param _openConnectionPool <p>Whether to enable the connection pool:<br>yes, no</p>
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
                     * 获取<p>Connection pool Type:<br>SessionConnectionPool</p>
                     * @return ConnectionPoolType <p>Connection pool Type:<br>SessionConnectionPool</p>
                     * 
                     */
                    std::string GetConnectionPoolType() const;

                    /**
                     * 设置<p>Connection pool Type:<br>SessionConnectionPool</p>
                     * @param _connectionPoolType <p>Connection pool Type:<br>SessionConnectionPool</p>
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
                     * 获取<p>Connection pool time.<br>Optional range: 0-300 (seconds).</p>
                     * @return ConnectionPoolTimeOut <p>Connection pool time.<br>Optional range: 0-300 (seconds).</p>
                     * 
                     */
                    int64_t GetConnectionPoolTimeOut() const;

                    /**
                     * 设置<p>Connection pool time.<br>Optional range: 0-300 (seconds).</p>
                     * @param _connectionPoolTimeOut <p>Connection pool time.<br>Optional range: 0-300 (seconds).</p>
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
                     * 获取<p>Load balancing mode</p><p>Enumeration value:</p><ul><li>static: Static load</li><li>dynamic: Dynamic load</li></ul>
                     * @return LoadBalanceMode <p>Load balancing mode</p><p>Enumeration value:</p><ul><li>static: Static load</li><li>dynamic: Dynamic load</li></ul>
                     * 
                     */
                    std::string GetLoadBalanceMode() const;

                    /**
                     * 设置<p>Load balancing mode</p><p>Enumeration value:</p><ul><li>static: Static load</li><li>dynamic: Dynamic load</li></ul>
                     * @param _loadBalanceMode <p>Load balancing mode</p><p>Enumeration value:</p><ul><li>static: Static load</li><li>dynamic: Dynamic load</li></ul>
                     * 
                     */
                    void SetLoadBalanceMode(const std::string& _loadBalanceMode);

                    /**
                     * 判断参数 LoadBalanceMode 是否已赋值
                     * @return LoadBalanceMode 是否已赋值
                     * 
                     */
                    bool LoadBalanceModeHasBeenSet() const;

                private:

                    /**
                     * <p>Cluster ID, for example, cynosdbmysql-asd123</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>Database Proxy Group ID, such as cynosdbmysql-proxy-qwe123</p>
                     */
                    std::string m_proxyGroupId;
                    bool m_proxyGroupIdHasBeenSet;

                    /**
                     * <p>Consistency Type "eventual"-final consistency, "session"-session consistency, "global"-global consistency</p>
                     */
                    std::string m_consistencyType;
                    bool m_consistencyTypeHasBeenSet;

                    /**
                     * <p>Consistency timeout.<br>Value ranges from 0 to 1000000 (microseconds). When set to 0, it means the request will wait if the read-only instance fails to satisfy the consistency policy due to delay.</p>
                     */
                    std::string m_consistencyTimeOut;
                    bool m_consistencyTimeOutHasBeenSet;

                    /**
                     * <p>Read-write weight allocation mode; system Auto-Assignment: "system", custom: "custom"</p>
                     */
                    std::string m_weightMode;
                    bool m_weightModeHasBeenSet;

                    /**
                     * <p>Instance read-only weight.</p>
                     */
                    std::vector<ProxyInstanceWeight> m_instanceWeights;
                    bool m_instanceWeightsHasBeenSet;

                    /**
                     * <p>Whether fault migration is enabled. After a failure occurs, the connection address will be routed to primary instance. Value: "yes", "no"</p>
                     */
                    std::string m_failOver;
                    bool m_failOverHasBeenSet;

                    /**
                     * <p>Automatically add read-only instance, value: "yes", "no"</p>
                     */
                    std::string m_autoAddRo;
                    bool m_autoAddRoHasBeenSet;

                    /**
                     * <p>Whether to enable read-write separation.<br>This parameter is deprecated. Set the read-write attribute through RwType.</p>
                     */
                    std::string m_openRw;
                    bool m_openRwHasBeenSet;

                    /**
                     * <p>Read-write type:<br>READWRITE, READONLY</p>
                     */
                    std::string m_rwType;
                    bool m_rwTypeHasBeenSet;

                    /**
                     * <p>Transaction split.<br>Read and write operations in a transaction are split and executed on different instances.</p>
                     */
                    bool m_transSplit;
                    bool m_transSplitHasBeenSet;

                    /**
                     * <p>Connection mode:<br>nearby, balance</p>
                     */
                    std::string m_accessMode;
                    bool m_accessModeHasBeenSet;

                    /**
                     * <p>Whether to enable the connection pool:<br>yes, no</p>
                     */
                    std::string m_openConnectionPool;
                    bool m_openConnectionPoolHasBeenSet;

                    /**
                     * <p>Connection pool Type:<br>SessionConnectionPool</p>
                     */
                    std::string m_connectionPoolType;
                    bool m_connectionPoolTypeHasBeenSet;

                    /**
                     * <p>Connection pool time.<br>Optional range: 0-300 (seconds).</p>
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
                     * <p>Load balancing mode</p><p>Enumeration value:</p><ul><li>static: Static load</li><li>dynamic: Dynamic load</li></ul>
                     */
                    std::string m_loadBalanceMode;
                    bool m_loadBalanceModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYPROXYRWSPLITREQUEST_H_
