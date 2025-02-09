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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_CREATEUSERREQUEST_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_CREATEUSERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * CreateUser request structure.
                */
                class CreateUserRequest : public AbstractModel
                {
                public:
                    CreateUserRequest();
                    ~CreateUserRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取User account
                     * @return UserAccount User account
                     * 
                     */
                    std::string GetUserAccount() const;

                    /**
                     * 设置User account
                     * @param _userAccount User account
                     * 
                     */
                    void SetUserAccount(const std::string& _userAccount);

                    /**
                     * 判断参数 UserAccount 是否已赋值
                     * @return UserAccount 是否已赋值
                     * 
                     */
                    bool UserAccountHasBeenSet() const;

                    /**
                     * 获取User name
                     * @return UserName User name
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置User name
                     * @param _userName User name
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
                     * 获取User account type. 2: Platform admin; 3: Member.
                     * @return AccountType User account type. 2: Platform admin; 3: Member.
                     * 
                     */
                    int64_t GetAccountType() const;

                    /**
                     * 设置User account type. 2: Platform admin; 3: Member.
                     * @param _accountType User account type. 2: Platform admin; 3: Member.
                     * 
                     */
                    void SetAccountType(const int64_t& _accountType);

                    /**
                     * 判断参数 AccountType 是否已赋值
                     * @return AccountType 是否已赋值
                     * 
                     */
                    bool AccountTypeHasBeenSet() const;

                    /**
                     * 获取Account password. Use CreatePresetKey to get the public key to encrypt the password.
                     * @return Password Account password. Use CreatePresetKey to get the public key to encrypt the password.
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Account password. Use CreatePresetKey to get the public key to encrypt the password.
                     * @param _password Account password. Use CreatePresetKey to get the public key to encrypt the password.
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
                     * 获取Call CreatePresetKey to get the keyID from RequestId
                     * @return KeyId Call CreatePresetKey to get the keyID from RequestId
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置Call CreatePresetKey to get the keyID from RequestId
                     * @param _keyId Call CreatePresetKey to get the keyID from RequestId
                     * 
                     */
                    void SetKeyId(const std::string& _keyId);

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     * 
                     */
                    bool KeyIdHasBeenSet() const;

                    /**
                     * 获取Platform ID
                     * @return PlatformId Platform ID
                     * 
                     */
                    std::string GetPlatformId() const;

                    /**
                     * 设置Platform ID
                     * @param _platformId Platform ID
                     * 
                     */
                    void SetPlatformId(const std::string& _platformId);

                    /**
                     * 判断参数 PlatformId 是否已赋值
                     * @return PlatformId 是否已赋值
                     * 
                     */
                    bool PlatformIdHasBeenSet() const;

                private:

                    /**
                     * User account
                     */
                    std::string m_userAccount;
                    bool m_userAccountHasBeenSet;

                    /**
                     * User name
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * User account type. 2: Platform admin; 3: Member.
                     */
                    int64_t m_accountType;
                    bool m_accountTypeHasBeenSet;

                    /**
                     * Account password. Use CreatePresetKey to get the public key to encrypt the password.
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * Call CreatePresetKey to get the keyID from RequestId
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * Platform ID
                     */
                    std::string m_platformId;
                    bool m_platformIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_CREATEUSERREQUEST_H_
