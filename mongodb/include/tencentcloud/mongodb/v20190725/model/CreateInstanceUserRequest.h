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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_CREATEINSTANCEUSERREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_CREATEINSTANCEUSERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mongodb/v20190725/model/Role.h>
#include <tencentcloud/mongodb/v20190725/model/Auth.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * CreateInstanceUser request structure.
                */
                class CreateInstanceUserRequest : public AbstractModel
                {
                public:
                    CreateInstanceUserRequest();
                    ~CreateInstanceUserRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Instance id</p>
                     * @return InstanceId <p>Instance id</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance id</p>
                     * @param _instanceId <p>Instance id</p>
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
                     * 获取<p>Username.</p>
                     * @return UserName <p>Username.</p>
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>Username.</p>
                     * @param _userName <p>Username.</p>
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取<p>Password</p>
                     * @return Password <p>Password</p>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置<p>Password</p>
                     * @param _password <p>Password</p>
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取<p>Encrypted password (choose either this or Password)</p>
                     * @return EncryptedPassword <p>Encrypted password (choose either this or Password)</p>
                     * 
                     */
                    std::string GetEncryptedPassword() const;

                    /**
                     * 设置<p>Encrypted password (choose either this or Password)</p>
                     * @param _encryptedPassword <p>Encrypted password (choose either this or Password)</p>
                     * 
                     */
                    void SetEncryptedPassword(const std::string& _encryptedPassword);

                    /**
                     * 判断参数 EncryptedPassword 是否已赋值
                     * @return EncryptedPassword 是否已赋值
                     * 
                     */
                    bool EncryptedPasswordHasBeenSet() const;

                    /**
                     * 获取<p>Authentication database (Belonging Database of the user).</p>
                     * @return Database <p>Authentication database (Belonging Database of the user).</p>
                     * 
                     */
                    std::string GetDatabase() const;

                    /**
                     * 设置<p>Authentication database (Belonging Database of the user).</p>
                     * @param _database <p>Authentication database (Belonging Database of the user).</p>
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
                     * 获取<p>Get role list (new method, can include built-in role and custom role)</p>
                     * @return Roles <p>Get role list (new method, can include built-in role and custom role)</p>
                     * 
                     */
                    std::vector<Role> GetRoles() const;

                    /**
                     * 设置<p>Get role list (new method, can include built-in role and custom role)</p>
                     * @param _roles <p>Get role list (new method, can include built-in role and custom role)</p>
                     * 
                     */
                    void SetRoles(const std::vector<Role>& _roles);

                    /**
                     * 判断参数 Roles 是否已赋值
                     * @return Roles 是否已赋值
                     * 
                     */
                    bool RolesHasBeenSet() const;

                    /**
                     * 获取<p>Permission list (old method)</p>
                     * @return AuthRole <p>Permission list (old method)</p>
                     * 
                     */
                    std::vector<Auth> GetAuthRole() const;

                    /**
                     * 设置<p>Permission list (old method)</p>
                     * @param _authRole <p>Permission list (old method)</p>
                     * 
                     */
                    void SetAuthRole(const std::vector<Auth>& _authRole);

                    /**
                     * 判断参数 AuthRole 是否已赋值
                     * @return AuthRole 是否已赋值
                     * 
                     */
                    bool AuthRoleHasBeenSet() const;

                    /**
                     * 获取<p>Custom description.</p>
                     * @return Description <p>Custom description.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Custom description.</p>
                     * @param _description <p>Custom description.</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>Whether password rotation is enabled (0: not enabled, 1: enabled)</p>
                     * @return EnablePasswordRotation <p>Whether password rotation is enabled (0: not enabled, 1: enabled)</p>
                     * 
                     */
                    int64_t GetEnablePasswordRotation() const;

                    /**
                     * 设置<p>Whether password rotation is enabled (0: not enabled, 1: enabled)</p>
                     * @param _enablePasswordRotation <p>Whether password rotation is enabled (0: not enabled, 1: enabled)</p>
                     * 
                     */
                    void SetEnablePasswordRotation(const int64_t& _enablePasswordRotation);

                    /**
                     * 判断参数 EnablePasswordRotation 是否已赋值
                     * @return EnablePasswordRotation 是否已赋值
                     * 
                     */
                    bool EnablePasswordRotationHasBeenSet() const;

                private:

                    /**
                     * <p>Instance id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Username.</p>
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>Password</p>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * <p>Encrypted password (choose either this or Password)</p>
                     */
                    std::string m_encryptedPassword;
                    bool m_encryptedPasswordHasBeenSet;

                    /**
                     * <p>Authentication database (Belonging Database of the user).</p>
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * <p>Get role list (new method, can include built-in role and custom role)</p>
                     */
                    std::vector<Role> m_roles;
                    bool m_rolesHasBeenSet;

                    /**
                     * <p>Permission list (old method)</p>
                     */
                    std::vector<Auth> m_authRole;
                    bool m_authRoleHasBeenSet;

                    /**
                     * <p>Custom description.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Whether password rotation is enabled (0: not enabled, 1: enabled)</p>
                     */
                    int64_t m_enablePasswordRotation;
                    bool m_enablePasswordRotationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_CREATEINSTANCEUSERREQUEST_H_
