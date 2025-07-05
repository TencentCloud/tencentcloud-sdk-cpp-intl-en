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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYWORKFLOWSCHEDULEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYWORKFLOWSCHEDULEREQUEST_H_

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
                * ModifyWorkflowSchedule request structure.
                */
                class ModifyWorkflowScheduleRequest : public AbstractModel
                {
                public:
                    ModifyWorkflowScheduleRequest();
                    ~ModifyWorkflowScheduleRequest() = default;
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
                     * 获取Delay time, in minutes
                     * @return DelayTime Delay time, in minutes
                     * 
                     */
                    int64_t GetDelayTime() const;

                    /**
                     * 设置Delay time, in minutes
                     * @param _delayTime Delay time, in minutes
                     * 
                     */
                    void SetDelayTime(const int64_t& _delayTime);

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
                    int64_t GetStartupTime() const;

                    /**
                     * 设置Start Time
                     * @param _startupTime Start Time
                     * 
                     */
                    void SetStartupTime(const int64_t& _startupTime);

                    /**
                     * 判断参数 StartupTime 是否已赋值
                     * @return StartupTime 是否已赋值
                     * 
                     */
                    bool StartupTimeHasBeenSet() const;

                    /**
                     * 获取Self-Dependency Type  1: Sequential serial, one at a time, queued, 2: Unordered serial, one at a time, not queued, 3: Parallel, multiple at once
                     * @return SelfDepend Self-Dependency Type  1: Sequential serial, one at a time, queued, 2: Unordered serial, one at a time, not queued, 3: Parallel, multiple at once
                     * 
                     */
                    int64_t GetSelfDepend() const;

                    /**
                     * 设置Self-Dependency Type  1: Sequential serial, one at a time, queued, 2: Unordered serial, one at a time, not queued, 3: Parallel, multiple at once
                     * @param _selfDepend Self-Dependency Type  1: Sequential serial, one at a time, queued, 2: Unordered serial, one at a time, not queued, 3: Parallel, multiple at once
                     * 
                     */
                    void SetSelfDepend(const int64_t& _selfDepend);

                    /**
                     * 判断参数 SelfDepend 是否已赋值
                     * @return SelfDepend 是否已赋值
                     * 
                     */
                    bool SelfDependHasBeenSet() const;

                    /**
                     * 获取"Cycle Type  0:crontab, 1:Minute,2:Hour,3:Day,4:Week,5:Month,6:One-time,7:User driven,10:Flexible cycle Week,11:Flexible cycle Month,12:Year,13:Immediate Trigger Instant type, isolated from normal cycle scheduling task logic
                     * @return CycleType "Cycle Type  0:crontab, 1:Minute,2:Hour,3:Day,4:Week,5:Month,6:One-time,7:User driven,10:Flexible cycle Week,11:Flexible cycle Month,12:Year,13:Immediate Trigger Instant type, isolated from normal cycle scheduling task logic
                     * 
                     */
                    int64_t GetCycleType() const;

                    /**
                     * 设置"Cycle Type  0:crontab, 1:Minute,2:Hour,3:Day,4:Week,5:Month,6:One-time,7:User driven,10:Flexible cycle Week,11:Flexible cycle Month,12:Year,13:Immediate Trigger Instant type, isolated from normal cycle scheduling task logic
                     * @param _cycleType "Cycle Type  0:crontab, 1:Minute,2:Hour,3:Day,4:Week,5:Month,6:One-time,7:User driven,10:Flexible cycle Week,11:Flexible cycle Month,12:Year,13:Immediate Trigger Instant type, isolated from normal cycle scheduling task logic
                     * 
                     */
                    void SetCycleType(const int64_t& _cycleType);

                    /**
                     * 判断参数 CycleType 是否已赋值
                     * @return CycleType 是否已赋值
                     * 
                     */
                    bool CycleTypeHasBeenSet() const;

                    /**
                     * 获取Step Length, Interval Time, minimum of 1
                     * @return CycleStep Step Length, Interval Time, minimum of 1
                     * 
                     */
                    int64_t GetCycleStep() const;

                    /**
                     * 设置Step Length, Interval Time, minimum of 1
                     * @param _cycleStep Step Length, Interval Time, minimum of 1
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
                     * 获取Effective Start Time, format yyyy-MM-dd HH:mm:ss
                     * @return StartTime Effective Start Time, format yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Effective Start Time, format yyyy-MM-dd HH:mm:ss
                     * @param _startTime Effective Start Time, format yyyy-MM-dd HH:mm:ss
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
                     * 获取Effective End Time, format yyyy-MM-dd HH:mm:ss
                     * @return EndTime Effective End Time, format yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Effective End Time, format yyyy-MM-dd HH:mm:ss
                     * @param _endTime Effective End Time, format yyyy-MM-dd HH:mm:ss
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
                     * 获取Scheduling Configuration - Elastic Cycle Configuration, applicable to Hourly/Weekly/Monthly/Yearly schedules. For hourly tasks scheduled at 0, 3, 4 o'clock, it would be '0,3,4'.
                     * @return TaskAction Scheduling Configuration - Elastic Cycle Configuration, applicable to Hourly/Weekly/Monthly/Yearly schedules. For hourly tasks scheduled at 0, 3, 4 o'clock, it would be '0,3,4'.
                     * 
                     */
                    std::string GetTaskAction() const;

                    /**
                     * 设置Scheduling Configuration - Elastic Cycle Configuration, applicable to Hourly/Weekly/Monthly/Yearly schedules. For hourly tasks scheduled at 0, 3, 4 o'clock, it would be '0,3,4'.
                     * @param _taskAction Scheduling Configuration - Elastic Cycle Configuration, applicable to Hourly/Weekly/Monthly/Yearly schedules. For hourly tasks scheduled at 0, 3, 4 o'clock, it would be '0,3,4'.
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
                     * 获取Cron Expression is required only for Cron Tab Scheduling
                     * @return CrontabExpression Cron Expression is required only for Cron Tab Scheduling
                     * 
                     */
                    std::string GetCrontabExpression() const;

                    /**
                     * 设置Cron Expression is required only for Cron Tab Scheduling
                     * @param _crontabExpression Cron Expression is required only for Cron Tab Scheduling
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
                     * 获取Execution Time Left Closed Interval, format: HH:mm. Applicable only to hourly scheduling. For example, for hourly tasks, it specifies the effective interval every day
                     * @return ExecutionStartTime Execution Time Left Closed Interval, format: HH:mm. Applicable only to hourly scheduling. For example, for hourly tasks, it specifies the effective interval every day
                     * 
                     */
                    std::string GetExecutionStartTime() const;

                    /**
                     * 设置Execution Time Left Closed Interval, format: HH:mm. Applicable only to hourly scheduling. For example, for hourly tasks, it specifies the effective interval every day
                     * @param _executionStartTime Execution Time Left Closed Interval, format: HH:mm. Applicable only to hourly scheduling. For example, for hourly tasks, it specifies the effective interval every day
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
                     * 获取Execution Time Right Closed Interval, format: HH:mm. Applicable only to hourly scheduling. For example, for hourly tasks, it specifies the effective interval every day
                     * @return ExecutionEndTime Execution Time Right Closed Interval, format: HH:mm. Applicable only to hourly scheduling. For example, for hourly tasks, it specifies the effective interval every day
                     * 
                     */
                    std::string GetExecutionEndTime() const;

                    /**
                     * 设置Execution Time Right Closed Interval, format: HH:mm. Applicable only to hourly scheduling. For example, for hourly tasks, it specifies the effective interval every day
                     * @param _executionEndTime Execution Time Right Closed Interval, format: HH:mm. Applicable only to hourly scheduling. For example, for hourly tasks, it specifies the effective interval every day
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
                     * 获取Workflow Dependency, yes or no
                     * @return DependencyWorkflow Workflow Dependency, yes or no
                     * 
                     */
                    std::string GetDependencyWorkflow() const;

                    /**
                     * 设置Workflow Dependency, yes or no
                     * @param _dependencyWorkflow Workflow Dependency, yes or no
                     * 
                     */
                    void SetDependencyWorkflow(const std::string& _dependencyWorkflow);

                    /**
                     * 判断参数 DependencyWorkflow 是否已赋值
                     * @return DependencyWorkflow 是否已赋值
                     * 
                     */
                    bool DependencyWorkflowHasBeenSet() const;

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
                     * Delay time, in minutes
                     */
                    int64_t m_delayTime;
                    bool m_delayTimeHasBeenSet;

                    /**
                     * Start Time
                     */
                    int64_t m_startupTime;
                    bool m_startupTimeHasBeenSet;

                    /**
                     * Self-Dependency Type  1: Sequential serial, one at a time, queued, 2: Unordered serial, one at a time, not queued, 3: Parallel, multiple at once
                     */
                    int64_t m_selfDepend;
                    bool m_selfDependHasBeenSet;

                    /**
                     * "Cycle Type  0:crontab, 1:Minute,2:Hour,3:Day,4:Week,5:Month,6:One-time,7:User driven,10:Flexible cycle Week,11:Flexible cycle Month,12:Year,13:Immediate Trigger Instant type, isolated from normal cycle scheduling task logic
                     */
                    int64_t m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                    /**
                     * Step Length, Interval Time, minimum of 1
                     */
                    int64_t m_cycleStep;
                    bool m_cycleStepHasBeenSet;

                    /**
                     * Effective Start Time, format yyyy-MM-dd HH:mm:ss
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Effective End Time, format yyyy-MM-dd HH:mm:ss
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Scheduling Configuration - Elastic Cycle Configuration, applicable to Hourly/Weekly/Monthly/Yearly schedules. For hourly tasks scheduled at 0, 3, 4 o'clock, it would be '0,3,4'.
                     */
                    std::string m_taskAction;
                    bool m_taskActionHasBeenSet;

                    /**
                     * Cron Expression is required only for Cron Tab Scheduling
                     */
                    std::string m_crontabExpression;
                    bool m_crontabExpressionHasBeenSet;

                    /**
                     * Execution Time Left Closed Interval, format: HH:mm. Applicable only to hourly scheduling. For example, for hourly tasks, it specifies the effective interval every day
                     */
                    std::string m_executionStartTime;
                    bool m_executionStartTimeHasBeenSet;

                    /**
                     * Execution Time Right Closed Interval, format: HH:mm. Applicable only to hourly scheduling. For example, for hourly tasks, it specifies the effective interval every day
                     */
                    std::string m_executionEndTime;
                    bool m_executionEndTimeHasBeenSet;

                    /**
                     * Workflow Dependency, yes or no
                     */
                    std::string m_dependencyWorkflow;
                    bool m_dependencyWorkflowHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYWORKFLOWSCHEDULEREQUEST_H_
