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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_REMOVEBACKUPSREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_REMOVEBACKUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * RemoveBackups request structure.
                */
                class RemoveBackupsRequest : public AbstractModel
                {
                public:
                    RemoveBackupsRequest();
                    ~RemoveBackupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID. For example, mssql-j8kv137v.
                     * @return InstanceId Instance ID. For example, mssql-j8kv137v.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID. For example, mssql-j8kv137v.
                     * @param _instanceId Instance ID. For example, mssql-j8kv137v.
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
                     * 获取Backup names to be deleted. Backup names can be obtained through the FileName field of the DescribeBackups API. The number of backups for batch deletion in a single request should not exceed 10. This field is required when the values of StartTime and EndTime are null.
                     * @return BackupNames Backup names to be deleted. Backup names can be obtained through the FileName field of the DescribeBackups API. The number of backups for batch deletion in a single request should not exceed 10. This field is required when the values of StartTime and EndTime are null.
                     * 
                     */
                    std::vector<std::string> GetBackupNames() const;

                    /**
                     * 设置Backup names to be deleted. Backup names can be obtained through the FileName field of the DescribeBackups API. The number of backups for batch deletion in a single request should not exceed 10. This field is required when the values of StartTime and EndTime are null.
                     * @param _backupNames Backup names to be deleted. Backup names can be obtained through the FileName field of the DescribeBackups API. The number of backups for batch deletion in a single request should not exceed 10. This field is required when the values of StartTime and EndTime are null.
                     * 
                     */
                    void SetBackupNames(const std::vector<std::string>& _backupNames);

                    /**
                     * 判断参数 BackupNames 是否已赋值
                     * @return BackupNames 是否已赋值
                     * 
                     */
                    bool BackupNamesHasBeenSet() const;

                    /**
                     * 获取Start time for batch deletion of manual backups. This field is required when the value of BackupNames is null.
                     * @return StartTime Start time for batch deletion of manual backups. This field is required when the value of BackupNames is null.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time for batch deletion of manual backups. This field is required when the value of BackupNames is null.
                     * @param _startTime Start time for batch deletion of manual backups. This field is required when the value of BackupNames is null.
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
                     * 获取Deadline for batch deletion of manual backups. This field is required when the value of BackupNames is null.
                     * @return EndTime Deadline for batch deletion of manual backups. This field is required when the value of BackupNames is null.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Deadline for batch deletion of manual backups. This field is required when the value of BackupNames is null.
                     * @param _endTime Deadline for batch deletion of manual backups. This field is required when the value of BackupNames is null.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * Instance ID. For example, mssql-j8kv137v.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Backup names to be deleted. Backup names can be obtained through the FileName field of the DescribeBackups API. The number of backups for batch deletion in a single request should not exceed 10. This field is required when the values of StartTime and EndTime are null.
                     */
                    std::vector<std::string> m_backupNames;
                    bool m_backupNamesHasBeenSet;

                    /**
                     * Start time for batch deletion of manual backups. This field is required when the value of BackupNames is null.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Deadline for batch deletion of manual backups. This field is required when the value of BackupNames is null.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_REMOVEBACKUPSREQUEST_H_
