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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_USERINFO_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_USERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * User ID and username
                */
                class UserInfo : public AbstractModel
                {
                public:
                    UserInfo();
                    ~UserInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Username.
                     * @return UserName Username.
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Username.
                     * @param _userName Username.
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
                     * 获取Email.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Email Email.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置Email.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _email Email.
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

                    /**
                     * 获取Mobile number.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PhoneNumber Mobile number.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPhoneNumber() const;

                    /**
                     * 设置Mobile number.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _phoneNumber Mobile number.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPhoneNumber(const std::string& _phoneNumber);

                    /**
                     * 判断参数 PhoneNumber 是否已赋值
                     * @return PhoneNumber 是否已赋值
                     * 
                     */
                    bool PhoneNumberHasBeenSet() const;

                    /**
                     * 获取Telephone country code.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AreaCode Telephone country code.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAreaCode() const;

                    /**
                     * 设置Telephone country code.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _areaCode Telephone country code.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAreaCode(const std::string& _areaCode);

                    /**
                     * 判断参数 AreaCode 是否已赋值
                     * @return AreaCode 是否已赋值
                     * 
                     */
                    bool AreaCodeHasBeenSet() const;

                    /**
                     * 获取WeCom account ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AppUserId WeCom account ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAppUserId() const;

                    /**
                     * 设置WeCom account ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _appUserId WeCom account ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAppUserId(const std::string& _appUserId);

                    /**
                     * 判断参数 AppUserId 是否已赋值
                     * @return AppUserId 是否已赋值
                     * 
                     */
                    bool AppUserIdHasBeenSet() const;

                    /**
                     * 获取WeCom account name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AppUserName WeCom account name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAppUserName() const;

                    /**
                     * 设置WeCom account name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _appUserName WeCom account name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAppUserName(const std::string& _appUserName);

                    /**
                     * 判断参数 AppUserName 是否已赋值
                     * @return AppUserName 是否已赋值
                     * 
                     */
                    bool AppUserNameHasBeenSet() const;

                private:

                    /**
                     * User ID.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * Username.
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Email.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * Mobile number.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_phoneNumber;
                    bool m_phoneNumberHasBeenSet;

                    /**
                     * Telephone country code.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_areaCode;
                    bool m_areaCodeHasBeenSet;

                    /**
                     * WeCom account ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_appUserId;
                    bool m_appUserIdHasBeenSet;

                    /**
                     * WeCom account name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_appUserName;
                    bool m_appUserNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_USERINFO_H_
