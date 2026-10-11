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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CONSOLEUSERINFO_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CONSOLEUSERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/RoleBasicInfo.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * Console user information (normalized, decoupled from internal UserDetailInfo)
                */
                class ConsoleUserInfo : public AbstractModel
                {
                public:
                    ConsoleUserInfo();
                    ~ConsoleUserInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取User UIN.
                     * @return UserUin User UIN.
                     * 
                     */
                    std::string GetUserUin() const;

                    /**
                     * 设置User UIN.
                     * @param _userUin User UIN.
                     * 
                     */
                    void SetUserUin(const std::string& _userUin);

                    /**
                     * 判断参数 UserUin 是否已赋值
                     * @return UserUin 是否已赋值
                     * 
                     */
                    bool UserUinHasBeenSet() const;

                    /**
                     * 获取Username.
                     * @return UserName Username.
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Username.
                     * @param _userName Username.
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
                     * 获取Nickname
                     * @return Nickname Nickname
                     * 
                     */
                    std::string GetNickname() const;

                    /**
                     * 设置Nickname
                     * @param _nickname Nickname
                     * 
                     */
                    void SetNickname(const std::string& _nickname);

                    /**
                     * 判断参数 Nickname 是否已赋值
                     * @return Nickname 是否已赋值
                     * 
                     */
                    bool NicknameHasBeenSet() const;

                    /**
                     * 获取List of characters.
                     * @return Roles List of characters.
                     * 
                     */
                    std::vector<RoleBasicInfo> GetRoles() const;

                    /**
                     * 设置List of characters.
                     * @param _roles List of characters.
                     * 
                     */
                    void SetRoles(const std::vector<RoleBasicInfo>& _roles);

                    /**
                     * 判断参数 Roles 是否已赋值
                     * @return Roles 是否已赋值
                     * 
                     */
                    bool RolesHasBeenSet() const;

                    /**
                     * 获取User source. group: user group, user: user
                     * @return UserSource User source. group: user group, user: user
                     * 
                     */
                    std::string GetUserSource() const;

                    /**
                     * 设置User source. group: user group, user: user
                     * @param _userSource User source. group: user group, user: user
                     * 
                     */
                    void SetUserSource(const std::string& _userSource);

                    /**
                     * 判断参数 UserSource 是否已赋值
                     * @return UserSource 是否已赋值
                     * 
                     */
                    bool UserSourceHasBeenSet() const;

                    /**
                     * 获取Creation time.
                     * @return CreateTime Creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.
                     * @param _createTime Creation time.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Update time.
                     * @return UpdateTime Update time.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time.
                     * @param _updateTime Update time.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Whether it is the root account.
                     * @return IsOwner Whether it is the root account.
                     * 
                     */
                    bool GetIsOwner() const;

                    /**
                     * 设置Whether it is the root account.
                     * @param _isOwner Whether it is the root account.
                     * 
                     */
                    void SetIsOwner(const bool& _isOwner);

                    /**
                     * 判断参数 IsOwner 是否已赋值
                     * @return IsOwner 是否已赋值
                     * 
                     */
                    bool IsOwnerHasBeenSet() const;

                    /**
                     * 获取0: general user; 1: Entra ID user.
                     * @return UserTag 0: general user; 1: Entra ID user.
                     * 
                     */
                    int64_t GetUserTag() const;

                    /**
                     * 设置0: general user; 1: Entra ID user.
                     * @param _userTag 0: general user; 1: Entra ID user.
                     * 
                     */
                    void SetUserTag(const int64_t& _userTag);

                    /**
                     * 判断参数 UserTag 是否已赋值
                     * @return UserTag 是否已赋值
                     * 
                     */
                    bool UserTagHasBeenSet() const;

                    /**
                     * 获取Whether it is a sub-account with admin permission
                     * @return IsAdmin Whether it is a sub-account with admin permission
                     * 
                     */
                    bool GetIsAdmin() const;

                    /**
                     * 设置Whether it is a sub-account with admin permission
                     * @param _isAdmin Whether it is a sub-account with admin permission
                     * 
                     */
                    void SetIsAdmin(const bool& _isAdmin);

                    /**
                     * 判断参数 IsAdmin 是否已赋值
                     * @return IsAdmin 是否已赋值
                     * 
                     */
                    bool IsAdminHasBeenSet() const;

                private:

                    /**
                     * User UIN.
                     */
                    std::string m_userUin;
                    bool m_userUinHasBeenSet;

                    /**
                     * Username.
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Nickname
                     */
                    std::string m_nickname;
                    bool m_nicknameHasBeenSet;

                    /**
                     * List of characters.
                     */
                    std::vector<RoleBasicInfo> m_roles;
                    bool m_rolesHasBeenSet;

                    /**
                     * User source. group: user group, user: user
                     */
                    std::string m_userSource;
                    bool m_userSourceHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Update time.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Whether it is the root account.
                     */
                    bool m_isOwner;
                    bool m_isOwnerHasBeenSet;

                    /**
                     * 0: general user; 1: Entra ID user.
                     */
                    int64_t m_userTag;
                    bool m_userTagHasBeenSet;

                    /**
                     * Whether it is a sub-account with admin permission
                     */
                    bool m_isAdmin;
                    bool m_isAdminHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CONSOLEUSERINFO_H_
