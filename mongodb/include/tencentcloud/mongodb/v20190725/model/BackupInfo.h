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
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param InstanceId Instance ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Backup mode. 0: automatic backup; 1: manual backup
                     * @return BackupType Backup mode. 0: automatic backup; 1: manual backup
                     */
                    uint64_t GetBackupType() const;

                    /**
                     * 设置Backup mode. 0: automatic backup; 1: manual backup
                     * @param BackupType Backup mode. 0: automatic backup; 1: manual backup
                     */
                    void SetBackupType(const uint64_t& _backupType);

                    /**
                     * 判断参数 BackupType 是否已赋值
                     * @return BackupType 是否已赋值
                     */
                    bool BackupTypeHasBeenSet() const;

                    /**
                     * 获取Backup name
                     * @return BackupName Backup name
                     */
                    std::string GetBackupName() const;

                    /**
                     * 设置Backup name
                     * @param BackupName Backup name
                     */
                    void SetBackupName(const std::string& _backupName);

                    /**
                     * 判断参数 BackupName 是否已赋值
                     * @return BackupName 是否已赋值
                     */
                    bool BackupNameHasBeenSet() const;

                    /**
                     * 获取Backup remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BackupDesc Backup remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetBackupDesc() const;

                    /**
                     * 设置Backup remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param BackupDesc Backup remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetBackupDesc(const std::string& _backupDesc);

                    /**
                     * 判断参数 BackupDesc 是否已赋值
                     * @return BackupDesc 是否已赋值
                     */
                    bool BackupDescHasBeenSet() const;

                    /**
                     * 获取Backup file size in KB
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BackupSize Backup file size in KB
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetBackupSize() const;

                    /**
                     * 设置Backup file size in KB
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param BackupSize Backup file size in KB
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetBackupSize(const uint64_t& _backupSize);

                    /**
                     * 判断参数 BackupSize 是否已赋值
                     * @return BackupSize 是否已赋值
                     */
                    bool BackupSizeHasBeenSet() const;

                    /**
                     * 获取Backup start time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StartTime Backup start time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Backup start time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param StartTime Backup start time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Backup end time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EndTime Backup end time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Backup end time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param EndTime Backup end time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Backup status. 1: backing up; 2: backed up successful
                     * @return Status Backup status. 1: backing up; 2: backed up successful
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Backup status. 1: backing up; 2: backed up successful
                     * @param Status Backup status. 1: backing up; 2: backed up successful
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Backup method. 0: logical backup; 1: physical backup
                     * @return BackupMethod Backup method. 0: logical backup; 1: physical backup
                     */
                    uint64_t GetBackupMethod() const;

                    /**
                     * 设置Backup method. 0: logical backup; 1: physical backup
                     * @param BackupMethod Backup method. 0: logical backup; 1: physical backup
                     */
                    void SetBackupMethod(const uint64_t& _backupMethod);

                    /**
                     * 判断参数 BackupMethod 是否已赋值
                     * @return BackupMethod 是否已赋值
                     */
                    bool BackupMethodHasBeenSet() const;

                private:

                    /**
                     * Instance ID
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
                     * Backup remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_backupDesc;
                    bool m_backupDescHasBeenSet;

                    /**
                     * Backup file size in KB
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_backupSize;
                    bool m_backupSizeHasBeenSet;

                    /**
                     * Backup start time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Backup end time
Note: This field may return null, indicating that no valid values can be obtained.
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_BACKUPINFO_H_
