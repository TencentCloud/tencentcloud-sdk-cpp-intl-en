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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCEOPSDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCEOPSDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TaskTypeOpsDto.h>
#include <tencentcloud/wedata/v20210820/model/InstanceOpsDto.h>
#include <tencentcloud/wedata/v20210820/model/InstanceLifeCycleOpsDto.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Instance Operation Details
                */
                class InstanceOpsDto : public AbstractModel
                {
                public:
                    InstanceOpsDto();
                    ~InstanceOpsDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @return TaskId Task IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _taskId Task IDNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Task NameNote: This field may return null, indicating that no valid value can be obtained.
                     * @return TaskName Task NameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置Task NameNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _taskName Task NameNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Workflow ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return WorkflowId Workflow ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置Workflow ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _workflowId Workflow ID
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Workflow nameNote: This field may return null, indicating that no valid value can be obtained.
                     * @return WorkflowName Workflow nameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetWorkflowName() const;

                    /**
                     * 设置Workflow nameNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _workflowName Workflow nameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetWorkflowName(const std::string& _workflowName);

                    /**
                     * 判断参数 WorkflowName 是否已赋值
                     * @return WorkflowName 是否已赋值
                     * 
                     */
                    bool WorkflowNameHasBeenSet() const;

                    /**
                     * 获取Owner
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return InCharge Owner
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetInCharge() const;

                    /**
                     * 设置Owner
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _inCharge Owner
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetInCharge(const std::string& _inCharge);

                    /**
                     * 判断参数 InCharge 是否已赋值
                     * @return InCharge 是否已赋值
                     * 
                     */
                    bool InChargeHasBeenSet() const;

                    /**
                     * 获取Cycle Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CycleType Cycle Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCycleType() const;

                    /**
                     * 设置Cycle Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _cycleType Cycle Type
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Data Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CurRunDate Data Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCurRunDate() const;

                    /**
                     * 设置Data Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _curRunDate Data Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCurRunDate(const std::string& _curRunDate);

                    /**
                     * 判断参数 CurRunDate 是否已赋值
                     * @return CurRunDate 是否已赋值
                     * 
                     */
                    bool CurRunDateHasBeenSet() const;

                    /**
                     * 获取Next Data Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return NextCurDate Next Data Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetNextCurDate() const;

                    /**
                     * 设置Next Data Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _nextCurDate Next Data Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetNextCurDate(const std::string& _nextCurDate);

                    /**
                     * 判断参数 NextCurDate 是否已赋值
                     * @return NextCurDate 是否已赋值
                     * 
                     */
                    bool NextCurDateHasBeenSet() const;

                    /**
                     * 获取Running Priority
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return RunPriority Running Priority
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetRunPriority() const;

                    /**
                     * 设置Running Priority
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _runPriority Running Priority
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Number of Attempts
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TryLimit Number of Attempts
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetTryLimit() const;

                    /**
                     * 设置Number of Attempts
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _tryLimit Number of Attempts
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTryLimit(const uint64_t& _tryLimit);

                    /**
                     * 判断参数 TryLimit 是否已赋值
                     * @return TryLimit 是否已赋值
                     * 
                     */
                    bool TryLimitHasBeenSet() const;

                    /**
                     * 获取Current Running Times
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Tries Current Running Times
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetTries() const;

                    /**
                     * 设置Current Running Times
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _tries Current Running Times
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTries(const uint64_t& _tries);

                    /**
                     * 判断参数 Tries 是否已赋值
                     * @return Tries 是否已赋值
                     * 
                     */
                    bool TriesHasBeenSet() const;

                    /**
                     * 获取Total Retry Attempts
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TotalRunNum Total Retry Attempts
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetTotalRunNum() const;

                    /**
                     * 设置Total Retry Attempts
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _totalRunNum Total Retry Attempts
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTotalRunNum(const uint64_t& _totalRunNum);

                    /**
                     * 判断参数 TotalRunNum 是否已赋值
                     * @return TotalRunNum 是否已赋值
                     * 
                     */
                    bool TotalRunNumHasBeenSet() const;

                    /**
                     * 获取Whether to Supplement
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DoFlag Whether to Supplement
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetDoFlag() const;

                    /**
                     * 设置Whether to Supplement
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _doFlag Whether to Supplement
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDoFlag(const uint64_t& _doFlag);

                    /**
                     * 判断参数 DoFlag 是否已赋值
                     * @return DoFlag 是否已赋值
                     * 
                     */
                    bool DoFlagHasBeenSet() const;

                    /**
                     * 获取Whether it is a Retry
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return RedoFlag Whether it is a Retry
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetRedoFlag() const;

                    /**
                     * 设置Whether it is a Retry
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _redoFlag Whether it is a Retry
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRedoFlag(const uint64_t& _redoFlag);

                    /**
                     * 判断参数 RedoFlag 是否已赋值
                     * @return RedoFlag 是否已赋值
                     * 
                     */
                    bool RedoFlagHasBeenSet() const;

                    /**
                     * 获取Instance StatusNote: This field may return null, indicating that no valid value can be obtained.
                     * @return State Instance StatusNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置Instance StatusNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _state Instance StatusNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取Run Node
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return RuntimeBroker Run Node
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetRuntimeBroker() const;

                    /**
                     * 设置Run Node
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _runtimeBroker Run Node
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRuntimeBroker(const std::string& _runtimeBroker);

                    /**
                     * 判断参数 RuntimeBroker 是否已赋值
                     * @return RuntimeBroker 是否已赋值
                     * 
                     */
                    bool RuntimeBrokerHasBeenSet() const;

                    /**
                     * 获取Reason for Failure
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ErrorDesc Reason for Failure
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetErrorDesc() const;

                    /**
                     * 设置Reason for Failure
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _errorDesc Reason for Failure
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetErrorDesc(const std::string& _errorDesc);

                    /**
                     * 判断参数 ErrorDesc 是否已赋值
                     * @return ErrorDesc 是否已赋值
                     * 
                     */
                    bool ErrorDescHasBeenSet() const;

                    /**
                     * 获取Task TypeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return TaskType Task TypeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    TaskTypeOpsDto GetTaskType() const;

                    /**
                     * 设置Task TypeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _taskType Task TypeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTaskType(const TaskTypeOpsDto& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取Dependency Judgment Completion Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DependenceFulfillTime Dependency Judgment Completion Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDependenceFulfillTime() const;

                    /**
                     * 设置Dependency Judgment Completion Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _dependenceFulfillTime Dependency Judgment Completion Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDependenceFulfillTime(const std::string& _dependenceFulfillTime);

                    /**
                     * 判断参数 DependenceFulfillTime 是否已赋值
                     * @return DependenceFulfillTime 是否已赋值
                     * 
                     */
                    bool DependenceFulfillTimeHasBeenSet() const;

                    /**
                     * 获取First Dependency Judgment Pass Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return FirstDependenceFulfillTime First Dependency Judgment Pass Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetFirstDependenceFulfillTime() const;

                    /**
                     * 设置First Dependency Judgment Pass Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _firstDependenceFulfillTime First Dependency Judgment Pass Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetFirstDependenceFulfillTime(const std::string& _firstDependenceFulfillTime);

                    /**
                     * 判断参数 FirstDependenceFulfillTime 是否已赋值
                     * @return FirstDependenceFulfillTime 是否已赋值
                     * 
                     */
                    bool FirstDependenceFulfillTimeHasBeenSet() const;

                    /**
                     * 获取Initial startup time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return FirstStartTime Initial startup time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetFirstStartTime() const;

                    /**
                     * 设置Initial startup time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _firstStartTime Initial startup time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetFirstStartTime(const std::string& _firstStartTime);

                    /**
                     * 判断参数 FirstStartTime 是否已赋值
                     * @return FirstStartTime 是否已赋值
                     * 
                     */
                    bool FirstStartTimeHasBeenSet() const;

                    /**
                     * 获取Start startup time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return StartTime Start startup time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start startup time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _startTime Start startup time
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Operation completion time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return EndTime Operation completion time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Operation completion time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _endTime Operation completion time
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Time Consumed
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CostTime Time Consumed
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCostTime() const;

                    /**
                     * 设置Time Consumed
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _costTime Time Consumed
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCostTime(const std::string& _costTime);

                    /**
                     * 判断参数 CostTime 是否已赋值
                     * @return CostTime 是否已赋值
                     * 
                     */
                    bool CostTimeHasBeenSet() const;

                    /**
                     * 获取Elapsed time (ms)
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CostMillisecond Elapsed time (ms)
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetCostMillisecond() const;

                    /**
                     * 设置Elapsed time (ms)
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _costMillisecond Elapsed time (ms)
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCostMillisecond(const uint64_t& _costMillisecond);

                    /**
                     * 判断参数 CostMillisecond 是否已赋值
                     * @return CostMillisecond 是否已赋值
                     * 
                     */
                    bool CostMillisecondHasBeenSet() const;

                    /**
                     * 获取Maximum operation duration
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return MaxCostTime Maximum operation duration
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetMaxCostTime() const;

                    /**
                     * 设置Maximum operation duration
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _maxCostTime Maximum operation duration
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetMaxCostTime(const uint64_t& _maxCostTime);

                    /**
                     * 判断参数 MaxCostTime 是否已赋值
                     * @return MaxCostTime 是否已赋值
                     * 
                     */
                    bool MaxCostTimeHasBeenSet() const;

                    /**
                     * 获取Minimum operation duration
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return MinCostTime Minimum operation duration
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetMinCostTime() const;

                    /**
                     * 设置Minimum operation duration
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _minCostTime Minimum operation duration
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetMinCostTime(const uint64_t& _minCostTime);

                    /**
                     * 判断参数 MinCostTime 是否已赋值
                     * @return MinCostTime 是否已赋值
                     * 
                     */
                    bool MinCostTimeHasBeenSet() const;

                    /**
                     * 获取Average operation duration
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return AvgCostTime Average operation duration
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    double GetAvgCostTime() const;

                    /**
                     * 设置Average operation duration
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _avgCostTime Average operation duration
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAvgCostTime(const double& _avgCostTime);

                    /**
                     * 判断参数 AvgCostTime 是否已赋值
                     * @return AvgCostTime 是否已赋值
                     * 
                     */
                    bool AvgCostTimeHasBeenSet() const;

                    /**
                     * 获取Recent logs
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return LastLog Recent logs
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetLastLog() const;

                    /**
                     * 设置Recent logs
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _lastLog Recent logs
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetLastLog(const std::string& _lastLog);

                    /**
                     * 判断参数 LastLog 是否已赋值
                     * @return LastLog 是否已赋值
                     * 
                     */
                    bool LastLogHasBeenSet() const;

                    /**
                     * 获取Scheduling Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SchedulerDateTime Scheduling Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetSchedulerDateTime() const;

                    /**
                     * 设置Scheduling Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _schedulerDateTime Scheduling Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSchedulerDateTime(const std::string& _schedulerDateTime);

                    /**
                     * 判断参数 SchedulerDateTime 是否已赋值
                     * @return SchedulerDateTime 是否已赋值
                     * 
                     */
                    bool SchedulerDateTimeHasBeenSet() const;

                    /**
                     * 获取Last scheduling time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return LastSchedulerDateTime Last scheduling time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetLastSchedulerDateTime() const;

                    /**
                     * 设置Last scheduling time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _lastSchedulerDateTime Last scheduling time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetLastSchedulerDateTime(const std::string& _lastSchedulerDateTime);

                    /**
                     * 判断参数 LastSchedulerDateTime 是否已赋值
                     * @return LastSchedulerDateTime 是否已赋值
                     * 
                     */
                    bool LastSchedulerDateTimeHasBeenSet() const;

                    /**
                     * 获取Last update event
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return LastUpdate Last update event
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetLastUpdate() const;

                    /**
                     * 设置Last update event
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _lastUpdate Last update event
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetLastUpdate(const std::string& _lastUpdate);

                    /**
                     * 判断参数 LastUpdate 是否已赋值
                     * @return LastUpdate 是否已赋值
                     * 
                     */
                    bool LastUpdateHasBeenSet() const;

                    /**
                     * 获取Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return CreateTime Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _createTime Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Branch, Dependency Relationship and,or
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DependencyRel Branch, Dependency Relationship and,or
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDependencyRel() const;

                    /**
                     * 设置Branch, Dependency Relationship and,or
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _dependencyRel Branch, Dependency Relationship and,or
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDependencyRel(const std::string& _dependencyRel);

                    /**
                     * 判断参数 DependencyRel 是否已赋值
                     * @return DependencyRel 是否已赋值
                     * 
                     */
                    bool DependencyRelHasBeenSet() const;

                    /**
                     * 获取Execution space
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ExecutionSpace Execution space
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetExecutionSpace() const;

                    /**
                     * 设置Execution space
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _executionSpace Execution space
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetExecutionSpace(const std::string& _executionSpace);

                    /**
                     * 判断参数 ExecutionSpace 是否已赋值
                     * @return ExecutionSpace 是否已赋值
                     * 
                     */
                    bool ExecutionSpaceHasBeenSet() const;

                    /**
                     * 获取Ignore events
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return IgnoreEvent Ignore events
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    bool GetIgnoreEvent() const;

                    /**
                     * 设置Ignore events
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _ignoreEvent Ignore events
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetIgnoreEvent(const bool& _ignoreEvent);

                    /**
                     * 判断参数 IgnoreEvent 是否已赋值
                     * @return IgnoreEvent 是否已赋值
                     * 
                     */
                    bool IgnoreEventHasBeenSet() const;

                    /**
                     * 获取Virtual Task Instance
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return VirtualFlag Virtual Task Instance
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    bool GetVirtualFlag() const;

                    /**
                     * 设置Virtual Task Instance
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _virtualFlag Virtual Task Instance
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetVirtualFlag(const bool& _virtualFlag);

                    /**
                     * 判断参数 VirtualFlag 是否已赋值
                     * @return VirtualFlag 是否已赋值
                     * 
                     */
                    bool VirtualFlagHasBeenSet() const;

                    /**
                     * 获取Folder ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return FolderId Folder ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetFolderId() const;

                    /**
                     * 设置Folder ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _folderId Folder ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetFolderId(const std::string& _folderId);

                    /**
                     * 判断参数 FolderId 是否已赋值
                     * @return FolderId 是否已赋值
                     * 
                     */
                    bool FolderIdHasBeenSet() const;

                    /**
                     * 获取Folder Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return FolderName Folder Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetFolderName() const;

                    /**
                     * 设置Folder Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _folderName Folder Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetFolderName(const std::string& _folderName);

                    /**
                     * 判断参数 FolderName 是否已赋值
                     * @return FolderName 是否已赋值
                     * 
                     */
                    bool FolderNameHasBeenSet() const;

                    /**
                     * 获取Recursive Instance Information
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SonList Recursive Instance Information
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetSonList() const;

                    /**
                     * 设置Recursive Instance Information
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _sonList Recursive Instance Information
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSonList(const std::string& _sonList);

                    /**
                     * 判断参数 SonList 是否已赋值
                     * @return SonList 是否已赋值
                     * 
                     */
                    bool SonListHasBeenSet() const;

                    /**
                     * 获取Product Business Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ProductName Product Business Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置Product Business Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _productName Product Business Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取Resource Group
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ResourceGroup Resource Group
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetResourceGroup() const;

                    /**
                     * 设置Resource Group
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _resourceGroup Resource Group
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Resource Group Specified Execution Node
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ResourceInstanceId Resource Group Specified Execution Node
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetResourceInstanceId() const;

                    /**
                     * 设置Resource Group Specified Execution Node
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _resourceInstanceId Resource Group Specified Execution Node
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetResourceInstanceId(const std::string& _resourceInstanceId);

                    /**
                     * 判断参数 ResourceInstanceId 是否已赋值
                     * @return ResourceInstanceId 是否已赋值
                     * 
                     */
                    bool ResourceInstanceIdHasBeenSet() const;

                    /**
                     * 获取Resource Queue
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return YarnQueue Resource Queue
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetYarnQueue() const;

                    /**
                     * 设置Resource Queue
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _yarnQueue Resource Queue
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Scheduling Plan
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SchedulerDesc Scheduling Plan
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetSchedulerDesc() const;

                    /**
                     * 设置Scheduling Plan
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _schedulerDesc Scheduling Plan
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSchedulerDesc(const std::string& _schedulerDesc);

                    /**
                     * 判断参数 SchedulerDesc 是否已赋值
                     * @return SchedulerDesc 是否已赋值
                     * 
                     */
                    bool SchedulerDescHasBeenSet() const;

                    /**
                     * 获取Latest Submission Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return FirstSubmitTime Latest Submission Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetFirstSubmitTime() const;

                    /**
                     * 设置Latest Submission Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _firstSubmitTime Latest Submission Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetFirstSubmitTime(const std::string& _firstSubmitTime);

                    /**
                     * 判断参数 FirstSubmitTime 是否已赋值
                     * @return FirstSubmitTime 是否已赋值
                     * 
                     */
                    bool FirstSubmitTimeHasBeenSet() const;

                    /**
                     * 获取First Execution Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return FirstRunTime First Execution Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetFirstRunTime() const;

                    /**
                     * 设置First Execution Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _firstRunTime First Execution Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetFirstRunTime(const std::string& _firstRunTime);

                    /**
                     * 判断参数 FirstRunTime 是否已赋值
                     * @return FirstRunTime 是否已赋值
                     * 
                     */
                    bool FirstRunTimeHasBeenSet() const;

                    /**
                     * 获取Project ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ProjectId Project ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _projectId Project ID
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Project Identifier
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ProjectIdent Project Identifier
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetProjectIdent() const;

                    /**
                     * 设置Project Identifier
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _projectIdent Project Identifier
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetProjectIdent(const std::string& _projectIdent);

                    /**
                     * 判断参数 ProjectIdent 是否已赋值
                     * @return ProjectIdent 是否已赋值
                     * 
                     */
                    bool ProjectIdentHasBeenSet() const;

                    /**
                     * 获取Project nameNote: This field may return null, indicating that no valid value can be obtained.
                     * @return ProjectName Project nameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置Project nameNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _projectName Project nameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取Tenant ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TenantId Tenant ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTenantId() const;

                    /**
                     * 设置Tenant ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _tenantId Tenant ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTenantId(const std::string& _tenantId);

                    /**
                     * 判断参数 TenantId 是否已赋值
                     * @return TenantId 是否已赋值
                     * 
                     */
                    bool TenantIdHasBeenSet() const;

                    /**
                     * 获取Instance Identifier
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return InstanceKey Instance Identifier
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetInstanceKey() const;

                    /**
                     * 设置Instance Identifier
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _instanceKey Instance Identifier
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetInstanceKey(const std::string& _instanceKey);

                    /**
                     * 判断参数 InstanceKey 是否已赋值
                     * @return InstanceKey 是否已赋值
                     * 
                     */
                    bool InstanceKeyHasBeenSet() const;

                    /**
                     * 获取Resource Group ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ExecutorGroupId Resource Group ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetExecutorGroupId() const;

                    /**
                     * 设置Resource Group ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _executorGroupId Resource Group ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetExecutorGroupId(const std::string& _executorGroupId);

                    /**
                     * 判断参数 ExecutorGroupId 是否已赋值
                     * @return ExecutorGroupId 是否已赋值
                     * 
                     */
                    bool ExecutorGroupIdHasBeenSet() const;

                    /**
                     * 获取Resource Group Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ExecutorGroupName Resource Group Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetExecutorGroupName() const;

                    /**
                     * 设置Resource Group Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _executorGroupName Resource Group Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetExecutorGroupName(const std::string& _executorGroupName);

                    /**
                     * 判断参数 ExecutorGroupName 是否已赋值
                     * @return ExecutorGroupName 是否已赋值
                     * 
                     */
                    bool ExecutorGroupNameHasBeenSet() const;

                    /**
                     * 获取Associated Instance Information.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return RelatedInstanceList Associated Instance Information.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<InstanceOpsDto> GetRelatedInstanceList() const;

                    /**
                     * 设置Associated Instance Information.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _relatedInstanceList Associated Instance Information.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRelatedInstanceList(const std::vector<InstanceOpsDto>& _relatedInstanceList);

                    /**
                     * 判断参数 RelatedInstanceList 是否已赋值
                     * @return RelatedInstanceList 是否已赋值
                     * 
                     */
                    bool RelatedInstanceListHasBeenSet() const;

                    /**
                     * 获取Associated Instance Information Quantity, not strongly associated with RelatedInstanceList.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return RelatedInstanceSize Associated Instance Information Quantity, not strongly associated with RelatedInstanceList.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetRelatedInstanceSize() const;

                    /**
                     * 设置Associated Instance Information Quantity, not strongly associated with RelatedInstanceList.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _relatedInstanceSize Associated Instance Information Quantity, not strongly associated with RelatedInstanceList.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRelatedInstanceSize(const int64_t& _relatedInstanceSize);

                    /**
                     * 判断参数 RelatedInstanceSize 是否已赋值
                     * @return RelatedInstanceSize 是否已赋值
                     * 
                     */
                    bool RelatedInstanceSizeHasBeenSet() const;

                    /**
                     * 获取ownerId
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return OwnerId ownerId
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetOwnerId() const;

                    /**
                     * 设置ownerId
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _ownerId ownerId
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetOwnerId(const std::string& _ownerId);

                    /**
                     * 判断参数 OwnerId 是否已赋值
                     * @return OwnerId 是否已赋值
                     * 
                     */
                    bool OwnerIdHasBeenSet() const;

                    /**
                     * 获取User ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return UserId User ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置User ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _userId User ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取Instance LifecycleNote: This field may return null, indicating that no valid value can be obtained.
                     * @return InstanceLifeCycleOpsDto Instance LifecycleNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    InstanceLifeCycleOpsDto GetInstanceLifeCycleOpsDto() const;

                    /**
                     * 设置Instance LifecycleNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _instanceLifeCycleOpsDto Instance LifecycleNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetInstanceLifeCycleOpsDto(const InstanceLifeCycleOpsDto& _instanceLifeCycleOpsDto);

                    /**
                     * 判断参数 InstanceLifeCycleOpsDto 是否已赋值
                     * @return InstanceLifeCycleOpsDto 是否已赋值
                     * 
                     */
                    bool InstanceLifeCycleOpsDtoHasBeenSet() const;

                    /**
                     * 获取Automatic Retry Attempts
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return RetryAttempts Automatic Retry Attempts
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetRetryAttempts() const;

                    /**
                     * 设置Automatic Retry Attempts
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _retryAttempts Automatic Retry Attempts
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRetryAttempts(const uint64_t& _retryAttempts);

                    /**
                     * 判断参数 RetryAttempts 是否已赋值
                     * @return RetryAttempts 是否已赋值
                     * 
                     */
                    bool RetryAttemptsHasBeenSet() const;

                    /**
                     * 获取Urgently Removed Dependency Parent Instance List
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DeletedFatherList Urgently Removed Dependency Parent Instance List
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetDeletedFatherList() const;

                    /**
                     * 设置Urgently Removed Dependency Parent Instance List
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _deletedFatherList Urgently Removed Dependency Parent Instance List
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDeletedFatherList(const std::vector<std::string>& _deletedFatherList);

                    /**
                     * 判断参数 DeletedFatherList 是否已赋值
                     * @return DeletedFatherList 是否已赋值
                     * 
                     */
                    bool DeletedFatherListHasBeenSet() const;

                    /**
                     * 获取Cyclic Dependency Associated Instances
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CirculateInstanceList Cyclic Dependency Associated Instances
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<InstanceOpsDto> GetCirculateInstanceList() const;

                    /**
                     * 设置Cyclic Dependency Associated Instances
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _circulateInstanceList Cyclic Dependency Associated Instances
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCirculateInstanceList(const std::vector<InstanceOpsDto>& _circulateInstanceList);

                    /**
                     * 判断参数 CirculateInstanceList 是否已赋值
                     * @return CirculateInstanceList 是否已赋值
                     * 
                     */
                    bool CirculateInstanceListHasBeenSet() const;

                private:

                    /**
                     * Task IDNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Task NameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * Workflow ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * Workflow nameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * Owner
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_inCharge;
                    bool m_inChargeHasBeenSet;

                    /**
                     * Cycle Type
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                    /**
                     * Data Time
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_curRunDate;
                    bool m_curRunDateHasBeenSet;

                    /**
                     * Next Data Time
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_nextCurDate;
                    bool m_nextCurDateHasBeenSet;

                    /**
                     * Running Priority
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_runPriority;
                    bool m_runPriorityHasBeenSet;

                    /**
                     * Number of Attempts
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_tryLimit;
                    bool m_tryLimitHasBeenSet;

                    /**
                     * Current Running Times
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_tries;
                    bool m_triesHasBeenSet;

                    /**
                     * Total Retry Attempts
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_totalRunNum;
                    bool m_totalRunNumHasBeenSet;

                    /**
                     * Whether to Supplement
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_doFlag;
                    bool m_doFlagHasBeenSet;

                    /**
                     * Whether it is a Retry
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_redoFlag;
                    bool m_redoFlagHasBeenSet;

                    /**
                     * Instance StatusNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Run Node
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_runtimeBroker;
                    bool m_runtimeBrokerHasBeenSet;

                    /**
                     * Reason for Failure
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_errorDesc;
                    bool m_errorDescHasBeenSet;

                    /**
                     * Task TypeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    TaskTypeOpsDto m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * Dependency Judgment Completion Time
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_dependenceFulfillTime;
                    bool m_dependenceFulfillTimeHasBeenSet;

                    /**
                     * First Dependency Judgment Pass Time
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_firstDependenceFulfillTime;
                    bool m_firstDependenceFulfillTimeHasBeenSet;

                    /**
                     * Initial startup time
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_firstStartTime;
                    bool m_firstStartTimeHasBeenSet;

                    /**
                     * Start startup time
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Operation completion time
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Time Consumed
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_costTime;
                    bool m_costTimeHasBeenSet;

                    /**
                     * Elapsed time (ms)
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_costMillisecond;
                    bool m_costMillisecondHasBeenSet;

                    /**
                     * Maximum operation duration
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_maxCostTime;
                    bool m_maxCostTimeHasBeenSet;

                    /**
                     * Minimum operation duration
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_minCostTime;
                    bool m_minCostTimeHasBeenSet;

                    /**
                     * Average operation duration
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    double m_avgCostTime;
                    bool m_avgCostTimeHasBeenSet;

                    /**
                     * Recent logs
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_lastLog;
                    bool m_lastLogHasBeenSet;

                    /**
                     * Scheduling Time
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_schedulerDateTime;
                    bool m_schedulerDateTimeHasBeenSet;

                    /**
                     * Last scheduling time
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_lastSchedulerDateTime;
                    bool m_lastSchedulerDateTimeHasBeenSet;

                    /**
                     * Last update event
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_lastUpdate;
                    bool m_lastUpdateHasBeenSet;

                    /**
                     * Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Branch, Dependency Relationship and,or
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_dependencyRel;
                    bool m_dependencyRelHasBeenSet;

                    /**
                     * Execution space
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_executionSpace;
                    bool m_executionSpaceHasBeenSet;

                    /**
                     * Ignore events
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    bool m_ignoreEvent;
                    bool m_ignoreEventHasBeenSet;

                    /**
                     * Virtual Task Instance
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    bool m_virtualFlag;
                    bool m_virtualFlagHasBeenSet;

                    /**
                     * Folder ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_folderId;
                    bool m_folderIdHasBeenSet;

                    /**
                     * Folder Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_folderName;
                    bool m_folderNameHasBeenSet;

                    /**
                     * Recursive Instance Information
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_sonList;
                    bool m_sonListHasBeenSet;

                    /**
                     * Product Business Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * Resource Group
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_resourceGroup;
                    bool m_resourceGroupHasBeenSet;

                    /**
                     * Resource Group Specified Execution Node
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_resourceInstanceId;
                    bool m_resourceInstanceIdHasBeenSet;

                    /**
                     * Resource Queue
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_yarnQueue;
                    bool m_yarnQueueHasBeenSet;

                    /**
                     * Scheduling Plan
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_schedulerDesc;
                    bool m_schedulerDescHasBeenSet;

                    /**
                     * Latest Submission Time
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_firstSubmitTime;
                    bool m_firstSubmitTimeHasBeenSet;

                    /**
                     * First Execution Time
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_firstRunTime;
                    bool m_firstRunTimeHasBeenSet;

                    /**
                     * Project ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Project Identifier
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_projectIdent;
                    bool m_projectIdentHasBeenSet;

                    /**
                     * Project nameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * Tenant ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_tenantId;
                    bool m_tenantIdHasBeenSet;

                    /**
                     * Instance Identifier
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_instanceKey;
                    bool m_instanceKeyHasBeenSet;

                    /**
                     * Resource Group ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_executorGroupId;
                    bool m_executorGroupIdHasBeenSet;

                    /**
                     * Resource Group Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_executorGroupName;
                    bool m_executorGroupNameHasBeenSet;

                    /**
                     * Associated Instance Information.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<InstanceOpsDto> m_relatedInstanceList;
                    bool m_relatedInstanceListHasBeenSet;

                    /**
                     * Associated Instance Information Quantity, not strongly associated with RelatedInstanceList.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_relatedInstanceSize;
                    bool m_relatedInstanceSizeHasBeenSet;

                    /**
                     * ownerId
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_ownerId;
                    bool m_ownerIdHasBeenSet;

                    /**
                     * User ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * Instance LifecycleNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    InstanceLifeCycleOpsDto m_instanceLifeCycleOpsDto;
                    bool m_instanceLifeCycleOpsDtoHasBeenSet;

                    /**
                     * Automatic Retry Attempts
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_retryAttempts;
                    bool m_retryAttemptsHasBeenSet;

                    /**
                     * Urgently Removed Dependency Parent Instance List
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_deletedFatherList;
                    bool m_deletedFatherListHasBeenSet;

                    /**
                     * Cyclic Dependency Associated Instances
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<InstanceOpsDto> m_circulateInstanceList;
                    bool m_circulateInstanceListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCEOPSDTO_H_
