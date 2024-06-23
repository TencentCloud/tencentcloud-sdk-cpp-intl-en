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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_REMOVEWORKFLOWDSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_REMOVEWORKFLOWDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * RemoveWorkflowDs request structure.
                */
                class RemoveWorkflowDsRequest : public AbstractModel
                {
                public:
                    RemoveWorkflowDsRequest();
                    ~RemoveWorkflowDsRequest() = default;
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
                     * 获取Whether to delete the script
                     * @return DeleteScript Whether to delete the script
                     * 
                     */
                    std::string GetDeleteScript() const;

                    /**
                     * 设置Whether to delete the script
                     * @param _deleteScript Whether to delete the script
                     * 
                     */
                    void SetDeleteScript(const std::string& _deleteScript);

                    /**
                     * 判断参数 DeleteScript 是否已赋值
                     * @return DeleteScript 是否已赋值
                     * 
                     */
                    bool DeleteScriptHasBeenSet() const;

                    /**
                     * 获取Notify downstream if deleted
                     * @return OperateIsInform Notify downstream if deleted
                     * 
                     */
                    std::string GetOperateIsInform() const;

                    /**
                     * 设置Notify downstream if deleted
                     * @param _operateIsInform Notify downstream if deleted
                     * 
                     */
                    void SetOperateIsInform(const std::string& _operateIsInform);

                    /**
                     * 判断参数 OperateIsInform 是否已赋值
                     * @return OperateIsInform 是否已赋值
                     * 
                     */
                    bool OperateIsInformHasBeenSet() const;

                    /**
                     * 获取Whether to terminate ongoing tasks
                     * @return DeleteMode Whether to terminate ongoing tasks
                     * 
                     */
                    std::string GetDeleteMode() const;

                    /**
                     * 设置Whether to terminate ongoing tasks
                     * @param _deleteMode Whether to terminate ongoing tasks
                     * 
                     */
                    void SetDeleteMode(const std::string& _deleteMode);

                    /**
                     * 判断参数 DeleteMode 是否已赋值
                     * @return DeleteMode 是否已赋值
                     * 
                     */
                    bool DeleteModeHasBeenSet() const;

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
                     * Whether to delete the script
                     */
                    std::string m_deleteScript;
                    bool m_deleteScriptHasBeenSet;

                    /**
                     * Notify downstream if deleted
                     */
                    std::string m_operateIsInform;
                    bool m_operateIsInformHasBeenSet;

                    /**
                     * Whether to terminate ongoing tasks
                     */
                    std::string m_deleteMode;
                    bool m_deleteModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_REMOVEWORKFLOWDSREQUEST_H_
