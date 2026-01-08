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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_CREATEUSERREQUEST_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_CREATEUSERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mqtt
    {
        namespace V20240516
        {
            namespace Model
            {
                /**
                * CreateUser request structure.
                */
                class CreateUserRequest : public AbstractModel
                {
                public:
                    CreateUserRequest();
                    ~CreateUserRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID, obtained from the [DescribeInstanceList](https://www.tencentcloud.comom/document/api/1778/111029?from_cn_redirect=1) api or console.
                     * @return InstanceId Instance ID, obtained from the [DescribeInstanceList](https://www.tencentcloud.comom/document/api/1778/111029?from_cn_redirect=1) api or console.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID, obtained from the [DescribeInstanceList](https://www.tencentcloud.comom/document/api/1778/111029?from_cn_redirect=1) api or console.
                     * @param _instanceId Instance ID, obtained from the [DescribeInstanceList](https://www.tencentcloud.comom/document/api/1778/111029?from_cn_redirect=1) api or console.
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
                     * 获取Specifies the username, which cannot be empty, only supports numbers, uppercase and lowercase letters, and separators ("_", "-"), and must not exceed 32 characters.
                     * @return Username Specifies the username, which cannot be empty, only supports numbers, uppercase and lowercase letters, and separators ("_", "-"), and must not exceed 32 characters.
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置Specifies the username, which cannot be empty, only supports numbers, uppercase and lowercase letters, and separators ("_", "-"), and must not exceed 32 characters.
                     * @param _username Specifies the username, which cannot be empty, only supports numbers, uppercase and lowercase letters, and separators ("_", "-"), and must not exceed 32 characters.
                     * 
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     * 
                     */
                    bool UsernameHasBeenSet() const;

                    /**
                     * 获取Specifies the password. if this field is empty, the backend performs default generation. when using a user-defined password, the value cannot be empty, only supports numbers, uppercase and lowercase letters, and separators ("_", "-"), and must not exceed 64 characters.
                     * @return Password Specifies the password. if this field is empty, the backend performs default generation. when using a user-defined password, the value cannot be empty, only supports numbers, uppercase and lowercase letters, and separators ("_", "-"), and must not exceed 64 characters.
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Specifies the password. if this field is empty, the backend performs default generation. when using a user-defined password, the value cannot be empty, only supports numbers, uppercase and lowercase letters, and separators ("_", "-"), and must not exceed 64 characters.
                     * @param _password Specifies the password. if this field is empty, the backend performs default generation. when using a user-defined password, the value cannot be empty, only supports numbers, uppercase and lowercase letters, and separators ("_", "-"), and must not exceed 64 characters.
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
                     * 获取Specifies the remark with length not exceeding 128 characters.
                     * @return Remark Specifies the remark with length not exceeding 128 characters.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Specifies the remark with length not exceeding 128 characters.
                     * @param _remark Specifies the remark with length not exceeding 128 characters.
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * Instance ID, obtained from the [DescribeInstanceList](https://www.tencentcloud.comom/document/api/1778/111029?from_cn_redirect=1) api or console.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Specifies the username, which cannot be empty, only supports numbers, uppercase and lowercase letters, and separators ("_", "-"), and must not exceed 32 characters.
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * Specifies the password. if this field is empty, the backend performs default generation. when using a user-defined password, the value cannot be empty, only supports numbers, uppercase and lowercase letters, and separators ("_", "-"), and must not exceed 64 characters.
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * Specifies the remark with length not exceeding 128 characters.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_CREATEUSERREQUEST_H_
