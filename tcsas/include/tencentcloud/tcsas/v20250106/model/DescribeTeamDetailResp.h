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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBETEAMDETAILRESP_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBETEAMDETAILRESP_H_

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
                * Team details.
                */
                class DescribeTeamDetailResp : public AbstractModel
                {
                public:
                    DescribeTeamDetailResp();
                    ~DescribeTeamDetailResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Team name.
                     * @return TeamName Team name.
                     * 
                     */
                    std::string GetTeamName() const;

                    /**
                     * 设置Team name.
                     * @param _teamName Team name.
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
                     * 获取Team role type. Valid values: 1: Mini program team; 2: Superapp team.
                     * @return TeamRoleType Team role type. Valid values: 1: Mini program team; 2: Superapp team.
                     * 
                     */
                    int64_t GetTeamRoleType() const;

                    /**
                     * 设置Team role type. Valid values: 1: Mini program team; 2: Superapp team.
                     * @param _teamRoleType Team role type. Valid values: 1: Mini program team; 2: Superapp team.
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
                     * 获取Admin account.
                     * @return AdminUserAccount Admin account.
                     * 
                     */
                    std::string GetAdminUserAccount() const;

                    /**
                     * 设置Admin account.
                     * @param _adminUserAccount Admin account.
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
                     * 获取Creator.
                     * @return CreateUser Creator.
                     * 
                     */
                    std::string GetCreateUser() const;

                    /**
                     * 设置Creator.
                     * @param _createUser Creator.
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
                     * 获取Number of team members.
                     * @return MemberCount Number of team members.
                     * 
                     */
                    int64_t GetMemberCount() const;

                    /**
                     * 设置Number of team members.
                     * @param _memberCount Number of team members.
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
                     * 获取Number of bound mini program teams.
                     * @return BindMiniTeamCount Number of bound mini program teams.
                     * 
                     */
                    int64_t GetBindMiniTeamCount() const;

                    /**
                     * 设置Number of bound mini program teams.
                     * @param _bindMiniTeamCount Number of bound mini program teams.
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
                     * 获取Name of the bound team.
                     * @return BindTeamName Name of the bound team.
                     * 
                     */
                    std::string GetBindTeamName() const;

                    /**
                     * 设置Name of the bound team.
                     * @param _bindTeamName Name of the bound team.
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
                     * 获取Team registration link.
                     * @return RegisterLink Team registration link.
                     * 
                     */
                    std::string GetRegisterLink() const;

                    /**
                     * 设置Team registration link.
                     * @param _registerLink Team registration link.
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
                     * 获取Superapp name. Only returned for mini program teams.
                     * @return ApplicationName Superapp name. Only returned for mini program teams.
                     * 
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置Superapp name. Only returned for mini program teams.
                     * @param _applicationName Superapp name. Only returned for mini program teams.
                     * 
                     */
                    void SetApplicationName(const std::string& _applicationName);

                    /**
                     * 判断参数 ApplicationName 是否已赋值
                     * @return ApplicationName 是否已赋值
                     * 
                     */
                    bool ApplicationNameHasBeenSet() const;

                    /**
                     * 获取Team expiration time. 0 indicates no expiration. 
                     * @return ExpireTime Team expiration time. 0 indicates no expiration. 
                     * 
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 设置Team expiration time. 0 indicates no expiration. 
                     * @param _expireTime Team expiration time. 0 indicates no expiration. 
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
                     * 获取Team status. Valid values: 1: Active; 2: Disabled; 3: Expired. 
                     * @return Status Team status. Valid values: 1: Active; 2: Disabled; 3: Expired. 
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Team status. Valid values: 1: Active; 2: Disabled; 3: Expired. 
                     * @param _status Team status. Valid values: 1: Active; 2: Disabled; 3: Expired. 
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
                     * Team name.
                     */
                    std::string m_teamName;
                    bool m_teamNameHasBeenSet;

                    /**
                     * Team role type. Valid values: 1: Mini program team; 2: Superapp team.
                     */
                    int64_t m_teamRoleType;
                    bool m_teamRoleTypeHasBeenSet;

                    /**
                     * Admin account.
                     */
                    std::string m_adminUserAccount;
                    bool m_adminUserAccountHasBeenSet;

                    /**
                     * Creator.
                     */
                    std::string m_createUser;
                    bool m_createUserHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Number of team members.
                     */
                    int64_t m_memberCount;
                    bool m_memberCountHasBeenSet;

                    /**
                     * Number of bound mini program teams.
                     */
                    int64_t m_bindMiniTeamCount;
                    bool m_bindMiniTeamCountHasBeenSet;

                    /**
                     * Name of the bound team.
                     */
                    std::string m_bindTeamName;
                    bool m_bindTeamNameHasBeenSet;

                    /**
                     * Team registration link.
                     */
                    std::string m_registerLink;
                    bool m_registerLinkHasBeenSet;

                    /**
                     * Superapp name. Only returned for mini program teams.
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * Team expiration time. 0 indicates no expiration. 
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Team status. Valid values: 1: Active; 2: Disabled; 3: Expired. 
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBETEAMDETAILRESP_H_
