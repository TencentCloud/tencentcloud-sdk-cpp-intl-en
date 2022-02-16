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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYCDBPROXYCONNECTIONPOOLREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYCDBPROXYCONNECTIONPOOLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * ModifyCDBProxyConnectionPool request structure.
                */
                class ModifyCDBProxyConnectionPoolRequest : public AbstractModel
                {
                public:
                    ModifyCDBProxyConnectionPoolRequest();
                    ~ModifyCDBProxyConnectionPoolRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Database proxy ID
                     * @return ProxyGroupId Database proxy ID
                     */
                    std::string GetProxyGroupId() const;

                    /**
                     * 设置Database proxy ID
                     * @param ProxyGroupId Database proxy ID
                     */
                    void SetProxyGroupId(const std::string& _proxyGroupId);

                    /**
                     * 判断参数 ProxyGroupId 是否已赋值
                     * @return ProxyGroupId 是否已赋值
                     */
                    bool ProxyGroupIdHasBeenSet() const;

                    /**
                     * 获取Whether to enable the connection pool. Valid values: `true` (enable);
                             `false` (disable).
                     * @return OpenConnectionPool Whether to enable the connection pool. Valid values: `true` (enable);
                             `false` (disable).
                     */
                    bool GetOpenConnectionPool() const;

                    /**
                     * 设置Whether to enable the connection pool. Valid values: `true` (enable);
                             `false` (disable).
                     * @param OpenConnectionPool Whether to enable the connection pool. Valid values: `true` (enable);
                             `false` (disable).
                     */
                    void SetOpenConnectionPool(const bool& _openConnectionPool);

                    /**
                     * 判断参数 OpenConnectionPool 是否已赋值
                     * @return OpenConnectionPool 是否已赋值
                     */
                    bool OpenConnectionPoolHasBeenSet() const;

                    /**
                     * 获取Connection pool type.
You can use the `DescribeProxyConnectionPoolConf` API to query the connection pool type.
                     * @return ConnectionPoolType Connection pool type.
You can use the `DescribeProxyConnectionPoolConf` API to query the connection pool type.
                     */
                    std::string GetConnectionPoolType() const;

                    /**
                     * 设置Connection pool type.
You can use the `DescribeProxyConnectionPoolConf` API to query the connection pool type.
                     * @param ConnectionPoolType Connection pool type.
You can use the `DescribeProxyConnectionPoolConf` API to query the connection pool type.
                     */
                    void SetConnectionPoolType(const std::string& _connectionPoolType);

                    /**
                     * 判断参数 ConnectionPoolType 是否已赋值
                     * @return ConnectionPoolType 是否已赋值
                     */
                    bool ConnectionPoolTypeHasBeenSet() const;

                    /**
                     * 获取Connection persistence timeout in seconds
                     * @return PoolConnectionTimeOut Connection persistence timeout in seconds
                     */
                    int64_t GetPoolConnectionTimeOut() const;

                    /**
                     * 设置Connection persistence timeout in seconds
                     * @param PoolConnectionTimeOut Connection persistence timeout in seconds
                     */
                    void SetPoolConnectionTimeOut(const int64_t& _poolConnectionTimeOut);

                    /**
                     * 判断参数 PoolConnectionTimeOut 是否已赋值
                     * @return PoolConnectionTimeOut 是否已赋值
                     */
                    bool PoolConnectionTimeOutHasBeenSet() const;

                private:

                    /**
                     * Database proxy ID
                     */
                    std::string m_proxyGroupId;
                    bool m_proxyGroupIdHasBeenSet;

                    /**
                     * Whether to enable the connection pool. Valid values: `true` (enable);
                             `false` (disable).
                     */
                    bool m_openConnectionPool;
                    bool m_openConnectionPoolHasBeenSet;

                    /**
                     * Connection pool type.
You can use the `DescribeProxyConnectionPoolConf` API to query the connection pool type.
                     */
                    std::string m_connectionPoolType;
                    bool m_connectionPoolTypeHasBeenSet;

                    /**
                     * Connection persistence timeout in seconds
                     */
                    int64_t m_poolConnectionTimeOut;
                    bool m_poolConnectionTimeOutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYCDBPROXYCONNECTIONPOOLREQUEST_H_
