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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_PROXYADDRESS_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_PROXYADDRESS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Information of the database proxy address
                */
                class ProxyAddress : public AbstractModel
                {
                public:
                    ProxyAddress();
                    ~ProxyAddress() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Address ID of the proxy group
                     * @return ProxyAddressId Address ID of the proxy group
                     * 
                     */
                    std::string GetProxyAddressId() const;

                    /**
                     * 设置Address ID of the proxy group
                     * @param _proxyAddressId Address ID of the proxy group
                     * 
                     */
                    void SetProxyAddressId(const std::string& _proxyAddressId);

                    /**
                     * 判断参数 ProxyAddressId 是否已赋值
                     * @return ProxyAddressId 是否已赋值
                     * 
                     */
                    bool ProxyAddressIdHasBeenSet() const;

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
                     * 获取Weight allocation mode.
System Auto-Assignment: "system", Custom: "custom"
                     * @return WeightMode Weight allocation mode.
System Auto-Assignment: "system", Custom: "custom"
                     * 
                     */
                    std::string GetWeightMode() const;

                    /**
                     * 设置Weight allocation mode.
System Auto-Assignment: "system", Custom: "custom"
                     * @param _weightMode Weight allocation mode.
System Auto-Assignment: "system", Custom: "custom"
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
                     * 获取Whether to enable delay removal. Parameter value: "true" | "false"
                     * @return IsKickOut Whether to enable delay removal. Parameter value: "true" | "false"
                     * 
                     */
                    bool GetIsKickOut() const;

                    /**
                     * 设置Whether to enable delay removal. Parameter value: "true" | "false"
                     * @param _isKickOut Whether to enable delay removal. Parameter value: "true" | "false"
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
                     * 获取Minimum retention quantity, minimum value: 0.
                     * @return MinCount Minimum retention quantity, minimum value: 0.
                     * 
                     */
                    uint64_t GetMinCount() const;

                    /**
                     * 设置Minimum retention quantity, minimum value: 0.
                     * @param _minCount Minimum retention quantity, minimum value: 0.
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
                     * 获取Delay removal threshold, minimum value: 0
                     * @return MaxDelay Delay removal threshold, minimum value: 0
                     * 
                     */
                    uint64_t GetMaxDelay() const;

                    /**
                     * 设置Delay removal threshold, minimum value: 0
                     * @param _maxDelay Delay removal threshold, minimum value: 0
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
                     * 获取Automatically add RO. Value: "true" | "false"
                     * @return AutoAddRo Automatically add RO. Value: "true" | "false"
                     * 
                     */
                    bool GetAutoAddRo() const;

                    /**
                     * 设置Automatically add RO. Value: "true" | "false"
                     * @param _autoAddRo Automatically add RO. Value: "true" | "false"
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
                     * 获取Whether it is read-only. Value: "true" | "false".
                     * @return ReadOnly Whether it is read-only. Value: "true" | "false".
                     * 
                     */
                    bool GetReadOnly() const;

                    /**
                     * 设置Whether it is read-only. Value: "true" | "false".
                     * @param _readOnly Whether it is read-only. Value: "true" | "false".
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
                     * 获取Whether transaction splitting is enabled
                     * @return TransSplit Whether transaction splitting is enabled
                     * 
                     */
                    bool GetTransSplit() const;

                    /**
                     * 设置Whether transaction splitting is enabled
                     * @param _transSplit Whether transaction splitting is enabled
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
                     * 获取Whether fault migration is enabled
                     * @return FailOver Whether fault migration is enabled
                     * 
                     */
                    bool GetFailOver() const;

                    /**
                     * 设置Whether fault migration is enabled
                     * @param _failOver Whether fault migration is enabled
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
                     * 获取Whether to enable connection pool
                     * @return ConnectionPool Whether to enable connection pool
                     * 
                     */
                    bool GetConnectionPool() const;

                    /**
                     * 设置Whether to enable connection pool
                     * @param _connectionPool Whether to enable connection pool
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
                     * 获取Read weight distribution of an instance
                     * @return ProxyAllocation Read weight distribution of an instance
                     * 
                     */
                    std::vector<ProxyAllocation> GetProxyAllocation() const;

                    /**
                     * 设置Read weight distribution of an instance
                     * @param _proxyAllocation Read weight distribution of an instance
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
                     * 获取Access mode
                     * @return AccessMode Access mode
                     * 
                     */
                    std::string GetAccessMode() const;

                    /**
                     * 设置Access mode
                     * @param _accessMode Access mode
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
                     * 获取Whether automatic CLB is enabled
                     * @return AutoLoadBalance Whether automatic CLB is enabled
                     * 
                     */
                    bool GetAutoLoadBalance() const;

                    /**
                     * 设置Whether automatic CLB is enabled
                     * @param _autoLoadBalance Whether automatic CLB is enabled
                     * 
                     */
                    void SetAutoLoadBalance(const bool& _autoLoadBalance);

                    /**
                     * 判断参数 AutoLoadBalance 是否已赋值
                     * @return AutoLoadBalance 是否已赋值
                     * 
                     */
                    bool AutoLoadBalanceHasBeenSet() const;

                    /**
                     * 获取Whether to treat libra as a read-only node
                     * @return ApNodeAsRoNode Whether to treat libra as a read-only node
                     * 
                     */
                    bool GetApNodeAsRoNode() const;

                    /**
                     * 设置Whether to treat libra as a read-only node
                     * @param _apNodeAsRoNode Whether to treat libra as a read-only node
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
                     * 获取libra node fault, whether to forward to other nodes
                     * @return ApQueryToOtherNode libra node fault, whether to forward to other nodes
                     * 
                     */
                    bool GetApQueryToOtherNode() const;

                    /**
                     * 设置libra node fault, whether to forward to other nodes
                     * @param _apQueryToOtherNode libra node fault, whether to forward to other nodes
                     * 
                     */
                    void SetApQueryToOtherNode(const bool& _apQueryToOtherNode);

                    /**
                     * 判断参数 ApQueryToOtherNode 是否已赋值
                     * @return ApQueryToOtherNode 是否已赋值
                     * 
                     */
                    bool ApQueryToOtherNodeHasBeenSet() const;

                private:

                    /**
                     * Address ID of the proxy group
                     */
                    std::string m_proxyAddressId;
                    bool m_proxyAddressIdHasBeenSet;

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
                     * Weight allocation mode.
System Auto-Assignment: "system", Custom: "custom"
                     */
                    std::string m_weightMode;
                    bool m_weightModeHasBeenSet;

                    /**
                     * Whether to enable delay removal. Parameter value: "true" | "false"
                     */
                    bool m_isKickOut;
                    bool m_isKickOutHasBeenSet;

                    /**
                     * Minimum retention quantity, minimum value: 0.
                     */
                    uint64_t m_minCount;
                    bool m_minCountHasBeenSet;

                    /**
                     * Delay removal threshold, minimum value: 0
                     */
                    uint64_t m_maxDelay;
                    bool m_maxDelayHasBeenSet;

                    /**
                     * Automatically add RO. Value: "true" | "false"
                     */
                    bool m_autoAddRo;
                    bool m_autoAddRoHasBeenSet;

                    /**
                     * Whether it is read-only. Value: "true" | "false".
                     */
                    bool m_readOnly;
                    bool m_readOnlyHasBeenSet;

                    /**
                     * Whether transaction splitting is enabled
                     */
                    bool m_transSplit;
                    bool m_transSplitHasBeenSet;

                    /**
                     * Whether fault migration is enabled
                     */
                    bool m_failOver;
                    bool m_failOverHasBeenSet;

                    /**
                     * Whether to enable connection pool
                     */
                    bool m_connectionPool;
                    bool m_connectionPoolHasBeenSet;

                    /**
                     * Description
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * Read weight distribution of an instance
                     */
                    std::vector<ProxyAllocation> m_proxyAllocation;
                    bool m_proxyAllocationHasBeenSet;

                    /**
                     * Access mode
                     */
                    std::string m_accessMode;
                    bool m_accessModeHasBeenSet;

                    /**
                     * Whether automatic CLB is enabled
                     */
                    bool m_autoLoadBalance;
                    bool m_autoLoadBalanceHasBeenSet;

                    /**
                     * Whether to treat libra as a read-only node
                     */
                    bool m_apNodeAsRoNode;
                    bool m_apNodeAsRoNodeHasBeenSet;

                    /**
                     * libra node fault, whether to forward to other nodes
                     */
                    bool m_apQueryToOtherNode;
                    bool m_apQueryToOtherNodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_PROXYADDRESS_H_
