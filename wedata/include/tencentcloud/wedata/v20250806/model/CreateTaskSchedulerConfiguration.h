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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATETASKSCHEDULERCONFIGURATION_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATETASKSCHEDULERCONFIGURATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/DependencyTaskBrief.h>
#include <tencentcloud/wedata/v20250806/model/EventListener.h>
#include <tencentcloud/wedata/v20250806/model/OutTaskParameter.h>
#include <tencentcloud/wedata/v20250806/model/InTaskParameter.h>
#include <tencentcloud/wedata/v20250806/model/TaskDataRegistry.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Creates task scheduling configuration info.
                */
                class CreateTaskSchedulerConfiguration : public AbstractModel
                {
                public:
                    CreateTaskSchedulerConfiguration();
                    ~CreateTaskSchedulerConfiguration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Period type: defaults to DAY_CYCLE.

Supported types. 

ONEOFF_CYCLE: specifies a one-time cycle.
YEAR_CYCLE: specifies the year cycle.
MONTH_CYCLE: specifies the monthly cycle.
WEEK_CYCLE: specifies the week cycle.
DAY_CYCLE: specifies the day cycle.
HOUR_CYCLE: specifies the hour cycle.
MINUTE_CYCLE: specifies the minute cycle.
CRONTAB_CYCLE: specifies the crontab expression type.
                     * @return CycleType Period type: defaults to DAY_CYCLE.

Supported types. 

ONEOFF_CYCLE: specifies a one-time cycle.
YEAR_CYCLE: specifies the year cycle.
MONTH_CYCLE: specifies the monthly cycle.
WEEK_CYCLE: specifies the week cycle.
DAY_CYCLE: specifies the day cycle.
HOUR_CYCLE: specifies the hour cycle.
MINUTE_CYCLE: specifies the minute cycle.
CRONTAB_CYCLE: specifies the crontab expression type.
                     * 
                     */
                    std::string GetCycleType() const;

                    /**
                     * 设置Period type: defaults to DAY_CYCLE.

Supported types. 

ONEOFF_CYCLE: specifies a one-time cycle.
YEAR_CYCLE: specifies the year cycle.
MONTH_CYCLE: specifies the monthly cycle.
WEEK_CYCLE: specifies the week cycle.
DAY_CYCLE: specifies the day cycle.
HOUR_CYCLE: specifies the hour cycle.
MINUTE_CYCLE: specifies the minute cycle.
CRONTAB_CYCLE: specifies the crontab expression type.
                     * @param _cycleType Period type: defaults to DAY_CYCLE.

Supported types. 

ONEOFF_CYCLE: specifies a one-time cycle.
YEAR_CYCLE: specifies the year cycle.
MONTH_CYCLE: specifies the monthly cycle.
WEEK_CYCLE: specifies the week cycle.
DAY_CYCLE: specifies the day cycle.
HOUR_CYCLE: specifies the hour cycle.
MINUTE_CYCLE: specifies the minute cycle.
CRONTAB_CYCLE: specifies the crontab expression type.
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
                     * 获取Time zone, defaults to UTC+8.
                     * @return ScheduleTimeZone Time zone, defaults to UTC+8.
                     * 
                     */
                    std::string GetScheduleTimeZone() const;

                    /**
                     * 设置Time zone, defaults to UTC+8.
                     * @param _scheduleTimeZone Time zone, defaults to UTC+8.
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
                     * 获取Cron expression, defaults to 0 0 0 * * ? *.
                     * @return CrontabExpression Cron expression, defaults to 0 0 0 * * ? *.
                     * 
                     */
                    std::string GetCrontabExpression() const;

                    /**
                     * 设置Cron expression, defaults to 0 0 0 * * ? *.
                     * @param _crontabExpression Cron expression, defaults to 0 0 0 * * ? *.
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
                     * 获取Effective date, defaults to 00:00:00 of the current date.
                     * @return StartTime Effective date, defaults to 00:00:00 of the current date.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Effective date, defaults to 00:00:00 of the current date.
                     * @param _startTime Effective date, defaults to 00:00:00 of the current date.
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
                     * 获取End date, defaults to 2099-12-31 23:59:59.
                     * @return EndTime End date, defaults to 2099-12-31 23:59:59.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End date, defaults to 2099-12-31 23:59:59.
                     * @param _endTime End date, defaults to 2099-12-31 23:59:59.
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
                     * 获取Execution time: the left-closed interval. Default: 00:00.
                     * @return ExecutionStartTime Execution time: the left-closed interval. Default: 00:00.
                     * 
                     */
                    std::string GetExecutionStartTime() const;

                    /**
                     * 设置Execution time: the left-closed interval. Default: 00:00.
                     * @param _executionStartTime Execution time: the left-closed interval. Default: 00:00.
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
                     * 获取Execution time: the right closed interval. Default: 23:59.
                     * @return ExecutionEndTime Execution time: the right closed interval. Default: 23:59.
                     * 
                     */
                    std::string GetExecutionEndTime() const;

                    /**
                     * 设置Execution time: the right closed interval. Default: 23:59.
                     * @param _executionEndTime Execution time: the right closed interval. Default: 23:59.
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
                     * 获取Scheduling type: 0 for normal scheduling, 1 for dry-run scheduling. Default is 0.
                     * @return ScheduleRunType Scheduling type: 0 for normal scheduling, 1 for dry-run scheduling. Default is 0.
                     * 
                     */
                    std::string GetScheduleRunType() const;

                    /**
                     * 设置Scheduling type: 0 for normal scheduling, 1 for dry-run scheduling. Default is 0.
                     * @param _scheduleRunType Scheduling type: 0 for normal scheduling, 1 for dry-run scheduling. Default is 0.
                     * 
                     */
                    void SetScheduleRunType(const std::string& _scheduleRunType);

                    /**
                     * 判断参数 ScheduleRunType 是否已赋值
                     * @return ScheduleRunType 是否已赋值
                     * 
                     */
                    bool ScheduleRunTypeHasBeenSet() const;

                    /**
                     * 获取Calendar scheduling value: 0 or 1, where 1 means ON and 0 means OFF. Default is 0.
                     * @return CalendarOpen Calendar scheduling value: 0 or 1, where 1 means ON and 0 means OFF. Default is 0.
                     * 
                     */
                    std::string GetCalendarOpen() const;

                    /**
                     * 设置Calendar scheduling value: 0 or 1, where 1 means ON and 0 means OFF. Default is 0.
                     * @param _calendarOpen Calendar scheduling value: 0 or 1, where 1 means ON and 0 means OFF. Default is 0.
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
                     * 获取Calendar scheduling:  the calendar ID.
                     * @return CalendarId Calendar scheduling:  the calendar ID.
                     * 
                     */
                    std::string GetCalendarId() const;

                    /**
                     * 设置Calendar scheduling:  the calendar ID.
                     * @param _calendarId Calendar scheduling:  the calendar ID.
                     * 
                     */
                    void SetCalendarId(const std::string& _calendarId);

                    /**
                     * 判断参数 CalendarId 是否已赋值
                     * @return CalendarId 是否已赋值
                     * 
                     */
                    bool CalendarIdHasBeenSet() const;

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
                     * 获取Specifies the upstream dependency list.
                     * @return UpstreamDependencyConfigList Specifies the upstream dependency list.
                     * 
                     */
                    std::vector<DependencyTaskBrief> GetUpstreamDependencyConfigList() const;

                    /**
                     * 设置Specifies the upstream dependency list.
                     * @param _upstreamDependencyConfigList Specifies the upstream dependency list.
                     * 
                     */
                    void SetUpstreamDependencyConfigList(const std::vector<DependencyTaskBrief>& _upstreamDependencyConfigList);

                    /**
                     * 判断参数 UpstreamDependencyConfigList 是否已赋值
                     * @return UpstreamDependencyConfigList 是否已赋值
                     * 
                     */
                    bool UpstreamDependencyConfigListHasBeenSet() const;

                    /**
                     * 获取List of Events
                     * @return EventListenerList List of Events
                     * 
                     */
                    std::vector<EventListener> GetEventListenerList() const;

                    /**
                     * 设置List of Events
                     * @param _eventListenerList List of Events
                     * 
                     */
                    void SetEventListenerList(const std::vector<EventListener>& _eventListenerList);

                    /**
                     * 判断参数 EventListenerList 是否已赋值
                     * @return EventListenerList 是否已赋值
                     * 
                     */
                    bool EventListenerListHasBeenSet() const;

                    /**
                     * 获取Task scheduling priority. Valid values: 4 (high), 5 (medium), 6 (low). Default: 6.
                     * @return RunPriority Task scheduling priority. Valid values: 4 (high), 5 (medium), 6 (low). Default: 6.
                     * 
                     */
                    std::string GetRunPriority() const;

                    /**
                     * 设置Task scheduling priority. Valid values: 4 (high), 5 (medium), 6 (low). Default: 6.
                     * @param _runPriority Task scheduling priority. Valid values: 4 (high), 5 (medium), 6 (low). Default: 6.
                     * 
                     */
                    void SetRunPriority(const std::string& _runPriority);

                    /**
                     * 判断参数 RunPriority 是否已赋值
                     * @return RunPriority 是否已赋值
                     * 
                     */
                    bool RunPriorityHasBeenSet() const;

                    /**
                     * 获取Retry Policy: Retry Wait Time (in minutes): Default 5
                     * @return RetryWait Retry Policy: Retry Wait Time (in minutes): Default 5
                     * 
                     */
                    std::string GetRetryWait() const;

                    /**
                     * 设置Retry Policy: Retry Wait Time (in minutes): Default 5
                     * @param _retryWait Retry Policy: Retry Wait Time (in minutes): Default 5
                     * 
                     */
                    void SetRetryWait(const std::string& _retryWait);

                    /**
                     * 判断参数 RetryWait 是否已赋值
                     * @return RetryWait 是否已赋值
                     * 
                     */
                    bool RetryWaitHasBeenSet() const;

                    /**
                     * 获取Retry Policy: maximum attempts. Default: 4.
                     * @return MaxRetryAttempts Retry Policy: maximum attempts. Default: 4.
                     * 
                     */
                    std::string GetMaxRetryAttempts() const;

                    /**
                     * 设置Retry Policy: maximum attempts. Default: 4.
                     * @param _maxRetryAttempts Retry Policy: maximum attempts. Default: 4.
                     * 
                     */
                    void SetMaxRetryAttempts(const std::string& _maxRetryAttempts);

                    /**
                     * 判断参数 MaxRetryAttempts 是否已赋值
                     * @return MaxRetryAttempts 是否已赋值
                     * 
                     */
                    bool MaxRetryAttemptsHasBeenSet() const;

                    /**
                     * 获取Timeout Handling Policy: Execution Timeout (in minutes), default: -1
                     * @return ExecutionTTL Timeout Handling Policy: Execution Timeout (in minutes), default: -1
                     * 
                     */
                    std::string GetExecutionTTL() const;

                    /**
                     * 设置Timeout Handling Policy: Execution Timeout (in minutes), default: -1
                     * @param _executionTTL Timeout Handling Policy: Execution Timeout (in minutes), default: -1
                     * 
                     */
                    void SetExecutionTTL(const std::string& _executionTTL);

                    /**
                     * 判断参数 ExecutionTTL 是否已赋值
                     * @return ExecutionTTL 是否已赋值
                     * 
                     */
                    bool ExecutionTTLHasBeenSet() const;

                    /**
                     * 获取Timeout Handling Policy: Wait Duration Timeout  (in minutes), default: -1
                     * @return WaitExecutionTotalTTL Timeout Handling Policy: Wait Duration Timeout  (in minutes), default: -1
                     * 
                     */
                    std::string GetWaitExecutionTotalTTL() const;

                    /**
                     * 设置Timeout Handling Policy: Wait Duration Timeout  (in minutes), default: -1
                     * @param _waitExecutionTotalTTL Timeout Handling Policy: Wait Duration Timeout  (in minutes), default: -1
                     * 
                     */
                    void SetWaitExecutionTotalTTL(const std::string& _waitExecutionTotalTTL);

                    /**
                     * 判断参数 WaitExecutionTotalTTL 是否已赋值
                     * @return WaitExecutionTotalTTL 是否已赋值
                     * 
                     */
                    bool WaitExecutionTotalTTLHasBeenSet() const;

                    /**
                     * 获取Rerun & Refill Configuration: Default: ALL;

* ALL: Rerun or refill is allowed regardless of whether the task succeeds or fails.

* FAILURE: Rerun or refill is allowed only if the task fails; not allowed if the task succeeds.

* NONE: Rerun or refill is not allowed regardless of success or failure.
                     * @return AllowRedoType Rerun & Refill Configuration: Default: ALL;

* ALL: Rerun or refill is allowed regardless of whether the task succeeds or fails.

* FAILURE: Rerun or refill is allowed only if the task fails; not allowed if the task succeeds.

* NONE: Rerun or refill is not allowed regardless of success or failure.
                     * 
                     */
                    std::string GetAllowRedoType() const;

                    /**
                     * 设置Rerun & Refill Configuration: Default: ALL;

* ALL: Rerun or refill is allowed regardless of whether the task succeeds or fails.

* FAILURE: Rerun or refill is allowed only if the task fails; not allowed if the task succeeds.

* NONE: Rerun or refill is not allowed regardless of success or failure.
                     * @param _allowRedoType Rerun & Refill Configuration: Default: ALL;

* ALL: Rerun or refill is allowed regardless of whether the task succeeds or fails.

* FAILURE: Rerun or refill is allowed only if the task fails; not allowed if the task succeeds.

* NONE: Rerun or refill is not allowed regardless of success or failure.
                     * 
                     */
                    void SetAllowRedoType(const std::string& _allowRedoType);

                    /**
                     * 判断参数 AllowRedoType 是否已赋值
                     * @return AllowRedoType 是否已赋值
                     * 
                     */
                    bool AllowRedoTypeHasBeenSet() const;

                    /**
                     * 获取Output parameter list.
                     * @return ParamTaskOutList Output parameter list.
                     * 
                     */
                    std::vector<OutTaskParameter> GetParamTaskOutList() const;

                    /**
                     * 设置Output parameter list.
                     * @param _paramTaskOutList Output parameter list.
                     * 
                     */
                    void SetParamTaskOutList(const std::vector<OutTaskParameter>& _paramTaskOutList);

                    /**
                     * 判断参数 ParamTaskOutList 是否已赋值
                     * @return ParamTaskOutList 是否已赋值
                     * 
                     */
                    bool ParamTaskOutListHasBeenSet() const;

                    /**
                     * 获取Input parameter list.
                     * @return ParamTaskInList Input parameter list.
                     * 
                     */
                    std::vector<InTaskParameter> GetParamTaskInList() const;

                    /**
                     * 设置Input parameter list.
                     * @param _paramTaskInList Input parameter list.
                     * 
                     */
                    void SetParamTaskInList(const std::vector<InTaskParameter>& _paramTaskInList);

                    /**
                     * 判断参数 ParamTaskInList 是否已赋值
                     * @return ParamTaskInList 是否已赋值
                     * 
                     */
                    bool ParamTaskInListHasBeenSet() const;

                    /**
                     * 获取Output registration.
                     * @return TaskOutputRegistryList Output registration.
                     * 
                     */
                    std::vector<TaskDataRegistry> GetTaskOutputRegistryList() const;

                    /**
                     * 设置Output registration.
                     * @param _taskOutputRegistryList Output registration.
                     * 
                     */
                    void SetTaskOutputRegistryList(const std::vector<TaskDataRegistry>& _taskOutputRegistryList);

                    /**
                     * 判断参数 TaskOutputRegistryList 是否已赋值
                     * @return TaskOutputRegistryList 是否已赋值
                     * 
                     */
                    bool TaskOutputRegistryListHasBeenSet() const;

                    /**
                     * 获取**Instance generation policy**.
T_PLUS_0: specifies t+0 generation. default policy.
T_PLUS_1: specifies t+1 generation.
                     * @return InitStrategy **Instance generation policy**.
T_PLUS_0: specifies t+0 generation. default policy.
T_PLUS_1: specifies t+1 generation.
                     * 
                     */
                    std::string GetInitStrategy() const;

                    /**
                     * 设置**Instance generation policy**.
T_PLUS_0: specifies t+0 generation. default policy.
T_PLUS_1: specifies t+1 generation.
                     * @param _initStrategy **Instance generation policy**.
T_PLUS_0: specifies t+0 generation. default policy.
T_PLUS_1: specifies t+1 generation.
                     * 
                     */
                    void SetInitStrategy(const std::string& _initStrategy);

                    /**
                     * 判断参数 InitStrategy 是否已赋值
                     * @return InitStrategy 是否已赋值
                     * 
                     */
                    bool InitStrategyHasBeenSet() const;

                private:

                    /**
                     * Period type: defaults to DAY_CYCLE.

Supported types. 

ONEOFF_CYCLE: specifies a one-time cycle.
YEAR_CYCLE: specifies the year cycle.
MONTH_CYCLE: specifies the monthly cycle.
WEEK_CYCLE: specifies the week cycle.
DAY_CYCLE: specifies the day cycle.
HOUR_CYCLE: specifies the hour cycle.
MINUTE_CYCLE: specifies the minute cycle.
CRONTAB_CYCLE: specifies the crontab expression type.
                     */
                    std::string m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                    /**
                     * Time zone, defaults to UTC+8.
                     */
                    std::string m_scheduleTimeZone;
                    bool m_scheduleTimeZoneHasBeenSet;

                    /**
                     * Cron expression, defaults to 0 0 0 * * ? *.
                     */
                    std::string m_crontabExpression;
                    bool m_crontabExpressionHasBeenSet;

                    /**
                     * Effective date, defaults to 00:00:00 of the current date.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End date, defaults to 2099-12-31 23:59:59.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Execution time: the left-closed interval. Default: 00:00.
                     */
                    std::string m_executionStartTime;
                    bool m_executionStartTimeHasBeenSet;

                    /**
                     * Execution time: the right closed interval. Default: 23:59.
                     */
                    std::string m_executionEndTime;
                    bool m_executionEndTimeHasBeenSet;

                    /**
                     * Scheduling type: 0 for normal scheduling, 1 for dry-run scheduling. Default is 0.
                     */
                    std::string m_scheduleRunType;
                    bool m_scheduleRunTypeHasBeenSet;

                    /**
                     * Calendar scheduling value: 0 or 1, where 1 means ON and 0 means OFF. Default is 0.
                     */
                    std::string m_calendarOpen;
                    bool m_calendarOpenHasBeenSet;

                    /**
                     * Calendar scheduling:  the calendar ID.
                     */
                    std::string m_calendarId;
                    bool m_calendarIdHasBeenSet;

                    /**
                     * Self-Dependent. Valid values: parallel, serial, orderly. Default value: serial. 
                     */
                    std::string m_selfDepend;
                    bool m_selfDependHasBeenSet;

                    /**
                     * Specifies the upstream dependency list.
                     */
                    std::vector<DependencyTaskBrief> m_upstreamDependencyConfigList;
                    bool m_upstreamDependencyConfigListHasBeenSet;

                    /**
                     * List of Events
                     */
                    std::vector<EventListener> m_eventListenerList;
                    bool m_eventListenerListHasBeenSet;

                    /**
                     * Task scheduling priority. Valid values: 4 (high), 5 (medium), 6 (low). Default: 6.
                     */
                    std::string m_runPriority;
                    bool m_runPriorityHasBeenSet;

                    /**
                     * Retry Policy: Retry Wait Time (in minutes): Default 5
                     */
                    std::string m_retryWait;
                    bool m_retryWaitHasBeenSet;

                    /**
                     * Retry Policy: maximum attempts. Default: 4.
                     */
                    std::string m_maxRetryAttempts;
                    bool m_maxRetryAttemptsHasBeenSet;

                    /**
                     * Timeout Handling Policy: Execution Timeout (in minutes), default: -1
                     */
                    std::string m_executionTTL;
                    bool m_executionTTLHasBeenSet;

                    /**
                     * Timeout Handling Policy: Wait Duration Timeout  (in minutes), default: -1
                     */
                    std::string m_waitExecutionTotalTTL;
                    bool m_waitExecutionTotalTTLHasBeenSet;

                    /**
                     * Rerun & Refill Configuration: Default: ALL;

* ALL: Rerun or refill is allowed regardless of whether the task succeeds or fails.

* FAILURE: Rerun or refill is allowed only if the task fails; not allowed if the task succeeds.

* NONE: Rerun or refill is not allowed regardless of success or failure.
                     */
                    std::string m_allowRedoType;
                    bool m_allowRedoTypeHasBeenSet;

                    /**
                     * Output parameter list.
                     */
                    std::vector<OutTaskParameter> m_paramTaskOutList;
                    bool m_paramTaskOutListHasBeenSet;

                    /**
                     * Input parameter list.
                     */
                    std::vector<InTaskParameter> m_paramTaskInList;
                    bool m_paramTaskInListHasBeenSet;

                    /**
                     * Output registration.
                     */
                    std::vector<TaskDataRegistry> m_taskOutputRegistryList;
                    bool m_taskOutputRegistryListHasBeenSet;

                    /**
                     * **Instance generation policy**.
T_PLUS_0: specifies t+0 generation. default policy.
T_PLUS_1: specifies t+1 generation.
                     */
                    std::string m_initStrategy;
                    bool m_initStrategyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATETASKSCHEDULERCONFIGURATION_H_
