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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKFLOWBRIEF_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKFLOWBRIEF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/LabelBrief.h>
#include <tencentcloud/databuddy/v20260715/model/WorkflowTriggerConfiguration.h>
#include <tencentcloud/databuddy/v20260715/model/WorkflowTaskNodeBrief.h>
#include <tencentcloud/databuddy/v20260715/model/WorkflowRunBrief.h>
#include <tencentcloud/databuddy/v20260715/model/ResourceGroupInfo.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * Workflow list item
                */
                class WorkflowBrief : public AbstractModel
                {
                public:
                    WorkflowBrief();
                    ~WorkflowBrief() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Workflow name</p>
                     * @return WorkflowName <p>Workflow name</p>
                     * 
                     */
                    std::string GetWorkflowName() const;

                    /**
                     * 设置<p>Workflow name</p>
                     * @param _workflowName <p>Workflow name</p>
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
                     * 获取<p>Workflow ID</p>
                     * @return WorkflowId <p>Workflow ID</p>
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置<p>Workflow ID</p>
                     * @param _workflowId <p>Workflow ID</p>
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
                     * 获取<p>Description.</p>
                     * @return Description <p>Description.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Description.</p>
                     * @param _description <p>Description.</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>Creator UIN</p>
                     * @return CreateUserUin <p>Creator UIN</p>
                     * 
                     */
                    std::string GetCreateUserUin() const;

                    /**
                     * 设置<p>Creator UIN</p>
                     * @param _createUserUin <p>Creator UIN</p>
                     * 
                     */
                    void SetCreateUserUin(const std::string& _createUserUin);

                    /**
                     * 判断参数 CreateUserUin 是否已赋值
                     * @return CreateUserUin 是否已赋值
                     * 
                     */
                    bool CreateUserUinHasBeenSet() const;

                    /**
                     * 获取<p>Workflow owner userName</p>
                     * @return OwnerUserName <p>Workflow owner userName</p>
                     * 
                     */
                    std::string GetOwnerUserName() const;

                    /**
                     * 设置<p>Workflow owner userName</p>
                     * @param _ownerUserName <p>Workflow owner userName</p>
                     * 
                     */
                    void SetOwnerUserName(const std::string& _ownerUserName);

                    /**
                     * 判断参数 OwnerUserName 是否已赋值
                     * @return OwnerUserName 是否已赋值
                     * 
                     */
                    bool OwnerUserNameHasBeenSet() const;

                    /**
                     * 获取<p>Workflow owner UIN</p>
                     * @return OwnerUserUin <p>Workflow owner UIN</p>
                     * 
                     */
                    std::string GetOwnerUserUin() const;

                    /**
                     * 设置<p>Workflow owner UIN</p>
                     * @param _ownerUserUin <p>Workflow owner UIN</p>
                     * 
                     */
                    void SetOwnerUserUin(const std::string& _ownerUserUin);

                    /**
                     * 判断参数 OwnerUserUin 是否已赋值
                     * @return OwnerUserUin 是否已赋值
                     * 
                     */
                    bool OwnerUserUinHasBeenSet() const;

                    /**
                     * 获取<p>Display name of the workflow owner</p>
                     * @return OwnerDisplayName <p>Display name of the workflow owner</p>
                     * 
                     */
                    std::string GetOwnerDisplayName() const;

                    /**
                     * 设置<p>Display name of the workflow owner</p>
                     * @param _ownerDisplayName <p>Display name of the workflow owner</p>
                     * 
                     */
                    void SetOwnerDisplayName(const std::string& _ownerDisplayName);

                    /**
                     * 判断参数 OwnerDisplayName 是否已赋值
                     * @return OwnerDisplayName 是否已赋值
                     * 
                     */
                    bool OwnerDisplayNameHasBeenSet() const;

                    /**
                     * 获取<p>Creation time. Unit: millisecond timestamp</p>
                     * @return CreateTime <p>Creation time. Unit: millisecond timestamp</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Creation time. Unit: millisecond timestamp</p>
                     * @param _createTime <p>Creation time. Unit: millisecond timestamp</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Last update time. Unit: timestamp in milliseconds</p>
                     * @return UpdateTime <p>Last update time. Unit: timestamp in milliseconds</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>Last update time. Unit: timestamp in milliseconds</p>
                     * @param _updateTime <p>Last update time. Unit: timestamp in milliseconds</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Tag list.</p>
                     * @return LabelList <p>Tag list.</p>
                     * 
                     */
                    std::vector<LabelBrief> GetLabelList() const;

                    /**
                     * 设置<p>Tag list.</p>
                     * @param _labelList <p>Tag list.</p>
                     * 
                     */
                    void SetLabelList(const std::vector<LabelBrief>& _labelList);

                    /**
                     * 判断参数 LabelList 是否已赋值
                     * @return LabelList 是否已赋值
                     * 
                     */
                    bool LabelListHasBeenSet() const;

                    /**
                     * 获取<p>Workflow scheduling configuration.</p>
                     * @return Trigger <p>Workflow scheduling configuration.</p>
                     * 
                     */
                    std::vector<WorkflowTriggerConfiguration> GetTrigger() const;

                    /**
                     * 设置<p>Workflow scheduling configuration.</p>
                     * @param _trigger <p>Workflow scheduling configuration.</p>
                     * 
                     */
                    void SetTrigger(const std::vector<WorkflowTriggerConfiguration>& _trigger);

                    /**
                     * 判断参数 Trigger 是否已赋值
                     * @return Trigger 是否已赋值
                     * 
                     */
                    bool TriggerHasBeenSet() const;

                    /**
                     * 获取<p>Workflow runner UIN</p>
                     * @return RunUserUin <p>Workflow runner UIN</p>
                     * 
                     */
                    std::string GetRunUserUin() const;

                    /**
                     * 设置<p>Workflow runner UIN</p>
                     * @param _runUserUin <p>Workflow runner UIN</p>
                     * 
                     */
                    void SetRunUserUin(const std::string& _runUserUin);

                    /**
                     * 判断参数 RunUserUin 是否已赋值
                     * @return RunUserUin 是否已赋值
                     * 
                     */
                    bool RunUserUinHasBeenSet() const;

                    /**
                     * 获取<p>Workflow runner userName</p>
                     * @return RunUserName <p>Workflow runner userName</p>
                     * 
                     */
                    std::string GetRunUserName() const;

                    /**
                     * 设置<p>Workflow runner userName</p>
                     * @param _runUserName <p>Workflow runner userName</p>
                     * 
                     */
                    void SetRunUserName(const std::string& _runUserName);

                    /**
                     * 判断参数 RunUserName 是否已赋值
                     * @return RunUserName 是否已赋值
                     * 
                     */
                    bool RunUserNameHasBeenSet() const;

                    /**
                     * 获取<p>Workflow task node list</p>
                     * @return TaskList <p>Workflow task node list</p>
                     * 
                     */
                    std::vector<WorkflowTaskNodeBrief> GetTaskList() const;

                    /**
                     * 设置<p>Workflow task node list</p>
                     * @param _taskList <p>Workflow task node list</p>
                     * 
                     */
                    void SetTaskList(const std::vector<WorkflowTaskNodeBrief>& _taskList);

                    /**
                     * 判断参数 TaskList 是否已赋值
                     * @return TaskList 是否已赋值
                     * 
                     */
                    bool TaskListHasBeenSet() const;

                    /**
                     * 获取<p>Workflow running status list</p>
                     * @return WorkflowRunList <p>Workflow running status list</p>
                     * 
                     */
                    std::vector<WorkflowRunBrief> GetWorkflowRunList() const;

                    /**
                     * 设置<p>Workflow running status list</p>
                     * @param _workflowRunList <p>Workflow running status list</p>
                     * 
                     */
                    void SetWorkflowRunList(const std::vector<WorkflowRunBrief>& _workflowRunList);

                    /**
                     * 判断参数 WorkflowRunList 是否已赋值
                     * @return WorkflowRunList 是否已赋值
                     * 
                     */
                    bool WorkflowRunListHasBeenSet() const;

                    /**
                     * 获取<p>Resource group information list.</p>
                     * @return ResourceGroupInfoList <p>Resource group information list.</p>
                     * 
                     */
                    std::vector<ResourceGroupInfo> GetResourceGroupInfoList() const;

                    /**
                     * 设置<p>Resource group information list.</p>
                     * @param _resourceGroupInfoList <p>Resource group information list.</p>
                     * 
                     */
                    void SetResourceGroupInfoList(const std::vector<ResourceGroupInfo>& _resourceGroupInfoList);

                    /**
                     * 判断参数 ResourceGroupInfoList 是否已赋值
                     * @return ResourceGroupInfoList 是否已赋值
                     * 
                     */
                    bool ResourceGroupInfoListHasBeenSet() const;

                    /**
                     * 获取<p>Authorization permission type<br>PERMISSION_TYPE_UNSPECIFIED: unspecified permission<br>MANAGE: management permission, including all operation permissions<br>RUN: execution permission, executable entity<br>VIEW: view permission, viewable entity content</p>
                     * @return Permission <p>Authorization permission type<br>PERMISSION_TYPE_UNSPECIFIED: unspecified permission<br>MANAGE: management permission, including all operation permissions<br>RUN: execution permission, executable entity<br>VIEW: view permission, viewable entity content</p>
                     * 
                     */
                    std::string GetPermission() const;

                    /**
                     * 设置<p>Authorization permission type<br>PERMISSION_TYPE_UNSPECIFIED: unspecified permission<br>MANAGE: management permission, including all operation permissions<br>RUN: execution permission, executable entity<br>VIEW: view permission, viewable entity content</p>
                     * @param _permission <p>Authorization permission type<br>PERMISSION_TYPE_UNSPECIFIED: unspecified permission<br>MANAGE: management permission, including all operation permissions<br>RUN: execution permission, executable entity<br>VIEW: view permission, viewable entity content</p>
                     * 
                     */
                    void SetPermission(const std::string& _permission);

                    /**
                     * 判断参数 Permission 是否已赋值
                     * @return Permission 是否已赋值
                     * 
                     */
                    bool PermissionHasBeenSet() const;

                    /**
                     * 获取<p>Unique ID of the Bundle bound to the workflow. Empty if not bound</p>
                     * @return BundleId <p>Unique ID of the Bundle bound to the workflow. Empty if not bound</p>
                     * 
                     */
                    std::string GetBundleId() const;

                    /**
                     * 设置<p>Unique ID of the Bundle bound to the workflow. Empty if not bound</p>
                     * @param _bundleId <p>Unique ID of the Bundle bound to the workflow. Empty if not bound</p>
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
                     * 获取<p>Bundle information</p>
                     * @return BundleInfo <p>Bundle information</p>
                     * 
                     */
                    std::string GetBundleInfo() const;

                    /**
                     * 设置<p>Bundle information</p>
                     * @param _bundleInfo <p>Bundle information</p>
                     * 
                     */
                    void SetBundleInfo(const std::string& _bundleInfo);

                    /**
                     * 判断参数 BundleInfo 是否已赋值
                     * @return BundleInfo 是否已赋值
                     * 
                     */
                    bool BundleInfoHasBeenSet() const;

                    /**
                     * 获取<p>Git configuration ID.</p>
                     * @return GitConfigId <p>Git configuration ID.</p>
                     * 
                     */
                    std::string GetGitConfigId() const;

                    /**
                     * 设置<p>Git configuration ID.</p>
                     * @param _gitConfigId <p>Git configuration ID.</p>
                     * 
                     */
                    void SetGitConfigId(const std::string& _gitConfigId);

                    /**
                     * 判断参数 GitConfigId 是否已赋值
                     * @return GitConfigId 是否已赋值
                     * 
                     */
                    bool GitConfigIdHasBeenSet() const;

                    /**
                     * 获取<p>Git branch information.</p>
                     * @return GitBranch <p>Git branch information.</p>
                     * 
                     */
                    std::string GetGitBranch() const;

                    /**
                     * 设置<p>Git branch information.</p>
                     * @param _gitBranch <p>Git branch information.</p>
                     * 
                     */
                    void SetGitBranch(const std::string& _gitBranch);

                    /**
                     * 判断参数 GitBranch 是否已赋值
                     * @return GitBranch 是否已赋值
                     * 
                     */
                    bool GitBranchHasBeenSet() const;

                private:

                    /**
                     * <p>Workflow name</p>
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * <p>Workflow ID</p>
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * <p>Description.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Creator UIN</p>
                     */
                    std::string m_createUserUin;
                    bool m_createUserUinHasBeenSet;

                    /**
                     * <p>Workflow owner userName</p>
                     */
                    std::string m_ownerUserName;
                    bool m_ownerUserNameHasBeenSet;

                    /**
                     * <p>Workflow owner UIN</p>
                     */
                    std::string m_ownerUserUin;
                    bool m_ownerUserUinHasBeenSet;

                    /**
                     * <p>Display name of the workflow owner</p>
                     */
                    std::string m_ownerDisplayName;
                    bool m_ownerDisplayNameHasBeenSet;

                    /**
                     * <p>Creation time. Unit: millisecond timestamp</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Last update time. Unit: timestamp in milliseconds</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>Tag list.</p>
                     */
                    std::vector<LabelBrief> m_labelList;
                    bool m_labelListHasBeenSet;

                    /**
                     * <p>Workflow scheduling configuration.</p>
                     */
                    std::vector<WorkflowTriggerConfiguration> m_trigger;
                    bool m_triggerHasBeenSet;

                    /**
                     * <p>Workflow runner UIN</p>
                     */
                    std::string m_runUserUin;
                    bool m_runUserUinHasBeenSet;

                    /**
                     * <p>Workflow runner userName</p>
                     */
                    std::string m_runUserName;
                    bool m_runUserNameHasBeenSet;

                    /**
                     * <p>Workflow task node list</p>
                     */
                    std::vector<WorkflowTaskNodeBrief> m_taskList;
                    bool m_taskListHasBeenSet;

                    /**
                     * <p>Workflow running status list</p>
                     */
                    std::vector<WorkflowRunBrief> m_workflowRunList;
                    bool m_workflowRunListHasBeenSet;

                    /**
                     * <p>Resource group information list.</p>
                     */
                    std::vector<ResourceGroupInfo> m_resourceGroupInfoList;
                    bool m_resourceGroupInfoListHasBeenSet;

                    /**
                     * <p>Authorization permission type<br>PERMISSION_TYPE_UNSPECIFIED: unspecified permission<br>MANAGE: management permission, including all operation permissions<br>RUN: execution permission, executable entity<br>VIEW: view permission, viewable entity content</p>
                     */
                    std::string m_permission;
                    bool m_permissionHasBeenSet;

                    /**
                     * <p>Unique ID of the Bundle bound to the workflow. Empty if not bound</p>
                     */
                    std::string m_bundleId;
                    bool m_bundleIdHasBeenSet;

                    /**
                     * <p>Bundle information</p>
                     */
                    std::string m_bundleInfo;
                    bool m_bundleInfoHasBeenSet;

                    /**
                     * <p>Git configuration ID.</p>
                     */
                    std::string m_gitConfigId;
                    bool m_gitConfigIdHasBeenSet;

                    /**
                     * <p>Git branch information.</p>
                     */
                    std::string m_gitBranch;
                    bool m_gitBranchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKFLOWBRIEF_H_
