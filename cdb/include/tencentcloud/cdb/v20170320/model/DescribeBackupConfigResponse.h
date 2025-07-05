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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEBACKUPCONFIGRESPONSE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEBACKUPCONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/CommonTimeWindow.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeBackupConfig response structure.
                */
                class DescribeBackupConfigResponse : public AbstractModel
                {
                public:
                    DescribeBackupConfigResponse();
                    ~DescribeBackupConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Earliest start time point of automatic backup, such as 2 (for 2:00 AM). (This field has been disused. You are recommended to use the `BackupTimeWindow` field)
                     * @return StartTimeMin Earliest start time point of automatic backup, such as 2 (for 2:00 AM). (This field has been disused. You are recommended to use the `BackupTimeWindow` field)
                     * 
                     */
                    int64_t GetStartTimeMin() const;

                    /**
                     * 判断参数 StartTimeMin 是否已赋值
                     * @return StartTimeMin 是否已赋值
                     * 
                     */
                    bool StartTimeMinHasBeenSet() const;

                    /**
                     * 获取Latest start time point of automatic backup, such as 6 (for 6:00 AM). (This field has been disused. You are recommended to use the `BackupTimeWindow` field)
                     * @return StartTimeMax Latest start time point of automatic backup, such as 6 (for 6:00 AM). (This field has been disused. You are recommended to use the `BackupTimeWindow` field)
                     * 
                     */
                    int64_t GetStartTimeMax() const;

                    /**
                     * 判断参数 StartTimeMax 是否已赋值
                     * @return StartTimeMax 是否已赋值
                     * 
                     */
                    bool StartTimeMaxHasBeenSet() const;

                    /**
                     * 获取Backup file retention period in days.
                     * @return BackupExpireDays Backup file retention period in days.
                     * 
                     */
                    int64_t GetBackupExpireDays() const;

                    /**
                     * 判断参数 BackupExpireDays 是否已赋值
                     * @return BackupExpireDays 是否已赋值
                     * 
                     */
                    bool BackupExpireDaysHasBeenSet() const;

                    /**
                     * 获取Backup mode. Value range: physical, logical
                     * @return BackupMethod Backup mode. Value range: physical, logical
                     * 
                     */
                    std::string GetBackupMethod() const;

                    /**
                     * 判断参数 BackupMethod 是否已赋值
                     * @return BackupMethod 是否已赋值
                     * 
                     */
                    bool BackupMethodHasBeenSet() const;

                    /**
                     * 获取Binlog file retention period in days.
                     * @return BinlogExpireDays Binlog file retention period in days.
                     * 
                     */
                    int64_t GetBinlogExpireDays() const;

                    /**
                     * 判断参数 BinlogExpireDays 是否已赋值
                     * @return BinlogExpireDays 是否已赋值
                     * 
                     */
                    bool BinlogExpireDaysHasBeenSet() const;

                    /**
                     * 获取Time window for automatic instance backup.
                     * @return BackupTimeWindow Time window for automatic instance backup.
                     * 
                     */
                    CommonTimeWindow GetBackupTimeWindow() const;

                    /**
                     * 判断参数 BackupTimeWindow 是否已赋值
                     * @return BackupTimeWindow 是否已赋值
                     * 
                     */
                    bool BackupTimeWindowHasBeenSet() const;

                    /**
                     * 获取Switch for archive backup retention. Valid values: `off` (disable), `on` (enable). Default value:`off`.
                     * @return EnableBackupPeriodSave Switch for archive backup retention. Valid values: `off` (disable), `on` (enable). Default value:`off`.
                     * 
                     */
                    std::string GetEnableBackupPeriodSave() const;

                    /**
                     * 判断参数 EnableBackupPeriodSave 是否已赋值
                     * @return EnableBackupPeriodSave 是否已赋值
                     * 
                     */
                    bool EnableBackupPeriodSaveHasBeenSet() const;

                    /**
                     * 获取Maximum days of archive backup retention. Valid range: 90-3650. Default value: 1080.
                     * @return BackupPeriodSaveDays Maximum days of archive backup retention. Valid range: 90-3650. Default value: 1080.
                     * 
                     */
                    int64_t GetBackupPeriodSaveDays() const;

                    /**
                     * 判断参数 BackupPeriodSaveDays 是否已赋值
                     * @return BackupPeriodSaveDays 是否已赋值
                     * 
                     */
                    bool BackupPeriodSaveDaysHasBeenSet() const;

                    /**
                     * 获取Archive backup retention period. Valid values: `weekly` (a week), `monthly` (a month), `quarterly` (a quarter), `yearly` (a year). Default value: `monthly`.
                     * @return BackupPeriodSaveInterval Archive backup retention period. Valid values: `weekly` (a week), `monthly` (a month), `quarterly` (a quarter), `yearly` (a year). Default value: `monthly`.
                     * 
                     */
                    std::string GetBackupPeriodSaveInterval() const;

                    /**
                     * 判断参数 BackupPeriodSaveInterval 是否已赋值
                     * @return BackupPeriodSaveInterval 是否已赋值
                     * 
                     */
                    bool BackupPeriodSaveIntervalHasBeenSet() const;

                    /**
                     * 获取Number of archive backups. Minimum value: `1`, Maximum value: Number of non-archive backups in archive backup retention period. Default value: `1`.
                     * @return BackupPeriodSaveCount Number of archive backups. Minimum value: `1`, Maximum value: Number of non-archive backups in archive backup retention period. Default value: `1`.
                     * 
                     */
                    int64_t GetBackupPeriodSaveCount() const;

                    /**
                     * 判断参数 BackupPeriodSaveCount 是否已赋值
                     * @return BackupPeriodSaveCount 是否已赋值
                     * 
                     */
                    bool BackupPeriodSaveCountHasBeenSet() const;

                    /**
                     * 获取The start time in the format: yyyy-mm-dd HH:MM:SS, which is used to enable archive backup retention policy.
                     * @return StartBackupPeriodSaveDate The start time in the format: yyyy-mm-dd HH:MM:SS, which is used to enable archive backup retention policy.
                     * 
                     */
                    std::string GetStartBackupPeriodSaveDate() const;

                    /**
                     * 判断参数 StartBackupPeriodSaveDate 是否已赋值
                     * @return StartBackupPeriodSaveDate 是否已赋值
                     * 
                     */
                    bool StartBackupPeriodSaveDateHasBeenSet() const;

                    /**
                     * 获取Whether to enable the archive backup. Valid values: `off` (disable), `on` (enable). Default value: `off`.
                     * @return EnableBackupArchive Whether to enable the archive backup. Valid values: `off` (disable), `on` (enable). Default value: `off`.
                     * 
                     */
                    std::string GetEnableBackupArchive() const;

                    /**
                     * 判断参数 EnableBackupArchive 是否已赋值
                     * @return EnableBackupArchive 是否已赋值
                     * 
                     */
                    bool EnableBackupArchiveHasBeenSet() const;

                    /**
                     * 获取The period (in days) of how long a data backup is retained before being archived, which falls between 180 days and the number of days from the time it is created until it expires.
                     * @return BackupArchiveDays The period (in days) of how long a data backup is retained before being archived, which falls between 180 days and the number of days from the time it is created until it expires.
                     * 
                     */
                    int64_t GetBackupArchiveDays() const;

                    /**
                     * 判断参数 BackupArchiveDays 是否已赋值
                     * @return BackupArchiveDays 是否已赋值
                     * 
                     */
                    bool BackupArchiveDaysHasBeenSet() const;

                    /**
                     * 获取Whether to enable the archive backup of logs. Valid values: `off` (disable), `on` (enable). Default value: `off`.
                     * @return EnableBinlogArchive Whether to enable the archive backup of logs. Valid values: `off` (disable), `on` (enable). Default value: `off`.
                     * 
                     */
                    std::string GetEnableBinlogArchive() const;

                    /**
                     * 判断参数 EnableBinlogArchive 是否已赋值
                     * @return EnableBinlogArchive 是否已赋值
                     * 
                     */
                    bool EnableBinlogArchiveHasBeenSet() const;

                    /**
                     * 获取The period (in days) of how long a log backup is retained before being archived, which falls between 180 days and the number of days from the time it is created until it expires.
                     * @return BinlogArchiveDays The period (in days) of how long a log backup is retained before being archived, which falls between 180 days and the number of days from the time it is created until it expires.
                     * 
                     */
                    int64_t GetBinlogArchiveDays() const;

                    /**
                     * 判断参数 BinlogArchiveDays 是否已赋值
                     * @return BinlogArchiveDays 是否已赋值
                     * 
                     */
                    bool BinlogArchiveDaysHasBeenSet() const;

                    /**
                     * 获取Whether to enable the standard storage policy for data backup. Valid values: `off` (disable), `on` (enable). Default value: `off`.
                     * @return EnableBackupStandby Whether to enable the standard storage policy for data backup. Valid values: `off` (disable), `on` (enable). Default value: `off`.
                     * 
                     */
                    std::string GetEnableBackupStandby() const;

                    /**
                     * 判断参数 EnableBackupStandby 是否已赋值
                     * @return EnableBackupStandby 是否已赋值
                     * 
                     */
                    bool EnableBackupStandbyHasBeenSet() const;

                    /**
                     * 获取The period (in days) of how long a data backup is retained before switching to standard storage, which falls between 30 days and the number of days from the time it is created until it expires. If the archive backup is enabled, this period cannot be greater than archive backup period.
                     * @return BackupStandbyDays The period (in days) of how long a data backup is retained before switching to standard storage, which falls between 30 days and the number of days from the time it is created until it expires. If the archive backup is enabled, this period cannot be greater than archive backup period.
                     * 
                     */
                    int64_t GetBackupStandbyDays() const;

                    /**
                     * 判断参数 BackupStandbyDays 是否已赋值
                     * @return BackupStandbyDays 是否已赋值
                     * 
                     */
                    bool BackupStandbyDaysHasBeenSet() const;

                    /**
                     * 获取Whether to enable the standard storage policy for log backup. Valid values: `off` (disable), `on` (enable). Default value: `off`.
                     * @return EnableBinlogStandby Whether to enable the standard storage policy for log backup. Valid values: `off` (disable), `on` (enable). Default value: `off`.
                     * 
                     */
                    std::string GetEnableBinlogStandby() const;

                    /**
                     * 判断参数 EnableBinlogStandby 是否已赋值
                     * @return EnableBinlogStandby 是否已赋值
                     * 
                     */
                    bool EnableBinlogStandbyHasBeenSet() const;

                    /**
                     * 获取The period (in days) of how long a log backup is retained before switching to standard storage, which falls between 30 days and the number of days from the time it is created until it expires. If the archive backup is enabled, this period cannot be greater than archive backup period.
                     * @return BinlogStandbyDays The period (in days) of how long a log backup is retained before switching to standard storage, which falls between 30 days and the number of days from the time it is created until it expires. If the archive backup is enabled, this period cannot be greater than archive backup period.
                     * 
                     */
                    int64_t GetBinlogStandbyDays() const;

                    /**
                     * 判断参数 BinlogStandbyDays 是否已赋值
                     * @return BinlogStandbyDays 是否已赋值
                     * 
                     */
                    bool BinlogStandbyDaysHasBeenSet() const;

                private:

                    /**
                     * Earliest start time point of automatic backup, such as 2 (for 2:00 AM). (This field has been disused. You are recommended to use the `BackupTimeWindow` field)
                     */
                    int64_t m_startTimeMin;
                    bool m_startTimeMinHasBeenSet;

                    /**
                     * Latest start time point of automatic backup, such as 6 (for 6:00 AM). (This field has been disused. You are recommended to use the `BackupTimeWindow` field)
                     */
                    int64_t m_startTimeMax;
                    bool m_startTimeMaxHasBeenSet;

                    /**
                     * Backup file retention period in days.
                     */
                    int64_t m_backupExpireDays;
                    bool m_backupExpireDaysHasBeenSet;

                    /**
                     * Backup mode. Value range: physical, logical
                     */
                    std::string m_backupMethod;
                    bool m_backupMethodHasBeenSet;

                    /**
                     * Binlog file retention period in days.
                     */
                    int64_t m_binlogExpireDays;
                    bool m_binlogExpireDaysHasBeenSet;

                    /**
                     * Time window for automatic instance backup.
                     */
                    CommonTimeWindow m_backupTimeWindow;
                    bool m_backupTimeWindowHasBeenSet;

                    /**
                     * Switch for archive backup retention. Valid values: `off` (disable), `on` (enable). Default value:`off`.
                     */
                    std::string m_enableBackupPeriodSave;
                    bool m_enableBackupPeriodSaveHasBeenSet;

                    /**
                     * Maximum days of archive backup retention. Valid range: 90-3650. Default value: 1080.
                     */
                    int64_t m_backupPeriodSaveDays;
                    bool m_backupPeriodSaveDaysHasBeenSet;

                    /**
                     * Archive backup retention period. Valid values: `weekly` (a week), `monthly` (a month), `quarterly` (a quarter), `yearly` (a year). Default value: `monthly`.
                     */
                    std::string m_backupPeriodSaveInterval;
                    bool m_backupPeriodSaveIntervalHasBeenSet;

                    /**
                     * Number of archive backups. Minimum value: `1`, Maximum value: Number of non-archive backups in archive backup retention period. Default value: `1`.
                     */
                    int64_t m_backupPeriodSaveCount;
                    bool m_backupPeriodSaveCountHasBeenSet;

                    /**
                     * The start time in the format: yyyy-mm-dd HH:MM:SS, which is used to enable archive backup retention policy.
                     */
                    std::string m_startBackupPeriodSaveDate;
                    bool m_startBackupPeriodSaveDateHasBeenSet;

                    /**
                     * Whether to enable the archive backup. Valid values: `off` (disable), `on` (enable). Default value: `off`.
                     */
                    std::string m_enableBackupArchive;
                    bool m_enableBackupArchiveHasBeenSet;

                    /**
                     * The period (in days) of how long a data backup is retained before being archived, which falls between 180 days and the number of days from the time it is created until it expires.
                     */
                    int64_t m_backupArchiveDays;
                    bool m_backupArchiveDaysHasBeenSet;

                    /**
                     * Whether to enable the archive backup of logs. Valid values: `off` (disable), `on` (enable). Default value: `off`.
                     */
                    std::string m_enableBinlogArchive;
                    bool m_enableBinlogArchiveHasBeenSet;

                    /**
                     * The period (in days) of how long a log backup is retained before being archived, which falls between 180 days and the number of days from the time it is created until it expires.
                     */
                    int64_t m_binlogArchiveDays;
                    bool m_binlogArchiveDaysHasBeenSet;

                    /**
                     * Whether to enable the standard storage policy for data backup. Valid values: `off` (disable), `on` (enable). Default value: `off`.
                     */
                    std::string m_enableBackupStandby;
                    bool m_enableBackupStandbyHasBeenSet;

                    /**
                     * The period (in days) of how long a data backup is retained before switching to standard storage, which falls between 30 days and the number of days from the time it is created until it expires. If the archive backup is enabled, this period cannot be greater than archive backup period.
                     */
                    int64_t m_backupStandbyDays;
                    bool m_backupStandbyDaysHasBeenSet;

                    /**
                     * Whether to enable the standard storage policy for log backup. Valid values: `off` (disable), `on` (enable). Default value: `off`.
                     */
                    std::string m_enableBinlogStandby;
                    bool m_enableBinlogStandbyHasBeenSet;

                    /**
                     * The period (in days) of how long a log backup is retained before switching to standard storage, which falls between 30 days and the number of days from the time it is created until it expires. If the archive backup is enabled, this period cannot be greater than archive backup period.
                     */
                    int64_t m_binlogStandbyDays;
                    bool m_binlogStandbyDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEBACKUPCONFIGRESPONSE_H_
