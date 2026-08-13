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
                     * 获取<p>System automation time</p>
                     * @return BackupCustomAutoTime <p>System automation time</p>
                     * 
                     */
                    bool GetBackupCustomAutoTime() const;

                    /**
                     * 设置<p>System automation time</p>
                     * @param _backupCustomAutoTime <p>System automation time</p>
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
                     * 获取<p>Indicates the full backup start time, [0-24*3600]. For example, 0:00, 1:00, and 2:00 are 0, 3600, and 7200 respectively.</p>
                     * @return BackupTimeBeg <p>Indicates the full backup start time, [0-24*3600]. For example, 0:00, 1:00, and 2:00 are 0, 3600, and 7200 respectively.</p>
                     * 
                     */
                    uint64_t GetBackupTimeBeg() const;

                    /**
                     * 设置<p>Indicates the full backup start time, [0-24*3600]. For example, 0:00, 1:00, and 2:00 are 0, 3600, and 7200 respectively.</p>
                     * @param _backupTimeBeg <p>Indicates the full backup start time, [0-24*3600]. For example, 0:00, 1:00, and 2:00 are 0, 3600, and 7200 respectively.</p>
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
                     * 获取<p>Indicates the full backup end time, [0-24*3600]. For example, 0:00, 1:00, and 2:00 are 0, 3600, and 7200 respectively.</p>
                     * @return BackupTimeEnd <p>Indicates the full backup end time, [0-24*3600]. For example, 0:00, 1:00, and 2:00 are 0, 3600, and 7200 respectively.</p>
                     * 
                     */
                    uint64_t GetBackupTimeEnd() const;

                    /**
                     * 设置<p>Indicates the full backup end time, [0-24*3600]. For example, 0:00, 1:00, and 2:00 are 0, 3600, and 7200 respectively.</p>
                     * @param _backupTimeEnd <p>Indicates the full backup end time, [0-24*3600]. For example, 0:00, 1:00, and 2:00 are 0, 3600, and 7200 respectively.</p>
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
                     * 获取<p>Currently this parameter cannot be modified and no need to specify. Backup frequency is an array of length 7, corresponding to the backup method from Sunday to Saturday, full-full backup, increment-incremental backup.</p>
                     * @return BackupWeekDays <p>Currently this parameter cannot be modified and no need to specify. Backup frequency is an array of length 7, corresponding to the backup method from Sunday to Saturday, full-full backup, increment-incremental backup.</p>
                     * 
                     */
                    std::vector<std::string> GetBackupWeekDays() const;

                    /**
                     * 设置<p>Currently this parameter cannot be modified and no need to specify. Backup frequency is an array of length 7, corresponding to the backup method from Sunday to Saturday, full-full backup, increment-incremental backup.</p>
                     * @param _backupWeekDays <p>Currently this parameter cannot be modified and no need to specify. Backup frequency is an array of length 7, corresponding to the backup method from Sunday to Saturday, full-full backup, increment-incremental backup.</p>
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
                     * 获取<p>Interval</p>
                     * @return BackupIntervalTime <p>Interval</p>
                     * 
                     */
                    int64_t GetBackupIntervalTime() const;

                    /**
                     * 设置<p>Interval</p>
                     * @param _backupIntervalTime <p>Interval</p>
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
                     * 获取<p>Indicates the backup retention period in seconds. Backups will be cleaned up longer than this time. 7 days means 3600*24*7=604800. The maximum value is 158112000.</p>
                     * @return ReserveDuration <p>Indicates the backup retention period in seconds. Backups will be cleaned up longer than this time. 7 days means 3600*24*7=604800. The maximum value is 158112000.</p>
                     * 
                     */
                    uint64_t GetReserveDuration() const;

                    /**
                     * 设置<p>Indicates the backup retention period in seconds. Backups will be cleaned up longer than this time. 7 days means 3600*24*7=604800. The maximum value is 158112000.</p>
                     * @param _reserveDuration <p>Indicates the backup retention period in seconds. Backups will be cleaned up longer than this time. 7 days means 3600*24*7=604800. The maximum value is 158112000.</p>
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
                     * 获取<p>Cross-region backup enabled<br>yes-Enable<br>no-Disable</p>
                     * @return CrossRegionsEnable <p>Cross-region backup enabled<br>yes-Enable<br>no-Disable</p>
                     * 
                     */
                    std::string GetCrossRegionsEnable() const;

                    /**
                     * 设置<p>Cross-region backup enabled<br>yes-Enable<br>no-Disable</p>
                     * @param _crossRegionsEnable <p>Cross-region backup enabled<br>yes-Enable<br>no-Disable</p>
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
                     * 获取<p>Cross-regional backup region</p>
                     * @return CrossRegions <p>Cross-regional backup region</p>
                     * 
                     */
                    std::vector<std::string> GetCrossRegions() const;

                    /**
                     * 设置<p>Cross-regional backup region</p>
                     * @param _crossRegions <p>Cross-regional backup region</p>
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
                     * 获取<p>Cross-region backup retention period</p><p>Unit: Day</p>
                     * @return CrossRegionSaveDays <p>Cross-region backup retention period</p><p>Unit: Day</p>
                     * 
                     */
                    int64_t GetCrossRegionSaveDays() const;

                    /**
                     * 设置<p>Cross-region backup retention period</p><p>Unit: Day</p>
                     * @param _crossRegionSaveDays <p>Cross-region backup retention period</p><p>Unit: Day</p>
                     * 
                     */
                    void SetCrossRegionSaveDays(const int64_t& _crossRegionSaveDays);

                    /**
                     * 判断参数 CrossRegionSaveDays 是否已赋值
                     * @return CrossRegionSaveDays 是否已赋值
                     * 
                     */
                    bool CrossRegionSaveDaysHasBeenSet() const;

                    /**
                     * 获取<p>Automatic data backup trigger policy, periodically: automatic periodic backup, frequent: high frequency backup</p>
                     * @return BackupTriggerStrategy <p>Automatic data backup trigger policy, periodically: automatic periodic backup, frequent: high frequency backup</p>
                     * 
                     */
                    std::string GetBackupTriggerStrategy() const;

                    /**
                     * 设置<p>Automatic data backup trigger policy, periodically: automatic periodic backup, frequent: high frequency backup</p>
                     * @param _backupTriggerStrategy <p>Automatic data backup trigger policy, periodically: automatic periodic backup, frequent: high frequency backup</p>
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
                     * 获取<p>Backup delivery relationship</p>
                     * @return AutoCopyVaults <p>Backup delivery relationship</p>
                     * 
                     */
                    std::vector<CreateBackupVaultItem> GetAutoCopyVaults() const;

                    /**
                     * 设置<p>Backup delivery relationship</p>
                     * @param _autoCopyVaults <p>Backup delivery relationship</p>
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
                     * <p>System automation time</p>
                     */
                    bool m_backupCustomAutoTime;
                    bool m_backupCustomAutoTimeHasBeenSet;

                    /**
                     * <p>Indicates the full backup start time, [0-24*3600]. For example, 0:00, 1:00, and 2:00 are 0, 3600, and 7200 respectively.</p>
                     */
                    uint64_t m_backupTimeBeg;
                    bool m_backupTimeBegHasBeenSet;

                    /**
                     * <p>Indicates the full backup end time, [0-24*3600]. For example, 0:00, 1:00, and 2:00 are 0, 3600, and 7200 respectively.</p>
                     */
                    uint64_t m_backupTimeEnd;
                    bool m_backupTimeEndHasBeenSet;

                    /**
                     * <p>Currently this parameter cannot be modified and no need to specify. Backup frequency is an array of length 7, corresponding to the backup method from Sunday to Saturday, full-full backup, increment-incremental backup.</p>
                     */
                    std::vector<std::string> m_backupWeekDays;
                    bool m_backupWeekDaysHasBeenSet;

                    /**
                     * <p>Interval</p>
                     */
                    int64_t m_backupIntervalTime;
                    bool m_backupIntervalTimeHasBeenSet;

                    /**
                     * <p>Indicates the backup retention period in seconds. Backups will be cleaned up longer than this time. 7 days means 3600*24*7=604800. The maximum value is 158112000.</p>
                     */
                    uint64_t m_reserveDuration;
                    bool m_reserveDurationHasBeenSet;

                    /**
                     * <p>Cross-region backup enabled<br>yes-Enable<br>no-Disable</p>
                     */
                    std::string m_crossRegionsEnable;
                    bool m_crossRegionsEnableHasBeenSet;

                    /**
                     * <p>Cross-regional backup region</p>
                     */
                    std::vector<std::string> m_crossRegions;
                    bool m_crossRegionsHasBeenSet;

                    /**
                     * <p>Cross-region backup retention period</p><p>Unit: Day</p>
                     */
                    int64_t m_crossRegionSaveDays;
                    bool m_crossRegionSaveDaysHasBeenSet;

                    /**
                     * <p>Automatic data backup trigger policy, periodically: automatic periodic backup, frequent: high frequency backup</p>
                     */
                    std::string m_backupTriggerStrategy;
                    bool m_backupTriggerStrategyHasBeenSet;

                    /**
                     * <p>Backup delivery relationship</p>
                     */
                    std::vector<CreateBackupVaultItem> m_autoCopyVaults;
                    bool m_autoCopyVaultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BACKUPCONFIGINFO_H_
