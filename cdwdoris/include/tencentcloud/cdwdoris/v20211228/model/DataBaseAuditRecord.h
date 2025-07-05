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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DATABASEAUDITRECORD_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DATABASEAUDITRECORD_H_

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
                * Database audit
                */
                class DataBaseAuditRecord : public AbstractModel
                {
                public:
                    DataBaseAuditRecord();
                    ~DataBaseAuditRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Query user
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OsUser Query user
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOsUser() const;

                    /**
                     * 设置Query user
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _osUser Query user
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Query ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InitialQueryId Query ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInitialQueryId() const;

                    /**
                     * 设置Query ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _initialQueryId Query ID
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Sql SQL statement
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSql() const;

                    /**
                     * 设置SQL statement
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sql SQL statement
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return QueryStartTime Start time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetQueryStartTime() const;

                    /**
                     * 设置Start time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _queryStartTime Start time
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DurationMs Execution duration
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetDurationMs() const;

                    /**
                     * 设置Execution duration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _durationMs Execution duration
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ReadRows The number of read rows
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetReadRows() const;

                    /**
                     * 设置The number of read rows
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _readRows The number of read rows
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ResultRows Total number of read bytes
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetResultRows() const;

                    /**
                     * 设置Total number of read bytes
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resultRows Total number of read bytes
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ResultBytes Result bytes
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetResultBytes() const;

                    /**
                     * 设置Result bytes
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resultBytes Result bytes
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MemoryUsage Memory
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMemoryUsage() const;

                    /**
                     * 设置Memory
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _memoryUsage Memory
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InitialAddress Initial query IP
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInitialAddress() const;

                    /**
                     * 设置Initial query IP
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _initialAddress Initial query IP
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Database
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DbName Database
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置Database
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dbName Database
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
                     * 获取SQL type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SqlType SQL type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSqlType() const;

                    /**
                     * 设置SQL type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sqlType SQL type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSqlType(const std::string& _sqlType);

                    /**
                     * 判断参数 SqlType 是否已赋值
                     * @return SqlType 是否已赋值
                     * 
                     */
                    bool SqlTypeHasBeenSet() const;

                    /**
                     * 获取Catalog name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Catalog Catalog name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCatalog() const;

                    /**
                     * 设置Catalog name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _catalog Catalog name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCatalog(const std::string& _catalog);

                    /**
                     * 判断参数 Catalog 是否已赋值
                     * @return Catalog 是否已赋值
                     * 
                     */
                    bool CatalogHasBeenSet() const;

                private:

                    /**
                     * Query user
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_osUser;
                    bool m_osUserHasBeenSet;

                    /**
                     * Query ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_initialQueryId;
                    bool m_initialQueryIdHasBeenSet;

                    /**
                     * SQL statement
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sql;
                    bool m_sqlHasBeenSet;

                    /**
                     * Start time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_queryStartTime;
                    bool m_queryStartTimeHasBeenSet;

                    /**
                     * Execution duration
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_durationMs;
                    bool m_durationMsHasBeenSet;

                    /**
                     * The number of read rows
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_readRows;
                    bool m_readRowsHasBeenSet;

                    /**
                     * Total number of read bytes
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_resultRows;
                    bool m_resultRowsHasBeenSet;

                    /**
                     * Result bytes
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_resultBytes;
                    bool m_resultBytesHasBeenSet;

                    /**
                     * Memory
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_memoryUsage;
                    bool m_memoryUsageHasBeenSet;

                    /**
                     * Initial query IP
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_initialAddress;
                    bool m_initialAddressHasBeenSet;

                    /**
                     * Database
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * SQL type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sqlType;
                    bool m_sqlTypeHasBeenSet;

                    /**
                     * Catalog name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_catalog;
                    bool m_catalogHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DATABASEAUDITRECORD_H_
