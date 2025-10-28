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


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * Team list information
                */
                class DescribeTeamListInfoResp : public AbstractModel
                {
                public:
                    DescribeTeamListInfoResp();
                    ~DescribeTeamListInfoResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Team name
                     * @return TeamName Team name
                     * 
                     */
                    std::string GetTeamName() const;

                    /**
                     * 设置Team name
                     * @param _teamName Team name
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
                     * 获取Administrator user ID
                     * @return AdminUserId Administrator user ID
                     * 
                     */
                    std::string GetAdminUserId() const;

                    /**
                     * 设置Administrator user ID
                     * @param _adminUserId Administrator user ID
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
                     * 获取Administrator account
                     * @return AdminUserAccount Administrator account
                     * 
                     */
                    std::string GetAdminUserAccount() const;

                    /**
                     * 设置Administrator account
                     * @param _adminUserAccount Administrator account
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
                     * 获取Administrator username
                     * @return AdminUserName Administrator username
                     * 
                     */
                    std::string GetAdminUserName() const;

                    /**
                     * 设置Administrator username
                     * @param _adminUserName Administrator username
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
                     * 获取Number of team members
                     * @return MemberCount Number of team members
                     * 
                     */
                    int64_t GetMemberCount() const;

                    /**
                     * 设置Number of team members
                     * @param _memberCount Number of team members
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
                     * 获取Team registration link
                     * @return RegisterLink Team registration link
                     * 
                     */
                    std::string GetRegisterLink() const;

                    /**
                     * 设置Team registration link
                     * @param _registerLink Team registration link
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
                     * 获取Team permission type
                     * @return TeamRoleTypeList Team permission type
                     * 
                     */
                    std::vector<int64_t> GetTeamRoleTypeList() const;

                    /**
                     * 设置Team permission type
                     * @param _teamRoleTypeList Team permission type
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
                     * 获取Associated team ID
                     * @return RelatedTeamId Associated team ID
                     * 
                     */
                    int64_t GetRelatedTeamId() const;

                    /**
                     * 设置Associated team ID
                     * @param _relatedTeamId Associated team ID
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
                     * 获取Team expiration time. 0 means never expire.
                     * @return ExpireTime Team expiration time. 0 means never expire.
                     * 
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 设置Team expiration time. 0 means never expire.
                     * @param _expireTime Team expiration time. 0 means never expire.
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
                     * 获取Team status. valid values: 1: normal; 2: disabled; 3: expired.
                     * @return Status Team status. valid values: 1: normal; 2: disabled; 3: expired.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Team status. valid values: 1: normal; 2: disabled; 3: expired.
                     * @param _status Team status. valid values: 1: normal; 2: disabled; 3: expired.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Team ID
                     */
                    std::string m_teamId;
                    bool m_teamIdHasBeenSet;

                    /**
                     * Team name
                     */
                    std::string m_teamName;
                    bool m_teamNameHasBeenSet;

                    /**
                     * Administrator user ID
                     */
                    std::string m_adminUserId;
                    bool m_adminUserIdHasBeenSet;

                    /**
                     * Administrator account
                     */
                    std::string m_adminUserAccount;
                    bool m_adminUserAccountHasBeenSet;

                    /**
                     * Administrator username
                     */
                    std::string m_adminUserName;
                    bool m_adminUserNameHasBeenSet;

                    /**
                     * Number of team members
                     */
                    int64_t m_memberCount;
                    bool m_memberCountHasBeenSet;

                    /**
                     * Team registration link
                     */
                    std::string m_registerLink;
                    bool m_registerLinkHasBeenSet;

                    /**
                     * Team permission type
                     */
                    std::vector<int64_t> m_teamRoleTypeList;
                    bool m_teamRoleTypeListHasBeenSet;

                    /**
                     * Associated team ID
                     */
                    int64_t m_relatedTeamId;
                    bool m_relatedTeamIdHasBeenSet;

                    /**
                     * Team expiration time. 0 means never expire.
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Team status. valid values: 1: normal; 2: disabled; 3: expired.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBETEAMLISTINFORESP_H_
