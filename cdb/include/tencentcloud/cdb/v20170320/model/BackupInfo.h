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
                     * 获取<p>Backup file name</p>
                     * @return Name <p>Backup file name</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Backup file name</p>
                     * @param _name <p>Backup file name</p>
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
                     * 获取<p>Backup file size, unit: Byte</p>
                     * @return Size <p>Backup file size, unit: Byte</p>
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置<p>Backup file size, unit: Byte</p>
                     * @param _size <p>Backup file size, unit: Byte</p>
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
                     * 获取<p>Backup snapshot time. Time format: 2016-03-17 02:10:37</p>
                     * @return Date <p>Backup snapshot time. Time format: 2016-03-17 02:10:37</p>
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置<p>Backup snapshot time. Time format: 2016-03-17 02:10:37</p>
                     * @param _date <p>Backup snapshot time. Time format: 2016-03-17 02:10:37</p>
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
                     * 获取<p>Download link</p>
                     * @return IntranetUrl <p>Download link</p>
                     * 
                     */
                    std::string GetIntranetUrl() const;

                    /**
                     * 设置<p>Download link</p>
                     * @param _intranetUrl <p>Download link</p>
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
                     * 获取<p>Download link</p>
                     * @return InternetUrl <p>Download link</p>
                     * 
                     */
                    std::string GetInternetUrl() const;

                    /**
                     * 设置<p>Download link</p>
                     * @param _internetUrl <p>Download link</p>
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
                     * 获取<p>Specific type of logs. Possible values: "logical": logical cold backup, "physical": physical cold backup.</p>
                     * @return Type <p>Specific type of logs. Possible values: "logical": logical cold backup, "physical": physical cold backup.</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Specific type of logs. Possible values: "logical": logical cold backup, "physical": physical cold backup.</p>
                     * @param _type <p>Specific type of logs. Possible values: "logical": logical cold backup, "physical": physical cold backup.</p>
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
                     * 获取<p>ID of the backup subtask, used when deleting backup files</p>
                     * @return BackupId <p>ID of the backup subtask, used when deleting backup files</p>
                     * 
                     */
                    int64_t GetBackupId() const;

                    /**
                     * 设置<p>ID of the backup subtask, used when deleting backup files</p>
                     * @param _backupId <p>ID of the backup subtask, used when deleting backup files</p>
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
                     * 获取<p>Backup task status. Possible values: "SUCCESS": backup successful, "FAILED": backup FAILED, "RUNNING": backup in progress.</p>
                     * @return Status <p>Backup task status. Possible values: "SUCCESS": backup successful, "FAILED": backup FAILED, "RUNNING": backup in progress.</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Backup task status. Possible values: "SUCCESS": backup successful, "FAILED": backup FAILED, "RUNNING": backup in progress.</p>
                     * @param _status <p>Backup task status. Possible values: "SUCCESS": backup successful, "FAILED": backup FAILED, "RUNNING": backup in progress.</p>
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
                     * 获取<p>Backup task completion time</p>
                     * @return FinishTime <p>Backup task completion time</p>
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置<p>Backup task completion time</p>
                     * @param _finishTime <p>Backup task completion time</p>
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
                     * 获取<p>(This value will be deprecated and is not recommended for use) Creator of the backup. Valid values: SYSTEM - generated by the system, Uin - Uin value of the initiator.</p>
                     * @return Creator <p>(This value will be deprecated and is not recommended for use) Creator of the backup. Valid values: SYSTEM - generated by the system, Uin - Uin value of the initiator.</p>
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置<p>(This value will be deprecated and is not recommended for use) Creator of the backup. Valid values: SYSTEM - generated by the system, Uin - Uin value of the initiator.</p>
                     * @param _creator <p>(This value will be deprecated and is not recommended for use) Creator of the backup. Valid values: SYSTEM - generated by the system, Uin - Uin value of the initiator.</p>
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
                     * 获取<p>Start time of the backup task</p>
                     * @return StartTime <p>Start time of the backup task</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>Start time of the backup task</p>
                     * @param _startTime <p>Start time of the backup task</p>
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
                     * 获取<p>Backup method. Possible values are "full": full backup, "partial": partial backup.</p>
                     * @return Method <p>Backup method. Possible values are "full": full backup, "partial": partial backup.</p>
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置<p>Backup method. Possible values are "full": full backup, "partial": partial backup.</p>
                     * @param _method <p>Backup method. Possible values are "full": full backup, "partial": partial backup.</p>
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
                     * 获取<p>Backup method. Possible values are "manual": manual backup, "automatic": automatic backup.</p>
                     * @return Way <p>Backup method. Possible values are "manual": manual backup, "automatic": automatic backup.</p>
                     * 
                     */
                    std::string GetWay() const;

                    /**
                     * 设置<p>Backup method. Possible values are "manual": manual backup, "automatic": automatic backup.</p>
                     * @param _way <p>Backup method. Possible values are "manual": manual backup, "automatic": automatic backup.</p>
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
                     * 获取<p>Manual backup alias</p>
                     * @return ManualBackupName <p>Manual backup alias</p>
                     * 
                     */
                    std::string GetManualBackupName() const;

                    /**
                     * 设置<p>Manual backup alias</p>
                     * @param _manualBackupName <p>Manual backup alias</p>
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
                     * 获取<p>Backup retention type, save_mode_regular - Regular backup saving, save_mode_period - Periodic backup</p>
                     * @return SaveMode <p>Backup retention type, save_mode_regular - Regular backup saving, save_mode_period - Periodic backup</p>
                     * 
                     */
                    std::string GetSaveMode() const;

                    /**
                     * 设置<p>Backup retention type, save_mode_regular - Regular backup saving, save_mode_period - Periodic backup</p>
                     * @param _saveMode <p>Backup retention type, save_mode_regular - Regular backup saving, save_mode_period - Periodic backup</p>
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
                     * 获取<p>Local backup region</p>
                     * @return Region <p>Local backup region</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>Local backup region</p>
                     * @param _region <p>Local backup region</p>
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
                     * 获取<p>Detailed information of offsite backup</p>
                     * @return RemoteInfo <p>Detailed information of offsite backup</p>
                     * 
                     */
                    std::vector<RemoteBackupInfo> GetRemoteInfo() const;

                    /**
                     * 设置<p>Detailed information of offsite backup</p>
                     * @param _remoteInfo <p>Detailed information of offsite backup</p>
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
                     * 获取<p>Storage method: 0 - regular storage, 1 - archive storage, 2 - standard storage, defaults to 0.</p>
                     * @return CosStorageType <p>Storage method: 0 - regular storage, 1 - archive storage, 2 - standard storage, defaults to 0.</p>
                     * 
                     */
                    int64_t GetCosStorageType() const;

                    /**
                     * 设置<p>Storage method: 0 - regular storage, 1 - archive storage, 2 - standard storage, defaults to 0.</p>
                     * @param _cosStorageType <p>Storage method: 0 - regular storage, 1 - archive storage, 2 - standard storage, defaults to 0.</p>
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
                     * 获取<p>Instance ID, in the format such as cdb-c1nl9rpv. This matches the instance ID displayed on the TencentDB console.</p>
                     * @return InstanceId <p>Instance ID, in the format such as cdb-c1nl9rpv. This matches the instance ID displayed on the TencentDB console.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance ID, in the format such as cdb-c1nl9rpv. This matches the instance ID displayed on the TencentDB console.</p>
                     * @param _instanceId <p>Instance ID, in the format such as cdb-c1nl9rpv. This matches the instance ID displayed on the TencentDB console.</p>
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
                     * 获取<p>Backup completion progress</p>
                     * @return Progress <p>Backup completion progress</p>
                     * 
                     */
                    int64_t GetProgress() const;

                    /**
                     * 设置<p>Backup completion progress</p>
                     * @param _progress <p>Backup completion progress</p>
                     * 
                     */
                    void SetProgress(const int64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取<p>Whether the backup file is encrypted, on-encrypted, off-unencrypted</p>
                     * @return EncryptionFlag <p>Whether the backup file is encrypted, on-encrypted, off-unencrypted</p>
                     * 
                     */
                    std::string GetEncryptionFlag() const;

                    /**
                     * 设置<p>Whether the backup file is encrypted, on-encrypted, off-unencrypted</p>
                     * @param _encryptionFlag <p>Whether the backup file is encrypted, on-encrypted, off-unencrypted</p>
                     * 
                     */
                    void SetEncryptionFlag(const std::string& _encryptionFlag);

                    /**
                     * 判断参数 EncryptionFlag 是否已赋值
                     * @return EncryptionFlag 是否已赋值
                     * 
                     */
                    bool EncryptionFlagHasBeenSet() const;

                    /**
                     * 获取<p>Backup GTID position</p>
                     * @return ExecutedGTIDSet <p>Backup GTID position</p>
                     * 
                     */
                    std::string GetExecutedGTIDSet() const;

                    /**
                     * 设置<p>Backup GTID position</p>
                     * @param _executedGTIDSet <p>Backup GTID position</p>
                     * 
                     */
                    void SetExecutedGTIDSet(const std::string& _executedGTIDSet);

                    /**
                     * 判断参数 ExecutedGTIDSet 是否已赋值
                     * @return ExecutedGTIDSet 是否已赋值
                     * 
                     */
                    bool ExecutedGTIDSetHasBeenSet() const;

                    /**
                     * 获取<p>MD5 value of the backup file</p>
                     * @return MD5 <p>MD5 value of the backup file</p>
                     * 
                     */
                    std::string GetMD5() const;

                    /**
                     * 设置<p>MD5 value of the backup file</p>
                     * @param _mD5 <p>MD5 value of the backup file</p>
                     * 
                     */
                    void SetMD5(const std::string& _mD5);

                    /**
                     * 判断参数 MD5 是否已赋值
                     * @return MD5 是否已赋值
                     * 
                     */
                    bool MD5HasBeenSet() const;

                private:

                    /**
                     * <p>Backup file name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Backup file size, unit: Byte</p>
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * <p>Backup snapshot time. Time format: 2016-03-17 02:10:37</p>
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * <p>Download link</p>
                     */
                    std::string m_intranetUrl;
                    bool m_intranetUrlHasBeenSet;

                    /**
                     * <p>Download link</p>
                     */
                    std::string m_internetUrl;
                    bool m_internetUrlHasBeenSet;

                    /**
                     * <p>Specific type of logs. Possible values: "logical": logical cold backup, "physical": physical cold backup.</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>ID of the backup subtask, used when deleting backup files</p>
                     */
                    int64_t m_backupId;
                    bool m_backupIdHasBeenSet;

                    /**
                     * <p>Backup task status. Possible values: "SUCCESS": backup successful, "FAILED": backup FAILED, "RUNNING": backup in progress.</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Backup task completion time</p>
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * <p>(This value will be deprecated and is not recommended for use) Creator of the backup. Valid values: SYSTEM - generated by the system, Uin - Uin value of the initiator.</p>
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * <p>Start time of the backup task</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>Backup method. Possible values are "full": full backup, "partial": partial backup.</p>
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * <p>Backup method. Possible values are "manual": manual backup, "automatic": automatic backup.</p>
                     */
                    std::string m_way;
                    bool m_wayHasBeenSet;

                    /**
                     * <p>Manual backup alias</p>
                     */
                    std::string m_manualBackupName;
                    bool m_manualBackupNameHasBeenSet;

                    /**
                     * <p>Backup retention type, save_mode_regular - Regular backup saving, save_mode_period - Periodic backup</p>
                     */
                    std::string m_saveMode;
                    bool m_saveModeHasBeenSet;

                    /**
                     * <p>Local backup region</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>Detailed information of offsite backup</p>
                     */
                    std::vector<RemoteBackupInfo> m_remoteInfo;
                    bool m_remoteInfoHasBeenSet;

                    /**
                     * <p>Storage method: 0 - regular storage, 1 - archive storage, 2 - standard storage, defaults to 0.</p>
                     */
                    int64_t m_cosStorageType;
                    bool m_cosStorageTypeHasBeenSet;

                    /**
                     * <p>Instance ID, in the format such as cdb-c1nl9rpv. This matches the instance ID displayed on the TencentDB console.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Backup completion progress</p>
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * <p>Whether the backup file is encrypted, on-encrypted, off-unencrypted</p>
                     */
                    std::string m_encryptionFlag;
                    bool m_encryptionFlagHasBeenSet;

                    /**
                     * <p>Backup GTID position</p>
                     */
                    std::string m_executedGTIDSet;
                    bool m_executedGTIDSetHasBeenSet;

                    /**
                     * <p>MD5 value of the backup file</p>
                     */
                    std::string m_mD5;
                    bool m_mD5HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_BACKUPINFO_H_
