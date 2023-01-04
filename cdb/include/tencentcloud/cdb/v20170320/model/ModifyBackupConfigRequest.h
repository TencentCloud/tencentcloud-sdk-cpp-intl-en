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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYBACKUPCONFIGREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYBACKUPCONFIGREQUEST_H_

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
                * ModifyBackupConfig request structure.
                */
                class ModifyBackupConfigRequest : public AbstractModel
                {
                public:
                    ModifyBackupConfigRequest();
                    ~ModifyBackupConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page.
                     * @return InstanceId Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page.
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page.
                     * @param InstanceId Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page.
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Backup file retention period in days. Value range: 7-1830.
                     * @return ExpireDays Backup file retention period in days. Value range: 7-1830.
                     */
                    int64_t GetExpireDays() const;

                    /**
                     * 设置Backup file retention period in days. Value range: 7-1830.
                     * @param ExpireDays Backup file retention period in days. Value range: 7-1830.
                     */
                    void SetExpireDays(const int64_t& _expireDays);

                    /**
                     * 判断参数 ExpireDays 是否已赋值
                     * @return ExpireDays 是否已赋值
                     */
                    bool ExpireDaysHasBeenSet() const;

                    /**
                     * 获取(This parameter will be disused. The `BackupTimeWindow` parameter is recommended.) Backup time range in the format of 02:00-06:00, with the start time and end time on the hour. Valid values: 00:00-12:00, 02:00-06:00, 06:00-10:00, 10:00-14:00, 14:00-18:00, 18:00-22:00, 22:00-02:00.
                     * @return StartTime (This parameter will be disused. The `BackupTimeWindow` parameter is recommended.) Backup time range in the format of 02:00-06:00, with the start time and end time on the hour. Valid values: 00:00-12:00, 02:00-06:00, 06:00-10:00, 10:00-14:00, 14:00-18:00, 18:00-22:00, 22:00-02:00.
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置(This parameter will be disused. The `BackupTimeWindow` parameter is recommended.) Backup time range in the format of 02:00-06:00, with the start time and end time on the hour. Valid values: 00:00-12:00, 02:00-06:00, 06:00-10:00, 10:00-14:00, 14:00-18:00, 18:00-22:00, 22:00-02:00.
                     * @param StartTime (This parameter will be disused. The `BackupTimeWindow` parameter is recommended.) Backup time range in the format of 02:00-06:00, with the start time and end time on the hour. Valid values: 00:00-12:00, 02:00-06:00, 06:00-10:00, 10:00-14:00, 14:00-18:00, 18:00-22:00, 22:00-02:00.
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Automatic backup mode. Only `physical` (physical cold backup) is supported
                     * @return BackupMethod Automatic backup mode. Only `physical` (physical cold backup) is supported
                     */
                    std::string GetBackupMethod() const;

                    /**
                     * 设置Automatic backup mode. Only `physical` (physical cold backup) is supported
                     * @param BackupMethod Automatic backup mode. Only `physical` (physical cold backup) is supported
                     */
                    void SetBackupMethod(const std::string& _backupMethod);

                    /**
                     * 判断参数 BackupMethod 是否已赋值
                     * @return BackupMethod 是否已赋值
                     */
                    bool BackupMethodHasBeenSet() const;

                    /**
                     * 获取Binlog retention period in days. Value range: 7-1830. It can’t be greater than the retention period of backup files.
                     * @return BinlogExpireDays Binlog retention period in days. Value range: 7-1830. It can’t be greater than the retention period of backup files.
                     */
                    int64_t GetBinlogExpireDays() const;

                    /**
                     * 设置Binlog retention period in days. Value range: 7-1830. It can’t be greater than the retention period of backup files.
                     * @param BinlogExpireDays Binlog retention period in days. Value range: 7-1830. It can’t be greater than the retention period of backup files.
                     */
                    void SetBinlogExpireDays(const int64_t& _binlogExpireDays);

                    /**
                     * 判断参数 BinlogExpireDays 是否已赋值
                     * @return BinlogExpireDays 是否已赋值
                     */
                    bool BinlogExpireDaysHasBeenSet() const;

                    /**
                     * 获取Backup time window; for example, to set up backup between 10:00 and 14:00 on every Tuesday and Sunday, you should set this parameter as follows: {"Monday": "", "Tuesday": "10:00-14:00", "Wednesday": "", "Thursday": "", "Friday": "", "Saturday": "", "Sunday": "10:00-14:00"} (Note: You can set up backup on different days, but the backup time windows need to be the same. If this field is set, the `StartTime` field will be ignored)
                     * @return BackupTimeWindow Backup time window; for example, to set up backup between 10:00 and 14:00 on every Tuesday and Sunday, you should set this parameter as follows: {"Monday": "", "Tuesday": "10:00-14:00", "Wednesday": "", "Thursday": "", "Friday": "", "Saturday": "", "Sunday": "10:00-14:00"} (Note: You can set up backup on different days, but the backup time windows need to be the same. If this field is set, the `StartTime` field will be ignored)
                     */
                    CommonTimeWindow GetBackupTimeWindow() const;

                    /**
                     * 设置Backup time window; for example, to set up backup between 10:00 and 14:00 on every Tuesday and Sunday, you should set this parameter as follows: {"Monday": "", "Tuesday": "10:00-14:00", "Wednesday": "", "Thursday": "", "Friday": "", "Saturday": "", "Sunday": "10:00-14:00"} (Note: You can set up backup on different days, but the backup time windows need to be the same. If this field is set, the `StartTime` field will be ignored)
                     * @param BackupTimeWindow Backup time window; for example, to set up backup between 10:00 and 14:00 on every Tuesday and Sunday, you should set this parameter as follows: {"Monday": "", "Tuesday": "10:00-14:00", "Wednesday": "", "Thursday": "", "Friday": "", "Saturday": "", "Sunday": "10:00-14:00"} (Note: You can set up backup on different days, but the backup time windows need to be the same. If this field is set, the `StartTime` field will be ignored)
                     */
                    void SetBackupTimeWindow(const CommonTimeWindow& _backupTimeWindow);

                    /**
                     * 判断参数 BackupTimeWindow 是否已赋值
                     * @return BackupTimeWindow 是否已赋值
                     */
                    bool BackupTimeWindowHasBeenSet() const;

                    /**
                     * 获取Switch for periodic archive. Valid values: `off` (disable), `on` (enable). Default value:`off`. When you enable the periodic archive policy for the first time, you need to enter the `BackupPeriodSaveDays`, `BackupPeriodSaveInterval`, `BackupPeriodSaveCount`, and `StartBackupPeriodSaveDate` parameters; otherwise, the policy will not take effect.
                     * @return EnableBackupPeriodSave Switch for periodic archive. Valid values: `off` (disable), `on` (enable). Default value:`off`. When you enable the periodic archive policy for the first time, you need to enter the `BackupPeriodSaveDays`, `BackupPeriodSaveInterval`, `BackupPeriodSaveCount`, and `StartBackupPeriodSaveDate` parameters; otherwise, the policy will not take effect.
                     */
                    std::string GetEnableBackupPeriodSave() const;

                    /**
                     * 设置Switch for periodic archive. Valid values: `off` (disable), `on` (enable). Default value:`off`. When you enable the periodic archive policy for the first time, you need to enter the `BackupPeriodSaveDays`, `BackupPeriodSaveInterval`, `BackupPeriodSaveCount`, and `StartBackupPeriodSaveDate` parameters; otherwise, the policy will not take effect.
                     * @param EnableBackupPeriodSave Switch for periodic archive. Valid values: `off` (disable), `on` (enable). Default value:`off`. When you enable the periodic archive policy for the first time, you need to enter the `BackupPeriodSaveDays`, `BackupPeriodSaveInterval`, `BackupPeriodSaveCount`, and `StartBackupPeriodSaveDate` parameters; otherwise, the policy will not take effect.
                     */
                    void SetEnableBackupPeriodSave(const std::string& _enableBackupPeriodSave);

                    /**
                     * 判断参数 EnableBackupPeriodSave 是否已赋值
                     * @return EnableBackupPeriodSave 是否已赋值
                     */
                    bool EnableBackupPeriodSaveHasBeenSet() const;

                    /**
                     * 获取Switch for long-term backup retention (This field can be ignored, for its feature hasn’t been launched). Valid values: `off` (disable), `on` (enable). Default value: `off`. Once enabled, the parameters (BackupPeriodSaveDays, BackupPeriodSaveInterval, and BackupPeriodSaveCount) will be invalid.
                     * @return EnableBackupPeriodLongTermSave Switch for long-term backup retention (This field can be ignored, for its feature hasn’t been launched). Valid values: `off` (disable), `on` (enable). Default value: `off`. Once enabled, the parameters (BackupPeriodSaveDays, BackupPeriodSaveInterval, and BackupPeriodSaveCount) will be invalid.
                     */
                    std::string GetEnableBackupPeriodLongTermSave() const;

                    /**
                     * 设置Switch for long-term backup retention (This field can be ignored, for its feature hasn’t been launched). Valid values: `off` (disable), `on` (enable). Default value: `off`. Once enabled, the parameters (BackupPeriodSaveDays, BackupPeriodSaveInterval, and BackupPeriodSaveCount) will be invalid.
                     * @param EnableBackupPeriodLongTermSave Switch for long-term backup retention (This field can be ignored, for its feature hasn’t been launched). Valid values: `off` (disable), `on` (enable). Default value: `off`. Once enabled, the parameters (BackupPeriodSaveDays, BackupPeriodSaveInterval, and BackupPeriodSaveCount) will be invalid.
                     */
                    void SetEnableBackupPeriodLongTermSave(const std::string& _enableBackupPeriodLongTermSave);

                    /**
                     * 判断参数 EnableBackupPeriodLongTermSave 是否已赋值
                     * @return EnableBackupPeriodLongTermSave 是否已赋值
                     */
                    bool EnableBackupPeriodLongTermSaveHasBeenSet() const;

                    /**
                     * 获取Maximum days of archive backup retention. Valid range: 90-3650. Default value: 1080.
                     * @return BackupPeriodSaveDays Maximum days of archive backup retention. Valid range: 90-3650. Default value: 1080.
                     */
                    int64_t GetBackupPeriodSaveDays() const;

                    /**
                     * 设置Maximum days of archive backup retention. Valid range: 90-3650. Default value: 1080.
                     * @param BackupPeriodSaveDays Maximum days of archive backup retention. Valid range: 90-3650. Default value: 1080.
                     */
                    void SetBackupPeriodSaveDays(const int64_t& _backupPeriodSaveDays);

                    /**
                     * 判断参数 BackupPeriodSaveDays 是否已赋值
                     * @return BackupPeriodSaveDays 是否已赋值
                     */
                    bool BackupPeriodSaveDaysHasBeenSet() const;

                    /**
                     * 获取Archive backup retention period. Valid values: `weekly` (a week), `monthly` (a month), `quarterly` (a quarter), `yearly` (a year). Default value: `monthly`.
                     * @return BackupPeriodSaveInterval Archive backup retention period. Valid values: `weekly` (a week), `monthly` (a month), `quarterly` (a quarter), `yearly` (a year). Default value: `monthly`.
                     */
                    std::string GetBackupPeriodSaveInterval() const;

                    /**
                     * 设置Archive backup retention period. Valid values: `weekly` (a week), `monthly` (a month), `quarterly` (a quarter), `yearly` (a year). Default value: `monthly`.
                     * @param BackupPeriodSaveInterval Archive backup retention period. Valid values: `weekly` (a week), `monthly` (a month), `quarterly` (a quarter), `yearly` (a year). Default value: `monthly`.
                     */
                    void SetBackupPeriodSaveInterval(const std::string& _backupPeriodSaveInterval);

                    /**
                     * 判断参数 BackupPeriodSaveInterval 是否已赋值
                     * @return BackupPeriodSaveInterval 是否已赋值
                     */
                    bool BackupPeriodSaveIntervalHasBeenSet() const;

                    /**
                     * 获取Number of archive backups. Minimum value: `1`, Maximum value: Number of non-archive backups in archive backup retention period. Default value: `1`.
                     * @return BackupPeriodSaveCount Number of archive backups. Minimum value: `1`, Maximum value: Number of non-archive backups in archive backup retention period. Default value: `1`.
                     */
                    int64_t GetBackupPeriodSaveCount() const;

                    /**
                     * 设置Number of archive backups. Minimum value: `1`, Maximum value: Number of non-archive backups in archive backup retention period. Default value: `1`.
                     * @param BackupPeriodSaveCount Number of archive backups. Minimum value: `1`, Maximum value: Number of non-archive backups in archive backup retention period. Default value: `1`.
                     */
                    void SetBackupPeriodSaveCount(const int64_t& _backupPeriodSaveCount);

                    /**
                     * 判断参数 BackupPeriodSaveCount 是否已赋值
                     * @return BackupPeriodSaveCount 是否已赋值
                     */
                    bool BackupPeriodSaveCountHasBeenSet() const;

                    /**
                     * 获取The start time in the format of yyyy-mm-dd HH:MM:SS, which is used to enable archive backup retention policy.
                     * @return StartBackupPeriodSaveDate The start time in the format of yyyy-mm-dd HH:MM:SS, which is used to enable archive backup retention policy.
                     */
                    std::string GetStartBackupPeriodSaveDate() const;

                    /**
                     * 设置The start time in the format of yyyy-mm-dd HH:MM:SS, which is used to enable archive backup retention policy.
                     * @param StartBackupPeriodSaveDate The start time in the format of yyyy-mm-dd HH:MM:SS, which is used to enable archive backup retention policy.
                     */
                    void SetStartBackupPeriodSaveDate(const std::string& _startBackupPeriodSaveDate);

                    /**
                     * 判断参数 StartBackupPeriodSaveDate 是否已赋值
                     * @return StartBackupPeriodSaveDate 是否已赋值
                     */
                    bool StartBackupPeriodSaveDateHasBeenSet() const;

                    /**
                     * 获取Whether to enable the archive backup. Valid values: `off` (disable), `on` (enable). Default value: `off`.
                     * @return EnableBackupArchive Whether to enable the archive backup. Valid values: `off` (disable), `on` (enable). Default value: `off`.
                     */
                    std::string GetEnableBackupArchive() const;

                    /**
                     * 设置Whether to enable the archive backup. Valid values: `off` (disable), `on` (enable). Default value: `off`.
                     * @param EnableBackupArchive Whether to enable the archive backup. Valid values: `off` (disable), `on` (enable). Default value: `off`.
                     */
                    void SetEnableBackupArchive(const std::string& _enableBackupArchive);

                    /**
                     * 判断参数 EnableBackupArchive 是否已赋值
                     * @return EnableBackupArchive 是否已赋值
                     */
                    bool EnableBackupArchiveHasBeenSet() const;

                    /**
                     * 获取The period (in days) of how long a data backup is retained before being archived, which falls between 180 days and the number of days from the time it is created until it expires.
                     * @return BackupArchiveDays The period (in days) of how long a data backup is retained before being archived, which falls between 180 days and the number of days from the time it is created until it expires.
                     */
                    int64_t GetBackupArchiveDays() const;

                    /**
                     * 设置The period (in days) of how long a data backup is retained before being archived, which falls between 180 days and the number of days from the time it is created until it expires.
                     * @param BackupArchiveDays The period (in days) of how long a data backup is retained before being archived, which falls between 180 days and the number of days from the time it is created until it expires.
                     */
                    void SetBackupArchiveDays(const int64_t& _backupArchiveDays);

                    /**
                     * 判断参数 BackupArchiveDays 是否已赋值
                     * @return BackupArchiveDays 是否已赋值
                     */
                    bool BackupArchiveDaysHasBeenSet() const;

                    /**
                     * 获取The period (in days) of how long a log backup is retained before being archived, which falls between 180 days and the number of days from the time it is created until it expires.
                     * @return BinlogArchiveDays The period (in days) of how long a log backup is retained before being archived, which falls between 180 days and the number of days from the time it is created until it expires.
                     */
                    int64_t GetBinlogArchiveDays() const;

                    /**
                     * 设置The period (in days) of how long a log backup is retained before being archived, which falls between 180 days and the number of days from the time it is created until it expires.
                     * @param BinlogArchiveDays The period (in days) of how long a log backup is retained before being archived, which falls between 180 days and the number of days from the time it is created until it expires.
                     */
                    void SetBinlogArchiveDays(const int64_t& _binlogArchiveDays);

                    /**
                     * 判断参数 BinlogArchiveDays 是否已赋值
                     * @return BinlogArchiveDays 是否已赋值
                     */
                    bool BinlogArchiveDaysHasBeenSet() const;

                    /**
                     * 获取Whether to enable the archive backup of the log. Valid values: `off` (disable), `on` (enable). Default value: `off`.
                     * @return EnableBinlogArchive Whether to enable the archive backup of the log. Valid values: `off` (disable), `on` (enable). Default value: `off`.
                     */
                    std::string GetEnableBinlogArchive() const;

                    /**
                     * 设置Whether to enable the archive backup of the log. Valid values: `off` (disable), `on` (enable). Default value: `off`.
                     * @param EnableBinlogArchive Whether to enable the archive backup of the log. Valid values: `off` (disable), `on` (enable). Default value: `off`.
                     */
                    void SetEnableBinlogArchive(const std::string& _enableBinlogArchive);

                    /**
                     * 判断参数 EnableBinlogArchive 是否已赋值
                     * @return EnableBinlogArchive 是否已赋值
                     */
                    bool EnableBinlogArchiveHasBeenSet() const;

                    /**
                     * 获取Whether to enable the standard storage policy for data backup. Valid values: `off` (disable), `on` (enable). Default value: `off`.
                     * @return EnableBackupStandby Whether to enable the standard storage policy for data backup. Valid values: `off` (disable), `on` (enable). Default value: `off`.
                     */
                    std::string GetEnableBackupStandby() const;

                    /**
                     * 设置Whether to enable the standard storage policy for data backup. Valid values: `off` (disable), `on` (enable). Default value: `off`.
                     * @param EnableBackupStandby Whether to enable the standard storage policy for data backup. Valid values: `off` (disable), `on` (enable). Default value: `off`.
                     */
                    void SetEnableBackupStandby(const std::string& _enableBackupStandby);

                    /**
                     * 判断参数 EnableBackupStandby 是否已赋值
                     * @return EnableBackupStandby 是否已赋值
                     */
                    bool EnableBackupStandbyHasBeenSet() const;

                    /**
                     * 获取The period (in days) of how long a data backup is retained before switching to standard storage, which falls between 30 days and the number of days from the time it is created until it expires. If the archive backup is enabled, this period cannot be greater than archive backup period.
                     * @return BackupStandbyDays The period (in days) of how long a data backup is retained before switching to standard storage, which falls between 30 days and the number of days from the time it is created until it expires. If the archive backup is enabled, this period cannot be greater than archive backup period.
                     */
                    int64_t GetBackupStandbyDays() const;

                    /**
                     * 设置The period (in days) of how long a data backup is retained before switching to standard storage, which falls between 30 days and the number of days from the time it is created until it expires. If the archive backup is enabled, this period cannot be greater than archive backup period.
                     * @param BackupStandbyDays The period (in days) of how long a data backup is retained before switching to standard storage, which falls between 30 days and the number of days from the time it is created until it expires. If the archive backup is enabled, this period cannot be greater than archive backup period.
                     */
                    void SetBackupStandbyDays(const int64_t& _backupStandbyDays);

                    /**
                     * 判断参数 BackupStandbyDays 是否已赋值
                     * @return BackupStandbyDays 是否已赋值
                     */
                    bool BackupStandbyDaysHasBeenSet() const;

                    /**
                     * 获取Whether to enable the standard storage policy for log backup. Valid values: `off` (disable), `on` (enable). Default value: `off`.
                     * @return EnableBinlogStandby Whether to enable the standard storage policy for log backup. Valid values: `off` (disable), `on` (enable). Default value: `off`.
                     */
                    std::string GetEnableBinlogStandby() const;

                    /**
                     * 设置Whether to enable the standard storage policy for log backup. Valid values: `off` (disable), `on` (enable). Default value: `off`.
                     * @param EnableBinlogStandby Whether to enable the standard storage policy for log backup. Valid values: `off` (disable), `on` (enable). Default value: `off`.
                     */
                    void SetEnableBinlogStandby(const std::string& _enableBinlogStandby);

                    /**
                     * 判断参数 EnableBinlogStandby 是否已赋值
                     * @return EnableBinlogStandby 是否已赋值
                     */
                    bool EnableBinlogStandbyHasBeenSet() const;

                    /**
                     * 获取The period (in days) of how long a log backup is retained before switching to standard storage, which falls between 30 days and the number of days from the time it is created until it expires. If the archive backup is enabled, this period cannot be greater than archive backup period.
                     * @return BinlogStandbyDays The period (in days) of how long a log backup is retained before switching to standard storage, which falls between 30 days and the number of days from the time it is created until it expires. If the archive backup is enabled, this period cannot be greater than archive backup period.
                     */
                    int64_t GetBinlogStandbyDays() const;

                    /**
                     * 设置The period (in days) of how long a log backup is retained before switching to standard storage, which falls between 30 days and the number of days from the time it is created until it expires. If the archive backup is enabled, this period cannot be greater than archive backup period.
                     * @param BinlogStandbyDays The period (in days) of how long a log backup is retained before switching to standard storage, which falls between 30 days and the number of days from the time it is created until it expires. If the archive backup is enabled, this period cannot be greater than archive backup period.
                     */
                    void SetBinlogStandbyDays(const int64_t& _binlogStandbyDays);

                    /**
                     * 判断参数 BinlogStandbyDays 是否已赋值
                     * @return BinlogStandbyDays 是否已赋值
                     */
                    bool BinlogStandbyDaysHasBeenSet() const;

                private:

                    /**
                     * Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Backup file retention period in days. Value range: 7-1830.
                     */
                    int64_t m_expireDays;
                    bool m_expireDaysHasBeenSet;

                    /**
                     * (This parameter will be disused. The `BackupTimeWindow` parameter is recommended.) Backup time range in the format of 02:00-06:00, with the start time and end time on the hour. Valid values: 00:00-12:00, 02:00-06:00, 06:00-10:00, 10:00-14:00, 14:00-18:00, 18:00-22:00, 22:00-02:00.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Automatic backup mode. Only `physical` (physical cold backup) is supported
                     */
                    std::string m_backupMethod;
                    bool m_backupMethodHasBeenSet;

                    /**
                     * Binlog retention period in days. Value range: 7-1830. It can’t be greater than the retention period of backup files.
                     */
                    int64_t m_binlogExpireDays;
                    bool m_binlogExpireDaysHasBeenSet;

                    /**
                     * Backup time window; for example, to set up backup between 10:00 and 14:00 on every Tuesday and Sunday, you should set this parameter as follows: {"Monday": "", "Tuesday": "10:00-14:00", "Wednesday": "", "Thursday": "", "Friday": "", "Saturday": "", "Sunday": "10:00-14:00"} (Note: You can set up backup on different days, but the backup time windows need to be the same. If this field is set, the `StartTime` field will be ignored)
                     */
                    CommonTimeWindow m_backupTimeWindow;
                    bool m_backupTimeWindowHasBeenSet;

                    /**
                     * Switch for periodic archive. Valid values: `off` (disable), `on` (enable). Default value:`off`. When you enable the periodic archive policy for the first time, you need to enter the `BackupPeriodSaveDays`, `BackupPeriodSaveInterval`, `BackupPeriodSaveCount`, and `StartBackupPeriodSaveDate` parameters; otherwise, the policy will not take effect.
                     */
                    std::string m_enableBackupPeriodSave;
                    bool m_enableBackupPeriodSaveHasBeenSet;

                    /**
                     * Switch for long-term backup retention (This field can be ignored, for its feature hasn’t been launched). Valid values: `off` (disable), `on` (enable). Default value: `off`. Once enabled, the parameters (BackupPeriodSaveDays, BackupPeriodSaveInterval, and BackupPeriodSaveCount) will be invalid.
                     */
                    std::string m_enableBackupPeriodLongTermSave;
                    bool m_enableBackupPeriodLongTermSaveHasBeenSet;

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
                     * The start time in the format of yyyy-mm-dd HH:MM:SS, which is used to enable archive backup retention policy.
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
                     * The period (in days) of how long a log backup is retained before being archived, which falls between 180 days and the number of days from the time it is created until it expires.
                     */
                    int64_t m_binlogArchiveDays;
                    bool m_binlogArchiveDaysHasBeenSet;

                    /**
                     * Whether to enable the archive backup of the log. Valid values: `off` (disable), `on` (enable). Default value: `off`.
                     */
                    std::string m_enableBinlogArchive;
                    bool m_enableBinlogArchiveHasBeenSet;

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

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYBACKUPCONFIGREQUEST_H_
