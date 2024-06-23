/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYWORKFLOWINFOREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYWORKFLOWINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/ParamInfo.h>
#include <tencentcloud/wedata/v20210820/model/GeneralTaskParam.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * ModifyWorkflowInfo request structure.
                */
                class ModifyWorkflowInfoRequest : public AbstractModel
                {
                public:
                    ModifyWorkflowInfoRequest();
                    ~ModifyWorkflowInfoRequest() = default;
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
                     * @return Owner Person in Charge
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置Person in Charge
                     * @param _owner Person in Charge
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
                     * @return OwnerId Responsible Person ID
                     * 
                     */
                    std::string GetOwnerId() const;

                    /**
                     * 设置Responsible Person ID
                     * @param _ownerId Responsible Person ID
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
                     * 获取Remarks
                     * @return WorkflowDesc Remarks
                     * 
                     */
                    std::string GetWorkflowDesc() const;

                    /**
                     * 设置Remarks
                     * @param _workflowDesc Remarks
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
                     * 获取Workflow User Group ID If multiple, separated by semicolons: a;b;c
                     * @return UserGroupId Workflow User Group ID If multiple, separated by semicolons: a;b;c
                     * 
                     */
                    std::string GetUserGroupId() const;

                    /**
                     * 设置Workflow User Group ID If multiple, separated by semicolons: a;b;c
                     * @param _userGroupId Workflow User Group ID If multiple, separated by semicolons: a;b;c
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
                     * 获取Workflow User Group Name If multiple, separated by semicolons: a;b;c
                     * @return UserGroupName Workflow User Group Name If multiple, separated by semicolons: a;b;c
                     * 
                     */
                    std::string GetUserGroupName() const;

                    /**
                     * 设置Workflow User Group Name If multiple, separated by semicolons: a;b;c
                     * @param _userGroupName Workflow User Group Name If multiple, separated by semicolons: a;b;c
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
                     * 获取Workflow Parameter List
                     * @return WorkflowParams Workflow Parameter List
                     * 
                     */
                    std::vector<ParamInfo> GetWorkflowParams() const;

                    /**
                     * 设置Workflow Parameter List
                     * @param _workflowParams Workflow Parameter List
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
                     * 获取Used to configure optimized parameters (Thread, Memory, CPU Core Count, etc.), applicable only to Spark SQL Node. Separate multiple parameters with English semicolons.
                     * @return GeneralTaskParams Used to configure optimized parameters (Thread, Memory, CPU Core Count, etc.), applicable only to Spark SQL Node. Separate multiple parameters with English semicolons.
                     * 
                     */
                    std::vector<GeneralTaskParam> GetGeneralTaskParams() const;

                    /**
                     * 设置Used to configure optimized parameters (Thread, Memory, CPU Core Count, etc.), applicable only to Spark SQL Node. Separate multiple parameters with English semicolons.
                     * @param _generalTaskParams Used to configure optimized parameters (Thread, Memory, CPU Core Count, etc.), applicable only to Spark SQL Node. Separate multiple parameters with English semicolons.
                     * 
                     */
                    void SetGeneralTaskParams(const std::vector<GeneralTaskParam>& _generalTaskParams);

                    /**
                     * 判断参数 GeneralTaskParams 是否已赋值
                     * @return GeneralTaskParams 是否已赋值
                     * 
                     */
                    bool GeneralTaskParamsHasBeenSet() const;

                private:

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Workflow ID
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * Person in Charge
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * Responsible Person ID
                     */
                    std::string m_ownerId;
                    bool m_ownerIdHasBeenSet;

                    /**
                     * Remarks
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
                     * Workflow User Group ID If multiple, separated by semicolons: a;b;c
                     */
                    std::string m_userGroupId;
                    bool m_userGroupIdHasBeenSet;

                    /**
                     * Workflow User Group Name If multiple, separated by semicolons: a;b;c
                     */
                    std::string m_userGroupName;
                    bool m_userGroupNameHasBeenSet;

                    /**
                     * Workflow Parameter List
                     */
                    std::vector<ParamInfo> m_workflowParams;
                    bool m_workflowParamsHasBeenSet;

                    /**
                     * Used to configure optimized parameters (Thread, Memory, CPU Core Count, etc.), applicable only to Spark SQL Node. Separate multiple parameters with English semicolons.
                     */
                    std::vector<GeneralTaskParam> m_generalTaskParams;
                    bool m_generalTaskParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYWORKFLOWINFOREQUEST_H_
