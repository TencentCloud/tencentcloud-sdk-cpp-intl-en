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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_USERINFORMATION_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_USERINFORMATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * User information list.
                */
                class UserInformation : public AbstractModel
                {
                public:
                    UserInformation();
                    ~UserInformation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Username, which can contain up to 32 characters.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return UserName Username, which can contain up to 32 characters.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Username, which can contain up to 32 characters.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _userName Username, which can contain up to 32 characters.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取User status.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Status User status.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置User status.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _status User status.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Nickname, which can contain up to 64 characters and is the same as the username by default.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DisplayName Nickname, which can contain up to 64 characters and is the same as the username by default.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置Nickname, which can contain up to 64 characters and is the same as the username by default.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _displayName Nickname, which can contain up to 64 characters and is the same as the username by default.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取User remarks, which can contain up to 512 characters.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Description User remarks, which can contain up to 512 characters.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置User remarks, which can contain up to 512 characters.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _description User remarks, which can contain up to 512 characters.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Last update time of the user in ISO 8601 format.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return LastUpdateTime Last update time of the user in ISO 8601 format.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLastUpdateTime() const;

                    /**
                     * 设置Last update time of the user in ISO 8601 format.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _lastUpdateTime Last update time of the user in ISO 8601 format.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLastUpdateTime(const std::string& _lastUpdateTime);

                    /**
                     * 判断参数 LastUpdateTime 是否已赋值
                     * @return LastUpdateTime 是否已赋值
                     * 
                     */
                    bool LastUpdateTimeHasBeenSet() const;

                    /**
                     * 获取User creation time in ISO 8601 format.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CreationTime User creation time in ISO 8601 format.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 设置User creation time in ISO 8601 format.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _creationTime User creation time in ISO 8601 format.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreationTime(const std::string& _creationTime);

                    /**
                     * 判断参数 CreationTime 是否已赋值
                     * @return CreationTime 是否已赋值
                     * 
                     */
                    bool CreationTimeHasBeenSet() const;

                    /**
                     * 获取Path ID of the user's primary organization.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return OrgPath Path ID of the user's primary organization.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOrgPath() const;

                    /**
                     * 设置Path ID of the user's primary organization.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _orgPath Path ID of the user's primary organization.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOrgPath(const std::string& _orgPath);

                    /**
                     * 判断参数 OrgPath 是否已赋值
                     * @return OrgPath 是否已赋值
                     * 
                     */
                    bool OrgPathHasBeenSet() const;

                    /**
                     * 获取User's mobile number with country code, such as `+86-00000000000`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Phone User's mobile number with country code, such as `+86-00000000000`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置User's mobile number with country code, such as `+86-00000000000`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _phone User's mobile number with country code, such as `+86-00000000000`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPhone(const std::string& _phone);

                    /**
                     * 判断参数 Phone 是否已赋值
                     * @return Phone 是否已赋值
                     * 
                     */
                    bool PhoneHasBeenSet() const;

                    /**
                     * 获取List of IDs of the user's user groups.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SubjectGroups List of IDs of the user's user groups.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetSubjectGroups() const;

                    /**
                     * 设置List of IDs of the user's user groups.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _subjectGroups List of IDs of the user's user groups.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSubjectGroups(const std::vector<std::string>& _subjectGroups);

                    /**
                     * 判断参数 SubjectGroups 是否已赋值
                     * @return SubjectGroups 是否已赋值
                     * 
                     */
                    bool SubjectGroupsHasBeenSet() const;

                    /**
                     * 获取User's email address.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Email User's email address.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置User's email address.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _email User's email address.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Last login time of the user in ISO 8601 format.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return LastLoginTime Last login time of the user in ISO 8601 format.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLastLoginTime() const;

                    /**
                     * 设置Last login time of the user in ISO 8601 format.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _lastLoginTime Last login time of the user in ISO 8601 format.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLastLoginTime(const std::string& _lastLoginTime);

                    /**
                     * 判断参数 LastLoginTime 是否已赋值
                     * @return LastLoginTime 是否已赋值
                     * 
                     */
                    bool LastLoginTimeHasBeenSet() const;

                    /**
                     * 获取User ID, which is globally unique and can contain up to 64 characters.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return UserId User ID, which is globally unique and can contain up to 64 characters.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置User ID, which is globally unique and can contain up to 64 characters.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _userId User ID, which is globally unique and can contain up to 64 characters.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                private:

                    /**
                     * Username, which can contain up to 32 characters.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * User status.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Nickname, which can contain up to 64 characters and is the same as the username by default.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * User remarks, which can contain up to 512 characters.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Last update time of the user in ISO 8601 format.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_lastUpdateTime;
                    bool m_lastUpdateTimeHasBeenSet;

                    /**
                     * User creation time in ISO 8601 format.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * Path ID of the user's primary organization.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_orgPath;
                    bool m_orgPathHasBeenSet;

                    /**
                     * User's mobile number with country code, such as `+86-00000000000`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * List of IDs of the user's user groups.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_subjectGroups;
                    bool m_subjectGroupsHasBeenSet;

                    /**
                     * User's email address.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * Last login time of the user in ISO 8601 format.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_lastLoginTime;
                    bool m_lastLoginTimeHasBeenSet;

                    /**
                     * User ID, which is globally unique and can contain up to 64 characters.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_USERINFORMATION_H_
