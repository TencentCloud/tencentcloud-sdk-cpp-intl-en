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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_ARCHIVELOGMODEL_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_ARCHIVELOGMODEL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * Archive log object
                */
                class ArchiveLogModel : public AbstractModel
                {
                public:
                    ArchiveLogModel();
                    ~ArchiveLogModel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Archivelog ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ArchiveLogId Archivelog ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetArchiveLogId() const;

                    /**
                     * 设置Archivelog ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _archiveLogId Archivelog ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetArchiveLogId(const int64_t& _archiveLogId);

                    /**
                     * 判断参数 ArchiveLogId 是否已赋值
                     * @return ArchiveLogId 是否已赋值
                     * 
                     */
                    bool ArchiveLogIdHasBeenSet() const;

                    /**
                     * 获取Backup duration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BackupDuration Backup duration
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetBackupDuration() const;

                    /**
                     * 设置Backup duration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _backupDuration Backup duration
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBackupDuration(const int64_t& _backupDuration);

                    /**
                     * 判断参数 BackupDuration 是否已赋值
                     * @return BackupDuration 是否已赋值
                     * 
                     */
                    bool BackupDurationHasBeenSet() const;

                    /**
                     * 获取Backup status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BackupStatus Backup status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBackupStatus() const;

                    /**
                     * 设置Backup status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _backupStatus Backup status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBackupStatus(const std::string& _backupStatus);

                    /**
                     * 判断参数 BackupStatus 是否已赋值
                     * @return BackupStatus 是否已赋值
                     * 
                     */
                    bool BackupStatusHasBeenSet() const;

                    /**
                     * 获取Backup end time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EndTime Backup end time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Backup end time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _endTime Backup end time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Error message
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ErrorMessage Error message
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置Error message
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _errorMessage Error message
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetErrorMessage(const std::string& _errorMessage);

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                    /**
                     * 获取Expiration time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExpiredTime Expiration time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExpiredTime() const;

                    /**
                     * 设置Expiration time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _expiredTime Expiration time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExpiredTime(const std::string& _expiredTime);

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     * 
                     */
                    bool ExpiredTimeHasBeenSet() const;

                    /**
                     * 获取Backup file name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FileName Backup file name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置Backup file name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fileName Backup file name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取Backup set file size in Byte
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FileSize Backup set file size in Byte
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetFileSize() const;

                    /**
                     * 设置Backup set file size in Byte
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fileSize Backup set file size in Byte
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFileSize(const int64_t& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

                    /**
                     * 获取Instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceId Instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceId Instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Backup start time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StartTime Backup start time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Backup start time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _startTime Backup start time.
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

                private:

                    /**
                     * Archivelog ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_archiveLogId;
                    bool m_archiveLogIdHasBeenSet;

                    /**
                     * Backup duration
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_backupDuration;
                    bool m_backupDurationHasBeenSet;

                    /**
                     * Backup status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_backupStatus;
                    bool m_backupStatusHasBeenSet;

                    /**
                     * Backup end time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Error message
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * Expiration time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                    /**
                     * Backup file name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * Backup set file size in Byte
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * Instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Backup start time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_ARCHIVELOGMODEL_H_
