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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_CREATECDBPROXYADDRESSREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_CREATECDBPROXYADDRESSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/ProxyAllocation.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * CreateCdbProxyAddress request structure.
                */
                class CreateCdbProxyAddressRequest : public AbstractModel
                {
                public:
                    CreateCdbProxyAddressRequest();
                    ~CreateCdbProxyAddressRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Proxy group ID
                     * @return ProxyGroupId Proxy group ID
                     * 
                     */
                    std::string GetProxyGroupId() const;

                    /**
                     * 设置Proxy group ID
                     * @param _proxyGroupId Proxy group ID
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
                     * 获取Assignment mode of weights. Valid values: `system` (auto-assigned), `custom`.
                     * @return WeightMode Assignment mode of weights. Valid values: `system` (auto-assigned), `custom`.
                     * 
                     */
                    std::string GetWeightMode() const;

                    /**
                     * 设置Assignment mode of weights. Valid values: `system` (auto-assigned), `custom`.
                     * @param _weightMode Assignment mode of weights. Valid values: `system` (auto-assigned), `custom`.
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
                     * 获取Whether to remove delayed read-only instances from the proxy group. Valid values: `true`, `false`.
                     * @return IsKickOut Whether to remove delayed read-only instances from the proxy group. Valid values: `true`, `false`.
                     * 
                     */
                    bool GetIsKickOut() const;

                    /**
                     * 设置Whether to remove delayed read-only instances from the proxy group. Valid values: `true`, `false`.
                     * @param _isKickOut Whether to remove delayed read-only instances from the proxy group. Valid values: `true`, `false`.
                     * 
                     */
                    void SetIsKickOut(const bool& _isKickOut);

                    /**
                     * 判断参数 IsKickOut 是否已赋值
                     * @return IsKickOut 是否已赋值
                     * 
                     */
                    bool IsKickOutHasBeenSet() const;

                    /**
                     * 获取Least read-only instances. Minimum value:  `0`
                     * @return MinCount Least read-only instances. Minimum value:  `0`
                     * 
                     */
                    uint64_t GetMinCount() const;

                    /**
                     * 设置Least read-only instances. Minimum value:  `0`
                     * @param _minCount Least read-only instances. Minimum value:  `0`
                     * 
                     */
                    void SetMinCount(const uint64_t& _minCount);

                    /**
                     * 判断参数 MinCount 是否已赋值
                     * @return MinCount 是否已赋值
                     * 
                     */
                    bool MinCountHasBeenSet() const;

                    /**
                     * 获取The delay threshold. Minimum value:  `0`
                     * @return MaxDelay The delay threshold. Minimum value:  `0`
                     * 
                     */
                    uint64_t GetMaxDelay() const;

                    /**
                     * 设置The delay threshold. Minimum value:  `0`
                     * @param _maxDelay The delay threshold. Minimum value:  `0`
                     * 
                     */
                    void SetMaxDelay(const uint64_t& _maxDelay);

                    /**
                     * 判断参数 MaxDelay 是否已赋值
                     * @return MaxDelay 是否已赋值
                     * 
                     */
                    bool MaxDelayHasBeenSet() const;

                    /**
                     * 获取Whether to enable failover. Valid values: `true`, `false`.
                     * @return FailOver Whether to enable failover. Valid values: `true`, `false`.
                     * 
                     */
                    bool GetFailOver() const;

                    /**
                     * 设置Whether to enable failover. Valid values: `true`, `false`.
                     * @param _failOver Whether to enable failover. Valid values: `true`, `false`.
                     * 
                     */
                    void SetFailOver(const bool& _failOver);

                    /**
                     * 判断参数 FailOver 是否已赋值
                     * @return FailOver 是否已赋值
                     * 
                     */
                    bool FailOverHasBeenSet() const;

                    /**
                     * 获取Whether to automatically add newly created read-only instances. Valid values: `true`, `false`.
                     * @return AutoAddRo Whether to automatically add newly created read-only instances. Valid values: `true`, `false`.
                     * 
                     */
                    bool GetAutoAddRo() const;

                    /**
                     * 设置Whether to automatically add newly created read-only instances. Valid values: `true`, `false`.
                     * @param _autoAddRo Whether to automatically add newly created read-only instances. Valid values: `true`, `false`.
                     * 
                     */
                    void SetAutoAddRo(const bool& _autoAddRo);

                    /**
                     * 判断参数 AutoAddRo 是否已赋值
                     * @return AutoAddRo 是否已赋值
                     * 
                     */
                    bool AutoAddRoHasBeenSet() const;

                    /**
                     * 获取Whether it is read-only. Valid values: `true`, `false`.
                     * @return ReadOnly Whether it is read-only. Valid values: `true`, `false`.
                     * 
                     */
                    bool GetReadOnly() const;

                    /**
                     * 设置Whether it is read-only. Valid values: `true`, `false`.
                     * @param _readOnly Whether it is read-only. Valid values: `true`, `false`.
                     * 
                     */
                    void SetReadOnly(const bool& _readOnly);

                    /**
                     * 判断参数 ReadOnly 是否已赋值
                     * @return ReadOnly 是否已赋值
                     * 
                     */
                    bool ReadOnlyHasBeenSet() const;

                    /**
                     * 获取Whether to enable transaction splitting. Valid values: `true`, `false`.
                     * @return TransSplit Whether to enable transaction splitting. Valid values: `true`, `false`.
                     * 
                     */
                    bool GetTransSplit() const;

                    /**
                     * 设置Whether to enable transaction splitting. Valid values: `true`, `false`.
                     * @param _transSplit Whether to enable transaction splitting. Valid values: `true`, `false`.
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
                     * 获取Assignment of read/write weights
                     * @return ProxyAllocation Assignment of read/write weights
                     * 
                     */
                    std::vector<ProxyAllocation> GetProxyAllocation() const;

                    /**
                     * 设置Assignment of read/write weights
                     * @param _proxyAllocation Assignment of read/write weights
                     * 
                     */
                    void SetProxyAllocation(const std::vector<ProxyAllocation>& _proxyAllocation);

                    /**
                     * 判断参数 ProxyAllocation 是否已赋值
                     * @return ProxyAllocation 是否已赋值
                     * 
                     */
                    bool ProxyAllocationHasBeenSet() const;

                    /**
                     * 获取VPC ID
                     * @return UniqVpcId VPC ID
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置VPC ID
                     * @param _uniqVpcId VPC ID
                     * 
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     * 
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取VPC subnet ID
                     * @return UniqSubnetId VPC subnet ID
                     * 
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置VPC subnet ID
                     * @param _uniqSubnetId VPC subnet ID
                     * 
                     */
                    void SetUniqSubnetId(const std::string& _uniqSubnetId);

                    /**
                     * 判断参数 UniqSubnetId 是否已赋值
                     * @return UniqSubnetId 是否已赋值
                     * 
                     */
                    bool UniqSubnetIdHasBeenSet() const;

                    /**
                     * 获取Whether to enable the connection pool. Valid values: 
                     * @return ConnectionPool Whether to enable the connection pool. Valid values: 
                     * 
                     */
                    bool GetConnectionPool() const;

                    /**
                     * 设置Whether to enable the connection pool. Valid values: 
                     * @param _connectionPool Whether to enable the connection pool. Valid values: 
                     * 
                     */
                    void SetConnectionPool(const bool& _connectionPool);

                    /**
                     * 判断参数 ConnectionPool 是否已赋值
                     * @return ConnectionPool 是否已赋值
                     * 
                     */
                    bool ConnectionPoolHasBeenSet() const;

                    /**
                     * 获取Description
                     * @return Desc Description
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置Description
                     * @param _desc Description
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取IP address
                     * @return Vip IP address
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置IP address
                     * @param _vip IP address
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
                     * 获取Port
                     * @return VPort Port
                     * 
                     */
                    uint64_t GetVPort() const;

                    /**
                     * 设置Port
                     * @param _vPort Port
                     * 
                     */
                    void SetVPort(const uint64_t& _vPort);

                    /**
                     * 判断参数 VPort 是否已赋值
                     * @return VPort 是否已赋值
                     * 
                     */
                    bool VPortHasBeenSet() const;

                    /**
                     * 获取Security group
                     * @return SecurityGroup Security group
                     * 
                     */
                    std::vector<std::string> GetSecurityGroup() const;

                    /**
                     * 设置Security group
                     * @param _securityGroup Security group
                     * 
                     */
                    void SetSecurityGroup(const std::vector<std::string>& _securityGroup);

                    /**
                     * 判断参数 SecurityGroup 是否已赋值
                     * @return SecurityGroup 是否已赋值
                     * 
                     */
                    bool SecurityGroupHasBeenSet() const;

                    /**
                     * 获取Connection pool type, which will take effect only when `ConnectionPool` is `true`. Valid values:  `transaction` (transaction-level), `connection` (session-level).
                     * @return ConnectionPoolType Connection pool type, which will take effect only when `ConnectionPool` is `true`. Valid values:  `transaction` (transaction-level), `connection` (session-level).
                     * 
                     */
                    std::string GetConnectionPoolType() const;

                    /**
                     * 设置Connection pool type, which will take effect only when `ConnectionPool` is `true`. Valid values:  `transaction` (transaction-level), `connection` (session-level).
                     * @param _connectionPoolType Connection pool type, which will take effect only when `ConnectionPool` is `true`. Valid values:  `transaction` (transaction-level), `connection` (session-level).
                     * 
                     */
                    void SetConnectionPoolType(const std::string& _connectionPoolType);

                    /**
                     * 判断参数 ConnectionPoolType 是否已赋值
                     * @return ConnectionPoolType 是否已赋值
                     * 
                     */
                    bool ConnectionPoolTypeHasBeenSet() const;

                private:

                    /**
                     * Proxy group ID
                     */
                    std::string m_proxyGroupId;
                    bool m_proxyGroupIdHasBeenSet;

                    /**
                     * Assignment mode of weights. Valid values: `system` (auto-assigned), `custom`.
                     */
                    std::string m_weightMode;
                    bool m_weightModeHasBeenSet;

                    /**
                     * Whether to remove delayed read-only instances from the proxy group. Valid values: `true`, `false`.
                     */
                    bool m_isKickOut;
                    bool m_isKickOutHasBeenSet;

                    /**
                     * Least read-only instances. Minimum value:  `0`
                     */
                    uint64_t m_minCount;
                    bool m_minCountHasBeenSet;

                    /**
                     * The delay threshold. Minimum value:  `0`
                     */
                    uint64_t m_maxDelay;
                    bool m_maxDelayHasBeenSet;

                    /**
                     * Whether to enable failover. Valid values: `true`, `false`.
                     */
                    bool m_failOver;
                    bool m_failOverHasBeenSet;

                    /**
                     * Whether to automatically add newly created read-only instances. Valid values: `true`, `false`.
                     */
                    bool m_autoAddRo;
                    bool m_autoAddRoHasBeenSet;

                    /**
                     * Whether it is read-only. Valid values: `true`, `false`.
                     */
                    bool m_readOnly;
                    bool m_readOnlyHasBeenSet;

                    /**
                     * Whether to enable transaction splitting. Valid values: `true`, `false`.
                     */
                    bool m_transSplit;
                    bool m_transSplitHasBeenSet;

                    /**
                     * Assignment of read/write weights
                     */
                    std::vector<ProxyAllocation> m_proxyAllocation;
                    bool m_proxyAllocationHasBeenSet;

                    /**
                     * VPC ID
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * VPC subnet ID
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * Whether to enable the connection pool. Valid values: 
                     */
                    bool m_connectionPool;
                    bool m_connectionPoolHasBeenSet;

                    /**
                     * Description
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * IP address
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * Port
                     */
                    uint64_t m_vPort;
                    bool m_vPortHasBeenSet;

                    /**
                     * Security group
                     */
                    std::vector<std::string> m_securityGroup;
                    bool m_securityGroupHasBeenSet;

                    /**
                     * Connection pool type, which will take effect only when `ConnectionPool` is `true`. Valid values:  `transaction` (transaction-level), `connection` (session-level).
                     */
                    std::string m_connectionPoolType;
                    bool m_connectionPoolTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_CREATECDBPROXYADDRESSREQUEST_H_
