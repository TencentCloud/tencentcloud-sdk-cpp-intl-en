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
                     * 获取Assignment mode of weights. Valid values: `system` (auto-assigned), `custom`. Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WeightMode Assignment mode of weights. Valid values: `system` (auto-assigned), `custom`. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetWeightMode() const;

                    /**
                     * 设置Assignment mode of weights. Valid values: `system` (auto-assigned), `custom`. Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _weightMode Assignment mode of weights. Valid values: `system` (auto-assigned), `custom`. Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Whether to remove delayed read-only instances from the proxy group Valid values: `true`, `false`. Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsKickOut Whether to remove delayed read-only instances from the proxy group Valid values: `true`, `false`. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsKickOut() const;

                    /**
                     * 设置Whether to remove delayed read-only instances from the proxy group Valid values: `true`, `false`. Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isKickOut Whether to remove delayed read-only instances from the proxy group Valid values: `true`, `false`. Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Least read-only instances. Minimum value:  `0`. Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MinCount Least read-only instances. Minimum value:  `0`. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetMinCount() const;

                    /**
                     * 设置Least read-only instances. Minimum value:  `0`. Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _minCount Least read-only instances. Minimum value:  `0`. Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The delay threshold. Minimum value:  `0`. Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MaxDelay The delay threshold. Minimum value:  `0`. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetMaxDelay() const;

                    /**
                     * 设置The delay threshold. Minimum value:  `0`. Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _maxDelay The delay threshold. Minimum value:  `0`. Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Whether to automatically add newly created read-only instances. Valid values: `true`, `false`. Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AutoAddRo Whether to automatically add newly created read-only instances. Valid values: `true`, `false`. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetAutoAddRo() const;

                    /**
                     * 设置Whether to automatically add newly created read-only instances. Valid values: `true`, `false`. Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _autoAddRo Whether to automatically add newly created read-only instances. Valid values: `true`, `false`. Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Whether it is read-only. Valid values: `true`, `false`. Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ReadOnly Whether it is read-only. Valid values: `true`, `false`. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetReadOnly() const;

                    /**
                     * 设置Whether it is read-only. Valid values: `true`, `false`. Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _readOnly Whether it is read-only. Valid values: `true`, `false`. Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Whether to enable transaction splitting Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TransSplit Whether to enable transaction splitting Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetTransSplit() const;

                    /**
                     * 设置Whether to enable transaction splitting Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _transSplit Whether to enable transaction splitting Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Whether to enable failover Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FailOver Whether to enable failover Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetFailOver() const;

                    /**
                     * 设置Whether to enable failover Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _failOver Whether to enable failover Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Whether to enable the connection pool Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ConnectionPool Whether to enable the connection pool Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetConnectionPool() const;

                    /**
                     * 设置Whether to enable the connection pool Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _connectionPool Whether to enable the connection pool Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Note:  This field may return null, indicating that no valid values can be obtained.
                     * @return Desc Note:  This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置Note:  This field may return null, indicating that no valid values can be obtained.
                     * @param _desc Note:  This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Read weight assignment for an instance Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProxyAllocation Read weight assignment for an instance Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ProxyAllocation> GetProxyAllocation() const;

                    /**
                     * 设置Read weight assignment for an instance Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _proxyAllocation Read weight assignment for an instance Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProxyAllocation(const std::vector<ProxyAllocation>& _proxyAllocation);

                    /**
                     * 判断参数 ProxyAllocation 是否已赋值
                     * @return ProxyAllocation 是否已赋值
                     * 
                     */
                    bool ProxyAllocationHasBeenSet() const;

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
                     * Assignment mode of weights. Valid values: `system` (auto-assigned), `custom`. Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_weightMode;
                    bool m_weightModeHasBeenSet;

                    /**
                     * Whether to remove delayed read-only instances from the proxy group Valid values: `true`, `false`. Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isKickOut;
                    bool m_isKickOutHasBeenSet;

                    /**
                     * Least read-only instances. Minimum value:  `0`. Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_minCount;
                    bool m_minCountHasBeenSet;

                    /**
                     * The delay threshold. Minimum value:  `0`. Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_maxDelay;
                    bool m_maxDelayHasBeenSet;

                    /**
                     * Whether to automatically add newly created read-only instances. Valid values: `true`, `false`. Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_autoAddRo;
                    bool m_autoAddRoHasBeenSet;

                    /**
                     * Whether it is read-only. Valid values: `true`, `false`. Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_readOnly;
                    bool m_readOnlyHasBeenSet;

                    /**
                     * Whether to enable transaction splitting Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_transSplit;
                    bool m_transSplitHasBeenSet;

                    /**
                     * Whether to enable failover Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_failOver;
                    bool m_failOverHasBeenSet;

                    /**
                     * Whether to enable the connection pool Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_connectionPool;
                    bool m_connectionPoolHasBeenSet;

                    /**
                     * Note:  This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * Read weight assignment for an instance Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ProxyAllocation> m_proxyAllocation;
                    bool m_proxyAllocationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_PROXYADDRESS_H_
