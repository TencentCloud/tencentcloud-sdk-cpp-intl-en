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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEAUTOBACKUPCONFIGRESPONSE_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEAUTOBACKUPCONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeAutoBackupConfig response structure.
                */
                class DescribeAutoBackupConfigResponse : public AbstractModel
                {
                public:
                    DescribeAutoBackupConfigResponse();
                    ~DescribeAutoBackupConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>This parameter is temporarily reserved due to compatibility issues. Ignore it.</p>
                     * @return AutoBackupType <p>This parameter is temporarily reserved due to compatibility issues. Ignore it.</p>
                     * 
                     */
                    int64_t GetAutoBackupType() const;

                    /**
                     * 判断参数 AutoBackupType 是否已赋值
                     * @return AutoBackupType 是否已赋值
                     * 
                     */
                    bool AutoBackupTypeHasBeenSet() const;

                    /**
                     * 获取<p>Backup cycle. Automatic backup is performed every day by default: Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday.</p>
                     * @return WeekDays <p>Backup cycle. Automatic backup is performed every day by default: Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday.</p>
                     * 
                     */
                    std::vector<std::string> GetWeekDays() const;

                    /**
                     * 判断参数 WeekDays 是否已赋值
                     * @return WeekDays 是否已赋值
                     * 
                     */
                    bool WeekDaysHasBeenSet() const;

                    /**
                     * 获取<p>Backup task initiation time range.</p>
                     * @return TimePeriod <p>Backup task initiation time range.</p>
                     * 
                     */
                    std::string GetTimePeriod() const;

                    /**
                     * 判断参数 TimePeriod 是否已赋值
                     * @return TimePeriod 是否已赋值
                     * 
                     */
                    bool TimePeriodHasBeenSet() const;

                    /**
                     * 获取<p>Number of days to save full backup files. Default value: 7 days. To save for more days, please <a href="https://console.cloud.tencent.com/workorder/category">submit a ticket</a> to apply.</p>
                     * @return BackupStorageDays <p>Number of days to save full backup files. Default value: 7 days. To save for more days, please <a href="https://console.cloud.tencent.com/workorder/category">submit a ticket</a> to apply.</p>
                     * 
                     */
                    int64_t GetBackupStorageDays() const;

                    /**
                     * 判断参数 BackupStorageDays 是否已赋值
                     * @return BackupStorageDays 是否已赋值
                     * 
                     */
                    bool BackupStorageDaysHasBeenSet() const;

                    /**
                     * 获取<p>This parameter is no longer in use. Ignore it.</p>
                     * @return BinlogStorageDays <p>This parameter is no longer in use. Ignore it.</p>
                     * 
                     */
                    int64_t GetBinlogStorageDays() const;

                    /**
                     * 判断参数 BinlogStorageDays 是否已赋值
                     * @return BinlogStorageDays 是否已赋值
                     * 
                     */
                    bool BinlogStorageDaysHasBeenSet() const;

                private:

                    /**
                     * <p>This parameter is temporarily reserved due to compatibility issues. Ignore it.</p>
                     */
                    int64_t m_autoBackupType;
                    bool m_autoBackupTypeHasBeenSet;

                    /**
                     * <p>Backup cycle. Automatic backup is performed every day by default: Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday.</p>
                     */
                    std::vector<std::string> m_weekDays;
                    bool m_weekDaysHasBeenSet;

                    /**
                     * <p>Backup task initiation time range.</p>
                     */
                    std::string m_timePeriod;
                    bool m_timePeriodHasBeenSet;

                    /**
                     * <p>Number of days to save full backup files. Default value: 7 days. To save for more days, please <a href="https://console.cloud.tencent.com/workorder/category">submit a ticket</a> to apply.</p>
                     */
                    int64_t m_backupStorageDays;
                    bool m_backupStorageDaysHasBeenSet;

                    /**
                     * <p>This parameter is no longer in use. Ignore it.</p>
                     */
                    int64_t m_binlogStorageDays;
                    bool m_binlogStorageDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEAUTOBACKUPCONFIGRESPONSE_H_
