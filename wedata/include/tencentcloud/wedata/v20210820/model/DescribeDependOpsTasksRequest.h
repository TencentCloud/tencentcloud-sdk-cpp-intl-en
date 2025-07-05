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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDEPENDOPSTASKSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDEPENDOPSTASKSREQUEST_H_

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
                * DescribeDependOpsTasks request structure.
                */
                class DescribeDependOpsTasksRequest : public AbstractModel
                {
                public:
                    DescribeDependOpsTasksRequest();
                    ~DescribeDependOpsTasksRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Upstream/Downstream Levels 1-6
                     * @return Deep Upstream/Downstream Levels 1-6
                     * 
                     */
                    uint64_t GetDeep() const;

                    /**
                     * 设置Upstream/Downstream Levels 1-6
                     * @param _deep Upstream/Downstream Levels 1-6
                     * 
                     */
                    void SetDeep(const uint64_t& _deep);

                    /**
                     * 判断参数 Deep 是否已赋值
                     * @return Deep 是否已赋值
                     * 
                     */
                    bool DeepHasBeenSet() const;

                    /**
                     * 获取1: Indicates querying upstream nodes; 0: Indicates querying downstream nodes; 2: Indicates querying both upstream and downstream nodes
                     * @return Up 1: Indicates querying upstream nodes; 0: Indicates querying downstream nodes; 2: Indicates querying both upstream and downstream nodes
                     * 
                     */
                    uint64_t GetUp() const;

                    /**
                     * 设置1: Indicates querying upstream nodes; 0: Indicates querying downstream nodes; 2: Indicates querying both upstream and downstream nodes
                     * @param _up 1: Indicates querying upstream nodes; 0: Indicates querying downstream nodes; 2: Indicates querying both upstream and downstream nodes
                     * 
                     */
                    void SetUp(const uint64_t& _up);

                    /**
                     * 判断参数 Up 是否已赋值
                     * @return Up 是否已赋值
                     * 
                     */
                    bool UpHasBeenSet() const;

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
                     * 获取Task Workflow ID
                     * @return WorkflowId Task Workflow ID
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置Task Workflow ID
                     * @param _workflowId Task Workflow ID
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
                     * Task ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Upstream/Downstream Levels 1-6
                     */
                    uint64_t m_deep;
                    bool m_deepHasBeenSet;

                    /**
                     * 1: Indicates querying upstream nodes; 0: Indicates querying downstream nodes; 2: Indicates querying both upstream and downstream nodes
                     */
                    uint64_t m_up;
                    bool m_upHasBeenSet;

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Task Workflow ID
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDEPENDOPSTASKSREQUEST_H_
