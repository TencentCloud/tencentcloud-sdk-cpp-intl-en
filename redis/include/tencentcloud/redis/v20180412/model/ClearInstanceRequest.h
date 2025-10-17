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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_CLEARINSTANCEREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_CLEARINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * ClearInstance request structure.
                */
                class ClearInstanceRequest : public AbstractModel
                {
                public:
                    ClearInstanceRequest();
                    ~ClearInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list.
                     * @return InstanceId Instance ID. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list.
                     * @param _instanceId Instance ID. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list.
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
                     * 获取Instance access password.
- Password-free access: No configuration is required.
- Password authentication: The password is required. It cannot start with a forward slash (/) and should contain 8 to 64 characters, including at least two of the following types: lowercase letters, uppercase letters, digits, and special characters (such as ()`~!@#$%^&*-+=_|{}[]:;<>,.?/).
                     * @return Password Instance access password.
- Password-free access: No configuration is required.
- Password authentication: The password is required. It cannot start with a forward slash (/) and should contain 8 to 64 characters, including at least two of the following types: lowercase letters, uppercase letters, digits, and special characters (such as ()`~!@#$%^&*-+=_|{}[]:;<>,.?/).
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Instance access password.
- Password-free access: No configuration is required.
- Password authentication: The password is required. It cannot start with a forward slash (/) and should contain 8 to 64 characters, including at least two of the following types: lowercase letters, uppercase letters, digits, and special characters (such as ()`~!@#$%^&*-+=_|{}[]:;<>,.?/).
                     * @param _password Instance access password.
- Password-free access: No configuration is required.
- Password authentication: The password is required. It cannot start with a forward slash (/) and should contain 8 to 64 characters, including at least two of the following types: lowercase letters, uppercase letters, digits, and special characters (such as ()`~!@#$%^&*-+=_|{}[]:;<>,.?/).
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
                     * 获取Whether to encrypt the password.
                     * @return EncryptPassword Whether to encrypt the password.
                     * 
                     */
                    bool GetEncryptPassword() const;

                    /**
                     * 设置Whether to encrypt the password.
                     * @param _encryptPassword Whether to encrypt the password.
                     * 
                     */
                    void SetEncryptPassword(const bool& _encryptPassword);

                    /**
                     * 判断参数 EncryptPassword 是否已赋值
                     * @return EncryptPassword 是否已赋值
                     * 
                     */
                    bool EncryptPasswordHasBeenSet() const;

                private:

                    /**
                     * Instance ID. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance access password.
- Password-free access: No configuration is required.
- Password authentication: The password is required. It cannot start with a forward slash (/) and should contain 8 to 64 characters, including at least two of the following types: lowercase letters, uppercase letters, digits, and special characters (such as ()`~!@#$%^&*-+=_|{}[]:;<>,.?/).
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * Whether to encrypt the password.
                     */
                    bool m_encryptPassword;
                    bool m_encryptPasswordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_CLEARINSTANCEREQUEST_H_
