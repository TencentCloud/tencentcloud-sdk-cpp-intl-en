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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_SLOWLOGITEM_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_SLOWLOGITEM_H_

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
                * Structured slow log details
                */
                class SlowLogItem : public AbstractModel
                {
                public:
                    SlowLogItem();
                    ~SlowLogItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Sql execution time. Unix second-level timestamp.
                     * @return Timestamp Sql execution time. Unix second-level timestamp.
                     * 
                     */
                    uint64_t GetTimestamp() const;

                    /**
                     * 设置Sql execution time. Unix second-level timestamp.
                     * @param _timestamp Sql execution time. Unix second-level timestamp.
                     * 
                     */
                    void SetTimestamp(const uint64_t& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取Execution duration of Sql (seconds).
                     * @return QueryTime Execution duration of Sql (seconds).
                     * 
                     */
                    double GetQueryTime() const;

                    /**
                     * 设置Execution duration of Sql (seconds).
                     * @param _queryTime Execution duration of Sql (seconds).
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
                     * 获取Sql statement.
                     * @return SqlText Sql statement.
                     * 
                     */
                    std::string GetSqlText() const;

                    /**
                     * 设置Sql statement.
                     * @param _sqlText Sql statement.
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
                     * 获取Client IP address.
                     * @return UserHost Client IP address.
                     * 
                     */
                    std::string GetUserHost() const;

                    /**
                     * 设置Client IP address.
                     * @param _userHost Client IP address.
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
                     * 获取Username.
                     * @return UserName Username.
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Username.
                     * @param _userName Username.
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
                     * 获取Database name.
                     * @return Database Database name.
                     * 
                     */
                    std::string GetDatabase() const;

                    /**
                     * 设置Database name.
                     * @param _database Database name.
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
                     * 获取Lock duration (unit: second).
                     * @return LockTime Lock duration (unit: second).
                     * 
                     */
                    double GetLockTime() const;

                    /**
                     * 设置Lock duration (unit: second).
                     * @param _lockTime Lock duration (unit: second).
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
                     * 获取Number of scanned rows.
                     * @return RowsExamined Number of scanned rows.
                     * 
                     */
                    int64_t GetRowsExamined() const;

                    /**
                     * 设置Number of scanned rows.
                     * @param _rowsExamined Number of scanned rows.
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
                     * 获取Result set row count.
                     * @return RowsSent Result set row count.
                     * 
                     */
                    int64_t GetRowsSent() const;

                    /**
                     * 设置Result set row count.
                     * @param _rowsSent Result set row count.
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
                     * 获取Sql Template.
                     * @return SqlTemplate Sql Template.
                     * 
                     */
                    std::string GetSqlTemplate() const;

                    /**
                     * 设置Sql Template.
                     * @param _sqlTemplate Sql Template.
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
                     * 获取md5 of the Sql statement.
                     * @return Md5 md5 of the Sql statement.
                     * 
                     */
                    std::string GetMd5() const;

                    /**
                     * 设置md5 of the Sql statement.
                     * @param _md5 md5 of the Sql statement.
                     * 
                     */
                    void SetMd5(const std::string& _md5);

                    /**
                     * 判断参数 Md5 是否已赋值
                     * @return Md5 是否已赋值
                     * 
                     */
                    bool Md5HasBeenSet() const;

                private:

                    /**
                     * Sql execution time. Unix second-level timestamp.
                     */
                    uint64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * Execution duration of Sql (seconds).
                     */
                    double m_queryTime;
                    bool m_queryTimeHasBeenSet;

                    /**
                     * Sql statement.
                     */
                    std::string m_sqlText;
                    bool m_sqlTextHasBeenSet;

                    /**
                     * Client IP address.
                     */
                    std::string m_userHost;
                    bool m_userHostHasBeenSet;

                    /**
                     * Username.
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Database name.
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * Lock duration (unit: second).
                     */
                    double m_lockTime;
                    bool m_lockTimeHasBeenSet;

                    /**
                     * Number of scanned rows.
                     */
                    int64_t m_rowsExamined;
                    bool m_rowsExaminedHasBeenSet;

                    /**
                     * Result set row count.
                     */
                    int64_t m_rowsSent;
                    bool m_rowsSentHasBeenSet;

                    /**
                     * Sql Template.
                     */
                    std::string m_sqlTemplate;
                    bool m_sqlTemplateHasBeenSet;

                    /**
                     * md5 of the Sql statement.
                     */
                    std::string m_md5;
                    bool m_md5HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_SLOWLOGITEM_H_
