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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEUSERREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEUSERREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateUser request structure.
                */
                class CreateUserRequest : public AbstractModel
                {
                public:
                    CreateUserRequest();
                    ~CreateUserRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Space ID.
                     * @return ZoneId Space ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Space ID.
                     * @param _zoneId Space ID.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取User name, which must be unique within the space and cannot be modified. It contains up to 64 characters, including digits, English letters, and special characters such as plus signs (+), equal signs (=), commas (,), periods (.), at signs (@), hyphens (-), and underscores (_).
                     * @return UserName User name, which must be unique within the space and cannot be modified. It contains up to 64 characters, including digits, English letters, and special characters such as plus signs (+), equal signs (=), commas (,), periods (.), at signs (@), hyphens (-), and underscores (_).
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置User name, which must be unique within the space and cannot be modified. It contains up to 64 characters, including digits, English letters, and special characters such as plus signs (+), equal signs (=), commas (,), periods (.), at signs (@), hyphens (-), and underscores (_).
                     * @param _userName User name, which must be unique within the space and cannot be modified. It contains up to 64 characters, including digits, English letters, and special characters such as plus signs (+), equal signs (=), commas (,), periods (.), at signs (@), hyphens (-), and underscores (_).
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
                     * 获取Last name of the user, which contains up to 64 characters.
                     * @return FirstName Last name of the user, which contains up to 64 characters.
                     * 
                     */
                    std::string GetFirstName() const;

                    /**
                     * 设置Last name of the user, which contains up to 64 characters.
                     * @param _firstName Last name of the user, which contains up to 64 characters.
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
                     * 获取First name of the user, which contains up to 64 characters.
                     * @return LastName First name of the user, which contains up to 64 characters.
                     * 
                     */
                    std::string GetLastName() const;

                    /**
                     * 设置First name of the user, which contains up to 64 characters.
                     * @param _lastName First name of the user, which contains up to 64 characters.
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
                     * 获取Display name of the user, which contains up to 256 characters.
                     * @return DisplayName Display name of the user, which contains up to 256 characters.
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置Display name of the user, which contains up to 256 characters.
                     * @param _displayName Display name of the user, which contains up to 256 characters.
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
                     * 获取User description, which contains up to 1024 characters.
                     * @return Description User description, which contains up to 1024 characters.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置User description, which contains up to 1024 characters.
                     * @param _description User description, which contains up to 1024 characters.
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
                     * 获取Email address of the user, which must be unique within the directory and contains up to 128 characters.
                     * @return Email Email address of the user, which must be unique within the directory and contains up to 128 characters.
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置Email address of the user, which must be unique within the directory and contains up to 128 characters.
                     * @param _email Email address of the user, which must be unique within the directory and contains up to 128 characters.
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
                     * 获取User status. Valid values: Enabled (default), Disabled.
                     * @return UserStatus User status. Valid values: Enabled (default), Disabled.
                     * 
                     */
                    std::string GetUserStatus() const;

                    /**
                     * 设置User status. Valid values: Enabled (default), Disabled.
                     * @param _userStatus User status. Valid values: Enabled (default), Disabled.
                     * 
                     */
                    void SetUserStatus(const std::string& _userStatus);

                    /**
                     * 判断参数 UserStatus 是否已赋值
                     * @return UserStatus 是否已赋值
                     * 
                     */
                    bool UserStatusHasBeenSet() const;

                private:

                    /**
                     * Space ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * User name, which must be unique within the space and cannot be modified. It contains up to 64 characters, including digits, English letters, and special characters such as plus signs (+), equal signs (=), commas (,), periods (.), at signs (@), hyphens (-), and underscores (_).
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Last name of the user, which contains up to 64 characters.
                     */
                    std::string m_firstName;
                    bool m_firstNameHasBeenSet;

                    /**
                     * First name of the user, which contains up to 64 characters.
                     */
                    std::string m_lastName;
                    bool m_lastNameHasBeenSet;

                    /**
                     * Display name of the user, which contains up to 256 characters.
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * User description, which contains up to 1024 characters.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Email address of the user, which must be unique within the directory and contains up to 128 characters.
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * User status. Valid values: Enabled (default), Disabled.
                     */
                    std::string m_userStatus;
                    bool m_userStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEUSERREQUEST_H_
