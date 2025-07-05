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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_WORKFLOW_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_WORKFLOW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Workflow Information
                */
                class Workflow : public AbstractModel
                {
                public:
                    Workflow();
                    ~Workflow() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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

                    /**
                     * 获取Person in Charge
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Owner Person in Charge
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置Person in Charge
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _owner Person in Charge
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Responsible Person ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return OwnerId Responsible Person ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetOwnerId() const;

                    /**
                     * 设置Responsible Person ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _ownerId Responsible Person ID
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
                     * 获取Project Identifier
                     * @return ProjectIdent Project Identifier
                     * 
                     */
                    std::string GetProjectIdent() const;

                    /**
                     * 设置Project Identifier
                     * @param _projectIdent Project Identifier
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
                     * 获取Project name
                     * @return ProjectName Project name
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置Project name
                     * @param _projectName Project name
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
                     * 获取RemarksNote: This field may return null, indicating that no valid value can be obtained.
                     * @return WorkflowDesc RemarksNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetWorkflowDesc() const;

                    /**
                     * 设置RemarksNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _workflowDesc RemarksNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Workflow name
                     * @return WorkflowName Workflow name
                     * 
                     */
                    std::string GetWorkflowName() const;

                    /**
                     * 设置Workflow name
                     * @param _workflowName Workflow name
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
                     * 获取Parent Folder ID
                     * @return FolderId Parent Folder ID
                     * 
                     */
                    std::string GetFolderId() const;

                    /**
                     * 设置Parent Folder ID
                     * @param _folderId Parent Folder ID
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
                     * 获取Workflow User Group ID If there are multiple, separate with semicolons: a;b;c
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return UserGroupId Workflow User Group ID If there are multiple, separate with semicolons: a;b;c
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetUserGroupId() const;

                    /**
                     * 设置Workflow User Group ID If there are multiple, separate with semicolons: a;b;c
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _userGroupId Workflow User Group ID If there are multiple, separate with semicolons: a;b;c
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
                     * 获取Workflow User Group Name If there are multiple, separate with semicolons: a;b;c
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return UserGroupName Workflow User Group Name If there are multiple, separate with semicolons: a;b;c
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetUserGroupName() const;

                    /**
                     * 设置Workflow User Group Name If there are multiple, separate with semicolons: a;b;c
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _userGroupName Workflow User Group Name If there are multiple, separate with semicolons: a;b;c
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

                private:

                    /**
                     * Workflow ID
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * Person in Charge
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * Responsible Person ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_ownerId;
                    bool m_ownerIdHasBeenSet;

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Project Identifier
                     */
                    std::string m_projectIdent;
                    bool m_projectIdentHasBeenSet;

                    /**
                     * Project name
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * RemarksNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_workflowDesc;
                    bool m_workflowDescHasBeenSet;

                    /**
                     * Workflow name
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * Parent Folder ID
                     */
                    std::string m_folderId;
                    bool m_folderIdHasBeenSet;

                    /**
                     * Workflow User Group ID If there are multiple, separate with semicolons: a;b;c
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_userGroupId;
                    bool m_userGroupIdHasBeenSet;

                    /**
                     * Workflow User Group Name If there are multiple, separate with semicolons: a;b;c
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_userGroupName;
                    bool m_userGroupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_WORKFLOW_H_
