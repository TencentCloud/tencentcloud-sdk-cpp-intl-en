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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYBACKUPSTRATEGYREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYBACKUPSTRATEGYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * ModifyBackupStrategy request structure.
                */
                class ModifyBackupStrategyRequest : public AbstractModel
                {
                public:
                    ModifyBackupStrategyRequest();
                    ~ModifyBackupStrategyRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Backup type. Valid values: `weekly` (when length(BackupDay) <=7 && length(BackupDay) >=2), `daily` (when length(BackupDay)=1). Default value: `daily`.
                     * @return BackupType Backup type. Valid values: `weekly` (when length(BackupDay) <=7 && length(BackupDay) >=2), `daily` (when length(BackupDay)=1). Default value: `daily`.
                     * 
                     */
                    std::string GetBackupType() const;

                    /**
                     * 设置Backup type. Valid values: `weekly` (when length(BackupDay) <=7 && length(BackupDay) >=2), `daily` (when length(BackupDay)=1). Default value: `daily`.
                     * @param _backupType Backup type. Valid values: `weekly` (when length(BackupDay) <=7 && length(BackupDay) >=2), `daily` (when length(BackupDay)=1). Default value: `daily`.
                     * 
                     */
                    void SetBackupType(const std::string& _backupType);

                    /**
                     * 判断参数 BackupType 是否已赋值
                     * @return BackupType 是否已赋值
                     * 
                     */
                    bool BackupTypeHasBeenSet() const;

                    /**
                     * 获取Backup time. Value range: an integer from 0 to 23.
                     * @return BackupTime Backup time. Value range: an integer from 0 to 23.
                     * 
                     */
                    uint64_t GetBackupTime() const;

                    /**
                     * 设置Backup time. Value range: an integer from 0 to 23.
                     * @param _backupTime Backup time. Value range: an integer from 0 to 23.
                     * 
                     */
                    void SetBackupTime(const uint64_t& _backupTime);

                    /**
                     * 判断参数 BackupTime 是否已赋值
                     * @return BackupTime 是否已赋值
                     * 
                     */
                    bool BackupTimeHasBeenSet() const;

                    /**
                     * 获取Backup interval in days when the `BackupType` is `daily`. Valid value: 1.
                     * @return BackupDay Backup interval in days when the `BackupType` is `daily`. Valid value: 1.
                     * 
                     */
                    uint64_t GetBackupDay() const;

                    /**
                     * 设置Backup interval in days when the `BackupType` is `daily`. Valid value: 1.
                     * @param _backupDay Backup interval in days when the `BackupType` is `daily`. Valid value: 1.
                     * 
                     */
                    void SetBackupDay(const uint64_t& _backupDay);

                    /**
                     * 判断参数 BackupDay 是否已赋值
                     * @return BackupDay 是否已赋值
                     * 
                     */
                    bool BackupDayHasBeenSet() const;

                    /**
                     * 获取Backup mode. Valid values: `master_pkg` (archive the backup files of the primary node), `master_no_pkg` (do not archive the backup files of the primary node), `slave_pkg` (archive the backup files of the replica node), `slave_no_pkg` (do not archive the backup files of the replica node). Backup files of the replica node are supported only when Always On disaster recovery is enabled.
                     * @return BackupModel Backup mode. Valid values: `master_pkg` (archive the backup files of the primary node), `master_no_pkg` (do not archive the backup files of the primary node), `slave_pkg` (archive the backup files of the replica node), `slave_no_pkg` (do not archive the backup files of the replica node). Backup files of the replica node are supported only when Always On disaster recovery is enabled.
                     * 
                     */
                    std::string GetBackupModel() const;

                    /**
                     * 设置Backup mode. Valid values: `master_pkg` (archive the backup files of the primary node), `master_no_pkg` (do not archive the backup files of the primary node), `slave_pkg` (archive the backup files of the replica node), `slave_no_pkg` (do not archive the backup files of the replica node). Backup files of the replica node are supported only when Always On disaster recovery is enabled.
                     * @param _backupModel Backup mode. Valid values: `master_pkg` (archive the backup files of the primary node), `master_no_pkg` (do not archive the backup files of the primary node), `slave_pkg` (archive the backup files of the replica node), `slave_no_pkg` (do not archive the backup files of the replica node). Backup files of the replica node are supported only when Always On disaster recovery is enabled.
                     * 
                     */
                    void SetBackupModel(const std::string& _backupModel);

                    /**
                     * 判断参数 BackupModel 是否已赋值
                     * @return BackupModel 是否已赋值
                     * 
                     */
                    bool BackupModelHasBeenSet() const;

                    /**
                     * 获取The days of the week on which backup will be performed when "BackupType" is `weekly`. If data backup retention period is less than 7 days, the values will be 1-7, indicating that backup will be performed everyday by default; if data backup retention period is greater than or equal to 7 days, the values will be at least any two days, indicating that backup will be performed at least twice in a week by default.
                     * @return BackupCycle The days of the week on which backup will be performed when "BackupType" is `weekly`. If data backup retention period is less than 7 days, the values will be 1-7, indicating that backup will be performed everyday by default; if data backup retention period is greater than or equal to 7 days, the values will be at least any two days, indicating that backup will be performed at least twice in a week by default.
                     * 
                     */
                    std::vector<uint64_t> GetBackupCycle() const;

                    /**
                     * 设置The days of the week on which backup will be performed when "BackupType" is `weekly`. If data backup retention period is less than 7 days, the values will be 1-7, indicating that backup will be performed everyday by default; if data backup retention period is greater than or equal to 7 days, the values will be at least any two days, indicating that backup will be performed at least twice in a week by default.
                     * @param _backupCycle The days of the week on which backup will be performed when "BackupType" is `weekly`. If data backup retention period is less than 7 days, the values will be 1-7, indicating that backup will be performed everyday by default; if data backup retention period is greater than or equal to 7 days, the values will be at least any two days, indicating that backup will be performed at least twice in a week by default.
                     * 
                     */
                    void SetBackupCycle(const std::vector<uint64_t>& _backupCycle);

                    /**
                     * 判断参数 BackupCycle 是否已赋值
                     * @return BackupCycle 是否已赋值
                     * 
                     */
                    bool BackupCycleHasBeenSet() const;

                    /**
                     * 获取Data (log) backup retention period. Value range: 3-1830 days, default value: 7 days.
                     * @return BackupSaveDays Data (log) backup retention period. Value range: 3-1830 days, default value: 7 days.
                     * 
                     */
                    uint64_t GetBackupSaveDays() const;

                    /**
                     * 设置Data (log) backup retention period. Value range: 3-1830 days, default value: 7 days.
                     * @param _backupSaveDays Data (log) backup retention period. Value range: 3-1830 days, default value: 7 days.
                     * 
                     */
                    void SetBackupSaveDays(const uint64_t& _backupSaveDays);

                    /**
                     * 判断参数 BackupSaveDays 是否已赋值
                     * @return BackupSaveDays 是否已赋值
                     * 
                     */
                    bool BackupSaveDaysHasBeenSet() const;

                    /**
                     * 获取Archive backup status. Valid values: `enable` (enabled); `disable` (disabled). Default value: `disable`.
                     * @return RegularBackupEnable Archive backup status. Valid values: `enable` (enabled); `disable` (disabled). Default value: `disable`.
                     * 
                     */
                    std::string GetRegularBackupEnable() const;

                    /**
                     * 设置Archive backup status. Valid values: `enable` (enabled); `disable` (disabled). Default value: `disable`.
                     * @param _regularBackupEnable Archive backup status. Valid values: `enable` (enabled); `disable` (disabled). Default value: `disable`.
                     * 
                     */
                    void SetRegularBackupEnable(const std::string& _regularBackupEnable);

                    /**
                     * 判断参数 RegularBackupEnable 是否已赋值
                     * @return RegularBackupEnable 是否已赋值
                     * 
                     */
                    bool RegularBackupEnableHasBeenSet() const;

                    /**
                     * 获取Archive backup retention days. Value range: 90-3650 days. Default value: 365 days.
                     * @return RegularBackupSaveDays Archive backup retention days. Value range: 90-3650 days. Default value: 365 days.
                     * 
                     */
                    uint64_t GetRegularBackupSaveDays() const;

                    /**
                     * 设置Archive backup retention days. Value range: 90-3650 days. Default value: 365 days.
                     * @param _regularBackupSaveDays Archive backup retention days. Value range: 90-3650 days. Default value: 365 days.
                     * 
                     */
                    void SetRegularBackupSaveDays(const uint64_t& _regularBackupSaveDays);

                    /**
                     * 判断参数 RegularBackupSaveDays 是否已赋值
                     * @return RegularBackupSaveDays 是否已赋值
                     * 
                     */
                    bool RegularBackupSaveDaysHasBeenSet() const;

                    /**
                     * 获取Archive backup policy. Valid values: `years` (yearly); `quarters (quarterly); `months` (monthly); Default value: `months`.
                     * @return RegularBackupStrategy Archive backup policy. Valid values: `years` (yearly); `quarters (quarterly); `months` (monthly); Default value: `months`.
                     * 
                     */
                    std::string GetRegularBackupStrategy() const;

                    /**
                     * 设置Archive backup policy. Valid values: `years` (yearly); `quarters (quarterly); `months` (monthly); Default value: `months`.
                     * @param _regularBackupStrategy Archive backup policy. Valid values: `years` (yearly); `quarters (quarterly); `months` (monthly); Default value: `months`.
                     * 
                     */
                    void SetRegularBackupStrategy(const std::string& _regularBackupStrategy);

                    /**
                     * 判断参数 RegularBackupStrategy 是否已赋值
                     * @return RegularBackupStrategy 是否已赋值
                     * 
                     */
                    bool RegularBackupStrategyHasBeenSet() const;

                    /**
                     * 获取The number of retained archive backups. Default value: `1`.
                     * @return RegularBackupCounts The number of retained archive backups. Default value: `1`.
                     * 
                     */
                    uint64_t GetRegularBackupCounts() const;

                    /**
                     * 设置The number of retained archive backups. Default value: `1`.
                     * @param _regularBackupCounts The number of retained archive backups. Default value: `1`.
                     * 
                     */
                    void SetRegularBackupCounts(const uint64_t& _regularBackupCounts);

                    /**
                     * 判断参数 RegularBackupCounts 是否已赋值
                     * @return RegularBackupCounts 是否已赋值
                     * 
                     */
                    bool RegularBackupCountsHasBeenSet() const;

                    /**
                     * 获取Archive backup start date in YYYY-MM-DD format, which is the current time by default.
                     * @return RegularBackupStartTime Archive backup start date in YYYY-MM-DD format, which is the current time by default.
                     * 
                     */
                    std::string GetRegularBackupStartTime() const;

                    /**
                     * 设置Archive backup start date in YYYY-MM-DD format, which is the current time by default.
                     * @param _regularBackupStartTime Archive backup start date in YYYY-MM-DD format, which is the current time by default.
                     * 
                     */
                    void SetRegularBackupStartTime(const std::string& _regularBackupStartTime);

                    /**
                     * 判断参数 RegularBackupStartTime 是否已赋值
                     * @return RegularBackupStartTime 是否已赋值
                     * 
                     */
                    bool RegularBackupStartTimeHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Backup type. Valid values: `weekly` (when length(BackupDay) <=7 && length(BackupDay) >=2), `daily` (when length(BackupDay)=1). Default value: `daily`.
                     */
                    std::string m_backupType;
                    bool m_backupTypeHasBeenSet;

                    /**
                     * Backup time. Value range: an integer from 0 to 23.
                     */
                    uint64_t m_backupTime;
                    bool m_backupTimeHasBeenSet;

                    /**
                     * Backup interval in days when the `BackupType` is `daily`. Valid value: 1.
                     */
                    uint64_t m_backupDay;
                    bool m_backupDayHasBeenSet;

                    /**
                     * Backup mode. Valid values: `master_pkg` (archive the backup files of the primary node), `master_no_pkg` (do not archive the backup files of the primary node), `slave_pkg` (archive the backup files of the replica node), `slave_no_pkg` (do not archive the backup files of the replica node). Backup files of the replica node are supported only when Always On disaster recovery is enabled.
                     */
                    std::string m_backupModel;
                    bool m_backupModelHasBeenSet;

                    /**
                     * The days of the week on which backup will be performed when "BackupType" is `weekly`. If data backup retention period is less than 7 days, the values will be 1-7, indicating that backup will be performed everyday by default; if data backup retention period is greater than or equal to 7 days, the values will be at least any two days, indicating that backup will be performed at least twice in a week by default.
                     */
                    std::vector<uint64_t> m_backupCycle;
                    bool m_backupCycleHasBeenSet;

                    /**
                     * Data (log) backup retention period. Value range: 3-1830 days, default value: 7 days.
                     */
                    uint64_t m_backupSaveDays;
                    bool m_backupSaveDaysHasBeenSet;

                    /**
                     * Archive backup status. Valid values: `enable` (enabled); `disable` (disabled). Default value: `disable`.
                     */
                    std::string m_regularBackupEnable;
                    bool m_regularBackupEnableHasBeenSet;

                    /**
                     * Archive backup retention days. Value range: 90-3650 days. Default value: 365 days.
                     */
                    uint64_t m_regularBackupSaveDays;
                    bool m_regularBackupSaveDaysHasBeenSet;

                    /**
                     * Archive backup policy. Valid values: `years` (yearly); `quarters (quarterly); `months` (monthly); Default value: `months`.
                     */
                    std::string m_regularBackupStrategy;
                    bool m_regularBackupStrategyHasBeenSet;

                    /**
                     * The number of retained archive backups. Default value: `1`.
                     */
                    uint64_t m_regularBackupCounts;
                    bool m_regularBackupCountsHasBeenSet;

                    /**
                     * Archive backup start date in YYYY-MM-DD format, which is the current time by default.
                     */
                    std::string m_regularBackupStartTime;
                    bool m_regularBackupStartTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYBACKUPSTRATEGYREQUEST_H_
