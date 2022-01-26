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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEBACKUPCONFIGRESPONSE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEBACKUPCONFIGRESPONSE_H_

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
                     * 获取Earliest start time point of automatic backup, such as 2 (for 2:00 AM). (This field has been disused. You are recommended to use the `BackupTimeWindow` field)
                     * @return StartTimeMin Earliest start time point of automatic backup, such as 2 (for 2:00 AM). (This field has been disused. You are recommended to use the `BackupTimeWindow` field)
                     */
                    int64_t GetStartTimeMin() const;

                    /**
                     * 判断参数 StartTimeMin 是否已赋值
                     * @return StartTimeMin 是否已赋值
                     */
                    bool StartTimeMinHasBeenSet() const;

                    /**
                     * 获取Latest start time point of automatic backup, such as 6 (for 6:00 AM). (This field has been disused. You are recommended to use the `BackupTimeWindow` field)
                     * @return StartTimeMax Latest start time point of automatic backup, such as 6 (for 6:00 AM). (This field has been disused. You are recommended to use the `BackupTimeWindow` field)
                     */
                    int64_t GetStartTimeMax() const;

                    /**
                     * 判断参数 StartTimeMax 是否已赋值
                     * @return StartTimeMax 是否已赋值
                     */
                    bool StartTimeMaxHasBeenSet() const;

                    /**
                     * 获取Backup file retention period in days.
                     * @return BackupExpireDays Backup file retention period in days.
                     */
                    int64_t GetBackupExpireDays() const;

                    /**
                     * 判断参数 BackupExpireDays 是否已赋值
                     * @return BackupExpireDays 是否已赋值
                     */
                    bool BackupExpireDaysHasBeenSet() const;

                    /**
                     * 获取Backup mode. Value range: physical, logical
                     * @return BackupMethod Backup mode. Value range: physical, logical
                     */
                    std::string GetBackupMethod() const;

                    /**
                     * 判断参数 BackupMethod 是否已赋值
                     * @return BackupMethod 是否已赋值
                     */
                    bool BackupMethodHasBeenSet() const;

                    /**
                     * 获取Binlog file retention period in days.
                     * @return BinlogExpireDays Binlog file retention period in days.
                     */
                    int64_t GetBinlogExpireDays() const;

                    /**
                     * 判断参数 BinlogExpireDays 是否已赋值
                     * @return BinlogExpireDays 是否已赋值
                     */
                    bool BinlogExpireDaysHasBeenSet() const;

                    /**
                     * 获取Time window for automatic instance backup.
                     * @return BackupTimeWindow Time window for automatic instance backup.
                     */
                    CommonTimeWindow GetBackupTimeWindow() const;

                    /**
                     * 判断参数 BackupTimeWindow 是否已赋值
                     * @return BackupTimeWindow 是否已赋值
                     */
                    bool BackupTimeWindowHasBeenSet() const;

                private:

                    /**
                     * Earliest start time point of automatic backup, such as 2 (for 2:00 AM). (This field has been disused. You are recommended to use the `BackupTimeWindow` field)
                     */
                    int64_t m_startTimeMin;
                    bool m_startTimeMinHasBeenSet;

                    /**
                     * Latest start time point of automatic backup, such as 6 (for 6:00 AM). (This field has been disused. You are recommended to use the `BackupTimeWindow` field)
                     */
                    int64_t m_startTimeMax;
                    bool m_startTimeMaxHasBeenSet;

                    /**
                     * Backup file retention period in days.
                     */
                    int64_t m_backupExpireDays;
                    bool m_backupExpireDaysHasBeenSet;

                    /**
                     * Backup mode. Value range: physical, logical
                     */
                    std::string m_backupMethod;
                    bool m_backupMethodHasBeenSet;

                    /**
                     * Binlog file retention period in days.
                     */
                    int64_t m_binlogExpireDays;
                    bool m_binlogExpireDaysHasBeenSet;

                    /**
                     * Time window for automatic instance backup.
                     */
                    CommonTimeWindow m_backupTimeWindow;
                    bool m_backupTimeWindowHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEBACKUPCONFIGRESPONSE_H_
