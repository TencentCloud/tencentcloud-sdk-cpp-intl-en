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
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param InstanceId Instance ID.
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Backup mode, which supports daily backup only. Valid value: daily.
                     * @return BackupType Backup mode, which supports daily backup only. Valid value: daily.
                     */
                    std::string GetBackupType() const;

                    /**
                     * 设置Backup mode, which supports daily backup only. Valid value: daily.
                     * @param BackupType Backup mode, which supports daily backup only. Valid value: daily.
                     */
                    void SetBackupType(const std::string& _backupType);

                    /**
                     * 判断参数 BackupType 是否已赋值
                     * @return BackupType 是否已赋值
                     */
                    bool BackupTypeHasBeenSet() const;

                    /**
                     * 获取Backup time. Value range: an integer from 0 to 23.
                     * @return BackupTime Backup time. Value range: an integer from 0 to 23.
                     */
                    uint64_t GetBackupTime() const;

                    /**
                     * 设置Backup time. Value range: an integer from 0 to 23.
                     * @param BackupTime Backup time. Value range: an integer from 0 to 23.
                     */
                    void SetBackupTime(const uint64_t& _backupTime);

                    /**
                     * 判断参数 BackupTime 是否已赋值
                     * @return BackupTime 是否已赋值
                     */
                    bool BackupTimeHasBeenSet() const;

                    /**
                     * 获取Backup interval in days when the `BackupType` is `daily`. Valid value: 1.
                     * @return BackupDay Backup interval in days when the `BackupType` is `daily`. Valid value: 1.
                     */
                    uint64_t GetBackupDay() const;

                    /**
                     * 设置Backup interval in days when the `BackupType` is `daily`. Valid value: 1.
                     * @param BackupDay Backup interval in days when the `BackupType` is `daily`. Valid value: 1.
                     */
                    void SetBackupDay(const uint64_t& _backupDay);

                    /**
                     * 判断参数 BackupDay 是否已赋值
                     * @return BackupDay 是否已赋值
                     */
                    bool BackupDayHasBeenSet() const;

                    /**
                     * 获取Backup mode. Valid values: `master_pkg` (archive the backup files of the primary node), `master_no_pkg` (do not archive the backup files of the primary node), `slave_pkg` (archive the backup files of the replica node), `slave_no_pkg` (do not archive the backup files of the replica node). Backup files of the replica node are supported only when Always On disaster recovery is enabled.
                     * @return BackupModel Backup mode. Valid values: `master_pkg` (archive the backup files of the primary node), `master_no_pkg` (do not archive the backup files of the primary node), `slave_pkg` (archive the backup files of the replica node), `slave_no_pkg` (do not archive the backup files of the replica node). Backup files of the replica node are supported only when Always On disaster recovery is enabled.
                     */
                    std::string GetBackupModel() const;

                    /**
                     * 设置Backup mode. Valid values: `master_pkg` (archive the backup files of the primary node), `master_no_pkg` (do not archive the backup files of the primary node), `slave_pkg` (archive the backup files of the replica node), `slave_no_pkg` (do not archive the backup files of the replica node). Backup files of the replica node are supported only when Always On disaster recovery is enabled.
                     * @param BackupModel Backup mode. Valid values: `master_pkg` (archive the backup files of the primary node), `master_no_pkg` (do not archive the backup files of the primary node), `slave_pkg` (archive the backup files of the replica node), `slave_no_pkg` (do not archive the backup files of the replica node). Backup files of the replica node are supported only when Always On disaster recovery is enabled.
                     */
                    void SetBackupModel(const std::string& _backupModel);

                    /**
                     * 判断参数 BackupModel 是否已赋值
                     * @return BackupModel 是否已赋值
                     */
                    bool BackupModelHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Backup mode, which supports daily backup only. Valid value: daily.
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYBACKUPSTRATEGYREQUEST_H_
