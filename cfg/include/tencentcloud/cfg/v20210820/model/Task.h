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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_TASK_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_TASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfg/v20210820/model/TaskGroup.h>
#include <tencentcloud/cfg/v20210820/model/TaskMonitor.h>
#include <tencentcloud/cfg/v20210820/model/DescribePolicy.h>
#include <tencentcloud/cfg/v20210820/model/TagWithDescribe.h>
#include <tencentcloud/cfg/v20210820/model/ApmServiceInfo.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Task
                */
                class Task : public AbstractModel
                {
                public:
                    Task();
                    ~Task() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task ID
                     * @return TaskId Task ID
                     * 
                     */
                    int64_t GetTaskId() const;

                    /**
                     * 设置Task ID
                     * @param _taskId Task ID
                     * 
                     */
                    void SetTaskId(const int64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Task name
                     * @return TaskTitle Task name
                     * 
                     */
                    std::string GetTaskTitle() const;

                    /**
                     * 设置Task name
                     * @param _taskTitle Task name
                     * 
                     */
                    void SetTaskTitle(const std::string& _taskTitle);

                    /**
                     * 判断参数 TaskTitle 是否已赋值
                     * @return TaskTitle 是否已赋值
                     * 
                     */
                    bool TaskTitleHasBeenSet() const;

                    /**
                     * 获取Task description
                     * @return TaskDescription Task description
                     * 
                     */
                    std::string GetTaskDescription() const;

                    /**
                     * 设置Task description
                     * @param _taskDescription Task description
                     * 
                     */
                    void SetTaskDescription(const std::string& _taskDescription);

                    /**
                     * 判断参数 TaskDescription 是否已赋值
                     * @return TaskDescription 是否已赋值
                     * 
                     */
                    bool TaskDescriptionHasBeenSet() const;

                    /**
                     * 获取Custom tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskTag Custom tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskTag() const;

                    /**
                     * 设置Custom tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskTag Custom tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskTag(const std::string& _taskTag);

                    /**
                     * 判断参数 TaskTag 是否已赋值
                     * @return TaskTag 是否已赋值
                     * 
                     */
                    bool TaskTagHasBeenSet() const;

                    /**
                     * 获取Task status. 1001: not started; 1002: in progress (executing); 1003: in progress (paused); 1004: execution ended.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskStatus Task status. 1001: not started; 1002: in progress (executing); 1003: in progress (paused); 1004: execution ended.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTaskStatus() const;

                    /**
                     * 设置Task status. 1001: not started; 1002: in progress (executing); 1003: in progress (paused); 1004: execution ended.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskStatus Task status. 1001: not started; 1002: in progress (executing); 1003: in progress (paused); 1004: execution ended.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskStatus(const int64_t& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取Task end status, indicating the status of the task when it ends. 0: not ended; 1: successful; 2: failed; 3: terminated.
                     * @return TaskStatusType Task end status, indicating the status of the task when it ends. 0: not ended; 1: successful; 2: failed; 3: terminated.
                     * 
                     */
                    int64_t GetTaskStatusType() const;

                    /**
                     * 设置Task end status, indicating the status of the task when it ends. 0: not ended; 1: successful; 2: failed; 3: terminated.
                     * @param _taskStatusType Task end status, indicating the status of the task when it ends. 0: not ended; 1: successful; 2: failed; 3: terminated.
                     * 
                     */
                    void SetTaskStatusType(const int64_t& _taskStatusType);

                    /**
                     * 判断参数 TaskStatusType 是否已赋值
                     * @return TaskStatusType 是否已赋值
                     * 
                     */
                    bool TaskStatusTypeHasBeenSet() const;

                    /**
                     * 获取Protection policy
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskProtectStrategy Protection policy
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskProtectStrategy() const;

                    /**
                     * 设置Protection policy
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskProtectStrategy Protection policy
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskProtectStrategy(const std::string& _taskProtectStrategy);

                    /**
                     * 判断参数 TaskProtectStrategy 是否已赋值
                     * @return TaskProtectStrategy 是否已赋值
                     * 
                     */
                    bool TaskProtectStrategyHasBeenSet() const;

                    /**
                     * 获取Task creation time
                     * @return TaskCreateTime Task creation time
                     * 
                     */
                    std::string GetTaskCreateTime() const;

                    /**
                     * 设置Task creation time
                     * @param _taskCreateTime Task creation time
                     * 
                     */
                    void SetTaskCreateTime(const std::string& _taskCreateTime);

                    /**
                     * 判断参数 TaskCreateTime 是否已赋值
                     * @return TaskCreateTime 是否已赋值
                     * 
                     */
                    bool TaskCreateTimeHasBeenSet() const;

                    /**
                     * 获取Task update time
                     * @return TaskUpdateTime Task update time
                     * 
                     */
                    std::string GetTaskUpdateTime() const;

                    /**
                     * 设置Task update time
                     * @param _taskUpdateTime Task update time
                     * 
                     */
                    void SetTaskUpdateTime(const std::string& _taskUpdateTime);

                    /**
                     * 判断参数 TaskUpdateTime 是否已赋值
                     * @return TaskUpdateTime 是否已赋值
                     * 
                     */
                    bool TaskUpdateTimeHasBeenSet() const;

                    /**
                     * 获取Task action group
                     * @return TaskGroups Task action group
                     * 
                     */
                    std::vector<TaskGroup> GetTaskGroups() const;

                    /**
                     * 设置Task action group
                     * @param _taskGroups Task action group
                     * 
                     */
                    void SetTaskGroups(const std::vector<TaskGroup>& _taskGroups);

                    /**
                     * 判断参数 TaskGroups 是否已赋值
                     * @return TaskGroups 是否已赋值
                     * 
                     */
                    bool TaskGroupsHasBeenSet() const;

                    /**
                     * 获取Start time

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskStartTime Start time

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskStartTime() const;

                    /**
                     * 设置Start time

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskStartTime Start time

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskStartTime(const std::string& _taskStartTime);

                    /**
                     * 判断参数 TaskStartTime 是否已赋值
                     * @return TaskStartTime 是否已赋值
                     * 
                     */
                    bool TaskStartTimeHasBeenSet() const;

                    /**
                     * 获取End time

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskEndTime End time

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskEndTime() const;

                    /**
                     * 设置End time

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskEndTime End time

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskEndTime(const std::string& _taskEndTime);

                    /**
                     * 判断参数 TaskEndTime 是否已赋值
                     * @return TaskEndTime 是否已赋值
                     * 
                     */
                    bool TaskEndTimeHasBeenSet() const;

                    /**
                     * 获取Whether expectations are met. 1: expectations met; 2: expectations not met.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskExpect Whether expectations are met. 1: expectations met; 2: expectations not met.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTaskExpect() const;

                    /**
                     * 设置Whether expectations are met. 1: expectations met; 2: expectations not met.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskExpect Whether expectations are met. 1: expectations met; 2: expectations not met.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskExpect(const int64_t& _taskExpect);

                    /**
                     * 判断参数 TaskExpect 是否已赋值
                     * @return TaskExpect 是否已赋值
                     * 
                     */
                    bool TaskExpectHasBeenSet() const;

                    /**
                     * 获取Experiment record
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskSummary Experiment record
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskSummary() const;

                    /**
                     * 设置Experiment record
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskSummary Experiment record
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskSummary(const std::string& _taskSummary);

                    /**
                     * 判断参数 TaskSummary 是否已赋值
                     * @return TaskSummary 是否已赋值
                     * 
                     */
                    bool TaskSummaryHasBeenSet() const;

                    /**
                     * 获取Task mode. 1: manual execution; 2: automatic execution.
                     * @return TaskMode Task mode. 1: manual execution; 2: automatic execution.
                     * 
                     */
                    int64_t GetTaskMode() const;

                    /**
                     * 设置Task mode. 1: manual execution; 2: automatic execution.
                     * @param _taskMode Task mode. 1: manual execution; 2: automatic execution.
                     * 
                     */
                    void SetTaskMode(const int64_t& _taskMode);

                    /**
                     * 判断参数 TaskMode 是否已赋值
                     * @return TaskMode 是否已赋值
                     * 
                     */
                    bool TaskModeHasBeenSet() const;

                    /**
                     * 获取Automatic pause duration. Unit: minutes.
                     * @return TaskPauseDuration Automatic pause duration. Unit: minutes.
                     * 
                     */
                    int64_t GetTaskPauseDuration() const;

                    /**
                     * 设置Automatic pause duration. Unit: minutes.
                     * @param _taskPauseDuration Automatic pause duration. Unit: minutes.
                     * 
                     */
                    void SetTaskPauseDuration(const int64_t& _taskPauseDuration);

                    /**
                     * 判断参数 TaskPauseDuration 是否已赋值
                     * @return TaskPauseDuration 是否已赋值
                     * 
                     */
                    bool TaskPauseDurationHasBeenSet() const;

                    /**
                     * 获取Main account that creates the experiment
                     * @return TaskOwnerUin Main account that creates the experiment
                     * 
                     */
                    std::string GetTaskOwnerUin() const;

                    /**
                     * 设置Main account that creates the experiment
                     * @param _taskOwnerUin Main account that creates the experiment
                     * 
                     */
                    void SetTaskOwnerUin(const std::string& _taskOwnerUin);

                    /**
                     * 判断参数 TaskOwnerUin 是否已赋值
                     * @return TaskOwnerUin 是否已赋值
                     * 
                     */
                    bool TaskOwnerUinHasBeenSet() const;

                    /**
                     * 获取Region ID
                     * @return TaskRegionId Region ID
                     * 
                     */
                    int64_t GetTaskRegionId() const;

                    /**
                     * 设置Region ID
                     * @param _taskRegionId Region ID
                     * 
                     */
                    void SetTaskRegionId(const int64_t& _taskRegionId);

                    /**
                     * 判断参数 TaskRegionId 是否已赋值
                     * @return TaskRegionId 是否已赋值
                     * 
                     */
                    bool TaskRegionIdHasBeenSet() const;

                    /**
                     * 获取Monitoring metric list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskMonitors Monitoring metric list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<TaskMonitor> GetTaskMonitors() const;

                    /**
                     * 设置Monitoring metric list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskMonitors Monitoring metric list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskMonitors(const std::vector<TaskMonitor>& _taskMonitors);

                    /**
                     * 判断参数 TaskMonitors 是否已赋值
                     * @return TaskMonitors 是否已赋值
                     * 
                     */
                    bool TaskMonitorsHasBeenSet() const;

                    /**
                     * 获取Protection policy
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskPolicy Protection policy
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    DescribePolicy GetTaskPolicy() const;

                    /**
                     * 设置Protection policy
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskPolicy Protection policy
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskPolicy(const DescribePolicy& _taskPolicy);

                    /**
                     * 判断参数 TaskPolicy 是否已赋值
                     * @return TaskPolicy 是否已赋值
                     * 
                     */
                    bool TaskPolicyHasBeenSet() const;

                    /**
                     * 获取Tag list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Tags Tag list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<TagWithDescribe> GetTags() const;

                    /**
                     * 设置Tag list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tags Tag list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTags(const std::vector<TagWithDescribe>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取ID of the associated experiment plan
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskPlanId ID of the associated experiment plan
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTaskPlanId() const;

                    /**
                     * 设置ID of the associated experiment plan
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskPlanId ID of the associated experiment plan
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskPlanId(const int64_t& _taskPlanId);

                    /**
                     * 判断参数 TaskPlanId 是否已赋值
                     * @return TaskPlanId 是否已赋值
                     * 
                     */
                    bool TaskPlanIdHasBeenSet() const;

                    /**
                     * 获取Name of the associated experiment plan
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskPlanTitle Name of the associated experiment plan
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskPlanTitle() const;

                    /**
                     * 设置Name of the associated experiment plan
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskPlanTitle Name of the associated experiment plan
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskPlanTitle(const std::string& _taskPlanTitle);

                    /**
                     * 判断参数 TaskPlanTitle 是否已赋值
                     * @return TaskPlanTitle 是否已赋值
                     * 
                     */
                    bool TaskPlanTitleHasBeenSet() const;

                    /**
                     * 获取ID of the associated application
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApplicationId ID of the associated application
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置ID of the associated application
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _applicationId ID of the associated application
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取Name of the associated application
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApplicationName Name of the associated application
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置Name of the associated application
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _applicationName Name of the associated application
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetApplicationName(const std::string& _applicationName);

                    /**
                     * 判断参数 ApplicationName 是否已赋值
                     * @return ApplicationName 是否已赋值
                     * 
                     */
                    bool ApplicationNameHasBeenSet() const;

                    /**
                     * 获取Associated alarm metrics
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AlarmPolicy Associated alarm metrics
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetAlarmPolicy() const;

                    /**
                     * 设置Associated alarm metrics
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _alarmPolicy Associated alarm metrics
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAlarmPolicy(const std::vector<std::string>& _alarmPolicy);

                    /**
                     * 判断参数 AlarmPolicy 是否已赋值
                     * @return AlarmPolicy 是否已赋值
                     * 
                     */
                    bool AlarmPolicyHasBeenSet() const;

                    /**
                     * 获取Associated APM services
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApmServiceList Associated APM services
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ApmServiceInfo> GetApmServiceList() const;

                    /**
                     * 设置Associated APM services
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _apmServiceList Associated APM services
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetApmServiceList(const std::vector<ApmServiceInfo>& _apmServiceList);

                    /**
                     * 判断参数 ApmServiceList 是否已赋值
                     * @return ApmServiceList 是否已赋值
                     * 
                     */
                    bool ApmServiceListHasBeenSet() const;

                    /**
                     * 获取ID of the associated threat verification item
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VerifyId ID of the associated threat verification item
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetVerifyId() const;

                    /**
                     * 设置ID of the associated threat verification item
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _verifyId ID of the associated threat verification item
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVerifyId(const uint64_t& _verifyId);

                    /**
                     * 判断参数 VerifyId 是否已赋值
                     * @return VerifyId 是否已赋值
                     * 
                     */
                    bool VerifyIdHasBeenSet() const;

                    /**
                     * 获取Guardrail processing method. 1: roll back sequentially; 2: pause experiment.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PolicyDealType Guardrail processing method. 1: roll back sequentially; 2: pause experiment.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetPolicyDealType() const;

                    /**
                     * 设置Guardrail processing method. 1: roll back sequentially; 2: pause experiment.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _policyDealType Guardrail processing method. 1: roll back sequentially; 2: pause experiment.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPolicyDealType(const int64_t& _policyDealType);

                    /**
                     * 判断参数 PolicyDealType 是否已赋值
                     * @return PolicyDealType 是否已赋值
                     * 
                     */
                    bool PolicyDealTypeHasBeenSet() const;

                private:

                    /**
                     * Task ID
                     */
                    int64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Task name
                     */
                    std::string m_taskTitle;
                    bool m_taskTitleHasBeenSet;

                    /**
                     * Task description
                     */
                    std::string m_taskDescription;
                    bool m_taskDescriptionHasBeenSet;

                    /**
                     * Custom tag
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskTag;
                    bool m_taskTagHasBeenSet;

                    /**
                     * Task status. 1001: not started; 1002: in progress (executing); 1003: in progress (paused); 1004: execution ended.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * Task end status, indicating the status of the task when it ends. 0: not ended; 1: successful; 2: failed; 3: terminated.
                     */
                    int64_t m_taskStatusType;
                    bool m_taskStatusTypeHasBeenSet;

                    /**
                     * Protection policy
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskProtectStrategy;
                    bool m_taskProtectStrategyHasBeenSet;

                    /**
                     * Task creation time
                     */
                    std::string m_taskCreateTime;
                    bool m_taskCreateTimeHasBeenSet;

                    /**
                     * Task update time
                     */
                    std::string m_taskUpdateTime;
                    bool m_taskUpdateTimeHasBeenSet;

                    /**
                     * Task action group
                     */
                    std::vector<TaskGroup> m_taskGroups;
                    bool m_taskGroupsHasBeenSet;

                    /**
                     * Start time

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskStartTime;
                    bool m_taskStartTimeHasBeenSet;

                    /**
                     * End time

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskEndTime;
                    bool m_taskEndTimeHasBeenSet;

                    /**
                     * Whether expectations are met. 1: expectations met; 2: expectations not met.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_taskExpect;
                    bool m_taskExpectHasBeenSet;

                    /**
                     * Experiment record
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskSummary;
                    bool m_taskSummaryHasBeenSet;

                    /**
                     * Task mode. 1: manual execution; 2: automatic execution.
                     */
                    int64_t m_taskMode;
                    bool m_taskModeHasBeenSet;

                    /**
                     * Automatic pause duration. Unit: minutes.
                     */
                    int64_t m_taskPauseDuration;
                    bool m_taskPauseDurationHasBeenSet;

                    /**
                     * Main account that creates the experiment
                     */
                    std::string m_taskOwnerUin;
                    bool m_taskOwnerUinHasBeenSet;

                    /**
                     * Region ID
                     */
                    int64_t m_taskRegionId;
                    bool m_taskRegionIdHasBeenSet;

                    /**
                     * Monitoring metric list
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<TaskMonitor> m_taskMonitors;
                    bool m_taskMonitorsHasBeenSet;

                    /**
                     * Protection policy
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    DescribePolicy m_taskPolicy;
                    bool m_taskPolicyHasBeenSet;

                    /**
                     * Tag list
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<TagWithDescribe> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * ID of the associated experiment plan
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_taskPlanId;
                    bool m_taskPlanIdHasBeenSet;

                    /**
                     * Name of the associated experiment plan
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskPlanTitle;
                    bool m_taskPlanTitleHasBeenSet;

                    /**
                     * ID of the associated application
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * Name of the associated application
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * Associated alarm metrics
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_alarmPolicy;
                    bool m_alarmPolicyHasBeenSet;

                    /**
                     * Associated APM services
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ApmServiceInfo> m_apmServiceList;
                    bool m_apmServiceListHasBeenSet;

                    /**
                     * ID of the associated threat verification item
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_verifyId;
                    bool m_verifyIdHasBeenSet;

                    /**
                     * Guardrail processing method. 1: roll back sequentially; 2: pause experiment.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_policyDealType;
                    bool m_policyDealTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_TASK_H_
