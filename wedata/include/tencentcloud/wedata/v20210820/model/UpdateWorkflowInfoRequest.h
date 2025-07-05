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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_UPDATEWORKFLOWINFOREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_UPDATEWORKFLOWINFOREQUEST_H_

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
                * UpdateWorkflowInfo request structure.
                */
                class UpdateWorkflowInfoRequest : public AbstractModel
                {
                public:
                    UpdateWorkflowInfoRequest();
                    ~UpdateWorkflowInfoRequest() = default;
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
                     * 获取Operator Name
                     * @return OperatorName Operator Name
                     * 
                     */
                    std::string GetOperatorName() const;

                    /**
                     * 设置Operator Name
                     * @param _operatorName Operator Name
                     * 
                     */
                    void SetOperatorName(const std::string& _operatorName);

                    /**
                     * 判断参数 OperatorName 是否已赋值
                     * @return OperatorName 是否已赋值
                     * 
                     */
                    bool OperatorNameHasBeenSet() const;

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
                     * 获取Responsible Person
                     * @return Owner Responsible Person
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置Responsible Person
                     * @param _owner Responsible Person
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
                     * 获取Workflow Name
                     * @return WorkflowName Workflow Name
                     * 
                     */
                    std::string GetWorkflowName() const;

                    /**
                     * 设置Workflow Name
                     * @param _workflowName Workflow Name
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
                     * 获取Folder ID
                     * @return FolderId Folder ID
                     * 
                     */
                    std::string GetFolderId() const;

                    /**
                     * 设置Folder ID
                     * @param _folderId Folder ID
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
                     * 获取Workflow user group id. if there are multiple, separate them with a semicolon: a;b;c
                     * @return UserGroupId Workflow user group id. if there are multiple, separate them with a semicolon: a;b;c
                     * 
                     */
                    std::string GetUserGroupId() const;

                    /**
                     * 设置Workflow user group id. if there are multiple, separate them with a semicolon: a;b;c
                     * @param _userGroupId Workflow user group id. if there are multiple, separate them with a semicolon: a;b;c
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
                     * 获取Workflow user group name if there are multiple, separate with semicolons: a;b;c
                     * @return UserGroupName Workflow user group name if there are multiple, separate with semicolons: a;b;c
                     * 
                     */
                    std::string GetUserGroupName() const;

                    /**
                     * 设置Workflow user group name if there are multiple, separate with semicolons: a;b;c
                     * @param _userGroupName Workflow user group name if there are multiple, separate with semicolons: a;b;c
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
                     * 获取Specifies configuration optimization parameters (such as threads, memory, and number of CPU cores), which apply to Spark SQL nodes. separate multiple parameters with semicolons.
                     * @return GeneralTaskParams Specifies configuration optimization parameters (such as threads, memory, and number of CPU cores), which apply to Spark SQL nodes. separate multiple parameters with semicolons.
                     * 
                     */
                    std::vector<GeneralTaskParam> GetGeneralTaskParams() const;

                    /**
                     * 设置Specifies configuration optimization parameters (such as threads, memory, and number of CPU cores), which apply to Spark SQL nodes. separate multiple parameters with semicolons.
                     * @param _generalTaskParams Specifies configuration optimization parameters (such as threads, memory, and number of CPU cores), which apply to Spark SQL nodes. separate multiple parameters with semicolons.
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
                     * Operator Name
                     */
                    std::string m_operatorName;
                    bool m_operatorNameHasBeenSet;

                    /**
                     * Workflow ID
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * Responsible Person
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
                     * Workflow Name
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * Folder ID
                     */
                    std::string m_folderId;
                    bool m_folderIdHasBeenSet;

                    /**
                     * Workflow user group id. if there are multiple, separate them with a semicolon: a;b;c
                     */
                    std::string m_userGroupId;
                    bool m_userGroupIdHasBeenSet;

                    /**
                     * Workflow user group name if there are multiple, separate with semicolons: a;b;c
                     */
                    std::string m_userGroupName;
                    bool m_userGroupNameHasBeenSet;

                    /**
                     * Workflow Parameter List
                     */
                    std::vector<ParamInfo> m_workflowParams;
                    bool m_workflowParamsHasBeenSet;

                    /**
                     * Specifies configuration optimization parameters (such as threads, memory, and number of CPU cores), which apply to Spark SQL nodes. separate multiple parameters with semicolons.
                     */
                    std::vector<GeneralTaskParam> m_generalTaskParams;
                    bool m_generalTaskParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_UPDATEWORKFLOWINFOREQUEST_H_
