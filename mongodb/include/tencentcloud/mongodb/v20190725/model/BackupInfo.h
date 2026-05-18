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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_BACKUPINFO_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_BACKUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * Backup information.
                */
                class BackupInfo : public AbstractModel
                {
                public:
                    BackupInfo();
                    ~BackupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取<p>Backup method.</p><ul><li>0: Automatic backup.</li><li>1: Manual backup.</li></ul>
                     * @return BackupType <p>Backup method.</p><ul><li>0: Automatic backup.</li><li>1: Manual backup.</li></ul>
                     * 
                     */
                    uint64_t GetBackupType() const;

                    /**
                     * 设置<p>Backup method.</p><ul><li>0: Automatic backup.</li><li>1: Manual backup.</li></ul>
                     * @param _backupType <p>Backup method.</p><ul><li>0: Automatic backup.</li><li>1: Manual backup.</li></ul>
                     * 
                     */
                    void SetBackupType(const uint64_t& _backupType);

                    /**
                     * 判断参数 BackupType 是否已赋值
                     * @return BackupType 是否已赋值
                     * 
                     */
                    bool BackupTypeHasBeenSet() const;

                    /**
                     * 获取<p>Backup file name.</p>
                     * @return BackupName <p>Backup file name.</p>
                     * 
                     */
                    std::string GetBackupName() const;

                    /**
                     * 设置<p>Backup file name.</p>
                     * @param _backupName <p>Backup file name.</p>
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
                     * 获取<p>Backup task notes.</p>
                     * @return BackupDesc <p>Backup task notes.</p>
                     * 
                     */
                    std::string GetBackupDesc() const;

                    /**
                     * 设置<p>Backup task notes.</p>
                     * @param _backupDesc <p>Backup task notes.</p>
                     * 
                     */
                    void SetBackupDesc(const std::string& _backupDesc);

                    /**
                     * 判断参数 BackupDesc 是否已赋值
                     * @return BackupDesc 是否已赋值
                     * 
                     */
                    bool BackupDescHasBeenSet() const;

                    /**
                     * 获取<p>Backup file size, in KB.</p>
                     * @return BackupSize <p>Backup file size, in KB.</p>
                     * 
                     */
                    uint64_t GetBackupSize() const;

                    /**
                     * 设置<p>Backup file size, in KB.</p>
                     * @param _backupSize <p>Backup file size, in KB.</p>
                     * 
                     */
                    void SetBackupSize(const uint64_t& _backupSize);

                    /**
                     * 判断参数 BackupSize 是否已赋值
                     * @return BackupSize 是否已赋值
                     * 
                     */
                    bool BackupSizeHasBeenSet() const;

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
                     * 获取<p>Backup status.</p><ul><li>1: Backup in progress.</li><li>2: Backup successful.</li></ul>
                     * @return Status <p>Backup status.</p><ul><li>1: Backup in progress.</li><li>2: Backup successful.</li></ul>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>Backup status.</p><ul><li>1: Backup in progress.</li><li>2: Backup successful.</li></ul>
                     * @param _status <p>Backup status.</p><ul><li>1: Backup in progress.</li><li>2: Backup successful.</li></ul>
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Backup method.</p><ul><li>0: Logical backup.</li><li>1: Physical backup.</li><li>3: Snapshot backup.<br><strong>Description:</strong></li><li>The General Edition instance supports logical and physical backup. The Cloud Disk Edition instance supports physical and snapshot backup, but does not support logical backup currently.</li><li>If storage encryption is activated for the instance, physical backup is not supported.</li></ul>
                     * @return BackupMethod <p>Backup method.</p><ul><li>0: Logical backup.</li><li>1: Physical backup.</li><li>3: Snapshot backup.<br><strong>Description:</strong></li><li>The General Edition instance supports logical and physical backup. The Cloud Disk Edition instance supports physical and snapshot backup, but does not support logical backup currently.</li><li>If storage encryption is activated for the instance, physical backup is not supported.</li></ul>
                     * 
                     */
                    uint64_t GetBackupMethod() const;

                    /**
                     * 设置<p>Backup method.</p><ul><li>0: Logical backup.</li><li>1: Physical backup.</li><li>3: Snapshot backup.<br><strong>Description:</strong></li><li>The General Edition instance supports logical and physical backup. The Cloud Disk Edition instance supports physical and snapshot backup, but does not support logical backup currently.</li><li>If storage encryption is activated for the instance, physical backup is not supported.</li></ul>
                     * @param _backupMethod <p>Backup method.</p><ul><li>0: Logical backup.</li><li>1: Physical backup.</li><li>3: Snapshot backup.<br><strong>Description:</strong></li><li>The General Edition instance supports logical and physical backup. The Cloud Disk Edition instance supports physical and snapshot backup, but does not support logical backup currently.</li><li>If storage encryption is activated for the instance, physical backup is not supported.</li></ul>
                     * 
                     */
                    void SetBackupMethod(const uint64_t& _backupMethod);

                    /**
                     * 判断参数 BackupMethod 是否已赋值
                     * @return BackupMethod 是否已赋值
                     * 
                     */
                    bool BackupMethodHasBeenSet() const;

                    /**
                     * 获取<p>Backup record ID.</p>
                     * @return BackId <p>Backup record ID.</p>
                     * 
                     */
                    int64_t GetBackId() const;

                    /**
                     * 设置<p>Backup record ID.</p>
                     * @param _backId <p>Backup record ID.</p>
                     * 
                     */
                    void SetBackId(const int64_t& _backId);

                    /**
                     * 判断参数 BackId 是否已赋值
                     * @return BackId 是否已赋值
                     * 
                     */
                    bool BackIdHasBeenSet() const;

                    /**
                     * 获取<p>Backup deletion time.</p>
                     * @return DeleteTime <p>Backup deletion time.</p>
                     * 
                     */
                    std::string GetDeleteTime() const;

                    /**
                     * 设置<p>Backup deletion time.</p>
                     * @param _deleteTime <p>Backup deletion time.</p>
                     * 
                     */
                    void SetDeleteTime(const std::string& _deleteTime);

                    /**
                     * 判断参数 DeleteTime 是否已赋值
                     * @return DeleteTime 是否已赋值
                     * 
                     */
                    bool DeleteTimeHasBeenSet() const;

                    /**
                     * 获取<p>Backup region in a different location.</p>
                     * @return BackupRegion <p>Backup region in a different location.</p>
                     * 
                     */
                    std::string GetBackupRegion() const;

                    /**
                     * 设置<p>Backup region in a different location.</p>
                     * @param _backupRegion <p>Backup region in a different location.</p>
                     * 
                     */
                    void SetBackupRegion(const std::string& _backupRegion);

                    /**
                     * 判断参数 BackupRegion 是否已赋值
                     * @return BackupRegion 是否已赋值
                     * 
                     */
                    bool BackupRegionHasBeenSet() const;

                    /**
                     * 获取<p>Rollback time supported by the backup.</p>
                     * @return RestoreTime <p>Rollback time supported by the backup.</p>
                     * 
                     */
                    std::string GetRestoreTime() const;

                    /**
                     * 设置<p>Rollback time supported by the backup.</p>
                     * @param _restoreTime <p>Rollback time supported by the backup.</p>
                     * 
                     */
                    void SetRestoreTime(const std::string& _restoreTime);

                    /**
                     * 判断参数 RestoreTime 是否已赋值
                     * @return RestoreTime 是否已赋值
                     * 
                     */
                    bool RestoreTimeHasBeenSet() const;

                private:

                    /**
                     * <p>Instance ID.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Backup method.</p><ul><li>0: Automatic backup.</li><li>1: Manual backup.</li></ul>
                     */
                    uint64_t m_backupType;
                    bool m_backupTypeHasBeenSet;

                    /**
                     * <p>Backup file name.</p>
                     */
                    std::string m_backupName;
                    bool m_backupNameHasBeenSet;

                    /**
                     * <p>Backup task notes.</p>
                     */
                    std::string m_backupDesc;
                    bool m_backupDescHasBeenSet;

                    /**
                     * <p>Backup file size, in KB.</p>
                     */
                    uint64_t m_backupSize;
                    bool m_backupSizeHasBeenSet;

                    /**
                     * <p>Backup start time.</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>Backup end time.</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>Backup status.</p><ul><li>1: Backup in progress.</li><li>2: Backup successful.</li></ul>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Backup method.</p><ul><li>0: Logical backup.</li><li>1: Physical backup.</li><li>3: Snapshot backup.<br><strong>Description:</strong></li><li>The General Edition instance supports logical and physical backup. The Cloud Disk Edition instance supports physical and snapshot backup, but does not support logical backup currently.</li><li>If storage encryption is activated for the instance, physical backup is not supported.</li></ul>
                     */
                    uint64_t m_backupMethod;
                    bool m_backupMethodHasBeenSet;

                    /**
                     * <p>Backup record ID.</p>
                     */
                    int64_t m_backId;
                    bool m_backIdHasBeenSet;

                    /**
                     * <p>Backup deletion time.</p>
                     */
                    std::string m_deleteTime;
                    bool m_deleteTimeHasBeenSet;

                    /**
                     * <p>Backup region in a different location.</p>
                     */
                    std::string m_backupRegion;
                    bool m_backupRegionHasBeenSet;

                    /**
                     * <p>Rollback time supported by the backup.</p>
                     */
                    std::string m_restoreTime;
                    bool m_restoreTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_BACKUPINFO_H_
