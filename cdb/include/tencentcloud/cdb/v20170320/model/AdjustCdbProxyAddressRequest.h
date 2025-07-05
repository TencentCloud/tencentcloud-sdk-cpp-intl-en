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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_ADJUSTCDBPROXYADDRESSREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_ADJUSTCDBPROXYADDRESSREQUEST_H_

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
                * AdjustCdbProxyAddress request structure.
                */
                class AdjustCdbProxyAddressRequest : public AbstractModel
                {
                public:
                    AdjustCdbProxyAddressRequest();
                    ~AdjustCdbProxyAddressRequest() = default;
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
                     * 获取Whether to remove delayed read-only instances from the proxy group Valid values: `true`, `false`.
                     * @return IsKickOut Whether to remove delayed read-only instances from the proxy group Valid values: `true`, `false`.
                     * 
                     */
                    bool GetIsKickOut() const;

                    /**
                     * 设置Whether to remove delayed read-only instances from the proxy group Valid values: `true`, `false`.
                     * @param _isKickOut Whether to remove delayed read-only instances from the proxy group Valid values: `true`, `false`.
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
                     * 获取Whether to enable the connection pool
                     * @return ConnectionPool Whether to enable the connection pool
                     * 
                     */
                    bool GetConnectionPool() const;

                    /**
                     * 设置Whether to enable the connection pool
                     * @param _connectionPool Whether to enable the connection pool
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
                     * 获取Assignment of read/write weights If `system` is passed in for `WeightMode`, only the default weight assigned by the system will take effect.
                     * @return ProxyAllocation Assignment of read/write weights If `system` is passed in for `WeightMode`, only the default weight assigned by the system will take effect.
                     * 
                     */
                    std::vector<ProxyAllocation> GetProxyAllocation() const;

                    /**
                     * 设置Assignment of read/write weights If `system` is passed in for `WeightMode`, only the default weight assigned by the system will take effect.
                     * @param _proxyAllocation Assignment of read/write weights If `system` is passed in for `WeightMode`, only the default weight assigned by the system will take effect.
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
                     * Whether to remove delayed read-only instances from the proxy group Valid values: `true`, `false`.
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
                     * Address ID of the proxy group
                     */
                    std::string m_proxyAddressId;
                    bool m_proxyAddressIdHasBeenSet;

                    /**
                     * Whether to enable transaction splitting. Valid values: `true`, `false`.
                     */
                    bool m_transSplit;
                    bool m_transSplitHasBeenSet;

                    /**
                     * Whether to enable the connection pool
                     */
                    bool m_connectionPool;
                    bool m_connectionPoolHasBeenSet;

                    /**
                     * Assignment of read/write weights If `system` is passed in for `WeightMode`, only the default weight assigned by the system will take effect.
                     */
                    std::vector<ProxyAllocation> m_proxyAllocation;
                    bool m_proxyAllocationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_ADJUSTCDBPROXYADDRESSREQUEST_H_
