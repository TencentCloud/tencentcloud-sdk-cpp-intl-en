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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEBINLOGBACKUPOVERVIEWRESPONSE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEBINLOGBACKUPOVERVIEWRESPONSE_H_

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
                * DescribeBinlogBackupOverview response structure.
                */
                class DescribeBinlogBackupOverviewResponse : public AbstractModel
                {
                public:
                    DescribeBinlogBackupOverviewResponse();
                    ~DescribeBinlogBackupOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total capacity of log backups in bytes.
                     * @return BinlogBackupVolume Total capacity of log backups in bytes.
                     */
                    int64_t GetBinlogBackupVolume() const;

                    /**
                     * 判断参数 BinlogBackupVolume 是否已赋值
                     * @return BinlogBackupVolume 是否已赋值
                     */
                    bool BinlogBackupVolumeHasBeenSet() const;

                    /**
                     * 获取Total number of log backups.
                     * @return BinlogBackupCount Total number of log backups.
                     */
                    int64_t GetBinlogBackupCount() const;

                    /**
                     * 判断参数 BinlogBackupCount 是否已赋值
                     * @return BinlogBackupCount 是否已赋值
                     */
                    bool BinlogBackupCountHasBeenSet() const;

                private:

                    /**
                     * Total capacity of log backups in bytes.
                     */
                    int64_t m_binlogBackupVolume;
                    bool m_binlogBackupVolumeHasBeenSet;

                    /**
                     * Total number of log backups.
                     */
                    int64_t m_binlogBackupCount;
                    bool m_binlogBackupCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEBINLOGBACKUPOVERVIEWRESPONSE_H_
