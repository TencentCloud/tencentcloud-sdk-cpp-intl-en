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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_UPDATEUSERREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_UPDATEUSERREQUEST_H_

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
                * UpdateUser request structure.
                */
                class UpdateUserRequest : public AbstractModel
                {
                public:
                    UpdateUserRequest();
                    ~UpdateUserRequest() = default;
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
                     * 获取First name of the user.
                     * @return NewFirstName First name of the user.
                     * 
                     */
                    std::string GetNewFirstName() const;

                    /**
                     * 设置First name of the user.
                     * @param _newFirstName First name of the user.
                     * 
                     */
                    void SetNewFirstName(const std::string& _newFirstName);

                    /**
                     * 判断参数 NewFirstName 是否已赋值
                     * @return NewFirstName 是否已赋值
                     * 
                     */
                    bool NewFirstNameHasBeenSet() const;

                    /**
                     * 获取Last name of the user.
                     * @return NewLastName Last name of the user.
                     * 
                     */
                    std::string GetNewLastName() const;

                    /**
                     * 设置Last name of the user.
                     * @param _newLastName Last name of the user.
                     * 
                     */
                    void SetNewLastName(const std::string& _newLastName);

                    /**
                     * 判断参数 NewLastName 是否已赋值
                     * @return NewLastName 是否已赋值
                     * 
                     */
                    bool NewLastNameHasBeenSet() const;

                    /**
                     * 获取Display name of the user.
                     * @return NewDisplayName Display name of the user.
                     * 
                     */
                    std::string GetNewDisplayName() const;

                    /**
                     * 设置Display name of the user.
                     * @param _newDisplayName Display name of the user.
                     * 
                     */
                    void SetNewDisplayName(const std::string& _newDisplayName);

                    /**
                     * 判断参数 NewDisplayName 是否已赋值
                     * @return NewDisplayName 是否已赋值
                     * 
                     */
                    bool NewDisplayNameHasBeenSet() const;

                    /**
                     * 获取User description.
                     * @return NewDescription User description.
                     * 
                     */
                    std::string GetNewDescription() const;

                    /**
                     * 设置User description.
                     * @param _newDescription User description.
                     * 
                     */
                    void SetNewDescription(const std::string& _newDescription);

                    /**
                     * 判断参数 NewDescription 是否已赋值
                     * @return NewDescription 是否已赋值
                     * 
                     */
                    bool NewDescriptionHasBeenSet() const;

                    /**
                     * 获取Email address of the user.
                     * @return NewEmail Email address of the user.
                     * 
                     */
                    std::string GetNewEmail() const;

                    /**
                     * 设置Email address of the user.
                     * @param _newEmail Email address of the user.
                     * 
                     */
                    void SetNewEmail(const std::string& _newEmail);

                    /**
                     * 判断参数 NewEmail 是否已赋值
                     * @return NewEmail 是否已赋值
                     * 
                     */
                    bool NewEmailHasBeenSet() const;

                private:

                    /**
                     * Space ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * User ID.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * First name of the user.
                     */
                    std::string m_newFirstName;
                    bool m_newFirstNameHasBeenSet;

                    /**
                     * Last name of the user.
                     */
                    std::string m_newLastName;
                    bool m_newLastNameHasBeenSet;

                    /**
                     * Display name of the user.
                     */
                    std::string m_newDisplayName;
                    bool m_newDisplayNameHasBeenSet;

                    /**
                     * User description.
                     */
                    std::string m_newDescription;
                    bool m_newDescriptionHasBeenSet;

                    /**
                     * Email address of the user.
                     */
                    std::string m_newEmail;
                    bool m_newEmailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_UPDATEUSERREQUEST_H_
