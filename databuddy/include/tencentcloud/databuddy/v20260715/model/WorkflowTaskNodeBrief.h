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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKFLOWTASKNODEBRIEF_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKFLOWTASKNODEBRIEF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/DependOnBrief.h>
#include <tencentcloud/databuddy/v20260715/model/TaskRetryStrategy.h>
#include <tencentcloud/databuddy/v20260715/model/AdvancedDependencyConfig.h>
#include <tencentcloud/databuddy/v20260715/model/WorkflowTaskNodeBrief.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * Brief information of workflow task nodes in a workflow list item
                */
                class WorkflowTaskNodeBrief : public AbstractModel
                {
                public:
                    WorkflowTaskNodeBrief();
                    ~WorkflowTaskNodeBrief() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Workflow ID</p>
                     * @return WorkflowId <p>Workflow ID</p>
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置<p>Workflow ID</p>
                     * @param _workflowId <p>Workflow ID</p>
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
                     * 获取<p>Task ID.</p>
                     * @return TaskId <p>Task ID.</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>Task ID.</p>
                     * @param _taskId <p>Task ID.</p>
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
                     * 获取<p>Task name.</p>
                     * @return TaskName <p>Task name.</p>
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置<p>Task name.</p>
                     * @param _taskName <p>Task name.</p>
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
                     * 获取<p>Task Type Name. For details, see the TaskTypeName field description in the data structure TaskType.</p>
                     * @return TaskTypeName <p>Task Type Name. For details, see the TaskTypeName field description in the data structure TaskType.</p>
                     * 
                     */
                    std::string GetTaskTypeName() const;

                    /**
                     * 设置<p>Task Type Name. For details, see the TaskTypeName field description in the data structure TaskType.</p>
                     * @param _taskTypeName <p>Task Type Name. For details, see the TaskTypeName field description in the data structure TaskType.</p>
                     * 
                     */
                    void SetTaskTypeName(const std::string& _taskTypeName);

                    /**
                     * 判断参数 TaskTypeName 是否已赋值
                     * @return TaskTypeName 是否已赋值
                     * 
                     */
                    bool TaskTypeNameHasBeenSet() const;

                    /**
                     * 获取<p>Task dependency list.</p>
                     * @return DependOnList <p>Task dependency list.</p>
                     * 
                     */
                    std::vector<DependOnBrief> GetDependOnList() const;

                    /**
                     * 设置<p>Task dependency list.</p>
                     * @param _dependOnList <p>Task dependency list.</p>
                     * 
                     */
                    void SetDependOnList(const std::vector<DependOnBrief>& _dependOnList);

                    /**
                     * 判断参数 DependOnList 是否已赋值
                     * @return DependOnList 是否已赋值
                     * 
                     */
                    bool DependOnListHasBeenSet() const;

                    /**
                     * 获取<p>Task resource group ID.</p>
                     * @return ResourceGroupId <p>Task resource group ID.</p>
                     * 
                     */
                    std::string GetResourceGroupId() const;

                    /**
                     * 设置<p>Task resource group ID.</p>
                     * @param _resourceGroupId <p>Task resource group ID.</p>
                     * 
                     */
                    void SetResourceGroupId(const std::string& _resourceGroupId);

                    /**
                     * 判断参数 ResourceGroupId 是否已赋值
                     * @return ResourceGroupId 是否已赋值
                     * 
                     */
                    bool ResourceGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>Task resource group name.</p>
                     * @return ResourceGroupName <p>Task resource group name.</p>
                     * 
                     */
                    std::string GetResourceGroupName() const;

                    /**
                     * 设置<p>Task resource group name.</p>
                     * @param _resourceGroupName <p>Task resource group name.</p>
                     * 
                     */
                    void SetResourceGroupName(const std::string& _resourceGroupName);

                    /**
                     * 判断参数 ResourceGroupName 是否已赋值
                     * @return ResourceGroupName 是否已赋值
                     * 
                     */
                    bool ResourceGroupNameHasBeenSet() const;

                    /**
                     * 获取<p>Task X coordinate</p>
                     * @return LeftCoordinate <p>Task X coordinate</p>
                     * 
                     */
                    double GetLeftCoordinate() const;

                    /**
                     * 设置<p>Task X coordinate</p>
                     * @param _leftCoordinate <p>Task X coordinate</p>
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
                     * 获取<p>Task Y-axis coordinate</p>
                     * @return TopCoordinate <p>Task Y-axis coordinate</p>
                     * 
                     */
                    double GetTopCoordinate() const;

                    /**
                     * 设置<p>Task Y-axis coordinate</p>
                     * @param _topCoordinate <p>Task Y-axis coordinate</p>
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
                     * 获取<p>Task retry policy</p>
                     * @return TaskRetryStrategy <p>Task retry policy</p>
                     * 
                     */
                    TaskRetryStrategy GetTaskRetryStrategy() const;

                    /**
                     * 设置<p>Task retry policy</p>
                     * @param _taskRetryStrategy <p>Task retry policy</p>
                     * 
                     */
                    void SetTaskRetryStrategy(const TaskRetryStrategy& _taskRetryStrategy);

                    /**
                     * 判断参数 TaskRetryStrategy 是否已赋值
                     * @return TaskRetryStrategy 是否已赋值
                     * 
                     */
                    bool TaskRetryStrategyHasBeenSet() const;

                    /**
                     * 获取<p>Task dependency run conditions</p><p>ALL_SUCCESS: All successful: All upstream dependency tasks have been executed and succeeded<br>ONE_SUCCESS: At least one successful: At least one upstream dependency task succeeded<br>NONE_FAILED: No failure currently: No dependency task failed, and at least one dependency task is running<br>ALL_DONE: All completed: All upstream dependency tasks have been executed and completed (regardless of success or failure)<br>ONE_FAILED: At least one failed: At least one upstream dependency task failed<br>ALL_FAILED: All failed: All upstream dependency tasks failed<br>ALL_DONE_AT_LEAST_ONE_SUCCESS: All upstream completed and at least one successful: When all upstream dependency tasks reach a final state, a dependency check is performed. If at least one succeeded, the dependency check passes; otherwise, the run is skipped<br>ALL_SKIPPED: All upstream completed, no skipped run: When all upstream dependency tasks reach a final state, a dependency check is performed. If all upstream states are successful, failed, or upstream failed state, the dependency check passes; otherwise, the run is skipped<br>ONE_DONE: At least one completed: Once at least one upstream task is completed, a dependency check is performed, and the dependency check passes; otherwise, it keeps waiting for upstream<br>ALL_DONE_NONE_FAILED_AT_LEAST_ONE_SUCCESS: All upstream completed, none failed, at least one successful: When all upstream dependency tasks reach a final state, a dependency check is performed. If no upstream task failed and at least one succeeded, the dependency check passes; otherwise, the run is skipped<br>NONE_SKIPPED: All upstream completed, no skipped run: When all upstream dependency tasks reach a final state, a dependency check is performed. If all upstream states are successful, failed, or upstream failed state, the dependency check passes; otherwise, the run is skipped<br>ALL_DONE_AT_LEAST_ONE_FAILED: All upstream completed and at least one failed: When all upstream dependency tasks reach a final state, a dependency check is performed. If at least one failed, the dependency check passes; otherwise, the run is skipped<br>ADVANCED: Configured when the run condition is in advanced mode</p>
                     * @return DependOnRunCondition <p>Task dependency run conditions</p><p>ALL_SUCCESS: All successful: All upstream dependency tasks have been executed and succeeded<br>ONE_SUCCESS: At least one successful: At least one upstream dependency task succeeded<br>NONE_FAILED: No failure currently: No dependency task failed, and at least one dependency task is running<br>ALL_DONE: All completed: All upstream dependency tasks have been executed and completed (regardless of success or failure)<br>ONE_FAILED: At least one failed: At least one upstream dependency task failed<br>ALL_FAILED: All failed: All upstream dependency tasks failed<br>ALL_DONE_AT_LEAST_ONE_SUCCESS: All upstream completed and at least one successful: When all upstream dependency tasks reach a final state, a dependency check is performed. If at least one succeeded, the dependency check passes; otherwise, the run is skipped<br>ALL_SKIPPED: All upstream completed, no skipped run: When all upstream dependency tasks reach a final state, a dependency check is performed. If all upstream states are successful, failed, or upstream failed state, the dependency check passes; otherwise, the run is skipped<br>ONE_DONE: At least one completed: Once at least one upstream task is completed, a dependency check is performed, and the dependency check passes; otherwise, it keeps waiting for upstream<br>ALL_DONE_NONE_FAILED_AT_LEAST_ONE_SUCCESS: All upstream completed, none failed, at least one successful: When all upstream dependency tasks reach a final state, a dependency check is performed. If no upstream task failed and at least one succeeded, the dependency check passes; otherwise, the run is skipped<br>NONE_SKIPPED: All upstream completed, no skipped run: When all upstream dependency tasks reach a final state, a dependency check is performed. If all upstream states are successful, failed, or upstream failed state, the dependency check passes; otherwise, the run is skipped<br>ALL_DONE_AT_LEAST_ONE_FAILED: All upstream completed and at least one failed: When all upstream dependency tasks reach a final state, a dependency check is performed. If at least one failed, the dependency check passes; otherwise, the run is skipped<br>ADVANCED: Configured when the run condition is in advanced mode</p>
                     * 
                     */
                    std::string GetDependOnRunCondition() const;

                    /**
                     * 设置<p>Task dependency run conditions</p><p>ALL_SUCCESS: All successful: All upstream dependency tasks have been executed and succeeded<br>ONE_SUCCESS: At least one successful: At least one upstream dependency task succeeded<br>NONE_FAILED: No failure currently: No dependency task failed, and at least one dependency task is running<br>ALL_DONE: All completed: All upstream dependency tasks have been executed and completed (regardless of success or failure)<br>ONE_FAILED: At least one failed: At least one upstream dependency task failed<br>ALL_FAILED: All failed: All upstream dependency tasks failed<br>ALL_DONE_AT_LEAST_ONE_SUCCESS: All upstream completed and at least one successful: When all upstream dependency tasks reach a final state, a dependency check is performed. If at least one succeeded, the dependency check passes; otherwise, the run is skipped<br>ALL_SKIPPED: All upstream completed, no skipped run: When all upstream dependency tasks reach a final state, a dependency check is performed. If all upstream states are successful, failed, or upstream failed state, the dependency check passes; otherwise, the run is skipped<br>ONE_DONE: At least one completed: Once at least one upstream task is completed, a dependency check is performed, and the dependency check passes; otherwise, it keeps waiting for upstream<br>ALL_DONE_NONE_FAILED_AT_LEAST_ONE_SUCCESS: All upstream completed, none failed, at least one successful: When all upstream dependency tasks reach a final state, a dependency check is performed. If no upstream task failed and at least one succeeded, the dependency check passes; otherwise, the run is skipped<br>NONE_SKIPPED: All upstream completed, no skipped run: When all upstream dependency tasks reach a final state, a dependency check is performed. If all upstream states are successful, failed, or upstream failed state, the dependency check passes; otherwise, the run is skipped<br>ALL_DONE_AT_LEAST_ONE_FAILED: All upstream completed and at least one failed: When all upstream dependency tasks reach a final state, a dependency check is performed. If at least one failed, the dependency check passes; otherwise, the run is skipped<br>ADVANCED: Configured when the run condition is in advanced mode</p>
                     * @param _dependOnRunCondition <p>Task dependency run conditions</p><p>ALL_SUCCESS: All successful: All upstream dependency tasks have been executed and succeeded<br>ONE_SUCCESS: At least one successful: At least one upstream dependency task succeeded<br>NONE_FAILED: No failure currently: No dependency task failed, and at least one dependency task is running<br>ALL_DONE: All completed: All upstream dependency tasks have been executed and completed (regardless of success or failure)<br>ONE_FAILED: At least one failed: At least one upstream dependency task failed<br>ALL_FAILED: All failed: All upstream dependency tasks failed<br>ALL_DONE_AT_LEAST_ONE_SUCCESS: All upstream completed and at least one successful: When all upstream dependency tasks reach a final state, a dependency check is performed. If at least one succeeded, the dependency check passes; otherwise, the run is skipped<br>ALL_SKIPPED: All upstream completed, no skipped run: When all upstream dependency tasks reach a final state, a dependency check is performed. If all upstream states are successful, failed, or upstream failed state, the dependency check passes; otherwise, the run is skipped<br>ONE_DONE: At least one completed: Once at least one upstream task is completed, a dependency check is performed, and the dependency check passes; otherwise, it keeps waiting for upstream<br>ALL_DONE_NONE_FAILED_AT_LEAST_ONE_SUCCESS: All upstream completed, none failed, at least one successful: When all upstream dependency tasks reach a final state, a dependency check is performed. If no upstream task failed and at least one succeeded, the dependency check passes; otherwise, the run is skipped<br>NONE_SKIPPED: All upstream completed, no skipped run: When all upstream dependency tasks reach a final state, a dependency check is performed. If all upstream states are successful, failed, or upstream failed state, the dependency check passes; otherwise, the run is skipped<br>ALL_DONE_AT_LEAST_ONE_FAILED: All upstream completed and at least one failed: When all upstream dependency tasks reach a final state, a dependency check is performed. If at least one failed, the dependency check passes; otherwise, the run is skipped<br>ADVANCED: Configured when the run condition is in advanced mode</p>
                     * 
                     */
                    void SetDependOnRunCondition(const std::string& _dependOnRunCondition);

                    /**
                     * 判断参数 DependOnRunCondition 是否已赋值
                     * @return DependOnRunCondition 是否已赋值
                     * 
                     */
                    bool DependOnRunConditionHasBeenSet() const;

                    /**
                     * 获取<p>Advanced dependency configuration</p>
                     * @return AdvancedDependencyConfig <p>Advanced dependency configuration</p>
                     * 
                     */
                    AdvancedDependencyConfig GetAdvancedDependencyConfig() const;

                    /**
                     * 设置<p>Advanced dependency configuration</p>
                     * @param _advancedDependencyConfig <p>Advanced dependency configuration</p>
                     * 
                     */
                    void SetAdvancedDependencyConfig(const AdvancedDependencyConfig& _advancedDependencyConfig);

                    /**
                     * 判断参数 AdvancedDependencyConfig 是否已赋值
                     * @return AdvancedDependencyConfig 是否已赋值
                     * 
                     */
                    bool AdvancedDependencyConfigHasBeenSet() const;

                    /**
                     * 获取<p>Built-in workflow task node</p>
                     * @return InnerTask <p>Built-in workflow task node</p>
                     * 
                     */
                    WorkflowTaskNodeBrief GetInnerTask() const;

                    /**
                     * 设置<p>Built-in workflow task node</p>
                     * @param _innerTask <p>Built-in workflow task node</p>
                     * 
                     */
                    void SetInnerTask(const WorkflowTaskNodeBrief& _innerTask);

                    /**
                     * 判断参数 InnerTask 是否已赋值
                     * @return InnerTask 是否已赋值
                     * 
                     */
                    bool InnerTaskHasBeenSet() const;

                private:

                    /**
                     * <p>Workflow ID</p>
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * <p>Task ID.</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>Task name.</p>
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * <p>Task Type Name. For details, see the TaskTypeName field description in the data structure TaskType.</p>
                     */
                    std::string m_taskTypeName;
                    bool m_taskTypeNameHasBeenSet;

                    /**
                     * <p>Task dependency list.</p>
                     */
                    std::vector<DependOnBrief> m_dependOnList;
                    bool m_dependOnListHasBeenSet;

                    /**
                     * <p>Task resource group ID.</p>
                     */
                    std::string m_resourceGroupId;
                    bool m_resourceGroupIdHasBeenSet;

                    /**
                     * <p>Task resource group name.</p>
                     */
                    std::string m_resourceGroupName;
                    bool m_resourceGroupNameHasBeenSet;

                    /**
                     * <p>Task X coordinate</p>
                     */
                    double m_leftCoordinate;
                    bool m_leftCoordinateHasBeenSet;

                    /**
                     * <p>Task Y-axis coordinate</p>
                     */
                    double m_topCoordinate;
                    bool m_topCoordinateHasBeenSet;

                    /**
                     * <p>Task retry policy</p>
                     */
                    TaskRetryStrategy m_taskRetryStrategy;
                    bool m_taskRetryStrategyHasBeenSet;

                    /**
                     * <p>Task dependency run conditions</p><p>ALL_SUCCESS: All successful: All upstream dependency tasks have been executed and succeeded<br>ONE_SUCCESS: At least one successful: At least one upstream dependency task succeeded<br>NONE_FAILED: No failure currently: No dependency task failed, and at least one dependency task is running<br>ALL_DONE: All completed: All upstream dependency tasks have been executed and completed (regardless of success or failure)<br>ONE_FAILED: At least one failed: At least one upstream dependency task failed<br>ALL_FAILED: All failed: All upstream dependency tasks failed<br>ALL_DONE_AT_LEAST_ONE_SUCCESS: All upstream completed and at least one successful: When all upstream dependency tasks reach a final state, a dependency check is performed. If at least one succeeded, the dependency check passes; otherwise, the run is skipped<br>ALL_SKIPPED: All upstream completed, no skipped run: When all upstream dependency tasks reach a final state, a dependency check is performed. If all upstream states are successful, failed, or upstream failed state, the dependency check passes; otherwise, the run is skipped<br>ONE_DONE: At least one completed: Once at least one upstream task is completed, a dependency check is performed, and the dependency check passes; otherwise, it keeps waiting for upstream<br>ALL_DONE_NONE_FAILED_AT_LEAST_ONE_SUCCESS: All upstream completed, none failed, at least one successful: When all upstream dependency tasks reach a final state, a dependency check is performed. If no upstream task failed and at least one succeeded, the dependency check passes; otherwise, the run is skipped<br>NONE_SKIPPED: All upstream completed, no skipped run: When all upstream dependency tasks reach a final state, a dependency check is performed. If all upstream states are successful, failed, or upstream failed state, the dependency check passes; otherwise, the run is skipped<br>ALL_DONE_AT_LEAST_ONE_FAILED: All upstream completed and at least one failed: When all upstream dependency tasks reach a final state, a dependency check is performed. If at least one failed, the dependency check passes; otherwise, the run is skipped<br>ADVANCED: Configured when the run condition is in advanced mode</p>
                     */
                    std::string m_dependOnRunCondition;
                    bool m_dependOnRunConditionHasBeenSet;

                    /**
                     * <p>Advanced dependency configuration</p>
                     */
                    AdvancedDependencyConfig m_advancedDependencyConfig;
                    bool m_advancedDependencyConfigHasBeenSet;

                    /**
                     * <p>Built-in workflow task node</p>
                     */
                    WorkflowTaskNodeBrief m_innerTask;
                    bool m_innerTaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKFLOWTASKNODEBRIEF_H_
