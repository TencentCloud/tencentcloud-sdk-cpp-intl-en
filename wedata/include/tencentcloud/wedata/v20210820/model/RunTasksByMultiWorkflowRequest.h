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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_RUNTASKSBYMULTIWORKFLOWREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_RUNTASKSBYMULTIWORKFLOWREQUEST_H_

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
                * RunTasksByMultiWorkflow request structure.
                */
                class RunTasksByMultiWorkflowRequest : public AbstractModel
                {
                public:
                    RunTasksByMultiWorkflowRequest();
                    ~RunTasksByMultiWorkflowRequest() = default;
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
                     * 获取Workflow ID List
                     * @return WorkflowIds Workflow ID List
                     * 
                     */
                    std::vector<std::string> GetWorkflowIds() const;

                    /**
                     * 设置Workflow ID List
                     * @param _workflowIds Workflow ID List
                     * 
                     */
                    void SetWorkflowIds(const std::vector<std::string>& _workflowIds);

                    /**
                     * 判断参数 WorkflowIds 是否已赋值
                     * @return WorkflowIds 是否已赋值
                     * 
                     */
                    bool WorkflowIdsHasBeenSet() const;

                    /**
                     * 获取Whether to supplement intermediate instances 0. Do not supplement 1. Supplement instance
                     * @return EnableMakeUp Whether to supplement intermediate instances 0. Do not supplement 1. Supplement instance
                     * 
                     */
                    uint64_t GetEnableMakeUp() const;

                    /**
                     * 设置Whether to supplement intermediate instances 0. Do not supplement 1. Supplement instance
                     * @param _enableMakeUp Whether to supplement intermediate instances 0. Do not supplement 1. Supplement instance
                     * 
                     */
                    void SetEnableMakeUp(const uint64_t& _enableMakeUp);

                    /**
                     * 判断参数 EnableMakeUp 是否已赋值
                     * @return EnableMakeUp 是否已赋值
                     * 
                     */
                    bool EnableMakeUpHasBeenSet() const;

                private:

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Workflow ID List
                     */
                    std::vector<std::string> m_workflowIds;
                    bool m_workflowIdsHasBeenSet;

                    /**
                     * Whether to supplement intermediate instances 0. Do not supplement 1. Supplement instance
                     */
                    uint64_t m_enableMakeUp;
                    bool m_enableMakeUpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_RUNTASKSBYMULTIWORKFLOWREQUEST_H_
