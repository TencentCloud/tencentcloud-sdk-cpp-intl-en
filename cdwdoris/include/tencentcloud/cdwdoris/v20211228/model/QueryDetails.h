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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_QUERYDETAILS_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_QUERYDETAILS_H_

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
                * Query and analyze details
                */
                class QueryDetails : public AbstractModel
                {
                public:
                    QueryDetails();
                    ~QueryDetails() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Initiating User
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Initiator Initiating User
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInitiator() const;

                    /**
                     * 设置Initiating User
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _initiator Initiating User
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInitiator(const std::string& _initiator);

                    /**
                     * 判断参数 Initiator 是否已赋值
                     * @return Initiator 是否已赋值
                     * 
                     */
                    bool InitiatorHasBeenSet() const;

                    /**
                     * 获取Access source address

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SourceAddress Access source address

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSourceAddress() const;

                    /**
                     * 设置Access source address

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sourceAddress Access source address

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSourceAddress(const std::string& _sourceAddress);

                    /**
                     * 判断参数 SourceAddress 是否已赋值
                     * @return SourceAddress 是否已赋值
                     * 
                     */
                    bool SourceAddressHasBeenSet() const;

                    /**
                     * 获取Initial request ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InitialRequestId Initial request ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInitialRequestId() const;

                    /**
                     * 设置Initial request ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _initialRequestId Initial request ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInitialRequestId(const std::string& _initialRequestId);

                    /**
                     * 判断参数 InitialRequestId 是否已赋值
                     * @return InitialRequestId 是否已赋值
                     * 
                     */
                    bool InitialRequestIdHasBeenSet() const;

                    /**
                     * 获取catalog name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Catalog catalog name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCatalog() const;

                    /**
                     * 设置catalog name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _catalog catalog name
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

                    /**
                     * 获取Database name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Database Database name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDatabase() const;

                    /**
                     * 设置Database name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _database Database name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取SQL Type: 0 is non-query, 1 is query, -1 is unrestricted.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SQLType SQL Type: 0 is non-query, 1 is query, -1 is unrestricted.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSQLType() const;

                    /**
                     * 设置SQL Type: 0 is non-query, 1 is query, -1 is unrestricted.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sQLType SQL Type: 0 is non-query, 1 is query, -1 is unrestricted.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSQLType(const std::string& _sQLType);

                    /**
                     * 判断参数 SQLType 是否已赋值
                     * @return SQLType 是否已赋值
                     * 
                     */
                    bool SQLTypeHasBeenSet() const;

                    /**
                     * 获取SQL statement
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SQLStatement SQL statement
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSQLStatement() const;

                    /**
                     * 设置SQL statement
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sQLStatement SQL statement
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSQLStatement(const std::string& _sQLStatement);

                    /**
                     * 判断参数 SQLStatement 是否已赋值
                     * @return SQLStatement 是否已赋值
                     * 
                     */
                    bool SQLStatementHasBeenSet() const;

                    /**
                     * 获取Execution start time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StartTime Execution start time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Execution start time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _startTime Execution start time
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Runtime (s)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Duration Runtime (s)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetDuration() const;

                    /**
                     * 设置Runtime (s)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _duration Runtime (s)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDuration(const uint64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取The number of read rows
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RowsRead The number of read rows
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetRowsRead() const;

                    /**
                     * 设置The number of read rows
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _rowsRead The number of read rows
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRowsRead(const uint64_t& _rowsRead);

                    /**
                     * 判断参数 RowsRead 是否已赋值
                     * @return RowsRead 是否已赋值
                     * 
                     */
                    bool RowsReadHasBeenSet() const;

                    /**
                     * 获取Read data volume (MB)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DataRead Read data volume (MB)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetDataRead() const;

                    /**
                     * 设置Read data volume (MB)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dataRead Read data volume (MB)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDataRead(const double& _dataRead);

                    /**
                     * 判断参数 DataRead 是否已赋值
                     * @return DataRead 是否已赋值
                     * 
                     */
                    bool DataReadHasBeenSet() const;

                    /**
                     * 获取Memory usage (MB)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MemoryUsage Memory usage (MB)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetMemoryUsage() const;

                    /**
                     * 设置Memory usage (MB)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _memoryUsage Memory usage (MB)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMemoryUsage(const double& _memoryUsage);

                    /**
                     * 判断参数 MemoryUsage 是否已赋值
                     * @return MemoryUsage 是否已赋值
                     * 
                     */
                    bool MemoryUsageHasBeenSet() const;

                private:

                    /**
                     * Initiating User
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_initiator;
                    bool m_initiatorHasBeenSet;

                    /**
                     * Access source address

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sourceAddress;
                    bool m_sourceAddressHasBeenSet;

                    /**
                     * Initial request ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_initialRequestId;
                    bool m_initialRequestIdHasBeenSet;

                    /**
                     * catalog name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_catalog;
                    bool m_catalogHasBeenSet;

                    /**
                     * Database name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * SQL Type: 0 is non-query, 1 is query, -1 is unrestricted.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sQLType;
                    bool m_sQLTypeHasBeenSet;

                    /**
                     * SQL statement
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sQLStatement;
                    bool m_sQLStatementHasBeenSet;

                    /**
                     * Execution start time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Runtime (s)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * The number of read rows
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_rowsRead;
                    bool m_rowsReadHasBeenSet;

                    /**
                     * Read data volume (MB)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_dataRead;
                    bool m_dataReadHasBeenSet;

                    /**
                     * Memory usage (MB)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_memoryUsage;
                    bool m_memoryUsageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_QUERYDETAILS_H_
