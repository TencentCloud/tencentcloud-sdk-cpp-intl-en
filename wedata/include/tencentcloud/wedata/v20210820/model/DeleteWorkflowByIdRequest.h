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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DELETEWORKFLOWBYIDREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DELETEWORKFLOWBYIDREQUEST_H_

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
                * DeleteWorkflowById request structure.
                */
                class DeleteWorkflowByIdRequest : public AbstractModel
                {
                public:
                    DeleteWorkflowByIdRequest();
                    ~DeleteWorkflowByIdRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Handling method for downstream tasks after deletion, true: all downstream tasks run normally false: all downstream tasks fail
                     * @return DeleteMode Handling method for downstream tasks after deletion, true: all downstream tasks run normally false: all downstream tasks fail
                     * 
                     */
                    bool GetDeleteMode() const;

                    /**
                     * 设置Handling method for downstream tasks after deletion, true: all downstream tasks run normally false: all downstream tasks fail
                     * @param _deleteMode Handling method for downstream tasks after deletion, true: all downstream tasks run normally false: all downstream tasks fail
                     * 
                     */
                    void SetDeleteMode(const bool& _deleteMode);

                    /**
                     * 判断参数 DeleteMode 是否已赋值
                     * @return DeleteMode 是否已赋值
                     * 
                     */
                    bool DeleteModeHasBeenSet() const;

                    /**
                     * 获取Notify downstream task owners after task deletion, true: notify false: do not notify
                     * @return EnableNotify Notify downstream task owners after task deletion, true: notify false: do not notify
                     * 
                     */
                    bool GetEnableNotify() const;

                    /**
                     * 设置Notify downstream task owners after task deletion, true: notify false: do not notify
                     * @param _enableNotify Notify downstream task owners after task deletion, true: notify false: do not notify
                     * 
                     */
                    void SetEnableNotify(const bool& _enableNotify);

                    /**
                     * 判断参数 EnableNotify 是否已赋值
                     * @return EnableNotify 是否已赋值
                     * 
                     */
                    bool EnableNotifyHasBeenSet() const;

                private:

                    /**
                     * Workflow ID
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Handling method for downstream tasks after deletion, true: all downstream tasks run normally false: all downstream tasks fail
                     */
                    bool m_deleteMode;
                    bool m_deleteModeHasBeenSet;

                    /**
                     * Notify downstream task owners after task deletion, true: notify false: do not notify
                     */
                    bool m_enableNotify;
                    bool m_enableNotifyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DELETEWORKFLOWBYIDREQUEST_H_
