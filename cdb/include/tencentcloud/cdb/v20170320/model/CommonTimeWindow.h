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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_COMMONTIMEWINDOW_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_COMMONTIMEWINDOW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Common time window
                */
                class CommonTimeWindow : public AbstractModel
                {
                public:
                    CommonTimeWindow();
                    ~CommonTimeWindow() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Time window on Monday in the format of 02:00-06:00
                     * @return Monday Time window on Monday in the format of 02:00-06:00
                     */
                    std::string GetMonday() const;

                    /**
                     * 设置Time window on Monday in the format of 02:00-06:00
                     * @param Monday Time window on Monday in the format of 02:00-06:00
                     */
                    void SetMonday(const std::string& _monday);

                    /**
                     * 判断参数 Monday 是否已赋值
                     * @return Monday 是否已赋值
                     */
                    bool MondayHasBeenSet() const;

                    /**
                     * 获取Time window on Tuesday in the format of 02:00-06:00
                     * @return Tuesday Time window on Tuesday in the format of 02:00-06:00
                     */
                    std::string GetTuesday() const;

                    /**
                     * 设置Time window on Tuesday in the format of 02:00-06:00
                     * @param Tuesday Time window on Tuesday in the format of 02:00-06:00
                     */
                    void SetTuesday(const std::string& _tuesday);

                    /**
                     * 判断参数 Tuesday 是否已赋值
                     * @return Tuesday 是否已赋值
                     */
                    bool TuesdayHasBeenSet() const;

                    /**
                     * 获取Time window on Wednesday in the format of 02:00-06:00
                     * @return Wednesday Time window on Wednesday in the format of 02:00-06:00
                     */
                    std::string GetWednesday() const;

                    /**
                     * 设置Time window on Wednesday in the format of 02:00-06:00
                     * @param Wednesday Time window on Wednesday in the format of 02:00-06:00
                     */
                    void SetWednesday(const std::string& _wednesday);

                    /**
                     * 判断参数 Wednesday 是否已赋值
                     * @return Wednesday 是否已赋值
                     */
                    bool WednesdayHasBeenSet() const;

                    /**
                     * 获取Time window on Thursday in the format of 02:00-06:00
                     * @return Thursday Time window on Thursday in the format of 02:00-06:00
                     */
                    std::string GetThursday() const;

                    /**
                     * 设置Time window on Thursday in the format of 02:00-06:00
                     * @param Thursday Time window on Thursday in the format of 02:00-06:00
                     */
                    void SetThursday(const std::string& _thursday);

                    /**
                     * 判断参数 Thursday 是否已赋值
                     * @return Thursday 是否已赋值
                     */
                    bool ThursdayHasBeenSet() const;

                    /**
                     * 获取Time window on Friday in the format of 02:00-06:00
                     * @return Friday Time window on Friday in the format of 02:00-06:00
                     */
                    std::string GetFriday() const;

                    /**
                     * 设置Time window on Friday in the format of 02:00-06:00
                     * @param Friday Time window on Friday in the format of 02:00-06:00
                     */
                    void SetFriday(const std::string& _friday);

                    /**
                     * 判断参数 Friday 是否已赋值
                     * @return Friday 是否已赋值
                     */
                    bool FridayHasBeenSet() const;

                    /**
                     * 获取Time window on Saturday in the format of 02:00-06:00
                     * @return Saturday Time window on Saturday in the format of 02:00-06:00
                     */
                    std::string GetSaturday() const;

                    /**
                     * 设置Time window on Saturday in the format of 02:00-06:00
                     * @param Saturday Time window on Saturday in the format of 02:00-06:00
                     */
                    void SetSaturday(const std::string& _saturday);

                    /**
                     * 判断参数 Saturday 是否已赋值
                     * @return Saturday 是否已赋值
                     */
                    bool SaturdayHasBeenSet() const;

                    /**
                     * 获取Time window on Sunday in the format of 02:00-06:00
                     * @return Sunday Time window on Sunday in the format of 02:00-06:00
                     */
                    std::string GetSunday() const;

                    /**
                     * 设置Time window on Sunday in the format of 02:00-06:00
                     * @param Sunday Time window on Sunday in the format of 02:00-06:00
                     */
                    void SetSunday(const std::string& _sunday);

                    /**
                     * 判断参数 Sunday 是否已赋值
                     * @return Sunday 是否已赋值
                     */
                    bool SundayHasBeenSet() const;

                    /**
                     * 获取Non-archive backup retention policy. Valid values: `weekly` (back up by week), monthly (back up by month), default value: `weekly`.
                     * @return BackupPeriodStrategy Non-archive backup retention policy. Valid values: `weekly` (back up by week), monthly (back up by month), default value: `weekly`.
                     */
                    std::string GetBackupPeriodStrategy() const;

                    /**
                     * 设置Non-archive backup retention policy. Valid values: `weekly` (back up by week), monthly (back up by month), default value: `weekly`.
                     * @param BackupPeriodStrategy Non-archive backup retention policy. Valid values: `weekly` (back up by week), monthly (back up by month), default value: `weekly`.
                     */
                    void SetBackupPeriodStrategy(const std::string& _backupPeriodStrategy);

                    /**
                     * 判断参数 BackupPeriodStrategy 是否已赋值
                     * @return BackupPeriodStrategy 是否已赋值
                     */
                    bool BackupPeriodStrategyHasBeenSet() const;

                    /**
                     * 获取If `BackupPeriodStrategy` is `monthly`, you need to pass in the specific backup dates. The time interval between any two adjacent dates cannot exceed 2 days, for example, [1,4,7,9,11,14,17,19,22,25,28,30,31].
                     * @return Days If `BackupPeriodStrategy` is `monthly`, you need to pass in the specific backup dates. The time interval between any two adjacent dates cannot exceed 2 days, for example, [1,4,7,9,11,14,17,19,22,25,28,30,31].
                     */
                    std::vector<int64_t> GetDays() const;

                    /**
                     * 设置If `BackupPeriodStrategy` is `monthly`, you need to pass in the specific backup dates. The time interval between any two adjacent dates cannot exceed 2 days, for example, [1,4,7,9,11,14,17,19,22,25,28,30,31].
                     * @param Days If `BackupPeriodStrategy` is `monthly`, you need to pass in the specific backup dates. The time interval between any two adjacent dates cannot exceed 2 days, for example, [1,4,7,9,11,14,17,19,22,25,28,30,31].
                     */
                    void SetDays(const std::vector<int64_t>& _days);

                    /**
                     * 判断参数 Days 是否已赋值
                     * @return Days 是否已赋值
                     */
                    bool DaysHasBeenSet() const;

                    /**
                     * 获取Backup time by month in the format of 02:00–06:00, which is required when `BackupPeriodStrategy` is `monthly`.
                     * @return BackupPeriodTime Backup time by month in the format of 02:00–06:00, which is required when `BackupPeriodStrategy` is `monthly`.
                     */
                    std::string GetBackupPeriodTime() const;

                    /**
                     * 设置Backup time by month in the format of 02:00–06:00, which is required when `BackupPeriodStrategy` is `monthly`.
                     * @param BackupPeriodTime Backup time by month in the format of 02:00–06:00, which is required when `BackupPeriodStrategy` is `monthly`.
                     */
                    void SetBackupPeriodTime(const std::string& _backupPeriodTime);

                    /**
                     * 判断参数 BackupPeriodTime 是否已赋值
                     * @return BackupPeriodTime 是否已赋值
                     */
                    bool BackupPeriodTimeHasBeenSet() const;

                private:

                    /**
                     * Time window on Monday in the format of 02:00-06:00
                     */
                    std::string m_monday;
                    bool m_mondayHasBeenSet;

                    /**
                     * Time window on Tuesday in the format of 02:00-06:00
                     */
                    std::string m_tuesday;
                    bool m_tuesdayHasBeenSet;

                    /**
                     * Time window on Wednesday in the format of 02:00-06:00
                     */
                    std::string m_wednesday;
                    bool m_wednesdayHasBeenSet;

                    /**
                     * Time window on Thursday in the format of 02:00-06:00
                     */
                    std::string m_thursday;
                    bool m_thursdayHasBeenSet;

                    /**
                     * Time window on Friday in the format of 02:00-06:00
                     */
                    std::string m_friday;
                    bool m_fridayHasBeenSet;

                    /**
                     * Time window on Saturday in the format of 02:00-06:00
                     */
                    std::string m_saturday;
                    bool m_saturdayHasBeenSet;

                    /**
                     * Time window on Sunday in the format of 02:00-06:00
                     */
                    std::string m_sunday;
                    bool m_sundayHasBeenSet;

                    /**
                     * Non-archive backup retention policy. Valid values: `weekly` (back up by week), monthly (back up by month), default value: `weekly`.
                     */
                    std::string m_backupPeriodStrategy;
                    bool m_backupPeriodStrategyHasBeenSet;

                    /**
                     * If `BackupPeriodStrategy` is `monthly`, you need to pass in the specific backup dates. The time interval between any two adjacent dates cannot exceed 2 days, for example, [1,4,7,9,11,14,17,19,22,25,28,30,31].
                     */
                    std::vector<int64_t> m_days;
                    bool m_daysHasBeenSet;

                    /**
                     * Backup time by month in the format of 02:00–06:00, which is required when `BackupPeriodStrategy` is `monthly`.
                     */
                    std::string m_backupPeriodTime;
                    bool m_backupPeriodTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_COMMONTIMEWINDOW_H_
