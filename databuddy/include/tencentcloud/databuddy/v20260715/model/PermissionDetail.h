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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_PERMISSIONDETAIL_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_PERMISSIONDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Entity permission information, for returning the current user's list of permissions for an entity in get/list APIs.
                */
                class PermissionDetail : public AbstractModel
                {
                public:
                    PermissionDetail();
                    ~PermissionDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Permission list of the current user for this entity.
                     * @return Permissions Permission list of the current user for this entity.
                     * 
                     */
                    std::vector<std::string> GetPermissions() const;

                    /**
                     * 设置Permission list of the current user for this entity.
                     * @param _permissions Permission list of the current user for this entity.
                     * 
                     */
                    void SetPermissions(const std::vector<std::string>& _permissions);

                    /**
                     * 判断参数 Permissions 是否已赋值
                     * @return Permissions 是否已赋值
                     * 
                     */
                    bool PermissionsHasBeenSet() const;

                    /**
                     * 获取Permission information of the catalog on the workspace (optional). Value: WORKSPACE_READONLY (read-only) or WORKSPACE_READWRITE (read-write).
                     * @return CatalogWorkspacePrivilege Permission information of the catalog on the workspace (optional). Value: WORKSPACE_READONLY (read-only) or WORKSPACE_READWRITE (read-write).
                     * 
                     */
                    std::string GetCatalogWorkspacePrivilege() const;

                    /**
                     * 设置Permission information of the catalog on the workspace (optional). Value: WORKSPACE_READONLY (read-only) or WORKSPACE_READWRITE (read-write).
                     * @param _catalogWorkspacePrivilege Permission information of the catalog on the workspace (optional). Value: WORKSPACE_READONLY (read-only) or WORKSPACE_READWRITE (read-write).
                     * 
                     */
                    void SetCatalogWorkspacePrivilege(const std::string& _catalogWorkspacePrivilege);

                    /**
                     * 判断参数 CatalogWorkspacePrivilege 是否已赋值
                     * @return CatalogWorkspacePrivilege 是否已赋值
                     * 
                     */
                    bool CatalogWorkspacePrivilegeHasBeenSet() const;

                    /**
                     * 获取Total deny permission list (user deny ∪ role deny ∪ inherited deny, deduplicated and excluded from Permissions)
                     * @return DenyPrivilegeList Total deny permission list (user deny ∪ role deny ∪ inherited deny, deduplicated and excluded from Permissions)
                     * 
                     */
                    std::vector<std::string> GetDenyPrivilegeList() const;

                    /**
                     * 设置Total deny permission list (user deny ∪ role deny ∪ inherited deny, deduplicated and excluded from Permissions)
                     * @param _denyPrivilegeList Total deny permission list (user deny ∪ role deny ∪ inherited deny, deduplicated and excluded from Permissions)
                     * 
                     */
                    void SetDenyPrivilegeList(const std::vector<std::string>& _denyPrivilegeList);

                    /**
                     * 判断参数 DenyPrivilegeList 是否已赋值
                     * @return DenyPrivilegeList 是否已赋值
                     * 
                     */
                    bool DenyPrivilegeListHasBeenSet() const;

                private:

                    /**
                     * Permission list of the current user for this entity.
                     */
                    std::vector<std::string> m_permissions;
                    bool m_permissionsHasBeenSet;

                    /**
                     * Permission information of the catalog on the workspace (optional). Value: WORKSPACE_READONLY (read-only) or WORKSPACE_READWRITE (read-write).
                     */
                    std::string m_catalogWorkspacePrivilege;
                    bool m_catalogWorkspacePrivilegeHasBeenSet;

                    /**
                     * Total deny permission list (user deny ∪ role deny ∪ inherited deny, deduplicated and excluded from Permissions)
                     */
                    std::vector<std::string> m_denyPrivilegeList;
                    bool m_denyPrivilegeListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_PERMISSIONDETAIL_H_
