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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_DELETEWORKFLOWREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_DELETEWORKFLOWREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DeleteWorkflow request structure.
                */
                class DeleteWorkflowRequest : public AbstractModel
                {
                public:
                    DeleteWorkflowRequest();
                    ~DeleteWorkflowRequest() = default;
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
                     * 获取Workflow id.
                     * @return WorkflowId Workflow id.
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置Workflow id.
                     * @param _workflowId Workflow id.
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
                     * Project ID.

                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Workflow id.
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_DELETEWORKFLOWREQUEST_H_
