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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_INPUTAUTHINFO_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_INPUTAUTHINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdp
    {
        namespace V20200527
        {
            namespace Model
            {
                /**
                * Channel input authentication information.
                */
                class InputAuthInfo : public AbstractModel
                {
                public:
                    InputAuthInfo();
                    ~InputAuthInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Username.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Username Username.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置Username.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _username Username.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Password.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Password Password.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Password.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _password Password.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * Username.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * Password.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_INPUTAUTHINFO_H_
