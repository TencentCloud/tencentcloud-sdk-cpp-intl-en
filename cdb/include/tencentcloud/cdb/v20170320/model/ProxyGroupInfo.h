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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_PROXYGROUPINFO_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_PROXYGROUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/ProxyNode.h>
#include <tencentcloud/cdb/v20170320/model/ProxyAddress.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * Details of proxy group
                */
                class ProxyGroupInfo : public AbstractModel
                {
                public:
                    ProxyGroupInfo();
                    ~ProxyGroupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取proxy version
                     * @return ProxyVersion proxy version
                     * 
                     */
                    std::string GetProxyVersion() const;

                    /**
                     * 设置proxy version
                     * @param _proxyVersion proxy version
                     * 
                     */
                    void SetProxyVersion(const std::string& _proxyVersion);

                    /**
                     * 判断参数 ProxyVersion 是否已赋值
                     * @return ProxyVersion 是否已赋值
                     * 
                     */
                    bool ProxyVersionHasBeenSet() const;

                    /**
                     * 获取Proxy supports edition upgrade
                     * @return SupportUpgradeProxyVersion Proxy supports edition upgrade
                     * 
                     */
                    std::string GetSupportUpgradeProxyVersion() const;

                    /**
                     * 设置Proxy supports edition upgrade
                     * @param _supportUpgradeProxyVersion Proxy supports edition upgrade
                     * 
                     */
                    void SetSupportUpgradeProxyVersion(const std::string& _supportUpgradeProxyVersion);

                    /**
                     * 判断参数 SupportUpgradeProxyVersion 是否已赋值
                     * @return SupportUpgradeProxyVersion 是否已赋值
                     * 
                     */
                    bool SupportUpgradeProxyVersionHasBeenSet() const;

                    /**
                     * 获取Agent status. 0 - Initializing, 1 - Online, 2 - Online - Read-write separation, 3 - Offline, 4 - Terminated.
                     * @return Status Agent status. 0 - Initializing, 1 - Online, 2 - Online - Read-write separation, 3 - Offline, 4 - Terminated.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Agent status. 0 - Initializing, 1 - Online, 2 - Online - Read-write separation, 3 - Offline, 4 - Terminated.
                     * @param _status Agent status. 0 - Initializing, 1 - Online, 2 - Online - Read-write separation, 3 - Offline, 4 - Terminated.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Agent task status, Upgrading - upgrading, UpgradeTo - upgrade pending switch, UpgradeSwitching - upgrade and switch in progress, ProxyCreateAddress - configuring address, ProxyModifyAddress - changing address, ProxyCloseAddress - closing address.
                     * @return TaskStatus Agent task status, Upgrading - upgrading, UpgradeTo - upgrade pending switch, UpgradeSwitching - upgrade and switch in progress, ProxyCreateAddress - configuring address, ProxyModifyAddress - changing address, ProxyCloseAddress - closing address.
                     * 
                     */
                    std::string GetTaskStatus() const;

                    /**
                     * 设置Agent task status, Upgrading - upgrading, UpgradeTo - upgrade pending switch, UpgradeSwitching - upgrade and switch in progress, ProxyCreateAddress - configuring address, ProxyModifyAddress - changing address, ProxyCloseAddress - closing address.
                     * @param _taskStatus Agent task status, Upgrading - upgrading, UpgradeTo - upgrade pending switch, UpgradeSwitching - upgrade and switch in progress, ProxyCreateAddress - configuring address, ProxyModifyAddress - changing address, ProxyCloseAddress - closing address.
                     * 
                     */
                    void SetTaskStatus(const std::string& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取Proxy group node information
                     * @return ProxyNode Proxy group node information
                     * 
                     */
                    std::vector<ProxyNode> GetProxyNode() const;

                    /**
                     * 设置Proxy group node information
                     * @param _proxyNode Proxy group node information
                     * 
                     */
                    void SetProxyNode(const std::vector<ProxyNode>& _proxyNode);

                    /**
                     * 判断参数 ProxyNode 是否已赋值
                     * @return ProxyNode 是否已赋值
                     * 
                     */
                    bool ProxyNodeHasBeenSet() const;

                    /**
                     * 获取Proxy group address information
                     * @return ProxyAddress Proxy group address information
                     * 
                     */
                    std::vector<ProxyAddress> GetProxyAddress() const;

                    /**
                     * 设置Proxy group address information
                     * @param _proxyAddress Proxy group address information
                     * 
                     */
                    void SetProxyAddress(const std::vector<ProxyAddress>& _proxyAddress);

                    /**
                     * 判断参数 ProxyAddress 是否已赋值
                     * @return ProxyAddress 是否已赋值
                     * 
                     */
                    bool ProxyAddressHasBeenSet() const;

                    /**
                     * 获取Connection pool threshold
                     * @return ConnectionPoolLimit Connection pool threshold
                     * 
                     */
                    uint64_t GetConnectionPoolLimit() const;

                    /**
                     * 设置Connection pool threshold
                     * @param _connectionPoolLimit Connection pool threshold
                     * 
                     */
                    void SetConnectionPoolLimit(const uint64_t& _connectionPoolLimit);

                    /**
                     * 判断参数 ConnectionPoolLimit 是否已赋值
                     * @return ConnectionPoolLimit 是否已赋值
                     * 
                     */
                    bool ConnectionPoolLimitHasBeenSet() const;

                    /**
                     * 获取Support creating an address
                     * @return SupportCreateProxyAddress Support creating an address
                     * 
                     */
                    bool GetSupportCreateProxyAddress() const;

                    /**
                     * 设置Support creating an address
                     * @param _supportCreateProxyAddress Support creating an address
                     * 
                     */
                    void SetSupportCreateProxyAddress(const bool& _supportCreateProxyAddress);

                    /**
                     * 判断参数 SupportCreateProxyAddress 是否已赋值
                     * @return SupportCreateProxyAddress 是否已赋值
                     * 
                     */
                    bool SupportCreateProxyAddressHasBeenSet() const;

                    /**
                     * 获取cdb version required for proxy version upgrade
                     * @return SupportUpgradeProxyMysqlVersion cdb version required for proxy version upgrade
                     * 
                     */
                    std::string GetSupportUpgradeProxyMysqlVersion() const;

                    /**
                     * 设置cdb version required for proxy version upgrade
                     * @param _supportUpgradeProxyMysqlVersion cdb version required for proxy version upgrade
                     * 
                     */
                    void SetSupportUpgradeProxyMysqlVersion(const std::string& _supportUpgradeProxyMysqlVersion);

                    /**
                     * 判断参数 SupportUpgradeProxyMysqlVersion 是否已赋值
                     * @return SupportUpgradeProxyMysqlVersion 是否已赋值
                     * 
                     */
                    bool SupportUpgradeProxyMysqlVersionHasBeenSet() const;

                private:

                    /**
                     * Proxy group ID
                     */
                    std::string m_proxyGroupId;
                    bool m_proxyGroupIdHasBeenSet;

                    /**
                     * proxy version
                     */
                    std::string m_proxyVersion;
                    bool m_proxyVersionHasBeenSet;

                    /**
                     * Proxy supports edition upgrade
                     */
                    std::string m_supportUpgradeProxyVersion;
                    bool m_supportUpgradeProxyVersionHasBeenSet;

                    /**
                     * Agent status. 0 - Initializing, 1 - Online, 2 - Online - Read-write separation, 3 - Offline, 4 - Terminated.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Agent task status, Upgrading - upgrading, UpgradeTo - upgrade pending switch, UpgradeSwitching - upgrade and switch in progress, ProxyCreateAddress - configuring address, ProxyModifyAddress - changing address, ProxyCloseAddress - closing address.
                     */
                    std::string m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * Proxy group node information
                     */
                    std::vector<ProxyNode> m_proxyNode;
                    bool m_proxyNodeHasBeenSet;

                    /**
                     * Proxy group address information
                     */
                    std::vector<ProxyAddress> m_proxyAddress;
                    bool m_proxyAddressHasBeenSet;

                    /**
                     * Connection pool threshold
                     */
                    uint64_t m_connectionPoolLimit;
                    bool m_connectionPoolLimitHasBeenSet;

                    /**
                     * Support creating an address
                     */
                    bool m_supportCreateProxyAddress;
                    bool m_supportCreateProxyAddressHasBeenSet;

                    /**
                     * cdb version required for proxy version upgrade
                     */
                    std::string m_supportUpgradeProxyMysqlVersion;
                    bool m_supportUpgradeProxyMysqlVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_PROXYGROUPINFO_H_
