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

#ifndef TENCENTCLOUD_TCMPP_V20240801_MODEL_DESCRIBETEAMDETAILRESP_H_
#define TENCENTCLOUD_TCMPP_V20240801_MODEL_DESCRIBETEAMDETAILRESP_H_

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
                * Team details
                */
                class DescribeTeamDetailResp : public AbstractModel
                {
                public:
                    DescribeTeamDetailResp();
                    ~DescribeTeamDetailResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Team role type 1-Mini program team 2-Application team
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TeamRoleType Team role type 1-Mini program team 2-Application team
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTeamRoleType() const;

                    /**
                     * 设置Team role type 1-Mini program team 2-Application team
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _teamRoleType Team role type 1-Mini program team 2-Application team
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTeamRoleType(const int64_t& _teamRoleType);

                    /**
                     * 判断参数 TeamRoleType 是否已赋值
                     * @return TeamRoleType 是否已赋值
                     * 
                     */
                    bool TeamRoleTypeHasBeenSet() const;

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
                     * 获取Creator
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateUser Creator
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateUser() const;

                    /**
                     * 设置Creator
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createUser Creator
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreateUser(const std::string& _createUser);

                    /**
                     * 判断参数 CreateUser 是否已赋值
                     * @return CreateUser 是否已赋值
                     * 
                     */
                    bool CreateUserHasBeenSet() const;

                    /**
                     * 获取Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Creation time
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Number of bound mini program teams
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BindMiniTeamCount Number of bound mini program teams
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetBindMiniTeamCount() const;

                    /**
                     * 设置Number of bound mini program teams
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _bindMiniTeamCount Number of bound mini program teams
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBindMiniTeamCount(const int64_t& _bindMiniTeamCount);

                    /**
                     * 判断参数 BindMiniTeamCount 是否已赋值
                     * @return BindMiniTeamCount 是否已赋值
                     * 
                     */
                    bool BindMiniTeamCountHasBeenSet() const;

                    /**
                     * 获取Name of the bound team
                     * @return BindTeamName Name of the bound team
                     * 
                     */
                    std::string GetBindTeamName() const;

                    /**
                     * 设置Name of the bound team
                     * @param _bindTeamName Name of the bound team
                     * 
                     */
                    void SetBindTeamName(const std::string& _bindTeamName);

                    /**
                     * 判断参数 BindTeamName 是否已赋值
                     * @return BindTeamName 是否已赋值
                     * 
                     */
                    bool BindTeamNameHasBeenSet() const;

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

                private:

                    /**
                     * Team name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_teamName;
                    bool m_teamNameHasBeenSet;

                    /**
                     * Team role type 1-Mini program team 2-Application team
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_teamRoleType;
                    bool m_teamRoleTypeHasBeenSet;

                    /**
                     * Admin account
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_adminUserAccount;
                    bool m_adminUserAccountHasBeenSet;

                    /**
                     * Creator
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createUser;
                    bool m_createUserHasBeenSet;

                    /**
                     * Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Number of team members
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_memberCount;
                    bool m_memberCountHasBeenSet;

                    /**
                     * Number of bound mini program teams
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_bindMiniTeamCount;
                    bool m_bindMiniTeamCountHasBeenSet;

                    /**
                     * Name of the bound team
                     */
                    std::string m_bindTeamName;
                    bool m_bindTeamNameHasBeenSet;

                    /**
                     * Team registration link
                     */
                    std::string m_registerLink;
                    bool m_registerLinkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCMPP_V20240801_MODEL_DESCRIBETEAMDETAILRESP_H_
