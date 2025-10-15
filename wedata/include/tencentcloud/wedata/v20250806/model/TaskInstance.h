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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_TASKINSTANCE_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_TASKINSTANCE_H_

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
                * Scheduling task instance entity.
                */
                class TaskInstance : public AbstractModel
                {
                public:
                    TaskInstance();
                    ~TaskInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Project id.
                     * @return ProjectId Project id.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project id.
                     * @param _projectId Project id.
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
                     * 获取**Instance unique id**.
                     * @return InstanceKey **Instance unique id**.
                     * 
                     */
                    std::string GetInstanceKey() const;

                    /**
                     * 设置**Instance unique id**.
                     * @param _instanceKey **Instance unique id**.
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
                     * 获取Folder ID.

                     * @return FolderId Folder ID.

                     * 
                     */
                    std::string GetFolderId() const;

                    /**
                     * 设置Folder ID.

                     * @param _folderId Folder ID.

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
                     * 获取Folder name.
                     * @return FolderName Folder name.
                     * 
                     */
                    std::string GetFolderName() const;

                    /**
                     * 设置Folder name.
                     * @param _folderName Folder name.
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
                     * 获取Workflow ID.
                     * @return WorkflowId Workflow ID.
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置Workflow ID.
                     * @param _workflowId Workflow ID.
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
                     * 获取Workflow name.

                     * @return WorkflowName Workflow name.

                     * 
                     */
                    std::string GetWorkflowName() const;

                    /**
                     * 设置Workflow name.

                     * @param _workflowName Workflow name.

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
                     * 获取Task name.

                     * @return TaskName Task name.

                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置Task name.

                     * @param _taskName Task name.

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
                     * 获取Instance data time.
                     * @return CurRunDate Instance data time.
                     * 
                     */
                    std::string GetCurRunDate() const;

                    /**
                     * 设置Instance data time.
                     * @param _curRunDate Instance data time.
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
                     * 获取**Instance status**.
-WAIT_EVENT: specifies the wait for event.
-WAIT_UPSTREAM: waiting for upstream.
- WAIT_RUN: awaiting execution.
- RUNNING: indicates the instance is RUNNING.
- SKIP_RUNNING: SKIP RUNNING.
- FAILED_RETRY: RETRY on failure.
- EXPIRED: failed.
-COMPLETED: success.
                     * @return InstanceState **Instance status**.
-WAIT_EVENT: specifies the wait for event.
-WAIT_UPSTREAM: waiting for upstream.
- WAIT_RUN: awaiting execution.
- RUNNING: indicates the instance is RUNNING.
- SKIP_RUNNING: SKIP RUNNING.
- FAILED_RETRY: RETRY on failure.
- EXPIRED: failed.
-COMPLETED: success.
                     * 
                     */
                    std::string GetInstanceState() const;

                    /**
                     * 设置**Instance status**.
-WAIT_EVENT: specifies the wait for event.
-WAIT_UPSTREAM: waiting for upstream.
- WAIT_RUN: awaiting execution.
- RUNNING: indicates the instance is RUNNING.
- SKIP_RUNNING: SKIP RUNNING.
- FAILED_RETRY: RETRY on failure.
- EXPIRED: failed.
-COMPLETED: success.
                     * @param _instanceState **Instance status**.
-WAIT_EVENT: specifies the wait for event.
-WAIT_UPSTREAM: waiting for upstream.
- WAIT_RUN: awaiting execution.
- RUNNING: indicates the instance is RUNNING.
- SKIP_RUNNING: SKIP RUNNING.
- FAILED_RETRY: RETRY on failure.
- EXPIRED: failed.
-COMPLETED: success.
                     * 
                     */
                    void SetInstanceState(const std::string& _instanceState);

                    /**
                     * 判断参数 InstanceState 是否已赋值
                     * @return InstanceState 是否已赋值
                     * 
                     */
                    bool InstanceStateHasBeenSet() const;

                    /**
                     * 获取Specifies the instance type.

-0 indicates the supplementary entry type.
-Indicates a periodic instance.
-2 indicates a non-periodic instance.
                     * @return InstanceType Specifies the instance type.

-0 indicates the supplementary entry type.
-Indicates a periodic instance.
-2 indicates a non-periodic instance.
                     * 
                     */
                    uint64_t GetInstanceType() const;

                    /**
                     * 设置Specifies the instance type.

-0 indicates the supplementary entry type.
-Indicates a periodic instance.
-2 indicates a non-periodic instance.
                     * @param _instanceType Specifies the instance type.

-0 indicates the supplementary entry type.
-Indicates a periodic instance.
-2 indicates a non-periodic instance.
                     * 
                     */
                    void SetInstanceType(const uint64_t& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取Owner Uin list.
                     * @return OwnerUinList Owner Uin list.
                     * 
                     */
                    std::vector<std::string> GetOwnerUinList() const;

                    /**
                     * 设置Owner Uin list.
                     * @param _ownerUinList Owner Uin list.
                     * 
                     */
                    void SetOwnerUinList(const std::vector<std::string>& _ownerUinList);

                    /**
                     * 判断参数 OwnerUinList 是否已赋值
                     * @return OwnerUinList 是否已赋值
                     * 
                     */
                    bool OwnerUinListHasBeenSet() const;

                    /**
                     * 获取Cumulative running times.

                     * @return TotalRunNum Cumulative running times.

                     * 
                     */
                    uint64_t GetTotalRunNum() const;

                    /**
                     * 设置Cumulative running times.

                     * @param _totalRunNum Cumulative running times.

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
                     * 获取Task type description.
                     * @return TaskType Task type description.
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置Task type description.
                     * @param _taskType Task type description.
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取Task type id.

                     * @return TaskTypeId Task type id.

                     * 
                     */
                    int64_t GetTaskTypeId() const;

                    /**
                     * 设置Task type id.

                     * @param _taskTypeId Task type id.

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
                     * 获取Task Cycle Type

* ONEOFF_CYCLE: One-time

* YEAR_CYCLE: Yearly

* MONTH_CYCLE: Monthly

* WEEK_CYCLE: Weekly

* DAY_CYCLE: Daily

* HOUR_CYCLE: Hourly

* MINUTE_CYCLE: Minute-level

* CRONTAB_CYCLE: Crontab expression-based
                     * @return CycleType Task Cycle Type

* ONEOFF_CYCLE: One-time

* YEAR_CYCLE: Yearly

* MONTH_CYCLE: Monthly

* WEEK_CYCLE: Weekly

* DAY_CYCLE: Daily

* HOUR_CYCLE: Hourly

* MINUTE_CYCLE: Minute-level

* CRONTAB_CYCLE: Crontab expression-based
                     * 
                     */
                    std::string GetCycleType() const;

                    /**
                     * 设置Task Cycle Type

* ONEOFF_CYCLE: One-time

* YEAR_CYCLE: Yearly

* MONTH_CYCLE: Monthly

* WEEK_CYCLE: Weekly

* DAY_CYCLE: Daily

* HOUR_CYCLE: Hourly

* MINUTE_CYCLE: Minute-level

* CRONTAB_CYCLE: Crontab expression-based
                     * @param _cycleType Task Cycle Type

* ONEOFF_CYCLE: One-time

* YEAR_CYCLE: Yearly

* MONTH_CYCLE: Monthly

* WEEK_CYCLE: Weekly

* DAY_CYCLE: Daily

* HOUR_CYCLE: Hourly

* MINUTE_CYCLE: Minute-level

* CRONTAB_CYCLE: Crontab expression-based
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
                     * 获取Retry count limit when execution fails each time.

                     * @return TryLimit Retry count limit when execution fails each time.

                     * 
                     */
                    uint64_t GetTryLimit() const;

                    /**
                     * 设置Retry count limit when execution fails each time.

                     * @param _tryLimit Retry count limit when execution fails each time.

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
                     * 获取Specifies the number of retry attempts on failure.
When triggered by manual rerun, supplementary entry instance, or other methods, the count will be reset to 0 and start again.
                     * @return Tries Specifies the number of retry attempts on failure.
When triggered by manual rerun, supplementary entry instance, or other methods, the count will be reset to 0 and start again.
                     * 
                     */
                    uint64_t GetTries() const;

                    /**
                     * 设置Specifies the number of retry attempts on failure.
When triggered by manual rerun, supplementary entry instance, or other methods, the count will be reset to 0 and start again.
                     * @param _tries Specifies the number of retry attempts on failure.
When triggered by manual rerun, supplementary entry instance, or other methods, the count will be reset to 0 and start again.
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
                     * 获取Operation start time.
                     * @return StartTime Operation start time.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Operation start time.
                     * @param _startTime Operation start time.
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
                     * 获取Operation completion time.
                     * @return EndTime Operation completion time.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Operation completion time.
                     * @param _endTime Operation completion time.
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
                     * 获取Time spent, in milliseconds.

                     * @return CostTime Time spent, in milliseconds.

                     * 
                     */
                    int64_t GetCostTime() const;

                    /**
                     * 设置Time spent, in milliseconds.

                     * @param _costTime Time spent, in milliseconds.

                     * 
                     */
                    void SetCostTime(const int64_t& _costTime);

                    /**
                     * 判断参数 CostTime 是否已赋值
                     * @return CostTime 是否已赋值
                     * 
                     */
                    bool CostTimeHasBeenSet() const;

                    /**
                     * 获取Scheduled dispatch time.

                     * @return SchedulerTime Scheduled dispatch time.

                     * 
                     */
                    std::string GetSchedulerTime() const;

                    /**
                     * 设置Scheduled dispatch time.

                     * @param _schedulerTime Scheduled dispatch time.

                     * 
                     */
                    void SetSchedulerTime(const std::string& _schedulerTime);

                    /**
                     * 判断参数 SchedulerTime 是否已赋值
                     * @return SchedulerTime 是否已赋值
                     * 
                     */
                    bool SchedulerTimeHasBeenSet() const;

                    /**
                     * 获取Latest update time of the instance. specifies the time format as yyyy-MM-dd HH:MM:ss.

                     * @return LastUpdateTime Latest update time of the instance. specifies the time format as yyyy-MM-dd HH:MM:ss.

                     * 
                     */
                    std::string GetLastUpdateTime() const;

                    /**
                     * 设置Latest update time of the instance. specifies the time format as yyyy-MM-dd HH:MM:ss.

                     * @param _lastUpdateTime Latest update time of the instance. specifies the time format as yyyy-MM-dd HH:MM:ss.

                     * 
                     */
                    void SetLastUpdateTime(const std::string& _lastUpdateTime);

                    /**
                     * 判断参数 LastUpdateTime 是否已赋值
                     * @return LastUpdateTime 是否已赋值
                     * 
                     */
                    bool LastUpdateTimeHasBeenSet() const;

                    /**
                     * 获取Execution resource group ID.

                     * @return ExecutorGroupId Execution resource group ID.

                     * 
                     */
                    std::string GetExecutorGroupId() const;

                    /**
                     * 设置Execution resource group ID.

                     * @param _executorGroupId Execution resource group ID.

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
                     * 获取Resource group name.

                     * @return ExecutorGroupName Resource group name.

                     * 
                     */
                    std::string GetExecutorGroupName() const;

                    /**
                     * 设置Resource group name.

                     * @param _executorGroupName Resource group name.

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
                     * Project id.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * **Instance unique id**.
                     */
                    std::string m_instanceKey;
                    bool m_instanceKeyHasBeenSet;

                    /**
                     * Folder ID.

                     */
                    std::string m_folderId;
                    bool m_folderIdHasBeenSet;

                    /**
                     * Folder name.
                     */
                    std::string m_folderName;
                    bool m_folderNameHasBeenSet;

                    /**
                     * Workflow ID.
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * Workflow name.

                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * Task ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Task name.

                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * Instance data time.
                     */
                    std::string m_curRunDate;
                    bool m_curRunDateHasBeenSet;

                    /**
                     * **Instance status**.
-WAIT_EVENT: specifies the wait for event.
-WAIT_UPSTREAM: waiting for upstream.
- WAIT_RUN: awaiting execution.
- RUNNING: indicates the instance is RUNNING.
- SKIP_RUNNING: SKIP RUNNING.
- FAILED_RETRY: RETRY on failure.
- EXPIRED: failed.
-COMPLETED: success.
                     */
                    std::string m_instanceState;
                    bool m_instanceStateHasBeenSet;

                    /**
                     * Specifies the instance type.

-0 indicates the supplementary entry type.
-Indicates a periodic instance.
-2 indicates a non-periodic instance.
                     */
                    uint64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Owner Uin list.
                     */
                    std::vector<std::string> m_ownerUinList;
                    bool m_ownerUinListHasBeenSet;

                    /**
                     * Cumulative running times.

                     */
                    uint64_t m_totalRunNum;
                    bool m_totalRunNumHasBeenSet;

                    /**
                     * Task type description.
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * Task type id.

                     */
                    int64_t m_taskTypeId;
                    bool m_taskTypeIdHasBeenSet;

                    /**
                     * Task Cycle Type

* ONEOFF_CYCLE: One-time

* YEAR_CYCLE: Yearly

* MONTH_CYCLE: Monthly

* WEEK_CYCLE: Weekly

* DAY_CYCLE: Daily

* HOUR_CYCLE: Hourly

* MINUTE_CYCLE: Minute-level

* CRONTAB_CYCLE: Crontab expression-based
                     */
                    std::string m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                    /**
                     * Retry count limit when execution fails each time.

                     */
                    uint64_t m_tryLimit;
                    bool m_tryLimitHasBeenSet;

                    /**
                     * Specifies the number of retry attempts on failure.
When triggered by manual rerun, supplementary entry instance, or other methods, the count will be reset to 0 and start again.
                     */
                    uint64_t m_tries;
                    bool m_triesHasBeenSet;

                    /**
                     * Operation start time.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Operation completion time.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Time spent, in milliseconds.

                     */
                    int64_t m_costTime;
                    bool m_costTimeHasBeenSet;

                    /**
                     * Scheduled dispatch time.

                     */
                    std::string m_schedulerTime;
                    bool m_schedulerTimeHasBeenSet;

                    /**
                     * Latest update time of the instance. specifies the time format as yyyy-MM-dd HH:MM:ss.

                     */
                    std::string m_lastUpdateTime;
                    bool m_lastUpdateTimeHasBeenSet;

                    /**
                     * Execution resource group ID.

                     */
                    std::string m_executorGroupId;
                    bool m_executorGroupIdHasBeenSet;

                    /**
                     * Resource group name.

                     */
                    std::string m_executorGroupName;
                    bool m_executorGroupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_TASKINSTANCE_H_
