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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_UPDATEUSERREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_UPDATEUSERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
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
                     * 获取Sub-user username
                     * @return Name Sub-user username
                     */
                    std::string GetName() const;

                    /**
                     * 设置Sub-user username
                     * @param Name Sub-user username
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Sub-user remarks
                     * @return Remark Sub-user remarks
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Sub-user remarks
                     * @param Remark Sub-user remarks
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Whether or not the sub-user is allowed to log in to the console. 0: No; 1: Yes.
                     * @return ConsoleLogin Whether or not the sub-user is allowed to log in to the console. 0: No; 1: Yes.
                     */
                    uint64_t GetConsoleLogin() const;

                    /**
                     * 设置Whether or not the sub-user is allowed to log in to the console. 0: No; 1: Yes.
                     * @param ConsoleLogin Whether or not the sub-user is allowed to log in to the console. 0: No; 1: Yes.
                     */
                    void SetConsoleLogin(const uint64_t& _consoleLogin);

                    /**
                     * 判断参数 ConsoleLogin 是否已赋值
                     * @return ConsoleLogin 是否已赋值
                     */
                    bool ConsoleLoginHasBeenSet() const;

                    /**
                     * 获取Sub-user's console login password. If no password rules have been set, the password must have a minimum of 8 characters containing uppercase letters, lowercase letters, digits, and special characters by default. This parameter will be valid only when the sub-user is allowed to log in to the console. If it is not specified and console login is allowed, the system will automatically generate a random 32-character password that contains uppercase letters, lowercase letters, digits, and special characters.
                     * @return Password Sub-user's console login password. If no password rules have been set, the password must have a minimum of 8 characters containing uppercase letters, lowercase letters, digits, and special characters by default. This parameter will be valid only when the sub-user is allowed to log in to the console. If it is not specified and console login is allowed, the system will automatically generate a random 32-character password that contains uppercase letters, lowercase letters, digits, and special characters.
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Sub-user's console login password. If no password rules have been set, the password must have a minimum of 8 characters containing uppercase letters, lowercase letters, digits, and special characters by default. This parameter will be valid only when the sub-user is allowed to log in to the console. If it is not specified and console login is allowed, the system will automatically generate a random 32-character password that contains uppercase letters, lowercase letters, digits, and special characters.
                     * @param Password Sub-user's console login password. If no password rules have been set, the password must have a minimum of 8 characters containing uppercase letters, lowercase letters, digits, and special characters by default. This parameter will be valid only when the sub-user is allowed to log in to the console. If it is not specified and console login is allowed, the system will automatically generate a random 32-character password that contains uppercase letters, lowercase letters, digits, and special characters.
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取If the sub-user needs to reset their password when they next log in to the console. 0: No; 1: Yes.
                     * @return NeedResetPassword If the sub-user needs to reset their password when they next log in to the console. 0: No; 1: Yes.
                     */
                    uint64_t GetNeedResetPassword() const;

                    /**
                     * 设置If the sub-user needs to reset their password when they next log in to the console. 0: No; 1: Yes.
                     * @param NeedResetPassword If the sub-user needs to reset their password when they next log in to the console. 0: No; 1: Yes.
                     */
                    void SetNeedResetPassword(const uint64_t& _needResetPassword);

                    /**
                     * 判断参数 NeedResetPassword 是否已赋值
                     * @return NeedResetPassword 是否已赋值
                     */
                    bool NeedResetPasswordHasBeenSet() const;

                    /**
                     * 获取Mobile number
                     * @return PhoneNum Mobile number
                     */
                    std::string GetPhoneNum() const;

                    /**
                     * 设置Mobile number
                     * @param PhoneNum Mobile number
                     */
                    void SetPhoneNum(const std::string& _phoneNum);

                    /**
                     * 判断参数 PhoneNum 是否已赋值
                     * @return PhoneNum 是否已赋值
                     */
                    bool PhoneNumHasBeenSet() const;

                    /**
                     * 获取Country/Area Code
                     * @return CountryCode Country/Area Code
                     */
                    std::string GetCountryCode() const;

                    /**
                     * 设置Country/Area Code
                     * @param CountryCode Country/Area Code
                     */
                    void SetCountryCode(const std::string& _countryCode);

                    /**
                     * 判断参数 CountryCode 是否已赋值
                     * @return CountryCode 是否已赋值
                     */
                    bool CountryCodeHasBeenSet() const;

                    /**
                     * 获取Email
                     * @return Email Email
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置Email
                     * @param Email Email
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     */
                    bool EmailHasBeenSet() const;

                private:

                    /**
                     * Sub-user username
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Sub-user remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Whether or not the sub-user is allowed to log in to the console. 0: No; 1: Yes.
                     */
                    uint64_t m_consoleLogin;
                    bool m_consoleLoginHasBeenSet;

                    /**
                     * Sub-user's console login password. If no password rules have been set, the password must have a minimum of 8 characters containing uppercase letters, lowercase letters, digits, and special characters by default. This parameter will be valid only when the sub-user is allowed to log in to the console. If it is not specified and console login is allowed, the system will automatically generate a random 32-character password that contains uppercase letters, lowercase letters, digits, and special characters.
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * If the sub-user needs to reset their password when they next log in to the console. 0: No; 1: Yes.
                     */
                    uint64_t m_needResetPassword;
                    bool m_needResetPasswordHasBeenSet;

                    /**
                     * Mobile number
                     */
                    std::string m_phoneNum;
                    bool m_phoneNumHasBeenSet;

                    /**
                     * Country/Area Code
                     */
                    std::string m_countryCode;
                    bool m_countryCodeHasBeenSet;

                    /**
                     * Email
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_UPDATEUSERREQUEST_H_
