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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBETEAMMEMBERINFORESP_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBETEAMMEMBERINFORESP_H_

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
                * Team member information
                */
                class DescribeTeamMemberInfoResp : public AbstractModel
                {
                public:
                    DescribeTeamMemberInfoResp();
                    ~DescribeTeamMemberInfoResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取User ID
                     * @return UserId User ID
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置User ID
                     * @param _userId User ID
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

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
                     * 获取Specifies the team role name.
                     * @return TeamRoleName Specifies the team role name.
                     * 
                     */
                    std::string GetTeamRoleName() const;

                    /**
                     * 设置Specifies the team role name.
                     * @param _teamRoleName Specifies the team role name.
                     * 
                     */
                    void SetTeamRoleName(const std::string& _teamRoleName);

                    /**
                     * 判断参数 TeamRoleName 是否已赋值
                     * @return TeamRoleName 是否已赋值
                     * 
                     */
                    bool TeamRoleNameHasBeenSet() const;

                    /**
                     * 获取Specifies the team role ID.
                     * @return TeamRoleId Specifies the team role ID.
                     * 
                     */
                    int64_t GetTeamRoleId() const;

                    /**
                     * 设置Specifies the team role ID.
                     * @param _teamRoleId Specifies the team role ID.
                     * 
                     */
                    void SetTeamRoleId(const int64_t& _teamRoleId);

                    /**
                     * 判断参数 TeamRoleId 是否已赋值
                     * @return TeamRoleId 是否已赋值
                     * 
                     */
                    bool TeamRoleIdHasBeenSet() const;

                    /**
                     * 获取Whether it is editable
                     * @return CanEdit Whether it is editable
                     * 
                     */
                    bool GetCanEdit() const;

                    /**
                     * 设置Whether it is editable
                     * @param _canEdit Whether it is editable
                     * 
                     */
                    void SetCanEdit(const bool& _canEdit);

                    /**
                     * 判断参数 CanEdit 是否已赋值
                     * @return CanEdit 是否已赋值
                     * 
                     */
                    bool CanEditHasBeenSet() const;

                private:

                    /**
                     * User ID
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

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
                     * Specifies the team role name.
                     */
                    std::string m_teamRoleName;
                    bool m_teamRoleNameHasBeenSet;

                    /**
                     * Specifies the team role ID.
                     */
                    int64_t m_teamRoleId;
                    bool m_teamRoleIdHasBeenSet;

                    /**
                     * Whether it is editable
                     */
                    bool m_canEdit;
                    bool m_canEditHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBETEAMMEMBERINFORESP_H_
