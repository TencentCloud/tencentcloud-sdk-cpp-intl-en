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
                     * 获取VPC ID, which is the same as that of the cluster by defaultu200d.
                     * @return UniqueVpcId VPC ID, which is the same as that of the cluster by defaultu200d.
                     * 
                     */
                    std::string GetUniqueVpcId() const;

                    /**
                     * 设置VPC ID, which is the same as that of the cluster by defaultu200d.
                     * @param _uniqueVpcId VPC ID, which is the same as that of the cluster by defaultu200d.
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
                     * 获取VPCe subnet ID, which is the same as that of the cluster by default.
                     * @return UniqueSubnetId VPCe subnet ID, which is the same as that of the cluster by default.
                     * 
                     */
                    std::string GetUniqueSubnetId() const;

                    /**
                     * 设置VPCe subnet ID, which is the same as that of the cluster by default.
                     * @param _uniqueSubnetId VPCe subnet ID, which is the same as that of the cluster by default.
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
                     * 获取Connection pool type. Valid value: `SessionConnectionPool` (session-level connection pool)
                     * @return ConnectionPoolType Connection pool type. Valid value: `SessionConnectionPool` (session-level connection pool)
                     * 
                     */
                    std::string GetConnectionPoolType() const;

                    /**
                     * 设置Connection pool type. Valid value: `SessionConnectionPool` (session-level connection pool)
                     * @param _connectionPoolType Connection pool type. Valid value: `SessionConnectionPool` (session-level connection pool)
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
                     * 获取Whether to enable connection pool. Valid value: `yes` (enable), `no` u200d(disable).
                     * @return OpenConnectionPool Whether to enable connection pool. Valid value: `yes` (enable), `no` u200d(disable).
                     * 
                     */
                    std::string GetOpenConnectionPool() const;

                    /**
                     * 设置Whether to enable connection pool. Valid value: `yes` (enable), `no` u200d(disable).
                     * @param _openConnectionPool Whether to enable connection pool. Valid value: `yes` (enable), `no` u200d(disable).
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
                     * 获取Connection pool threshold in seconds
                     * @return ConnectionPoolTimeOut Connection pool threshold in seconds
                     * 
                     */
                    int64_t GetConnectionPoolTimeOut() const;

                    /**
                     * 设置Connection pool threshold in seconds
                     * @param _connectionPoolTimeOut Connection pool threshold in seconds
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
                     * 获取Array of security group IDs
                     * @return SecurityGroupIds Array of security group IDs
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置Array of security group IDs
                     * @param _securityGroupIds Array of security group IDs
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
                     * 获取Description
                     * @return Description Description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description
                     * @param _description Description
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
                     * 获取VIP information
                     * @return Vip VIP information
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置VIP information
                     * @param _vip VIP information
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
                     * 获取Weight mode. 
Valid values: `system` (system-assigned), `custom` (custom).
                     * @return WeightMode Weight mode. 
Valid values: `system` (system-assigned), `custom` (custom).
                     * 
                     */
                    std::string GetWeightMode() const;

                    /**
                     * 设置Weight mode. 
Valid values: `system` (system-assigned), `custom` (custom).
                     * @param _weightMode Weight mode. 
Valid values: `system` (system-assigned), `custom` (custom).
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
                     * 获取Whether to automatically add read-only instance. Valid value: `yes`, `no`.
                     * @return AutoAddRo Whether to automatically add read-only instance. Valid value: `yes`, `no`.
                     * 
                     */
                    std::string GetAutoAddRo() const;

                    /**
                     * 设置Whether to automatically add read-only instance. Valid value: `yes`, `no`.
                     * @param _autoAddRo Whether to automatically add read-only instance. Valid value: `yes`, `no`.
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
                     * 获取Whether to enable failover
                     * @return FailOver Whether to enable failover
                     * 
                     */
                    std::string GetFailOver() const;

                    /**
                     * 设置Whether to enable failover
                     * @param _failOver Whether to enable failover
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
                     * 获取Consistency type. Valid values: 
`eventual`, `global`, `session`.
                     * @return ConsistencyType Consistency type. Valid values: 
`eventual`, `global`, `session`.
                     * 
                     */
                    std::string GetConsistencyType() const;

                    /**
                     * 设置Consistency type. Valid values: 
`eventual`, `global`, `session`.
                     * @param _consistencyType Consistency type. Valid values: 
`eventual`, `global`, `session`.
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
                     * 获取Read-write attribute. Valid values: 
`READWRITE`, `READONLY`.
                     * @return RwType Read-write attribute. Valid values: 
`READWRITE`, `READONLY`.
                     * 
                     */
                    std::string GetRwType() const;

                    /**
                     * 设置Read-write attribute. Valid values: 
`READWRITE`, `READONLY`.
                     * @param _rwType Read-write attribute. Valid values: 
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
                     * 获取Consistency timeout period
                     * @return ConsistencyTimeOut Consistency timeout period
                     * 
                     */
                    int64_t GetConsistencyTimeOut() const;

                    /**
                     * 设置Consistency timeout period
                     * @param _consistencyTimeOut Consistency timeout period
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
                     * 获取Instance weight
                     * @return InstanceWeights Instance weight
                     * 
                     */
                    std::vector<ProxyInstanceWeight> GetInstanceWeights() const;

                    /**
                     * 设置Instance weight
                     * @param _instanceWeights Instance weight
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
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * VPC ID, which is the same as that of the cluster by defaultu200d.
                     */
                    std::string m_uniqueVpcId;
                    bool m_uniqueVpcIdHasBeenSet;

                    /**
                     * VPCe subnet ID, which is the same as that of the cluster by default.
                     */
                    std::string m_uniqueSubnetId;
                    bool m_uniqueSubnetIdHasBeenSet;

                    /**
                     * Connection pool type. Valid value: `SessionConnectionPool` (session-level connection pool)
                     */
                    std::string m_connectionPoolType;
                    bool m_connectionPoolTypeHasBeenSet;

                    /**
                     * Whether to enable connection pool. Valid value: `yes` (enable), `no` u200d(disable).
                     */
                    std::string m_openConnectionPool;
                    bool m_openConnectionPoolHasBeenSet;

                    /**
                     * Connection pool threshold in seconds
                     */
                    int64_t m_connectionPoolTimeOut;
                    bool m_connectionPoolTimeOutHasBeenSet;

                    /**
                     * Array of security group IDs
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * Description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * VIP information
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * Weight mode. 
Valid values: `system` (system-assigned), `custom` (custom).
                     */
                    std::string m_weightMode;
                    bool m_weightModeHasBeenSet;

                    /**
                     * Whether to automatically add read-only instance. Valid value: `yes`, `no`.
                     */
                    std::string m_autoAddRo;
                    bool m_autoAddRoHasBeenSet;

                    /**
                     * Whether to enable failover
                     */
                    std::string m_failOver;
                    bool m_failOverHasBeenSet;

                    /**
                     * Consistency type. Valid values: 
`eventual`, `global`, `session`.
                     */
                    std::string m_consistencyType;
                    bool m_consistencyTypeHasBeenSet;

                    /**
                     * Read-write attribute. Valid values: 
`READWRITE`, `READONLY`.
                     */
                    std::string m_rwType;
                    bool m_rwTypeHasBeenSet;

                    /**
                     * Consistency timeout period
                     */
                    int64_t m_consistencyTimeOut;
                    bool m_consistencyTimeOutHasBeenSet;

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
                     * Instance weight
                     */
                    std::vector<ProxyInstanceWeight> m_instanceWeights;
                    bool m_instanceWeightsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATEPROXYENDPOINTREQUEST_H_
