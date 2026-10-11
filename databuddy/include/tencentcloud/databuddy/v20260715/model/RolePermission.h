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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_ROLEPERMISSION_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_ROLEPERMISSION_H_

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
                * Role permission
                */
                class RolePermission : public AbstractModel
                {
                public:
                    RolePermission();
                    ~RolePermission() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Module ID, which must be the module ID of a feature module (leaf node) activated for the current tenant (hierarchical encoded string, for example 101=quick start, 109=workflow, 116101103=workspace management_role permission). An illegal value returns InvalidParameterValue. Method for obtaining the module list: call the ListWorkspaceModules API to query the workspace module list, and take the returned Items[].ModuleId field (leaf nodes with IsLeaf set to true). You can also view it on the "Workspace settings-Role permission" page in the console.</p>
                     * @return ModuleId <p>Module ID, which must be the module ID of a feature module (leaf node) activated for the current tenant (hierarchical encoded string, for example 101=quick start, 109=workflow, 116101103=workspace management_role permission). An illegal value returns InvalidParameterValue. Method for obtaining the module list: call the ListWorkspaceModules API to query the workspace module list, and take the returned Items[].ModuleId field (leaf nodes with IsLeaf set to true). You can also view it on the "Workspace settings-Role permission" page in the console.</p>
                     * 
                     */
                    std::string GetModuleId() const;

                    /**
                     * 设置<p>Module ID, which must be the module ID of a feature module (leaf node) activated for the current tenant (hierarchical encoded string, for example 101=quick start, 109=workflow, 116101103=workspace management_role permission). An illegal value returns InvalidParameterValue. Method for obtaining the module list: call the ListWorkspaceModules API to query the workspace module list, and take the returned Items[].ModuleId field (leaf nodes with IsLeaf set to true). You can also view it on the "Workspace settings-Role permission" page in the console.</p>
                     * @param _moduleId <p>Module ID, which must be the module ID of a feature module (leaf node) activated for the current tenant (hierarchical encoded string, for example 101=quick start, 109=workflow, 116101103=workspace management_role permission). An illegal value returns InvalidParameterValue. Method for obtaining the module list: call the ListWorkspaceModules API to query the workspace module list, and take the returned Items[].ModuleId field (leaf nodes with IsLeaf set to true). You can also view it on the "Workspace settings-Role permission" page in the console.</p>
                     * 
                     */
                    void SetModuleId(const std::string& _moduleId);

                    /**
                     * 判断参数 ModuleId 是否已赋值
                     * @return ModuleId 是否已赋值
                     * 
                     */
                    bool ModuleIdHasBeenSet() const;

                    /**
                     * 获取<p>Module access permission. Single value: R=read-only, RW=read-write, RWD=read and write delete, N=no permission</p>
                     * @return Permissions <p>Module access permission. Single value: R=read-only, RW=read-write, RWD=read and write delete, N=no permission</p>
                     * 
                     */
                    std::string GetPermissions() const;

                    /**
                     * 设置<p>Module access permission. Single value: R=read-only, RW=read-write, RWD=read and write delete, N=no permission</p>
                     * @param _permissions <p>Module access permission. Single value: R=read-only, RW=read-write, RWD=read and write delete, N=no permission</p>
                     * 
                     */
                    void SetPermissions(const std::string& _permissions);

                    /**
                     * 判断参数 Permissions 是否已赋值
                     * @return Permissions 是否已赋值
                     * 
                     */
                    bool PermissionsHasBeenSet() const;

                private:

                    /**
                     * <p>Module ID, which must be the module ID of a feature module (leaf node) activated for the current tenant (hierarchical encoded string, for example 101=quick start, 109=workflow, 116101103=workspace management_role permission). An illegal value returns InvalidParameterValue. Method for obtaining the module list: call the ListWorkspaceModules API to query the workspace module list, and take the returned Items[].ModuleId field (leaf nodes with IsLeaf set to true). You can also view it on the "Workspace settings-Role permission" page in the console.</p>
                     */
                    std::string m_moduleId;
                    bool m_moduleIdHasBeenSet;

                    /**
                     * <p>Module access permission. Single value: R=read-only, RW=read-write, RWD=read and write delete, N=no permission</p>
                     */
                    std::string m_permissions;
                    bool m_permissionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_ROLEPERMISSION_H_
