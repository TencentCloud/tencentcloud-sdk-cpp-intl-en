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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_WORKFLOWTRIGGERCONFIG_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_WORKFLOWTRIGGERCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Workflow scheduling configuration.
                */
                class WorkflowTriggerConfig : public AbstractModel
                {
                public:
                    WorkflowTriggerConfig();
                    ~WorkflowTriggerConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Trigger mode.
-Scheduled TRIGGER: TIME_TRIGGER.
- CONTINUE_RUN: continuously RUN.
-FILE_ARRIVAL.

Note:.
-In TIME_TRIGGER and CONTINUE_RUN mode, SchedulerStatus, SchedulerTimeZone, StartTime, EndTime, ConfigMode, CycleType, and CrontabExpression are required.
-In FILE_ARRIVAL mode, FileArrivalPath, TriggerMinimumIntervalSecond, and TriggerWaitTimeSecond are required.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TriggerMode Trigger mode.
-Scheduled TRIGGER: TIME_TRIGGER.
- CONTINUE_RUN: continuously RUN.
-FILE_ARRIVAL.

Note:.
-In TIME_TRIGGER and CONTINUE_RUN mode, SchedulerStatus, SchedulerTimeZone, StartTime, EndTime, ConfigMode, CycleType, and CrontabExpression are required.
-In FILE_ARRIVAL mode, FileArrivalPath, TriggerMinimumIntervalSecond, and TriggerWaitTimeSecond are required.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTriggerMode() const;

                    /**
                     * 设置Trigger mode.
-Scheduled TRIGGER: TIME_TRIGGER.
- CONTINUE_RUN: continuously RUN.
-FILE_ARRIVAL.

Note:.
-In TIME_TRIGGER and CONTINUE_RUN mode, SchedulerStatus, SchedulerTimeZone, StartTime, EndTime, ConfigMode, CycleType, and CrontabExpression are required.
-In FILE_ARRIVAL mode, FileArrivalPath, TriggerMinimumIntervalSecond, and TriggerWaitTimeSecond are required.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _triggerMode Trigger mode.
-Scheduled TRIGGER: TIME_TRIGGER.
- CONTINUE_RUN: continuously RUN.
-FILE_ARRIVAL.

Note:.
-In TIME_TRIGGER and CONTINUE_RUN mode, SchedulerStatus, SchedulerTimeZone, StartTime, EndTime, ConfigMode, CycleType, and CrontabExpression are required.
-In FILE_ARRIVAL mode, FileArrivalPath, TriggerMinimumIntervalSecond, and TriggerWaitTimeSecond are required.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTriggerMode(const std::string& _triggerMode);

                    /**
                     * 判断参数 TriggerMode 是否已赋值
                     * @return TriggerMode 是否已赋值
                     * 
                     */
                    bool TriggerModeHasBeenSet() const;

                    /**
                     * 获取Convert WorkflowTriggerConfig into Json format for reconciliation usage.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExtraInfo Convert WorkflowTriggerConfig into Json format for reconciliation usage.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExtraInfo() const;

                    /**
                     * 设置Convert WorkflowTriggerConfig into Json format for reconciliation usage.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _extraInfo Convert WorkflowTriggerConfig into Json format for reconciliation usage.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExtraInfo(const std::string& _extraInfo);

                    /**
                     * 判断参数 ExtraInfo 是否已赋值
                     * @return ExtraInfo 是否已赋值
                     * 
                     */
                    bool ExtraInfoHasBeenSet() const;

                    /**
                     * 获取Scheduling time zone.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ScheduleTimeZone Scheduling time zone.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetScheduleTimeZone() const;

                    /**
                     * 设置Scheduling time zone.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _scheduleTimeZone Scheduling time zone.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetScheduleTimeZone(const std::string& _scheduleTimeZone);

                    /**
                     * 判断参数 ScheduleTimeZone 是否已赋值
                     * @return ScheduleTimeZone 是否已赋值
                     * 
                     */
                    bool ScheduleTimeZoneHasBeenSet() const;

                    /**
                     * 获取Schedule effective time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StartTime Schedule effective time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Schedule effective time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _startTime Schedule effective time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Schedule end time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EndTime Schedule end time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Schedule end time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _endTime Schedule end time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Setting method, general: COMMON, CRON EXPRESSION: CRON_EXPRESSION.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ConfigMode Setting method, general: COMMON, CRON EXPRESSION: CRON_EXPRESSION.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetConfigMode() const;

                    /**
                     * 设置Setting method, general: COMMON, CRON EXPRESSION: CRON_EXPRESSION.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _configMode Setting method, general: COMMON, CRON EXPRESSION: CRON_EXPRESSION.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetConfigMode(const std::string& _configMode);

                    /**
                     * 判断参数 ConfigMode 是否已赋值
                     * @return ConfigMode 是否已赋值
                     * 
                     */
                    bool ConfigModeHasBeenSet() const;

                    /**
                     * 获取Period type: supported types are.
ONEOFF_CYCLE: one-time.
YEAR_CYCLE: year.
MONTH_CYCLE: month.
WEEK_CYCLE: week.
DAY_CYCLE: day.
HOUR_CYCLE: hr.
MINUTE_CYCLE: minute.
CRONTAB_CYCLE: crontab expression type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CycleType Period type: supported types are.
ONEOFF_CYCLE: one-time.
YEAR_CYCLE: year.
MONTH_CYCLE: month.
WEEK_CYCLE: week.
DAY_CYCLE: day.
HOUR_CYCLE: hr.
MINUTE_CYCLE: minute.
CRONTAB_CYCLE: crontab expression type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCycleType() const;

                    /**
                     * 设置Period type: supported types are.
ONEOFF_CYCLE: one-time.
YEAR_CYCLE: year.
MONTH_CYCLE: month.
WEEK_CYCLE: week.
DAY_CYCLE: day.
HOUR_CYCLE: hr.
MINUTE_CYCLE: minute.
CRONTAB_CYCLE: crontab expression type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cycleType Period type: supported types are.
ONEOFF_CYCLE: one-time.
YEAR_CYCLE: year.
MONTH_CYCLE: month.
WEEK_CYCLE: week.
DAY_CYCLE: day.
HOUR_CYCLE: hr.
MINUTE_CYCLE: minute.
CRONTAB_CYCLE: crontab expression type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCycleType(const std::string& _cycleType);

                    /**
                     * 判断参数 CycleType 是否已赋值
                     * @return CycleType 是否已赋值
                     * 
                     */
                    bool CycleTypeHasBeenSet() const;

                    /**
                     * 获取Cron expression
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CrontabExpression Cron expression
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCrontabExpression() const;

                    /**
                     * 设置Cron expression
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _crontabExpression Cron expression
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCrontabExpression(const std::string& _crontabExpression);

                    /**
                     * 判断参数 CrontabExpression 是否已赋值
                     * @return CrontabExpression 是否已赋值
                     * 
                     */
                    bool CrontabExpressionHasBeenSet() const;

                    /**
                     * 获取triggerId, uuid
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TriggerId triggerId, uuid
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTriggerId() const;

                    /**
                     * 设置triggerId, uuid
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _triggerId triggerId, uuid
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTriggerId(const std::string& _triggerId);

                    /**
                     * 判断参数 TriggerId 是否已赋值
                     * @return TriggerId 是否已赋值
                     * 
                     */
                    bool TriggerIdHasBeenSet() const;

                    /**
                     * 获取Listening path in the storage system under file arrival mode.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FileArrivalPath Listening path in the storage system under file arrival mode.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFileArrivalPath() const;

                    /**
                     * 设置Listening path in the storage system under file arrival mode.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fileArrivalPath Listening path in the storage system under file arrival mode.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFileArrivalPath(const std::string& _fileArrivalPath);

                    /**
                     * 判断参数 FileArrivalPath 是否已赋值
                     * @return FileArrivalPath 是否已赋值
                     * 
                     */
                    bool FileArrivalPathHasBeenSet() const;

                    /**
                     * 获取File arrival mode triggers the shortest interval (unit: s).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TriggerMinimumIntervalSecond File arrival mode triggers the shortest interval (unit: s).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetTriggerMinimumIntervalSecond() const;

                    /**
                     * 设置File arrival mode triggers the shortest interval (unit: s).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _triggerMinimumIntervalSecond File arrival mode triggers the shortest interval (unit: s).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTriggerMinimumIntervalSecond(const uint64_t& _triggerMinimumIntervalSecond);

                    /**
                     * 判断参数 TriggerMinimumIntervalSecond 是否已赋值
                     * @return TriggerMinimumIntervalSecond 是否已赋值
                     * 
                     */
                    bool TriggerMinimumIntervalSecondHasBeenSet() const;

                    /**
                     * 获取File arrival in mode. trigger waiting time (unit: seconds).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TriggerWaitTimeSecond File arrival in mode. trigger waiting time (unit: seconds).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetTriggerWaitTimeSecond() const;

                    /**
                     * 设置File arrival in mode. trigger waiting time (unit: seconds).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _triggerWaitTimeSecond File arrival in mode. trigger waiting time (unit: seconds).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTriggerWaitTimeSecond(const uint64_t& _triggerWaitTimeSecond);

                    /**
                     * 判断参数 TriggerWaitTimeSecond 是否已赋值
                     * @return TriggerWaitTimeSecond 是否已赋值
                     * 
                     */
                    bool TriggerWaitTimeSecondHasBeenSet() const;

                    /**
                     * 获取Trigger status. valid values: ACTIVE (start), PAUSED (suspend).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SchedulerStatus Trigger status. valid values: ACTIVE (start), PAUSED (suspend).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSchedulerStatus() const;

                    /**
                     * 设置Trigger status. valid values: ACTIVE (start), PAUSED (suspend).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _schedulerStatus Trigger status. valid values: ACTIVE (start), PAUSED (suspend).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSchedulerStatus(const std::string& _schedulerStatus);

                    /**
                     * 判断参数 SchedulerStatus 是否已赋值
                     * @return SchedulerStatus 是否已赋值
                     * 
                     */
                    bool SchedulerStatusHasBeenSet() const;

                private:

                    /**
                     * Trigger mode.
-Scheduled TRIGGER: TIME_TRIGGER.
- CONTINUE_RUN: continuously RUN.
-FILE_ARRIVAL.

Note:.
-In TIME_TRIGGER and CONTINUE_RUN mode, SchedulerStatus, SchedulerTimeZone, StartTime, EndTime, ConfigMode, CycleType, and CrontabExpression are required.
-In FILE_ARRIVAL mode, FileArrivalPath, TriggerMinimumIntervalSecond, and TriggerWaitTimeSecond are required.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_triggerMode;
                    bool m_triggerModeHasBeenSet;

                    /**
                     * Convert WorkflowTriggerConfig into Json format for reconciliation usage.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_extraInfo;
                    bool m_extraInfoHasBeenSet;

                    /**
                     * Scheduling time zone.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_scheduleTimeZone;
                    bool m_scheduleTimeZoneHasBeenSet;

                    /**
                     * Schedule effective time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Schedule end time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Setting method, general: COMMON, CRON EXPRESSION: CRON_EXPRESSION.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_configMode;
                    bool m_configModeHasBeenSet;

                    /**
                     * Period type: supported types are.
ONEOFF_CYCLE: one-time.
YEAR_CYCLE: year.
MONTH_CYCLE: month.
WEEK_CYCLE: week.
DAY_CYCLE: day.
HOUR_CYCLE: hr.
MINUTE_CYCLE: minute.
CRONTAB_CYCLE: crontab expression type.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                    /**
                     * Cron expression
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_crontabExpression;
                    bool m_crontabExpressionHasBeenSet;

                    /**
                     * triggerId, uuid
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_triggerId;
                    bool m_triggerIdHasBeenSet;

                    /**
                     * Listening path in the storage system under file arrival mode.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_fileArrivalPath;
                    bool m_fileArrivalPathHasBeenSet;

                    /**
                     * File arrival mode triggers the shortest interval (unit: s).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_triggerMinimumIntervalSecond;
                    bool m_triggerMinimumIntervalSecondHasBeenSet;

                    /**
                     * File arrival in mode. trigger waiting time (unit: seconds).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_triggerWaitTimeSecond;
                    bool m_triggerWaitTimeSecondHasBeenSet;

                    /**
                     * Trigger status. valid values: ACTIVE (start), PAUSED (suspend).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_schedulerStatus;
                    bool m_schedulerStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_WORKFLOWTRIGGERCONFIG_H_
