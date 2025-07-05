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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_RANSOMDEFENSEBACKUP_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_RANSOMDEFENSEBACKUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * List of host snapshot backup
                */
                class RansomDefenseBackup : public AbstractModel
                {
                public:
                    RansomDefenseBackup();
                    ~RansomDefenseBackup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Backup time
                     * @return BackupTime Backup time
                     * 
                     */
                    std::string GetBackupTime() const;

                    /**
                     * 设置Backup time
                     * @param _backupTime Backup time
                     * 
                     */
                    void SetBackupTime(const std::string& _backupTime);

                    /**
                     * 判断参数 BackupTime 是否已赋值
                     * @return BackupTime 是否已赋值
                     * 
                     */
                    bool BackupTimeHasBeenSet() const;

                    /**
                     * 获取Ransom Status: 0 - No Alarm, 1 - Alarm Present
                     * @return EventStatus Ransom Status: 0 - No Alarm, 1 - Alarm Present
                     * 
                     */
                    uint64_t GetEventStatus() const;

                    /**
                     * 设置Ransom Status: 0 - No Alarm, 1 - Alarm Present
                     * @param _eventStatus Ransom Status: 0 - No Alarm, 1 - Alarm Present
                     * 
                     */
                    void SetEventStatus(const uint64_t& _eventStatus);

                    /**
                     * 判断参数 EventStatus 是否已赋值
                     * @return EventStatus 是否已赋值
                     * 
                     */
                    bool EventStatusHasBeenSet() const;

                    /**
                     * 获取Backup Status: 0 - Backing up, 1 - Normal, 2, 3 - Failed, 4 - Snapshot expired, 9 - Snapshot deleted
                     * @return BackupStatus Backup Status: 0 - Backing up, 1 - Normal, 2, 3 - Failed, 4 - Snapshot expired, 9 - Snapshot deleted
                     * 
                     */
                    uint64_t GetBackupStatus() const;

                    /**
                     * 设置Backup Status: 0 - Backing up, 1 - Normal, 2, 3 - Failed, 4 - Snapshot expired, 9 - Snapshot deleted
                     * @param _backupStatus Backup Status: 0 - Backing up, 1 - Normal, 2, 3 - Failed, 4 - Snapshot expired, 9 - Snapshot deleted
                     * 
                     */
                    void SetBackupStatus(const uint64_t& _backupStatus);

                    /**
                     * 判断参数 BackupStatus 是否已赋值
                     * @return BackupStatus 是否已赋值
                     * 
                     */
                    bool BackupStatusHasBeenSet() const;

                    /**
                     * 获取Number of backup disk
                     * @return DiskCount Number of backup disk
                     * 
                     */
                    uint64_t GetDiskCount() const;

                    /**
                     * 设置Number of backup disk
                     * @param _diskCount Number of backup disk
                     * 
                     */
                    void SetDiskCount(const uint64_t& _diskCount);

                    /**
                     * 判断参数 DiskCount 是否已赋值
                     * @return DiskCount 是否已赋值
                     * 
                     */
                    bool DiskCountHasBeenSet() const;

                    /**
                     * 获取Hard Disk Information, separated by semicolons (;).
                     * @return Disks Hard Disk Information, separated by semicolons (;).
                     * 
                     */
                    std::string GetDisks() const;

                    /**
                     * 设置Hard Disk Information, separated by semicolons (;).
                     * @param _disks Hard Disk Information, separated by semicolons (;).
                     * 
                     */
                    void SetDisks(const std::string& _disks);

                    /**
                     * 判断参数 Disks 是否已赋值
                     * @return Disks 是否已赋值
                     * 
                     */
                    bool DisksHasBeenSet() const;

                    /**
                     * 获取Snapshot List, separated by semicolons (;)
                     * @return SnapshotIds Snapshot List, separated by semicolons (;)
                     * 
                     */
                    std::string GetSnapshotIds() const;

                    /**
                     * 设置Snapshot List, separated by semicolons (;)
                     * @param _snapshotIds Snapshot List, separated by semicolons (;)
                     * 
                     */
                    void SetSnapshotIds(const std::string& _snapshotIds);

                    /**
                     * 判断参数 SnapshotIds 是否已赋值
                     * @return SnapshotIds 是否已赋值
                     * 
                     */
                    bool SnapshotIdsHasBeenSet() const;

                    /**
                     * 获取Policy ID
                     * @return StrategyId Policy ID
                     * 
                     */
                    uint64_t GetStrategyId() const;

                    /**
                     * 设置Policy ID
                     * @param _strategyId Policy ID
                     * 
                     */
                    void SetStrategyId(const uint64_t& _strategyId);

                    /**
                     * 判断参数 StrategyId 是否已赋值
                     * @return StrategyId 是否已赋值
                     * 
                     */
                    bool StrategyIdHasBeenSet() const;

                    /**
                     * 获取Policy Status: 0 Disabled, 1 Enabled, 9 Deleted
                     * @return StrategyStatus Policy Status: 0 Disabled, 1 Enabled, 9 Deleted
                     * 
                     */
                    uint64_t GetStrategyStatus() const;

                    /**
                     * 设置Policy Status: 0 Disabled, 1 Enabled, 9 Deleted
                     * @param _strategyStatus Policy Status: 0 Disabled, 1 Enabled, 9 Deleted
                     * 
                     */
                    void SetStrategyStatus(const uint64_t& _strategyStatus);

                    /**
                     * 判断参数 StrategyStatus 是否已赋值
                     * @return StrategyStatus 是否已赋值
                     * 
                     */
                    bool StrategyStatusHasBeenSet() const;

                    /**
                     * 获取Policy name
                     * @return StrategyName Policy name
                     * 
                     */
                    std::string GetStrategyName() const;

                    /**
                     * 设置Policy name
                     * @param _strategyName Policy name
                     * 
                     */
                    void SetStrategyName(const std::string& _strategyName);

                    /**
                     * 判断参数 StrategyName 是否已赋值
                     * @return StrategyName 是否已赋值
                     * 
                     */
                    bool StrategyNameHasBeenSet() const;

                private:

                    /**
                     * Backup time
                     */
                    std::string m_backupTime;
                    bool m_backupTimeHasBeenSet;

                    /**
                     * Ransom Status: 0 - No Alarm, 1 - Alarm Present
                     */
                    uint64_t m_eventStatus;
                    bool m_eventStatusHasBeenSet;

                    /**
                     * Backup Status: 0 - Backing up, 1 - Normal, 2, 3 - Failed, 4 - Snapshot expired, 9 - Snapshot deleted
                     */
                    uint64_t m_backupStatus;
                    bool m_backupStatusHasBeenSet;

                    /**
                     * Number of backup disk
                     */
                    uint64_t m_diskCount;
                    bool m_diskCountHasBeenSet;

                    /**
                     * Hard Disk Information, separated by semicolons (;).
                     */
                    std::string m_disks;
                    bool m_disksHasBeenSet;

                    /**
                     * Snapshot List, separated by semicolons (;)
                     */
                    std::string m_snapshotIds;
                    bool m_snapshotIdsHasBeenSet;

                    /**
                     * Policy ID
                     */
                    uint64_t m_strategyId;
                    bool m_strategyIdHasBeenSet;

                    /**
                     * Policy Status: 0 Disabled, 1 Enabled, 9 Deleted
                     */
                    uint64_t m_strategyStatus;
                    bool m_strategyStatusHasBeenSet;

                    /**
                     * Policy name
                     */
                    std::string m_strategyName;
                    bool m_strategyNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_RANSOMDEFENSEBACKUP_H_
