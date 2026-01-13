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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_RESETDBINSTANCEPASSWORDREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_RESETDBINSTANCEPASSWORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * ResetDBInstancePassword request structure.
                */
                class ResetDBInstancePasswordRequest : public AbstractModel
                {
                public:
                    ResetDBInstancePasswordRequest();
                    ~ResetDBInstancePasswordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies the instance ID. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and copy the instance ID from the instance list.
                     * @return InstanceId Specifies the instance ID. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and copy the instance ID from the instance list.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Specifies the instance ID. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and copy the instance ID from the instance list.
                     * @param _instanceId Specifies the instance ID. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and copy the instance ID from the instance list.
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
                     * 获取Specifies the account name for which the password needs to be changed. The [DescribeAccountUsers](https://www.tencentcloud.com/document/product/240/80800?from_cn_redirect=1) API can be called to obtain the account list and copy the account name for which the password needs to be changed.
                     * @return UserName Specifies the account name for which the password needs to be changed. The [DescribeAccountUsers](https://www.tencentcloud.com/document/product/240/80800?from_cn_redirect=1) API can be called to obtain the account list and copy the account name for which the password needs to be changed.
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Specifies the account name for which the password needs to be changed. The [DescribeAccountUsers](https://www.tencentcloud.com/document/product/240/80800?from_cn_redirect=1) API can be called to obtain the account list and copy the account name for which the password needs to be changed.
                     * @param _userName Specifies the account name for which the password needs to be changed. The [DescribeAccountUsers](https://www.tencentcloud.com/document/product/240/80800?from_cn_redirect=1) API can be called to obtain the account list and copy the account name for which the password needs to be changed.
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
                     * 获取Specifies a new password for the account. Password complexity requirements:
- It should contain 8–32 characters.
- It should contain at least two types of the following: letters, digits, and special characters (!@#%^\*()\_).
                     * @return Password Specifies a new password for the account. Password complexity requirements:
- It should contain 8–32 characters.
- It should contain at least two types of the following: letters, digits, and special characters (!@#%^\*()\_).
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Specifies a new password for the account. Password complexity requirements:
- It should contain 8–32 characters.
- It should contain at least two types of the following: letters, digits, and special characters (!@#%^\*()\_).
                     * @param _password Specifies a new password for the account. Password complexity requirements:
- It should contain 8–32 characters.
- It should contain at least two types of the following: letters, digits, and special characters (!@#%^\*()\_).
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                private:

                    /**
                     * Specifies the instance ID. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and copy the instance ID from the instance list.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Specifies the account name for which the password needs to be changed. The [DescribeAccountUsers](https://www.tencentcloud.com/document/product/240/80800?from_cn_redirect=1) API can be called to obtain the account list and copy the account name for which the password needs to be changed.
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Specifies a new password for the account. Password complexity requirements:
- It should contain 8–32 characters.
- It should contain at least two types of the following: letters, digits, and special characters (!@#%^\*()\_).
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_RESETDBINSTANCEPASSWORDREQUEST_H_
