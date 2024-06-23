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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBESCHEDULERINSTANCESTATUSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBESCHEDULERINSTANCESTATUSREQUEST_H_

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
                * DescribeSchedulerInstanceStatus request structure.
                */
                class DescribeSchedulerInstanceStatusRequest : public AbstractModel
                {
                public:
                    DescribeSchedulerInstanceStatusRequest();
                    ~DescribeSchedulerInstanceStatusRequest() = default;
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
                     * 获取Task Type ID
                     * @return TaskTypeId Task Type ID
                     * 
                     */
                    std::string GetTaskTypeId() const;

                    /**
                     * 设置Task Type ID
                     * @param _taskTypeId Task Type ID
                     * 
                     */
                    void SetTaskTypeId(const std::string& _taskTypeId);

                    /**
                     * 判断参数 TaskTypeId 是否已赋值
                     * @return TaskTypeId 是否已赋值
                     * 
                     */
                    bool TaskTypeIdHasBeenSet() const;

                    /**
                     * 获取Execution Resource Group ID
                     * @return ExecutionGroupId Execution Resource Group ID
                     * 
                     */
                    std::string GetExecutionGroupId() const;

                    /**
                     * 设置Execution Resource Group ID
                     * @param _executionGroupId Execution Resource Group ID
                     * 
                     */
                    void SetExecutionGroupId(const std::string& _executionGroupId);

                    /**
                     * 判断参数 ExecutionGroupId 是否已赋值
                     * @return ExecutionGroupId 是否已赋值
                     * 
                     */
                    bool ExecutionGroupIdHasBeenSet() const;

                    /**
                     * 获取Execution Resource Group Name
                     * @return ExecutionGroupName Execution Resource Group Name
                     * 
                     */
                    std::string GetExecutionGroupName() const;

                    /**
                     * 设置Execution Resource Group Name
                     * @param _executionGroupName Execution Resource Group Name
                     * 
                     */
                    void SetExecutionGroupName(const std::string& _executionGroupName);

                    /**
                     * 判断参数 ExecutionGroupName 是否已赋值
                     * @return ExecutionGroupName 是否已赋值
                     * 
                     */
                    bool ExecutionGroupNameHasBeenSet() const;

                    /**
                     * 获取Start Time
                     * @return StartTime Start Time
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start Time
                     * @param _startTime Start Time
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
                     * 获取End time
                     * @return EndTime End time
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time
                     * @param _endTime End time
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
                     * 获取Person in Charge
                     * @return InCharge Person in Charge
                     * 
                     */
                    std::string GetInCharge() const;

                    /**
                     * 设置Person in Charge
                     * @param _inCharge Person in Charge
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

                private:

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Task Type ID
                     */
                    std::string m_taskTypeId;
                    bool m_taskTypeIdHasBeenSet;

                    /**
                     * Execution Resource Group ID
                     */
                    std::string m_executionGroupId;
                    bool m_executionGroupIdHasBeenSet;

                    /**
                     * Execution Resource Group Name
                     */
                    std::string m_executionGroupName;
                    bool m_executionGroupNameHasBeenSet;

                    /**
                     * Start Time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Person in Charge
                     */
                    std::string m_inCharge;
                    bool m_inChargeHasBeenSet;

                    /**
                     * Workflow ID
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBESCHEDULERINSTANCESTATUSREQUEST_H_
