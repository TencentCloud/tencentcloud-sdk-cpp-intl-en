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
                     * 获取<p>Period type: Defaults to DAY_CYCLE</p><p>Supported types are </p><ul><li>ONEOFF_CYCLE: One-time</li><li>YEAR_CYCLE: Year</li><li>MONTH_CYCLE: Month</li><li>WEEK_CYCLE: Week</li><li>DAY_CYCLE: Day</li><li>HOUR_CYCLE: Hour</li><li>MINUTE_CYCLE: Minute</li><li>CRONTAB_CYCLE: crontab expression</li></ul>
                     * @return CycleType <p>Period type: Defaults to DAY_CYCLE</p><p>Supported types are </p><ul><li>ONEOFF_CYCLE: One-time</li><li>YEAR_CYCLE: Year</li><li>MONTH_CYCLE: Month</li><li>WEEK_CYCLE: Week</li><li>DAY_CYCLE: Day</li><li>HOUR_CYCLE: Hour</li><li>MINUTE_CYCLE: Minute</li><li>CRONTAB_CYCLE: crontab expression</li></ul>
                     * 
                     */
                    std::string GetCycleType() const;

                    /**
                     * 设置<p>Period type: Defaults to DAY_CYCLE</p><p>Supported types are </p><ul><li>ONEOFF_CYCLE: One-time</li><li>YEAR_CYCLE: Year</li><li>MONTH_CYCLE: Month</li><li>WEEK_CYCLE: Week</li><li>DAY_CYCLE: Day</li><li>HOUR_CYCLE: Hour</li><li>MINUTE_CYCLE: Minute</li><li>CRONTAB_CYCLE: crontab expression</li></ul>
                     * @param _cycleType <p>Period type: Defaults to DAY_CYCLE</p><p>Supported types are </p><ul><li>ONEOFF_CYCLE: One-time</li><li>YEAR_CYCLE: Year</li><li>MONTH_CYCLE: Month</li><li>WEEK_CYCLE: Week</li><li>DAY_CYCLE: Day</li><li>HOUR_CYCLE: Hour</li><li>MINUTE_CYCLE: Minute</li><li>CRONTAB_CYCLE: crontab expression</li></ul>
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
                     * 获取<p>Time zone, defaults to UTC+8</p>
                     * @return ScheduleTimeZone <p>Time zone, defaults to UTC+8</p>
                     * 
                     */
                    std::string GetScheduleTimeZone() const;

                    /**
                     * 设置<p>Time zone, defaults to UTC+8</p>
                     * @param _scheduleTimeZone <p>Time zone, defaults to UTC+8</p>
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
                     * 获取<p>Cron expression, defaults to 0 0 0 * * ? *</p>
                     * @return CrontabExpression <p>Cron expression, defaults to 0 0 0 * * ? *</p>
                     * 
                     */
                    std::string GetCrontabExpression() const;

                    /**
                     * 设置<p>Cron expression, defaults to 0 0 0 * * ? *</p>
                     * @param _crontabExpression <p>Cron expression, defaults to 0 0 0 * * ? *</p>
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
                     * 获取<p>Effective date, defaults to 00:00:00 of the current date</p>
                     * @return StartTime <p>Effective date, defaults to 00:00:00 of the current date</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>Effective date, defaults to 00:00:00 of the current date</p>
                     * @param _startTime <p>Effective date, defaults to 00:00:00 of the current date</p>
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
                     * 获取<p>End date, defaults to 2099-12-31 23:59:59</p>
                     * @return EndTime <p>End date, defaults to 2099-12-31 23:59:59</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>End date, defaults to 2099-12-31 23:59:59</p>
                     * @param _endTime <p>End date, defaults to 2099-12-31 23:59:59</p>
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
                     * 获取<p>Execution time left-closed interval, default 00:00</p>
                     * @return ExecutionStartTime <p>Execution time left-closed interval, default 00:00</p>
                     * 
                     */
                    std::string GetExecutionStartTime() const;

                    /**
                     * 设置<p>Execution time left-closed interval, default 00:00</p>
                     * @param _executionStartTime <p>Execution time left-closed interval, default 00:00</p>
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
                     * 获取<p>Execution time right closed interval, default 23:59</p>
                     * @return ExecutionEndTime <p>Execution time right closed interval, default 23:59</p>
                     * 
                     */
                    std::string GetExecutionEndTime() const;

                    /**
                     * 设置<p>Execution time right closed interval, default 23:59</p>
                     * @param _executionEndTime <p>Execution time right closed interval, default 23:59</p>
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
                     * 获取<p>Calendar scheduling value is 0 and 1, where 1 is on and 0 is shutdown, with a default value of 0.</p>
                     * @return CalendarOpen <p>Calendar scheduling value is 0 and 1, where 1 is on and 0 is shutdown, with a default value of 0.</p>
                     * 
                     */
                    std::string GetCalendarOpen() const;

                    /**
                     * 设置<p>Calendar scheduling value is 0 and 1, where 1 is on and 0 is shutdown, with a default value of 0.</p>
                     * @param _calendarOpen <p>Calendar scheduling value is 0 and 1, where 1 is on and 0 is shutdown, with a default value of 0.</p>
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
                     * 获取<p>Calendar scheduling Calendar ID</p>
                     * @return CalendarId <p>Calendar scheduling Calendar ID</p>
                     * 
                     */
                    std::string GetCalendarId() const;

                    /**
                     * 设置<p>Calendar scheduling Calendar ID</p>
                     * @param _calendarId <p>Calendar scheduling Calendar ID</p>
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
                     * 获取<p>Self-dependent, default value serial, value: parallel, serial, orderly</p>
                     * @return SelfDepend <p>Self-dependent, default value serial, value: parallel, serial, orderly</p>
                     * 
                     */
                    std::string GetSelfDepend() const;

                    /**
                     * 设置<p>Self-dependent, default value serial, value: parallel, serial, orderly</p>
                     * @param _selfDepend <p>Self-dependent, default value serial, value: parallel, serial, orderly</p>
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
                     * 获取<p>Upstream dependency array</p>
                     * @return UpstreamDependencyConfigList <p>Upstream dependency array</p>
                     * 
                     */
                    std::vector<DependencyTaskBrief> GetUpstreamDependencyConfigList() const;

                    /**
                     * 设置<p>Upstream dependency array</p>
                     * @param _upstreamDependencyConfigList <p>Upstream dependency array</p>
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
                     * 获取<p>Event array</p>
                     * @return EventListenerList <p>Event array</p>
                     * 
                     */
                    std::vector<EventListener> GetEventListenerList() const;

                    /**
                     * 设置<p>Event array</p>
                     * @param _eventListenerList <p>Event array</p>
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
                     * 获取<p>Rerun & replenishment configuration, defaults to ALL; , ALL allows rerun or replenishment after successful or failed running, FAILURE cannot rerun or replenish after successful running but allows rerun or replenishment after running FAILURE, NONE does not allow rerun or replenishment after either successful or failed running;</p>
                     * @return AllowRedoType <p>Rerun & replenishment configuration, defaults to ALL; , ALL allows rerun or replenishment after successful or failed running, FAILURE cannot rerun or replenish after successful running but allows rerun or replenishment after running FAILURE, NONE does not allow rerun or replenishment after either successful or failed running;</p>
                     * 
                     */
                    std::string GetAllowRedoType() const;

                    /**
                     * 设置<p>Rerun & replenishment configuration, defaults to ALL; , ALL allows rerun or replenishment after successful or failed running, FAILURE cannot rerun or replenish after successful running but allows rerun or replenishment after running FAILURE, NONE does not allow rerun or replenishment after either successful or failed running;</p>
                     * @param _allowRedoType <p>Rerun & replenishment configuration, defaults to ALL; , ALL allows rerun or replenishment after successful or failed running, FAILURE cannot rerun or replenish after successful running but allows rerun or replenishment after running FAILURE, NONE does not allow rerun or replenishment after either successful or failed running;</p>
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
                     * 获取<p>Output parameter array</p>
                     * @return ParamTaskOutList <p>Output parameter array</p>
                     * 
                     */
                    std::vector<OutTaskParameter> GetParamTaskOutList() const;

                    /**
                     * 设置<p>Output parameter array</p>
                     * @param _paramTaskOutList <p>Output parameter array</p>
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
                     * 获取<p>Input parameter array</p>
                     * @return ParamTaskInList <p>Input parameter array</p>
                     * 
                     */
                    std::vector<InTaskParameter> GetParamTaskInList() const;

                    /**
                     * 设置<p>Input parameter array</p>
                     * @param _paramTaskInList <p>Input parameter array</p>
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
                     * 获取<p>Output registration</p>
                     * @return TaskOutputRegistryList <p>Output registration</p>
                     * 
                     */
                    std::vector<TaskDataRegistry> GetTaskOutputRegistryList() const;

                    /**
                     * 设置<p>Output registration</p>
                     * @param _taskOutputRegistryList <p>Output registration</p>
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
                     * 获取<p><strong>Instance Generation Policy</strong></p><ul><li>T_PLUS_0: T+0 generation, default policy</li><li>T_PLUS_1: T+1 generation</li></ul>
                     * @return InitStrategy <p><strong>Instance Generation Policy</strong></p><ul><li>T_PLUS_0: T+0 generation, default policy</li><li>T_PLUS_1: T+1 generation</li></ul>
                     * 
                     */
                    std::string GetInitStrategy() const;

                    /**
                     * 设置<p><strong>Instance Generation Policy</strong></p><ul><li>T_PLUS_0: T+0 generation, default policy</li><li>T_PLUS_1: T+1 generation</li></ul>
                     * @param _initStrategy <p><strong>Instance Generation Policy</strong></p><ul><li>T_PLUS_0: T+0 generation, default policy</li><li>T_PLUS_1: T+1 generation</li></ul>
                     * 
                     */
                    void SetInitStrategy(const std::string& _initStrategy);

                    /**
                     * 判断参数 InitStrategy 是否已赋值
                     * @return InitStrategy 是否已赋值
                     * 
                     */
                    bool InitStrategyHasBeenSet() const;

                    /**
                     * 获取<p>Scheduling type: 0 normal scheduling 1 dry-run scheduling, default is 0</p>
                     * @return ScheduleRunType <p>Scheduling type: 0 normal scheduling 1 dry-run scheduling, default is 0</p>
                     * @deprecated
                     */
                    std::string GetScheduleRunType() const;

                    /**
                     * 设置<p>Scheduling type: 0 normal scheduling 1 dry-run scheduling, default is 0</p>
                     * @param _scheduleRunType <p>Scheduling type: 0 normal scheduling 1 dry-run scheduling, default is 0</p>
                     * @deprecated
                     */
                    void SetScheduleRunType(const std::string& _scheduleRunType);

                    /**
                     * 判断参数 ScheduleRunType 是否已赋值
                     * @return ScheduleRunType 是否已赋值
                     * @deprecated
                     */
                    bool ScheduleRunTypeHasBeenSet() const;

                    /**
                     * 获取<p>Task scheduling priority Execution priority 4 High 5 Medium 6 Low, Default:6</p>
                     * @return RunPriority <p>Task scheduling priority Execution priority 4 High 5 Medium 6 Low, Default:6</p>
                     * @deprecated
                     */
                    std::string GetRunPriority() const;

                    /**
                     * 设置<p>Task scheduling priority Execution priority 4 High 5 Medium 6 Low, Default:6</p>
                     * @param _runPriority <p>Task scheduling priority Execution priority 4 High 5 Medium 6 Low, Default:6</p>
                     * @deprecated
                     */
                    void SetRunPriority(const std::string& _runPriority);

                    /**
                     * 判断参数 RunPriority 是否已赋值
                     * @return RunPriority 是否已赋值
                     * @deprecated
                     */
                    bool RunPriorityHasBeenSet() const;

                    /**
                     * 获取<p>Retry policy Retry wait time, in minutes: Default: 5</p>
                     * @return RetryWait <p>Retry policy Retry wait time, in minutes: Default: 5</p>
                     * @deprecated
                     */
                    std::string GetRetryWait() const;

                    /**
                     * 设置<p>Retry policy Retry wait time, in minutes: Default: 5</p>
                     * @param _retryWait <p>Retry policy Retry wait time, in minutes: Default: 5</p>
                     * @deprecated
                     */
                    void SetRetryWait(const std::string& _retryWait);

                    /**
                     * 判断参数 RetryWait 是否已赋值
                     * @return RetryWait 是否已赋值
                     * @deprecated
                     */
                    bool RetryWaitHasBeenSet() const;

                    /**
                     * 获取<p>Retry policy Maximum attempts, Default: 4</p>
                     * @return MaxRetryAttempts <p>Retry policy Maximum attempts, Default: 4</p>
                     * @deprecated
                     */
                    std::string GetMaxRetryAttempts() const;

                    /**
                     * 设置<p>Retry policy Maximum attempts, Default: 4</p>
                     * @param _maxRetryAttempts <p>Retry policy Maximum attempts, Default: 4</p>
                     * @deprecated
                     */
                    void SetMaxRetryAttempts(const std::string& _maxRetryAttempts);

                    /**
                     * 判断参数 MaxRetryAttempts 是否已赋值
                     * @return MaxRetryAttempts 是否已赋值
                     * @deprecated
                     */
                    bool MaxRetryAttemptsHasBeenSet() const;

                    /**
                     * 获取<p>Timeout handling strategy Runtime timeout (unit: minutes) Default is -1</p>
                     * @return ExecutionTTL <p>Timeout handling strategy Runtime timeout (unit: minutes) Default is -1</p>
                     * @deprecated
                     */
                    std::string GetExecutionTTL() const;

                    /**
                     * 设置<p>Timeout handling strategy Runtime timeout (unit: minutes) Default is -1</p>
                     * @param _executionTTL <p>Timeout handling strategy Runtime timeout (unit: minutes) Default is -1</p>
                     * @deprecated
                     */
                    void SetExecutionTTL(const std::string& _executionTTL);

                    /**
                     * 判断参数 ExecutionTTL 是否已赋值
                     * @return ExecutionTTL 是否已赋值
                     * @deprecated
                     */
                    bool ExecutionTTLHasBeenSet() const;

                    /**
                     * 获取<p>Timeout handling strategy Wait duration timeout (unit: minutes) Default value is -1</p>
                     * @return WaitExecutionTotalTTL <p>Timeout handling strategy Wait duration timeout (unit: minutes) Default value is -1</p>
                     * @deprecated
                     */
                    std::string GetWaitExecutionTotalTTL() const;

                    /**
                     * 设置<p>Timeout handling strategy Wait duration timeout (unit: minutes) Default value is -1</p>
                     * @param _waitExecutionTotalTTL <p>Timeout handling strategy Wait duration timeout (unit: minutes) Default value is -1</p>
                     * @deprecated
                     */
                    void SetWaitExecutionTotalTTL(const std::string& _waitExecutionTotalTTL);

                    /**
                     * 判断参数 WaitExecutionTotalTTL 是否已赋值
                     * @return WaitExecutionTotalTTL 是否已赋值
                     * @deprecated
                     */
                    bool WaitExecutionTotalTTLHasBeenSet() const;

                    /**
                     * 获取<p>Scheduling type: 0 normal scheduling 1 dry-run scheduling, default is 0</p>
                     * @return ScheduleType <p>Scheduling type: 0 normal scheduling 1 dry-run scheduling, default is 0</p>
                     * 
                     */
                    int64_t GetScheduleType() const;

                    /**
                     * 设置<p>Scheduling type: 0 normal scheduling 1 dry-run scheduling, default is 0</p>
                     * @param _scheduleType <p>Scheduling type: 0 normal scheduling 1 dry-run scheduling, default is 0</p>
                     * 
                     */
                    void SetScheduleType(const int64_t& _scheduleType);

                    /**
                     * 判断参数 ScheduleType 是否已赋值
                     * @return ScheduleType 是否已赋值
                     * 
                     */
                    bool ScheduleTypeHasBeenSet() const;

                    /**
                     * 获取<p>Task scheduling priority Execution priority 4 High 5 Medium 6 Low, Default:6</p>
                     * @return RunPriorityType <p>Task scheduling priority Execution priority 4 High 5 Medium 6 Low, Default:6</p>
                     * 
                     */
                    int64_t GetRunPriorityType() const;

                    /**
                     * 设置<p>Task scheduling priority Execution priority 4 High 5 Medium 6 Low, Default:6</p>
                     * @param _runPriorityType <p>Task scheduling priority Execution priority 4 High 5 Medium 6 Low, Default:6</p>
                     * 
                     */
                    void SetRunPriorityType(const int64_t& _runPriorityType);

                    /**
                     * 判断参数 RunPriorityType 是否已赋值
                     * @return RunPriorityType 是否已赋值
                     * 
                     */
                    bool RunPriorityTypeHasBeenSet() const;

                    /**
                     * 获取<p>Retry policy Retry wait time, in minutes: Default: 5</p>
                     * @return RetryWaitMinute <p>Retry policy Retry wait time, in minutes: Default: 5</p>
                     * 
                     */
                    int64_t GetRetryWaitMinute() const;

                    /**
                     * 设置<p>Retry policy Retry wait time, in minutes: Default: 5</p>
                     * @param _retryWaitMinute <p>Retry policy Retry wait time, in minutes: Default: 5</p>
                     * 
                     */
                    void SetRetryWaitMinute(const int64_t& _retryWaitMinute);

                    /**
                     * 判断参数 RetryWaitMinute 是否已赋值
                     * @return RetryWaitMinute 是否已赋值
                     * 
                     */
                    bool RetryWaitMinuteHasBeenSet() const;

                    /**
                     * 获取<p>Retry policy Maximum attempts, Default: 4</p>
                     * @return MaxRetryNumber <p>Retry policy Maximum attempts, Default: 4</p>
                     * 
                     */
                    int64_t GetMaxRetryNumber() const;

                    /**
                     * 设置<p>Retry policy Maximum attempts, Default: 4</p>
                     * @param _maxRetryNumber <p>Retry policy Maximum attempts, Default: 4</p>
                     * 
                     */
                    void SetMaxRetryNumber(const int64_t& _maxRetryNumber);

                    /**
                     * 判断参数 MaxRetryNumber 是否已赋值
                     * @return MaxRetryNumber 是否已赋值
                     * 
                     */
                    bool MaxRetryNumberHasBeenSet() const;

                    /**
                     * 获取<p>Timeout handling strategy Runtime timeout (unit: minutes) Default is -1</p>
                     * @return ExecutionTTLMinute <p>Timeout handling strategy Runtime timeout (unit: minutes) Default is -1</p>
                     * 
                     */
                    int64_t GetExecutionTTLMinute() const;

                    /**
                     * 设置<p>Timeout handling strategy Runtime timeout (unit: minutes) Default is -1</p>
                     * @param _executionTTLMinute <p>Timeout handling strategy Runtime timeout (unit: minutes) Default is -1</p>
                     * 
                     */
                    void SetExecutionTTLMinute(const int64_t& _executionTTLMinute);

                    /**
                     * 判断参数 ExecutionTTLMinute 是否已赋值
                     * @return ExecutionTTLMinute 是否已赋值
                     * 
                     */
                    bool ExecutionTTLMinuteHasBeenSet() const;

                    /**
                     * 获取<p>Timeout handling strategy Wait duration timeout (unit: minutes) Default value is -1</p>
                     * @return WaitExecutionTotalTTLMinute <p>Timeout handling strategy Wait duration timeout (unit: minutes) Default value is -1</p>
                     * 
                     */
                    int64_t GetWaitExecutionTotalTTLMinute() const;

                    /**
                     * 设置<p>Timeout handling strategy Wait duration timeout (unit: minutes) Default value is -1</p>
                     * @param _waitExecutionTotalTTLMinute <p>Timeout handling strategy Wait duration timeout (unit: minutes) Default value is -1</p>
                     * 
                     */
                    void SetWaitExecutionTotalTTLMinute(const int64_t& _waitExecutionTotalTTLMinute);

                    /**
                     * 判断参数 WaitExecutionTotalTTLMinute 是否已赋值
                     * @return WaitExecutionTotalTTLMinute 是否已赋值
                     * 
                     */
                    bool WaitExecutionTotalTTLMinuteHasBeenSet() const;

                    /**
                     * 获取<ul><li>The task dependency run condition defaults to ALL_SUCCESS. Currently, only workflow scheduling under the project supports configuration.</li><li>ALL_SUCCESS: All successful: When all upstream dependency tasks reach the final state, perform a dependency check. If all upstream tasks are successful, the dependency check passes. Otherwise, if one upstream task skips running, it is marked as skipped. In other cases, it is marked as upstream failure.</li><li>ALL_FAILED: All failed: When all upstream dependency tasks reach the final state, perform a dependency check. If all upstream tasks are in a failed state or marked as upstream failure, the dependency check passes. Otherwise, it is marked as skipped.</li><li>ALL_DONE: All completed: When all upstream dependency tasks reach the final state, perform a dependency check, and the dependency check passes directly.</li><li>ALL_DONE_AT_LEAST_ONE_SUCCESS: All upstream tasks completed with at least one success: When all upstream dependency tasks reach the final state, perform a dependency check. If at least one is successful, the dependency check passes. Otherwise, it skips running.</li><li>ALL_SKIPPED: All upstream tasks skipped: When all upstream dependency tasks reach the final state, perform a dependency check. Only if all upstream tasks are in a skipped state does the dependency check pass. Otherwise, the current node skips running.</li><li>ONE_FAILED: At least one failed: If at least one upstream task fails, perform a dependency check, and the check passes. If all upstream tasks complete but none fail, it skips running.</li><li>ONE_SUCCESS: At least one success: If at least one upstream task succeeds, perform a dependency check, and the check passes. If all upstream tasks complete but none succeed, it skips running.</li><li>ONE_DONE: At least one completed: If at least one upstream task completes, perform a dependency check, and the check passes. Otherwise, it continues waiting for upstream.</li><li>NONE_FAILED: All upstream tasks completed with no failure: When all upstream dependency tasks reach the final state, perform a dependency check. If all upstream tasks are successful or skipped, the check passes. Otherwise, it is marked as upstream failure.</li><li>ALL_DONE_NONE_FAILED_AT_LEAST_ONE_SUCCESS: All upstream tasks completed with no failure and at least one success: When all upstream dependency tasks reach the final state, perform a dependency check. If no upstream task fails and at least one succeeds, the check passes. Otherwise, it skips running.</li><li>NONE_SKIPPED: All upstream tasks completed with no skipped runs: When all upstream dependency tasks reach the final state, perform a dependency check. If all upstream tasks are in a successful, failed, or upstream failure state, the check passes. Otherwise, it skips running.</li><li>ALL_DONE_AT_LEAST_ONE_FAILED: All upstream tasks completed with at least one failure: When all upstream dependency tasks reach the final state, perform a dependency check. If at least one fails, the check passes. Otherwise, it skips running.</li></ul>
                     * @return DependencyTriggerPolicy <ul><li>The task dependency run condition defaults to ALL_SUCCESS. Currently, only workflow scheduling under the project supports configuration.</li><li>ALL_SUCCESS: All successful: When all upstream dependency tasks reach the final state, perform a dependency check. If all upstream tasks are successful, the dependency check passes. Otherwise, if one upstream task skips running, it is marked as skipped. In other cases, it is marked as upstream failure.</li><li>ALL_FAILED: All failed: When all upstream dependency tasks reach the final state, perform a dependency check. If all upstream tasks are in a failed state or marked as upstream failure, the dependency check passes. Otherwise, it is marked as skipped.</li><li>ALL_DONE: All completed: When all upstream dependency tasks reach the final state, perform a dependency check, and the dependency check passes directly.</li><li>ALL_DONE_AT_LEAST_ONE_SUCCESS: All upstream tasks completed with at least one success: When all upstream dependency tasks reach the final state, perform a dependency check. If at least one is successful, the dependency check passes. Otherwise, it skips running.</li><li>ALL_SKIPPED: All upstream tasks skipped: When all upstream dependency tasks reach the final state, perform a dependency check. Only if all upstream tasks are in a skipped state does the dependency check pass. Otherwise, the current node skips running.</li><li>ONE_FAILED: At least one failed: If at least one upstream task fails, perform a dependency check, and the check passes. If all upstream tasks complete but none fail, it skips running.</li><li>ONE_SUCCESS: At least one success: If at least one upstream task succeeds, perform a dependency check, and the check passes. If all upstream tasks complete but none succeed, it skips running.</li><li>ONE_DONE: At least one completed: If at least one upstream task completes, perform a dependency check, and the check passes. Otherwise, it continues waiting for upstream.</li><li>NONE_FAILED: All upstream tasks completed with no failure: When all upstream dependency tasks reach the final state, perform a dependency check. If all upstream tasks are successful or skipped, the check passes. Otherwise, it is marked as upstream failure.</li><li>ALL_DONE_NONE_FAILED_AT_LEAST_ONE_SUCCESS: All upstream tasks completed with no failure and at least one success: When all upstream dependency tasks reach the final state, perform a dependency check. If no upstream task fails and at least one succeeds, the check passes. Otherwise, it skips running.</li><li>NONE_SKIPPED: All upstream tasks completed with no skipped runs: When all upstream dependency tasks reach the final state, perform a dependency check. If all upstream tasks are in a successful, failed, or upstream failure state, the check passes. Otherwise, it skips running.</li><li>ALL_DONE_AT_LEAST_ONE_FAILED: All upstream tasks completed with at least one failure: When all upstream dependency tasks reach the final state, perform a dependency check. If at least one fails, the check passes. Otherwise, it skips running.</li></ul>
                     * 
                     */
                    std::string GetDependencyTriggerPolicy() const;

                    /**
                     * 设置<ul><li>The task dependency run condition defaults to ALL_SUCCESS. Currently, only workflow scheduling under the project supports configuration.</li><li>ALL_SUCCESS: All successful: When all upstream dependency tasks reach the final state, perform a dependency check. If all upstream tasks are successful, the dependency check passes. Otherwise, if one upstream task skips running, it is marked as skipped. In other cases, it is marked as upstream failure.</li><li>ALL_FAILED: All failed: When all upstream dependency tasks reach the final state, perform a dependency check. If all upstream tasks are in a failed state or marked as upstream failure, the dependency check passes. Otherwise, it is marked as skipped.</li><li>ALL_DONE: All completed: When all upstream dependency tasks reach the final state, perform a dependency check, and the dependency check passes directly.</li><li>ALL_DONE_AT_LEAST_ONE_SUCCESS: All upstream tasks completed with at least one success: When all upstream dependency tasks reach the final state, perform a dependency check. If at least one is successful, the dependency check passes. Otherwise, it skips running.</li><li>ALL_SKIPPED: All upstream tasks skipped: When all upstream dependency tasks reach the final state, perform a dependency check. Only if all upstream tasks are in a skipped state does the dependency check pass. Otherwise, the current node skips running.</li><li>ONE_FAILED: At least one failed: If at least one upstream task fails, perform a dependency check, and the check passes. If all upstream tasks complete but none fail, it skips running.</li><li>ONE_SUCCESS: At least one success: If at least one upstream task succeeds, perform a dependency check, and the check passes. If all upstream tasks complete but none succeed, it skips running.</li><li>ONE_DONE: At least one completed: If at least one upstream task completes, perform a dependency check, and the check passes. Otherwise, it continues waiting for upstream.</li><li>NONE_FAILED: All upstream tasks completed with no failure: When all upstream dependency tasks reach the final state, perform a dependency check. If all upstream tasks are successful or skipped, the check passes. Otherwise, it is marked as upstream failure.</li><li>ALL_DONE_NONE_FAILED_AT_LEAST_ONE_SUCCESS: All upstream tasks completed with no failure and at least one success: When all upstream dependency tasks reach the final state, perform a dependency check. If no upstream task fails and at least one succeeds, the check passes. Otherwise, it skips running.</li><li>NONE_SKIPPED: All upstream tasks completed with no skipped runs: When all upstream dependency tasks reach the final state, perform a dependency check. If all upstream tasks are in a successful, failed, or upstream failure state, the check passes. Otherwise, it skips running.</li><li>ALL_DONE_AT_LEAST_ONE_FAILED: All upstream tasks completed with at least one failure: When all upstream dependency tasks reach the final state, perform a dependency check. If at least one fails, the check passes. Otherwise, it skips running.</li></ul>
                     * @param _dependencyTriggerPolicy <ul><li>The task dependency run condition defaults to ALL_SUCCESS. Currently, only workflow scheduling under the project supports configuration.</li><li>ALL_SUCCESS: All successful: When all upstream dependency tasks reach the final state, perform a dependency check. If all upstream tasks are successful, the dependency check passes. Otherwise, if one upstream task skips running, it is marked as skipped. In other cases, it is marked as upstream failure.</li><li>ALL_FAILED: All failed: When all upstream dependency tasks reach the final state, perform a dependency check. If all upstream tasks are in a failed state or marked as upstream failure, the dependency check passes. Otherwise, it is marked as skipped.</li><li>ALL_DONE: All completed: When all upstream dependency tasks reach the final state, perform a dependency check, and the dependency check passes directly.</li><li>ALL_DONE_AT_LEAST_ONE_SUCCESS: All upstream tasks completed with at least one success: When all upstream dependency tasks reach the final state, perform a dependency check. If at least one is successful, the dependency check passes. Otherwise, it skips running.</li><li>ALL_SKIPPED: All upstream tasks skipped: When all upstream dependency tasks reach the final state, perform a dependency check. Only if all upstream tasks are in a skipped state does the dependency check pass. Otherwise, the current node skips running.</li><li>ONE_FAILED: At least one failed: If at least one upstream task fails, perform a dependency check, and the check passes. If all upstream tasks complete but none fail, it skips running.</li><li>ONE_SUCCESS: At least one success: If at least one upstream task succeeds, perform a dependency check, and the check passes. If all upstream tasks complete but none succeed, it skips running.</li><li>ONE_DONE: At least one completed: If at least one upstream task completes, perform a dependency check, and the check passes. Otherwise, it continues waiting for upstream.</li><li>NONE_FAILED: All upstream tasks completed with no failure: When all upstream dependency tasks reach the final state, perform a dependency check. If all upstream tasks are successful or skipped, the check passes. Otherwise, it is marked as upstream failure.</li><li>ALL_DONE_NONE_FAILED_AT_LEAST_ONE_SUCCESS: All upstream tasks completed with no failure and at least one success: When all upstream dependency tasks reach the final state, perform a dependency check. If no upstream task fails and at least one succeeds, the check passes. Otherwise, it skips running.</li><li>NONE_SKIPPED: All upstream tasks completed with no skipped runs: When all upstream dependency tasks reach the final state, perform a dependency check. If all upstream tasks are in a successful, failed, or upstream failure state, the check passes. Otherwise, it skips running.</li><li>ALL_DONE_AT_LEAST_ONE_FAILED: All upstream tasks completed with at least one failure: When all upstream dependency tasks reach the final state, perform a dependency check. If at least one fails, the check passes. Otherwise, it skips running.</li></ul>
                     * 
                     */
                    void SetDependencyTriggerPolicy(const std::string& _dependencyTriggerPolicy);

                    /**
                     * 判断参数 DependencyTriggerPolicy 是否已赋值
                     * @return DependencyTriggerPolicy 是否已赋值
                     * 
                     */
                    bool DependencyTriggerPolicyHasBeenSet() const;

                    /**
                     * 获取<p>Whether to allow downstream dependency 1 Allow 0 Do not allow</p><p>Value ranges from 0 to 1</p><p>Default value: 1</p>
                     * @return AllowDownstreamDependency <p>Whether to allow downstream dependency 1 Allow 0 Do not allow</p><p>Value ranges from 0 to 1</p><p>Default value: 1</p>
                     * @deprecated
                     */
                    int64_t GetAllowDownstreamDependency() const;

                    /**
                     * 设置<p>Whether to allow downstream dependency 1 Allow 0 Do not allow</p><p>Value ranges from 0 to 1</p><p>Default value: 1</p>
                     * @param _allowDownstreamDependency <p>Whether to allow downstream dependency 1 Allow 0 Do not allow</p><p>Value ranges from 0 to 1</p><p>Default value: 1</p>
                     * @deprecated
                     */
                    void SetAllowDownstreamDependency(const int64_t& _allowDownstreamDependency);

                    /**
                     * 判断参数 AllowDownstreamDependency 是否已赋值
                     * @return AllowDownstreamDependency 是否已赋值
                     * @deprecated
                     */
                    bool AllowDownstreamDependencyHasBeenSet() const;

                private:

                    /**
                     * <p>Period type: Defaults to DAY_CYCLE</p><p>Supported types are </p><ul><li>ONEOFF_CYCLE: One-time</li><li>YEAR_CYCLE: Year</li><li>MONTH_CYCLE: Month</li><li>WEEK_CYCLE: Week</li><li>DAY_CYCLE: Day</li><li>HOUR_CYCLE: Hour</li><li>MINUTE_CYCLE: Minute</li><li>CRONTAB_CYCLE: crontab expression</li></ul>
                     */
                    std::string m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                    /**
                     * <p>Time zone, defaults to UTC+8</p>
                     */
                    std::string m_scheduleTimeZone;
                    bool m_scheduleTimeZoneHasBeenSet;

                    /**
                     * <p>Cron expression, defaults to 0 0 0 * * ? *</p>
                     */
                    std::string m_crontabExpression;
                    bool m_crontabExpressionHasBeenSet;

                    /**
                     * <p>Effective date, defaults to 00:00:00 of the current date</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>End date, defaults to 2099-12-31 23:59:59</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>Execution time left-closed interval, default 00:00</p>
                     */
                    std::string m_executionStartTime;
                    bool m_executionStartTimeHasBeenSet;

                    /**
                     * <p>Execution time right closed interval, default 23:59</p>
                     */
                    std::string m_executionEndTime;
                    bool m_executionEndTimeHasBeenSet;

                    /**
                     * <p>Calendar scheduling value is 0 and 1, where 1 is on and 0 is shutdown, with a default value of 0.</p>
                     */
                    std::string m_calendarOpen;
                    bool m_calendarOpenHasBeenSet;

                    /**
                     * <p>Calendar scheduling Calendar ID</p>
                     */
                    std::string m_calendarId;
                    bool m_calendarIdHasBeenSet;

                    /**
                     * <p>Self-dependent, default value serial, value: parallel, serial, orderly</p>
                     */
                    std::string m_selfDepend;
                    bool m_selfDependHasBeenSet;

                    /**
                     * <p>Upstream dependency array</p>
                     */
                    std::vector<DependencyTaskBrief> m_upstreamDependencyConfigList;
                    bool m_upstreamDependencyConfigListHasBeenSet;

                    /**
                     * <p>Event array</p>
                     */
                    std::vector<EventListener> m_eventListenerList;
                    bool m_eventListenerListHasBeenSet;

                    /**
                     * <p>Rerun & replenishment configuration, defaults to ALL; , ALL allows rerun or replenishment after successful or failed running, FAILURE cannot rerun or replenish after successful running but allows rerun or replenishment after running FAILURE, NONE does not allow rerun or replenishment after either successful or failed running;</p>
                     */
                    std::string m_allowRedoType;
                    bool m_allowRedoTypeHasBeenSet;

                    /**
                     * <p>Output parameter array</p>
                     */
                    std::vector<OutTaskParameter> m_paramTaskOutList;
                    bool m_paramTaskOutListHasBeenSet;

                    /**
                     * <p>Input parameter array</p>
                     */
                    std::vector<InTaskParameter> m_paramTaskInList;
                    bool m_paramTaskInListHasBeenSet;

                    /**
                     * <p>Output registration</p>
                     */
                    std::vector<TaskDataRegistry> m_taskOutputRegistryList;
                    bool m_taskOutputRegistryListHasBeenSet;

                    /**
                     * <p><strong>Instance Generation Policy</strong></p><ul><li>T_PLUS_0: T+0 generation, default policy</li><li>T_PLUS_1: T+1 generation</li></ul>
                     */
                    std::string m_initStrategy;
                    bool m_initStrategyHasBeenSet;

                    /**
                     * <p>Scheduling type: 0 normal scheduling 1 dry-run scheduling, default is 0</p>
                     */
                    std::string m_scheduleRunType;
                    bool m_scheduleRunTypeHasBeenSet;

                    /**
                     * <p>Task scheduling priority Execution priority 4 High 5 Medium 6 Low, Default:6</p>
                     */
                    std::string m_runPriority;
                    bool m_runPriorityHasBeenSet;

                    /**
                     * <p>Retry policy Retry wait time, in minutes: Default: 5</p>
                     */
                    std::string m_retryWait;
                    bool m_retryWaitHasBeenSet;

                    /**
                     * <p>Retry policy Maximum attempts, Default: 4</p>
                     */
                    std::string m_maxRetryAttempts;
                    bool m_maxRetryAttemptsHasBeenSet;

                    /**
                     * <p>Timeout handling strategy Runtime timeout (unit: minutes) Default is -1</p>
                     */
                    std::string m_executionTTL;
                    bool m_executionTTLHasBeenSet;

                    /**
                     * <p>Timeout handling strategy Wait duration timeout (unit: minutes) Default value is -1</p>
                     */
                    std::string m_waitExecutionTotalTTL;
                    bool m_waitExecutionTotalTTLHasBeenSet;

                    /**
                     * <p>Scheduling type: 0 normal scheduling 1 dry-run scheduling, default is 0</p>
                     */
                    int64_t m_scheduleType;
                    bool m_scheduleTypeHasBeenSet;

                    /**
                     * <p>Task scheduling priority Execution priority 4 High 5 Medium 6 Low, Default:6</p>
                     */
                    int64_t m_runPriorityType;
                    bool m_runPriorityTypeHasBeenSet;

                    /**
                     * <p>Retry policy Retry wait time, in minutes: Default: 5</p>
                     */
                    int64_t m_retryWaitMinute;
                    bool m_retryWaitMinuteHasBeenSet;

                    /**
                     * <p>Retry policy Maximum attempts, Default: 4</p>
                     */
                    int64_t m_maxRetryNumber;
                    bool m_maxRetryNumberHasBeenSet;

                    /**
                     * <p>Timeout handling strategy Runtime timeout (unit: minutes) Default is -1</p>
                     */
                    int64_t m_executionTTLMinute;
                    bool m_executionTTLMinuteHasBeenSet;

                    /**
                     * <p>Timeout handling strategy Wait duration timeout (unit: minutes) Default value is -1</p>
                     */
                    int64_t m_waitExecutionTotalTTLMinute;
                    bool m_waitExecutionTotalTTLMinuteHasBeenSet;

                    /**
                     * <ul><li>The task dependency run condition defaults to ALL_SUCCESS. Currently, only workflow scheduling under the project supports configuration.</li><li>ALL_SUCCESS: All successful: When all upstream dependency tasks reach the final state, perform a dependency check. If all upstream tasks are successful, the dependency check passes. Otherwise, if one upstream task skips running, it is marked as skipped. In other cases, it is marked as upstream failure.</li><li>ALL_FAILED: All failed: When all upstream dependency tasks reach the final state, perform a dependency check. If all upstream tasks are in a failed state or marked as upstream failure, the dependency check passes. Otherwise, it is marked as skipped.</li><li>ALL_DONE: All completed: When all upstream dependency tasks reach the final state, perform a dependency check, and the dependency check passes directly.</li><li>ALL_DONE_AT_LEAST_ONE_SUCCESS: All upstream tasks completed with at least one success: When all upstream dependency tasks reach the final state, perform a dependency check. If at least one is successful, the dependency check passes. Otherwise, it skips running.</li><li>ALL_SKIPPED: All upstream tasks skipped: When all upstream dependency tasks reach the final state, perform a dependency check. Only if all upstream tasks are in a skipped state does the dependency check pass. Otherwise, the current node skips running.</li><li>ONE_FAILED: At least one failed: If at least one upstream task fails, perform a dependency check, and the check passes. If all upstream tasks complete but none fail, it skips running.</li><li>ONE_SUCCESS: At least one success: If at least one upstream task succeeds, perform a dependency check, and the check passes. If all upstream tasks complete but none succeed, it skips running.</li><li>ONE_DONE: At least one completed: If at least one upstream task completes, perform a dependency check, and the check passes. Otherwise, it continues waiting for upstream.</li><li>NONE_FAILED: All upstream tasks completed with no failure: When all upstream dependency tasks reach the final state, perform a dependency check. If all upstream tasks are successful or skipped, the check passes. Otherwise, it is marked as upstream failure.</li><li>ALL_DONE_NONE_FAILED_AT_LEAST_ONE_SUCCESS: All upstream tasks completed with no failure and at least one success: When all upstream dependency tasks reach the final state, perform a dependency check. If no upstream task fails and at least one succeeds, the check passes. Otherwise, it skips running.</li><li>NONE_SKIPPED: All upstream tasks completed with no skipped runs: When all upstream dependency tasks reach the final state, perform a dependency check. If all upstream tasks are in a successful, failed, or upstream failure state, the check passes. Otherwise, it skips running.</li><li>ALL_DONE_AT_LEAST_ONE_FAILED: All upstream tasks completed with at least one failure: When all upstream dependency tasks reach the final state, perform a dependency check. If at least one fails, the check passes. Otherwise, it skips running.</li></ul>
                     */
                    std::string m_dependencyTriggerPolicy;
                    bool m_dependencyTriggerPolicyHasBeenSet;

                    /**
                     * <p>Whether to allow downstream dependency 1 Allow 0 Do not allow</p><p>Value ranges from 0 to 1</p><p>Default value: 1</p>
                     */
                    int64_t m_allowDownstreamDependency;
                    bool m_allowDownstreamDependencyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATETASKSCHEDULERCONFIGURATION_H_
