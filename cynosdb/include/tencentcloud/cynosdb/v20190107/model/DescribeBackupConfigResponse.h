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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEBACKUPCONFIGRESPONSE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEBACKUPCONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/LogicBackupConfigInfo.h>
#include <tencentcloud/cynosdb/v20190107/model/BackupConfigInfo.h>
#include <tencentcloud/cynosdb/v20190107/model/SparseBackupConfigRsp.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
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
                     * 获取<p>Indicates the full backup start time, [0-24*3600]. For example, 0:00, 1:00, and 2:00 are 0, 3600, and 7200 respectively.</p>
                     * @return BackupTimeBeg <p>Indicates the full backup start time, [0-24*3600]. For example, 0:00, 1:00, and 2:00 are 0, 3600, and 7200 respectively.</p>
                     * 
                     */
                    uint64_t GetBackupTimeBeg() const;

                    /**
                     * 判断参数 BackupTimeBeg 是否已赋值
                     * @return BackupTimeBeg 是否已赋值
                     * 
                     */
                    bool BackupTimeBegHasBeenSet() const;

                    /**
                     * 获取<p>Indicates the full backup start time, [0-24*3600]. For example, 0:00, 1:00, and 2:00 are 0, 3600, and 7200 respectively.</p>
                     * @return BackupTimeEnd <p>Indicates the full backup start time, [0-24*3600]. For example, 0:00, 1:00, and 2:00 are 0, 3600, and 7200 respectively.</p>
                     * 
                     */
                    uint64_t GetBackupTimeEnd() const;

                    /**
                     * 判断参数 BackupTimeEnd 是否已赋值
                     * @return BackupTimeEnd 是否已赋值
                     * 
                     */
                    bool BackupTimeEndHasBeenSet() const;

                    /**
                     * 获取<p>Indicates the backup retention period in seconds. Backups longer than this time will be cleaned up. 7 days is represented as 3600<em>24</em>7=604800.</p>
                     * @return ReserveDuration <p>Indicates the backup retention period in seconds. Backups longer than this time will be cleaned up. 7 days is represented as 3600<em>24</em>7=604800.</p>
                     * 
                     */
                    uint64_t GetReserveDuration() const;

                    /**
                     * 判断参数 ReserveDuration 是否已赋值
                     * @return ReserveDuration 是否已赋值
                     * 
                     */
                    bool ReserveDurationHasBeenSet() const;

                    /**
                     * 获取<p>Backup frequency, an array of length 7, corresponding to Monday to Sunday backup method, full-full backup, increment-incremental backup</p>
                     * @return BackupFreq <p>Backup frequency, an array of length 7, corresponding to Monday to Sunday backup method, full-full backup, increment-incremental backup</p>
                     * 
                     */
                    std::vector<std::string> GetBackupFreq() const;

                    /**
                     * 判断参数 BackupFreq 是否已赋值
                     * @return BackupFreq 是否已赋值
                     * 
                     */
                    bool BackupFreqHasBeenSet() const;

                    /**
                     * 获取<p>Backup method, logic-logical backup, snapshot-snapshot backup</p>
                     * @return BackupType <p>Backup method, logic-logical backup, snapshot-snapshot backup</p>
                     * 
                     */
                    std::string GetBackupType() const;

                    /**
                     * 判断参数 BackupType 是否已赋值
                     * @return BackupType 是否已赋值
                     * 
                     */
                    bool BackupTypeHasBeenSet() const;

                    /**
                     * 获取<p>Cross-regional logical backup configuration modification time</p>
                     * @return LogicCrossRegionsConfigUpdateTime <p>Cross-regional logical backup configuration modification time</p>
                     * 
                     */
                    std::string GetLogicCrossRegionsConfigUpdateTime() const;

                    /**
                     * 判断参数 LogicCrossRegionsConfigUpdateTime 是否已赋值
                     * @return LogicCrossRegionsConfigUpdateTime 是否已赋值
                     * 
                     */
                    bool LogicCrossRegionsConfigUpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Automatic logical backup configuration</p>
                     * @return LogicBackupConfig <p>Automatic logical backup configuration</p>
                     * 
                     */
                    LogicBackupConfigInfo GetLogicBackupConfig() const;

                    /**
                     * 判断参数 LogicBackupConfig 是否已赋值
                     * @return LogicBackupConfig 是否已赋值
                     * 
                     */
                    bool LogicBackupConfigHasBeenSet() const;

                    /**
                     * 获取<p>Second-level snapshot backup configuration information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SnapshotSecondaryBackupConfig <p>Second-level snapshot backup configuration information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    BackupConfigInfo GetSnapshotSecondaryBackupConfig() const;

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
                    SparseBackupConfigRsp GetSparseBackupConfig() const;

                    /**
                     * 判断参数 SparseBackupConfig 是否已赋值
                     * @return SparseBackupConfig 是否已赋值
                     * 
                     */
                    bool SparseBackupConfigHasBeenSet() const;

                private:

                    /**
                     * <p>Indicates the full backup start time, [0-24*3600]. For example, 0:00, 1:00, and 2:00 are 0, 3600, and 7200 respectively.</p>
                     */
                    uint64_t m_backupTimeBeg;
                    bool m_backupTimeBegHasBeenSet;

                    /**
                     * <p>Indicates the full backup start time, [0-24*3600]. For example, 0:00, 1:00, and 2:00 are 0, 3600, and 7200 respectively.</p>
                     */
                    uint64_t m_backupTimeEnd;
                    bool m_backupTimeEndHasBeenSet;

                    /**
                     * <p>Indicates the backup retention period in seconds. Backups longer than this time will be cleaned up. 7 days is represented as 3600<em>24</em>7=604800.</p>
                     */
                    uint64_t m_reserveDuration;
                    bool m_reserveDurationHasBeenSet;

                    /**
                     * <p>Backup frequency, an array of length 7, corresponding to Monday to Sunday backup method, full-full backup, increment-incremental backup</p>
                     */
                    std::vector<std::string> m_backupFreq;
                    bool m_backupFreqHasBeenSet;

                    /**
                     * <p>Backup method, logic-logical backup, snapshot-snapshot backup</p>
                     */
                    std::string m_backupType;
                    bool m_backupTypeHasBeenSet;

                    /**
                     * <p>Cross-regional logical backup configuration modification time</p>
                     */
                    std::string m_logicCrossRegionsConfigUpdateTime;
                    bool m_logicCrossRegionsConfigUpdateTimeHasBeenSet;

                    /**
                     * <p>Automatic logical backup configuration</p>
                     */
                    LogicBackupConfigInfo m_logicBackupConfig;
                    bool m_logicBackupConfigHasBeenSet;

                    /**
                     * <p>Second-level snapshot backup configuration information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    BackupConfigInfo m_snapshotSecondaryBackupConfig;
                    bool m_snapshotSecondaryBackupConfigHasBeenSet;

                    /**
                     * <p>Sparse backup configuration</p>
                     */
                    SparseBackupConfigRsp m_sparseBackupConfig;
                    bool m_sparseBackupConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEBACKUPCONFIGRESPONSE_H_
