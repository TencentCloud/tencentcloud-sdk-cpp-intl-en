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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDATABACKUPOVERVIEWRESPONSE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDATABACKUPOVERVIEWRESPONSE_H_

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
                * DescribeDataBackupOverview response structure.
                */
                class DescribeDataBackupOverviewResponse : public AbstractModel
                {
                public:
                    DescribeDataBackupOverviewResponse();
                    ~DescribeDataBackupOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total capacity of data backups in bytes in the current region (including automatic backups and manual backups).
                     * @return DataBackupVolume Total capacity of data backups in bytes in the current region (including automatic backups and manual backups).
                     * 
                     */
                    int64_t GetDataBackupVolume() const;

                    /**
                     * 判断参数 DataBackupVolume 是否已赋值
                     * @return DataBackupVolume 是否已赋值
                     * 
                     */
                    bool DataBackupVolumeHasBeenSet() const;

                    /**
                     * 获取Total number of data backups in the current region.
                     * @return DataBackupCount Total number of data backups in the current region.
                     * 
                     */
                    int64_t GetDataBackupCount() const;

                    /**
                     * 判断参数 DataBackupCount 是否已赋值
                     * @return DataBackupCount 是否已赋值
                     * 
                     */
                    bool DataBackupCountHasBeenSet() const;

                    /**
                     * 获取Total capacity of automatic backups in the current region.
                     * @return AutoBackupVolume Total capacity of automatic backups in the current region.
                     * 
                     */
                    int64_t GetAutoBackupVolume() const;

                    /**
                     * 判断参数 AutoBackupVolume 是否已赋值
                     * @return AutoBackupVolume 是否已赋值
                     * 
                     */
                    bool AutoBackupVolumeHasBeenSet() const;

                    /**
                     * 获取Total number of automatic backups in the current region.
                     * @return AutoBackupCount Total number of automatic backups in the current region.
                     * 
                     */
                    int64_t GetAutoBackupCount() const;

                    /**
                     * 判断参数 AutoBackupCount 是否已赋值
                     * @return AutoBackupCount 是否已赋值
                     * 
                     */
                    bool AutoBackupCountHasBeenSet() const;

                    /**
                     * 获取Total capacity of manual backups in the current region.
                     * @return ManualBackupVolume Total capacity of manual backups in the current region.
                     * 
                     */
                    int64_t GetManualBackupVolume() const;

                    /**
                     * 判断参数 ManualBackupVolume 是否已赋值
                     * @return ManualBackupVolume 是否已赋值
                     * 
                     */
                    bool ManualBackupVolumeHasBeenSet() const;

                    /**
                     * 获取Total number of manual backups in the current region.
                     * @return ManualBackupCount Total number of manual backups in the current region.
                     * 
                     */
                    int64_t GetManualBackupCount() const;

                    /**
                     * 判断参数 ManualBackupCount 是否已赋值
                     * @return ManualBackupCount 是否已赋值
                     * 
                     */
                    bool ManualBackupCountHasBeenSet() const;

                    /**
                     * 获取Total capacity of remote backups
                     * @return RemoteBackupVolume Total capacity of remote backups
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
                     * 获取Total number of remote backups
                     * @return RemoteBackupCount Total number of remote backups
                     * 
                     */
                    int64_t GetRemoteBackupCount() const;

                    /**
                     * 判断参数 RemoteBackupCount 是否已赋值
                     * @return RemoteBackupCount 是否已赋值
                     * 
                     */
                    bool RemoteBackupCountHasBeenSet() const;

                    /**
                     * 获取Total capacity of archive backups in the current region
                     * @return DataBackupArchiveVolume Total capacity of archive backups in the current region
                     * 
                     */
                    int64_t GetDataBackupArchiveVolume() const;

                    /**
                     * 判断参数 DataBackupArchiveVolume 是否已赋值
                     * @return DataBackupArchiveVolume 是否已赋值
                     * 
                     */
                    bool DataBackupArchiveVolumeHasBeenSet() const;

                    /**
                     * 获取Total number of archive backups in the current region
                     * @return DataBackupArchiveCount Total number of archive backups in the current region
                     * 
                     */
                    int64_t GetDataBackupArchiveCount() const;

                    /**
                     * 判断参数 DataBackupArchiveCount 是否已赋值
                     * @return DataBackupArchiveCount 是否已赋值
                     * 
                     */
                    bool DataBackupArchiveCountHasBeenSet() const;

                    /**
                     * 获取Total backup capacity of standard storage in current region
                     * @return DataBackupStandbyVolume Total backup capacity of standard storage in current region
                     * 
                     */
                    int64_t GetDataBackupStandbyVolume() const;

                    /**
                     * 判断参数 DataBackupStandbyVolume 是否已赋值
                     * @return DataBackupStandbyVolume 是否已赋值
                     * 
                     */
                    bool DataBackupStandbyVolumeHasBeenSet() const;

                    /**
                     * 获取Total number of standard storage backups in current region
                     * @return DataBackupStandbyCount Total number of standard storage backups in current region
                     * 
                     */
                    int64_t GetDataBackupStandbyCount() const;

                    /**
                     * 判断参数 DataBackupStandbyCount 是否已赋值
                     * @return DataBackupStandbyCount 是否已赋值
                     * 
                     */
                    bool DataBackupStandbyCountHasBeenSet() const;

                private:

                    /**
                     * Total capacity of data backups in bytes in the current region (including automatic backups and manual backups).
                     */
                    int64_t m_dataBackupVolume;
                    bool m_dataBackupVolumeHasBeenSet;

                    /**
                     * Total number of data backups in the current region.
                     */
                    int64_t m_dataBackupCount;
                    bool m_dataBackupCountHasBeenSet;

                    /**
                     * Total capacity of automatic backups in the current region.
                     */
                    int64_t m_autoBackupVolume;
                    bool m_autoBackupVolumeHasBeenSet;

                    /**
                     * Total number of automatic backups in the current region.
                     */
                    int64_t m_autoBackupCount;
                    bool m_autoBackupCountHasBeenSet;

                    /**
                     * Total capacity of manual backups in the current region.
                     */
                    int64_t m_manualBackupVolume;
                    bool m_manualBackupVolumeHasBeenSet;

                    /**
                     * Total number of manual backups in the current region.
                     */
                    int64_t m_manualBackupCount;
                    bool m_manualBackupCountHasBeenSet;

                    /**
                     * Total capacity of remote backups
                     */
                    int64_t m_remoteBackupVolume;
                    bool m_remoteBackupVolumeHasBeenSet;

                    /**
                     * Total number of remote backups
                     */
                    int64_t m_remoteBackupCount;
                    bool m_remoteBackupCountHasBeenSet;

                    /**
                     * Total capacity of archive backups in the current region
                     */
                    int64_t m_dataBackupArchiveVolume;
                    bool m_dataBackupArchiveVolumeHasBeenSet;

                    /**
                     * Total number of archive backups in the current region
                     */
                    int64_t m_dataBackupArchiveCount;
                    bool m_dataBackupArchiveCountHasBeenSet;

                    /**
                     * Total backup capacity of standard storage in current region
                     */
                    int64_t m_dataBackupStandbyVolume;
                    bool m_dataBackupStandbyVolumeHasBeenSet;

                    /**
                     * Total number of standard storage backups in current region
                     */
                    int64_t m_dataBackupStandbyCount;
                    bool m_dataBackupStandbyCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDATABACKUPOVERVIEWRESPONSE_H_
