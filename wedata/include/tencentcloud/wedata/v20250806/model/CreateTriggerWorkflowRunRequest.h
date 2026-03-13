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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATETRIGGERWORKFLOWRUNREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATETRIGGERWORKFLOWRUNREQUEST_H_

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
                * CreateTriggerWorkflowRun request structure.
                */
                class CreateTriggerWorkflowRunRequest : public AbstractModel
                {
                public:
                    CreateTriggerWorkflowRunRequest();
                    ~CreateTriggerWorkflowRunRequest() = default;
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
                     * 获取Custom running parameters. if empty or null, use the latest configuration of the workflow.
                     * @return AdvancedParams Custom running parameters. if empty or null, use the latest configuration of the workflow.
                     * 
                     */
                    std::vector<SchedulingParameter> GetAdvancedParams() const;

                    /**
                     * 设置Custom running parameters. if empty or null, use the latest configuration of the workflow.
                     * @param _advancedParams Custom running parameters. if empty or null, use the latest configuration of the workflow.
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
                     * 获取This time, run the specified task ID set. if it is null or empty, run all.
                     * @return TaskIds This time, run the specified task ID set. if it is null or empty, run all.
                     * 
                     */
                    std::vector<std::string> GetTaskIds() const;

                    /**
                     * 设置This time, run the specified task ID set. if it is null or empty, run all.
                     * @param _taskIds This time, run the specified task ID set. if it is null or empty, run all.
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
                     * 获取Specified scheduling resource group id. uses the original resource group by default if left empty.
                     * @return SchedulingResourceGroupId Specified scheduling resource group id. uses the original resource group by default if left empty.
                     * 
                     */
                    std::string GetSchedulingResourceGroupId() const;

                    /**
                     * 设置Specified scheduling resource group id. uses the original resource group by default if left empty.
                     * @param _schedulingResourceGroupId Specified scheduling resource group id. uses the original resource group by default if left empty.
                     * 
                     */
                    void SetSchedulingResourceGroupId(const std::string& _schedulingResourceGroupId);

                    /**
                     * 判断参数 SchedulingResourceGroupId 是否已赋值
                     * @return SchedulingResourceGroupId 是否已赋值
                     * 
                     */
                    bool SchedulingResourceGroupIdHasBeenSet() const;

                    /**
                     * 获取Specified integration resource group id. uses the original resource group if left empty.
                     * @return IntegrationResourceGroupId Specified integration resource group id. uses the original resource group if left empty.
                     * 
                     */
                    std::string GetIntegrationResourceGroupId() const;

                    /**
                     * 设置Specified integration resource group id. uses the original resource group if left empty.
                     * @param _integrationResourceGroupId Specified integration resource group id. uses the original resource group if left empty.
                     * 
                     */
                    void SetIntegrationResourceGroupId(const std::string& _integrationResourceGroupId);

                    /**
                     * 判断参数 IntegrationResourceGroupId 是否已赋值
                     * @return IntegrationResourceGroupId 是否已赋值
                     * 
                     */
                    bool IntegrationResourceGroupIdHasBeenSet() const;

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
                     * Custom running parameters. if empty or null, use the latest configuration of the workflow.
                     */
                    std::vector<SchedulingParameter> m_advancedParams;
                    bool m_advancedParamsHasBeenSet;

                    /**
                     * This time, run the specified task ID set. if it is null or empty, run all.
                     */
                    std::vector<std::string> m_taskIds;
                    bool m_taskIdsHasBeenSet;

                    /**
                     * Specified scheduling resource group id. uses the original resource group by default if left empty.
                     */
                    std::string m_schedulingResourceGroupId;
                    bool m_schedulingResourceGroupIdHasBeenSet;

                    /**
                     * Specified integration resource group id. uses the original resource group if left empty.
                     */
                    std::string m_integrationResourceGroupId;
                    bool m_integrationResourceGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATETRIGGERWORKFLOWRUNREQUEST_H_
