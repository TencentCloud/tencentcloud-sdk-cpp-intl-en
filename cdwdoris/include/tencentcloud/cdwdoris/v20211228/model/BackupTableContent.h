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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_BACKUPTABLECONTENT_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_BACKUPTABLECONTENT_H_

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
                * Backup table information
                */
                class BackupTableContent : public AbstractModel
                {
                public:
                    BackupTableContent();
                    ~BackupTableContent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Database
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Database Database
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDatabase() const;

                    /**
                     * 设置Database
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _database Database
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
                     * 获取Table
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Table Table
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTable() const;

                    /**
                     * 设置Table
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _table Table
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTable(const std::string& _table);

                    /**
                     * 判断参数 Table 是否已赋值
                     * @return Table 是否已赋值
                     * 
                     */
                    bool TableHasBeenSet() const;

                    /**
                     * 获取Total number of bytes in the table
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TotalBytes Total number of bytes in the table
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTotalBytes() const;

                    /**
                     * 设置Total number of bytes in the table
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _totalBytes Total number of bytes in the table
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTotalBytes(const int64_t& _totalBytes);

                    /**
                     * 判断参数 TotalBytes 是否已赋值
                     * @return TotalBytes 是否已赋值
                     * 
                     */
                    bool TotalBytesHasBeenSet() const;

                    /**
                     * 获取Size of a single replica
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SingleReplicaBytes Size of a single replica
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSingleReplicaBytes() const;

                    /**
                     * 设置Size of a single replica
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _singleReplicaBytes Size of a single replica
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSingleReplicaBytes(const std::string& _singleReplicaBytes);

                    /**
                     * 判断参数 SingleReplicaBytes 是否已赋值
                     * @return SingleReplicaBytes 是否已赋值
                     * 
                     */
                    bool SingleReplicaBytesHasBeenSet() const;

                    /**
                     * 获取Backup status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BackupStatus Backup status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetBackupStatus() const;

                    /**
                     * 设置Backup status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _backupStatus Backup status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBackupStatus(const int64_t& _backupStatus);

                    /**
                     * 判断参数 BackupStatus 是否已赋值
                     * @return BackupStatus 是否已赋值
                     * 
                     */
                    bool BackupStatusHasBeenSet() const;

                    /**
                     * 获取Error message of the backup
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BackupErrorMsg Error message of the backup
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBackupErrorMsg() const;

                    /**
                     * 设置Error message of the backup
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _backupErrorMsg Error message of the backup
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBackupErrorMsg(const std::string& _backupErrorMsg);

                    /**
                     * 判断参数 BackupErrorMsg 是否已赋值
                     * @return BackupErrorMsg 是否已赋值
                     * 
                     */
                    bool BackupErrorMsgHasBeenSet() const;

                    /**
                     * 获取Whether to bind the cold storage policy to the database and table
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsOpenCoolDown Whether to bind the cold storage policy to the database and table
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsOpenCoolDown() const;

                    /**
                     * 设置Whether to bind the cold storage policy to the database and table
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isOpenCoolDown Whether to bind the cold storage policy to the database and table
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsOpenCoolDown(const bool& _isOpenCoolDown);

                    /**
                     * 判断参数 IsOpenCoolDown 是否已赋值
                     * @return IsOpenCoolDown 是否已赋值
                     * 
                     */
                    bool IsOpenCoolDownHasBeenSet() const;

                private:

                    /**
                     * Database
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * Table
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_table;
                    bool m_tableHasBeenSet;

                    /**
                     * Total number of bytes in the table
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_totalBytes;
                    bool m_totalBytesHasBeenSet;

                    /**
                     * Size of a single replica
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_singleReplicaBytes;
                    bool m_singleReplicaBytesHasBeenSet;

                    /**
                     * Backup status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_backupStatus;
                    bool m_backupStatusHasBeenSet;

                    /**
                     * Error message of the backup
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_backupErrorMsg;
                    bool m_backupErrorMsgHasBeenSet;

                    /**
                     * Whether to bind the cold storage policy to the database and table
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isOpenCoolDown;
                    bool m_isOpenCoolDownHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_BACKUPTABLECONTENT_H_
