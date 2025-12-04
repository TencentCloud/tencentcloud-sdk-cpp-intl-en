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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_SETACCOUNTUSERPRIVILEGEREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_SETACCOUNTUSERPRIVILEGEREQUEST_H_

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
                * SetAccountUserPrivilege request structure.
                */
                class SetAccountUserPrivilegeRequest : public AbstractModel
                {
                public:
                    SetAccountUserPrivilegeRequest();
                    ~SetAccountUserPrivilegeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies the instance ID for the account to be configured. For example, cmgo-p8vn****. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/MongoDB), and copy the instance ID from the instance list.
                     * @return InstanceId Specifies the instance ID for the account to be configured. For example, cmgo-p8vn****. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/MongoDB), and copy the instance ID from the instance list.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Specifies the instance ID for the account to be configured. For example, cmgo-p8vn****. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/MongoDB), and copy the instance ID from the instance list.
                     * @param _instanceId Specifies the instance ID for the account to be configured. For example, cmgo-p8vn****. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/MongoDB), and copy the instance ID from the instance list.
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
                     * 获取Sets the account name to access the instance. The setting requirements are as follows: The name should be started with a letter and its length should be 1–64 characters. Only uppercase letters, lowercase letters, digits (1–9), underscores (_), and hyphens (-) can be entered.
                     * @return UserName Sets the account name to access the instance. The setting requirements are as follows: The name should be started with a letter and its length should be 1–64 characters. Only uppercase letters, lowercase letters, digits (1–9), underscores (_), and hyphens (-) can be entered.
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Sets the account name to access the instance. The setting requirements are as follows: The name should be started with a letter and its length should be 1–64 characters. Only uppercase letters, lowercase letters, digits (1–9), underscores (_), and hyphens (-) can be entered.
                     * @param _userName Sets the account name to access the instance. The setting requirements are as follows: The name should be started with a letter and its length should be 1–64 characters. Only uppercase letters, lowercase letters, digits (1–9), underscores (_), and hyphens (-) can be entered.
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
                     * 获取Sets the permission information.
                     * @return AuthRole Sets the permission information.
                     * 
                     */
                    std::vector<Auth> GetAuthRole() const;

                    /**
                     * 设置Sets the permission information.
                     * @param _authRole Sets the permission information.
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
                     * Specifies the instance ID for the account to be configured. For example, cmgo-p8vn****. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/MongoDB), and copy the instance ID from the instance list.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Sets the account name to access the instance. The setting requirements are as follows: The name should be started with a letter and its length should be 1–64 characters. Only uppercase letters, lowercase letters, digits (1–9), underscores (_), and hyphens (-) can be entered.
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Sets the permission information.
                     */
                    std::vector<Auth> m_authRole;
                    bool m_authRoleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_SETACCOUNTUSERPRIVILEGEREQUEST_H_
