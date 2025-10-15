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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_WORKFLOWSCHEDULERCONFIGURATION_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_WORKFLOWSCHEDULERCONFIGURATION_H_

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
                * Unified workflow scheduling response parameters structure.
                */
                class WorkflowSchedulerConfiguration : public AbstractModel
                {
                public:
                    WorkflowSchedulerConfiguration();
                    ~WorkflowSchedulerConfiguration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies the time zone.
                     * @return ScheduleTimeZone Specifies the time zone.
                     * 
                     */
                    std::string GetScheduleTimeZone() const;

                    /**
                     * 设置Specifies the time zone.
                     * @param _scheduleTimeZone Specifies the time zone.
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
                     * 获取Period type. Supported types:

ONEOFF_CYCLE: specifies a one-time cycle.
YEAR_CYCLE: specifies the year cycle.
MONTH_CYCLE: specifies the monthly cycle.
WEEK_CYCLE: specifies the week cycle.
DAY_CYCLE: specifies the day cycle.
HOUR_CYCLE: specifies the hour cycle.
MINUTE_CYCLE: specifies the minute cycle.
CRONTAB_CYCLE: specifies the crontab expression type
                     * @return CycleType Period type. Supported types:

ONEOFF_CYCLE: specifies a one-time cycle.
YEAR_CYCLE: specifies the year cycle.
MONTH_CYCLE: specifies the monthly cycle.
WEEK_CYCLE: specifies the week cycle.
DAY_CYCLE: specifies the day cycle.
HOUR_CYCLE: specifies the hour cycle.
MINUTE_CYCLE: specifies the minute cycle.
CRONTAB_CYCLE: specifies the crontab expression type
                     * 
                     */
                    std::string GetCycleType() const;

                    /**
                     * 设置Period type. Supported types:

ONEOFF_CYCLE: specifies a one-time cycle.
YEAR_CYCLE: specifies the year cycle.
MONTH_CYCLE: specifies the monthly cycle.
WEEK_CYCLE: specifies the week cycle.
DAY_CYCLE: specifies the day cycle.
HOUR_CYCLE: specifies the hour cycle.
MINUTE_CYCLE: specifies the minute cycle.
CRONTAB_CYCLE: specifies the crontab expression type
                     * @param _cycleType Period type. Supported types:

ONEOFF_CYCLE: specifies a one-time cycle.
YEAR_CYCLE: specifies the year cycle.
MONTH_CYCLE: specifies the monthly cycle.
WEEK_CYCLE: specifies the week cycle.
DAY_CYCLE: specifies the day cycle.
HOUR_CYCLE: specifies the hour cycle.
MINUTE_CYCLE: specifies the minute cycle.
CRONTAB_CYCLE: specifies the crontab expression type
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
                     * 获取Self-Dependent. Valid values: parallel, serial, orderly. Default value: serial. 
                     * @return SelfDepend Self-Dependent. Valid values: parallel, serial, orderly. Default value: serial. 
                     * 
                     */
                    std::string GetSelfDepend() const;

                    /**
                     * 设置Self-Dependent. Valid values: parallel, serial, orderly. Default value: serial. 
                     * @param _selfDepend Self-Dependent. Valid values: parallel, serial, orderly. Default value: serial. 
                     * 
                     */
                    void SetSelfDepend(const std::string& _selfDepend);

                    /**
                     * 判断参数 SelfDepend 是否已赋值
                     * @return SelfDepend 是否已赋值
                     * 
                     */
                    bool SelfDependHasBeenSet() const;

                    /**
                     * 获取Effective Start Time
                     * @return StartTime Effective Start Time
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Effective Start Time
                     * @param _startTime Effective Start Time
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
                     * 获取Effective End Time.
                     * @return EndTime Effective End Time.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Effective End Time.
                     * @param _endTime Effective End Time.
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
                     * 获取Workflow dependency. Valid values: yes or no.
                     * @return DependencyWorkflow Workflow dependency. Valid values: yes or no.
                     * 
                     */
                    std::string GetDependencyWorkflow() const;

                    /**
                     * 设置Workflow dependency. Valid values: yes or no.
                     * @param _dependencyWorkflow Workflow dependency. Valid values: yes or no.
                     * 
                     */
                    void SetDependencyWorkflow(const std::string& _dependencyWorkflow);

                    /**
                     * 判断参数 DependencyWorkflow 是否已赋值
                     * @return DependencyWorkflow 是否已赋值
                     * 
                     */
                    bool DependencyWorkflowHasBeenSet() const;

                    /**
                     * 获取Execution time. specifies the left-closed interval. example: 00:00.
                     * @return ExecutionStartTime Execution time. specifies the left-closed interval. example: 00:00.
                     * 
                     */
                    std::string GetExecutionStartTime() const;

                    /**
                     * 设置Execution time. specifies the left-closed interval. example: 00:00.
                     * @param _executionStartTime Execution time. specifies the left-closed interval. example: 00:00.
                     * 
                     */
                    void SetExecutionStartTime(const std::string& _executionStartTime);

                    /**
                     * 判断参数 ExecutionStartTime 是否已赋值
                     * @return ExecutionStartTime 是否已赋值
                     * 
                     */
                    bool ExecutionStartTimeHasBeenSet() const;

                    /**
                     * 获取Execution time right closed interval, for example: 23:59.

                     * @return ExecutionEndTime Execution time right closed interval, for example: 23:59.

                     * 
                     */
                    std::string GetExecutionEndTime() const;

                    /**
                     * 设置Execution time right closed interval, for example: 23:59.

                     * @param _executionEndTime Execution time right closed interval, for example: 23:59.

                     * 
                     */
                    void SetExecutionEndTime(const std::string& _executionEndTime);

                    /**
                     * 判断参数 ExecutionEndTime 是否已赋值
                     * @return ExecutionEndTime 是否已赋值
                     * 
                     */
                    bool ExecutionEndTimeHasBeenSet() const;

                    /**
                     * 获取Cron expression


                     * @return CrontabExpression Cron expression


                     * 
                     */
                    std::string GetCrontabExpression() const;

                    /**
                     * 设置Cron expression


                     * @param _crontabExpression Cron expression


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
                     * 获取Whether calendar scheduling is enabled. Valid values: 1 (enabled), 0 (disabled).
                     * @return CalendarOpen Whether calendar scheduling is enabled. Valid values: 1 (enabled), 0 (disabled).
                     * 
                     */
                    std::string GetCalendarOpen() const;

                    /**
                     * 设置Whether calendar scheduling is enabled. Valid values: 1 (enabled), 0 (disabled).
                     * @param _calendarOpen Whether calendar scheduling is enabled. Valid values: 1 (enabled), 0 (disabled).
                     * 
                     */
                    void SetCalendarOpen(const std::string& _calendarOpen);

                    /**
                     * 判断参数 CalendarOpen 是否已赋值
                     * @return CalendarOpen 是否已赋值
                     * 
                     */
                    bool CalendarOpenHasBeenSet() const;

                    /**
                     * 获取Calendar name.
                     * @return CalendarName Calendar name.
                     * 
                     */
                    std::string GetCalendarName() const;

                    /**
                     * 设置Calendar name.
                     * @param _calendarName Calendar name.
                     * 
                     */
                    void SetCalendarName(const std::string& _calendarName);

                    /**
                     * 判断参数 CalendarName 是否已赋值
                     * @return CalendarName 是否已赋值
                     * 
                     */
                    bool CalendarNameHasBeenSet() const;

                    /**
                     * 获取Calendar id.
                     * @return CalendarId Calendar id.
                     * 
                     */
                    std::string GetCalendarId() const;

                    /**
                     * 设置Calendar id.
                     * @param _calendarId Calendar id.
                     * 
                     */
                    void SetCalendarId(const std::string& _calendarId);

                    /**
                     * 判断参数 CalendarId 是否已赋值
                     * @return CalendarId 是否已赋值
                     * 
                     */
                    bool CalendarIdHasBeenSet() const;

                private:

                    /**
                     * Specifies the time zone.
                     */
                    std::string m_scheduleTimeZone;
                    bool m_scheduleTimeZoneHasBeenSet;

                    /**
                     * Period type. Supported types:

ONEOFF_CYCLE: specifies a one-time cycle.
YEAR_CYCLE: specifies the year cycle.
MONTH_CYCLE: specifies the monthly cycle.
WEEK_CYCLE: specifies the week cycle.
DAY_CYCLE: specifies the day cycle.
HOUR_CYCLE: specifies the hour cycle.
MINUTE_CYCLE: specifies the minute cycle.
CRONTAB_CYCLE: specifies the crontab expression type
                     */
                    std::string m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                    /**
                     * Self-Dependent. Valid values: parallel, serial, orderly. Default value: serial. 
                     */
                    std::string m_selfDepend;
                    bool m_selfDependHasBeenSet;

                    /**
                     * Effective Start Time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Effective End Time.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Workflow dependency. Valid values: yes or no.
                     */
                    std::string m_dependencyWorkflow;
                    bool m_dependencyWorkflowHasBeenSet;

                    /**
                     * Execution time. specifies the left-closed interval. example: 00:00.
                     */
                    std::string m_executionStartTime;
                    bool m_executionStartTimeHasBeenSet;

                    /**
                     * Execution time right closed interval, for example: 23:59.

                     */
                    std::string m_executionEndTime;
                    bool m_executionEndTimeHasBeenSet;

                    /**
                     * Cron expression


                     */
                    std::string m_crontabExpression;
                    bool m_crontabExpressionHasBeenSet;

                    /**
                     * Whether calendar scheduling is enabled. Valid values: 1 (enabled), 0 (disabled).
                     */
                    std::string m_calendarOpen;
                    bool m_calendarOpenHasBeenSet;

                    /**
                     * Calendar name.
                     */
                    std::string m_calendarName;
                    bool m_calendarNameHasBeenSet;

                    /**
                     * Calendar id.
                     */
                    std::string m_calendarId;
                    bool m_calendarIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_WORKFLOWSCHEDULERCONFIGURATION_H_
