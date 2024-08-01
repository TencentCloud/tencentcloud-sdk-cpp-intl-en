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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CREATEUSERREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CREATEUSERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/Policy.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * CreateUser request structure.
                */
                class CreateUserRequest : public AbstractModel
                {
                public:
                    CreateUserRequest();
                    ~CreateUserRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Sub-user UIN that needs to be granted permissions. It can be checked through the upper right corner of Tencent Cloud Console → Account Information → Account ID.
                     * @return UserId Sub-user UIN that needs to be granted permissions. It can be checked through the upper right corner of Tencent Cloud Console → Account Information → Account ID.
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置Sub-user UIN that needs to be granted permissions. It can be checked through the upper right corner of Tencent Cloud Console → Account Information → Account ID.
                     * @param _userId Sub-user UIN that needs to be granted permissions. It can be checked through the upper right corner of Tencent Cloud Console → Account Information → Account ID.
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
                     * 获取User description, which can make it easy to identify different users.
                     * @return UserDescription User description, which can make it easy to identify different users.
                     * 
                     */
                    std::string GetUserDescription() const;

                    /**
                     * 设置User description, which can make it easy to identify different users.
                     * @param _userDescription User description, which can make it easy to identify different users.
                     * 
                     */
                    void SetUserDescription(const std::string& _userDescription);

                    /**
                     * 判断参数 UserDescription 是否已赋值
                     * @return UserDescription 是否已赋值
                     * 
                     */
                    bool UserDescriptionHasBeenSet() const;

                    /**
                     * 获取Collections of permissions bound to users
                     * @return PolicySet Collections of permissions bound to users
                     * 
                     */
                    std::vector<Policy> GetPolicySet() const;

                    /**
                     * 设置Collections of permissions bound to users
                     * @param _policySet Collections of permissions bound to users
                     * 
                     */
                    void SetPolicySet(const std::vector<Policy>& _policySet);

                    /**
                     * 判断参数 PolicySet 是否已赋值
                     * @return PolicySet 是否已赋值
                     * 
                     */
                    bool PolicySetHasBeenSet() const;

                    /**
                     * 获取Types of users. ADMIN: administrators; COMMON: general users. When the type of user is administrator, the collections of permissions and bound working groups cannot be set. Administrators own all the permissions by default. If the parameter is not filled in, it will be COMMON by default.
                     * @return UserType Types of users. ADMIN: administrators; COMMON: general users. When the type of user is administrator, the collections of permissions and bound working groups cannot be set. Administrators own all the permissions by default. If the parameter is not filled in, it will be COMMON by default.
                     * 
                     */
                    std::string GetUserType() const;

                    /**
                     * 设置Types of users. ADMIN: administrators; COMMON: general users. When the type of user is administrator, the collections of permissions and bound working groups cannot be set. Administrators own all the permissions by default. If the parameter is not filled in, it will be COMMON by default.
                     * @param _userType Types of users. ADMIN: administrators; COMMON: general users. When the type of user is administrator, the collections of permissions and bound working groups cannot be set. Administrators own all the permissions by default. If the parameter is not filled in, it will be COMMON by default.
                     * 
                     */
                    void SetUserType(const std::string& _userType);

                    /**
                     * 判断参数 UserType 是否已赋值
                     * @return UserType 是否已赋值
                     * 
                     */
                    bool UserTypeHasBeenSet() const;

                    /**
                     * 获取Collection of IDs of working groups bound to users
                     * @return WorkGroupIds Collection of IDs of working groups bound to users
                     * 
                     */
                    std::vector<int64_t> GetWorkGroupIds() const;

                    /**
                     * 设置Collection of IDs of working groups bound to users
                     * @param _workGroupIds Collection of IDs of working groups bound to users
                     * 
                     */
                    void SetWorkGroupIds(const std::vector<int64_t>& _workGroupIds);

                    /**
                     * 判断参数 WorkGroupIds 是否已赋值
                     * @return WorkGroupIds 是否已赋值
                     * 
                     */
                    bool WorkGroupIdsHasBeenSet() const;

                    /**
                     * 获取User alias, and its characters are less than 50.
                     * @return UserAlias User alias, and its characters are less than 50.
                     * 
                     */
                    std::string GetUserAlias() const;

                    /**
                     * 设置User alias, and its characters are less than 50.
                     * @param _userAlias User alias, and its characters are less than 50.
                     * 
                     */
                    void SetUserAlias(const std::string& _userAlias);

                    /**
                     * 判断参数 UserAlias 是否已赋值
                     * @return UserAlias 是否已赋值
                     * 
                     */
                    bool UserAliasHasBeenSet() const;

                private:

                    /**
                     * Sub-user UIN that needs to be granted permissions. It can be checked through the upper right corner of Tencent Cloud Console → Account Information → Account ID.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * User description, which can make it easy to identify different users.
                     */
                    std::string m_userDescription;
                    bool m_userDescriptionHasBeenSet;

                    /**
                     * Collections of permissions bound to users
                     */
                    std::vector<Policy> m_policySet;
                    bool m_policySetHasBeenSet;

                    /**
                     * Types of users. ADMIN: administrators; COMMON: general users. When the type of user is administrator, the collections of permissions and bound working groups cannot be set. Administrators own all the permissions by default. If the parameter is not filled in, it will be COMMON by default.
                     */
                    std::string m_userType;
                    bool m_userTypeHasBeenSet;

                    /**
                     * Collection of IDs of working groups bound to users
                     */
                    std::vector<int64_t> m_workGroupIds;
                    bool m_workGroupIdsHasBeenSet;

                    /**
                     * User alias, and its characters are less than 50.
                     */
                    std::string m_userAlias;
                    bool m_userAliasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CREATEUSERREQUEST_H_
