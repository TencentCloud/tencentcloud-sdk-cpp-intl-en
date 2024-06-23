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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_UPDATEWORKFLOWOWNERREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_UPDATEWORKFLOWOWNERREQUEST_H_

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
                * UpdateWorkflowOwner request structure.
                */
                class UpdateWorkflowOwnerRequest : public AbstractModel
                {
                public:
                    UpdateWorkflowOwnerRequest();
                    ~UpdateWorkflowOwnerRequest() = default;
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
                     * 获取Workflow IDs
                     * @return WorkflowIds Workflow IDs
                     * 
                     */
                    std::vector<std::string> GetWorkflowIds() const;

                    /**
                     * 设置Workflow IDs
                     * @param _workflowIds Workflow IDs
                     * 
                     */
                    void SetWorkflowIds(const std::vector<std::string>& _workflowIds);

                    /**
                     * 判断参数 WorkflowIds 是否已赋值
                     * @return WorkflowIds 是否已赋值
                     * 
                     */
                    bool WorkflowIdsHasBeenSet() const;

                    /**
                     * 获取Person in charge, separated by ';'
                     * @return Owner Person in charge, separated by ';'
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置Person in charge, separated by ';'
                     * @param _owner Person in charge, separated by ';'
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
                     * 获取Person in Charge UserId, separated by ';'
                     * @return OwnerId Person in Charge UserId, separated by ';'
                     * 
                     */
                    std::string GetOwnerId() const;

                    /**
                     * 设置Person in Charge UserId, separated by ';'
                     * @param _ownerId Person in Charge UserId, separated by ';'
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
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Workflow IDs
                     */
                    std::vector<std::string> m_workflowIds;
                    bool m_workflowIdsHasBeenSet;

                    /**
                     * Person in charge, separated by ';'
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * Person in Charge UserId, separated by ';'
                     */
                    std::string m_ownerId;
                    bool m_ownerIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_UPDATEWORKFLOWOWNERREQUEST_H_
