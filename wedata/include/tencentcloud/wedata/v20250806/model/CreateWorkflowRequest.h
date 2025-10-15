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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATEWORKFLOWREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATEWORKFLOWREQUEST_H_

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
                * CreateWorkflow request structure.
                */
                class CreateWorkflowRequest : public AbstractModel
                {
                public:
                    CreateWorkflowRequest();
                    ~CreateWorkflowRequest() = default;
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
                     * 获取Specifies the folder path.
                     * @return ParentFolderPath Specifies the folder path.
                     * 
                     */
                    std::string GetParentFolderPath() const;

                    /**
                     * 设置Specifies the folder path.
                     * @param _parentFolderPath Specifies the folder path.
                     * 
                     */
                    void SetParentFolderPath(const std::string& _parentFolderPath);

                    /**
                     * 判断参数 ParentFolderPath 是否已赋值
                     * @return ParentFolderPath 是否已赋值
                     * 
                     */
                    bool ParentFolderPathHasBeenSet() const;

                    /**
                     * 获取Workflow type. value examples: cycle for periodic workflow; manual for manual workflow. default input: cycle.
                     * @return WorkflowType Workflow type. value examples: cycle for periodic workflow; manual for manual workflow. default input: cycle.
                     * 
                     */
                    std::string GetWorkflowType() const;

                    /**
                     * 设置Workflow type. value examples: cycle for periodic workflow; manual for manual workflow. default input: cycle.
                     * @param _workflowType Workflow type. value examples: cycle for periodic workflow; manual for manual workflow. default input: cycle.
                     * 
                     */
                    void SetWorkflowType(const std::string& _workflowType);

                    /**
                     * 判断参数 WorkflowType 是否已赋值
                     * @return WorkflowType 是否已赋值
                     * 
                     */
                    bool WorkflowTypeHasBeenSet() const;

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
                     * 获取Workflow owner ID.
                     * @return OwnerUin Workflow owner ID.
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置Workflow owner ID.
                     * @param _ownerUin Workflow owner ID.
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
                     * 获取Workflow parameter.
                     * @return WorkflowParams Workflow parameter.
                     * 
                     */
                    std::vector<ParamInfo> GetWorkflowParams() const;

                    /**
                     * 设置Workflow parameter.
                     * @param _workflowParams Workflow parameter.
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
                     * 获取Specifies unified scheduling info.
                     * @return WorkflowSchedulerConfiguration Specifies unified scheduling info.
                     * 
                     */
                    WorkflowSchedulerConfigurationInfo GetWorkflowSchedulerConfiguration() const;

                    /**
                     * 设置Specifies unified scheduling info.
                     * @param _workflowSchedulerConfiguration Specifies unified scheduling info.
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
                     * Workflow name.
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * Specifies the folder path.
                     */
                    std::string m_parentFolderPath;
                    bool m_parentFolderPathHasBeenSet;

                    /**
                     * Workflow type. value examples: cycle for periodic workflow; manual for manual workflow. default input: cycle.
                     */
                    std::string m_workflowType;
                    bool m_workflowTypeHasBeenSet;

                    /**
                     * Workflow description.
                     */
                    std::string m_workflowDesc;
                    bool m_workflowDescHasBeenSet;

                    /**
                     * Workflow owner ID.
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * Workflow parameter.
                     */
                    std::vector<ParamInfo> m_workflowParams;
                    bool m_workflowParamsHasBeenSet;

                    /**
                     * Specifies unified scheduling info.
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

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATEWORKFLOWREQUEST_H_
