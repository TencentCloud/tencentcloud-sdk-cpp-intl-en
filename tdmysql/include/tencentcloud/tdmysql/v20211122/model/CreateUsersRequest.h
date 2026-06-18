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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_CREATEUSERSREQUEST_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_CREATEUSERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmysql/v20211122/model/User.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * CreateUsers request structure.
                */
                class CreateUsersRequest : public AbstractModel
                {
                public:
                    CreateUsersRequest();
                    ~CreateUsersRequest() = default;
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
                     * 获取<p>Add user list</p>
                     * @return Users <p>Add user list</p>
                     * 
                     */
                    std::vector<User> GetUsers() const;

                    /**
                     * 设置<p>Add user list</p>
                     * @param _users <p>Add user list</p>
                     * 
                     */
                    void SetUsers(const std::vector<User>& _users);

                    /**
                     * 判断参数 Users 是否已赋值
                     * @return Users 是否已赋值
                     * 
                     */
                    bool UsersHasBeenSet() const;

                    /**
                     * 获取<p>Unencrypted password</p>
                     * @return Password <p>Unencrypted password</p>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置<p>Unencrypted password</p>
                     * @param _password <p>Unencrypted password</p>
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
                     * 获取<p>Encryption password</p>
                     * @return EncryptedPassword <p>Encryption password</p>
                     * 
                     */
                    std::string GetEncryptedPassword() const;

                    /**
                     * 设置<p>Encryption password</p>
                     * @param _encryptedPassword <p>Encryption password</p>
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
                     * 获取<p>User description</p>
                     * @return Description <p>User description</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>User description</p>
                     * @param _description <p>User description</p>
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
                     * <p>Instance id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Add user list</p>
                     */
                    std::vector<User> m_users;
                    bool m_usersHasBeenSet;

                    /**
                     * <p>Unencrypted password</p>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * <p>Encryption password</p>
                     */
                    std::string m_encryptedPassword;
                    bool m_encryptedPasswordHasBeenSet;

                    /**
                     * <p>User description</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_CREATEUSERSREQUEST_H_
