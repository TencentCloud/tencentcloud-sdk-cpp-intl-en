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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYTASKINFOREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYTASKINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TaskExtInfo.h>
#include <tencentcloud/wedata/v20210820/model/ParamInfo.h>
#include <tencentcloud/wedata/v20210820/model/DependencyConfig.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * ModifyTaskInfo request structure.
                */
                class ModifyTaskInfoRequest : public AbstractModel
                {
                public:
                    ModifyTaskInfoRequest();
                    ~ModifyTaskInfoRequest() = default;
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
                     * 获取Task ID
                     * @return TaskId Task ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID
                     * @param _taskId Task ID
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Execution time, in minutes, applicable to daily/weekly/monthly/yearly scheduling. For example, with daily scheduling, executing once at 02:00 AM every day, delayTime is 120 minutes
                     * @return DelayTime Execution time, in minutes, applicable to daily/weekly/monthly/yearly scheduling. For example, with daily scheduling, executing once at 02:00 AM every day, delayTime is 120 minutes
                     * 
                     */
                    int64_t GetDelayTime() const;

                    /**
                     * 设置Execution time, in minutes, applicable to daily/weekly/monthly/yearly scheduling. For example, with daily scheduling, executing once at 02:00 AM every day, delayTime is 120 minutes
                     * @param _delayTime Execution time, in minutes, applicable to daily/weekly/monthly/yearly scheduling. For example, with daily scheduling, executing once at 02:00 AM every day, delayTime is 120 minutes
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
                     * 获取New Task Name
                     * @return TaskName New Task Name
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置New Task Name
                     * @param _taskName New Task Name
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取Failure Retry Interval, in minutes, a default value has already been provided during task creation
                     * @return RetryWait Failure Retry Interval, in minutes, a default value has already been provided during task creation
                     * 
                     */
                    int64_t GetRetryWait() const;

                    /**
                     * 设置Failure Retry Interval, in minutes, a default value has already been provided during task creation
                     * @param _retryWait Failure Retry Interval, in minutes, a default value has already been provided during task creation
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
                     * 获取Number of Retry Attempts on Failure, a default value has already been provided during task creation
                     * @return TryLimit Number of Retry Attempts on Failure, a default value has already been provided during task creation
                     * 
                     */
                    int64_t GetTryLimit() const;

                    /**
                     * 设置Number of Retry Attempts on Failure, a default value has already been provided during task creation
                     * @param _tryLimit Number of Retry Attempts on Failure, a default value has already been provided during task creation
                     * 
                     */
                    void SetTryLimit(const int64_t& _tryLimit);

                    /**
                     * 判断参数 TryLimit 是否已赋值
                     * @return TryLimit 是否已赋值
                     * 
                     */
                    bool TryLimitHasBeenSet() const;

                    /**
                     * 获取Whether to Retry, 1 for yes
                     * @return Retriable Whether to Retry, 1 for yes
                     * 
                     */
                    int64_t GetRetriable() const;

                    /**
                     * 设置Whether to Retry, 1 for yes
                     * @param _retriable Whether to Retry, 1 for yes
                     * 
                     */
                    void SetRetriable(const int64_t& _retriable);

                    /**
                     * 判断参数 Retriable 是否已赋值
                     * @return Retriable 是否已赋值
                     * 
                     */
                    bool RetriableHasBeenSet() const;

                    /**
                     * 获取Running Priority, 4 for High, 5 for Medium, 6 for Low
                     * @return RunPriority Running Priority, 4 for High, 5 for Medium, 6 for Low
                     * 
                     */
                    int64_t GetRunPriority() const;

                    /**
                     * 设置Running Priority, 4 for High, 5 for Medium, 6 for Low
                     * @param _runPriority Running Priority, 4 for High, 5 for Medium, 6 for Low
                     * 
                     */
                    void SetRunPriority(const int64_t& _runPriority);

                    /**
                     * 判断参数 RunPriority 是否已赋值
                     * @return RunPriority 是否已赋值
                     * 
                     */
                    bool RunPriorityHasBeenSet() const;

                    /**
                     * 获取Extended Task Configuration
                     * @return TaskExt Extended Task Configuration
                     * 
                     */
                    std::vector<TaskExtInfo> GetTaskExt() const;

                    /**
                     * 设置Extended Task Configuration
                     * @param _taskExt Extended Task Configuration
                     * 
                     */
                    void SetTaskExt(const std::vector<TaskExtInfo>& _taskExt);

                    /**
                     * 判断参数 TaskExt 是否已赋值
                     * @return TaskExt 是否已赋值
                     * 
                     */
                    bool TaskExtHasBeenSet() const;

                    /**
                     * 获取Execution Resource Group ID, needs to be created on the Resource Management Service and bind to a CVM machine
                     * @return ResourceGroup Execution Resource Group ID, needs to be created on the Resource Management Service and bind to a CVM machine
                     * 
                     */
                    std::string GetResourceGroup() const;

                    /**
                     * 设置Execution Resource Group ID, needs to be created on the Resource Management Service and bind to a CVM machine
                     * @param _resourceGroup Execution Resource Group ID, needs to be created on the Resource Management Service and bind to a CVM machine
                     * 
                     */
                    void SetResourceGroup(const std::string& _resourceGroup);

                    /**
                     * 判断参数 ResourceGroup 是否已赋值
                     * @return ResourceGroup 是否已赋值
                     * 
                     */
                    bool ResourceGroupHasBeenSet() const;

                    /**
                     * 获取Resource Pool Queue Name
                     * @return YarnQueue Resource Pool Queue Name
                     * 
                     */
                    std::string GetYarnQueue() const;

                    /**
                     * 设置Resource Pool Queue Name
                     * @param _yarnQueue Resource Pool Queue Name
                     * 
                     */
                    void SetYarnQueue(const std::string& _yarnQueue);

                    /**
                     * 判断参数 YarnQueue 是否已赋值
                     * @return YarnQueue 是否已赋值
                     * 
                     */
                    bool YarnQueueHasBeenSet() const;

                    /**
                     * 获取Specific Execution Machine under Resource Group, 'any' means it can run on any machine.
                     * @return BrokerIp Specific Execution Machine under Resource Group, 'any' means it can run on any machine.
                     * 
                     */
                    std::string GetBrokerIp() const;

                    /**
                     * 设置Specific Execution Machine under Resource Group, 'any' means it can run on any machine.
                     * @param _brokerIp Specific Execution Machine under Resource Group, 'any' means it can run on any machine.
                     * 
                     */
                    void SetBrokerIp(const std::string& _brokerIp);

                    /**
                     * 判断参数 BrokerIp 是否已赋值
                     * @return BrokerIp 是否已赋值
                     * 
                     */
                    bool BrokerIpHasBeenSet() const;

                    /**
                     * 获取Person in Charge
                     * @return InCharge Person in Charge
                     * @deprecated
                     */
                    std::string GetInCharge() const;

                    /**
                     * 设置Person in Charge
                     * @param _inCharge Person in Charge
                     * @deprecated
                     */
                    void SetInCharge(const std::string& _inCharge);

                    /**
                     * 判断参数 InCharge 是否已赋值
                     * @return InCharge 是否已赋值
                     * @deprecated
                     */
                    bool InChargeHasBeenSet() const;

                    /**
                     * 获取Task notes
                     * @return Notes Task notes
                     * 
                     */
                    std::string GetNotes() const;

                    /**
                     * 设置Task notes
                     * @param _notes Task notes
                     * 
                     */
                    void SetNotes(const std::string& _notes);

                    /**
                     * 判断参数 Notes 是否已赋值
                     * @return Notes 是否已赋值
                     * 
                     */
                    bool NotesHasBeenSet() const;

                    /**
                     * 获取Task Parameters
                     * @return TaskParamInfos Task Parameters
                     * 
                     */
                    std::vector<ParamInfo> GetTaskParamInfos() const;

                    /**
                     * 设置Task Parameters
                     * @param _taskParamInfos Task Parameters
                     * 
                     */
                    void SetTaskParamInfos(const std::vector<ParamInfo>& _taskParamInfos);

                    /**
                     * 判断参数 TaskParamInfos 是否已赋值
                     * @return TaskParamInfos 是否已赋值
                     * 
                     */
                    bool TaskParamInfosHasBeenSet() const;

                    /**
                     * 获取Source Data Source
                     * @return SourceServer Source Data Source
                     * 
                     */
                    std::string GetSourceServer() const;

                    /**
                     * 设置Source Data Source
                     * @param _sourceServer Source Data Source
                     * 
                     */
                    void SetSourceServer(const std::string& _sourceServer);

                    /**
                     * 判断参数 SourceServer 是否已赋值
                     * @return SourceServer 是否已赋值
                     * 
                     */
                    bool SourceServerHasBeenSet() const;

                    /**
                     * 获取Target Data Source
                     * @return TargetServer Target Data Source
                     * 
                     */
                    std::string GetTargetServer() const;

                    /**
                     * 设置Target Data Source
                     * @param _targetServer Target Data Source
                     * 
                     */
                    void SetTargetServer(const std::string& _targetServer);

                    /**
                     * 判断参数 TargetServer 是否已赋值
                     * @return TargetServer 是否已赋值
                     * 
                     */
                    bool TargetServerHasBeenSet() const;

                    /**
                     * 获取Supports Workflow Dependencies yes/no, default no
                     * @return DependencyWorkflow Supports Workflow Dependencies yes/no, default no
                     * 
                     */
                    std::string GetDependencyWorkflow() const;

                    /**
                     * 设置Supports Workflow Dependencies yes/no, default no
                     * @param _dependencyWorkflow Supports Workflow Dependencies yes/no, default no
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
                     * 获取Dependency Configuration
                     * @return DependencyConfigDTOs Dependency Configuration
                     * 
                     */
                    std::vector<DependencyConfig> GetDependencyConfigDTOs() const;

                    /**
                     * 设置Dependency Configuration
                     * @param _dependencyConfigDTOs Dependency Configuration
                     * 
                     */
                    void SetDependencyConfigDTOs(const std::vector<DependencyConfig>& _dependencyConfigDTOs);

                    /**
                     * 判断参数 DependencyConfigDTOs 是否已赋值
                     * @return DependencyConfigDTOs 是否已赋值
                     * 
                     */
                    bool DependencyConfigDTOsHasBeenSet() const;

                    /**
                     * 获取Execution Duration
                     * @return ExecutionTTL Execution Duration
                     * 
                     */
                    int64_t GetExecutionTTL() const;

                    /**
                     * 设置Execution Duration
                     * @param _executionTTL Execution Duration
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
                     * 获取Whether the Script has Changed
                     * @return ScriptChange Whether the Script has Changed
                     * 
                     */
                    bool GetScriptChange() const;

                    /**
                     * 设置Whether the Script has Changed
                     * @param _scriptChange Whether the Script has Changed
                     * 
                     */
                    void SetScriptChange(const bool& _scriptChange);

                    /**
                     * 判断参数 ScriptChange 是否已赋值
                     * @return ScriptChange 是否已赋值
                     * 
                     */
                    bool ScriptChangeHasBeenSet() const;

                    /**
                     * 获取Responsible Person ID
                     * @return InChargeIds Responsible Person ID
                     * 
                     */
                    std::vector<std::string> GetInChargeIds() const;

                    /**
                     * 设置Responsible Person ID
                     * @param _inChargeIds Responsible Person ID
                     * 
                     */
                    void SetInChargeIds(const std::vector<std::string>& _inChargeIds);

                    /**
                     * 判断参数 InChargeIds 是否已赋值
                     * @return InChargeIds 是否已赋值
                     * 
                     */
                    bool InChargeIdsHasBeenSet() const;

                private:

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Task ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Execution time, in minutes, applicable to daily/weekly/monthly/yearly scheduling. For example, with daily scheduling, executing once at 02:00 AM every day, delayTime is 120 minutes
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
                     * New Task Name
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * Failure Retry Interval, in minutes, a default value has already been provided during task creation
                     */
                    int64_t m_retryWait;
                    bool m_retryWaitHasBeenSet;

                    /**
                     * Number of Retry Attempts on Failure, a default value has already been provided during task creation
                     */
                    int64_t m_tryLimit;
                    bool m_tryLimitHasBeenSet;

                    /**
                     * Whether to Retry, 1 for yes
                     */
                    int64_t m_retriable;
                    bool m_retriableHasBeenSet;

                    /**
                     * Running Priority, 4 for High, 5 for Medium, 6 for Low
                     */
                    int64_t m_runPriority;
                    bool m_runPriorityHasBeenSet;

                    /**
                     * Extended Task Configuration
                     */
                    std::vector<TaskExtInfo> m_taskExt;
                    bool m_taskExtHasBeenSet;

                    /**
                     * Execution Resource Group ID, needs to be created on the Resource Management Service and bind to a CVM machine
                     */
                    std::string m_resourceGroup;
                    bool m_resourceGroupHasBeenSet;

                    /**
                     * Resource Pool Queue Name
                     */
                    std::string m_yarnQueue;
                    bool m_yarnQueueHasBeenSet;

                    /**
                     * Specific Execution Machine under Resource Group, 'any' means it can run on any machine.
                     */
                    std::string m_brokerIp;
                    bool m_brokerIpHasBeenSet;

                    /**
                     * Person in Charge
                     */
                    std::string m_inCharge;
                    bool m_inChargeHasBeenSet;

                    /**
                     * Task notes
                     */
                    std::string m_notes;
                    bool m_notesHasBeenSet;

                    /**
                     * Task Parameters
                     */
                    std::vector<ParamInfo> m_taskParamInfos;
                    bool m_taskParamInfosHasBeenSet;

                    /**
                     * Source Data Source
                     */
                    std::string m_sourceServer;
                    bool m_sourceServerHasBeenSet;

                    /**
                     * Target Data Source
                     */
                    std::string m_targetServer;
                    bool m_targetServerHasBeenSet;

                    /**
                     * Supports Workflow Dependencies yes/no, default no
                     */
                    std::string m_dependencyWorkflow;
                    bool m_dependencyWorkflowHasBeenSet;

                    /**
                     * Dependency Configuration
                     */
                    std::vector<DependencyConfig> m_dependencyConfigDTOs;
                    bool m_dependencyConfigDTOsHasBeenSet;

                    /**
                     * Execution Duration
                     */
                    int64_t m_executionTTL;
                    bool m_executionTTLHasBeenSet;

                    /**
                     * Whether the Script has Changed
                     */
                    bool m_scriptChange;
                    bool m_scriptChangeHasBeenSet;

                    /**
                     * Responsible Person ID
                     */
                    std::vector<std::string> m_inChargeIds;
                    bool m_inChargeIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYTASKINFOREQUEST_H_
