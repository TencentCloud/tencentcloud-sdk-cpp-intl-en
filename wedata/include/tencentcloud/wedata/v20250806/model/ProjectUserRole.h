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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_PROJECTUSERROLE_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_PROJECTUSERROLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/SystemRole.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Project user object.
                */
                class ProjectUserRole : public AbstractModel
                {
                public:
                    ProjectUserRole();
                    ~ProjectUserRole() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Tenant ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AppId Tenant ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置Tenant ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _appId Tenant ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取Host Account ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RootAccountId Host Account ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRootAccountId() const;

                    /**
                     * 设置Host Account ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _rootAccountId Host Account ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRootAccountId(const std::string& _rootAccountId);

                    /**
                     * 判断参数 RootAccountId 是否已赋值
                     * @return RootAccountId 是否已赋值
                     * 
                     */
                    bool RootAccountIdHasBeenSet() const;

                    /**
                     * 获取User ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserUin User ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUserUin() const;

                    /**
                     * 设置User ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _userUin User ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUserUin(const std::string& _userUin);

                    /**
                     * 判断参数 UserUin 是否已赋值
                     * @return UserUin 是否已赋值
                     * 
                     */
                    bool UserUinHasBeenSet() const;

                    /**
                     * 获取Username.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserName Username.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Username.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _userName Username.
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
                     * 获取Display name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DisplayName Display name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置Display name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _displayName Display name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     * 
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取User role object.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Roles User role object.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<SystemRole> GetRoles() const;

                    /**
                     * 设置User role object.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _roles User role object.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRoles(const std::vector<SystemRole>& _roles);

                    /**
                     * 判断参数 Roles 是否已赋值
                     * @return Roles 是否已赋值
                     * 
                     */
                    bool RolesHasBeenSet() const;

                    /**
                     * 获取Whether to create.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsCreator Whether to create.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsCreator() const;

                    /**
                     * 设置Whether to create.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isCreator Whether to create.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsCreator(const bool& _isCreator);

                    /**
                     * 判断参数 IsCreator 是否已赋值
                     * @return IsCreator 是否已赋值
                     * 
                     */
                    bool IsCreatorHasBeenSet() const;

                    /**
                     * 获取Creation time.


Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Creation time.


Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.


Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Creation time.


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
                     * 获取Whether the project leader.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsProjectOwner Whether the project leader.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsProjectOwner() const;

                    /**
                     * 设置Whether the project leader.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isProjectOwner Whether the project leader.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsProjectOwner(const bool& _isProjectOwner);

                    /**
                     * 判断参数 IsProjectOwner 是否已赋值
                     * @return IsProjectOwner 是否已赋值
                     * 
                     */
                    bool IsProjectOwnerHasBeenSet() const;

                    /**
                     * 获取Mobile number.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PhoneNum Mobile number.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPhoneNum() const;

                    /**
                     * 设置Mobile number.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _phoneNum Mobile number.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPhoneNum(const std::string& _phoneNum);

                    /**
                     * 判断参数 PhoneNum 是否已赋值
                     * @return PhoneNum 是否已赋值
                     * 
                     */
                    bool PhoneNumHasBeenSet() const;

                    /**
                     * 获取Mailbox.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Email Mailbox.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置Mailbox.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _email Mailbox.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                private:

                    /**
                     * Tenant ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Host Account ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_rootAccountId;
                    bool m_rootAccountIdHasBeenSet;

                    /**
                     * User ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userUin;
                    bool m_userUinHasBeenSet;

                    /**
                     * Username.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Display name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * User role object.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<SystemRole> m_roles;
                    bool m_rolesHasBeenSet;

                    /**
                     * Whether to create.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isCreator;
                    bool m_isCreatorHasBeenSet;

                    /**
                     * Creation time.


Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Whether the project leader.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isProjectOwner;
                    bool m_isProjectOwnerHasBeenSet;

                    /**
                     * Mobile number.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_phoneNum;
                    bool m_phoneNumHasBeenSet;

                    /**
                     * Mailbox.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_PROJECTUSERROLE_H_
