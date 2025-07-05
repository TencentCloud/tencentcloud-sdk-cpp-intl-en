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
                * Login settings
                */
                class LoginSettings : public AbstractModel
                {
                public:
                    LoginSettings();
                    ~LoginSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The login password of the instance, which contains 8 to 16 uppercase letters, lowercase letters, digits, and special characters (only !@%^*) and cannot start with a special character.
                     * @return Password The login password of the instance, which contains 8 to 16 uppercase letters, lowercase letters, digits, and special characters (only !@%^*) and cannot start with a special character.
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置The login password of the instance, which contains 8 to 16 uppercase letters, lowercase letters, digits, and special characters (only !@%^*) and cannot start with a special character.
                     * @param _password The login password of the instance, which contains 8 to 16 uppercase letters, lowercase letters, digits, and special characters (only !@%^*) and cannot start with a special character.
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
                     * 获取The key ID. After an instance is associated with a key, you can access it with the private key in the key pair. You can call [DescribeKeyPairs](https://intl.cloud.tencent.com/document/api/213/15699?from_cn_redirect=1) to obtain `PublicKeyId`.
                     * @return PublicKeyId The key ID. After an instance is associated with a key, you can access it with the private key in the key pair. You can call [DescribeKeyPairs](https://intl.cloud.tencent.com/document/api/213/15699?from_cn_redirect=1) to obtain `PublicKeyId`.
                     * 
                     */
                    std::string GetPublicKeyId() const;

                    /**
                     * 设置The key ID. After an instance is associated with a key, you can access it with the private key in the key pair. You can call [DescribeKeyPairs](https://intl.cloud.tencent.com/document/api/213/15699?from_cn_redirect=1) to obtain `PublicKeyId`.
                     * @param _publicKeyId The key ID. After an instance is associated with a key, you can access it with the private key in the key pair. You can call [DescribeKeyPairs](https://intl.cloud.tencent.com/document/api/213/15699?from_cn_redirect=1) to obtain `PublicKeyId`.
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
                     * The login password of the instance, which contains 8 to 16 uppercase letters, lowercase letters, digits, and special characters (only !@%^*) and cannot start with a special character.
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * The key ID. After an instance is associated with a key, you can access it with the private key in the key pair. You can call [DescribeKeyPairs](https://intl.cloud.tencent.com/document/api/213/15699?from_cn_redirect=1) to obtain `PublicKeyId`.
                     */
                    std::string m_publicKeyId;
                    bool m_publicKeyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_LOGINSETTINGS_H_
