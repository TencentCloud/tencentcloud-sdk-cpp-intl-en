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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_WORKFLOWCANVASOPSDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_WORKFLOWCANVASOPSDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TaskOpsDto.h>
#include <tencentcloud/wedata/v20210820/model/LinkOpsDto.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Workflow Canvas Details
                */
                class WorkflowCanvasOpsDto : public AbstractModel
                {
                public:
                    WorkflowCanvasOpsDto();
                    ~WorkflowCanvasOpsDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Workflow IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @return WorkflowId Workflow IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置Workflow IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _workflowId Workflow IDNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Workflow Detail Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return WorkflowDesc Workflow Detail Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetWorkflowDesc() const;

                    /**
                     * 设置Workflow Detail Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _workflowDesc Workflow Detail Description
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Workflow nameNote: This field may return null, indicating that no valid value can be obtained.
                     * @return WorkflowName Workflow nameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetWorkflowName() const;

                    /**
                     * 设置Workflow nameNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _workflowName Workflow nameNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Parent Folder IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @return FolderId Parent Folder IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetFolderId() const;

                    /**
                     * 设置Parent Folder IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _folderId Parent Folder IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetFolderId(const std::string& _folderId);

                    /**
                     * 判断参数 FolderId 是否已赋值
                     * @return FolderId 是否已赋值
                     * 
                     */
                    bool FolderIdHasBeenSet() const;

                    /**
                     * 获取Associated Folder IDs
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return FolderIds Associated Folder IDs
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetFolderIds() const;

                    /**
                     * 设置Associated Folder IDs
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _folderIds Associated Folder IDs
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetFolderIds(const std::vector<std::string>& _folderIds);

                    /**
                     * 判断参数 FolderIds 是否已赋值
                     * @return FolderIds 是否已赋值
                     * 
                     */
                    bool FolderIdsHasBeenSet() const;

                    /**
                     * 获取Task ListNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Tasks Task ListNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<TaskOpsDto> GetTasks() const;

                    /**
                     * 设置Task ListNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _tasks Task ListNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTasks(const std::vector<TaskOpsDto>& _tasks);

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     * 
                     */
                    bool TasksHasBeenSet() const;

                    /**
                     * 获取Task Dependency Edge List
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Links Task Dependency Edge List
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<LinkOpsDto> GetLinks() const;

                    /**
                     * 设置Task Dependency Edge List
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _links Task Dependency Edge List
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetLinks(const std::vector<LinkOpsDto>& _links);

                    /**
                     * 判断参数 Links 是否已赋值
                     * @return Links 是否已赋值
                     * 
                     */
                    bool LinksHasBeenSet() const;

                    /**
                     * 获取Workflow User Group ID, if multiple, separated by semicolons: a;b;c
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return UserGroupId Workflow User Group ID, if multiple, separated by semicolons: a;b;c
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetUserGroupId() const;

                    /**
                     * 设置Workflow User Group ID, if multiple, separated by semicolons: a;b;c
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _userGroupId Workflow User Group ID, if multiple, separated by semicolons: a;b;c
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetUserGroupId(const std::string& _userGroupId);

                    /**
                     * 判断参数 UserGroupId 是否已赋值
                     * @return UserGroupId 是否已赋值
                     * 
                     */
                    bool UserGroupIdHasBeenSet() const;

                    /**
                     * 获取Workflow User Group Name, if multiple, separated by semicolons: a;b;c
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return UserGroupName Workflow User Group Name, if multiple, separated by semicolons: a;b;c
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetUserGroupName() const;

                    /**
                     * 设置Workflow User Group Name, if multiple, separated by semicolons: a;b;c
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _userGroupName Workflow User Group Name, if multiple, separated by semicolons: a;b;c
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetUserGroupName(const std::string& _userGroupName);

                    /**
                     * 判断参数 UserGroupName 是否已赋值
                     * @return UserGroupName 是否已赋值
                     * 
                     */
                    bool UserGroupNameHasBeenSet() const;

                    /**
                     * 获取Project IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @return ProjectId Project IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _projectId Project IDNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Project IdentifierNote: This field may return null, indicating that no valid value can be obtained.
                     * @return ProjectIdent Project IdentifierNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetProjectIdent() const;

                    /**
                     * 设置Project IdentifierNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _projectIdent Project IdentifierNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetProjectIdent(const std::string& _projectIdent);

                    /**
                     * 判断参数 ProjectIdent 是否已赋值
                     * @return ProjectIdent 是否已赋值
                     * 
                     */
                    bool ProjectIdentHasBeenSet() const;

                    /**
                     * 获取Project nameNote: This field may return null, indicating that no valid value can be obtained.
                     * @return ProjectName Project nameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置Project nameNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _projectName Project nameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取Person in ChargeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Owner Person in ChargeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置Person in ChargeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _owner Person in ChargeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetOwner(const std::string& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取Responsible User ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return OwnerId Responsible User ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetOwnerId() const;

                    /**
                     * 设置Responsible User ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _ownerId Responsible User ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetOwnerId(const std::string& _ownerId);

                    /**
                     * 判断参数 OwnerId 是否已赋值
                     * @return OwnerId 是否已赋值
                     * 
                     */
                    bool OwnerIdHasBeenSet() const;

                private:

                    /**
                     * Workflow IDNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * Workflow Detail Description
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_workflowDesc;
                    bool m_workflowDescHasBeenSet;

                    /**
                     * Workflow nameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * Parent Folder IDNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_folderId;
                    bool m_folderIdHasBeenSet;

                    /**
                     * Associated Folder IDs
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_folderIds;
                    bool m_folderIdsHasBeenSet;

                    /**
                     * Task ListNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<TaskOpsDto> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * Task Dependency Edge List
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<LinkOpsDto> m_links;
                    bool m_linksHasBeenSet;

                    /**
                     * Workflow User Group ID, if multiple, separated by semicolons: a;b;c
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_userGroupId;
                    bool m_userGroupIdHasBeenSet;

                    /**
                     * Workflow User Group Name, if multiple, separated by semicolons: a;b;c
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_userGroupName;
                    bool m_userGroupNameHasBeenSet;

                    /**
                     * Project IDNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Project IdentifierNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_projectIdent;
                    bool m_projectIdentHasBeenSet;

                    /**
                     * Project nameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * Person in ChargeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * Responsible User ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_ownerId;
                    bool m_ownerIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_WORKFLOWCANVASOPSDTO_H_
