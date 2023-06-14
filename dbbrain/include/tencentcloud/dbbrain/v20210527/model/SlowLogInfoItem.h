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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_SLOWLOGINFOITEM_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_SLOWLOGINFOITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * Slow log details
                */
                class SlowLogInfoItem : public AbstractModel
                {
                public:
                    SlowLogInfoItem();
                    ~SlowLogInfoItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Slow log start time
                     * @return Timestamp Slow log start time
                     * 
                     */
                    std::string GetTimestamp() const;

                    /**
                     * 设置Slow log start time
                     * @param _timestamp Slow log start time
                     * 
                     */
                    void SetTimestamp(const std::string& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

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
                     * 获取Database
                     * @return Database Database
                     * 
                     */
                    std::string GetDatabase() const;

                    /**
                     * 设置Database
                     * @param _database Database
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
                     * 获取User source
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserName User source
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置User source
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _userName User source
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取IP source
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserHost IP source
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUserHost() const;

                    /**
                     * 设置IP source
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _userHost IP source
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Execution time in seconds
                     * @return QueryTime Execution time in seconds
                     * 
                     */
                    int64_t GetQueryTime() const;

                    /**
                     * 设置Execution time in seconds
                     * @param _queryTime Execution time in seconds
                     * 
                     */
                    void SetQueryTime(const int64_t& _queryTime);

                    /**
                     * 判断参数 QueryTime 是否已赋值
                     * @return QueryTime 是否已赋值
                     * 
                     */
                    bool QueryTimeHasBeenSet() const;

                    /**
                     * 获取Lock time in seconds
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LockTime Lock time in seconds
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetLockTime() const;

                    /**
                     * 设置Lock time in seconds
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _lockTime Lock time in seconds
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLockTime(const int64_t& _lockTime);

                    /**
                     * 判断参数 LockTime 是否已赋值
                     * @return LockTime 是否已赋值
                     * 
                     */
                    bool LockTimeHasBeenSet() const;

                    /**
                     * 获取Number of scanned rows
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RowsExamined Number of scanned rows
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRowsExamined() const;

                    /**
                     * 设置Number of scanned rows
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _rowsExamined Number of scanned rows
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RowsSent Number of returned rows
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRowsSent() const;

                    /**
                     * 设置Number of returned rows
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _rowsSent Number of returned rows
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRowsSent(const int64_t& _rowsSent);

                    /**
                     * 判断参数 RowsSent 是否已赋值
                     * @return RowsSent 是否已赋值
                     * 
                     */
                    bool RowsSentHasBeenSet() const;

                private:

                    /**
                     * Slow log start time
                     */
                    std::string m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * SQL statement
                     */
                    std::string m_sqlText;
                    bool m_sqlTextHasBeenSet;

                    /**
                     * Database
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * User source
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * IP source
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userHost;
                    bool m_userHostHasBeenSet;

                    /**
                     * Execution time in seconds
                     */
                    int64_t m_queryTime;
                    bool m_queryTimeHasBeenSet;

                    /**
                     * Lock time in seconds
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_lockTime;
                    bool m_lockTimeHasBeenSet;

                    /**
                     * Number of scanned rows
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_rowsExamined;
                    bool m_rowsExaminedHasBeenSet;

                    /**
                     * Number of returned rows
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_rowsSent;
                    bool m_rowsSentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_SLOWLOGINFOITEM_H_
