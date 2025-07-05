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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCEVO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCEVO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TaskTypeOpsDto.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Scheduling running instance entity.
                */
                class InstanceVO : public AbstractModel
                {
                public:
                    InstanceVO();
                    ~InstanceVO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique identifier of an instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceKey Unique identifier of an instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceKey() const;

                    /**
                     * 设置Unique identifier of an instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceKey Unique identifier of an instance.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Project ID.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProjectId Project ID.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _projectId Project ID.

Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Folder ID.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FolderId Folder ID.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFolderId() const;

                    /**
                     * 设置Folder ID.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _folderId Folder ID.

Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FolderName Folder name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFolderName() const;

                    /**
                     * 设置Folder name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _folderName Folder name.
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WorkflowId Workflow ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置Workflow ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _workflowId Workflow ID.
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WorkflowName Workflow name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetWorkflowName() const;

                    /**
                     * 设置Workflow name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _workflowName Workflow name.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Responsible person list.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InChargeList Responsible person list.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetInChargeList() const;

                    /**
                     * 设置Responsible person list.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _inChargeList Responsible person list.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInChargeList(const std::vector<std::string>& _inChargeList);

                    /**
                     * 判断参数 InChargeList 是否已赋值
                     * @return InChargeList 是否已赋值
                     * 
                     */
                    bool InChargeListHasBeenSet() const;

                    /**
                     * 获取Task ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskId Task ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskId Task ID

Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Task Name

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskName Task Name

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置Task Name

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskName Task Name

Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Task type

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskType Task type

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    TaskTypeOpsDto GetTaskType() const;

                    /**
                     * 设置Task type

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskType Task type

Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Task cycle type.
Supports filtering multiple conditions with an or relationship between them.
* O: ONEOFF_CYCLE
* Y: YEAR_CYCLE
* M: MONTH_CYCLE
* W: WEEK_CYCLE
* D: DAY_CYCLE
* H: HOUR_CYCLE
* I: MINUTE_CYCLE
* C: CRONTAB_CYCLE
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskCycleType Task cycle type.
Supports filtering multiple conditions with an or relationship between them.
* O: ONEOFF_CYCLE
* Y: YEAR_CYCLE
* M: MONTH_CYCLE
* W: WEEK_CYCLE
* D: DAY_CYCLE
* H: HOUR_CYCLE
* I: MINUTE_CYCLE
* C: CRONTAB_CYCLE
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskCycleType() const;

                    /**
                     * 设置Task cycle type.
Supports filtering multiple conditions with an or relationship between them.
* O: ONEOFF_CYCLE
* Y: YEAR_CYCLE
* M: MONTH_CYCLE
* W: WEEK_CYCLE
* D: DAY_CYCLE
* H: HOUR_CYCLE
* I: MINUTE_CYCLE
* C: CRONTAB_CYCLE
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskCycleType Task cycle type.
Supports filtering multiple conditions with an or relationship between them.
* O: ONEOFF_CYCLE
* Y: YEAR_CYCLE
* M: MONTH_CYCLE
* W: WEEK_CYCLE
* D: DAY_CYCLE
* H: HOUR_CYCLE
* I: MINUTE_CYCLE
* C: CRONTAB_CYCLE
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskCycleType(const std::string& _taskCycleType);

                    /**
                     * 判断参数 TaskCycleType 是否已赋值
                     * @return TaskCycleType 是否已赋值
                     * 
                     */
                    bool TaskCycleTypeHasBeenSet() const;

                    /**
                     * 获取Instance data time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CurRunDate Instance data time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCurRunDate() const;

                    /**
                     * 设置Instance data time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _curRunDate Instance data time.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Specifies the limit on the number of retries issued each time a running failure occurs.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TryLimit Specifies the limit on the number of retries issued each time a running failure occurs.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetTryLimit() const;

                    /**
                     * 设置Specifies the limit on the number of retries issued each time a running failure occurs.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tryLimit Specifies the limit on the number of retries issued each time a running failure occurs.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Number of retries after failure.
Will be reset to 0 and then recounted when triggered for execution by once again manually rerunning or using a supplementary entry instance and other methods.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Tries Number of retries after failure.
Will be reset to 0 and then recounted when triggered for execution by once again manually rerunning or using a supplementary entry instance and other methods.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetTries() const;

                    /**
                     * 设置Number of retries after failure.
Will be reset to 0 and then recounted when triggered for execution by once again manually rerunning or using a supplementary entry instance and other methods.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tries Number of retries after failure.
Will be reset to 0 and then recounted when triggered for execution by once again manually rerunning or using a supplementary entry instance and other methods.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Cumulative running times.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TotalRunNum Cumulative running times.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetTotalRunNum() const;

                    /**
                     * 设置Cumulative running times.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _totalRunNum Cumulative running times.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Instance type.

-0 indicates the supplementary entry type.
-1 indicates a periodic instance.
-2 indicates a non-periodic instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceType Instance type.

-0 indicates the supplementary entry type.
-1 indicates a periodic instance.
-2 indicates a non-periodic instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetInstanceType() const;

                    /**
                     * 设置Instance type.

-0 indicates the supplementary entry type.
-1 indicates a periodic instance.
-2 indicates a non-periodic instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceType Instance type.

-0 indicates the supplementary entry type.
-1 indicates a periodic instance.
-2 indicates a non-periodic instance.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Indicates the status of an instance.

-[0]Indicates waiting for event.
-[12] indicates waiting for upstream.
-[6, 7, 9, 10, 18] indicates awaiting execution.
-[1, 19, 22]: running.
-[21] indicates skipping running.
-[3] indicates retry on failure.
-[8, 4, 5, 13] indicates a failure.
-[2] indicates a success.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceState Indicates the status of an instance.

-[0]Indicates waiting for event.
-[12] indicates waiting for upstream.
-[6, 7, 9, 10, 18] indicates awaiting execution.
-[1, 19, 22]: running.
-[21] indicates skipping running.
-[3] indicates retry on failure.
-[8, 4, 5, 13] indicates a failure.
-[2] indicates a success.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetInstanceState() const;

                    /**
                     * 设置Indicates the status of an instance.

-[0]Indicates waiting for event.
-[12] indicates waiting for upstream.
-[6, 7, 9, 10, 18] indicates awaiting execution.
-[1, 19, 22]: running.
-[21] indicates skipping running.
-[3] indicates retry on failure.
-[8, 4, 5, 13] indicates a failure.
-[2] indicates a success.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceState Indicates the status of an instance.

-[0]Indicates waiting for event.
-[12] indicates waiting for upstream.
-[6, 7, 9, 10, 18] indicates awaiting execution.
-[1, 19, 22]: running.
-[21] indicates skipping running.
-[3] indicates retry on failure.
-[8, 4, 5, 13] indicates a failure.
-[2] indicates a success.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInstanceState(const uint64_t& _instanceState);

                    /**
                     * 判断参数 InstanceState 是否已赋值
                     * @return InstanceState 是否已赋值
                     * 
                     */
                    bool InstanceStateHasBeenSet() const;

                    /**
                     * 获取Start time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StartTime Start time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _startTime Start time.
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EndTime Operation completion time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Operation completion time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _endTime Operation completion time.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Time spent.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CostTime Time spent.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCostTime() const;

                    /**
                     * 设置Time spent.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _costTime Time spent.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Planned scheduling time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SchedulerTime Planned scheduling time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSchedulerTime() const;

                    /**
                     * 设置Planned scheduling time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _schedulerTime Planned scheduling time.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Execution resource group ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExecutorGroupId Execution resource group ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExecutorGroupId() const;

                    /**
                     * 设置Execution resource group ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _executorGroupId Execution resource group ID.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Resource group name

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExecutorGroupName Resource group name

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExecutorGroupName() const;

                    /**
                     * 设置Resource group name

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _executorGroupName Resource group name

Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Unique identifier of an instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceKey;
                    bool m_instanceKeyHasBeenSet;

                    /**
                     * Project ID.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Folder ID.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_folderId;
                    bool m_folderIdHasBeenSet;

                    /**
                     * Folder name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_folderName;
                    bool m_folderNameHasBeenSet;

                    /**
                     * Workflow ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * Workflow name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * Responsible person list.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_inChargeList;
                    bool m_inChargeListHasBeenSet;

                    /**
                     * Task ID

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Task Name

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * Task type

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    TaskTypeOpsDto m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * Task cycle type.
Supports filtering multiple conditions with an or relationship between them.
* O: ONEOFF_CYCLE
* Y: YEAR_CYCLE
* M: MONTH_CYCLE
* W: WEEK_CYCLE
* D: DAY_CYCLE
* H: HOUR_CYCLE
* I: MINUTE_CYCLE
* C: CRONTAB_CYCLE
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskCycleType;
                    bool m_taskCycleTypeHasBeenSet;

                    /**
                     * Instance data time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_curRunDate;
                    bool m_curRunDateHasBeenSet;

                    /**
                     * Specifies the limit on the number of retries issued each time a running failure occurs.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_tryLimit;
                    bool m_tryLimitHasBeenSet;

                    /**
                     * Number of retries after failure.
Will be reset to 0 and then recounted when triggered for execution by once again manually rerunning or using a supplementary entry instance and other methods.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_tries;
                    bool m_triesHasBeenSet;

                    /**
                     * Cumulative running times.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_totalRunNum;
                    bool m_totalRunNumHasBeenSet;

                    /**
                     * Instance type.

-0 indicates the supplementary entry type.
-1 indicates a periodic instance.
-2 indicates a non-periodic instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Indicates the status of an instance.

-[0]Indicates waiting for event.
-[12] indicates waiting for upstream.
-[6, 7, 9, 10, 18] indicates awaiting execution.
-[1, 19, 22]: running.
-[21] indicates skipping running.
-[3] indicates retry on failure.
-[8, 4, 5, 13] indicates a failure.
-[2] indicates a success.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_instanceState;
                    bool m_instanceStateHasBeenSet;

                    /**
                     * Start time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Operation completion time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Time spent.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_costTime;
                    bool m_costTimeHasBeenSet;

                    /**
                     * Planned scheduling time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_schedulerTime;
                    bool m_schedulerTimeHasBeenSet;

                    /**
                     * Execution resource group ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_executorGroupId;
                    bool m_executorGroupIdHasBeenSet;

                    /**
                     * Resource group name

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_executorGroupName;
                    bool m_executorGroupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCEVO_H_
