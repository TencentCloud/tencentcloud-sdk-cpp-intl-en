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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_USERINFO_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_USERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * User information.
                */
                class UserInfo : public AbstractModel
                {
                public:
                    UserInfo();
                    ~UserInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Queried username.
                     * @return UserName Queried username.
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Queried username.
                     * @param _userName Queried username.
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
                     * 获取First name of the user.
                     * @return FirstName First name of the user.
                     * 
                     */
                    std::string GetFirstName() const;

                    /**
                     * 设置First name of the user.
                     * @param _firstName First name of the user.
                     * 
                     */
                    void SetFirstName(const std::string& _firstName);

                    /**
                     * 判断参数 FirstName 是否已赋值
                     * @return FirstName 是否已赋值
                     * 
                     */
                    bool FirstNameHasBeenSet() const;

                    /**
                     * 获取Last name of the user.
                     * @return LastName Last name of the user.
                     * 
                     */
                    std::string GetLastName() const;

                    /**
                     * 设置Last name of the user.
                     * @param _lastName Last name of the user.
                     * 
                     */
                    void SetLastName(const std::string& _lastName);

                    /**
                     * 判断参数 LastName 是否已赋值
                     * @return LastName 是否已赋值
                     * 
                     */
                    bool LastNameHasBeenSet() const;

                    /**
                     * 获取Display name of the user.
                     * @return DisplayName Display name of the user.
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置Display name of the user.
                     * @param _displayName Display name of the user.
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
                     * 获取User description.
                     * @return Description User description.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置User description.
                     * @param _description User description.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Email address of the user, which must be unique within the directory.
                     * @return Email Email address of the user, which must be unique within the directory.
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置Email address of the user, which must be unique within the directory.
                     * @param _email Email address of the user, which must be unique within the directory.
                     * 
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取User status. Valid values: Enabled, Disabled.
                     * @return UserStatus User status. Valid values: Enabled, Disabled.
                     * 
                     */
                    std::string GetUserStatus() const;

                    /**
                     * 设置User status. Valid values: Enabled, Disabled.
                     * @param _userStatus User status. Valid values: Enabled, Disabled.
                     * 
                     */
                    void SetUserStatus(const std::string& _userStatus);

                    /**
                     * 判断参数 UserStatus 是否已赋值
                     * @return UserStatus 是否已赋值
                     * 
                     */
                    bool UserStatusHasBeenSet() const;

                    /**
                     * 获取User type. Manual: manually created; Synchronized: externally imported.
                     * @return UserType User type. Manual: manually created; Synchronized: externally imported.
                     * 
                     */
                    std::string GetUserType() const;

                    /**
                     * 设置User type. Manual: manually created; Synchronized: externally imported.
                     * @param _userType User type. Manual: manually created; Synchronized: externally imported.
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
                     * 获取User ID.
                     * @return UserId User ID.
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置User ID.
                     * @param _userId User ID.
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
                     * 获取Creation time of the user.
                     * @return CreateTime Creation time of the user.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time of the user.
                     * @param _createTime Creation time of the user.
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
                     * 获取Modification time of the user.
                     * @return UpdateTime Modification time of the user.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Modification time of the user.
                     * @param _updateTime Modification time of the user.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Whether selected
                     * @return IsSelected Whether selected
                     * 
                     */
                    bool GetIsSelected() const;

                    /**
                     * 设置Whether selected
                     * @param _isSelected Whether selected
                     * 
                     */
                    void SetIsSelected(const bool& _isSelected);

                    /**
                     * 判断参数 IsSelected 是否已赋值
                     * @return IsSelected 是否已赋值
                     * 
                     */
                    bool IsSelectedHasBeenSet() const;

                private:

                    /**
                     * Queried username.
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * First name of the user.
                     */
                    std::string m_firstName;
                    bool m_firstNameHasBeenSet;

                    /**
                     * Last name of the user.
                     */
                    std::string m_lastName;
                    bool m_lastNameHasBeenSet;

                    /**
                     * Display name of the user.
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * User description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Email address of the user, which must be unique within the directory.
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * User status. Valid values: Enabled, Disabled.
                     */
                    std::string m_userStatus;
                    bool m_userStatusHasBeenSet;

                    /**
                     * User type. Manual: manually created; Synchronized: externally imported.
                     */
                    std::string m_userType;
                    bool m_userTypeHasBeenSet;

                    /**
                     * User ID.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * Creation time of the user.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Modification time of the user.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Whether selected
                     */
                    bool m_isSelected;
                    bool m_isSelectedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_USERINFO_H_
