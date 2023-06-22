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
                     * 获取Proxy version Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProxyVersion Proxy version Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProxyVersion() const;

                    /**
                     * 设置Proxy version Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _proxyVersion Proxy version Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Supported proxy upgrade version Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SupportUpgradeProxyVersion Supported proxy upgrade version Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSupportUpgradeProxyVersion() const;

                    /**
                     * 设置Supported proxy upgrade version Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _supportUpgradeProxyVersion Supported proxy upgrade version Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Proxy status Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Proxy status Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Proxy status Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Proxy status Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Proxy task status Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskStatus Proxy task status Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskStatus() const;

                    /**
                     * 设置Proxy task status Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskStatus Proxy task status Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Node information of the proxy group Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProxyNode Node information of the proxy group Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ProxyNode> GetProxyNode() const;

                    /**
                     * 设置Node information of the proxy group Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _proxyNode Node information of the proxy group Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Address information of the proxy group Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProxyAddress Address information of the proxy group Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ProxyAddress> GetProxyAddress() const;

                    /**
                     * 设置Address information of the proxy group Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _proxyAddress Address information of the proxy group Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Connection pool threshold Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ConnectionPoolLimit Connection pool threshold Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetConnectionPoolLimit() const;

                    /**
                     * 设置Connection pool threshold Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _connectionPoolLimit Connection pool threshold Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Whether to support address creation Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SupportCreateProxyAddress Whether to support address creation Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetSupportCreateProxyAddress() const;

                    /**
                     * 设置Whether to support address creation Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _supportCreateProxyAddress Whether to support address creation Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取TencentDB versions supporting proxy versions upgrade Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SupportUpgradeProxyMysqlVersion TencentDB versions supporting proxy versions upgrade Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSupportUpgradeProxyMysqlVersion() const;

                    /**
                     * 设置TencentDB versions supporting proxy versions upgrade Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _supportUpgradeProxyMysqlVersion TencentDB versions supporting proxy versions upgrade Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Proxy version Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_proxyVersion;
                    bool m_proxyVersionHasBeenSet;

                    /**
                     * Supported proxy upgrade version Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_supportUpgradeProxyVersion;
                    bool m_supportUpgradeProxyVersionHasBeenSet;

                    /**
                     * Proxy status Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Proxy task status Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * Node information of the proxy group Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ProxyNode> m_proxyNode;
                    bool m_proxyNodeHasBeenSet;

                    /**
                     * Address information of the proxy group Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ProxyAddress> m_proxyAddress;
                    bool m_proxyAddressHasBeenSet;

                    /**
                     * Connection pool threshold Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_connectionPoolLimit;
                    bool m_connectionPoolLimitHasBeenSet;

                    /**
                     * Whether to support address creation Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_supportCreateProxyAddress;
                    bool m_supportCreateProxyAddressHasBeenSet;

                    /**
                     * TencentDB versions supporting proxy versions upgrade Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_supportUpgradeProxyMysqlVersion;
                    bool m_supportUpgradeProxyMysqlVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_PROXYGROUPINFO_H_
