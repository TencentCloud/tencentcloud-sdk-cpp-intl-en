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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_LOGINCONFIGURATION_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_LOGINCONFIGURATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * Login password information
                */
                class LoginConfiguration : public AbstractModel
                {
                public:
                    LoginConfiguration();
                    ~LoginConfiguration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<li>`YES`: Random password. In this case, `Password` cannot be specified. </li>
<li>`No`: Custom. `Password` must be specified. </li>
                     * @return AutoGeneratePassword <li>`YES`: Random password. In this case, `Password` cannot be specified. </li>
<li>`No`: Custom. `Password` must be specified. </li>
                     * 
                     */
                    std::string GetAutoGeneratePassword() const;

                    /**
                     * 设置<li>`YES`: Random password. In this case, `Password` cannot be specified. </li>
<li>`No`: Custom. `Password` must be specified. </li>
                     * @param _autoGeneratePassword <li>`YES`: Random password. In this case, `Password` cannot be specified. </li>
<li>`No`: Custom. `Password` must be specified. </li>
                     * 
                     */
                    void SetAutoGeneratePassword(const std::string& _autoGeneratePassword);

                    /**
                     * 判断参数 AutoGeneratePassword 是否已赋值
                     * @return AutoGeneratePassword 是否已赋值
                     * 
                     */
                    bool AutoGeneratePasswordHasBeenSet() const;

                    /**
                     * 获取Instace login password.
For Windows instances, the password must contain 12 to 30 characters of the following types. It cannot start with “/” and cannot include the username.
<li>[a-z]</li>
<li>[A-Z]</li>
<li>[0-9]</li>
<li>[()`~!@#$%^&*-+=_|{}[]:;' <>,.?/]</li>
                     * @return Password Instace login password.
For Windows instances, the password must contain 12 to 30 characters of the following types. It cannot start with “/” and cannot include the username.
<li>[a-z]</li>
<li>[A-Z]</li>
<li>[0-9]</li>
<li>[()`~!@#$%^&*-+=_|{}[]:;' <>,.?/]</li>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Instace login password.
For Windows instances, the password must contain 12 to 30 characters of the following types. It cannot start with “/” and cannot include the username.
<li>[a-z]</li>
<li>[A-Z]</li>
<li>[0-9]</li>
<li>[()`~!@#$%^&*-+=_|{}[]:;' <>,.?/]</li>
                     * @param _password Instace login password.
For Windows instances, the password must contain 12 to 30 characters of the following types. It cannot start with “/” and cannot include the username.
<li>[a-z]</li>
<li>[A-Z]</li>
<li>[0-9]</li>
<li>[()`~!@#$%^&*-+=_|{}[]:;' <>,.?/]</li>
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
                     * <li>`YES`: Random password. In this case, `Password` cannot be specified. </li>
<li>`No`: Custom. `Password` must be specified. </li>
                     */
                    std::string m_autoGeneratePassword;
                    bool m_autoGeneratePasswordHasBeenSet;

                    /**
                     * Instace login password.
For Windows instances, the password must contain 12 to 30 characters of the following types. It cannot start with “/” and cannot include the username.
<li>[a-z]</li>
<li>[A-Z]</li>
<li>[0-9]</li>
<li>[()`~!@#$%^&*-+=_|{}[]:;' <>,.?/]</li>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_LOGINCONFIGURATION_H_
