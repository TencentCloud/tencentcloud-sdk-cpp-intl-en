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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_UPDATEINSTANCEROLEREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_UPDATEINSTANCEROLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mongodb/v20190725/model/RolePrivilege.h>
#include <tencentcloud/mongodb/v20190725/model/Role.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * UpdateInstanceRole request structure.
                */
                class UpdateInstanceRoleRequest : public AbstractModel
                {
                public:
                    UpdateInstanceRoleRequest();
                    ~UpdateInstanceRoleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Instance ID.</p>
                     * @return InstanceId <p>Instance ID.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance ID.</p>
                     * @param _instanceId <p>Instance ID.</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>Role name.</p>
                     * @return RoleName <p>Role name.</p>
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置<p>Role name.</p>
                     * @param _roleName <p>Role name.</p>
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
                     * 获取<p>Belonging Database of the character.</p>
                     * @return Database <p>Belonging Database of the character.</p>
                     * 
                     */
                    std::string GetDatabase() const;

                    /**
                     * 设置<p>Belonging Database of the character.</p>
                     * @param _database <p>Belonging Database of the character.</p>
                     * 
                     */
                    void SetDatabase(const std::string& _database);

                    /**
                     * 判断参数 Database 是否已赋值
                     * @return Database 是否已赋值
                     * 
                     */
                    bool DatabaseHasBeenSet() const;

                    /**
                     * 获取<p>Role permission list. If not passed, no modification will be made.</p>
                     * @return Privileges <p>Role permission list. If not passed, no modification will be made.</p>
                     * 
                     */
                    std::vector<RolePrivilege> GetPrivileges() const;

                    /**
                     * 设置<p>Role permission list. If not passed, no modification will be made.</p>
                     * @param _privileges <p>Role permission list. If not passed, no modification will be made.</p>
                     * 
                     */
                    void SetPrivileges(const std::vector<RolePrivilege>& _privileges);

                    /**
                     * 判断参数 Privileges 是否已赋值
                     * @return Privileges 是否已赋值
                     * 
                     */
                    bool PrivilegesHasBeenSet() const;

                    /**
                     * 获取<p>Get role list. If not passed, no modification is made.</p>
                     * @return InheritedRoles <p>Get role list. If not passed, no modification is made.</p>
                     * 
                     */
                    std::vector<Role> GetInheritedRoles() const;

                    /**
                     * 设置<p>Get role list. If not passed, no modification is made.</p>
                     * @param _inheritedRoles <p>Get role list. If not passed, no modification is made.</p>
                     * 
                     */
                    void SetInheritedRoles(const std::vector<Role>& _inheritedRoles);

                    /**
                     * 判断参数 InheritedRoles 是否已赋值
                     * @return InheritedRoles 是否已赋值
                     * 
                     */
                    bool InheritedRolesHasBeenSet() const;

                private:

                    /**
                     * <p>Instance ID.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Role name.</p>
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * <p>Belonging Database of the character.</p>
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * <p>Role permission list. If not passed, no modification will be made.</p>
                     */
                    std::vector<RolePrivilege> m_privileges;
                    bool m_privilegesHasBeenSet;

                    /**
                     * <p>Get role list. If not passed, no modification is made.</p>
                     */
                    std::vector<Role> m_inheritedRoles;
                    bool m_inheritedRolesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_UPDATEINSTANCEROLEREQUEST_H_
