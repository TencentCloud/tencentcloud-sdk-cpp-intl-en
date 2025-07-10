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
                * Backup information
                */
                class BackupInfo : public AbstractModel
                {
                public:
                    BackupInfo();
                    ~BackupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceId Instance ID.
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
                     * 获取Backup mode. 0: automatic backup; 1: manual backup
                     * @return BackupType Backup mode. 0: automatic backup; 1: manual backup
                     * 
                     */
                    uint64_t GetBackupType() const;

                    /**
                     * 设置Backup mode. 0: automatic backup; 1: manual backup
                     * @param _backupType Backup mode. 0: automatic backup; 1: manual backup
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
                     * 获取Backup name
                     * @return BackupName Backup name
                     * 
                     */
                    std::string GetBackupName() const;

                    /**
                     * 设置Backup name
                     * @param _backupName Backup name
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
                     * 获取Backup remarks.
                     * @return BackupDesc Backup remarks.
                     * 
                     */
                    std::string GetBackupDesc() const;

                    /**
                     * 设置Backup remarks.
                     * @param _backupDesc Backup remarks.
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
                     * 获取Backup file size. Unit: KB.
                     * @return BackupSize Backup file size. Unit: KB.
                     * 
                     */
                    uint64_t GetBackupSize() const;

                    /**
                     * 设置Backup file size. Unit: KB.
                     * @param _backupSize Backup file size. Unit: KB.
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
                     * 获取Backup start time.
                     * @return StartTime Backup start time.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Backup start time.
                     * @param _startTime Backup start time.
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
                     * 获取Backup end time.
                     * @return EndTime Backup end time.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Backup end time.
                     * @param _endTime Backup end time.
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
                     * 获取Backup status. 1: backing up; 2: backed up successful
                     * @return Status Backup status. 1: backing up; 2: backed up successful
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Backup status. 1: backing up; 2: backed up successful
                     * @param _status Backup status. 1: backing up; 2: backed up successful
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
                     * 获取Backup method. 0: logical backup; 1: physical backup
                     * @return BackupMethod Backup method. 0: logical backup; 1: physical backup
                     * 
                     */
                    uint64_t GetBackupMethod() const;

                    /**
                     * 设置Backup method. 0: logical backup; 1: physical backup
                     * @param _backupMethod Backup method. 0: logical backup; 1: physical backup
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
                     * 获取Backup record ID.
                     * @return BackId Backup record ID.
                     * 
                     */
                    int64_t GetBackId() const;

                    /**
                     * 设置Backup record ID.
                     * @param _backId Backup record ID.
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
                     * 获取Backup deletion time.
                     * @return DeleteTime Backup deletion time.
                     * 
                     */
                    std::string GetDeleteTime() const;

                    /**
                     * 设置Backup deletion time.
                     * @param _deleteTime Backup deletion time.
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
                     * 获取Region for cross-region backup.
                     * @return BackupRegion Region for cross-region backup.
                     * 
                     */
                    std::string GetBackupRegion() const;

                    /**
                     * 设置Region for cross-region backup.
                     * @param _backupRegion Region for cross-region backup.
                     * 
                     */
                    void SetBackupRegion(const std::string& _backupRegion);

                    /**
                     * 判断参数 BackupRegion 是否已赋值
                     * @return BackupRegion 是否已赋值
                     * 
                     */
                    bool BackupRegionHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Backup mode. 0: automatic backup; 1: manual backup
                     */
                    uint64_t m_backupType;
                    bool m_backupTypeHasBeenSet;

                    /**
                     * Backup name
                     */
                    std::string m_backupName;
                    bool m_backupNameHasBeenSet;

                    /**
                     * Backup remarks.
                     */
                    std::string m_backupDesc;
                    bool m_backupDescHasBeenSet;

                    /**
                     * Backup file size. Unit: KB.
                     */
                    uint64_t m_backupSize;
                    bool m_backupSizeHasBeenSet;

                    /**
                     * Backup start time.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Backup end time.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Backup status. 1: backing up; 2: backed up successful
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Backup method. 0: logical backup; 1: physical backup
                     */
                    uint64_t m_backupMethod;
                    bool m_backupMethodHasBeenSet;

                    /**
                     * Backup record ID.
                     */
                    int64_t m_backId;
                    bool m_backIdHasBeenSet;

                    /**
                     * Backup deletion time.
                     */
                    std::string m_deleteTime;
                    bool m_deleteTimeHasBeenSet;

                    /**
                     * Region for cross-region backup.
                     */
                    std::string m_backupRegion;
                    bool m_backupRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_BACKUPINFO_H_
