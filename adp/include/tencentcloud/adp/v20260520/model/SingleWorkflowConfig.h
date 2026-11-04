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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_SINGLEWORKFLOWCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_SINGLEWORKFLOWCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Single workflow configuration
                */
                class SingleWorkflowConfig : public AbstractModel
                {
                public:
                    SingleWorkflowConfig();
                    ~SingleWorkflowConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Whether to enable async workflow</p>
                     * @return AsyncWorkflow <p>Whether to enable async workflow</p>
                     * 
                     */
                    bool GetAsyncWorkflow() const;

                    /**
                     * 设置<p>Whether to enable async workflow</p>
                     * @param _asyncWorkflow <p>Whether to enable async workflow</p>
                     * 
                     */
                    void SetAsyncWorkflow(const bool& _asyncWorkflow);

                    /**
                     * 判断参数 AsyncWorkflow 是否已赋值
                     * @return AsyncWorkflow 是否已赋值
                     * 
                     */
                    bool AsyncWorkflowHasBeenSet() const;

                    /**
                     * 获取<p>Status Release status (UNPUBLISHED: to be released PUBLISHING: publishing PUBLISHED: released PUBLISHED_FAIL: release failure; DRAFT: to be debugged)</p>
                     * @return Status <p>Status Release status (UNPUBLISHED: to be released PUBLISHING: publishing PUBLISHED: released PUBLISHED_FAIL: release failure; DRAFT: to be debugged)</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Status Release status (UNPUBLISHED: to be released PUBLISHING: publishing PUBLISHED: released PUBLISHED_FAIL: release failure; DRAFT: to be debugged)</p>
                     * @param _status <p>Status Release status (UNPUBLISHED: to be released PUBLISHING: publishing PUBLISHED: released PUBLISHED_FAIL: release failure; DRAFT: to be debugged)</p>
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
                     * 获取<p>Workflow description</p>
                     * @return WorkflowDescription <p>Workflow description</p>
                     * 
                     */
                    std::string GetWorkflowDescription() const;

                    /**
                     * 设置<p>Workflow description</p>
                     * @param _workflowDescription <p>Workflow description</p>
                     * 
                     */
                    void SetWorkflowDescription(const std::string& _workflowDescription);

                    /**
                     * 判断参数 WorkflowDescription 是否已赋值
                     * @return WorkflowDescription 是否已赋值
                     * 
                     */
                    bool WorkflowDescriptionHasBeenSet() const;

                    /**
                     * 获取<p>Workflow Id</p>
                     * @return WorkflowId <p>Workflow Id</p>
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置<p>Workflow Id</p>
                     * @param _workflowId <p>Workflow Id</p>
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
                     * 获取<p>Workflow name.</p>
                     * @return WorkflowName <p>Workflow name.</p>
                     * 
                     */
                    std::string GetWorkflowName() const;

                    /**
                     * 设置<p>Workflow name.</p>
                     * @param _workflowName <p>Workflow name.</p>
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
                     * 获取<p>Whether the workflow is enabled</p>
                     * @return Enabled <p>Whether the workflow is enabled</p>
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置<p>Whether the workflow is enabled</p>
                     * @param _enabled <p>Whether the workflow is enabled</p>
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                private:

                    /**
                     * <p>Whether to enable async workflow</p>
                     */
                    bool m_asyncWorkflow;
                    bool m_asyncWorkflowHasBeenSet;

                    /**
                     * <p>Status Release status (UNPUBLISHED: to be released PUBLISHING: publishing PUBLISHED: released PUBLISHED_FAIL: release failure; DRAFT: to be debugged)</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Workflow description</p>
                     */
                    std::string m_workflowDescription;
                    bool m_workflowDescriptionHasBeenSet;

                    /**
                     * <p>Workflow Id</p>
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * <p>Workflow name.</p>
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * <p>Whether the workflow is enabled</p>
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_SINGLEWORKFLOWCONFIG_H_
