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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_USERINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_USERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/Policy.h>
#include <tencentcloud/dlc/v20210125/model/WorkGroupMessage.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * Information about the authorized user
                */
                class UserInfo : public AbstractModel
                {
                public:
                    UserInfo();
                    ~UserInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取User ID, which is the same as the sub-user UIN
                     * @return UserId User ID, which is the same as the sub-user UIN
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置User ID, which is the same as the sub-user UIN
                     * @param _userId User ID, which is the same as the sub-user UIN
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserDescription User description, which can make it easy to identify different users.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUserDescription() const;

                    /**
                     * 设置User description, which can make it easy to identify different users.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _userDescription User description, which can make it easy to identify different users.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Collection of permissions solely bound to users
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PolicySet Collection of permissions solely bound to users
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Policy> GetPolicySet() const;

                    /**
                     * 设置Collection of permissions solely bound to users
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _policySet Collection of permissions solely bound to users
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Creator of the current user
                     * @return Creator Creator of the current user
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置Creator of the current user
                     * @param _creator Creator of the current user
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取Creation time, and the example of the format is at 16:19:32 on Jul 28, 2021.
                     * @return CreateTime Creation time, and the example of the format is at 16:19:32 on Jul 28, 2021.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time, and the example of the format is at 16:19:32 on Jul 28, 2021.
                     * @param _createTime Creation time, and the example of the format is at 16:19:32 on Jul 28, 2021.
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
                     * 获取Collection of associated working groups
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WorkGroupSet Collection of associated working groups
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<WorkGroupMessage> GetWorkGroupSet() const;

                    /**
                     * 设置Collection of associated working groups
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _workGroupSet Collection of associated working groups
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWorkGroupSet(const std::vector<WorkGroupMessage>& _workGroupSet);

                    /**
                     * 判断参数 WorkGroupSet 是否已赋值
                     * @return WorkGroupSet 是否已赋值
                     * 
                     */
                    bool WorkGroupSetHasBeenSet() const;

                    /**
                     * 获取Whether it is the root account
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsOwner Whether it is the root account
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsOwner() const;

                    /**
                     * 设置Whether it is the root account
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isOwner Whether it is the root account
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Types of users. ADMIN: administrators; COMMON: general users
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserType Types of users. ADMIN: administrators; COMMON: general users
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUserType() const;

                    /**
                     * 设置Types of users. ADMIN: administrators; COMMON: general users
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _userType Types of users. ADMIN: administrators; COMMON: general users
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取User alias
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserAlias User alias
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUserAlias() const;

                    /**
                     * 设置User alias
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _userAlias User alias
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * User ID, which is the same as the sub-user UIN
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * User description, which can make it easy to identify different users.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userDescription;
                    bool m_userDescriptionHasBeenSet;

                    /**
                     * Collection of permissions solely bound to users
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Policy> m_policySet;
                    bool m_policySetHasBeenSet;

                    /**
                     * Creator of the current user
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * Creation time, and the example of the format is at 16:19:32 on Jul 28, 2021.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Collection of associated working groups
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<WorkGroupMessage> m_workGroupSet;
                    bool m_workGroupSetHasBeenSet;

                    /**
                     * Whether it is the root account
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isOwner;
                    bool m_isOwnerHasBeenSet;

                    /**
                     * Types of users. ADMIN: administrators; COMMON: general users
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userType;
                    bool m_userTypeHasBeenSet;

                    /**
                     * User alias
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userAlias;
                    bool m_userAliasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_USERINFO_H_
