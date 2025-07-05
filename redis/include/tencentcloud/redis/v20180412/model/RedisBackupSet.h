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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_REDISBACKUPSET_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_REDISBACKUPSET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * Array of instance backups
                */
                class RedisBackupSet : public AbstractModel
                {
                public:
                    RedisBackupSet();
                    ~RedisBackupSet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Backup start time
                     * @return StartTime Backup start time
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Backup start time
                     * @param _startTime Backup start time
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
                     * 获取Backup task ID
                     * @return BackupId Backup task ID
                     * 
                     */
                    std::string GetBackupId() const;

                    /**
                     * 设置Backup task ID
                     * @param _backupId Backup task ID
                     * 
                     */
                    void SetBackupId(const std::string& _backupId);

                    /**
                     * 判断参数 BackupId 是否已赋值
                     * @return BackupId 是否已赋值
                     * 
                     */
                    bool BackupIdHasBeenSet() const;

                    /**
                     * 获取Backup type. Valid values:  `1` (Automatic backup in the early morning initiated by the system.) `0`: Manual backup initiated by the user.
                     * @return BackupType Backup type. Valid values:  `1` (Automatic backup in the early morning initiated by the system.) `0`: Manual backup initiated by the user.
                     * 
                     */
                    std::string GetBackupType() const;

                    /**
                     * 设置Backup type. Valid values:  `1` (Automatic backup in the early morning initiated by the system.) `0`: Manual backup initiated by the user.
                     * @param _backupType Backup type. Valid values:  `1` (Automatic backup in the early morning initiated by the system.) `0`: Manual backup initiated by the user.
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
                     * 获取Backup status. Valid values:  - `1`: The backup is locked by another process. - `2`: The backup is normal and not locked by any process. - `-1`: The backup is expired. - `3`: The backup is being exported. - `4`: Exported the backup successfully.
                     * @return Status Backup status. Valid values:  - `1`: The backup is locked by another process. - `2`: The backup is normal and not locked by any process. - `-1`: The backup is expired. - `3`: The backup is being exported. - `4`: Exported the backup successfully.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Backup status. Valid values:  - `1`: The backup is locked by another process. - `2`: The backup is normal and not locked by any process. - `-1`: The backup is expired. - `3`: The backup is being exported. - `4`: Exported the backup successfully.
                     * @param _status Backup status. Valid values:  - `1`: The backup is locked by another process. - `2`: The backup is normal and not locked by any process. - `-1`: The backup is expired. - `3`: The backup is being exported. - `4`: Exported the backup successfully.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Backup remarks
                     * @return Remark Backup remarks
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Backup remarks
                     * @param _remark Backup remarks
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Whether the backup is locked. Valid values:  - `0` (no) - `1` (yes)
                     * @return Locked Whether the backup is locked. Valid values:  - `0` (no) - `1` (yes)
                     * 
                     */
                    int64_t GetLocked() const;

                    /**
                     * 设置Whether the backup is locked. Valid values:  - `0` (no) - `1` (yes)
                     * @param _locked Whether the backup is locked. Valid values:  - `0` (no) - `1` (yes)
                     * 
                     */
                    void SetLocked(const int64_t& _locked);

                    /**
                     * 判断参数 Locked 是否已赋值
                     * @return Locked 是否已赋值
                     * 
                     */
                    bool LockedHasBeenSet() const;

                    /**
                     * 获取Internal field, which can be ignored.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BackupSize Internal field, which can be ignored.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetBackupSize() const;

                    /**
                     * 设置Internal field, which can be ignored.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _backupSize Internal field, which can be ignored.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBackupSize(const int64_t& _backupSize);

                    /**
                     * 判断参数 BackupSize 是否已赋值
                     * @return BackupSize 是否已赋值
                     * 
                     */
                    bool BackupSizeHasBeenSet() const;

                    /**
                     * 获取Internal field, which can be ignored.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FullBackup Internal field, which can be ignored.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetFullBackup() const;

                    /**
                     * 设置Internal field, which can be ignored.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fullBackup Internal field, which can be ignored.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFullBackup(const int64_t& _fullBackup);

                    /**
                     * 判断参数 FullBackup 是否已赋值
                     * @return FullBackup 是否已赋值
                     * 
                     */
                    bool FullBackupHasBeenSet() const;

                    /**
                     * 获取Internal field, which can be ignored.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceType Internal field, which can be ignored.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetInstanceType() const;

                    /**
                     * 设置Internal field, which can be ignored.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceType Internal field, which can be ignored.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInstanceType(const int64_t& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
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
                     * 获取Instance name
                     * @return InstanceName Instance name
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name
                     * @param _instanceName Instance name
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取The region where the local backup resides.
                     * @return Region The region where the local backup resides.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置The region where the local backup resides.
                     * @param _region The region where the local backup resides.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Backup end time
                     * @return EndTime Backup end time
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Backup end time
                     * @param _endTime Backup end time
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
                     * 获取Backup file type
                     * @return FileType Backup file type
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置Backup file type
                     * @param _fileType Backup file type
                     * 
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取Backup file expiration time
                     * @return ExpireTime Backup file expiration time
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置Backup file expiration time
                     * @param _expireTime Backup file expiration time
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                private:

                    /**
                     * Backup start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Backup task ID
                     */
                    std::string m_backupId;
                    bool m_backupIdHasBeenSet;

                    /**
                     * Backup type. Valid values:  `1` (Automatic backup in the early morning initiated by the system.) `0`: Manual backup initiated by the user.
                     */
                    std::string m_backupType;
                    bool m_backupTypeHasBeenSet;

                    /**
                     * Backup status. Valid values:  - `1`: The backup is locked by another process. - `2`: The backup is normal and not locked by any process. - `-1`: The backup is expired. - `3`: The backup is being exported. - `4`: Exported the backup successfully.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Backup remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Whether the backup is locked. Valid values:  - `0` (no) - `1` (yes)
                     */
                    int64_t m_locked;
                    bool m_lockedHasBeenSet;

                    /**
                     * Internal field, which can be ignored.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_backupSize;
                    bool m_backupSizeHasBeenSet;

                    /**
                     * Internal field, which can be ignored.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_fullBackup;
                    bool m_fullBackupHasBeenSet;

                    /**
                     * Internal field, which can be ignored.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * The region where the local backup resides.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Backup end time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Backup file type
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * Backup file expiration time
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_REDISBACKUPSET_H_
