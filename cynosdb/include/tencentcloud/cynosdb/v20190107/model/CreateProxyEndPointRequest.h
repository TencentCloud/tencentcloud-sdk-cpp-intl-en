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
                     * 获取Cluster ID.
                     * @return ClusterId Cluster ID.
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID.
                     * @param _clusterId Cluster ID.
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
                     * 获取VPC ID. By default, it remains consistent with the VPC ID of the cluster.
                     * @return UniqueVpcId VPC ID. By default, it remains consistent with the VPC ID of the cluster.
                     * 
                     */
                    std::string GetUniqueVpcId() const;

                    /**
                     * 设置VPC ID. By default, it remains consistent with the VPC ID of the cluster.
                     * @param _uniqueVpcId VPC ID. By default, it remains consistent with the VPC ID of the cluster.
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
                     * 获取Subnet ID of the VPC. By default, it remains consistent with the subnet ID of the cluster.
                     * @return UniqueSubnetId Subnet ID of the VPC. By default, it remains consistent with the subnet ID of the cluster.
                     * 
                     */
                    std::string GetUniqueSubnetId() const;

                    /**
                     * 设置Subnet ID of the VPC. By default, it remains consistent with the subnet ID of the cluster.
                     * @param _uniqueSubnetId Subnet ID of the VPC. By default, it remains consistent with the subnet ID of the cluster.
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
                     * 获取Type of connection pool: SessionConnectionPool (session-level connection pool).
                     * @return ConnectionPoolType Type of connection pool: SessionConnectionPool (session-level connection pool).
                     * 
                     */
                    std::string GetConnectionPoolType() const;

                    /**
                     * 设置Type of connection pool: SessionConnectionPool (session-level connection pool).
                     * @param _connectionPoolType Type of connection pool: SessionConnectionPool (session-level connection pool).
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
                     * 获取Whether to enable the connection pool.
yes: indicates enabled.
no: indicates not enabled.
                     * @return OpenConnectionPool Whether to enable the connection pool.
yes: indicates enabled.
no: indicates not enabled.
                     * 
                     */
                    std::string GetOpenConnectionPool() const;

                    /**
                     * 设置Whether to enable the connection pool.
yes: indicates enabled.
no: indicates not enabled.
                     * @param _openConnectionPool Whether to enable the connection pool.
yes: indicates enabled.
no: indicates not enabled.
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
                     * 获取Threshold of the connection pool: unit (seconds). Valid values: 0 - 300 seconds.
                     * @return ConnectionPoolTimeOut Threshold of the connection pool: unit (seconds). Valid values: 0 - 300 seconds.
                     * 
                     */
                    int64_t GetConnectionPoolTimeOut() const;

                    /**
                     * 设置Threshold of the connection pool: unit (seconds). Valid values: 0 - 300 seconds.
                     * @param _connectionPoolTimeOut Threshold of the connection pool: unit (seconds). Valid values: 0 - 300 seconds.
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
                     * 获取Array of bound security group IDs.
                     * @return SecurityGroupIds Array of bound security group IDs.
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置Array of bound security group IDs.
                     * @param _securityGroupIds Array of bound security group IDs.
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
                     * 获取The vip information to be bound must correspond to the UniqueVpcId.
                     * @return Vip The vip information to be bound must correspond to the UniqueVpcId.
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置The vip information to be bound must correspond to the UniqueVpcId.
                     * @param _vip The vip information to be bound must correspond to the UniqueVpcId.
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
                     * 获取Weight mode:
system: system-assigned.
custom: custom.
                     * @return WeightMode Weight mode:
system: system-assigned.
custom: custom.
                     * 
                     */
                    std::string GetWeightMode() const;

                    /**
                     * 设置Weight mode:
system: system-assigned.
custom: custom.
                     * @param _weightMode Weight mode:
system: system-assigned.
custom: custom.
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
                     * 获取Whether to automatically add a read-only instance.
yes: indicates automatically adding a read-only instance.
no: indicates not to automatically add a read-only instance.
                     * @return AutoAddRo Whether to automatically add a read-only instance.
yes: indicates automatically adding a read-only instance.
no: indicates not to automatically add a read-only instance.
                     * 
                     */
                    std::string GetAutoAddRo() const;

                    /**
                     * 设置Whether to automatically add a read-only instance.
yes: indicates automatically adding a read-only instance.
no: indicates not to automatically add a read-only instance.
                     * @param _autoAddRo Whether to automatically add a read-only instance.
yes: indicates automatically adding a read-only instance.
no: indicates not to automatically add a read-only instance.
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
                     * 获取Whether to enable failover.
yes: indicates enabled. After it is enabled, when the database proxy encounters faults, the connection address will be routed to the primary instance.
no: indicates not enabled.
Description:
Only when the value of the RwType parameter is READWRITE can this option be configured.
                     * @return FailOver Whether to enable failover.
yes: indicates enabled. After it is enabled, when the database proxy encounters faults, the connection address will be routed to the primary instance.
no: indicates not enabled.
Description:
Only when the value of the RwType parameter is READWRITE can this option be configured.
                     * 
                     */
                    std::string GetFailOver() const;

                    /**
                     * 设置Whether to enable failover.
yes: indicates enabled. After it is enabled, when the database proxy encounters faults, the connection address will be routed to the primary instance.
no: indicates not enabled.
Description:
Only when the value of the RwType parameter is READWRITE can this option be configured.
                     * @param _failOver Whether to enable failover.
yes: indicates enabled. After it is enabled, when the database proxy encounters faults, the connection address will be routed to the primary instance.
no: indicates not enabled.
Description:
Only when the value of the RwType parameter is READWRITE can this option be configured.
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
                     * 获取Consistency Type:
eventual: eventual consistency.
global: global consistency.
session: session consistency.
Description:
Only when the RwType parameter value is READWRITE can this option be configured.
                     * @return ConsistencyType Consistency Type:
eventual: eventual consistency.
global: global consistency.
session: session consistency.
Description:
Only when the RwType parameter value is READWRITE can this option be configured.
                     * 
                     */
                    std::string GetConsistencyType() const;

                    /**
                     * 设置Consistency Type:
eventual: eventual consistency.
global: global consistency.
session: session consistency.
Description:
Only when the RwType parameter value is READWRITE can this option be configured.
                     * @param _consistencyType Consistency Type:
eventual: eventual consistency.
global: global consistency.
session: session consistency.
Description:
Only when the RwType parameter value is READWRITE can this option be configured.
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
                     * 获取Read-Write Attribute:
READWRITE: indicates read/write splitting. Only when this parameter value is READWRITE can the FailOver and ConsistencyType parameters be configured.
READONLY: indicates read-only.
                     * @return RwType Read-Write Attribute:
READWRITE: indicates read/write splitting. Only when this parameter value is READWRITE can the FailOver and ConsistencyType parameters be configured.
READONLY: indicates read-only.
                     * 
                     */
                    std::string GetRwType() const;

                    /**
                     * 设置Read-Write Attribute:
READWRITE: indicates read/write splitting. Only when this parameter value is READWRITE can the FailOver and ConsistencyType parameters be configured.
READONLY: indicates read-only.
                     * @param _rwType Read-Write Attribute:
READWRITE: indicates read/write splitting. Only when this parameter value is READWRITE can the FailOver and ConsistencyType parameters be configured.
READONLY: indicates read-only.
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
                     * 获取The consistency timeout period. Value range: 0 - 1000000 (microseconds). When set to 0, if a read-only instance experiences latency causing the consistency policy to be unsatisfied, the request will wait indefinitely.
                     * @return ConsistencyTimeOut The consistency timeout period. Value range: 0 - 1000000 (microseconds). When set to 0, if a read-only instance experiences latency causing the consistency policy to be unsatisfied, the request will wait indefinitely.
                     * 
                     */
                    int64_t GetConsistencyTimeOut() const;

                    /**
                     * 设置The consistency timeout period. Value range: 0 - 1000000 (microseconds). When set to 0, if a read-only instance experiences latency causing the consistency policy to be unsatisfied, the request will wait indefinitely.
                     * @param _consistencyTimeOut The consistency timeout period. Value range: 0 - 1000000 (microseconds). When set to 0, if a read-only instance experiences latency causing the consistency policy to be unsatisfied, the request will wait indefinitely.
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
                     * 获取Whether to enable transaction split. After it is enabled, read and write operations in a transaction are split to different instances for execution.
                     * @return TransSplit Whether to enable transaction split. After it is enabled, read and write operations in a transaction are split to different instances for execution.
                     * 
                     */
                    bool GetTransSplit() const;

                    /**
                     * 设置Whether to enable transaction split. After it is enabled, read and write operations in a transaction are split to different instances for execution.
                     * @param _transSplit Whether to enable transaction split. After it is enabled, read and write operations in a transaction are split to different instances for execution.
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
                     * 获取Access mode:
nearby: nearby access.
balance: balanced allocation.
                     * @return AccessMode Access mode:
nearby: nearby access.
balance: balanced allocation.
                     * 
                     */
                    std::string GetAccessMode() const;

                    /**
                     * 设置Access mode:
nearby: nearby access.
balance: balanced allocation.
                     * @param _accessMode Access mode:
nearby: nearby access.
balance: balanced allocation.
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
                     * 获取Instance weight.
                     * @return InstanceWeights Instance weight.
                     * 
                     */
                    std::vector<ProxyInstanceWeight> GetInstanceWeights() const;

                    /**
                     * 设置Instance weight.
                     * @param _instanceWeights Instance weight.
                     * 
                     */
                    void SetInstanceWeights(const std::vector<ProxyInstanceWeight>& _instanceWeights);

                    /**
                     * 判断参数 InstanceWeights 是否已赋值
                     * @return InstanceWeights 是否已赋值
                     * 
                     */
                    bool InstanceWeightsHasBeenSet() const;

                private:

                    /**
                     * Cluster ID.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * VPC ID. By default, it remains consistent with the VPC ID of the cluster.
                     */
                    std::string m_uniqueVpcId;
                    bool m_uniqueVpcIdHasBeenSet;

                    /**
                     * Subnet ID of the VPC. By default, it remains consistent with the subnet ID of the cluster.
                     */
                    std::string m_uniqueSubnetId;
                    bool m_uniqueSubnetIdHasBeenSet;

                    /**
                     * Type of connection pool: SessionConnectionPool (session-level connection pool).
                     */
                    std::string m_connectionPoolType;
                    bool m_connectionPoolTypeHasBeenSet;

                    /**
                     * Whether to enable the connection pool.
yes: indicates enabled.
no: indicates not enabled.
                     */
                    std::string m_openConnectionPool;
                    bool m_openConnectionPoolHasBeenSet;

                    /**
                     * Threshold of the connection pool: unit (seconds). Valid values: 0 - 300 seconds.
                     */
                    int64_t m_connectionPoolTimeOut;
                    bool m_connectionPoolTimeOutHasBeenSet;

                    /**
                     * Array of bound security group IDs.
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * Description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * The vip information to be bound must correspond to the UniqueVpcId.
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * Weight mode:
system: system-assigned.
custom: custom.
                     */
                    std::string m_weightMode;
                    bool m_weightModeHasBeenSet;

                    /**
                     * Whether to automatically add a read-only instance.
yes: indicates automatically adding a read-only instance.
no: indicates not to automatically add a read-only instance.
                     */
                    std::string m_autoAddRo;
                    bool m_autoAddRoHasBeenSet;

                    /**
                     * Whether to enable failover.
yes: indicates enabled. After it is enabled, when the database proxy encounters faults, the connection address will be routed to the primary instance.
no: indicates not enabled.
Description:
Only when the value of the RwType parameter is READWRITE can this option be configured.
                     */
                    std::string m_failOver;
                    bool m_failOverHasBeenSet;

                    /**
                     * Consistency Type:
eventual: eventual consistency.
global: global consistency.
session: session consistency.
Description:
Only when the RwType parameter value is READWRITE can this option be configured.
                     */
                    std::string m_consistencyType;
                    bool m_consistencyTypeHasBeenSet;

                    /**
                     * Read-Write Attribute:
READWRITE: indicates read/write splitting. Only when this parameter value is READWRITE can the FailOver and ConsistencyType parameters be configured.
READONLY: indicates read-only.
                     */
                    std::string m_rwType;
                    bool m_rwTypeHasBeenSet;

                    /**
                     * The consistency timeout period. Value range: 0 - 1000000 (microseconds). When set to 0, if a read-only instance experiences latency causing the consistency policy to be unsatisfied, the request will wait indefinitely.
                     */
                    int64_t m_consistencyTimeOut;
                    bool m_consistencyTimeOutHasBeenSet;

                    /**
                     * Whether to enable transaction split. After it is enabled, read and write operations in a transaction are split to different instances for execution.
                     */
                    bool m_transSplit;
                    bool m_transSplitHasBeenSet;

                    /**
                     * Access mode:
nearby: nearby access.
balance: balanced allocation.
                     */
                    std::string m_accessMode;
                    bool m_accessModeHasBeenSet;

                    /**
                     * Instance weight.
                     */
                    std::vector<ProxyInstanceWeight> m_instanceWeights;
                    bool m_instanceWeightsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATEPROXYENDPOINTREQUEST_H_
