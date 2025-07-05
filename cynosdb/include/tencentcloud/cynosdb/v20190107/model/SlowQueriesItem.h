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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SLOWQUERIESITEM_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SLOWQUERIESITEM_H_

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
                * Slow query information of the instance
                */
                class SlowQueriesItem : public AbstractModel
                {
                public:
                    SlowQueriesItem();
                    ~SlowQueriesItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Execution timestamp
                     * @return Timestamp Execution timestamp
                     * 
                     */
                    int64_t GetTimestamp() const;

                    /**
                     * 设置Execution timestamp
                     * @param _timestamp Execution timestamp
                     * 
                     */
                    void SetTimestamp(const int64_t& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取Execution duration in seconds
                     * @return QueryTime Execution duration in seconds
                     * 
                     */
                    double GetQueryTime() const;

                    /**
                     * 设置Execution duration in seconds
                     * @param _queryTime Execution duration in seconds
                     * 
                     */
                    void SetQueryTime(const double& _queryTime);

                    /**
                     * 判断参数 QueryTime 是否已赋值
                     * @return QueryTime 是否已赋值
                     * 
                     */
                    bool QueryTimeHasBeenSet() const;

                    /**
                     * 获取SQL statement
                     * @return SqlText SQL statement
                     * 
                     */
                    std::string GetSqlText() const;

                    /**
                     * 设置SQL statement
                     * @param _sqlText SQL statement
                     * 
                     */
                    void SetSqlText(const std::string& _sqlText);

                    /**
                     * 判断参数 SqlText 是否已赋值
                     * @return SqlText 是否已赋值
                     * 
                     */
                    bool SqlTextHasBeenSet() const;

                    /**
                     * 获取Client host
                     * @return UserHost Client host
                     * 
                     */
                    std::string GetUserHost() const;

                    /**
                     * 设置Client host
                     * @param _userHost Client host
                     * 
                     */
                    void SetUserHost(const std::string& _userHost);

                    /**
                     * 判断参数 UserHost 是否已赋值
                     * @return UserHost 是否已赋值
                     * 
                     */
                    bool UserHostHasBeenSet() const;

                    /**
                     * 获取Username
                     * @return UserName Username
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Username
                     * @param _userName Username
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取Database name
                     * @return Database Database name
                     * 
                     */
                    std::string GetDatabase() const;

                    /**
                     * 设置Database name
                     * @param _database Database name
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
                     * 获取Lock duration in seconds
                     * @return LockTime Lock duration in seconds
                     * 
                     */
                    double GetLockTime() const;

                    /**
                     * 设置Lock duration in seconds
                     * @param _lockTime Lock duration in seconds
                     * 
                     */
                    void SetLockTime(const double& _lockTime);

                    /**
                     * 判断参数 LockTime 是否已赋值
                     * @return LockTime 是否已赋值
                     * 
                     */
                    bool LockTimeHasBeenSet() const;

                    /**
                     * 获取Number of scanned rows
                     * @return RowsExamined Number of scanned rows
                     * 
                     */
                    int64_t GetRowsExamined() const;

                    /**
                     * 设置Number of scanned rows
                     * @param _rowsExamined Number of scanned rows
                     * 
                     */
                    void SetRowsExamined(const int64_t& _rowsExamined);

                    /**
                     * 判断参数 RowsExamined 是否已赋值
                     * @return RowsExamined 是否已赋值
                     * 
                     */
                    bool RowsExaminedHasBeenSet() const;

                    /**
                     * 获取Number of returned rows
                     * @return RowsSent Number of returned rows
                     * 
                     */
                    int64_t GetRowsSent() const;

                    /**
                     * 设置Number of returned rows
                     * @param _rowsSent Number of returned rows
                     * 
                     */
                    void SetRowsSent(const int64_t& _rowsSent);

                    /**
                     * 判断参数 RowsSent 是否已赋值
                     * @return RowsSent 是否已赋值
                     * 
                     */
                    bool RowsSentHasBeenSet() const;

                    /**
                     * 获取SQL template
                     * @return SqlTemplate SQL template
                     * 
                     */
                    std::string GetSqlTemplate() const;

                    /**
                     * 设置SQL template
                     * @param _sqlTemplate SQL template
                     * 
                     */
                    void SetSqlTemplate(const std::string& _sqlTemplate);

                    /**
                     * 判断参数 SqlTemplate 是否已赋值
                     * @return SqlTemplate 是否已赋值
                     * 
                     */
                    bool SqlTemplateHasBeenSet() const;

                    /**
                     * 获取MD5 value of the SQL statement
                     * @return SqlMd5 MD5 value of the SQL statement
                     * 
                     */
                    std::string GetSqlMd5() const;

                    /**
                     * 设置MD5 value of the SQL statement
                     * @param _sqlMd5 MD5 value of the SQL statement
                     * 
                     */
                    void SetSqlMd5(const std::string& _sqlMd5);

                    /**
                     * 判断参数 SqlMd5 是否已赋值
                     * @return SqlMd5 是否已赋值
                     * 
                     */
                    bool SqlMd5HasBeenSet() const;

                    /**
                     * 获取Remote reading count.
Specifies that the database kernel version is larger than 3.1.12.
                     * @return SyncReadCountRemote Remote reading count.
Specifies that the database kernel version is larger than 3.1.12.
                     * 
                     */
                    int64_t GetSyncReadCountRemote() const;

                    /**
                     * 设置Remote reading count.
Specifies that the database kernel version is larger than 3.1.12.
                     * @param _syncReadCountRemote Remote reading count.
Specifies that the database kernel version is larger than 3.1.12.
                     * 
                     */
                    void SetSyncReadCountRemote(const int64_t& _syncReadCountRemote);

                    /**
                     * 判断参数 SyncReadCountRemote 是否已赋值
                     * @return SyncReadCountRemote 是否已赋值
                     * 
                     */
                    bool SyncReadCountRemoteHasBeenSet() const;

                    /**
                     * 获取Number of remote read bytes.
Specifies that the database kernel version is larger than 3.1.12.
                     * @return SyncReadBytesRemote Number of remote read bytes.
Specifies that the database kernel version is larger than 3.1.12.
                     * 
                     */
                    int64_t GetSyncReadBytesRemote() const;

                    /**
                     * 设置Number of remote read bytes.
Specifies that the database kernel version is larger than 3.1.12.
                     * @param _syncReadBytesRemote Number of remote read bytes.
Specifies that the database kernel version is larger than 3.1.12.
                     * 
                     */
                    void SetSyncReadBytesRemote(const int64_t& _syncReadBytesRemote);

                    /**
                     * 判断参数 SyncReadBytesRemote 是否已赋值
                     * @return SyncReadBytesRemote 是否已赋值
                     * 
                     */
                    bool SyncReadBytesRemoteHasBeenSet() const;

                    /**
                     * 获取Time spent on remote reads (µs).
Specifies that the database kernel version is larger than 3.1.12.
                     * @return SyncReadTimeRemote Time spent on remote reads (µs).
Specifies that the database kernel version is larger than 3.1.12.
                     * 
                     */
                    int64_t GetSyncReadTimeRemote() const;

                    /**
                     * 设置Time spent on remote reads (µs).
Specifies that the database kernel version is larger than 3.1.12.
                     * @param _syncReadTimeRemote Time spent on remote reads (µs).
Specifies that the database kernel version is larger than 3.1.12.
                     * 
                     */
                    void SetSyncReadTimeRemote(const int64_t& _syncReadTimeRemote);

                    /**
                     * 判断参数 SyncReadTimeRemote 是否已赋值
                     * @return SyncReadTimeRemote 是否已赋值
                     * 
                     */
                    bool SyncReadTimeRemoteHasBeenSet() const;

                    /**
                     * 获取Remote write count.
Specifies that the database kernel version is larger than 3.1.12.
                     * @return SyncWriteCountRemote Remote write count.
Specifies that the database kernel version is larger than 3.1.12.
                     * 
                     */
                    int64_t GetSyncWriteCountRemote() const;

                    /**
                     * 设置Remote write count.
Specifies that the database kernel version is larger than 3.1.12.
                     * @param _syncWriteCountRemote Remote write count.
Specifies that the database kernel version is larger than 3.1.12.
                     * 
                     */
                    void SetSyncWriteCountRemote(const int64_t& _syncWriteCountRemote);

                    /**
                     * 判断参数 SyncWriteCountRemote 是否已赋值
                     * @return SyncWriteCountRemote 是否已赋值
                     * 
                     */
                    bool SyncWriteCountRemoteHasBeenSet() const;

                    /**
                     * 获取Specifies the number of remote written bytes.
Specifies that the database kernel version is larger than 3.1.12.
                     * @return SyncWriteBytesRemote Specifies the number of remote written bytes.
Specifies that the database kernel version is larger than 3.1.12.
                     * 
                     */
                    int64_t GetSyncWriteBytesRemote() const;

                    /**
                     * 设置Specifies the number of remote written bytes.
Specifies that the database kernel version is larger than 3.1.12.
                     * @param _syncWriteBytesRemote Specifies the number of remote written bytes.
Specifies that the database kernel version is larger than 3.1.12.
                     * 
                     */
                    void SetSyncWriteBytesRemote(const int64_t& _syncWriteBytesRemote);

                    /**
                     * 判断参数 SyncWriteBytesRemote 是否已赋值
                     * @return SyncWriteBytesRemote 是否已赋值
                     * 
                     */
                    bool SyncWriteBytesRemoteHasBeenSet() const;

                    /**
                     * 获取Time spent on remote writing (µs).
Specifies that the database kernel version is larger than 3.1.12.
                     * @return SyncWriteTimeRemote Time spent on remote writing (µs).
Specifies that the database kernel version is larger than 3.1.12.
                     * 
                     */
                    int64_t GetSyncWriteTimeRemote() const;

                    /**
                     * 设置Time spent on remote writing (µs).
Specifies that the database kernel version is larger than 3.1.12.
                     * @param _syncWriteTimeRemote Time spent on remote writing (µs).
Specifies that the database kernel version is larger than 3.1.12.
                     * 
                     */
                    void SetSyncWriteTimeRemote(const int64_t& _syncWriteTimeRemote);

                    /**
                     * 判断参数 SyncWriteTimeRemote 是否已赋值
                     * @return SyncWriteTimeRemote 是否已赋值
                     * 
                     */
                    bool SyncWriteTimeRemoteHasBeenSet() const;

                    /**
                     * 获取Transaction submission delay (µs).
Specifies that the database kernel version is larger than 3.1.12.
                     * @return TrxCommitDelay Transaction submission delay (µs).
Specifies that the database kernel version is larger than 3.1.12.
                     * 
                     */
                    int64_t GetTrxCommitDelay() const;

                    /**
                     * 设置Transaction submission delay (µs).
Specifies that the database kernel version is larger than 3.1.12.
                     * @param _trxCommitDelay Transaction submission delay (µs).
Specifies that the database kernel version is larger than 3.1.12.
                     * 
                     */
                    void SetTrxCommitDelay(const int64_t& _trxCommitDelay);

                    /**
                     * 判断参数 TrxCommitDelay 是否已赋值
                     * @return TrxCommitDelay 是否已赋值
                     * 
                     */
                    bool TrxCommitDelayHasBeenSet() const;

                private:

                    /**
                     * Execution timestamp
                     */
                    int64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * Execution duration in seconds
                     */
                    double m_queryTime;
                    bool m_queryTimeHasBeenSet;

                    /**
                     * SQL statement
                     */
                    std::string m_sqlText;
                    bool m_sqlTextHasBeenSet;

                    /**
                     * Client host
                     */
                    std::string m_userHost;
                    bool m_userHostHasBeenSet;

                    /**
                     * Username
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Database name
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * Lock duration in seconds
                     */
                    double m_lockTime;
                    bool m_lockTimeHasBeenSet;

                    /**
                     * Number of scanned rows
                     */
                    int64_t m_rowsExamined;
                    bool m_rowsExaminedHasBeenSet;

                    /**
                     * Number of returned rows
                     */
                    int64_t m_rowsSent;
                    bool m_rowsSentHasBeenSet;

                    /**
                     * SQL template
                     */
                    std::string m_sqlTemplate;
                    bool m_sqlTemplateHasBeenSet;

                    /**
                     * MD5 value of the SQL statement
                     */
                    std::string m_sqlMd5;
                    bool m_sqlMd5HasBeenSet;

                    /**
                     * Remote reading count.
Specifies that the database kernel version is larger than 3.1.12.
                     */
                    int64_t m_syncReadCountRemote;
                    bool m_syncReadCountRemoteHasBeenSet;

                    /**
                     * Number of remote read bytes.
Specifies that the database kernel version is larger than 3.1.12.
                     */
                    int64_t m_syncReadBytesRemote;
                    bool m_syncReadBytesRemoteHasBeenSet;

                    /**
                     * Time spent on remote reads (µs).
Specifies that the database kernel version is larger than 3.1.12.
                     */
                    int64_t m_syncReadTimeRemote;
                    bool m_syncReadTimeRemoteHasBeenSet;

                    /**
                     * Remote write count.
Specifies that the database kernel version is larger than 3.1.12.
                     */
                    int64_t m_syncWriteCountRemote;
                    bool m_syncWriteCountRemoteHasBeenSet;

                    /**
                     * Specifies the number of remote written bytes.
Specifies that the database kernel version is larger than 3.1.12.
                     */
                    int64_t m_syncWriteBytesRemote;
                    bool m_syncWriteBytesRemoteHasBeenSet;

                    /**
                     * Time spent on remote writing (µs).
Specifies that the database kernel version is larger than 3.1.12.
                     */
                    int64_t m_syncWriteTimeRemote;
                    bool m_syncWriteTimeRemoteHasBeenSet;

                    /**
                     * Transaction submission delay (µs).
Specifies that the database kernel version is larger than 3.1.12.
                     */
                    int64_t m_trxCommitDelay;
                    bool m_trxCommitDelayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SLOWQUERIESITEM_H_
