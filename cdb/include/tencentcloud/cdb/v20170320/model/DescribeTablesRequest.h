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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBETABLESREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBETABLESREQUEST_H_

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
                * DescribeTables request structure.
                */
                class DescribeTablesRequest : public AbstractModel
                {
                public:
                    DescribeTablesRequest();
                    ~DescribeTablesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page.
                     * @return InstanceId Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page.
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page.
                     * @param InstanceId Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page.
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Database name.
                     * @return Database Database name.
                     */
                    std::string GetDatabase() const;

                    /**
                     * 设置Database name.
                     * @param Database Database name.
                     */
                    void SetDatabase(const std::string& _database);

                    /**
                     * 判断参数 Database 是否已赋值
                     * @return Database 是否已赋值
                     */
                    bool DatabaseHasBeenSet() const;

                    /**
                     * 获取Record offset. Default value: 0.
                     * @return Offset Record offset. Default value: 0.
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Record offset. Default value: 0.
                     * @param Offset Record offset. Default value: 0.
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of results to be returned for a single request. Default value: 20. Maximum value: 2,000.
                     * @return Limit Number of results to be returned for a single request. Default value: 20. Maximum value: 2,000.
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of results to be returned for a single request. Default value: 20. Maximum value: 2,000.
                     * @param Limit Number of results to be returned for a single request. Default value: 20. Maximum value: 2,000.
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Regular expression for matching table names, which complies with the rules at MySQL's official website
                     * @return TableRegexp Regular expression for matching table names, which complies with the rules at MySQL's official website
                     */
                    std::string GetTableRegexp() const;

                    /**
                     * 设置Regular expression for matching table names, which complies with the rules at MySQL's official website
                     * @param TableRegexp Regular expression for matching table names, which complies with the rules at MySQL's official website
                     */
                    void SetTableRegexp(const std::string& _tableRegexp);

                    /**
                     * 判断参数 TableRegexp 是否已赋值
                     * @return TableRegexp 是否已赋值
                     */
                    bool TableRegexpHasBeenSet() const;

                private:

                    /**
                     * Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Database name.
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * Record offset. Default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of results to be returned for a single request. Default value: 20. Maximum value: 2,000.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Regular expression for matching table names, which complies with the rules at MySQL's official website
                     */
                    std::string m_tableRegexp;
                    bool m_tableRegexpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBETABLESREQUEST_H_
