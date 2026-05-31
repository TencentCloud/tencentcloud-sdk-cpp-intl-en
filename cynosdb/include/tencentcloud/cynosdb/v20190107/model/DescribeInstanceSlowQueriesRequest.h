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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEINSTANCESLOWQUERIESREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEINSTANCESLOWQUERIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeInstanceSlowQueries request structure.
                */
                class DescribeInstanceSlowQueriesRequest : public AbstractModel
                {
                public:
                    DescribeInstanceSlowQueriesRequest();
                    ~DescribeInstanceSlowQueriesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Instance ID.</p>
                     * @return InstanceId <p>Instance ID.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance ID.</p>
                     * @param _instanceId <p>Instance ID.</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>Earliest transaction start time.</p>
                     * @return StartTime <p>Earliest transaction start time.</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>Earliest transaction start time.</p>
                     * @param _startTime <p>Earliest transaction start time.</p>
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>Latest transaction start time.</p>
                     * @return EndTime <p>Latest transaction start time.</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>Latest transaction start time.</p>
                     * @param _endTime <p>Latest transaction start time.</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>Limit.</p><p>It is recommended to control the limit size. Large limits may cause truncation due to the platform's size limit for return results.</p>
                     * @return Limit <p>Limit.</p><p>It is recommended to control the limit size. Large limits may cause truncation due to the platform's size limit for return results.</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>Limit.</p><p>It is recommended to control the limit size. Large limits may cause truncation due to the platform's size limit for return results.</p>
                     * @param _limit <p>Limit.</p><p>It is recommended to control the limit size. Large limits may cause truncation due to the platform's size limit for return results.</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>Offset.</p>
                     * @return Offset <p>Offset.</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>Offset.</p>
                     * @param _offset <p>Offset.</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>Username.</p>
                     * @return Username <p>Username.</p>
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置<p>Username.</p>
                     * @param _username <p>Username.</p>
                     * 
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     * 
                     */
                    bool UsernameHasBeenSet() const;

                    /**
                     * 获取<p>Client host.</p>
                     * @return Host <p>Client host.</p>
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置<p>Client host.</p>
                     * @param _host <p>Client host.</p>
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取<p>Database name.</p>
                     * @return Database <p>Database name.</p>
                     * 
                     */
                    std::string GetDatabase() const;

                    /**
                     * 设置<p>Database name.</p>
                     * @param _database <p>Database name.</p>
                     * 
                     */
                    void SetDatabase(const std::string& _database);

                    /**
                     * 判断参数 Database 是否已赋值
                     * @return Database 是否已赋值
                     * 
                     */
                    bool DatabaseHasBeenSet() const;

                    /**
                     * 获取<p>Sorting field.</p><p>Enumeration values:</p><ul><li>QueryTime: sorts by the total execution time of the SQL statements.</li><li>LockTime: sorts by the time consumed by the SQL statements waiting for locks (such as table locks or row locks).</li><li>RowsExamined: sorts by the number of rows scanned during SQL statement execution.</li><li>RowsSent: sorts by the number of result rows returned to the client for the SQL statements.</li><li>Timestamp: sorts by the timestamp when the slow query statement occurs.</li></ul>
                     * @return OrderBy <p>Sorting field.</p><p>Enumeration values:</p><ul><li>QueryTime: sorts by the total execution time of the SQL statements.</li><li>LockTime: sorts by the time consumed by the SQL statements waiting for locks (such as table locks or row locks).</li><li>RowsExamined: sorts by the number of rows scanned during SQL statement execution.</li><li>RowsSent: sorts by the number of result rows returned to the client for the SQL statements.</li><li>Timestamp: sorts by the timestamp when the slow query statement occurs.</li></ul>
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置<p>Sorting field.</p><p>Enumeration values:</p><ul><li>QueryTime: sorts by the total execution time of the SQL statements.</li><li>LockTime: sorts by the time consumed by the SQL statements waiting for locks (such as table locks or row locks).</li><li>RowsExamined: sorts by the number of rows scanned during SQL statement execution.</li><li>RowsSent: sorts by the number of result rows returned to the client for the SQL statements.</li><li>Timestamp: sorts by the timestamp when the slow query statement occurs.</li></ul>
                     * @param _orderBy <p>Sorting field.</p><p>Enumeration values:</p><ul><li>QueryTime: sorts by the total execution time of the SQL statements.</li><li>LockTime: sorts by the time consumed by the SQL statements waiting for locks (such as table locks or row locks).</li><li>RowsExamined: sorts by the number of rows scanned during SQL statement execution.</li><li>RowsSent: sorts by the number of result rows returned to the client for the SQL statements.</li><li>Timestamp: sorts by the timestamp when the slow query statement occurs.</li></ul>
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取<p>Sorting type. Valid values: asc and desc.</p>
                     * @return OrderByType <p>Sorting type. Valid values: asc and desc.</p>
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置<p>Sorting type. Valid values: asc and desc.</p>
                     * @param _orderByType <p>Sorting type. Valid values: asc and desc.</p>
                     * 
                     */
                    void SetOrderByType(const std::string& _orderByType);

                    /**
                     * 判断参数 OrderByType 是否已赋值
                     * @return OrderByType 是否已赋值
                     * 
                     */
                    bool OrderByTypeHasBeenSet() const;

                    /**
                     * 获取<p>SQL statement.</p>
                     * @return SqlText <p>SQL statement.</p>
                     * 
                     */
                    std::string GetSqlText() const;

                    /**
                     * 设置<p>SQL statement.</p>
                     * @param _sqlText <p>SQL statement.</p>
                     * 
                     */
                    void SetSqlText(const std::string& _sqlText);

                    /**
                     * 判断参数 SqlText 是否已赋值
                     * @return SqlText 是否已赋值
                     * 
                     */
                    bool SqlTextHasBeenSet() const;

                private:

                    /**
                     * <p>Instance ID.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Earliest transaction start time.</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>Latest transaction start time.</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>Limit.</p><p>It is recommended to control the limit size. Large limits may cause truncation due to the platform's size limit for return results.</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Offset.</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Username.</p>
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * <p>Client host.</p>
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * <p>Database name.</p>
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * <p>Sorting field.</p><p>Enumeration values:</p><ul><li>QueryTime: sorts by the total execution time of the SQL statements.</li><li>LockTime: sorts by the time consumed by the SQL statements waiting for locks (such as table locks or row locks).</li><li>RowsExamined: sorts by the number of rows scanned during SQL statement execution.</li><li>RowsSent: sorts by the number of result rows returned to the client for the SQL statements.</li><li>Timestamp: sorts by the timestamp when the slow query statement occurs.</li></ul>
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * <p>Sorting type. Valid values: asc and desc.</p>
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                    /**
                     * <p>SQL statement.</p>
                     */
                    std::string m_sqlText;
                    bool m_sqlTextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEINSTANCESLOWQUERIESREQUEST_H_
