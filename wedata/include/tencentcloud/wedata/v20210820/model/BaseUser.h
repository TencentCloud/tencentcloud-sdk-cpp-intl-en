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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_BASEUSER_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_BASEUSER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Basic User Information
                */
                class BaseUser : public AbstractModel
                {
                public:
                    BaseUser();
                    ~BaseUser() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cloud User UIN, Globally Unique
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return UserId Cloud User UIN, Globally Unique
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置Cloud User UIN, Globally Unique
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _userId Cloud User UIN, Globally Unique
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取User Global Unique Identifier
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return UserName User Global Unique Identifier
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置User Global Unique Identifier
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _userName User Global Unique Identifier
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取User Display Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DisplayName User Display Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置User Display Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _displayName User Display Name
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Telephone Number
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return PhoneNum Telephone Number
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetPhoneNum() const;

                    /**
                     * 设置Telephone Number
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _phoneNum Telephone Number
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Email
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Email Email
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置Email
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _email Email
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * Cloud User UIN, Globally Unique
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * User Global Unique Identifier
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * User Display Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * Telephone Number
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_phoneNum;
                    bool m_phoneNumHasBeenSet;

                    /**
                     * Email
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_BASEUSER_H_
