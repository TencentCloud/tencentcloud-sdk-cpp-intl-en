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
                     * 获取<p>Backup start time.</p>
                     * @return StartTime <p>Backup start time.</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>Backup start time.</p>
                     * @param _startTime <p>Backup start time.</p>
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
                     * 获取<p>Backup task ID.</p>
                     * @return BackupId <p>Backup task ID.</p>
                     * 
                     */
                    std::string GetBackupId() const;

                    /**
                     * 设置<p>Backup task ID.</p>
                     * @param _backupId <p>Backup task ID.</p>
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
                     * 获取<p>Backup type.</p><ul><li>1: Automatic backup initiated by the system in the wee hours.</li><li>0: Manual backup initiated by the user.</li></ul>
                     * @return BackupType <p>Backup type.</p><ul><li>1: Automatic backup initiated by the system in the wee hours.</li><li>0: Manual backup initiated by the user.</li></ul>
                     * 
                     */
                    std::string GetBackupType() const;

                    /**
                     * 设置<p>Backup type.</p><ul><li>1: Automatic backup initiated by the system in the wee hours.</li><li>0: Manual backup initiated by the user.</li></ul>
                     * @param _backupType <p>Backup type.</p><ul><li>1: Automatic backup initiated by the system in the wee hours.</li><li>0: Manual backup initiated by the user.</li></ul>
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
                     * 获取<p>Backup status.</p><ul><li>1: Backup is locked by other processes.</li><li>2: Backup is normal, not locked by any processes.</li><li>-1: Backup has expired.</li><li>3: Backup is being exported.</li><li>4: Backup export successful.</li></ul>
                     * @return Status <p>Backup status.</p><ul><li>1: Backup is locked by other processes.</li><li>2: Backup is normal, not locked by any processes.</li><li>-1: Backup has expired.</li><li>3: Backup is being exported.</li><li>4: Backup export successful.</li></ul>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>Backup status.</p><ul><li>1: Backup is locked by other processes.</li><li>2: Backup is normal, not locked by any processes.</li><li>-1: Backup has expired.</li><li>3: Backup is being exported.</li><li>4: Backup export successful.</li></ul>
                     * @param _status <p>Backup status.</p><ul><li>1: Backup is locked by other processes.</li><li>2: Backup is normal, not locked by any processes.</li><li>-1: Backup has expired.</li><li>3: Backup is being exported.</li><li>4: Backup export successful.</li></ul>
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
                     * 获取<p>Backup remarks.</p>
                     * @return Remark <p>Backup remarks.</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>Backup remarks.</p>
                     * @param _remark <p>Backup remarks.</p>
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
                     * 获取<p>Backup lock status.</p><ul><li>0: Unlocked.</li><li>1: Has been locked.</li></ul>
                     * @return Locked <p>Backup lock status.</p><ul><li>0: Unlocked.</li><li>1: Has been locked.</li></ul>
                     * 
                     */
                    int64_t GetLocked() const;

                    /**
                     * 设置<p>Backup lock status.</p><ul><li>0: Unlocked.</li><li>1: Has been locked.</li></ul>
                     * @param _locked <p>Backup lock status.</p><ul><li>0: Unlocked.</li><li>1: Has been locked.</li></ul>
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
                     * 获取<p>Internal field, which can be ignored.</p>
                     * @return BackupSize <p>Internal field, which can be ignored.</p>
                     * 
                     */
                    int64_t GetBackupSize() const;

                    /**
                     * 设置<p>Internal field, which can be ignored.</p>
                     * @param _backupSize <p>Internal field, which can be ignored.</p>
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
                     * 获取<p>Internal field, which can be ignored.</p>
                     * @return FullBackup <p>Internal field, which can be ignored.</p>
                     * 
                     */
                    int64_t GetFullBackup() const;

                    /**
                     * 设置<p>Internal field, which can be ignored.</p>
                     * @param _fullBackup <p>Internal field, which can be ignored.</p>
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
                     * 获取<p>Internal field, which can be ignored.</p>
                     * @return InstanceType <p>Internal field, which can be ignored.</p>
                     * 
                     */
                    int64_t GetInstanceType() const;

                    /**
                     * 设置<p>Internal field, which can be ignored.</p>
                     * @param _instanceType <p>Internal field, which can be ignored.</p>
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
                     * 获取<p>Instance ID.</p>
                     * @return InstanceId <p>Instance ID.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance ID.</p>
                     * @param _instanceId <p>Instance ID.</p>
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
                     * 获取<p>Instance name.</p>
                     * @return InstanceName <p>Instance name.</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>Instance name.</p>
                     * @param _instanceName <p>Instance name.</p>
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
                     * 获取<p>Local backup region.</p>
                     * @return Region <p>Local backup region.</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>Local backup region.</p>
                     * @param _region <p>Local backup region.</p>
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
                     * 获取<p>Backup end time.</p>
                     * @return EndTime <p>Backup end time.</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>Backup end time.</p>
                     * @param _endTime <p>Backup end time.</p>
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
                     * 获取<p>Backup file type.</p>
                     * @return FileType <p>Backup file type.</p>
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置<p>Backup file type.</p>
                     * @param _fileType <p>Backup file type.</p>
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
                     * 获取<p>Backup file expiration time.</p>
                     * @return ExpireTime <p>Backup file expiration time.</p>
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置<p>Backup file expiration time.</p>
                     * @param _expireTime <p>Backup file expiration time.</p>
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取<p>Whether the backup file is encrypted</p>
                     * @return Encrypted <p>Whether the backup file is encrypted</p>
                     * 
                     */
                    bool GetEncrypted() const;

                    /**
                     * 设置<p>Whether the backup file is encrypted</p>
                     * @param _encrypted <p>Whether the backup file is encrypted</p>
                     * 
                     */
                    void SetEncrypted(const bool& _encrypted);

                    /**
                     * 判断参数 Encrypted 是否已赋值
                     * @return Encrypted 是否已赋值
                     * 
                     */
                    bool EncryptedHasBeenSet() const;

                private:

                    /**
                     * <p>Backup start time.</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>Backup task ID.</p>
                     */
                    std::string m_backupId;
                    bool m_backupIdHasBeenSet;

                    /**
                     * <p>Backup type.</p><ul><li>1: Automatic backup initiated by the system in the wee hours.</li><li>0: Manual backup initiated by the user.</li></ul>
                     */
                    std::string m_backupType;
                    bool m_backupTypeHasBeenSet;

                    /**
                     * <p>Backup status.</p><ul><li>1: Backup is locked by other processes.</li><li>2: Backup is normal, not locked by any processes.</li><li>-1: Backup has expired.</li><li>3: Backup is being exported.</li><li>4: Backup export successful.</li></ul>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Backup remarks.</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>Backup lock status.</p><ul><li>0: Unlocked.</li><li>1: Has been locked.</li></ul>
                     */
                    int64_t m_locked;
                    bool m_lockedHasBeenSet;

                    /**
                     * <p>Internal field, which can be ignored.</p>
                     */
                    int64_t m_backupSize;
                    bool m_backupSizeHasBeenSet;

                    /**
                     * <p>Internal field, which can be ignored.</p>
                     */
                    int64_t m_fullBackup;
                    bool m_fullBackupHasBeenSet;

                    /**
                     * <p>Internal field, which can be ignored.</p>
                     */
                    int64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>Instance ID.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Instance name.</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>Local backup region.</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>Backup end time.</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>Backup file type.</p>
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * <p>Backup file expiration time.</p>
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>Whether the backup file is encrypted</p>
                     */
                    bool m_encrypted;
                    bool m_encryptedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_REDISBACKUPSET_H_
