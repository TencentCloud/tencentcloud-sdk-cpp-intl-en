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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYINSTANCEPASSWORDREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYINSTANCEPASSWORDREQUEST_H_

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
                * ModifyInstancePassword request structure.
                */
                class ModifyInstancePasswordRequest : public AbstractModel
                {
                public:
                    ModifyInstancePasswordRequest();
                    ~ModifyInstancePasswordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies the instance ID. Example: crs-xjhsdj****. Log in to the [TencentDB for Redis console](https://console.cloud.tencent.com/redis) and copy the instance ID in the instance list.
                     * @return InstanceId Specifies the instance ID. Example: crs-xjhsdj****. Log in to the [TencentDB for Redis console](https://console.cloud.tencent.com/redis) and copy the instance ID in the instance list.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Specifies the instance ID. Example: crs-xjhsdj****. Log in to the [TencentDB for Redis console](https://console.cloud.tencent.com/redis) and copy the instance ID in the instance list.
                     * @param _instanceId Specifies the instance ID. Example: crs-xjhsdj****. Log in to the [TencentDB for Redis console](https://console.cloud.tencent.com/redis) and copy the instance ID in the instance list.
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
                     * 获取Old password of the instance.
                     * @return OldPassword Old password of the instance.
                     * 
                     */
                    std::string GetOldPassword() const;

                    /**
                     * 设置Old password of the instance.
                     * @param _oldPassword Old password of the instance.
                     * 
                     */
                    void SetOldPassword(const std::string& _oldPassword);

                    /**
                     * 判断参数 OldPassword 是否已赋值
                     * @return OldPassword 是否已赋值
                     * 
                     */
                    bool OldPasswordHasBeenSet() const;

                    /**
                     * 获取New password of the instance. The password complexity requirements are as follows:
- It can contain 8 to 30 characters. It is recommended to use a password of more than 12 characters.
- It cannot start with a forward slash (/).
- It should contain at least two of the following types: lowercase letters, uppercase letters, digits, and special characters (such as ()~!@#$%^&*-+=_|{}[]:;<>,.?/).
                     * @return Password New password of the instance. The password complexity requirements are as follows:
- It can contain 8 to 30 characters. It is recommended to use a password of more than 12 characters.
- It cannot start with a forward slash (/).
- It should contain at least two of the following types: lowercase letters, uppercase letters, digits, and special characters (such as ()~!@#$%^&*-+=_|{}[]:;<>,.?/).
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置New password of the instance. The password complexity requirements are as follows:
- It can contain 8 to 30 characters. It is recommended to use a password of more than 12 characters.
- It cannot start with a forward slash (/).
- It should contain at least two of the following types: lowercase letters, uppercase letters, digits, and special characters (such as ()~!@#$%^&*-+=_|{}[]:;<>,.?/).
                     * @param _password New password of the instance. The password complexity requirements are as follows:
- It can contain 8 to 30 characters. It is recommended to use a password of more than 12 characters.
- It cannot start with a forward slash (/).
- It should contain at least two of the following types: lowercase letters, uppercase letters, digits, and special characters (such as ()~!@#$%^&*-+=_|{}[]:;<>,.?/).
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
                     * Specifies the instance ID. Example: crs-xjhsdj****. Log in to the [TencentDB for Redis console](https://console.cloud.tencent.com/redis) and copy the instance ID in the instance list.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Old password of the instance.
                     */
                    std::string m_oldPassword;
                    bool m_oldPasswordHasBeenSet;

                    /**
                     * New password of the instance. The password complexity requirements are as follows:
- It can contain 8 to 30 characters. It is recommended to use a password of more than 12 characters.
- It cannot start with a forward slash (/).
- It should contain at least two of the following types: lowercase letters, uppercase letters, digits, and special characters (such as ()~!@#$%^&*-+=_|{}[]:;<>,.?/).
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYINSTANCEPASSWORDREQUEST_H_
