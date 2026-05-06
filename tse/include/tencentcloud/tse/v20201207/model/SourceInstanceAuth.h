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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_SOURCEINSTANCEAUTH_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_SOURCEINSTANCEAUTH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * Instance authentication information
                */
                class SourceInstanceAuth : public AbstractModel
                {
                public:
                    SourceInstanceAuth();
                    ~SourceInstanceAuth() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Username.
                     * @return Username Username.
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置Username.
                     * @param _username Username.
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
                     * 获取account password
                     * @return Password account password
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置account password
                     * @param _password account password
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
                     * 获取token credential
                     * @return AccessToken token credential
                     * 
                     */
                    std::string GetAccessToken() const;

                    /**
                     * 设置token credential
                     * @param _accessToken token credential
                     * 
                     */
                    void SetAccessToken(const std::string& _accessToken);

                    /**
                     * 判断参数 AccessToken 是否已赋值
                     * @return AccessToken 是否已赋值
                     * 
                     */
                    bool AccessTokenHasBeenSet() const;

                private:

                    /**
                     * Username.
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * account password
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * token credential
                     */
                    std::string m_accessToken;
                    bool m_accessTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_SOURCEINSTANCEAUTH_H_
