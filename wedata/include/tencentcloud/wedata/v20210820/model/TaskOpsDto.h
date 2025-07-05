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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKOPSDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKOPSDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TaskTypeOpsDto.h>
#include <tencentcloud/wedata/v20210820/model/LinkOpsDto.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Task Operation Details
                */
                class TaskOpsDto : public AbstractModel
                {
                public:
                    TaskOpsDto();
                    ~TaskOpsDto() = default;
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
                     * 获取Virtual Task ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return VirtualTaskId Virtual Task ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetVirtualTaskId() const;

                    /**
                     * 设置Virtual Task ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _virtualTaskId Virtual Task ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetVirtualTaskId(const std::string& _virtualTaskId);

                    /**
                     * 判断参数 VirtualTaskId 是否已赋值
                     * @return VirtualTaskId 是否已赋值
                     * 
                     */
                    bool VirtualTaskIdHasBeenSet() const;

                    /**
                     * 获取Virtual Task Marker
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return VirtualFlag Virtual Task Marker
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    bool GetVirtualFlag() const;

                    /**
                     * 设置Virtual Task Marker
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _virtualFlag Virtual Task Marker
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
                     * 获取Workflow IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @return WorkflowId Workflow IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置Workflow IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _workflowId Workflow IDNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Actual Workflow ID when the task is a virtual task
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return RealWorkflowId Actual Workflow ID when the task is a virtual task
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetRealWorkflowId() const;

                    /**
                     * 设置Actual Workflow ID when the task is a virtual task
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _realWorkflowId Actual Workflow ID when the task is a virtual task
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRealWorkflowId(const std::string& _realWorkflowId);

                    /**
                     * 判断参数 RealWorkflowId 是否已赋值
                     * @return RealWorkflowId 是否已赋值
                     * 
                     */
                    bool RealWorkflowIdHasBeenSet() const;

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
                     * 获取Latest Update Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return LastUpdate Latest Update Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetLastUpdate() const;

                    /**
                     * 设置Latest Update Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _lastUpdate Latest Update Time
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
                     * 获取Task StatusNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Status Task StatusNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Task StatusNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _status Task StatusNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Person in ChargeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return InCharge Person in ChargeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetInCharge() const;

                    /**
                     * 设置Person in ChargeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _inCharge Person in ChargeNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Responsible User ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return InChargeId Responsible User ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetInChargeId() const;

                    /**
                     * 设置Responsible User ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _inChargeId Responsible User ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetInChargeId(const std::string& _inChargeId);

                    /**
                     * 判断参数 InChargeId 是否已赋值
                     * @return InChargeId 是否已赋值
                     * 
                     */
                    bool InChargeIdHasBeenSet() const;

                    /**
                     * 获取Scheduling Effective Date
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return StartTime Scheduling Effective Date
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Scheduling Effective Date
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _startTime Scheduling Effective Date
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
                     * 获取Scheduling End Date
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return EndTime Scheduling End Date
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Scheduling End Date
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _endTime Scheduling End Date
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
                     * 获取Execution Time Left Closed Interval
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ExecutionStartTime Execution Time Left Closed Interval
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetExecutionStartTime() const;

                    /**
                     * 设置Execution Time Left Closed Interval
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _executionStartTime Execution Time Left Closed Interval
Note: This field may return null, indicating that no valid value can be obtained.
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
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ExecutionEndTime Execution Time Right Closed Interval
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetExecutionEndTime() const;

                    /**
                     * 设置Execution Time Right Closed Interval
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _executionEndTime Execution Time Right Closed Interval
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Step Length
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CycleStep Step Length
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetCycleStep() const;

                    /**
                     * 设置Step Length
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _cycleStep Step Length
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCycleStep(const uint64_t& _cycleStep);

                    /**
                     * 判断参数 CycleStep 是否已赋值
                     * @return CycleStep 是否已赋值
                     * 
                     */
                    bool CycleStepHasBeenSet() const;

                    /**
                     * 获取Scheduling Cron Expression
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CrontabExpression Scheduling Cron Expression
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCrontabExpression() const;

                    /**
                     * 设置Scheduling Cron Expression
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _crontabExpression Scheduling Cron Expression
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Delayed Execution Time, unit=minutes
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DelayTime Delayed Execution Time, unit=minutes
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetDelayTime() const;

                    /**
                     * 设置Delayed Execution Time, unit=minutes
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _delayTime Delayed Execution Time, unit=minutes
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Start Execution Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return StartupTime Start Execution Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetStartupTime() const;

                    /**
                     * 设置Start Execution Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _startupTime Start Execution Time
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Retry Wait Time, unit=minutes
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return RetryWait Retry Wait Time, unit=minutes
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetRetryWait() const;

                    /**
                     * 设置Retry Wait Time, unit=minutes
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _retryWait Retry Wait Time, unit=minutes
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRetryWait(const uint64_t& _retryWait);

                    /**
                     * 判断参数 RetryWait 是否已赋值
                     * @return RetryWait 是否已赋值
                     * 
                     */
                    bool RetryWaitHasBeenSet() const;

                    /**
                     * 获取Whether to Retry, 1 represents retryable
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return RetryAble Whether to Retry, 1 represents retryable
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetRetryAble() const;

                    /**
                     * 设置Whether to Retry, 1 represents retryable
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _retryAble Whether to Retry, 1 represents retryable
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRetryAble(const uint64_t& _retryAble);

                    /**
                     * 判断参数 RetryAble 是否已赋值
                     * @return RetryAble 是否已赋值
                     * 
                     */
                    bool RetryAbleHasBeenSet() const;

                    /**
                     * 获取Scheduling Configuration - Elastic Cycle Configuration, available for Hour/Weekly/Month/Year schedules. For hourly tasks scheduled at 0, 3, 4 o'clock, it would be '0,3,4'
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TaskAction Scheduling Configuration - Elastic Cycle Configuration, available for Hour/Weekly/Month/Year schedules. For hourly tasks scheduled at 0, 3, 4 o'clock, it would be '0,3,4'
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTaskAction() const;

                    /**
                     * 设置Scheduling Configuration - Elastic Cycle Configuration, available for Hour/Weekly/Month/Year schedules. For hourly tasks scheduled at 0, 3, 4 o'clock, it would be '0,3,4'
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _taskAction Scheduling Configuration - Elastic Cycle Configuration, available for Hour/Weekly/Month/Year schedules. For hourly tasks scheduled at 0, 3, 4 o'clock, it would be '0,3,4'
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Limit on Number of Runs
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TryLimit Limit on Number of Runs
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetTryLimit() const;

                    /**
                     * 设置Limit on Number of Runs
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _tryLimit Limit on Number of Runs
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
                     * 获取Specified Running Nodes
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return BrokerIp Specified Running Nodes
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetBrokerIp() const;

                    /**
                     * 设置Specified Running Nodes
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _brokerIp Specified Running Nodes
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Cluster Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ClusterId Cluster Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _clusterId Cluster Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Minimum Data Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return MinDateTime Minimum Data Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetMinDateTime() const;

                    /**
                     * 设置Minimum Data Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _minDateTime Minimum Data Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetMinDateTime(const std::string& _minDateTime);

                    /**
                     * 判断参数 MinDateTime 是否已赋值
                     * @return MinDateTime 是否已赋值
                     * 
                     */
                    bool MinDateTimeHasBeenSet() const;

                    /**
                     * 获取Maximum Data Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return MaxDateTime Maximum Data Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetMaxDateTime() const;

                    /**
                     * 设置Maximum Data Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _maxDateTime Maximum Data Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetMaxDateTime(const std::string& _maxDateTime);

                    /**
                     * 判断参数 MaxDateTime 是否已赋值
                     * @return MaxDateTime 是否已赋值
                     * 
                     */
                    bool MaxDateTimeHasBeenSet() const;

                    /**
                     * 获取Runtime Timeout
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ExecutionTTL Runtime Timeout
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetExecutionTTL() const;

                    /**
                     * 设置Runtime Timeout
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _executionTTL Runtime Timeout
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Self-Dependency Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SelfDepend Self-Dependency Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetSelfDepend() const;

                    /**
                     * 设置Self-Dependency Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _selfDepend Self-Dependency Type
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Left Coordinate
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return LeftCoordinate Left Coordinate
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    double GetLeftCoordinate() const;

                    /**
                     * 设置Left Coordinate
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _leftCoordinate Left Coordinate
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetLeftCoordinate(const double& _leftCoordinate);

                    /**
                     * 判断参数 LeftCoordinate 是否已赋值
                     * @return LeftCoordinate 是否已赋值
                     * 
                     */
                    bool LeftCoordinateHasBeenSet() const;

                    /**
                     * 获取Top Coordinate
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TopCoordinate Top Coordinate
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    double GetTopCoordinate() const;

                    /**
                     * 设置Top Coordinate
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _topCoordinate Top Coordinate
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTopCoordinate(const double& _topCoordinate);

                    /**
                     * 判断参数 TopCoordinate 是否已赋值
                     * @return TopCoordinate 是否已赋值
                     * 
                     */
                    bool TopCoordinateHasBeenSet() const;

                    /**
                     * 获取Task Remark
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Notes Task Remark
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetNotes() const;

                    /**
                     * 设置Task Remark
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _notes Task Remark
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Task Initialization Strategy
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return InstanceInitStrategy Task Initialization Strategy
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetInstanceInitStrategy() const;

                    /**
                     * 设置Task Initialization Strategy
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _instanceInitStrategy Task Initialization Strategy
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Compute Queue
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return YarnQueue Compute Queue
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetYarnQueue() const;

                    /**
                     * 设置Compute Queue
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _yarnQueue Compute Queue
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
                     * 获取Latest Schedule Submission Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return LastSchedulerCommitTime Latest Schedule Submission Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetLastSchedulerCommitTime() const;

                    /**
                     * 设置Latest Schedule Submission Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _lastSchedulerCommitTime Latest Schedule Submission Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetLastSchedulerCommitTime(const std::string& _lastSchedulerCommitTime);

                    /**
                     * 判断参数 LastSchedulerCommitTime 是否已赋值
                     * @return LastSchedulerCommitTime 是否已赋值
                     * 
                     */
                    bool LastSchedulerCommitTimeHasBeenSet() const;

                    /**
                     * 获取Task Start Time Calculated by cron Expression
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return NormalizedJobStartTime Task Start Time Calculated by cron Expression
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetNormalizedJobStartTime() const;

                    /**
                     * 设置Task Start Time Calculated by cron Expression
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _normalizedJobStartTime Task Start Time Calculated by cron Expression
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetNormalizedJobStartTime(const std::string& _normalizedJobStartTime);

                    /**
                     * 判断参数 NormalizedJobStartTime 是否已赋值
                     * @return NormalizedJobStartTime 是否已赋值
                     * 
                     */
                    bool NormalizedJobStartTimeHasBeenSet() const;

                    /**
                     * 获取Scheduling Plan Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SchedulerDesc Scheduling Plan Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetSchedulerDesc() const;

                    /**
                     * 设置Scheduling Plan Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _schedulerDesc Scheduling Plan Description
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
                     * 获取Compute Resource Group
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ResourceGroup Compute Resource Group
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetResourceGroup() const;

                    /**
                     * 设置Compute Resource Group
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _resourceGroup Compute Resource Group
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
                     * 获取Task Creator
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Creator Task Creator
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置Task Creator
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _creator Task Creator
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取Task Dependency Type: and, or
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DependencyRel Task Dependency Type: and, or
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDependencyRel() const;

                    /**
                     * 设置Task Dependency Type: and, or
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _dependencyRel Task Dependency Type: and, or
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
                     * 获取Task Workflow Dependency: yes, no
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DependencyWorkflow Task Workflow Dependency: yes, no
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDependencyWorkflow() const;

                    /**
                     * 设置Task Workflow Dependency: yes, no
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _dependencyWorkflow Task Workflow Dependency: yes, no
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Event Listening Configuration
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return EventListenerConfig Event Listening Configuration
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetEventListenerConfig() const;

                    /**
                     * 设置Event Listening Configuration
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _eventListenerConfig Event Listening Configuration
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetEventListenerConfig(const std::string& _eventListenerConfig);

                    /**
                     * 判断参数 EventListenerConfig 是否已赋值
                     * @return EventListenerConfig 是否已赋值
                     * 
                     */
                    bool EventListenerConfigHasBeenSet() const;

                    /**
                     * 获取Event-driven Configuration
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return EventPublisherConfig Event-driven Configuration
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetEventPublisherConfig() const;

                    /**
                     * 设置Event-driven Configuration
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _eventPublisherConfig Event-driven Configuration
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetEventPublisherConfig(const std::string& _eventPublisherConfig);

                    /**
                     * 判断参数 EventPublisherConfig 是否已赋值
                     * @return EventPublisherConfig 是否已赋值
                     * 
                     */
                    bool EventPublisherConfigHasBeenSet() const;

                    /**
                     * 获取Virtual Task Status
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return VirtualTaskStatus Virtual Task Status
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetVirtualTaskStatus() const;

                    /**
                     * 设置Virtual Task Status
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _virtualTaskStatus Virtual Task Status
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetVirtualTaskStatus(const std::string& _virtualTaskStatus);

                    /**
                     * 判断参数 VirtualTaskStatus 是否已赋值
                     * @return VirtualTaskStatus 是否已赋值
                     * 
                     */
                    bool VirtualTaskStatusHasBeenSet() const;

                    /**
                     * 获取Task Dependency Edge Details
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TaskLinkInfo Task Dependency Edge Details
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    LinkOpsDto GetTaskLinkInfo() const;

                    /**
                     * 设置Task Dependency Edge Details
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _taskLinkInfo Task Dependency Edge Details
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTaskLinkInfo(const LinkOpsDto& _taskLinkInfo);

                    /**
                     * 判断参数 TaskLinkInfo 是否已赋值
                     * @return TaskLinkInfo 是否已赋值
                     * 
                     */
                    bool TaskLinkInfoHasBeenSet() const;

                    /**
                     * 获取Task Product TypeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return ProductName Task Product TypeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置Task Product TypeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _productName Task Product TypeNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Project IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @return ProjectId Project IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _projectId Project IDNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Project IdentifierNote: This field may return null, indicating that no valid value can be obtained.
                     * @return ProjectIdent Project IdentifierNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetProjectIdent() const;

                    /**
                     * 设置Project IdentifierNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _projectIdent Project IdentifierNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Main Account userId
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return OwnId Main Account userId
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetOwnId() const;

                    /**
                     * 设置Main Account userId
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _ownId Main Account userId
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetOwnId(const std::string& _ownId);

                    /**
                     * 判断参数 OwnId 是否已赋值
                     * @return OwnId 是否已赋值
                     * 
                     */
                    bool OwnIdHasBeenSet() const;

                    /**
                     * 获取User userId
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return UserId User userId
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置User userId
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _userId User userId
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
                     * 获取Updater's Nickname
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return UpdateUser Updater's Nickname
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetUpdateUser() const;

                    /**
                     * 设置Updater's Nickname
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _updateUser Updater's Nickname
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetUpdateUser(const std::string& _updateUser);

                    /**
                     * 判断参数 UpdateUser 是否已赋值
                     * @return UpdateUser 是否已赋值
                     * 
                     */
                    bool UpdateUserHasBeenSet() const;

                    /**
                     * 获取Update timeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return UpdateTime Update timeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update timeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _updateTime Update timeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Updater's userId
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return UpdateUserId Updater's userId
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetUpdateUserId() const;

                    /**
                     * 设置Updater's userId
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _updateUserId Updater's userId
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetUpdateUserId(const std::string& _updateUserId);

                    /**
                     * 判断参数 UpdateUserId 是否已赋值
                     * @return UpdateUserId 是否已赋值
                     * 
                     */
                    bool UpdateUserIdHasBeenSet() const;

                    /**
                     * 获取Task Type ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TaskTypeId Task Type ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetTaskTypeId() const;

                    /**
                     * 设置Task Type ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _taskTypeId Task Type ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTaskTypeId(const int64_t& _taskTypeId);

                    /**
                     * 判断参数 TaskTypeId 是否已赋值
                     * @return TaskTypeId 是否已赋值
                     * 
                     */
                    bool TaskTypeIdHasBeenSet() const;

                    /**
                     * 获取Task Type Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TaskTypeDesc Task Type Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTaskTypeDesc() const;

                    /**
                     * 设置Task Type Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _taskTypeDesc Task Type Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTaskTypeDesc(const std::string& _taskTypeDesc);

                    /**
                     * 判断参数 TaskTypeDesc 是否已赋值
                     * @return TaskTypeDesc 是否已赋值
                     * 
                     */
                    bool TaskTypeDescHasBeenSet() const;

                    /**
                     * 获取Whether to Display Workflow
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ShowWorkflow Whether to Display Workflow
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    bool GetShowWorkflow() const;

                    /**
                     * 设置Whether to Display Workflow
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _showWorkflow Whether to Display Workflow
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetShowWorkflow(const bool& _showWorkflow);

                    /**
                     * 判断参数 ShowWorkflow 是否已赋值
                     * @return ShowWorkflow 是否已赋值
                     * 
                     */
                    bool ShowWorkflowHasBeenSet() const;

                    /**
                     * 获取First Submission Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return FirstSubmitTime First Submission Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetFirstSubmitTime() const;

                    /**
                     * 设置First Submission Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _firstSubmitTime First Submission Time
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
                     * 获取Scheduling Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ScheduleDesc Scheduling Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetScheduleDesc() const;

                    /**
                     * 设置Scheduling Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _scheduleDesc Scheduling Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetScheduleDesc(const std::string& _scheduleDesc);

                    /**
                     * 判断参数 ScheduleDesc 是否已赋值
                     * @return ScheduleDesc 是否已赋值
                     * 
                     */
                    bool ScheduleDescHasBeenSet() const;

                    /**
                     * 获取CycleNote: This field may return null, indicating that no valid value can be obtained.
                     * @return CycleNum CycleNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetCycleNum() const;

                    /**
                     * 设置CycleNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _cycleNum CycleNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCycleNum(const int64_t& _cycleNum);

                    /**
                     * 判断参数 CycleNum 是否已赋值
                     * @return CycleNum 是否已赋值
                     * 
                     */
                    bool CycleNumHasBeenSet() const;

                    /**
                     * 获取ExpressionsNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Crontab ExpressionsNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCrontab() const;

                    /**
                     * 设置ExpressionsNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _crontab ExpressionsNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCrontab(const std::string& _crontab);

                    /**
                     * 判断参数 Crontab 是否已赋值
                     * @return Crontab 是否已赋值
                     * 
                     */
                    bool CrontabHasBeenSet() const;

                    /**
                     * 获取Start Date
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return StartDate Start Date
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetStartDate() const;

                    /**
                     * 设置Start Date
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _startDate Start Date
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetStartDate(const std::string& _startDate);

                    /**
                     * 判断参数 StartDate 是否已赋值
                     * @return StartDate 是否已赋值
                     * 
                     */
                    bool StartDateHasBeenSet() const;

                    /**
                     * 获取End Date
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return EndDate End Date
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetEndDate() const;

                    /**
                     * 设置End Date
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _endDate End Date
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetEndDate(const std::string& _endDate);

                    /**
                     * 判断参数 EndDate 是否已赋值
                     * @return EndDate 是否已赋值
                     * 
                     */
                    bool EndDateHasBeenSet() const;

                    /**
                     * 获取Cycle Unit
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CycleUnit Cycle Unit
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCycleUnit() const;

                    /**
                     * 设置Cycle Unit
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _cycleUnit Cycle Unit
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCycleUnit(const std::string& _cycleUnit);

                    /**
                     * 判断参数 CycleUnit 是否已赋值
                     * @return CycleUnit 是否已赋值
                     * 
                     */
                    bool CycleUnitHasBeenSet() const;

                    /**
                     * 获取Initialization Strategy
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return InitStrategy Initialization Strategy
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetInitStrategy() const;

                    /**
                     * 设置Initialization Strategy
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _initStrategy Initialization Strategy
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Hierarchy
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Layer Hierarchy
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetLayer() const;

                    /**
                     * 设置Hierarchy
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _layer Hierarchy
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetLayer(const std::string& _layer);

                    /**
                     * 判断参数 Layer 是否已赋值
                     * @return Layer 是否已赋值
                     * 
                     */
                    bool LayerHasBeenSet() const;

                    /**
                     * 获取Source Data Source ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SourceServiceId Source Data Source ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetSourceServiceId() const;

                    /**
                     * 设置Source Data Source ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _sourceServiceId Source Data Source ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSourceServiceId(const std::string& _sourceServiceId);

                    /**
                     * 判断参数 SourceServiceId 是否已赋值
                     * @return SourceServiceId 是否已赋值
                     * 
                     */
                    bool SourceServiceIdHasBeenSet() const;

                    /**
                     * 获取Source Data Source Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SourceServiceType Source Data Source Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetSourceServiceType() const;

                    /**
                     * 设置Source Data Source Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _sourceServiceType Source Data Source Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSourceServiceType(const std::string& _sourceServiceType);

                    /**
                     * 判断参数 SourceServiceType 是否已赋值
                     * @return SourceServiceType 是否已赋值
                     * 
                     */
                    bool SourceServiceTypeHasBeenSet() const;

                    /**
                     * 获取Target Data Source ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TargetServiceId Target Data Source ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTargetServiceId() const;

                    /**
                     * 设置Target Data Source ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _targetServiceId Target Data Source ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTargetServiceId(const std::string& _targetServiceId);

                    /**
                     * 判断参数 TargetServiceId 是否已赋值
                     * @return TargetServiceId 是否已赋值
                     * 
                     */
                    bool TargetServiceIdHasBeenSet() const;

                    /**
                     * 获取Target Data Source Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TargetServiceType Target Data Source Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTargetServiceType() const;

                    /**
                     * 设置Target Data Source Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _targetServiceType Target Data Source Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTargetServiceType(const std::string& _targetServiceType);

                    /**
                     * 判断参数 TargetServiceType 是否已赋值
                     * @return TargetServiceType 是否已赋值
                     * 
                     */
                    bool TargetServiceTypeHasBeenSet() const;

                    /**
                     * 获取Subtask List
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TasksStr Subtask List
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTasksStr() const;

                    /**
                     * 设置Subtask List
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _tasksStr Subtask List
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTasksStr(const std::string& _tasksStr);

                    /**
                     * 判断参数 TasksStr 是否已赋值
                     * @return TasksStr 是否已赋值
                     * 
                     */
                    bool TasksStrHasBeenSet() const;

                    /**
                     * 获取Whether the Task Version Has Been Submitted
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Submit Whether the Task Version Has Been Submitted
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    bool GetSubmit() const;

                    /**
                     * 设置Whether the Task Version Has Been Submitted
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _submit Whether the Task Version Has Been Submitted
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSubmit(const bool& _submit);

                    /**
                     * 判断参数 Submit 是否已赋值
                     * @return Submit 是否已赋值
                     * 
                     */
                    bool SubmitHasBeenSet() const;

                    /**
                     * 获取Resource Group IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @return ExecutorGroupId Resource Group IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetExecutorGroupId() const;

                    /**
                     * 设置Resource Group IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _executorGroupId Resource Group IDNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Resource Group NameNote: This field may return null, indicating that no valid value can be obtained.
                     * @return ExecutorGroupName Resource Group NameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetExecutorGroupName() const;

                    /**
                     * 设置Resource Group NameNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _executorGroupName Resource Group NameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetExecutorGroupName(const std::string& _executorGroupName);

                    /**
                     * 判断参数 ExecutorGroupName 是否已赋值
                     * @return ExecutorGroupName 是否已赋值
                     * 
                     */
                    bool ExecutorGroupNameHasBeenSet() const;

                private:

                    /**
                     * Task IDNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Virtual Task ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_virtualTaskId;
                    bool m_virtualTaskIdHasBeenSet;

                    /**
                     * Virtual Task Marker
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    bool m_virtualFlag;
                    bool m_virtualFlagHasBeenSet;

                    /**
                     * Task NameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * Workflow IDNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * Actual Workflow ID when the task is a virtual task
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_realWorkflowId;
                    bool m_realWorkflowIdHasBeenSet;

                    /**
                     * Workflow nameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

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
                     * Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Latest Update Time
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_lastUpdate;
                    bool m_lastUpdateHasBeenSet;

                    /**
                     * Task StatusNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Person in ChargeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_inCharge;
                    bool m_inChargeHasBeenSet;

                    /**
                     * Responsible User ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_inChargeId;
                    bool m_inChargeIdHasBeenSet;

                    /**
                     * Scheduling Effective Date
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Scheduling End Date
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Execution Time Left Closed Interval
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_executionStartTime;
                    bool m_executionStartTimeHasBeenSet;

                    /**
                     * Execution Time Right Closed Interval
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_executionEndTime;
                    bool m_executionEndTimeHasBeenSet;

                    /**
                     * Cycle Type
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                    /**
                     * Step Length
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_cycleStep;
                    bool m_cycleStepHasBeenSet;

                    /**
                     * Scheduling Cron Expression
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_crontabExpression;
                    bool m_crontabExpressionHasBeenSet;

                    /**
                     * Delayed Execution Time, unit=minutes
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_delayTime;
                    bool m_delayTimeHasBeenSet;

                    /**
                     * Start Execution Time
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_startupTime;
                    bool m_startupTimeHasBeenSet;

                    /**
                     * Retry Wait Time, unit=minutes
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_retryWait;
                    bool m_retryWaitHasBeenSet;

                    /**
                     * Whether to Retry, 1 represents retryable
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_retryAble;
                    bool m_retryAbleHasBeenSet;

                    /**
                     * Scheduling Configuration - Elastic Cycle Configuration, available for Hour/Weekly/Month/Year schedules. For hourly tasks scheduled at 0, 3, 4 o'clock, it would be '0,3,4'
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_taskAction;
                    bool m_taskActionHasBeenSet;

                    /**
                     * Limit on Number of Runs
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_tryLimit;
                    bool m_tryLimitHasBeenSet;

                    /**
                     * Running Priority
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_runPriority;
                    bool m_runPriorityHasBeenSet;

                    /**
                     * Task TypeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    TaskTypeOpsDto m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * Specified Running Nodes
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_brokerIp;
                    bool m_brokerIpHasBeenSet;

                    /**
                     * Cluster Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Minimum Data Time
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_minDateTime;
                    bool m_minDateTimeHasBeenSet;

                    /**
                     * Maximum Data Time
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_maxDateTime;
                    bool m_maxDateTimeHasBeenSet;

                    /**
                     * Runtime Timeout
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_executionTTL;
                    bool m_executionTTLHasBeenSet;

                    /**
                     * Self-Dependency Type
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_selfDepend;
                    bool m_selfDependHasBeenSet;

                    /**
                     * Left Coordinate
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    double m_leftCoordinate;
                    bool m_leftCoordinateHasBeenSet;

                    /**
                     * Top Coordinate
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    double m_topCoordinate;
                    bool m_topCoordinateHasBeenSet;

                    /**
                     * Task Remark
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_notes;
                    bool m_notesHasBeenSet;

                    /**
                     * Task Initialization Strategy
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_instanceInitStrategy;
                    bool m_instanceInitStrategyHasBeenSet;

                    /**
                     * Compute Queue
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_yarnQueue;
                    bool m_yarnQueueHasBeenSet;

                    /**
                     * Latest Schedule Submission Time
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_lastSchedulerCommitTime;
                    bool m_lastSchedulerCommitTimeHasBeenSet;

                    /**
                     * Task Start Time Calculated by cron Expression
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_normalizedJobStartTime;
                    bool m_normalizedJobStartTimeHasBeenSet;

                    /**
                     * Scheduling Plan Description
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_schedulerDesc;
                    bool m_schedulerDescHasBeenSet;

                    /**
                     * Compute Resource Group
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_resourceGroup;
                    bool m_resourceGroupHasBeenSet;

                    /**
                     * Task Creator
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * Task Dependency Type: and, or
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_dependencyRel;
                    bool m_dependencyRelHasBeenSet;

                    /**
                     * Task Workflow Dependency: yes, no
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_dependencyWorkflow;
                    bool m_dependencyWorkflowHasBeenSet;

                    /**
                     * Event Listening Configuration
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_eventListenerConfig;
                    bool m_eventListenerConfigHasBeenSet;

                    /**
                     * Event-driven Configuration
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_eventPublisherConfig;
                    bool m_eventPublisherConfigHasBeenSet;

                    /**
                     * Virtual Task Status
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_virtualTaskStatus;
                    bool m_virtualTaskStatusHasBeenSet;

                    /**
                     * Task Dependency Edge Details
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    LinkOpsDto m_taskLinkInfo;
                    bool m_taskLinkInfoHasBeenSet;

                    /**
                     * Task Product TypeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * Project IDNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Project IdentifierNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_projectIdent;
                    bool m_projectIdentHasBeenSet;

                    /**
                     * Project nameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * Main Account userId
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_ownId;
                    bool m_ownIdHasBeenSet;

                    /**
                     * User userId
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * Tenant ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_tenantId;
                    bool m_tenantIdHasBeenSet;

                    /**
                     * Updater's Nickname
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_updateUser;
                    bool m_updateUserHasBeenSet;

                    /**
                     * Update timeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Updater's userId
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_updateUserId;
                    bool m_updateUserIdHasBeenSet;

                    /**
                     * Task Type ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_taskTypeId;
                    bool m_taskTypeIdHasBeenSet;

                    /**
                     * Task Type Description
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_taskTypeDesc;
                    bool m_taskTypeDescHasBeenSet;

                    /**
                     * Whether to Display Workflow
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    bool m_showWorkflow;
                    bool m_showWorkflowHasBeenSet;

                    /**
                     * First Submission Time
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
                     * Scheduling Description
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_scheduleDesc;
                    bool m_scheduleDescHasBeenSet;

                    /**
                     * CycleNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_cycleNum;
                    bool m_cycleNumHasBeenSet;

                    /**
                     * ExpressionsNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_crontab;
                    bool m_crontabHasBeenSet;

                    /**
                     * Start Date
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_startDate;
                    bool m_startDateHasBeenSet;

                    /**
                     * End Date
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                    /**
                     * Cycle Unit
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_cycleUnit;
                    bool m_cycleUnitHasBeenSet;

                    /**
                     * Initialization Strategy
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_initStrategy;
                    bool m_initStrategyHasBeenSet;

                    /**
                     * Hierarchy
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_layer;
                    bool m_layerHasBeenSet;

                    /**
                     * Source Data Source ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_sourceServiceId;
                    bool m_sourceServiceIdHasBeenSet;

                    /**
                     * Source Data Source Type
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_sourceServiceType;
                    bool m_sourceServiceTypeHasBeenSet;

                    /**
                     * Target Data Source ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_targetServiceId;
                    bool m_targetServiceIdHasBeenSet;

                    /**
                     * Target Data Source Type
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_targetServiceType;
                    bool m_targetServiceTypeHasBeenSet;

                    /**
                     * Subtask List
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_tasksStr;
                    bool m_tasksStrHasBeenSet;

                    /**
                     * Whether the Task Version Has Been Submitted
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    bool m_submit;
                    bool m_submitHasBeenSet;

                    /**
                     * Resource Group IDNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_executorGroupId;
                    bool m_executorGroupIdHasBeenSet;

                    /**
                     * Resource Group NameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_executorGroupName;
                    bool m_executorGroupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKOPSDTO_H_
