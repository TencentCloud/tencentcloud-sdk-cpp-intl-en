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
                     * 获取<p>Proxy group ID, which can be obtained through the <a href="https://www.tencentcloud.com/document/api/236/90585?from_cn_redirect=1">DescribeCdbProxyInfo</a> API.</p>
                     * @return ProxyGroupId <p>Proxy group ID, which can be obtained through the <a href="https://www.tencentcloud.com/document/api/236/90585?from_cn_redirect=1">DescribeCdbProxyInfo</a> API.</p>
                     * 
                     */
                    std::string GetProxyGroupId() const;

                    /**
                     * 设置<p>Proxy group ID, which can be obtained through the <a href="https://www.tencentcloud.com/document/api/236/90585?from_cn_redirect=1">DescribeCdbProxyInfo</a> API.</p>
                     * @param _proxyGroupId <p>Proxy group ID, which can be obtained through the <a href="https://www.tencentcloud.com/document/api/236/90585?from_cn_redirect=1">DescribeCdbProxyInfo</a> API.</p>
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
                     * 获取<p>Weight allocation mode,<br>system Auto-Assignment: "system", custom: "custom"</p>
                     * @return WeightMode <p>Weight allocation mode,<br>system Auto-Assignment: "system", custom: "custom"</p>
                     * 
                     */
                    std::string GetWeightMode() const;

                    /**
                     * 设置<p>Weight allocation mode,<br>system Auto-Assignment: "system", custom: "custom"</p>
                     * @param _weightMode <p>Weight allocation mode,<br>system Auto-Assignment: "system", custom: "custom"</p>
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
                     * 获取<p>Whether delay removal is enabled. Value: "true" | "false"</p>
                     * @return IsKickOut <p>Whether delay removal is enabled. Value: "true" | "false"</p>
                     * 
                     */
                    bool GetIsKickOut() const;

                    /**
                     * 设置<p>Whether delay removal is enabled. Value: "true" | "false"</p>
                     * @param _isKickOut <p>Whether delay removal is enabled. Value: "true" | "false"</p>
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
                     * 获取<p>Minimum retention quantity, minimum value: 0.<br>Description: Valid only when IsKickOut is true.</p>
                     * @return MinCount <p>Minimum retention quantity, minimum value: 0.<br>Description: Valid only when IsKickOut is true.</p>
                     * 
                     */
                    uint64_t GetMinCount() const;

                    /**
                     * 设置<p>Minimum retention quantity, minimum value: 0.<br>Description: Valid only when IsKickOut is true.</p>
                     * @param _minCount <p>Minimum retention quantity, minimum value: 0.<br>Description: Valid only when IsKickOut is true.</p>
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
                     * 获取<p>Delay removal threshold, minimum value: 1, value ranges from 1 to 10000, integer.</p>
                     * @return MaxDelay <p>Delay removal threshold, minimum value: 1, value ranges from 1 to 10000, integer.</p>
                     * 
                     */
                    uint64_t GetMaxDelay() const;

                    /**
                     * 设置<p>Delay removal threshold, minimum value: 1, value ranges from 1 to 10000, integer.</p>
                     * @param _maxDelay <p>Delay removal threshold, minimum value: 1, value ranges from 1 to 10000, integer.</p>
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
                     * 获取<p>Whether fault migration is enabled, value: "true" | "false"</p>
                     * @return FailOver <p>Whether fault migration is enabled, value: "true" | "false"</p>
                     * 
                     */
                    bool GetFailOver() const;

                    /**
                     * 设置<p>Whether fault migration is enabled, value: "true" | "false"</p>
                     * @param _failOver <p>Whether fault migration is enabled, value: "true" | "false"</p>
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
                     * 获取<p>Automatically add RO. Parameter: "true" | "false"</p>
                     * @return AutoAddRo <p>Automatically add RO. Parameter: "true" | "false"</p>
                     * 
                     */
                    bool GetAutoAddRo() const;

                    /**
                     * 设置<p>Automatically add RO. Parameter: "true" | "false"</p>
                     * @param _autoAddRo <p>Automatically add RO. Parameter: "true" | "false"</p>
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
                     * 获取<p>Whether it is read-only. Value: "true" | "false".</p>
                     * @return ReadOnly <p>Whether it is read-only. Value: "true" | "false".</p>
                     * 
                     */
                    bool GetReadOnly() const;

                    /**
                     * 设置<p>Whether it is read-only. Value: "true" | "false".</p>
                     * @param _readOnly <p>Whether it is read-only. Value: "true" | "false".</p>
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
                     * 获取<p>Proxy group address ID. Obtain through the <a href="https://www.tencentcloud.com/document/api/236/90585?from_cn_redirect=1">DescribeCdbProxyInfo</a> API.</p>
                     * @return ProxyAddressId <p>Proxy group address ID. Obtain through the <a href="https://www.tencentcloud.com/document/api/236/90585?from_cn_redirect=1">DescribeCdbProxyInfo</a> API.</p>
                     * 
                     */
                    std::string GetProxyAddressId() const;

                    /**
                     * 设置<p>Proxy group address ID. Obtain through the <a href="https://www.tencentcloud.com/document/api/236/90585?from_cn_redirect=1">DescribeCdbProxyInfo</a> API.</p>
                     * @param _proxyAddressId <p>Proxy group address ID. Obtain through the <a href="https://www.tencentcloud.com/document/api/236/90585?from_cn_redirect=1">DescribeCdbProxyInfo</a> API.</p>
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
                     * 获取<p>Whether transaction splitting is enabled. Value: "true" | "false". Default value: false.</p>
                     * @return TransSplit <p>Whether transaction splitting is enabled. Value: "true" | "false". Default value: false.</p>
                     * 
                     */
                    bool GetTransSplit() const;

                    /**
                     * 设置<p>Whether transaction splitting is enabled. Value: "true" | "false". Default value: false.</p>
                     * @param _transSplit <p>Whether transaction splitting is enabled. Value: "true" | "false". Default value: false.</p>
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
                     * 获取<p>Whether the connection pool is enabled. Off by default.<br>Note: If you need to use the database proxy connection pool capability, the kernel minor version of the MySQL 8.0 primary instance must be at least MySQL 8.0 20230630.</p>
                     * @return ConnectionPool <p>Whether the connection pool is enabled. Off by default.<br>Note: If you need to use the database proxy connection pool capability, the kernel minor version of the MySQL 8.0 primary instance must be at least MySQL 8.0 20230630.</p>
                     * 
                     */
                    bool GetConnectionPool() const;

                    /**
                     * 设置<p>Whether the connection pool is enabled. Off by default.<br>Note: If you need to use the database proxy connection pool capability, the kernel minor version of the MySQL 8.0 primary instance must be at least MySQL 8.0 20230630.</p>
                     * @param _connectionPool <p>Whether the connection pool is enabled. Off by default.<br>Note: If you need to use the database proxy connection pool capability, the kernel minor version of the MySQL 8.0 primary instance must be at least MySQL 8.0 20230630.</p>
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
                     * 获取<p>Read-write weight allocation. If WeightMode is passed in as system, the passed-in weight does not take effect and the default weight is assigned by the system.</p>
                     * @return ProxyAllocation <p>Read-write weight allocation. If WeightMode is passed in as system, the passed-in weight does not take effect and the default weight is assigned by the system.</p>
                     * 
                     */
                    std::vector<ProxyAllocation> GetProxyAllocation() const;

                    /**
                     * 设置<p>Read-write weight allocation. If WeightMode is passed in as system, the passed-in weight does not take effect and the default weight is assigned by the system.</p>
                     * @param _proxyAllocation <p>Read-write weight allocation. If WeightMode is passed in as system, the passed-in weight does not take effect and the default weight is assigned by the system.</p>
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
                     * 获取<p>Whether self-adaptive load balancing is enabled. Off by default.</p>
                     * @return AutoLoadBalance <p>Whether self-adaptive load balancing is enabled. Off by default.</p>
                     * 
                     */
                    bool GetAutoLoadBalance() const;

                    /**
                     * 设置<p>Whether self-adaptive load balancing is enabled. Off by default.</p>
                     * @param _autoLoadBalance <p>Whether self-adaptive load balancing is enabled. Off by default.</p>
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
                     * 获取<p>Access mode: nearby - proximity access, balance - balanced allocation. Default is proximity access.</p>
                     * @return AccessMode <p>Access mode: nearby - proximity access, balance - balanced allocation. Default is proximity access.</p>
                     * 
                     */
                    std::string GetAccessMode() const;

                    /**
                     * 设置<p>Access mode: nearby - proximity access, balance - balanced allocation. Default is proximity access.</p>
                     * @param _accessMode <p>Access mode: nearby - proximity access, balance - balanced allocation. Default is proximity access.</p>
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
                     * 获取<p>Whether to forward to other nodes in case of a libra node fault</p>
                     * @return ApQueryToOtherNode <p>Whether to forward to other nodes in case of a libra node fault</p>
                     * 
                     */
                    bool GetApQueryToOtherNode() const;

                    /**
                     * 设置<p>Whether to forward to other nodes in case of a libra node fault</p>
                     * @param _apQueryToOtherNode <p>Whether to forward to other nodes in case of a libra node fault</p>
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
                     * <p>Proxy group ID, which can be obtained through the <a href="https://www.tencentcloud.com/document/api/236/90585?from_cn_redirect=1">DescribeCdbProxyInfo</a> API.</p>
                     */
                    std::string m_proxyGroupId;
                    bool m_proxyGroupIdHasBeenSet;

                    /**
                     * <p>Weight allocation mode,<br>system Auto-Assignment: "system", custom: "custom"</p>
                     */
                    std::string m_weightMode;
                    bool m_weightModeHasBeenSet;

                    /**
                     * <p>Whether delay removal is enabled. Value: "true" | "false"</p>
                     */
                    bool m_isKickOut;
                    bool m_isKickOutHasBeenSet;

                    /**
                     * <p>Minimum retention quantity, minimum value: 0.<br>Description: Valid only when IsKickOut is true.</p>
                     */
                    uint64_t m_minCount;
                    bool m_minCountHasBeenSet;

                    /**
                     * <p>Delay removal threshold, minimum value: 1, value ranges from 1 to 10000, integer.</p>
                     */
                    uint64_t m_maxDelay;
                    bool m_maxDelayHasBeenSet;

                    /**
                     * <p>Whether fault migration is enabled, value: "true" | "false"</p>
                     */
                    bool m_failOver;
                    bool m_failOverHasBeenSet;

                    /**
                     * <p>Automatically add RO. Parameter: "true" | "false"</p>
                     */
                    bool m_autoAddRo;
                    bool m_autoAddRoHasBeenSet;

                    /**
                     * <p>Whether it is read-only. Value: "true" | "false".</p>
                     */
                    bool m_readOnly;
                    bool m_readOnlyHasBeenSet;

                    /**
                     * <p>Proxy group address ID. Obtain through the <a href="https://www.tencentcloud.com/document/api/236/90585?from_cn_redirect=1">DescribeCdbProxyInfo</a> API.</p>
                     */
                    std::string m_proxyAddressId;
                    bool m_proxyAddressIdHasBeenSet;

                    /**
                     * <p>Whether transaction splitting is enabled. Value: "true" | "false". Default value: false.</p>
                     */
                    bool m_transSplit;
                    bool m_transSplitHasBeenSet;

                    /**
                     * <p>Whether the connection pool is enabled. Off by default.<br>Note: If you need to use the database proxy connection pool capability, the kernel minor version of the MySQL 8.0 primary instance must be at least MySQL 8.0 20230630.</p>
                     */
                    bool m_connectionPool;
                    bool m_connectionPoolHasBeenSet;

                    /**
                     * <p>Read-write weight allocation. If WeightMode is passed in as system, the passed-in weight does not take effect and the default weight is assigned by the system.</p>
                     */
                    std::vector<ProxyAllocation> m_proxyAllocation;
                    bool m_proxyAllocationHasBeenSet;

                    /**
                     * <p>Whether self-adaptive load balancing is enabled. Off by default.</p>
                     */
                    bool m_autoLoadBalance;
                    bool m_autoLoadBalanceHasBeenSet;

                    /**
                     * <p>Access mode: nearby - proximity access, balance - balanced allocation. Default is proximity access.</p>
                     */
                    std::string m_accessMode;
                    bool m_accessModeHasBeenSet;

                    /**
                     * <p>Whether to treat the libra node as an ordinary RO node</p>
                     */
                    bool m_apNodeAsRoNode;
                    bool m_apNodeAsRoNodeHasBeenSet;

                    /**
                     * <p>Whether to forward to other nodes in case of a libra node fault</p>
                     */
                    bool m_apQueryToOtherNode;
                    bool m_apQueryToOtherNodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_ADJUSTCDBPROXYADDRESSREQUEST_H_
