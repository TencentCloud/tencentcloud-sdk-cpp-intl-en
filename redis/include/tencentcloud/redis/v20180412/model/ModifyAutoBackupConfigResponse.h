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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYAUTOBACKUPCONFIGRESPONSE_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYAUTOBACKUPCONFIGRESPONSE_H_

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
                * ModifyAutoBackupConfig response structure.
                */
                class ModifyAutoBackupConfigResponse : public AbstractModel
                {
                public:
                    ModifyAutoBackupConfigResponse();
                    ~ModifyAutoBackupConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Automatic backup type. Currently, it can only be configured as: 1, scheduled backup.</p>
                     * @return AutoBackupType <p>Automatic backup type. Currently, it can only be configured as: 1, scheduled backup.</p>
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
                     * 获取<p>Automatic backup cycle. Value: Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday.</p>
                     * @return WeekDays <p>Automatic backup cycle. Value: Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday.</p>
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
                     * 获取<p>Automatic scheduled backup time period. Format: 00:00-01:00, 01:00-02:00...... 23:00-00:00.</p>
                     * @return TimePeriod <p>Automatic scheduled backup time period. Format: 00:00-01:00, 01:00-02:00...... 23:00-00:00.</p>
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
                     * 获取<p>Number of days to save full backup files, in days.</p>
                     * @return BackupStorageDays <p>Number of days to save full backup files, in days.</p>
                     * 
                     */
                    int64_t GetBackupStorageDays() const;

                    /**
                     * 判断参数 BackupStorageDays 是否已赋值
                     * @return BackupStorageDays 是否已赋值
                     * 
                     */
                    bool BackupStorageDaysHasBeenSet() const;

                private:

                    /**
                     * <p>Automatic backup type. Currently, it can only be configured as: 1, scheduled backup.</p>
                     */
                    int64_t m_autoBackupType;
                    bool m_autoBackupTypeHasBeenSet;

                    /**
                     * <p>Automatic backup cycle. Value: Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday.</p>
                     */
                    std::vector<std::string> m_weekDays;
                    bool m_weekDaysHasBeenSet;

                    /**
                     * <p>Automatic scheduled backup time period. Format: 00:00-01:00, 01:00-02:00...... 23:00-00:00.</p>
                     */
                    std::string m_timePeriod;
                    bool m_timePeriodHasBeenSet;

                    /**
                     * <p>Number of days to save full backup files, in days.</p>
                     */
                    int64_t m_backupStorageDays;
                    bool m_backupStorageDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYAUTOBACKUPCONFIGRESPONSE_H_
