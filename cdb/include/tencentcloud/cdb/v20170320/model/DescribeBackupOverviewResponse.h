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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEBACKUPOVERVIEWRESPONSE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEBACKUPOVERVIEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
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
                     * 获取Total number of backups of a user in the current region (including data backups and log backups).
                     * @return BackupCount Total number of backups of a user in the current region (including data backups and log backups).
                     * 
                     */
                    int64_t GetBackupCount() const;

                    /**
                     * 判断参数 BackupCount 是否已赋值
                     * @return BackupCount 是否已赋值
                     * 
                     */
                    bool BackupCountHasBeenSet() const;

                    /**
                     * 获取Total capacity of backups of a user in the current region.
                     * @return BackupVolume Total capacity of backups of a user in the current region.
                     * 
                     */
                    int64_t GetBackupVolume() const;

                    /**
                     * 判断参数 BackupVolume 是否已赋值
                     * @return BackupVolume 是否已赋值
                     * 
                     */
                    bool BackupVolumeHasBeenSet() const;

                    /**
                     * 获取Paid capacity of backups of a user in the current region, i.e., capacity that exceeds the free tier.
                     * @return BillingVolume Paid capacity of backups of a user in the current region, i.e., capacity that exceeds the free tier.
                     * 
                     */
                    int64_t GetBillingVolume() const;

                    /**
                     * 判断参数 BillingVolume 是否已赋值
                     * @return BillingVolume 是否已赋值
                     * 
                     */
                    bool BillingVolumeHasBeenSet() const;

                    /**
                     * 获取Backup capacity in the free tier of a user in the current region.
                     * @return FreeVolume Backup capacity in the free tier of a user in the current region.
                     * 
                     */
                    int64_t GetFreeVolume() const;

                    /**
                     * 判断参数 FreeVolume 是否已赋值
                     * @return FreeVolume 是否已赋值
                     * 
                     */
                    bool FreeVolumeHasBeenSet() const;

                    /**
                     * 获取Total capacity of backups of a user in the current region
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return RemoteBackupVolume Total capacity of backups of a user in the current region
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetRemoteBackupVolume() const;

                    /**
                     * 判断参数 RemoteBackupVolume 是否已赋值
                     * @return RemoteBackupVolume 是否已赋值
                     * 
                     */
                    bool RemoteBackupVolumeHasBeenSet() const;

                    /**
                     * 获取Archive backup capacity, which includes data backups and log backups.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return BackupArchiveVolume Archive backup capacity, which includes data backups and log backups.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetBackupArchiveVolume() const;

                    /**
                     * 判断参数 BackupArchiveVolume 是否已赋值
                     * @return BackupArchiveVolume 是否已赋值
                     * 
                     */
                    bool BackupArchiveVolumeHasBeenSet() const;

                    /**
                     * 获取Backup capacity of standard storage, which includes data backups and log backups.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return BackupStandbyVolume Backup capacity of standard storage, which includes data backups and log backups.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetBackupStandbyVolume() const;

                    /**
                     * 判断参数 BackupStandbyVolume 是否已赋值
                     * @return BackupStandbyVolume 是否已赋值
                     * 
                     */
                    bool BackupStandbyVolumeHasBeenSet() const;

                private:

                    /**
                     * Total number of backups of a user in the current region (including data backups and log backups).
                     */
                    int64_t m_backupCount;
                    bool m_backupCountHasBeenSet;

                    /**
                     * Total capacity of backups of a user in the current region.
                     */
                    int64_t m_backupVolume;
                    bool m_backupVolumeHasBeenSet;

                    /**
                     * Paid capacity of backups of a user in the current region, i.e., capacity that exceeds the free tier.
                     */
                    int64_t m_billingVolume;
                    bool m_billingVolumeHasBeenSet;

                    /**
                     * Backup capacity in the free tier of a user in the current region.
                     */
                    int64_t m_freeVolume;
                    bool m_freeVolumeHasBeenSet;

                    /**
                     * Total capacity of backups of a user in the current region
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_remoteBackupVolume;
                    bool m_remoteBackupVolumeHasBeenSet;

                    /**
                     * Archive backup capacity, which includes data backups and log backups.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_backupArchiveVolume;
                    bool m_backupArchiveVolumeHasBeenSet;

                    /**
                     * Backup capacity of standard storage, which includes data backups and log backups.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_backupStandbyVolume;
                    bool m_backupStandbyVolumeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEBACKUPOVERVIEWRESPONSE_H_
