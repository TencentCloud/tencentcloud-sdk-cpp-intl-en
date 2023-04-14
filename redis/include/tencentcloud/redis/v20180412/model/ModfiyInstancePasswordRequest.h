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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_MODFIYINSTANCEPASSWORDREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_MODFIYINSTANCEPASSWORDREQUEST_H_

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
                * ModfiyInstancePassword request structure.
                */
                class ModfiyInstancePasswordRequest : public AbstractModel
                {
                public:
                    ModfiyInstancePasswordRequest();
                    ~ModfiyInstancePasswordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param InstanceId Instance ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Old password of an instance
                     * @return OldPassword Old password of an instance
                     */
                    std::string GetOldPassword() const;

                    /**
                     * 设置Old password of an instance
                     * @param OldPassword Old password of an instance
                     */
                    void SetOldPassword(const std::string& _oldPassword);

                    /**
                     * 判断参数 OldPassword 是否已赋值
                     * @return OldPassword 是否已赋值
                     */
                    bool OldPasswordHasBeenSet() const;

                    /**
                     * 获取New instance password, which has the following requirements:
- It must contain 8-30 characters, preferably 12 or more.
- It cannot start with a slash (/)
- It must contain two of the following three types: lowercase letters, uppercase letters, and symbols (()~!@#$%^&*-+=_|{}[]:;<>,.?/)
                     * @return Password New instance password, which has the following requirements:
- It must contain 8-30 characters, preferably 12 or more.
- It cannot start with a slash (/)
- It must contain two of the following three types: lowercase letters, uppercase letters, and symbols (()~!@#$%^&*-+=_|{}[]:;<>,.?/)
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置New instance password, which has the following requirements:
- It must contain 8-30 characters, preferably 12 or more.
- It cannot start with a slash (/)
- It must contain two of the following three types: lowercase letters, uppercase letters, and symbols (()~!@#$%^&*-+=_|{}[]:;<>,.?/)
                     * @param Password New instance password, which has the following requirements:
- It must contain 8-30 characters, preferably 12 or more.
- It cannot start with a slash (/)
- It must contain two of the following three types: lowercase letters, uppercase letters, and symbols (()~!@#$%^&*-+=_|{}[]:;<>,.?/)
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     */
                    bool PasswordHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Old password of an instance
                     */
                    std::string m_oldPassword;
                    bool m_oldPasswordHasBeenSet;

                    /**
                     * New instance password, which has the following requirements:
- It must contain 8-30 characters, preferably 12 or more.
- It cannot start with a slash (/)
- It must contain two of the following three types: lowercase letters, uppercase letters, and symbols (()~!@#$%^&*-+=_|{}[]:;<>,.?/)
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_MODFIYINSTANCEPASSWORDREQUEST_H_
