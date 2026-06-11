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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CONSOLEACCOUNT_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CONSOLEACCOUNT_H_

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
                * DataSight Console user account information
                */
                class ConsoleAccount : public AbstractModel
                {
                public:
                    ConsoleAccount();
                    ~ConsoleAccount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Username.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserName <p>Username.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>Username.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _userName <p>Username.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取<p>User password</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Password <p>User password</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置<p>User password</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _password <p>User password</p>
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
                     * 获取<p>Tencent Cloud account SecretId</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SecretId <p>Tencent Cloud account SecretId</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSecretId() const;

                    /**
                     * 设置<p>Tencent Cloud account SecretId</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _secretId <p>Tencent Cloud account SecretId</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSecretId(const std::string& _secretId);

                    /**
                     * 判断参数 SecretId 是否已赋值
                     * @return SecretId 是否已赋值
                     * 
                     */
                    bool SecretIdHasBeenSet() const;

                    /**
                     * 获取<p>Tencent Cloud Account SecretKey</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SecretKey <p>Tencent Cloud Account SecretKey</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置<p>Tencent Cloud Account SecretKey</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _secretKey <p>Tencent Cloud Account SecretKey</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSecretKey(const std::string& _secretKey);

                    /**
                     * 判断参数 SecretKey 是否已赋值
                     * @return SecretKey 是否已赋值
                     * 
                     */
                    bool SecretKeyHasBeenSet() const;

                    /**
                     * 获取<p>Electronic mailbox for sending verification code</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Email <p>Electronic mailbox for sending verification code</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置<p>Electronic mailbox for sending verification code</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _email <p>Electronic mailbox for sending verification code</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                private:

                    /**
                     * <p>Username.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>User password</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * <p>Tencent Cloud account SecretId</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_secretId;
                    bool m_secretIdHasBeenSet;

                    /**
                     * <p>Tencent Cloud Account SecretKey</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * <p>Electronic mailbox for sending verification code</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CONSOLEACCOUNT_H_
