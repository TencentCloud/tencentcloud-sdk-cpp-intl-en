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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEBACKUPTABLESREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEBACKUPTABLESREQUEST_H_

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
                * DescribeBackupTables request structure.
                */
                class DescribeBackupTablesRequest : public AbstractModel
                {
                public:
                    DescribeBackupTablesRequest();
                    ~DescribeBackupTablesRequest() = default;
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
                     * 获取Start time in the format of yyyy-MM-dd HH:mm:ss, such as 2017-07-12 10:29:20.
                     * @return StartTime Start time in the format of yyyy-MM-dd HH:mm:ss, such as 2017-07-12 10:29:20.
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time in the format of yyyy-MM-dd HH:mm:ss, such as 2017-07-12 10:29:20.
                     * @param StartTime Start time in the format of yyyy-MM-dd HH:mm:ss, such as 2017-07-12 10:29:20.
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Specified database name.
                     * @return DatabaseName Specified database name.
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置Specified database name.
                     * @param DatabaseName Specified database name.
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     */
                    bool DatabaseNameHasBeenSet() const;

                    /**
                     * 获取Prefix of the table to be queried.
                     * @return SearchTable Prefix of the table to be queried.
                     */
                    std::string GetSearchTable() const;

                    /**
                     * 设置Prefix of the table to be queried.
                     * @param SearchTable Prefix of the table to be queried.
                     */
                    void SetSearchTable(const std::string& _searchTable);

                    /**
                     * 判断参数 SearchTable 是否已赋值
                     * @return SearchTable 是否已赋值
                     */
                    bool SearchTableHasBeenSet() const;

                    /**
                     * 获取Pagination offset.
                     * @return Offset Pagination offset.
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination offset.
                     * @param Offset Pagination offset.
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of entries per page. Value range: 1-2,000.
                     * @return Limit Number of entries per page. Value range: 1-2,000.
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of entries per page. Value range: 1-2,000.
                     * @param Limit Number of entries per page. Value range: 1-2,000.
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Start time in the format of yyyy-MM-dd HH:mm:ss, such as 2017-07-12 10:29:20.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Specified database name.
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * Prefix of the table to be queried.
                     */
                    std::string m_searchTable;
                    bool m_searchTableHasBeenSet;

                    /**
                     * Pagination offset.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of entries per page. Value range: 1-2,000.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEBACKUPTABLESREQUEST_H_
