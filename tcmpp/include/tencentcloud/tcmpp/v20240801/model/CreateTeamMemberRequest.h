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

#ifndef TENCENTCLOUD_TCMPP_V20240801_MODEL_CREATETEAMMEMBERREQUEST_H_
#define TENCENTCLOUD_TCMPP_V20240801_MODEL_CREATETEAMMEMBERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcmpp
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * CreateTeamMember request structure.
                */
                class CreateTeamMemberRequest : public AbstractModel
                {
                public:
                    CreateTeamMemberRequest();
                    ~CreateTeamMemberRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Username
                     * @return UserName Username
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Username
                     * @param _userName Username
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
                     * 获取Account password. Use CreatePresetKey to get publick key to encrypt the password.
                     * @return UserPassword Account password. Use CreatePresetKey to get publick key to encrypt the password.
                     * 
                     */
                    std::string GetUserPassword() const;

                    /**
                     * 设置Account password. Use CreatePresetKey to get publick key to encrypt the password.
                     * @param _userPassword Account password. Use CreatePresetKey to get publick key to encrypt the password.
                     * 
                     */
                    void SetUserPassword(const std::string& _userPassword);

                    /**
                     * 判断参数 UserPassword 是否已赋值
                     * @return UserPassword 是否已赋值
                     * 
                     */
                    bool UserPasswordHasBeenSet() const;

                    /**
                     * 获取Team ID
                     * @return TeamId Team ID
                     * 
                     */
                    std::string GetTeamId() const;

                    /**
                     * 设置Team ID
                     * @param _teamId Team ID
                     * 
                     */
                    void SetTeamId(const std::string& _teamId);

                    /**
                     * 判断参数 TeamId 是否已赋值
                     * @return TeamId 是否已赋值
                     * 
                     */
                    bool TeamIdHasBeenSet() const;

                    /**
                     * 获取Team role
                     * @return RoleId Team role
                     * 
                     */
                    int64_t GetRoleId() const;

                    /**
                     * 设置Team role
                     * @param _roleId Team role
                     * 
                     */
                    void SetRoleId(const int64_t& _roleId);

                    /**
                     * 判断参数 RoleId 是否已赋值
                     * @return RoleId 是否已赋值
                     * 
                     */
                    bool RoleIdHasBeenSet() const;

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
                     * Username
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * User account
                     */
                    std::string m_userAccount;
                    bool m_userAccountHasBeenSet;

                    /**
                     * Account password. Use CreatePresetKey to get publick key to encrypt the password.
                     */
                    std::string m_userPassword;
                    bool m_userPasswordHasBeenSet;

                    /**
                     * Team ID
                     */
                    std::string m_teamId;
                    bool m_teamIdHasBeenSet;

                    /**
                     * Team role
                     */
                    int64_t m_roleId;
                    bool m_roleIdHasBeenSet;

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

#endif // !TENCENTCLOUD_TCMPP_V20240801_MODEL_CREATETEAMMEMBERREQUEST_H_
