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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_RESETPASSWORDREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_RESETPASSWORDREQUEST_H_

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
                * ResetPassword request structure.
                */
                class ResetPasswordRequest : public AbstractModel
                {
                public:
                    ResetPasswordRequest();
                    ~ResetPasswordRequest() = default;
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
                     * 获取Reset password. This parameter can be left blank when a password-free instance is used. It is required in other cases.
                     * @return Password Reset password. This parameter can be left blank when a password-free instance is used. It is required in other cases.
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Reset password. This parameter can be left blank when a password-free instance is used. It is required in other cases.
                     * @param _password Reset password. This parameter can be left blank when a password-free instance is used. It is required in other cases.
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
                     * 获取Whether to switch to a password-free instance.
- false: Switch to a non-password-free instance.
- true: Switch to a password-free instance. Default value: false.
                     * @return NoAuth Whether to switch to a password-free instance.
- false: Switch to a non-password-free instance.
- true: Switch to a password-free instance. Default value: false.
                     * 
                     */
                    bool GetNoAuth() const;

                    /**
                     * 设置Whether to switch to a password-free instance.
- false: Switch to a non-password-free instance.
- true: Switch to a password-free instance. Default value: false.
                     * @param _noAuth Whether to switch to a password-free instance.
- false: Switch to a non-password-free instance.
- true: Switch to a password-free instance. Default value: false.
                     * 
                     */
                    void SetNoAuth(const bool& _noAuth);

                    /**
                     * 判断参数 NoAuth 是否已赋值
                     * @return NoAuth 是否已赋值
                     * 
                     */
                    bool NoAuthHasBeenSet() const;

                private:

                    /**
                     * Instance ID. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Reset password. This parameter can be left blank when a password-free instance is used. It is required in other cases.
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * Whether to switch to a password-free instance.
- false: Switch to a non-password-free instance.
- true: Switch to a password-free instance. Default value: false.
                     */
                    bool m_noAuth;
                    bool m_noAuthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_RESETPASSWORDREQUEST_H_
