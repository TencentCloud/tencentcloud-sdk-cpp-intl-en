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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_USERSEARCHCRITERIA_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_USERSEARCHCRITERIA_H_

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
                * User attribute search criteria.
                */
                class UserSearchCriteria : public AbstractModel
                {
                public:
                    UserSearchCriteria();
                    ~UserSearchCriteria() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Username, which can contain up to 64 characters.
                     * @return UserName Username, which can contain up to 64 characters.
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Username, which can contain up to 64 characters.
                     * @param UserName Username, which can contain up to 64 characters.
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取User's mobile number.
                     * @return Phone User's mobile number.
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置User's mobile number.
                     * @param Phone User's mobile number.
                     */
                    void SetPhone(const std::string& _phone);

                    /**
                     * 判断参数 Phone 是否已赋值
                     * @return Phone 是否已赋值
                     */
                    bool PhoneHasBeenSet() const;

                    /**
                     * 获取User's email address.
                     * @return Email User's email address.
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置User's email address.
                     * @param Email User's email address.
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取User status. Valid values: NORMAL: normal; FREEZE: frozen; LOCKED: locked; NOT_ENABLED: disabled.
                     * @return Status User status. Valid values: NORMAL: normal; FREEZE: frozen; LOCKED: locked; NOT_ENABLED: disabled.
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置User status. Valid values: NORMAL: normal; FREEZE: frozen; LOCKED: locked; NOT_ENABLED: disabled.
                     * @param Status User status. Valid values: NORMAL: normal; FREEZE: frozen; LOCKED: locked; NOT_ENABLED: disabled.
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取User creation time in ISO 8601 format.
                     * @return CreationTime User creation time in ISO 8601 format.
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 设置User creation time in ISO 8601 format.
                     * @param CreationTime User creation time in ISO 8601 format.
                     */
                    void SetCreationTime(const std::string& _creationTime);

                    /**
                     * 判断参数 CreationTime 是否已赋值
                     * @return CreationTime 是否已赋值
                     */
                    bool CreationTimeHasBeenSet() const;

                    /**
                     * 获取The user's last update time.
                     * @return LastUpdateTime The user's last update time.
                     */
                    std::string GetLastUpdateTime() const;

                    /**
                     * 设置The user's last update time.
                     * @param LastUpdateTime The user's last update time.
                     */
                    void SetLastUpdateTime(const std::string& _lastUpdateTime);

                    /**
                     * 判断参数 LastUpdateTime 是否已赋值
                     * @return LastUpdateTime 是否已赋值
                     */
                    bool LastUpdateTimeHasBeenSet() const;

                    /**
                     * 获取Search by name. The match criteria include username and user ID.
                     * @return Keyword Search by name. The match criteria include username and user ID.
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置Search by name. The match criteria include username and user ID.
                     * @param Keyword Search by name. The match criteria include username and user ID.
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     */
                    bool KeywordHasBeenSet() const;

                private:

                    /**
                     * Username, which can contain up to 64 characters.
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * User's mobile number.
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * User's email address.
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * User status. Valid values: NORMAL: normal; FREEZE: frozen; LOCKED: locked; NOT_ENABLED: disabled.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * User creation time in ISO 8601 format.
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * The user's last update time.
                     */
                    std::string m_lastUpdateTime;
                    bool m_lastUpdateTimeHasBeenSet;

                    /**
                     * Search by name. The match criteria include username and user ID.
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_USERSEARCHCRITERIA_H_
