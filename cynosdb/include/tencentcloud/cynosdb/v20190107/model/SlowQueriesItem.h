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
                     */
                    int64_t GetTimestamp() const;

                    /**
                     * 设置Execution timestamp
                     * @param Timestamp Execution timestamp
                     */
                    void SetTimestamp(const int64_t& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取Execution duration in seconds
                     * @return QueryTime Execution duration in seconds
                     */
                    double GetQueryTime() const;

                    /**
                     * 设置Execution duration in seconds
                     * @param QueryTime Execution duration in seconds
                     */
                    void SetQueryTime(const double& _queryTime);

                    /**
                     * 判断参数 QueryTime 是否已赋值
                     * @return QueryTime 是否已赋值
                     */
                    bool QueryTimeHasBeenSet() const;

                    /**
                     * 获取SQL statement
                     * @return SqlText SQL statement
                     */
                    std::string GetSqlText() const;

                    /**
                     * 设置SQL statement
                     * @param SqlText SQL statement
                     */
                    void SetSqlText(const std::string& _sqlText);

                    /**
                     * 判断参数 SqlText 是否已赋值
                     * @return SqlText 是否已赋值
                     */
                    bool SqlTextHasBeenSet() const;

                    /**
                     * 获取Client host
                     * @return UserHost Client host
                     */
                    std::string GetUserHost() const;

                    /**
                     * 设置Client host
                     * @param UserHost Client host
                     */
                    void SetUserHost(const std::string& _userHost);

                    /**
                     * 判断参数 UserHost 是否已赋值
                     * @return UserHost 是否已赋值
                     */
                    bool UserHostHasBeenSet() const;

                    /**
                     * 获取Username
                     * @return UserName Username
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Username
                     * @param UserName Username
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取Database name
                     * @return Database Database name
                     */
                    std::string GetDatabase() const;

                    /**
                     * 设置Database name
                     * @param Database Database name
                     */
                    void SetDatabase(const std::string& _database);

                    /**
                     * 判断参数 Database 是否已赋值
                     * @return Database 是否已赋值
                     */
                    bool DatabaseHasBeenSet() const;

                    /**
                     * 获取Lock duration in seconds
                     * @return LockTime Lock duration in seconds
                     */
                    double GetLockTime() const;

                    /**
                     * 设置Lock duration in seconds
                     * @param LockTime Lock duration in seconds
                     */
                    void SetLockTime(const double& _lockTime);

                    /**
                     * 判断参数 LockTime 是否已赋值
                     * @return LockTime 是否已赋值
                     */
                    bool LockTimeHasBeenSet() const;

                    /**
                     * 获取Number of scanned rows
                     * @return RowsExamined Number of scanned rows
                     */
                    int64_t GetRowsExamined() const;

                    /**
                     * 设置Number of scanned rows
                     * @param RowsExamined Number of scanned rows
                     */
                    void SetRowsExamined(const int64_t& _rowsExamined);

                    /**
                     * 判断参数 RowsExamined 是否已赋值
                     * @return RowsExamined 是否已赋值
                     */
                    bool RowsExaminedHasBeenSet() const;

                    /**
                     * 获取Number of returned rows
                     * @return RowsSent Number of returned rows
                     */
                    int64_t GetRowsSent() const;

                    /**
                     * 设置Number of returned rows
                     * @param RowsSent Number of returned rows
                     */
                    void SetRowsSent(const int64_t& _rowsSent);

                    /**
                     * 判断参数 RowsSent 是否已赋值
                     * @return RowsSent 是否已赋值
                     */
                    bool RowsSentHasBeenSet() const;

                    /**
                     * 获取SQL template
                     * @return SqlTemplate SQL template
                     */
                    std::string GetSqlTemplate() const;

                    /**
                     * 设置SQL template
                     * @param SqlTemplate SQL template
                     */
                    void SetSqlTemplate(const std::string& _sqlTemplate);

                    /**
                     * 判断参数 SqlTemplate 是否已赋值
                     * @return SqlTemplate 是否已赋值
                     */
                    bool SqlTemplateHasBeenSet() const;

                    /**
                     * 获取MD5 value of the SQL statement
                     * @return SqlMd5 MD5 value of the SQL statement
                     */
                    std::string GetSqlMd5() const;

                    /**
                     * 设置MD5 value of the SQL statement
                     * @param SqlMd5 MD5 value of the SQL statement
                     */
                    void SetSqlMd5(const std::string& _sqlMd5);

                    /**
                     * 判断参数 SqlMd5 是否已赋值
                     * @return SqlMd5 是否已赋值
                     */
                    bool SqlMd5HasBeenSet() const;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SLOWQUERIESITEM_H_
