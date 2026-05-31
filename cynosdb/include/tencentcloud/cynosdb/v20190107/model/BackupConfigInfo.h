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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BACKUPCONFIGINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BACKUPCONFIGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/CreateBackupVaultItem.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Backup setting.
                */
                class BackupConfigInfo : public AbstractModel
                {
                public:
                    BackupConfigInfo();
                    ~BackupConfigInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取System automation time.
                     * @return BackupCustomAutoTime System automation time.
                     * 
                     */
                    bool GetBackupCustomAutoTime() const;

                    /**
                     * 设置System automation time.
                     * @param _backupCustomAutoTime System automation time.
                     * 
                     */
                    void SetBackupCustomAutoTime(const bool& _backupCustomAutoTime);

                    /**
                     * 判断参数 BackupCustomAutoTime 是否已赋值
                     * @return BackupCustomAutoTime 是否已赋值
                     * 
                     */
                    bool BackupCustomAutoTimeHasBeenSet() const;

                    /**
                     * 获取Indicates the full backup start time. value range: [0-24*3600]. for example, 0:00, 1:00, and 2:00 are 0, 3600, and 7200 respectively.
                     * @return BackupTimeBeg Indicates the full backup start time. value range: [0-24*3600]. for example, 0:00, 1:00, and 2:00 are 0, 3600, and 7200 respectively.
                     * 
                     */
                    uint64_t GetBackupTimeBeg() const;

                    /**
                     * 设置Indicates the full backup start time. value range: [0-24*3600]. for example, 0:00, 1:00, and 2:00 are 0, 3600, and 7200 respectively.
                     * @param _backupTimeBeg Indicates the full backup start time. value range: [0-24*3600]. for example, 0:00, 1:00, and 2:00 are 0, 3600, and 7200 respectively.
                     * 
                     */
                    void SetBackupTimeBeg(const uint64_t& _backupTimeBeg);

                    /**
                     * 判断参数 BackupTimeBeg 是否已赋值
                     * @return BackupTimeBeg 是否已赋值
                     * 
                     */
                    bool BackupTimeBegHasBeenSet() const;

                    /**
                     * 获取Indicates the full backup end time. value range: [0-24*3600]. for example, 0:00, 1:00, and 2:00 are 0, 3600, and 7200 respectively.
                     * @return BackupTimeEnd Indicates the full backup end time. value range: [0-24*3600]. for example, 0:00, 1:00, and 2:00 are 0, 3600, and 7200 respectively.
                     * 
                     */
                    uint64_t GetBackupTimeEnd() const;

                    /**
                     * 设置Indicates the full backup end time. value range: [0-24*3600]. for example, 0:00, 1:00, and 2:00 are 0, 3600, and 7200 respectively.
                     * @param _backupTimeEnd Indicates the full backup end time. value range: [0-24*3600]. for example, 0:00, 1:00, and 2:00 are 0, 3600, and 7200 respectively.
                     * 
                     */
                    void SetBackupTimeEnd(const uint64_t& _backupTimeEnd);

                    /**
                     * 判断参数 BackupTimeEnd 是否已赋值
                     * @return BackupTimeEnd 是否已赋值
                     * 
                     */
                    bool BackupTimeEndHasBeenSet() const;

                    /**
                     * 获取Currently this parameter cannot be modified. no need to specify. backup frequency is an array of length 7, corresponding to the backup method from sunday to saturday, full for full backup and increment for incremental backup.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BackupWeekDays Currently this parameter cannot be modified. no need to specify. backup frequency is an array of length 7, corresponding to the backup method from sunday to saturday, full for full backup and increment for incremental backup.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetBackupWeekDays() const;

                    /**
                     * 设置Currently this parameter cannot be modified. no need to specify. backup frequency is an array of length 7, corresponding to the backup method from sunday to saturday, full for full backup and increment for incremental backup.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _backupWeekDays Currently this parameter cannot be modified. no need to specify. backup frequency is an array of length 7, corresponding to the backup method from sunday to saturday, full for full backup and increment for incremental backup.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBackupWeekDays(const std::vector<std::string>& _backupWeekDays);

                    /**
                     * 判断参数 BackupWeekDays 是否已赋值
                     * @return BackupWeekDays 是否已赋值
                     * 
                     */
                    bool BackupWeekDaysHasBeenSet() const;

                    /**
                     * 获取Interval.
                     * @return BackupIntervalTime Interval.
                     * 
                     */
                    int64_t GetBackupIntervalTime() const;

                    /**
                     * 设置Interval.
                     * @param _backupIntervalTime Interval.
                     * 
                     */
                    void SetBackupIntervalTime(const int64_t& _backupIntervalTime);

                    /**
                     * 判断参数 BackupIntervalTime 是否已赋值
                     * @return BackupIntervalTime 是否已赋值
                     * 
                     */
                    bool BackupIntervalTimeHasBeenSet() const;

                    /**
                     * 获取Indicates the backup retention period in seconds. data will be cleaned up longer than this time. 7 days means 3600247=604800. the maximum is 158112000.
                     * @return ReserveDuration Indicates the backup retention period in seconds. data will be cleaned up longer than this time. 7 days means 3600247=604800. the maximum is 158112000.
                     * 
                     */
                    uint64_t GetReserveDuration() const;

                    /**
                     * 设置Indicates the backup retention period in seconds. data will be cleaned up longer than this time. 7 days means 3600247=604800. the maximum is 158112000.
                     * @param _reserveDuration Indicates the backup retention period in seconds. data will be cleaned up longer than this time. 7 days means 3600247=604800. the maximum is 158112000.
                     * 
                     */
                    void SetReserveDuration(const uint64_t& _reserveDuration);

                    /**
                     * 判断参数 ReserveDuration 是否已赋值
                     * @return ReserveDuration 是否已赋值
                     * 
                     */
                    bool ReserveDurationHasBeenSet() const;

                    /**
                     * 获取Enable cross-region backup.
Enable.
0: disabled.
                     * @return CrossRegionsEnable Enable cross-region backup.
Enable.
0: disabled.
                     * 
                     */
                    std::string GetCrossRegionsEnable() const;

                    /**
                     * 设置Enable cross-region backup.
Enable.
0: disabled.
                     * @param _crossRegionsEnable Enable cross-region backup.
Enable.
0: disabled.
                     * 
                     */
                    void SetCrossRegionsEnable(const std::string& _crossRegionsEnable);

                    /**
                     * 判断参数 CrossRegionsEnable 是否已赋值
                     * @return CrossRegionsEnable 是否已赋值
                     * 
                     */
                    bool CrossRegionsEnableHasBeenSet() const;

                    /**
                     * 获取Cross-Regional backup region.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CrossRegions Cross-Regional backup region.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetCrossRegions() const;

                    /**
                     * 设置Cross-Regional backup region.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _crossRegions Cross-Regional backup region.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCrossRegions(const std::vector<std::string>& _crossRegions);

                    /**
                     * 判断参数 CrossRegions 是否已赋值
                     * @return CrossRegions 是否已赋值
                     * 
                     */
                    bool CrossRegionsHasBeenSet() const;

                    /**
                     * 获取Automatic data backup trigger policy, periodically: automatic periodic backup, frequent: high-frequency backup
                     * @return BackupTriggerStrategy Automatic data backup trigger policy, periodically: automatic periodic backup, frequent: high-frequency backup
                     * 
                     */
                    std::string GetBackupTriggerStrategy() const;

                    /**
                     * 设置Automatic data backup trigger policy, periodically: automatic periodic backup, frequent: high-frequency backup
                     * @param _backupTriggerStrategy Automatic data backup trigger policy, periodically: automatic periodic backup, frequent: high-frequency backup
                     * 
                     */
                    void SetBackupTriggerStrategy(const std::string& _backupTriggerStrategy);

                    /**
                     * 判断参数 BackupTriggerStrategy 是否已赋值
                     * @return BackupTriggerStrategy 是否已赋值
                     * 
                     */
                    bool BackupTriggerStrategyHasBeenSet() const;

                    /**
                     * 获取Backup delivery relationship
                     * @return AutoCopyVaults Backup delivery relationship
                     * 
                     */
                    std::vector<CreateBackupVaultItem> GetAutoCopyVaults() const;

                    /**
                     * 设置Backup delivery relationship
                     * @param _autoCopyVaults Backup delivery relationship
                     * 
                     */
                    void SetAutoCopyVaults(const std::vector<CreateBackupVaultItem>& _autoCopyVaults);

                    /**
                     * 判断参数 AutoCopyVaults 是否已赋值
                     * @return AutoCopyVaults 是否已赋值
                     * 
                     */
                    bool AutoCopyVaultsHasBeenSet() const;

                private:

                    /**
                     * System automation time.
                     */
                    bool m_backupCustomAutoTime;
                    bool m_backupCustomAutoTimeHasBeenSet;

                    /**
                     * Indicates the full backup start time. value range: [0-24*3600]. for example, 0:00, 1:00, and 2:00 are 0, 3600, and 7200 respectively.
                     */
                    uint64_t m_backupTimeBeg;
                    bool m_backupTimeBegHasBeenSet;

                    /**
                     * Indicates the full backup end time. value range: [0-24*3600]. for example, 0:00, 1:00, and 2:00 are 0, 3600, and 7200 respectively.
                     */
                    uint64_t m_backupTimeEnd;
                    bool m_backupTimeEndHasBeenSet;

                    /**
                     * Currently this parameter cannot be modified. no need to specify. backup frequency is an array of length 7, corresponding to the backup method from sunday to saturday, full for full backup and increment for incremental backup.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_backupWeekDays;
                    bool m_backupWeekDaysHasBeenSet;

                    /**
                     * Interval.
                     */
                    int64_t m_backupIntervalTime;
                    bool m_backupIntervalTimeHasBeenSet;

                    /**
                     * Indicates the backup retention period in seconds. data will be cleaned up longer than this time. 7 days means 3600247=604800. the maximum is 158112000.
                     */
                    uint64_t m_reserveDuration;
                    bool m_reserveDurationHasBeenSet;

                    /**
                     * Enable cross-region backup.
Enable.
0: disabled.
                     */
                    std::string m_crossRegionsEnable;
                    bool m_crossRegionsEnableHasBeenSet;

                    /**
                     * Cross-Regional backup region.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_crossRegions;
                    bool m_crossRegionsHasBeenSet;

                    /**
                     * Automatic data backup trigger policy, periodically: automatic periodic backup, frequent: high-frequency backup
                     */
                    std::string m_backupTriggerStrategy;
                    bool m_backupTriggerStrategyHasBeenSet;

                    /**
                     * Backup delivery relationship
                     */
                    std::vector<CreateBackupVaultItem> m_autoCopyVaults;
                    bool m_autoCopyVaultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BACKUPCONFIGINFO_H_
