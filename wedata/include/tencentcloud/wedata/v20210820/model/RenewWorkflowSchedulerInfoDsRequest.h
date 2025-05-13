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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_RENEWWORKFLOWSCHEDULERINFODSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_RENEWWORKFLOWSCHEDULERINFODSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * RenewWorkflowSchedulerInfoDs request structure.
                */
                class RenewWorkflowSchedulerInfoDsRequest : public AbstractModel
                {
                public:
                    RenewWorkflowSchedulerInfoDsRequest();
                    ~RenewWorkflowSchedulerInfoDsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Project ID
                     * @return ProjectId Project ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param _projectId Project ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Workflow ID
                     * @return WorkflowId Workflow ID
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置Workflow ID
                     * @param _workflowId Workflow ID
                     * 
                     */
                    void SetWorkflowId(const std::string& _workflowId);

                    /**
                     * 判断参数 WorkflowId 是否已赋值
                     * @return WorkflowId 是否已赋值
                     * 
                     */
                    bool WorkflowIdHasBeenSet() const;

                    /**
                     * 获取Delay Time
                     * @return DelayTime Delay Time
                     * 
                     */
                    uint64_t GetDelayTime() const;

                    /**
                     * 设置Delay Time
                     * @param _delayTime Delay Time
                     * 
                     */
                    void SetDelayTime(const uint64_t& _delayTime);

                    /**
                     * 判断参数 DelayTime 是否已赋值
                     * @return DelayTime 是否已赋值
                     * 
                     */
                    bool DelayTimeHasBeenSet() const;

                    /**
                     * 获取Start Time
                     * @return StartupTime Start Time
                     * 
                     */
                    uint64_t GetStartupTime() const;

                    /**
                     * 设置Start Time
                     * @param _startupTime Start Time
                     * 
                     */
                    void SetStartupTime(const uint64_t& _startupTime);

                    /**
                     * 判断参数 StartupTime 是否已赋值
                     * @return StartupTime 是否已赋值
                     * 
                     */
                    bool StartupTimeHasBeenSet() const;

                    /**
                     * 获取Task Dependency
                     * @return SelfDepend Task Dependency
                     * 
                     */
                    std::string GetSelfDepend() const;

                    /**
                     * 设置Task Dependency
                     * @param _selfDepend Task Dependency
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
                     * 获取Start Time
                     * @return StartTime Start Time
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start Time
                     * @param _startTime Start Time
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
                     * 获取End Time
                     * @return EndTime End Time
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End Time
                     * @param _endTime End Time
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
                     * 获取Specified Running Time
                     * @return TaskAction Specified Running Time
                     * 
                     */
                    std::string GetTaskAction() const;

                    /**
                     * 设置Specified Running Time
                     * @param _taskAction Specified Running Time
                     * 
                     */
                    void SetTaskAction(const std::string& _taskAction);

                    /**
                     * 判断参数 TaskAction 是否已赋值
                     * @return TaskAction 是否已赋值
                     * 
                     */
                    bool TaskActionHasBeenSet() const;

                    /**
                     * 获取Scheduling Cycle Time Unit
                     * @return CycleType Scheduling Cycle Time Unit
                     * 
                     */
                    std::string GetCycleType() const;

                    /**
                     * 设置Scheduling Cycle Time Unit
                     * @param _cycleType Scheduling Cycle Time Unit
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
                     * 获取Scheduling Cycle
                     * @return CycleStep Scheduling Cycle
                     * 
                     */
                    int64_t GetCycleStep() const;

                    /**
                     * 设置Scheduling Cycle
                     * @param _cycleStep Scheduling Cycle
                     * 
                     */
                    void SetCycleStep(const int64_t& _cycleStep);

                    /**
                     * 判断参数 CycleStep 是否已赋值
                     * @return CycleStep 是否已赋值
                     * 
                     */
                    bool CycleStepHasBeenSet() const;

                    /**
                     * 获取Execution Time Left Closed Interval
                     * @return ExecutionStartTime Execution Time Left Closed Interval
                     * 
                     */
                    std::string GetExecutionStartTime() const;

                    /**
                     * 设置Execution Time Left Closed Interval
                     * @param _executionStartTime Execution Time Left Closed Interval
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
                     * 获取Execution Time Right Closed Interval
                     * @return ExecutionEndTime Execution Time Right Closed Interval
                     * 
                     */
                    std::string GetExecutionEndTime() const;

                    /**
                     * 设置Execution Time Right Closed Interval
                     * @param _executionEndTime Execution Time Right Closed Interval
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
                     * 获取Task initialization strategy. valid values: T_PLUS_1, T_PLUS_0, T_MINUS_1
                     * @return InstanceInitStrategy Task initialization strategy. valid values: T_PLUS_1, T_PLUS_0, T_MINUS_1
                     * 
                     */
                    std::string GetInstanceInitStrategy() const;

                    /**
                     * 设置Task initialization strategy. valid values: T_PLUS_1, T_PLUS_0, T_MINUS_1
                     * @param _instanceInitStrategy Task initialization strategy. valid values: T_PLUS_1, T_PLUS_0, T_MINUS_1
                     * 
                     */
                    void SetInstanceInitStrategy(const std::string& _instanceInitStrategy);

                    /**
                     * 判断参数 InstanceInitStrategy 是否已赋值
                     * @return InstanceInitStrategy 是否已赋值
                     * 
                     */
                    bool InstanceInitStrategyHasBeenSet() const;

                    /**
                     * 获取Workflow dependency. valid values: yes or no
                     * @return DependencyWorkflow Workflow dependency. valid values: yes or no
                     * 
                     */
                    std::string GetDependencyWorkflow() const;

                    /**
                     * 设置Workflow dependency. valid values: yes or no
                     * @param _dependencyWorkflow Workflow dependency. valid values: yes or no
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
                     * 获取CrontabExpression
                     * @return CrontabExpression CrontabExpression
                     * 
                     */
                    std::string GetCrontabExpression() const;

                    /**
                     * 设置CrontabExpression
                     * @param _crontabExpression CrontabExpression
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
                     * 获取0: Do not modify 
1: Change the upstream dependency configuration of the task to the default value
                     * @return ModifyCycleValue 0: Do not modify 
1: Change the upstream dependency configuration of the task to the default value
                     * 
                     */
                    std::string GetModifyCycleValue() const;

                    /**
                     * 设置0: Do not modify 
1: Change the upstream dependency configuration of the task to the default value
                     * @param _modifyCycleValue 0: Do not modify 
1: Change the upstream dependency configuration of the task to the default value
                     * 
                     */
                    void SetModifyCycleValue(const std::string& _modifyCycleValue);

                    /**
                     * 判断参数 ModifyCycleValue 是否已赋值
                     * @return ModifyCycleValue 是否已赋值
                     * 
                     */
                    bool ModifyCycleValueHasBeenSet() const;

                    /**
                     * 获取Whether calendar scheduling is enabled. 1 means enabled, and 0 means disabled.
                     * @return CalendarOpen Whether calendar scheduling is enabled. 1 means enabled, and 0 means disabled.
                     * 
                     */
                    std::string GetCalendarOpen() const;

                    /**
                     * 设置Whether calendar scheduling is enabled. 1 means enabled, and 0 means disabled.
                     * @param _calendarOpen Whether calendar scheduling is enabled. 1 means enabled, and 0 means disabled.
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
                     * 获取Whether to automatically clean up links to unsupported tasks.
                     * @return ClearLink Whether to automatically clean up links to unsupported tasks.
                     * 
                     */
                    bool GetClearLink() const;

                    /**
                     * 设置Whether to automatically clean up links to unsupported tasks.
                     * @param _clearLink Whether to automatically clean up links to unsupported tasks.
                     * 
                     */
                    void SetClearLink(const bool& _clearLink);

                    /**
                     * 判断参数 ClearLink 是否已赋值
                     * @return ClearLink 是否已赋值
                     * 
                     */
                    bool ClearLinkHasBeenSet() const;

                private:

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Workflow ID
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * Delay Time
                     */
                    uint64_t m_delayTime;
                    bool m_delayTimeHasBeenSet;

                    /**
                     * Start Time
                     */
                    uint64_t m_startupTime;
                    bool m_startupTimeHasBeenSet;

                    /**
                     * Task Dependency
                     */
                    std::string m_selfDepend;
                    bool m_selfDependHasBeenSet;

                    /**
                     * Start Time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End Time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Specified Running Time
                     */
                    std::string m_taskAction;
                    bool m_taskActionHasBeenSet;

                    /**
                     * Scheduling Cycle Time Unit
                     */
                    std::string m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                    /**
                     * Scheduling Cycle
                     */
                    int64_t m_cycleStep;
                    bool m_cycleStepHasBeenSet;

                    /**
                     * Execution Time Left Closed Interval
                     */
                    std::string m_executionStartTime;
                    bool m_executionStartTimeHasBeenSet;

                    /**
                     * Execution Time Right Closed Interval
                     */
                    std::string m_executionEndTime;
                    bool m_executionEndTimeHasBeenSet;

                    /**
                     * Task initialization strategy. valid values: T_PLUS_1, T_PLUS_0, T_MINUS_1
                     */
                    std::string m_instanceInitStrategy;
                    bool m_instanceInitStrategyHasBeenSet;

                    /**
                     * Workflow dependency. valid values: yes or no
                     */
                    std::string m_dependencyWorkflow;
                    bool m_dependencyWorkflowHasBeenSet;

                    /**
                     * CrontabExpression
                     */
                    std::string m_crontabExpression;
                    bool m_crontabExpressionHasBeenSet;

                    /**
                     * 0: Do not modify 
1: Change the upstream dependency configuration of the task to the default value
                     */
                    std::string m_modifyCycleValue;
                    bool m_modifyCycleValueHasBeenSet;

                    /**
                     * Whether calendar scheduling is enabled. 1 means enabled, and 0 means disabled.
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

                    /**
                     * Specifies the time zone.
                     */
                    std::string m_scheduleTimeZone;
                    bool m_scheduleTimeZoneHasBeenSet;

                    /**
                     * Whether to automatically clean up links to unsupported tasks.
                     */
                    bool m_clearLink;
                    bool m_clearLinkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_RENEWWORKFLOWSCHEDULERINFODSREQUEST_H_
