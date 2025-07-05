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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGEQASINGLEWORKFLOW_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGEQASINGLEWORKFLOW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Specifies the single workflow configuration in Q&A knowledge library single workflow mode.
                */
                class KnowledgeQaSingleWorkflow : public AbstractModel
                {
                public:
                    KnowledgeQaSingleWorkflow();
                    ~KnowledgeQaSingleWorkflow() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Workflow description.
                     * @return WorkflowDesc Workflow description.
                     * 
                     */
                    std::string GetWorkflowDesc() const;

                    /**
                     * 设置Workflow description.
                     * @param _workflowDesc Workflow description.
                     * 
                     */
                    void SetWorkflowDesc(const std::string& _workflowDesc);

                    /**
                     * 判断参数 WorkflowDesc 是否已赋值
                     * @return WorkflowDesc 是否已赋值
                     * 
                     */
                    bool WorkflowDescHasBeenSet() const;

                    /**
                     * 获取Workflow status, publishing status (UNPUBLISHED; PUBLISHING; PUBLISHED; FAIL).
                     * @return Status Workflow status, publishing status (UNPUBLISHED; PUBLISHING; PUBLISHED; FAIL).
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Workflow status, publishing status (UNPUBLISHED; PUBLISHING; PUBLISHED; FAIL).
                     * @param _status Workflow status, publishing status (UNPUBLISHED; PUBLISHING; PUBLISHED; FAIL).
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Whether to enable workflow.
                     * @return IsEnable Whether to enable workflow.
                     * 
                     */
                    bool GetIsEnable() const;

                    /**
                     * 设置Whether to enable workflow.
                     * @param _isEnable Whether to enable workflow.
                     * 
                     */
                    void SetIsEnable(const bool& _isEnable);

                    /**
                     * 判断参数 IsEnable 是否已赋值
                     * @return IsEnable 是否已赋值
                     * 
                     */
                    bool IsEnableHasBeenSet() const;

                    /**
                     * 获取Whether to enable asynchronous call of the workflow.
                     * @return AsyncWorkflow Whether to enable asynchronous call of the workflow.
                     * 
                     */
                    bool GetAsyncWorkflow() const;

                    /**
                     * 设置Whether to enable asynchronous call of the workflow.
                     * @param _asyncWorkflow Whether to enable asynchronous call of the workflow.
                     * 
                     */
                    void SetAsyncWorkflow(const bool& _asyncWorkflow);

                    /**
                     * 判断参数 AsyncWorkflow 是否已赋值
                     * @return AsyncWorkflow 是否已赋值
                     * 
                     */
                    bool AsyncWorkflowHasBeenSet() const;

                private:

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
                     * Workflow description.
                     */
                    std::string m_workflowDesc;
                    bool m_workflowDescHasBeenSet;

                    /**
                     * Workflow status, publishing status (UNPUBLISHED; PUBLISHING; PUBLISHED; FAIL).
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Whether to enable workflow.
                     */
                    bool m_isEnable;
                    bool m_isEnableHasBeenSet;

                    /**
                     * Whether to enable asynchronous call of the workflow.
                     */
                    bool m_asyncWorkflow;
                    bool m_asyncWorkflowHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGEQASINGLEWORKFLOW_H_
