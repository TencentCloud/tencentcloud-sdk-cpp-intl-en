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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_RERUNTRIGGERWORKFLOWRUNASYNCREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_RERUNTRIGGERWORKFLOWRUNASYNCREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/SchedulingParameter.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * RerunTriggerWorkflowRunAsync request structure.
                */
                class RerunTriggerWorkflowRunAsyncRequest : public AbstractModel
                {
                public:
                    RerunTriggerWorkflowRunAsyncRequest();
                    ~RerunTriggerWorkflowRunAsyncRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Project ID.
                     * @return ProjectId Project ID.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID.
                     * @param _projectId Project ID.
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
                     * 获取Running ID of the workflow.
                     * @return WorkflowExecutionId Running ID of the workflow.
                     * 
                     */
                    std::string GetWorkflowExecutionId() const;

                    /**
                     * 设置Running ID of the workflow.
                     * @param _workflowExecutionId Running ID of the workflow.
                     * 
                     */
                    void SetWorkflowExecutionId(const std::string& _workflowExecutionId);

                    /**
                     * 判断参数 WorkflowExecutionId 是否已赋值
                     * @return WorkflowExecutionId 是否已赋值
                     * 
                     */
                    bool WorkflowExecutionIdHasBeenSet() const;

                    /**
                     * 获取Running mode: ordinary running defaults to all parameters: 1, advanced execution selectable task scope and running parameters: 2.
                     * @return ExecuteType Running mode: ordinary running defaults to all parameters: 1, advanced execution selectable task scope and running parameters: 2.
                     * 
                     */
                    std::string GetExecuteType() const;

                    /**
                     * 设置Running mode: ordinary running defaults to all parameters: 1, advanced execution selectable task scope and running parameters: 2.
                     * @param _executeType Running mode: ordinary running defaults to all parameters: 1, advanced execution selectable task scope and running parameters: 2.
                     * 
                     */
                    void SetExecuteType(const std::string& _executeType);

                    /**
                     * 判断参数 ExecuteType 是否已赋值
                     * @return ExecuteType 是否已赋值
                     * 
                     */
                    bool ExecuteTypeHasBeenSet() const;

                    /**
                     * 获取Custom running parameters filled in when the running type is advanced execution.
                     * @return AdvancedParams Custom running parameters filled in when the running type is advanced execution.
                     * 
                     */
                    std::vector<SchedulingParameter> GetAdvancedParams() const;

                    /**
                     * 设置Custom running parameters filled in when the running type is advanced execution.
                     * @param _advancedParams Custom running parameters filled in when the running type is advanced execution.
                     * 
                     */
                    void SetAdvancedParams(const std::vector<SchedulingParameter>& _advancedParams);

                    /**
                     * 判断参数 AdvancedParams 是否已赋值
                     * @return AdvancedParams 是否已赋值
                     * 
                     */
                    bool AdvancedParamsHasBeenSet() const;

                    /**
                     * 获取Advanced execution in mode requires the specified task ID set this time.
                     * @return TaskIds Advanced execution in mode requires the specified task ID set this time.
                     * 
                     */
                    std::vector<std::string> GetTaskIds() const;

                    /**
                     * 设置Advanced execution in mode requires the specified task ID set this time.
                     * @param _taskIds Advanced execution in mode requires the specified task ID set this time.
                     * 
                     */
                    void SetTaskIds(const std::vector<std::string>& _taskIds);

                    /**
                     * 判断参数 TaskIds 是否已赋值
                     * @return TaskIds 是否已赋值
                     * 
                     */
                    bool TaskIdsHasBeenSet() const;

                    /**
                     * 获取Specify a scheduling resource group. uses the original scheduling resource group in the default configurations when left empty.
                     * @return SchedulingResourceGroup Specify a scheduling resource group. uses the original scheduling resource group in the default configurations when left empty.
                     * 
                     */
                    std::string GetSchedulingResourceGroup() const;

                    /**
                     * 设置Specify a scheduling resource group. uses the original scheduling resource group in the default configurations when left empty.
                     * @param _schedulingResourceGroup Specify a scheduling resource group. uses the original scheduling resource group in the default configurations when left empty.
                     * 
                     */
                    void SetSchedulingResourceGroup(const std::string& _schedulingResourceGroup);

                    /**
                     * 判断参数 SchedulingResourceGroup 是否已赋值
                     * @return SchedulingResourceGroup 是否已赋值
                     * 
                     */
                    bool SchedulingResourceGroupHasBeenSet() const;

                    /**
                     * 获取Specify the integration resource group. uses the original integration resource group in configurations by default when empty.
                     * @return IntegrationResourceGroup Specify the integration resource group. uses the original integration resource group in configurations by default when empty.
                     * 
                     */
                    std::string GetIntegrationResourceGroup() const;

                    /**
                     * 设置Specify the integration resource group. uses the original integration resource group in configurations by default when empty.
                     * @param _integrationResourceGroup Specify the integration resource group. uses the original integration resource group in configurations by default when empty.
                     * 
                     */
                    void SetIntegrationResourceGroup(const std::string& _integrationResourceGroup);

                    /**
                     * 判断参数 IntegrationResourceGroup 是否已赋值
                     * @return IntegrationResourceGroup 是否已赋值
                     * 
                     */
                    bool IntegrationResourceGroupHasBeenSet() const;

                private:

                    /**
                     * Project ID.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Workflow ID.
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * Running ID of the workflow.
                     */
                    std::string m_workflowExecutionId;
                    bool m_workflowExecutionIdHasBeenSet;

                    /**
                     * Running mode: ordinary running defaults to all parameters: 1, advanced execution selectable task scope and running parameters: 2.
                     */
                    std::string m_executeType;
                    bool m_executeTypeHasBeenSet;

                    /**
                     * Custom running parameters filled in when the running type is advanced execution.
                     */
                    std::vector<SchedulingParameter> m_advancedParams;
                    bool m_advancedParamsHasBeenSet;

                    /**
                     * Advanced execution in mode requires the specified task ID set this time.
                     */
                    std::vector<std::string> m_taskIds;
                    bool m_taskIdsHasBeenSet;

                    /**
                     * Specify a scheduling resource group. uses the original scheduling resource group in the default configurations when left empty.
                     */
                    std::string m_schedulingResourceGroup;
                    bool m_schedulingResourceGroupHasBeenSet;

                    /**
                     * Specify the integration resource group. uses the original integration resource group in configurations by default when empty.
                     */
                    std::string m_integrationResourceGroup;
                    bool m_integrationResourceGroupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_RERUNTRIGGERWORKFLOWRUNASYNCREQUEST_H_
