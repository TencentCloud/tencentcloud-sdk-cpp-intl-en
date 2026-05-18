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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEBACKUPRULESRESPONSE_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEBACKUPRULESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mongodb/v20190725/model/BackupTotalSize.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * DescribeBackupRules response structure.
                */
                class DescribeBackupRulesResponse : public AbstractModel
                {
                public:
                    DescribeBackupRulesResponse();
                    ~DescribeBackupRulesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Retention period for backup data, in days.
                     * @return BackupSaveTime Retention period for backup data, in days.
                     * 
                     */
                    uint64_t GetBackupSaveTime() const;

                    /**
                     * 判断参数 BackupSaveTime 是否已赋值
                     * @return BackupSaveTime 是否已赋值
                     * 
                     */
                    bool BackupSaveTimeHasBeenSet() const;

                    /**
                     * 获取Backup frequency. Backup interval in hours. Value: 12, 24.
                     * @return BackupFrequency Backup frequency. Backup interval in hours. Value: 12, 24.
                     * 
                     */
                    int64_t GetBackupFrequency() const;

                    /**
                     * 判断参数 BackupFrequency 是否已赋值
                     * @return BackupFrequency 是否已赋值
                     * 
                     */
                    bool BackupFrequencyHasBeenSet() const;

                    /**
                     * 获取Automatic backup start time.
                     * @return BackupTime Automatic backup start time.
                     * 
                     */
                    uint64_t GetBackupTime() const;

                    /**
                     * 判断参数 BackupTime 是否已赋值
                     * @return BackupTime 是否已赋值
                     * 
                     */
                    bool BackupTimeHasBeenSet() const;

                    /**
                     * 获取Backup mode.
- 0: logical backup.
- 1: physical backup.
-3: Snapshot backup.
**Description**:
1. The General Edition instance supports logical and physical backup. The Cloud Disk Edition instance supports physical and snapshot backup, but does not support logical backup currently.
2. Physical backup is not supported when storage encryption is enabled for the instance.
                     * @return BackupMethod Backup mode.
- 0: logical backup.
- 1: physical backup.
-3: Snapshot backup.
**Description**:
1. The General Edition instance supports logical and physical backup. The Cloud Disk Edition instance supports physical and snapshot backup, but does not support logical backup currently.
2. Physical backup is not supported when storage encryption is enabled for the instance.
                     * 
                     */
                    uint64_t GetBackupMethod() const;

                    /**
                     * 判断参数 BackupMethod 是否已赋值
                     * @return BackupMethod 是否已赋值
                     * 
                     */
                    bool BackupMethodHasBeenSet() const;

                    /**
                     * 获取Day of week for backup, 0-6, separated by commas
                     * @return ActiveWeekdays Day of week for backup, 0-6, separated by commas
                     * 
                     */
                    std::string GetActiveWeekdays() const;

                    /**
                     * 判断参数 ActiveWeekdays 是否已赋值
                     * @return ActiveWeekdays 是否已赋值
                     * 
                     */
                    bool ActiveWeekdaysHasBeenSet() const;

                    /**
                     * 获取Long-term backup period. weekly - by week, monthly - by month, empty means not enabled.
                     * @return LongTermInterval Long-term backup period. weekly - by week, monthly - by month, empty means not enabled.
                     * 
                     */
                    std::string GetLongTermInterval() const;

                    /**
                     * 判断参数 LongTermInterval 是否已赋值
                     * @return LongTermInterval 是否已赋值
                     * 
                     */
                    bool LongTermIntervalHasBeenSet() const;

                    /**
                     * 获取Date of long-term backup, week 0-6, month 1-31
                     * @return LongTermActiveDays Date of long-term backup, week 0-6, month 1-31
                     * 
                     */
                    std::string GetLongTermActiveDays() const;

                    /**
                     * 判断参数 LongTermActiveDays 是否已赋值
                     * @return LongTermActiveDays 是否已赋值
                     * 
                     */
                    bool LongTermActiveDaysHasBeenSet() const;

                    /**
                     * 获取Long-term backup retention period
                     * @return LongTermExpiredDays Long-term backup retention period
                     * 
                     */
                    int64_t GetLongTermExpiredDays() const;

                    /**
                     * 判断参数 LongTermExpiredDays 是否已赋值
                     * @return LongTermExpiredDays 是否已赋值
                     * 
                     */
                    bool LongTermExpiredDaysHasBeenSet() const;

                    /**
                     * 获取Incremental backup retention period
                     * @return OplogExpiredDays Incremental backup retention period
                     * 
                     */
                    int64_t GetOplogExpiredDays() const;

                    /**
                     * 判断参数 OplogExpiredDays 是否已赋值
                     * @return OplogExpiredDays 是否已赋值
                     * 
                     */
                    bool OplogExpiredDaysHasBeenSet() const;

                    /**
                     * 获取Backup version. 0 - Old backup method, 1 - Advanced backup.
                     * @return BackupVersion Backup version. 0 - Old backup method, 1 - Advanced backup.
                     * 
                     */
                    int64_t GetBackupVersion() const;

                    /**
                     * 判断参数 BackupVersion 是否已赋值
                     * @return BackupVersion 是否已赋值
                     * 
                     */
                    bool BackupVersionHasBeenSet() const;

                    /**
                     * 获取Backup size
                     * @return BackupTotalSize Backup size
                     * 
                     */
                    BackupTotalSize GetBackupTotalSize() const;

                    /**
                     * 判断参数 BackupTotalSize 是否已赋值
                     * @return BackupTotalSize 是否已赋值
                     * 
                     */
                    bool BackupTotalSizeHasBeenSet() const;

                    /**
                     * 获取alarm limit
                     * @return AlertThreshold alarm limit
                     * 
                     */
                    int64_t GetAlertThreshold() const;

                    /**
                     * 判断参数 AlertThreshold 是否已赋值
                     * @return AlertThreshold 是否已赋值
                     * 
                     */
                    bool AlertThresholdHasBeenSet() const;

                private:

                    /**
                     * Retention period for backup data, in days.
                     */
                    uint64_t m_backupSaveTime;
                    bool m_backupSaveTimeHasBeenSet;

                    /**
                     * Backup frequency. Backup interval in hours. Value: 12, 24.
                     */
                    int64_t m_backupFrequency;
                    bool m_backupFrequencyHasBeenSet;

                    /**
                     * Automatic backup start time.
                     */
                    uint64_t m_backupTime;
                    bool m_backupTimeHasBeenSet;

                    /**
                     * Backup mode.
- 0: logical backup.
- 1: physical backup.
-3: Snapshot backup.
**Description**:
1. The General Edition instance supports logical and physical backup. The Cloud Disk Edition instance supports physical and snapshot backup, but does not support logical backup currently.
2. Physical backup is not supported when storage encryption is enabled for the instance.
                     */
                    uint64_t m_backupMethod;
                    bool m_backupMethodHasBeenSet;

                    /**
                     * Day of week for backup, 0-6, separated by commas
                     */
                    std::string m_activeWeekdays;
                    bool m_activeWeekdaysHasBeenSet;

                    /**
                     * Long-term backup period. weekly - by week, monthly - by month, empty means not enabled.
                     */
                    std::string m_longTermInterval;
                    bool m_longTermIntervalHasBeenSet;

                    /**
                     * Date of long-term backup, week 0-6, month 1-31
                     */
                    std::string m_longTermActiveDays;
                    bool m_longTermActiveDaysHasBeenSet;

                    /**
                     * Long-term backup retention period
                     */
                    int64_t m_longTermExpiredDays;
                    bool m_longTermExpiredDaysHasBeenSet;

                    /**
                     * Incremental backup retention period
                     */
                    int64_t m_oplogExpiredDays;
                    bool m_oplogExpiredDaysHasBeenSet;

                    /**
                     * Backup version. 0 - Old backup method, 1 - Advanced backup.
                     */
                    int64_t m_backupVersion;
                    bool m_backupVersionHasBeenSet;

                    /**
                     * Backup size
                     */
                    BackupTotalSize m_backupTotalSize;
                    bool m_backupTotalSizeHasBeenSet;

                    /**
                     * alarm limit
                     */
                    int64_t m_alertThreshold;
                    bool m_alertThresholdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEBACKUPRULESRESPONSE_H_
