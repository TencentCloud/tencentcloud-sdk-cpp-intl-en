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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_CREATEACCOUNTUSERREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_CREATEACCOUNTUSERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
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
                * CreateAccountUser request structure.
                */
                class CreateAccountUserRequest : public AbstractModel
                {
                public:
                    CreateAccountUserRequest();
                    ~CreateAccountUserRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID. For example, cmgo-p8vn****. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/MongoDB), and copy the instance ID from the instance list.
                     * @return InstanceId Instance ID. For example, cmgo-p8vn****. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/MongoDB), and copy the instance ID from the instance list.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID. For example, cmgo-p8vn****. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/MongoDB), and copy the instance ID from the instance list.
                     * @param _instanceId Instance ID. For example, cmgo-p8vn****. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/MongoDB), and copy the instance ID from the instance list.
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
                     * 获取New account name. The format requirements are as follows:
- The value range for the character length is [1, 64].
- Allowed characters include uppercase letters, lowercase letters, digits (1–9), underscores (\_), and hyphens (-).
                     * @return UserName New account name. The format requirements are as follows:
- The value range for the character length is [1, 64].
- Allowed characters include uppercase letters, lowercase letters, digits (1–9), underscores (\_), and hyphens (-).
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置New account name. The format requirements are as follows:
- The value range for the character length is [1, 64].
- Allowed characters include uppercase letters, lowercase letters, digits (1–9), underscores (\_), and hyphens (-).
                     * @param _userName New account name. The format requirements are as follows:
- The value range for the character length is [1, 64].
- Allowed characters include uppercase letters, lowercase letters, digits (1–9), underscores (\_), and hyphens (-).
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
                     * 获取New account password. The password complexity requirements are as follows:
- The value range for the character length is [8, 32].
- It should include at least two of the following: letters, digits, and special characters (the exclamation mark (!), at sign (@), number sign (#), percent sign (%), caret (^), asterisk (*), parentheses (), and underscore (_)).
                     * @return Password New account password. The password complexity requirements are as follows:
- The value range for the character length is [8, 32].
- It should include at least two of the following: letters, digits, and special characters (the exclamation mark (!), at sign (@), number sign (#), percent sign (%), caret (^), asterisk (*), parentheses (), and underscore (_)).
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置New account password. The password complexity requirements are as follows:
- The value range for the character length is [8, 32].
- It should include at least two of the following: letters, digits, and special characters (the exclamation mark (!), at sign (@), number sign (#), percent sign (%), caret (^), asterisk (*), parentheses (), and underscore (_)).
                     * @param _password New account password. The password complexity requirements are as follows:
- The value range for the character length is [8, 32].
- It should include at least two of the following: letters, digits, and special characters (the exclamation mark (!), at sign (@), number sign (#), percent sign (%), caret (^), asterisk (*), parentheses (), and underscore (_)).
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
                     * 获取Password corresponding to the mongouser account. mongouser is the default account of the system; it indicates the password set during instance creation.
                     * @return MongoUserPassword Password corresponding to the mongouser account. mongouser is the default account of the system; it indicates the password set during instance creation.
                     * 
                     */
                    std::string GetMongoUserPassword() const;

                    /**
                     * 设置Password corresponding to the mongouser account. mongouser is the default account of the system; it indicates the password set during instance creation.
                     * @param _mongoUserPassword Password corresponding to the mongouser account. mongouser is the default account of the system; it indicates the password set during instance creation.
                     * 
                     */
                    void SetMongoUserPassword(const std::string& _mongoUserPassword);

                    /**
                     * 判断参数 MongoUserPassword 是否已赋值
                     * @return MongoUserPassword 是否已赋值
                     * 
                     */
                    bool MongoUserPasswordHasBeenSet() const;

                    /**
                     * 获取Account remarks.
                     * @return UserDesc Account remarks.
                     * 
                     */
                    std::string GetUserDesc() const;

                    /**
                     * 设置Account remarks.
                     * @param _userDesc Account remarks.
                     * 
                     */
                    void SetUserDesc(const std::string& _userDesc);

                    /**
                     * 判断参数 UserDesc 是否已赋值
                     * @return UserDesc 是否已赋值
                     * 
                     */
                    bool UserDescHasBeenSet() const;

                    /**
                     * 获取Read/Write permission information of the account.
                     * @return AuthRole Read/Write permission information of the account.
                     * 
                     */
                    std::vector<Auth> GetAuthRole() const;

                    /**
                     * 设置Read/Write permission information of the account.
                     * @param _authRole Read/Write permission information of the account.
                     * 
                     */
                    void SetAuthRole(const std::vector<Auth>& _authRole);

                    /**
                     * 判断参数 AuthRole 是否已赋值
                     * @return AuthRole 是否已赋值
                     * 
                     */
                    bool AuthRoleHasBeenSet() const;

                private:

                    /**
                     * Instance ID. For example, cmgo-p8vn****. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/MongoDB), and copy the instance ID from the instance list.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * New account name. The format requirements are as follows:
- The value range for the character length is [1, 64].
- Allowed characters include uppercase letters, lowercase letters, digits (1–9), underscores (\_), and hyphens (-).
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * New account password. The password complexity requirements are as follows:
- The value range for the character length is [8, 32].
- It should include at least two of the following: letters, digits, and special characters (the exclamation mark (!), at sign (@), number sign (#), percent sign (%), caret (^), asterisk (*), parentheses (), and underscore (_)).
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * Password corresponding to the mongouser account. mongouser is the default account of the system; it indicates the password set during instance creation.
                     */
                    std::string m_mongoUserPassword;
                    bool m_mongoUserPasswordHasBeenSet;

                    /**
                     * Account remarks.
                     */
                    std::string m_userDesc;
                    bool m_userDescHasBeenSet;

                    /**
                     * Read/Write permission information of the account.
                     */
                    std::vector<Auth> m_authRole;
                    bool m_authRoleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_CREATEACCOUNTUSERREQUEST_H_
