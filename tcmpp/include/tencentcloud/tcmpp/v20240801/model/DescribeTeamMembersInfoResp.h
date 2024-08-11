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

#ifndef TENCENTCLOUD_TCMPP_V20240801_MODEL_DESCRIBETEAMMEMBERSINFORESP_H_
#define TENCENTCLOUD_TCMPP_V20240801_MODEL_DESCRIBETEAMMEMBERSINFORESP_H_

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
                * Team member information
                */
                class DescribeTeamMembersInfoResp : public AbstractModel
                {
                public:
                    DescribeTeamMembersInfoResp();
                    ~DescribeTeamMembersInfoResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取User ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserId User ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置User ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _userId User ID
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserAccount User account
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUserAccount() const;

                    /**
                     * 设置User account
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _userAccount User account
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Username
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserName Username
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Username
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _userName Username
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Role
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserRoles Role
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUserRoles() const;

                    /**
                     * 设置Role
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _userRoles Role
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUserRoles(const std::string& _userRoles);

                    /**
                     * 判断参数 UserRoles 是否已赋值
                     * @return UserRoles 是否已赋值
                     * 
                     */
                    bool UserRolesHasBeenSet() const;

                private:

                    /**
                     * User ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * User account
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userAccount;
                    bool m_userAccountHasBeenSet;

                    /**
                     * Username
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Role
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userRoles;
                    bool m_userRolesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCMPP_V20240801_MODEL_DESCRIBETEAMMEMBERSINFORESP_H_
