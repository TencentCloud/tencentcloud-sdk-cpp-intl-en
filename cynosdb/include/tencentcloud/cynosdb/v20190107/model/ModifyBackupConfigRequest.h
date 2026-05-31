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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYBACKUPCONFIGREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYBACKUPCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/LogicBackupConfigInfo.h>
#include <tencentcloud/cynosdb/v20190107/model/SnapshotBackupConfig.h>
#include <tencentcloud/cynosdb/v20190107/model/SparseBackupConfig.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
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
                     * 获取<p>Cluster ID.</p>
                     * @return ClusterId <p>Cluster ID.</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>Cluster ID.</p>
                     * @param _clusterId <p>Cluster ID.</p>
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

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
                     * 获取<p>Indicates the backup retention period in seconds. Backups will be cleaned up longer than this time. Seven days is represented as 3600<em>24</em>7=604800. The maximum value is 158112000.</p>
                     * @return ReserveDuration <p>Indicates the backup retention period in seconds. Backups will be cleaned up longer than this time. Seven days is represented as 3600<em>24</em>7=604800. The maximum value is 158112000.</p>
                     * 
                     */
                    uint64_t GetReserveDuration() const;

                    /**
                     * 设置<p>Indicates the backup retention period in seconds. Backups will be cleaned up longer than this time. Seven days is represented as 3600<em>24</em>7=604800. The maximum value is 158112000.</p>
                     * @param _reserveDuration <p>Indicates the backup retention period in seconds. Backups will be cleaned up longer than this time. Seven days is represented as 3600<em>24</em>7=604800. The maximum value is 158112000.</p>
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
                     * 获取<p>This parameter currently does not support modification and is not required. Backup frequency is an array of length 7, corresponding to Monday to Sunday backup method, full-full backup, increment-incremental backup.</p>
                     * @return BackupFreq <p>This parameter currently does not support modification and is not required. Backup frequency is an array of length 7, corresponding to Monday to Sunday backup method, full-full backup, increment-incremental backup.</p>
                     * 
                     */
                    std::vector<std::string> GetBackupFreq() const;

                    /**
                     * 设置<p>This parameter currently does not support modification and is not required. Backup frequency is an array of length 7, corresponding to Monday to Sunday backup method, full-full backup, increment-incremental backup.</p>
                     * @param _backupFreq <p>This parameter currently does not support modification and is not required. Backup frequency is an array of length 7, corresponding to Monday to Sunday backup method, full-full backup, increment-incremental backup.</p>
                     * 
                     */
                    void SetBackupFreq(const std::vector<std::string>& _backupFreq);

                    /**
                     * 判断参数 BackupFreq 是否已赋值
                     * @return BackupFreq 是否已赋值
                     * 
                     */
                    bool BackupFreqHasBeenSet() const;

                    /**
                     * 获取<p>This parameter currently does not support modification. No need to specify.</p>
                     * @return BackupType <p>This parameter currently does not support modification. No need to specify.</p>
                     * 
                     */
                    std::string GetBackupType() const;

                    /**
                     * 设置<p>This parameter currently does not support modification. No need to specify.</p>
                     * @param _backupType <p>This parameter currently does not support modification. No need to specify.</p>
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
                     * 获取<p>Logical backup configuration</p>
                     * @return LogicBackupConfig <p>Logical backup configuration</p>
                     * 
                     */
                    LogicBackupConfigInfo GetLogicBackupConfig() const;

                    /**
                     * 设置<p>Logical backup configuration</p>
                     * @param _logicBackupConfig <p>Logical backup configuration</p>
                     * 
                     */
                    void SetLogicBackupConfig(const LogicBackupConfigInfo& _logicBackupConfig);

                    /**
                     * 判断参数 LogicBackupConfig 是否已赋值
                     * @return LogicBackupConfig 是否已赋值
                     * 
                     */
                    bool LogicBackupConfigHasBeenSet() const;

                    /**
                     * 获取<p>Whether to delete automatic logical backup</p>
                     * @return DeleteAutoLogicBackup <p>Whether to delete automatic logical backup</p>
                     * 
                     */
                    bool GetDeleteAutoLogicBackup() const;

                    /**
                     * 设置<p>Whether to delete automatic logical backup</p>
                     * @param _deleteAutoLogicBackup <p>Whether to delete automatic logical backup</p>
                     * 
                     */
                    void SetDeleteAutoLogicBackup(const bool& _deleteAutoLogicBackup);

                    /**
                     * 判断参数 DeleteAutoLogicBackup 是否已赋值
                     * @return DeleteAutoLogicBackup 是否已赋值
                     * 
                     */
                    bool DeleteAutoLogicBackupHasBeenSet() const;

                    /**
                     * 获取<p>Second-level snapshot backup parameter</p>
                     * @return SnapshotSecondaryBackupConfig <p>Second-level snapshot backup parameter</p>
                     * 
                     */
                    SnapshotBackupConfig GetSnapshotSecondaryBackupConfig() const;

                    /**
                     * 设置<p>Second-level snapshot backup parameter</p>
                     * @param _snapshotSecondaryBackupConfig <p>Second-level snapshot backup parameter</p>
                     * 
                     */
                    void SetSnapshotSecondaryBackupConfig(const SnapshotBackupConfig& _snapshotSecondaryBackupConfig);

                    /**
                     * 判断参数 SnapshotSecondaryBackupConfig 是否已赋值
                     * @return SnapshotSecondaryBackupConfig 是否已赋值
                     * 
                     */
                    bool SnapshotSecondaryBackupConfigHasBeenSet() const;

                    /**
                     * 获取<p>Sparse backup configuration</p>
                     * @return SparseBackupConfig <p>Sparse backup configuration</p>
                     * 
                     */
                    SparseBackupConfig GetSparseBackupConfig() const;

                    /**
                     * 设置<p>Sparse backup configuration</p>
                     * @param _sparseBackupConfig <p>Sparse backup configuration</p>
                     * 
                     */
                    void SetSparseBackupConfig(const SparseBackupConfig& _sparseBackupConfig);

                    /**
                     * 判断参数 SparseBackupConfig 是否已赋值
                     * @return SparseBackupConfig 是否已赋值
                     * 
                     */
                    bool SparseBackupConfigHasBeenSet() const;

                private:

                    /**
                     * <p>Cluster ID.</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

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
                     * <p>Indicates the backup retention period in seconds. Backups will be cleaned up longer than this time. Seven days is represented as 3600<em>24</em>7=604800. The maximum value is 158112000.</p>
                     */
                    uint64_t m_reserveDuration;
                    bool m_reserveDurationHasBeenSet;

                    /**
                     * <p>This parameter currently does not support modification and is not required. Backup frequency is an array of length 7, corresponding to Monday to Sunday backup method, full-full backup, increment-incremental backup.</p>
                     */
                    std::vector<std::string> m_backupFreq;
                    bool m_backupFreqHasBeenSet;

                    /**
                     * <p>This parameter currently does not support modification. No need to specify.</p>
                     */
                    std::string m_backupType;
                    bool m_backupTypeHasBeenSet;

                    /**
                     * <p>Logical backup configuration</p>
                     */
                    LogicBackupConfigInfo m_logicBackupConfig;
                    bool m_logicBackupConfigHasBeenSet;

                    /**
                     * <p>Whether to delete automatic logical backup</p>
                     */
                    bool m_deleteAutoLogicBackup;
                    bool m_deleteAutoLogicBackupHasBeenSet;

                    /**
                     * <p>Second-level snapshot backup parameter</p>
                     */
                    SnapshotBackupConfig m_snapshotSecondaryBackupConfig;
                    bool m_snapshotSecondaryBackupConfigHasBeenSet;

                    /**
                     * <p>Sparse backup configuration</p>
                     */
                    SparseBackupConfig m_sparseBackupConfig;
                    bool m_sparseBackupConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYBACKUPCONFIGREQUEST_H_
