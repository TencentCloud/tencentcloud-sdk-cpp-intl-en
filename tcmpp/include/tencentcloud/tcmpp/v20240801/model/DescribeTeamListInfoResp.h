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

#ifndef TENCENTCLOUD_TCMPP_V20240801_MODEL_DESCRIBETEAMLISTINFORESP_H_
#define TENCENTCLOUD_TCMPP_V20240801_MODEL_DESCRIBETEAMLISTINFORESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TeamId Team ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTeamId() const;

                    /**
                     * 设置Team ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _teamId Team ID
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TeamName Team name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTeamName() const;

                    /**
                     * 设置Team name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _teamName Team name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Admin ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AdminUserId Admin ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAdminUserId() const;

                    /**
                     * 设置Admin ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _adminUserId Admin ID
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Admin account
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AdminUserAccount Admin account
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAdminUserAccount() const;

                    /**
                     * 设置Admin account
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _adminUserAccount Admin account
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Admin username
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AdminUserName Admin username
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAdminUserName() const;

                    /**
                     * 设置Admin username
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _adminUserName Admin username
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MemberCount Number of team members
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMemberCount() const;

                    /**
                     * 设置Number of team members
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _memberCount Number of team members
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TeamRoleTypeList Team permission type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<int64_t> GetTeamRoleTypeList() const;

                    /**
                     * 设置Team permission type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _teamRoleTypeList Team permission type
Note: This field may return null, indicating that no valid values can be obtained.
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

                private:

                    /**
                     * Team ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_teamId;
                    bool m_teamIdHasBeenSet;

                    /**
                     * Team name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_teamName;
                    bool m_teamNameHasBeenSet;

                    /**
                     * Admin ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_adminUserId;
                    bool m_adminUserIdHasBeenSet;

                    /**
                     * Admin account
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_adminUserAccount;
                    bool m_adminUserAccountHasBeenSet;

                    /**
                     * Admin username
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_adminUserName;
                    bool m_adminUserNameHasBeenSet;

                    /**
                     * Number of team members
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> m_teamRoleTypeList;
                    bool m_teamRoleTypeListHasBeenSet;

                    /**
                     * Associated team ID
                     */
                    int64_t m_relatedTeamId;
                    bool m_relatedTeamIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCMPP_V20240801_MODEL_DESCRIBETEAMLISTINFORESP_H_
