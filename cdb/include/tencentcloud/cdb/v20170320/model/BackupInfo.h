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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_BACKUPINFO_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_BACKUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/RemoteBackupInfo.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * Backup details
                */
                class BackupInfo : public AbstractModel
                {
                public:
                    BackupInfo();
                    ~BackupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Backup filename
                     * @return Name Backup filename
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Backup filename
                     * @param _name Backup filename
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Backup file size in bytes
                     * @return Size Backup file size in bytes
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置Backup file size in bytes
                     * @param _size Backup file size in bytes
                     * 
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取Backup snapshot time in the format of yyyy-MM-dd HH:mm:ss, such as 2016-03-17 02:10:37
                     * @return Date Backup snapshot time in the format of yyyy-MM-dd HH:mm:ss, such as 2016-03-17 02:10:37
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置Backup snapshot time in the format of yyyy-MM-dd HH:mm:ss, such as 2016-03-17 02:10:37
                     * @param _date Backup snapshot time in the format of yyyy-MM-dd HH:mm:ss, such as 2016-03-17 02:10:37
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取Download address
                     * @return IntranetUrl Download address
                     * 
                     */
                    std::string GetIntranetUrl() const;

                    /**
                     * 设置Download address
                     * @param _intranetUrl Download address
                     * 
                     */
                    void SetIntranetUrl(const std::string& _intranetUrl);

                    /**
                     * 判断参数 IntranetUrl 是否已赋值
                     * @return IntranetUrl 是否已赋值
                     * 
                     */
                    bool IntranetUrlHasBeenSet() const;

                    /**
                     * 获取Download address
                     * @return InternetUrl Download address
                     * 
                     */
                    std::string GetInternetUrl() const;

                    /**
                     * 设置Download address
                     * @param _internetUrl Download address
                     * 
                     */
                    void SetInternetUrl(const std::string& _internetUrl);

                    /**
                     * 判断参数 InternetUrl 是否已赋值
                     * @return InternetUrl 是否已赋值
                     * 
                     */
                    bool InternetUrlHasBeenSet() const;

                    /**
                     * 获取Log type. Valid values: `logical` (logical cold backup), `physical` (physical cold backup).
                     * @return Type Log type. Valid values: `logical` (logical cold backup), `physical` (physical cold backup).
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Log type. Valid values: `logical` (logical cold backup), `physical` (physical cold backup).
                     * @param _type Log type. Valid values: `logical` (logical cold backup), `physical` (physical cold backup).
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Backup subtask ID, which is used when backup files are deleted
                     * @return BackupId Backup subtask ID, which is used when backup files are deleted
                     * 
                     */
                    int64_t GetBackupId() const;

                    /**
                     * 设置Backup subtask ID, which is used when backup files are deleted
                     * @param _backupId Backup subtask ID, which is used when backup files are deleted
                     * 
                     */
                    void SetBackupId(const int64_t& _backupId);

                    /**
                     * 判断参数 BackupId 是否已赋值
                     * @return BackupId 是否已赋值
                     * 
                     */
                    bool BackupIdHasBeenSet() const;

                    /**
                     * 获取Backup task status. Valid values: `SUCCESS` (backup succeeded), `FAILED` (backup failed), `RUNNING` (backup is in progress).
                     * @return Status Backup task status. Valid values: `SUCCESS` (backup succeeded), `FAILED` (backup failed), `RUNNING` (backup is in progress).
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Backup task status. Valid values: `SUCCESS` (backup succeeded), `FAILED` (backup failed), `RUNNING` (backup is in progress).
                     * @param _status Backup task status. Valid values: `SUCCESS` (backup succeeded), `FAILED` (backup failed), `RUNNING` (backup is in progress).
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Backup task completion time
                     * @return FinishTime Backup task completion time
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置Backup task completion time
                     * @param _finishTime Backup task completion time
                     * 
                     */
                    void SetFinishTime(const std::string& _finishTime);

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     * 
                     */
                    bool FinishTimeHasBeenSet() const;

                    /**
                     * 获取(This field will be disused and is thus not recommended) backup creator. Valid values: `SYSTEM` (created by system), `Uin` (initiator's `Uin` value).
                     * @return Creator (This field will be disused and is thus not recommended) backup creator. Valid values: `SYSTEM` (created by system), `Uin` (initiator's `Uin` value).
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置(This field will be disused and is thus not recommended) backup creator. Valid values: `SYSTEM` (created by system), `Uin` (initiator's `Uin` value).
                     * @param _creator (This field will be disused and is thus not recommended) backup creator. Valid values: `SYSTEM` (created by system), `Uin` (initiator's `Uin` value).
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取Backup task start time
                     * @return StartTime Backup task start time
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Backup task start time
                     * @param _startTime Backup task start time
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
                     * 获取Backup method. Valid values: `full` (full backup), `partial` (partial backup).
                     * @return Method Backup method. Valid values: `full` (full backup), `partial` (partial backup).
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置Backup method. Valid values: `full` (full backup), `partial` (partial backup).
                     * @param _method Backup method. Valid values: `full` (full backup), `partial` (partial backup).
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取Backup mode. Valid values: `manual` (manual backup), `automatic` (automatic backup).
                     * @return Way Backup mode. Valid values: `manual` (manual backup), `automatic` (automatic backup).
                     * 
                     */
                    std::string GetWay() const;

                    /**
                     * 设置Backup mode. Valid values: `manual` (manual backup), `automatic` (automatic backup).
                     * @param _way Backup mode. Valid values: `manual` (manual backup), `automatic` (automatic backup).
                     * 
                     */
                    void SetWay(const std::string& _way);

                    /**
                     * 判断参数 Way 是否已赋值
                     * @return Way 是否已赋值
                     * 
                     */
                    bool WayHasBeenSet() const;

                    /**
                     * 获取Manual backup alias
                     * @return ManualBackupName Manual backup alias
                     * 
                     */
                    std::string GetManualBackupName() const;

                    /**
                     * 设置Manual backup alias
                     * @param _manualBackupName Manual backup alias
                     * 
                     */
                    void SetManualBackupName(const std::string& _manualBackupName);

                    /**
                     * 判断参数 ManualBackupName 是否已赋值
                     * @return ManualBackupName 是否已赋值
                     * 
                     */
                    bool ManualBackupNameHasBeenSet() const;

                    /**
                     * 获取Backup retention type. Valid values: `save_mode_regular` (non-archive backup), save_mode_period`(archive backup).
                     * @return SaveMode Backup retention type. Valid values: `save_mode_regular` (non-archive backup), save_mode_period`(archive backup).
                     * 
                     */
                    std::string GetSaveMode() const;

                    /**
                     * 设置Backup retention type. Valid values: `save_mode_regular` (non-archive backup), save_mode_period`(archive backup).
                     * @param _saveMode Backup retention type. Valid values: `save_mode_regular` (non-archive backup), save_mode_period`(archive backup).
                     * 
                     */
                    void SetSaveMode(const std::string& _saveMode);

                    /**
                     * 判断参数 SaveMode 是否已赋值
                     * @return SaveMode 是否已赋值
                     * 
                     */
                    bool SaveModeHasBeenSet() const;

                    /**
                     * 获取The region where local backup resides
                     * @return Region The region where local backup resides
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置The region where local backup resides
                     * @param _region The region where local backup resides
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
                     * 获取Detailed information of remote backups
                     * @return RemoteInfo Detailed information of remote backups
                     * 
                     */
                    std::vector<RemoteBackupInfo> GetRemoteInfo() const;

                    /**
                     * 设置Detailed information of remote backups
                     * @param _remoteInfo Detailed information of remote backups
                     * 
                     */
                    void SetRemoteInfo(const std::vector<RemoteBackupInfo>& _remoteInfo);

                    /**
                     * 判断参数 RemoteInfo 是否已赋值
                     * @return RemoteInfo 是否已赋值
                     * 
                     */
                    bool RemoteInfoHasBeenSet() const;

                    /**
                     * 获取Storage method. Valid values: `0` (regular storage), `1`(archive storage). Default value: `0`.
                     * @return CosStorageType Storage method. Valid values: `0` (regular storage), `1`(archive storage). Default value: `0`.
                     * 
                     */
                    int64_t GetCosStorageType() const;

                    /**
                     * 设置Storage method. Valid values: `0` (regular storage), `1`(archive storage). Default value: `0`.
                     * @param _cosStorageType Storage method. Valid values: `0` (regular storage), `1`(archive storage). Default value: `0`.
                     * 
                     */
                    void SetCosStorageType(const int64_t& _cosStorageType);

                    /**
                     * 判断参数 CosStorageType 是否已赋值
                     * @return CosStorageType 是否已赋值
                     * 
                     */
                    bool CosStorageTypeHasBeenSet() const;

                    /**
                     * 获取Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed in the TencentDB console.
                     * @return InstanceId Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed in the TencentDB console.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed in the TencentDB console.
                     * @param _instanceId Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed in the TencentDB console.
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
                     * 获取Whether the backup file is encrypted. Valid values: `on` (encrypted), `off` (unencrypted).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EncryptionFlag Whether the backup file is encrypted. Valid values: `on` (encrypted), `off` (unencrypted).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEncryptionFlag() const;

                    /**
                     * 设置Whether the backup file is encrypted. Valid values: `on` (encrypted), `off` (unencrypted).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _encryptionFlag Whether the backup file is encrypted. Valid values: `on` (encrypted), `off` (unencrypted).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEncryptionFlag(const std::string& _encryptionFlag);

                    /**
                     * 判断参数 EncryptionFlag 是否已赋值
                     * @return EncryptionFlag 是否已赋值
                     * 
                     */
                    bool EncryptionFlagHasBeenSet() const;

                private:

                    /**
                     * Backup filename
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Backup file size in bytes
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * Backup snapshot time in the format of yyyy-MM-dd HH:mm:ss, such as 2016-03-17 02:10:37
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * Download address
                     */
                    std::string m_intranetUrl;
                    bool m_intranetUrlHasBeenSet;

                    /**
                     * Download address
                     */
                    std::string m_internetUrl;
                    bool m_internetUrlHasBeenSet;

                    /**
                     * Log type. Valid values: `logical` (logical cold backup), `physical` (physical cold backup).
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Backup subtask ID, which is used when backup files are deleted
                     */
                    int64_t m_backupId;
                    bool m_backupIdHasBeenSet;

                    /**
                     * Backup task status. Valid values: `SUCCESS` (backup succeeded), `FAILED` (backup failed), `RUNNING` (backup is in progress).
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Backup task completion time
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * (This field will be disused and is thus not recommended) backup creator. Valid values: `SYSTEM` (created by system), `Uin` (initiator's `Uin` value).
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * Backup task start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Backup method. Valid values: `full` (full backup), `partial` (partial backup).
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * Backup mode. Valid values: `manual` (manual backup), `automatic` (automatic backup).
                     */
                    std::string m_way;
                    bool m_wayHasBeenSet;

                    /**
                     * Manual backup alias
                     */
                    std::string m_manualBackupName;
                    bool m_manualBackupNameHasBeenSet;

                    /**
                     * Backup retention type. Valid values: `save_mode_regular` (non-archive backup), save_mode_period`(archive backup).
                     */
                    std::string m_saveMode;
                    bool m_saveModeHasBeenSet;

                    /**
                     * The region where local backup resides
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Detailed information of remote backups
                     */
                    std::vector<RemoteBackupInfo> m_remoteInfo;
                    bool m_remoteInfoHasBeenSet;

                    /**
                     * Storage method. Valid values: `0` (regular storage), `1`(archive storage). Default value: `0`.
                     */
                    int64_t m_cosStorageType;
                    bool m_cosStorageTypeHasBeenSet;

                    /**
                     * Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed in the TencentDB console.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Whether the backup file is encrypted. Valid values: `on` (encrypted), `off` (unencrypted).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_encryptionFlag;
                    bool m_encryptionFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_BACKUPINFO_H_
