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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_UPDATEWORKFLOWREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_UPDATEWORKFLOWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/Workflow.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
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
                     * 获取<p>Workspace ID, which can be obtained through ListWorkspaces. Required.</p>
                     * @return WorkspaceId <p>Workspace ID, which can be obtained through ListWorkspaces. Required.</p>
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置<p>Workspace ID, which can be obtained through ListWorkspaces. Required.</p>
                     * @param _workspaceId <p>Workspace ID, which can be obtained through ListWorkspaces. Required.</p>
                     * 
                     */
                    void SetWorkspaceId(const std::string& _workspaceId);

                    /**
                     * 判断参数 WorkspaceId 是否已赋值
                     * @return WorkspaceId 是否已赋值
                     * 
                     */
                    bool WorkspaceIdHasBeenSet() const;

                    /**
                     * 获取<p>ID of the workflow to be updated. You can obtain it through ListWorkflows. Required</p>
                     * @return WorkflowId <p>ID of the workflow to be updated. You can obtain it through ListWorkflows. Required</p>
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置<p>ID of the workflow to be updated. You can obtain it through ListWorkflows. Required</p>
                     * @param _workflowId <p>ID of the workflow to be updated. You can obtain it through ListWorkflows. Required</p>
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
                     * 获取<p>List of field names to be cleared, used to reset the specified fields to empty</p>
                     * @return FieldToRemoveList <p>List of field names to be cleared, used to reset the specified fields to empty</p>
                     * 
                     */
                    std::vector<std::string> GetFieldToRemoveList() const;

                    /**
                     * 设置<p>List of field names to be cleared, used to reset the specified fields to empty</p>
                     * @param _fieldToRemoveList <p>List of field names to be cleared, used to reset the specified fields to empty</p>
                     * 
                     */
                    void SetFieldToRemoveList(const std::vector<std::string>& _fieldToRemoveList);

                    /**
                     * 判断参数 FieldToRemoveList 是否已赋值
                     * @return FieldToRemoveList 是否已赋值
                     * 
                     */
                    bool FieldToRemoveListHasBeenSet() const;

                    /**
                     * 获取<p>After the update, only import the parts of the workflow configuration that need to be changed</p>
                     * @return NewSetting <p>After the update, only import the parts of the workflow configuration that need to be changed</p>
                     * 
                     */
                    Workflow GetNewSetting() const;

                    /**
                     * 设置<p>After the update, only import the parts of the workflow configuration that need to be changed</p>
                     * @param _newSetting <p>After the update, only import the parts of the workflow configuration that need to be changed</p>
                     * 
                     */
                    void SetNewSetting(const Workflow& _newSetting);

                    /**
                     * 判断参数 NewSetting 是否已赋值
                     * @return NewSetting 是否已赋值
                     * 
                     */
                    bool NewSettingHasBeenSet() const;

                private:

                    /**
                     * <p>Workspace ID, which can be obtained through ListWorkspaces. Required.</p>
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * <p>ID of the workflow to be updated. You can obtain it through ListWorkflows. Required</p>
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * <p>List of field names to be cleared, used to reset the specified fields to empty</p>
                     */
                    std::vector<std::string> m_fieldToRemoveList;
                    bool m_fieldToRemoveListHasBeenSet;

                    /**
                     * <p>After the update, only import the parts of the workflow configuration that need to be changed</p>
                     */
                    Workflow m_newSetting;
                    bool m_newSettingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_UPDATEWORKFLOWREQUEST_H_
