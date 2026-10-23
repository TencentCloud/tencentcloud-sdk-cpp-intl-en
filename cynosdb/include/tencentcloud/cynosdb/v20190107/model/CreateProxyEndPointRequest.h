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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATEPROXYENDPOINTREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATEPROXYENDPOINTREQUEST_H_

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
                * CreateProxyEndPoint request structure.
                */
                class CreateProxyEndPointRequest : public AbstractModel
                {
                public:
                    CreateProxyEndPointRequest();
                    ~CreateProxyEndPointRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Cluster ID.</p>
                     * @return ClusterId <p>Cluster ID.</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>Cluster ID.</p>
                     * @param _clusterId <p>Cluster ID.</p>
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
                     * 获取<p>VPC ID.</p>
                     * @return UniqueVpcId <p>VPC ID.</p>
                     * 
                     */
                    std::string GetUniqueVpcId() const;

                    /**
                     * 设置<p>VPC ID.</p>
                     * @param _uniqueVpcId <p>VPC ID.</p>
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
                     * 获取<p>VPC subnet ID.</p>
                     * @return UniqueSubnetId <p>VPC subnet ID.</p>
                     * 
                     */
                    std::string GetUniqueSubnetId() const;

                    /**
                     * 设置<p>VPC subnet ID.</p>
                     * @param _uniqueSubnetId <p>VPC subnet ID.</p>
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
                     * 获取<p>Connection pool type: SessionConnectionPool (session-level connection pool).</p>
                     * @return ConnectionPoolType <p>Connection pool type: SessionConnectionPool (session-level connection pool).</p>
                     * 
                     */
                    std::string GetConnectionPoolType() const;

                    /**
                     * 设置<p>Connection pool type: SessionConnectionPool (session-level connection pool).</p>
                     * @param _connectionPoolType <p>Connection pool type: SessionConnectionPool (session-level connection pool).</p>
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
                     * 获取<p>Whether to enable the connection pool.<br>yes: enable.<br>no: disabled.</p>
                     * @return OpenConnectionPool <p>Whether to enable the connection pool.<br>yes: enable.<br>no: disabled.</p>
                     * 
                     */
                    std::string GetOpenConnectionPool() const;

                    /**
                     * 设置<p>Whether to enable the connection pool.<br>yes: enable.<br>no: disabled.</p>
                     * @param _openConnectionPool <p>Whether to enable the connection pool.<br>yes: enable.<br>no: disabled.</p>
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
                     * 获取<p>Connection pool threshold: unit (seconds), optional range: 0-300 seconds.</p>
                     * @return ConnectionPoolTimeOut <p>Connection pool threshold: unit (seconds), optional range: 0-300 seconds.</p>
                     * 
                     */
                    int64_t GetConnectionPoolTimeOut() const;

                    /**
                     * 设置<p>Connection pool threshold: unit (seconds), optional range: 0-300 seconds.</p>
                     * @param _connectionPoolTimeOut <p>Connection pool threshold: unit (seconds), optional range: 0-300 seconds.</p>
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
                     * 获取<p>Bound security group ID array.</p>
                     * @return SecurityGroupIds <p>Bound security group ID array.</p>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置<p>Bound security group ID array.</p>
                     * @param _securityGroupIds <p>Bound security group ID array.</p>
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
                     * 获取<p>Description.</p>
                     * @return Description <p>Description.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Description.</p>
                     * @param _description <p>Description.</p>
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
                     * 获取<p>vip information that should be bound, which must correspond to UniqueVpcId.</p>
                     * @return Vip <p>vip information that should be bound, which must correspond to UniqueVpcId.</p>
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置<p>vip information that should be bound, which must correspond to UniqueVpcId.</p>
                     * @param _vip <p>vip information that should be bound, which must correspond to UniqueVpcId.</p>
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取<p>Weight mode:<br>system: system-assigned.<br>custom: custom.</p>
                     * @return WeightMode <p>Weight mode:<br>system: system-assigned.<br>custom: custom.</p>
                     * 
                     */
                    std::string GetWeightMode() const;

                    /**
                     * 设置<p>Weight mode:<br>system: system-assigned.<br>custom: custom.</p>
                     * @param _weightMode <p>Weight mode:<br>system: system-assigned.<br>custom: custom.</p>
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
                     * 获取<p>Whether to automatically add a read-only instance.<br>yes: automatically add a read-only instance.<br>no: do not automatically add a read-only instance.</p>
                     * @return AutoAddRo <p>Whether to automatically add a read-only instance.<br>yes: automatically add a read-only instance.<br>no: do not automatically add a read-only instance.</p>
                     * 
                     */
                    std::string GetAutoAddRo() const;

                    /**
                     * 设置<p>Whether to automatically add a read-only instance.<br>yes: automatically add a read-only instance.<br>no: do not automatically add a read-only instance.</p>
                     * @param _autoAddRo <p>Whether to automatically add a read-only instance.<br>yes: automatically add a read-only instance.<br>no: do not automatically add a read-only instance.</p>
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
                     * 获取<p>Whether to enable fault migration.<br>yes: enabled. Once enabled, when a database proxy failure occurs, the connection address will be routed to the primary instance.<br>no: disabled.<br>Description:<br>This item can be set only when the RwType parameter value is READWRITE.</p>
                     * @return FailOver <p>Whether to enable fault migration.<br>yes: enabled. Once enabled, when a database proxy failure occurs, the connection address will be routed to the primary instance.<br>no: disabled.<br>Description:<br>This item can be set only when the RwType parameter value is READWRITE.</p>
                     * 
                     */
                    std::string GetFailOver() const;

                    /**
                     * 设置<p>Whether to enable fault migration.<br>yes: enabled. Once enabled, when a database proxy failure occurs, the connection address will be routed to the primary instance.<br>no: disabled.<br>Description:<br>This item can be set only when the RwType parameter value is READWRITE.</p>
                     * @param _failOver <p>Whether to enable fault migration.<br>yes: enabled. Once enabled, when a database proxy failure occurs, the connection address will be routed to the primary instance.<br>no: disabled.<br>Description:<br>This item can be set only when the RwType parameter value is READWRITE.</p>
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
                     * 获取<p>Consistency type:<br>eventual: final consistency.<br>global: global consistency.<br>session: session consistency.<br>Description:<br>This item can be set only when the RwType parameter value is READWRITE.</p>
                     * @return ConsistencyType <p>Consistency type:<br>eventual: final consistency.<br>global: global consistency.<br>session: session consistency.<br>Description:<br>This item can be set only when the RwType parameter value is READWRITE.</p>
                     * 
                     */
                    std::string GetConsistencyType() const;

                    /**
                     * 设置<p>Consistency type:<br>eventual: final consistency.<br>global: global consistency.<br>session: session consistency.<br>Description:<br>This item can be set only when the RwType parameter value is READWRITE.</p>
                     * @param _consistencyType <p>Consistency type:<br>eventual: final consistency.<br>global: global consistency.<br>session: session consistency.<br>Description:<br>This item can be set only when the RwType parameter value is READWRITE.</p>
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
                     * 获取<p>Read-write attribute:<br>READWRITE: read-write separation. Only when this parameter is set to READWRITE can you set the FailOver and ConsistencyType parameters.<br>READONLY: read-only.</p>
                     * @return RwType <p>Read-write attribute:<br>READWRITE: read-write separation. Only when this parameter is set to READWRITE can you set the FailOver and ConsistencyType parameters.<br>READONLY: read-only.</p>
                     * 
                     */
                    std::string GetRwType() const;

                    /**
                     * 设置<p>Read-write attribute:<br>READWRITE: read-write separation. Only when this parameter is set to READWRITE can you set the FailOver and ConsistencyType parameters.<br>READONLY: read-only.</p>
                     * @param _rwType <p>Read-write attribute:<br>READWRITE: read-write separation. Only when this parameter is set to READWRITE can you set the FailOver and ConsistencyType parameters.<br>READONLY: read-only.</p>
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
                     * 获取<p>Consistency timeout. Value range: 0–1000000 (µs). When set to 0, if a read-only instance has latency causing the consistency policy to fail, the request will wait indefinitely.</p>
                     * @return ConsistencyTimeOut <p>Consistency timeout. Value range: 0–1000000 (µs). When set to 0, if a read-only instance has latency causing the consistency policy to fail, the request will wait indefinitely.</p>
                     * 
                     */
                    int64_t GetConsistencyTimeOut() const;

                    /**
                     * 设置<p>Consistency timeout. Value range: 0–1000000 (µs). When set to 0, if a read-only instance has latency causing the consistency policy to fail, the request will wait indefinitely.</p>
                     * @param _consistencyTimeOut <p>Consistency timeout. Value range: 0–1000000 (µs). When set to 0, if a read-only instance has latency causing the consistency policy to fail, the request will wait indefinitely.</p>
                     * 
                     */
                    void SetConsistencyTimeOut(const int64_t& _consistencyTimeOut);

                    /**
                     * 判断参数 ConsistencyTimeOut 是否已赋值
                     * @return ConsistencyTimeOut 是否已赋值
                     * 
                     */
                    bool ConsistencyTimeOutHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable transaction splitting. Once enabled, reads and writes are split within a transaction and executed on different instances.</p>
                     * @return TransSplit <p>Whether to enable transaction splitting. Once enabled, reads and writes are split within a transaction and executed on different instances.</p>
                     * 
                     */
                    bool GetTransSplit() const;

                    /**
                     * 设置<p>Whether to enable transaction splitting. Once enabled, reads and writes are split within a transaction and executed on different instances.</p>
                     * @param _transSplit <p>Whether to enable transaction splitting. Once enabled, reads and writes are split within a transaction and executed on different instances.</p>
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
                     * 获取<p>Access mode: <br>nearby: nearest access. <br>balance: balanced distribution.</p>
                     * @return AccessMode <p>Access mode: <br>nearby: nearest access. <br>balance: balanced distribution.</p>
                     * 
                     */
                    std::string GetAccessMode() const;

                    /**
                     * 设置<p>Access mode: <br>nearby: nearest access. <br>balance: balanced distribution.</p>
                     * @param _accessMode <p>Access mode: <br>nearby: nearest access. <br>balance: balanced distribution.</p>
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
                     * 获取<p>Instance weight.</p>
                     * @return InstanceWeights <p>Instance weight.</p>
                     * 
                     */
                    std::vector<ProxyInstanceWeight> GetInstanceWeights() const;

                    /**
                     * 设置<p>Instance weight.</p>
                     * @param _instanceWeights <p>Instance weight.</p>
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
                     * 获取<p>Whether to enable full transactional sharding. In a transaction, split the reads before and after the transactional write to different instances for execution.</p>
                     * @return TransAllSplit <p>Whether to enable full transactional sharding. In a transaction, split the reads before and after the transactional write to different instances for execution.</p>
                     * 
                     */
                    bool GetTransAllSplit() const;

                    /**
                     * 设置<p>Whether to enable full transactional sharding. In a transaction, split the reads before and after the transactional write to different instances for execution.</p>
                     * @param _transAllSplit <p>Whether to enable full transactional sharding. In a transaction, split the reads before and after the transactional write to different instances for execution.</p>
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
                     * <p>Cluster ID.</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>VPC ID.</p>
                     */
                    std::string m_uniqueVpcId;
                    bool m_uniqueVpcIdHasBeenSet;

                    /**
                     * <p>VPC subnet ID.</p>
                     */
                    std::string m_uniqueSubnetId;
                    bool m_uniqueSubnetIdHasBeenSet;

                    /**
                     * <p>Connection pool type: SessionConnectionPool (session-level connection pool).</p>
                     */
                    std::string m_connectionPoolType;
                    bool m_connectionPoolTypeHasBeenSet;

                    /**
                     * <p>Whether to enable the connection pool.<br>yes: enable.<br>no: disabled.</p>
                     */
                    std::string m_openConnectionPool;
                    bool m_openConnectionPoolHasBeenSet;

                    /**
                     * <p>Connection pool threshold: unit (seconds), optional range: 0-300 seconds.</p>
                     */
                    int64_t m_connectionPoolTimeOut;
                    bool m_connectionPoolTimeOutHasBeenSet;

                    /**
                     * <p>Bound security group ID array.</p>
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * <p>Description.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>vip information that should be bound, which must correspond to UniqueVpcId.</p>
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * <p>Weight mode:<br>system: system-assigned.<br>custom: custom.</p>
                     */
                    std::string m_weightMode;
                    bool m_weightModeHasBeenSet;

                    /**
                     * <p>Whether to automatically add a read-only instance.<br>yes: automatically add a read-only instance.<br>no: do not automatically add a read-only instance.</p>
                     */
                    std::string m_autoAddRo;
                    bool m_autoAddRoHasBeenSet;

                    /**
                     * <p>Whether to enable fault migration.<br>yes: enabled. Once enabled, when a database proxy failure occurs, the connection address will be routed to the primary instance.<br>no: disabled.<br>Description:<br>This item can be set only when the RwType parameter value is READWRITE.</p>
                     */
                    std::string m_failOver;
                    bool m_failOverHasBeenSet;

                    /**
                     * <p>Consistency type:<br>eventual: final consistency.<br>global: global consistency.<br>session: session consistency.<br>Description:<br>This item can be set only when the RwType parameter value is READWRITE.</p>
                     */
                    std::string m_consistencyType;
                    bool m_consistencyTypeHasBeenSet;

                    /**
                     * <p>Read-write attribute:<br>READWRITE: read-write separation. Only when this parameter is set to READWRITE can you set the FailOver and ConsistencyType parameters.<br>READONLY: read-only.</p>
                     */
                    std::string m_rwType;
                    bool m_rwTypeHasBeenSet;

                    /**
                     * <p>Consistency timeout. Value range: 0–1000000 (µs). When set to 0, if a read-only instance has latency causing the consistency policy to fail, the request will wait indefinitely.</p>
                     */
                    int64_t m_consistencyTimeOut;
                    bool m_consistencyTimeOutHasBeenSet;

                    /**
                     * <p>Whether to enable transaction splitting. Once enabled, reads and writes are split within a transaction and executed on different instances.</p>
                     */
                    bool m_transSplit;
                    bool m_transSplitHasBeenSet;

                    /**
                     * <p>Access mode: <br>nearby: nearest access. <br>balance: balanced distribution.</p>
                     */
                    std::string m_accessMode;
                    bool m_accessModeHasBeenSet;

                    /**
                     * <p>Instance weight.</p>
                     */
                    std::vector<ProxyInstanceWeight> m_instanceWeights;
                    bool m_instanceWeightsHasBeenSet;

                    /**
                     * <p>Load balancing mode</p><p>Enumeration values:</p><ul><li>static: Static load</li><li>dynamic: Dynamic load</li></ul>
                     */
                    std::string m_loadBalanceMode;
                    bool m_loadBalanceModeHasBeenSet;

                    /**
                     * <p>Whether to enable full transactional sharding. In a transaction, split the reads before and after the transactional write to different instances for execution.</p>
                     */
                    bool m_transAllSplit;
                    bool m_transAllSplitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATEPROXYENDPOINTREQUEST_H_
