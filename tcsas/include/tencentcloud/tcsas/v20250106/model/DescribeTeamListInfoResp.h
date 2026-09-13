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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBETEAMLISTINFORESP_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBETEAMLISTINFORESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcsas/v20250106/model/TeamAdminUserInfo.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * Information of teams.
                */
                class DescribeTeamListInfoResp : public AbstractModel
                {
                public:
                    DescribeTeamListInfoResp();
                    ~DescribeTeamListInfoResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Team ID.</p>
                     * @return TeamId <p>Team ID.</p>
                     * 
                     */
                    std::string GetTeamId() const;

                    /**
                     * 设置<p>Team ID.</p>
                     * @param _teamId <p>Team ID.</p>
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
                     * 获取<p>Team name.</p>
                     * @return TeamName <p>Team name.</p>
                     * 
                     */
                    std::string GetTeamName() const;

                    /**
                     * 设置<p>Team name.</p>
                     * @param _teamName <p>Team name.</p>
                     * 
                     */
                    void SetTeamName(const std::string& _teamName);

                    /**
                     * 判断参数 TeamName 是否已赋值
                     * @return TeamName 是否已赋值
                     * 
                     */
                    bool TeamNameHasBeenSet() const;

                    /**
                     * 获取<p>Admin user ID.</p>
                     * @return AdminUserId <p>Admin user ID.</p>
                     * 
                     */
                    std::string GetAdminUserId() const;

                    /**
                     * 设置<p>Admin user ID.</p>
                     * @param _adminUserId <p>Admin user ID.</p>
                     * 
                     */
                    void SetAdminUserId(const std::string& _adminUserId);

                    /**
                     * 判断参数 AdminUserId 是否已赋值
                     * @return AdminUserId 是否已赋值
                     * 
                     */
                    bool AdminUserIdHasBeenSet() const;

                    /**
                     * 获取<p>Admin account.</p>
                     * @return AdminUserAccount <p>Admin account.</p>
                     * 
                     */
                    std::string GetAdminUserAccount() const;

                    /**
                     * 设置<p>Admin account.</p>
                     * @param _adminUserAccount <p>Admin account.</p>
                     * 
                     */
                    void SetAdminUserAccount(const std::string& _adminUserAccount);

                    /**
                     * 判断参数 AdminUserAccount 是否已赋值
                     * @return AdminUserAccount 是否已赋值
                     * 
                     */
                    bool AdminUserAccountHasBeenSet() const;

                    /**
                     * 获取<p>Admin username.</p>
                     * @return AdminUserName <p>Admin username.</p>
                     * 
                     */
                    std::string GetAdminUserName() const;

                    /**
                     * 设置<p>Admin username.</p>
                     * @param _adminUserName <p>Admin username.</p>
                     * 
                     */
                    void SetAdminUserName(const std::string& _adminUserName);

                    /**
                     * 判断参数 AdminUserName 是否已赋值
                     * @return AdminUserName 是否已赋值
                     * 
                     */
                    bool AdminUserNameHasBeenSet() const;

                    /**
                     * 获取<p>Number of team members.</p>
                     * @return MemberCount <p>Number of team members.</p>
                     * 
                     */
                    int64_t GetMemberCount() const;

                    /**
                     * 设置<p>Number of team members.</p>
                     * @param _memberCount <p>Number of team members.</p>
                     * 
                     */
                    void SetMemberCount(const int64_t& _memberCount);

                    /**
                     * 判断参数 MemberCount 是否已赋值
                     * @return MemberCount 是否已赋值
                     * 
                     */
                    bool MemberCountHasBeenSet() const;

                    /**
                     * 获取<p>Team registration link.</p>
                     * @return RegisterLink <p>Team registration link.</p>
                     * 
                     */
                    std::string GetRegisterLink() const;

                    /**
                     * 设置<p>Team registration link.</p>
                     * @param _registerLink <p>Team registration link.</p>
                     * 
                     */
                    void SetRegisterLink(const std::string& _registerLink);

                    /**
                     * 判断参数 RegisterLink 是否已赋值
                     * @return RegisterLink 是否已赋值
                     * 
                     */
                    bool RegisterLinkHasBeenSet() const;

                    /**
                     * 获取<p>Team role types.</p>
                     * @return TeamRoleTypeList <p>Team role types.</p>
                     * 
                     */
                    std::vector<int64_t> GetTeamRoleTypeList() const;

                    /**
                     * 设置<p>Team role types.</p>
                     * @param _teamRoleTypeList <p>Team role types.</p>
                     * 
                     */
                    void SetTeamRoleTypeList(const std::vector<int64_t>& _teamRoleTypeList);

                    /**
                     * 判断参数 TeamRoleTypeList 是否已赋值
                     * @return TeamRoleTypeList 是否已赋值
                     * 
                     */
                    bool TeamRoleTypeListHasBeenSet() const;

                    /**
                     * 获取<p>Associated team ID.</p>
                     * @return RelatedTeamId <p>Associated team ID.</p>
                     * 
                     */
                    int64_t GetRelatedTeamId() const;

                    /**
                     * 设置<p>Associated team ID.</p>
                     * @param _relatedTeamId <p>Associated team ID.</p>
                     * 
                     */
                    void SetRelatedTeamId(const int64_t& _relatedTeamId);

                    /**
                     * 判断参数 RelatedTeamId 是否已赋值
                     * @return RelatedTeamId 是否已赋值
                     * 
                     */
                    bool RelatedTeamIdHasBeenSet() const;

                    /**
                     * 获取<p>Team expiration time. 0 indicates no expiration.</p>
                     * @return ExpireTime <p>Team expiration time. 0 indicates no expiration.</p>
                     * 
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 设置<p>Team expiration time. 0 indicates no expiration.</p>
                     * @param _expireTime <p>Team expiration time. 0 indicates no expiration.</p>
                     * 
                     */
                    void SetExpireTime(const int64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取<p>Team status. Valid values: 1: Active; 2: Disabled; 3: Expired.</p>
                     * @return Status <p>Team status. Valid values: 1: Active; 2: Disabled; 3: Expired.</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>Team status. Valid values: 1: Active; 2: Disabled; 3: Expired.</p>
                     * @param _status <p>Team status. Valid values: 1: Active; 2: Disabled; 3: Expired.</p>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Information of multiple team admin users.</p>
                     * @return AdminUsers <p>Information of multiple team admin users.</p>
                     * 
                     */
                    std::vector<TeamAdminUserInfo> GetAdminUsers() const;

                    /**
                     * 设置<p>Information of multiple team admin users.</p>
                     * @param _adminUsers <p>Information of multiple team admin users.</p>
                     * 
                     */
                    void SetAdminUsers(const std::vector<TeamAdminUserInfo>& _adminUsers);

                    /**
                     * 判断参数 AdminUsers 是否已赋值
                     * @return AdminUsers 是否已赋值
                     * 
                     */
                    bool AdminUsersHasBeenSet() const;

                private:

                    /**
                     * <p>Team ID.</p>
                     */
                    std::string m_teamId;
                    bool m_teamIdHasBeenSet;

                    /**
                     * <p>Team name.</p>
                     */
                    std::string m_teamName;
                    bool m_teamNameHasBeenSet;

                    /**
                     * <p>Admin user ID.</p>
                     */
                    std::string m_adminUserId;
                    bool m_adminUserIdHasBeenSet;

                    /**
                     * <p>Admin account.</p>
                     */
                    std::string m_adminUserAccount;
                    bool m_adminUserAccountHasBeenSet;

                    /**
                     * <p>Admin username.</p>
                     */
                    std::string m_adminUserName;
                    bool m_adminUserNameHasBeenSet;

                    /**
                     * <p>Number of team members.</p>
                     */
                    int64_t m_memberCount;
                    bool m_memberCountHasBeenSet;

                    /**
                     * <p>Team registration link.</p>
                     */
                    std::string m_registerLink;
                    bool m_registerLinkHasBeenSet;

                    /**
                     * <p>Team role types.</p>
                     */
                    std::vector<int64_t> m_teamRoleTypeList;
                    bool m_teamRoleTypeListHasBeenSet;

                    /**
                     * <p>Associated team ID.</p>
                     */
                    int64_t m_relatedTeamId;
                    bool m_relatedTeamIdHasBeenSet;

                    /**
                     * <p>Team expiration time. 0 indicates no expiration.</p>
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>Team status. Valid values: 1: Active; 2: Disabled; 3: Expired.</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Information of multiple team admin users.</p>
                     */
                    std::vector<TeamAdminUserInfo> m_adminUsers;
                    bool m_adminUsersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBETEAMLISTINFORESP_H_
