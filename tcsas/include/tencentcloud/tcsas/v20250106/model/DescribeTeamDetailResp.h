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
                     * 获取<p>Team role type. Valid values: 1: Mini program team; 2: Superapp team.</p>
                     * @return TeamRoleType <p>Team role type. Valid values: 1: Mini program team; 2: Superapp team.</p>
                     * 
                     */
                    int64_t GetTeamRoleType() const;

                    /**
                     * 设置<p>Team role type. Valid values: 1: Mini program team; 2: Superapp team.</p>
                     * @param _teamRoleType <p>Team role type. Valid values: 1: Mini program team; 2: Superapp team.</p>
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
                     * 获取<p>Administrator account.</p>
                     * @return AdminUserAccount <p>Administrator account.</p>
                     * 
                     */
                    std::string GetAdminUserAccount() const;

                    /**
                     * 设置<p>Administrator account.</p>
                     * @param _adminUserAccount <p>Administrator account.</p>
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
                     * 获取<p>Creator.</p>
                     * @return CreateUser <p>Creator.</p>
                     * 
                     */
                    std::string GetCreateUser() const;

                    /**
                     * 设置<p>Creator.</p>
                     * @param _createUser <p>Creator.</p>
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
                     * 获取<p>Creation time.</p>
                     * @return CreateTime <p>Creation time.</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Creation time.</p>
                     * @param _createTime <p>Creation time.</p>
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
                     * 获取<p>Number of bound mini program teams.</p>
                     * @return BindMiniTeamCount <p>Number of bound mini program teams.</p>
                     * 
                     */
                    int64_t GetBindMiniTeamCount() const;

                    /**
                     * 设置<p>Number of bound mini program teams.</p>
                     * @param _bindMiniTeamCount <p>Number of bound mini program teams.</p>
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
                     * 获取<p>Team name.</p>
                     * @return BindTeamName <p>Team name.</p>
                     * 
                     */
                    std::string GetBindTeamName() const;

                    /**
                     * 设置<p>Team name.</p>
                     * @param _bindTeamName <p>Team name.</p>
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
                     * 获取<p>Superapp name. Only returned for querying details of mini program teams.</p>
                     * @return ApplicationName <p>Superapp name. Only returned for querying details of mini program teams.</p>
                     * 
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置<p>Superapp name. Only returned for querying details of mini program teams.</p>
                     * @param _applicationName <p>Superapp name. Only returned for querying details of mini program teams.</p>
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
                     * 获取<p>Administrator name.</p>
                     * @return AdminUserName <p>Administrator name.</p>
                     * 
                     */
                    std::string GetAdminUserName() const;

                    /**
                     * 设置<p>Administrator name.</p>
                     * @param _adminUserName <p>Administrator name.</p>
                     * 
                     */
                    void SetAdminUserName(const std::string& _adminUserName);

                    /**
                     * 判断参数 AdminUserName 是否已赋值
                     * @return AdminUserName 是否已赋值
                     * 
                     */
                    bool AdminUserNameHasBeenSet() const;

                private:

                    /**
                     * <p>Team name.</p>
                     */
                    std::string m_teamName;
                    bool m_teamNameHasBeenSet;

                    /**
                     * <p>Team role type. Valid values: 1: Mini program team; 2: Superapp team.</p>
                     */
                    int64_t m_teamRoleType;
                    bool m_teamRoleTypeHasBeenSet;

                    /**
                     * <p>Administrator account.</p>
                     */
                    std::string m_adminUserAccount;
                    bool m_adminUserAccountHasBeenSet;

                    /**
                     * <p>Creator.</p>
                     */
                    std::string m_createUser;
                    bool m_createUserHasBeenSet;

                    /**
                     * <p>Creation time.</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Number of team members.</p>
                     */
                    int64_t m_memberCount;
                    bool m_memberCountHasBeenSet;

                    /**
                     * <p>Number of bound mini program teams.</p>
                     */
                    int64_t m_bindMiniTeamCount;
                    bool m_bindMiniTeamCountHasBeenSet;

                    /**
                     * <p>Team name.</p>
                     */
                    std::string m_bindTeamName;
                    bool m_bindTeamNameHasBeenSet;

                    /**
                     * <p>Team registration link.</p>
                     */
                    std::string m_registerLink;
                    bool m_registerLinkHasBeenSet;

                    /**
                     * <p>Superapp name. Only returned for querying details of mini program teams.</p>
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

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
                     * <p>Administrator name.</p>
                     */
                    std::string m_adminUserName;
                    bool m_adminUserNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBETEAMDETAILRESP_H_
