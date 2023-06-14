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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_CONNECTIONPOOLINFO_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_CONNECTIONPOOLINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Connection pool information
                */
                class ConnectionPoolInfo : public AbstractModel
                {
                public:
                    ConnectionPoolInfo();
                    ~ConnectionPoolInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether the connection pool is enabled
Note: this field may return `null`, indicating that no valid value can be found.
                     * @return ConnectionPool Whether the connection pool is enabled
Note: this field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    bool GetConnectionPool() const;

                    /**
                     * 设置Whether the connection pool is enabled
Note: this field may return `null`, indicating that no valid value can be found.
                     * @param _connectionPool Whether the connection pool is enabled
Note: this field may return `null`, indicating that no valid value can be found.
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
                     * 获取Connection pool type. Valid value: `SessionConnectionPool` (session-level connection pool)
Note: this field may return `null`, indicating that no valid value can be found.
                     * @return ConnectionPoolType Connection pool type. Valid value: `SessionConnectionPool` (session-level connection pool)
Note: this field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    std::string GetConnectionPoolType() const;

                    /**
                     * 设置Connection pool type. Valid value: `SessionConnectionPool` (session-level connection pool)
Note: this field may return `null`, indicating that no valid value can be found.
                     * @param _connectionPoolType Connection pool type. Valid value: `SessionConnectionPool` (session-level connection pool)
Note: this field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    void SetConnectionPoolType(const std::string& _connectionPoolType);

                    /**
                     * 判断参数 ConnectionPoolType 是否已赋值
                     * @return ConnectionPoolType 是否已赋值
                     * 
                     */
                    bool ConnectionPoolTypeHasBeenSet() const;

                    /**
                     * 获取Connection persistence timeout in seconds
Note: this field may return `null`, indicating that no valid value can be found.
                     * @return PoolConnectionTimeOut Connection persistence timeout in seconds
Note: this field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    int64_t GetPoolConnectionTimeOut() const;

                    /**
                     * 设置Connection persistence timeout in seconds
Note: this field may return `null`, indicating that no valid value can be found.
                     * @param _poolConnectionTimeOut Connection persistence timeout in seconds
Note: this field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    void SetPoolConnectionTimeOut(const int64_t& _poolConnectionTimeOut);

                    /**
                     * 判断参数 PoolConnectionTimeOut 是否已赋值
                     * @return PoolConnectionTimeOut 是否已赋值
                     * 
                     */
                    bool PoolConnectionTimeOutHasBeenSet() const;

                private:

                    /**
                     * Whether the connection pool is enabled
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    bool m_connectionPool;
                    bool m_connectionPoolHasBeenSet;

                    /**
                     * Connection pool type. Valid value: `SessionConnectionPool` (session-level connection pool)
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    std::string m_connectionPoolType;
                    bool m_connectionPoolTypeHasBeenSet;

                    /**
                     * Connection persistence timeout in seconds
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    int64_t m_poolConnectionTimeOut;
                    bool m_poolConnectionTimeOutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_CONNECTIONPOOLINFO_H_
