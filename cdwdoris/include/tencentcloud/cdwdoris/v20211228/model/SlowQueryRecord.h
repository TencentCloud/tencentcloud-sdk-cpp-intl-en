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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_SLOWQUERYRECORD_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_SLOWQUERYRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * Slow log records
                */
                class SlowQueryRecord : public AbstractModel
                {
                public:
                    SlowQueryRecord();
                    ~SlowQueryRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取User query 
                     * @return OsUser User query 
                     * 
                     */
                    std::string GetOsUser() const;

                    /**
                     * 设置User query 
                     * @param _osUser User query 
                     * 
                     */
                    void SetOsUser(const std::string& _osUser);

                    /**
                     * 判断参数 OsUser 是否已赋值
                     * @return OsUser 是否已赋值
                     * 
                     */
                    bool OsUserHasBeenSet() const;

                    /**
                     * 获取ID query
                     * @return InitialQueryId ID query
                     * 
                     */
                    std::string GetInitialQueryId() const;

                    /**
                     * 设置ID query
                     * @param _initialQueryId ID query
                     * 
                     */
                    void SetInitialQueryId(const std::string& _initialQueryId);

                    /**
                     * 判断参数 InitialQueryId 是否已赋值
                     * @return InitialQueryId 是否已赋值
                     * 
                     */
                    bool InitialQueryIdHasBeenSet() const;

                    /**
                     * 获取SQL statement
                     * @return Sql SQL statement
                     * 
                     */
                    std::string GetSql() const;

                    /**
                     * 设置SQL statement
                     * @param _sql SQL statement
                     * 
                     */
                    void SetSql(const std::string& _sql);

                    /**
                     * 判断参数 Sql 是否已赋值
                     * @return Sql 是否已赋值
                     * 
                     */
                    bool SqlHasBeenSet() const;

                    /**
                     * 获取Start time
                     * @return QueryStartTime Start time
                     * 
                     */
                    std::string GetQueryStartTime() const;

                    /**
                     * 设置Start time
                     * @param _queryStartTime Start time
                     * 
                     */
                    void SetQueryStartTime(const std::string& _queryStartTime);

                    /**
                     * 判断参数 QueryStartTime 是否已赋值
                     * @return QueryStartTime 是否已赋值
                     * 
                     */
                    bool QueryStartTimeHasBeenSet() const;

                    /**
                     * 获取Execution duration
                     * @return DurationMs Execution duration
                     * 
                     */
                    int64_t GetDurationMs() const;

                    /**
                     * 设置Execution duration
                     * @param _durationMs Execution duration
                     * 
                     */
                    void SetDurationMs(const int64_t& _durationMs);

                    /**
                     * 判断参数 DurationMs 是否已赋值
                     * @return DurationMs 是否已赋值
                     * 
                     */
                    bool DurationMsHasBeenSet() const;

                    /**
                     * 获取The number of read rows
                     * @return ReadRows The number of read rows
                     * 
                     */
                    int64_t GetReadRows() const;

                    /**
                     * 设置The number of read rows
                     * @param _readRows The number of read rows
                     * 
                     */
                    void SetReadRows(const int64_t& _readRows);

                    /**
                     * 判断参数 ReadRows 是否已赋值
                     * @return ReadRows 是否已赋值
                     * 
                     */
                    bool ReadRowsHasBeenSet() const;

                    /**
                     * 获取Total number of read bytes
                     * @return ResultRows Total number of read bytes
                     * 
                     */
                    int64_t GetResultRows() const;

                    /**
                     * 设置Total number of read bytes
                     * @param _resultRows Total number of read bytes
                     * 
                     */
                    void SetResultRows(const int64_t& _resultRows);

                    /**
                     * 判断参数 ResultRows 是否已赋值
                     * @return ResultRows 是否已赋值
                     * 
                     */
                    bool ResultRowsHasBeenSet() const;

                    /**
                     * 获取Result bytes
                     * @return ResultBytes Result bytes
                     * 
                     */
                    uint64_t GetResultBytes() const;

                    /**
                     * 设置Result bytes
                     * @param _resultBytes Result bytes
                     * 
                     */
                    void SetResultBytes(const uint64_t& _resultBytes);

                    /**
                     * 判断参数 ResultBytes 是否已赋值
                     * @return ResultBytes 是否已赋值
                     * 
                     */
                    bool ResultBytesHasBeenSet() const;

                    /**
                     * 获取Memory
                     * @return MemoryUsage Memory
                     * 
                     */
                    int64_t GetMemoryUsage() const;

                    /**
                     * 设置Memory
                     * @param _memoryUsage Memory
                     * 
                     */
                    void SetMemoryUsage(const int64_t& _memoryUsage);

                    /**
                     * 判断参数 MemoryUsage 是否已赋值
                     * @return MemoryUsage 是否已赋值
                     * 
                     */
                    bool MemoryUsageHasBeenSet() const;

                    /**
                     * 获取Initial query IP
                     * @return InitialAddress Initial query IP
                     * 
                     */
                    std::string GetInitialAddress() const;

                    /**
                     * 设置Initial query IP
                     * @param _initialAddress Initial query IP
                     * 
                     */
                    void SetInitialAddress(const std::string& _initialAddress);

                    /**
                     * 判断参数 InitialAddress 是否已赋值
                     * @return InitialAddress 是否已赋值
                     * 
                     */
                    bool InitialAddressHasBeenSet() const;

                    /**
                     * 获取Database name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DbName Database name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置Database name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dbName Database name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDbName(const std::string& _dbName);

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     * 
                     */
                    bool DbNameHasBeenSet() const;

                    /**
                     * 获取Whether it is a query. 0 indicates no, and 1 indicates query statement.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsQuery Whether it is a query. 0 indicates no, and 1 indicates query statement.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetIsQuery() const;

                    /**
                     * 设置Whether it is a query. 0 indicates no, and 1 indicates query statement.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isQuery Whether it is a query. 0 indicates no, and 1 indicates query statement.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsQuery(const int64_t& _isQuery);

                    /**
                     * 判断参数 IsQuery 是否已赋值
                     * @return IsQuery 是否已赋值
                     * 
                     */
                    bool IsQueryHasBeenSet() const;

                    /**
                     * 获取MB format of ResultBytes
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ResultBytesMB MB format of ResultBytes
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetResultBytesMB() const;

                    /**
                     * 设置MB format of ResultBytes
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resultBytesMB MB format of ResultBytes
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetResultBytesMB(const double& _resultBytesMB);

                    /**
                     * 判断参数 ResultBytesMB 是否已赋值
                     * @return ResultBytesMB 是否已赋值
                     * 
                     */
                    bool ResultBytesMBHasBeenSet() const;

                    /**
                     * 获取MemoryUsage, in MB
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MemoryUsageMB MemoryUsage, in MB
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetMemoryUsageMB() const;

                    /**
                     * 设置MemoryUsage, in MB
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _memoryUsageMB MemoryUsage, in MB
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMemoryUsageMB(const double& _memoryUsageMB);

                    /**
                     * 判断参数 MemoryUsageMB 是否已赋值
                     * @return MemoryUsageMB 是否已赋值
                     * 
                     */
                    bool MemoryUsageMBHasBeenSet() const;

                    /**
                     * 获取DurationMs, in seconds
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DurationSec DurationMs, in seconds
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetDurationSec() const;

                    /**
                     * 设置DurationMs, in seconds
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _durationSec DurationMs, in seconds
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDurationSec(const double& _durationSec);

                    /**
                     * 判断参数 DurationSec 是否已赋值
                     * @return DurationSec 是否已赋值
                     * 
                     */
                    bool DurationSecHasBeenSet() const;

                private:

                    /**
                     * User query 
                     */
                    std::string m_osUser;
                    bool m_osUserHasBeenSet;

                    /**
                     * ID query
                     */
                    std::string m_initialQueryId;
                    bool m_initialQueryIdHasBeenSet;

                    /**
                     * SQL statement
                     */
                    std::string m_sql;
                    bool m_sqlHasBeenSet;

                    /**
                     * Start time
                     */
                    std::string m_queryStartTime;
                    bool m_queryStartTimeHasBeenSet;

                    /**
                     * Execution duration
                     */
                    int64_t m_durationMs;
                    bool m_durationMsHasBeenSet;

                    /**
                     * The number of read rows
                     */
                    int64_t m_readRows;
                    bool m_readRowsHasBeenSet;

                    /**
                     * Total number of read bytes
                     */
                    int64_t m_resultRows;
                    bool m_resultRowsHasBeenSet;

                    /**
                     * Result bytes
                     */
                    uint64_t m_resultBytes;
                    bool m_resultBytesHasBeenSet;

                    /**
                     * Memory
                     */
                    int64_t m_memoryUsage;
                    bool m_memoryUsageHasBeenSet;

                    /**
                     * Initial query IP
                     */
                    std::string m_initialAddress;
                    bool m_initialAddressHasBeenSet;

                    /**
                     * Database name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * Whether it is a query. 0 indicates no, and 1 indicates query statement.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_isQuery;
                    bool m_isQueryHasBeenSet;

                    /**
                     * MB format of ResultBytes
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_resultBytesMB;
                    bool m_resultBytesMBHasBeenSet;

                    /**
                     * MemoryUsage, in MB
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_memoryUsageMB;
                    bool m_memoryUsageMBHasBeenSet;

                    /**
                     * DurationMs, in seconds
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_durationSec;
                    bool m_durationSecHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_SLOWQUERYRECORD_H_
