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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEBACKUPSUMMARYRESPONSE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEBACKUPSUMMARYRESPONSE_H_

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
                * DescribeBackupSummary response structure.
                */
                class DescribeBackupSummaryResponse : public AbstractModel
                {
                public:
                    DescribeBackupSummaryResponse();
                    ~DescribeBackupSummaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Actual free total space, in KB.
                     * @return FreeSpace Actual free total space, in KB.
                     * 
                     */
                    uint64_t GetFreeSpace() const;

                    /**
                     * 判断参数 FreeSpace 是否已赋值
                     * @return FreeSpace 是否已赋值
                     * 
                     */
                    bool FreeSpaceHasBeenSet() const;

                    /**
                     * 获取Actual used space of backups, in KB.
                     * @return ActualUsedSpace Actual used space of backups, in KB.
                     * 
                     */
                    uint64_t GetActualUsedSpace() const;

                    /**
                     * 判断参数 ActualUsedSpace 是否已赋值
                     * @return ActualUsedSpace 是否已赋值
                     * 
                     */
                    bool ActualUsedSpaceHasBeenSet() const;

                    /**
                     * 获取Total number of backup files.
                     * @return BackupFilesTotal Total number of backup files.
                     * 
                     */
                    uint64_t GetBackupFilesTotal() const;

                    /**
                     * 判断参数 BackupFilesTotal 是否已赋值
                     * @return BackupFilesTotal 是否已赋值
                     * 
                     */
                    bool BackupFilesTotalHasBeenSet() const;

                    /**
                     * 获取Charged space of the space occupied by backups, in KB.
                     * @return BillingSpace Charged space of the space occupied by backups, in KB.
                     * 
                     */
                    uint64_t GetBillingSpace() const;

                    /**
                     * 判断参数 BillingSpace 是否已赋值
                     * @return BillingSpace 是否已赋值
                     * 
                     */
                    bool BillingSpaceHasBeenSet() const;

                    /**
                     * 获取Data backup usage space, in KB.
                     * @return DataBackupSpace Data backup usage space, in KB.
                     * 
                     */
                    uint64_t GetDataBackupSpace() const;

                    /**
                     * 判断参数 DataBackupSpace 是否已赋值
                     * @return DataBackupSpace 是否已赋值
                     * 
                     */
                    bool DataBackupSpaceHasBeenSet() const;

                    /**
                     * 获取Total number of data backup files.
                     * @return DataBackupCount Total number of data backup files.
                     * 
                     */
                    uint64_t GetDataBackupCount() const;

                    /**
                     * 判断参数 DataBackupCount 是否已赋值
                     * @return DataBackupCount 是否已赋值
                     * 
                     */
                    bool DataBackupCountHasBeenSet() const;

                    /**
                     * 获取Storage space used by manual backups in data backup, in KB.
                     * @return ManualBackupSpace Storage space used by manual backups in data backup, in KB.
                     * 
                     */
                    uint64_t GetManualBackupSpace() const;

                    /**
                     * 判断参数 ManualBackupSpace 是否已赋值
                     * @return ManualBackupSpace 是否已赋值
                     * 
                     */
                    bool ManualBackupSpaceHasBeenSet() const;

                    /**
                     * 获取Total number of files for manual backups in data backup.
                     * @return ManualBackupCount Total number of files for manual backups in data backup.
                     * 
                     */
                    uint64_t GetManualBackupCount() const;

                    /**
                     * 判断参数 ManualBackupCount 是否已赋值
                     * @return ManualBackupCount 是否已赋值
                     * 
                     */
                    bool ManualBackupCountHasBeenSet() const;

                    /**
                     * 获取Storage space used by automatic backups in data backup, in KB.
                     * @return AutoBackupSpace Storage space used by automatic backups in data backup, in KB.
                     * 
                     */
                    uint64_t GetAutoBackupSpace() const;

                    /**
                     * 判断参数 AutoBackupSpace 是否已赋值
                     * @return AutoBackupSpace 是否已赋值
                     * 
                     */
                    bool AutoBackupSpaceHasBeenSet() const;

                    /**
                     * 获取Total number of files for automatic backups in data backup.
                     * @return AutoBackupCount Total number of files for automatic backups in data backup.
                     * 
                     */
                    uint64_t GetAutoBackupCount() const;

                    /**
                     * 判断参数 AutoBackupCount 是否已赋值
                     * @return AutoBackupCount 是否已赋值
                     * 
                     */
                    bool AutoBackupCountHasBeenSet() const;

                    /**
                     * 获取Backup usage space for logs, in KB.
                     * @return LogBackupSpace Backup usage space for logs, in KB.
                     * 
                     */
                    uint64_t GetLogBackupSpace() const;

                    /**
                     * 判断参数 LogBackupSpace 是否已赋值
                     * @return LogBackupSpace 是否已赋值
                     * 
                     */
                    bool LogBackupSpaceHasBeenSet() const;

                    /**
                     * 获取Total number of log backup files.
                     * @return LogBackupCount Total number of log backup files.
                     * 
                     */
                    uint64_t GetLogBackupCount() const;

                    /**
                     * 判断参数 LogBackupCount 是否已赋值
                     * @return LogBackupCount 是否已赋值
                     * 
                     */
                    bool LogBackupCountHasBeenSet() const;

                    /**
                     * 获取Estimated fees, in USD/hour.
                     * @return EstimatedAmount Estimated fees, in USD/hour.
                     * 
                     */
                    double GetEstimatedAmount() const;

                    /**
                     * 判断参数 EstimatedAmount 是否已赋值
                     * @return EstimatedAmount 是否已赋值
                     * 
                     */
                    bool EstimatedAmountHasBeenSet() const;

                    /**
                     * 获取Total number of local backup files.
                     * @return LocalBackupFilesTotal Total number of local backup files.
                     * 
                     */
                    uint64_t GetLocalBackupFilesTotal() const;

                    /**
                     * 判断参数 LocalBackupFilesTotal 是否已赋值
                     * @return LocalBackupFilesTotal 是否已赋值
                     * 
                     */
                    bool LocalBackupFilesTotalHasBeenSet() const;

                    /**
                     * 获取Total number of cross-region backup files.
                     * @return CrossBackupFilesTotal Total number of cross-region backup files.
                     * 
                     */
                    uint64_t GetCrossBackupFilesTotal() const;

                    /**
                     * 判断参数 CrossBackupFilesTotal 是否已赋值
                     * @return CrossBackupFilesTotal 是否已赋值
                     * 
                     */
                    bool CrossBackupFilesTotalHasBeenSet() const;

                    /**
                     * 获取Charged space of the space occupied by cross-region backups, in KB.
                     * @return CrossBillingSpace Charged space of the space occupied by cross-region backups, in KB.
                     * 
                     */
                    uint64_t GetCrossBillingSpace() const;

                    /**
                     * 判断参数 CrossBillingSpace 是否已赋值
                     * @return CrossBillingSpace 是否已赋值
                     * 
                     */
                    bool CrossBillingSpaceHasBeenSet() const;

                    /**
                     * 获取Space used by cross-region automatic data backups, in KB.
                     * @return CrossAutoBackupSpace Space used by cross-region automatic data backups, in KB.
                     * 
                     */
                    uint64_t GetCrossAutoBackupSpace() const;

                    /**
                     * 判断参数 CrossAutoBackupSpace 是否已赋值
                     * @return CrossAutoBackupSpace 是否已赋值
                     * 
                     */
                    bool CrossAutoBackupSpaceHasBeenSet() const;

                    /**
                     * 获取Total number of files for cross-region automatic data backups.
                     * @return CrossAutoBackupCount Total number of files for cross-region automatic data backups.
                     * 
                     */
                    uint64_t GetCrossAutoBackupCount() const;

                    /**
                     * 判断参数 CrossAutoBackupCount 是否已赋值
                     * @return CrossAutoBackupCount 是否已赋值
                     * 
                     */
                    bool CrossAutoBackupCountHasBeenSet() const;

                    /**
                     * 获取Space used by local log backups, in KB.
                     * @return LocalLogBackupSpace Space used by local log backups, in KB.
                     * 
                     */
                    uint64_t GetLocalLogBackupSpace() const;

                    /**
                     * 判断参数 LocalLogBackupSpace 是否已赋值
                     * @return LocalLogBackupSpace 是否已赋值
                     * 
                     */
                    bool LocalLogBackupSpaceHasBeenSet() const;

                    /**
                     * 获取Total number of files for local log backups.
                     * @return LocalLogBackupCount Total number of files for local log backups.
                     * 
                     */
                    uint64_t GetLocalLogBackupCount() const;

                    /**
                     * 判断参数 LocalLogBackupCount 是否已赋值
                     * @return LocalLogBackupCount 是否已赋值
                     * 
                     */
                    bool LocalLogBackupCountHasBeenSet() const;

                    /**
                     * 获取Space used by cross-region log backups, in KB.
                     * @return CrossLogBackupSpace Space used by cross-region log backups, in KB.
                     * 
                     */
                    uint64_t GetCrossLogBackupSpace() const;

                    /**
                     * 判断参数 CrossLogBackupSpace 是否已赋值
                     * @return CrossLogBackupSpace 是否已赋值
                     * 
                     */
                    bool CrossLogBackupSpaceHasBeenSet() const;

                    /**
                     * 获取Total number of files for cross-region log backups.
                     * @return CrossLogBackupCount Total number of files for cross-region log backups.
                     * 
                     */
                    uint64_t GetCrossLogBackupCount() const;

                    /**
                     * 判断参数 CrossLogBackupCount 是否已赋值
                     * @return CrossLogBackupCount 是否已赋值
                     * 
                     */
                    bool CrossLogBackupCountHasBeenSet() const;

                    /**
                     * 获取Estimated fees for cross-region backups, in USD/hour.
                     * @return CrossEstimatedAmount Estimated fees for cross-region backups, in USD/hour.
                     * 
                     */
                    double GetCrossEstimatedAmount() const;

                    /**
                     * 判断参数 CrossEstimatedAmount 是否已赋值
                     * @return CrossEstimatedAmount 是否已赋值
                     * 
                     */
                    bool CrossEstimatedAmountHasBeenSet() const;

                private:

                    /**
                     * Actual free total space, in KB.
                     */
                    uint64_t m_freeSpace;
                    bool m_freeSpaceHasBeenSet;

                    /**
                     * Actual used space of backups, in KB.
                     */
                    uint64_t m_actualUsedSpace;
                    bool m_actualUsedSpaceHasBeenSet;

                    /**
                     * Total number of backup files.
                     */
                    uint64_t m_backupFilesTotal;
                    bool m_backupFilesTotalHasBeenSet;

                    /**
                     * Charged space of the space occupied by backups, in KB.
                     */
                    uint64_t m_billingSpace;
                    bool m_billingSpaceHasBeenSet;

                    /**
                     * Data backup usage space, in KB.
                     */
                    uint64_t m_dataBackupSpace;
                    bool m_dataBackupSpaceHasBeenSet;

                    /**
                     * Total number of data backup files.
                     */
                    uint64_t m_dataBackupCount;
                    bool m_dataBackupCountHasBeenSet;

                    /**
                     * Storage space used by manual backups in data backup, in KB.
                     */
                    uint64_t m_manualBackupSpace;
                    bool m_manualBackupSpaceHasBeenSet;

                    /**
                     * Total number of files for manual backups in data backup.
                     */
                    uint64_t m_manualBackupCount;
                    bool m_manualBackupCountHasBeenSet;

                    /**
                     * Storage space used by automatic backups in data backup, in KB.
                     */
                    uint64_t m_autoBackupSpace;
                    bool m_autoBackupSpaceHasBeenSet;

                    /**
                     * Total number of files for automatic backups in data backup.
                     */
                    uint64_t m_autoBackupCount;
                    bool m_autoBackupCountHasBeenSet;

                    /**
                     * Backup usage space for logs, in KB.
                     */
                    uint64_t m_logBackupSpace;
                    bool m_logBackupSpaceHasBeenSet;

                    /**
                     * Total number of log backup files.
                     */
                    uint64_t m_logBackupCount;
                    bool m_logBackupCountHasBeenSet;

                    /**
                     * Estimated fees, in USD/hour.
                     */
                    double m_estimatedAmount;
                    bool m_estimatedAmountHasBeenSet;

                    /**
                     * Total number of local backup files.
                     */
                    uint64_t m_localBackupFilesTotal;
                    bool m_localBackupFilesTotalHasBeenSet;

                    /**
                     * Total number of cross-region backup files.
                     */
                    uint64_t m_crossBackupFilesTotal;
                    bool m_crossBackupFilesTotalHasBeenSet;

                    /**
                     * Charged space of the space occupied by cross-region backups, in KB.
                     */
                    uint64_t m_crossBillingSpace;
                    bool m_crossBillingSpaceHasBeenSet;

                    /**
                     * Space used by cross-region automatic data backups, in KB.
                     */
                    uint64_t m_crossAutoBackupSpace;
                    bool m_crossAutoBackupSpaceHasBeenSet;

                    /**
                     * Total number of files for cross-region automatic data backups.
                     */
                    uint64_t m_crossAutoBackupCount;
                    bool m_crossAutoBackupCountHasBeenSet;

                    /**
                     * Space used by local log backups, in KB.
                     */
                    uint64_t m_localLogBackupSpace;
                    bool m_localLogBackupSpaceHasBeenSet;

                    /**
                     * Total number of files for local log backups.
                     */
                    uint64_t m_localLogBackupCount;
                    bool m_localLogBackupCountHasBeenSet;

                    /**
                     * Space used by cross-region log backups, in KB.
                     */
                    uint64_t m_crossLogBackupSpace;
                    bool m_crossLogBackupSpaceHasBeenSet;

                    /**
                     * Total number of files for cross-region log backups.
                     */
                    uint64_t m_crossLogBackupCount;
                    bool m_crossLogBackupCountHasBeenSet;

                    /**
                     * Estimated fees for cross-region backups, in USD/hour.
                     */
                    double m_crossEstimatedAmount;
                    bool m_crossEstimatedAmountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEBACKUPSUMMARYRESPONSE_H_
