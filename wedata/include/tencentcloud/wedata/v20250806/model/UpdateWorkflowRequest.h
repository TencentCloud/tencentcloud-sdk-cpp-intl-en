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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATEWORKFLOWREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATEWORKFLOWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/ParamInfo.h>
#include <tencentcloud/wedata/v20250806/model/WorkflowSchedulerConfigurationInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * UpdateWorkflow request structure.
                */
                class UpdateWorkflowRequest : public AbstractModel
                {
                public:
                    UpdateWorkflowRequest();
                    ~UpdateWorkflowRequest() = default;
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
                     * 获取Owner ID.
                     * @return OwnerUin Owner ID.
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置Owner ID.
                     * @param _ownerUin Owner ID.
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取Remarks.
                     * @return WorkflowDesc Remarks.
                     * 
                     */
                    std::string GetWorkflowDesc() const;

                    /**
                     * 设置Remarks.
                     * @param _workflowDesc Remarks.
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
                     * 获取Workflow parameter list.
                     * @return WorkflowParams Workflow parameter list.
                     * 
                     */
                    std::vector<ParamInfo> GetWorkflowParams() const;

                    /**
                     * 设置Workflow parameter list.
                     * @param _workflowParams Workflow parameter list.
                     * 
                     */
                    void SetWorkflowParams(const std::vector<ParamInfo>& _workflowParams);

                    /**
                     * 判断参数 WorkflowParams 是否已赋值
                     * @return WorkflowParams 是否已赋值
                     * 
                     */
                    bool WorkflowParamsHasBeenSet() const;

                    /**
                     * 获取Specifies unified scheduling parameters.
                     * @return WorkflowSchedulerConfiguration Specifies unified scheduling parameters.
                     * 
                     */
                    WorkflowSchedulerConfigurationInfo GetWorkflowSchedulerConfiguration() const;

                    /**
                     * 设置Specifies unified scheduling parameters.
                     * @param _workflowSchedulerConfiguration Specifies unified scheduling parameters.
                     * 
                     */
                    void SetWorkflowSchedulerConfiguration(const WorkflowSchedulerConfigurationInfo& _workflowSchedulerConfiguration);

                    /**
                     * 判断参数 WorkflowSchedulerConfiguration 是否已赋值
                     * @return WorkflowSchedulerConfiguration 是否已赋值
                     * 
                     */
                    bool WorkflowSchedulerConfigurationHasBeenSet() const;

                    /**
                     * 获取BundleId item.
                     * @return BundleId BundleId item.
                     * 
                     */
                    std::string GetBundleId() const;

                    /**
                     * 设置BundleId item.
                     * @param _bundleId BundleId item.
                     * 
                     */
                    void SetBundleId(const std::string& _bundleId);

                    /**
                     * 判断参数 BundleId 是否已赋值
                     * @return BundleId 是否已赋值
                     * 
                     */
                    bool BundleIdHasBeenSet() const;

                    /**
                     * 获取Bundle info.
                     * @return BundleInfo Bundle info.
                     * 
                     */
                    std::string GetBundleInfo() const;

                    /**
                     * 设置Bundle info.
                     * @param _bundleInfo Bundle info.
                     * 
                     */
                    void SetBundleInfo(const std::string& _bundleInfo);

                    /**
                     * 判断参数 BundleInfo 是否已赋值
                     * @return BundleInfo 是否已赋值
                     * 
                     */
                    bool BundleInfoHasBeenSet() const;

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
                     * Workflow name.
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * Owner ID.
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * Remarks.
                     */
                    std::string m_workflowDesc;
                    bool m_workflowDescHasBeenSet;

                    /**
                     * Workflow parameter list.
                     */
                    std::vector<ParamInfo> m_workflowParams;
                    bool m_workflowParamsHasBeenSet;

                    /**
                     * Specifies unified scheduling parameters.
                     */
                    WorkflowSchedulerConfigurationInfo m_workflowSchedulerConfiguration;
                    bool m_workflowSchedulerConfigurationHasBeenSet;

                    /**
                     * BundleId item.
                     */
                    std::string m_bundleId;
                    bool m_bundleIdHasBeenSet;

                    /**
                     * Bundle info.
                     */
                    std::string m_bundleInfo;
                    bool m_bundleInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATEWORKFLOWREQUEST_H_
