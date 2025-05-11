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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_LOGINSETTINGS_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_LOGINSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
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
                     * 获取Instance login password. The password complexity limits vary with the operating system type as follows: <br><li>The Linux instance password must be 8 to 30 characters long and include at least two of the following: [a-z], [A-Z], [0-9], and special characters of [( ) \` ~ ! @ # $ % ^ & * - + = | { } [ ] : ; ' , . ? / ]. <br><li>The Windows instance password must be 12 to 30 characters long and include at least three of the following: [a-z], [A-Z], [0-9], and special characters [( ) \` ~ ! @ # $ % ^ & * - + = | { } [ ] : ; ' , . ? /]. <br><br>If this parameter is not specified, you need to set it before login by using the console to "reset password" or by calling the ResetInstancesPassword API.
                     * @return Password Instance login password. The password complexity limits vary with the operating system type as follows: <br><li>The Linux instance password must be 8 to 30 characters long and include at least two of the following: [a-z], [A-Z], [0-9], and special characters of [( ) \` ~ ! @ # $ % ^ & * - + = | { } [ ] : ; ' , . ? / ]. <br><li>The Windows instance password must be 12 to 30 characters long and include at least three of the following: [a-z], [A-Z], [0-9], and special characters [( ) \` ~ ! @ # $ % ^ & * - + = | { } [ ] : ; ' , . ? /]. <br><br>If this parameter is not specified, you need to set it before login by using the console to "reset password" or by calling the ResetInstancesPassword API.
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Instance login password. The password complexity limits vary with the operating system type as follows: <br><li>The Linux instance password must be 8 to 30 characters long and include at least two of the following: [a-z], [A-Z], [0-9], and special characters of [( ) \` ~ ! @ # $ % ^ & * - + = | { } [ ] : ; ' , . ? / ]. <br><li>The Windows instance password must be 12 to 30 characters long and include at least three of the following: [a-z], [A-Z], [0-9], and special characters [( ) \` ~ ! @ # $ % ^ & * - + = | { } [ ] : ; ' , . ? /]. <br><br>If this parameter is not specified, you need to set it before login by using the console to "reset password" or by calling the ResetInstancesPassword API.
                     * @param _password Instance login password. The password complexity limits vary with the operating system type as follows: <br><li>The Linux instance password must be 8 to 30 characters long and include at least two of the following: [a-z], [A-Z], [0-9], and special characters of [( ) \` ~ ! @ # $ % ^ & * - + = | { } [ ] : ; ' , . ? / ]. <br><li>The Windows instance password must be 12 to 30 characters long and include at least three of the following: [a-z], [A-Z], [0-9], and special characters [( ) \` ~ ! @ # $ % ^ & * - + = | { } [ ] : ; ' , . ? /]. <br><br>If this parameter is not specified, you need to set it before login by using the console to "reset password" or by calling the ResetInstancesPassword API.
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
                     * 获取List of key IDs. After an instance is associated with a key, you can access the instance with the private key in the key pair. You can call [`DescribeKeyPairs`](https://intl.cloud.tencent.com/document/api/213/15699?from_cn_redirect=1) to obtain `KeyId`. You cannot specify a key and a password at the same time. Windows instances do not support keys.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return KeyIds List of key IDs. After an instance is associated with a key, you can access the instance with the private key in the key pair. You can call [`DescribeKeyPairs`](https://intl.cloud.tencent.com/document/api/213/15699?from_cn_redirect=1) to obtain `KeyId`. You cannot specify a key and a password at the same time. Windows instances do not support keys.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetKeyIds() const;

                    /**
                     * 设置List of key IDs. After an instance is associated with a key, you can access the instance with the private key in the key pair. You can call [`DescribeKeyPairs`](https://intl.cloud.tencent.com/document/api/213/15699?from_cn_redirect=1) to obtain `KeyId`. You cannot specify a key and a password at the same time. Windows instances do not support keys.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _keyIds List of key IDs. After an instance is associated with a key, you can access the instance with the private key in the key pair. You can call [`DescribeKeyPairs`](https://intl.cloud.tencent.com/document/api/213/15699?from_cn_redirect=1) to obtain `KeyId`. You cannot specify a key and a password at the same time. Windows instances do not support keys.
Note: This field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Retain the original settings of the image. this parameter cannot be specified simultaneously with Password or KeyIds.N. it can be set to true only when an instance is created with a custom image, shared image, or externally imported image. value ranges from true to false: <li>true: indicates that the login settings of the image are retained</li><li>false: indicates that the login settings of the image are not retained</li>. default value: false.
                     * @return KeepImageLogin Retain the original settings of the image. this parameter cannot be specified simultaneously with Password or KeyIds.N. it can be set to true only when an instance is created with a custom image, shared image, or externally imported image. value ranges from true to false: <li>true: indicates that the login settings of the image are retained</li><li>false: indicates that the login settings of the image are not retained</li>. default value: false.
                     * 
                     */
                    std::string GetKeepImageLogin() const;

                    /**
                     * 设置Retain the original settings of the image. this parameter cannot be specified simultaneously with Password or KeyIds.N. it can be set to true only when an instance is created with a custom image, shared image, or externally imported image. value ranges from true to false: <li>true: indicates that the login settings of the image are retained</li><li>false: indicates that the login settings of the image are not retained</li>. default value: false.
                     * @param _keepImageLogin Retain the original settings of the image. this parameter cannot be specified simultaneously with Password or KeyIds.N. it can be set to true only when an instance is created with a custom image, shared image, or externally imported image. value ranges from true to false: <li>true: indicates that the login settings of the image are retained</li><li>false: indicates that the login settings of the image are not retained</li>. default value: false.
                     * 
                     */
                    void SetKeepImageLogin(const std::string& _keepImageLogin);

                    /**
                     * 判断参数 KeepImageLogin 是否已赋值
                     * @return KeepImageLogin 是否已赋值
                     * 
                     */
                    bool KeepImageLoginHasBeenSet() const;

                private:

                    /**
                     * Instance login password. The password complexity limits vary with the operating system type as follows: <br><li>The Linux instance password must be 8 to 30 characters long and include at least two of the following: [a-z], [A-Z], [0-9], and special characters of [( ) \` ~ ! @ # $ % ^ & * - + = | { } [ ] : ; ' , . ? / ]. <br><li>The Windows instance password must be 12 to 30 characters long and include at least three of the following: [a-z], [A-Z], [0-9], and special characters [( ) \` ~ ! @ # $ % ^ & * - + = | { } [ ] : ; ' , . ? /]. <br><br>If this parameter is not specified, you need to set it before login by using the console to "reset password" or by calling the ResetInstancesPassword API.
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * List of key IDs. After an instance is associated with a key, you can access the instance with the private key in the key pair. You can call [`DescribeKeyPairs`](https://intl.cloud.tencent.com/document/api/213/15699?from_cn_redirect=1) to obtain `KeyId`. You cannot specify a key and a password at the same time. Windows instances do not support keys.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_keyIds;
                    bool m_keyIdsHasBeenSet;

                    /**
                     * Retain the original settings of the image. this parameter cannot be specified simultaneously with Password or KeyIds.N. it can be set to true only when an instance is created with a custom image, shared image, or externally imported image. value ranges from true to false: <li>true: indicates that the login settings of the image are retained</li><li>false: indicates that the login settings of the image are not retained</li>. default value: false.
                     */
                    std::string m_keepImageLogin;
                    bool m_keepImageLoginHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_LOGINSETTINGS_H_
