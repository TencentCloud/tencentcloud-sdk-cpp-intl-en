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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKSPACEUSERINFO_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKSPACEUSERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/RoleBasicInfo.h>
#include <tencentcloud/databuddy/v20260715/model/UserTagInfo.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * Workspace user information
                */
                class WorkspaceUserInfo : public AbstractModel
                {
                public:
                    WorkspaceUserInfo();
                    ~WorkspaceUserInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>User UIN.</p>
                     * @return UserUin <p>User UIN.</p>
                     * 
                     */
                    std::string GetUserUin() const;

                    /**
                     * 设置<p>User UIN.</p>
                     * @param _userUin <p>User UIN.</p>
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
                     * 获取<p>Username.</p>
                     * @return UserName <p>Username.</p>
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>Username.</p>
                     * @param _userName <p>Username.</p>
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
                     * 获取<p>Nickname</p>
                     * @return Nickname <p>Nickname</p>
                     * 
                     */
                    std::string GetNickname() const;

                    /**
                     * 设置<p>Nickname</p>
                     * @param _nickname <p>Nickname</p>
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
                     * 获取<p>List of characters.</p>
                     * @return Roles <p>List of characters.</p>
                     * 
                     */
                    std::vector<RoleBasicInfo> GetRoles() const;

                    /**
                     * 设置<p>List of characters.</p>
                     * @param _roles <p>List of characters.</p>
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
                     * 获取<p>User source. group: user group, user: user</p>
                     * @return UserSource <p>User source. group: user group, user: user</p>
                     * 
                     */
                    std::string GetUserSource() const;

                    /**
                     * 设置<p>User source. group: user group, user: user</p>
                     * @param _userSource <p>User source. group: user group, user: user</p>
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
                     * 获取<p>Creation time. Millisecond timestamp</p>
                     * @return CreateTime <p>Creation time. Millisecond timestamp</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Creation time. Millisecond timestamp</p>
                     * @param _createTime <p>Creation time. Millisecond timestamp</p>
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
                     * 获取<p>Update time. Millisecond timestamp</p>
                     * @return UpdateTime <p>Update time. Millisecond timestamp</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>Update time. Millisecond timestamp</p>
                     * @param _updateTime <p>Update time. Millisecond timestamp</p>
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
                     * 获取<p>Root account or not</p>
                     * @return IsOwner <p>Root account or not</p>
                     * 
                     */
                    bool GetIsOwner() const;

                    /**
                     * 设置<p>Root account or not</p>
                     * @param _isOwner <p>Root account or not</p>
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
                     * 获取<p>0: general user 1: entraId user</p>
                     * @return UserTag <p>0: general user 1: entraId user</p>
                     * 
                     */
                    int64_t GetUserTag() const;

                    /**
                     * 设置<p>0: general user 1: entraId user</p>
                     * @param _userTag <p>0: general user 1: entraId user</p>
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
                     * 获取<p>Whether the sub-account has admin permission</p>
                     * @return IsAdmin <p>Whether the sub-account has admin permission</p>
                     * 
                     */
                    bool GetIsAdmin() const;

                    /**
                     * 设置<p>Whether the sub-account has admin permission</p>
                     * @param _isAdmin <p>Whether the sub-account has admin permission</p>
                     * 
                     */
                    void SetIsAdmin(const bool& _isAdmin);

                    /**
                     * 判断参数 IsAdmin 是否已赋值
                     * @return IsAdmin 是否已赋值
                     * 
                     */
                    bool IsAdminHasBeenSet() const;

                    /**
                     * 获取<p>Tags after merge (directly bound to user + inherited from user group)</p>
                     * @return Tags <p>Tags after merge (directly bound to user + inherited from user group)</p>
                     * 
                     */
                    std::vector<UserTagInfo> GetTags() const;

                    /**
                     * 设置<p>Tags after merge (directly bound to user + inherited from user group)</p>
                     * @param _tags <p>Tags after merge (directly bound to user + inherited from user group)</p>
                     * 
                     */
                    void SetTags(const std::vector<UserTagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * <p>User UIN.</p>
                     */
                    std::string m_userUin;
                    bool m_userUinHasBeenSet;

                    /**
                     * <p>Username.</p>
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>Nickname</p>
                     */
                    std::string m_nickname;
                    bool m_nicknameHasBeenSet;

                    /**
                     * <p>List of characters.</p>
                     */
                    std::vector<RoleBasicInfo> m_roles;
                    bool m_rolesHasBeenSet;

                    /**
                     * <p>User source. group: user group, user: user</p>
                     */
                    std::string m_userSource;
                    bool m_userSourceHasBeenSet;

                    /**
                     * <p>Creation time. Millisecond timestamp</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Update time. Millisecond timestamp</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>Root account or not</p>
                     */
                    bool m_isOwner;
                    bool m_isOwnerHasBeenSet;

                    /**
                     * <p>0: general user 1: entraId user</p>
                     */
                    int64_t m_userTag;
                    bool m_userTagHasBeenSet;

                    /**
                     * <p>Whether the sub-account has admin permission</p>
                     */
                    bool m_isAdmin;
                    bool m_isAdminHasBeenSet;

                    /**
                     * <p>Tags after merge (directly bound to user + inherited from user group)</p>
                     */
                    std::vector<UserTagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKSPACEUSERINFO_H_
