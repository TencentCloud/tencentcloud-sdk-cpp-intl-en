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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_LOGINSETTINGS_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_LOGINSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Login settings.
                */
                class LoginSettings : public AbstractModel
                {
                public:
                    LoginSettings();
                    ~LoginSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance login password, with 8 to 16 characters, including uppercase letters, lowercase letters, digits, and special characters. Special characters only support !@%^*. The password cannot start with a special character.
                     * @return Password Instance login password, with 8 to 16 characters, including uppercase letters, lowercase letters, digits, and special characters. Special characters only support !@%^*. The password cannot start with a special character.
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Instance login password, with 8 to 16 characters, including uppercase letters, lowercase letters, digits, and special characters. Special characters only support !@%^*. The password cannot start with a special character.
                     * @param _password Instance login password, with 8 to 16 characters, including uppercase letters, lowercase letters, digits, and special characters. Special characters only support !@%^*. The password cannot start with a special character.
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
                     * 获取Key ID. After a key is associated, the instance can be accessed with the corresponding private key; PublicKeyId can be obtained through the API [DescribeKeyPairs](https://www.tencentcloud.com/document/api/213/15699?from_cn_redirect=1).
                     * @return PublicKeyId Key ID. After a key is associated, the instance can be accessed with the corresponding private key; PublicKeyId can be obtained through the API [DescribeKeyPairs](https://www.tencentcloud.com/document/api/213/15699?from_cn_redirect=1).
                     * 
                     */
                    std::string GetPublicKeyId() const;

                    /**
                     * 设置Key ID. After a key is associated, the instance can be accessed with the corresponding private key; PublicKeyId can be obtained through the API [DescribeKeyPairs](https://www.tencentcloud.com/document/api/213/15699?from_cn_redirect=1).
                     * @param _publicKeyId Key ID. After a key is associated, the instance can be accessed with the corresponding private key; PublicKeyId can be obtained through the API [DescribeKeyPairs](https://www.tencentcloud.com/document/api/213/15699?from_cn_redirect=1).
                     * 
                     */
                    void SetPublicKeyId(const std::string& _publicKeyId);

                    /**
                     * 判断参数 PublicKeyId 是否已赋值
                     * @return PublicKeyId 是否已赋值
                     * 
                     */
                    bool PublicKeyIdHasBeenSet() const;

                private:

                    /**
                     * Instance login password, with 8 to 16 characters, including uppercase letters, lowercase letters, digits, and special characters. Special characters only support !@%^*. The password cannot start with a special character.
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * Key ID. After a key is associated, the instance can be accessed with the corresponding private key; PublicKeyId can be obtained through the API [DescribeKeyPairs](https://www.tencentcloud.com/document/api/213/15699?from_cn_redirect=1).
                     */
                    std::string m_publicKeyId;
                    bool m_publicKeyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_LOGINSETTINGS_H_
