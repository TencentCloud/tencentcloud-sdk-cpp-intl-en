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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_LOGINSETTINGS_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_LOGINSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * Describes login settings of an instance.
                */
                class LoginSettings : public AbstractModel
                {
                public:
                    LoginSettings();
                    ~LoginSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance login password. The password complexity requirements vary according to the operating system type. The details are as follows:
- For a Linux system, the password should contain 8 to 30 characters consisting of at least two of the four character types: lowercase letters, uppercase letters, digits, and special characters.
- For a Windows system, the password should contain 12 to 30 characters consisting of at least three of the four character types: lowercase letters, uppercase letters, digits, and special characters.
- If this parameter is not specified, the system will generate a random password and notify the user via the message centerSupported special characters: ( ) ` ~ ! @ # $ % ^ & * - + = | { } [ ] : ; ' , . ? /
                     * @return Password Instance login password. The password complexity requirements vary according to the operating system type. The details are as follows:
- For a Linux system, the password should contain 8 to 30 characters consisting of at least two of the four character types: lowercase letters, uppercase letters, digits, and special characters.
- For a Windows system, the password should contain 12 to 30 characters consisting of at least three of the four character types: lowercase letters, uppercase letters, digits, and special characters.
- If this parameter is not specified, the system will generate a random password and notify the user via the message centerSupported special characters: ( ) ` ~ ! @ # $ % ^ & * - + = | { } [ ] : ; ' , . ? /
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Instance login password. The password complexity requirements vary according to the operating system type. The details are as follows:
- For a Linux system, the password should contain 8 to 30 characters consisting of at least two of the four character types: lowercase letters, uppercase letters, digits, and special characters.
- For a Windows system, the password should contain 12 to 30 characters consisting of at least three of the four character types: lowercase letters, uppercase letters, digits, and special characters.
- If this parameter is not specified, the system will generate a random password and notify the user via the message centerSupported special characters: ( ) ` ~ ! @ # $ % ^ & * - + = | { } [ ] : ; ' , . ? /
                     * @param _password Instance login password. The password complexity requirements vary according to the operating system type. The details are as follows:
- For a Linux system, the password should contain 8 to 30 characters consisting of at least two of the four character types: lowercase letters, uppercase letters, digits, and special characters.
- For a Windows system, the password should contain 12 to 30 characters consisting of at least three of the four character types: lowercase letters, uppercase letters, digits, and special characters.
- If this parameter is not specified, the system will generate a random password and notify the user via the message centerSupported special characters: ( ) ` ~ ! @ # $ % ^ & * - + = | { } [ ] : ; ' , . ? /
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
                     * 获取List of key IDs. After an instance is associated with a key, you can access the instance with the private key in the key pair. You can call `DescribeKeyPairs` to obtain `KeyId`. Key and password cannot be specified at the same time. Windows instances do not support keys. Currently, you can only specify one key when purchasing an instance.
                     * @return KeyIds List of key IDs. After an instance is associated with a key, you can access the instance with the private key in the key pair. You can call `DescribeKeyPairs` to obtain `KeyId`. Key and password cannot be specified at the same time. Windows instances do not support keys. Currently, you can only specify one key when purchasing an instance.
                     * 
                     */
                    std::vector<std::string> GetKeyIds() const;

                    /**
                     * 设置List of key IDs. After an instance is associated with a key, you can access the instance with the private key in the key pair. You can call `DescribeKeyPairs` to obtain `KeyId`. Key and password cannot be specified at the same time. Windows instances do not support keys. Currently, you can only specify one key when purchasing an instance.
                     * @param _keyIds List of key IDs. After an instance is associated with a key, you can access the instance with the private key in the key pair. You can call `DescribeKeyPairs` to obtain `KeyId`. Key and password cannot be specified at the same time. Windows instances do not support keys. Currently, you can only specify one key when purchasing an instance.
                     * 
                     */
                    void SetKeyIds(const std::vector<std::string>& _keyIds);

                    /**
                     * 判断参数 KeyIds 是否已赋值
                     * @return KeyIds 是否已赋值
                     * 
                     */
                    bool KeyIdsHasBeenSet() const;

                    /**
                     * 获取Retain the original settings of the image. This parameter cannot be specified simultaneously with Password or KeyIds.N. It can only be set to TRUE when you create an instance by using a custom image, shared image, or externally imported image. Valid values:
<li>TRUE: Retain the login settings of the image.</li>
<li>FALSE: Do not retain the login settings of the image.</li> Default value: FALSE.
                     * @return KeepImageLogin Retain the original settings of the image. This parameter cannot be specified simultaneously with Password or KeyIds.N. It can only be set to TRUE when you create an instance by using a custom image, shared image, or externally imported image. Valid values:
<li>TRUE: Retain the login settings of the image.</li>
<li>FALSE: Do not retain the login settings of the image.</li> Default value: FALSE.
                     * 
                     */
                    bool GetKeepImageLogin() const;

                    /**
                     * 设置Retain the original settings of the image. This parameter cannot be specified simultaneously with Password or KeyIds.N. It can only be set to TRUE when you create an instance by using a custom image, shared image, or externally imported image. Valid values:
<li>TRUE: Retain the login settings of the image.</li>
<li>FALSE: Do not retain the login settings of the image.</li> Default value: FALSE.
                     * @param _keepImageLogin Retain the original settings of the image. This parameter cannot be specified simultaneously with Password or KeyIds.N. It can only be set to TRUE when you create an instance by using a custom image, shared image, or externally imported image. Valid values:
<li>TRUE: Retain the login settings of the image.</li>
<li>FALSE: Do not retain the login settings of the image.</li> Default value: FALSE.
                     * 
                     */
                    void SetKeepImageLogin(const bool& _keepImageLogin);

                    /**
                     * 判断参数 KeepImageLogin 是否已赋值
                     * @return KeepImageLogin 是否已赋值
                     * 
                     */
                    bool KeepImageLoginHasBeenSet() const;

                private:

                    /**
                     * Instance login password. The password complexity requirements vary according to the operating system type. The details are as follows:
- For a Linux system, the password should contain 8 to 30 characters consisting of at least two of the four character types: lowercase letters, uppercase letters, digits, and special characters.
- For a Windows system, the password should contain 12 to 30 characters consisting of at least three of the four character types: lowercase letters, uppercase letters, digits, and special characters.
- If this parameter is not specified, the system will generate a random password and notify the user via the message centerSupported special characters: ( ) ` ~ ! @ # $ % ^ & * - + = | { } [ ] : ; ' , . ? /
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * List of key IDs. After an instance is associated with a key, you can access the instance with the private key in the key pair. You can call `DescribeKeyPairs` to obtain `KeyId`. Key and password cannot be specified at the same time. Windows instances do not support keys. Currently, you can only specify one key when purchasing an instance.
                     */
                    std::vector<std::string> m_keyIds;
                    bool m_keyIdsHasBeenSet;

                    /**
                     * Retain the original settings of the image. This parameter cannot be specified simultaneously with Password or KeyIds.N. It can only be set to TRUE when you create an instance by using a custom image, shared image, or externally imported image. Valid values:
<li>TRUE: Retain the login settings of the image.</li>
<li>FALSE: Do not retain the login settings of the image.</li> Default value: FALSE.
                     */
                    bool m_keepImageLogin;
                    bool m_keepImageLoginHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_LOGINSETTINGS_H_
