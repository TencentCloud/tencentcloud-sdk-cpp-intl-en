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
                     * 获取SQL execution time.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Timestamp SQL execution time.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetTimestamp() const;

                    /**
                     * 设置SQL execution time.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _timestamp SQL execution time.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取SQL execution duration in seconds.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return QueryTime SQL execution duration in seconds.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetQueryTime() const;

                    /**
                     * 设置SQL execution duration in seconds.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _queryTime SQL execution duration in seconds.
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取SQL statement.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SqlText SQL statement.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSqlText() const;

                    /**
                     * 设置SQL statement.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _sqlText SQL statement.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Client address.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return UserHost Client address.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUserHost() const;

                    /**
                     * 设置Client address.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _userHost Client address.
Note: this field may return null, indicating that no valid values can be obtained.
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
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return UserName Username.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Username.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _userName Username.
Note: this field may return null, indicating that no valid values can be obtained.
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
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Database Database name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDatabase() const;

                    /**
                     * 设置Database name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _database Database name.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Lock duration in seconds.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return LockTime Lock duration in seconds.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetLockTime() const;

                    /**
                     * 设置Lock duration in seconds.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _lockTime Lock duration in seconds.
Note: this field may return `null`, indicating that no valid values can be obtained.
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
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return RowsExamined Number of scanned rows.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRowsExamined() const;

                    /**
                     * 设置Number of scanned rows.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _rowsExamined Number of scanned rows.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Number of rows in result set.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return RowsSent Number of rows in result set.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRowsSent() const;

                    /**
                     * 设置Number of rows in result set.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _rowsSent Number of rows in result set.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取SQL template.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SqlTemplate SQL template.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSqlTemplate() const;

                    /**
                     * 设置SQL template.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _sqlTemplate SQL template.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取SQL statement MD5.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Md5 SQL statement MD5.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMd5() const;

                    /**
                     * 设置SQL statement MD5.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _md5 SQL statement MD5.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * SQL execution time.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * SQL execution duration in seconds.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    double m_queryTime;
                    bool m_queryTimeHasBeenSet;

                    /**
                     * SQL statement.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sqlText;
                    bool m_sqlTextHasBeenSet;

                    /**
                     * Client address.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userHost;
                    bool m_userHostHasBeenSet;

                    /**
                     * Username.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Database name.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * Lock duration in seconds.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    double m_lockTime;
                    bool m_lockTimeHasBeenSet;

                    /**
                     * Number of scanned rows.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_rowsExamined;
                    bool m_rowsExaminedHasBeenSet;

                    /**
                     * Number of rows in result set.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_rowsSent;
                    bool m_rowsSentHasBeenSet;

                    /**
                     * SQL template.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sqlTemplate;
                    bool m_sqlTemplateHasBeenSet;

                    /**
                     * SQL statement MD5.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_md5;
                    bool m_md5HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_SLOWLOGITEM_H_
