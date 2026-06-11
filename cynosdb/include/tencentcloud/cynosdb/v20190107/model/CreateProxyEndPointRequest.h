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
                     * 获取<p>Connection pool Type: SessionConnectionPool (session-level connection pool).</p>
                     * @return ConnectionPoolType <p>Connection pool Type: SessionConnectionPool (session-level connection pool).</p>
                     * 
                     */
                    std::string GetConnectionPoolType() const;

                    /**
                     * 设置<p>Connection pool Type: SessionConnectionPool (session-level connection pool).</p>
                     * @param _connectionPoolType <p>Connection pool Type: SessionConnectionPool (session-level connection pool).</p>
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
                     * 获取<p>Whether the connection pool is enabled.<br>yes: enabled.<br>no: disabled.</p>
                     * @return OpenConnectionPool <p>Whether the connection pool is enabled.<br>yes: enabled.<br>no: disabled.</p>
                     * 
                     */
                    std::string GetOpenConnectionPool() const;

                    /**
                     * 设置<p>Whether the connection pool is enabled.<br>yes: enabled.<br>no: disabled.</p>
                     * @param _openConnectionPool <p>Whether the connection pool is enabled.<br>yes: enabled.<br>no: disabled.</p>
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
                     * 获取<p>Connection pool threshold: measurement unit (seconds), optional range: 0 - 300 seconds.</p>
                     * @return ConnectionPoolTimeOut <p>Connection pool threshold: measurement unit (seconds), optional range: 0 - 300 seconds.</p>
                     * 
                     */
                    int64_t GetConnectionPoolTimeOut() const;

                    /**
                     * 设置<p>Connection pool threshold: measurement unit (seconds), optional range: 0 - 300 seconds.</p>
                     * @param _connectionPoolTimeOut <p>Connection pool threshold: measurement unit (seconds), optional range: 0 - 300 seconds.</p>
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
                     * 获取<p>vip information that should be bound must correspond to UniqueVpcId.</p>
                     * @return Vip <p>vip information that should be bound must correspond to UniqueVpcId.</p>
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置<p>vip information that should be bound must correspond to UniqueVpcId.</p>
                     * @param _vip <p>vip information that should be bound must correspond to UniqueVpcId.</p>
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
                     * 获取<p>Automatically add read-only instance.<br>yes: means automatically add read-only instance.<br>no: means not automatic add read-only instance.</p>
                     * @return AutoAddRo <p>Automatically add read-only instance.<br>yes: means automatically add read-only instance.<br>no: means not automatic add read-only instance.</p>
                     * 
                     */
                    std::string GetAutoAddRo() const;

                    /**
                     * 设置<p>Automatically add read-only instance.<br>yes: means automatically add read-only instance.<br>no: means not automatic add read-only instance.</p>
                     * @param _autoAddRo <p>Automatically add read-only instance.<br>yes: means automatically add read-only instance.<br>no: means not automatic add read-only instance.</p>
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
                     * 获取<p>Whether fault migration is enabled.<br>yes: Enable. Once enabled, when a database proxy failure occurs, the connection address will be routed to the primary instance.<br>no: Disabled.<br>Description:<br>This item can be set to only when the RwType parameter value is READWRITE.</p>
                     * @return FailOver <p>Whether fault migration is enabled.<br>yes: Enable. Once enabled, when a database proxy failure occurs, the connection address will be routed to the primary instance.<br>no: Disabled.<br>Description:<br>This item can be set to only when the RwType parameter value is READWRITE.</p>
                     * 
                     */
                    std::string GetFailOver() const;

                    /**
                     * 设置<p>Whether fault migration is enabled.<br>yes: Enable. Once enabled, when a database proxy failure occurs, the connection address will be routed to the primary instance.<br>no: Disabled.<br>Description:<br>This item can be set to only when the RwType parameter value is READWRITE.</p>
                     * @param _failOver <p>Whether fault migration is enabled.<br>yes: Enable. Once enabled, when a database proxy failure occurs, the connection address will be routed to the primary instance.<br>no: Disabled.<br>Description:<br>This item can be set to only when the RwType parameter value is READWRITE.</p>
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
                     * 获取<p>Consistency type:<br>eventual: Final consistency.<br>global: Global consistency.<br>session: Session consistency.<br>Description:<br>This item can be set to only when the RwType parameter value is READWRITE.</p>
                     * @return ConsistencyType <p>Consistency type:<br>eventual: Final consistency.<br>global: Global consistency.<br>session: Session consistency.<br>Description:<br>This item can be set to only when the RwType parameter value is READWRITE.</p>
                     * 
                     */
                    std::string GetConsistencyType() const;

                    /**
                     * 设置<p>Consistency type:<br>eventual: Final consistency.<br>global: Global consistency.<br>session: Session consistency.<br>Description:<br>This item can be set to only when the RwType parameter value is READWRITE.</p>
                     * @param _consistencyType <p>Consistency type:<br>eventual: Final consistency.<br>global: Global consistency.<br>session: Session consistency.<br>Description:<br>This item can be set to only when the RwType parameter value is READWRITE.</p>
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
                     * 获取<p>Read-write attribute:<br>READWRITE: means read-write separation. When the parameter value is READWRITE, FailOver and ConsistencyType parameters can be set.<br>READONLY: means read-only.</p>
                     * @return RwType <p>Read-write attribute:<br>READWRITE: means read-write separation. When the parameter value is READWRITE, FailOver and ConsistencyType parameters can be set.<br>READONLY: means read-only.</p>
                     * 
                     */
                    std::string GetRwType() const;

                    /**
                     * 设置<p>Read-write attribute:<br>READWRITE: means read-write separation. When the parameter value is READWRITE, FailOver and ConsistencyType parameters can be set.<br>READONLY: means read-only.</p>
                     * @param _rwType <p>Read-write attribute:<br>READWRITE: means read-write separation. When the parameter value is READWRITE, FailOver and ConsistencyType parameters can be set.<br>READONLY: means read-only.</p>
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
                     * 获取<p>Consistency timeout. Value ranges from 0 to 1000000 (microseconds). When set to 0, it means the request will wait if the read-only instance fails to satisfy the consistency policy due to latency.</p>
                     * @return ConsistencyTimeOut <p>Consistency timeout. Value ranges from 0 to 1000000 (microseconds). When set to 0, it means the request will wait if the read-only instance fails to satisfy the consistency policy due to latency.</p>
                     * 
                     */
                    int64_t GetConsistencyTimeOut() const;

                    /**
                     * 设置<p>Consistency timeout. Value ranges from 0 to 1000000 (microseconds). When set to 0, it means the request will wait if the read-only instance fails to satisfy the consistency policy due to latency.</p>
                     * @param _consistencyTimeOut <p>Consistency timeout. Value ranges from 0 to 1000000 (microseconds). When set to 0, it means the request will wait if the read-only instance fails to satisfy the consistency policy due to latency.</p>
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
                     * 获取<p>Whether to enable transaction split. Once enabled, read and write operations in a transaction are split and executed on different instances.</p>
                     * @return TransSplit <p>Whether to enable transaction split. Once enabled, read and write operations in a transaction are split and executed on different instances.</p>
                     * 
                     */
                    bool GetTransSplit() const;

                    /**
                     * 设置<p>Whether to enable transaction split. Once enabled, read and write operations in a transaction are split and executed on different instances.</p>
                     * @param _transSplit <p>Whether to enable transaction split. Once enabled, read and write operations in a transaction are split and executed on different instances.</p>
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
                     * 获取<p>Access mode:<br>nearby: proximity access.<br>balance: balanced allocation.</p>
                     * @return AccessMode <p>Access mode:<br>nearby: proximity access.<br>balance: balanced allocation.</p>
                     * 
                     */
                    std::string GetAccessMode() const;

                    /**
                     * 设置<p>Access mode:<br>nearby: proximity access.<br>balance: balanced allocation.</p>
                     * @param _accessMode <p>Access mode:<br>nearby: proximity access.<br>balance: balanced allocation.</p>
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
                     * 获取
                     * @return LoadBalanceMode 
                     * 
                     */
                    std::string GetLoadBalanceMode() const;

                    /**
                     * 设置
                     * @param _loadBalanceMode 
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
                     * <p>Connection pool Type: SessionConnectionPool (session-level connection pool).</p>
                     */
                    std::string m_connectionPoolType;
                    bool m_connectionPoolTypeHasBeenSet;

                    /**
                     * <p>Whether the connection pool is enabled.<br>yes: enabled.<br>no: disabled.</p>
                     */
                    std::string m_openConnectionPool;
                    bool m_openConnectionPoolHasBeenSet;

                    /**
                     * <p>Connection pool threshold: measurement unit (seconds), optional range: 0 - 300 seconds.</p>
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
                     * <p>vip information that should be bound must correspond to UniqueVpcId.</p>
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * <p>Weight mode:<br>system: system-assigned.<br>custom: custom.</p>
                     */
                    std::string m_weightMode;
                    bool m_weightModeHasBeenSet;

                    /**
                     * <p>Automatically add read-only instance.<br>yes: means automatically add read-only instance.<br>no: means not automatic add read-only instance.</p>
                     */
                    std::string m_autoAddRo;
                    bool m_autoAddRoHasBeenSet;

                    /**
                     * <p>Whether fault migration is enabled.<br>yes: Enable. Once enabled, when a database proxy failure occurs, the connection address will be routed to the primary instance.<br>no: Disabled.<br>Description:<br>This item can be set to only when the RwType parameter value is READWRITE.</p>
                     */
                    std::string m_failOver;
                    bool m_failOverHasBeenSet;

                    /**
                     * <p>Consistency type:<br>eventual: Final consistency.<br>global: Global consistency.<br>session: Session consistency.<br>Description:<br>This item can be set to only when the RwType parameter value is READWRITE.</p>
                     */
                    std::string m_consistencyType;
                    bool m_consistencyTypeHasBeenSet;

                    /**
                     * <p>Read-write attribute:<br>READWRITE: means read-write separation. When the parameter value is READWRITE, FailOver and ConsistencyType parameters can be set.<br>READONLY: means read-only.</p>
                     */
                    std::string m_rwType;
                    bool m_rwTypeHasBeenSet;

                    /**
                     * <p>Consistency timeout. Value ranges from 0 to 1000000 (microseconds). When set to 0, it means the request will wait if the read-only instance fails to satisfy the consistency policy due to latency.</p>
                     */
                    int64_t m_consistencyTimeOut;
                    bool m_consistencyTimeOutHasBeenSet;

                    /**
                     * <p>Whether to enable transaction split. Once enabled, read and write operations in a transaction are split and executed on different instances.</p>
                     */
                    bool m_transSplit;
                    bool m_transSplitHasBeenSet;

                    /**
                     * <p>Access mode:<br>nearby: proximity access.<br>balance: balanced allocation.</p>
                     */
                    std::string m_accessMode;
                    bool m_accessModeHasBeenSet;

                    /**
                     * <p>Instance weight.</p>
                     */
                    std::vector<ProxyInstanceWeight> m_instanceWeights;
                    bool m_instanceWeightsHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_loadBalanceMode;
                    bool m_loadBalanceModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATEPROXYENDPOINTREQUEST_H_
