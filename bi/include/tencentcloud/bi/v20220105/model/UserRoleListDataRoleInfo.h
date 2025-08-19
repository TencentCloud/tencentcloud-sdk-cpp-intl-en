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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_USERROLELISTDATAROLEINFO_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_USERROLELISTDATAROLEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * Role information of the user role list
                */
                class UserRoleListDataRoleInfo : public AbstractModel
                {
                public:
                    UserRoleListDataRoleInfo();
                    ~UserRoleListDataRoleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Role Name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RoleName Role Name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置Role Name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _roleName Role Name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRoleName(const std::string& _roleName);

                    /**
                     * 判断参数 RoleName 是否已赋值
                     * @return RoleName 是否已赋值
                     * 
                     */
                    bool RoleNameHasBeenSet() const;

                    /**
                     * 获取Role ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RoleId Role ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRoleId() const;

                    /**
                     * 设置Role ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _roleId Role ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRoleId(const int64_t& _roleId);

                    /**
                     * 判断参数 RoleId 是否已赋值
                     * @return RoleId 是否已赋值
                     * 
                     */
                    bool RoleIdHasBeenSet() const;

                    /**
                     * 获取Project ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProjectId Project ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _projectId Project ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Project name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProjectName Project name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置Project name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _projectName Project name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取Whether it is a global role (0: no; 1: yes).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ScopeType Whether it is a global role (0: no; 1: yes).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetScopeType() const;

                    /**
                     * 设置Whether it is a global role (0: no; 1: yes).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _scopeType Whether it is a global role (0: no; 1: yes).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetScopeType(const int64_t& _scopeType);

                    /**
                     * 判断参数 ScopeType 是否已赋值
                     * @return ScopeType 是否已赋值
                     * 
                     */
                    bool ScopeTypeHasBeenSet() const;

                    /**
                     * 获取Role key.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ModuleCollection Role key.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetModuleCollection() const;

                    /**
                     * 设置Role key.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _moduleCollection Role key.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetModuleCollection(const std::string& _moduleCollection);

                    /**
                     * 判断参数 ModuleCollection 是否已赋值
                     * @return ModuleCollection 是否已赋值
                     * 
                     */
                    bool ModuleCollectionHasBeenSet() const;

                private:

                    /**
                     * Role Name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * Role ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_roleId;
                    bool m_roleIdHasBeenSet;

                    /**
                     * Project ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Project name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * Whether it is a global role (0: no; 1: yes).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_scopeType;
                    bool m_scopeTypeHasBeenSet;

                    /**
                     * Role key.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_moduleCollection;
                    bool m_moduleCollectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_USERROLELISTDATAROLEINFO_H_
