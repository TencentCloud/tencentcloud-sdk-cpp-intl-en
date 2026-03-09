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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_DELETEWORKFLOWPERMISSIONSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_DELETEWORKFLOWPERMISSIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/DeleteWorkflowPermission.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * DeleteWorkflowPermissions request structure.
                */
                class DeleteWorkflowPermissionsRequest : public AbstractModel
                {
                public:
                    DeleteWorkflowPermissionsRequest();
                    ~DeleteWorkflowPermissionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Project ID.
                     * @return ProjectId Project ID.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID.
                     * @param _projectId Project ID.
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
                     * 获取Authorize entity ID.
                     * @return EntityId Authorize entity ID.
                     * 
                     */
                    std::string GetEntityId() const;

                    /**
                     * 设置Authorize entity ID.
                     * @param _entityId Authorize entity ID.
                     * 
                     */
                    void SetEntityId(const std::string& _entityId);

                    /**
                     * 判断参数 EntityId 是否已赋值
                     * @return EntityId 是否已赋值
                     * 
                     */
                    bool EntityIdHasBeenSet() const;

                    /**
                     * 获取Authorized entity type, folder/workflow.
                     * @return EntityType Authorized entity type, folder/workflow.
                     * 
                     */
                    std::string GetEntityType() const;

                    /**
                     * 设置Authorized entity type, folder/workflow.
                     * @param _entityType Authorized entity type, folder/workflow.
                     * 
                     */
                    void SetEntityType(const std::string& _entityType);

                    /**
                     * 判断参数 EntityType 是否已赋值
                     * @return EntityType 是否已赋值
                     * 
                     */
                    bool EntityTypeHasBeenSet() const;

                    /**
                     * 获取Delete permission array.
                     * @return DeletePermissionList Delete permission array.
                     * 
                     */
                    std::vector<DeleteWorkflowPermission> GetDeletePermissionList() const;

                    /**
                     * 设置Delete permission array.
                     * @param _deletePermissionList Delete permission array.
                     * 
                     */
                    void SetDeletePermissionList(const std::vector<DeleteWorkflowPermission>& _deletePermissionList);

                    /**
                     * 判断参数 DeletePermissionList 是否已赋值
                     * @return DeletePermissionList 是否已赋值
                     * 
                     */
                    bool DeletePermissionListHasBeenSet() const;

                private:

                    /**
                     * Project ID.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Authorize entity ID.
                     */
                    std::string m_entityId;
                    bool m_entityIdHasBeenSet;

                    /**
                     * Authorized entity type, folder/workflow.
                     */
                    std::string m_entityType;
                    bool m_entityTypeHasBeenSet;

                    /**
                     * Delete permission array.
                     */
                    std::vector<DeleteWorkflowPermission> m_deletePermissionList;
                    bool m_deletePermissionListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_DELETEWORKFLOWPERMISSIONSREQUEST_H_
