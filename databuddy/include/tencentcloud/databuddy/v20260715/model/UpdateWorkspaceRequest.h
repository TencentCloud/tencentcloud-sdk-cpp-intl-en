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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_UPDATEWORKSPACEREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_UPDATEWORKSPACEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * UpdateWorkspace request structure.
                */
                class UpdateWorkspaceRequest : public AbstractModel
                {
                public:
                    UpdateWorkspaceRequest();
                    ~UpdateWorkspaceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Workspace ID</p>
                     * @return WorkspaceId <p>Workspace ID</p>
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置<p>Workspace ID</p>
                     * @param _workspaceId <p>Workspace ID</p>
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
                     * 获取<p>Workspace name. max_len=128</p>
                     * @return WorkspaceName <p>Workspace name. max_len=128</p>
                     * 
                     */
                    std::string GetWorkspaceName() const;

                    /**
                     * 设置<p>Workspace name. max_len=128</p>
                     * @param _workspaceName <p>Workspace name. max_len=128</p>
                     * 
                     */
                    void SetWorkspaceName(const std::string& _workspaceName);

                    /**
                     * 判断参数 WorkspaceName 是否已赋值
                     * @return WorkspaceName 是否已赋值
                     * 
                     */
                    bool WorkspaceNameHasBeenSet() const;

                    /**
                     * 获取<p>Workspace description, max_len=300</p>
                     * @return Description <p>Workspace description, max_len=300</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Workspace description, max_len=300</p>
                     * @param _description <p>Workspace description, max_len=300</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * <p>Workspace ID</p>
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * <p>Workspace name. max_len=128</p>
                     */
                    std::string m_workspaceName;
                    bool m_workspaceNameHasBeenSet;

                    /**
                     * <p>Workspace description, max_len=300</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_UPDATEWORKSPACEREQUEST_H_
