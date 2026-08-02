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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEBACKUPOVERVIEWRESPONSE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEBACKUPOVERVIEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/BackupVolumeInfo.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeBackupOverview response structure.
                */
                class DescribeBackupOverviewResponse : public AbstractModel
                {
                public:
                    DescribeBackupOverviewResponse();
                    ~DescribeBackupOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total Backup Capacity
                     * @return BackupTotalVolume Total Backup Capacity
                     * 
                     */
                    double GetBackupTotalVolume() const;

                    /**
                     * 判断参数 BackupTotalVolume 是否已赋值
                     * @return BackupTotalVolume 是否已赋值
                     * 
                     */
                    bool BackupTotalVolumeHasBeenSet() const;

                    /**
                     * 获取Backup snapshot capacity
                     * @return BackupSnapshotVolume Backup snapshot capacity
                     * 
                     */
                    double GetBackupSnapshotVolume() const;

                    /**
                     * 判断参数 BackupSnapshotVolume 是否已赋值
                     * @return BackupSnapshotVolume 是否已赋值
                     * 
                     */
                    bool BackupSnapshotVolumeHasBeenSet() const;

                    /**
                     * 获取Backup logical capacity
                     * @return BackupLogicVolume Backup logical capacity
                     * 
                     */
                    double GetBackupLogicVolume() const;

                    /**
                     * 判断参数 BackupLogicVolume 是否已赋值
                     * @return BackupLogicVolume 是否已赋值
                     * 
                     */
                    bool BackupLogicVolumeHasBeenSet() const;

                    /**
                     * 获取Total Log Capacity
                     * @return LogTotalVolume Total Log Capacity
                     * 
                     */
                    double GetLogTotalVolume() const;

                    /**
                     * 判断参数 LogTotalVolume 是否已赋值
                     * @return LogTotalVolume 是否已赋值
                     * 
                     */
                    bool LogTotalVolumeHasBeenSet() const;

                    /**
                     * 获取binlog capacity
                     * @return LogBinlogVolume binlog capacity
                     * 
                     */
                    double GetLogBinlogVolume() const;

                    /**
                     * 判断参数 LogBinlogVolume 是否已赋值
                     * @return LogBinlogVolume 是否已赋值
                     * 
                     */
                    bool LogBinlogVolumeHasBeenSet() const;

                    /**
                     * 获取Redo log capacity
                     * @return LogRedoLogVolume Redo log capacity
                     * 
                     */
                    double GetLogRedoLogVolume() const;

                    /**
                     * 判断参数 LogRedoLogVolume 是否已赋值
                     * @return LogRedoLogVolume 是否已赋值
                     * 
                     */
                    bool LogRedoLogVolumeHasBeenSet() const;

                    /**
                     * 获取Total Cross-Region Backup Capacity
                     * @return CrossTotalVolume Total Cross-Region Backup Capacity
                     * 
                     */
                    double GetCrossTotalVolume() const;

                    /**
                     * 判断参数 CrossTotalVolume 是否已赋值
                     * @return CrossTotalVolume 是否已赋值
                     * 
                     */
                    bool CrossTotalVolumeHasBeenSet() const;

                    /**
                     * 获取Cross-Region Backup Capacity
                     * @return CrossRegionBackupVolume Cross-Region Backup Capacity
                     * 
                     */
                    double GetCrossRegionBackupVolume() const;

                    /**
                     * 判断参数 CrossRegionBackupVolume 是否已赋值
                     * @return CrossRegionBackupVolume 是否已赋值
                     * 
                     */
                    bool CrossRegionBackupVolumeHasBeenSet() const;

                    /**
                     * 获取Cross-regional log capacity
                     * @return CrossRegionLogVolume Cross-regional log capacity
                     * 
                     */
                    double GetCrossRegionLogVolume() const;

                    /**
                     * 判断参数 CrossRegionLogVolume 是否已赋值
                     * @return CrossRegionLogVolume 是否已赋值
                     * 
                     */
                    bool CrossRegionLogVolumeHasBeenSet() const;

                    /**
                     * 获取Backup capacity details
                     * @return BackupVolumeInfos Backup capacity details
                     * 
                     */
                    std::vector<BackupVolumeInfo> GetBackupVolumeInfos() const;

                    /**
                     * 判断参数 BackupVolumeInfos 是否已赋值
                     * @return BackupVolumeInfos 是否已赋值
                     * 
                     */
                    bool BackupVolumeInfosHasBeenSet() const;

                    /**
                     * 获取Cross-region backup capacity details
                     * @return CrossRegionBackupVolumeInfos Cross-region backup capacity details
                     * 
                     */
                    std::vector<BackupVolumeInfo> GetCrossRegionBackupVolumeInfos() const;

                    /**
                     * 判断参数 CrossRegionBackupVolumeInfos 是否已赋值
                     * @return CrossRegionBackupVolumeInfos 是否已赋值
                     * 
                     */
                    bool CrossRegionBackupVolumeInfosHasBeenSet() const;

                    /**
                     * 获取Cross-region information
                     * @return CrossRegions Cross-region information
                     * 
                     */
                    std::vector<std::string> GetCrossRegions() const;

                    /**
                     * 判断参数 CrossRegions 是否已赋值
                     * @return CrossRegions 是否已赋值
                     * 
                     */
                    bool CrossRegionsHasBeenSet() const;

                private:

                    /**
                     * Total Backup Capacity
                     */
                    double m_backupTotalVolume;
                    bool m_backupTotalVolumeHasBeenSet;

                    /**
                     * Backup snapshot capacity
                     */
                    double m_backupSnapshotVolume;
                    bool m_backupSnapshotVolumeHasBeenSet;

                    /**
                     * Backup logical capacity
                     */
                    double m_backupLogicVolume;
                    bool m_backupLogicVolumeHasBeenSet;

                    /**
                     * Total Log Capacity
                     */
                    double m_logTotalVolume;
                    bool m_logTotalVolumeHasBeenSet;

                    /**
                     * binlog capacity
                     */
                    double m_logBinlogVolume;
                    bool m_logBinlogVolumeHasBeenSet;

                    /**
                     * Redo log capacity
                     */
                    double m_logRedoLogVolume;
                    bool m_logRedoLogVolumeHasBeenSet;

                    /**
                     * Total Cross-Region Backup Capacity
                     */
                    double m_crossTotalVolume;
                    bool m_crossTotalVolumeHasBeenSet;

                    /**
                     * Cross-Region Backup Capacity
                     */
                    double m_crossRegionBackupVolume;
                    bool m_crossRegionBackupVolumeHasBeenSet;

                    /**
                     * Cross-regional log capacity
                     */
                    double m_crossRegionLogVolume;
                    bool m_crossRegionLogVolumeHasBeenSet;

                    /**
                     * Backup capacity details
                     */
                    std::vector<BackupVolumeInfo> m_backupVolumeInfos;
                    bool m_backupVolumeInfosHasBeenSet;

                    /**
                     * Cross-region backup capacity details
                     */
                    std::vector<BackupVolumeInfo> m_crossRegionBackupVolumeInfos;
                    bool m_crossRegionBackupVolumeInfosHasBeenSet;

                    /**
                     * Cross-region information
                     */
                    std::vector<std::string> m_crossRegions;
                    bool m_crossRegionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEBACKUPOVERVIEWRESPONSE_H_
