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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_LOGINSETTINGS_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_LOGINSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Batch
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
                     * 获取Login password of the instance. <br><li>Linux instances: 8-16 characters, containing at least two of the following categories: [a-z, A-Z], [0-9] and [()`~!@#$%^&*-+=|{}[]:;',.?/]. <br><li>Windows instances: 12-16 characters, containing at least three of the following categories: [a-z], [A-Z], [0-9] and [()`~!@#$%^&*-+={}[]:;',.?/]. <br><br>If this parameter is not specified, a random password will be generated and sent to you via the Message Center.
                     * @return Password Login password of the instance. <br><li>Linux instances: 8-16 characters, containing at least two of the following categories: [a-z, A-Z], [0-9] and [()`~!@#$%^&*-+=|{}[]:;',.?/]. <br><li>Windows instances: 12-16 characters, containing at least three of the following categories: [a-z], [A-Z], [0-9] and [()`~!@#$%^&*-+={}[]:;',.?/]. <br><br>If this parameter is not specified, a random password will be generated and sent to you via the Message Center.
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Login password of the instance. <br><li>Linux instances: 8-16 characters, containing at least two of the following categories: [a-z, A-Z], [0-9] and [()`~!@#$%^&*-+=|{}[]:;',.?/]. <br><li>Windows instances: 12-16 characters, containing at least three of the following categories: [a-z], [A-Z], [0-9] and [()`~!@#$%^&*-+={}[]:;',.?/]. <br><br>If this parameter is not specified, a random password will be generated and sent to you via the Message Center.
                     * @param Password Login password of the instance. <br><li>Linux instances: 8-16 characters, containing at least two of the following categories: [a-z, A-Z], [0-9] and [()`~!@#$%^&*-+=|{}[]:;',.?/]. <br><li>Windows instances: 12-16 characters, containing at least three of the following categories: [a-z], [A-Z], [0-9] and [()`~!@#$%^&*-+={}[]:;',.?/]. <br><br>If this parameter is not specified, a random password will be generated and sent to you via the Message Center.
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取List of key IDs. After an instance is associated with a key, you can access the instance with the private key in the key pair. You can call `DescribeKeyPairs` to obtain `KeyId`. Key and password cannot be specified at the same time. Windows instances do not support keys. Currently, you can only specify one key when purchasing an instance.
                     * @return KeyIds List of key IDs. After an instance is associated with a key, you can access the instance with the private key in the key pair. You can call `DescribeKeyPairs` to obtain `KeyId`. Key and password cannot be specified at the same time. Windows instances do not support keys. Currently, you can only specify one key when purchasing an instance.
                     */
                    std::vector<std::string> GetKeyIds() const;

                    /**
                     * 设置List of key IDs. After an instance is associated with a key, you can access the instance with the private key in the key pair. You can call `DescribeKeyPairs` to obtain `KeyId`. Key and password cannot be specified at the same time. Windows instances do not support keys. Currently, you can only specify one key when purchasing an instance.
                     * @param KeyIds List of key IDs. After an instance is associated with a key, you can access the instance with the private key in the key pair. You can call `DescribeKeyPairs` to obtain `KeyId`. Key and password cannot be specified at the same time. Windows instances do not support keys. Currently, you can only specify one key when purchasing an instance.
                     */
                    void SetKeyIds(const std::vector<std::string>& _keyIds);

                    /**
                     * 判断参数 KeyIds 是否已赋值
                     * @return KeyIds 是否已赋值
                     */
                    bool KeyIdsHasBeenSet() const;

                    /**
                     * 获取Whether to keep the original settings of an image. Values: `TRUE` (default), `FALSE`. It cannot be specified together with `Password` or `KeyIds.N`. You can specify this parameter as `TRUE` only when you create an instance using a custom image, a shared image, or an imported image. 
                     * @return KeepImageLogin Whether to keep the original settings of an image. Values: `TRUE` (default), `FALSE`. It cannot be specified together with `Password` or `KeyIds.N`. You can specify this parameter as `TRUE` only when you create an instance using a custom image, a shared image, or an imported image. 
                     */
                    std::string GetKeepImageLogin() const;

                    /**
                     * 设置Whether to keep the original settings of an image. Values: `TRUE` (default), `FALSE`. It cannot be specified together with `Password` or `KeyIds.N`. You can specify this parameter as `TRUE` only when you create an instance using a custom image, a shared image, or an imported image. 
                     * @param KeepImageLogin Whether to keep the original settings of an image. Values: `TRUE` (default), `FALSE`. It cannot be specified together with `Password` or `KeyIds.N`. You can specify this parameter as `TRUE` only when you create an instance using a custom image, a shared image, or an imported image. 
                     */
                    void SetKeepImageLogin(const std::string& _keepImageLogin);

                    /**
                     * 判断参数 KeepImageLogin 是否已赋值
                     * @return KeepImageLogin 是否已赋值
                     */
                    bool KeepImageLoginHasBeenSet() const;

                private:

                    /**
                     * Login password of the instance. <br><li>Linux instances: 8-16 characters, containing at least two of the following categories: [a-z, A-Z], [0-9] and [()`~!@#$%^&*-+=|{}[]:;',.?/]. <br><li>Windows instances: 12-16 characters, containing at least three of the following categories: [a-z], [A-Z], [0-9] and [()`~!@#$%^&*-+={}[]:;',.?/]. <br><br>If this parameter is not specified, a random password will be generated and sent to you via the Message Center.
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * List of key IDs. After an instance is associated with a key, you can access the instance with the private key in the key pair. You can call `DescribeKeyPairs` to obtain `KeyId`. Key and password cannot be specified at the same time. Windows instances do not support keys. Currently, you can only specify one key when purchasing an instance.
                     */
                    std::vector<std::string> m_keyIds;
                    bool m_keyIdsHasBeenSet;

                    /**
                     * Whether to keep the original settings of an image. Values: `TRUE` (default), `FALSE`. It cannot be specified together with `Password` or `KeyIds.N`. You can specify this parameter as `TRUE` only when you create an instance using a custom image, a shared image, or an imported image. 
                     */
                    std::string m_keepImageLogin;
                    bool m_keepImageLoginHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_LOGINSETTINGS_H_
