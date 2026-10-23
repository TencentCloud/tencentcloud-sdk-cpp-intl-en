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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PROXYGROUPINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PROXYGROUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/ProxyGroup.h>
#include <tencentcloud/cynosdb/v20190107/model/ProxyGroupRwInfo.h>
#include <tencentcloud/cynosdb/v20190107/model/ProxyNodeInfo.h>
#include <tencentcloud/cynosdb/v20190107/model/ProxyConnectionPoolInfo.h>
#include <tencentcloud/cynosdb/v20190107/model/NetAddr.h>
#include <tencentcloud/cynosdb/v20190107/model/ObjectTask.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Detailed information of the database proxy group
                */
                class ProxyGroupInfo : public AbstractModel
                {
                public:
                    ProxyGroupInfo();
                    ~ProxyGroupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Database Proxy Group
                     * @return ProxyGroup Database Proxy Group
                     * 
                     */
                    ProxyGroup GetProxyGroup() const;

                    /**
                     * 设置Database Proxy Group
                     * @param _proxyGroup Database Proxy Group
                     * 
                     */
                    void SetProxyGroup(const ProxyGroup& _proxyGroup);

                    /**
                     * 判断参数 ProxyGroup 是否已赋值
                     * @return ProxyGroup 是否已赋值
                     * 
                     */
                    bool ProxyGroupHasBeenSet() const;

                    /**
                     * 获取Read-write separation info of the Database Proxy Group
                     * @return ProxyGroupRwInfo Read-write separation info of the Database Proxy Group
                     * 
                     */
                    ProxyGroupRwInfo GetProxyGroupRwInfo() const;

                    /**
                     * 设置Read-write separation info of the Database Proxy Group
                     * @param _proxyGroupRwInfo Read-write separation info of the Database Proxy Group
                     * 
                     */
                    void SetProxyGroupRwInfo(const ProxyGroupRwInfo& _proxyGroupRwInfo);

                    /**
                     * 判断参数 ProxyGroupRwInfo 是否已赋值
                     * @return ProxyGroupRwInfo 是否已赋值
                     * 
                     */
                    bool ProxyGroupRwInfoHasBeenSet() const;

                    /**
                     * 获取Database proxy node info
                     * @return ProxyNodes Database proxy node info
                     * 
                     */
                    std::vector<ProxyNodeInfo> GetProxyNodes() const;

                    /**
                     * 设置Database proxy node info
                     * @param _proxyNodes Database proxy node info
                     * 
                     */
                    void SetProxyNodes(const std::vector<ProxyNodeInfo>& _proxyNodes);

                    /**
                     * 判断参数 ProxyNodes 是否已赋值
                     * @return ProxyNodes 是否已赋值
                     * 
                     */
                    bool ProxyNodesHasBeenSet() const;

                    /**
                     * 获取Database proxy connection pool information
                     * @return ConnectionPool Database proxy connection pool information
                     * 
                     */
                    ProxyConnectionPoolInfo GetConnectionPool() const;

                    /**
                     * 设置Database proxy connection pool information
                     * @param _connectionPool Database proxy connection pool information
                     * 
                     */
                    void SetConnectionPool(const ProxyConnectionPoolInfo& _connectionPool);

                    /**
                     * 判断参数 ConnectionPool 是否已赋值
                     * @return ConnectionPool 是否已赋值
                     * 
                     */
                    bool ConnectionPoolHasBeenSet() const;

                    /**
                     * 获取Database proxy network info
                     * @return NetAddrInfos Database proxy network info
                     * 
                     */
                    std::vector<NetAddr> GetNetAddrInfos() const;

                    /**
                     * 设置Database proxy network info
                     * @param _netAddrInfos Database proxy network info
                     * 
                     */
                    void SetNetAddrInfos(const std::vector<NetAddr>& _netAddrInfos);

                    /**
                     * 判断参数 NetAddrInfos 是否已赋值
                     * @return NetAddrInfos 是否已赋值
                     * 
                     */
                    bool NetAddrInfosHasBeenSet() const;

                    /**
                     * 获取Task set of the database proxy
                     * @return Tasks Task set of the database proxy
                     * 
                     */
                    std::vector<ObjectTask> GetTasks() const;

                    /**
                     * 设置Task set of the database proxy
                     * @param _tasks Task set of the database proxy
                     * 
                     */
                    void SetTasks(const std::vector<ObjectTask>& _tasks);

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     * 
                     */
                    bool TasksHasBeenSet() const;

                private:

                    /**
                     * Database Proxy Group
                     */
                    ProxyGroup m_proxyGroup;
                    bool m_proxyGroupHasBeenSet;

                    /**
                     * Read-write separation info of the Database Proxy Group
                     */
                    ProxyGroupRwInfo m_proxyGroupRwInfo;
                    bool m_proxyGroupRwInfoHasBeenSet;

                    /**
                     * Database proxy node info
                     */
                    std::vector<ProxyNodeInfo> m_proxyNodes;
                    bool m_proxyNodesHasBeenSet;

                    /**
                     * Database proxy connection pool information
                     */
                    ProxyConnectionPoolInfo m_connectionPool;
                    bool m_connectionPoolHasBeenSet;

                    /**
                     * Database proxy network info
                     */
                    std::vector<NetAddr> m_netAddrInfos;
                    bool m_netAddrInfosHasBeenSet;

                    /**
                     * Task set of the database proxy
                     */
                    std::vector<ObjectTask> m_tasks;
                    bool m_tasksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PROXYGROUPINFO_H_
