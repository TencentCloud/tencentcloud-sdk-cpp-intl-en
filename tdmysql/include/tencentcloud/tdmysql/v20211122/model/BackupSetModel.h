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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_BACKUPSETMODEL_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_BACKUPSETMODEL_H_

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
                * Backup set object
                */
                class BackupSetModel : public AbstractModel
                {
                public:
                    BackupSetModel();
                    ~BackupSetModel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Backup set duration, unit sec
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BackupDuration Backup set duration, unit sec
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetBackupDuration() const;

                    /**
                     * 设置Backup set duration, unit sec
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _backupDuration Backup set duration, unit sec
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
                     * 获取Backup method
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BackupMethod Backup method
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBackupMethod() const;

                    /**
                     * 设置Backup method
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _backupMethod Backup method
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBackupMethod(const std::string& _backupMethod);

                    /**
                     * 判断参数 BackupMethod 是否已赋值
                     * @return BackupMethod 是否已赋值
                     * 
                     */
                    bool BackupMethodHasBeenSet() const;

                    /**
                     * 获取Backup note name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BackupName Backup note name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBackupName() const;

                    /**
                     * 设置Backup note name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _backupName Backup note name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBackupName(const std::string& _backupName);

                    /**
                     * 判断参数 BackupName 是否已赋值
                     * @return BackupName 是否已赋值
                     * 
                     */
                    bool BackupNameHasBeenSet() const;

                    /**
                     * 获取Backup set progress percentage
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BackupProgress Backup set progress percentage
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetBackupProgress() const;

                    /**
                     * 设置Backup set progress percentage
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _backupProgress Backup set progress percentage
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBackupProgress(const double& _backupProgress);

                    /**
                     * 判断参数 BackupProgress 是否已赋值
                     * @return BackupProgress 是否已赋值
                     * 
                     */
                    bool BackupProgressHasBeenSet() const;

                    /**
                     * 获取Backup set ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BackupSetId Backup set ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetBackupSetId() const;

                    /**
                     * 设置Backup set ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _backupSetId Backup set ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBackupSetId(const int64_t& _backupSetId);

                    /**
                     * 判断参数 BackupSetId 是否已赋值
                     * @return BackupSetId 是否已赋值
                     * 
                     */
                    bool BackupSetIdHasBeenSet() const;

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
                     * 获取Backup set type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BackupType Backup set type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBackupType() const;

                    /**
                     * 设置Backup set type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _backupType Backup set type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBackupType(const std::string& _backupType);

                    /**
                     * 判断参数 BackupType 是否已赋值
                     * @return BackupType 是否已赋值
                     * 
                     */
                    bool BackupTypeHasBeenSet() const;

                    /**
                     * 获取Instance version number
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DBVersion Instance version number
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDBVersion() const;

                    /**
                     * 设置Instance version number
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dBVersion Instance version number
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDBVersion(const std::string& _dBVersion);

                    /**
                     * 判断参数 DBVersion 是否已赋值
                     * @return DBVersion 是否已赋值
                     * 
                     */
                    bool DBVersionHasBeenSet() const;

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
                     * 获取Transaction commit end time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EndTrxTime Transaction commit end time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEndTrxTime() const;

                    /**
                     * 设置Transaction commit end time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _endTrxTime Transaction commit end time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEndTrxTime(const std::string& _endTrxTime);

                    /**
                     * 判断参数 EndTrxTime 是否已赋值
                     * @return EndTrxTime 是否已赋值
                     * 
                     */
                    bool EndTrxTimeHasBeenSet() const;

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
                     * 获取Backup expiration time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExpiredTime Backup expiration time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExpiredTime() const;

                    /**
                     * 设置Backup expiration time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _expiredTime Backup expiration time
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
                     * 获取Backup trigger. 0: autobackup; 1: manual.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ManualBackup Backup trigger. 0: autobackup; 1: manual.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetManualBackup() const;

                    /**
                     * 设置Backup trigger. 0: autobackup; 1: manual.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _manualBackup Backup trigger. 0: autobackup; 1: manual.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetManualBackup(const int64_t& _manualBackup);

                    /**
                     * 判断参数 ManualBackup 是否已赋值
                     * @return ManualBackup 是否已赋值
                     * 
                     */
                    bool ManualBackupHasBeenSet() const;

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
                     * Backup set duration, unit sec
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_backupDuration;
                    bool m_backupDurationHasBeenSet;

                    /**
                     * Backup method
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_backupMethod;
                    bool m_backupMethodHasBeenSet;

                    /**
                     * Backup note name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_backupName;
                    bool m_backupNameHasBeenSet;

                    /**
                     * Backup set progress percentage
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_backupProgress;
                    bool m_backupProgressHasBeenSet;

                    /**
                     * Backup set ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_backupSetId;
                    bool m_backupSetIdHasBeenSet;

                    /**
                     * Backup status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_backupStatus;
                    bool m_backupStatusHasBeenSet;

                    /**
                     * Backup set type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_backupType;
                    bool m_backupTypeHasBeenSet;

                    /**
                     * Instance version number
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dBVersion;
                    bool m_dBVersionHasBeenSet;

                    /**
                     * Backup end time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Transaction commit end time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_endTrxTime;
                    bool m_endTrxTimeHasBeenSet;

                    /**
                     * Error message
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * Backup expiration time
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
                     * Backup trigger. 0: autobackup; 1: manual.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_manualBackup;
                    bool m_manualBackupHasBeenSet;

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

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_BACKUPSETMODEL_H_
