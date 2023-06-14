/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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
                     * 获取Redis instance ID
                     * @return InstanceId Redis instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Redis instance ID
                     * @param _instanceId Redis instance ID
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
                     * 获取Password reset (this parameter can be left blank when switching to password-free instance mode and is required in other cases)
                     * @return Password Password reset (this parameter can be left blank when switching to password-free instance mode and is required in other cases)
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Password reset (this parameter can be left blank when switching to password-free instance mode and is required in other cases)
                     * @param _password Password reset (this parameter can be left blank when switching to password-free instance mode and is required in other cases)
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
                     * 获取Whether to switch to password-free instance mode. false: switch to password-enabled instance mode; true: switch to password-free instance mode. Default value: false.
                     * @return NoAuth Whether to switch to password-free instance mode. false: switch to password-enabled instance mode; true: switch to password-free instance mode. Default value: false.
                     * 
                     */
                    bool GetNoAuth() const;

                    /**
                     * 设置Whether to switch to password-free instance mode. false: switch to password-enabled instance mode; true: switch to password-free instance mode. Default value: false.
                     * @param _noAuth Whether to switch to password-free instance mode. false: switch to password-enabled instance mode; true: switch to password-free instance mode. Default value: false.
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
                     * Redis instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Password reset (this parameter can be left blank when switching to password-free instance mode and is required in other cases)
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * Whether to switch to password-free instance mode. false: switch to password-enabled instance mode; true: switch to password-free instance mode. Default value: false.
                     */
                    bool m_noAuth;
                    bool m_noAuthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_RESETPASSWORDREQUEST_H_
