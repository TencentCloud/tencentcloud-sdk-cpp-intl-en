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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_REMOTEWRITEAUTHINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_REMOTEWRITEAUTHINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * RemoteWrite authentication information.
                */
                class RemoteWriteAuthInfo : public AbstractModel
                {
                public:
                    RemoteWriteAuthInfo();
                    ~RemoteWriteAuthInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取basic auth username
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Username basic auth username
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置basic auth username
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _username basic auth username
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取basic auth password
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Password basic auth password
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置basic auth password
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _password basic auth password
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取basic auth token
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Token basic auth token
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetToken() const;

                    /**
                     * 设置basic auth token
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _token basic auth token
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetToken(const std::string& _token);

                    /**
                     * 判断参数 Token 是否已赋值
                     * @return Token 是否已赋值
                     * 
                     */
                    bool TokenHasBeenSet() const;

                private:

                    /**
                     * basic auth username
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * basic auth password
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * basic auth token
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_token;
                    bool m_tokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_REMOTEWRITEAUTHINFO_H_
