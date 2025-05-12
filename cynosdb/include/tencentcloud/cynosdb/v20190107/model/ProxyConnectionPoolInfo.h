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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PROXYCONNECTIONPOOLINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PROXYCONNECTIONPOOLINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Connection pool information for the database proxy
                */
                class ProxyConnectionPoolInfo : public AbstractModel
                {
                public:
                    ProxyConnectionPoolInfo();
                    ~ProxyConnectionPoolInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies the persistence threshold of the connection pool. the unit is seconds.
                     * @return ConnectionPoolTimeOut Specifies the persistence threshold of the connection pool. the unit is seconds.
                     * 
                     */
                    int64_t GetConnectionPoolTimeOut() const;

                    /**
                     * 设置Specifies the persistence threshold of the connection pool. the unit is seconds.
                     * @param _connectionPoolTimeOut Specifies the persistence threshold of the connection pool. the unit is seconds.
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
                     * 获取Whether the connection pool is enabled.
                     * @return OpenConnectionPool Whether the connection pool is enabled.
                     * 
                     */
                    std::string GetOpenConnectionPool() const;

                    /**
                     * 设置Whether the connection pool is enabled.
                     * @param _openConnectionPool Whether the connection pool is enabled.
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
                     * 获取Specifies the connection pool type. valid values: SessionConnectionPool (session-level connection pool).
                     * @return ConnectionPoolType Specifies the connection pool type. valid values: SessionConnectionPool (session-level connection pool).
                     * 
                     */
                    std::string GetConnectionPoolType() const;

                    /**
                     * 设置Specifies the connection pool type. valid values: SessionConnectionPool (session-level connection pool).
                     * @param _connectionPoolType Specifies the connection pool type. valid values: SessionConnectionPool (session-level connection pool).
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
                     * Specifies the persistence threshold of the connection pool. the unit is seconds.
                     */
                    int64_t m_connectionPoolTimeOut;
                    bool m_connectionPoolTimeOutHasBeenSet;

                    /**
                     * Whether the connection pool is enabled.
                     */
                    std::string m_openConnectionPool;
                    bool m_openConnectionPoolHasBeenSet;

                    /**
                     * Specifies the connection pool type. valid values: SessionConnectionPool (session-level connection pool).
                     */
                    std::string m_connectionPoolType;
                    bool m_connectionPoolTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PROXYCONNECTIONPOOLINFO_H_
