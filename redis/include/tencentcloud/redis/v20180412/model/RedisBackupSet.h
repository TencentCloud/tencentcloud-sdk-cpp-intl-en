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
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Backup start time
                     * @param StartTime Backup start time
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Backup ID
                     * @return BackupId Backup ID
                     */
                    std::string GetBackupId() const;

                    /**
                     * 设置Backup ID
                     * @param BackupId Backup ID
                     */
                    void SetBackupId(const std::string& _backupId);

                    /**
                     * 判断参数 BackupId 是否已赋值
                     * @return BackupId 是否已赋值
                     */
                    bool BackupIdHasBeenSet() const;

                    /**
                     * 获取Backup type. manualBackupInstance: manual backup initiated by user; systemBackupInstance: midnight backup initiated by system
                     * @return BackupType Backup type. manualBackupInstance: manual backup initiated by user; systemBackupInstance: midnight backup initiated by system
                     */
                    std::string GetBackupType() const;

                    /**
                     * 设置Backup type. manualBackupInstance: manual backup initiated by user; systemBackupInstance: midnight backup initiated by system
                     * @param BackupType Backup type. manualBackupInstance: manual backup initiated by user; systemBackupInstance: midnight backup initiated by system
                     */
                    void SetBackupType(const std::string& _backupType);

                    /**
                     * 判断参数 BackupType 是否已赋值
                     * @return BackupType 是否已赋值
                     */
                    bool BackupTypeHasBeenSet() const;

                    /**
                     * 获取Backup status. 1: backup is locked by another process; 2: backup is normal and not locked by any process; -1: backup has expired; 3: backup is being exported; 4: backup is exported successfully
                     * @return Status Backup status. 1: backup is locked by another process; 2: backup is normal and not locked by any process; -1: backup has expired; 3: backup is being exported; 4: backup is exported successfully
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Backup status. 1: backup is locked by another process; 2: backup is normal and not locked by any process; -1: backup has expired; 3: backup is being exported; 4: backup is exported successfully
                     * @param Status Backup status. 1: backup is locked by another process; 2: backup is normal and not locked by any process; -1: backup has expired; 3: backup is being exported; 4: backup is exported successfully
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Backup remarks
                     * @return Remark Backup remarks
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Backup remarks
                     * @param Remark Backup remarks
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Whether a backup is locked. 0: no; 1: yes
                     * @return Locked Whether a backup is locked. 0: no; 1: yes
                     */
                    int64_t GetLocked() const;

                    /**
                     * 设置Whether a backup is locked. 0: no; 1: yes
                     * @param Locked Whether a backup is locked. 0: no; 1: yes
                     */
                    void SetLocked(const int64_t& _locked);

                    /**
                     * 判断参数 Locked 是否已赋值
                     * @return Locked 是否已赋值
                     */
                    bool LockedHasBeenSet() const;

                private:

                    /**
                     * Backup start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Backup ID
                     */
                    std::string m_backupId;
                    bool m_backupIdHasBeenSet;

                    /**
                     * Backup type. manualBackupInstance: manual backup initiated by user; systemBackupInstance: midnight backup initiated by system
                     */
                    std::string m_backupType;
                    bool m_backupTypeHasBeenSet;

                    /**
                     * Backup status. 1: backup is locked by another process; 2: backup is normal and not locked by any process; -1: backup has expired; 3: backup is being exported; 4: backup is exported successfully
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Backup remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Whether a backup is locked. 0: no; 1: yes
                     */
                    int64_t m_locked;
                    bool m_lockedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_REDISBACKUPSET_H_
