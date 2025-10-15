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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_TASKSCHEDULERCONFIGURATION_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_TASKSCHEDULERCONFIGURATION_H_

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
                * Specifies task scheduling configuration info.
                */
                class TaskSchedulerConfiguration : public AbstractModel
                {
                public:
                    TaskSchedulerConfiguration();
                    ~TaskSchedulerConfiguration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Time zone.
                     * @return ScheduleTimeZone Time zone.
                     * 
                     */
                    std::string GetScheduleTimeZone() const;

                    /**
                     * 设置Time zone.
                     * @param _scheduleTimeZone Time zone.
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
                     * 获取0 2 3 1,L,2 * ?	

                     * @return CrontabExpression 0 2 3 1,L,2 * ?	

                     * 
                     */
                    std::string GetCrontabExpression() const;

                    /**
                     * 设置0 2 3 1,L,2 * ?	

                     * @param _crontabExpression 0 2 3 1,L,2 * ?	

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
                     * 获取Effective date.

                     * @return StartTime Effective date.

                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Effective date.

                     * @param _startTime Effective date.

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
                     * 获取End date

                     * @return EndTime End date

                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End date

                     * @param _endTime End date

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
                     * 获取Execution time. the left-closed interval.

                     * @return ExecutionStartTime Execution time. the left-closed interval.

                     * 
                     */
                    std::string GetExecutionStartTime() const;

                    /**
                     * 设置Execution time. the left-closed interval.

                     * @param _executionStartTime Execution time. the left-closed interval.

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
                     * 获取Execution time. right closed interval.

                     * @return ExecutionEndTime Execution time. right closed interval.

                     * 
                     */
                    std::string GetExecutionEndTime() const;

                    /**
                     * 设置Execution time. right closed interval.

                     * @param _executionEndTime Execution time. right closed interval.

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
                     * 获取Scheduling type: 0 for normal scheduling, 1 for dry-run scheduling.

                     * @return ScheduleRunType Scheduling type: 0 for normal scheduling, 1 for dry-run scheduling.

                     * 
                     */
                    int64_t GetScheduleRunType() const;

                    /**
                     * 设置Scheduling type: 0 for normal scheduling, 1 for dry-run scheduling.

                     * @param _scheduleRunType Scheduling type: 0 for normal scheduling, 1 for dry-run scheduling.

                     * 
                     */
                    void SetScheduleRunType(const int64_t& _scheduleRunType);

                    /**
                     * 判断参数 ScheduleRunType 是否已赋值
                     * @return ScheduleRunType 是否已赋值
                     * 
                     */
                    bool ScheduleRunTypeHasBeenSet() const;

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

                    /**
                     * 获取Calendar name, which needs to be obtained from DescribeScheduleCalendarPageList API.
                     * @return CalendarName Calendar name, which needs to be obtained from DescribeScheduleCalendarPageList API.
                     * 
                     */
                    std::string GetCalendarName() const;

                    /**
                     * 设置Calendar name, which needs to be obtained from DescribeScheduleCalendarPageList API.
                     * @param _calendarName Calendar name, which needs to be obtained from DescribeScheduleCalendarPageList API.
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
                     * 获取Specifies the upstream dependency array.
                     * @return UpstreamDependencyConfigList Specifies the upstream dependency array.
                     * 
                     */
                    std::vector<DependencyTaskBrief> GetUpstreamDependencyConfigList() const;

                    /**
                     * 设置Specifies the upstream dependency array.
                     * @param _upstreamDependencyConfigList Specifies the upstream dependency array.
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
                     * 获取SpecSpecifies the downstream dependency array.

                     * @return DownStreamDependencyConfigList SpecSpecifies the downstream dependency array.

                     * 
                     */
                    std::vector<DependencyTaskBrief> GetDownStreamDependencyConfigList() const;

                    /**
                     * 设置SpecSpecifies the downstream dependency array.

                     * @param _downStreamDependencyConfigList SpecSpecifies the downstream dependency array.

                     * 
                     */
                    void SetDownStreamDependencyConfigList(const std::vector<DependencyTaskBrief>& _downStreamDependencyConfigList);

                    /**
                     * 判断参数 DownStreamDependencyConfigList 是否已赋值
                     * @return DownStreamDependencyConfigList 是否已赋值
                     * 
                     */
                    bool DownStreamDependencyConfigListHasBeenSet() const;

                    /**
                     * 获取Array of Events

                     * @return EventListenerList Array of Events

                     * 
                     */
                    std::vector<EventListener> GetEventListenerList() const;

                    /**
                     * 设置Array of Events

                     * @param _eventListenerList Array of Events

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
                     * 获取Task scheduling priority. valid values: 4 (high), 5 (medium), 6 (low). default: 6.

                     * @return RunPriority Task scheduling priority. valid values: 4 (high), 5 (medium), 6 (low). default: 6.

                     * 
                     */
                    uint64_t GetRunPriority() const;

                    /**
                     * 设置Task scheduling priority. valid values: 4 (high), 5 (medium), 6 (low). default: 6.

                     * @param _runPriority Task scheduling priority. valid values: 4 (high), 5 (medium), 6 (low). default: 6.

                     * 
                     */
                    void SetRunPriority(const uint64_t& _runPriority);

                    /**
                     * 判断参数 RunPriority 是否已赋值
                     * @return RunPriority 是否已赋值
                     * 
                     */
                    bool RunPriorityHasBeenSet() const;

                    /**
                     * 获取Retry policy. retry wait time in minutes. default: 5.

                     * @return RetryWait Retry policy. retry wait time in minutes. default: 5.

                     * 
                     */
                    int64_t GetRetryWait() const;

                    /**
                     * 设置Retry policy. retry wait time in minutes. default: 5.

                     * @param _retryWait Retry policy. retry wait time in minutes. default: 5.

                     * 
                     */
                    void SetRetryWait(const int64_t& _retryWait);

                    /**
                     * 判断参数 RetryWait 是否已赋值
                     * @return RetryWait 是否已赋值
                     * 
                     */
                    bool RetryWaitHasBeenSet() const;

                    /**
                     * 获取Specifies the maximum attempts of the retry policy. default: 4.

                     * @return MaxRetryAttempts Specifies the maximum attempts of the retry policy. default: 4.

                     * 
                     */
                    int64_t GetMaxRetryAttempts() const;

                    /**
                     * 设置Specifies the maximum attempts of the retry policy. default: 4.

                     * @param _maxRetryAttempts Specifies the maximum attempts of the retry policy. default: 4.

                     * 
                     */
                    void SetMaxRetryAttempts(const int64_t& _maxRetryAttempts);

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
                    int64_t GetExecutionTTL() const;

                    /**
                     * 设置Timeout Handling Policy: Execution Timeout (in minutes), default: -1

                     * @param _executionTTL Timeout Handling Policy: Execution Timeout (in minutes), default: -1

                     * 
                     */
                    void SetExecutionTTL(const int64_t& _executionTTL);

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
                     * Time zone.
                     */
                    std::string m_scheduleTimeZone;
                    bool m_scheduleTimeZoneHasBeenSet;

                    /**
                     * 0 2 3 1,L,2 * ?	

                     */
                    std::string m_crontabExpression;
                    bool m_crontabExpressionHasBeenSet;

                    /**
                     * Effective date.

                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End date

                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Execution time. the left-closed interval.

                     */
                    std::string m_executionStartTime;
                    bool m_executionStartTimeHasBeenSet;

                    /**
                     * Execution time. right closed interval.

                     */
                    std::string m_executionEndTime;
                    bool m_executionEndTimeHasBeenSet;

                    /**
                     * Scheduling type: 0 for normal scheduling, 1 for dry-run scheduling.

                     */
                    int64_t m_scheduleRunType;
                    bool m_scheduleRunTypeHasBeenSet;

                    /**
                     * Whether calendar scheduling is enabled. Valid values: 1 (enabled), 0 (disabled).
                     */
                    std::string m_calendarOpen;
                    bool m_calendarOpenHasBeenSet;

                    /**
                     * Calendar id.
                     */
                    std::string m_calendarId;
                    bool m_calendarIdHasBeenSet;

                    /**
                     * Calendar name, which needs to be obtained from DescribeScheduleCalendarPageList API.
                     */
                    std::string m_calendarName;
                    bool m_calendarNameHasBeenSet;

                    /**
                     * Self-Dependent. Valid values: parallel, serial, orderly. Default value: serial. 
                     */
                    std::string m_selfDepend;
                    bool m_selfDependHasBeenSet;

                    /**
                     * Specifies the upstream dependency array.
                     */
                    std::vector<DependencyTaskBrief> m_upstreamDependencyConfigList;
                    bool m_upstreamDependencyConfigListHasBeenSet;

                    /**
                     * SpecSpecifies the downstream dependency array.

                     */
                    std::vector<DependencyTaskBrief> m_downStreamDependencyConfigList;
                    bool m_downStreamDependencyConfigListHasBeenSet;

                    /**
                     * Array of Events

                     */
                    std::vector<EventListener> m_eventListenerList;
                    bool m_eventListenerListHasBeenSet;

                    /**
                     * Task scheduling priority. valid values: 4 (high), 5 (medium), 6 (low). default: 6.

                     */
                    uint64_t m_runPriority;
                    bool m_runPriorityHasBeenSet;

                    /**
                     * Retry policy. retry wait time in minutes. default: 5.

                     */
                    int64_t m_retryWait;
                    bool m_retryWaitHasBeenSet;

                    /**
                     * Specifies the maximum attempts of the retry policy. default: 4.

                     */
                    int64_t m_maxRetryAttempts;
                    bool m_maxRetryAttemptsHasBeenSet;

                    /**
                     * Timeout Handling Policy: Execution Timeout (in minutes), default: -1

                     */
                    int64_t m_executionTTL;
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

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_TASKSCHEDULERCONFIGURATION_H_
